void __fastcall PartyListViewIndicator___ctor(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct System_Int32_array *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_48DE88D & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, method);
    sub_1B00CCC(&int___TypeInfo, v3);
    byte_48DE88D = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct System_Int32_array *)sub_1B00D74(int___TypeInfo, (unsigned int)(v4->static_fields->DeckMax + 1));
  this->fields.useLimitEquip = v5;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.useLimitEquip, (int32_t)v5, v6, v7);
  __asm { FMOV            V1.4S, #1.0 }
  this->fields.isScrollEnabled = 1;
  this->fields.ICON_NORMAL_COLOR = _Q1;
  this->fields.ICON_MASK_COLOR = (struct UnityEngine_Color_o)xmmword_B70530;
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
    sub_1B00F28(limitMasterFormationButton, method);
  }
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_48DE88C & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&bonusVal);
    byte_48DE88C = 1;
  }
  friendPointUpBonusSprite = (UnityEngine_Object_o *)this->fields.friendPointUpBonusSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendPointUpBonusSprite, 0LL, 0LL) )
  {
    friendPointUpBonusLabel = (UnityEngine_Object_o *)this->fields.friendPointUpBonusLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
            goto LABEL_17;
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
LABEL_17:
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v10, 0LL);
              return;
            }
          }
        }
      }
      sub_1B00F28(gameObject, v7);
    }
  }
}


void __fastcall PartyListViewIndicator__DrawEventLimitEquip(
        PartyListViewIndicator_o *this,
        PartyListViewItem_o *partyItem,
        bool isChng,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  const MethodInfo *v17; // x1
  DataManager_o *Instance; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v20; // x8
  char v21; // w21
  unsigned int index; // w24
  UISprite_o *masterEquipBackSprite; // x22
  DataManager_o *v24; // x22
  unsigned __int64 v25; // x25
  struct System_Int32_array *useLimitEquip; // x28
  UISprite_o *limitEquipFixSprite; // x19
  struct System_Int32_array *v28; // x9
  char *v29; // x8
  int v30; // w21
  Il2CppObject *Component_object; // x20
  EventEquipSkillReleaseEntity_o *outEnt; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_48DE885 & 1) == 0 )
  {
    sub_1B00CCC(&AtlasManager_TypeInfo, partyItem);
    sub_1B00CCC(&BalanceConfig_TypeInfo, v7);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_UISprite___, v8);
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___, v9);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B00CCC(&StringLiteral_18912/*"event_emblem_frame"*/, v11);
    sub_1B00CCC(&StringLiteral_19870/*"icon_equip_fixation"*/, v12);
    sub_1B00CCC(&StringLiteral_8163/*"LIMIT_EQUIP_SETTING"*/, v13);
    sub_1B00CCC(&StringLiteral_17294/*"btn_skill_off"*/, v14);
    sub_1B00CCC(&StringLiteral_18911/*"event_emblem_dim"*/, v15);
    sub_1B00CCC(&StringLiteral_17295/*"btn_skill_on"*/, v16);
    byte_48DE885 = 1;
  }
  outEnt = 0LL;
  if ( !PartyListViewIndicator__IsEventOnlyEquip(this, (const MethodInfo *)partyItem) )
    goto LABEL_15;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !Instance )
    goto LABEL_65;
  if ( !EventEquipSkillReleaseMaster__tryGetOpenEventEquipSkillReleaseEntity(
          (EventEquipSkillReleaseMaster_o *)Instance,
          questRestrictionInfo->fields.eventId,
          &outEnt,
          0LL) )
  {
LABEL_15:
    PartyListViewIndicator__ClearEventLimitEquip(this, v17);
    return;
  }
  Instance = (DataManager_o *)outEnt;
  if ( !outEnt )
    goto LABEL_65;
  Instance = (DataManager_o *)EventEquipSkillReleaseEntity__isForceOverwrite(outEnt, 0LL);
  if ( !partyItem )
    goto LABEL_65;
  v20 = partyItem->fields.questRestrictionInfo;
  v21 = (char)Instance;
  if ( v20 )
    LOBYTE(v20) = v20->fields.eventDeckNum > 0;
  if ( ((unsigned __int8)v20 & 1) != 0 || (unsigned int)(partyItem->fields.menuKind - 1) <= 6 )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    index = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 148LL);
  }
  else
  {
    index = partyItem->fields.index;
  }
  if ( !outEnt )
    goto LABEL_65;
  Instance = (DataManager_o *)this->fields.limitEquipIcon;
  if ( !Instance )
    goto LABEL_65;
  ItemIconComponent__SetEquipItem((ItemIconComponent_o *)Instance, outEnt->fields.overwriteEquipIconId, 0LL);
  masterEquipBackSprite = this->fields.masterEquipBackSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(masterEquipBackSprite, (System_String_o *)StringLiteral_18911/*"event_emblem_dim"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.masterEquipFrameSprite, (System_String_o *)StringLiteral_18912/*"event_emblem_frame"*/, 0LL);
  if ( !this->fields.isChkSave )
  {
    if ( (v21 & 1) == 0 )
    {
      Instance = (DataManager_o *)UnityEngine_PlayerPrefs__GetString_68035932(
                                    (System_String_o *)StringLiteral_8163/*"LIMIT_EQUIP_SETTING"*/,
                                    0LL);
      if ( !Instance )
        goto LABEL_65;
      if ( Instance->fields.m_CachedPtr >= 1 )
      {
        Instance = (DataManager_o *)System_String__Split((System_String_o *)Instance, 0x2Cu, 0, 0LL);
        if ( !Instance )
          goto LABEL_65;
        v24 = Instance;
        if ( SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
        {
          v25 = 0LL;
          do
          {
            Instance = (DataManager_o *)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = (DataManager_o *)BalanceConfig_TypeInfo;
            }
            if ( (__int64)v25 > *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 148LL) )
              break;
            if ( v25 >= LODWORD(v24->fields.m_CancellationTokenSource) )
              goto LABEL_66;
            useLimitEquip = this->fields.useLimitEquip;
            Instance = (DataManager_o *)System_Int32__Parse(*((System_String_o **)&v24->fields._DispLog + v25), 0LL);
            if ( !useLimitEquip )
              goto LABEL_65;
            if ( v25 >= useLimitEquip->max_length )
              goto LABEL_66;
            useLimitEquip->m_Items[++v25] = (int)Instance;
          }
          while ( (__int64)v25 < SLODWORD(v24->fields.m_CancellationTokenSource) );
        }
      }
    }
    this->fields.isChkSave = 1;
  }
  Instance = (DataManager_o *)this->fields.limitMasterFormationButton;
  if ( !Instance
    || (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0LL )
  {
LABEL_65:
    sub_1B00F28(Instance, v17);
  }
  if ( (v21 & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    v28 = this->fields.useLimitEquip;
    v29 = (char *)v28 + 4 * (int)index;
    if ( isChng )
    {
      if ( !v28 )
        goto LABEL_65;
      if ( index >= v28->max_length )
        goto LABEL_66;
      *((_DWORD *)v29 + 8) = *((_DWORD *)v29 + 8) == 0;
    }
    else if ( !v28 )
    {
      goto LABEL_65;
    }
    if ( index < v28->max_length )
    {
      Instance = (DataManager_o *)this->fields.limitMasterFormationButton;
      if ( Instance )
      {
        v30 = *((_DWORD *)v29 + 8);
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)Instance,
                             (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( v30 )
        {
          AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_17295/*"btn_skill_on"*/, 0LL);
          Instance = (DataManager_o *)this->fields.limitEquipIcon;
          if ( Instance )
          {
            ItemIconComponent__SetColor((ItemIconComponent_o *)Instance, this->fields.ICON_MASK_COLOR, 0LL);
            Instance = (DataManager_o *)this->fields.masterEquipIcon1;
            if ( Instance )
            {
              ItemIconComponent__SetColor((ItemIconComponent_o *)Instance, this->fields.ICON_NORMAL_COLOR, 0LL);
              Instance = (DataManager_o *)this->fields.masterEquipIcon2;
              if ( Instance )
              {
                ItemIconComponent__SetColor((ItemIconComponent_o *)Instance, this->fields.ICON_NORMAL_COLOR, 0LL);
                Instance = (DataManager_o *)this->fields.masterEquipBackSprite;
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
          AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_17294/*"btn_skill_off"*/, 0LL);
          Instance = (DataManager_o *)this->fields.limitEquipIcon;
          if ( Instance )
          {
            ItemIconComponent__SetColor((ItemIconComponent_o *)Instance, this->fields.ICON_NORMAL_COLOR, 0LL);
            Instance = (DataManager_o *)this->fields.masterEquipIcon1;
            if ( Instance )
            {
              ItemIconComponent__SetColor((ItemIconComponent_o *)Instance, this->fields.ICON_MASK_COLOR, 0LL);
              Instance = (DataManager_o *)this->fields.masterEquipIcon2;
              if ( Instance )
              {
                ItemIconComponent__SetColor((ItemIconComponent_o *)Instance, this->fields.ICON_MASK_COLOR, 0LL);
                return;
              }
            }
          }
        }
      }
      goto LABEL_65;
    }
LABEL_66:
    sub_1B00F30(Instance, v17);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.masterEquipIcon1;
  if ( !Instance )
    goto LABEL_65;
  ItemIconComponent__SetColor((ItemIconComponent_o *)Instance, this->fields.ICON_MASK_COLOR, 0LL);
  Instance = (DataManager_o *)this->fields.masterEquipIcon2;
  if ( !Instance )
    goto LABEL_65;
  ItemIconComponent__SetColor((ItemIconComponent_o *)Instance, this->fields.ICON_MASK_COLOR, 0LL);
  limitEquipFixSprite = this->fields.limitEquipFixSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(limitEquipFixSprite, (System_String_o *)StringLiteral_19870/*"icon_equip_fixation"*/, 0LL);
}


void __fastcall PartyListViewIndicator__DrawPartyInfo(
        PartyListViewIndicator_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  PartyListViewItem_o *v3; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
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
  UnityEngine_GameObject_o *soloBaseObject; // x0
  UISprite_o *v22; // x21
  bool v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestRestrictionInfo_o *v31; // x0
  int32_t servantNumMax; // w1
  UISprite_o *v33; // x21
  struct QuestRestrictionInfo_o *v34; // x8
  BalanceConfig_c *v35; // x0
  const MethodInfo *v36; // x2
  UICommonButton_o *masterEquipButton; // x21
  struct QuestRestrictionInfo_o *v38; // x8
  struct QuestRestrictionInfo_o *v39; // x8
  int32_t maxCost; // w21
  QuestRestrictionInfo_o *v41; // x0
  int32_t TotalCostRestriction; // w22
  bool v43; // w21
  System_String_o *v44; // x21
  UILabel_o *maxCostLabel; // x22
  System_String_o *v46; // x0
  UILabel_o *splitCostLabel; // x22
  System_String_o *v48; // x0
  int cost; // w8
  UILabel_o *selectCostLabel; // x22
  System_String_o *v51; // x0
  System_String_o *v52; // x0
  Il2CppObject *Entity; // x0
  const MethodInfo *v54; // x3
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  __int64 v57; // x9
  int32_t v58; // w21
  ServantEntity_array *SvtEntityList; // x22
  const MethodInfo *v60; // x1
  System_String_array *SvtNameList; // x23
  const MethodInfo *v62; // x1
  System_Boolean_array *IsFollowerList; // x24
  EventPartyMargeUpValInfo_o *v64; // x25
  int32_t v65; // w2
  int32_t v66; // w3
  const MethodInfo *v67; // x3
  EventUpValInfo_array *v68; // x8
  unsigned __int64 v69; // x20
  unsigned __int64 max_length; // x9
  EventPartyMargeUpValInfo_o *eventMargeUpValInfo; // x22
  UILabel_o *selectNameLabel; // x21
  System_String_o *v73; // x0
  EventUpValInfo_array *eventUpValList; // [xsp+8h] [xbp-78h] BYREF
  int32_t genderImageId; // [xsp+14h] [xbp-6Ch] BYREF
  System_String_o *detail; // [xsp+18h] [xbp-68h] BYREF
  System_String_o *equipName; // [xsp+20h] [xbp-60h] BYREF
  int32_t maxLv; // [xsp+2Ch] [xbp-54h] BYREF
  int32_t condUsrLv[2]; // [xsp+30h] [xbp-50h] BYREF
  __int64 eventId; // [xsp+38h] [xbp-48h] BYREF

  v3 = partyItem;
  if ( (byte_48DE884 & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, partyItem);
    sub_1B00CCC(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v5);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserEquipMaster___, v6);
    sub_1B00CCC(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v7);
    sub_1B00CCC(&EventPartyMargeUpValInfo_TypeInfo, v8);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v9);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v10);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B00CCC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    sub_1B00CCC(&StringLiteral_10160/*"PARTY_ORGANIZATION_NAME"*/, v13);
    sub_1B00CCC(&StringLiteral_23044/*"solo_bg"*/, v14);
    sub_1B00CCC(&StringLiteral_10128/*"PARTY_ORGANIZATION_COST_SPLIT"*/, v15);
    sub_1B00CCC(&StringLiteral_10126/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, v16);
    sub_1B00CCC(&StringLiteral_10127/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, v17);
    sub_1B00CCC(&StringLiteral_23075/*"specialparty_bg"*/, v18);
    sub_1B00CCC(&StringLiteral_10125/*"PARTY_ORGANIZATION_COST_COLOR"*/, v19);
    sub_1B00CCC(&StringLiteral_1/*""*/, v20);
    byte_48DE884 = 1;
  }
  *(_QWORD *)condUsrLv = 0LL;
  eventId = 0LL;
  maxLv = 0;
  detail = 0LL;
  equipName = 0LL;
  genderImageId = 0;
  eventUpValList = 0LL;
  if ( !v3 )
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
                          sub_1B00C70(
                            (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
                            0,
                            v24,
                            v25);
                          this->fields.eventMargeUpValInfo = 0LL;
                          sub_1B00C70(
                            (ServantStatusBattleListViewItem_o *)&this->fields.eventMargeUpValInfo,
                            0,
                            v26,
                            v27);
                          goto LABEL_25;
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
    goto LABEL_108;
  }
  switch ( this->fields.menuKind )
  {
    case 1:
    case 3:
      soloBaseObject = this->fields.soloBaseObject;
      if ( !soloBaseObject )
        goto LABEL_108;
      soloBaseObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     soloBaseObject,
                                                     (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !this->fields.soloBaseObject )
        goto LABEL_108;
      v22 = (UISprite_o *)soloBaseObject;
      UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0LL);
      if ( !v22 )
        goto LABEL_108;
      UISprite__set_spriteName(v22, (System_String_o *)StringLiteral_23044/*"solo_bg"*/, 0LL);
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v22->klass->vtable._33_MakePixelPerfect.method)(
        v22,
        v22->klass->vtable._34_get_minWidth.methodPtr);
      soloBaseObject = this->fields.organizationNumObject;
      if ( !soloBaseObject )
        goto LABEL_108;
      UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
      soloBaseObject = this->fields.indexBaseObject;
      if ( !soloBaseObject )
        goto LABEL_108;
      UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
      soloBaseObject = this->fields.selectNameBaseObject;
      if ( !soloBaseObject )
        goto LABEL_108;
      UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
      soloBaseObject = this->fields.costBaseObject;
      if ( !soloBaseObject )
        goto LABEL_108;
      v23 = 0;
      goto LABEL_70;
    case 2:
      soloBaseObject = this->fields.soloBaseObject;
      if ( !soloBaseObject )
        goto LABEL_108;
      soloBaseObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     soloBaseObject,
                                                     (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !this->fields.soloBaseObject )
        goto LABEL_108;
      v33 = (UISprite_o *)soloBaseObject;
      UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0LL);
      if ( !v33 )
        goto LABEL_108;
      UISprite__set_spriteName(v33, (System_String_o *)StringLiteral_23075/*"specialparty_bg"*/, 0LL);
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v33->klass->vtable._33_MakePixelPerfect.method)(
        v33,
        v33->klass->vtable._34_get_minWidth.methodPtr);
      soloBaseObject = this->fields.organizationNumObject;
      if ( !soloBaseObject )
        goto LABEL_108;
      UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
      goto LABEL_65;
    case 4:
    case 5:
      soloBaseObject = this->fields.soloBaseObject;
      if ( !soloBaseObject )
        goto LABEL_108;
      UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
      soloBaseObject = this->fields.organizationNumObject;
      if ( !soloBaseObject )
        goto LABEL_108;
      UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_65;
      goto LABEL_36;
    case 6:
    case 7:
      soloBaseObject = this->fields.soloBaseObject;
      if ( !soloBaseObject )
        goto LABEL_108;
      UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
      soloBaseObject = this->fields.organizationNumObject;
      if ( !soloBaseObject )
        goto LABEL_108;
      UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
      v31 = this->fields.questRestrictionInfo;
      if ( !v31 )
        goto LABEL_65;
      soloBaseObject = (UnityEngine_GameObject_o *)QuestRestrictionInfo__IsServantNum(v31, 0LL);
      if ( ((unsigned __int8)soloBaseObject & 1) != 0 )
      {
        questRestrictionInfo = this->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_108;
LABEL_36:
        servantNumMax = questRestrictionInfo->fields.servantNumMax;
      }
      else
      {
        soloBaseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !soloBaseObject )
          goto LABEL_108;
        soloBaseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)soloBaseObject,
                                                       (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
        v38 = this->fields.questRestrictionInfo;
        if ( !v38 )
          goto LABEL_108;
        if ( !soloBaseObject )
          goto LABEL_108;
        soloBaseObject = (UnityEngine_GameObject_o *)NpcFollowerMaster__GetQuestFollowerList(
                                                       (NpcFollowerMaster_o *)soloBaseObject,
                                                       v38->fields.questId,
                                                       v38->fields.questPhase,
                                                       0LL);
        v39 = this->fields.questRestrictionInfo;
        if ( !v39 || !soloBaseObject )
          goto LABEL_108;
        servantNumMax = v39->fields.myServantNumMax + LODWORD(soloBaseObject[1].klass);
      }
      goto LABEL_64;
    case 9:
      soloBaseObject = this->fields.soloBaseObject;
      if ( !soloBaseObject )
        goto LABEL_108;
      UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
      soloBaseObject = this->fields.organizationNumObject;
      if ( !soloBaseObject )
        goto LABEL_108;
      UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
      soloBaseObject = this->fields.indexBaseObject;
      if ( !soloBaseObject )
        goto LABEL_108;
      UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
      soloBaseObject = this->fields.selectNameBaseObject;
      if ( !soloBaseObject )
        goto LABEL_108;
      UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
      soloBaseObject = this->fields.costBaseObject;
      if ( !soloBaseObject )
        goto LABEL_108;
      UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
      soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEventPointIndicator;
      if ( !soloBaseObject )
        goto LABEL_108;
      soloBaseObject = (UnityEngine_GameObject_o *)PartyEventPointIndicator__SetTrendDisp(
                                                     (PartyEventPointIndicator_o *)soloBaseObject,
                                                     v3->fields.waveBattleEnemyClassIds,
                                                     v36);
      masterEquipButton = this->fields.masterEquipButton;
      if ( v3->fields._IsWaveBattleRestart_k__BackingField )
      {
        soloBaseObject = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !soloBaseObject )
          goto LABEL_108;
        partyItem = (PartyListViewItem_o *)(soloBaseObject[4].fields.m_CachedPtr == 1);
      }
      else
      {
        partyItem = (PartyListViewItem_o *)(&dword_0 + 1);
      }
      if ( !masterEquipButton )
        goto LABEL_108;
      UICommonButton__SetEnable(masterEquipButton, (bool)partyItem, 0LL);
      soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partySwapButton;
      if ( !soloBaseObject )
        goto LABEL_108;
      UICommonButton__SetEnable((UICommonButton_o *)soloBaseObject, !v3->fields._IsClearedWave_k__BackingField, 0LL);
      soloBaseObject = (UnityEngine_GameObject_o *)this->fields.autoOrganizationButton;
      if ( !soloBaseObject )
        goto LABEL_108;
      UICommonButton__SetEnable((UICommonButton_o *)soloBaseObject, !v3->fields._IsClearedWave_k__BackingField, 0LL);
      soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEditButton;
      if ( !soloBaseObject )
        goto LABEL_108;
      UICommonButton__SetEnable((UICommonButton_o *)soloBaseObject, !v3->fields._IsClearedWave_k__BackingField, 0LL);
      goto LABEL_71;
    default:
      v34 = this->fields.questRestrictionInfo;
      if ( v34 && v34->fields.eventDeckNum >= 1 )
      {
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_108;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_108;
        UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
        v35 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v35 = BalanceConfig_TypeInfo;
        }
        servantNumMax = v35->static_fields->DeckMemberMax;
LABEL_64:
        PartyListViewIndicator__SetEventDeckPartyName(this, servantNumMax, v29);
LABEL_65:
        soloBaseObject = this->fields.indexBaseObject;
        if ( !soloBaseObject
          || (UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL),
              (soloBaseObject = this->fields.selectNameBaseObject) == 0LL) )
        {
LABEL_108:
          sub_1B00F28(soloBaseObject, partyItem);
        }
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
      }
      else
      {
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_108;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_108;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.indexBaseObject;
        if ( !soloBaseObject )
          goto LABEL_108;
        UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
        soloBaseObject = this->fields.selectNameBaseObject;
        if ( !soloBaseObject )
          goto LABEL_108;
        UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
        selectNameLabel = this->fields.selectNameLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v73 = LocalizationManager__Get((System_String_o *)StringLiteral_10160/*"PARTY_ORGANIZATION_NAME"*/, 0LL);
        soloBaseObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                       v73,
                                                       (Il2CppObject *)v3->fields.deckName,
                                                       0LL);
        if ( !selectNameLabel )
          goto LABEL_108;
        UILabel__set_text(selectNameLabel, (System_String_o *)soloBaseObject, 0LL);
      }
      soloBaseObject = this->fields.costBaseObject;
      if ( !soloBaseObject )
        goto LABEL_108;
      v23 = 1;
LABEL_70:
      UnityEngine_GameObject__SetActive(soloBaseObject, v23, 0LL);
LABEL_71:
      maxCost = v3->fields.maxCost;
      HIDWORD(eventId) = maxCost;
      v41 = this->fields.questRestrictionInfo;
      if ( v41 )
        TotalCostRestriction = QuestRestrictionInfo__GetTotalCostRestriction(v41, 0LL);
      else
        TotalCostRestriction = 0;
      v43 = TotalCostRestriction != 0 && maxCost > TotalCostRestriction;
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( v43 )
        {
LABEL_76:
          v44 = LocalizationManager__Get((System_String_o *)StringLiteral_10127/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0LL);
          HIDWORD(eventId) = TotalCostRestriction;
          goto LABEL_79;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v43 )
          goto LABEL_76;
      }
      v44 = LocalizationManager__Get((System_String_o *)StringLiteral_10125/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
LABEL_79:
      maxCostLabel = this->fields.maxCostLabel;
      v46 = System_Int32__ToString((int32_t)&eventId + 4, 0LL);
      soloBaseObject = (UnityEngine_GameObject_o *)System_String__Concat_60325748(v44, v46, 0LL);
      if ( !maxCostLabel )
        goto LABEL_108;
      UILabel__set_text(maxCostLabel, (System_String_o *)soloBaseObject, 0LL);
      splitCostLabel = this->fields.splitCostLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v48 = LocalizationManager__Get((System_String_o *)StringLiteral_10128/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
      soloBaseObject = (UnityEngine_GameObject_o *)System_String__Concat_60325748(v44, v48, 0LL);
      if ( !splitCostLabel )
        goto LABEL_108;
      UILabel__set_text(splitCostLabel, (System_String_o *)soloBaseObject, 0LL);
      cost = v3->fields.cost;
      selectCostLabel = this->fields.selectCostLabel;
      if ( cost > SHIDWORD(eventId) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v51 = LocalizationManager__Get((System_String_o *)StringLiteral_10126/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
        cost = v3->fields.cost;
        v44 = v51;
      }
      condUsrLv[1] = cost;
      v52 = System_Int32__ToString((int32_t)&condUsrLv[1], 0LL);
      soloBaseObject = (UnityEngine_GameObject_o *)System_String__Concat_60325748(v44, v52, 0LL);
      if ( !selectCostLabel )
        goto LABEL_108;
      UILabel__set_text(selectCostLabel, (System_String_o *)soloBaseObject, 0LL);
      soloBaseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !soloBaseObject )
        goto LABEL_108;
      soloBaseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)soloBaseObject,
                                                     (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserEquipMaster___);
      if ( !soloBaseObject )
        goto LABEL_108;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)soloBaseObject,
                 v3->fields.userEquipId,
                 (const MethodInfo_2FE6BF8 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
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
          goto LABEL_108;
        ItemIconComponent__SetEquipItem((ItemIconComponent_o *)soloBaseObject, genderImageId, 0LL);
        soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipIcon2;
        if ( !soloBaseObject )
          goto LABEL_108;
        ItemIconComponent__SetEquipItem((ItemIconComponent_o *)soloBaseObject, genderImageId, 0LL);
      }
      PartyListViewIndicator__DrawEventLimitEquip(this, v3, 0, v54);
      setupInfo = this->fields.setupInfo;
      if ( !setupInfo )
        goto LABEL_99;
      eventIdList = setupInfo->fields.eventIdList;
      if ( !eventIdList )
        goto LABEL_108;
      v57 = *(_QWORD *)&eventIdList->max_length;
      if ( v57 )
      {
        if ( !(_DWORD)v57 )
LABEL_123:
          sub_1B00F30(soloBaseObject, partyItem);
        v58 = eventIdList->m_Items[1];
      }
      else
      {
LABEL_99:
        v58 = 0;
      }
      LODWORD(eventId) = v58;
      SvtEntityList = PartyListViewItem__GetSvtEntityList(v3, (const MethodInfo *)partyItem);
      SvtNameList = PartyListViewItem__GetSvtNameList(v3, v60);
      IsFollowerList = PartyListViewItem__GetIsFollowerList(v3, v62);
      v64 = (EventPartyMargeUpValInfo_o *)sub_1B00F18(EventPartyMargeUpValInfo_TypeInfo);
      EventPartyMargeUpValInfo___ctor(v64, v58, SvtEntityList, SvtNameList, IsFollowerList, 0LL);
      this->fields.eventMargeUpValInfo = v64;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.eventMargeUpValInfo, (int32_t)v64, v65, v66);
      soloBaseObject = (UnityEngine_GameObject_o *)PartyListViewItem__GetEventUpVal(
                                                     v3,
                                                     (int32_t *)&eventId,
                                                     &eventUpValList,
                                                     v67);
      v68 = eventUpValList;
      if ( !eventUpValList )
        goto LABEL_108;
      v69 = 0LL;
      while ( 1 )
      {
        max_length = v68->max_length;
        if ( (__int64)v69 >= (int)max_length )
          break;
        if ( v69 >= max_length )
          goto LABEL_123;
        soloBaseObject = (UnityEngine_GameObject_o *)v68->m_Items[v69];
        if ( soloBaseObject )
        {
          eventMargeUpValInfo = this->fields.eventMargeUpValInfo;
          soloBaseObject = (UnityEngine_GameObject_o *)EventUpValInfo__GetDropItemList(
                                                         (EventUpValInfo_o *)soloBaseObject,
                                                         v69,
                                                         0LL);
          if ( !eventMargeUpValInfo )
            goto LABEL_108;
          EventPartyMargeUpValInfo__Add(eventMargeUpValInfo, (EventDropItemUpValInfo_array *)soloBaseObject, 0LL);
          v68 = eventUpValList;
        }
        ++v69;
        if ( !v68 )
          goto LABEL_108;
      }
LABEL_25:
      soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEventPointIndicator;
      if ( !soloBaseObject )
        goto LABEL_108;
      PartyEventPointIndicator__SetTotalDropItemList(
        (PartyEventPointIndicator_o *)soloBaseObject,
        (EventPartyMargeUpValInfo_o *)partyItem,
        v28);
      return;
  }
}


bool __fastcall PartyListViewIndicator__IsEventOnlyEquip(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_48DE88B & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1B00CCC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_48DE88B = 1;
  }
  entity = 0LL;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (questRestrictionInfo = this->fields.questRestrictionInfo) == 0LL)
    || !Instance )
  {
LABEL_12:
    sub_1B00F28(Instance, v6);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          questRestrictionInfo->fields.eventId,
          (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
    goto LABEL_12;
  return EventDetailEntity__IsEventOnlyEquip((EventDetailEntity_o *)entity, 0LL);
}


bool __fastcall PartyListViewIndicator__IsUseEventLimitEquipUserWill(
        PartyListViewIndicator_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v10; // x8
  int32_t DeckMax; // w20
  BalanceConfig_c *v12; // x0
  struct System_Int32_array *useLimitEquip; // x8
  EventEquipSkillReleaseEntity_o *outEnt; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_48DE88A & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, partyItem);
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___, v5);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_48DE88A = 1;
  }
  outEnt = 0LL;
  if ( !PartyListViewIndicator__IsEventOnlyEquip(this, (const MethodInfo *)partyItem) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)EventEquipSkillReleaseMaster__tryGetOpenEventEquipSkillReleaseEntity(
                                (EventEquipSkillReleaseMaster_o *)Instance,
                                questRestrictionInfo->fields.eventId,
                                &outEnt,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !partyItem )
    goto LABEL_24;
  v10 = partyItem->fields.questRestrictionInfo;
  if ( v10 )
    LOBYTE(v10) = v10->fields.eventDeckNum > 0;
  if ( ((unsigned __int8)v10 & 1) != 0 || (unsigned int)(partyItem->fields.menuKind - 1) <= 6 )
  {
    v12 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v12 = BalanceConfig_TypeInfo;
    }
    DeckMax = v12->static_fields->DeckMax;
  }
  else
  {
    DeckMax = partyItem->fields.index;
  }
  Instance = (DataManager_o *)outEnt;
  if ( !outEnt )
    goto LABEL_24;
  Instance = (DataManager_o *)EventEquipSkillReleaseEntity__isForceOverwrite(outEnt, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    return 0;
  useLimitEquip = this->fields.useLimitEquip;
  if ( !useLimitEquip )
LABEL_24:
    sub_1B00F28(Instance, v8);
  if ( DeckMax >= useLimitEquip->max_length )
    sub_1B00F30(Instance, v8);
  return useLimitEquip->m_Items[DeckMax + 1] == 0;
}


void __fastcall PartyListViewIndicator__OnClickLeft(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *manager; // x20
  __int64 v5; // x1
  ListViewManager_o *v6; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  int32_t pageIndex; // w8
  struct ListViewManager_o *v10; // x8
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0

  if ( (byte_48DE886 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    sub_1B00CCC(&Method_PartyListViewIndicator_OnClickLeft__, v3);
    byte_48DE886 = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(manager, 0LL, 0LL)
    && this->fields.isScrollEnabled
    && (this->fields.pageIndex & 0x80000000) == 0 )
  {
    v6 = this->fields.manager;
    if ( !v6 )
      goto LABEL_22;
    ListViewManager__BackLoopItem(v6, 0LL);
    if ( this->fields.pageIndex >= 1 )
    {
      v7 = Method_PartyListViewIndicator_OnClickLeft__;
      if ( (*((_BYTE *)Method_PartyListViewIndicator_OnClickLeft__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1B00CE4(Method_PartyListViewIndicator_OnClickLeft__);
      v8 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 7, 0LL);
      v6 = this->fields.manager;
      if ( v6 )
      {
        pageIndex = this->fields.pageIndex;
LABEL_20:
        ListViewManager__MoveCenterItem(v6, pageIndex - 1, 1, 0, 0.0, 0LL);
        return;
      }
      goto LABEL_22;
    }
    v10 = this->fields.manager;
    if ( !v10 )
      goto LABEL_22;
    if ( v10->fields.isLoop )
    {
      v11 = Method_PartyListViewIndicator_OnClickLeft__;
      if ( (*((_BYTE *)Method_PartyListViewIndicator_OnClickLeft__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1B00CE4(Method_PartyListViewIndicator_OnClickLeft__);
      v12 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 7, 0LL);
      v6 = this->fields.manager;
      if ( v6 )
      {
        pageIndex = this->fields.pageMax;
        goto LABEL_20;
      }
LABEL_22:
      sub_1B00F28(v6, v5);
    }
  }
}


void __fastcall PartyListViewIndicator__OnClickRight(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *manager; // x20
  __int64 v5; // x1
  ListViewManager_o *v6; // x0
  int32_t pageIndex; // w8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  int32_t v10; // w1
  struct ListViewManager_o *v11; // x8
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0

  if ( (byte_48DE887 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    sub_1B00CCC(&Method_PartyListViewIndicator_OnClickRight__, v3);
    byte_48DE887 = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(manager, 0LL, 0LL)
    && this->fields.isScrollEnabled
    && (this->fields.pageIndex & 0x80000000) == 0 )
  {
    v6 = this->fields.manager;
    if ( !v6 )
      goto LABEL_23;
    ListViewManager__FowardLoopItem(v6, 0LL);
    pageIndex = this->fields.pageIndex;
    if ( (pageIndex & 0x80000000) == 0 && pageIndex < this->fields.pageMax - 1 )
    {
      v8 = Method_PartyListViewIndicator_OnClickRight__;
      if ( (*((_BYTE *)Method_PartyListViewIndicator_OnClickRight__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1B00CE4(Method_PartyListViewIndicator_OnClickRight__);
      v9 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 7, 0LL);
      v6 = this->fields.manager;
      if ( v6 )
      {
        v10 = this->fields.pageIndex + 1;
LABEL_21:
        ListViewManager__MoveCenterItem(v6, v10, 1, 0, 0.0, 0LL);
        return;
      }
      goto LABEL_23;
    }
    v11 = this->fields.manager;
    if ( !v11 )
      goto LABEL_23;
    if ( v11->fields.isLoop )
    {
      v12 = Method_PartyListViewIndicator_OnClickRight__;
      if ( (*((_BYTE *)Method_PartyListViewIndicator_OnClickRight__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1B00CE4(Method_PartyListViewIndicator_OnClickRight__);
      v13 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 7, 0LL);
      v6 = this->fields.manager;
      if ( v6 )
      {
        v10 = 0;
        goto LABEL_21;
      }
LABEL_23:
      sub_1B00F28(v6, v5);
    }
  }
}


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
  UnityEngine_GameObject_o *leftObject; // x0
  __int64 v14; // x1
  struct ListViewManager_o *v15; // x8
  _BOOL4 isLoop; // w8
  bool v17; // w9
  bool v18; // w8
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  __int64 methodPtr_low; // x10
  ListViewItem_o *v22; // x1

  if ( (byte_48DE881 & 1) == 0 )
  {
    sub_1B00CCC(&PartyListViewItem_TypeInfo, manager);
    byte_48DE881 = 1;
  }
  this->fields.manager = manager;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.manager, (int32_t)manager, (int32_t)item, isTop);
  v15 = this->fields.manager;
  if ( !v15 )
    goto LABEL_19;
  isLoop = v15->fields.isLoop;
  leftObject = this->fields.leftObject;
  v17 = isLeft || isRight;
  if ( isLoop )
    isRight |= isLeft;
  if ( !leftObject
    || (isLoop ? (v18 = v17) : (v18 = isLeft),
        UnityEngine_GameObject__SetActive(leftObject, v18, 0LL),
        (leftObject = this->fields.rightObject) == 0LL) )
  {
LABEL_19:
    sub_1B00F28(leftObject, v14);
  }
  UnityEngine_GameObject__SetActive(leftObject, isRight, 0LL);
  if ( !item )
  {
    PartyListViewIndicator__SetPageIndex(this, -1, v19);
    goto LABEL_17;
  }
  PartyListViewIndicator__SetPageIndex(this, item->fields.index, v19);
  methodPtr_low = LOBYTE(PartyListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
  {
LABEL_17:
    v22 = 0LL;
    goto LABEL_18;
  }
  if ( (PartyListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyListViewItem_TypeInfo )
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *organizationNumObject; // x0
  int v10; // w8
  UnityEngine_GameObject_o *v11; // x19
  __int64 *v12; // x8
  UISprite_o *v13; // x21

  if ( (byte_48DE888 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, *(_QWORD *)&servantNum);
    sub_1B00CCC(&StringLiteral_20826/*"limited_bg"*/, v5);
    sub_1B00CCC(&StringLiteral_23044/*"solo_bg"*/, v6);
    sub_1B00CCC(&StringLiteral_23158/*"startingonly_bg"*/, v7);
    sub_1B00CCC(&StringLiteral_22140/*"pair_bg"*/, v8);
    byte_48DE888 = 1;
  }
  organizationNumObject = this->fields.organizationNumObject;
  if ( !organizationNumObject )
LABEL_19:
    sub_1B00F28(organizationNumObject, *(_QWORD *)&servantNum);
  organizationNumObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        organizationNumObject,
                                                        (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v10 = servantNum - 1;
  v11 = organizationNumObject;
  switch ( v10 )
  {
    case 0:
      organizationNumObject = this->fields.soloBaseObject;
      if ( !organizationNumObject )
        goto LABEL_19;
      organizationNumObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            organizationNumObject,
                                                            (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !this->fields.soloBaseObject )
        goto LABEL_19;
      v13 = (UISprite_o *)organizationNumObject;
      UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0LL);
      organizationNumObject = this->fields.organizationNumObject;
      if ( !organizationNumObject )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive(organizationNumObject, 0, 0LL);
      if ( !v13 )
        goto LABEL_19;
      UISprite__set_spriteName(v13, (System_String_o *)StringLiteral_23044/*"solo_bg"*/, 0LL);
      organizationNumObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v13->klass->vtable._33_MakePixelPerfect.method)(
                                                            v13,
                                                            v13->klass->vtable._34_get_minWidth.methodPtr);
      if ( !v11 )
        goto LABEL_19;
      goto LABEL_18;
    case 1:
      if ( !organizationNumObject )
        goto LABEL_19;
      v12 = &StringLiteral_22140/*"pair_bg"*/;
      break;
    case 2:
      if ( !organizationNumObject )
        goto LABEL_19;
      v12 = &StringLiteral_23158/*"startingonly_bg"*/;
      break;
    default:
      if ( !organizationNumObject )
        goto LABEL_19;
      v12 = &StringLiteral_20826/*"limited_bg"*/;
      break;
  }
  UISprite__set_spriteName((UISprite_o *)organizationNumObject, (System_String_o *)*v12, 0LL);
LABEL_18:
  ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))v11->klass[2]._1.typeMetadataHandle)(
    v11,
    v11->klass[2]._1.interopData);
}


void __fastcall PartyListViewIndicator__SetEventId(
        PartyListViewIndicator_o *this,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        System_Int32_array *classIds,
        const MethodInfo *method)
{
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  EventPartyMargeUpValInfo_o *v12; // x1
  const MethodInfo *v13; // x3
  PartyEventPointIndicator_o *partyEventPointIndicator; // x0
  const MethodInfo *v15; // x2

  this->fields.setupInfo = setupInfo;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.setupInfo,
    (int32_t)setupInfo,
    (int32_t)questRestrictionInfo,
    (int32_t)classIds);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v8,
    v9);
  this->fields.eventMargeUpValInfo = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.eventMargeUpValInfo, 0, v10, v11);
  partyEventPointIndicator = this->fields.partyEventPointIndicator;
  if ( !partyEventPointIndicator
    || (PartyEventPointIndicator__SetInfomation(partyEventPointIndicator, questRestrictionInfo, classIds, v13),
        (partyEventPointIndicator = this->fields.partyEventPointIndicator) == 0LL) )
  {
    sub_1B00F28(partyEventPointIndicator, v12);
  }
  PartyEventPointIndicator__SetTotalDropItemList(partyEventPointIndicator, v12, v15);
}


void __fastcall PartyListViewIndicator__SetEventLimitEquipSetting(
        PartyListViewIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *IsEventOnlyEquip; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  struct System_Int32_array *useLimitEquip; // x21
  __int64 v12; // x8
  System_String_o *v13; // x20
  unsigned __int64 v14; // x22
  int v15; // w26
  Il2CppObject *v16; // x0
  int v17; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_48DE889 & 1) == 0 )
  {
    sub_1B00CCC(&int_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_8163/*"LIMIT_EQUIP_SETTING"*/, v3);
    sub_1B00CCC(&StringLiteral_865/*","*/, v4);
    sub_1B00CCC(&StringLiteral_1/*""*/, v5);
    byte_48DE889 = 1;
  }
  IsEventOnlyEquip = (System_String_o *)PartyListViewIndicator__IsEventOnlyEquip(this, method);
  if ( ((unsigned __int8)IsEventOnlyEquip & 1) != 0 )
  {
    useLimitEquip = this->fields.useLimitEquip;
    if ( !useLimitEquip )
      goto LABEL_15;
    v12 = *(_QWORD *)&useLimitEquip->max_length;
    v13 = (System_String_o *)StringLiteral_1/*""*/;
    if ( (int)v12 >= 1 )
    {
      v14 = 0LL;
      while ( 1 )
      {
        if ( v14 >= (unsigned int)v12 )
          sub_1B00F30(IsEventOnlyEquip, v7);
        if ( !v13 )
          break;
        v15 = useLimitEquip->m_Items[v14 + 1];
        if ( v13->fields._stringLength >= 1 )
          v13 = System_String__Concat_60325748(v13, (System_String_o *)StringLiteral_865/*","*/, 0LL);
        v17 = v15;
        v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v8, v9, v10);
        IsEventOnlyEquip = System_String__Concat((Il2CppObject *)v13, v16, 0LL);
        LODWORD(v12) = useLimitEquip->max_length;
        ++v14;
        v13 = IsEventOnlyEquip;
        if ( (__int64)v14 >= (int)v12 )
          goto LABEL_12;
      }
LABEL_15:
      sub_1B00F28(IsEventOnlyEquip, v7);
    }
LABEL_12:
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_8163/*"LIMIT_EQUIP_SETTING"*/, v13, 0LL);
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
    sub_1B00F28(leftObject, v4);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewIndicator__SetPageIndex(
        PartyListViewIndicator_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  UnityEngine_Object_o *pageBaseObject; // x21
  UISprite_o *gameObject; // x0
  __int64 v20; // x1
  __int64 v21; // x21
  struct UISprite_array *pageSpriteList; // x8
  __int64 *v23; // x8
  int v24; // w24
  struct UnityEngine_GameObject_o *waveNumObject; // x8
  Il2CppObject *Component_object; // x21
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  System_String_o *v29; // x21
  struct UISprite_o *indexSprite; // x8
  UISprite_o *v31; // x22
  UISprite_o *v32; // x22
  UISprite_o *waveMaxNumTensPlaceSprite; // x22
  System_String_o *v34; // x0
  System_String_o *v35; // x23
  UISprite_o *waveMaxNumTensPlaceGlowSprite; // x22
  System_String_o *v37; // x0
  System_String_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  int32_t v40; // w1
  UISprite_o *waveNumTensPlaceSprite; // x22
  System_String_o *v42; // x0
  System_String_o *v43; // x23
  UISprite_o *waveNumTensPlaceGlowSprite; // x22
  System_String_o *v45; // x0
  System_String_o *v46; // x0
  UISprite_o *waveNumOnesPlaceSprite; // x21
  System_String_o *v48; // x0
  System_String_o *v49; // x22
  UISprite_o *waveNumOnesPlaceGlowSprite; // x21
  System_String_o *v51; // x0
  System_String_o *v52; // x0
  UISprite_o *waveMaxNumOnesPlaceSprite; // x21
  System_String_o *v54; // x0
  System_String_o *v55; // x0
  UISprite_o *waveMaxNumOnesPlaceGlowSprite; // x21
  System_String_o *v57; // x0
  System_String_o *v58; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w21
  bool v61; // w20
  int v62; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_48DE883 & 1) == 0 )
  {
    sub_1B00CCC(&AtlasManager_TypeInfo, *(_QWORD *)&index);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v5);
    sub_1B00CCC(&LastUsedDeckNumberManager_TypeInfo, v6);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v7);
    sub_1B00CCC(&OptionManager_TypeInfo, v8);
    sub_1B00CCC(&StringLiteral_16895/*"battle_num_"*/, v9);
    sub_1B00CCC(&StringLiteral_20189/*"img_slider_on"*/, v10);
    sub_1B00CCC(&StringLiteral_16308/*"_glow"*/, v11);
    sub_1B00CCC(&StringLiteral_16897/*"battle_num_slash_glow"*/, v12);
    sub_1B00CCC(&StringLiteral_22170/*"party_txt_"*/, v13);
    sub_1B00CCC(&StringLiteral_16890/*"battle_bg"*/, v14);
    sub_1B00CCC(&StringLiteral_20188/*"img_slider_off"*/, v15);
    sub_1B00CCC(&StringLiteral_16896/*"battle_num_slash"*/, v16);
    sub_1B00CCC(&StringLiteral_22169/*"party_bg"*/, v17);
    byte_48DE883 = 1;
  }
  this->fields.pageIndex = index;
  if ( (index & 0x80000000) == 0 )
  {
    pageBaseObject = (UnityEngine_Object_o *)this->fields.pageBaseObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UISprite_o *)UnityEngine_Object__op_Inequality(pageBaseObject, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 && this->fields.pageMax >= 1 )
    {
      v21 = 0LL;
      do
      {
        pageSpriteList = this->fields.pageSpriteList;
        if ( !pageSpriteList )
          goto LABEL_92;
        if ( (unsigned int)v21 >= pageSpriteList->max_length )
          sub_1B00F30(gameObject, v20);
        gameObject = pageSpriteList->m_Items[v21];
        if ( !gameObject )
          goto LABEL_92;
        if ( index == (_DWORD)v21 )
          v23 = &StringLiteral_20189/*"img_slider_on"*/;
        else
          v23 = &StringLiteral_20188/*"img_slider_off"*/;
        UISprite__set_spriteName(gameObject, (System_String_o *)*v23, 0LL);
      }
      while ( (int)++v21 < this->fields.pageMax );
    }
    v24 = index + 1;
    v62 = index + 1;
    gameObject = (UISprite_o *)System_Int32__ToString((int32_t)&v62, 0LL);
    waveNumObject = this->fields.waveNumObject;
    if ( this->fields.menuKind == 9 )
    {
      if ( !waveNumObject )
        goto LABEL_92;
      gameObject = (UISprite_o *)UnityEngine_GameObject__get_gameObject(this->fields.waveNumObject, 0LL);
      if ( !gameObject )
        goto LABEL_92;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = this->fields.indexSprite;
      if ( !gameObject )
        goto LABEL_92;
      gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_92;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      GameObjectExtensions__SetLocalPositionY(this->fields.indexBaseObject, 260.0, 0LL);
      gameObject = (UISprite_o *)this->fields.indexBaseObject;
      if ( !gameObject )
        goto LABEL_92;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)gameObject,
                           (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetPartyOrganizationImage(
        (UISprite_o *)Component_object,
        (System_String_o *)StringLiteral_16890/*"battle_bg"*/,
        0LL);
      AtlasManager__SetPartyOrganizationImage(
        this->fields.waveNumSlashSprite,
        (System_String_o *)StringLiteral_16896/*"battle_num_slash"*/,
        0LL);
      AtlasManager__SetPartyOrganizationImage(
        this->fields.waveNumSlashGlowSprite,
        (System_String_o *)StringLiteral_16897/*"battle_num_slash_glow"*/,
        0LL);
      if ( this->fields.pageMax >= 10 )
      {
        gameObject = this->fields.waveMaxNumTensPlaceSprite;
        if ( !gameObject )
          goto LABEL_92;
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_92;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = this->fields.waveMaxNumTensPlaceGlowSprite;
        if ( !gameObject )
          goto LABEL_92;
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_92;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        waveMaxNumTensPlaceSprite = this->fields.waveMaxNumTensPlaceSprite;
        v62 = this->fields.pageMax / 10;
        v34 = System_Int32__ToString((int32_t)&v62, 0LL);
        v35 = System_String__Concat_60325748((System_String_o *)StringLiteral_16895/*"battle_num_"*/, v34, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetPartyOrganizationImage(waveMaxNumTensPlaceSprite, v35, 0LL);
        waveMaxNumTensPlaceGlowSprite = this->fields.waveMaxNumTensPlaceGlowSprite;
        v62 = this->fields.pageMax / 10;
        v37 = System_Int32__ToString((int32_t)&v62, 0LL);
        v38 = System_String__Concat_60337008(
                (System_String_o *)StringLiteral_16895/*"battle_num_"*/,
                v37,
                (System_String_o *)StringLiteral_16308/*"_glow"*/,
                0LL);
        AtlasManager__SetPartyOrganizationImage(waveMaxNumTensPlaceGlowSprite, v38, 0LL);
        gameObject = this->fields.waveMaxNumTensPlaceSprite;
        if ( !gameObject )
          goto LABEL_92;
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))gameObject->klass->vtable._33_MakePixelPerfect.method)(
          gameObject,
          gameObject->klass->vtable._34_get_minWidth.methodPtr);
        gameObject = this->fields.waveMaxNumTensPlaceGlowSprite;
        if ( !gameObject )
          goto LABEL_92;
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))gameObject->klass->vtable._33_MakePixelPerfect.method)(
          gameObject,
          gameObject->klass->vtable._34_get_minWidth.methodPtr);
        v39 = this->fields.waveNumObject;
        if ( v24 >= 10 )
        {
          GameObjectExtensions__SetLocalPositionX(v39, 7.0, 0LL);
          gameObject = this->fields.waveNumTensPlaceSprite;
          if ( !gameObject )
            goto LABEL_92;
          gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_92;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          gameObject = this->fields.waveNumTensPlaceGlowSprite;
          if ( !gameObject )
            goto LABEL_92;
          gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_92;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          waveNumTensPlaceSprite = this->fields.waveNumTensPlaceSprite;
          v62 = v24 / 0xAu;
          v42 = System_Int32__ToString((int32_t)&v62, 0LL);
          v43 = System_String__Concat_60325748((System_String_o *)StringLiteral_16895/*"battle_num_"*/, v42, 0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetPartyOrganizationImage(waveNumTensPlaceSprite, v43, 0LL);
          waveNumTensPlaceGlowSprite = this->fields.waveNumTensPlaceGlowSprite;
          v62 = v24 / 0xAu;
          v45 = System_Int32__ToString((int32_t)&v62, 0LL);
          v46 = System_String__Concat_60337008(
                  (System_String_o *)StringLiteral_16895/*"battle_num_"*/,
                  v45,
                  (System_String_o *)StringLiteral_16308/*"_glow"*/,
                  0LL);
          AtlasManager__SetPartyOrganizationImage(waveNumTensPlaceGlowSprite, v46, 0LL);
          gameObject = this->fields.waveNumTensPlaceSprite;
          if ( !gameObject )
            goto LABEL_92;
          ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))gameObject->klass->vtable._33_MakePixelPerfect.method)(
            gameObject,
            gameObject->klass->vtable._34_get_minWidth.methodPtr);
          gameObject = this->fields.waveNumTensPlaceGlowSprite;
          if ( !gameObject )
            goto LABEL_92;
          gameObject = (UISprite_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))gameObject->klass->vtable._33_MakePixelPerfect.method)(
                                       gameObject,
                                       gameObject->klass->vtable._34_get_minWidth.methodPtr);
          if ( !Component_object )
            goto LABEL_92;
          v40 = 322;
        }
        else
        {
          GameObjectExtensions__SetLocalPositionX(v39, 1.0, 0LL);
          gameObject = this->fields.waveNumTensPlaceSprite;
          if ( !gameObject )
            goto LABEL_92;
          gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_92;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          gameObject = this->fields.waveNumTensPlaceGlowSprite;
          if ( !gameObject )
            goto LABEL_92;
          gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_92;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          if ( !Component_object )
            goto LABEL_92;
          v40 = 308;
        }
        UIWidget__set_width((UIWidget_o *)Component_object, v40, 0LL);
      }
      else
      {
        GameObjectExtensions__SetLocalPositionX(this->fields.waveNumObject, 7.0, 0LL);
        gameObject = this->fields.waveNumTensPlaceSprite;
        if ( !gameObject )
          goto LABEL_92;
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_92;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        gameObject = this->fields.waveNumTensPlaceGlowSprite;
        if ( !gameObject )
          goto LABEL_92;
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_92;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        gameObject = this->fields.waveMaxNumTensPlaceSprite;
        if ( !gameObject )
          goto LABEL_92;
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_92;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        gameObject = this->fields.waveMaxNumTensPlaceGlowSprite;
        if ( !gameObject )
          goto LABEL_92;
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_92;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        if ( !Component_object )
          goto LABEL_92;
        UIWidget__set_width((UIWidget_o *)Component_object, 296, 0LL);
        gameObject = this->fields.waveMaxNumOnesPlaceSprite;
        if ( !gameObject )
          goto LABEL_92;
        v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionX(v27, 67.0, 0LL);
        gameObject = this->fields.waveMaxNumOnesPlaceGlowSprite;
        if ( !gameObject )
          goto LABEL_92;
        v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionX(v28, 67.0, 0LL);
      }
      waveNumOnesPlaceSprite = this->fields.waveNumOnesPlaceSprite;
      v62 = v24 % 10;
      v48 = System_Int32__ToString((int32_t)&v62, 0LL);
      v49 = System_String__Concat_60325748((System_String_o *)StringLiteral_16895/*"battle_num_"*/, v48, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetPartyOrganizationImage(waveNumOnesPlaceSprite, v49, 0LL);
      waveNumOnesPlaceGlowSprite = this->fields.waveNumOnesPlaceGlowSprite;
      v62 = v24 % 10;
      v51 = System_Int32__ToString((int32_t)&v62, 0LL);
      v52 = System_String__Concat_60337008(
              (System_String_o *)StringLiteral_16895/*"battle_num_"*/,
              v51,
              (System_String_o *)StringLiteral_16308/*"_glow"*/,
              0LL);
      AtlasManager__SetPartyOrganizationImage(waveNumOnesPlaceGlowSprite, v52, 0LL);
      waveMaxNumOnesPlaceSprite = this->fields.waveMaxNumOnesPlaceSprite;
      v62 = this->fields.pageMax % 10;
      v54 = System_Int32__ToString((int32_t)&v62, 0LL);
      v55 = System_String__Concat_60325748((System_String_o *)StringLiteral_16895/*"battle_num_"*/, v54, 0LL);
      AtlasManager__SetPartyOrganizationImage(waveMaxNumOnesPlaceSprite, v55, 0LL);
      waveMaxNumOnesPlaceGlowSprite = this->fields.waveMaxNumOnesPlaceGlowSprite;
      v62 = this->fields.pageMax % 10;
      v57 = System_Int32__ToString((int32_t)&v62, 0LL);
      v58 = System_String__Concat_60337008(
              (System_String_o *)StringLiteral_16895/*"battle_num_"*/,
              v57,
              (System_String_o *)StringLiteral_16308/*"_glow"*/,
              0LL);
      AtlasManager__SetPartyOrganizationImage(waveMaxNumOnesPlaceGlowSprite, v58, 0LL);
      gameObject = this->fields.waveNumOnesPlaceSprite;
      if ( !gameObject )
        goto LABEL_92;
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))gameObject->klass->vtable._33_MakePixelPerfect.method)(
        gameObject,
        gameObject->klass->vtable._34_get_minWidth.methodPtr);
      gameObject = this->fields.waveNumOnesPlaceGlowSprite;
      if ( !gameObject )
        goto LABEL_92;
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))gameObject->klass->vtable._33_MakePixelPerfect.method)(
        gameObject,
        gameObject->klass->vtable._34_get_minWidth.methodPtr);
      gameObject = this->fields.waveMaxNumOnesPlaceSprite;
      if ( !gameObject )
        goto LABEL_92;
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))gameObject->klass->vtable._33_MakePixelPerfect.method)(
        gameObject,
        gameObject->klass->vtable._34_get_minWidth.methodPtr);
      gameObject = this->fields.waveMaxNumOnesPlaceGlowSprite;
      if ( !gameObject )
        goto LABEL_92;
    }
    else
    {
      if ( !waveNumObject )
        goto LABEL_92;
      v29 = (System_String_o *)gameObject;
      gameObject = (UISprite_o *)UnityEngine_GameObject__get_gameObject(this->fields.waveNumObject, 0LL);
      if ( !gameObject )
        goto LABEL_92;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      GameObjectExtensions__SetLocalPositionY(this->fields.indexBaseObject, 271.0, 0LL);
      gameObject = (UISprite_o *)this->fields.indexBaseObject;
      if ( !gameObject )
        goto LABEL_92;
      gameObject = (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)gameObject,
                                   (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      indexSprite = this->fields.indexSprite;
      if ( !indexSprite )
        goto LABEL_92;
      v31 = gameObject;
      if ( !gameObject )
        goto LABEL_92;
      UISprite__set_atlas(gameObject, indexSprite->fields.mAtlas, 0LL);
      UISprite__set_spriteName(v31, (System_String_o *)StringLiteral_22169/*"party_bg"*/, 0LL);
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v31->klass->vtable._33_MakePixelPerfect.method)(
        v31,
        v31->klass->vtable._34_get_minWidth.methodPtr);
      gameObject = this->fields.indexSprite;
      if ( !gameObject )
        goto LABEL_92;
      gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_92;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v32 = this->fields.indexSprite;
      gameObject = (UISprite_o *)System_String__Concat_60325748((System_String_o *)StringLiteral_22170/*"party_txt_"*/, v29, 0LL);
      if ( !v32 )
        goto LABEL_92;
      UISprite__set_spriteName(v32, (System_String_o *)gameObject, 0LL);
      gameObject = this->fields.indexSprite;
      if ( !gameObject )
        goto LABEL_92;
    }
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))gameObject->klass->vtable._33_MakePixelPerfect.method)(
      gameObject,
      gameObject->klass->vtable._34_get_minWidth.methodPtr);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_87;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    gameObject = (UISprite_o *)OptionManager__GetAutoSelectParty(0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_92;
      questId = questRestrictionInfo->fields.questId;
      if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      v61 = LastUsedDeckNumberManager__GetDeckNumber(questId, 0LL) - 1 == index;
    }
    else
    {
LABEL_87:
      v61 = 0;
    }
    gameObject = this->fields.lastTimeUsedSprite;
    if ( !gameObject
      || (gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
    {
LABEL_92:
      sub_1B00F28(gameObject, v20);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v61, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewIndicator__SetPageMax(
        PartyListViewIndicator_o *this,
        int32_t max,
        const MethodInfo *method)
{
  PartyListViewIndicator_o *v4; // x19
  __int64 v5; // x1
  struct UISprite_array *pageSpriteList; // x8
  int32_t max_length; // w9
  UnityEngine_Object_o *pageBaseObject; // x20
  struct UISprite_array *v9; // x8
  __int64 v10; // x20
  int v11; // w9
  System_String_o *v12; // x1
  float v13; // s1
  float v14; // s2
  int32_t pageMax; // w19
  float v16; // s8
  float v17; // s9
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_48DE882 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&max);
    this = (PartyListViewIndicator_o *)sub_1B00CCC(&StringLiteral_20188/*"img_slider_off"*/, v5);
    byte_48DE882 = 1;
  }
  pageSpriteList = v4->fields.pageSpriteList;
  if ( !pageSpriteList )
    goto LABEL_20;
  max_length = pageSpriteList->max_length;
  if ( max_length >= max )
    max_length = max;
  v4->fields.pageMax = max_length;
  v4->fields.pageIndex = -1;
  if ( max_length <= 1 )
    v4->fields.pageMax = 0;
  pageBaseObject = (UnityEngine_Object_o *)v4->fields.pageBaseObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PartyListViewIndicator_o *)UnityEngine_Object__op_Inequality(pageBaseObject, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v4->fields.pageSpriteList;
    if ( v9 )
    {
      v10 = 0LL;
      while ( 1 )
      {
        v11 = v9->max_length;
        if ( (int)v10 >= v11 )
          break;
        if ( (unsigned int)v10 >= v11 )
          sub_1B00F30(this, *(_QWORD *)&max);
        this = (PartyListViewIndicator_o *)v9->m_Items[v10];
        if ( this )
        {
          v12 = (int)v10 >= v4->fields.pageMax ? 0LL : (System_String_o *)StringLiteral_20188/*"img_slider_off"*/;
          UISprite__set_spriteName((UISprite_o *)this, v12, 0LL);
          v9 = v4->fields.pageSpriteList;
          ++v10;
          if ( v9 )
            continue;
        }
        goto LABEL_20;
      }
      this = (PartyListViewIndicator_o *)v4->fields.pageBaseObject;
      if ( this )
      {
        this = (PartyListViewIndicator_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        if ( this )
        {
          *(UnityEngine_Vector3_o *)(&v13 - 1) = UnityEngine_Transform__get_localPosition(
                                                   (UnityEngine_Transform_o *)this,
                                                   0LL);
          this = (PartyListViewIndicator_o *)v4->fields.pageBaseObject;
          if ( this )
          {
            pageMax = v4->fields.pageMax;
            v16 = v13;
            v17 = v14;
            this = (PartyListViewIndicator_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0LL);
            if ( this )
            {
              v18.fields.x = (float)(-10 * pageMax + 10);
              v18.fields.y = v16;
              v18.fields.z = v17;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v18, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_20:
    sub_1B00F28(this, *(_QWORD *)&max);
  }
}


void __fastcall PartyListViewIndicator__SetScrollEnabled(
        PartyListViewIndicator_o *this,
        bool enabled,
        const MethodInfo *method)
{
  this->fields.isScrollEnabled = enabled;
}