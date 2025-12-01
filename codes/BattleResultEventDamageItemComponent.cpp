void BattleResultEventDamageItemComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct BattleResultEventDamageItemComponent_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct BattleResultEventDamageItemComponent_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4CCAD02 & 1) == 0 )
  {
    sub_1C713B0(&BattleResultEventDamageItemComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_20719/*"img_txt_dpreward"*/);
    sub_1C713B0(&StringLiteral_2835/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_POINT"*/);
    sub_1C713B0(&StringLiteral_20389/*"img_bg_dp"*/);
    byte_4CCAD02 = 1;
  }
  BattleResultEventDamageItemComponent_TypeInfo->static_fields->DAMAGE_POINT_REWARD_AT_LOCALE_KEY = (struct System_String_o *)StringLiteral_2835/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_POINT"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)BattleResultEventDamageItemComponent_TypeInfo->static_fields,
    StringLiteral_2835/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_POINT"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_20719/*"img_txt_dpreward"*/;
  static_fields = BattleResultEventDamageItemComponent_TypeInfo->static_fields;
  static_fields->DAMAGE_POINT_REWARD_TITLE_NAME = (struct System_String_o *)StringLiteral_20719/*"img_txt_dpreward"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&static_fields->DAMAGE_POINT_REWARD_TITLE_NAME,
    v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = StringLiteral_20389/*"img_bg_dp"*/;
  v16 = BattleResultEventDamageItemComponent_TypeInfo->static_fields;
  v16->DAMAGE_POINT_REWARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_20389/*"img_bg_dp"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v16->DAMAGE_POINT_REWARD_SPRITE_NAME, v15, v17, v18, v19, v20, v21, v22);
}


void BattleResultEventDamageItemComponent___ctor(
        BattleResultEventDamageItemComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CCAD01 & 1) == 0 )
  {
    sub_1C713B0(&BattleResultEventItemComponent_TypeInfo);
    byte_4CCAD01 = 1;
  }
  if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
  BattleResultEventItemComponent___ctor((BattleResultEventItemComponent_o *)this, method);
}


void BattleResultEventDamageItemComponent__SetTitleSprite(
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

  if ( (byte_4CCAD00 & 1) == 0 )
  {
    sub_1C713B0(&BattleResultEventDamageItemComponent_TypeInfo);
    sub_1C713B0(&Method_BetterList_string__Contains__);
    byte_4CCAD00 = 1;
  }
  v4 = BattleResultEventDamageItemComponent_TypeInfo;
  if ( !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
    v4 = BattleResultEventDamageItemComponent_TypeInfo;
  }
  DAMAGE_POINT_REWARD_TITLE_NAME = v4->static_fields->DAMAGE_POINT_REWARD_TITLE_NAME;
  v6 = System_Int32__ToString((int)this + 168, 0);
  mAtlas = (UIAtlas_o *)System_String__Concat_64031724(DAMAGE_POINT_REWARD_TITLE_NAME, v6, 0);
  titleSp = this->fields.titleSp;
  if ( !titleSp )
    goto LABEL_15;
  v10 = (Il2CppObject *)mAtlas;
  mAtlas = titleSp->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_15;
  mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0);
  if ( !mAtlas )
    goto LABEL_15;
  if ( !BetterList_object___Contains(
          (BetterList_T__o *)mAtlas,
          v10,
          (const MethodInfo_3381888 *)Method_BetterList_string__Contains__) )
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
    || (UISprite__set_spriteName((UISprite_o *)mAtlas, (System_String_o *)v10, 0),
        (mAtlas = (UIAtlas_o *)this->fields.titleSp) == 0) )
  {
LABEL_15:
    sub_1C71608(mAtlas, v8);
  }
  ((void (__fastcall *)(UIAtlas_o *, void *))mAtlas->klass[2]._1.parent)(mAtlas, mAtlas->klass[2]._1.generic_class);
}


bool BattleResultEventDamageItemComponent__hasEventDamage(
        BattleResultEventDamageItemComponent_o *this,
        const MethodInfo *method)
{
  UserEventRaidMaster_o *usrEvent; // x0

  usrEvent = this->fields.usrEvent;
  if ( usrEvent )
    LOBYTE(usrEvent) = UserEventRaidMaster__getTotalDamagePoint(usrEvent, this->fields.currentEventId, 0) > 0;
  return (char)usrEvent;
}


bool BattleResultEventDamageItemComponent__isDraw(
        BattleResultEventDamageItemComponent_o *this,
        const MethodInfo *method)
{
  UserEventRaidMaster_o *usrEvent; // x0

  usrEvent = this->fields.usrEvent;
  if ( usrEvent )
    LOBYTE(usrEvent) = UserEventRaidMaster__getTotalDamagePoint(usrEvent, this->fields.currentEventId, 0) > 0;
  return (char)usrEvent;
}


void BattleResultEventDamageItemComponent__setResultData(
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
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
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
  Il2CppObject *v43; // x0
  bool isQp; // w0
  UILabel_o *nextItemLabel; // x19
  bool v46; // w20
  System_String_o *v47; // x0
  Il2CppObject *v48; // x1
  UILabel_o *v49; // x20
  int64_t v50; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *countText; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-58h] BYREF
  int32_t eventIda; // [xsp+2Ch] [xbp-44h] BYREF

  eventIda = eventId;
  if ( (byte_4CCACFF & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&BattleResultEventDamageItemComponent_TypeInfo);
    sub_1C713B0(&Method_BetterList_string__Contains__);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventRewardMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserEventRaidMaster___);
    sub_1C713B0(&long_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_2834/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_ITEM"*/);
    sub_1C713B0(&StringLiteral_2820/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_1C713B0(&StringLiteral_2818/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/);
    sub_1C713B0(&StringLiteral_2819/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/);
    sub_1C713B0(&StringLiteral_2816/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CCACFF = 1;
  }
  countText = 0;
  nameText = 0;
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
    v11 = System_Int32__ToString((int32_t)&eventIda, 0);
    v12 = System_String__Concat_64031724(DAMAGE_POINT_REWARD_AT_LOCALE_KEY, v11, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !LocalizationManager__ContainsKey(v12, 0) )
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
    Instance = LocalizationManager__Get(v12, 0);
    if ( titleAtLabel )
    {
      UILabel__set_text(titleAtLabel, Instance, 0);
      titleNextItemLabel = this->fields.titleNextItemLabel;
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2834/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_ITEM"*/, 0);
      if ( titleNextItemLabel )
      {
        UILabel__set_text(titleNextItemLabel, Instance, 0);
        BattleResultEventItemComponent__createDropInfo((BattleResultEventItemComponent_o *)this, drop, v18);
        BattleResultEventItemComponent__SetItemWindow_48061300((BattleResultEventItemComponent_o *)this, drop, v19);
        Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
          this->fields.usrEvent = (struct UserEventRaidMaster_o *)MasterData_object;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&this->fields.usrEvent,
            (int32_t)MasterData_object,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26);
          usrEvent = this->fields.usrEvent;
          if ( !usrEvent )
            return;
          TotalDamagePoint = UserEventRaidMaster__getTotalDamagePoint(usrEvent, eventIda, 0);
          Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventRewardMaster___);
            if ( Instance )
            {
              NextEventRewardEntity = EventRewardMaster__GetNextEventRewardEntity(
                                        (EventRewardMaster_o *)Instance,
                                        eventIda,
                                        TotalDamagePoint,
                                        0);
              eventIconSprite = (UnityEngine_Object_o *)this->fields.eventIconSprite;
              v31 = NextEventRewardEntity;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(eventIconSprite, 0, 0) )
              {
                Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Instance )
                  goto LABEL_52;
                Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventMaster___);
                if ( !Instance )
                  goto LABEL_52;
                RaidEventImageId = EventMaster__GetRaidEventImageId((EventMaster_o *)Instance, eventIda, 0);
                v33 = this->fields.eventIconSprite;
                v34 = RaidEventImageId;
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                AtlasManager__SetItem(v33, v34, 0);
              }
              v35 = BattleResultEventDamageItemComponent_TypeInfo;
              if ( !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
                v35 = BattleResultEventDamageItemComponent_TypeInfo;
              }
              DAMAGE_POINT_REWARD_SPRITE_NAME = v35->static_fields->DAMAGE_POINT_REWARD_SPRITE_NAME;
              v37 = System_Int32__ToString((int)this + 168, 0);
              Instance = System_String__Concat_64031724(DAMAGE_POINT_REWARD_SPRITE_NAME, v37, 0);
              eventPointAtSprite = this->fields.eventPointAtSprite;
              if ( eventPointAtSprite )
              {
                v39 = (Il2CppObject *)Instance;
                Instance = (System_String_o *)eventPointAtSprite->fields.mAtlas;
                if ( Instance )
                {
                  Instance = (System_String_o *)UIAtlas__GetListOfSprites((UIAtlas_o *)Instance, 0);
                  if ( Instance )
                  {
                    if ( !BetterList_object___Contains(
                            (BetterList_T__o *)Instance,
                            v39,
                            (const MethodInfo_3381888 *)Method_BetterList_string__Contains__) )
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
                      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)v39, 0);
                      if ( v31 )
                      {
                        EventRewardEntity__GetInfo(v31, &nameText, &countText, 0);
                        atLabel = this->fields.atLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v42 = LocalizationManager__Get((System_String_o *)StringLiteral_2820/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0);
                        v50 = v31->fields.point - TotalDamagePoint;
                        v43 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v50);
                        Instance = System_String__Format(v42, v43, 0);
                        if ( atLabel )
                        {
                          UILabel__set_text(atLabel, Instance, 0);
                          isQp = EventRewardEntity__isQp(v31, 0);
                          nextItemLabel = this->fields.nextItemLabel;
                          v46 = isQp;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v47 = LocalizationManager__Get((System_String_o *)StringLiteral_2819/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, 0);
                          v48 = v46 ? (Il2CppObject *)StringLiteral_1/*""*/ : (Il2CppObject *)nameText;
                          Instance = System_String__Format_64073032(v47, v48, (Il2CppObject *)countText, 0);
                          if ( nextItemLabel )
                          {
LABEL_55:
                            UILabel__set_text(nextItemLabel, Instance, 0);
                            return;
                          }
                        }
                      }
                      else
                      {
                        v49 = this->fields.atLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2818/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0);
                        if ( v49 )
                        {
                          UILabel__set_text(v49, Instance, 0);
                          nextItemLabel = this->fields.nextItemLabel;
                          Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2816/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0);
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
    sub_1C71608(Instance, v16);
  }
}