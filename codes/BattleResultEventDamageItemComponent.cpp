void __fastcall BattleResultEventDamageItemComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1
  struct BattleResultEventDamageItemComponent_StaticFields *v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct BattleResultEventDamageItemComponent_StaticFields *v21; // x0
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42148B1 & 1) == 0 )
  {
    sub_B0D8A4(&BattleResultEventDamageItemComponent_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_19740/*"img_txt_dpreward"*/, v8);
    sub_B0D8A4(&StringLiteral_2503/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_POINT"*/, v9);
    sub_B0D8A4(&StringLiteral_19494/*"img_bg_dp"*/, v10);
    byte_42148B1 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BattleResultEventDamageItemComponent_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_2503/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_POINT"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2503/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_POINT"*/;
  sub_B0D840(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = BattleResultEventDamageItemComponent_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_19740/*"img_txt_dpreward"*/;
  v13->DAMAGE_POINT_REWARD_TITLE_NAME = (struct System_String_o *)StringLiteral_19740/*"img_txt_dpreward"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v13->DAMAGE_POINT_REWARD_TITLE_NAME, v14, v15, v16, v17, v18, v19, v20);
  v21 = BattleResultEventDamageItemComponent_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_19494/*"img_bg_dp"*/;
  v21->DAMAGE_POINT_REWARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_19494/*"img_bg_dp"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v21->DAMAGE_POINT_REWARD_SPRITE_NAME, v22, v23, v24, v25, v26, v27, v28);
}


void __fastcall BattleResultEventDamageItemComponent___ctor(
        BattleResultEventDamageItemComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_42148B0 & 1) == 0 )
  {
    sub_B0D8A4(&BattleResultEventItemComponent_TypeInfo, method);
    byte_42148B0 = 1;
  }
  if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
  }
  BattleResultEventItemComponent___ctor((BattleResultEventItemComponent_o *)this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultEventDamageItemComponent__SetTitleSprite(
        BattleResultEventDamageItemComponent_o *this,
        int32_t currentGroup,
        const MethodInfo *method)
{
  __int64 v4; // x1
  BattleResultEventDamageItemComponent_c *v5; // x0
  System_String_o *DAMAGE_POINT_REWARD_TITLE_NAME; // x20
  System_String_o *v7; // x0
  UIAtlas_o *mAtlas; // x0
  struct UISprite_o *titleSp; // x8
  UILabel_o *v10; // x20
  BattleResultEventDamageItemComponent_c *v11; // x0

  if ( (byte_42148AF & 1) == 0 )
  {
    sub_B0D8A4(&BattleResultEventDamageItemComponent_TypeInfo, *(_QWORD *)&currentGroup);
    sub_B0D8A4(&Method_BetterList_string__Contains__, v4);
    byte_42148AF = 1;
  }
  v5 = BattleResultEventDamageItemComponent_TypeInfo;
  if ( (BYTE3(BattleResultEventDamageItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
    v5 = BattleResultEventDamageItemComponent_TypeInfo;
  }
  DAMAGE_POINT_REWARD_TITLE_NAME = v5->static_fields->DAMAGE_POINT_REWARD_TITLE_NAME;
  v7 = System_Int32__ToString((int)this + 160, 0LL);
  mAtlas = (UIAtlas_o *)System_String__Concat_43849904(DAMAGE_POINT_REWARD_TITLE_NAME, v7, 0LL);
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
          (const MethodInfo_2D5776C *)Method_BetterList_string__Contains__) )
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
    sub_B0D97C(mAtlas);
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  BattleResultEventDamageItemComponent_c *v24; // x0
  System_String_o *DAMAGE_POINT_REWARD_AT_LOCALE_KEY; // x22
  System_String_o *v26; // x0
  System_String_o *v27; // x22
  BattleResultEventDamageItemComponent_c *v28; // x0
  UILabel_o *titleAtLabel; // x23
  System_String_o *Instance; // x0
  UILabel_o *titleNextItemLabel; // x22
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x2
  struct UserEventRaidMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  UserEventRaidMaster_o *usrEvent; // x0
  int64_t TotalDamagePoint; // x21
  EventRewardEntity_o *NextEventRewardEntity; // x0
  UnityEngine_Object_o *eventIconSprite; // x23
  EventRewardEntity_o *v45; // x22
  int32_t RaidEventImageId; // w0
  UISprite_o *v47; // x24
  int32_t v48; // w23
  BattleResultEventDamageItemComponent_c *v49; // x0
  System_String_o *DAMAGE_POINT_REWARD_SPRITE_NAME; // x23
  System_String_o *v51; // x0
  struct UISprite_o *eventPointAtSprite; // x8
  UILabel_o *v53; // x20
  BattleResultEventDamageItemComponent_c *v54; // x0
  UILabel_o *atLabel; // x20
  System_String_o *v56; // x23
  Il2CppObject *v57; // x0
  bool isQp; // w0
  UILabel_o *nextItemLabel; // x19
  System_String_o *v60; // x0
  Il2CppObject *v61; // x2
  Il2CppObject *v62; // x1
  UILabel_o *v63; // x20
  int64_t v64; // [xsp+0h] [xbp-60h] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *nameText; // [xsp+10h] [xbp-50h] BYREF
  int32_t eventIda; // [xsp+1Ch] [xbp-44h] BYREF

  eventIda = eventId;
  if ( (byte_42148AE & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, drop);
    sub_B0D8A4(&BattleResultEventDamageItemComponent_TypeInfo, v9);
    sub_B0D8A4(&Method_BetterList_string__Contains__, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRewardMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventRaidMaster___, v13);
    sub_B0D8A4(&long_TypeInfo, v14);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v15);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B0D8A4(&StringLiteral_2502/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_ITEM"*/, v18);
    sub_B0D8A4(&StringLiteral_2489/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v19);
    sub_B0D8A4(&StringLiteral_2487/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, v20);
    sub_B0D8A4(&StringLiteral_2488/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, v21);
    sub_B0D8A4(&StringLiteral_2485/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, v22);
    sub_B0D8A4(&StringLiteral_1/*""*/, v23);
    byte_42148AE = 1;
  }
  countText = 0LL;
  nameText = 0LL;
  if ( !drop )
    this->fields.currentGroupIndex = -1;
  this->fields.currentEventId = eventId;
  if ( eventId >= 1 )
  {
    v24 = BattleResultEventDamageItemComponent_TypeInfo;
    if ( (BYTE3(BattleResultEventDamageItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
      v24 = BattleResultEventDamageItemComponent_TypeInfo;
    }
    DAMAGE_POINT_REWARD_AT_LOCALE_KEY = v24->static_fields->DAMAGE_POINT_REWARD_AT_LOCALE_KEY;
    v26 = System_Int32__ToString((int32_t)&eventIda, 0LL);
    v27 = System_String__Concat_43849904(DAMAGE_POINT_REWARD_AT_LOCALE_KEY, v26, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !LocalizationManager__ContainsKey(v27, 0LL) )
    {
      v28 = BattleResultEventDamageItemComponent_TypeInfo;
      if ( (BYTE3(BattleResultEventDamageItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
        v28 = BattleResultEventDamageItemComponent_TypeInfo;
      }
      v27 = v28->static_fields->DAMAGE_POINT_REWARD_AT_LOCALE_KEY;
    }
    titleAtLabel = this->fields.titleAtLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = LocalizationManager__Get(v27, 0LL);
    if ( titleAtLabel )
    {
      UILabel__set_text(titleAtLabel, Instance, 0LL);
      titleNextItemLabel = this->fields.titleNextItemLabel;
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2502/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_ITEM"*/, 0LL);
      if ( titleNextItemLabel )
      {
        UILabel__set_text(titleNextItemLabel, Instance, 0LL);
        BattleResultEventItemComponent__createDropInfo((BattleResultEventItemComponent_o *)this, drop, v32);
        BattleResultEventItemComponent__SetItemWindow_24795380((BattleResultEventItemComponent_o *)this, drop, v33);
        Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_WarQuestSelectionMaster = (struct UserEventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)Instance,
                                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
          this->fields.usrEvent = MasterData_WarQuestSelectionMaster;
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.usrEvent,
            (System_Int32_array **)MasterData_WarQuestSelectionMaster,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40);
          usrEvent = this->fields.usrEvent;
          if ( !usrEvent )
            return;
          TotalDamagePoint = UserEventRaidMaster__getTotalDamagePoint(usrEvent, eventIda, 0LL);
          Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRewardMaster___);
            if ( Instance )
            {
              NextEventRewardEntity = EventRewardMaster__GetNextEventRewardEntity(
                                        (EventRewardMaster_o *)Instance,
                                        eventIda,
                                        TotalDamagePoint,
                                        0LL);
              eventIconSprite = (UnityEngine_Object_o *)this->fields.eventIconSprite;
              v45 = NextEventRewardEntity;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(eventIconSprite, 0LL, 0LL) )
              {
                Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Instance )
                  goto LABEL_63;
                Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
                if ( !Instance )
                  goto LABEL_63;
                RaidEventImageId = EventMaster__GetRaidEventImageId((EventMaster_o *)Instance, eventIda, 0LL);
                v47 = this->fields.eventIconSprite;
                v48 = RaidEventImageId;
                if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AtlasManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                }
                AtlasManager__SetItem(v47, v48, 0LL);
              }
              v49 = BattleResultEventDamageItemComponent_TypeInfo;
              if ( (BYTE3(BattleResultEventDamageItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
                v49 = BattleResultEventDamageItemComponent_TypeInfo;
              }
              DAMAGE_POINT_REWARD_SPRITE_NAME = v49->static_fields->DAMAGE_POINT_REWARD_SPRITE_NAME;
              v51 = System_Int32__ToString((int)this + 160, 0LL);
              Instance = System_String__Concat_43849904(DAMAGE_POINT_REWARD_SPRITE_NAME, v51, 0LL);
              eventPointAtSprite = this->fields.eventPointAtSprite;
              if ( eventPointAtSprite )
              {
                v53 = (UILabel_o *)Instance;
                Instance = (System_String_o *)eventPointAtSprite->fields.mAtlas;
                if ( Instance )
                {
                  Instance = (System_String_o *)UIAtlas__GetListOfSprites((UIAtlas_o *)Instance, 0LL);
                  if ( Instance )
                  {
                    if ( !BetterList_UILabel___Contains(
                            (BetterList_UILabel__o *)Instance,
                            v53,
                            (const MethodInfo_2D5776C *)Method_BetterList_string__Contains__) )
                    {
                      v54 = BattleResultEventDamageItemComponent_TypeInfo;
                      if ( (BYTE3(BattleResultEventDamageItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
                        v54 = BattleResultEventDamageItemComponent_TypeInfo;
                      }
                      v53 = (UILabel_o *)v54->static_fields->DAMAGE_POINT_REWARD_SPRITE_NAME;
                    }
                    Instance = (System_String_o *)this->fields.eventPointAtSprite;
                    if ( Instance )
                    {
                      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)v53, 0LL);
                      if ( v45 )
                      {
                        EventRewardEntity__GetInfo(v45, &nameText, &countText, 0LL);
                        atLabel = this->fields.atLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v56 = LocalizationManager__Get((System_String_o *)StringLiteral_2489/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
                        v64 = v45->fields.point - TotalDamagePoint;
                        v57 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v64);
                        Instance = System_String__Format(v56, v57, 0LL);
                        if ( atLabel )
                        {
                          UILabel__set_text(atLabel, Instance, 0LL);
                          isQp = EventRewardEntity__isQp(v45, 0LL);
                          nextItemLabel = this->fields.nextItemLabel;
                          if ( isQp )
                          {
                            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            v60 = LocalizationManager__Get((System_String_o *)StringLiteral_2488/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, 0LL);
                            v61 = (Il2CppObject *)countText;
                            v62 = (Il2CppObject *)StringLiteral_1/*""*/;
                          }
                          else
                          {
                            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            v60 = LocalizationManager__Get((System_String_o *)StringLiteral_2488/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, 0LL);
                            v61 = (Il2CppObject *)countText;
                            v62 = (Il2CppObject *)nameText;
                          }
                          Instance = System_String__Format_43845440(v60, v62, v61, 0LL);
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
                        v63 = this->fields.atLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2487/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
                        if ( v63 )
                        {
                          UILabel__set_text(v63, Instance, 0LL);
                          nextItemLabel = this->fields.nextItemLabel;
                          Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2485/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
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
    sub_B0D97C(Instance);
  }
}