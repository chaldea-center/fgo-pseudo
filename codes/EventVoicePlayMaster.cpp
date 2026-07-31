void EventVoicePlayMaster___ctor(EventVoicePlayMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59389F2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string___ctor__);
    byte_59389F2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    192,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *EventVoicePlayMaster__GetConfirmVoiceData(
        EventVoicePlayMaster_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t svtId,
        int32_t svtLimitCnt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantVoiceData____o *result; // x0
  const MethodInfo *v9; // x3

  result = (System_Collections_Generic_List_ServantVoiceData____o *)EventVoicePlayMaster__GetValidEventVoicePlayEntity(
                                                                      this,
                                                                      eventId,
                                                                      slot,
                                                                      svtId,
                                                                      *(const MethodInfo **)&svtLimitCnt);
  if ( result )
    return EventVoicePlayEntity__GetConfirmVoiceData((EventVoicePlayEntity_o *)result, svtId, svtLimitCnt, v9);
  return result;
}


// local variable allocation has failed, the output may be wrong!
EventVoicePlayEntity_o *EventVoicePlayMaster__GetEntity(
        EventVoicePlayMaster_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t idx,
        int32_t guideImageId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59389F0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__GetEntity__);
    byte_59389F0 = 1;
  }
  PK = (Il2CppObject *)EventVoicePlayEntity__CreatePK(
                         eventId,
                         slot,
                         idx,
                         guideImageId,
                         *(const MethodInfo **)&guideImageId);
  return (EventVoicePlayEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_3EE2044 *)Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *EventVoicePlayMaster__GetEventRewardWelcomeVoiceData(
        EventVoicePlayMaster_o *this,
        EventVoicePlayEntity_o **eventVoicePlayEntity,
        int32_t eventId,
        int32_t slot,
        int32_t svtId,
        int32_t svtLimitCnt,
        const MethodInfo *method)
{
  EventVoicePlayEntity_o *ValidEventVoicePlayEntity; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  EventVoicePlayEntity_o *v17; // x22
  const MethodInfo *v18; // x3

  ValidEventVoicePlayEntity = EventVoicePlayMaster__GetValidEventVoicePlayEntity(
                                this,
                                eventId,
                                slot,
                                svtId,
                                *(const MethodInfo **)&svtId);
  if ( ValidEventVoicePlayEntity )
  {
    v17 = ValidEventVoicePlayEntity;
    *eventVoicePlayEntity = ValidEventVoicePlayEntity;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)eventVoicePlayEntity,
      (int32_t)ValidEventVoicePlayEntity,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    return EventVoicePlayEntity__GetEventRewardVoiceRandList(v17, svtId, svtLimitCnt, v18);
  }
  else
  {
    *eventVoicePlayEntity = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)eventVoicePlayEntity, 0, v11, v12, v13, v14, v15, v16);
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *EventVoicePlayMaster__GetEventTradeWelcomeVoiceData(
        EventVoicePlayMaster_o *this,
        EventVoicePlayEntity_o **eventVoicePlayEntity,
        int32_t eventId,
        int32_t slot,
        int32_t svtId,
        int32_t svtLimitCnt,
        const MethodInfo *method)
{
  EventVoicePlayEntity_o *ValidEventVoicePlayEntity; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  EventVoicePlayEntity_o *v17; // x22
  const MethodInfo *v18; // x3

  ValidEventVoicePlayEntity = EventVoicePlayMaster__GetValidEventVoicePlayEntity(
                                this,
                                eventId,
                                slot,
                                svtId,
                                *(const MethodInfo **)&svtId);
  if ( ValidEventVoicePlayEntity )
  {
    v17 = ValidEventVoicePlayEntity;
    *eventVoicePlayEntity = ValidEventVoicePlayEntity;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)eventVoicePlayEntity,
      (int32_t)ValidEventVoicePlayEntity,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    return EventVoicePlayEntity__GetEventTradeWelcomeVoiceList(v17, svtId, svtLimitCnt, v18);
  }
  else
  {
    *eventVoicePlayEntity = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)eventVoicePlayEntity, 0, v11, v12, v13, v14, v15, v16);
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *EventVoicePlayMaster__GetShopWelcomeVoiceData(
        EventVoicePlayMaster_o *this,
        EventVoicePlayEntity_o **eventVoicePlayEntity,
        int32_t eventId,
        int32_t slot,
        int32_t svtId,
        int32_t svtLimitCnt,
        const MethodInfo *method)
{
  EventVoicePlayEntity_o *ValidEventVoicePlayEntity; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  EventVoicePlayEntity_o *v17; // x22
  const MethodInfo *v18; // x3

  ValidEventVoicePlayEntity = EventVoicePlayMaster__GetValidEventVoicePlayEntity(
                                this,
                                eventId,
                                slot,
                                svtId,
                                *(const MethodInfo **)&svtId);
  if ( ValidEventVoicePlayEntity )
  {
    v17 = ValidEventVoicePlayEntity;
    *eventVoicePlayEntity = ValidEventVoicePlayEntity;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)eventVoicePlayEntity,
      (int32_t)ValidEventVoicePlayEntity,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    return EventVoicePlayEntity__GetEventShopWelcomeVoiceList(v17, svtId, svtLimitCnt, v18);
  }
  else
  {
    *eventVoicePlayEntity = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)eventVoicePlayEntity, 0, v11, v12, v13, v14, v15, v16);
    return 0;
  }
}


EventVoicePlayEntity_array *EventVoicePlayMaster__GetTargetEventIdEntityList(
        EventVoicePlayMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v8; // w22
  int32_t v9; // w23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_59389F4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventVoicePlayEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventVoicePlayEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventVoicePlayEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo);
    byte_59389F4 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventVoicePlayEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventVoicePlayEntity__get_Item__);
      if ( !list )
        break;
      v6 = list;
      if ( LODWORD(list->fields.items) == eventId )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v17 = Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v6;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v6, v10, v11, v12, v13, v14, v15);
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_15;
    }
LABEL_17:
    sub_21FFECC(list, v6);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (EventVoicePlayEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v5,
                                         (const MethodInfo_445164C *)Method_System_Collections_Generic_List_EventVoicePlayEntity__ToArray__);
}


EventVoicePlayEntity_o *EventVoicePlayMaster__GetValidEventVoicePlayEntity(
        EventVoicePlayMaster_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v8; // x22
  System_Collections_Generic_List_object__o *v9; // x21
  int64_t v10; // x1
  int64_t list; // x0
  __int64 v12; // x1
  int32_t Count; // w26
  int64_t v14; // x25
  int32_t v15; // w27
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  int32_t v26; // w23
  Il2CppObject *v27; // x24
  __int64 v28; // x26
  __int64 v29; // x27
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x0
  struct EventVoicePlayMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__5_0; // x19
  Il2CppObject *v42; // x20
  struct EventVoicePlayMaster___c_StaticFields *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_59389F5 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventVoicePlayEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventVoicePlayEntity__get_Item__);
    sub_21FFC50(&System_Comparison_EventVoicePlayEntity__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventVoicePlayEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventVoicePlayEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventVoicePlayEntity__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_EventVoicePlayMaster___c__GetValidEventVoicePlayEntity_b__5_0__);
    sub_21FFC50(&EventVoicePlayMaster___c_TypeInfo);
    byte_59389F5 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
  v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_44;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventVoicePlayEntity__get_Count__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
  list = NetworkManager__getTime(0);
  v14 = list;
  if ( Count >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v15,
                        (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventVoicePlayEntity__get_Item__);
      if ( !list )
        break;
      v10 = list;
      if ( *(_DWORD *)(list + 16) == eventId && *(_DWORD *)(list + 20) == slot )
      {
        if ( !v8 )
          break;
        items = v8->fields._items;
        v23 = Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__;
        ++v8->fields._version;
        if ( !items )
          break;
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)list,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v10;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v25 + 4), v10, v16, v17, v18, v19, v20, v21);
        }
      }
      if ( Count == ++v15 )
        goto LABEL_18;
    }
LABEL_44:
    sub_21FFECC(list, v10);
  }
LABEL_18:
  if ( !v8 )
    goto LABEL_44;
  if ( v8->fields._size >= 1 )
  {
    v26 = 0;
    do
    {
      list = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v8,
                        v26,
                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventVoicePlayEntity__get_Item__);
      if ( !list )
        goto LABEL_44;
      v27 = (Il2CppObject *)list;
      if ( *(_QWORD *)(list + 72) <= v14 && v14 <= *(_QWORD *)(list + 80) && *(_DWORD *)(list + 48) == eventId )
      {
        v28 = *(_QWORD *)(list + 28);
        v29 = *(_QWORD *)(list + 36);
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
        *(_QWORD *)&v52.fields.currentCryptoKey = v28;
        *(_QWORD *)&v52.fields.fakeValue = v29;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v52, 0);
        if ( (_DWORD)list == svtId )
        {
          if ( !v9 )
            goto LABEL_44;
          v36 = v9->fields._items;
          v37 = Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__;
          ++v9->fields._version;
          if ( !v36 )
            goto LABEL_44;
          v38 = v9->fields._size;
          if ( (unsigned int)v38 >= LODWORD(v36->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              v27,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
          }
          else
          {
            v39 = &v36->obj.klass + v38;
            v9->fields._size = v38 + 1;
            v39[4] = (Il2CppClass *)v27;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v39 + 4), (int32_t)v27, v30, v31, v32, v33, v34, v35);
          }
        }
      }
    }
    while ( ++v26 < v8->fields._size );
  }
  list = (int64_t)EventVoicePlayMaster___c_TypeInfo;
  if ( !*(&EventVoicePlayMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventVoicePlayMaster___c_TypeInfo, v10);
    list = (int64_t)EventVoicePlayMaster___c_TypeInfo;
  }
  static_fields = *(struct EventVoicePlayMaster___c_StaticFields **)(list + 184);
  _9__5_0 = (System_Comparison_T__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !*(_DWORD *)(list + 228) )
    {
      j_il2cpp_runtime_class_init_0(list, v10);
      static_fields = EventVoicePlayMaster___c_TypeInfo->static_fields;
    }
    v42 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_EventVoicePlayEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__5_0,
      v42,
      Method_EventVoicePlayMaster___c__GetValidEventVoicePlayEntity_b__5_0__,
      0);
    v43 = EventVoicePlayMaster___c_TypeInfo->static_fields;
    v43->__9__5_0 = (struct System_Comparison_EventVoicePlayEntity__o *)_9__5_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v43->__9__5_0, (int32_t)_9__5_0, v44, v45, v46, v47, v48, v49);
  }
  if ( !v9 )
    goto LABEL_44;
  System_Collections_Generic_List_object___Sort_71636404(
    v9,
    _9__5_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_EventVoicePlayEntity__Sort__);
  if ( v9->fields._size < 1 )
    return 0;
  else
    return (EventVoicePlayEntity_o *)System_Collections_Generic_List_object___get_Item(
                                       v9,
                                       0,
                                       (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventVoicePlayEntity__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
bool EventVoicePlayMaster__TryGetEntity(
        EventVoicePlayMaster_o *this,
        EventVoicePlayEntity_o **entity,
        int32_t eventId,
        int32_t slot,
        int32_t idx,
        int32_t guideImageId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_59389F1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__TryGetEntity__);
    byte_59389F1 = 1;
  }
  PK = (Il2CppObject *)EventVoicePlayEntity__CreatePK(eventId, slot, idx, guideImageId, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__TryGetEntity__);
}


System_String_o *EventVoicePlayMaster__getVoiceAssetName(int32_t svtId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = svtId;
  if ( (byte_59389F3 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4588/*"ChrVoice_"*/);
    byte_59389F3 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  return System_String__Concat_75438412((System_String_o *)StringLiteral_4588/*"ChrVoice_"*/, v2, 0);
}


void EventVoicePlayMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59389F6 & 1) == 0 )
  {
    sub_21FFC50(&EventVoicePlayMaster___c_TypeInfo);
    byte_59389F6 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventVoicePlayMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventVoicePlayMaster___c_TypeInfo->static_fields->__9 = (struct EventVoicePlayMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventVoicePlayMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventVoicePlayMaster___c___ctor(EventVoicePlayMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventVoicePlayMaster___c___GetValidEventVoicePlayEntity_b__5_0(
        EventVoicePlayMaster___c_o *this,
        EventVoicePlayEntity_o *a,
        EventVoicePlayEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_21FFECC(this, a);
  return b->fields.idx - a->fields.idx;
}