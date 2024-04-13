void __fastcall ShopMaster___ctor(ShopMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA668 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ShopMaster__ShopEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42EA668 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    42,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_ShopMaster__ShopEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopMaster__CheckBuyAfterCloseShop(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_List_int__o *v22; // x0

  if ( (byte_42EA671 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    byte_42EA671 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list
    || (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
        v22 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo),
        System_Collections_Generic_List_int____ctor(
          v22,
          (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224),
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                             (DataManager_o *)list,
                                                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
    || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                             (DataMasterBase_WarMaster__WarEntity__int__o *)list,
                                                                                             eventId,
                                                                                             (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__)) == 0LL )
  {
    sub_B5D69C(list, *(_QWORD *)&eventId);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w22
  int32_t v16; // w23
  __int64 v17; // x10

  if ( (byte_42EA67C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventId, payType, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&ShopEntity_TypeInfo, v10, v11, v12);
    byte_42EA67C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_B5D69C(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v15 = Count;
  v16 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v16,
                                                                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_15;
    v17 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v17
      || (ShopEntity_c *)list->klass->_2.typeHierarchy[v17 - 1] != ShopEntity_TypeInfo )
    {
      goto LABEL_15;
    }
    if ( LODWORD(list->fields._syncRoot) == eventId && HIDWORD(list[2].klass) == payType )
      return 1;
    if ( ++v16 >= v15 )
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
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  __int64 Time; // x0
  __int64 v53; // x1
  int64_t v54; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v55; // x19
  __int64 v56; // x1
  __int64 v57; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v60; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v63; // x3
  System_Collections_Generic_IEnumerator_T__c *v64; // x8
  unsigned __int64 v65; // x10
  int32_t *v66; // x11
  __int64 v67; // x0
  ShopEntity_o *v68; // x0
  ShopEntity_o *v69; // x24
  __int64 v70; // x9
  _BOOL8 IsHiddenInCaseOfBuying; // x0
  __int64 v72; // x1
  System_Collections_Generic_IEnumerator_T__c *v73; // x8
  unsigned __int64 v74; // x10
  int32_t *v75; // x11
  __int64 v76; // x0
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x20
  Il2CppObject *v79; // x21
  struct ShopMaster___c_StaticFields *v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7

  if ( (byte_42EA669 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      purchaseType,
      shopType,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Comparison_ShopEntity___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Comparison_ShopEntity__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity__Add__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v34, v35, v36);
    sub_B5D5C4(&System_Collections_Generic_List_ShopEntity__TypeInfo, v37, v38, v39);
    sub_B5D5C4(&NetworkManager_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&ShopEntity_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&Method_ShopMaster___c__GetEnableEntitiyList_b__1_0__, v46, v47, v48);
    sub_B5D5C4(&ShopMaster___c_TypeInfo, v49, v50, v51);
    byte_42EA669 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_50;
  v54 = Time;
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
    (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v55 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v55,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  Time = (__int64)this->fields.list;
  if ( !Time )
    goto LABEL_50;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v56);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v60 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v60;
        p_offset += 4;
        if ( v60 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v57);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v64 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v65 = 0LL;
      v66 = &v64->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v66 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v65;
        v66 += 4;
        if ( v65 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v67 = (__int64)&v64->vtable[*v66].method;
    }
    else
    {
LABEL_20:
      v67 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v63);
    }
    v68 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v67)(
                            Enumerator,
                            *(_QWORD *)(v67 + 8));
    v69 = v68;
    if ( v68 )
    {
      v70 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v68->klass->_2.bitflags2 + 1) < (unsigned int)v70
        || (ShopEntity_c *)v68->klass->_2.typeHierarchy[v70 - 1] != ShopEntity_TypeInfo )
      {
        Time = sub_B5D990(v68);
        goto LABEL_50;
      }
      if ( !v68->fields.eventId
        && (purchaseType < 1 || v68->fields.purchaseType == purchaseType)
        && v68->fields.shopType == shopType
        && ShopEntity__IsEnable(v68, v54, 0LL) )
      {
        IsHiddenInCaseOfBuying = ShopEntity__IsHiddenInCaseOfBuying(v69, 0LL);
        if ( !IsHiddenInCaseOfBuying )
        {
          if ( !v55 )
            sub_B5D69C(IsHiddenInCaseOfBuying, v72);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v55,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v69,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
        }
      }
    }
  }
  v73 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v74 = 0LL;
    v75 = &v73->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v75 - 1) != System_IDisposable_TypeInfo )
    {
      ++v74;
      v75 += 4;
      if ( v74 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v76 = (__int64)&v73->vtable[*v75].method;
  }
  else
  {
LABEL_37:
    v76 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v63);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v76)(Enumerator, *(_QWORD *)(v76 + 8));
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
    v79 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_0,
      v79,
      Method_ShopMaster___c__GetEnableEntitiyList_b__1_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_ShopEntity___ctor__);
    v80 = ShopMaster___c_TypeInfo->static_fields;
    v80->__9__1_0 = (struct System_Comparison_ShopEntity__o *)_9__1_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v80->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86);
  }
  if ( !v55 )
LABEL_50:
    sub_B5D69C(Time, v53);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v55,
    (System_Comparison_T__o *)_9__1_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v55,
                               (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_array *__fastcall ShopMaster__GetEnableEntitiyList_28621040(
        ShopMaster_o *this,
        int32_t purchaseType,
        int32_t shopType,
        int32_t flag,
        const MethodInfo *method)
{
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
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  __int64 Time; // x0
  __int64 v55; // x1
  int64_t v56; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v57; // x19
  __int64 v58; // x1
  __int64 v59; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v62; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v65; // x3
  System_Collections_Generic_IEnumerator_T__c *v66; // x8
  unsigned __int64 v67; // x10
  int32_t *v68; // x11
  __int64 v69; // x0
  ShopEntity_o *v70; // x0
  ShopEntity_o *v71; // x26
  __int64 v72; // x9
  const MethodInfo *v73; // x2
  _BOOL8 IsOpenPurchaseCloseShop; // x0
  __int64 v75; // x1
  System_Collections_Generic_IEnumerator_T__c *v76; // x8
  unsigned __int64 v77; // x10
  int32_t *v78; // x11
  __int64 v79; // x0
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v82; // x21
  struct ShopMaster___c_StaticFields *v83; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  ShopMaster_o *v91; // [xsp+0h] [xbp-60h]

  if ( (byte_42EA66A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      purchaseType,
      shopType,
      *(_QWORD *)&flag);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Comparison_ShopEntity___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Comparison_ShopEntity__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity__Add__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v36, v37, v38);
    sub_B5D5C4(&System_Collections_Generic_List_ShopEntity__TypeInfo, v39, v40, v41);
    sub_B5D5C4(&NetworkManager_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&ShopEntity_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&Method_ShopMaster___c__GetEnableEntitiyList_b__2_0__, v48, v49, v50);
    sub_B5D5C4(&ShopMaster___c_TypeInfo, v51, v52, v53);
    byte_42EA66A = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_51;
  v56 = Time;
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
    (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v57 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v57,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  Time = (__int64)this->fields.list;
  if ( !Time )
    goto LABEL_51;
  v91 = this;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v58);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v62 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v62;
        p_offset += 4;
        if ( v62 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v59);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v66 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v67 = 0LL;
      v68 = &v66->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v68 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v67;
        v68 += 4;
        if ( v67 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v69 = (__int64)&v66->vtable[*v68].method;
    }
    else
    {
LABEL_20:
      v69 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v65);
    }
    v70 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v69)(
                            Enumerator,
                            *(_QWORD *)(v69 + 8));
    v71 = v70;
    if ( v70 )
    {
      v72 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v70->klass->_2.bitflags2 + 1) < (unsigned int)v72
        || (ShopEntity_c *)v70->klass->_2.typeHierarchy[v72 - 1] != ShopEntity_TypeInfo )
      {
        Time = sub_B5D990(v70);
        goto LABEL_51;
      }
      if ( ShopEntity__checkFlag(v70, flag, 0LL)
        && (purchaseType < 1 || v71->fields.purchaseType == purchaseType)
        && v71->fields.shopType == shopType
        && ShopEntity__IsEnable(v71, v56, 0LL)
        && !ShopEntity__IsHiddenInCaseOfBuying(v71, 0LL) )
      {
        IsOpenPurchaseCloseShop = ShopMaster__IsOpenPurchaseCloseShop(v91, v71, v73);
        if ( !IsOpenPurchaseCloseShop )
        {
          if ( !v57 )
            sub_B5D69C(IsOpenPurchaseCloseShop, v75);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v57,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v71,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
        }
      }
    }
  }
  v76 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v77 = 0LL;
    v78 = &v76->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v78 - 1) != System_IDisposable_TypeInfo )
    {
      ++v77;
      v78 += 4;
      if ( v77 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_38;
    }
    v79 = (__int64)&v76->vtable[*v78].method;
  }
  else
  {
LABEL_38:
    v79 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v65);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v79)(Enumerator, *(_QWORD *)(v79 + 8));
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
    v82 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v82,
      Method_ShopMaster___c__GetEnableEntitiyList_b__2_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_ShopEntity___ctor__);
    v83 = ShopMaster___c_TypeInfo->static_fields;
    v83->__9__2_0 = (struct System_Comparison_ShopEntity__o *)_9__2_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v83->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v84,
      v85,
      v86,
      v87,
      v88,
      v89);
  }
  if ( !v57 )
LABEL_51:
    sub_B5D69C(Time, v55);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v57,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v57,
                               (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


ShopEntity_array *__fastcall ShopMaster__GetEnableEntitiyList_28622592(
        ShopMaster_o *this,
        int32_t purchaseType,
        int32_t payType,
        const MethodInfo *method)
{
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
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  __int64 Time; // x0
  __int64 v53; // x1
  int64_t v54; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v55; // x19
  __int64 v56; // x1
  __int64 v57; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v60; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v63; // x3
  System_Collections_Generic_IEnumerator_T__c *v64; // x8
  unsigned __int64 v65; // x10
  int32_t *v66; // x11
  __int64 v67; // x0
  ShopEntity_o *v68; // x0
  ShopEntity_o *v69; // x24
  __int64 v70; // x9
  _BOOL8 IsHiddenInCaseOfBuying; // x0
  __int64 v72; // x1
  System_Collections_Generic_IEnumerator_T__c *v73; // x8
  unsigned __int64 v74; // x10
  int32_t *v75; // x11
  __int64 v76; // x0
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v79; // x21
  struct ShopMaster___c_StaticFields *v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7

  if ( (byte_42EA66B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      purchaseType,
      payType,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Comparison_ShopEntity___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Comparison_ShopEntity__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity__Add__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v34, v35, v36);
    sub_B5D5C4(&System_Collections_Generic_List_ShopEntity__TypeInfo, v37, v38, v39);
    sub_B5D5C4(&NetworkManager_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&ShopEntity_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&Method_ShopMaster___c__GetEnableEntitiyList_b__3_0__, v46, v47, v48);
    sub_B5D5C4(&ShopMaster___c_TypeInfo, v49, v50, v51);
    byte_42EA66B = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_50;
  v54 = Time;
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
    (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v55 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v55,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  Time = (__int64)this->fields.list;
  if ( !Time )
    goto LABEL_50;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Time,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v56);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v60 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v60;
        p_offset += 4;
        if ( v60 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v57);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v64 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v65 = 0LL;
      v66 = &v64->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v66 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v65;
        v66 += 4;
        if ( v65 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v67 = (__int64)&v64->vtable[*v66].method;
    }
    else
    {
LABEL_20:
      v67 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v63);
    }
    v68 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v67)(
                            Enumerator,
                            *(_QWORD *)(v67 + 8));
    v69 = v68;
    if ( v68 )
    {
      v70 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v68->klass->_2.bitflags2 + 1) < (unsigned int)v70
        || (ShopEntity_c *)v68->klass->_2.typeHierarchy[v70 - 1] != ShopEntity_TypeInfo )
      {
        Time = sub_B5D990(v68);
        goto LABEL_50;
      }
      if ( !v68->fields.eventId
        && (purchaseType < 1 || v68->fields.purchaseType == purchaseType)
        && v68->fields.payType == payType
        && ShopEntity__IsEnable(v68, v54, 0LL) )
      {
        IsHiddenInCaseOfBuying = ShopEntity__IsHiddenInCaseOfBuying(v69, 0LL);
        if ( !IsHiddenInCaseOfBuying )
        {
          if ( !v55 )
            sub_B5D69C(IsHiddenInCaseOfBuying, v72);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v55,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v69,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
        }
      }
    }
  }
  v73 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v74 = 0LL;
    v75 = &v73->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v75 - 1) != System_IDisposable_TypeInfo )
    {
      ++v74;
      v75 += 4;
      if ( v74 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v76 = (__int64)&v73->vtable[*v75].method;
  }
  else
  {
LABEL_37:
    v76 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v63);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v76)(Enumerator, *(_QWORD *)(v76 + 8));
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
    v79 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v79,
      Method_ShopMaster___c__GetEnableEntitiyList_b__3_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_ShopEntity___ctor__);
    v80 = ShopMaster___c_TypeInfo->static_fields;
    v80->__9__3_0 = (struct System_Comparison_ShopEntity__o *)_9__3_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v80->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86);
  }
  if ( !v55 )
LABEL_50:
    sub_B5D69C(Time, v53);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v55,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v55,
                               (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


ShopEntity_array *__fastcall ShopMaster__GetEnableEventEntitiyList(
        ShopMaster_o *this,
        int32_t eventId,
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
  int64_t Time; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v43; // x21
  __int64 v44; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v47; // w23
  int32_t v48; // w24
  ShopEntity_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v50; // x25
  __int64 v51; // x10
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x19
  Il2CppObject *v54; // x20
  struct ShopMaster___c_StaticFields *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7

  if ( (byte_42EA66E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_ShopEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_ShopEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_ShopEntity__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&NetworkManager_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&ShopEntity_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_ShopMaster___c__GetEnableEventEntitiyList_b__6_0__, v36, v37, v38);
    sub_B5D5C4(&ShopMaster___c_TypeInfo, v39, v40, v41);
    byte_42EA66E = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v43 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v43,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v47 = Count;
    v48 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (ShopEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                               v48,
                               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v50 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v51 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v51
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[v51 - 1] == ShopEntity_TypeInfo
          && Item->fields.eventId == eventId )
        {
          list = (void *)ShopEntity__IsEnable(Item, Time, 0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v43 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v43,
              v50,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
          }
        }
      }
      if ( ++v48 >= v47 )
        goto LABEL_18;
    }
LABEL_28:
    sub_B5D69C(list, v44);
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
    v54 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__6_0,
      v54,
      Method_ShopMaster___c__GetEnableEventEntitiyList_b__6_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_ShopEntity___ctor__);
    v55 = ShopMaster___c_TypeInfo->static_fields;
    v55->__9__6_0 = (struct System_Comparison_ShopEntity__o *)_9__6_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v55->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
  }
  if ( !v43 )
    goto LABEL_28;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v43,
    (System_Comparison_T__o *)_9__6_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v43,
                               (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


ShopEntity_array *__fastcall ShopMaster__GetEnableEventEntityList(
        ShopMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
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
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int64_t Time; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x22
  __int64 v45; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v48; // w24
  int32_t v49; // w25
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  ShopEntity_o *v51; // x26
  __int64 v52; // x10
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_0; // x19
  Il2CppObject *v55; // x20
  struct ShopMaster___c_StaticFields *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7

  if ( (byte_42EA66F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventId, slot, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Comparison_ShopEntity___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Comparison_ShopEntity__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity__Add__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v25, v26, v27);
    sub_B5D5C4(&System_Collections_Generic_List_ShopEntity__TypeInfo, v28, v29, v30);
    sub_B5D5C4(&NetworkManager_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&ShopEntity_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_ShopMaster___c__GetEnableEventEntityList_b__7_0__, v37, v38, v39);
    sub_B5D5C4(&ShopMaster___c_TypeInfo, v40, v41, v42);
    byte_42EA66F = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v44,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v48 = Count;
    v49 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v49,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v51 = (ShopEntity_o *)Item;
        v52 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v52
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[v52 - 1] == ShopEntity_TypeInfo
          && LODWORD(Item[1].monitor) == eventId
          && LODWORD(Item[2].monitor) == slot
          && ShopEntity__IsEnable((ShopEntity_o *)Item, Time, 0LL) )
        {
          list = (void *)ShopEntity__IsHiddenInCaseOfBuyingShopId(v51, 0LL);
          if ( ((unsigned __int8)list & 1) == 0 )
          {
            if ( !v44 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v44,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v51,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
          }
        }
      }
      if ( ++v49 >= v48 )
        goto LABEL_20;
    }
LABEL_30:
    sub_B5D69C(list, v45);
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
    v55 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__7_0,
      v55,
      Method_ShopMaster___c__GetEnableEventEntityList_b__7_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_ShopEntity___ctor__);
    v56 = ShopMaster___c_TypeInfo->static_fields;
    v56->__9__7_0 = (struct System_Comparison_ShopEntity__o *)_9__7_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v56->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
  }
  if ( !v44 )
    goto LABEL_30;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v44,
    (System_Comparison_T__o *)_9__7_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v44,
                               (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopMaster__GetEnableEventPeriod(
        ShopMaster_o *this,
        int64_t *openedAt,
        int64_t *closedAt,
        int32_t eventId,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *Time; // x0
  __int64 v19; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v20; // x23
  int32_t Count; // w0
  int32_t v22; // w24
  int32_t v23; // w25
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v25; // x10
  int64_t klass; // x8
  int64_t monitor; // x8

  if ( (byte_42EA672 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)openedAt,
      (_DWORD)closedAt,
      *(_QWORD *)&eventId);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&ShopEntity_TypeInfo, v15, v16, v17);
    byte_42EA672 = 1;
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
  v20 = Time;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v22 = Count;
    v23 = 0;
    while ( 1 )
    {
      Time = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !Time )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               Time,
               v23,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v25 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v25
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[v25 - 1] == ShopEntity_TypeInfo
          && LODWORD(Item[1].monitor) == eventId )
        {
          klass = (int64_t)Item[8].klass;
          if ( klass <= (__int64)v20 )
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
      if ( ++v23 >= v22 )
        return (*openedAt & 0x8000000000000000LL) == 0 && *closedAt >= 0;
    }
LABEL_26:
    sub_B5D69C(Time, v19);
  }
  return (*openedAt & 0x8000000000000000LL) == 0 && *closedAt >= 0;
}


int32_t __fastcall ShopMaster__GetEnableMainEventId(ShopMaster_o *this, const MethodInfo *method)
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int64_t Time; // x22
  void *Instance; // x0
  __int64 v49; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_int__o *v51; // x21
  System_Collections_Generic_List_int__o *v52; // x20
  int32_t Count; // w0
  const MethodInfo *v54; // x2
  int32_t v55; // w24
  int32_t i; // w25
  __int64 v57; // x8
  int32_t baseShopId; // w1
  System_Collections_Generic_List_int__o *v59; // x0
  ShopEntity_o *Item; // x0
  ShopEntity_o *v61; // x26
  __int64 v62; // x10
  int size; // w8
  unsigned __int64 v64; // x23
  signed __int64 v65; // x24
  int32_t v66; // w22
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42EA670 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Sort__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v32, v33, v34);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&NetworkManager_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&ShopEntity_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v44, v45, v46);
    byte_42EA670 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  v51 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v51,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v52 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v52,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_48;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v55 = Count;
    for ( i = 0; i < v55; ++i )
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_48;
      Item = (ShopEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                               i,
                               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v61 = Item;
        v62 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v62
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[v62 - 1] == ShopEntity_TypeInfo )
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
                           v61->fields.eventId,
                           (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
              if ( !Instance )
                goto LABEL_48;
              v57 = *((_QWORD *)Instance + 13);
              if ( v57 >= 1 && v57 >= Time && *((_QWORD *)Instance + 11) <= Time )
              {
                if ( !v51 )
                  goto LABEL_48;
                if ( !System_Collections_Generic_List_int___Contains(
                        v51,
                        v61->fields.baseShopId,
                        (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
                {
                  Instance = (void *)ShopMaster__CheckBuyAfterCloseShop(this, v61->fields.eventId, v54);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
                  {
                    baseShopId = v61->fields.baseShopId;
                    v59 = v51;
                  }
                  else
                  {
                    if ( !v52 )
                      goto LABEL_48;
                    if ( System_Collections_Generic_List_int___Contains(
                           v52,
                           v61->fields.eventId,
                           (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
                    {
                      continue;
                    }
                    baseShopId = v61->fields.eventId;
                    v59 = v52;
                  }
                  System_Collections_Generic_List_int___Add(
                    v59,
                    baseShopId,
                    (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v51 )
  {
    size = v51->fields._size;
    if ( size >= 1 )
    {
      v64 = 0LL;
      v65 = size;
      while ( 1 )
      {
        if ( v64 >= (unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v66 = v51->fields._items->m_Items[v64 + 1];
        if ( !ShopMaster__IsPurchaseCloseEventShopItem(this, v66, v54) )
        {
          Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                               &entity,
                               v66,
                               (const MethodInfo_23FAE6C *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            break;
        }
        if ( (__int64)++v64 >= v65 )
          goto LABEL_39;
        size = v51->fields._size;
      }
      if ( entity )
        return (int32_t)entity->fields.age;
LABEL_48:
      sub_B5D69C(Instance, v49);
    }
  }
LABEL_39:
  if ( !v52 || v52->fields._size < 1 )
    return 0;
  System_Collections_Generic_List_int___Sort(
    v52,
    (const MethodInfo_308632C *)Method_System_Collections_Generic_List_int__Sort__);
  if ( !v52->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  return v52->fields._items->m_Items[1];
}


ShopEntity_o *__fastcall ShopMaster__GetEntityOfFragmentsShop(ShopMaster_o *this, const MethodInfo *method)
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
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  ShopEntity_o *v29; // x0
  __int64 v30; // x1
  ShopEntity_o *v31; // x20
  __int64 v32; // x9
  int v33; // w8
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  int v39; // [xsp+0h] [xbp-40h]

  if ( (byte_42EA67B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&ShopEntity_TypeInfo, v14, v15, v16);
    byte_42EA67B = 1;
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
      v22 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v22;
        p_offset += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v19);
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
          goto LABEL_16;
      }
      v28 = (__int64)&v25->vtable[*v27].method;
    }
    else
    {
LABEL_16:
      v28 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v19);
    }
    v29 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
                            Enumerator,
                            *(_QWORD *)(v28 + 8));
    v31 = v29;
    if ( !v29 )
      goto LABEL_35;
    v32 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v29->klass->_2.bitflags2 + 1) < (unsigned int)v32
      || (ShopEntity_c *)v29->klass->_2.typeHierarchy[v32 - 1] != ShopEntity_TypeInfo )
    {
      v29 = (ShopEntity_o *)sub_B5D990(v29);
LABEL_35:
      sub_B5D69C(v29, v30);
    }
    if ( v29->fields.shopType == 6 && v29->fields.payType == 8 )
    {
      v33 = 70;
      goto LABEL_25;
    }
  }
  v31 = 0LL;
  v33 = 68;
LABEL_25:
  v39 = v33;
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
        goto LABEL_29;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_29:
    v37 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v19);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
  if ( v39 == 68 )
    return 0LL;
  return v31;
}


ShopEntity_array *__fastcall ShopMaster__GetEventEntitiyList(
        ShopMaster_o *this,
        int32_t eventId,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x19
  void *v40; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v43; // w22
  int32_t v44; // w23
  __int64 v45; // x10
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v48; // x21
  struct ShopMaster___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7

  if ( (byte_42EA66C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_ShopEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_ShopEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_ShopEntity__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&ShopEntity_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_ShopMaster___c__GetEventEntitiyList_b__4_0__, v33, v34, v35);
    sub_B5D5C4(&ShopMaster___c_TypeInfo, v36, v37, v38);
    byte_42EA66C = 1;
  }
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v43 = Count;
    v44 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v44,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v40 = list;
        v45 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v45
          && *(ShopEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v45 - 8) == ShopEntity_TypeInfo
          && *((_DWORD *)list + 6) == eventId )
        {
          if ( !v39 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v39,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
        }
      }
      if ( ++v44 >= v43 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B5D69C(list, v40);
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
    v48 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v48,
      Method_ShopMaster___c__GetEventEntitiyList_b__4_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_ShopEntity___ctor__);
    v49 = ShopMaster___c_TypeInfo->static_fields;
    v49->__9__4_0 = (struct System_Comparison_ShopEntity__o *)_9__4_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v49->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  if ( !v39 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v39,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v39,
                               (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ShopMaster__GetEventItemList(
        ShopMaster_o *this,
        int32_t eventId,
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
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  void *list; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v65; // x19
  __int64 v66; // x1
  const MethodInfo *v67; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v70; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v73; // x3
  System_Collections_Generic_IEnumerator_T__c *v74; // x8
  unsigned __int64 v75; // x10
  int32_t *v76; // x11
  __int64 v77; // x0
  __int64 IsHideItem; // x0
  __int64 v79; // x1
  __int64 v80; // x23
  ShopEntity_c *v81; // x1
  __int64 v82; // x9
  __int64 v83; // x8
  __int64 v84; // x9
  unsigned __int64 v85; // x25
  signed __int64 v86; // x26
  int32_t v87; // w2
  int size; // w8
  unsigned int v89; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v90; // x8
  __int64 v91; // x9
  __int64 v92; // x8
  WarEntity_o *Entity; // x0
  System_Int32_array *v94; // x20
  System_Collections_Generic_IEnumerator_T__c *v95; // x8
  unsigned __int64 v96; // x10
  int32_t *v97; // x11
  __int64 v98; // x0
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__11_0; // x20
  Il2CppObject *v101; // x21
  struct ShopMaster___c_StaticFields *v102; // x0
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  int v109; // w21
  __int64 v110; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v111; // x8
  __int64 v113; // x0
  __int64 v114; // x0
  __int64 v115; // x0
  __int64 v116; // x0

  if ( (byte_42EA673 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_ItemEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_ItemEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v18, v19, v20);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&int___TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ItemEntity__Add__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ItemEntity__Sort__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ItemEntity__get_Item__, v45, v46, v47);
    sub_B5D5C4(&System_Collections_Generic_List_ItemEntity__TypeInfo, v48, v49, v50);
    sub_B5D5C4(&ShopEntity_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v54, v55, v56);
    sub_B5D5C4(&Method_ShopMaster___c__GetEventItemList_b__11_0__, v57, v58, v59);
    sub_B5D5C4(&ShopMaster___c_TypeInfo, v60, v61, v62);
    byte_42EA673 = 1;
  }
  if ( eventId < 1 )
    return 0LL;
  list = this->fields.list;
  if ( !list )
    goto LABEL_83;
  if ( !System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
          (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
    return 0LL;
  list = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_83;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)list,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  v65 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v65,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_83;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v66);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v70 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v70;
        p_offset += 4;
        if ( v70 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v67);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v74 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v75 = 0LL;
      v76 = &v74->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v76 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v75;
        v76 += 4;
        if ( v75 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v77 = (__int64)&v74->vtable[*v76].method;
    }
    else
    {
LABEL_20:
      v77 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v73);
    }
    IsHideItem = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v77)(
                   Enumerator,
                   *(_QWORD *)(v77 + 8));
    v80 = IsHideItem;
    if ( !IsHideItem )
      sub_B5D69C(0LL, v79);
    v81 = ShopEntity_TypeInfo;
    v82 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)IsHideItem + 300LL) < (unsigned int)v82
      || *(ShopEntity_c **)(*(_QWORD *)(*(_QWORD *)IsHideItem + 200LL) + 8 * v82 - 8) != ShopEntity_TypeInfo )
    {
      IsHideItem = sub_B5D990(IsHideItem);
LABEL_80:
      sub_B5D69C(IsHideItem, v81);
    }
    if ( *(_DWORD *)(IsHideItem + 24) == eventId )
    {
      v83 = *(_QWORD *)(IsHideItem + 32);
      if ( !v83 )
        sub_B5D69C(IsHideItem, ShopEntity_TypeInfo);
      v84 = *(_QWORD *)(v83 + 24);
      if ( (int)v84 >= 1 )
      {
        v85 = 0LL;
        v86 = (int)v84;
        while ( 1 )
        {
          if ( v85 >= *(unsigned int *)(v83 + 24) )
          {
            v114 = sub_B5D6C8(IsHideItem);
            sub_B5D668(v114, 0LL);
          }
          v87 = *(_DWORD *)(v83 + 4 * v85 + 32);
          if ( v87 >= 1 )
          {
            IsHideItem = ShopMaster__IsHideItem((ShopMaster_o *)IsHideItem, eventId, v87, v67);
            if ( (IsHideItem & 1) == 0 )
            {
              if ( !v65 )
                sub_B5D69C(IsHideItem, v81);
              size = v65->fields._size;
              if ( size < 1 )
              {
LABEL_42:
                v92 = *(_QWORD *)(v80 + 32);
                if ( !v92 )
                  goto LABEL_80;
                if ( v85 >= *(unsigned int *)(v92 + 24) )
                {
                  v115 = sub_B5D6C8(IsHideItem);
                  sub_B5D668(v115, 0LL);
                }
                if ( !MasterData_WarQuestSelectionMaster )
                  sub_B5D69C(IsHideItem, v81);
                Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           MasterData_WarQuestSelectionMaster,
                           *(_DWORD *)(v92 + 4 * v85 + 32),
                           (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v65,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
              }
              else
              {
                v89 = 0;
                while ( 1 )
                {
                  if ( size <= v89 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                  v90 = v65->fields._items->m_Items[v89];
                  if ( !v90 )
                    sub_B5D69C(IsHideItem, v81);
                  v91 = *(_QWORD *)(v80 + 32);
                  if ( !v91 )
                    sub_B5D69C(IsHideItem, v81);
                  if ( v85 >= *(unsigned int *)(v91 + 24) )
                  {
                    v113 = sub_B5D6C8(IsHideItem);
                    sub_B5D668(v113, 0LL);
                  }
                  if ( v90->fields.missionTargetId == *(_DWORD *)(v91 + 4 * v85 + 32) )
                    break;
                  size = v65->fields._size;
                  if ( (int)++v89 >= size )
                    goto LABEL_42;
                }
              }
            }
          }
          if ( (__int64)++v85 >= v86 )
            break;
          v83 = *(_QWORD *)(v80 + 32);
          if ( !v83 )
            sub_B5D69C(IsHideItem, v81);
        }
      }
    }
  }
  v95 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v96 = 0LL;
    v97 = &v95->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v97 - 1) != System_IDisposable_TypeInfo )
    {
      ++v96;
      v97 += 4;
      if ( v96 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_54;
    }
    v98 = (__int64)&v95->vtable[*v97].method;
  }
  else
  {
LABEL_54:
    v98 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v73);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v98)(Enumerator, *(_QWORD *)(v98 + 8));
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
    v101 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ItemEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__11_0,
      v101,
      Method_ShopMaster___c__GetEventItemList_b__11_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_ItemEntity___ctor__);
    v102 = ShopMaster___c_TypeInfo->static_fields;
    v102->__9__11_0 = (struct System_Comparison_ItemEntity__o *)_9__11_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v102->__9__11_0,
      (System_Int32_array **)_9__11_0,
      v103,
      v104,
      v105,
      v106,
      v107,
      v108);
  }
  if ( !v65 )
LABEL_83:
    sub_B5D69C(list, *(_QWORD *)&eventId);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v65,
    (System_Comparison_T__o *)_9__11_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  v109 = v65->fields._size;
  list = (void *)sub_B5D5DC(int___TypeInfo, (unsigned int)v109);
  v94 = (System_Int32_array *)list;
  if ( v109 >= 1 )
  {
    v110 = 0LL;
    while ( 1 )
    {
      if ( v65->fields._size <= (unsigned int)v110 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v111 = v65->fields._items->m_Items[v110];
      if ( !v111 || !list )
        break;
      if ( (unsigned int)v110 >= *((_DWORD *)list + 6) )
      {
        v116 = sub_B5D6C8(list);
        sub_B5D668(v116, 0LL);
      }
      *((_DWORD *)list + v110++ + 8) = v111->fields.missionTargetId;
      if ( (int)v110 >= v109 )
        return v94;
    }
    goto LABEL_83;
  }
  return v94;
}


int32_t __fastcall ShopMaster__GetEventShopBaseShopId(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  struct DataMasterBase_array *datalist; // x8
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8
  __int64 v17; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EA678 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42EA678 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         eventId,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_15;
    if ( !EventDetailEntity__IsClosePurchaseShop((EventDetailEntity_o *)entity, 0LL) )
      goto LABEL_13;
  }
  Instance = (DataManager_o *)ShopMaster__GetEnableEventEntitiyList(this, eventId, v14);
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
    v17 = sub_B5D6C8(Instance);
    sub_B5D668(v17, 0LL);
  }
  lookup = Instance->fields.lookup;
  if ( !lookup )
LABEL_15:
    sub_B5D69C(Instance, v13);
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
      sub_B5D69C(EntityOfFragmentsShop, v3);
    v5 = *(_QWORD *)&prices->max_length;
    if ( v5 )
    {
      if ( !(_DWORD)v5 )
      {
        v6 = sub_B5D6C8(EntityOfFragmentsShop);
        sub_B5D668(v6, 0LL);
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
  int64_t Time; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v43; // x21
  __int64 v44; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v47; // w23
  int32_t v48; // w24
  ShopEntity_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v50; // x25
  __int64 v51; // x10
  struct ShopMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x19
  Il2CppObject *v54; // x20
  struct ShopMaster___c_StaticFields *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7

  if ( (byte_42EA66D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_ShopEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_ShopEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity__Sort__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity__ToArray__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_ShopEntity__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&NetworkManager_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&ShopEntity_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_ShopMaster___c__GetOpenedEventEntitiyList_b__5_0__, v36, v37, v38);
    sub_B5D5C4(&ShopMaster___c_TypeInfo, v39, v40, v41);
    byte_42EA66D = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v43 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v43,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v47 = Count;
    v48 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (ShopEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                               v48,
                               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v50 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v51 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v51
          && (ShopEntity_c *)Item->klass->_2.typeHierarchy[v51 - 1] == ShopEntity_TypeInfo
          && Item->fields.eventId == eventId )
        {
          list = (void *)ShopEntity__IsOpened(Item, Time, 0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v43 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v43,
              v50,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
          }
        }
      }
      if ( ++v48 >= v47 )
        goto LABEL_18;
    }
LABEL_28:
    sub_B5D69C(list, v44);
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
    v54 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ShopEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v54,
      Method_ShopMaster___c__GetOpenedEventEntitiyList_b__5_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_ShopEntity___ctor__);
    v55 = ShopMaster___c_TypeInfo->static_fields;
    v55->__9__5_0 = (struct System_Comparison_ShopEntity__o *)_9__5_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v55->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
  }
  if ( !v43 )
    goto LABEL_28;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v43,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ShopEntity__Sort__);
  return (ShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v43,
                               (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopMaster__IsEnableEventShop(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
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
  __int64 v16; // x10
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v17; // x8

  if ( (byte_42EA67A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&ShopEntity_TypeInfo, v9, v10, v11);
    byte_42EA67A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B5D69C(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v14 = Count;
  v15 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v15,
                                                                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_17;
    v16 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v16
      || (ShopEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] != ShopEntity_TypeInfo )
    {
      goto LABEL_17;
    }
    v17 = (ShopEntity_c *)list->klass->_2.typeHierarchy[*(&ShopEntity_TypeInfo->_2.bitflags2 + 1) - 1] == ShopEntity_TypeInfo
        ? list
        : 0LL;
    if ( LODWORD(v17->fields._syncRoot) == eventId )
      return 1;
    if ( ++v15 >= v14 )
      return 0;
  }
}


bool __fastcall ShopMaster__IsEnableEventShop_28608604(ShopMaster_o *this, const MethodInfo *method)
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int64_t Time; // x20
  ShopReleaseMaster_o *Master_WarQuestSelectionMaster; // x21
  WarQuestSelectionMaster_o *v31; // x0
  __int64 v32; // x1
  UserShopMaster_o *v33; // x22
  __int64 v34; // x1
  __int64 v35; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int i; // w24
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  ShopEntity_o *v42; // x0
  ShopEntity_o *v43; // x23
  __int64 v44; // x9
  __int64 UserId; // x0
  __int64 v46; // x1
  UserShopEntity_o *EntityDefinitely; // x0
  __int64 v48; // x1
  const MethodInfo *v49; // x3
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v51; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v54; // w8
  System_Collections_Generic_IEnumerator_T__c *v55; // x8
  unsigned __int64 v56; // x10
  int32_t *v57; // x11
  __int64 v58; // x0
  int v60; // [xsp+0h] [xbp-60h]

  if ( (byte_42EA67D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_ShopReleaseMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserShopMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&NetworkManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&ShopEntity_TypeInfo, v26, v27, v28);
    byte_42EA67D = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ShopReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ShopReleaseMaster___);
  v31 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserShopMaster___);
  if ( !this->fields.list )
    sub_B5D69C(v31, v32);
  v33 = (UserShopMaster_o *)v31;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v34);
  for ( i = 0; ; i |= ShopReleaseMaster__CondClearCheck(Master_WarQuestSelectionMaster, v43->fields.id, 1, v49) )
  {
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v51 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v51;
          p_offset += 4;
          if ( v51 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_35;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_35:
        p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v35);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
      {
        v54 = 160;
        goto LABEL_39;
      }
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
            goto LABEL_16;
        }
        v41 = (__int64)&v38->vtable[*v40].method;
      }
      else
      {
LABEL_16:
        v41 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v49);
      }
      v42 = (ShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
                              Enumerator,
                              *(_QWORD *)(v41 + 8));
      v43 = v42;
      if ( v42 )
      {
        v44 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v42->klass->_2.bitflags2 + 1) < (unsigned int)v44
          || (ShopEntity_c *)v42->klass->_2.typeHierarchy[v44 - 1] != ShopEntity_TypeInfo )
        {
          UserId = sub_B5D990(v42);
LABEL_50:
          sub_B5D69C(UserId, v46);
        }
        if ( v42->fields.shopType == 12 && ShopEntity__IsEnable(v42, Time, 0LL) )
          break;
      }
    }
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    v46 = UserId;
    if ( !v33 )
      goto LABEL_50;
    EntityDefinitely = UserShopMaster__GetEntityDefinitely(v33, UserId, v43->fields.id, 0LL);
    if ( EntityDefinitely )
    {
      if ( EntityDefinitely->fields.num >= v43->fields.limitNum )
        break;
    }
    if ( !Master_WarQuestSelectionMaster )
      sub_B5D69C(EntityDefinitely, v48);
  }
  v54 = 162;
LABEL_39:
  v60 = v54;
  v55 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v56 = 0LL;
    v57 = &v55->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
    {
      ++v56;
      v57 += 4;
      if ( v56 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_43;
    }
    v58 = (__int64)&v55->vtable[*v57].method;
  }
  else
  {
LABEL_43:
    v58 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v49);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v58)(Enumerator, *(_QWORD *)(v58 + 8));
  if ( v60 != 160 )
    LOBYTE(i) = 0;
  return i & 1;
}


bool __fastcall ShopMaster__IsEventCloseWithItemPurchase(ShopMaster_o *this, int32_t eventId, const MethodInfo *method)
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
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int64_t Instance; // x0
  __int64 v49; // x1
  System_Collections_Generic_Dictionary_int__int__o *v50; // x21
  int32_t v51; // w22
  int64_t v52; // x23
  __int64 v53; // x10
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x24
  int v55; // w24
  bool v56; // w0
  int32_t v57; // w1
  int32_t v58; // w8
  const MethodInfo_2F0AE58 *v59; // x3
  int32_t v60; // w2
  unsigned int Count; // w0
  System_Int32_array *v62; // x19
  int max_length; // w8
  unsigned int v64; // w9
  __int64 v66; // x0
  int32_t value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42EA679 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserShopMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Count__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Values__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&int___TypeInfo, v33, v34, v35);
    sub_B5D5C4(&NetworkManager_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&ShopEntity_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__int__CopyTo__, v45, v46, v47);
    byte_42EA679 = 1;
  }
  value = 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserShopMaster___);
  v50 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v50,
    (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  Instance = (int64_t)this->fields.list;
  if ( !Instance )
    goto LABEL_26;
  v51 = 0;
  while ( 1 )
  {
    Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v51 >= (int)Instance )
      break;
    Instance = (int64_t)this->fields.list;
    if ( !Instance )
      goto LABEL_26;
    Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                          (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                          v51,
                          (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_26;
    v52 = Instance;
    v53 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v53
      || *(ShopEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v53 - 8) != ShopEntity_TypeInfo )
    {
      goto LABEL_26;
    }
    if ( *(_DWORD *)(Instance + 24) == eventId )
    {
      value = 0;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_26;
      MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserShopMaster___);
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
                            *(_DWORD *)(v52 + 16),
                            0LL);
      if ( !Instance || !v50 )
        goto LABEL_26;
      v55 = *(_DWORD *)(Instance + 28);
      v56 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
              v50,
              *(_DWORD *)(v52 + 20),
              &value,
              (const MethodInfo_2F0CA68 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
      v57 = *(_DWORD *)(v52 + 20);
      if ( v56 )
      {
        System_Collections_Generic_Dictionary_int__int___Remove(
          v50,
          v57,
          (const MethodInfo_2F0C750 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
        v58 = value;
        if ( (value & 0x80000000) != 0 )
        {
          v58 = -value;
          value = -value;
        }
        v57 = *(_DWORD *)(v52 + 20);
        v59 = (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v60 = v58 + v55;
      }
      else
      {
        v59 = (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v60 = -v55;
      }
      System_Collections_Generic_Dictionary_int__int___Add(v50, v57, v60, v59);
    }
    Instance = (int64_t)this->fields.list;
    ++v51;
    if ( !Instance )
      goto LABEL_26;
  }
  if ( !v50 )
    goto LABEL_26;
  if ( !System_Collections_Generic_Dictionary_int__int___get_Count(
          v50,
          (const MethodInfo_2F0AA58 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__) )
    return 1;
  Count = System_Collections_Generic_Dictionary_int__int___get_Count(
            v50,
            (const MethodInfo_2F0AA58 *)Method_System_Collections_Generic_Dictionary_int__int__get_Count__);
  v62 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, Count);
  Instance = (int64_t)System_Collections_Generic_Dictionary_int__int___get_Values(
                        v50,
                        (const MethodInfo_2F0AC00 *)Method_System_Collections_Generic_Dictionary_int__int__get_Values__);
  if ( !Instance
    || (System_Collections_Generic_Dictionary_ValueCollection_int__int___CopyTo(
          (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
          v62,
          0,
          (const MethodInfo_23B7840 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__int__CopyTo__),
        !v62) )
  {
LABEL_26:
    sub_B5D69C(Instance, v49);
  }
  max_length = v62->max_length;
  if ( max_length < 1 )
    return 1;
  v64 = 0;
  while ( 1 )
  {
    if ( v64 >= max_length )
    {
      v66 = sub_B5D6C8(Instance);
      sub_B5D668(v66, 0LL);
    }
    if ( v62->m_Items[v64 + 1] <= 0 )
      break;
    if ( (int)++v64 >= max_length )
      return 1;
  }
  return 0;
}


bool __fastcall ShopMaster__IsHideItem(ShopMaster_o *this, int32_t eventId, int32_t id, const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  void *Instance; // x0
  __int64 v10; // x1
  int v11; // w8
  __int64 v12; // x9
  __int64 v13; // x11
  __int64 v15; // x0

  if ( (byte_42EA674 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventItemDisplayMaster___, eventId, id, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42EA674 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventItemDisplayMaster___)) == 0LL )
  {
LABEL_15:
    sub_B5D69C(Instance, v10);
  }
  Instance = EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
               (EventItemDisplayMaster_o *)Instance,
               eventId,
               8,
               0,
               0LL);
  if ( !Instance )
    return 1;
  v11 = *((_DWORD *)Instance + 6);
  if ( v11 < 1 )
    return 1;
  v12 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v12 >= v11 )
    {
      v15 = sub_B5D6C8(Instance);
      sub_B5D668(v15, 0LL);
    }
    v13 = *((_QWORD *)Instance + v12 + 4);
    if ( !v13 )
      goto LABEL_15;
    if ( *(_DWORD *)(v13 + 32) == id && *(_DWORD *)(v13 + 28) == 1 )
      return 0;
    if ( (int)++v12 >= v11 )
      return 1;
  }
}


bool __fastcall ShopMaster__IsOpenPurchaseCloseShop(
        ShopMaster_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ShopMaster_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int32_t eventId; // w21
  EventDetailEntity_o *Entity; // x0

  v5 = this;
  if ( (byte_42EA675 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventDetailMaster___, (_DWORD)shopEntity, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    this = (ShopMaster_o *)sub_B5D5C4(
                             &Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__,
                             v9,
                             v10,
                             v11);
    byte_42EA675 = 1;
  }
  if ( !shopEntity )
    goto LABEL_14;
  eventId = shopEntity->fields.eventId;
  if ( eventId )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventDetailMaster___);
    if ( this )
    {
      Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                        eventId,
                                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( Entity && EventDetailEntity__IsClosePurchaseShop(Entity, 0LL) )
        return ShopMaster__IsPurchaseCloseEventShopItem(v5, shopEntity->fields.baseShopId, method);
      return 0;
    }
LABEL_14:
    sub_B5D69C(this, shopEntity);
  }
  if ( shopEntity->fields.shopType != 16 )
    return ShopMaster__IsPurchaseCloseEventShopItem(v5, shopEntity->fields.baseShopId, method);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopMaster__IsPurchaseCloseEventShopItem(
        ShopMaster_o *this,
        int32_t baseShopId,
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
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int64_t list; // x0
  int32_t Count; // w0
  int32_t v29; // w22
  int32_t v30; // w23
  int64_t v31; // x20
  __int64 v32; // x9
  const MethodInfo *v34; // x2
  ShopReleaseMaster_o *v35; // x21
  int32_t TargetShopGroupId; // w22
  const MethodInfo *v37; // x2
  ShopGroupEntity_array *TargetEntityList; // x0
  const MethodInfo *v39; // x3
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserShopEntity_o *EntityDefinitely; // x0
  ShopMaster_o *v42; // x0
  int64_t *v43; // x1
  int64_t *v44; // x2
  int32_t v45; // w3
  const MethodInfo *v46; // x4

  v4 = baseShopId;
  if ( (byte_42EA677 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      baseShopId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopGroupMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopReleaseMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserShopMaster___, v15, v16, v17);
    sub_B5D5C4(&NetworkManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&ShopEntity_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    byte_42EA677 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 1;
  v29 = Count;
  v30 = 0;
  while ( 1 )
  {
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_28;
    list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                      (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                      v30,
                      (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_28;
    *(_QWORD *)&baseShopId = ShopEntity_TypeInfo;
    v31 = list;
    v32 = *(&ShopEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v32
      || *(ShopEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v32 - 8) != ShopEntity_TypeInfo )
    {
      break;
    }
    if ( *(_DWORD *)(list + 20) == v4 )
    {
      list = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( list )
      {
        list = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)list,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopReleaseMaster___);
        if ( list )
        {
          v35 = (ShopReleaseMaster_o *)list;
          TargetShopGroupId = ShopReleaseMaster__GetTargetShopGroupId((ShopReleaseMaster_o *)list, v4, v34);
          list = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( list )
          {
            list = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)list,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopGroupMaster___);
            if ( list )
            {
              TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)list, TargetShopGroupId, v37);
              if ( TargetEntityList && *(_QWORD *)&TargetEntityList->max_length )
                return ShopReleaseMaster__CondClearCheck(v35, v4, 82, v39);
              list = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( list )
              {
                MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)list,
                                                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserShopMaster___);
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
                                       v4,
                                       0LL);
                  return EntityDefinitely && EntityDefinitely->fields.num >= *(_DWORD *)(v31 + 88);
                }
              }
            }
          }
        }
      }
LABEL_28:
      sub_B5D69C(list, *(_QWORD *)&baseShopId);
    }
    if ( ++v30 >= v29 )
      return 1;
  }
  v42 = (ShopMaster_o *)sub_B5D990(list);
  return ShopMaster__GetEnableEventPeriod(v42, v43, v44, v45, v46);
}


bool __fastcall ShopMaster__PurchaseCloseEventShop(
        ShopMaster_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t eventId; // w20
  EventDetailEntity_o *Entity; // x0

  if ( (byte_42EA676 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventDetailMaster___, (_DWORD)shopEntity, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    this = (ShopMaster_o *)sub_B5D5C4(
                             &Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__,
                             v8,
                             v9,
                             v10);
    byte_42EA676 = 1;
  }
  if ( !shopEntity )
    goto LABEL_12;
  eventId = shopEntity->fields.eventId;
  if ( !eventId )
    return shopEntity->fields.shopType == 12;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !this )
LABEL_12:
    sub_B5D69C(this, shopEntity);
  Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                    eventId,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
    return EventDetailEntity__IsClosePurchaseShop(Entity, 0LL);
  return shopEntity->fields.shopType == 12;
}


void __fastcall ShopMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ShopMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5DC5 & 1) == 0 )
  {
    sub_B5D5C4(&ShopMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5DC5 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ShopMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ShopMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ShopMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableEntitiyList_b__2_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableEntitiyList_b__3_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableEventEntitiyList_b__6_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEnableEventEntityList_b__7_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEventEntitiyList_b__4_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetEventItemList_b__11_0(
        ShopMaster___c_o *this,
        ItemEntity_o *a,
        ItemEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall ShopMaster___c___GetOpenedEventEntitiyList_b__5_0(
        ShopMaster___c_o *this,
        ShopEntity_o *a,
        ShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.priority - b->fields.priority;
}