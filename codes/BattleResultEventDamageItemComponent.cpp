void __fastcall BattleResultEventDamageItemComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int64_t v11; // x1
  struct BattleResultEventDamageItemComponent_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x1
  struct BattleResultEventDamageItemComponent_StaticFields *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4BB7A8C & 1) == 0 )
  {
    sub_1C13D24(&BattleResultEventDamageItemComponent_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_20860/*"img_txt_blacklist"*/, v8);
    sub_1C13D24(&StringLiteral_2987/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_ITEM"*/, v9);
    sub_1C13D24(&StringLiteral_20581/*"imageText "*/, v10);
    byte_4BB7A8C = 1;
  }
  BattleResultEventDamageItemComponent_TypeInfo->static_fields->DAMAGE_POINT_REWARD_AT_LOCALE_KEY = (struct System_String_o *)StringLiteral_2987/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_ITEM"*/;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)BattleResultEventDamageItemComponent_TypeInfo->static_fields,
    StringLiteral_2987/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_ITEM"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = StringLiteral_20860/*"img_txt_blacklist"*/;
  static_fields = BattleResultEventDamageItemComponent_TypeInfo->static_fields;
  static_fields->DAMAGE_POINT_REWARD_TITLE_NAME = (struct System_String_o *)StringLiteral_20860/*"img_txt_blacklist"*/;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&static_fields->DAMAGE_POINT_REWARD_TITLE_NAME,
    v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = StringLiteral_20581/*"imageText "*/;
  v20 = BattleResultEventDamageItemComponent_TypeInfo->static_fields;
  v20->DAMAGE_POINT_REWARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_20581/*"imageText "*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v20->DAMAGE_POINT_REWARD_SPRITE_NAME, v19, v21, v22, v23, v24, v25, v26);
}


void __fastcall BattleResultEventDamageItemComponent___ctor(
        BattleResultEventDamageItemComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BB7A8B & 1) == 0 )
  {
    sub_1C13D24(&BattleResultEventItemComponent_TypeInfo, method);
    byte_4BB7A8B = 1;
  }
  if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
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
  __int64 v9; // x1
  struct UISprite_o *titleSp; // x8
  Il2CppObject *v11; // x20
  BattleResultEventDamageItemComponent_c *v12; // x0

  if ( (byte_4BB7A8A & 1) == 0 )
  {
    sub_1C13D24(&BattleResultEventDamageItemComponent_TypeInfo, *(_QWORD *)&currentGroup);
    sub_1C13D24(&Method_BetterList_string__Contains__, v4);
    byte_4BB7A8A = 1;
  }
  v5 = BattleResultEventDamageItemComponent_TypeInfo;
  if ( !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
    v5 = BattleResultEventDamageItemComponent_TypeInfo;
  }
  DAMAGE_POINT_REWARD_TITLE_NAME = v5->static_fields->DAMAGE_POINT_REWARD_TITLE_NAME;
  v7 = System_Int32__ToString((int)this + 168, 0LL);
  mAtlas = (UIAtlas_o *)System_String__Concat_62967944(DAMAGE_POINT_REWARD_TITLE_NAME, v7, 0LL);
  titleSp = this->fields.titleSp;
  if ( !titleSp )
    goto LABEL_15;
  v11 = (Il2CppObject *)mAtlas;
  mAtlas = titleSp->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_15;
  mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0LL);
  if ( !mAtlas )
    goto LABEL_15;
  if ( !BetterList_object___Contains(
          (BetterList_T__o *)mAtlas,
          v11,
          (const MethodInfo_31B0E78 *)Method_BetterList_string__Contains__) )
  {
    v12 = BattleResultEventDamageItemComponent_TypeInfo;
    if ( !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
      v12 = BattleResultEventDamageItemComponent_TypeInfo;
    }
    v11 = (Il2CppObject *)v12->static_fields->DAMAGE_POINT_REWARD_TITLE_NAME;
  }
  mAtlas = (UIAtlas_o *)this->fields.titleSp;
  if ( !mAtlas
    || (UISprite__set_spriteName((UISprite_o *)mAtlas, (System_String_o *)v11, 0LL),
        (mAtlas = (UIAtlas_o *)this->fields.titleSp) == 0LL) )
  {
LABEL_15:
    sub_1C13F80(mAtlas, v9);
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
  __int64 v31; // x1
  UILabel_o *titleNextItemLabel; // x22
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x2
  Il2CppObject *MasterData_object; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  UserEventRaidMaster_o *usrEvent; // x0
  int64_t TotalDamagePoint; // x21
  EventRewardEntity_o *NextEventRewardEntity; // x0
  UnityEngine_Object_o *eventIconSprite; // x23
  EventRewardEntity_o *v46; // x22
  int32_t RaidEventImageId; // w0
  UISprite_o *v48; // x24
  int32_t v49; // w23
  BattleResultEventDamageItemComponent_c *v50; // x0
  System_String_o *DAMAGE_POINT_REWARD_SPRITE_NAME; // x23
  System_String_o *v52; // x0
  struct UISprite_o *eventPointAtSprite; // x8
  Il2CppObject *v54; // x20
  BattleResultEventDamageItemComponent_c *v55; // x0
  UILabel_o *atLabel; // x20
  System_String_o *v57; // x23
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  Il2CppObject *v61; // x0
  bool isQp; // w0
  UILabel_o *nextItemLabel; // x19
  bool v64; // w20
  System_String_o *v65; // x0
  Il2CppObject *v66; // x1
  UILabel_o *v67; // x20
  int64_t v68; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *countText; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-58h] BYREF
  int32_t eventIda; // [xsp+2Ch] [xbp-44h] BYREF

  eventIda = eventId;
  if ( (byte_4BB7A89 & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, drop);
    sub_1C13D24(&BattleResultEventDamageItemComponent_TypeInfo, v9);
    sub_1C13D24(&Method_BetterList_string__Contains__, v10);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventMaster___, v11);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventRewardMaster___, v12);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserEventRaidMaster___, v13);
    sub_1C13D24(&long_TypeInfo, v14);
    sub_1C13D24(&LocalizationManager_TypeInfo, v15);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v16);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1C13D24(&StringLiteral_2986/*"BATTLE_RESULT_BONDS_WAVE_COUNT"*/, v18);
    sub_1C13D24(&StringLiteral_2973/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, v19);
    sub_1C13D24(&StringLiteral_2971/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/, v20);
    sub_1C13D24(&StringLiteral_2972/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, v21);
    sub_1C13D24(&StringLiteral_2969/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, v22);
    sub_1C13D24(&StringLiteral_1/*""*/, v23);
    byte_4BB7A89 = 1;
  }
  countText = 0LL;
  nameText = 0LL;
  if ( !drop )
    this->fields.currentGroupIndex = -1;
  this->fields.currentEventId = eventId;
  if ( eventId >= 1 )
  {
    v24 = BattleResultEventDamageItemComponent_TypeInfo;
    if ( !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
      v24 = BattleResultEventDamageItemComponent_TypeInfo;
    }
    DAMAGE_POINT_REWARD_AT_LOCALE_KEY = v24->static_fields->DAMAGE_POINT_REWARD_AT_LOCALE_KEY;
    v26 = System_Int32__ToString((int32_t)&eventIda, 0LL);
    v27 = System_String__Concat_62967944(DAMAGE_POINT_REWARD_AT_LOCALE_KEY, v26, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !LocalizationManager__ContainsKey(v27, 0LL) )
    {
      v28 = BattleResultEventDamageItemComponent_TypeInfo;
      if ( !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
        v28 = BattleResultEventDamageItemComponent_TypeInfo;
      }
      v27 = v28->static_fields->DAMAGE_POINT_REWARD_AT_LOCALE_KEY;
    }
    titleAtLabel = this->fields.titleAtLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = LocalizationManager__Get(v27, 0LL);
    if ( titleAtLabel )
    {
      UILabel__set_text(titleAtLabel, Instance, 0LL);
      titleNextItemLabel = this->fields.titleNextItemLabel;
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2986/*"BATTLE_RESULT_BONDS_WAVE_COUNT"*/, 0LL);
      if ( titleNextItemLabel )
      {
        UILabel__set_text(titleNextItemLabel, Instance, 0LL);
        BattleResultEventItemComponent__createDropInfo((BattleResultEventItemComponent_o *)this, drop, v33);
        BattleResultEventItemComponent__SetItemWindow_45512248((BattleResultEventItemComponent_o *)this, drop, v34);
        Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
          this->fields.usrEvent = (struct UserEventRaidMaster_o *)MasterData_object;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&this->fields.usrEvent,
            (int64_t)MasterData_object,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41);
          usrEvent = this->fields.usrEvent;
          if ( !usrEvent )
            return;
          TotalDamagePoint = UserEventRaidMaster__getTotalDamagePoint(usrEvent, eventIda, 0LL);
          Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventRewardMaster___);
            if ( Instance )
            {
              NextEventRewardEntity = EventRewardMaster__GetNextEventRewardEntity(
                                        (EventRewardMaster_o *)Instance,
                                        eventIda,
                                        TotalDamagePoint,
                                        0LL);
              eventIconSprite = (UnityEngine_Object_o *)this->fields.eventIconSprite;
              v46 = NextEventRewardEntity;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(eventIconSprite, 0LL, 0LL) )
              {
                Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Instance )
                  goto LABEL_52;
                Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMaster___);
                if ( !Instance )
                  goto LABEL_52;
                RaidEventImageId = EventMaster__GetRaidEventImageId((EventMaster_o *)Instance, eventIda, 0LL);
                v48 = this->fields.eventIconSprite;
                v49 = RaidEventImageId;
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                AtlasManager__SetItem(v48, v49, 0LL);
              }
              v50 = BattleResultEventDamageItemComponent_TypeInfo;
              if ( !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
                v50 = BattleResultEventDamageItemComponent_TypeInfo;
              }
              DAMAGE_POINT_REWARD_SPRITE_NAME = v50->static_fields->DAMAGE_POINT_REWARD_SPRITE_NAME;
              v52 = System_Int32__ToString((int)this + 168, 0LL);
              Instance = System_String__Concat_62967944(DAMAGE_POINT_REWARD_SPRITE_NAME, v52, 0LL);
              eventPointAtSprite = this->fields.eventPointAtSprite;
              if ( eventPointAtSprite )
              {
                v54 = (Il2CppObject *)Instance;
                Instance = (System_String_o *)eventPointAtSprite->fields.mAtlas;
                if ( Instance )
                {
                  Instance = (System_String_o *)UIAtlas__GetListOfSprites((UIAtlas_o *)Instance, 0LL);
                  if ( Instance )
                  {
                    if ( !BetterList_object___Contains(
                            (BetterList_T__o *)Instance,
                            v54,
                            (const MethodInfo_31B0E78 *)Method_BetterList_string__Contains__) )
                    {
                      v55 = BattleResultEventDamageItemComponent_TypeInfo;
                      if ( !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
                        v55 = BattleResultEventDamageItemComponent_TypeInfo;
                      }
                      v54 = (Il2CppObject *)v55->static_fields->DAMAGE_POINT_REWARD_SPRITE_NAME;
                    }
                    Instance = (System_String_o *)this->fields.eventPointAtSprite;
                    if ( Instance )
                    {
                      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)v54, 0LL);
                      if ( v46 )
                      {
                        EventRewardEntity__GetInfo(v46, &nameText, &countText, 0LL);
                        atLabel = this->fields.atLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v57 = LocalizationManager__Get((System_String_o *)StringLiteral_2973/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, 0LL);
                        v68 = v46->fields.point - TotalDamagePoint;
                        v61 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v68, v58, v59, v60);
                        Instance = System_String__Format(v57, v61, 0LL);
                        if ( atLabel )
                        {
                          UILabel__set_text(atLabel, Instance, 0LL);
                          isQp = EventRewardEntity__isQp(v46, 0LL);
                          nextItemLabel = this->fields.nextItemLabel;
                          v64 = isQp;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v65 = LocalizationManager__Get((System_String_o *)StringLiteral_2972/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
                          v66 = (Il2CppObject *)(v64 ? StringLiteral_1/*""*/ : nameText);
                          Instance = System_String__Format_62982316(v65, v66, (Il2CppObject *)countText, 0LL);
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
                        v67 = this->fields.atLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2971/*"BATTLE_RESULEVENTTITEM_AT_POINT"*/, 0LL);
                        if ( v67 )
                        {
                          UILabel__set_text(v67, Instance, 0LL);
                          nextItemLabel = this->fields.nextItemLabel;
                          Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2969/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0LL);
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
    sub_1C13F80(Instance, v31);
  }
}