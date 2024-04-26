void __fastcall BattleResultEventDamageItemComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct BattleResultEventDamageItemComponent_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct BattleResultEventDamageItemComponent_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_4352116 & 1) == 0 )
  {
    sub_B70694(&BattleResultEventDamageItemComponent_TypeInfo);
    sub_B70694(&StringLiteral_19986/*"img_txt_dpreward"*/);
    sub_B70694(&StringLiteral_2552/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_POINT"*/);
    sub_B70694(&StringLiteral_19736/*"img_bg_dp"*/);
    byte_4352116 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BattleResultEventDamageItemComponent_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_2552/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_POINT"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2552/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_POINT"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = BattleResultEventDamageItemComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_19986/*"img_txt_dpreward"*/;
  v9->DAMAGE_POINT_REWARD_TITLE_NAME = (struct System_String_o *)StringLiteral_19986/*"img_txt_dpreward"*/;
  sub_B70630((BattleServantConfConponent_o *)&v9->DAMAGE_POINT_REWARD_TITLE_NAME, v10, v11, v12, v13, v14, v15, v16);
  v17 = BattleResultEventDamageItemComponent_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_19736/*"img_bg_dp"*/;
  v17->DAMAGE_POINT_REWARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_19736/*"img_bg_dp"*/;
  sub_B70630((BattleServantConfConponent_o *)&v17->DAMAGE_POINT_REWARD_SPRITE_NAME, v18, v19, v20, v21, v22, v23, v24);
}


void __fastcall BattleResultEventDamageItemComponent___ctor(
        BattleResultEventDamageItemComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4352115 & 1) == 0 )
  {
    sub_B70694(&BattleResultEventItemComponent_TypeInfo);
    byte_4352115 = 1;
  }
  if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
  }
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
  UILabel_o *v10; // x20
  BattleResultEventDamageItemComponent_c *v11; // x0

  if ( (byte_4352114 & 1) == 0 )
  {
    sub_B70694(&BattleResultEventDamageItemComponent_TypeInfo);
    sub_B70694(&Method_BetterList_string__Contains__);
    byte_4352114 = 1;
  }
  v4 = BattleResultEventDamageItemComponent_TypeInfo;
  if ( (BYTE3(BattleResultEventDamageItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
    v4 = BattleResultEventDamageItemComponent_TypeInfo;
  }
  DAMAGE_POINT_REWARD_TITLE_NAME = v4->static_fields->DAMAGE_POINT_REWARD_TITLE_NAME;
  v6 = System_Int32__ToString((int)this + 160, 0LL);
  mAtlas = (UIAtlas_o *)System_String__Concat_44758168(DAMAGE_POINT_REWARD_TITLE_NAME, v6, 0LL);
  titleSp = this->fields.titleSp;
  if ( !titleSp )
    goto LABEL_17;
  v10 = (UILabel_o *)mAtlas;
  mAtlas = titleSp->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_17;
  mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0LL);
  if ( !mAtlas )
    goto LABEL_17;
  if ( !BetterList_UILabel___Contains(
          (BetterList_UILabel__o *)mAtlas,
          v10,
          (const MethodInfo_2C71960 *)Method_BetterList_string__Contains__) )
  {
    v11 = BattleResultEventDamageItemComponent_TypeInfo;
    if ( (BYTE3(BattleResultEventDamageItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
      v11 = BattleResultEventDamageItemComponent_TypeInfo;
    }
    v10 = (UILabel_o *)v11->static_fields->DAMAGE_POINT_REWARD_TITLE_NAME;
  }
  mAtlas = (UIAtlas_o *)this->fields.titleSp;
  if ( !mAtlas
    || (UISprite__set_spriteName((UISprite_o *)mAtlas, (System_String_o *)v10, 0LL),
        (mAtlas = (UIAtlas_o *)this->fields.titleSp) == 0LL) )
  {
LABEL_17:
    sub_B7076C(mAtlas, v8);
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
  struct UserEventRaidMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
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
  UILabel_o *v39; // x20
  BattleResultEventDamageItemComponent_c *v40; // x0
  UILabel_o *atLabel; // x20
  System_String_o *v42; // x23
  __int64 v43; // x2
  Il2CppObject *v44; // x0
  bool isQp; // w0
  UILabel_o *nextItemLabel; // x19
  System_String_o *v47; // x0
  Il2CppObject *v48; // x2
  Il2CppObject *v49; // x1
  UILabel_o *v50; // x20
  int64_t v51; // [xsp+0h] [xbp-60h] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *nameText; // [xsp+10h] [xbp-50h] BYREF
  int32_t eventIda; // [xsp+1Ch] [xbp-44h] BYREF

  eventIda = eventId;
  if ( (byte_4352113 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&BattleResultEventDamageItemComponent_TypeInfo);
    sub_B70694(&Method_BetterList_string__Contains__);
    sub_B70694(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventRewardMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserEventRaidMaster___);
    sub_B70694(&long_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_2551/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_ITEM"*/);
    sub_B70694(&StringLiteral_2538/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_B70694(&StringLiteral_2536/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/);
    sub_B70694(&StringLiteral_2537/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/);
    sub_B70694(&StringLiteral_2534/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4352113 = 1;
  }
  countText = 0LL;
  nameText = 0LL;
  if ( !drop )
    this->fields.currentGroupIndex = -1;
  this->fields.currentEventId = eventId;
  if ( eventId >= 1 )
  {
    v9 = BattleResultEventDamageItemComponent_TypeInfo;
    if ( (BYTE3(BattleResultEventDamageItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
      v9 = BattleResultEventDamageItemComponent_TypeInfo;
    }
    DAMAGE_POINT_REWARD_AT_LOCALE_KEY = v9->static_fields->DAMAGE_POINT_REWARD_AT_LOCALE_KEY;
    v11 = System_Int32__ToString((int32_t)&eventIda, 0LL);
    v12 = System_String__Concat_44758168(DAMAGE_POINT_REWARD_AT_LOCALE_KEY, v11, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !LocalizationManager__ContainsKey(v12, 0LL) )
    {
      v13 = BattleResultEventDamageItemComponent_TypeInfo;
      if ( (BYTE3(BattleResultEventDamageItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
        v13 = BattleResultEventDamageItemComponent_TypeInfo;
      }
      v12 = v13->static_fields->DAMAGE_POINT_REWARD_AT_LOCALE_KEY;
    }
    titleAtLabel = this->fields.titleAtLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = LocalizationManager__Get(v12, 0LL);
    if ( titleAtLabel )
    {
      UILabel__set_text(titleAtLabel, Instance, 0LL);
      titleNextItemLabel = this->fields.titleNextItemLabel;
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2551/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_ITEM"*/, 0LL);
      if ( titleNextItemLabel )
      {
        UILabel__set_text(titleNextItemLabel, Instance, 0LL);
        BattleResultEventItemComponent__createDropInfo((BattleResultEventItemComponent_o *)this, drop, v18);
        BattleResultEventItemComponent__SetItemWindow_25705704((BattleResultEventItemComponent_o *)this, drop, v19);
        Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_WarQuestSelectionMaster = (struct UserEventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)Instance,
                                                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
          this->fields.usrEvent = MasterData_WarQuestSelectionMaster;
          sub_B70630(
            (BattleServantConfConponent_o *)&this->fields.usrEvent,
            (System_Int32_array **)MasterData_WarQuestSelectionMaster,
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
          Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventRewardMaster___);
            if ( Instance )
            {
              NextEventRewardEntity = EventRewardMaster__GetNextEventRewardEntity(
                                        (EventRewardMaster_o *)Instance,
                                        eventIda,
                                        TotalDamagePoint,
                                        0LL);
              eventIconSprite = (UnityEngine_Object_o *)this->fields.eventIconSprite;
              v31 = NextEventRewardEntity;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(eventIconSprite, 0LL, 0LL) )
              {
                Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Instance )
                  goto LABEL_63;
                Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMaster___);
                if ( !Instance )
                  goto LABEL_63;
                RaidEventImageId = EventMaster__GetRaidEventImageId((EventMaster_o *)Instance, eventIda, 0LL);
                v33 = this->fields.eventIconSprite;
                v34 = RaidEventImageId;
                if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AtlasManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                }
                AtlasManager__SetItem(v33, v34, 0LL);
              }
              v35 = BattleResultEventDamageItemComponent_TypeInfo;
              if ( (BYTE3(BattleResultEventDamageItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
                v35 = BattleResultEventDamageItemComponent_TypeInfo;
              }
              DAMAGE_POINT_REWARD_SPRITE_NAME = v35->static_fields->DAMAGE_POINT_REWARD_SPRITE_NAME;
              v37 = System_Int32__ToString((int)this + 160, 0LL);
              Instance = System_String__Concat_44758168(DAMAGE_POINT_REWARD_SPRITE_NAME, v37, 0LL);
              eventPointAtSprite = this->fields.eventPointAtSprite;
              if ( eventPointAtSprite )
              {
                v39 = (UILabel_o *)Instance;
                Instance = (System_String_o *)eventPointAtSprite->fields.mAtlas;
                if ( Instance )
                {
                  Instance = (System_String_o *)UIAtlas__GetListOfSprites((UIAtlas_o *)Instance, 0LL);
                  if ( Instance )
                  {
                    if ( !BetterList_UILabel___Contains(
                            (BetterList_UILabel__o *)Instance,
                            v39,
                            (const MethodInfo_2C71960 *)Method_BetterList_string__Contains__) )
                    {
                      v40 = BattleResultEventDamageItemComponent_TypeInfo;
                      if ( (BYTE3(BattleResultEventDamageItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
                        v40 = BattleResultEventDamageItemComponent_TypeInfo;
                      }
                      v39 = (UILabel_o *)v40->static_fields->DAMAGE_POINT_REWARD_SPRITE_NAME;
                    }
                    Instance = (System_String_o *)this->fields.eventPointAtSprite;
                    if ( Instance )
                    {
                      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)v39, 0LL);
                      if ( v31 )
                      {
                        EventRewardEntity__GetInfo(v31, &nameText, &countText, 0LL);
                        atLabel = this->fields.atLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v42 = LocalizationManager__Get((System_String_o *)StringLiteral_2538/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
                        v51 = v31->fields.point - TotalDamagePoint;
                        v44 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v51, v43);
                        Instance = System_String__Format(v42, v44, 0LL);
                        if ( atLabel )
                        {
                          UILabel__set_text(atLabel, Instance, 0LL);
                          isQp = EventRewardEntity__isQp(v31, 0LL);
                          nextItemLabel = this->fields.nextItemLabel;
                          if ( isQp )
                          {
                            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            v47 = LocalizationManager__Get((System_String_o *)StringLiteral_2537/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, 0LL);
                            v48 = (Il2CppObject *)countText;
                            v49 = (Il2CppObject *)StringLiteral_1/*""*/;
                          }
                          else
                          {
                            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            v47 = LocalizationManager__Get((System_String_o *)StringLiteral_2537/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, 0LL);
                            v48 = (Il2CppObject *)countText;
                            v49 = (Il2CppObject *)nameText;
                          }
                          Instance = System_String__Format_44753704(v47, v49, v48, 0LL);
                          if ( nextItemLabel )
                          {
LABEL_69:
                            UILabel__set_text(nextItemLabel, Instance, 0LL);
                            return;
                          }
                        }
                      }
                      else
                      {
                        v50 = this->fields.atLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2536/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
                        if ( v50 )
                        {
                          UILabel__set_text(v50, Instance, 0LL);
                          nextItemLabel = this->fields.nextItemLabel;
                          Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2534/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
                          if ( nextItemLabel )
                            goto LABEL_69;
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
LABEL_63:
    sub_B7076C(Instance, v16);
  }
}