void __fastcall BattleResultEventDamageItemComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v18; // x1
  struct BattleResultEventDamageItemComponent_StaticFields *v19; // x0
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct BattleResultEventDamageItemComponent_StaticFields *v27; // x0
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_42E88D5 & 1) == 0 )
  {
    sub_B5D5C4(&BattleResultEventDamageItemComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_19927/*"img_txt_dpreward"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_2545/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_POINT"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_19677/*"img_bg_dp"*/, v14, v15, v16);
    byte_42E88D5 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BattleResultEventDamageItemComponent_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_2545/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_POINT"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2545/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_POINT"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = BattleResultEventDamageItemComponent_TypeInfo->static_fields;
  v20 = (System_Int32_array **)StringLiteral_19927/*"img_txt_dpreward"*/;
  v19->DAMAGE_POINT_REWARD_TITLE_NAME = (struct System_String_o *)StringLiteral_19927/*"img_txt_dpreward"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v19->DAMAGE_POINT_REWARD_TITLE_NAME, v20, v21, v22, v23, v24, v25, v26);
  v27 = BattleResultEventDamageItemComponent_TypeInfo->static_fields;
  v28 = (System_Int32_array **)StringLiteral_19677/*"img_bg_dp"*/;
  v27->DAMAGE_POINT_REWARD_SPRITE_NAME = (struct System_String_o *)StringLiteral_19677/*"img_bg_dp"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v27->DAMAGE_POINT_REWARD_SPRITE_NAME, v28, v29, v30, v31, v32, v33, v34);
}


void __fastcall BattleResultEventDamageItemComponent___ctor(
        BattleResultEventDamageItemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E88D4 & 1) == 0 )
  {
    sub_B5D5C4(&BattleResultEventItemComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E88D4 = 1;
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleResultEventDamageItemComponent_c *v8; // x0
  System_String_o *DAMAGE_POINT_REWARD_TITLE_NAME; // x20
  System_String_o *v10; // x0
  UIAtlas_o *mAtlas; // x0
  __int64 v12; // x1
  struct UISprite_o *titleSp; // x8
  UILabel_o *v14; // x20
  BattleResultEventDamageItemComponent_c *v15; // x0

  if ( (byte_42E88D3 & 1) == 0 )
  {
    sub_B5D5C4(&BattleResultEventDamageItemComponent_TypeInfo, currentGroup, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BetterList_string__Contains__, v5, v6, v7);
    byte_42E88D3 = 1;
  }
  v8 = BattleResultEventDamageItemComponent_TypeInfo;
  if ( (BYTE3(BattleResultEventDamageItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
    v8 = BattleResultEventDamageItemComponent_TypeInfo;
  }
  DAMAGE_POINT_REWARD_TITLE_NAME = v8->static_fields->DAMAGE_POINT_REWARD_TITLE_NAME;
  v10 = System_Int32__ToString((int)this + 160, 0LL);
  mAtlas = (UIAtlas_o *)System_String__Concat_44577788(DAMAGE_POINT_REWARD_TITLE_NAME, v10, 0LL);
  titleSp = this->fields.titleSp;
  if ( !titleSp )
    goto LABEL_17;
  v14 = (UILabel_o *)mAtlas;
  mAtlas = titleSp->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_17;
  mAtlas = (UIAtlas_o *)UIAtlas__GetListOfSprites(mAtlas, 0LL);
  if ( !mAtlas )
    goto LABEL_17;
  if ( !BetterList_UILabel___Contains(
          (BetterList_UILabel__o *)mAtlas,
          v14,
          (const MethodInfo_2BA4698 *)Method_BetterList_string__Contains__) )
  {
    v15 = BattleResultEventDamageItemComponent_TypeInfo;
    if ( (BYTE3(BattleResultEventDamageItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
      v15 = BattleResultEventDamageItemComponent_TypeInfo;
    }
    v14 = (UILabel_o *)v15->static_fields->DAMAGE_POINT_REWARD_TITLE_NAME;
  }
  mAtlas = (UIAtlas_o *)this->fields.titleSp;
  if ( !mAtlas
    || (UISprite__set_spriteName((UISprite_o *)mAtlas, (System_String_o *)v14, 0LL),
        (mAtlas = (UIAtlas_o *)this->fields.titleSp) == 0LL) )
  {
LABEL_17:
    sub_B5D69C(mAtlas, v12);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  BattleResultEventDamageItemComponent_c *v54; // x0
  System_String_o *DAMAGE_POINT_REWARD_AT_LOCALE_KEY; // x22
  System_String_o *v56; // x0
  System_String_o *v57; // x22
  BattleResultEventDamageItemComponent_c *v58; // x0
  UILabel_o *titleAtLabel; // x23
  System_String_o *Instance; // x0
  __int64 v61; // x1
  UILabel_o *titleNextItemLabel; // x22
  const MethodInfo *v63; // x2
  const MethodInfo *v64; // x2
  struct UserEventRaidMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  UserEventRaidMaster_o *usrEvent; // x0
  int64_t TotalDamagePoint; // x21
  EventRewardEntity_o *NextEventRewardEntity; // x0
  UnityEngine_Object_o *eventIconSprite; // x23
  EventRewardEntity_o *v76; // x22
  int32_t RaidEventImageId; // w0
  UISprite_o *v78; // x24
  int32_t v79; // w23
  BattleResultEventDamageItemComponent_c *v80; // x0
  System_String_o *DAMAGE_POINT_REWARD_SPRITE_NAME; // x23
  System_String_o *v82; // x0
  struct UISprite_o *eventPointAtSprite; // x8
  UILabel_o *v84; // x20
  BattleResultEventDamageItemComponent_c *v85; // x0
  UILabel_o *atLabel; // x20
  System_String_o *v87; // x23
  Il2CppObject *v88; // x0
  bool isQp; // w0
  UILabel_o *nextItemLabel; // x19
  System_String_o *v91; // x0
  Il2CppObject *v92; // x2
  Il2CppObject *v93; // x1
  UILabel_o *v94; // x20
  int64_t v95; // [xsp+0h] [xbp-60h] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *nameText; // [xsp+10h] [xbp-50h] BYREF
  int32_t eventIda; // [xsp+1Ch] [xbp-44h] BYREF

  eventIda = eventId;
  if ( (byte_42E88D2 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)drop, eventId, resultBoostItemRewardInfos);
    sub_B5D5C4(&BattleResultEventDamageItemComponent_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_BetterList_string__Contains__, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRewardMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventRaidMaster___, v21, v22, v23);
    sub_B5D5C4(&long_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_2544/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_ITEM"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_2531/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_2529/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_2530/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_2527/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_1/*""*/, v51, v52, v53);
    byte_42E88D2 = 1;
  }
  countText = 0LL;
  nameText = 0LL;
  if ( !drop )
    this->fields.currentGroupIndex = -1;
  this->fields.currentEventId = eventId;
  if ( eventId >= 1 )
  {
    v54 = BattleResultEventDamageItemComponent_TypeInfo;
    if ( (BYTE3(BattleResultEventDamageItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
      v54 = BattleResultEventDamageItemComponent_TypeInfo;
    }
    DAMAGE_POINT_REWARD_AT_LOCALE_KEY = v54->static_fields->DAMAGE_POINT_REWARD_AT_LOCALE_KEY;
    v56 = System_Int32__ToString((int32_t)&eventIda, 0LL);
    v57 = System_String__Concat_44577788(DAMAGE_POINT_REWARD_AT_LOCALE_KEY, v56, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !LocalizationManager__ContainsKey(v57, 0LL) )
    {
      v58 = BattleResultEventDamageItemComponent_TypeInfo;
      if ( (BYTE3(BattleResultEventDamageItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
        v58 = BattleResultEventDamageItemComponent_TypeInfo;
      }
      v57 = v58->static_fields->DAMAGE_POINT_REWARD_AT_LOCALE_KEY;
    }
    titleAtLabel = this->fields.titleAtLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = LocalizationManager__Get(v57, 0LL);
    if ( titleAtLabel )
    {
      UILabel__set_text(titleAtLabel, Instance, 0LL);
      titleNextItemLabel = this->fields.titleNextItemLabel;
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2544/*"BATTLE_RESULT_EVENTDAMAGEITEM_AT_ITEM"*/, 0LL);
      if ( titleNextItemLabel )
      {
        UILabel__set_text(titleNextItemLabel, Instance, 0LL);
        BattleResultEventItemComponent__createDropInfo((BattleResultEventItemComponent_o *)this, drop, v63);
        BattleResultEventItemComponent__SetItemWindow_25221252((BattleResultEventItemComponent_o *)this, drop, v64);
        Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_WarQuestSelectionMaster = (struct UserEventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)Instance,
                                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
          this->fields.usrEvent = MasterData_WarQuestSelectionMaster;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.usrEvent,
            (System_Int32_array **)MasterData_WarQuestSelectionMaster,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71);
          usrEvent = this->fields.usrEvent;
          if ( !usrEvent )
            return;
          TotalDamagePoint = UserEventRaidMaster__getTotalDamagePoint(usrEvent, eventIda, 0LL);
          Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRewardMaster___);
            if ( Instance )
            {
              NextEventRewardEntity = EventRewardMaster__GetNextEventRewardEntity(
                                        (EventRewardMaster_o *)Instance,
                                        eventIda,
                                        TotalDamagePoint,
                                        0LL);
              eventIconSprite = (UnityEngine_Object_o *)this->fields.eventIconSprite;
              v76 = NextEventRewardEntity;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(eventIconSprite, 0LL, 0LL) )
              {
                Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Instance )
                  goto LABEL_63;
                Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
                if ( !Instance )
                  goto LABEL_63;
                RaidEventImageId = EventMaster__GetRaidEventImageId((EventMaster_o *)Instance, eventIda, 0LL);
                v78 = this->fields.eventIconSprite;
                v79 = RaidEventImageId;
                if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AtlasManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                }
                AtlasManager__SetItem(v78, v79, 0LL);
              }
              v80 = BattleResultEventDamageItemComponent_TypeInfo;
              if ( (BYTE3(BattleResultEventDamageItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
                v80 = BattleResultEventDamageItemComponent_TypeInfo;
              }
              DAMAGE_POINT_REWARD_SPRITE_NAME = v80->static_fields->DAMAGE_POINT_REWARD_SPRITE_NAME;
              v82 = System_Int32__ToString((int)this + 160, 0LL);
              Instance = System_String__Concat_44577788(DAMAGE_POINT_REWARD_SPRITE_NAME, v82, 0LL);
              eventPointAtSprite = this->fields.eventPointAtSprite;
              if ( eventPointAtSprite )
              {
                v84 = (UILabel_o *)Instance;
                Instance = (System_String_o *)eventPointAtSprite->fields.mAtlas;
                if ( Instance )
                {
                  Instance = (System_String_o *)UIAtlas__GetListOfSprites((UIAtlas_o *)Instance, 0LL);
                  if ( Instance )
                  {
                    if ( !BetterList_UILabel___Contains(
                            (BetterList_UILabel__o *)Instance,
                            v84,
                            (const MethodInfo_2BA4698 *)Method_BetterList_string__Contains__) )
                    {
                      v85 = BattleResultEventDamageItemComponent_TypeInfo;
                      if ( (BYTE3(BattleResultEventDamageItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !BattleResultEventDamageItemComponent_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleResultEventDamageItemComponent_TypeInfo);
                        v85 = BattleResultEventDamageItemComponent_TypeInfo;
                      }
                      v84 = (UILabel_o *)v85->static_fields->DAMAGE_POINT_REWARD_SPRITE_NAME;
                    }
                    Instance = (System_String_o *)this->fields.eventPointAtSprite;
                    if ( Instance )
                    {
                      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)v84, 0LL);
                      if ( v76 )
                      {
                        EventRewardEntity__GetInfo(v76, &nameText, &countText, 0LL);
                        atLabel = this->fields.atLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v87 = LocalizationManager__Get((System_String_o *)StringLiteral_2531/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
                        v95 = v76->fields.point - TotalDamagePoint;
                        v88 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v95);
                        Instance = System_String__Format(v87, v88, 0LL);
                        if ( atLabel )
                        {
                          UILabel__set_text(atLabel, Instance, 0LL);
                          isQp = EventRewardEntity__isQp(v76, 0LL);
                          nextItemLabel = this->fields.nextItemLabel;
                          if ( isQp )
                          {
                            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            v91 = LocalizationManager__Get((System_String_o *)StringLiteral_2530/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, 0LL);
                            v92 = (Il2CppObject *)countText;
                            v93 = (Il2CppObject *)StringLiteral_1/*""*/;
                          }
                          else
                          {
                            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            v91 = LocalizationManager__Get((System_String_o *)StringLiteral_2530/*"BATTLE_RESULEVENTTITEM_NEXT_ITEM"*/, 0LL);
                            v92 = (Il2CppObject *)countText;
                            v93 = (Il2CppObject *)nameText;
                          }
                          Instance = System_String__Format_44573324(v91, v93, v92, 0LL);
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
                        v94 = this->fields.atLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2529/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
                        if ( v94 )
                        {
                          UILabel__set_text(v94, Instance, 0LL);
                          nextItemLabel = this->fields.nextItemLabel;
                          Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2527/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
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
    sub_B5D69C(Instance, v61);
  }
}