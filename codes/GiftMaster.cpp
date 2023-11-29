void __fastcall GiftMaster___ctor(GiftMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FC122 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_GiftMaster__GiftEntity__string___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity____ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__List_GiftEntity___TypeInfo, v7);
    byte_40FC122 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_Dictionary_int__List_GiftEntity___TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v8,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity____ctor__);
  this->fields.idToGiftEntityListDictionary = (struct System_Collections_Generic_Dictionary_int__List_GiftEntity___o *)v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.idToGiftEntityListDictionary,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    23,
    (const MethodInfo_266F73C *)Method_DataMasterBase_GiftMaster__GiftEntity__string___ctor__);
}


void __fastcall GiftMaster__AddIdToGiftEntityListDictionary(
        GiftMaster_o *this,
        GiftEntity_o *giftEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_int__List_GiftEntity___o *idToGiftEntityListDictionary; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x21
  struct System_Collections_Generic_Dictionary_int__List_GiftEntity___o *v15; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FC124 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__, giftEntity);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___set_Item__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_GiftEntity__TypeInfo, v8);
    byte_40FC124 = 1;
  }
  value = 0LL;
  if ( !giftEntity )
    goto LABEL_10;
  idToGiftEntityListDictionary = this->fields.idToGiftEntityListDictionary;
  if ( !idToGiftEntityListDictionary )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)idToGiftEntityListDictionary,
          giftEntity->fields.id,
          &value,
          (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
  {
    v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                                                                    v10,
                                                                                                    v11,
                                                                                                    v12,
                                                                                                    v13);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v14,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    value = (WarBoardEvalValueSquare_CalcEval_o *)v14;
    v15 = this->fields.idToGiftEntityListDictionary;
    if ( !v15 )
      goto LABEL_10;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v15,
      giftEntity->fields.id,
      (WarBoardAIRoute_RouteData_o *)v14,
      (const MethodInfo_2DE9394 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___set_Item__);
  }
  if ( !value )
LABEL_10:
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
    (EventMissionProgressRequest_Argument_ProgressData_o *)giftEntity,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
}


void __fastcall GiftMaster__CreateIdToGiftEntityListDictionary(GiftMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_int__List_GiftEntity___o *idToGiftEntityListDictionary; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  GiftEntity_o *v19; // x0
  const MethodInfo *v20; // x2
  __int64 v21; // x10
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0

  if ( (byte_40FC123 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Clear__, v3);
    sub_B16FFC(&GiftEntity_TypeInfo, v4);
    sub_B16FFC(&System_IDisposable_TypeInfo, v5);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v7);
    byte_40FC123 = 1;
  }
  idToGiftEntityListDictionary = this->fields.idToGiftEntityListDictionary;
  if ( !idToGiftEntityListDictionary
    || (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)idToGiftEntityListDictionary,
          (const MethodInfo_2DE9598 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Clear__),
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL) )
  {
    sub_B170D4();
  }
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
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
          goto LABEL_17;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_17:
      v18 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (GiftEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                            Enumerator,
                            *(_QWORD *)(v18 + 8));
    if ( v19 )
    {
      v21 = *(&GiftEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19->klass->_2.bitflags2 + 1) >= (unsigned int)v21
        && (GiftEntity_c *)v19->klass->_2.typeHierarchy[v21 - 1] == GiftEntity_TypeInfo )
      {
        GiftMaster__AddIdToGiftEntityListDictionary(this, v19, v20);
      }
    }
  }
  v22 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      ++v23;
      v24 += 4;
      if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_27;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_27:
    v25 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
}


// local variable allocation has failed, the output may be wrong!
GiftEntity_o *__fastcall GiftMaster__GetEntity(
        GiftMaster_o *this,
        int32_t id,
        int32_t type,
        int32_t objectId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FC120 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_GiftMaster__GiftEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_40FC120 = 1;
  }
  PK = GiftEntity__CreatePK(id, type, objectId, *(const MethodInfo **)&objectId);
  return (GiftEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                           (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                           PK,
                           (const MethodInfo_266F7D8 *)Method_DataMasterBase_GiftMaster__GiftEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
GiftEntity_array *__fastcall GiftMaster__GetGiftListById(GiftMaster_o *this, int32_t giftId, const MethodInfo *method)
{
  System_Collections_Generic_List_GiftEntity__o *ListById; // x0

  if ( (byte_40FC128 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, *(_QWORD *)&giftId);
    byte_40FC128 = 1;
  }
  ListById = GiftMaster__GetListById(this, giftId, method);
  if ( !ListById )
    sub_B170D4();
  return (GiftEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)ListById,
                               (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_GiftEntity__o *__fastcall GiftMaster__GetListById(
        GiftMaster_o *this,
        int32_t giftId,
        const MethodInfo *method)
{
  int32_t priorGiftId; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  WebViewManager_o *Instance; // x0
  GiftAddMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v14; // x2
  GiftAddEntity_o *ValidPriorDataById; // x0
  struct System_Int32_array *priorGiftIconIds; // x21
  char v17; // w22
  struct System_Collections_Generic_Dictionary_int__List_GiftEntity___o *idToGiftEntityListDictionary; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x19
  __int64 v25; // x20
  int size; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v27; // x8
  int max_length; // w8
  __int64 v29; // x8
  int32_t v30; // w9
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-28h] BYREF

  priorGiftId = giftId;
  if ( (byte_40FC129 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftAddMaster___, *(_QWORD *)&giftId);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_GiftEntity___, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_GiftEntity__TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40FC129 = 1;
  }
  value = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = (GiftAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftAddMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  ValidPriorDataById = GiftAddMaster__GetValidPriorDataById(MasterData_WarQuestSelectionMaster, priorGiftId, v14);
  if ( ValidPriorDataById )
  {
    priorGiftId = ValidPriorDataById->fields.priorGiftId;
    priorGiftIconIds = ValidPriorDataById->fields.priorGiftIconIds;
    v17 = 1;
  }
  else
  {
    v17 = 0;
    priorGiftIconIds = 0LL;
  }
  idToGiftEntityListDictionary = this->fields.idToGiftEntityListDictionary;
  if ( !idToGiftEntityListDictionary )
    goto LABEL_25;
  v19 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)idToGiftEntityListDictionary,
          priorGiftId,
          &value,
          (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
  if ( !v19 )
  {
    v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                                                                    v20,
                                                                                                    v21,
                                                                                                    v22,
                                                                                                    v23);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v24,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    return (System_Collections_Generic_List_GiftEntity__o *)v24;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value;
  if ( priorGiftIconIds )
  {
    if ( value )
    {
      v25 = 0LL;
      while ( 1 )
      {
        size = v24->fields._size;
        if ( (int)v25 >= size )
          return (System_Collections_Generic_List_GiftEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v24,
                                                                    (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_GiftEntity___);
        if ( size <= (unsigned int)v25 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v27 = v24->fields._items->m_Items[v25];
        if ( !v27 )
          break;
        LOBYTE(v27[1].monitor) = v17;
        max_length = priorGiftIconIds->max_length;
        if ( (int)v25 >= max_length )
        {
          v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value;
          return (System_Collections_Generic_List_GiftEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v24,
                                                                    (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_GiftEntity___);
        }
        if ( value )
        {
          if ( LODWORD(value->fields.eval) <= (unsigned int)v25 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          if ( (unsigned int)v25 >= max_length )
          {
            sub_B17100(v19, v20, v21);
            sub_B170A0();
          }
          v29 = *(_QWORD *)(*(_QWORD *)&value->fields.viewpoint + 8 * v25 + 32);
          if ( v29 )
          {
            v30 = priorGiftIconIds->m_Items[++v25];
            *(_DWORD *)(v29 + 44) = v30;
            v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value;
            if ( value )
              continue;
          }
        }
        break;
      }
    }
LABEL_25:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_GiftEntity__o *)v24;
}


void __fastcall GiftMaster__OnListChangedImplementation(
        GiftMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x21
  System_Collections_IList_c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_NotImplementedException_o *v19; // x0
  __int64 v20; // x21
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  int *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  System_Collections_IEnumerator_c **v27; // x11
  __int64 v28; // x0
  __int64 v29; // x0
  GiftEntity_o *v30; // x22
  __int64 v31; // x8
  __int64 v32; // x10
  const MethodInfo *v33; // x2
  __int64 v34; // x0
  __int64 v35; // x8
  __int64 v36; // x21
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0
  struct System_Collections_IList_o *newItems; // x20
  System_Collections_IList_c *v41; // x8
  unsigned __int64 v42; // x10
  int32_t *v43; // x11
  __int64 v44; // x0
  __int64 v45; // x20
  __int64 v46; // x8
  unsigned __int64 v47; // x10
  int *v48; // x11
  __int64 v49; // x0
  __int64 v50; // x8
  unsigned __int64 v51; // x10
  System_Collections_IEnumerator_c **v52; // x11
  __int64 v53; // x0
  __int64 v54; // x0
  GiftEntity_o *v55; // x21
  __int64 v56; // x8
  __int64 v57; // x10
  const MethodInfo *v58; // x2
  int v59; // w23
  __int64 v60; // x0
  __int64 v61; // x8
  __int64 v62; // x20
  unsigned __int64 v63; // x10
  int *v64; // x11
  __int64 v65; // x0
  int v66[2]; // [xsp+0h] [xbp-40h]
  int v67; // [xsp+8h] [xbp-38h]

  if ( (byte_40FC126 & 1) == 0 )
  {
    sub_B16FFC(&GiftEntity_TypeInfo, e);
    sub_B16FFC(&System_IDisposable_TypeInfo, v5);
    sub_B16FFC(&System_Collections_IEnumerable_TypeInfo, v6);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v7);
    byte_40FC126 = 1;
  }
  v67 = 0;
  if ( !e )
    sub_B170D4();
  action = e->fields._action;
  if ( action >= 3 )
  {
    if ( action == 3 )
      return;
    if ( action != 4 )
    {
      v14 = sub_B17000(&System_NotImplementedException_TypeInfo);
      v19 = (System_NotImplementedException_o *)sub_B170CC(v14, v15, v16, v17, v18);
      System_NotImplementedException___ctor(v19, 0LL);
      sub_B17000(&Method_GiftMaster_OnListChangedImplementation__);
      sub_B170A0();
    }
    goto LABEL_81;
  }
  oldItems = e->fields._oldItems;
  if ( oldItems )
  {
    klass = oldItems->klass;
    if ( *(_WORD *)&oldItems->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&oldItems->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AAFEF8(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL);
    }
    v20 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
            oldItems,
            *(_QWORD *)(p_method + 8));
    if ( !v20 )
      sub_B170D4();
    while ( 1 )
    {
      v21 = *(_QWORD *)v20;
      if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
      {
        v22 = 0LL;
        v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v22;
          v23 += 4;
          if ( v22 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
            goto LABEL_21;
        }
        v24 = v21 + 16LL * *v23 + 312;
      }
      else
      {
LABEL_21:
        v24 = sub_AAFEF8(v20, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
        break;
      v25 = *(_QWORD *)v20;
      if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
      {
        v26 = 0LL;
        v27 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v25 + 176) + 8LL);
        while ( *(v27 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v26;
          v27 += 2;
          if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
            goto LABEL_28;
        }
        v28 = v25 + 16LL * (*(_DWORD *)v27 + 1) + 312;
      }
      else
      {
LABEL_28:
        v28 = sub_AAFEF8(v20, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v20, *(_QWORD *)(v28 + 8));
      v30 = (GiftEntity_o *)v29;
      if ( v29 )
      {
        v31 = *(_QWORD *)v29;
        v32 = *(&GiftEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v29 + 300LL) >= (unsigned int)v32
          && *(GiftEntity_c **)(*(_QWORD *)(v31 + 200) + 8 * v32 - 8) == GiftEntity_TypeInfo )
        {
          if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v31 + 376))(v29, *(_QWORD *)(v31 + 384)) )
            GiftMaster__RemoveIdToGiftEntityListDictionary(this, v30, v33);
        }
      }
    }
    v66[0] = 117;
    v67 = 1;
    v34 = sub_B170BC(v20, System_IDisposable_TypeInfo);
    if ( v34 )
    {
      v35 = *(_QWORD *)v34;
      v36 = v34;
      if ( *(_WORD *)(*(_QWORD *)v34 + 298LL) )
      {
        v37 = 0LL;
        v38 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
        {
          ++v37;
          v38 += 4;
          if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v34 + 298LL) )
            goto LABEL_40;
        }
        v39 = v35 + 16LL * *v38 + 312;
      }
      else
      {
LABEL_40:
        v39 = sub_AAFEF8(v34, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v39)(v36, *(_QWORD *)(v39 + 8));
    }
    v67 = 0;
  }
  newItems = e->fields._newItems;
  if ( newItems )
  {
    v41 = newItems->klass;
    if ( *(_WORD *)&newItems->klass->_2.bitflags1 )
    {
      v42 = 0LL;
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerable_c **)v43 - 1) != System_Collections_IEnumerable_TypeInfo )
      {
        ++v42;
        v43 += 4;
        if ( v42 >= *(unsigned __int16 *)&newItems->klass->_2.bitflags1 )
          goto LABEL_49;
      }
      v44 = (__int64)&v41->vtable[*v43].method;
    }
    else
    {
LABEL_49:
      v44 = sub_AAFEF8(newItems, System_Collections_IEnumerable_TypeInfo, 0LL);
    }
    v45 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v44)(newItems, *(_QWORD *)(v44 + 8));
    if ( !v45 )
      sub_B170D4();
    while ( 1 )
    {
      v46 = *(_QWORD *)v45;
      if ( *(_WORD *)(*(_QWORD *)v45 + 298LL) )
      {
        v47 = 0LL;
        v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v48 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v47;
          v48 += 4;
          if ( v47 >= *(unsigned __int16 *)(*(_QWORD *)v45 + 298LL) )
            goto LABEL_56;
        }
        v49 = v46 + 16LL * *v48 + 312;
      }
      else
      {
LABEL_56:
        v49 = sub_AAFEF8(v45, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v45, *(_QWORD *)(v49 + 8)) & 1) == 0 )
        break;
      v50 = *(_QWORD *)v45;
      if ( *(_WORD *)(*(_QWORD *)v45 + 298LL) )
      {
        v51 = 0LL;
        v52 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v50 + 176) + 8LL);
        while ( *(v52 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v51;
          v52 += 2;
          if ( v51 >= *(unsigned __int16 *)(*(_QWORD *)v45 + 298LL) )
            goto LABEL_63;
        }
        v53 = v50 + 16LL * (*(_DWORD *)v52 + 1) + 312;
      }
      else
      {
LABEL_63:
        v53 = sub_AAFEF8(v45, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v54 = (*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v45, *(_QWORD *)(v53 + 8));
      v55 = (GiftEntity_o *)v54;
      if ( v54 )
      {
        v56 = *(_QWORD *)v54;
        v57 = *(&GiftEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v54 + 300LL) >= (unsigned int)v57
          && *(GiftEntity_c **)(*(_QWORD *)(v56 + 200) + 8 * v57 - 8) == GiftEntity_TypeInfo
          && (*(__int64 (__fastcall **)(__int64, _QWORD))(v56 + 376))(v54, *(_QWORD *)(v56 + 384)) )
        {
          GiftMaster__AddIdToGiftEntityListDictionary(this, v55, v58);
        }
      }
    }
    v66[0] = 213;
    v59 = ++v67;
    v60 = sub_B170BC(v45, System_IDisposable_TypeInfo);
    if ( v60 )
    {
      v61 = *(_QWORD *)v60;
      v62 = v60;
      if ( *(_WORD *)(*(_QWORD *)v60 + 298LL) )
      {
        v63 = 0LL;
        v64 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v64 - 1) != System_IDisposable_TypeInfo )
        {
          ++v63;
          v64 += 4;
          if ( v63 >= *(unsigned __int16 *)(*(_QWORD *)v60 + 298LL) )
            goto LABEL_75;
        }
        v65 = v61 + 16LL * *v64 + 312;
      }
      else
      {
LABEL_75:
        v65 = sub_AAFEF8(v60, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v65)(v62, *(_QWORD *)(v65 + 8));
    }
    if ( v59 && v66[v59 - 1] == 213 )
    {
      v67 = v59 - 1;
      return;
    }
LABEL_81:
    GiftMaster__CreateIdToGiftEntityListDictionary(this, (const MethodInfo *)e);
  }
}


void __fastcall GiftMaster__RemoveIdToGiftEntityListDictionary(
        GiftMaster_o *this,
        GiftEntity_o *giftEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_int__List_GiftEntity___o *idToGiftEntityListDictionary; // x0
  struct System_Collections_Generic_Dictionary_int__List_GiftEntity___o *v9; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FC125 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Remove__, giftEntity);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__Remove__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v7);
    byte_40FC125 = 1;
  }
  value = 0LL;
  if ( !giftEntity )
    goto LABEL_12;
  idToGiftEntityListDictionary = this->fields.idToGiftEntityListDictionary;
  if ( !idToGiftEntityListDictionary )
    goto LABEL_12;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)idToGiftEntityListDictionary,
          giftEntity->fields.id,
          &value,
          (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
    return;
  if ( !value )
    goto LABEL_12;
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)value,
    (WarBoardManager_TaskList_o *)giftEntity,
    (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_GiftEntity__Remove__);
  if ( !value )
    goto LABEL_12;
  if ( LODWORD(value->fields.eval) )
    return;
  v9 = this->fields.idToGiftEntityListDictionary;
  if ( !v9 )
LABEL_12:
    sub_B170D4();
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v9,
    giftEntity->fields.id,
    (const MethodInfo_2DEAD98 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Remove__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GiftMaster__TryGetEntity(
        GiftMaster_o *this,
        GiftEntity_o **entity,
        int32_t id,
        int32_t type,
        int32_t objectId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40FC121 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_GiftMaster__GiftEntity__string__TryGetEntity__, entity);
    byte_40FC121 = 1;
  }
  PK = GiftEntity__CreatePK(id, type, objectId, *(const MethodInfo **)&type);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_GiftMaster__GiftEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
GiftEntity_o *__fastcall GiftMaster__getDataById(GiftMaster_o *this, int32_t id, const MethodInfo *method)
{
  int32_t priorGiftId; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  GiftAddMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v11; // x2
  GiftAddEntity_o *ValidPriorDataById; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Int32_array *priorGiftIconIds; // x8
  int32_t v16; // w22
  bool v17; // w21
  struct System_Collections_Generic_Dictionary_int__List_GiftEntity___o *idToGiftEntityListDictionary; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  GiftEntity_o *v23; // x20
  GiftEntity_o *v24; // x19
  const MethodInfo *v25; // x4
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-28h] BYREF

  priorGiftId = id;
  if ( (byte_40FC127 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftAddMaster___, *(_QWORD *)&id);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__, v5);
    sub_B16FFC(&GiftEntity_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FC127 = 1;
  }
  value = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (GiftAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftAddMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  ValidPriorDataById = GiftAddMaster__GetValidPriorDataById(MasterData_WarQuestSelectionMaster, priorGiftId, v11);
  if ( ValidPriorDataById )
  {
    priorGiftIconIds = ValidPriorDataById->fields.priorGiftIconIds;
    if ( !priorGiftIconIds )
      goto LABEL_18;
    if ( !priorGiftIconIds->max_length )
    {
      sub_B17100(ValidPriorDataById, v13, v14);
      sub_B170A0();
    }
    priorGiftId = ValidPriorDataById->fields.priorGiftId;
    v16 = priorGiftIconIds->m_Items[1];
    v17 = 1;
  }
  else
  {
    v17 = 0;
    v16 = 0;
  }
  idToGiftEntityListDictionary = this->fields.idToGiftEntityListDictionary;
  if ( !idToGiftEntityListDictionary )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)idToGiftEntityListDictionary,
          priorGiftId,
          &value,
          (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
    return 0LL;
  if ( !value )
LABEL_18:
    sub_B170D4();
  if ( !LODWORD(value->fields.eval) )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v23 = *(GiftEntity_o **)(*(_QWORD *)&value->fields.viewpoint + 32LL);
  v24 = (GiftEntity_o *)sub_B170CC(GiftEntity_TypeInfo, v19, v20, v21, v22);
  GiftEntity___ctor_28860524(v24, v23, v16, v17, v25);
  return v24;
}