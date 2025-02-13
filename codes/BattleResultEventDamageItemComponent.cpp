void __fastcall BattleResultEventDamageItemComponent___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  int64_t v7; // x1
  struct BattleResultEventDamageItemComponent_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x1
  struct BattleResultEventDamageItemComponent_StaticFields *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4BDF933 & 1) == 0 )
  {
    sub_1C21E38(&BattleResultEventDamageItemComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_20892/*"img_txt_dpreward"*/);
    sub_1C21E38(&StringLiteral_2997/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_POINT"*/);
    sub_1C21E38(&StringLiteral_20610/*"img_bg_dp"*/);
    byte_4BDF933 = 1;
  }
  BattleResultEventDamageItemComponent_TypeInfo->static_fields->DAMAGE_POINT_REWARD_AT_LOCALE_KEY = (struct System_String_o *)StringLiteral_2997/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_POINT"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BattleResultEventDamageItemComponent_TypeInfo->static_fields,
    StringLiteral_2997/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_POINT"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_20892/*"img_txt_dpreward"*/;
  static_fields = BattleResultEventDamageItemComponent_TypeInfo->static_fields;
  static_fields->DAMAGE_POINT_REWARD_TITLE_NAME = (struct System_String_o *)StringLiteral_20892/*"img_txt_dpreward"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&static_fields->DAMAGE_POINT_REWARD_TITLE_NAME,
    v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = StringLiteral_20610/*"img_bg_dp"*/;
  v16 = BattleResultEventDamageItemComponent_TypeInfo->static_fields;
  v16->DAMAGE_POINT_REWARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_20610/*"img_bg_dp"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v16->DAMAGE_POINT_REWARD_SPRITE_NAME, v15, v17, v18, v19, v20, v21, v22);
}


void __fastcall BattleResultEventDamageItemComponent___ctor(
        BattleResultEventDamageItemComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDF932 & 1) == 0 )
  {
    sub_1C21E38(&BattleResultEventItemComponent_TypeInfo);
    byte_4BDF932 = 1;
  }
  if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
  BattleResultEventItemComponent___ctor((BattleResultEventItemComponent_o *)this, method);
}


void __fastcall BattleResultEventDamageItemComponent__SetTitleSprite(
        BattleResultEventDamageItemComponent_o *this,
        int32_t currentGroup,
        const MethodInfo *method)
{
  BattleResultEventDamageItemComponent_c *v4; // x0
  System_String_o *DAMAGE_POINT_REWARD_TITLE_NAME; // x20
  System_String_o *v6; // x0
  UIAtlas_o *mAtlas; // x0
  __int64 v8; // x1
  struct UISprite_o *titleSp; // x8
  Il2CppObject *v10; // x20
  BattleResultEventDamageItemComponent_c *v11; // x0

  if ( (byte_4BDF931 & 1) == 0 )
  {
    sub_1C21E38(&BattleResultEventDamageItemComponent_TypeInfo);
    sub_1C21E38(&Method_BetterList_string__Contains__);
    byte_4BDF931 = 1;
  }
  v4 = BattleResultEventDamageItemComponent_TypeInfo;
  if ( !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
    v4 = BattleResultEventDamageItemComponent_TypeInfo;
  }
  DAMAGE_POINT_REWARD_TITLE_NAME = v4->static_fields->DAMAGE_POINT_REWARD_TITLE_NAME;
  v6 = System_Int32__ToString((int)this + 168, 0LL);
  mAtlas = (UIAtlas_o *)System_String__Concat_63115476(DAMAGE_POINT_REWARD_TITLE_NAME, v6, 0LL);
  titleSp = this->fields.titleSp;
  if ( !titleSp )
    goto LABEL_15;
  v10 = (Il2CppObject *)mAtlas;
  mAtlas = titleSp->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_15;
  mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0LL);
  if ( !mAtlas )
    goto LABEL_15;
  if ( !BetterList_object___Contains(
          (BetterList_T__o *)mAtlas,
          v10,
          (const MethodInfo_31D3F18 *)Method_BetterList_string__Contains__) )
  {
    v11 = BattleResultEventDamageItemComponent_TypeInfo;
    if ( !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
      v11 = BattleResultEventDamageItemComponent_TypeInfo;
    }
    v10 = (Il2CppObject *)v11->static_fields->DAMAGE_POINT_REWARD_TITLE_NAME;
  }
  mAtlas = (UIAtlas_o *)this->fields.titleSp;
  if ( !mAtlas
    || (UISprite__set_spriteName((UISprite_o *)mAtlas, (System_String_o *)v10, 0LL),
        (mAtlas = (UIAtlas_o *)this->fields.titleSp) == 0LL) )
  {
LABEL_15:
    sub_1C22094(mAtlas, v8);
  }
  ((void (__fastcall *)(UIAtlas_o *, void *))mAtlas->klass[2]._1.typeMetadataHandle)(
    mAtlas,
    mAtlas->klass[2]._1.interopData);
}


bool __fastcall BattleResultEventDamageItemComponent__hasEventDamage(
        BattleResultEventDamageItemComponent_o *this,
        const MethodInfo *method)
{
  UserEventRaidMaster_o *usrEvent; // x0

  usrEvent = this->fields.usrEvent;
  if ( usrEvent )
    LOBYTE(usrEvent) = UserEventRaidMaster__getTotalDamagePoint(usrEvent, this->fields.currentEventId, 0LL) > 0;
  return (char)usrEvent;
}


bool __fastcall BattleResultEventDamageItemComponent__isDraw(
        BattleResultEventDamageItemComponent_o *this,
        const MethodInfo *method)
{
  UserEventRaidMaster_o *usrEvent; // x0

  usrEvent = this->fields.usrEvent;
  if ( usrEvent )
    LOBYTE(usrEvent) = UserEventRaidMaster__getTotalDamagePoint(usrEvent, this->fields.currentEventId, 0LL) > 0;
  return (char)usrEvent;
}


void __fastcall BattleResultEventDamageItemComponent__setResultData(
        BattleResultEventDamageItemComponent_o *this,
        BattleDropItem_array *drop,
        int32_t eventId,
        QuestRewardInfo_array *resultBoostItemRewardInfos,
        QuestRewardInfo_array *rewardInfos,
        const MethodInfo *method)
{
  BattleResultEventDamageItemComponent_c *v9; // x0
  System_String_o *DAMAGE_POINT_REWARD_AT_LOCALE_KEY; // x22
  System_String_o *v11; // x0
  System_String_o *v12; // x22
  BattleResultEventDamageItemComponent_c *v13; // x0
  UILabel_o *titleAtLabel; // x23
  System_String_o *Instance; // x0
  __int64 v16; // x1
  UILabel_o *titleNextItemLabel; // x22
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  Il2CppObject *MasterData_object; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  UserEventRaidMaster_o *usrEvent; // x0
  int64_t TotalDamagePoint; // x21
  EventRewardEntity_o *NextEventRewardEntity; // x0
  UnityEngine_Object_o *eventIconSprite; // x23
  EventRewardEntity_o *v31; // x22
  int32_t RaidEventImageId; // w0
  UISprite_o *v33; // x24
  int32_t v34; // w23
  BattleResultEventDamageItemComponent_c *v35; // x0
  System_String_o *DAMAGE_POINT_REWARD_SPRITE_NAME; // x23
  System_String_o *v37; // x0
  struct UISprite_o *eventPointAtSprite; // x8
  Il2CppObject *v39; // x20
  BattleResultEventDamageItemComponent_c *v40; // x0
  UILabel_o *atLabel; // x20
  System_String_o *v42; // x23
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  Il2CppObject *v46; // x0
  bool isQp; // w0
  UILabel_o *nextItemLabel; // x19
  bool v49; // w20
  System_String_o *v50; // x0
  Il2CppObject *v51; // x1
  UILabel_o *v52; // x20
  int64_t v53; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *countText; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-58h] BYREF
  int32_t eventIda; // [xsp+2Ch] [xbp-44h] BYREF

  eventIda = eventId;
  if ( (byte_4BDF930 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&BattleResultEventDamageItemComponent_TypeInfo);
    sub_1C21E38(&Method_BetterList_string__Contains__);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventRewardMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserEventRaidMaster___);
    sub_1C21E38(&long_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_2996/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_ITEM"*/);
    sub_1C21E38(&StringLiteral_2983/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_1C21E38(&StringLiteral_2981/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/);
    sub_1C21E38(&StringLiteral_2982/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/);
    sub_1C21E38(&StringLiteral_2979/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDF930 = 1;
  }
  countText = 0LL;
  nameText = 0LL;
  if ( !drop )
    this->fields.currentGroupIndex = -1;
  this->fields.currentEventId = eventId;
  if ( eventId >= 1 )
  {
    v9 = BattleResultEventDamageItemComponent_TypeInfo;
    if ( !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
      v9 = BattleResultEventDamageItemComponent_TypeInfo;
    }
    DAMAGE_POINT_REWARD_AT_LOCALE_KEY = v9->static_fields->DAMAGE_POINT_REWARD_AT_LOCALE_KEY;
    v11 = System_Int32__ToString((int32_t)&eventIda, 0LL);
    v12 = System_String__Concat_63115476(DAMAGE_POINT_REWARD_AT_LOCALE_KEY, v11, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !LocalizationManager__ContainsKey(v12, 0LL) )
    {
      v13 = BattleResultEventDamageItemComponent_TypeInfo;
      if ( !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
        v13 = BattleResultEventDamageItemComponent_TypeInfo;
      }
      v12 = v13->static_fields->DAMAGE_POINT_REWARD_AT_LOCALE_KEY;
    }
    titleAtLabel = this->fields.titleAtLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = LocalizationManager__Get(v12, 0LL);
    if ( titleAtLabel )
    {
      UILabel__set_text(titleAtLabel, Instance, 0LL);
      titleNextItemLabel = this->fields.titleNextItemLabel;
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2996/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_ITEM"*/, 0LL);
      if ( titleNextItemLabel )
      {
        UILabel__set_text(titleNextItemLabel, Instance, 0LL);
        BattleResultEventItemComponent__createDropInfo((BattleResultEventItemComponent_o *)this, drop, v18);
        BattleResultEventItemComponent__SetItemWindow_45636644((BattleResultEventItemComponent_o *)this, drop, v19);
        Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
          this->fields.usrEvent = (struct UserEventRaidMaster_o *)MasterData_object;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&this->fields.usrEvent,
            (int64_t)MasterData_object,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26);
          usrEvent = this->fields.usrEvent;
          if ( !usrEvent )
            return;
          TotalDamagePoint = UserEventRaidMaster__getTotalDamagePoint(usrEvent, eventIda, 0LL);
          Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventRewardMaster___);
            if ( Instance )
            {
              NextEventRewardEntity = EventRewardMaster__GetNextEventRewardEntity(
                                        (EventRewardMaster_o *)Instance,
                                        eventIda,
                                        TotalDamagePoint,
                                        0LL);
              eventIconSprite = (UnityEngine_Object_o *)this->fields.eventIconSprite;
              v31 = NextEventRewardEntity;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(eventIconSprite, 0LL, 0LL) )
              {
                Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Instance )
                  goto LABEL_52;
                Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___);
                if ( !Instance )
                  goto LABEL_52;
                RaidEventImageId = EventMaster__GetRaidEventImageId((EventMaster_o *)Instance, eventIda, 0LL);
                v33 = this->fields.eventIconSprite;
                v34 = RaidEventImageId;
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                AtlasManager__SetItem(v33, v34, 0LL);
              }
              v35 = BattleResultEventDamageItemComponent_TypeInfo;
              if ( !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
                v35 = BattleResultEventDamageItemComponent_TypeInfo;
              }
              DAMAGE_POINT_REWARD_SPRITE_NAME = v35->static_fields->DAMAGE_POINT_REWARD_SPRITE_NAME;
              v37 = System_Int32__ToString((int)this + 168, 0LL);
              Instance = System_String__Concat_63115476(DAMAGE_POINT_REWARD_SPRITE_NAME, v37, 0LL);
              eventPointAtSprite = this->fields.eventPointAtSprite;
              if ( eventPointAtSprite )
              {
                v39 = (Il2CppObject *)Instance;
                Instance = (System_String_o *)eventPointAtSprite->fields.mAtlas;
                if ( Instance )
                {
                  Instance = (System_String_o *)UIAtlas__GetListOfSprites((UIAtlas_o *)Instance, 0LL);
                  if ( Instance )
                  {
                    if ( !BetterList_object___Contains(
                            (BetterList_T__o *)Instance,
                            v39,
                            (const MethodInfo_31D3F18 *)Method_BetterList_string__Contains__) )
                    {
                      v40 = BattleResultEventDamageItemComponent_TypeInfo;
                      if ( !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
                        v40 = BattleResultEventDamageItemComponent_TypeInfo;
                      }
                      v39 = (Il2CppObject *)v40->static_fields->DAMAGE_POINT_REWARD_SPRITE_NAME;
                    }
                    Instance = (System_String_o *)this->fields.eventPointAtSprite;
                    if ( Instance )
                    {
                      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)v39, 0LL);
                      if ( v31 )
                      {
                        EventRewardEntity__GetInfo(v31, &nameText, &countText, 0LL);
                        atLabel = this->fields.atLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v42 = LocalizationManager__Get((System_String_o *)StringLiteral_2983/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
                        v53 = v31->fields.point - TotalDamagePoint;
                        v46 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v53, v43, v44, v45);
                        Instance = System_String__Format(v42, v46, 0LL);
                        if ( atLabel )
                        {
                          UILabel__set_text(atLabel, Instance, 0LL);
                          isQp = EventRewardEntity__isQp(v31, 0LL);
                          nextItemLabel = this->fields.nextItemLabel;
                          v49 = isQp;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v50 = LocalizationManager__Get((System_String_o *)StringLiteral_2982/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, 0LL);
                          v51 = (Il2CppObject *)(v49 ? StringLiteral_1/*""*/ : nameText);
                          Instance = System_String__Format_63129848(v50, v51, (Il2CppObject *)countText, 0LL);
                          if ( nextItemLabel )
                          {
LABEL_55:
                            UILabel__set_text(nextItemLabel, Instance, 0LL);
                            return;
                          }
                        }
                      }
                      else
                      {
                        v52 = this->fields.atLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2981/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
                        if ( v52 )
                        {
                          UILabel__set_text(v52, Instance, 0LL);
                          nextItemLabel = this->fields.nextItemLabel;
                          Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2979/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
                          if ( nextItemLabel )
                            goto LABEL_55;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_52:
    sub_1C22094(Instance, v16);
  }
}