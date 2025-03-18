void __fastcall EventVoicePlayMaster___ctor(EventVoicePlayMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C22176 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string___ctor__, method);
    byte_4C22176 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    190,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string___ctor__);
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

  if ( (byte_4C22174 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4C22174 = 1;
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
                                     (const MethodInfo_329F900 *)Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__GetEntity__);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
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
    sub_1C3B708(
      (PartyOrganizationUtility_o *)eventVoicePlayEntity,
      (int64_t)ValidEventVoicePlayEntity,
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
    *eventVoicePlayEntity = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)eventVoicePlayEntity, 0LL, v11, v12, v13, v14, v15, v16);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
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
    sub_1C3B708(
      (PartyOrganizationUtility_o *)eventVoicePlayEntity,
      (int64_t)ValidEventVoicePlayEntity,
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
    *eventVoicePlayEntity = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)eventVoicePlayEntity, 0LL, v11, v12, v13, v14, v15, v16);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
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
    sub_1C3B708(
      (PartyOrganizationUtility_o *)eventVoicePlayEntity,
      (int64_t)ValidEventVoicePlayEntity,
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
    *eventVoicePlayEntity = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)eventVoicePlayEntity, 0LL, v11, v12, v13, v14, v15, v16);
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
  int64_t v11; // x1
  int64_t list; // x0
  int v13; // w22
  int32_t v14; // w23
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4C22178 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_EventVoicePlayEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventVoicePlayEntity__get_Item__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventVoicePlayEntity__ToArray__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo, v9);
    byte_4C22178 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_EventVoicePlayEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v13 = list;
    v14 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v14,
                        (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_EventVoicePlayEntity__get_Item__);
      if ( !list )
        break;
      v11 = list;
      if ( *(_DWORD *)(list + 16) == eventId )
      {
        if ( !v10 )
          break;
        items = v10->fields._items;
        v22 = Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)list,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v11;
          sub_1C3B708((PartyOrganizationUtility_o *)(v24 + 4), v11, v15, v16, v17, v18, v19, v20);
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C3B9C0(list, v11);
  }
LABEL_15:
  if ( !v10 )
    goto LABEL_17;
  return (EventVoicePlayEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v10,
                                         (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_EventVoicePlayEntity__ToArray__);
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
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  int32_t v37; // w23
  Il2CppObject *v38; // x24
  __int64 v39; // x26
  __int64 v40; // x27
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  Il2CppClass **v50; // x0
  System_Comparison_T__o *v51; // x19
  Il2CppObject *v52; // x20
  struct EventVoicePlayMaster___c_StaticFields *static_fields; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_4C22179 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_EventVoicePlayEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventVoicePlayEntity__get_Item__, v8);
    sub_1C3B764(&System_Comparison_EventVoicePlayEntity__TypeInfo, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventVoicePlayEntity__Sort__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventVoicePlayEntity__get_Count__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventVoicePlayEntity__get_Item__, v14);
    sub_1C3B764(&System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo, v15);
    sub_1C3B764(&NetworkManager_TypeInfo, v16);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1C3B764(&Method_EventVoicePlayMaster___c__GetValidEventVoicePlayEntity_b__6_0__, v18);
    sub_1C3B764(&EventVoicePlayMaster___c_TypeInfo, v19);
    byte_4C22179 = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
  v21 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_44;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_EventVoicePlayEntity__get_Count__);
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
                        (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_EventVoicePlayEntity__get_Item__);
      if ( !list )
        break;
      v22 = list;
      if ( *(_DWORD *)(list + 16) == eventId && *(_DWORD *)(list + 20) == slot )
      {
        if ( !v20 )
          break;
        items = v20->fields._items;
        v34 = Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__;
        ++v20->fields._version;
        if ( !items )
          break;
        size = v20->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            (Il2CppObject *)list,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v36[4] = (Il2CppClass *)v22;
          sub_1C3B708((PartyOrganizationUtility_o *)(v36 + 4), v22, v27, v28, v29, v30, v31, v32);
        }
      }
      if ( Count == ++v26 )
        goto LABEL_18;
    }
LABEL_44:
    sub_1C3B9C0(list, v22);
  }
LABEL_18:
  if ( !v20 )
    goto LABEL_44;
  if ( v20->fields._size >= 1 )
  {
    v37 = 0;
    do
    {
      list = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v20,
                        v37,
                        (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_EventVoicePlayEntity__get_Item__);
      if ( !list )
        goto LABEL_44;
      v38 = (Il2CppObject *)list;
      if ( *(_QWORD *)(list + 72) <= v25 && v25 <= *(_QWORD *)(list + 80) && *(_DWORD *)(list + 48) == eventId )
      {
        v39 = *(_QWORD *)(list + 28);
        v40 = *(_QWORD *)(list + 36);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v62.fields.currentCryptoKey = v39;
        *(_QWORD *)&v62.fields.fakeValue = v40;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v62, 0LL);
        if ( (_DWORD)list == svtId )
        {
          if ( !v21 )
            goto LABEL_44;
          v47 = v21->fields._items;
          v48 = Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__;
          ++v21->fields._version;
          if ( !v47 )
            goto LABEL_44;
          v49 = v21->fields._size;
          if ( (unsigned int)v49 >= v47->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v21,
              v38,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
          }
          else
          {
            v50 = &v47->obj.klass + v49;
            v21->fields._size = v49 + 1;
            v50[4] = (Il2CppClass *)v38;
            sub_1C3B708((PartyOrganizationUtility_o *)(v50 + 4), (int64_t)v38, v41, v42, v43, v44, v45, v46);
          }
        }
      }
    }
    while ( ++v37 < v20->fields._size );
  }
  list = (int64_t)EventVoicePlayMaster___c_TypeInfo;
  if ( !EventVoicePlayMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventVoicePlayMaster___c_TypeInfo);
    list = (int64_t)EventVoicePlayMaster___c_TypeInfo;
  }
  v51 = *(System_Comparison_T__o **)(*(_QWORD *)(list + 184) + 8LL);
  if ( !v51 )
  {
    if ( !*(_DWORD *)(list + 224) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = (int64_t)EventVoicePlayMaster___c_TypeInfo;
    }
    v52 = **(Il2CppObject ***)(list + 184);
    v51 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_EventVoicePlayEntity__TypeInfo);
    System_Comparison_object____ctor(
      v51,
      v52,
      Method_EventVoicePlayMaster___c__GetValidEventVoicePlayEntity_b__6_0__,
      0LL);
    static_fields = EventVoicePlayMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventVoicePlayEntity__o *)v51;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__6_0, (int64_t)v51, v54, v55, v56, v57, v58, v59);
  }
  if ( !v21 )
    goto LABEL_44;
  System_Collections_Generic_List_object___Sort_57202480(
    v21,
    v51,
    (const MethodInfo_368D730 *)Method_System_Collections_Generic_List_EventVoicePlayEntity__Sort__);
  if ( v21->fields._size < 1 )
    return 0LL;
  else
    return (EventVoicePlayEntity_o *)System_Collections_Generic_List_object___get_Item(
                                       v21,
                                       0,
                                       (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_EventVoicePlayEntity__get_Item__);
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

  if ( (byte_4C22175 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__TryGetEntity__, entity);
    byte_4C22175 = 1;
  }
  PK = (Il2CppObject *)EventVoicePlayEntity__CreatePK(eventId, slot, idx, guideImageId, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__TryGetEntity__);
}


System_String_o *__fastcall EventVoicePlayMaster__getVoiceAssetName(int32_t svtId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = svtId;
  if ( (byte_4C22177 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_4546/*"CommonUI/MainMenuBarPrefab"*/, method);
    byte_4C22177 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_63368612((System_String_o *)StringLiteral_4546/*"CommonUI/MainMenuBarPrefab"*/, v2, 0LL);
}


void __fastcall EventVoicePlayMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C2217A & 1) == 0 )
  {
    sub_1C3B764(&EventVoicePlayMaster___c_TypeInfo, v1);
    byte_4C2217A = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(EventVoicePlayMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventVoicePlayMaster___c_TypeInfo->static_fields->__9 = (struct EventVoicePlayMaster___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)EventVoicePlayMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, a);
  return b->fields.idx - a->fields.idx;
}