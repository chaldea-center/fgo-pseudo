void BattleResultEventDamageItemComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct BattleResultEventDamageItemComponent_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct BattleResultEventDamageItemComponent_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_5974474 & 1) == 0 )
  {
    sub_2213A60(&BattleResultEventDamageItemComponent_TypeInfo);
    sub_2213A60(&StringLiteral_21635/*"img_txt_dpreward"*/);
    sub_2213A60(&StringLiteral_2956/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_POINT"*/);
    sub_2213A60(&StringLiteral_21294/*"img_bg_dp"*/);
    byte_5974474 = 1;
  }
  v7 = StringLiteral_2956/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_POINT"*/;
  BattleResultEventDamageItemComponent_TypeInfo->static_fields->DAMAGE_POINT_REWARD_AT_LOCALE_KEY = (struct System_String_o *)StringLiteral_2956/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_POINT"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleResultEventDamageItemComponent_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_21635/*"img_txt_dpreward"*/;
  static_fields = BattleResultEventDamageItemComponent_TypeInfo->static_fields;
  static_fields->DAMAGE_POINT_REWARD_TITLE_NAME = (struct System_String_o *)StringLiteral_21635/*"img_txt_dpreward"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->DAMAGE_POINT_REWARD_TITLE_NAME,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_21294/*"img_bg_dp"*/;
  v17 = BattleResultEventDamageItemComponent_TypeInfo->static_fields;
  v17->DAMAGE_POINT_REWARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_21294/*"img_bg_dp"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v17->DAMAGE_POINT_REWARD_SPRITE_NAME,
    v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
}


void BattleResultEventDamageItemComponent___ctor(
        BattleResultEventDamageItemComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_5974473 & 1) == 0 )
  {
    sub_2213A60(&BattleResultEventItemComponent_TypeInfo);
    byte_5974473 = 1;
  }
  if ( !*(&BattleResultEventItemComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo, method);
  BattleResultEventItemComponent___ctor((BattleResultEventItemComponent_o *)this, method);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_5974472 & 1) == 0 )
  {
    sub_2213A60(&BattleResultEventDamageItemComponent_TypeInfo);
    sub_2213A60(&Method_BetterList_string__Contains__);
    byte_5974472 = 1;
  }
  v4 = BattleResultEventDamageItemComponent_TypeInfo;
  if ( !*(&BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo, *(_QWORD *)&currentGroup);
    v4 = BattleResultEventDamageItemComponent_TypeInfo;
  }
  DAMAGE_POINT_REWARD_TITLE_NAME = v4->static_fields->DAMAGE_POINT_REWARD_TITLE_NAME;
  v6 = System_Int32__ToString((int)this + 168, 0);
  mAtlas = (UIAtlas_o *)System_String__Concat_75651716(DAMAGE_POINT_REWARD_TITLE_NAME, v6, 0);
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
          (const MethodInfo_3E6FBB0 *)Method_BetterList_string__Contains__) )
  {
    v11 = BattleResultEventDamageItemComponent_TypeInfo;
    if ( !*(&BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo, v8);
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
    sub_2213CDC(mAtlas, v8);
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
  __int64 v12; // x1
  System_String_o *v13; // x22
  __int64 v14; // x1
  BattleResultEventDamageItemComponent_c *v15; // x0
  UILabel_o *titleAtLabel; // x23
  System_String_o *Instance; // x0
  __int64 v18; // x1
  UILabel_o *titleNextItemLabel; // x22
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2
  Il2CppObject *MasterData_object; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  UserEventRaidMaster_o *usrEvent; // x0
  int64_t TotalDamagePoint; // x21
  __int64 v31; // x1
  EventRewardEntity_o *NextEventRewardEntity; // x22
  UnityEngine_Object_o *eventIconSprite; // x23
  __int64 v34; // x1
  __int64 v35; // x1
  int32_t RaidEventImageId; // w23
  UISprite_o *v37; // x24
  BattleResultEventDamageItemComponent_c *v38; // x0
  System_String_o *DAMAGE_POINT_REWARD_SPRITE_NAME; // x23
  System_String_o *v40; // x0
  struct UISprite_o *eventPointAtSprite; // x8
  Il2CppObject *v42; // x20
  BattleResultEventDamageItemComponent_c *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x1
  UILabel_o *atLabel; // x20
  System_String_o *v47; // x23
  Il2CppObject *v48; // x0
  __int64 v49; // x1
  bool isQp; // w8
  UILabel_o *nextItemLabel; // x19
  int v52; // w9
  System_String_o *v53; // x0
  Il2CppObject *v54; // x2
  Il2CppObject *v55; // x1
  UILabel_o *v56; // x20
  int64_t v57; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *countText; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-58h] BYREF
  int32_t eventIda; // [xsp+2Ch] [xbp-44h] BYREF

  eventIda = eventId;
  if ( (byte_5974471 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BattleResultEventDamageItemComponent_TypeInfo);
    sub_2213A60(&Method_BetterList_string__Contains__);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventRewardMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventRaidMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_2955/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_ITEM"*/);
    sub_2213A60(&StringLiteral_2941/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_2213A60(&StringLiteral_2939/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/);
    sub_2213A60(&StringLiteral_2940/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/);
    sub_2213A60(&StringLiteral_2937/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5974471 = 1;
  }
  countText = 0;
  nameText = 0;
  if ( !drop )
    this->fields.currentGroupIndex = -1;
  this->fields.currentEventId = eventId;
  if ( eventId >= 1 )
  {
    v9 = BattleResultEventDamageItemComponent_TypeInfo;
    if ( !*(&BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo, drop);
      v9 = BattleResultEventDamageItemComponent_TypeInfo;
    }
    DAMAGE_POINT_REWARD_AT_LOCALE_KEY = v9->static_fields->DAMAGE_POINT_REWARD_AT_LOCALE_KEY;
    v11 = System_Int32__ToString((int32_t)&eventIda, 0);
    v13 = System_String__Concat_75651716(DAMAGE_POINT_REWARD_AT_LOCALE_KEY, v11, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
    if ( !LocalizationManager__ContainsKey(v13, 0) )
    {
      v15 = BattleResultEventDamageItemComponent_TypeInfo;
      if ( !*(&BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo, v14);
        v15 = BattleResultEventDamageItemComponent_TypeInfo;
      }
      v13 = v15->static_fields->DAMAGE_POINT_REWARD_AT_LOCALE_KEY;
    }
    titleAtLabel = this->fields.titleAtLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14);
    Instance = LocalizationManager__Get(v13, 0);
    if ( titleAtLabel )
    {
      UILabel__set_text(titleAtLabel, Instance, 0);
      titleNextItemLabel = this->fields.titleNextItemLabel;
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2955/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_ITEM"*/, 0);
      if ( titleNextItemLabel )
      {
        UILabel__set_text(titleNextItemLabel, Instance, 0);
        BattleResultEventItemComponent__createDropInfo((BattleResultEventItemComponent_o *)this, drop, v20);
        BattleResultEventItemComponent__SetItemWindow_55102764((BattleResultEventItemComponent_o *)this, drop, v21);
        Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
          this->fields.usrEvent = (struct UserEventRaidMaster_o *)MasterData_object;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.usrEvent,
            (int32_t)MasterData_object,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28);
          usrEvent = this->fields.usrEvent;
          if ( !usrEvent )
            return;
          TotalDamagePoint = UserEventRaidMaster__getTotalDamagePoint(usrEvent, eventIda, 0);
          Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventRewardMaster___);
            if ( Instance )
            {
              NextEventRewardEntity = EventRewardMaster__GetNextEventRewardEntity(
                                        (EventRewardMaster_o *)Instance,
                                        eventIda,
                                        TotalDamagePoint,
                                        0);
              eventIconSprite = (UnityEngine_Object_o *)this->fields.eventIconSprite;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
              if ( UnityEngine_Object__op_Inequality(eventIconSprite, 0, 0) )
              {
                Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Instance )
                  goto LABEL_52;
                Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
                if ( !Instance )
                  goto LABEL_52;
                RaidEventImageId = EventMaster__GetRaidEventImageId((EventMaster_o *)Instance, eventIda, 0);
                v37 = this->fields.eventIconSprite;
                if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v35);
                AtlasManager__SetItem(v37, RaidEventImageId, 0);
              }
              v38 = BattleResultEventDamageItemComponent_TypeInfo;
              if ( !*(&BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo, v34);
                v38 = BattleResultEventDamageItemComponent_TypeInfo;
              }
              DAMAGE_POINT_REWARD_SPRITE_NAME = v38->static_fields->DAMAGE_POINT_REWARD_SPRITE_NAME;
              v40 = System_Int32__ToString((int)this + 168, 0);
              Instance = System_String__Concat_75651716(DAMAGE_POINT_REWARD_SPRITE_NAME, v40, 0);
              eventPointAtSprite = this->fields.eventPointAtSprite;
              if ( eventPointAtSprite )
              {
                v42 = (Il2CppObject *)Instance;
                Instance = (System_String_o *)eventPointAtSprite->fields.mAtlas;
                if ( Instance )
                {
                  Instance = (System_String_o *)UIAtlas__GetListOfSprites((UIAtlas_o *)Instance, 0);
                  if ( Instance )
                  {
                    if ( !BetterList_object___Contains(
                            (BetterList_T__o *)Instance,
                            v42,
                            (const MethodInfo_3E6FBB0 *)Method_BetterList_string__Contains__) )
                    {
                      v43 = BattleResultEventDamageItemComponent_TypeInfo;
                      if ( !*(&BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished + 1) )
                      {
                        j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo, v18);
                        v43 = BattleResultEventDamageItemComponent_TypeInfo;
                      }
                      v42 = (Il2CppObject *)v43->static_fields->DAMAGE_POINT_REWARD_SPRITE_NAME;
                    }
                    Instance = (System_String_o *)this->fields.eventPointAtSprite;
                    if ( Instance )
                    {
                      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)v42, 0);
                      if ( NextEventRewardEntity )
                      {
                        EventRewardEntity__GetInfo(NextEventRewardEntity, &nameText, &countText, 0);
                        atLabel = this->fields.atLabel;
                        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45);
                        v47 = LocalizationManager__Get((System_String_o *)StringLiteral_2941/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0);
                        v57 = NextEventRewardEntity->fields.point - TotalDamagePoint;
                        v48 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v57);
                        Instance = System_String__Format(v47, v48, 0);
                        if ( atLabel )
                        {
                          UILabel__set_text(atLabel, Instance, 0);
                          isQp = EventRewardEntity__isQp(NextEventRewardEntity, 0);
                          nextItemLabel = this->fields.nextItemLabel;
                          v52 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
                          if ( isQp )
                          {
                            if ( !v52 )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v49);
                            v53 = LocalizationManager__Get((System_String_o *)StringLiteral_2940/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, 0);
                            v54 = (Il2CppObject *)countText;
                            v55 = (Il2CppObject *)StringLiteral_1/*""*/;
                          }
                          else
                          {
                            if ( !v52 )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v49);
                            v53 = LocalizationManager__Get((System_String_o *)StringLiteral_2940/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, 0);
                            v54 = (Il2CppObject *)countText;
                            v55 = (Il2CppObject *)nameText;
                          }
                          Instance = System_String__Format_75697880(v53, v55, v54, 0);
                          if ( nextItemLabel )
                          {
LABEL_57:
                            UILabel__set_text(nextItemLabel, Instance, 0);
                            return;
                          }
                        }
                      }
                      else
                      {
                        v56 = this->fields.atLabel;
                        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44);
                        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2939/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0);
                        if ( v56 )
                        {
                          UILabel__set_text(v56, Instance, 0);
                          nextItemLabel = this->fields.nextItemLabel;
                          Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2937/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0);
                          if ( nextItemLabel )
                            goto LABEL_57;
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
    sub_2213CDC(Instance, v18);
  }
}