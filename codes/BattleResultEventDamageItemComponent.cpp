void BattleResultEventDamageItemComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct BattleResultEventDamageItemComponent_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct BattleResultEventDamageItemComponent_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C467EA & 1) == 0 )
  {
    sub_1C37058(&BattleResultEventDamageItemComponent_TypeInfo);
    sub_1C37058(&StringLiteral_20641/*"img_txt_dpreward"*/);
    sub_1C37058(&StringLiteral_2841/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_POINT"*/);
    sub_1C37058(&StringLiteral_20311/*"img_bg_dp"*/);
    byte_4C467EA = 1;
  }
  BattleResultEventDamageItemComponent_TypeInfo->static_fields->DAMAGE_POINT_REWARD_AT_LOCALE_KEY = (struct System_String_o *)StringLiteral_2841/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_POINT"*/;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)BattleResultEventDamageItemComponent_TypeInfo->static_fields,
    StringLiteral_2841/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_POINT"*/,
    v1,
    v2);
  v3 = StringLiteral_20641/*"img_txt_dpreward"*/;
  static_fields = BattleResultEventDamageItemComponent_TypeInfo->static_fields;
  static_fields->DAMAGE_POINT_REWARD_TITLE_NAME = (struct System_String_o *)StringLiteral_20641/*"img_txt_dpreward"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->DAMAGE_POINT_REWARD_TITLE_NAME, v3, v5, v6);
  v7 = StringLiteral_20311/*"img_bg_dp"*/;
  v8 = BattleResultEventDamageItemComponent_TypeInfo->static_fields;
  v8->DAMAGE_POINT_REWARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_20311/*"img_bg_dp"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v8->DAMAGE_POINT_REWARD_SPRITE_NAME, v7, v9, v10);
}


void BattleResultEventDamageItemComponent___ctor(
        BattleResultEventDamageItemComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C467E9 & 1) == 0 )
  {
    sub_1C37058(&BattleResultEventItemComponent_TypeInfo);
    byte_4C467E9 = 1;
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
  struct UISprite_o *titleSp; // x8
  Il2CppObject *v9; // x20
  BattleResultEventDamageItemComponent_c *v10; // x0

  if ( (byte_4C467E8 & 1) == 0 )
  {
    sub_1C37058(&BattleResultEventDamageItemComponent_TypeInfo);
    sub_1C37058(&Method_BetterList_string__Contains__);
    byte_4C467E8 = 1;
  }
  v4 = BattleResultEventDamageItemComponent_TypeInfo;
  if ( !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
    v4 = BattleResultEventDamageItemComponent_TypeInfo;
  }
  DAMAGE_POINT_REWARD_TITLE_NAME = v4->static_fields->DAMAGE_POINT_REWARD_TITLE_NAME;
  v6 = System_Int32__ToString((int)this + 168, 0);
  mAtlas = (UIAtlas_o *)System_String__Concat_63561656(DAMAGE_POINT_REWARD_TITLE_NAME, v6, 0);
  titleSp = this->fields.titleSp;
  if ( !titleSp )
    goto LABEL_15;
  v9 = (Il2CppObject *)mAtlas;
  mAtlas = titleSp->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_15;
  mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0);
  if ( !mAtlas )
    goto LABEL_15;
  if ( !BetterList_object___Contains(
          (BetterList_T__o *)mAtlas,
          v9,
          (const MethodInfo_331A190 *)Method_BetterList_string__Contains__) )
  {
    v10 = BattleResultEventDamageItemComponent_TypeInfo;
    if ( !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
      v10 = BattleResultEventDamageItemComponent_TypeInfo;
    }
    v9 = (Il2CppObject *)v10->static_fields->DAMAGE_POINT_REWARD_TITLE_NAME;
  }
  mAtlas = (UIAtlas_o *)this->fields.titleSp;
  if ( !mAtlas
    || (UISprite__set_spriteName((UISprite_o *)mAtlas, (System_String_o *)v9, 0),
        (mAtlas = (UIAtlas_o *)this->fields.titleSp) == 0) )
  {
LABEL_15:
    sub_1C372B4(mAtlas);
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
  UILabel_o *titleNextItemLabel; // x22
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  Il2CppObject *MasterData_object; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  UserEventRaidMaster_o *usrEvent; // x0
  int64_t TotalDamagePoint; // x21
  EventRewardEntity_o *NextEventRewardEntity; // x0
  UnityEngine_Object_o *eventIconSprite; // x23
  EventRewardEntity_o *v26; // x22
  int32_t RaidEventImageId; // w0
  UISprite_o *v28; // x24
  int32_t v29; // w23
  BattleResultEventDamageItemComponent_c *v30; // x0
  System_String_o *DAMAGE_POINT_REWARD_SPRITE_NAME; // x23
  System_String_o *v32; // x0
  struct UISprite_o *eventPointAtSprite; // x8
  Il2CppObject *v34; // x20
  BattleResultEventDamageItemComponent_c *v35; // x0
  UILabel_o *atLabel; // x20
  System_String_o *v37; // x23
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x5
  __int64 v42; // x6
  __int64 v43; // x7
  Il2CppObject *v44; // x0
  bool isQp; // w0
  UILabel_o *nextItemLabel; // x19
  bool v47; // w20
  System_String_o *v48; // x0
  Il2CppObject *v49; // x1
  UILabel_o *v50; // x20
  int64_t v51; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *countText; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-58h] BYREF
  int32_t eventIda; // [xsp+2Ch] [xbp-44h] BYREF

  eventIda = eventId;
  if ( (byte_4C467E7 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&BattleResultEventDamageItemComponent_TypeInfo);
    sub_1C37058(&Method_BetterList_string__Contains__);
    sub_1C37058(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_EventRewardMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserEventRaidMaster___);
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_2840/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_ITEM"*/);
    sub_1C37058(&StringLiteral_2826/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_1C37058(&StringLiteral_2824/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/);
    sub_1C37058(&StringLiteral_2825/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/);
    sub_1C37058(&StringLiteral_2822/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C467E7 = 1;
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
    v12 = System_String__Concat_63561656(DAMAGE_POINT_REWARD_AT_LOCALE_KEY, v11, 0);
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
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2840/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_ITEM"*/, 0);
      if ( titleNextItemLabel )
      {
        UILabel__set_text(titleNextItemLabel, Instance, 0);
        BattleResultEventItemComponent__createDropInfo((BattleResultEventItemComponent_o *)this, drop, v17);
        BattleResultEventItemComponent__SetItemWindow_47697504((BattleResultEventItemComponent_o *)this, drop, v18);
        Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
          this->fields.usrEvent = (struct UserEventRaidMaster_o *)MasterData_object;
          sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.usrEvent, (int32_t)MasterData_object, v20, v21);
          usrEvent = this->fields.usrEvent;
          if ( !usrEvent )
            return;
          TotalDamagePoint = UserEventRaidMaster__getTotalDamagePoint(usrEvent, eventIda, 0);
          Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventRewardMaster___);
            if ( Instance )
            {
              NextEventRewardEntity = EventRewardMaster__GetNextEventRewardEntity(
                                        (EventRewardMaster_o *)Instance,
                                        eventIda,
                                        TotalDamagePoint,
                                        0);
              eventIconSprite = (UnityEngine_Object_o *)this->fields.eventIconSprite;
              v26 = NextEventRewardEntity;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(eventIconSprite, 0, 0) )
              {
                Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Instance )
                  goto LABEL_52;
                Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMaster___);
                if ( !Instance )
                  goto LABEL_52;
                RaidEventImageId = EventMaster__GetRaidEventImageId((EventMaster_o *)Instance, eventIda, 0);
                v28 = this->fields.eventIconSprite;
                v29 = RaidEventImageId;
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                AtlasManager__SetItem(v28, v29, 0);
              }
              v30 = BattleResultEventDamageItemComponent_TypeInfo;
              if ( !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
                v30 = BattleResultEventDamageItemComponent_TypeInfo;
              }
              DAMAGE_POINT_REWARD_SPRITE_NAME = v30->static_fields->DAMAGE_POINT_REWARD_SPRITE_NAME;
              v32 = System_Int32__ToString((int)this + 168, 0);
              Instance = System_String__Concat_63561656(DAMAGE_POINT_REWARD_SPRITE_NAME, v32, 0);
              eventPointAtSprite = this->fields.eventPointAtSprite;
              if ( eventPointAtSprite )
              {
                v34 = (Il2CppObject *)Instance;
                Instance = (System_String_o *)eventPointAtSprite->fields.mAtlas;
                if ( Instance )
                {
                  Instance = (System_String_o *)UIAtlas__GetListOfSprites((UIAtlas_o *)Instance, 0);
                  if ( Instance )
                  {
                    if ( !BetterList_object___Contains(
                            (BetterList_T__o *)Instance,
                            v34,
                            (const MethodInfo_331A190 *)Method_BetterList_string__Contains__) )
                    {
                      v35 = BattleResultEventDamageItemComponent_TypeInfo;
                      if ( !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
                        v35 = BattleResultEventDamageItemComponent_TypeInfo;
                      }
                      v34 = (Il2CppObject *)v35->static_fields->DAMAGE_POINT_REWARD_SPRITE_NAME;
                    }
                    Instance = (System_String_o *)this->fields.eventPointAtSprite;
                    if ( Instance )
                    {
                      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)v34, 0);
                      if ( v26 )
                      {
                        EventRewardEntity__GetInfo(v26, &nameText, &countText, 0);
                        atLabel = this->fields.atLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v37 = LocalizationManager__Get((System_String_o *)StringLiteral_2826/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0);
                        v51 = v26->fields.point - TotalDamagePoint;
                        v44 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v51, v38, v39, v40, v41, v42, v43);
                        Instance = System_String__Format(v37, v44, 0);
                        if ( atLabel )
                        {
                          UILabel__set_text(atLabel, Instance, 0);
                          isQp = EventRewardEntity__isQp(v26, 0);
                          nextItemLabel = this->fields.nextItemLabel;
                          v47 = isQp;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v48 = LocalizationManager__Get((System_String_o *)StringLiteral_2825/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, 0);
                          v49 = v47 ? (Il2CppObject *)StringLiteral_1/*""*/ : (Il2CppObject *)nameText;
                          Instance = System_String__Format_63602948(v48, v49, (Il2CppObject *)countText, 0);
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
                        v50 = this->fields.atLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2824/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0);
                        if ( v50 )
                        {
                          UILabel__set_text(v50, Instance, 0);
                          nextItemLabel = this->fields.nextItemLabel;
                          Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2822/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0);
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
    sub_1C372B4(Instance);
  }
}