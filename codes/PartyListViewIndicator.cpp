void __fastcall PartyListViewIndicator___ctor(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct System_Int32_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  float v11; // s4
  float v12; // s5
  float v13; // s6
  float v14; // s4
  float v15; // s5
  float v16; // s6
  struct UnityEngine_Color_o v17; // [xsp+0h] [xbp-30h] BYREF
  struct UnityEngine_Color_o v18; // [xsp+10h] [xbp-20h] BYREF
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438F003 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&int___TypeInfo);
    byte_438F003 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct System_Int32_array *)sub_B775DC(int___TypeInfo, (unsigned int)(v3->static_fields->DeckMax + 1));
  this->fields.useLimitEquip = v4;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.useLimitEquip,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v19.fields.r = 1.0;
  v19.fields.g = 1.0;
  v19.fields.b = 1.0;
  v18 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_41410832(v19, v11, v12, v13, (const MethodInfo *)&v18);
  this->fields.ICON_NORMAL_COLOR = v18;
  v20.fields.r = 0.4;
  v17 = (struct UnityEngine_Color_o)0LL;
  v20.fields.g = 0.4;
  v20.fields.b = 0.4;
  UnityEngine_Color___ctor_41410832(v20, v14, v15, v16, (const MethodInfo *)&v17);
  this->fields.ICON_MASK_COLOR = v17;
  this->fields.isScrollEnabled = 1;
  ListViewIndicator___ctor((ListViewIndicator_o *)this, 0LL);
}


void __fastcall PartyListViewIndicator__ClearEventLimitEquip(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *limitMasterFormationButton; // x0

  limitMasterFormationButton = (UnityEngine_Component_o *)this->fields.limitMasterFormationButton;
  if ( !limitMasterFormationButton )
    goto LABEL_13;
  limitMasterFormationButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                            limitMasterFormationButton,
                                                            0LL);
  if ( !limitMasterFormationButton )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)limitMasterFormationButton, 0, 0LL);
  limitMasterFormationButton = (UnityEngine_Component_o *)this->fields.limitEquipIcon;
  if ( !limitMasterFormationButton )
    goto LABEL_13;
  ItemIconComponent__Clear((ItemIconComponent_o *)limitMasterFormationButton, 0LL);
  limitMasterFormationButton = (UnityEngine_Component_o *)this->fields.limitEquipFixSprite;
  if ( !limitMasterFormationButton )
    goto LABEL_13;
  UISprite__set_spriteName((UISprite_o *)limitMasterFormationButton, 0LL, 0LL);
  limitMasterFormationButton = (UnityEngine_Component_o *)this->fields.masterEquipBackSprite;
  if ( !limitMasterFormationButton )
    goto LABEL_13;
  UISprite__set_spriteName((UISprite_o *)limitMasterFormationButton, 0LL, 0LL);
  limitMasterFormationButton = (UnityEngine_Component_o *)this->fields.masterEquipFrameSprite;
  if ( !limitMasterFormationButton )
    goto LABEL_13;
  UISprite__set_spriteName((UISprite_o *)limitMasterFormationButton, 0LL, 0LL);
  limitMasterFormationButton = (UnityEngine_Component_o *)this->fields.masterEquipButton;
  if ( !limitMasterFormationButton )
    goto LABEL_13;
  if ( (((__int64 (__fastcall *)(UnityEngine_Component_o *, const char *))limitMasterFormationButton->klass[1]._1.gc_desc)(
          limitMasterFormationButton,
          limitMasterFormationButton->klass[1]._1.name) & 1) != 0 )
  {
    limitMasterFormationButton = (UnityEngine_Component_o *)this->fields.masterEquipIcon1;
    if ( limitMasterFormationButton )
    {
      ItemIconComponent__SetColor(
        (ItemIconComponent_o *)limitMasterFormationButton,
        this->fields.ICON_NORMAL_COLOR,
        0LL);
      limitMasterFormationButton = (UnityEngine_Component_o *)this->fields.masterEquipIcon2;
      if ( limitMasterFormationButton )
      {
        ItemIconComponent__SetColor(
          (ItemIconComponent_o *)limitMasterFormationButton,
          this->fields.ICON_NORMAL_COLOR,
          0LL);
        return;
      }
    }
LABEL_13:
    sub_B7769C(limitMasterFormationButton, method);
  }
}


void __fastcall PartyListViewIndicator__DispFriendPointUpBonus(
        PartyListViewIndicator_o *this,
        int32_t bonusVal,
        const MethodInfo *method)
{
  UnityEngine_Object_o *friendPointUpBonusSprite; // x21
  UnityEngine_Object_o *friendPointUpBonusLabel; // x21
  __int64 v7; // x1
  UILabel_o *v8; // x20
  UnityEngine_Component_o *gameObject; // x0
  bool v10; // w1
  unsigned int v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438F002 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438F002 = 1;
  }
  v11 = 0;
  friendPointUpBonusSprite = (UnityEngine_Object_o *)this->fields.friendPointUpBonusSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(friendPointUpBonusSprite, 0LL, 0LL) )
  {
    friendPointUpBonusLabel = (UnityEngine_Object_o *)this->fields.friendPointUpBonusLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(friendPointUpBonusLabel, 0LL, 0LL) )
    {
      if ( bonusVal < 1 )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.friendPointUpBonusSprite;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( gameObject )
          {
            v10 = 0;
            goto LABEL_19;
          }
        }
      }
      else
      {
        v11 = bonusVal / 0x3E8u;
        v8 = this->fields.friendPointUpBonusLabel;
        gameObject = (UnityEngine_Component_o *)System_Int32__ToString((int32_t)&v11, 0LL);
        if ( v8 )
        {
          UILabel__set_text(v8, (System_String_o *)gameObject, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.friendPointUpBonusSprite;
          if ( gameObject )
          {
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
            if ( gameObject )
            {
              v10 = 1;
LABEL_19:
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v10, 0LL);
              return;
            }
          }
        }
      }
      sub_B7769C(gameObject, v7);
    }
  }
}


void __fastcall PartyListViewIndicator__DrawEventLimitEquip(
        PartyListViewIndicator_o *this,
        PartyListViewItem_o *partyItem,
        bool isChng,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  __int64 Instance; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v10; // x8
  int32_t index; // w24
  char v12; // w21
  UISprite_o *masterEquipBackSprite; // x22
  System_String_o *v14; // x22
  __int64 v15; // x22
  unsigned __int64 v16; // x25
  struct System_Int32_array *useLimitEquip; // x28
  UISprite_o *limitEquipFixSprite; // x19
  struct System_Int32_array *v19; // x8
  struct System_Int32_array *v20; // x8
  int32_t v21; // w21
  WebViewObject_o *Component_WebViewObject; // x20
  __int64 v23; // x0
  EventEquipSkillReleaseEntity_o *outEnt; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_438EFFB & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_B775C4(&Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_18870/*"event_emblem_frame"*/);
    sub_B775C4(&StringLiteral_19724/*"icon_equip_fixation"*/);
    sub_B775C4(&StringLiteral_8550/*"LIMIT_EQUIP_SETTING"*/);
    sub_B775C4(&StringLiteral_17355/*"btn_skill_off"*/);
    sub_B775C4(&StringLiteral_18869/*"event_emblem_dim"*/);
    sub_B775C4(&StringLiteral_17356/*"btn_skill_on"*/);
    byte_438EFFB = 1;
  }
  outEnt = 0LL;
  if ( !PartyListViewIndicator__IsEventOnlyEquip(this, (const MethodInfo *)partyItem) )
    goto LABEL_50;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !Instance )
    goto LABEL_75;
  if ( !EventEquipSkillReleaseMaster__tryGetOpenEventEquipSkillReleaseEntity(
          (EventEquipSkillReleaseMaster_o *)Instance,
          questRestrictionInfo->fields.eventId,
          &outEnt,
          0LL) )
  {
LABEL_50:
    PartyListViewIndicator__ClearEventLimitEquip(this, v7);
    return;
  }
  Instance = (__int64)outEnt;
  if ( !outEnt )
    goto LABEL_75;
  Instance = EventEquipSkillReleaseEntity__isForceOverwrite(outEnt, 0LL);
  if ( !partyItem )
    goto LABEL_75;
  v10 = partyItem->fields.questRestrictionInfo;
  index = partyItem->fields.index;
  v12 = Instance;
  if ( v10 )
    LOBYTE(v10) = v10->fields.eventDeckNum > 0;
  if ( ((unsigned __int8)v10 & 1) != 0 || (unsigned int)(partyItem->fields.menuKind - 1) <= 6 )
  {
    Instance = (__int64)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (__int64)BalanceConfig_TypeInfo;
    }
    index = *(_DWORD *)(*(_QWORD *)(Instance + 184) + 148LL);
  }
  if ( !outEnt || (Instance = (__int64)this->fields.limitEquipIcon) == 0 )
LABEL_75:
    sub_B7769C(Instance, v7);
  ItemIconComponent__SetEquipItem((ItemIconComponent_o *)Instance, outEnt->fields.overwriteEquipIconId, 0LL);
  masterEquipBackSprite = this->fields.masterEquipBackSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(masterEquipBackSprite, (System_String_o *)StringLiteral_18869/*"event_emblem_dim"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.masterEquipFrameSprite, (System_String_o *)StringLiteral_18870/*"event_emblem_frame"*/, 0LL);
  if ( !this->fields.isChkSave )
  {
    if ( (v12 & 1) == 0 )
    {
      Instance = (__int64)UnityEngine_PlayerPrefs__GetString_36337972((System_String_o *)StringLiteral_8550/*"LIMIT_EQUIP_SETTING"*/, 0LL);
      if ( !Instance )
        goto LABEL_75;
      v14 = (System_String_o *)Instance;
      if ( *(int *)(Instance + 16) >= 1 )
      {
        Instance = sub_B775DC(char___TypeInfo, 1LL);
        if ( !Instance )
          goto LABEL_75;
        if ( !*(_DWORD *)(Instance + 24) )
          goto LABEL_76;
        *(_WORD *)(Instance + 32) = 44;
        Instance = (__int64)System_String__Split(v14, (System_Char_array *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_75;
        v15 = Instance;
        if ( *(int *)(Instance + 24) >= 1 )
        {
          v16 = 0LL;
          do
          {
            Instance = (__int64)BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = (__int64)BalanceConfig_TypeInfo;
            }
            if ( (__int64)v16 > *(int *)(*(_QWORD *)(Instance + 184) + 148LL) )
              break;
            if ( v16 >= *(unsigned int *)(v15 + 24) )
              goto LABEL_76;
            useLimitEquip = this->fields.useLimitEquip;
            Instance = System_Int32__Parse(*(System_String_o **)(v15 + 32 + 8 * v16), 0LL);
            if ( !useLimitEquip )
              goto LABEL_75;
            if ( v16 >= useLimitEquip->max_length )
              goto LABEL_76;
            useLimitEquip->m_Items[++v16] = Instance;
          }
          while ( (__int64)v16 < *(int *)(v15 + 24) );
        }
      }
    }
    this->fields.isChkSave = 1;
  }
  Instance = (__int64)this->fields.limitMasterFormationButton;
  if ( !Instance )
    goto LABEL_75;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_75;
  if ( (v12 & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    if ( isChng )
    {
      v19 = this->fields.useLimitEquip;
      if ( !v19 )
        goto LABEL_75;
      if ( index >= v19->max_length )
        goto LABEL_76;
      v19->m_Items[index + 1] = v19->m_Items[index + 1] == 0;
    }
    v20 = this->fields.useLimitEquip;
    if ( !v20 )
      goto LABEL_75;
    if ( index < v20->max_length )
    {
      Instance = (__int64)this->fields.limitMasterFormationButton;
      if ( Instance )
      {
        v21 = v20->m_Items[index + 1];
        Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)Instance,
                                    (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( v21 )
        {
          if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetEventUI((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_17356/*"btn_skill_on"*/, 0LL);
          Instance = (__int64)this->fields.limitEquipIcon;
          if ( Instance )
          {
            ItemIconComponent__SetColor((ItemIconComponent_o *)Instance, this->fields.ICON_MASK_COLOR, 0LL);
            Instance = (__int64)this->fields.masterEquipIcon1;
            if ( Instance )
            {
              ItemIconComponent__SetColor((ItemIconComponent_o *)Instance, this->fields.ICON_NORMAL_COLOR, 0LL);
              Instance = (__int64)this->fields.masterEquipIcon2;
              if ( Instance )
              {
                ItemIconComponent__SetColor((ItemIconComponent_o *)Instance, this->fields.ICON_NORMAL_COLOR, 0LL);
                Instance = (__int64)this->fields.masterEquipBackSprite;
                if ( Instance )
                {
                  UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
                  return;
                }
              }
            }
          }
        }
        else
        {
          if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetEventUI((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_17355/*"btn_skill_off"*/, 0LL);
          Instance = (__int64)this->fields.limitEquipIcon;
          if ( Instance )
          {
            ItemIconComponent__SetColor((ItemIconComponent_o *)Instance, this->fields.ICON_NORMAL_COLOR, 0LL);
            Instance = (__int64)this->fields.masterEquipIcon1;
            if ( Instance )
            {
              ItemIconComponent__SetColor((ItemIconComponent_o *)Instance, this->fields.ICON_MASK_COLOR, 0LL);
              Instance = (__int64)this->fields.masterEquipIcon2;
              if ( Instance )
              {
                ItemIconComponent__SetColor((ItemIconComponent_o *)Instance, this->fields.ICON_MASK_COLOR, 0LL);
                return;
              }
            }
          }
        }
      }
      goto LABEL_75;
    }
LABEL_76:
    v23 = sub_B776C8(Instance);
    sub_B77668(v23, 0LL);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.masterEquipIcon1;
  if ( !Instance )
    goto LABEL_75;
  ItemIconComponent__SetColor((ItemIconComponent_o *)Instance, this->fields.ICON_MASK_COLOR, 0LL);
  Instance = (__int64)this->fields.masterEquipIcon2;
  if ( !Instance )
    goto LABEL_75;
  ItemIconComponent__SetColor((ItemIconComponent_o *)Instance, this->fields.ICON_MASK_COLOR, 0LL);
  limitEquipFixSprite = this->fields.limitEquipFixSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(limitEquipFixSprite, (System_String_o *)StringLiteral_19724/*"icon_equip_fixation"*/, 0LL);
}


void __fastcall PartyListViewIndicator__DrawPartyInfo(
        PartyListViewIndicator_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *soloBaseObject; // x0
  UISprite_o *v6; // x21
  bool v7; // w1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestRestrictionInfo_o *v23; // x0
  int32_t servantNumMax; // w1
  UISprite_o *v25; // x21
  struct QuestRestrictionInfo_o *v26; // x8
  BalanceConfig_c *v27; // x0
  const MethodInfo *v28; // x2
  struct QuestRestrictionInfo_o *v29; // x8
  struct QuestRestrictionInfo_o *v30; // x8
  int32_t maxCost; // w21
  QuestRestrictionInfo_o *v32; // x0
  int32_t v33; // w22
  System_String_o *v34; // x21
  UILabel_o *maxCostLabel; // x22
  System_String_o *v36; // x0
  UILabel_o *splitCostLabel; // x22
  System_String_o *v38; // x0
  int32_t cost; // w8
  UILabel_o *selectCostLabel; // x22
  System_String_o *v41; // x0
  System_String_o *v42; // x0
  UserServantEntity_o *Entity; // x0
  const MethodInfo *v44; // x3
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  __int64 v47; // x9
  int32_t v48; // w21
  ServantEntity_array *SvtEntityList; // x22
  const MethodInfo *v50; // x1
  System_String_array *SvtNameList; // x23
  const MethodInfo *v52; // x1
  System_Boolean_array *IsFollowerList; // x24
  EventPartyMargeUpValInfo_o *v54; // x25
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  const MethodInfo *v61; // x3
  EventUpValInfo_array *v62; // x8
  unsigned __int64 v63; // x20
  unsigned __int64 max_length; // x9
  EventPartyMargeUpValInfo_o *eventMargeUpValInfo; // x22
  UILabel_o *selectNameLabel; // x21
  System_String_o *v67; // x0
  __int64 v68; // x0
  EventUpValInfo_array *v69; // [xsp+0h] [xbp-70h] BYREF
  int32_t genderImageId; // [xsp+Ch] [xbp-64h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *equipName; // [xsp+18h] [xbp-58h] BYREF
  int32_t maxLv; // [xsp+24h] [xbp-4Ch] BYREF
  int32_t condUsrLv[2]; // [xsp+28h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+38h] [xbp-38h] BYREF
  int32_t v76; // [xsp+3Ch] [xbp-34h] BYREF

  if ( (byte_438EFFA & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_B775C4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_B775C4(&EventPartyMargeUpValInfo_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_10542/*"PARTY_ORGANIZATION_NAME"*/);
    sub_B775C4(&StringLiteral_22656/*"solo_bg"*/);
    sub_B775C4(&StringLiteral_10510/*"PARTY_ORGANIZATION_COST_SPLIT"*/);
    sub_B775C4(&StringLiteral_10508/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/);
    sub_B775C4(&StringLiteral_10509/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/);
    sub_B775C4(&StringLiteral_22685/*"specialparty_bg"*/);
    sub_B775C4(&StringLiteral_10507/*"PARTY_ORGANIZATION_COST_COLOR"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438EFFA = 1;
  }
  v76 = 0;
  eventId = 0;
  *(_QWORD *)condUsrLv = 0LL;
  maxLv = 0;
  detail = 0LL;
  equipName = 0LL;
  genderImageId = 0;
  v69 = 0LL;
  if ( !partyItem )
  {
    soloBaseObject = this->fields.soloBaseObject;
    if ( soloBaseObject )
    {
      UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
      soloBaseObject = this->fields.organizationNumObject;
      if ( soloBaseObject )
      {
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.indexBaseObject;
        if ( soloBaseObject )
        {
          UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
          soloBaseObject = this->fields.selectNameBaseObject;
          if ( soloBaseObject )
          {
            UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
            soloBaseObject = this->fields.costBaseObject;
            if ( soloBaseObject )
            {
              UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
              soloBaseObject = (UnityEngine_GameObject_o *)this->fields.selectNameLabel;
              if ( soloBaseObject )
              {
                UILabel__set_text((UILabel_o *)soloBaseObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                soloBaseObject = (UnityEngine_GameObject_o *)this->fields.maxCostLabel;
                if ( soloBaseObject )
                {
                  UILabel__set_text((UILabel_o *)soloBaseObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.splitCostLabel;
                  if ( soloBaseObject )
                  {
                    UILabel__set_text((UILabel_o *)soloBaseObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                    soloBaseObject = (UnityEngine_GameObject_o *)this->fields.selectCostLabel;
                    if ( soloBaseObject )
                    {
                      UILabel__set_text((UILabel_o *)soloBaseObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                      soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipIcon1;
                      if ( soloBaseObject )
                      {
                        ItemIconComponent__Clear((ItemIconComponent_o *)soloBaseObject, 0LL);
                        soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipIcon2;
                        if ( soloBaseObject )
                        {
                          ItemIconComponent__Clear((ItemIconComponent_o *)soloBaseObject, 0LL);
                          this->fields.questRestrictionInfo = 0LL;
                          sub_B77560(
                            (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
                            0LL,
                            v8,
                            v9,
                            v10,
                            v11,
                            v12,
                            v13);
                          this->fields.eventMargeUpValInfo = 0LL;
                          sub_B77560(
                            (BattleServantConfConponent_o *)&this->fields.eventMargeUpValInfo,
                            0LL,
                            v14,
                            v15,
                            v16,
                            v17,
                            v18,
                            v19);
                          goto LABEL_117;
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
    goto LABEL_116;
  }
  switch ( this->fields.menuKind )
  {
    case 1:
    case 3:
      soloBaseObject = this->fields.soloBaseObject;
      if ( !soloBaseObject )
        goto LABEL_116;
      soloBaseObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     soloBaseObject,
                                                     (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !this->fields.soloBaseObject )
        goto LABEL_116;
      v6 = (UISprite_o *)soloBaseObject;
      UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0LL);
      if ( !v6 )
        goto LABEL_116;
      UISprite__set_spriteName(v6, (System_String_o *)StringLiteral_22656/*"solo_bg"*/, 0LL);
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
        v6,
        v6->klass->vtable._34_get_minWidth.methodPtr);
      soloBaseObject = this->fields.organizationNumObject;
      if ( !soloBaseObject )
        goto LABEL_116;
      UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
      soloBaseObject = this->fields.indexBaseObject;
      if ( !soloBaseObject )
        goto LABEL_116;
      UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
      soloBaseObject = this->fields.selectNameBaseObject;
      if ( !soloBaseObject )
        goto LABEL_116;
      UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
      soloBaseObject = this->fields.costBaseObject;
      if ( !soloBaseObject )
        goto LABEL_116;
      v7 = 0;
      goto LABEL_71;
    case 2:
      soloBaseObject = this->fields.soloBaseObject;
      if ( !soloBaseObject )
        goto LABEL_116;
      soloBaseObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     soloBaseObject,
                                                     (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !this->fields.soloBaseObject )
        goto LABEL_116;
      v25 = (UISprite_o *)soloBaseObject;
      UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0LL);
      if ( !v25 )
        goto LABEL_116;
      UISprite__set_spriteName(v25, (System_String_o *)StringLiteral_22685/*"specialparty_bg"*/, 0LL);
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v25->klass->vtable._33_MakePixelPerfect.method)(
        v25,
        v25->klass->vtable._34_get_minWidth.methodPtr);
      soloBaseObject = this->fields.organizationNumObject;
      if ( !soloBaseObject )
        goto LABEL_116;
      UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
      goto LABEL_66;
    case 4:
    case 5:
      soloBaseObject = this->fields.soloBaseObject;
      if ( !soloBaseObject )
        goto LABEL_116;
      UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
      soloBaseObject = this->fields.organizationNumObject;
      if ( !soloBaseObject )
        goto LABEL_116;
      UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_66;
      goto LABEL_34;
    case 6:
    case 7:
      soloBaseObject = this->fields.soloBaseObject;
      if ( !soloBaseObject )
        goto LABEL_116;
      UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
      soloBaseObject = this->fields.organizationNumObject;
      if ( !soloBaseObject )
        goto LABEL_116;
      UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
      v23 = this->fields.questRestrictionInfo;
      if ( !v23 )
        goto LABEL_66;
      soloBaseObject = (UnityEngine_GameObject_o *)QuestRestrictionInfo__IsServantNum(v23, 0LL);
      if ( ((unsigned __int8)soloBaseObject & 1) != 0 )
      {
        questRestrictionInfo = this->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_116;
LABEL_34:
        servantNumMax = questRestrictionInfo->fields.servantNumMax;
      }
      else
      {
        soloBaseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !soloBaseObject )
          goto LABEL_116;
        soloBaseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)soloBaseObject,
                                                       (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
        v29 = this->fields.questRestrictionInfo;
        if ( !v29 )
          goto LABEL_116;
        if ( !soloBaseObject )
          goto LABEL_116;
        soloBaseObject = (UnityEngine_GameObject_o *)NpcFollowerMaster__GetQuestFollowerList(
                                                       (NpcFollowerMaster_o *)soloBaseObject,
                                                       v29->fields.questId,
                                                       v29->fields.questPhase,
                                                       0LL);
        v30 = this->fields.questRestrictionInfo;
        if ( !v30 || !soloBaseObject )
          goto LABEL_116;
        servantNumMax = v30->fields.myServantNumMax + LODWORD(soloBaseObject[1].klass);
      }
      goto LABEL_65;
    case 9:
      soloBaseObject = this->fields.soloBaseObject;
      if ( !soloBaseObject )
        goto LABEL_116;
      UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
      soloBaseObject = this->fields.organizationNumObject;
      if ( !soloBaseObject )
        goto LABEL_116;
      UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
      soloBaseObject = this->fields.indexBaseObject;
      if ( !soloBaseObject )
        goto LABEL_116;
      UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
      soloBaseObject = this->fields.selectNameBaseObject;
      if ( !soloBaseObject )
        goto LABEL_116;
      UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
      soloBaseObject = this->fields.costBaseObject;
      if ( !soloBaseObject )
        goto LABEL_116;
      UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
      soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEventPointIndicator;
      if ( !soloBaseObject )
        goto LABEL_116;
      PartyEventPointIndicator__SetTrendDisp(
        (PartyEventPointIndicator_o *)soloBaseObject,
        partyItem->fields.waveBattleEnemyClassIds,
        v28);
      soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipButton;
      if ( !soloBaseObject )
        goto LABEL_116;
      UICommonButton__SetEnable(
        (UICommonButton_o *)soloBaseObject,
        !partyItem->fields._IsWaveBattleRestart_k__BackingField,
        0LL);
      soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partySwapButton;
      if ( !soloBaseObject )
        goto LABEL_116;
      UICommonButton__SetEnable(
        (UICommonButton_o *)soloBaseObject,
        !partyItem->fields._IsClearedWave_k__BackingField,
        0LL);
      soloBaseObject = (UnityEngine_GameObject_o *)this->fields.autoOrganizationButton;
      if ( !soloBaseObject )
        goto LABEL_116;
      UICommonButton__SetEnable(
        (UICommonButton_o *)soloBaseObject,
        !partyItem->fields._IsClearedWave_k__BackingField,
        0LL);
      soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEditButton;
      if ( !soloBaseObject )
        goto LABEL_116;
      UICommonButton__SetEnable(
        (UICommonButton_o *)soloBaseObject,
        !partyItem->fields._IsClearedWave_k__BackingField,
        0LL);
      goto LABEL_72;
    default:
      v26 = this->fields.questRestrictionInfo;
      if ( v26 && v26->fields.eventDeckNum >= 1 )
      {
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_116;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_116;
        UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
        v27 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v27 = BalanceConfig_TypeInfo;
        }
        servantNumMax = v27->static_fields->DeckMemberMax;
LABEL_65:
        PartyListViewIndicator__SetEventDeckPartyName(this, servantNumMax, v21);
LABEL_66:
        soloBaseObject = this->fields.indexBaseObject;
        if ( !soloBaseObject
          || (UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL),
              (soloBaseObject = this->fields.selectNameBaseObject) == 0LL) )
        {
LABEL_116:
          sub_B7769C(soloBaseObject, partyItem);
        }
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
      }
      else
      {
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_116;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_116;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.indexBaseObject;
        if ( !soloBaseObject )
          goto LABEL_116;
        UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
        soloBaseObject = this->fields.selectNameBaseObject;
        if ( !soloBaseObject )
          goto LABEL_116;
        UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
        selectNameLabel = this->fields.selectNameLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v67 = LocalizationManager__Get((System_String_o *)StringLiteral_10542/*"PARTY_ORGANIZATION_NAME"*/, 0LL);
        soloBaseObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                       v67,
                                                       (Il2CppObject *)partyItem->fields.deckName,
                                                       0LL);
        if ( !selectNameLabel )
          goto LABEL_116;
        UILabel__set_text(selectNameLabel, (System_String_o *)soloBaseObject, 0LL);
      }
      soloBaseObject = this->fields.costBaseObject;
      if ( !soloBaseObject )
        goto LABEL_116;
      v7 = 1;
LABEL_71:
      UnityEngine_GameObject__SetActive(soloBaseObject, v7, 0LL);
LABEL_72:
      maxCost = partyItem->fields.maxCost;
      v76 = maxCost;
      v32 = this->fields.questRestrictionInfo;
      v33 = v32 ? QuestRestrictionInfo__GetTotalCostRestriction(v32, 0LL) : 0;
      if ( v33 && maxCost > v33 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v34 = LocalizationManager__Get((System_String_o *)StringLiteral_10509/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0LL);
        v76 = v33;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v34 = LocalizationManager__Get((System_String_o *)StringLiteral_10507/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
      }
      maxCostLabel = this->fields.maxCostLabel;
      v36 = System_Int32__ToString((int32_t)&v76, 0LL);
      soloBaseObject = (UnityEngine_GameObject_o *)System_String__Concat_44901936(v34, v36, 0LL);
      if ( !maxCostLabel )
        goto LABEL_116;
      UILabel__set_text(maxCostLabel, (System_String_o *)soloBaseObject, 0LL);
      splitCostLabel = this->fields.splitCostLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v38 = LocalizationManager__Get((System_String_o *)StringLiteral_10510/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
      soloBaseObject = (UnityEngine_GameObject_o *)System_String__Concat_44901936(v34, v38, 0LL);
      if ( !splitCostLabel )
        goto LABEL_116;
      UILabel__set_text(splitCostLabel, (System_String_o *)soloBaseObject, 0LL);
      cost = partyItem->fields.cost;
      selectCostLabel = this->fields.selectCostLabel;
      if ( cost > v76 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v41 = LocalizationManager__Get((System_String_o *)StringLiteral_10508/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
        cost = partyItem->fields.cost;
        v34 = v41;
      }
      condUsrLv[1] = cost;
      v42 = System_Int32__ToString((int32_t)&condUsrLv[1], 0LL);
      soloBaseObject = (UnityEngine_GameObject_o *)System_String__Concat_44901936(v34, v42, 0LL);
      if ( !selectCostLabel )
        goto LABEL_116;
      UILabel__set_text(selectCostLabel, (System_String_o *)soloBaseObject, 0LL);
      soloBaseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !soloBaseObject )
        goto LABEL_116;
      soloBaseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)soloBaseObject,
                                                     (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserEquipMaster___);
      if ( !soloBaseObject )
        goto LABEL_116;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)soloBaseObject,
                 partyItem->fields.userEquipId,
                 (const MethodInfo_21FBABC *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
      if ( Entity )
      {
        UserEquipEntity__getEquipInfo(
          (UserEquipEntity_o *)Entity,
          condUsrLv,
          &maxLv,
          &equipName,
          &detail,
          &genderImageId,
          0LL);
        soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipIcon1;
        if ( !soloBaseObject )
          goto LABEL_116;
        ItemIconComponent__SetEquipItem((ItemIconComponent_o *)soloBaseObject, genderImageId, 0LL);
        soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipIcon2;
        if ( !soloBaseObject )
          goto LABEL_116;
        ItemIconComponent__SetEquipItem((ItemIconComponent_o *)soloBaseObject, genderImageId, 0LL);
      }
      PartyListViewIndicator__DrawEventLimitEquip(this, partyItem, 0, v44);
      setupInfo = this->fields.setupInfo;
      if ( !setupInfo )
        goto LABEL_107;
      eventIdList = setupInfo->fields.eventIdList;
      if ( !eventIdList )
        goto LABEL_116;
      v47 = *(_QWORD *)&eventIdList->max_length;
      if ( v47 )
      {
        if ( !(_DWORD)v47 )
        {
LABEL_128:
          v68 = sub_B776C8(soloBaseObject);
          sub_B77668(v68, 0LL);
        }
        v48 = eventIdList->m_Items[1];
      }
      else
      {
LABEL_107:
        v48 = 0;
      }
      eventId = v48;
      SvtEntityList = PartyListViewItem__GetSvtEntityList(partyItem, (const MethodInfo *)partyItem);
      SvtNameList = PartyListViewItem__GetSvtNameList(partyItem, v50);
      IsFollowerList = PartyListViewItem__GetIsFollowerList(partyItem, v52);
      v54 = (EventPartyMargeUpValInfo_o *)sub_B77694(EventPartyMargeUpValInfo_TypeInfo);
      EventPartyMargeUpValInfo___ctor(v54, v48, SvtEntityList, SvtNameList, IsFollowerList, 0LL);
      this->fields.eventMargeUpValInfo = v54;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.eventMargeUpValInfo,
        (System_Int32_array **)v54,
        v55,
        v56,
        v57,
        v58,
        v59,
        v60);
      soloBaseObject = (UnityEngine_GameObject_o *)PartyListViewItem__GetEventUpVal(partyItem, &eventId, &v69, v61);
      v62 = v69;
      if ( !v69 )
        goto LABEL_116;
      v63 = 0LL;
      while ( 1 )
      {
        max_length = v62->max_length;
        if ( (__int64)v63 >= (int)max_length )
          break;
        if ( v63 >= max_length )
          goto LABEL_128;
        soloBaseObject = (UnityEngine_GameObject_o *)v62->m_Items[v63];
        if ( soloBaseObject )
        {
          eventMargeUpValInfo = this->fields.eventMargeUpValInfo;
          soloBaseObject = (UnityEngine_GameObject_o *)EventUpValInfo__GetDropItemList(
                                                         (EventUpValInfo_o *)soloBaseObject,
                                                         v63,
                                                         0LL);
          if ( !eventMargeUpValInfo )
            goto LABEL_116;
          EventPartyMargeUpValInfo__Add(eventMargeUpValInfo, (EventDropItemUpValInfo_array *)soloBaseObject, 0LL);
          v62 = v69;
        }
        ++v63;
        if ( !v62 )
          goto LABEL_116;
      }
LABEL_117:
      soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEventPointIndicator;
      if ( !soloBaseObject )
        goto LABEL_116;
      PartyEventPointIndicator__SetTotalDropItemList(
        (PartyEventPointIndicator_o *)soloBaseObject,
        (EventPartyMargeUpValInfo_o *)partyItem,
        v20);
      return;
  }
}


bool __fastcall PartyListViewIndicator__IsEventOnlyEquip(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438F001 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B775C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438F001 = 1;
  }
  entity = 0LL;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (questRestrictionInfo = this->fields.questRestrictionInfo) == 0LL)
    || !Instance )
  {
LABEL_12:
    sub_B7769C(Instance, v4);
  }
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          questRestrictionInfo->fields.eventId,
          (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_12;
  return EventDetailEntity__IsEventOnlyEquip((EventDetailEntity_o *)entity, 0LL);
}


bool __fastcall PartyListViewIndicator__IsUseEventLimitEquipUserWill(
        PartyListViewIndicator_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v8; // x8
  int32_t index; // w21
  BalanceConfig_c *v10; // x0
  struct System_Int32_array *useLimitEquip; // x8
  __int64 v13; // x0
  EventEquipSkillReleaseEntity_o *outEnt; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438F000 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438F000 = 1;
  }
  outEnt = 0LL;
  if ( !PartyListViewIndicator__IsEventOnlyEquip(this, (const MethodInfo *)partyItem) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)EventEquipSkillReleaseMaster__tryGetOpenEventEquipSkillReleaseEntity(
                                (EventEquipSkillReleaseMaster_o *)Instance,
                                questRestrictionInfo->fields.eventId,
                                &outEnt,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !partyItem )
    goto LABEL_23;
  v8 = partyItem->fields.questRestrictionInfo;
  index = partyItem->fields.index;
  if ( v8 )
    LOBYTE(v8) = v8->fields.eventDeckNum > 0;
  if ( ((unsigned __int8)v8 & 1) != 0 || (unsigned int)(partyItem->fields.menuKind - 1) <= 6 )
  {
    v10 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    index = v10->static_fields->DeckMax;
  }
  Instance = (DataManager_o *)outEnt;
  if ( !outEnt )
    goto LABEL_23;
  Instance = (DataManager_o *)EventEquipSkillReleaseEntity__isForceOverwrite(outEnt, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    return 0;
  useLimitEquip = this->fields.useLimitEquip;
  if ( !useLimitEquip )
LABEL_23:
    sub_B7769C(Instance, v6);
  if ( index >= useLimitEquip->max_length )
  {
    v13 = sub_B776C8(Instance);
    sub_B77668(v13, 0LL);
  }
  return useLimitEquip->m_Items[index + 1] == 0;
}


void __fastcall PartyListViewIndicator__OnClickLeft(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *manager; // x20
  __int64 v4; // x1
  ListViewManager_o *v5; // x0
  int32_t pageIndex; // w8
  struct ListViewManager_o *v7; // x8

  if ( (byte_438EFFC & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438EFFC = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(manager, 0LL, 0LL)
    && this->fields.isScrollEnabled
    && (this->fields.pageIndex & 0x80000000) == 0 )
  {
    v5 = this->fields.manager;
    if ( !v5 )
      goto LABEL_25;
    ListViewManager__BackLoopItem(v5, 0LL);
    if ( this->fields.pageIndex >= 1 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(7, 0LL);
      v5 = this->fields.manager;
      if ( v5 )
      {
        pageIndex = this->fields.pageIndex;
LABEL_23:
        ListViewManager__MoveCenterItem(v5, pageIndex - 1, 1, 0, 0.0, 0LL);
        return;
      }
      goto LABEL_25;
    }
    v7 = this->fields.manager;
    if ( !v7 )
      goto LABEL_25;
    if ( v7->fields.isLoop )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(7, 0LL);
      v5 = this->fields.manager;
      if ( v5 )
      {
        pageIndex = this->fields.pageMax;
        goto LABEL_23;
      }
LABEL_25:
      sub_B7769C(v5, v4);
    }
  }
}


void __fastcall PartyListViewIndicator__OnClickRight(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *manager; // x20
  __int64 v4; // x1
  ListViewManager_o *v5; // x0
  int32_t pageIndex; // w8
  int32_t v7; // w1
  struct ListViewManager_o *v8; // x8

  if ( (byte_438EFFD & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438EFFD = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(manager, 0LL, 0LL)
    && this->fields.isScrollEnabled
    && (this->fields.pageIndex & 0x80000000) == 0 )
  {
    v5 = this->fields.manager;
    if ( !v5 )
      goto LABEL_26;
    ListViewManager__FowardLoopItem(v5, 0LL);
    pageIndex = this->fields.pageIndex;
    if ( (pageIndex & 0x80000000) == 0 && pageIndex < this->fields.pageMax - 1 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(7, 0LL);
      v5 = this->fields.manager;
      if ( v5 )
      {
        v7 = this->fields.pageIndex + 1;
LABEL_24:
        ListViewManager__MoveCenterItem(v5, v7, 1, 0, 0.0, 0LL);
        return;
      }
      goto LABEL_26;
    }
    v8 = this->fields.manager;
    if ( !v8 )
      goto LABEL_26;
    if ( v8->fields.isLoop )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(7, 0LL);
      v5 = this->fields.manager;
      if ( v5 )
      {
        v7 = 0;
        goto LABEL_24;
      }
LABEL_26:
      sub_B7769C(v5, v4);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewIndicator__OnModifyCenterItem(
        PartyListViewIndicator_o *this,
        ListViewManager_o *manager,
        ListViewItem_o *item,
        bool isTop,
        bool isBottom,
        bool isLeft,
        bool isRight,
        const MethodInfo *method)
{
  char v8; // w22
  UnityEngine_GameObject_o *leftObject; // x0
  __int64 v14; // x1
  struct ListViewManager_o *v15; // x8
  _BOOL4 isLoop; // w8
  char v17; // w9
  bool v18; // w8
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  __int64 v21; // x10
  ListViewItem_o *v22; // x1

  v8 = isRight;
  if ( (byte_438EFF7 & 1) == 0 )
  {
    sub_B775C4(&PartyListViewItem_TypeInfo);
    byte_438EFF7 = 1;
  }
  this->fields.manager = manager;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.manager,
    (System_Int32_array **)manager,
    (System_String_array **)item,
    (System_String_array **)isTop,
    (System_Boolean_array **)isBottom,
    (System_Int32_array **)isLeft,
    (System_Int32_array *)isRight,
    (System_Int32_array *)method);
  v15 = this->fields.manager;
  if ( !v15 )
    goto LABEL_19;
  isLoop = v15->fields.isLoop;
  leftObject = this->fields.leftObject;
  v17 = isLeft | v8;
  if ( isLoop )
    v8 |= isLeft;
  if ( !leftObject
    || (!isLoop ? (v18 = isLeft) : (v18 = v17),
        UnityEngine_GameObject__SetActive(leftObject, v18, 0LL),
        (leftObject = this->fields.rightObject) == 0LL) )
  {
LABEL_19:
    sub_B7769C(leftObject, v14);
  }
  UnityEngine_GameObject__SetActive(leftObject, v8 & 1, 0LL);
  if ( !item )
  {
    PartyListViewIndicator__SetPageIndex(this, -1, v19);
    goto LABEL_17;
  }
  PartyListViewIndicator__SetPageIndex(this, item->fields.index, v19);
  v21 = *(&PartyListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&item->klass->_2.bitflags2 + 1) < (unsigned int)v21 )
  {
LABEL_17:
    v22 = 0LL;
    goto LABEL_18;
  }
  if ( (PartyListViewItem_c *)item->klass->_2.typeHierarchy[v21 - 1] == PartyListViewItem_TypeInfo )
    v22 = item;
  else
    v22 = 0LL;
LABEL_18:
  PartyListViewIndicator__DrawPartyInfo(this, (PartyListViewItem_o *)v22, v20);
}


void __fastcall PartyListViewIndicator__OnModifyPosition(
        PartyListViewIndicator_o *this,
        ListViewManager_o *manager,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewIndicator__SetEventDeckPartyName(
        PartyListViewIndicator_o *this,
        int32_t servantNum,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *organizationNumObject; // x0
  int v6; // w8
  UnityEngine_GameObject_o *v7; // x19
  __int64 *v8; // x8
  UISprite_o *v9; // x21

  if ( (byte_438EFFE & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B775C4(&StringLiteral_20638/*"limited_bg"*/);
    sub_B775C4(&StringLiteral_22656/*"solo_bg"*/);
    sub_B775C4(&StringLiteral_22761/*"startingonly_bg"*/);
    sub_B775C4(&StringLiteral_21855/*"pair_bg"*/);
    byte_438EFFE = 1;
  }
  organizationNumObject = this->fields.organizationNumObject;
  if ( !organizationNumObject )
LABEL_19:
    sub_B7769C(organizationNumObject, *(_QWORD *)&servantNum);
  organizationNumObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        organizationNumObject,
                                                        (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v6 = servantNum - 1;
  v7 = organizationNumObject;
  switch ( v6 )
  {
    case 0:
      organizationNumObject = this->fields.soloBaseObject;
      if ( !organizationNumObject )
        goto LABEL_19;
      organizationNumObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            organizationNumObject,
                                                            (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !this->fields.soloBaseObject )
        goto LABEL_19;
      v9 = (UISprite_o *)organizationNumObject;
      UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0LL);
      organizationNumObject = this->fields.organizationNumObject;
      if ( !organizationNumObject )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive(organizationNumObject, 0, 0LL);
      if ( !v9 )
        goto LABEL_19;
      UISprite__set_spriteName(v9, (System_String_o *)StringLiteral_22656/*"solo_bg"*/, 0LL);
      organizationNumObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v9->klass->vtable._33_MakePixelPerfect.method)(
                                                            v9,
                                                            v9->klass->vtable._34_get_minWidth.methodPtr);
      if ( !v7 )
        goto LABEL_19;
      goto LABEL_18;
    case 1:
      if ( !organizationNumObject )
        goto LABEL_19;
      v8 = &StringLiteral_21855/*"pair_bg"*/;
      break;
    case 2:
      if ( !organizationNumObject )
        goto LABEL_19;
      v8 = &StringLiteral_22761/*"startingonly_bg"*/;
      break;
    default:
      if ( !organizationNumObject )
        goto LABEL_19;
      v8 = &StringLiteral_20638/*"limited_bg"*/;
      break;
  }
  UISprite__set_spriteName((UISprite_o *)organizationNumObject, (System_String_o *)*v8, 0LL);
LABEL_18:
  ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))v7->klass[2]._1.typeMetadataHandle)(
    v7,
    v7->klass[2]._1.interopData);
}


void __fastcall PartyListViewIndicator__SetEventId(
        PartyListViewIndicator_o *this,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        System_Int32_array *classIds,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  EventPartyMargeUpValInfo_o *v23; // x1
  const MethodInfo *v24; // x3
  PartyEventPointIndicator_o *partyEventPointIndicator; // x0
  const MethodInfo *v26; // x2

  this->fields.setupInfo = setupInfo;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    (System_String_array **)questRestrictionInfo,
    (System_String_array **)classIds,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.eventMargeUpValInfo = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.eventMargeUpValInfo, 0LL, v17, v18, v19, v20, v21, v22);
  partyEventPointIndicator = this->fields.partyEventPointIndicator;
  if ( !partyEventPointIndicator
    || (PartyEventPointIndicator__SetInfomation(partyEventPointIndicator, questRestrictionInfo, classIds, v24),
        (partyEventPointIndicator = this->fields.partyEventPointIndicator) == 0LL) )
  {
    sub_B7769C(partyEventPointIndicator, v23);
  }
  PartyEventPointIndicator__SetTotalDropItemList(partyEventPointIndicator, v23, v26);
}


void __fastcall PartyListViewIndicator__SetEventLimitEquipSetting(
        PartyListViewIndicator_o *this,
        const MethodInfo *method)
{
  System_String_o *IsEventOnlyEquip; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Int32_array *useLimitEquip; // x21
  __int64 v7; // x8
  System_String_o *v8; // x20
  unsigned __int64 v9; // x22
  int v10; // w26
  Il2CppObject *v11; // x0
  __int64 v12; // x0
  int v13; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_438EFFF & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&StringLiteral_8550/*"LIMIT_EQUIP_SETTING"*/);
    sub_B775C4(&StringLiteral_714/*","*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438EFFF = 1;
  }
  IsEventOnlyEquip = (System_String_o *)PartyListViewIndicator__IsEventOnlyEquip(this, method);
  if ( ((unsigned __int8)IsEventOnlyEquip & 1) != 0 )
  {
    useLimitEquip = this->fields.useLimitEquip;
    if ( !useLimitEquip )
      goto LABEL_15;
    v7 = *(_QWORD *)&useLimitEquip->max_length;
    v8 = (System_String_o *)StringLiteral_1/*""*/;
    if ( (int)v7 >= 1 )
    {
      v9 = 0LL;
      while ( 1 )
      {
        if ( v9 >= (unsigned int)v7 )
        {
          v12 = sub_B776C8(IsEventOnlyEquip);
          sub_B77668(v12, 0LL);
        }
        if ( !v8 )
          break;
        v10 = useLimitEquip->m_Items[v9 + 1];
        if ( v8->fields.m_stringLength >= 1 )
          v8 = System_String__Concat_44901936(v8, (System_String_o *)StringLiteral_714/*","*/, 0LL);
        v13 = v10;
        v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v5);
        IsEventOnlyEquip = System_String__Concat((Il2CppObject *)v8, v11, 0LL);
        LODWORD(v7) = useLimitEquip->max_length;
        ++v9;
        v8 = IsEventOnlyEquip;
        if ( (__int64)v9 >= (int)v7 )
          goto LABEL_12;
      }
LABEL_15:
      sub_B7769C(IsEventOnlyEquip, v4);
    }
LABEL_12:
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_8550/*"LIMIT_EQUIP_SETTING"*/, v8, 0LL);
    this->fields.isChkSave = 0;
  }
}


void __fastcall PartyListViewIndicator__SetIndexMax(
        PartyListViewIndicator_o *this,
        int32_t max,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_GameObject_o *leftObject; // x0

  PartyListViewIndicator__SetPageMax(this, max, method);
  leftObject = this->fields.leftObject;
  if ( !leftObject
    || (UnityEngine_GameObject__SetActive(leftObject, 0, 0LL), (leftObject = this->fields.rightObject) == 0LL) )
  {
    sub_B7769C(leftObject, v4);
  }
  UnityEngine_GameObject__SetActive(leftObject, 0, 0LL);
}


void __fastcall PartyListViewIndicator__SetKind(
        PartyListViewIndicator_o *this,
        int32_t menuKind,
        const MethodInfo *method)
{
  this->fields.menuKind = menuKind;
}


void __fastcall PartyListViewIndicator__SetPageIndex(
        PartyListViewIndicator_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Object_o *pageBaseObject; // x21
  UISprite_o *gameObject; // x0
  __int64 v7; // x1
  __int64 v8; // x21
  struct UISprite_array *pageSpriteList; // x8
  __int64 *v10; // x8
  int v11; // w24
  struct UnityEngine_GameObject_o *waveNumObject; // x8
  UISprite_o *Component_srcLineSprite; // x21
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  System_String_o *v16; // x21
  struct UISprite_o *indexSprite; // x8
  UISprite_o *v18; // x22
  UISprite_o *v19; // x22
  UISprite_o *waveMaxNumTensPlaceSprite; // x22
  System_String_o *v21; // x0
  System_String_o *v22; // x23
  UISprite_o *waveMaxNumTensPlaceGlowSprite; // x22
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  int32_t v27; // w1
  UISprite_o *waveNumTensPlaceSprite; // x22
  System_String_o *v29; // x0
  System_String_o *v30; // x23
  UISprite_o *waveNumTensPlaceGlowSprite; // x22
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  UISprite_o *waveNumOnesPlaceSprite; // x21
  System_String_o *v35; // x0
  System_String_o *v36; // x22
  UISprite_o *waveNumOnesPlaceGlowSprite; // x21
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  UISprite_o *waveMaxNumOnesPlaceSprite; // x21
  System_String_o *v41; // x0
  System_String_o *v42; // x0
  UISprite_o *waveMaxNumOnesPlaceGlowSprite; // x21
  System_String_o *v44; // x0
  System_String_o *v45; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w21
  bool v48; // w20
  __int64 v49; // x0
  int v50; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_438EFF9 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B775C4(&LastUsedDeckNumberManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&OptionManager_TypeInfo);
    sub_B775C4(&StringLiteral_16995/*"battle_num_"*/);
    sub_B775C4(&StringLiteral_20029/*"img_slider_on"*/);
    sub_B775C4(&StringLiteral_16452/*"_glow"*/);
    sub_B775C4(&StringLiteral_16997/*"battle_num_slash_glow"*/);
    sub_B775C4(&StringLiteral_21877/*"party_txt_"*/);
    sub_B775C4(&StringLiteral_16990/*"battle_bg"*/);
    sub_B775C4(&StringLiteral_20028/*"img_slider_off"*/);
    sub_B775C4(&StringLiteral_16996/*"battle_num_slash"*/);
    sub_B775C4(&StringLiteral_21876/*"party_bg"*/);
    byte_438EFF9 = 1;
  }
  v50 = 0;
  this->fields.pageIndex = index;
  if ( (index & 0x80000000) == 0 )
  {
    pageBaseObject = (UnityEngine_Object_o *)this->fields.pageBaseObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UISprite_o *)UnityEngine_Object__op_Inequality(pageBaseObject, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 && this->fields.pageMax >= 1 )
    {
      v8 = 0LL;
      do
      {
        pageSpriteList = this->fields.pageSpriteList;
        if ( !pageSpriteList )
          goto LABEL_99;
        if ( (unsigned int)v8 >= pageSpriteList->max_length )
        {
          v49 = sub_B776C8(gameObject);
          sub_B77668(v49, 0LL);
        }
        gameObject = pageSpriteList->m_Items[v8];
        if ( !gameObject )
          goto LABEL_99;
        if ( index == (_DWORD)v8 )
          v10 = &StringLiteral_20029/*"img_slider_on"*/;
        else
          v10 = &StringLiteral_20028/*"img_slider_off"*/;
        UISprite__set_spriteName(gameObject, (System_String_o *)*v10, 0LL);
      }
      while ( (int)++v8 < this->fields.pageMax );
    }
    v11 = index + 1;
    v50 = index + 1;
    gameObject = (UISprite_o *)System_Int32__ToString((int32_t)&v50, 0LL);
    waveNumObject = this->fields.waveNumObject;
    if ( this->fields.menuKind == 9 )
    {
      if ( !waveNumObject )
        goto LABEL_99;
      gameObject = (UISprite_o *)UnityEngine_GameObject__get_gameObject(this->fields.waveNumObject, 0LL);
      if ( !gameObject )
        goto LABEL_99;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = this->fields.indexSprite;
      if ( !gameObject )
        goto LABEL_99;
      gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_99;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      GameObjectExtensions__SetLocalPositionY(this->fields.indexBaseObject, 260.0, 0LL);
      gameObject = (UISprite_o *)this->fields.indexBaseObject;
      if ( !gameObject )
        goto LABEL_99;
      Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetPartyOrganizationImage(Component_srcLineSprite, (System_String_o *)StringLiteral_16990/*"battle_bg"*/, 0LL);
      AtlasManager__SetPartyOrganizationImage(
        this->fields.waveNumSlashSprite,
        (System_String_o *)StringLiteral_16996/*"battle_num_slash"*/,
        0LL);
      AtlasManager__SetPartyOrganizationImage(
        this->fields.waveNumSlashGlowSprite,
        (System_String_o *)StringLiteral_16997/*"battle_num_slash_glow"*/,
        0LL);
      if ( this->fields.pageMax >= 10 )
      {
        gameObject = this->fields.waveMaxNumTensPlaceSprite;
        if ( !gameObject )
          goto LABEL_99;
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_99;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = this->fields.waveMaxNumTensPlaceGlowSprite;
        if ( !gameObject )
          goto LABEL_99;
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_99;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        waveMaxNumTensPlaceSprite = this->fields.waveMaxNumTensPlaceSprite;
        v50 = this->fields.pageMax / 10;
        v21 = System_Int32__ToString((int32_t)&v50, 0LL);
        v22 = System_String__Concat_44901936((System_String_o *)StringLiteral_16995/*"battle_num_"*/, v21, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetPartyOrganizationImage(waveMaxNumTensPlaceSprite, v22, 0LL);
        waveMaxNumTensPlaceGlowSprite = this->fields.waveMaxNumTensPlaceGlowSprite;
        v50 = this->fields.pageMax / 10;
        v24 = System_Int32__ToString((int32_t)&v50, 0LL);
        v25 = System_String__Concat_44904220(
                (System_String_o *)StringLiteral_16995/*"battle_num_"*/,
                v24,
                (System_String_o *)StringLiteral_16452/*"_glow"*/,
                0LL);
        AtlasManager__SetPartyOrganizationImage(waveMaxNumTensPlaceGlowSprite, v25, 0LL);
        gameObject = this->fields.waveMaxNumTensPlaceSprite;
        if ( !gameObject )
          goto LABEL_99;
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))gameObject->klass->vtable._33_MakePixelPerfect.method)(
          gameObject,
          gameObject->klass->vtable._34_get_minWidth.methodPtr);
        gameObject = this->fields.waveMaxNumTensPlaceGlowSprite;
        if ( !gameObject )
          goto LABEL_99;
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))gameObject->klass->vtable._33_MakePixelPerfect.method)(
          gameObject,
          gameObject->klass->vtable._34_get_minWidth.methodPtr);
        v26 = this->fields.waveNumObject;
        if ( v11 >= 10 )
        {
          GameObjectExtensions__SetLocalPositionX(v26, 7.0, 0LL);
          gameObject = this->fields.waveNumTensPlaceSprite;
          if ( !gameObject )
            goto LABEL_99;
          gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_99;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          gameObject = this->fields.waveNumTensPlaceGlowSprite;
          if ( !gameObject )
            goto LABEL_99;
          gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_99;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          waveNumTensPlaceSprite = this->fields.waveNumTensPlaceSprite;
          v50 = v11 / 0xAu;
          v29 = System_Int32__ToString((int32_t)&v50, 0LL);
          v30 = System_String__Concat_44901936((System_String_o *)StringLiteral_16995/*"battle_num_"*/, v29, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetPartyOrganizationImage(waveNumTensPlaceSprite, v30, 0LL);
          waveNumTensPlaceGlowSprite = this->fields.waveNumTensPlaceGlowSprite;
          v50 = v11 / 0xAu;
          v32 = System_Int32__ToString((int32_t)&v50, 0LL);
          v33 = System_String__Concat_44904220(
                  (System_String_o *)StringLiteral_16995/*"battle_num_"*/,
                  v32,
                  (System_String_o *)StringLiteral_16452/*"_glow"*/,
                  0LL);
          AtlasManager__SetPartyOrganizationImage(waveNumTensPlaceGlowSprite, v33, 0LL);
          gameObject = this->fields.waveNumTensPlaceSprite;
          if ( !gameObject )
            goto LABEL_99;
          ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))gameObject->klass->vtable._33_MakePixelPerfect.method)(
            gameObject,
            gameObject->klass->vtable._34_get_minWidth.methodPtr);
          gameObject = this->fields.waveNumTensPlaceGlowSprite;
          if ( !gameObject )
            goto LABEL_99;
          gameObject = (UISprite_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))gameObject->klass->vtable._33_MakePixelPerfect.method)(
                                       gameObject,
                                       gameObject->klass->vtable._34_get_minWidth.methodPtr);
          if ( !Component_srcLineSprite )
            goto LABEL_99;
          v27 = 322;
        }
        else
        {
          GameObjectExtensions__SetLocalPositionX(v26, 1.0, 0LL);
          gameObject = this->fields.waveNumTensPlaceSprite;
          if ( !gameObject )
            goto LABEL_99;
          gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_99;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          gameObject = this->fields.waveNumTensPlaceGlowSprite;
          if ( !gameObject )
            goto LABEL_99;
          gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_99;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          if ( !Component_srcLineSprite )
            goto LABEL_99;
          v27 = 308;
        }
        UIWidget__set_width((UIWidget_o *)Component_srcLineSprite, v27, 0LL);
      }
      else
      {
        GameObjectExtensions__SetLocalPositionX(this->fields.waveNumObject, 7.0, 0LL);
        gameObject = this->fields.waveNumTensPlaceSprite;
        if ( !gameObject )
          goto LABEL_99;
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_99;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        gameObject = this->fields.waveNumTensPlaceGlowSprite;
        if ( !gameObject )
          goto LABEL_99;
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_99;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        gameObject = this->fields.waveMaxNumTensPlaceSprite;
        if ( !gameObject )
          goto LABEL_99;
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_99;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        gameObject = this->fields.waveMaxNumTensPlaceGlowSprite;
        if ( !gameObject )
          goto LABEL_99;
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_99;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        if ( !Component_srcLineSprite )
          goto LABEL_99;
        UIWidget__set_width((UIWidget_o *)Component_srcLineSprite, 296, 0LL);
        gameObject = this->fields.waveMaxNumOnesPlaceSprite;
        if ( !gameObject )
          goto LABEL_99;
        v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionX(v14, 67.0, 0LL);
        gameObject = this->fields.waveMaxNumOnesPlaceGlowSprite;
        if ( !gameObject )
          goto LABEL_99;
        v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionX(v15, 67.0, 0LL);
      }
      waveNumOnesPlaceSprite = this->fields.waveNumOnesPlaceSprite;
      v50 = v11 % 10;
      v35 = System_Int32__ToString((int32_t)&v50, 0LL);
      v36 = System_String__Concat_44901936((System_String_o *)StringLiteral_16995/*"battle_num_"*/, v35, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetPartyOrganizationImage(waveNumOnesPlaceSprite, v36, 0LL);
      waveNumOnesPlaceGlowSprite = this->fields.waveNumOnesPlaceGlowSprite;
      v50 = v11 % 10;
      v38 = System_Int32__ToString((int32_t)&v50, 0LL);
      v39 = System_String__Concat_44904220(
              (System_String_o *)StringLiteral_16995/*"battle_num_"*/,
              v38,
              (System_String_o *)StringLiteral_16452/*"_glow"*/,
              0LL);
      AtlasManager__SetPartyOrganizationImage(waveNumOnesPlaceGlowSprite, v39, 0LL);
      waveMaxNumOnesPlaceSprite = this->fields.waveMaxNumOnesPlaceSprite;
      v50 = this->fields.pageMax % 10;
      v41 = System_Int32__ToString((int32_t)&v50, 0LL);
      v42 = System_String__Concat_44901936((System_String_o *)StringLiteral_16995/*"battle_num_"*/, v41, 0LL);
      AtlasManager__SetPartyOrganizationImage(waveMaxNumOnesPlaceSprite, v42, 0LL);
      waveMaxNumOnesPlaceGlowSprite = this->fields.waveMaxNumOnesPlaceGlowSprite;
      v50 = this->fields.pageMax % 10;
      v44 = System_Int32__ToString((int32_t)&v50, 0LL);
      v45 = System_String__Concat_44904220(
              (System_String_o *)StringLiteral_16995/*"battle_num_"*/,
              v44,
              (System_String_o *)StringLiteral_16452/*"_glow"*/,
              0LL);
      AtlasManager__SetPartyOrganizationImage(waveMaxNumOnesPlaceGlowSprite, v45, 0LL);
      gameObject = this->fields.waveNumOnesPlaceSprite;
      if ( !gameObject )
        goto LABEL_99;
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))gameObject->klass->vtable._33_MakePixelPerfect.method)(
        gameObject,
        gameObject->klass->vtable._34_get_minWidth.methodPtr);
      gameObject = this->fields.waveNumOnesPlaceGlowSprite;
      if ( !gameObject )
        goto LABEL_99;
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))gameObject->klass->vtable._33_MakePixelPerfect.method)(
        gameObject,
        gameObject->klass->vtable._34_get_minWidth.methodPtr);
      gameObject = this->fields.waveMaxNumOnesPlaceSprite;
      if ( !gameObject )
        goto LABEL_99;
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))gameObject->klass->vtable._33_MakePixelPerfect.method)(
        gameObject,
        gameObject->klass->vtable._34_get_minWidth.methodPtr);
      gameObject = this->fields.waveMaxNumOnesPlaceGlowSprite;
      if ( !gameObject )
        goto LABEL_99;
    }
    else
    {
      if ( !waveNumObject )
        goto LABEL_99;
      v16 = (System_String_o *)gameObject;
      gameObject = (UISprite_o *)UnityEngine_GameObject__get_gameObject(this->fields.waveNumObject, 0LL);
      if ( !gameObject )
        goto LABEL_99;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      GameObjectExtensions__SetLocalPositionY(this->fields.indexBaseObject, 271.0, 0LL);
      gameObject = (UISprite_o *)this->fields.indexBaseObject;
      if ( !gameObject )
        goto LABEL_99;
      gameObject = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   (UnityEngine_GameObject_o *)gameObject,
                                   (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      indexSprite = this->fields.indexSprite;
      if ( !indexSprite )
        goto LABEL_99;
      v18 = gameObject;
      if ( !gameObject )
        goto LABEL_99;
      UISprite__set_atlas(gameObject, indexSprite->fields.mAtlas, 0LL);
      UISprite__set_spriteName(v18, (System_String_o *)StringLiteral_21876/*"party_bg"*/, 0LL);
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v18->klass->vtable._33_MakePixelPerfect.method)(
        v18,
        v18->klass->vtable._34_get_minWidth.methodPtr);
      gameObject = this->fields.indexSprite;
      if ( !gameObject )
        goto LABEL_99;
      gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_99;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v19 = this->fields.indexSprite;
      gameObject = (UISprite_o *)System_String__Concat_44901936((System_String_o *)StringLiteral_21877/*"party_txt_"*/, v16, 0LL);
      if ( !v19 )
        goto LABEL_99;
      UISprite__set_spriteName(v19, (System_String_o *)gameObject, 0LL);
      gameObject = this->fields.indexSprite;
      if ( !gameObject )
        goto LABEL_99;
    }
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))gameObject->klass->vtable._33_MakePixelPerfect.method)(
      gameObject,
      gameObject->klass->vtable._34_get_minWidth.methodPtr);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_94;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    gameObject = (UISprite_o *)OptionManager__GetAutoSelectParty(0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_99;
      questId = questRestrictionInfo->fields.questId;
      if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      }
      v48 = LastUsedDeckNumberManager__GetDeckNumber(questId, 0LL) - 1 == index;
    }
    else
    {
LABEL_94:
      v48 = 0;
    }
    gameObject = this->fields.lastTimeUsedSprite;
    if ( !gameObject
      || (gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
    {
LABEL_99:
      sub_B7769C(gameObject, v7);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v48, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewIndicator__SetPageMax(
        PartyListViewIndicator_o *this,
        int32_t max,
        const MethodInfo *method)
{
  PartyListViewIndicator_o *v4; // x19
  struct UISprite_array *pageSpriteList; // x8
  int32_t max_length; // w8
  UnityEngine_Object_o *pageBaseObject; // x20
  struct UISprite_array *v8; // x8
  __int64 v9; // x20
  int v10; // w9
  System_String_o *v11; // x1
  float v12; // s1
  float v13; // s2
  int32_t pageMax; // w19
  float v15; // s8
  float v16; // s9
  __int64 v17; // x0
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_438EFF8 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (PartyListViewIndicator_o *)sub_B775C4(&StringLiteral_20028/*"img_slider_off"*/);
    byte_438EFF8 = 1;
  }
  pageSpriteList = v4->fields.pageSpriteList;
  if ( !pageSpriteList )
    goto LABEL_21;
  max_length = pageSpriteList->max_length;
  v4->fields.pageIndex = -1;
  if ( max_length >= max )
    max_length = max;
  v4->fields.pageMax = max_length;
  if ( max_length <= 1 )
    v4->fields.pageMax = 0;
  pageBaseObject = (UnityEngine_Object_o *)v4->fields.pageBaseObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (PartyListViewIndicator_o *)UnityEngine_Object__op_Inequality(pageBaseObject, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v8 = v4->fields.pageSpriteList;
    if ( v8 )
    {
      v9 = 0LL;
      while ( 1 )
      {
        v10 = v8->max_length;
        if ( (int)v9 >= v10 )
          break;
        if ( (unsigned int)v9 >= v10 )
        {
          v17 = sub_B776C8(this);
          sub_B77668(v17, 0LL);
        }
        this = (PartyListViewIndicator_o *)v8->m_Items[v9];
        if ( this )
        {
          v11 = (int)v9 >= v4->fields.pageMax ? 0LL : (System_String_o *)StringLiteral_20028/*"img_slider_off"*/;
          UISprite__set_spriteName((UISprite_o *)this, v11, 0LL);
          v8 = v4->fields.pageSpriteList;
          ++v9;
          if ( v8 )
            continue;
        }
        goto LABEL_21;
      }
      this = (PartyListViewIndicator_o *)v4->fields.pageBaseObject;
      if ( this )
      {
        this = (PartyListViewIndicator_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        if ( this )
        {
          *(UnityEngine_Vector3_o *)(&v12 - 1) = UnityEngine_Transform__get_localPosition(
                                                   (UnityEngine_Transform_o *)this,
                                                   0LL);
          this = (PartyListViewIndicator_o *)v4->fields.pageBaseObject;
          if ( this )
          {
            pageMax = v4->fields.pageMax;
            v15 = v12;
            v16 = v13;
            this = (PartyListViewIndicator_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0LL);
            if ( this )
            {
              v18.fields.x = (float)(-10 * pageMax + 10);
              v18.fields.y = v15;
              v18.fields.z = v16;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v18, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_21:
    sub_B7769C(this, *(_QWORD *)&max);
  }
}


void __fastcall PartyListViewIndicator__SetScrollEnabled(
        PartyListViewIndicator_o *this,
        bool enabled,
        const MethodInfo *method)
{
  this->fields.isScrollEnabled = enabled;
}