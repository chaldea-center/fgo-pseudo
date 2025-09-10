void EventVoicePlayMaster___ctor(EventVoicePlayMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27504 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string___ctor__);
    byte_4C27504 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    190,
    (const MethodInfo_338A52C *)Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string___ctor__);
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

  if ( (byte_4C27502 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__GetEntity__);
    byte_4C27502 = 1;
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
                                     (const MethodInfo_338C850 *)Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__GetEntity__);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  EventVoicePlayEntity_o *v13; // x22
  const MethodInfo *v14; // x3

  ValidEventVoicePlayEntity = EventVoicePlayMaster__GetValidEventVoicePlayEntity(
                                this,
                                eventId,
                                slot,
                                svtId,
                                *(const MethodInfo **)&svtId);
  if ( ValidEventVoicePlayEntity )
  {
    v13 = ValidEventVoicePlayEntity;
    *eventVoicePlayEntity = ValidEventVoicePlayEntity;
    sub_1C2D434((CGThumbnailListItem_o *)eventVoicePlayEntity, (int32_t)ValidEventVoicePlayEntity, v11, v12);
    return EventVoicePlayEntity__GetEventRewardVoiceRandList(v13, svtId, svtLimitCnt, v14);
  }
  else
  {
    *eventVoicePlayEntity = 0;
    sub_1C2D434((CGThumbnailListItem_o *)eventVoicePlayEntity, 0, v11, v12);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  EventVoicePlayEntity_o *v13; // x22
  const MethodInfo *v14; // x3

  ValidEventVoicePlayEntity = EventVoicePlayMaster__GetValidEventVoicePlayEntity(
                                this,
                                eventId,
                                slot,
                                svtId,
                                *(const MethodInfo **)&svtId);
  if ( ValidEventVoicePlayEntity )
  {
    v13 = ValidEventVoicePlayEntity;
    *eventVoicePlayEntity = ValidEventVoicePlayEntity;
    sub_1C2D434((CGThumbnailListItem_o *)eventVoicePlayEntity, (int32_t)ValidEventVoicePlayEntity, v11, v12);
    return EventVoicePlayEntity__GetEventTradeWelcomeVoiceList(v13, svtId, svtLimitCnt, v14);
  }
  else
  {
    *eventVoicePlayEntity = 0;
    sub_1C2D434((CGThumbnailListItem_o *)eventVoicePlayEntity, 0, v11, v12);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  EventVoicePlayEntity_o *v13; // x22
  const MethodInfo *v14; // x3

  ValidEventVoicePlayEntity = EventVoicePlayMaster__GetValidEventVoicePlayEntity(
                                this,
                                eventId,
                                slot,
                                svtId,
                                *(const MethodInfo **)&svtId);
  if ( ValidEventVoicePlayEntity )
  {
    v13 = ValidEventVoicePlayEntity;
    *eventVoicePlayEntity = ValidEventVoicePlayEntity;
    sub_1C2D434((CGThumbnailListItem_o *)eventVoicePlayEntity, (int32_t)ValidEventVoicePlayEntity, v11, v12);
    return EventVoicePlayEntity__GetEventShopWelcomeVoiceList(v13, svtId, svtLimitCnt, v14);
  }
  else
  {
    *eventVoicePlayEntity = 0;
    sub_1C2D434((CGThumbnailListItem_o *)eventVoicePlayEntity, 0, v11, v12);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4C27506 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventVoicePlayEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventVoicePlayEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventVoicePlayEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo);
    byte_4C27506 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_EventVoicePlayEntity__get_Count__);
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
                                                                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_EventVoicePlayEntity__get_Item__);
      if ( !list )
        break;
      v6 = list;
      if ( LODWORD(list->fields.items) == eventId )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v13 = Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v15[4] = (Il2CppClass *)v6;
          sub_1C2D434((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v6, v10, v11);
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C2D6EC(list, v6);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (EventVoicePlayEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v5,
                                         (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_EventVoicePlayEntity__ToArray__);
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
  int32_t Count; // w26
  int64_t v13; // x25
  int32_t v14; // w27
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  int32_t v21; // w23
  Il2CppObject *v22; // x24
  __int64 v23; // x26
  __int64 v24; // x27
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x0
  System_Comparison_T__o *v31; // x19
  Il2CppObject *v32; // x20
  struct EventVoicePlayMaster___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4C27507 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventVoicePlayEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventVoicePlayEntity__get_Item__);
    sub_1C2D490(&System_Comparison_EventVoicePlayEntity__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventVoicePlayEntity__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventVoicePlayEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventVoicePlayEntity__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_EventVoicePlayMaster___c__GetValidEventVoicePlayEntity_b__6_0__);
    sub_1C2D490(&EventVoicePlayMaster___c_TypeInfo);
    byte_4C27507 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_44;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_EventVoicePlayEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  list = NetworkManager__getTime(0);
  v13 = list;
  if ( Count >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v14,
                        (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_EventVoicePlayEntity__get_Item__);
      if ( !list )
        break;
      v10 = list;
      if ( *(_DWORD *)(list + 16) == eventId && *(_DWORD *)(list + 20) == slot )
      {
        if ( !v8 )
          break;
        items = v8->fields._items;
        v18 = Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__;
        ++v8->fields._version;
        if ( !items )
          break;
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)list,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v10;
          sub_1C2D434((CGThumbnailListItem_o *)(v20 + 4), v10, v15, v16);
        }
      }
      if ( Count == ++v14 )
        goto LABEL_18;
    }
LABEL_44:
    sub_1C2D6EC(list, v10);
  }
LABEL_18:
  if ( !v8 )
    goto LABEL_44;
  if ( v8->fields._size >= 1 )
  {
    v21 = 0;
    do
    {
      list = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v8,
                        v21,
                        (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventVoicePlayEntity__get_Item__);
      if ( !list )
        goto LABEL_44;
      v22 = (Il2CppObject *)list;
      if ( *(_QWORD *)(list + 72) <= v13 && v13 <= *(_QWORD *)(list + 80) && *(_DWORD *)(list + 48) == eventId )
      {
        v23 = *(_QWORD *)(list + 28);
        v24 = *(_QWORD *)(list + 36);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v38.fields.currentCryptoKey = v23;
        *(_QWORD *)&v38.fields.fakeValue = v24;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v38, 0);
        if ( (_DWORD)list == svtId )
        {
          if ( !v9 )
            goto LABEL_44;
          v27 = v9->fields._items;
          v28 = Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__;
          ++v9->fields._version;
          if ( !v27 )
            goto LABEL_44;
          v29 = v9->fields._size;
          if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              v22,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = &v27->obj.klass + v29;
            v9->fields._size = v29 + 1;
            v30[4] = (Il2CppClass *)v22;
            sub_1C2D434((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v22, v25, v26);
          }
        }
      }
    }
    while ( ++v21 < v8->fields._size );
  }
  list = (int64_t)EventVoicePlayMaster___c_TypeInfo;
  if ( !EventVoicePlayMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventVoicePlayMaster___c_TypeInfo);
    list = (int64_t)EventVoicePlayMaster___c_TypeInfo;
  }
  v31 = *(System_Comparison_T__o **)(*(_QWORD *)(list + 184) + 8LL);
  if ( !v31 )
  {
    if ( !*(_DWORD *)(list + 224) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = (int64_t)EventVoicePlayMaster___c_TypeInfo;
    }
    v32 = **(Il2CppObject ***)(list + 184);
    v31 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_EventVoicePlayEntity__TypeInfo);
    System_Comparison_object____ctor(
      v31,
      v32,
      Method_EventVoicePlayMaster___c__GetValidEventVoicePlayEntity_b__6_0__,
      0);
    static_fields = EventVoicePlayMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventVoicePlayEntity__o *)v31;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)v31, v34, v35);
  }
  if ( !v9 )
    goto LABEL_44;
  System_Collections_Generic_List_object___Sort_58242632(
    v9,
    v31,
    (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_EventVoicePlayEntity__Sort__);
  if ( v9->fields._size < 1 )
    return 0;
  else
    return (EventVoicePlayEntity_o *)System_Collections_Generic_List_object___get_Item(
                                       v9,
                                       0,
                                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventVoicePlayEntity__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *EventVoicePlayMaster__GetVoiceAssetName(
        EventVoicePlayMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  return EventVoicePlayMaster__getVoiceAssetName(svtId, *(const MethodInfo **)&svtId);
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

  if ( (byte_4C27503 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__TryGetEntity__);
    byte_4C27503 = 1;
  }
  PK = (Il2CppObject *)EventVoicePlayEntity__CreatePK(eventId, slot, idx, guideImageId, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__TryGetEntity__);
}


System_String_o *EventVoicePlayMaster__getVoiceAssetName(int32_t svtId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = svtId;
  if ( (byte_4C27505 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_4417/*"ChrVoice_"*/);
    byte_4C27505 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  return System_String__Concat_63457864((System_String_o *)StringLiteral_4417/*"ChrVoice_"*/, v2, 0);
}


void EventVoicePlayMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C27508 & 1) == 0 )
  {
    sub_1C2D490(&EventVoicePlayMaster___c_TypeInfo);
    byte_4C27508 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(EventVoicePlayMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventVoicePlayMaster___c_TypeInfo->static_fields->__9 = (struct EventVoicePlayMaster___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)EventVoicePlayMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EventVoicePlayMaster___c___ctor(EventVoicePlayMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventVoicePlayMaster___c___GetValidEventVoicePlayEntity_b__6_0(
        EventVoicePlayMaster___c_o *this,
        EventVoicePlayEntity_o *a,
        EventVoicePlayEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C2D6EC(this, a);
  return b->fields.idx - a->fields.idx;
}