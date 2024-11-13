void __fastcall EventVoicePlayMaster___ctor(EventVoicePlayMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1640F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string___ctor__, method, v2);
    byte_4B1640F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    186,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string___ctor__);
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

  if ( (byte_4B1640D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__GetEntity__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&slot);
    byte_4B1640D = 1;
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
                                     (const MethodInfo_31B3198 *)Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__GetEntity__);
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
    sub_1BCA784(
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
    sub_1BCA784((PartyOrganizationUtility_o *)eventVoicePlayEntity, 0LL, v11, v12, v13, v14, v15, v16);
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
    sub_1BCA784(
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
    sub_1BCA784((PartyOrganizationUtility_o *)eventVoicePlayEntity, 0LL, v11, v12, v13, v14, v15, v16);
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
    sub_1BCA784(
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
    sub_1BCA784((PartyOrganizationUtility_o *)eventVoicePlayEntity, 0LL, v11, v12, v13, v14, v15, v16);
    return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
EventVoicePlayEntity_array *__fastcall EventVoicePlayMaster__GetTargetEventIdEntityList(
        EventVoicePlayMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x21
  int64_t v19; // x1
  int64_t list; // x0
  int v21; // w22
  int32_t v22; // w23
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_4B16411 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&EventVoicePlayEntity_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventVoicePlayEntity__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo, v16, v17);
    byte_4B16411 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v21 = list;
    v22 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v22,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v19 = list;
      methodPtr_low = LOBYTE(EventVoicePlayEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(EventVoicePlayEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventVoicePlayEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(list + 16) == eventId )
      {
        if ( !v18 )
          break;
        items = v18->fields._items;
        v31 = Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__;
        ++v18->fields._version;
        if ( !items )
          break;
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            (Il2CppObject *)list,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v19;
          sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), v19, v23, v24, v25, v26, v27, v28);
        }
      }
      if ( v21 == ++v22 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BCAA3C(list, v19);
  }
LABEL_17:
  if ( !v18 )
    goto LABEL_19;
  return (EventVoicePlayEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v18,
                                         (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventVoicePlayEntity__ToArray__);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_List_object__o *v34; // x22
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Collections_Generic_List_object__o *v38; // x21
  int64_t v39; // x1
  int64_t list; // x0
  __int64 v41; // x1
  int32_t Count; // w26
  int64_t v43; // x2
  __int64 v44; // x3
  int64_t v45; // x25
  int32_t v46; // w27
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x0
  int32_t v56; // w23
  Il2CppObject *v57; // x24
  __int64 v58; // x26
  __int64 v59; // x27
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  Il2CppClass **v67; // x0
  System_Comparison_T__o *v68; // x19
  Il2CppObject *v69; // x20
  struct EventVoicePlayMaster___c_StaticFields *static_fields; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16

  if ( (byte_4B16412 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&slot);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8, v9);
    sub_1BCA7E0(&System_Comparison_EventVoicePlayEntity__TypeInfo, v10, v11);
    sub_1BCA7E0(&EventVoicePlayEntity_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventVoicePlayEntity__Sort__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventVoicePlayEntity__get_Count__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventVoicePlayEntity__get_Item__, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo, v24, v25);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v26, v27);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_EventVoicePlayMaster___c__GetValidEventVoicePlayEntity_b__6_0__, v30, v31);
    sub_1BCA7E0(&EventVoicePlayMaster___c_TypeInfo, v32, v33);
    byte_4B16412 = 1;
  }
  v34 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       *(_QWORD *)&slot,
                                                       *(_QWORD *)&svtId);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
  v38 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo,
                                                       v35,
                                                       v36,
                                                       v37);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_46;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v41);
  list = NetworkManager__getTime(0LL);
  v45 = list;
  if ( Count >= 1 )
  {
    v46 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v46,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v39 = list;
      methodPtr_low = LOBYTE(EventVoicePlayEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(EventVoicePlayEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventVoicePlayEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(list + 16) == eventId && *(_DWORD *)(list + 20) == slot )
      {
        if ( !v34 )
          break;
        items = v34->fields._items;
        v53 = Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__;
        ++v34->fields._version;
        if ( !items )
          break;
        size = v34->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v34,
            (Il2CppObject *)list,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
        }
        else
        {
          v55 = &items->obj.klass + size;
          v34->fields._size = size + 1;
          v55[4] = (Il2CppClass *)v39;
          sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 4), v39, v43, v44, v47, v48, v49, v50);
        }
      }
      if ( Count == ++v46 )
        goto LABEL_20;
    }
LABEL_46:
    sub_1BCAA3C(list, v39);
  }
LABEL_20:
  if ( !v34 )
    goto LABEL_46;
  if ( v34->fields._size >= 1 )
  {
    v56 = 0;
    do
    {
      list = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v34,
                        v56,
                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventVoicePlayEntity__get_Item__);
      if ( !list )
        goto LABEL_46;
      v57 = (Il2CppObject *)list;
      if ( *(_QWORD *)(list + 72) <= v45 && v45 <= *(_QWORD *)(list + 80) && *(_DWORD *)(list + 48) == eventId )
      {
        v58 = *(_QWORD *)(list + 28);
        v59 = *(_QWORD *)(list + 36);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
        *(_QWORD *)&v79.fields.currentCryptoKey = v58;
        *(_QWORD *)&v79.fields.fakeValue = v59;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v79, 0LL);
        if ( (_DWORD)list == svtId )
        {
          if ( !v38 )
            goto LABEL_46;
          v64 = v38->fields._items;
          v65 = Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__;
          ++v38->fields._version;
          if ( !v64 )
            goto LABEL_46;
          v66 = v38->fields._size;
          if ( (unsigned int)v66 >= v64->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v38,
              v57,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
          }
          else
          {
            v67 = &v64->obj.klass + v66;
            v38->fields._size = v66 + 1;
            v67[4] = (Il2CppClass *)v57;
            sub_1BCA784((PartyOrganizationUtility_o *)(v67 + 4), (int64_t)v57, v43, v44, v60, v61, v62, v63);
          }
        }
      }
    }
    while ( ++v56 < v34->fields._size );
  }
  list = (int64_t)EventVoicePlayMaster___c_TypeInfo;
  if ( !EventVoicePlayMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventVoicePlayMaster___c_TypeInfo, v39);
    list = (int64_t)EventVoicePlayMaster___c_TypeInfo;
  }
  v68 = *(System_Comparison_T__o **)(*(_QWORD *)(list + 184) + 8LL);
  if ( !v68 )
  {
    if ( !*(_DWORD *)(list + 224) )
    {
      j_il2cpp_runtime_class_init_0(list, v39);
      list = (int64_t)EventVoicePlayMaster___c_TypeInfo;
    }
    v69 = **(Il2CppObject ***)(list + 184);
    v68 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventVoicePlayEntity__TypeInfo, v39, v43, v44);
    System_Comparison_object____ctor(
      v68,
      v69,
      Method_EventVoicePlayMaster___c__GetValidEventVoicePlayEntity_b__6_0__,
      0LL);
    static_fields = EventVoicePlayMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventVoicePlayEntity__o *)v68;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__6_0, (int64_t)v68, v71, v72, v73, v74, v75, v76);
  }
  if ( !v38 )
    goto LABEL_46;
  System_Collections_Generic_List_object___Sort_56244000(
    v38,
    v68,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventVoicePlayEntity__Sort__);
  if ( v38->fields._size < 1 )
    return 0LL;
  else
    return (EventVoicePlayEntity_o *)System_Collections_Generic_List_object___get_Item(
                                       v38,
                                       0,
                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventVoicePlayEntity__get_Item__);
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

  if ( (byte_4B1640E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&eventId);
    byte_4B1640E = 1;
  }
  PK = (Il2CppObject *)EventVoicePlayEntity__CreatePK(eventId, slot, idx, guideImageId, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__TryGetEntity__);
}


System_String_o *__fastcall EventVoicePlayMaster__getVoiceAssetName(int32_t svtId, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = svtId;
  if ( (byte_4B16410 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4532/*"ChrVoice_"*/, method, v2);
    byte_4B16410 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v5, 0LL);
  return System_String__Concat_62401220((System_String_o *)StringLiteral_4532/*"ChrVoice_"*/, v3, 0LL);
}


void __fastcall EventVoicePlayMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16413 & 1) == 0 )
  {
    sub_1BCA7E0(&EventVoicePlayMaster___c_TypeInfo, v1, v2);
    byte_4B16413 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventVoicePlayMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventVoicePlayMaster___c_TypeInfo->static_fields->__9 = (struct EventVoicePlayMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventVoicePlayMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return b->fields.idx - a->fields.idx;
}