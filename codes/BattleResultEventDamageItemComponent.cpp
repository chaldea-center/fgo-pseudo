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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int64_t v14; // x1
  struct BattleResultEventDamageItemComponent_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x1
  struct BattleResultEventDamageItemComponent_StaticFields *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4B194EE & 1) == 0 )
  {
    sub_1BCA7E0(&BattleResultEventDamageItemComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_20742/*"img_txt_dpreward"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_2978/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_POINT"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_20467/*"img_bg_dp"*/, v12, v13);
    byte_4B194EE = 1;
  }
  BattleResultEventDamageItemComponent_TypeInfo->static_fields->DAMAGE_POINT_REWARD_AT_LOCALE_KEY = (struct System_String_o *)StringLiteral_2978/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_POINT"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleResultEventDamageItemComponent_TypeInfo->static_fields,
    StringLiteral_2978/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_POINT"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v14 = StringLiteral_20742/*"img_txt_dpreward"*/;
  static_fields = BattleResultEventDamageItemComponent_TypeInfo->static_fields;
  static_fields->DAMAGE_POINT_REWARD_TITLE_NAME = (struct System_String_o *)StringLiteral_20742/*"img_txt_dpreward"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->DAMAGE_POINT_REWARD_TITLE_NAME,
    v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = StringLiteral_20467/*"img_bg_dp"*/;
  v23 = BattleResultEventDamageItemComponent_TypeInfo->static_fields;
  v23->DAMAGE_POINT_REWARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_20467/*"img_bg_dp"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v23->DAMAGE_POINT_REWARD_SPRITE_NAME, v22, v24, v25, v26, v27, v28, v29);
}


void __fastcall BattleResultEventDamageItemComponent___ctor(
        BattleResultEventDamageItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B194ED & 1) == 0 )
  {
    sub_1BCA7E0(&BattleResultEventItemComponent_TypeInfo, method, v2);
    byte_4B194ED = 1;
  }
  if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo, method);
  BattleResultEventItemComponent___ctor((BattleResultEventItemComponent_o *)this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultEventDamageItemComponent__SetTitleSprite(
        BattleResultEventDamageItemComponent_o *this,
        int32_t currentGroup,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  BattleResultEventDamageItemComponent_c *v6; // x0
  System_String_o *DAMAGE_POINT_REWARD_TITLE_NAME; // x20
  System_String_o *v8; // x0
  UIAtlas_o *mAtlas; // x0
  __int64 v10; // x1
  struct UISprite_o *titleSp; // x8
  Il2CppObject *v12; // x20
  BattleResultEventDamageItemComponent_c *v13; // x0

  if ( (byte_4B194EC & 1) == 0 )
  {
    sub_1BCA7E0(&BattleResultEventDamageItemComponent_TypeInfo, *(_QWORD *)&currentGroup, method);
    sub_1BCA7E0(&Method_BetterList_string__Contains__, v4, v5);
    byte_4B194EC = 1;
  }
  v6 = BattleResultEventDamageItemComponent_TypeInfo;
  if ( !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo, *(_QWORD *)&currentGroup);
    v6 = BattleResultEventDamageItemComponent_TypeInfo;
  }
  DAMAGE_POINT_REWARD_TITLE_NAME = v6->static_fields->DAMAGE_POINT_REWARD_TITLE_NAME;
  v8 = System_Int32__ToString((int)this + 168, 0LL);
  mAtlas = (UIAtlas_o *)System_String__Concat_62401220(DAMAGE_POINT_REWARD_TITLE_NAME, v8, 0LL);
  titleSp = this->fields.titleSp;
  if ( !titleSp )
    goto LABEL_15;
  v12 = (Il2CppObject *)mAtlas;
  mAtlas = titleSp->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_15;
  mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0LL);
  if ( !mAtlas )
    goto LABEL_15;
  if ( !BetterList_object___Contains(
          (BetterList_T__o *)mAtlas,
          v12,
          (const MethodInfo_312D960 *)Method_BetterList_string__Contains__) )
  {
    v13 = BattleResultEventDamageItemComponent_TypeInfo;
    if ( !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo, v10);
      v13 = BattleResultEventDamageItemComponent_TypeInfo;
    }
    v12 = (Il2CppObject *)v13->static_fields->DAMAGE_POINT_REWARD_TITLE_NAME;
  }
  mAtlas = (UIAtlas_o *)this->fields.titleSp;
  if ( !mAtlas
    || (UISprite__set_spriteName((UISprite_o *)mAtlas, (System_String_o *)v12, 0LL),
        (mAtlas = (UIAtlas_o *)this->fields.titleSp) == 0LL) )
  {
LABEL_15:
    sub_1BCAA3C(mAtlas, v10);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultEventDamageItemComponent__setResultData(
        BattleResultEventDamageItemComponent_o *this,
        BattleDropItem_array *drop,
        int32_t eventId,
        QuestRewardInfo_array *resultBoostItemRewardInfos,
        QuestRewardInfo_array *rewardInfos,
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  BattleResultEventDamageItemComponent_c *v39; // x0
  System_String_o *DAMAGE_POINT_REWARD_AT_LOCALE_KEY; // x22
  System_String_o *v41; // x0
  __int64 v42; // x1
  System_String_o *v43; // x22
  __int64 v44; // x1
  BattleResultEventDamageItemComponent_c *v45; // x0
  UILabel_o *titleAtLabel; // x23
  System_String_o *Instance; // x0
  __int64 v48; // x1
  UILabel_o *titleNextItemLabel; // x22
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x2
  Il2CppObject *MasterData_object; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  UserEventRaidMaster_o *usrEvent; // x0
  int64_t TotalDamagePoint; // x21
  EventRewardEntity_o *NextEventRewardEntity; // x0
  __int64 v62; // x1
  UnityEngine_Object_o *eventIconSprite; // x23
  EventRewardEntity_o *v64; // x22
  __int64 v65; // x1
  int32_t RaidEventImageId; // w0
  __int64 v67; // x1
  UISprite_o *v68; // x24
  int32_t v69; // w23
  BattleResultEventDamageItemComponent_c *v70; // x0
  System_String_o *DAMAGE_POINT_REWARD_SPRITE_NAME; // x23
  System_String_o *v72; // x0
  struct UISprite_o *eventPointAtSprite; // x8
  Il2CppObject *v74; // x20
  BattleResultEventDamageItemComponent_c *v75; // x0
  __int64 v76; // x1
  __int64 v77; // x1
  UILabel_o *atLabel; // x20
  System_String_o *v79; // x23
  Il2CppObject *v80; // x0
  bool isQp; // w0
  __int64 v82; // x1
  UILabel_o *nextItemLabel; // x19
  bool v84; // w20
  System_String_o *v85; // x0
  Il2CppObject *v86; // x1
  UILabel_o *v87; // x20
  int64_t v88; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *countText; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-58h] BYREF
  int32_t eventIda; // [xsp+2Ch] [xbp-44h] BYREF

  eventIda = eventId;
  if ( (byte_4B194EB & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, drop, *(_QWORD *)&eventId);
    sub_1BCA7E0(&BattleResultEventDamageItemComponent_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_BetterList_string__Contains__, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRewardMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventRaidMaster___, v17, v18);
    sub_1BCA7E0(&long_TypeInfo, v19, v20);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&StringLiteral_2977/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_ITEM"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_2964/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_2962/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_2963/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_2960/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v37, v38);
    byte_4B194EB = 1;
  }
  countText = 0LL;
  nameText = 0LL;
  if ( !drop )
    this->fields.currentGroupIndex = -1;
  this->fields.currentEventId = eventId;
  if ( eventId >= 1 )
  {
    v39 = BattleResultEventDamageItemComponent_TypeInfo;
    if ( !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo, drop);
      v39 = BattleResultEventDamageItemComponent_TypeInfo;
    }
    DAMAGE_POINT_REWARD_AT_LOCALE_KEY = v39->static_fields->DAMAGE_POINT_REWARD_AT_LOCALE_KEY;
    v41 = System_Int32__ToString((int32_t)&eventIda, 0LL);
    v43 = System_String__Concat_62401220(DAMAGE_POINT_REWARD_AT_LOCALE_KEY, v41, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v42);
    if ( !LocalizationManager__ContainsKey(v43, 0LL) )
    {
      v45 = BattleResultEventDamageItemComponent_TypeInfo;
      if ( !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo, v44);
        v45 = BattleResultEventDamageItemComponent_TypeInfo;
      }
      v43 = v45->static_fields->DAMAGE_POINT_REWARD_AT_LOCALE_KEY;
    }
    titleAtLabel = this->fields.titleAtLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44);
    Instance = LocalizationManager__Get(v43, 0LL);
    if ( titleAtLabel )
    {
      UILabel__set_text(titleAtLabel, Instance, 0LL);
      titleNextItemLabel = this->fields.titleNextItemLabel;
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2977/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_ITEM"*/, 0LL);
      if ( titleNextItemLabel )
      {
        UILabel__set_text(titleNextItemLabel, Instance, 0LL);
        BattleResultEventItemComponent__createDropInfo((BattleResultEventItemComponent_o *)this, drop, v50);
        BattleResultEventItemComponent__SetItemWindow_45044172((BattleResultEventItemComponent_o *)this, drop, v51);
        Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
          this->fields.usrEvent = (struct UserEventRaidMaster_o *)MasterData_object;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.usrEvent,
            (int64_t)MasterData_object,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58);
          usrEvent = this->fields.usrEvent;
          if ( !usrEvent )
            return;
          TotalDamagePoint = UserEventRaidMaster__getTotalDamagePoint(usrEvent, eventIda, 0LL);
          Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRewardMaster___);
            if ( Instance )
            {
              NextEventRewardEntity = EventRewardMaster__GetNextEventRewardEntity(
                                        (EventRewardMaster_o *)Instance,
                                        eventIda,
                                        TotalDamagePoint,
                                        0LL);
              eventIconSprite = (UnityEngine_Object_o *)this->fields.eventIconSprite;
              v64 = NextEventRewardEntity;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v62);
              if ( UnityEngine_Object__op_Inequality(eventIconSprite, 0LL, 0LL) )
              {
                Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Instance )
                  goto LABEL_52;
                Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
                if ( !Instance )
                  goto LABEL_52;
                RaidEventImageId = EventMaster__GetRaidEventImageId((EventMaster_o *)Instance, eventIda, 0LL);
                v68 = this->fields.eventIconSprite;
                v69 = RaidEventImageId;
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v67);
                AtlasManager__SetItem(v68, v69, 0LL);
              }
              v70 = BattleResultEventDamageItemComponent_TypeInfo;
              if ( !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo, v65);
                v70 = BattleResultEventDamageItemComponent_TypeInfo;
              }
              DAMAGE_POINT_REWARD_SPRITE_NAME = v70->static_fields->DAMAGE_POINT_REWARD_SPRITE_NAME;
              v72 = System_Int32__ToString((int)this + 168, 0LL);
              Instance = System_String__Concat_62401220(DAMAGE_POINT_REWARD_SPRITE_NAME, v72, 0LL);
              eventPointAtSprite = this->fields.eventPointAtSprite;
              if ( eventPointAtSprite )
              {
                v74 = (Il2CppObject *)Instance;
                Instance = (System_String_o *)eventPointAtSprite->fields.mAtlas;
                if ( Instance )
                {
                  Instance = (System_String_o *)UIAtlas__GetListOfSprites((UIAtlas_o *)Instance, 0LL);
                  if ( Instance )
                  {
                    if ( !BetterList_object___Contains(
                            (BetterList_T__o *)Instance,
                            v74,
                            (const MethodInfo_312D960 *)Method_BetterList_string__Contains__) )
                    {
                      v75 = BattleResultEventDamageItemComponent_TypeInfo;
                      if ( !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo, v48);
                        v75 = BattleResultEventDamageItemComponent_TypeInfo;
                      }
                      v74 = (Il2CppObject *)v75->static_fields->DAMAGE_POINT_REWARD_SPRITE_NAME;
                    }
                    Instance = (System_String_o *)this->fields.eventPointAtSprite;
                    if ( Instance )
                    {
                      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)v74, 0LL);
                      if ( v64 )
                      {
                        EventRewardEntity__GetInfo(v64, &nameText, &countText, 0LL);
                        atLabel = this->fields.atLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v77);
                        v79 = LocalizationManager__Get((System_String_o *)StringLiteral_2964/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
                        v88 = v64->fields.point - TotalDamagePoint;
                        v80 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v88);
                        Instance = System_String__Format(v79, v80, 0LL);
                        if ( atLabel )
                        {
                          UILabel__set_text(atLabel, Instance, 0LL);
                          isQp = EventRewardEntity__isQp(v64, 0LL);
                          nextItemLabel = this->fields.nextItemLabel;
                          v84 = isQp;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v82);
                          v85 = LocalizationManager__Get((System_String_o *)StringLiteral_2963/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, 0LL);
                          v86 = (Il2CppObject *)(v84 ? StringLiteral_1/*""*/ : nameText);
                          Instance = System_String__Format_62415592(v85, v86, (Il2CppObject *)countText, 0LL);
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
                        v87 = this->fields.atLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v76);
                        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2962/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
                        if ( v87 )
                        {
                          UILabel__set_text(v87, Instance, 0LL);
                          nextItemLabel = this->fields.nextItemLabel;
                          Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2960/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
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
    sub_1BCAA3C(Instance, v48);
  }
}