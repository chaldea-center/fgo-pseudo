void __fastcall BattleResultEventDamageItemComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  struct BattleResultEventDamageItemComponent_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  struct BattleResultEventDamageItemComponent_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FF519 & 1) == 0 )
  {
    sub_1B640C8(&BattleResultEventDamageItemComponent_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_20439/*"img_txt_dpreward"*/, v4);
    sub_1B640C8(&StringLiteral_2937/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_POINT"*/, v5);
    sub_1B640C8(&StringLiteral_20173/*"img_bg_dp"*/, v6);
    byte_49FF519 = 1;
  }
  BattleResultEventDamageItemComponent_TypeInfo->static_fields->DAMAGE_POINT_REWARD_AT_LOCALE_KEY = (struct System_String_o *)StringLiteral_2937/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_POINT"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)BattleResultEventDamageItemComponent_TypeInfo->static_fields,
    StringLiteral_2937/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_POINT"*/,
    v2,
    v3);
  v7 = StringLiteral_20439/*"img_txt_dpreward"*/;
  static_fields = BattleResultEventDamageItemComponent_TypeInfo->static_fields;
  static_fields->DAMAGE_POINT_REWARD_TITLE_NAME = (struct System_String_o *)StringLiteral_20439/*"img_txt_dpreward"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->DAMAGE_POINT_REWARD_TITLE_NAME, v7, v9, v10);
  v11 = StringLiteral_20173/*"img_bg_dp"*/;
  v12 = BattleResultEventDamageItemComponent_TypeInfo->static_fields;
  v12->DAMAGE_POINT_REWARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_20173/*"img_bg_dp"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v12->DAMAGE_POINT_REWARD_SPRITE_NAME, v11, v13, v14);
}


void __fastcall BattleResultEventDamageItemComponent___ctor(
        BattleResultEventDamageItemComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FF518 & 1) == 0 )
  {
    sub_1B640C8(&BattleResultEventItemComponent_TypeInfo, method);
    byte_49FF518 = 1;
  }
  if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
  BattleResultEventItemComponent___ctor((BattleResultEventItemComponent_o *)this, 0LL);
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
  Il2CppObject *v10; // x20
  BattleResultEventDamageItemComponent_c *v11; // x0

  if ( (byte_49FF517 & 1) == 0 )
  {
    sub_1B640C8(&BattleResultEventDamageItemComponent_TypeInfo, *(_QWORD *)&currentGroup);
    sub_1B640C8(&Method_BetterList_string__Contains__, v4);
    byte_49FF517 = 1;
  }
  v5 = BattleResultEventDamageItemComponent_TypeInfo;
  if ( !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
    v5 = BattleResultEventDamageItemComponent_TypeInfo;
  }
  DAMAGE_POINT_REWARD_TITLE_NAME = v5->static_fields->DAMAGE_POINT_REWARD_TITLE_NAME;
  v7 = System_Int32__ToString((int)this + 168, 0LL);
  mAtlas = (UIAtlas_o *)System_String__Concat_61375396(DAMAGE_POINT_REWARD_TITLE_NAME, v7, 0LL);
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
          (const MethodInfo_304F058 *)Method_BetterList_string__Contains__) )
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
    sub_1B64324(mAtlas);
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
  Il2CppObject *MasterData_object; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  UserEventRaidMaster_o *usrEvent; // x0
  int64_t TotalDamagePoint; // x21
  EventRewardEntity_o *NextEventRewardEntity; // x0
  UnityEngine_Object_o *eventIconSprite; // x23
  EventRewardEntity_o *v39; // x22
  int32_t RaidEventImageId; // w0
  UISprite_o *v41; // x24
  int32_t v42; // w23
  BattleResultEventDamageItemComponent_c *v43; // x0
  System_String_o *DAMAGE_POINT_REWARD_SPRITE_NAME; // x23
  System_String_o *v45; // x0
  struct UISprite_o *eventPointAtSprite; // x8
  Il2CppObject *v47; // x20
  BattleResultEventDamageItemComponent_c *v48; // x0
  UILabel_o *atLabel; // x20
  System_String_o *v50; // x23
  Il2CppObject *v51; // x0
  bool isQp; // w0
  UILabel_o *nextItemLabel; // x19
  bool v54; // w20
  System_String_o *v55; // x0
  Il2CppObject *v56; // x1
  UILabel_o *v57; // x20
  int64_t v58; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *countText; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-58h] BYREF
  int32_t eventIda; // [xsp+2Ch] [xbp-44h] BYREF

  eventIda = eventId;
  if ( (byte_49FF516 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, drop);
    sub_1B640C8(&BattleResultEventDamageItemComponent_TypeInfo, v9);
    sub_1B640C8(&Method_BetterList_string__Contains__, v10);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventRewardMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventRaidMaster___, v13);
    sub_1B640C8(&long_TypeInfo, v14);
    sub_1B640C8(&LocalizationManager_TypeInfo, v15);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B640C8(&StringLiteral_2936/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_ITEM"*/, v18);
    sub_1B640C8(&StringLiteral_2923/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v19);
    sub_1B640C8(&StringLiteral_2921/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, v20);
    sub_1B640C8(&StringLiteral_2922/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, v21);
    sub_1B640C8(&StringLiteral_2919/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, v22);
    sub_1B640C8(&StringLiteral_1/*""*/, v23);
    byte_49FF516 = 1;
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
    v27 = System_String__Concat_61375396(DAMAGE_POINT_REWARD_AT_LOCALE_KEY, v26, 0LL);
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
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2936/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_ITEM"*/, 0LL);
      if ( titleNextItemLabel )
      {
        UILabel__set_text(titleNextItemLabel, Instance, 0LL);
        BattleResultEventItemComponent__createDropInfo((BattleResultEventItemComponent_o *)this, drop, 0LL);
        BattleResultEventItemComponent__SetItemWindow_43799532((BattleResultEventItemComponent_o *)this, drop, 0LL);
        Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
          this->fields.usrEvent = (struct UserEventRaidMaster_o *)MasterData_object;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.usrEvent, (int32_t)MasterData_object, v33, v34);
          usrEvent = this->fields.usrEvent;
          if ( !usrEvent )
            return;
          TotalDamagePoint = UserEventRaidMaster__getTotalDamagePoint(usrEvent, eventIda, 0LL);
          Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventRewardMaster___);
            if ( Instance )
            {
              NextEventRewardEntity = EventRewardMaster__GetNextEventRewardEntity(
                                        (EventRewardMaster_o *)Instance,
                                        eventIda,
                                        TotalDamagePoint,
                                        0LL);
              eventIconSprite = (UnityEngine_Object_o *)this->fields.eventIconSprite;
              v39 = NextEventRewardEntity;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(eventIconSprite, 0LL, 0LL) )
              {
                Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Instance )
                  goto LABEL_52;
                Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
                if ( !Instance )
                  goto LABEL_52;
                RaidEventImageId = EventMaster__GetRaidEventImageId((EventMaster_o *)Instance, eventIda, 0LL);
                v41 = this->fields.eventIconSprite;
                v42 = RaidEventImageId;
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                AtlasManager__SetItem(v41, v42, 0LL);
              }
              v43 = BattleResultEventDamageItemComponent_TypeInfo;
              if ( !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
                v43 = BattleResultEventDamageItemComponent_TypeInfo;
              }
              DAMAGE_POINT_REWARD_SPRITE_NAME = v43->static_fields->DAMAGE_POINT_REWARD_SPRITE_NAME;
              v45 = System_Int32__ToString((int)this + 168, 0LL);
              Instance = System_String__Concat_61375396(DAMAGE_POINT_REWARD_SPRITE_NAME, v45, 0LL);
              eventPointAtSprite = this->fields.eventPointAtSprite;
              if ( eventPointAtSprite )
              {
                v47 = (Il2CppObject *)Instance;
                Instance = (System_String_o *)eventPointAtSprite->fields.mAtlas;
                if ( Instance )
                {
                  Instance = (System_String_o *)UIAtlas__GetListOfSprites((UIAtlas_o *)Instance, 0LL);
                  if ( Instance )
                  {
                    if ( !BetterList_object___Contains(
                            (BetterList_T__o *)Instance,
                            v47,
                            (const MethodInfo_304F058 *)Method_BetterList_string__Contains__) )
                    {
                      v48 = BattleResultEventDamageItemComponent_TypeInfo;
                      if ( !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
                        v48 = BattleResultEventDamageItemComponent_TypeInfo;
                      }
                      v47 = (Il2CppObject *)v48->static_fields->DAMAGE_POINT_REWARD_SPRITE_NAME;
                    }
                    Instance = (System_String_o *)this->fields.eventPointAtSprite;
                    if ( Instance )
                    {
                      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)v47, 0LL);
                      if ( v39 )
                      {
                        EventRewardEntity__GetInfo(v39, &nameText, &countText, 0LL);
                        atLabel = this->fields.atLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v50 = LocalizationManager__Get((System_String_o *)StringLiteral_2923/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
                        v58 = v39->fields.point - TotalDamagePoint;
                        v51 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v58);
                        Instance = System_String__Format(v50, v51, 0LL);
                        if ( atLabel )
                        {
                          UILabel__set_text(atLabel, Instance, 0LL);
                          isQp = EventRewardEntity__isQp(v39, 0LL);
                          nextItemLabel = this->fields.nextItemLabel;
                          v54 = isQp;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v55 = LocalizationManager__Get((System_String_o *)StringLiteral_2922/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, 0LL);
                          v56 = (Il2CppObject *)(v54 ? StringLiteral_1/*""*/ : nameText);
                          Instance = System_String__Format_61389768(v55, v56, (Il2CppObject *)countText, 0LL);
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
                        v57 = this->fields.atLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2921/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
                        if ( v57 )
                        {
                          UILabel__set_text(v57, Instance, 0LL);
                          nextItemLabel = this->fields.nextItemLabel;
                          Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2919/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
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
    sub_1B64324(Instance);
  }
}