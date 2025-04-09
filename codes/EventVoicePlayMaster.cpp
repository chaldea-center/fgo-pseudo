void __fastcall EventVoicePlayMaster___ctor(EventVoicePlayMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BB08B & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string___ctor__, method);
    byte_49BB08B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    190,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall EventVoicePlayMaster__GetConfirmVoiceData(
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
EventVoicePlayEntity_o *__fastcall EventVoicePlayMaster__GetEntity(
        EventVoicePlayMaster_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t idx,
        int32_t guideImageId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49BB089 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_49BB089 = 1;
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
                                     (const MethodInfo_31A2454 *)Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall EventVoicePlayMaster__GetEventRewardWelcomeVoiceData(
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
    sub_1B4CF34((CGThumbnailListItem_o *)eventVoicePlayEntity, (int32_t)ValidEventVoicePlayEntity, v11, v12);
    return EventVoicePlayEntity__GetEventRewardVoiceRandList(v13, svtId, svtLimitCnt, v14);
  }
  else
  {
    *eventVoicePlayEntity = 0LL;
    sub_1B4CF34((CGThumbnailListItem_o *)eventVoicePlayEntity, 0, v11, v12);
    return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall EventVoicePlayMaster__GetEventTradeWelcomeVoiceData(
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
    sub_1B4CF34((CGThumbnailListItem_o *)eventVoicePlayEntity, (int32_t)ValidEventVoicePlayEntity, v11, v12);
    return EventVoicePlayEntity__GetEventTradeWelcomeVoiceList(v13, svtId, svtLimitCnt, v14);
  }
  else
  {
    *eventVoicePlayEntity = 0LL;
    sub_1B4CF34((CGThumbnailListItem_o *)eventVoicePlayEntity, 0, v11, v12);
    return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall EventVoicePlayMaster__GetShopWelcomeVoiceData(
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
    sub_1B4CF34((CGThumbnailListItem_o *)eventVoicePlayEntity, (int32_t)ValidEventVoicePlayEntity, v11, v12);
    return EventVoicePlayEntity__GetEventShopWelcomeVoiceList(v13, svtId, svtLimitCnt, v14);
  }
  else
  {
    *eventVoicePlayEntity = 0LL;
    sub_1B4CF34((CGThumbnailListItem_o *)eventVoicePlayEntity, 0, v11, v12);
    return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
EventVoicePlayEntity_array *__fastcall EventVoicePlayMaster__GetTargetEventIdEntityList(
        EventVoicePlayMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v13; // w22
  int32_t v14; // w23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_49BB08D & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_EventVoicePlayEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventVoicePlayEntity__get_Item__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventVoicePlayEntity__ToArray__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__, v8);
    sub_1B4CF90(&System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo, v9);
    byte_49BB08D = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_EventVoicePlayEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v13 = (int)list;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_EventVoicePlayEntity__get_Item__);
      if ( !list )
        break;
      v11 = list;
      if ( LODWORD(list->fields.items) == eventId )
      {
        if ( !v10 )
          break;
        items = v10->fields._items;
        v18 = Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)list,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v11;
          sub_1B4CF34((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v11, v15, v16);
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1B4D1EC(list, v11);
  }
LABEL_15:
  if ( !v10 )
    goto LABEL_17;
  return (EventVoicePlayEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v10,
                                         (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_EventVoicePlayEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventVoicePlayEntity_o *__fastcall EventVoicePlayMaster__GetValidEventVoicePlayEntity(
        EventVoicePlayMaster_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t svtId,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *v20; // x22
  System_Collections_Generic_List_object__o *v21; // x21
  int64_t v22; // x1
  int64_t list; // x0
  int32_t Count; // w26
  int64_t v25; // x25
  int32_t v26; // w27
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  int32_t v33; // w23
  Il2CppObject *v34; // x24
  __int64 v35; // x26
  __int64 v36; // x27
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  System_Comparison_T__o *v43; // x19
  Il2CppObject *v44; // x20
  struct EventVoicePlayMaster___c_StaticFields *static_fields; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_49BB08E & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_EventVoicePlayEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventVoicePlayEntity__get_Item__, v8);
    sub_1B4CF90(&System_Comparison_EventVoicePlayEntity__TypeInfo, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventVoicePlayEntity__Sort__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventVoicePlayEntity__get_Count__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventVoicePlayEntity__get_Item__, v14);
    sub_1B4CF90(&System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo, v15);
    sub_1B4CF90(&NetworkManager_TypeInfo, v16);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1B4CF90(&Method_EventVoicePlayMaster___c__GetValidEventVoicePlayEntity_b__6_0__, v18);
    sub_1B4CF90(&EventVoicePlayMaster___c_TypeInfo, v19);
    byte_49BB08E = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_44;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_EventVoicePlayEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  list = NetworkManager__getTime(0LL);
  v25 = list;
  if ( Count >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v26,
                        (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_EventVoicePlayEntity__get_Item__);
      if ( !list )
        break;
      v22 = list;
      if ( *(_DWORD *)(list + 16) == eventId && *(_DWORD *)(list + 20) == slot )
      {
        if ( !v20 )
          break;
        items = v20->fields._items;
        v30 = Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__;
        ++v20->fields._version;
        if ( !items )
          break;
        size = v20->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            (Il2CppObject *)list,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v22;
          sub_1B4CF34((CGThumbnailListItem_o *)(v32 + 4), v22, v27, v28);
        }
      }
      if ( Count == ++v26 )
        goto LABEL_18;
    }
LABEL_44:
    sub_1B4D1EC(list, v22);
  }
LABEL_18:
  if ( !v20 )
    goto LABEL_44;
  if ( v20->fields._size >= 1 )
  {
    v33 = 0;
    do
    {
      list = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v20,
                        v33,
                        (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventVoicePlayEntity__get_Item__);
      if ( !list )
        goto LABEL_44;
      v34 = (Il2CppObject *)list;
      if ( *(_QWORD *)(list + 72) <= v25 && v25 <= *(_QWORD *)(list + 80) && *(_DWORD *)(list + 48) == eventId )
      {
        v35 = *(_QWORD *)(list + 28);
        v36 = *(_QWORD *)(list + 36);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v50.fields.currentCryptoKey = v35;
        *(_QWORD *)&v50.fields.fakeValue = v36;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v50, 0LL);
        if ( (_DWORD)list == svtId )
        {
          if ( !v21 )
            goto LABEL_44;
          v39 = v21->fields._items;
          v40 = Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__;
          ++v21->fields._version;
          if ( !v39 )
            goto LABEL_44;
          v41 = v21->fields._size;
          if ( (unsigned int)v41 >= v39->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v21,
              v34,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v42 = &v39->obj.klass + v41;
            v21->fields._size = v41 + 1;
            v42[4] = (Il2CppClass *)v34;
            sub_1B4CF34((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v34, v37, v38);
          }
        }
      }
    }
    while ( ++v33 < v20->fields._size );
  }
  list = (int64_t)EventVoicePlayMaster___c_TypeInfo;
  if ( !EventVoicePlayMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventVoicePlayMaster___c_TypeInfo);
    list = (int64_t)EventVoicePlayMaster___c_TypeInfo;
  }
  v43 = *(System_Comparison_T__o **)(*(_QWORD *)(list + 184) + 8LL);
  if ( !v43 )
  {
    if ( !*(_DWORD *)(list + 224) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = (int64_t)EventVoicePlayMaster___c_TypeInfo;
    }
    v44 = **(Il2CppObject ***)(list + 184);
    v43 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_EventVoicePlayEntity__TypeInfo);
    System_Comparison_object____ctor(
      v43,
      v44,
      Method_EventVoicePlayMaster___c__GetValidEventVoicePlayEntity_b__6_0__,
      0LL);
    static_fields = EventVoicePlayMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventVoicePlayEntity__o *)v43;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)v43, v46, v47);
  }
  if ( !v21 )
    goto LABEL_44;
  System_Collections_Generic_List_object___Sort_56106144(
    v21,
    v43,
    (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_EventVoicePlayEntity__Sort__);
  if ( v21->fields._size < 1 )
    return 0LL;
  else
    return (EventVoicePlayEntity_o *)System_Collections_Generic_List_object___get_Item(
                                       v21,
                                       0,
                                       (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventVoicePlayEntity__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventVoicePlayMaster__GetVoiceAssetName(
        EventVoicePlayMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  return EventVoicePlayMaster__getVoiceAssetName(svtId, *(const MethodInfo **)&svtId);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventVoicePlayMaster__TryGetEntity(
        EventVoicePlayMaster_o *this,
        EventVoicePlayEntity_o **entity,
        int32_t eventId,
        int32_t slot,
        int32_t idx,
        int32_t guideImageId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49BB08A & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__TryGetEntity__, entity);
    byte_49BB08A = 1;
  }
  PK = (Il2CppObject *)EventVoicePlayEntity__CreatePK(eventId, slot, idx, guideImageId, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__TryGetEntity__);
}


System_String_o *__fastcall EventVoicePlayMaster__getVoiceAssetName(int32_t svtId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = svtId;
  if ( (byte_49BB08C & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_4380/*"ChrVoice_"*/, method);
    byte_49BB08C = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_61093468((System_String_o *)StringLiteral_4380/*"ChrVoice_"*/, v2, 0LL);
}


void __fastcall EventVoicePlayMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BB08F & 1) == 0 )
  {
    sub_1B4CF90(&EventVoicePlayMaster___c_TypeInfo, v1);
    byte_49BB08F = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(EventVoicePlayMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventVoicePlayMaster___c_TypeInfo->static_fields->__9 = (struct EventVoicePlayMaster___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)EventVoicePlayMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall EventVoicePlayMaster___c___ctor(EventVoicePlayMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventVoicePlayMaster___c___GetValidEventVoicePlayEntity_b__6_0(
        EventVoicePlayMaster___c_o *this,
        EventVoicePlayEntity_o *a,
        EventVoicePlayEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B4D1EC(this, a);
  return b->fields.idx - a->fields.idx;
}