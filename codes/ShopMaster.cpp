void __fastcall ShopMaster___ctor(ShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FB746 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ShopMaster__ShopEntity__int___ctor__, method);
    byte_40FB746 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    41,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_ShopMaster__ShopEntity__int___ctor__);
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Collections_Generic_List_int__o *v15; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  EventDetailEntity_o *Entity; // x0

  if ( (byte_40FB74F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FB74F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list
    || (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
        v15 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v11,
                                                          v12,
                                                          v13,
                                                          v14),
        System_Collections_Generic_List_int____ctor(
          v15,
          (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
    || (Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          MasterData_WarQuestSelectionMaster,
                                          eventId,
                                          (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__)) == 0LL )
  {
    sub_B170D4();
  }
  return EventDetailEntity__IsClosePurchaseShop(Entity, 0LL);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v13; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v15; // x10

  if ( (byte_40FB75A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&ShopEntity_TypeInfo, v8);
    byte_40FB75A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_B170D4();
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v11 = Count;
  v12 = 0;
  while ( 1 )
  {
    v13 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v13 )
      goto LABEL_15;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v13,
             v12,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Item )
      goto LABEL_15;
    v15 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v15
      || (ShopEntity_c *)Item->klass->_2.typeHierarchy[v15 - 1] != ShopEntity_TypeInfo )
    {
      goto LABEL_15;
    }
    if ( LODWORD(Item[1].monitor) == eventId && HIDWORD(Item[4].klass) == payType )
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
  int64_t Time; // x0
  int64_t v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v32; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0
  ShopEntity_o *v39; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v40; // x24
  __int64 v41; // x9
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  unsigned __int64 v43; // x10
  int32_t *v44; // x11
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  ShopMaster___c_c *v50; // x0
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x20
  Il2CppObject *v53; // x21
  struct ShopMaster___c_StaticFields *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7

  if ( (byte_40FB747 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&purchaseType);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_B16FFC(&Method_System_Comparison_ShopEntity___ctor__, v8);
    sub_B16FFC(&System_Comparison_ShopEntity__TypeInfo, v9);
    sub_B16FFC(&System_IDisposable_TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v16);
    sub_B16FFC(&System_Collections_Generic_List_ShopEntity__TypeInfo, v17);
    sub_B16FFC(&NetworkManager_TypeInfo, v18);
    sub_B16FFC(&ShopEntity_TypeInfo, v19);
    sub_B16FFC(&Method_ShopMaster___c__GetEnableEntitiyList_b__1_0__, v20);
    sub_B16FFC(&ShopMaster___c_TypeInfo, v21);
    byte_40FB747 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_50;
  v23 = Time;
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
    (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                                                                  v24,
                                                                                                  v25,
                                                                                                  v26,
                                                                                                  v27);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_50;
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
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v38 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v39 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
                            Enumerator,
                            *(_QWORD *)(v38 + 8));
    v40 = (EventMissionProgressRequest_Argument_ProgressData_o *)v39;
    if ( v39 )
    {
      v41 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v39->klass->_2.bitflags2 + 1) < (unsigned int)v41
        || (ShopEntity_c *)v39->klass->_2.typeHierarchy[v41 - 1] != ShopEntity_TypeInfo )
      {
        sub_B173C8(v39);
        goto LABEL_50;
      }
      if ( !v39->fields.eventId
        && (purchaseType < 1 || v39->fields.purchaseType == purchaseType)
        && v39->fields.shopType == shopType
        && ShopEntity__IsEnable(v39, v23, 0LL)
        && !ShopEntity__IsHiddenInCaseOfBuying((ShopEntity_o *)v40, 0LL) )
      {
        if ( !v28 )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v28,
          v40,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
      }
    }
  }
  v42 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v43 = 0LL;
    v44 = &v42->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      ++v43;
      v44 += 4;
      if ( v43 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v45 = (__int64)&v42->vtable[*v44].method;
  }
  else
  {
LABEL_37:
    v45 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(Enumerator, *(_QWORD *)(v45 + 8));
  v50 = ShopMaster___c_TypeInfo;
  if ( (BYTE3(ShopMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    v50 = ShopMaster___c_TypeInfo;
  }
  static_fields = v50->static_fields;
  _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v50->vtable._0_Equals.methodPtr) & 4) != 0 && !v50->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v50);
      static_fields = ShopMaster___c_TypeInfo->static_fields;
    }
    v53 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_ShopEntity__TypeInfo,
                                                                          v46,
                                                                          v47,
                                                                          v48,
                                                                          v49);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_0,
      v53,
      Method_ShopMaster___c__GetEnableEntitiyList_b__1_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_ShopEntity___ctor__);
    v54 = ShopMaster___c_TypeInfo->static_fields;
    v54->__9__1_0 = (struct System_Comparison_ShopEntity__o *)_9__1_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v54->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
  }
  if ( !v28 )
LABEL_50:
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v28,
    (System_Comparison_T__o *)_9__1_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v28,
                               (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *__fastcall ShopMaster__GetEnableEntitiyList_27856056(
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
  int64_t Time; // x0
  int64_t v25; // x25
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v34; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0
  ShopEntity_o *v41; // x0
  ShopEntity_o *v42; // x26
  __int64 v43; // x9
  const MethodInfo *v44; // x2
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  unsigned __int64 v46; // x10
  int32_t *v47; // x11
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  ShopMaster___c_c *v53; // x0
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v56; // x21
  struct ShopMaster___c_StaticFields *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  ShopMaster_o *v65; // [xsp+0h] [xbp-60h]

  if ( (byte_40FB748 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&purchaseType);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v9);
    sub_B16FFC(&Method_System_Comparison_ShopEntity___ctor__, v10);
    sub_B16FFC(&System_Comparison_ShopEntity__TypeInfo, v11);
    sub_B16FFC(&System_IDisposable_TypeInfo, v12);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity__Add__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v18);
    sub_B16FFC(&System_Collections_Generic_List_ShopEntity__TypeInfo, v19);
    sub_B16FFC(&NetworkManager_TypeInfo, v20);
    sub_B16FFC(&ShopEntity_TypeInfo, v21);
    sub_B16FFC(&Method_ShopMaster___c__GetEnableEntitiyList_b__2_0__, v22);
    sub_B16FFC(&ShopMaster___c_TypeInfo, v23);
    byte_40FB748 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_51;
  v25 = Time;
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
    (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                                                                  v26,
                                                                                                  v27,
                                                                                                  v28,
                                                                                                  v29);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_51;
  v65 = this;
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
      v34 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v34;
        p_offset += 4;
        if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v37 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v38 = 0LL;
      v39 = &v37->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v39 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v38;
        v39 += 4;
        if ( v38 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v40 = (__int64)&v37->vtable[*v39].method;
    }
    else
    {
LABEL_20:
      v40 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v41 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
                            Enumerator,
                            *(_QWORD *)(v40 + 8));
    v42 = v41;
    if ( v41 )
    {
      v43 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v41->klass->_2.bitflags2 + 1) < (unsigned int)v43
        || (ShopEntity_c *)v41->klass->_2.typeHierarchy[v43 - 1] != ShopEntity_TypeInfo )
      {
        sub_B173C8(v41);
        goto LABEL_51;
      }
      if ( ShopEntity__checkFlag(v41, flag, 0LL)
        && (purchaseType < 1 || v42->fields.purchaseType == purchaseType)
        && v42->fields.shopType == shopType
        && ShopEntity__IsEnable(v42, v25, 0LL)
        && !ShopEntity__IsHiddenInCaseOfBuying(v42, 0LL)
        && !ShopMaster__IsOpenPurchaseCloseShop(v65, v42, v44) )
      {
        if ( !v30 )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v30,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v42,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
      }
    }
  }
  v45 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v46 = 0LL;
    v47 = &v45->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      ++v46;
      v47 += 4;
      if ( v46 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_38;
    }
    v48 = (__int64)&v45->vtable[*v47].method;
  }
  else
  {
LABEL_38:
    v48 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(Enumerator, *(_QWORD *)(v48 + 8));
  v53 = ShopMaster___c_TypeInfo;
  if ( (BYTE3(ShopMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    v53 = ShopMaster___c_TypeInfo;
  }
  static_fields = v53->static_fields;
  _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53);
      static_fields = ShopMaster___c_TypeInfo->static_fields;
    }
    v56 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_ShopEntity__TypeInfo,
                                                                          v49,
                                                                          v50,
                                                                          v51,
                                                                          v52);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v56,
      Method_ShopMaster___c__GetEnableEntitiyList_b__2_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_ShopEntity___ctor__);
    v57 = ShopMaster___c_TypeInfo->static_fields;
    v57->__9__2_0 = (struct System_Comparison_ShopEntity__o *)_9__2_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v57->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
  }
  if ( !v30 )
LABEL_51:
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v30,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v30,
                               (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *__fastcall ShopMaster__GetEnableEntitiyList_27857608(
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
  int64_t Time; // x0
  int64_t v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v32; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0
  ShopEntity_o *v39; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v40; // x24
  __int64 v41; // x9
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  unsigned __int64 v43; // x10
  int32_t *v44; // x11
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  ShopMaster___c_c *v50; // x0
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v53; // x21
  struct ShopMaster___c_StaticFields *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7

  if ( (byte_40FB749 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&purchaseType);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_B16FFC(&Method_System_Comparison_ShopEntity___ctor__, v8);
    sub_B16FFC(&System_Comparison_ShopEntity__TypeInfo, v9);
    sub_B16FFC(&System_IDisposable_TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v16);
    sub_B16FFC(&System_Collections_Generic_List_ShopEntity__TypeInfo, v17);
    sub_B16FFC(&NetworkManager_TypeInfo, v18);
    sub_B16FFC(&ShopEntity_TypeInfo, v19);
    sub_B16FFC(&Method_ShopMaster___c__GetEnableEntitiyList_b__3_0__, v20);
    sub_B16FFC(&ShopMaster___c_TypeInfo, v21);
    byte_40FB749 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_50;
  v23 = Time;
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
    (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                                                                  v24,
                                                                                                  v25,
                                                                                                  v26,
                                                                                                  v27);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_50;
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
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v38 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v39 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
                            Enumerator,
                            *(_QWORD *)(v38 + 8));
    v40 = (EventMissionProgressRequest_Argument_ProgressData_o *)v39;
    if ( v39 )
    {
      v41 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v39->klass->_2.bitflags2 + 1) < (unsigned int)v41
        || (ShopEntity_c *)v39->klass->_2.typeHierarchy[v41 - 1] != ShopEntity_TypeInfo )
      {
        sub_B173C8(v39);
        goto LABEL_50;
      }
      if ( !v39->fields.eventId
        && (purchaseType < 1 || v39->fields.purchaseType == purchaseType)
        && v39->fields.payType == payType
        && ShopEntity__IsEnable(v39, v23, 0LL)
        && !ShopEntity__IsHiddenInCaseOfBuying((ShopEntity_o *)v40, 0LL) )
      {
        if ( !v28 )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v28,
          v40,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
      }
    }
  }
  v42 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v43 = 0LL;
    v44 = &v42->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      ++v43;
      v44 += 4;
      if ( v43 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v45 = (__int64)&v42->vtable[*v44].method;
  }
  else
  {
LABEL_37:
    v45 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(Enumerator, *(_QWORD *)(v45 + 8));
  v50 = ShopMaster___c_TypeInfo;
  if ( (BYTE3(ShopMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    v50 = ShopMaster___c_TypeInfo;
  }
  static_fields = v50->static_fields;
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v50->vtable._0_Equals.methodPtr) & 4) != 0 && !v50->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v50);
      static_fields = ShopMaster___c_TypeInfo->static_fields;
    }
    v53 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_ShopEntity__TypeInfo,
                                                                          v46,
                                                                          v47,
                                                                          v48,
                                                                          v49);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v53,
      Method_ShopMaster___c__GetEnableEntitiyList_b__3_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_ShopEntity___ctor__);
    v54 = ShopMaster___c_TypeInfo->static_fields;
    v54->__9__3_0 = (struct System_Comparison_ShopEntity__o *)_9__3_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v54->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
  }
  if ( !v28 )
LABEL_50:
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v28,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v28,
                               (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  int32_t v29; // w23
  int32_t v30; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v31; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v33; // x25
  __int64 v34; // x10
  ShopMaster___c_c *v35; // x0
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x19
  Il2CppObject *v38; // x20
  struct ShopMaster___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7

  if ( (byte_40FB74C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&Method_System_Comparison_ShopEntity___ctor__, v6);
    sub_B16FFC(&System_Comparison_ShopEntity__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_ShopEntity__TypeInfo, v12);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    sub_B16FFC(&ShopEntity_TypeInfo, v14);
    sub_B16FFC(&Method_ShopMaster___c__GetEnableEventEntitiyList_b__6_0__, v15);
    sub_B16FFC(&ShopMaster___c_TypeInfo, v16);
    byte_40FB74C = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20,
                                                                                                  v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v29 = Count;
    v30 = 0;
    while ( 1 )
    {
      v31 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v31 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v31,
               v30,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v33 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v34 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v34
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[v34 - 1] == ShopEntity_TypeInfo
          && LODWORD(Item[1].monitor) == eventId
          && ShopEntity__IsEnable((ShopEntity_o *)Item, Time, 0LL) )
        {
          if ( !v22 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v22,
            v33,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
        }
      }
      if ( ++v30 >= v29 )
        goto LABEL_18;
    }
LABEL_28:
    sub_B170D4();
  }
LABEL_18:
  v35 = ShopMaster___c_TypeInfo;
  if ( (BYTE3(ShopMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    v35 = ShopMaster___c_TypeInfo;
  }
  static_fields = v35->static_fields;
  _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      static_fields = ShopMaster___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_ShopEntity__TypeInfo,
                                                                          v25,
                                                                          v26,
                                                                          v27,
                                                                          v28);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__6_0,
      v38,
      Method_ShopMaster___c__GetEnableEventEntitiyList_b__6_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_ShopEntity___ctor__);
    v39 = ShopMaster___c_TypeInfo->static_fields;
    v39->__9__6_0 = (struct System_Comparison_ShopEntity__o *)_9__6_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v39->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
  if ( !v22 )
    goto LABEL_28;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v22,
    (System_Comparison_T__o *)_9__6_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v22,
                               (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  int32_t v31; // w24
  int32_t v32; // w25
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v33; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v35; // x26
  __int64 v36; // x10
  ShopMaster___c_c *v37; // x0
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_0; // x19
  Il2CppObject *v40; // x20
  struct ShopMaster___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7

  if ( (byte_40FB74D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Comparison_ShopEntity___ctor__, v8);
    sub_B16FFC(&System_Comparison_ShopEntity__TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_ShopEntity__TypeInfo, v14);
    sub_B16FFC(&NetworkManager_TypeInfo, v15);
    sub_B16FFC(&ShopEntity_TypeInfo, v16);
    sub_B16FFC(&Method_ShopMaster___c__GetEnableEventEntityList_b__7_0__, v17);
    sub_B16FFC(&ShopMaster___c_TypeInfo, v18);
    byte_40FB74D = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v31 = Count;
    v32 = 0;
    while ( 1 )
    {
      v33 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v33 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v33,
               v32,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v35 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v36 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v36
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[v36 - 1] == ShopEntity_TypeInfo
          && LODWORD(Item[1].monitor) == eventId
          && LODWORD(Item[2].monitor) == slot
          && ShopEntity__IsEnable((ShopEntity_o *)Item, Time, 0LL)
          && !ShopEntity__IsHiddenInCaseOfBuyingShopId((ShopEntity_o *)v35, 0LL) )
        {
          if ( !v24 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v24,
            v35,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
        }
      }
      if ( ++v32 >= v31 )
        goto LABEL_20;
    }
LABEL_30:
    sub_B170D4();
  }
LABEL_20:
  v37 = ShopMaster___c_TypeInfo;
  if ( (BYTE3(ShopMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    v37 = ShopMaster___c_TypeInfo;
  }
  static_fields = v37->static_fields;
  _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      static_fields = ShopMaster___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_ShopEntity__TypeInfo,
                                                                          v27,
                                                                          v28,
                                                                          v29,
                                                                          v30);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__7_0,
      v40,
      Method_ShopMaster___c__GetEnableEventEntityList_b__7_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_ShopEntity___ctor__);
    v41 = ShopMaster___c_TypeInfo->static_fields;
    v41->__9__7_0 = (struct System_Comparison_ShopEntity__o *)_9__7_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v41->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  if ( !v24 )
    goto LABEL_30;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v24,
    (System_Comparison_T__o *)_9__7_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                               (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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
  int64_t Time; // x0
  int64_t v13; // x23
  int32_t Count; // w0
  int32_t v15; // w24
  int32_t v16; // w25
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v19; // x10
  int64_t klass; // x8
  int64_t monitor; // x8

  if ( (byte_40FB750 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, openedAt);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B16FFC(&NetworkManager_TypeInfo, v10);
    sub_B16FFC(&ShopEntity_TypeInfo, v11);
    byte_40FB750 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  *openedAt = -1LL;
  *closedAt = -1LL;
  if ( !this->fields.list )
    goto LABEL_26;
  v13 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v16,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v19 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v19
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[v19 - 1] == ShopEntity_TypeInfo
          && LODWORD(Item[1].monitor) == eventId )
        {
          klass = (int64_t)Item[8].klass;
          if ( klass <= v13 )
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
      if ( ++v16 >= v15 )
        return (*openedAt & 0x8000000000000000LL) == 0 && *closedAt >= 0;
    }
LABEL_26:
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_int__o *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Collections_Generic_List_int__o *v29; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  const MethodInfo *v32; // x2
  int32_t v33; // w24
  int32_t i; // w25
  WarEntity_o *v35; // x0
  __int64 coordinate; // x8
  int32_t klass_high; // w1
  System_Collections_Generic_List_int__o *v38; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v39; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v41; // x26
  __int64 v42; // x10
  int size; // w8
  unsigned __int64 v44; // x23
  signed __int64 v45; // x24
  int32_t v46; // w22
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FB74E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Sort__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v12);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B16FFC(&NetworkManager_TypeInfo, v14);
    sub_B16FFC(&ShopEntity_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_40FB74E = 1;
  }
  entity = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  v24 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v20,
                                                    v21,
                                                    v22,
                                                    v23);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  v29 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v25,
                                                    v26,
                                                    v27,
                                                    v28);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_48;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v33 = Count;
    for ( i = 0; i < v33; ++i )
    {
      v39 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v39 )
        goto LABEL_48;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v39,
               i,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v41 = Item;
        v42 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v42
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[v42 - 1] == ShopEntity_TypeInfo
          && LODWORD(Item[1].monitor)
          && ShopEntity__IsEnable((ShopEntity_o *)Item, Time, 0LL) )
        {
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_48;
          v35 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                  MasterData_WarQuestSelectionMaster,
                  (int32_t)v41[1].monitor,
                  (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( !v35 )
            goto LABEL_48;
          coordinate = (__int64)v35->fields.coordinate;
          if ( coordinate >= 1 && coordinate >= Time && v35->fields.targetId <= Time )
          {
            if ( !v24 )
              goto LABEL_48;
            if ( !System_Collections_Generic_List_int___Contains(
                    v24,
                    HIDWORD(v41[1].klass),
                    (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
            {
              if ( ShopMaster__CheckBuyAfterCloseShop(this, (int32_t)v41[1].monitor, v32) )
              {
                klass_high = HIDWORD(v41[1].klass);
                v38 = v24;
              }
              else
              {
                if ( !v29 )
                  goto LABEL_48;
                if ( System_Collections_Generic_List_int___Contains(
                       v29,
                       (int32_t)v41[1].monitor,
                       (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
                {
                  continue;
                }
                klass_high = (int32_t)v41[1].monitor;
                v38 = v29;
              }
              System_Collections_Generic_List_int___Add(
                v38,
                klass_high,
                (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
            }
          }
        }
      }
    }
  }
  if ( v24 )
  {
    size = v24->fields._size;
    if ( size >= 1 )
    {
      v44 = 0LL;
      v45 = size;
      while ( 1 )
      {
        if ( v44 >= (unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v46 = v24->fields._items->m_Items[v44 + 1];
        if ( !ShopMaster__IsPurchaseCloseEventShopItem(this, v46, v32)
          && DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
               &entity,
               v46,
               (const MethodInfo_266F3E4 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__) )
        {
          break;
        }
        if ( (__int64)++v44 >= v45 )
          goto LABEL_39;
        size = v24->fields._size;
      }
      if ( entity )
        return (int32_t)entity->fields.age;
LABEL_48:
      sub_B170D4();
    }
  }
LABEL_39:
  if ( !v29 || v29->fields._size < 1 )
    return 0;
  System_Collections_Generic_List_int___Sort(
    v29,
    (const MethodInfo_2F12410 *)Method_System_Collections_Generic_List_int__Sort__);
  if ( !v29->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  return v29->fields._items->m_Items[1];
}


ShopEntity_o *__fastcall ShopMaster__GetEntityOfFragmentsShop(ShopMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  ShopEntity_o *v17; // x0
  ShopEntity_o *v18; // x20
  __int64 v19; // x9
  int v20; // w8
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  int v26; // [xsp+0h] [xbp-40h]

  if ( (byte_40FB759 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B16FFC(&System_IDisposable_TypeInfo, v3);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v4);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_B16FFC(&ShopEntity_TypeInfo, v6);
    byte_40FB759 = 1;
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
      v10 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v10;
        p_offset += 4;
        if ( v10 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v14;
        v15 += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_16:
      v16 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v17 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                            Enumerator,
                            *(_QWORD *)(v16 + 8));
    v18 = v17;
    if ( !v17 )
      goto LABEL_35;
    v19 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v19
      || (ShopEntity_c *)v17->klass->_2.typeHierarchy[v19 - 1] != ShopEntity_TypeInfo )
    {
      sub_B173C8(v17);
LABEL_35:
      sub_B170D4();
    }
    if ( v17->fields.shopType == 6 && v17->fields.payType == 8 )
    {
      v20 = 70;
      goto LABEL_25;
    }
  }
  v18 = 0LL;
  v20 = 68;
LABEL_25:
  v26 = v20;
  v21 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      ++v22;
      v23 += 4;
      if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v24 = (__int64)&v21->vtable[*v23].method;
  }
  else
  {
LABEL_29:
    v24 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  if ( v26 == 68 )
    return 0LL;
  return v18;
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *__fastcall ShopMaster__GetEventEntitiyList(
        ShopMaster_o *this,
        int32_t eventId,
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  int32_t v25; // w22
  int32_t v26; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v27; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v29; // x10
  ShopMaster___c_c *v30; // x0
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v33; // x21
  struct ShopMaster___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_40FB74A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Comparison_ShopEntity___ctor__, v8);
    sub_B16FFC(&System_Comparison_ShopEntity__TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_ShopEntity__TypeInfo, v14);
    sub_B16FFC(&ShopEntity_TypeInfo, v15);
    sub_B16FFC(&Method_ShopMaster___c__GetEventEntitiyList_b__4_0__, v16);
    sub_B16FFC(&ShopMaster___c_TypeInfo, v17);
    byte_40FB74A = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v25 = Count;
    v26 = 0;
    while ( 1 )
    {
      v27 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v27 )
        break;
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v27,
                                                                      v26,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v21 = Item;
        v29 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v29
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[v29 - 1] == ShopEntity_TypeInfo
          && Item->fields.targetId == eventId )
        {
          if ( !v18 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v18,
            Item,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
        }
      }
      if ( ++v26 >= v25 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B170D4();
  }
LABEL_14:
  v30 = ShopMaster___c_TypeInfo;
  if ( (BYTE3(ShopMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    v30 = ShopMaster___c_TypeInfo;
  }
  static_fields = v30->static_fields;
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      static_fields = ShopMaster___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_ShopEntity__TypeInfo,
                                                                          v21,
                                                                          v22,
                                                                          v23,
                                                                          v24);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v33,
      Method_ShopMaster___c__GetEventEntitiyList_b__4_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_ShopEntity___ctor__);
    v34 = ShopMaster___c_TypeInfo->static_fields;
    v34->__9__4_0 = (struct System_Comparison_ShopEntity__o *)_9__4_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v34->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  if ( !v18 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v18,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                               (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v32; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v35; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  __int64 IsHideItem; // x0
  __int64 v43; // x2
  const MethodInfo *v44; // x3
  __int64 v45; // x23
  ShopEntity_c *v46; // x1
  __int64 v47; // x9
  __int64 v48; // x8
  __int64 v49; // x9
  unsigned __int64 v50; // x25
  signed __int64 v51; // x26
  int size; // w8
  unsigned int v53; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v54; // x8
  __int64 v55; // x9
  __int64 v56; // x8
  WarEntity_o *Entity; // x0
  System_Int32_array *v58; // x20
  System_Collections_Generic_IEnumerator_T__c *v59; // x8
  unsigned __int64 v60; // x10
  int32_t *v61; // x11
  __int64 v62; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  ShopMaster___c_c *v67; // x0
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__11_0; // x20
  Il2CppObject *v70; // x21
  struct ShopMaster___c_StaticFields *v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  int v78; // w21
  __int64 v79; // x2
  __int64 v80; // x0
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v84; // x8

  if ( (byte_40FB751 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_B16FFC(&Method_System_Comparison_ItemEntity___ctor__, v6);
    sub_B16FFC(&System_Comparison_ItemEntity__TypeInfo, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v8);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    sub_B16FFC(&System_IDisposable_TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_B16FFC(&int___TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemEntity__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemEntity__Sort__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemEntity__get_Item__, v18);
    sub_B16FFC(&System_Collections_Generic_List_ItemEntity__TypeInfo, v19);
    sub_B16FFC(&ShopEntity_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B16FFC(&Method_ShopMaster___c__GetEventItemList_b__11_0__, v22);
    sub_B16FFC(&ShopMaster___c_TypeInfo, v23);
    byte_40FB751 = 1;
  }
  if ( eventId < 1 )
    return 0LL;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_83;
  if ( !System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ItemEntity__TypeInfo,
                                                                                                  v27,
                                                                                                  v28,
                                                                                                  v29,
                                                                                                  v30);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  v32 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !v32 )
    goto LABEL_83;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 v32,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v35 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v35;
        p_offset += 4;
        if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v38 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v40 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v39;
        v40 += 4;
        if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v41 = (__int64)&v38->vtable[*v40].method;
    }
    else
    {
LABEL_20:
      v41 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    IsHideItem = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
                   Enumerator,
                   *(_QWORD *)(v41 + 8));
    v45 = IsHideItem;
    if ( !IsHideItem )
      sub_B170D4();
    v46 = ShopEntity_TypeInfo;
    v47 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)IsHideItem + 300LL) < (unsigned int)v47
      || *(ShopEntity_c **)(*(_QWORD *)(*(_QWORD *)IsHideItem + 200LL) + 8 * v47 - 8) != ShopEntity_TypeInfo )
    {
      sub_B173C8(IsHideItem);
LABEL_80:
      sub_B170D4();
    }
    if ( *(_DWORD *)(IsHideItem + 24) == eventId )
    {
      v48 = *(_QWORD *)(IsHideItem + 32);
      if ( !v48 )
        sub_B170D4();
      v49 = *(_QWORD *)(v48 + 24);
      if ( (int)v49 >= 1 )
      {
        v50 = 0LL;
        v51 = (int)v49;
        while ( 1 )
        {
          if ( v50 >= *(unsigned int *)(v48 + 24) )
          {
            sub_B17100(IsHideItem, v46, v43);
            sub_B170A0();
          }
          v43 = *(unsigned int *)(v48 + 4 * v50 + 32);
          if ( (int)v43 >= 1 )
          {
            IsHideItem = ShopMaster__IsHideItem((ShopMaster_o *)IsHideItem, eventId, v43, v44);
            if ( (IsHideItem & 1) == 0 )
            {
              if ( !v31 )
                sub_B170D4();
              size = v31->fields._size;
              if ( size < 1 )
              {
LABEL_42:
                v56 = *(_QWORD *)(v45 + 32);
                if ( !v56 )
                  goto LABEL_80;
                if ( v50 >= *(unsigned int *)(v56 + 24) )
                {
                  sub_B17100(IsHideItem, v46, v43);
                  sub_B170A0();
                }
                if ( !MasterData_WarQuestSelectionMaster )
                  sub_B170D4();
                Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           MasterData_WarQuestSelectionMaster,
                           *(_DWORD *)(v56 + 4 * v50 + 32),
                           (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v31,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
              }
              else
              {
                v53 = 0;
                while ( 1 )
                {
                  if ( size <= v53 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                  v54 = v31->fields._items->m_Items[v53];
                  if ( !v54 )
                    sub_B170D4();
                  v55 = *(_QWORD *)(v45 + 32);
                  if ( !v55 )
                    sub_B170D4();
                  if ( v50 >= *(unsigned int *)(v55 + 24) )
                  {
                    sub_B17100(IsHideItem, v46, v43);
                    sub_B170A0();
                  }
                  if ( v54->fields.missionTargetId == *(_DWORD *)(v55 + 4 * v50 + 32) )
                    break;
                  size = v31->fields._size;
                  if ( (int)++v53 >= size )
                    goto LABEL_42;
                }
              }
            }
          }
          if ( (__int64)++v50 >= v51 )
            break;
          v48 = *(_QWORD *)(v45 + 32);
          if ( !v48 )
            sub_B170D4();
        }
      }
    }
  }
  v59 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v60 = 0LL;
    v61 = &v59->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
    {
      ++v60;
      v61 += 4;
      if ( v60 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_54;
    }
    v62 = (__int64)&v59->vtable[*v61].method;
  }
  else
  {
LABEL_54:
    v62 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v62)(Enumerator, *(_QWORD *)(v62 + 8));
  v67 = ShopMaster___c_TypeInfo;
  if ( (BYTE3(ShopMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    v67 = ShopMaster___c_TypeInfo;
  }
  static_fields = v67->static_fields;
  _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( (BYTE3(v67->vtable._0_Equals.methodPtr) & 4) != 0 && !v67->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v67);
      static_fields = ShopMaster___c_TypeInfo->static_fields;
    }
    v70 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_ItemEntity__TypeInfo,
                                                                           v63,
                                                                           v64,
                                                                           v65,
                                                                           v66);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__11_0,
      v70,
      Method_ShopMaster___c__GetEventItemList_b__11_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_ItemEntity___ctor__);
    v71 = ShopMaster___c_TypeInfo->static_fields;
    v71->__9__11_0 = (struct System_Comparison_ItemEntity__o *)_9__11_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v71->__9__11_0,
      (System_Int32_array **)_9__11_0,
      v72,
      v73,
      v74,
      v75,
      v76,
      v77);
  }
  if ( !v31 )
LABEL_83:
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v31,
    (System_Comparison_T__o *)_9__11_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  v78 = v31->fields._size;
  v80 = sub_B17014(int___TypeInfo, (unsigned int)v78, v79);
  v58 = (System_Int32_array *)v80;
  if ( v78 >= 1 )
  {
    v83 = 0LL;
    while ( 1 )
    {
      if ( v31->fields._size <= (unsigned int)v83 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v84 = v31->fields._items->m_Items[v83];
      if ( !v84 || !v80 )
        break;
      if ( (unsigned int)v83 >= *(_DWORD *)(v80 + 24) )
      {
        sub_B17100(v80, v81, v82);
        sub_B170A0();
      }
      *(_DWORD *)(v80 + 32 + 4 * v83++) = v84->fields.missionTargetId;
      if ( (int)v83 >= v78 )
        return v58;
    }
    goto LABEL_83;
  }
  return v58;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopMaster__GetEventShopBaseShopId(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v9; // x2
  ShopEntity_array *EnableEventEntitiyList; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x8
  ShopEntity_o *v14; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FB756 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FB756 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_15;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         eventId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      goto LABEL_15;
    if ( !EventDetailEntity__IsClosePurchaseShop((EventDetailEntity_o *)entity, 0LL) )
      goto LABEL_13;
  }
  EnableEventEntitiyList = ShopMaster__GetEnableEventEntitiyList(this, eventId, v9);
  if ( !EnableEventEntitiyList )
    return (int)EnableEventEntitiyList;
  v13 = *(_QWORD *)&EnableEventEntitiyList->max_length;
  if ( !v13 )
  {
LABEL_13:
    LODWORD(EnableEventEntitiyList) = 0;
    return (int)EnableEventEntitiyList;
  }
  if ( !(_DWORD)v13 )
  {
    sub_B17100(EnableEventEntitiyList, v11, v12);
    sub_B170A0();
  }
  v14 = EnableEventEntitiyList->m_Items[0];
  if ( !v14 )
LABEL_15:
    sub_B170D4();
  LODWORD(EnableEventEntitiyList) = v14->fields.baseShopId;
  return (int)EnableEventEntitiyList;
}


int32_t __fastcall ShopMaster__GetFragmentCountToExchangeForStone(ShopMaster_o *this, const MethodInfo *method)
{
  ShopEntity_o *EntityOfFragmentsShop; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  struct System_Int32_array *prices; // x8
  __int64 v6; // x9

  EntityOfFragmentsShop = ShopMaster__GetEntityOfFragmentsShop(this, method);
  if ( EntityOfFragmentsShop )
  {
    prices = EntityOfFragmentsShop->fields.prices;
    if ( !prices )
      sub_B170D4();
    v6 = *(_QWORD *)&prices->max_length;
    if ( v6 )
    {
      if ( !(_DWORD)v6 )
      {
        sub_B17100(EntityOfFragmentsShop, v3, v4);
        sub_B170A0();
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  int32_t v29; // w23
  int32_t v30; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v31; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v33; // x25
  __int64 v34; // x10
  ShopMaster___c_c *v35; // x0
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x19
  Il2CppObject *v38; // x20
  struct ShopMaster___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7

  if ( (byte_40FB74B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&Method_System_Comparison_ShopEntity___ctor__, v6);
    sub_B16FFC(&System_Comparison_ShopEntity__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_ShopEntity__TypeInfo, v12);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    sub_B16FFC(&ShopEntity_TypeInfo, v14);
    sub_B16FFC(&Method_ShopMaster___c__GetOpenedEventEntitiyList_b__5_0__, v15);
    sub_B16FFC(&ShopMaster___c_TypeInfo, v16);
    byte_40FB74B = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20,
                                                                                                  v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v29 = Count;
    v30 = 0;
    while ( 1 )
    {
      v31 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v31 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v31,
               v30,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v33 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v34 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v34
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[v34 - 1] == ShopEntity_TypeInfo
          && LODWORD(Item[1].monitor) == eventId
          && ShopEntity__IsOpened((ShopEntity_o *)Item, Time, 0LL) )
        {
          if ( !v22 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v22,
            v33,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
        }
      }
      if ( ++v30 >= v29 )
        goto LABEL_18;
    }
LABEL_28:
    sub_B170D4();
  }
LABEL_18:
  v35 = ShopMaster___c_TypeInfo;
  if ( (BYTE3(ShopMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopMaster___c_TypeInfo);
    v35 = ShopMaster___c_TypeInfo;
  }
  static_fields = v35->static_fields;
  _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      static_fields = ShopMaster___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_ShopEntity__TypeInfo,
                                                                          v25,
                                                                          v26,
                                                                          v27,
                                                                          v28);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v38,
      Method_ShopMaster___c__GetOpenedEventEntitiyList_b__5_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_ShopEntity___ctor__);
    v39 = ShopMaster___c_TypeInfo->static_fields;
    v39->__9__5_0 = (struct System_Comparison_ShopEntity__o *)_9__5_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v39->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
  if ( !v22 )
    goto LABEL_28;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v22,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v22,
                               (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v11; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v13; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v14; // x8

  if ( (byte_40FB758 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&ShopEntity_TypeInfo, v6);
    byte_40FB758 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B170D4();
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v9 = Count;
  v10 = 0;
  while ( 1 )
  {
    v11 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v11 )
      goto LABEL_17;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v11,
             v10,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Item )
      goto LABEL_17;
    v13 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v13
      || (ShopEntity_c *)Item->klass->_2.typeHierarchy[v13 - 1] != ShopEntity_TypeInfo )
    {
      goto LABEL_17;
    }
    v14 = (ShopEntity_c *)Item->klass->_2.typeHierarchy[*(&ShopEntity_TypeInfo->_2.bitflags2 + 1) - 1] == ShopEntity_TypeInfo
        ? Item
        : 0LL;
    if ( LODWORD(v14[1].monitor) == eventId )
      return 1;
    if ( ++v10 >= v9 )
      return 0;
  }
}


bool __fastcall ShopMaster__IsEnableEventShop_27843620(ShopMaster_o *this, const MethodInfo *method)
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
  UserShopMaster_o *v14; // x22
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int i; // w24
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  ShopEntity_o *v21; // x0
  ShopEntity_o *v22; // x23
  __int64 v23; // x9
  int64_t UserId; // x1
  UserShopEntity_o *EntityDefinitely; // x0
  const MethodInfo *v26; // x3
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v31; // w8
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0
  int v37; // [xsp+0h] [xbp-60h]

  if ( (byte_40FB75B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B16FFC(&Method_DataManager_GetMaster_ShopReleaseMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMaster_UserShopMaster___, v4);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&System_IDisposable_TypeInfo, v6);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&ShopEntity_TypeInfo, v10);
    byte_40FB75B = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ShopReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ShopReleaseMaster___);
  v13 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserShopMaster___);
  if ( !this->fields.list )
    sub_B170D4();
  v14 = (UserShopMaster_o *)v13;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  for ( i = 0; ; i |= ShopReleaseMaster__CondClearCheck(Master_WarQuestSelectionMaster, v22->fields.id, 1, v26) )
  {
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v28 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v28;
          p_offset += 4;
          if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_35;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_35:
        p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
      {
        v31 = 160;
        goto LABEL_39;
      }
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
            goto LABEL_16;
        }
        v20 = (__int64)&v17->vtable[*v19].method;
      }
      else
      {
LABEL_16:
        v20 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v21 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                              Enumerator,
                              *(_QWORD *)(v20 + 8));
      v22 = v21;
      if ( v21 )
      {
        v23 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v21->klass->_2.bitflags2 + 1) < (unsigned int)v23
          || (ShopEntity_c *)v21->klass->_2.typeHierarchy[v23 - 1] != ShopEntity_TypeInfo )
        {
          sub_B173C8(v21);
LABEL_50:
          sub_B170D4();
        }
        if ( v21->fields.shopType == 12 && ShopEntity__IsEnable(v21, Time, 0LL) )
          break;
      }
    }
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v14 )
      goto LABEL_50;
    EntityDefinitely = UserShopMaster__GetEntityDefinitely(v14, UserId, v22->fields.id, 0LL);
    if ( EntityDefinitely )
    {
      if ( EntityDefinitely->fields.num >= v22->fields.limitNum )
        break;
    }
    if ( !Master_WarQuestSelectionMaster )
      sub_B170D4();
  }
  v31 = 162;
LABEL_39:
  v37 = v31;
  v32 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      ++v33;
      v34 += 4;
      if ( v33 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_43;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_43:
    v35 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  if ( v37 != 160 )
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
  WebViewManager_o *Instance; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_Dictionary_int__int__o *v24; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v26; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v27; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v29; // x23
  __int64 v30; // x10
  WebViewManager_o *v31; // x0
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x24
  int64_t UserId; // x0
  UserShopEntity_o *EntityDefinitely; // x0
  int32_t num; // w24
  bool v36; // w0
  int32_t klass_high; // w1
  int32_t v38; // w8
  const MethodInfo_2DDCFB4 *v39; // x3
  int32_t v40; // w2
  unsigned int Count; // w0
  __int64 v42; // x2
  System_Int32_array *v43; // x19
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  int max_length; // w8
  unsigned int v49; // w9
  int32_t value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40FB757 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserShopMaster___, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__, v12);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v13);
    sub_B16FFC(&int___TypeInfo, v14);
    sub_B16FFC(&NetworkManager_TypeInfo, v15);
    sub_B16FFC(&ShopEntity_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__int__CopyTo__, v18);
    byte_40FB757 = 1;
  }
  value = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserShopMaster___);
  v24 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v20,
                                                               v21,
                                                               v22,
                                                               v23);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v24,
    (const MethodInfo_2DDC410 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  v26 = 0;
  while ( v26 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v27 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v27 )
      goto LABEL_26;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v27,
             v26,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Item )
      goto LABEL_26;
    v29 = Item;
    v30 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v30
      || (ShopEntity_c *)Item->klass->_2.typeHierarchy[v30 - 1] != ShopEntity_TypeInfo )
    {
      goto LABEL_26;
    }
    if ( LODWORD(Item[1].monitor) == eventId )
    {
      value = 0;
      v31 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v31 )
        goto LABEL_26;
      MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)v31,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserShopMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_26;
      EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                           MasterData_WarQuestSelectionMaster,
                           UserId,
                           (int32_t)v29[1].klass,
                           0LL);
      if ( !EntityDefinitely || !v24 )
        goto LABEL_26;
      num = EntityDefinitely->fields.num;
      v36 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
              v24,
              HIDWORD(v29[1].klass),
              &value,
              (const MethodInfo_2DDEBC4 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
      klass_high = HIDWORD(v29[1].klass);
      if ( v36 )
      {
        System_Collections_Generic_Dictionary_int__int___Remove(
          v24,
          klass_high,
          (const MethodInfo_2DDE8AC *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
        v38 = value;
        if ( (value & 0x80000000) != 0 )
        {
          v38 = -value;
          value = -value;
        }
        klass_high = HIDWORD(v29[1].klass);
        v39 = (const MethodInfo_2DDCFB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v40 = v38 + num;
      }
      else
      {
        v39 = (const MethodInfo_2DDCFB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v40 = -num;
      }
      System_Collections_Generic_Dictionary_int__int___Add(v24, klass_high, v40, v39);
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v26;
    if ( !list )
      goto LABEL_26;
  }
  if ( !v24 )
    goto LABEL_26;
  if ( !System_Collections_Generic_Dictionary_int__int___get_Count(
          v24,
          (const MethodInfo_2DDCBB4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) )
    return 1;
  Count = System_Collections_Generic_Dictionary_int__int___get_Count(
            v24,
            (const MethodInfo_2DDCBB4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
  v43 = (System_Int32_array *)sub_B17014(int___TypeInfo, Count, v42);
  Values = System_Collections_Generic_Dictionary_int__int___get_Values(
             v24,
             (const MethodInfo_2DDCD5C *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
  if ( !Values
    || (System_Collections_Generic_Dictionary_ValueCollection_int__int___CopyTo(
          Values,
          v43,
          0,
          (const MethodInfo_227A044 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__int__CopyTo__),
        !v43) )
  {
LABEL_26:
    sub_B170D4();
  }
  max_length = v43->max_length;
  if ( max_length < 1 )
    return 1;
  v49 = 0;
  while ( 1 )
  {
    if ( v49 >= max_length )
    {
      sub_B17100(v45, v46, v47);
      sub_B170A0();
    }
    if ( v43->m_Items[v49 + 1] <= 0 )
      break;
    if ( (int)++v49 >= max_length )
      return 1;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopMaster__IsHideItem(ShopMaster_o *this, int32_t eventId, int32_t id, const MethodInfo *method)
{
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  EventItemDisplayMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventItemDisplayEntity_array *ListByEventIdAndScreenFlag; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  int max_length; // w8
  __int64 v13; // x9
  EventItemDisplayEntity_o *v14; // x11

  if ( (byte_40FB752 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventItemDisplayMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FB752 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventItemDisplayMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)Instance,
                                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventItemDisplayMaster___)) == 0LL )
  {
LABEL_15:
    sub_B170D4();
  }
  ListByEventIdAndScreenFlag = EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
                                 MasterData_WarQuestSelectionMaster,
                                 eventId,
                                 8,
                                 0,
                                 0LL);
  if ( !ListByEventIdAndScreenFlag )
    return 1;
  max_length = ListByEventIdAndScreenFlag->max_length;
  if ( max_length < 1 )
    return 1;
  v13 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v13 >= max_length )
    {
      sub_B17100(ListByEventIdAndScreenFlag, v10, v11);
      sub_B170A0();
    }
    v14 = ListByEventIdAndScreenFlag->m_Items[v13];
    if ( !v14 )
      goto LABEL_15;
    if ( v14->fields.targetId == id && v14->fields.pointType == 1 )
      return 0;
    if ( (int)++v13 >= max_length )
      return 1;
  }
}


bool __fastcall ShopMaster__IsOpenPurchaseCloseShop(
        ShopMaster_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t eventId; // w21
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  EventDetailEntity_o *Entity; // x0

  if ( (byte_40FB753 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventDetailMaster___, shopEntity);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6);
    byte_40FB753 = 1;
  }
  if ( !shopEntity )
    goto LABEL_14;
  eventId = shopEntity->fields.eventId;
  if ( eventId )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventDetailMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        Master_WarQuestSelectionMaster,
                                        eventId,
                                        (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( Entity && EventDetailEntity__IsClosePurchaseShop(Entity, 0LL) )
        return ShopMaster__IsPurchaseCloseEventShopItem(this, shopEntity->fields.baseShopId, method);
      return 0;
    }
LABEL_14:
    sub_B170D4();
  }
  if ( shopEntity->fields.shopType != 16 )
    return ShopMaster__IsPurchaseCloseEventShopItem(this, shopEntity->fields.baseShopId, method);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopMaster__IsPurchaseCloseEventShopItem(
        ShopMaster_o *this,
        int32_t baseShopId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v14; // w22
  int32_t v15; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v16; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v18; // x20
  __int64 v19; // x9
  WebViewManager_o *Instance; // x0
  ShopReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v23; // x2
  ShopReleaseMaster_o *v24; // x21
  int32_t TargetShopGroupId; // w22
  WebViewManager_o *v26; // x0
  ShopGroupMaster_o *v27; // x0
  const MethodInfo *v28; // x2
  ShopGroupEntity_array *TargetEntityList; // x0
  const MethodInfo *v30; // x3
  WebViewManager_o *v31; // x0
  UserShopMaster_o *v32; // x21
  int64_t UserId; // x0
  UserShopEntity_o *EntityDefinitely; // x0
  ShopMaster_o *v35; // x0
  int64_t *v36; // x1
  int64_t *v37; // x2
  int32_t v38; // w3
  const MethodInfo *v39; // x4

  if ( (byte_40FB755 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&baseShopId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopGroupMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserShopMaster___, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&ShopEntity_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40FB755 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 1;
  v14 = Count;
  v15 = 0;
  while ( 1 )
  {
    v16 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v16 )
      goto LABEL_28;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v16,
             v15,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Item )
      goto LABEL_28;
    v18 = Item;
    v19 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v19
      || (ShopEntity_c *)Item->klass->_2.typeHierarchy[v19 - 1] != ShopEntity_TypeInfo )
    {
      break;
    }
    if ( HIDWORD(Item[1].klass) == baseShopId )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        MasterData_WarQuestSelectionMaster = (ShopReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
        if ( MasterData_WarQuestSelectionMaster )
        {
          v24 = MasterData_WarQuestSelectionMaster;
          TargetShopGroupId = ShopReleaseMaster__GetTargetShopGroupId(
                                MasterData_WarQuestSelectionMaster,
                                baseShopId,
                                v23);
          v26 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( v26 )
          {
            v27 = (ShopGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v26,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
            if ( v27 )
            {
              TargetEntityList = ShopGroupMaster__GetTargetEntityList(v27, TargetShopGroupId, v28);
              if ( TargetEntityList && *(_QWORD *)&TargetEntityList->max_length )
                return ShopReleaseMaster__CondClearCheck(v24, baseShopId, 82, v30);
              v31 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( v31 )
              {
                v32 = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)v31,
                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserShopMaster___);
                if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                }
                UserId = NetworkManager__get_UserId(0LL);
                if ( v32 )
                {
                  EntityDefinitely = UserShopMaster__GetEntityDefinitely(v32, UserId, baseShopId, 0LL);
                  return EntityDefinitely && EntityDefinitely->fields.num >= SLODWORD(v18[5].monitor);
                }
              }
            }
          }
        }
      }
LABEL_28:
      sub_B170D4();
    }
    if ( ++v15 >= v14 )
      return 1;
  }
  v35 = (ShopMaster_o *)sub_B173C8(Item);
  return ShopMaster__GetEnableEventPeriod(v35, v36, v37, v38, v39);
}


bool __fastcall ShopMaster__PurchaseCloseEventShop(
        ShopMaster_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t eventId; // w20
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  EventDetailEntity_o *Entity; // x0

  if ( (byte_40FB754 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventDetailMaster___, shopEntity);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v5);
    byte_40FB754 = 1;
  }
  if ( !shopEntity )
    goto LABEL_12;
  eventId = shopEntity->fields.eventId;
  if ( !eventId )
    return shopEntity->fields.shopType == 12;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_12:
    sub_B170D4();
  Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    Master_WarQuestSelectionMaster,
                                    eventId,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
    return EventDetailEntity__IsClosePurchaseShop(Entity, 0LL);
  return shopEntity->fields.shopType == 12;
}


void __fastcall ShopMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F79E8 & 1) == 0 )
  {
    sub_B16FFC(&ShopMaster___c_TypeInfo, v1);
    byte_40F79E8 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ShopMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ShopMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableEntitiyList_b__2_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableEntitiyList_b__3_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableEventEntitiyList_b__6_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableEventEntityList_b__7_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEventEntitiyList_b__4_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEventItemList_b__11_0(
        ShopMaster___c_o *this,
        ItemEntity_o *a,
        ItemEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetOpenedEventEntitiyList_b__5_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.priority - b->fields.priority;
}