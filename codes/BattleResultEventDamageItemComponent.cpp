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

  if ( (byte_40FA372 & 1) == 0 )
  {
    sub_B16FFC(&BattleResultEventDamageItemComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_19604, v8);
    sub_B16FFC(&StringLiteral_2482, v9);
    sub_B16FFC(&StringLiteral_19358, v10);
    byte_40FA372 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BattleResultEventDamageItemComponent_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_2482;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2482;
  sub_B16F98(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = BattleResultEventDamageItemComponent_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_19604;
  v13->DAMAGE_POINT_REWARD_TITLE_NAME = (struct System_String_o *)StringLiteral_19604;
  sub_B16F98((BattleServantConfConponent_o *)&v13->DAMAGE_POINT_REWARD_TITLE_NAME, v14, v15, v16, v17, v18, v19, v20);
  v21 = BattleResultEventDamageItemComponent_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_19358;
  v21->DAMAGE_POINT_REWARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_19358;
  sub_B16F98((BattleServantConfConponent_o *)&v21->DAMAGE_POINT_REWARD_SPRITE_NAME, v22, v23, v24, v25, v26, v27, v28);
}


void __fastcall BattleResultEventDamageItemComponent___ctor(
        BattleResultEventDamageItemComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FA371 & 1) == 0 )
  {
    sub_B16FFC(&BattleResultEventItemComponent_TypeInfo, method);
    byte_40FA371 = 1;
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
  System_String_o *v8; // x0
  struct UISprite_o *titleSp; // x8
  System_String_o *v10; // x20
  UIAtlas_o *mAtlas; // x0
  BetterList_string__o *ListOfSprites; // x0
  BattleResultEventDamageItemComponent_c *v13; // x0
  UISprite_o *v14; // x0
  struct UISprite_o *v15; // x0

  if ( (byte_40FA370 & 1) == 0 )
  {
    sub_B16FFC(&BattleResultEventDamageItemComponent_TypeInfo, *(_QWORD *)&currentGroup);
    sub_B16FFC(&Method_BetterList_string__Contains__, v4);
    byte_40FA370 = 1;
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
  v8 = System_String__Concat_43743732(DAMAGE_POINT_REWARD_TITLE_NAME, v7, 0LL);
  titleSp = this->fields.titleSp;
  if ( !titleSp )
    goto LABEL_17;
  v10 = v8;
  mAtlas = titleSp->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_17;
  ListOfSprites = UIAtlas__GetListOfSprites(mAtlas, 0LL);
  if ( !ListOfSprites )
    goto LABEL_17;
  if ( !BetterList_string___Contains(
          ListOfSprites,
          v10,
          (const MethodInfo_2D367D8 *)Method_BetterList_string__Contains__) )
  {
    v13 = BattleResultEventDamageItemComponent_TypeInfo;
    if ( (BYTE3(BattleResultEventDamageItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
      v13 = BattleResultEventDamageItemComponent_TypeInfo;
    }
    v10 = v13->static_fields->DAMAGE_POINT_REWARD_TITLE_NAME;
  }
  v14 = this->fields.titleSp;
  if ( !v14 || (UISprite__set_spriteName(v14, v10, 0LL), (v15 = this->fields.titleSp) == 0LL) )
LABEL_17:
    sub_B170D4();
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v15->klass->vtable._33_MakePixelPerfect.method)(
    v15,
    v15->klass->vtable._34_get_minWidth.methodPtr);
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
  System_String_o *v30; // x0
  UILabel_o *titleNextItemLabel; // x22
  System_String_o *v32; // x0
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x2
  WebViewManager_o *Instance; // x0
  struct UserEventRaidMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  UserEventRaidMaster_o *usrEvent; // x0
  int64_t TotalDamagePoint; // x21
  WebViewManager_o *v45; // x0
  EventRewardMaster_o *v46; // x0
  EventRewardEntity_o *NextEventRewardEntity; // x0
  UnityEngine_Object_o *eventIconSprite; // x23
  EventRewardEntity_o *v49; // x22
  WebViewManager_o *v50; // x0
  EventMaster_o *v51; // x0
  int32_t RaidEventImageId; // w0
  UISprite_o *v53; // x24
  int32_t v54; // w23
  BattleResultEventDamageItemComponent_c *v55; // x0
  System_String_o *DAMAGE_POINT_REWARD_SPRITE_NAME; // x23
  System_String_o *v57; // x0
  System_String_o *v58; // x0
  struct UISprite_o *eventPointAtSprite; // x8
  System_String_o *v60; // x20
  UIAtlas_o *mAtlas; // x0
  BetterList_string__o *ListOfSprites; // x0
  BattleResultEventDamageItemComponent_c *v63; // x0
  UISprite_o *v64; // x0
  UILabel_o *atLabel; // x20
  System_String_o *v66; // x23
  Il2CppObject *v67; // x0
  System_String_o *v68; // x0
  bool isQp; // w0
  UILabel_o *nextItemLabel; // x19
  System_String_o *v71; // x0
  Il2CppObject *v72; // x2
  Il2CppObject *v73; // x1
  UILabel_o *v74; // x20
  System_String_o *v75; // x0
  System_String_o *v76; // x0
  int64_t v77; // [xsp+0h] [xbp-60h] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *nameText; // [xsp+10h] [xbp-50h] BYREF
  int32_t eventIda; // [xsp+1Ch] [xbp-44h] BYREF

  eventIda = eventId;
  if ( (byte_40FA36F & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, drop);
    sub_B16FFC(&BattleResultEventDamageItemComponent_TypeInfo, v9);
    sub_B16FFC(&Method_BetterList_string__Contains__, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRewardMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventRaidMaster___, v13);
    sub_B16FFC(&long_TypeInfo, v14);
    sub_B16FFC(&LocalizationManager_TypeInfo, v15);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&StringLiteral_2481, v18);
    sub_B16FFC(&StringLiteral_2468, v19);
    sub_B16FFC(&StringLiteral_2466, v20);
    sub_B16FFC(&StringLiteral_2467, v21);
    sub_B16FFC(&StringLiteral_2464, v22);
    sub_B16FFC(&StringLiteral_1, v23);
    byte_40FA36F = 1;
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
    v27 = System_String__Concat_43743732(DAMAGE_POINT_REWARD_AT_LOCALE_KEY, v26, 0LL);
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
    v30 = LocalizationManager__Get(v27, 0LL);
    if ( titleAtLabel )
    {
      UILabel__set_text(titleAtLabel, v30, 0LL);
      titleNextItemLabel = this->fields.titleNextItemLabel;
      v32 = LocalizationManager__Get((System_String_o *)StringLiteral_2481, 0LL);
      if ( titleNextItemLabel )
      {
        UILabel__set_text(titleNextItemLabel, v32, 0LL);
        BattleResultEventItemComponent__createDropInfo((BattleResultEventItemComponent_o *)this, drop, v33);
        BattleResultEventItemComponent__SetItemWindow_25634268((BattleResultEventItemComponent_o *)this, drop, v34);
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_WarQuestSelectionMaster = (struct UserEventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)Instance,
                                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
          this->fields.usrEvent = MasterData_WarQuestSelectionMaster;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.usrEvent,
            (System_Int32_array **)MasterData_WarQuestSelectionMaster,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42);
          usrEvent = this->fields.usrEvent;
          if ( !usrEvent )
            return;
          TotalDamagePoint = UserEventRaidMaster__getTotalDamagePoint(usrEvent, eventIda, 0LL);
          v45 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( v45 )
          {
            v46 = (EventRewardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)v45,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRewardMaster___);
            if ( v46 )
            {
              NextEventRewardEntity = EventRewardMaster__GetNextEventRewardEntity(v46, eventIda, TotalDamagePoint, 0LL);
              eventIconSprite = (UnityEngine_Object_o *)this->fields.eventIconSprite;
              v49 = NextEventRewardEntity;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(eventIconSprite, 0LL, 0LL) )
              {
                v50 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v50 )
                  goto LABEL_63;
                v51 = (EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v50,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
                if ( !v51 )
                  goto LABEL_63;
                RaidEventImageId = EventMaster__GetRaidEventImageId(v51, eventIda, 0LL);
                v53 = this->fields.eventIconSprite;
                v54 = RaidEventImageId;
                if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AtlasManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                }
                AtlasManager__SetItem(v53, v54, 0LL);
              }
              v55 = BattleResultEventDamageItemComponent_TypeInfo;
              if ( (BYTE3(BattleResultEventDamageItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
                v55 = BattleResultEventDamageItemComponent_TypeInfo;
              }
              DAMAGE_POINT_REWARD_SPRITE_NAME = v55->static_fields->DAMAGE_POINT_REWARD_SPRITE_NAME;
              v57 = System_Int32__ToString((int)this + 160, 0LL);
              v58 = System_String__Concat_43743732(DAMAGE_POINT_REWARD_SPRITE_NAME, v57, 0LL);
              eventPointAtSprite = this->fields.eventPointAtSprite;
              if ( eventPointAtSprite )
              {
                v60 = v58;
                mAtlas = eventPointAtSprite->fields.mAtlas;
                if ( mAtlas )
                {
                  ListOfSprites = UIAtlas__GetListOfSprites(mAtlas, 0LL);
                  if ( ListOfSprites )
                  {
                    if ( !BetterList_string___Contains(
                            ListOfSprites,
                            v60,
                            (const MethodInfo_2D367D8 *)Method_BetterList_string__Contains__) )
                    {
                      v63 = BattleResultEventDamageItemComponent_TypeInfo;
                      if ( (BYTE3(BattleResultEventDamageItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
                        v63 = BattleResultEventDamageItemComponent_TypeInfo;
                      }
                      v60 = v63->static_fields->DAMAGE_POINT_REWARD_SPRITE_NAME;
                    }
                    v64 = this->fields.eventPointAtSprite;
                    if ( v64 )
                    {
                      UISprite__set_spriteName(v64, v60, 0LL);
                      if ( v49 )
                      {
                        EventRewardEntity__GetInfo(v49, &nameText, &countText, 0LL);
                        atLabel = this->fields.atLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v66 = LocalizationManager__Get((System_String_o *)StringLiteral_2468, 0LL);
                        v77 = v49->fields.point - TotalDamagePoint;
                        v67 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v77);
                        v68 = System_String__Format(v66, v67, 0LL);
                        if ( atLabel )
                        {
                          UILabel__set_text(atLabel, v68, 0LL);
                          isQp = EventRewardEntity__isQp(v49, 0LL);
                          nextItemLabel = this->fields.nextItemLabel;
                          if ( isQp )
                          {
                            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            v71 = LocalizationManager__Get((System_String_o *)StringLiteral_2467, 0LL);
                            v72 = (Il2CppObject *)countText;
                            v73 = (Il2CppObject *)StringLiteral_1;
                          }
                          else
                          {
                            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            v71 = LocalizationManager__Get((System_String_o *)StringLiteral_2467, 0LL);
                            v72 = (Il2CppObject *)countText;
                            v73 = (Il2CppObject *)nameText;
                          }
                          v76 = System_String__Format_43739268(v71, v73, v72, 0LL);
                          if ( nextItemLabel )
                          {
LABEL_69:
                            UILabel__set_text(nextItemLabel, v76, 0LL);
                            return;
                          }
                        }
                      }
                      else
                      {
                        v74 = this->fields.atLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v75 = LocalizationManager__Get((System_String_o *)StringLiteral_2466, 0LL);
                        if ( v74 )
                        {
                          UILabel__set_text(v74, v75, 0LL);
                          nextItemLabel = this->fields.nextItemLabel;
                          v76 = LocalizationManager__Get((System_String_o *)StringLiteral_2464, 0LL);
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
    sub_B170D4();
  }
}