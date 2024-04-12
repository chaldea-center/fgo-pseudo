void __fastcall GiftMaster___ctor(GiftMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B1B43 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_GiftMaster__GiftEntity__string___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity____ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__List_GiftEntity___TypeInfo);
    byte_42B1B43 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__List_GiftEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v3,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity____ctor__);
  this->fields.idToGiftEntityListDictionary = (struct System_Collections_Generic_Dictionary_int__List_GiftEntity___o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.idToGiftEntityListDictionary,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    24,
    (const MethodInfo_23E268C *)Method_DataMasterBase_GiftMaster__GiftEntity__string___ctor__);
}


void __fastcall GiftMaster__AddIdToGiftEntityListDictionary(
        GiftMaster_o *this,
        GiftEntity_o *giftEntity,
        const MethodInfo *method)
{
  GiftMaster_o *v4; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  v4 = this;
  if ( (byte_42B1B45 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___set_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    this = (GiftMaster_o *)sub_B52984(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    byte_42B1B45 = 1;
  }
  value = 0LL;
  if ( !giftEntity )
    goto LABEL_10;
  this = (GiftMaster_o *)v4->fields.idToGiftEntityListDictionary;
  if ( !this )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this,
          giftEntity->fields.id,
          &value,
          (const MethodInfo_2F29A2C *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
  {
    v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v5,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    value = (WarBoardEvalValueSquare_CalcEval_o *)v5;
    this = (GiftMaster_o *)v4->fields.idToGiftEntityListDictionary;
    if ( !this )
      goto LABEL_10;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
      giftEntity->fields.id,
      (WarBoardAIRoute_RouteData_o *)v5,
      (const MethodInfo_2F27CE0 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___set_Item__);
  }
  this = (GiftMaster_o *)value;
  if ( !value )
LABEL_10:
    sub_B52A5C(this, giftEntity);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
    (EventMissionProgressRequest_Argument_ProgressData_o *)giftEntity,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
}


void __fastcall GiftMaster__CreateIdToGiftEntityListDictionary(GiftMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *idToGiftEntityListDictionary; // x0
  __int64 v4; // x1
  __int64 v5; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  GiftEntity_o *v16; // x0
  const MethodInfo *v17; // x2
  __int64 v18; // x10
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0

  if ( (byte_42B1B44 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Clear__);
    sub_B52984(&GiftEntity_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    byte_42B1B44 = 1;
  }
  idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.idToGiftEntityListDictionary;
  if ( !idToGiftEntityListDictionary
    || (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
          idToGiftEntityListDictionary,
          (const MethodInfo_2F27EE4 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Clear__),
        (idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.list) == 0LL) )
  {
    sub_B52A5C(idToGiftEntityListDictionary, method);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)idToGiftEntityListDictionary,
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
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v5);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
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
          goto LABEL_17;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_17:
      v15 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v11);
    }
    v16 = (GiftEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                            Enumerator,
                            *(_QWORD *)(v15 + 8));
    if ( v16 )
    {
      v18 = *(&GiftEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v16->klass->_2.bitflags2 + 1) >= (unsigned int)v18
        && (GiftEntity_c *)v16->klass->_2.typeHierarchy[v18 - 1] == GiftEntity_TypeInfo )
      {
        GiftMaster__AddIdToGiftEntityListDictionary(this, v16, v17);
      }
    }
  }
  v19 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v20 = 0LL;
    v21 = &v19->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
    {
      ++v20;
      v21 += 4;
      if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_27;
    }
    v22 = (__int64)&v19->vtable[*v21].method;
  }
  else
  {
LABEL_27:
    v22 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v11);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(Enumerator, *(_QWORD *)(v22 + 8));
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

  if ( (byte_42B1B41 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_GiftMaster__GiftEntity__string__GetEntity__);
    byte_42B1B41 = 1;
  }
  PK = GiftEntity__CreatePK(id, type, objectId, *(const MethodInfo **)&objectId);
  return (GiftEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                           (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                           PK,
                           (const MethodInfo_23E2728 *)Method_DataMasterBase_GiftMaster__GiftEntity__string__GetEntity__);
}


GiftEntity_array *__fastcall GiftMaster__GetGiftListById(GiftMaster_o *this, int32_t giftId, const MethodInfo *method)
{
  System_Collections_Generic_List_GiftEntity__o *ListById; // x0
  __int64 v6; // x1

  if ( (byte_42B1B49 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    byte_42B1B49 = 1;
  }
  ListById = GiftMaster__GetListById(this, giftId, method);
  if ( !ListById )
    sub_B52A5C(0LL, v6);
  return (GiftEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)ListById,
                               (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
}


System_Collections_Generic_List_GiftEntity__o *__fastcall GiftMaster__GetListById(
        GiftMaster_o *this,
        int32_t giftId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  GiftAddEntity_o *ValidPriorDataById; // x0
  struct System_Int32_array *priorGiftIconIds; // x21
  char v10; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x20
  int size; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v14; // x8
  int max_length; // w8
  __int64 v16; // x8
  int32_t v17; // w9
  __int64 v19; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B1B4A & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_GiftAddMaster___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
    sub_B52984(&Method_System_Linq_Enumerable_ToList_GiftEntity___);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B1B4A = 1;
  }
  value = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_GiftAddMaster___);
  if ( !Instance )
    goto LABEL_25;
  ValidPriorDataById = GiftAddMaster__GetValidPriorDataById((GiftAddMaster_o *)Instance, giftId, v7);
  if ( ValidPriorDataById )
  {
    giftId = ValidPriorDataById->fields.priorGiftId;
    priorGiftIconIds = ValidPriorDataById->fields.priorGiftIconIds;
    v10 = 1;
  }
  else
  {
    v10 = 0;
    priorGiftIconIds = 0LL;
  }
  Instance = (DataManager_o *)this->fields.idToGiftEntityListDictionary;
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                                (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)Instance,
                                giftId,
                                &value,
                                (const MethodInfo_2F29A2C *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v11,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    return (System_Collections_Generic_List_GiftEntity__o *)v11;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value;
  if ( priorGiftIconIds )
  {
    if ( value )
    {
      v12 = 0LL;
      while ( 1 )
      {
        size = v11->fields._size;
        if ( (int)v12 >= size )
          return (System_Collections_Generic_List_GiftEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v11,
                                                                    (const MethodInfo_1B714E4 *)Method_System_Linq_Enumerable_ToList_GiftEntity___);
        if ( size <= (unsigned int)v12 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v14 = v11->fields._items->m_Items[v12];
        if ( !v14 )
          break;
        LOBYTE(v14[1].monitor) = v10;
        max_length = priorGiftIconIds->max_length;
        if ( (int)v12 >= max_length )
        {
          v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value;
          return (System_Collections_Generic_List_GiftEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v11,
                                                                    (const MethodInfo_1B714E4 *)Method_System_Linq_Enumerable_ToList_GiftEntity___);
        }
        if ( value )
        {
          if ( LODWORD(value->fields.eval) <= (unsigned int)v12 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          if ( (unsigned int)v12 >= max_length )
          {
            v19 = sub_B52A88(Instance);
            sub_B52A28(v19, 0LL);
          }
          v16 = *(_QWORD *)(*(_QWORD *)&value->fields.viewpoint + 8 * v12 + 32);
          if ( v16 )
          {
            v17 = priorGiftIconIds->m_Items[++v12];
            *(_DWORD *)(v16 + 44) = v17;
            v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value;
            if ( value )
              continue;
          }
        }
        break;
      }
    }
LABEL_25:
    sub_B52A5C(Instance, v6);
  }
  return (System_Collections_Generic_List_GiftEntity__o *)v11;
}


void __fastcall GiftMaster__OnListChangedImplementation(
        GiftMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  __int64 v3; // x3
  GiftMaster_o *v5; // x19
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x21
  System_Collections_IList_c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v12; // x0
  System_NotImplementedException_o *v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x3
  __int64 v17; // x21
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  int *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x3
  __int64 v23; // x8
  unsigned __int64 v24; // x10
  System_Collections_IEnumerator_c **v25; // x11
  __int64 v26; // x0
  __int64 v27; // x0
  GiftEntity_o *v28; // x22
  __int64 v29; // x8
  __int64 v30; // x10
  const MethodInfo *v31; // x2
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x21
  unsigned __int64 v35; // x10
  int *v36; // x11
  __int64 v37; // x0
  struct System_Collections_IList_o *newItems; // x20
  System_Collections_IList_c *v39; // x8
  unsigned __int64 v40; // x10
  int32_t *v41; // x11
  __int64 v42; // x0
  __int64 v43; // x1
  __int64 v44; // x3
  __int64 v45; // x20
  __int64 v46; // x8
  unsigned __int64 v47; // x10
  int *v48; // x11
  __int64 v49; // x0
  __int64 v50; // x3
  __int64 v51; // x8
  unsigned __int64 v52; // x10
  System_Collections_IEnumerator_c **v53; // x11
  __int64 v54; // x0
  __int64 v55; // x0
  GiftEntity_o *v56; // x21
  __int64 v57; // x8
  __int64 v58; // x10
  const MethodInfo *v59; // x2
  int v60; // w23
  __int64 v61; // x0
  __int64 v62; // x3
  __int64 v63; // x8
  __int64 v64; // x20
  unsigned __int64 v65; // x10
  int *v66; // x11
  __int64 v67; // x0
  int v68[2]; // [xsp+0h] [xbp-40h]
  int v69; // [xsp+8h] [xbp-38h]

  v5 = this;
  if ( (byte_42B1B47 & 1) == 0 )
  {
    sub_B52984(&GiftEntity_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_IEnumerable_TypeInfo);
    this = (GiftMaster_o *)sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    byte_42B1B47 = 1;
  }
  v69 = 0;
  if ( !e )
    sub_B52A5C(this, e);
  action = e->fields._action;
  if ( action >= 3 )
  {
    if ( action == 3 )
      return;
    if ( action != 4 )
    {
      v12 = sub_B52988(&System_NotImplementedException_TypeInfo);
      v13 = (System_NotImplementedException_o *)sub_B52A54(v12);
      System_NotImplementedException___ctor(v13, 0LL);
      v14 = sub_B52988(&Method_GiftMaster_OnListChangedImplementation__);
      sub_B52A28(v13, v14);
    }
    goto LABEL_81;
  }
  oldItems = e->fields._oldItems;
  if ( oldItems )
  {
    klass = oldItems->klass;
    if ( *(_WORD *)&oldItems->klass->_2.bitflags1 )
    {
      v9 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
      {
        ++v9;
        p_offset += 4;
        if ( v9 >= *(unsigned __int16 *)&oldItems->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AEB880(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL, v3);
    }
    v17 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
            oldItems,
            *(_QWORD *)(p_method + 8));
    if ( !v17 )
      sub_B52A5C(0LL, v15);
    while ( 1 )
    {
      v18 = *(_QWORD *)v17;
      if ( *(_WORD *)(*(_QWORD *)v17 + 298LL) )
      {
        v19 = 0LL;
        v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v20 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v19;
          v20 += 4;
          if ( v19 >= *(unsigned __int16 *)(*(_QWORD *)v17 + 298LL) )
            goto LABEL_21;
        }
        v21 = v18 + 16LL * *v20 + 312;
      }
      else
      {
LABEL_21:
        v21 = sub_AEB880(v17, System_Collections_IEnumerator_TypeInfo, 0LL, v16);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v17, *(_QWORD *)(v21 + 8)) & 1) == 0 )
        break;
      v23 = *(_QWORD *)v17;
      if ( *(_WORD *)(*(_QWORD *)v17 + 298LL) )
      {
        v24 = 0LL;
        v25 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v23 + 176) + 8LL);
        while ( *(v25 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v24;
          v25 += 2;
          if ( v24 >= *(unsigned __int16 *)(*(_QWORD *)v17 + 298LL) )
            goto LABEL_28;
        }
        v26 = v23 + 16LL * (*(_DWORD *)v25 + 1) + 312;
      }
      else
      {
LABEL_28:
        v26 = sub_AEB880(v17, System_Collections_IEnumerator_TypeInfo, 1LL, v22);
      }
      v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v17, *(_QWORD *)(v26 + 8));
      v28 = (GiftEntity_o *)v27;
      if ( v27 )
      {
        v29 = *(_QWORD *)v27;
        v30 = *(&GiftEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 300LL) >= (unsigned int)v30
          && *(GiftEntity_c **)(*(_QWORD *)(v29 + 200) + 8 * v30 - 8) == GiftEntity_TypeInfo )
        {
          if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v29 + 376))(v27, *(_QWORD *)(v29 + 384)) )
            GiftMaster__RemoveIdToGiftEntityListDictionary(v5, v28, v31);
        }
      }
    }
    v68[0] = 117;
    v69 = 1;
    v32 = sub_B52A44(v17, System_IDisposable_TypeInfo);
    if ( v32 )
    {
      v33 = *(_QWORD *)v32;
      v34 = v32;
      if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
      {
        v35 = 0LL;
        v36 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
        {
          ++v35;
          v36 += 4;
          if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
            goto LABEL_40;
        }
        v37 = v33 + 16LL * *v36 + 312;
      }
      else
      {
LABEL_40:
        v37 = sub_AEB880(v32, System_IDisposable_TypeInfo, 0LL, v3);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v37)(v34, *(_QWORD *)(v37 + 8));
    }
    v69 = 0;
  }
  newItems = e->fields._newItems;
  if ( newItems )
  {
    v39 = newItems->klass;
    if ( *(_WORD *)&newItems->klass->_2.bitflags1 )
    {
      v40 = 0LL;
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerable_c **)v41 - 1) != System_Collections_IEnumerable_TypeInfo )
      {
        ++v40;
        v41 += 4;
        if ( v40 >= *(unsigned __int16 *)&newItems->klass->_2.bitflags1 )
          goto LABEL_49;
      }
      v42 = (__int64)&v39->vtable[*v41].method;
    }
    else
    {
LABEL_49:
      v42 = sub_AEB880(newItems, System_Collections_IEnumerable_TypeInfo, 0LL, v3);
    }
    v45 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v42)(newItems, *(_QWORD *)(v42 + 8));
    if ( !v45 )
      sub_B52A5C(0LL, v43);
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
        v49 = sub_AEB880(v45, System_Collections_IEnumerator_TypeInfo, 0LL, v44);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v45, *(_QWORD *)(v49 + 8)) & 1) == 0 )
        break;
      v51 = *(_QWORD *)v45;
      if ( *(_WORD *)(*(_QWORD *)v45 + 298LL) )
      {
        v52 = 0LL;
        v53 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v51 + 176) + 8LL);
        while ( *(v53 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v52;
          v53 += 2;
          if ( v52 >= *(unsigned __int16 *)(*(_QWORD *)v45 + 298LL) )
            goto LABEL_63;
        }
        v54 = v51 + 16LL * (*(_DWORD *)v53 + 1) + 312;
      }
      else
      {
LABEL_63:
        v54 = sub_AEB880(v45, System_Collections_IEnumerator_TypeInfo, 1LL, v50);
      }
      v55 = (*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v45, *(_QWORD *)(v54 + 8));
      v56 = (GiftEntity_o *)v55;
      if ( v55 )
      {
        v57 = *(_QWORD *)v55;
        v58 = *(&GiftEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v55 + 300LL) >= (unsigned int)v58
          && *(GiftEntity_c **)(*(_QWORD *)(v57 + 200) + 8 * v58 - 8) == GiftEntity_TypeInfo
          && (*(__int64 (__fastcall **)(__int64, _QWORD))(v57 + 376))(v55, *(_QWORD *)(v57 + 384)) )
        {
          GiftMaster__AddIdToGiftEntityListDictionary(v5, v56, v59);
        }
      }
    }
    v68[0] = 213;
    v60 = ++v69;
    v61 = sub_B52A44(v45, System_IDisposable_TypeInfo);
    if ( v61 )
    {
      v63 = *(_QWORD *)v61;
      v64 = v61;
      if ( *(_WORD *)(*(_QWORD *)v61 + 298LL) )
      {
        v65 = 0LL;
        v66 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
        {
          ++v65;
          v66 += 4;
          if ( v65 >= *(unsigned __int16 *)(*(_QWORD *)v61 + 298LL) )
            goto LABEL_75;
        }
        v67 = v63 + 16LL * *v66 + 312;
      }
      else
      {
LABEL_75:
        v67 = sub_AEB880(v61, System_IDisposable_TypeInfo, 0LL, v62);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v67)(v64, *(_QWORD *)(v67 + 8));
    }
    if ( v60 && v68[v60 - 1] == 213 )
    {
      v69 = v60 - 1;
      return;
    }
LABEL_81:
    GiftMaster__CreateIdToGiftEntityListDictionary(v5, (const MethodInfo *)e);
  }
}


void __fastcall GiftMaster__RemoveIdToGiftEntityListDictionary(
        GiftMaster_o *this,
        GiftEntity_o *giftEntity,
        const MethodInfo *method)
{
  GiftMaster_o *v4; // x20
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  v4 = this;
  if ( (byte_42B1B46 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Remove__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity__Remove__);
    this = (GiftMaster_o *)sub_B52984(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    byte_42B1B46 = 1;
  }
  value = 0LL;
  if ( !giftEntity )
    goto LABEL_12;
  this = (GiftMaster_o *)v4->fields.idToGiftEntityListDictionary;
  if ( !this )
    goto LABEL_12;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this,
          giftEntity->fields.id,
          &value,
          (const MethodInfo_2F29A2C *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
    return;
  this = (GiftMaster_o *)value;
  if ( !value )
    goto LABEL_12;
  this = (GiftMaster_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                           (System_Collections_Generic_List_WarBoardManager_TaskList__o *)value,
                           (WarBoardManager_TaskList_o *)giftEntity,
                           (const MethodInfo_2FF2FB0 *)Method_System_Collections_Generic_List_GiftEntity__Remove__);
  if ( !value )
    goto LABEL_12;
  if ( LODWORD(value->fields.eval) )
    return;
  this = (GiftMaster_o *)v4->fields.idToGiftEntityListDictionary;
  if ( !this )
LABEL_12:
    sub_B52A5C(this, giftEntity);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this,
    giftEntity->fields.id,
    (const MethodInfo_2F296E4 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Remove__);
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

  if ( (byte_42B1B42 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_GiftMaster__GiftEntity__string__TryGetEntity__);
    byte_42B1B42 = 1;
  }
  PK = GiftEntity__CreatePK(id, type, objectId, *(const MethodInfo **)&type);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_GiftMaster__GiftEntity__string__TryGetEntity__);
}


GiftEntity_o *__fastcall GiftMaster__getDataById(GiftMaster_o *this, int32_t id, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  __int64 v8; // x8
  int32_t v9; // w22
  bool v10; // w21
  GiftEntity_o *v11; // x20
  GiftEntity_o *v12; // x19
  const MethodInfo *v13; // x4
  __int64 v15; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B1B48 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_GiftAddMaster___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
    sub_B52984(&GiftEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B1B48 = 1;
  }
  value = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_GiftAddMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = GiftAddMaster__GetValidPriorDataById((GiftAddMaster_o *)Instance, id, v7);
  if ( Instance )
  {
    v8 = *((_QWORD *)Instance + 5);
    if ( !v8 )
      goto LABEL_18;
    if ( !*(_DWORD *)(v8 + 24) )
    {
      v15 = sub_B52A88(Instance);
      sub_B52A28(v15, 0LL);
    }
    id = *((_DWORD *)Instance + 12);
    v9 = *(_DWORD *)(v8 + 32);
    v10 = 1;
  }
  else
  {
    v10 = 0;
    v9 = 0;
  }
  Instance = this->fields.idToGiftEntityListDictionary;
  if ( !Instance )
    goto LABEL_18;
  Instance = (void *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                       (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)Instance,
                       id,
                       &value,
                       (const MethodInfo_2F29A2C *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0LL;
  if ( !value )
LABEL_18:
    sub_B52A5C(Instance, v6);
  if ( !LODWORD(value->fields.eval) )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v11 = *(GiftEntity_o **)(*(_QWORD *)&value->fields.viewpoint + 32LL);
  v12 = (GiftEntity_o *)sub_B52A54(GiftEntity_TypeInfo);
  GiftEntity___ctor_28242108(v12, v11, v9, v10, v13);
  return v12;
}