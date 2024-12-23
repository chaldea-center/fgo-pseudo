void __fastcall EventVoicePlayMaster___ctor(EventVoicePlayMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66DDC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string___ctor__, method);
    byte_4B66DDC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    190,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string___ctor__);
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

  if ( (byte_4B66DDA & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4B66DDA = 1;
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
                                     (const MethodInfo_31FDB1C *)Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__GetEntity__);
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
    sub_1BE4A70(
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
    sub_1BE4A70((PartyOrganizationUtility_o *)eventVoicePlayEntity, 0LL, v11, v12, v13, v14, v15, v16);
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
    sub_1BE4A70(
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
    sub_1BE4A70((PartyOrganizationUtility_o *)eventVoicePlayEntity, 0LL, v11, v12, v13, v14, v15, v16);
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
    sub_1BE4A70(
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
    sub_1BE4A70((PartyOrganizationUtility_o *)eventVoicePlayEntity, 0LL, v11, v12, v13, v14, v15, v16);
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
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  int64_t v12; // x1
  int64_t list; // x0
  int v14; // w22
  int32_t v15; // w23
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4B66DDE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&EventVoicePlayEntity_TypeInfo, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventVoicePlayEntity__ToArray__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo, v10);
    byte_4B66DDE = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = list;
    v15 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v15,
                        (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v12 = list;
      methodPtr_low = LOBYTE(EventVoicePlayEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(EventVoicePlayEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventVoicePlayEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(list + 16) == eventId )
      {
        if ( !v11 )
          break;
        items = v11->fields._items;
        v24 = Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          break;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)list,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v12;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v26 + 4), v12, v16, v17, v18, v19, v20, v21);
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BE4D28(list, v12);
  }
LABEL_17:
  if ( !v11 )
    goto LABEL_19;
  return (EventVoicePlayEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v11,
                                         (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_EventVoicePlayEntity__ToArray__);
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
  __int64 v20; // x1
  System_Collections_Generic_List_object__o *v21; // x22
  System_Collections_Generic_List_object__o *v22; // x21
  int64_t v23; // x1
  int64_t list; // x0
  int32_t Count; // w26
  int64_t v26; // x25
  int32_t v27; // w27
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  int32_t v39; // w23
  Il2CppObject *v40; // x24
  __int64 v41; // x26
  __int64 v42; // x27
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppClass **v52; // x0
  System_Comparison_T__o *v53; // x19
  Il2CppObject *v54; // x20
  struct EventVoicePlayMaster___c_StaticFields *static_fields; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_4B66DDF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_1BE4ACC(&System_Comparison_EventVoicePlayEntity__TypeInfo, v9);
    sub_1BE4ACC(&EventVoicePlayEntity_TypeInfo, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventVoicePlayEntity__Sort__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventVoicePlayEntity__get_Count__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventVoicePlayEntity__get_Item__, v15);
    sub_1BE4ACC(&System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo, v16);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v17);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1BE4ACC(&Method_EventVoicePlayMaster___c__GetValidEventVoicePlayEntity_b__6_0__, v19);
    sub_1BE4ACC(&EventVoicePlayMaster___c_TypeInfo, v20);
    byte_4B66DDF = 1;
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
  v22 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_46;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  list = NetworkManager__getTime(0LL);
  v26 = list;
  if ( Count >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v27,
                        (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v23 = list;
      methodPtr_low = LOBYTE(EventVoicePlayEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(EventVoicePlayEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventVoicePlayEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(list + 16) == eventId && *(_DWORD *)(list + 20) == slot )
      {
        if ( !v21 )
          break;
        items = v21->fields._items;
        v36 = Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__;
        ++v21->fields._version;
        if ( !items )
          break;
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            (Il2CppObject *)list,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &items->obj.klass + size;
          v21->fields._size = size + 1;
          v38[4] = (Il2CppClass *)v23;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v38 + 4), v23, v28, v29, v30, v31, v32, v33);
        }
      }
      if ( Count == ++v27 )
        goto LABEL_20;
    }
LABEL_46:
    sub_1BE4D28(list, v23);
  }
LABEL_20:
  if ( !v21 )
    goto LABEL_46;
  if ( v21->fields._size >= 1 )
  {
    v39 = 0;
    do
    {
      list = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v21,
                        v39,
                        (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventVoicePlayEntity__get_Item__);
      if ( !list )
        goto LABEL_46;
      v40 = (Il2CppObject *)list;
      if ( *(_QWORD *)(list + 72) <= v26 && v26 <= *(_QWORD *)(list + 80) && *(_DWORD *)(list + 48) == eventId )
      {
        v41 = *(_QWORD *)(list + 28);
        v42 = *(_QWORD *)(list + 36);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v64.fields.currentCryptoKey = v41;
        *(_QWORD *)&v64.fields.fakeValue = v42;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v64, 0LL);
        if ( (_DWORD)list == svtId )
        {
          if ( !v22 )
            goto LABEL_46;
          v49 = v22->fields._items;
          v50 = Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__;
          ++v22->fields._version;
          if ( !v49 )
            goto LABEL_46;
          v51 = v22->fields._size;
          if ( (unsigned int)v51 >= v49->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v22,
              v40,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
          }
          else
          {
            v52 = &v49->obj.klass + v51;
            v22->fields._size = v51 + 1;
            v52[4] = (Il2CppClass *)v40;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v52 + 4), (int64_t)v40, v43, v44, v45, v46, v47, v48);
          }
        }
      }
    }
    while ( ++v39 < v21->fields._size );
  }
  list = (int64_t)EventVoicePlayMaster___c_TypeInfo;
  if ( !EventVoicePlayMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventVoicePlayMaster___c_TypeInfo);
    list = (int64_t)EventVoicePlayMaster___c_TypeInfo;
  }
  v53 = *(System_Comparison_T__o **)(*(_QWORD *)(list + 184) + 8LL);
  if ( !v53 )
  {
    if ( !*(_DWORD *)(list + 224) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = (int64_t)EventVoicePlayMaster___c_TypeInfo;
    }
    v54 = **(Il2CppObject ***)(list + 184);
    v53 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_EventVoicePlayEntity__TypeInfo);
    System_Comparison_object____ctor(
      v53,
      v54,
      Method_EventVoicePlayMaster___c__GetValidEventVoicePlayEntity_b__6_0__,
      0LL);
    static_fields = EventVoicePlayMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventVoicePlayEntity__o *)v53;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__6_0, (int64_t)v53, v56, v57, v58, v59, v60, v61);
  }
  if ( !v22 )
    goto LABEL_46;
  System_Collections_Generic_List_object___Sort_56548584(
    v22,
    v53,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_EventVoicePlayEntity__Sort__);
  if ( v22->fields._size < 1 )
    return 0LL;
  else
    return (EventVoicePlayEntity_o *)System_Collections_Generic_List_object___get_Item(
                                       v22,
                                       0,
                                       (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventVoicePlayEntity__get_Item__);
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

  if ( (byte_4B66DDB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__TryGetEntity__, entity);
    byte_4B66DDB = 1;
  }
  PK = (Il2CppObject *)EventVoicePlayEntity__CreatePK(eventId, slot, idx, guideImageId, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__TryGetEntity__);
}


System_String_o *__fastcall EventVoicePlayMaster__getVoiceAssetName(int32_t svtId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = svtId;
  if ( (byte_4B66DDD & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_4543/*"ChrVoice_"*/, method);
    byte_4B66DDD = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_62698808((System_String_o *)StringLiteral_4543/*"ChrVoice_"*/, v2, 0LL);
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

  if ( (byte_4B66DE0 & 1) == 0 )
  {
    sub_1BE4ACC(&EventVoicePlayMaster___c_TypeInfo, v1);
    byte_4B66DE0 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(EventVoicePlayMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventVoicePlayMaster___c_TypeInfo->static_fields->__9 = (struct EventVoicePlayMaster___c_o *)v2;
  sub_1BE4A70(
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
    sub_1BE4D28(this, a);
  return b->fields.idx - a->fields.idx;
}