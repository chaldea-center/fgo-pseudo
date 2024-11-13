void __fastcall EventBuddyPointResultManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  int64_t v20; // x1
  struct EventBuddyPointResultManager_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x1
  struct EventBuddyPointResultManager_StaticFields *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x1
  struct EventBuddyPointResultManager_StaticFields *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x1
  struct EventBuddyPointResultManager_StaticFields *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x1
  struct EventBuddyPointResultManager_StaticFields *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7

  if ( (byte_4B1A3A3 & 1) == 0 )
  {
    sub_1BCA7E0(&EventBuddyPointResultManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_3373/*"BuddyResultEventUI"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_3032/*"BEST_BUDDY_POINT_RESULT"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_3033/*"BEST_BUDDY_RESULT_REPLAY_DIALOG"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_17810/*"buddy_bg_at"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_6347/*"EventUI/Prefabs"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_17381/*"bit_buddy_result"*/, v18, v19);
    byte_4B1A3A3 = 1;
  }
  EventBuddyPointResultManager_TypeInfo->static_fields->EVENT_UI_ASSET_PATH = (struct System_String_o *)StringLiteral_6347/*"EventUI/Prefabs"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventBuddyPointResultManager_TypeInfo->static_fields,
    StringLiteral_6347/*"EventUI/Prefabs"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v20 = StringLiteral_17381/*"bit_buddy_result"*/;
  static_fields = EventBuddyPointResultManager_TypeInfo->static_fields;
  static_fields->BUDDY_POINT_RESULT_PREFAB = (struct System_String_o *)StringLiteral_17381/*"bit_buddy_result"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->BUDDY_POINT_RESULT_PREFAB,
    v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = StringLiteral_17810/*"buddy_bg_at"*/;
  v29 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v29->BUDDY_RESULT_ATLAS = (struct System_String_o *)StringLiteral_17810/*"buddy_bg_at"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v29->BUDDY_RESULT_ATLAS, v28, v30, v31, v32, v33, v34, v35);
  v36 = StringLiteral_3032/*"BEST_BUDDY_POINT_RESULT"*/;
  v37 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v37->SAVEKEY_BEST_BUDDY_POINT_RESULT = (struct System_String_o *)StringLiteral_3032/*"BEST_BUDDY_POINT_RESULT"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v37->SAVEKEY_BEST_BUDDY_POINT_RESULT, v36, v38, v39, v40, v41, v42, v43);
  v44 = StringLiteral_3033/*"BEST_BUDDY_RESULT_REPLAY_DIALOG"*/;
  v45 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v45->SAVEKEY_BEST_BUDDY_RESULT_REPLAY_DIALOG = (struct System_String_o *)StringLiteral_3033/*"BEST_BUDDY_RESULT_REPLAY_DIALOG"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v45->SAVEKEY_BEST_BUDDY_RESULT_REPLAY_DIALOG,
    v44,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v52 = StringLiteral_3373/*"BuddyResultEventUI"*/;
  v53 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v53->BUDDY_RESULT_UI_PREFAB = (struct System_String_o *)StringLiteral_3373/*"BuddyResultEventUI"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v53->BUDDY_RESULT_UI_PREFAB, v52, v54, v55, v56, v57, v58, v59);
}


void __fastcall EventBuddyPointResultManager___ctor(EventBuddyPointResultManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventBuddyPointResultManager__CheckDisplayCondition(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  EventServantPointRankMaster_o *Master_object; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  Il2CppObject *v19; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1A39E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v10, v11);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v12, v13);
    byte_4B1A39E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&eventId);
  Master_object = (EventServantPointRankMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Master_object )
    goto LABEL_21;
  if ( !EventServantPointRankMaster__IsEnableEvent(Master_object, eventId, 0LL) )
    return 0;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v16);
  Master_object = (EventServantPointRankMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
LABEL_21:
    sub_1BCAA3C(Master_object, v15);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          eventId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  Master_object = (EventServantPointRankMaster_o *)entity;
  if ( !entity )
    goto LABEL_21;
  if ( !EventEntity__IsExchangePeriod((EventEntity_o *)entity, 0LL, 0LL) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17);
  v19 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
  Master_object = (EventServantPointRankMaster_o *)NetworkManager__get_UserId(0LL);
  if ( !v19 )
    goto LABEL_21;
  return UserEventServantPointMaster__IsAnyExist(
           (UserEventServantPointMaster_o *)v19,
           (int64_t)Master_object,
           eventId,
           0LL);
}


bool __fastcall EventBuddyPointResultManager__CheckFirstTimeDisplayCondition(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  return EventBuddyPointResultManager__CheckDisplayCondition(this, eventId, method)
      && !EventBuddyPointResultManager__IsFirstTimeDisplayed(this, eventId, v5);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventBuddyPointResultManager__CheckReplayIntroDialogDisplayCondition(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventBuddyPointResultManager_o *v4; // x20
  const MethodInfo *v5; // x2
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  EventBuddyPointResultManager_o *v8; // x0
  System_String_o *SaveKey; // x0

  v4 = this;
  if ( (byte_4B1A3A0 & 1) == 0 )
  {
    this = (EventBuddyPointResultManager_o *)sub_1BCA7E0(
                                               &EventBuddyPointResultManager_TypeInfo,
                                               *(_QWORD *)&eventId,
                                               method);
    byte_4B1A3A0 = 1;
  }
  if ( EventBuddyPointResultManager__CheckDisplayCondition(this, eventId, method)
    && EventBuddyPointResultManager__IsFirstTimeDisplayed(v4, eventId, v5) )
  {
    v8 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
    if ( !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo, v6);
      v8 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
    }
    SaveKey = EventBuddyPointResultManager__GetSaveKey(v8, *((System_String_o **)v8[2].monitor + 4), eventId, v7);
    return !UnityEngine_PlayerPrefs__HasKey(SaveKey, 0LL);
  }
  else
  {
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventBuddyPointResultManager__GetSaveKey(
        EventBuddyPointResultManager_o *this,
        System_String_o *keyBase,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B1A39F & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, keyBase, *(_QWORD *)&eventId);
    sub_1BCA7E0(&StringLiteral_25353/*"{0}_{1}"*/, v6, v7);
    byte_4B1A39F = 1;
  }
  v10 = eventId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return System_String__Format_62415592((System_String_o *)StringLiteral_25353/*"{0}_{1}"*/, (Il2CppObject *)keyBase, v8, 0LL);
}


BuddyResultReplayUIControl_o *__fastcall EventBuddyPointResultManager__InstantiateEventUIPrefab(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  AssetData_o *eventUIAssetData; // x19
  EventBuddyPointResultManager_c *v13; // x0
  __int64 v14; // x1
  Il2CppObject *Object_object__49237568; // x19
  __int64 v16; // x1
  Il2CppObject *v18; // x0
  __int64 v19; // x1

  if ( (byte_4B1A395 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, method, v2);
    sub_1BCA7E0(&EventBuddyPointResultManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BuddyResultReplayUIControl___, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    byte_4B1A395 = 1;
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( !eventUIAssetData )
    return 0LL;
  v13 = EventBuddyPointResultManager_TypeInfo;
  if ( !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo, method);
    v13 = EventBuddyPointResultManager_TypeInfo;
  }
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              eventUIAssetData,
                              v13->static_fields->BUDDY_RESULT_UI_PREFAB,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__49237568, 0LL, 0LL) )
    return 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  v18 = UnityEngine_Object__Instantiate_object_(
          Object_object__49237568,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v18 )
    sub_1BCAA3C(0LL, v19);
  return (BuddyResultReplayUIControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)v18,
                                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BuddyResultReplayUIControl___);
}


EventBuddyPointResultComponent_o *__fastcall EventBuddyPointResultManager__InstantiateResultPrefab(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  AssetData_o *eventUIAssetData; // x19
  EventBuddyPointResultManager_c *v13; // x0
  __int64 v14; // x1
  Il2CppObject *Object_object__49237568; // x19
  __int64 v16; // x1
  Il2CppObject *v18; // x0
  __int64 v19; // x1

  if ( (byte_4B1A399 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, method, v2);
    sub_1BCA7E0(&EventBuddyPointResultManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventBuddyPointResultComponent___, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    byte_4B1A399 = 1;
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( !eventUIAssetData )
    return 0LL;
  v13 = EventBuddyPointResultManager_TypeInfo;
  if ( !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo, method);
    v13 = EventBuddyPointResultManager_TypeInfo;
  }
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              eventUIAssetData,
                              v13->static_fields->BUDDY_POINT_RESULT_PREFAB,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__49237568, 0LL, 0LL) )
    return 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  v18 = UnityEngine_Object__Instantiate_object_(
          Object_object__49237568,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v18 )
    sub_1BCAA3C(0LL, v19);
  return (EventBuddyPointResultComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)v18,
                                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventBuddyPointResultComponent___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventBuddyPointResultManager__IsFirstTimeDisplayed(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EventBuddyPointResultManager_o *v5; // x0
  System_String_o *SaveKey; // x0

  if ( (byte_4B1A39D & 1) == 0 )
  {
    sub_1BCA7E0(&EventBuddyPointResultManager_TypeInfo, *(_QWORD *)&eventId, method);
    byte_4B1A39D = 1;
  }
  v5 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
  if ( !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo, *(_QWORD *)&eventId);
    v5 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
  }
  SaveKey = EventBuddyPointResultManager__GetSaveKey(v5, *((System_String_o **)v5[2].monitor + 3), eventId, v3);
  return UnityEngine_PlayerPrefs__HasKey(SaveKey, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventBuddyPointResultManager__LoadAssetData(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x21
  __int64 v20; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  EventBuddyPointResultManager_c *v35; // x0
  Il2CppObject *EVENT_UI_ASSET_PATH; // x20
  Il2CppObject *v37; // x0
  System_String_o *v38; // x19
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  AssetLoader_LoadEndDataHandler_o *v42; // x20
  __int64 v43; // x1
  int32_t v45; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B1A393 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&eventId, callback);
    sub_1BCA7E0(&EventBuddyPointResultManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_EventBuddyPointResultManager___c__DisplayClass14_0__LoadAssetData_b__0__, v13, v14);
    sub_1BCA7E0(&EventBuddyPointResultManager___c__DisplayClass14_0_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_25309/*"{0}/{1}"*/, v17, v18);
    byte_4B1A393 = 1;
  }
  v19 = sub_1BCAA2C(EventBuddyPointResultManager___c__DisplayClass14_0_TypeInfo, *(_QWORD *)&eventId, callback, method);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    sub_1BCAA3C(v20, v21);
  *(_QWORD *)(v19 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v19 + 24) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 24), (int64_t)callback, v28, v29, v30, v31, v32, v33);
  v35 = EventBuddyPointResultManager_TypeInfo;
  if ( !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo, v34);
    v35 = EventBuddyPointResultManager_TypeInfo;
  }
  EVENT_UI_ASSET_PATH = (Il2CppObject *)v35->static_fields->EVENT_UI_ASSET_PATH;
  v45 = eventId;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
  v38 = System_String__Format_62415592((System_String_o *)StringLiteral_25309/*"{0}/{1}"*/, EVENT_UI_ASSET_PATH, v37, 0LL);
  v42 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v39, v40, v41);
  AssetLoader_LoadEndDataHandler___ctor(
    v42,
    (Il2CppObject *)v19,
    Method_EventBuddyPointResultManager___c__DisplayClass14_0__LoadAssetData_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v43);
  return AssetManager__loadAssetStorage(v38, v42, 1, 0LL);
}


UIAtlas_o *__fastcall EventBuddyPointResultManager__LoadAtlasFromAssetData(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  AssetData_o *eventUIAssetData; // x19
  EventBuddyPointResultManager_c *v11; // x0
  __int64 v12; // x1
  Il2CppObject *Object_object__49237568; // x19
  _BOOL8 v14; // x0
  __int64 v15; // x1

  if ( (byte_4B1A398 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, method, v2);
    sub_1BCA7E0(&EventBuddyPointResultManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B1A398 = 1;
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( !eventUIAssetData )
    return 0LL;
  v11 = EventBuddyPointResultManager_TypeInfo;
  if ( !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo, method);
    v11 = EventBuddyPointResultManager_TypeInfo;
  }
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              eventUIAssetData,
                              v11->static_fields->BUDDY_RESULT_ATLAS,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  v14 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__49237568, 0LL, 0LL);
  if ( v14 )
    return 0LL;
  if ( !Object_object__49237568 )
    sub_1BCAA3C(v14, v15);
  return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)Object_object__49237568,
                        (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
}


void __fastcall EventBuddyPointResultManager__OnClickReplayButton(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *uiControl; // x20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x1
  BuddyResultReplayUIControl_o *v10; // x0

  if ( (byte_4B1A39B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventBuddyPointResultManager_OnClickReplayButton__, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B1A39B = 1;
  }
  uiControl = (UnityEngine_Object_o *)this->fields.uiControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(uiControl, 0LL, 0LL) )
  {
    v7 = Method_EventBuddyPointResultManager_OnClickReplayButton__;
    if ( (*((_BYTE *)Method_EventBuddyPointResultManager_OnClickReplayButton__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BCA7F8(Method_EventBuddyPointResultManager_OnClickReplayButton__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    v10 = this->fields.uiControl;
    if ( !v10 )
      sub_1BCAA3C(0LL, v9);
    BuddyResultReplayUIControl__OpenSelectDialog(v10, v9);
  }
}


void __fastcall EventBuddyPointResultManager__OnCloseReplayDialog(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  EventBuddyPointResultManager_o *v5; // x0
  System_String_o *SaveKey; // x0

  if ( (byte_4B1A3A2 & 1) == 0 )
  {
    sub_1BCA7E0(&EventBuddyPointResultManager_TypeInfo, method, v2);
    byte_4B1A3A2 = 1;
  }
  v5 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
  if ( !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo, method);
    v5 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
  }
  SaveKey = EventBuddyPointResultManager__GetSaveKey(
              v5,
              *((System_String_o **)v5[2].monitor + 4),
              this->fields.currentEventId,
              v3);
  UnityEngine_PlayerPrefs__SetInt(SaveKey, 1, 0LL);
}


void __fastcall EventBuddyPointResultManager__OnPlayEnd(EventBuddyPointResultManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4B1A397 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_EventBuddyPointResultManager__OnPlayEnd_b__18_0__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B1A397 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_EventBuddyPointResultManager__OnPlayEnd_b__18_0__, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v18, v19);
  CommonUI__maskFadeout(v15, 1, DEFAULT_FADE_TIME, v17, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBuddyPointResultManager__OnSelectPortraitImgCount(
        EventBuddyPointResultManager_o *this,
        int32_t id,
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
  __int64 v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Action_o *onReplayStartCallback; // x8
  Il2CppObject *Instance; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  AvalonSceneManager_c *v28; // x8
  CommonUI_o *v29; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v31; // x21

  if ( (byte_4B1A39C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&id, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_EventBuddyPointResultManager___c__DisplayClass23_0__OnSelectPortraitImgCount_b__0__, v10, v11);
    sub_1BCA7E0(&EventBuddyPointResultManager___c__DisplayClass23_0_TypeInfo, v12, v13);
    byte_4B1A39C = 1;
  }
  v14 = sub_1BCAA2C(EventBuddyPointResultManager___c__DisplayClass23_0_TypeInfo, *(_QWORD *)&id, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_10;
  *(_QWORD *)(v14 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)this, v17, v18, v19, v20, v21, v22);
  *(_DWORD *)(v14 + 24) = id;
  onReplayStartCallback = this->fields.onReplayStartCallback;
  if ( onReplayStartCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onReplayStartCallback->fields.m_target)(
      onReplayStartCallback->fields.original_method_info,
      *(_QWORD *)&onReplayStartCallback->fields.extra_arg);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v28 = AvalonSceneManager_TypeInfo;
  v29 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v25);
    v28 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v28->static_fields->DEFAULT_FADE_TIME;
  v31 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v26, v27);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v14,
    Method_EventBuddyPointResultManager___c__DisplayClass23_0__OnSelectPortraitImgCount_b__0__,
    0LL);
  if ( !v29 )
LABEL_10:
    sub_1BCAA3C(v15, v16);
  CommonUI__maskFadeout(v29, 1, DEFAULT_FADE_TIME, v31, 0LL);
}


void __fastcall EventBuddyPointResultManager__OpenResultReplayDialog(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *uiControl; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  BuddyResultReplayUIControl_o *v12; // x20
  System_Action_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2

  if ( (byte_4B1A3A1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventBuddyPointResultManager_OnCloseReplayDialog__, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B1A3A1 = 1;
  }
  uiControl = (UnityEngine_Object_o *)this->fields.uiControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(uiControl, 0LL, 0LL) )
  {
    v12 = this->fields.uiControl;
    v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_EventBuddyPointResultManager_OnCloseReplayDialog__, 0LL);
    if ( !v12 )
      sub_1BCAA3C(v14, v15);
    BuddyResultReplayUIControl__OpenReplayIntroDialog(v12, v13, v16);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventBuddyPointResultManager__PlayBestBuddyResult(
        EventBuddyPointResultManager_o *this,
        System_Action_o *setupEndCallback,
        System_Action_o *onPlayEndCallback,
        int32_t selectLimitCount,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x21
  UnityEngine_GameObject_o *AtlasFromAssetData; // x0
  const MethodInfo *v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  const MethodInfo *v32; // x1
  struct EventBuddyPointResultComponent_o *v33; // x0
  struct EventBuddyPointResultComponent_o **p_eventBuddyPointStageComponent; // x23
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x1
  UnityEngine_Object_o *eventBuddyPointStageComponent; // x24
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v50; // x1
  UnityEngine_Object_o *backgroundObj; // x22
  UIAtlas_o *v52; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  EventBuddyPointResultComponent_o *v54; // x23
  int32_t currentEventId; // w24
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  System_Action_o *v59; // x25
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  System_Action_o *v63; // x21
  const MethodInfo *v64; // x6

  if ( (byte_4B1A396 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, setupEndCallback, onPlayEndCallback);
    sub_1BCA7E0(&Method_EventBuddyPointResultManager_OnPlayEnd__, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_EventBuddyPointResultManager___c__DisplayClass17_0__PlayBestBuddyResult_b__0__, v13, v14);
    sub_1BCA7E0(&EventBuddyPointResultManager___c__DisplayClass17_0_TypeInfo, v15, v16);
    byte_4B1A396 = 1;
  }
  v17 = sub_1BCAA2C(
          EventBuddyPointResultManager___c__DisplayClass17_0_TypeInfo,
          setupEndCallback,
          onPlayEndCallback,
          *(_QWORD *)&selectLimitCount);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_19;
  *(_QWORD *)(v17 + 16) = setupEndCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)setupEndCallback, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)this, v26, v27, v28, v29, v30, v31);
  if ( !this->fields.eventUIAssetData )
    return 0;
  v33 = EventBuddyPointResultManager__InstantiateResultPrefab(this, v32);
  this->fields.eventBuddyPointStageComponent = v33;
  p_eventBuddyPointStageComponent = &this->fields.eventBuddyPointStageComponent;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventBuddyPointStageComponent,
    (int64_t)v33,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  eventBuddyPointStageComponent = (UnityEngine_Object_o *)this->fields.eventBuddyPointStageComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
  if ( UnityEngine_Object__op_Equality(eventBuddyPointStageComponent, 0LL, 0LL) )
    return 0;
  this->fields.onPlayEndCallback = onPlayEndCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onPlayEndCallback,
    (int64_t)onPlayEndCallback,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  backgroundObj = (UnityEngine_Object_o *)this->fields.backgroundObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50);
  if ( UnityEngine_Object__op_Inequality(backgroundObj, 0LL, 0LL) )
  {
    AtlasFromAssetData = this->fields.backgroundObj;
    if ( !AtlasFromAssetData )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive(AtlasFromAssetData, 0, 0LL);
  }
  AtlasFromAssetData = (UnityEngine_GameObject_o *)EventBuddyPointResultManager__LoadAtlasFromAssetData(this, v19);
  if ( !this->fields.eventBuddyPointStageComponent )
    goto LABEL_19;
  v52 = (UIAtlas_o *)AtlasFromAssetData;
  AtlasFromAssetData = UnityEngine_Component__get_gameObject(
                         (UnityEngine_Component_o *)this->fields.eventBuddyPointStageComponent,
                         0LL);
  if ( !AtlasFromAssetData )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(AtlasFromAssetData, 0, 0LL);
  AtlasFromAssetData = (UnityEngine_GameObject_o *)*p_eventBuddyPointStageComponent;
  if ( !*p_eventBuddyPointStageComponent )
    goto LABEL_19;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)AtlasFromAssetData, 0LL);
  GameObjectExtensions__SafeSetParent(gameObject, (UnityEngine_Component_o *)this, 0LL);
  v54 = this->fields.eventBuddyPointStageComponent;
  currentEventId = this->fields.currentEventId;
  v59 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v56, v57, v58);
  System_Action___ctor(
    v59,
    (Il2CppObject *)v17,
    Method_EventBuddyPointResultManager___c__DisplayClass17_0__PlayBestBuddyResult_b__0__,
    0LL);
  v63 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v60, v61, v62);
  System_Action___ctor(v63, (Il2CppObject *)this, Method_EventBuddyPointResultManager_OnPlayEnd__, 0LL);
  if ( !v54 )
LABEL_19:
    sub_1BCAA3C(AtlasFromAssetData, v19);
  EventBuddyPointResultComponent__Setup(v54, currentEventId, v52, v59, v63, selectLimitCount, v64);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBuddyPointResultManager__Setup(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        System_Action_o *setupEndCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x22
  _BOOL8 AssetData; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x23
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Action_o *v30; // x21
  const MethodInfo *v31; // x3

  if ( (byte_4B1A392 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&eventId, setupEndCallback);
    sub_1BCA7E0(&Method_EventBuddyPointResultManager___c__DisplayClass13_0__Setup_b__0__, v7, v8);
    sub_1BCA7E0(&EventBuddyPointResultManager___c__DisplayClass13_0_TypeInfo, v9, v10);
    byte_4B1A392 = 1;
  }
  v11 = sub_1BCAA2C(
          EventBuddyPointResultManager___c__DisplayClass13_0_TypeInfo,
          *(_QWORD *)&eventId,
          setupEndCallback,
          method);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_7;
  *(_QWORD *)(v11 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = setupEndCallback;
  v20 = v11 + 24;
  sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)setupEndCallback, v21, v22, v23, v24, v25, v26);
  this->fields.currentEventId = eventId;
  v30 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v27, v28, v29);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v11,
    Method_EventBuddyPointResultManager___c__DisplayClass13_0__Setup_b__0__,
    0LL);
  AssetData = EventBuddyPointResultManager__LoadAssetData(this, eventId, v30, v31);
  if ( AssetData )
    return;
  if ( !*(_QWORD *)v20 )
LABEL_7:
    sub_1BCAA3C(AssetData, v13);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v20 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v20 + 64LL),
    *(_QWORD *)(*(_QWORD *)v20 + 40LL));
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBuddyPointResultManager__SetupEventUI(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventBuddyPointResultManager_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x1
  bool v10; // w21
  UnityEngine_Component_o **p_uiControl; // x22
  UnityEngine_Object_o *uiControl; // x23
  BuddyResultReplayUIControl_o *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  UnityEngine_Object_o *v21; // x23
  UnityEngine_Component_o *v22; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v24; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  BuddyResultReplayUIControl_o *v28; // x21
  System_Action_int__o *v29; // x22
  const MethodInfo *v30; // x3

  v4 = this;
  if ( (byte_4B1A394 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_EventBuddyPointResultManager_OnSelectPortraitImgCount__, v5, v6);
    this = (EventBuddyPointResultManager_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B1A394 = 1;
  }
  v10 = EventBuddyPointResultManager__CheckDisplayCondition(this, eventId, method);
  if ( v10 )
  {
    p_uiControl = (UnityEngine_Component_o **)&v4->fields.uiControl;
    uiControl = (UnityEngine_Object_o *)v4->fields.uiControl;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( UnityEngine_Object__op_Equality(uiControl, 0LL, 0LL) )
    {
      v13 = EventBuddyPointResultManager__InstantiateEventUIPrefab(v4, v9);
      v4->fields.uiControl = v13;
      sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.uiControl, (int64_t)v13, v14, v15, v16, v17, v18, v19);
      v21 = (UnityEngine_Object_o *)v4->fields.uiControl;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
      if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
      {
        v22 = *p_uiControl;
        if ( !*p_uiControl )
          goto LABEL_21;
        gameObject = UnityEngine_Component__get_gameObject(v22, 0LL);
        GameObjectExtensions__SafeSetParent(gameObject, (UnityEngine_Component_o *)v4, 0LL);
      }
    }
  }
  v24 = (UnityEngine_Object_o *)v4->fields.uiControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
  {
    v22 = (UnityEngine_Component_o *)v4->fields.uiControl;
    if ( !v22 )
      goto LABEL_21;
    v22 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v22, 0LL);
    if ( !v22 )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v22, v10, 0LL);
    if ( v10 )
    {
      v28 = v4->fields.uiControl;
      v29 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v25, v26, v27);
      System_Action_int____ctor(
        v29,
        (Il2CppObject *)v4,
        Method_EventBuddyPointResultManager_OnSelectPortraitImgCount__,
        0LL);
      if ( v28 )
      {
        BuddyResultReplayUIControl__Setup(v28, eventId, v29, v30);
        return;
      }
LABEL_21:
      sub_1BCAA3C(v22, v9);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBuddyPointResultManager__SetupReplayEnv(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        BuddyPointResultReplayButton_o *replayButton,
        System_Action_o *onRePlayStartCallback,
        System_Action_o *onPlayEndCallback,
        const MethodInfo *method)
{
  EventBuddyPointResultManager_o *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  bool v19; // w24
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  EventDelegate_Callback_o *v25; // x24
  const MethodInfo *v26; // x2
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x1

  v10 = this;
  if ( (byte_4B1A39A & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, *(_QWORD *)&eventId, replayButton);
    sub_1BCA7E0(&Method_EventBuddyPointResultManager_OnClickReplayButton__, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    this = (EventBuddyPointResultManager_o *)sub_1BCA7E0(
                                               &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                               v15,
                                               v16);
    byte_4B1A39A = 1;
  }
  v19 = EventBuddyPointResultManager__CheckDisplayCondition(this, eventId, (const MethodInfo *)replayButton)
     && EventBuddyPointResultManager__IsFirstTimeDisplayed(v10, eventId, v18);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)replayButton,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !replayButton )
      goto LABEL_17;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)replayButton, 0LL);
    if ( !gameObject )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive(gameObject, v19, 0LL);
    if ( v19 )
    {
      v25 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v22, v23, v24);
      EventDelegate_Callback___ctor(
        v25,
        (Il2CppObject *)v10,
        (intptr_t)Method_EventBuddyPointResultManager_OnClickReplayButton__,
        0LL);
      BuddyPointResultReplayButton__Setup(replayButton, v25, v26);
      v10->fields.onReplayStartCallback = onRePlayStartCallback;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v10->fields.onReplayStartCallback,
        (int64_t)onRePlayStartCallback,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      v10->fields.onPlayEndCallback = onPlayEndCallback;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v10->fields.onPlayEndCallback,
        (int64_t)onPlayEndCallback,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      if ( EventBuddyPointResultManager__CheckReplayIntroDialogDisplayCondition(v10, eventId, v39) )
      {
        gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( gameObject )
        {
          if ( !CommonUI__IsActive_TutorialBigDialog((CommonUI_o *)gameObject, 0LL) )
            EventBuddyPointResultManager__OpenResultReplayDialog(v10, v40);
          return;
        }
LABEL_17:
        sub_1BCAA3C(gameObject, v21);
      }
    }
  }
}


void __fastcall EventBuddyPointResultManager___OnPlayEnd_b__18_0(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *backgroundObj; // x20
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  UnityEngine_GameObject_o *v9; // x0
  EventBuddyPointResultManager_o *v10; // x0
  System_String_o *SaveKey; // x0
  __int64 v12; // x1
  struct System_Action_o *onPlayEndCallback; // x8
  UnityEngine_Object_o *eventBuddyPointStageComponent; // x20
  __int64 v15; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v17; // x1
  UnityEngine_Object_o *v18; // x19

  if ( (byte_4B1A3A4 & 1) == 0 )
  {
    sub_1BCA7E0(&EventBuddyPointResultManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B1A3A4 = 1;
  }
  backgroundObj = (UnityEngine_Object_o *)this->fields.backgroundObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(backgroundObj, 0LL, 0LL) )
  {
    v9 = this->fields.backgroundObj;
    if ( !v9 )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(v9, 1, 0LL);
  }
  v10 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
  if ( !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo, v7);
    v10 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
  }
  SaveKey = EventBuddyPointResultManager__GetSaveKey(
              v10,
              *((System_String_o **)v10[2].monitor + 3),
              this->fields.currentEventId,
              v8);
  UnityEngine_PlayerPrefs__SetInt(SaveKey, 1, 0LL);
  onPlayEndCallback = this->fields.onPlayEndCallback;
  if ( onPlayEndCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onPlayEndCallback->fields.m_target)(
      onPlayEndCallback->fields.original_method_info,
      *(_QWORD *)&onPlayEndCallback->fields.extra_arg);
  eventBuddyPointStageComponent = (UnityEngine_Object_o *)this->fields.eventBuddyPointStageComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Inequality(eventBuddyPointStageComponent, 0LL, 0LL) )
  {
    v9 = (UnityEngine_GameObject_o *)this->fields.eventBuddyPointStageComponent;
    if ( !v9 )
      goto LABEL_24;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
    {
      v9 = (UnityEngine_GameObject_o *)this->fields.eventBuddyPointStageComponent;
      if ( v9 )
      {
        v18 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
        UnityEngine_Object__Destroy_70154244(v18, 0LL);
        return;
      }
LABEL_24:
      sub_1BCAA3C(v9, v7);
    }
  }
}


void __fastcall EventBuddyPointResultManager___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B1A3A5 & 1) == 0 )
  {
    sub_1BCA7E0(&EventBuddyPointResultManager___c_TypeInfo, v1, v2);
    byte_4B1A3A5 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventBuddyPointResultManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventBuddyPointResultManager___c_TypeInfo->static_fields->__9 = (struct EventBuddyPointResultManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventBuddyPointResultManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall EventBuddyPointResultManager___c___ctor(
        EventBuddyPointResultManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventBuddyPointResultManager___c___OnSelectPortraitImgCount_b__23_1(
        EventBuddyPointResultManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  AvalonSceneManager_c *v15; // x8
  CommonUI_o *v16; // x19
  EventBuddyPointResultManager___c_c *v17; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__23_2; // x20
  Il2CppObject *v20; // x21
  struct EventBuddyPointResultManager___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B1A3A6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_2__, v7, v8);
    sub_1BCA7E0(&EventBuddyPointResultManager___c_TypeInfo, v9, v10);
    byte_4B1A3A6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  v16 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v12);
    v15 = AvalonSceneManager_TypeInfo;
  }
  v17 = EventBuddyPointResultManager___c_TypeInfo;
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  if ( !EventBuddyPointResultManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager___c_TypeInfo, v12);
    v17 = EventBuddyPointResultManager___c_TypeInfo;
  }
  _9__23_2 = v17->static_fields->__9__23_2;
  if ( !_9__23_2 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17, v12);
      v17 = EventBuddyPointResultManager___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__23_2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
    System_Action___ctor(
      _9__23_2,
      v20,
      Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_2__,
      0LL);
    static_fields = EventBuddyPointResultManager___c_TypeInfo->static_fields;
    static_fields->__9__23_2 = _9__23_2;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__23_2,
      (int64_t)_9__23_2,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  if ( !v16 )
    sub_1BCAA3C(v17, v12);
  CommonUI__maskFadein(v16, DEFAULT_FADE_TIME, _9__23_2, 0LL);
}


void __fastcall EventBuddyPointResultManager___c___OnSelectPortraitImgCount_b__23_2(
        EventBuddyPointResultManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventBuddyPointResultManager___c__DisplayClass13_0___ctor(
        EventBuddyPointResultManager___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventBuddyPointResultManager___c__DisplayClass13_0___Setup_b__0(
        EventBuddyPointResultManager___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventBuddyPointResultManager_o *_4__this; // x0
  struct System_Action_o *setupEndCallback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventBuddyPointResultManager__SetupEventUI(_4__this, _4__this->fields.currentEventId, v2),
        (setupEndCallback = this->fields.setupEndCallback) == 0LL) )
  {
    sub_1BCAA3C(_4__this, method);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))setupEndCallback->fields.m_target)(
    setupEndCallback->fields.original_method_info,
    *(_QWORD *)&setupEndCallback->fields.extra_arg);
}


void __fastcall EventBuddyPointResultManager___c__DisplayClass14_0___ctor(
        EventBuddyPointResultManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventBuddyPointResultManager___c__DisplayClass14_0___LoadAssetData_b__0(
        EventBuddyPointResultManager___c__DisplayClass14_0_o *this,
        AssetData_o *prefabData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct EventBuddyPointResultManager_o *_4__this; // x0
  struct System_Action_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.eventUIAssetData = prefabData,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&_4__this->fields.eventUIAssetData,
          (int64_t)prefabData,
          (int64_t)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        (callback = this->fields.callback) == 0LL) )
  {
    sub_1BCAA3C(_4__this, prefabData);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
    callback->fields.original_method_info,
    *(_QWORD *)&callback->fields.extra_arg);
}


void __fastcall EventBuddyPointResultManager___c__DisplayClass17_0___ctor(
        EventBuddyPointResultManager___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventBuddyPointResultManager___c__DisplayClass17_0___PlayBestBuddyResult_b__0(
        EventBuddyPointResultManager___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  struct EventBuddyPointResultManager_o *_4__this; // x8
  EventBuddyPointResultManager___c__DisplayClass17_0_o *v3; // x19
  struct System_Action_o *setupEndCallback; // x8

  if ( this->fields.setupEndCallback )
  {
    _4__this = this->fields.__4__this;
    v3 = this;
    if ( !_4__this
      || (this = (EventBuddyPointResultManager___c__DisplayClass17_0_o *)_4__this->fields.eventBuddyPointStageComponent) == 0LL
      || (this = (EventBuddyPointResultManager___c__DisplayClass17_0_o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
          (setupEndCallback = v3->fields.setupEndCallback) == 0LL) )
    {
      sub_1BCAA3C(this, method);
    }
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))setupEndCallback->fields.m_target)(
      setupEndCallback->fields.original_method_info,
      *(_QWORD *)&setupEndCallback->fields.extra_arg);
  }
}


void __fastcall EventBuddyPointResultManager___c__DisplayClass23_0___ctor(
        EventBuddyPointResultManager___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventBuddyPointResultManager___c__DisplayClass23_0___OnSelectPortraitImgCount_b__0(
        EventBuddyPointResultManager___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  const MethodInfo *v4; // x4
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  EventBuddyPointResultManager___c_c *v10; // x0
  EventBuddyPointResultManager_o *_4__this; // x20
  System_Action_o *_9__23_1; // x21
  Il2CppObject *v13; // x22
  struct EventBuddyPointResultManager___c_StaticFields *static_fields; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct EventBuddyPointResultManager_o *v21; // x8

  if ( (byte_4B1A3A7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_1__, v6, v7);
    sub_1BCA7E0(&EventBuddyPointResultManager___c_TypeInfo, v8, v9);
    byte_4B1A3A7 = 1;
  }
  v10 = EventBuddyPointResultManager___c_TypeInfo;
  _4__this = this->fields.__4__this;
  if ( !EventBuddyPointResultManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager___c_TypeInfo, method);
    v10 = EventBuddyPointResultManager___c_TypeInfo;
  }
  _9__23_1 = v10->static_fields->__9__23_1;
  if ( !_9__23_1 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10, method);
      v10 = EventBuddyPointResultManager___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__23_1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__23_1,
      v13,
      Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_1__,
      0LL);
    static_fields = EventBuddyPointResultManager___c_TypeInfo->static_fields;
    static_fields->__9__23_1 = _9__23_1;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__23_1,
      (int64_t)_9__23_1,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  v21 = this->fields.__4__this;
  if ( !v21 || !_4__this )
    sub_1BCAA3C(v10, method);
  EventBuddyPointResultManager__PlayBestBuddyResult(
    _4__this,
    _9__23_1,
    v21->fields.onPlayEndCallback,
    this->fields.id,
    v4);
}