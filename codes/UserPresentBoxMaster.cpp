void __fastcall UserPresentBoxMaster___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  UserPresentBoxMaster_c *v4; // x8

  if ( (byte_42E71F7 & 1) == 0 )
  {
    sub_B5D5C4(&UserPresentBoxMaster_TypeInfo, v1, v2, v3);
    byte_42E71F7 = 1;
  }
  UserPresentBoxMaster_TypeInfo->static_fields->IMPORTANT_FOR_EVENT = 1;
  UserPresentBoxMaster_TypeInfo->static_fields->INDEFINITE_PERIOD = 2;
  v4 = UserPresentBoxMaster_TypeInfo;
  UserPresentBoxMaster_TypeInfo->static_fields->PAY_TYPE_RARE_PRI = 3;
  v4->static_fields->IMPORTANT_FOR_LIMIT = 4;
}


void __fastcall UserPresentBoxMaster___ctor(UserPresentBoxMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E71F1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E71F1 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    65,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserPresentBoxMaster__GetCount(
        UserPresentBoxMaster_o *this,
        int32_t type,
        int32_t id,
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  UserPresentBoxEntity_c *v21; // x1
  __int64 v22; // x3
  System_Collections_Generic_IEnumerator_T__o *v23; // x20
  int32_t v24; // w19
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x9
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v32; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v35; // x3
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0

  if ( (byte_42E71F5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, type, id, method);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&UserPresentBoxEntity_TypeInfo, v16, v17, v18);
    byte_42E71F5 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, *(_QWORD *)&type);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v23 = Enumerator;
  v24 = 0;
  while ( 1 )
  {
    if ( !v23 )
      goto LABEL_33;
    klass = v23->klass;
    if ( *(_WORD *)&v23->klass->_2.bitflags1 )
    {
      v32 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v32;
        p_offset += 4;
        if ( v32 >= *(unsigned __int16 *)&v23->klass->_2.bitflags1 )
          goto LABEL_22;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_22:
      p_method = sub_AF54C0(v23, System_Collections_IEnumerator_TypeInfo, 0LL, v22);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v23,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v25 = v23->klass;
    if ( *(_WORD *)&v23->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v27 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)&v23->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      v28 = (__int64)&v25->vtable[*v27].method;
    }
    else
    {
LABEL_9:
      v28 = sub_AF54C0(v23, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v35);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
                                                                  v23,
                                                                  *(_QWORD *)(v28 + 8));
    if ( !Enumerator )
      sub_B5D69C(0LL, v29);
    v21 = UserPresentBoxEntity_TypeInfo;
    v30 = *(&UserPresentBoxEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Enumerator->klass->_2.bitflags2 + 1) < (unsigned int)v30
      || (UserPresentBoxEntity_c *)Enumerator->klass->_2.typeHierarchy[v30 - 1] != UserPresentBoxEntity_TypeInfo )
    {
      Enumerator = (System_Collections_Generic_IEnumerator_T__o *)sub_B5D990(Enumerator);
LABEL_33:
      sub_B5D69C(Enumerator, v21);
    }
    if ( LODWORD(Enumerator[4].monitor) == type && HIDWORD(Enumerator[4].monitor) == id )
      ++v24;
  }
  v36 = v23->klass;
  if ( *(_WORD *)&v23->klass->_2.bitflags1 )
  {
    v37 = 0LL;
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      ++v37;
      v38 += 4;
      if ( v37 >= *(unsigned __int16 *)&v23->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_29:
    v39 = sub_AF54C0(v23, System_IDisposable_TypeInfo, 0LL, v35);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(v23, *(_QWORD *)(v39 + 8));
  return v24;
}


UserPresentBoxEntity_o *__fastcall UserPresentBoxMaster__GetEntity(
        UserPresentBoxMaster_o *this,
        int64_t receiveUserId,
        int64_t presentId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E71EF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__GetEntity__,
      receiveUserId,
      presentId,
      method);
    byte_42E71EF = 1;
  }
  PK = UserPresentBoxEntity__CreatePK(receiveUserId, presentId, (const MethodInfo *)presentId);
  return (UserPresentBoxEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                     (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_23FB260 *)Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__GetEntity__);
}


bool __fastcall UserPresentBoxMaster__TryGetEntity(
        UserPresentBoxMaster_o *this,
        UserPresentBoxEntity_o **entity,
        int64_t receiveUserId,
        int64_t presentId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42E71F0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__TryGetEntity__,
      (_DWORD)entity,
      receiveUserId,
      presentId);
    byte_42E71F0 = 1;
  }
  PK = UserPresentBoxEntity__CreatePK(receiveUserId, presentId, (const MethodInfo *)receiveUserId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_UserPresentBoxMaster__UserPresentBoxEntity__string__TryGetEntity__);
}


UserPresentBoxEntity_array *__fastcall UserPresentBoxMaster__getVaildList(
        UserPresentBoxMaster_o *this,
        int64_t userId,
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x22
  int32_t v27; // w23
  const MethodInfo *v28; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v29; // x24
  __int64 v30; // x10

  if ( (byte_42E71F2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      userId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&UserPresentBoxEntity_TypeInfo, v21, v22, v23);
    byte_42E71F2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__);
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
        v29 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v30 = *(&UserPresentBoxEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v30
          && (UserPresentBoxEntity_c *)list->klass->_2.typeHierarchy[v30 - 1] == UserPresentBoxEntity_TypeInfo
          && list->fields.items == (struct System_Collections_Generic_IList_T__o *)userId )
        {
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)UserPresentBoxEntity__IsExpired(
                                                                                               (UserPresentBoxEntity_o *)list,
                                                                                               1,
                                                                                               v28);
          if ( ((unsigned __int8)list & 1) == 0 )
          {
            if ( !v26 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v26,
              v29,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
          }
        }
      }
      if ( ++v27 >= Count )
        goto LABEL_15;
    }
LABEL_17:
    sub_B5D69C(list, userId);
  }
LABEL_15:
  if ( !v26 )
    goto LABEL_17;
  return (UserPresentBoxEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v26,
                                         (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
}


UserPresentBoxEntity_array *__fastcall UserPresentBoxMaster__getVaildList_22554948(
        UserPresentBoxMaster_o *this,
        int64_t userId,
        System_Int64_array *presentIdList,
        const MethodInfo *method)
{
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
  void *list; // x0
  signed int max_length; // w26
  int v41; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x19
  int32_t v43; // w24
  UserPresentBoxEntity_o *Item; // x0
  const MethodInfo *v45; // x2
  UserPresentBoxEntity_o *v46; // x25
  __int64 v47; // x10
  __int64 v48; // x10
  struct UserPresentBoxMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__8_0; // x20
  Il2CppObject *v51; // x21
  struct UserPresentBoxMaster___c_StaticFields *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  __int64 v60; // x0

  if ( (byte_42E71F3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      userId,
      (_DWORD)presentIdList,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_UserPresentBoxEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_UserPresentBoxEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserPresentBoxEntity__Sort__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_UserPresentBoxMaster___c__getVaildList_b__8_0__, v30, v31, v32);
    sub_B5D5C4(&UserPresentBoxMaster___c_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&UserPresentBoxEntity_TypeInfo, v36, v37, v38);
    byte_42E71F3 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_32;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !presentIdList )
    goto LABEL_32;
  max_length = presentIdList->max_length;
  v41 = (int)list;
  v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserPresentBoxEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v42,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserPresentBoxEntity___ctor__);
  if ( v41 >= 1 )
  {
    v43 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = (UserPresentBoxEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                         (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                                         v43,
                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v46 = Item;
        v47 = *(&UserPresentBoxEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v47
          && (UserPresentBoxEntity_c *)Item->klass->_2.typeHierarchy[v47 - 1] == UserPresentBoxEntity_TypeInfo
          && Item->fields.receiveUserId == userId )
        {
          list = (void *)UserPresentBoxEntity__IsExpired(Item, 1, v45);
          if ( ((unsigned __int8)list & 1) == 0 && max_length >= 1 )
          {
            v48 = 0LL;
            while ( 1 )
            {
              if ( (unsigned int)v48 >= presentIdList->max_length )
              {
                v60 = sub_B5D6C8(list);
                sub_B5D668(v60, 0LL);
              }
              if ( presentIdList->m_Items[v48] == v46->fields.presentId )
                break;
              if ( (int)++v48 >= max_length )
                goto LABEL_21;
            }
            if ( !v42 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v42,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v46,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserPresentBoxEntity__Add__);
          }
        }
      }
LABEL_21:
      if ( ++v43 >= v41 )
        goto LABEL_22;
    }
LABEL_32:
    sub_B5D69C(list, userId);
  }
LABEL_22:
  list = UserPresentBoxMaster___c_TypeInfo;
  if ( (BYTE3(UserPresentBoxMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentBoxMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentBoxMaster___c_TypeInfo);
    list = UserPresentBoxMaster___c_TypeInfo;
  }
  static_fields = (struct UserPresentBoxMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__8_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = UserPresentBoxMaster___c_TypeInfo->static_fields;
    }
    v51 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_UserPresentBoxEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__8_0,
      v51,
      Method_UserPresentBoxMaster___c__getVaildList_b__8_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_UserPresentBoxEntity___ctor__);
    v52 = UserPresentBoxMaster___c_TypeInfo->static_fields;
    v52->__9__8_0 = (struct System_Comparison_UserPresentBoxEntity__o *)_9__8_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v52->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
  }
  if ( !v42 )
    goto LABEL_32;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v42,
    (System_Comparison_T__o *)_9__8_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_UserPresentBoxEntity__Sort__);
  return (UserPresentBoxEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v42,
                                         (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserPresentBoxEntity__ToArray__);
}


void __fastcall UserPresentBoxMaster__getValidItemInfo(
        UserPresentBoxMaster_o *this,
        int64_t userId,
        int32_t *count,
        bool *hasLimited,
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
  int64_t Instance; // x0
  const MethodInfo *v28; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  int32_t v30; // w25
  const MethodInfo *v31; // x2
  UserPresentBoxEntity_o *v32; // x26
  __int64 v33; // x10
  int64_t v34; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v35; // [xsp+0h] [xbp-60h]
  int64_t Time; // [xsp+8h] [xbp-58h]

  if ( (byte_42E71F6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      userId,
      (_DWORD)count,
      hasLimited);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v15, v16, v17);
    sub_B5D5C4(&NetworkManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&UserPresentBoxEntity_TypeInfo, v24, v25, v26);
    byte_42E71F6 = 1;
  }
  *count = 0;
  *hasLimited = 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___),
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
        v35 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
        !list) )
  {
LABEL_24:
    sub_B5D69C(Instance, v28);
  }
  v30 = 0;
  while ( v30 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = (int64_t)this->fields.list;
    if ( !Instance )
      goto LABEL_24;
    Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                          (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                          v30,
                          (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_24;
    v32 = (UserPresentBoxEntity_o *)Instance;
    v33 = *(&UserPresentBoxEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v33
      || *(UserPresentBoxEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v33 - 8) != UserPresentBoxEntity_TypeInfo )
    {
      goto LABEL_24;
    }
    if ( *(_QWORD *)(Instance + 16) == userId )
    {
      Instance = UserPresentBoxEntity__IsExpired((UserPresentBoxEntity_o *)Instance, 1, v31);
      if ( (Instance & 1) == 0 )
      {
        ++*count;
        if ( !*hasLimited && v32->fields.giftType == 2 )
        {
          Instance = (int64_t)v35;
          if ( !v35 )
            goto LABEL_24;
          Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v35,
                                v32->fields.objectId,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_24;
          v34 = *(_QWORD *)(Instance + 96);
          if ( v34 > Time )
          {
            Instance = UserPresentBoxEntity__expireAt(v32, v28);
            if ( v34 < Instance )
              *hasLimited = 1;
          }
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v30;
    if ( !list )
      goto LABEL_24;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserPresentBoxMaster__isExist(
        UserPresentBoxMaster_o *this,
        int32_t type,
        int32_t id,
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v20; // x1
  __int64 v21; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  _DWORD *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x9
  bool v34; // w20
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0
  int v40; // [xsp+0h] [xbp-40h]

  if ( (byte_42E71F4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, type, id, method);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&UserPresentBoxEntity_TypeInfo, v16, v17, v18);
    byte_42E71F4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, *(_QWORD *)&type);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v20);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v24;
        p_offset += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v21);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v27 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v29 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_16:
      v30 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v21);
    }
    v31 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                      Enumerator,
                      *(_QWORD *)(v30 + 8));
    if ( !v31 )
      goto LABEL_35;
    v33 = *(&UserPresentBoxEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v31 + 300LL) < (unsigned int)v33
      || *(UserPresentBoxEntity_c **)(*(_QWORD *)(*(_QWORD *)v31 + 200LL) + 8 * v33 - 8) != UserPresentBoxEntity_TypeInfo )
    {
      v31 = (_DWORD *)sub_B5D990(v31);
LABEL_35:
      sub_B5D69C(v31, v32);
    }
    if ( v31[18] == type && v31[19] == id )
    {
      v40 = 70;
      v34 = 1;
      goto LABEL_25;
    }
  }
  v34 = 0;
  v40 = 68;
LABEL_25:
  v35 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v36 = 0LL;
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      ++v36;
      v37 += 4;
      if ( v36 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v38 = (__int64)&v35->vtable[*v37].method;
  }
  else
  {
LABEL_29:
    v38 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v21);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
  if ( v40 == 68 )
    return 0;
  return v34;
}


void __fastcall UserPresentBoxMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7007 & 1) == 0 )
  {
    sub_B5D5C4(&UserPresentBoxMaster___c_TypeInfo, v1, v2, v3);
    byte_42E7007 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(UserPresentBoxMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserPresentBoxMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall UserPresentBoxMaster___c___ctor(UserPresentBoxMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall UserPresentBoxMaster___c___getVaildList_b__8_0(
        UserPresentBoxMaster___c_o *this,
        UserPresentBoxEntity_o *a,
        UserPresentBoxEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B5D69C(this, a);
  return LODWORD(b->fields.createdAt) - LODWORD(a->fields.createdAt);
}