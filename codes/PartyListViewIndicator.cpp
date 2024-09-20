void __fastcall PartyListViewIndicator___ctor(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct System_Int32_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A56F67 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    byte_4A56F67 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, (unsigned int)(v3->static_fields->DeckMax + 1));
  this->fields.useLimitEquip = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.useLimitEquip, (int32_t)v4, v5, v6);
  __asm { FMOV            V1.4S, #1.0 }
  this->fields.isScrollEnabled = 1;
  this->fields.ICON_NORMAL_COLOR = _Q1;
  this->fields.ICON_MASK_COLOR = (struct UnityEngine_Color_o)xmmword_BB4160;
  ListViewIndicator___ctor((ListViewIndicator_o *)this, 0LL);
}


void __fastcall PartyListViewIndicator__Awake(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct UISprite_o *indexSprite; // x8
  struct UIAtlas_o *mAtlas; // x1

  indexSprite = this->fields.indexSprite;
  if ( !indexSprite )
    sub_1B8880C(this, method);
  mAtlas = indexSprite->fields.mAtlas;
  this->fields.indexLocalAtlas = mAtlas;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.indexLocalAtlas, (int32_t)mAtlas, v2, v3);
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
    sub_1B8880C(limitMasterFormationButton, method);
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

  if ( (byte_4A56F66 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56F66 = 1;
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
      sub_1B8880C(gameObject, v7);
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
  DataManager_o *Instance; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  char v10; // w21
  int32_t DeckNum; // w23
  il2cpp_array_size_t v12; // w24
  UISprite_o *masterEquipBackSprite; // x22
  DataManager_o *v14; // x22
  unsigned __int64 v15; // x25
  struct System_Int32_array *useLimitEquip; // x28
  UISprite_o *limitEquipFixSprite; // x19
  struct System_Int32_array *v18; // x9
  char *v19; // x8
  int v20; // w21
  Il2CppObject *Component_object; // x20
  EventEquipSkillReleaseEntity_o *outEnt; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A56F5F & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_19168/*"event_emblem_frame"*/);
    sub_1B885B0(&StringLiteral_20142/*"icon_equip_fixation"*/);
    sub_1B885B0(&StringLiteral_8254/*"LIMIT_EQUIP_SETTING"*/);
    sub_1B885B0(&StringLiteral_17536/*"btn_skill_off"*/);
    sub_1B885B0(&StringLiteral_19167/*"event_emblem_dim"*/);
    sub_1B885B0(&StringLiteral_17537/*"btn_skill_on"*/);
    byte_4A56F5F = 1;
  }
  outEnt = 0LL;
  if ( !PartyListViewIndicator__IsEventOnlyEquip(this, (const MethodInfo *)partyItem) )
    goto LABEL_14;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !Instance )
    goto LABEL_62;
  if ( !EventEquipSkillReleaseMaster__tryGetOpenEventEquipSkillReleaseEntity(
          (EventEquipSkillReleaseMaster_o *)Instance,
          questRestrictionInfo->fields.eventId,
          &outEnt,
          0LL) )
  {
LABEL_14:
    PartyListViewIndicator__ClearEventLimitEquip(this, v7);
    return;
  }
  Instance = (DataManager_o *)outEnt;
  if ( !outEnt )
    goto LABEL_62;
  Instance = (DataManager_o *)EventEquipSkillReleaseEntity__isForceOverwrite(outEnt, 0LL);
  if ( !partyItem )
    goto LABEL_62;
  v10 = (char)Instance;
  DeckNum = PartyListViewItem__get_DeckNum(partyItem, 0LL);
  Instance = (DataManager_o *)PartyListViewItem__IsSpecificMenuKind(partyItem, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    v12 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 148LL);
  }
  else
  {
    v12 = DeckNum - 1;
  }
  if ( !outEnt )
    goto LABEL_62;
  Instance = (DataManager_o *)this->fields.limitEquipIcon;
  if ( !Instance )
    goto LABEL_62;
  ItemIconComponent__SetEquipItem((ItemIconComponent_o *)Instance, outEnt->fields.overwriteEquipIconId, 0LL);
  masterEquipBackSprite = this->fields.masterEquipBackSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(masterEquipBackSprite, (System_String_o *)StringLiteral_19167/*"event_emblem_dim"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.masterEquipFrameSprite, (System_String_o *)StringLiteral_19168/*"event_emblem_frame"*/, 0LL);
  if ( !this->fields.isChkSave )
  {
    if ( (v10 & 1) == 0 )
    {
      Instance = (DataManager_o *)UnityEngine_PlayerPrefs__GetString_69417656(
                                    (System_String_o *)StringLiteral_8254/*"LIMIT_EQUIP_SETTING"*/,
                                    0LL);
      if ( !Instance )
        goto LABEL_62;
      if ( Instance->fields.m_CachedPtr >= 1 )
      {
        Instance = (DataManager_o *)System_String__Split((System_String_o *)Instance, 0x2Cu, 0, 0LL);
        if ( !Instance )
          goto LABEL_62;
        v14 = Instance;
        if ( SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
        {
          v15 = 0LL;
          do
          {
            Instance = (DataManager_o *)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = (DataManager_o *)BalanceConfig_TypeInfo;
            }
            if ( (__int64)v15 > *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 148LL) )
              break;
            if ( v15 >= LODWORD(v14->fields.m_CancellationTokenSource) )
              goto LABEL_63;
            useLimitEquip = this->fields.useLimitEquip;
            Instance = (DataManager_o *)System_Int32__Parse(*((System_String_o **)&v14->fields._DispLog + v15), 0LL);
            if ( !useLimitEquip )
              goto LABEL_62;
            if ( v15 >= useLimitEquip->max_length )
              goto LABEL_63;
            useLimitEquip->m_Items[++v15] = (int)Instance;
          }
          while ( (__int64)v15 < SLODWORD(v14->fields.m_CancellationTokenSource) );
        }
      }
    }
    this->fields.isChkSave = 1;
  }
  Instance = (DataManager_o *)this->fields.limitMasterFormationButton;
  if ( !Instance
    || (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0LL )
  {
LABEL_62:
    sub_1B8880C(Instance, v7);
  }
  if ( (v10 & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    v18 = this->fields.useLimitEquip;
    v19 = (char *)v18 + 4 * (int)v12;
    if ( isChng )
    {
      if ( !v18 )
        goto LABEL_62;
      if ( v12 >= v18->max_length )
        goto LABEL_63;
      *((_DWORD *)v19 + 8) = *((_DWORD *)v19 + 8) == 0;
    }
    else if ( !v18 )
    {
      goto LABEL_62;
    }
    if ( v12 < v18->max_length )
    {
      Instance = (DataManager_o *)this->fields.limitMasterFormationButton;
      if ( Instance )
      {
        v20 = *((_DWORD *)v19 + 8);
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)Instance,
                             (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( v20 )
        {
          AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_17537/*"btn_skill_on"*/, 0LL);
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
          AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_17536/*"btn_skill_off"*/, 0LL);
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
      goto LABEL_62;
    }
LABEL_63:
    sub_1B88814(Instance, v7);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.masterEquipIcon1;
  if ( !Instance )
    goto LABEL_62;
  ItemIconComponent__SetColor((ItemIconComponent_o *)Instance, this->fields.ICON_MASK_COLOR, 0LL);
  Instance = (DataManager_o *)this->fields.masterEquipIcon2;
  if ( !Instance )
    goto LABEL_62;
  ItemIconComponent__SetColor((ItemIconComponent_o *)Instance, this->fields.ICON_MASK_COLOR, 0LL);
  limitEquipFixSprite = this->fields.limitEquipFixSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(limitEquipFixSprite, (System_String_o *)StringLiteral_20142/*"icon_equip_fixation"*/, 0LL);
}


void __fastcall PartyListViewIndicator__DrawPartyInfo(
        PartyListViewIndicator_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  PartyListViewItem_o *v3; // x20
  UnityEngine_GameObject_o *soloBaseObject; // x0
  UISprite_o *v6; // x21
  bool v7; // w1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestRestrictionInfo_o *v15; // x0
  int32_t servantNumMax; // w1
  UISprite_o *v17; // x21
  struct QuestRestrictionInfo_o *v18; // x8
  BalanceConfig_c *v19; // x0
  const MethodInfo *v20; // x2
  UICommonButton_o *masterEquipButton; // x21
  struct QuestRestrictionInfo_o *v22; // x8
  struct QuestRestrictionInfo_o *v23; // x8
  int32_t maxCost; // w21
  QuestRestrictionInfo_o *v25; // x0
  int32_t TotalCostRestriction; // w22
  bool v27; // w21
  System_String_o *v28; // x21
  UILabel_o *maxCostLabel; // x22
  System_String_o *v30; // x0
  UILabel_o *splitCostLabel; // x22
  System_String_o *v32; // x0
  int cost; // w8
  UILabel_o *selectCostLabel; // x22
  System_String_o *v35; // x0
  System_String_o *v36; // x0
  Il2CppObject *Entity; // x0
  const MethodInfo *v38; // x3
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  __int64 v41; // x9
  int32_t v42; // w21
  ServantEntity_array *SvtEntityList; // x22
  System_String_array *SvtNameList; // x23
  System_Boolean_array *IsFollowerList; // x24
  EventPartyMargeUpValInfo_o *v46; // x25
  int32_t v47; // w2
  int32_t v48; // w3
  EventUpValInfo_array *v49; // x8
  unsigned __int64 v50; // x20
  unsigned __int64 max_length; // x9
  EventPartyMargeUpValInfo_o *eventMargeUpValInfo; // x22
  UILabel_o *selectNameLabel; // x21
  System_String_o *v54; // x0
  EventUpValInfo_array *eventUpValList; // [xsp+8h] [xbp-78h] BYREF
  int32_t genderImageId; // [xsp+14h] [xbp-6Ch] BYREF
  System_String_o *detail; // [xsp+18h] [xbp-68h] BYREF
  System_String_o *equipName; // [xsp+20h] [xbp-60h] BYREF
  int32_t maxLv; // [xsp+2Ch] [xbp-54h] BYREF
  int32_t condUsrLv[2]; // [xsp+30h] [xbp-50h] BYREF
  __int64 eventId; // [xsp+38h] [xbp-48h] BYREF

  v3 = partyItem;
  if ( (byte_4A56F5E & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_1B885B0(&EventPartyMargeUpValInfo_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&StringLiteral_10275/*"PARTY_ORGANIZATION_NAME"*/);
    sub_1B885B0(&StringLiteral_23391/*"solo_bg"*/);
    sub_1B885B0(&StringLiteral_10243/*"PARTY_ORGANIZATION_COST_SPLIT"*/);
    sub_1B885B0(&StringLiteral_10241/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/);
    sub_1B885B0(&StringLiteral_10242/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/);
    sub_1B885B0(&StringLiteral_23422/*"specialparty_bg"*/);
    sub_1B885B0(&StringLiteral_10240/*"PARTY_ORGANIZATION_COST_COLOR"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A56F5E = 1;
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
                          sub_1B88554(
                            (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
                            0,
                            v8,
                            v9);
                          this->fields.eventMargeUpValInfo = 0LL;
                          sub_1B88554(
                            (ServantStatusBattleListViewItem_o *)&this->fields.eventMargeUpValInfo,
                            0,
                            v10,
                            v11);
                          goto LABEL_108;
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
    goto LABEL_107;
  }
  switch ( this->fields.menuKind )
  {
    case 1:
    case 3:
      soloBaseObject = this->fields.soloBaseObject;
      if ( !soloBaseObject )
        goto LABEL_107;
      soloBaseObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     soloBaseObject,
                                                     (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !this->fields.soloBaseObject )
        goto LABEL_107;
      v6 = (UISprite_o *)soloBaseObject;
      UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0LL);
      if ( !v6 )
        goto LABEL_107;
      UISprite__set_spriteName(v6, (System_String_o *)StringLiteral_23391/*"solo_bg"*/, 0LL);
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
        v6,
        v6->klass->vtable._34_get_minWidth.methodPtr);
      soloBaseObject = this->fields.organizationNumObject;
      if ( !soloBaseObject )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
      soloBaseObject = this->fields.indexBaseObject;
      if ( !soloBaseObject )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
      soloBaseObject = this->fields.selectNameBaseObject;
      if ( !soloBaseObject )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
      soloBaseObject = this->fields.costBaseObject;
      if ( !soloBaseObject )
        goto LABEL_107;
      v7 = 0;
      goto LABEL_68;
    case 2:
      soloBaseObject = this->fields.soloBaseObject;
      if ( !soloBaseObject )
        goto LABEL_107;
      soloBaseObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     soloBaseObject,
                                                     (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !this->fields.soloBaseObject )
        goto LABEL_107;
      v17 = (UISprite_o *)soloBaseObject;
      UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0LL);
      if ( !v17 )
        goto LABEL_107;
      UISprite__set_spriteName(v17, (System_String_o *)StringLiteral_23422/*"specialparty_bg"*/, 0LL);
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v17->klass->vtable._33_MakePixelPerfect.method)(
        v17,
        v17->klass->vtable._34_get_minWidth.methodPtr);
      soloBaseObject = this->fields.organizationNumObject;
      if ( !soloBaseObject )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
      goto LABEL_63;
    case 4:
    case 5:
      soloBaseObject = this->fields.soloBaseObject;
      if ( !soloBaseObject )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
      soloBaseObject = this->fields.organizationNumObject;
      if ( !soloBaseObject )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_63;
      goto LABEL_34;
    case 6:
    case 7:
      soloBaseObject = this->fields.soloBaseObject;
      if ( !soloBaseObject )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
      soloBaseObject = this->fields.organizationNumObject;
      if ( !soloBaseObject )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
      v15 = this->fields.questRestrictionInfo;
      if ( !v15 )
        goto LABEL_63;
      soloBaseObject = (UnityEngine_GameObject_o *)QuestRestrictionInfo__IsServantNum(v15, 0LL);
      if ( ((unsigned __int8)soloBaseObject & 1) != 0 )
      {
        questRestrictionInfo = this->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_107;
LABEL_34:
        servantNumMax = questRestrictionInfo->fields.servantNumMax;
      }
      else
      {
        soloBaseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !soloBaseObject )
          goto LABEL_107;
        soloBaseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)soloBaseObject,
                                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
        v22 = this->fields.questRestrictionInfo;
        if ( !v22 )
          goto LABEL_107;
        if ( !soloBaseObject )
          goto LABEL_107;
        soloBaseObject = (UnityEngine_GameObject_o *)NpcFollowerMaster__GetQuestFollowerList(
                                                       (NpcFollowerMaster_o *)soloBaseObject,
                                                       v22->fields.questId,
                                                       v22->fields.questPhase,
                                                       0LL);
        v23 = this->fields.questRestrictionInfo;
        if ( !v23 || !soloBaseObject )
          goto LABEL_107;
        servantNumMax = v23->fields.myServantNumMax + LODWORD(soloBaseObject[1].klass);
      }
      goto LABEL_62;
    case 9:
      soloBaseObject = this->fields.soloBaseObject;
      if ( !soloBaseObject )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
      soloBaseObject = this->fields.organizationNumObject;
      if ( !soloBaseObject )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
      soloBaseObject = this->fields.indexBaseObject;
      if ( !soloBaseObject )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
      soloBaseObject = this->fields.selectNameBaseObject;
      if ( !soloBaseObject )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
      soloBaseObject = this->fields.costBaseObject;
      if ( !soloBaseObject )
        goto LABEL_107;
      UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
      soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEventPointIndicator;
      if ( !soloBaseObject )
        goto LABEL_107;
      soloBaseObject = (UnityEngine_GameObject_o *)PartyEventPointIndicator__SetTrendDisp(
                                                     (PartyEventPointIndicator_o *)soloBaseObject,
                                                     v3->fields.waveBattleEnemyClassIds,
                                                     v20);
      masterEquipButton = this->fields.masterEquipButton;
      if ( v3->fields._IsWaveBattleRestart_k__BackingField )
      {
        soloBaseObject = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !soloBaseObject )
          goto LABEL_107;
        partyItem = (PartyListViewItem_o *)(soloBaseObject[4].fields.m_CachedPtr == 1);
      }
      else
      {
        partyItem = (PartyListViewItem_o *)(&dword_0 + 1);
      }
      if ( !masterEquipButton )
        goto LABEL_107;
      UICommonButton__SetEnable(masterEquipButton, (bool)partyItem, 0LL);
      soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partySwapButton;
      if ( !soloBaseObject )
        goto LABEL_107;
      UICommonButton__SetEnable((UICommonButton_o *)soloBaseObject, !v3->fields._IsClearedWave_k__BackingField, 0LL);
      soloBaseObject = (UnityEngine_GameObject_o *)this->fields.autoOrganizationButton;
      if ( !soloBaseObject )
        goto LABEL_107;
      UICommonButton__SetEnable((UICommonButton_o *)soloBaseObject, !v3->fields._IsClearedWave_k__BackingField, 0LL);
      soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEditButton;
      if ( !soloBaseObject )
        goto LABEL_107;
      UICommonButton__SetEnable((UICommonButton_o *)soloBaseObject, !v3->fields._IsClearedWave_k__BackingField, 0LL);
      goto LABEL_69;
    default:
      v18 = this->fields.questRestrictionInfo;
      if ( v18 && v18->fields.eventDeckNum >= 1 )
      {
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_107;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_107;
        UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
        v19 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v19 = BalanceConfig_TypeInfo;
        }
        servantNumMax = v19->static_fields->DeckMemberMax;
LABEL_62:
        PartyListViewIndicator__SetEventDeckPartyName(this, servantNumMax, v13);
LABEL_63:
        soloBaseObject = this->fields.indexBaseObject;
        if ( !soloBaseObject
          || (UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL),
              (soloBaseObject = this->fields.selectNameBaseObject) == 0LL) )
        {
LABEL_107:
          sub_1B8880C(soloBaseObject, partyItem);
        }
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
      }
      else
      {
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_107;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_107;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.indexBaseObject;
        if ( !soloBaseObject )
          goto LABEL_107;
        UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
        soloBaseObject = this->fields.selectNameBaseObject;
        if ( !soloBaseObject )
          goto LABEL_107;
        UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
        selectNameLabel = this->fields.selectNameLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v54 = LocalizationManager__Get((System_String_o *)StringLiteral_10275/*"PARTY_ORGANIZATION_NAME"*/, 0LL);
        soloBaseObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                       v54,
                                                       (Il2CppObject *)v3->fields.deckName,
                                                       0LL);
        if ( !selectNameLabel )
          goto LABEL_107;
        UILabel__set_text(selectNameLabel, (System_String_o *)soloBaseObject, 0LL);
      }
      soloBaseObject = this->fields.costBaseObject;
      if ( !soloBaseObject )
        goto LABEL_107;
      v7 = 1;
LABEL_68:
      UnityEngine_GameObject__SetActive(soloBaseObject, v7, 0LL);
LABEL_69:
      maxCost = v3->fields.maxCost;
      HIDWORD(eventId) = maxCost;
      v25 = this->fields.questRestrictionInfo;
      if ( v25 )
        TotalCostRestriction = QuestRestrictionInfo__GetTotalCostRestriction(v25, 0LL);
      else
        TotalCostRestriction = 0;
      v27 = TotalCostRestriction != 0 && maxCost > TotalCostRestriction;
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( v27 )
        {
LABEL_74:
          v28 = LocalizationManager__Get((System_String_o *)StringLiteral_10242/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0LL);
          HIDWORD(eventId) = TotalCostRestriction;
          goto LABEL_77;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v27 )
          goto LABEL_74;
      }
      v28 = LocalizationManager__Get((System_String_o *)StringLiteral_10240/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
LABEL_77:
      maxCostLabel = this->fields.maxCostLabel;
      v30 = System_Int32__ToString((int32_t)&eventId + 4, 0LL);
      soloBaseObject = (UnityEngine_GameObject_o *)System_String__Concat_61707032(v28, v30, 0LL);
      if ( !maxCostLabel )
        goto LABEL_107;
      UILabel__set_text(maxCostLabel, (System_String_o *)soloBaseObject, 0LL);
      splitCostLabel = this->fields.splitCostLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v32 = LocalizationManager__Get((System_String_o *)StringLiteral_10243/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
      soloBaseObject = (UnityEngine_GameObject_o *)System_String__Concat_61707032(v28, v32, 0LL);
      if ( !splitCostLabel )
        goto LABEL_107;
      UILabel__set_text(splitCostLabel, (System_String_o *)soloBaseObject, 0LL);
      cost = v3->fields.cost;
      selectCostLabel = this->fields.selectCostLabel;
      if ( cost > SHIDWORD(eventId) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v35 = LocalizationManager__Get((System_String_o *)StringLiteral_10241/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
        cost = v3->fields.cost;
        v28 = v35;
      }
      condUsrLv[1] = cost;
      v36 = System_Int32__ToString((int32_t)&condUsrLv[1], 0LL);
      soloBaseObject = (UnityEngine_GameObject_o *)System_String__Concat_61707032(v28, v36, 0LL);
      if ( !selectCostLabel )
        goto LABEL_107;
      UILabel__set_text(selectCostLabel, (System_String_o *)soloBaseObject, 0LL);
      soloBaseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !soloBaseObject )
        goto LABEL_107;
      soloBaseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)soloBaseObject,
                                                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEquipMaster___);
      if ( !soloBaseObject )
        goto LABEL_107;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)soloBaseObject,
                 v3->fields.userEquipId,
                 (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
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
        if ( soloBaseObject )
        {
          ItemIconComponent__SetEquipItem((ItemIconComponent_o *)soloBaseObject, genderImageId, 0LL);
          soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipIcon2;
          if ( soloBaseObject )
          {
            ItemIconComponent__SetEquipItem((ItemIconComponent_o *)soloBaseObject, genderImageId, 0LL);
            goto LABEL_92;
          }
        }
        goto LABEL_107;
      }
LABEL_92:
      PartyListViewIndicator__DrawEventLimitEquip(this, v3, 0, v38);
      setupInfo = this->fields.setupInfo;
      if ( !setupInfo )
        goto LABEL_97;
      eventIdList = setupInfo->fields.eventIdList;
      if ( !eventIdList )
        goto LABEL_107;
      v41 = *(_QWORD *)&eventIdList->max_length;
      if ( v41 )
      {
        if ( !(_DWORD)v41 )
LABEL_124:
          sub_1B88814(soloBaseObject, partyItem);
        v42 = eventIdList->m_Items[1];
      }
      else
      {
LABEL_97:
        v42 = 0;
      }
      LODWORD(eventId) = v42;
      SvtEntityList = PartyListViewItem__GetSvtEntityList(v3, 0LL);
      SvtNameList = PartyListViewItem__GetSvtNameList(v3, 0LL);
      IsFollowerList = PartyListViewItem__GetIsFollowerList(v3, 0LL);
      v46 = (EventPartyMargeUpValInfo_o *)sub_1B887FC(EventPartyMargeUpValInfo_TypeInfo);
      EventPartyMargeUpValInfo___ctor(v46, v42, SvtEntityList, SvtNameList, IsFollowerList, 0LL);
      this->fields.eventMargeUpValInfo = v46;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventMargeUpValInfo, (int32_t)v46, v47, v48);
      soloBaseObject = (UnityEngine_GameObject_o *)PartyListViewItem__GetEventUpVal(
                                                     v3,
                                                     (int32_t *)&eventId,
                                                     &eventUpValList,
                                                     0LL);
      if ( ((unsigned __int8)soloBaseObject & 1) != 0 )
      {
        v49 = eventUpValList;
        if ( !eventUpValList )
          goto LABEL_107;
        v50 = 0LL;
        while ( 1 )
        {
          max_length = v49->max_length;
          if ( (__int64)v50 >= (int)max_length )
            break;
          if ( v50 >= max_length )
            goto LABEL_124;
          soloBaseObject = (UnityEngine_GameObject_o *)v49->m_Items[v50];
          if ( soloBaseObject )
          {
            eventMargeUpValInfo = this->fields.eventMargeUpValInfo;
            soloBaseObject = (UnityEngine_GameObject_o *)EventUpValInfo__GetDropItemList(
                                                           (EventUpValInfo_o *)soloBaseObject,
                                                           v50,
                                                           0LL);
            if ( !eventMargeUpValInfo )
              goto LABEL_107;
            EventPartyMargeUpValInfo__Add(eventMargeUpValInfo, (EventDropItemUpValInfo_array *)soloBaseObject, 0LL);
            v49 = eventUpValList;
          }
          ++v50;
          if ( !v49 )
            goto LABEL_107;
        }
      }
LABEL_108:
      soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEventPointIndicator;
      if ( !soloBaseObject )
        goto LABEL_107;
      PartyEventPointIndicator__SetTotalDropItemList(
        (PartyEventPointIndicator_o *)soloBaseObject,
        (EventPartyMargeUpValInfo_o *)partyItem,
        v12);
      return;
  }
}


bool __fastcall PartyListViewIndicator__IsEventOnlyEquip(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A56F65 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56F65 = 1;
  }
  entity = 0LL;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (questRestrictionInfo = this->fields.questRestrictionInfo) == 0LL)
    || !Instance )
  {
LABEL_12:
    sub_1B8880C(Instance, v4);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          questRestrictionInfo->fields.eventId,
          (const MethodInfo_311D988 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t DeckNum; // w21
  BalanceConfig_c *v9; // x0
  il2cpp_array_size_t DeckMax; // w20
  struct System_Int32_array *useLimitEquip; // x8
  EventEquipSkillReleaseEntity_o *outEnt; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A56F64 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56F64 = 1;
  }
  outEnt = 0LL;
  if ( !PartyListViewIndicator__IsEventOnlyEquip(this, (const MethodInfo *)partyItem) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)EventEquipSkillReleaseMaster__tryGetOpenEventEquipSkillReleaseEntity(
                                (EventEquipSkillReleaseMaster_o *)Instance,
                                questRestrictionInfo->fields.eventId,
                                &outEnt,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !partyItem )
    goto LABEL_21;
  DeckNum = PartyListViewItem__get_DeckNum(partyItem, 0LL);
  if ( PartyListViewItem__IsSpecificMenuKind(partyItem, 0LL) )
  {
    v9 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    DeckMax = v9->static_fields->DeckMax;
  }
  else
  {
    DeckMax = DeckNum - 1;
  }
  Instance = (DataManager_o *)outEnt;
  if ( !outEnt )
    goto LABEL_21;
  Instance = (DataManager_o *)EventEquipSkillReleaseEntity__isForceOverwrite(outEnt, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    return 0;
  useLimitEquip = this->fields.useLimitEquip;
  if ( !useLimitEquip )
LABEL_21:
    sub_1B8880C(Instance, v6);
  if ( DeckMax >= useLimitEquip->max_length )
    sub_1B88814(Instance, v6);
  return useLimitEquip->m_Items[DeckMax + 1] == 0;
}


void __fastcall PartyListViewIndicator__OnClickLeft(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *manager; // x20
  __int64 v4; // x1
  ListViewManager_o *v5; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  int32_t pageIndex; // w8
  struct ListViewManager_o *v9; // x8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0

  if ( (byte_4A56F60 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_PartyListViewIndicator_OnClickLeft__);
    byte_4A56F60 = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(manager, 0LL, 0LL)
    && this->fields.isScrollEnabled
    && (this->fields.pageIndex & 0x80000000) == 0 )
  {
    v5 = this->fields.manager;
    if ( !v5 )
      goto LABEL_22;
    ListViewManager__BackLoopItem(v5, 0LL);
    if ( this->fields.pageIndex >= 1 )
    {
      v6 = Method_PartyListViewIndicator_OnClickLeft__;
      if ( (*((_BYTE *)Method_PartyListViewIndicator_OnClickLeft__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1B885C8(Method_PartyListViewIndicator_OnClickLeft__);
      v7 = (System_Reflection_MethodBase_o *)sub_1B88594(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 7, 0LL);
      v5 = this->fields.manager;
      if ( v5 )
      {
        pageIndex = this->fields.pageIndex;
LABEL_20:
        ListViewManager__MoveCenterItem(v5, pageIndex - 1, 1, 0, 0.0, 0LL);
        return;
      }
      goto LABEL_22;
    }
    v9 = this->fields.manager;
    if ( !v9 )
      goto LABEL_22;
    if ( v9->fields.isLoop )
    {
      v10 = Method_PartyListViewIndicator_OnClickLeft__;
      if ( (*((_BYTE *)Method_PartyListViewIndicator_OnClickLeft__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1B885C8(Method_PartyListViewIndicator_OnClickLeft__);
      v11 = (System_Reflection_MethodBase_o *)sub_1B88594(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 7, 0LL);
      v5 = this->fields.manager;
      if ( v5 )
      {
        pageIndex = this->fields.pageMax;
        goto LABEL_20;
      }
LABEL_22:
      sub_1B8880C(v5, v4);
    }
  }
}


void __fastcall PartyListViewIndicator__OnClickRight(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *manager; // x20
  __int64 v4; // x1
  ListViewManager_o *v5; // x0
  int32_t pageIndex; // w8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  int32_t v9; // w1
  struct ListViewManager_o *v10; // x8
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0

  if ( (byte_4A56F61 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_PartyListViewIndicator_OnClickRight__);
    byte_4A56F61 = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(manager, 0LL, 0LL)
    && this->fields.isScrollEnabled
    && (this->fields.pageIndex & 0x80000000) == 0 )
  {
    v5 = this->fields.manager;
    if ( !v5 )
      goto LABEL_23;
    ListViewManager__FowardLoopItem(v5, 0LL);
    pageIndex = this->fields.pageIndex;
    if ( (pageIndex & 0x80000000) == 0 && pageIndex < this->fields.pageMax - 1 )
    {
      v7 = Method_PartyListViewIndicator_OnClickRight__;
      if ( (*((_BYTE *)Method_PartyListViewIndicator_OnClickRight__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1B885C8(Method_PartyListViewIndicator_OnClickRight__);
      v8 = (System_Reflection_MethodBase_o *)sub_1B88594(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 7, 0LL);
      v5 = this->fields.manager;
      if ( v5 )
      {
        v9 = this->fields.pageIndex + 1;
LABEL_21:
        ListViewManager__MoveCenterItem(v5, v9, 1, 0, 0.0, 0LL);
        return;
      }
      goto LABEL_23;
    }
    v10 = this->fields.manager;
    if ( !v10 )
      goto LABEL_23;
    if ( v10->fields.isLoop )
    {
      v11 = Method_PartyListViewIndicator_OnClickRight__;
      if ( (*((_BYTE *)Method_PartyListViewIndicator_OnClickRight__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1B885C8(Method_PartyListViewIndicator_OnClickRight__);
      v12 = (System_Reflection_MethodBase_o *)sub_1B88594(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 7, 0LL);
      v5 = this->fields.manager;
      if ( v5 )
      {
        v9 = 0;
        goto LABEL_21;
      }
LABEL_23:
      sub_1B8880C(v5, v4);
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

  if ( (byte_4A56F5B & 1) == 0 )
  {
    sub_1B885B0(&PartyListViewItem_TypeInfo);
    byte_4A56F5B = 1;
  }
  this->fields.manager = manager;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.manager, (int32_t)manager, (int32_t)item, isTop);
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
    sub_1B8880C(leftObject, v14);
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
  UnityEngine_GameObject_o *organizationNumObject; // x0
  int v6; // w8
  UnityEngine_GameObject_o *v7; // x19
  __int64 *v8; // x8
  UISprite_o *v9; // x21

  if ( (byte_4A56F62 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1B885B0(&StringLiteral_21108/*"limited_bg"*/);
    sub_1B885B0(&StringLiteral_23391/*"solo_bg"*/);
    sub_1B885B0(&StringLiteral_23505/*"startingonly_bg"*/);
    sub_1B885B0(&StringLiteral_22446/*"pair_bg"*/);
    byte_4A56F62 = 1;
  }
  organizationNumObject = this->fields.organizationNumObject;
  if ( !organizationNumObject )
LABEL_19:
    sub_1B8880C(organizationNumObject, *(_QWORD *)&servantNum);
  organizationNumObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        organizationNumObject,
                                                        (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v6 = servantNum - 1;
  v7 = organizationNumObject;
  switch ( v6 )
  {
    case 0:
      organizationNumObject = this->fields.soloBaseObject;
      if ( !organizationNumObject )
        goto LABEL_19;
      organizationNumObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            organizationNumObject,
                                                            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
      UISprite__set_spriteName(v9, (System_String_o *)StringLiteral_23391/*"solo_bg"*/, 0LL);
      organizationNumObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v9->klass->vtable._33_MakePixelPerfect.method)(
                                                            v9,
                                                            v9->klass->vtable._34_get_minWidth.methodPtr);
      if ( !v7 )
        goto LABEL_19;
      goto LABEL_18;
    case 1:
      if ( !organizationNumObject )
        goto LABEL_19;
      v8 = &StringLiteral_22446/*"pair_bg"*/;
      break;
    case 2:
      if ( !organizationNumObject )
        goto LABEL_19;
      v8 = &StringLiteral_23505/*"startingonly_bg"*/;
      break;
    default:
      if ( !organizationNumObject )
        goto LABEL_19;
      v8 = &StringLiteral_21108/*"limited_bg"*/;
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
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  EventPartyMargeUpValInfo_o *v12; // x1
  const MethodInfo *v13; // x3
  PartyEventPointIndicator_o *partyEventPointIndicator; // x0
  const MethodInfo *v15; // x2

  this->fields.setupInfo = setupInfo;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.setupInfo,
    (int32_t)setupInfo,
    (int32_t)questRestrictionInfo,
    (int32_t)classIds);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v8,
    v9);
  this->fields.eventMargeUpValInfo = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventMargeUpValInfo, 0, v10, v11);
  partyEventPointIndicator = this->fields.partyEventPointIndicator;
  if ( !partyEventPointIndicator
    || (PartyEventPointIndicator__SetInfomation(partyEventPointIndicator, questRestrictionInfo, classIds, v13),
        (partyEventPointIndicator = this->fields.partyEventPointIndicator) == 0LL) )
  {
    sub_1B8880C(partyEventPointIndicator, v12);
  }
  PartyEventPointIndicator__SetTotalDropItemList(partyEventPointIndicator, v12, v15);
}


void __fastcall PartyListViewIndicator__SetEventLimitEquipSetting(
        PartyListViewIndicator_o *this,
        const MethodInfo *method)
{
  System_String_o *IsEventOnlyEquip; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  struct System_Int32_array *useLimitEquip; // x21
  __int64 v9; // x8
  System_String_o *v10; // x20
  unsigned __int64 v11; // x22
  int v12; // w26
  Il2CppObject *v13; // x0
  int v14; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A56F63 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_8254/*"LIMIT_EQUIP_SETTING"*/);
    sub_1B885B0(&StringLiteral_868/*","*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A56F63 = 1;
  }
  IsEventOnlyEquip = (System_String_o *)PartyListViewIndicator__IsEventOnlyEquip(this, method);
  if ( ((unsigned __int8)IsEventOnlyEquip & 1) != 0 )
  {
    useLimitEquip = this->fields.useLimitEquip;
    if ( !useLimitEquip )
      goto LABEL_15;
    v9 = *(_QWORD *)&useLimitEquip->max_length;
    v10 = (System_String_o *)StringLiteral_1/*""*/;
    if ( (int)v9 >= 1 )
    {
      v11 = 0LL;
      while ( 1 )
      {
        if ( v11 >= (unsigned int)v9 )
          sub_1B88814(IsEventOnlyEquip, v4);
        if ( !v10 )
          break;
        v12 = useLimitEquip->m_Items[v11 + 1];
        if ( v10->fields._stringLength >= 1 )
          v10 = System_String__Concat_61707032(v10, (System_String_o *)StringLiteral_868/*","*/, 0LL);
        v14 = v12;
        v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v5, v6, v7);
        IsEventOnlyEquip = System_String__Concat((Il2CppObject *)v10, v13, 0LL);
        LODWORD(v9) = useLimitEquip->max_length;
        ++v11;
        v10 = IsEventOnlyEquip;
        if ( (__int64)v11 >= (int)v9 )
          goto LABEL_12;
      }
LABEL_15:
      sub_1B8880C(IsEventOnlyEquip, v4);
    }
LABEL_12:
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_8254/*"LIMIT_EQUIP_SETTING"*/, v10, 0LL);
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
    sub_1B8880C(leftObject, v4);
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
  Il2CppObject *Component_object; // x21
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  System_String_o *v16; // x21
  UISprite_o *v17; // x22
  System_String_o *v18; // x0
  UISprite_o *indexSprite; // x22
  System_String_o *v20; // x21
  UISprite_o *waveMaxNumTensPlaceSprite; // x22
  System_String_o *v22; // x0
  System_String_o *v23; // x23
  UISprite_o *waveMaxNumTensPlaceGlowSprite; // x22
  System_String_o *v25; // x0
  System_String_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  int32_t v28; // w1
  UISprite_o *waveNumTensPlaceSprite; // x22
  System_String_o *v30; // x0
  System_String_o *v31; // x23
  UISprite_o *waveNumTensPlaceGlowSprite; // x22
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  UISprite_o *waveNumOnesPlaceSprite; // x21
  System_String_o *v36; // x0
  System_String_o *v37; // x22
  UISprite_o *waveNumOnesPlaceGlowSprite; // x21
  System_String_o *v39; // x0
  System_String_o *v40; // x0
  UISprite_o *waveMaxNumOnesPlaceSprite; // x21
  System_String_o *v42; // x0
  System_String_o *v43; // x0
  UISprite_o *waveMaxNumOnesPlaceGlowSprite; // x21
  System_String_o *v45; // x0
  System_String_o *v46; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w21
  bool v49; // w20
  int v50; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A56F5D & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1B885B0(&LastUsedDeckNumberManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&StringLiteral_17129/*"battle_num_"*/);
    sub_1B885B0(&StringLiteral_20468/*"img_slider_on"*/);
    sub_1B885B0(&StringLiteral_16542/*"_glow"*/);
    sub_1B885B0(&StringLiteral_17131/*"battle_num_slash_glow"*/);
    sub_1B885B0(&StringLiteral_22476/*"party_txt_"*/);
    sub_1B885B0(&StringLiteral_17124/*"battle_bg"*/);
    sub_1B885B0(&StringLiteral_20467/*"img_slider_off"*/);
    sub_1B885B0(&StringLiteral_17130/*"battle_num_slash"*/);
    sub_1B885B0(&StringLiteral_22475/*"party_bg"*/);
    byte_4A56F5D = 1;
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
      v8 = 0LL;
      do
      {
        pageSpriteList = this->fields.pageSpriteList;
        if ( !pageSpriteList )
          goto LABEL_96;
        if ( (unsigned int)v8 >= pageSpriteList->max_length )
          sub_1B88814(gameObject, v7);
        gameObject = pageSpriteList->m_Items[v8];
        if ( !gameObject )
          goto LABEL_96;
        if ( index == (_DWORD)v8 )
          v10 = &StringLiteral_20468/*"img_slider_on"*/;
        else
          v10 = &StringLiteral_20467/*"img_slider_off"*/;
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
        goto LABEL_96;
      gameObject = (UISprite_o *)UnityEngine_GameObject__get_gameObject(this->fields.waveNumObject, 0LL);
      if ( !gameObject )
        goto LABEL_96;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = this->fields.indexSprite;
      if ( !gameObject )
        goto LABEL_96;
      gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_96;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      GameObjectExtensions__SetLocalPositionY(this->fields.indexBaseObject, 260.0, 0LL);
      gameObject = (UISprite_o *)this->fields.indexBaseObject;
      if ( !gameObject )
        goto LABEL_96;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)gameObject,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetPartyOrganizationImage(
        (UISprite_o *)Component_object,
        (System_String_o *)StringLiteral_17124/*"battle_bg"*/,
        0LL);
      AtlasManager__SetPartyOrganizationImage(
        this->fields.waveNumSlashSprite,
        (System_String_o *)StringLiteral_17130/*"battle_num_slash"*/,
        0LL);
      AtlasManager__SetPartyOrganizationImage(
        this->fields.waveNumSlashGlowSprite,
        (System_String_o *)StringLiteral_17131/*"battle_num_slash_glow"*/,
        0LL);
      if ( this->fields.pageMax >= 10 )
      {
        gameObject = this->fields.waveMaxNumTensPlaceSprite;
        if ( !gameObject )
          goto LABEL_96;
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = this->fields.waveMaxNumTensPlaceGlowSprite;
        if ( !gameObject )
          goto LABEL_96;
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        waveMaxNumTensPlaceSprite = this->fields.waveMaxNumTensPlaceSprite;
        v50 = this->fields.pageMax / 10;
        v22 = System_Int32__ToString((int32_t)&v50, 0LL);
        v23 = System_String__Concat_61707032((System_String_o *)StringLiteral_17129/*"battle_num_"*/, v22, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetPartyOrganizationImage(waveMaxNumTensPlaceSprite, v23, 0LL);
        waveMaxNumTensPlaceGlowSprite = this->fields.waveMaxNumTensPlaceGlowSprite;
        v50 = this->fields.pageMax / 10;
        v25 = System_Int32__ToString((int32_t)&v50, 0LL);
        v26 = System_String__Concat_61718292(
                (System_String_o *)StringLiteral_17129/*"battle_num_"*/,
                v25,
                (System_String_o *)StringLiteral_16542/*"_glow"*/,
                0LL);
        AtlasManager__SetPartyOrganizationImage(waveMaxNumTensPlaceGlowSprite, v26, 0LL);
        gameObject = this->fields.waveMaxNumTensPlaceSprite;
        if ( !gameObject )
          goto LABEL_96;
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))gameObject->klass->vtable._33_MakePixelPerfect.method)(
          gameObject,
          gameObject->klass->vtable._34_get_minWidth.methodPtr);
        gameObject = this->fields.waveMaxNumTensPlaceGlowSprite;
        if ( !gameObject )
          goto LABEL_96;
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))gameObject->klass->vtable._33_MakePixelPerfect.method)(
          gameObject,
          gameObject->klass->vtable._34_get_minWidth.methodPtr);
        v27 = this->fields.waveNumObject;
        if ( v11 >= 10 )
        {
          GameObjectExtensions__SetLocalPositionX(v27, 7.0, 0LL);
          gameObject = this->fields.waveNumTensPlaceSprite;
          if ( !gameObject )
            goto LABEL_96;
          gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_96;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          gameObject = this->fields.waveNumTensPlaceGlowSprite;
          if ( !gameObject )
            goto LABEL_96;
          gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_96;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          waveNumTensPlaceSprite = this->fields.waveNumTensPlaceSprite;
          v50 = v11 / 0xAu;
          v30 = System_Int32__ToString((int32_t)&v50, 0LL);
          v31 = System_String__Concat_61707032((System_String_o *)StringLiteral_17129/*"battle_num_"*/, v30, 0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetPartyOrganizationImage(waveNumTensPlaceSprite, v31, 0LL);
          waveNumTensPlaceGlowSprite = this->fields.waveNumTensPlaceGlowSprite;
          v50 = v11 / 0xAu;
          v33 = System_Int32__ToString((int32_t)&v50, 0LL);
          v34 = System_String__Concat_61718292(
                  (System_String_o *)StringLiteral_17129/*"battle_num_"*/,
                  v33,
                  (System_String_o *)StringLiteral_16542/*"_glow"*/,
                  0LL);
          AtlasManager__SetPartyOrganizationImage(waveNumTensPlaceGlowSprite, v34, 0LL);
          gameObject = this->fields.waveNumTensPlaceSprite;
          if ( !gameObject )
            goto LABEL_96;
          ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))gameObject->klass->vtable._33_MakePixelPerfect.method)(
            gameObject,
            gameObject->klass->vtable._34_get_minWidth.methodPtr);
          gameObject = this->fields.waveNumTensPlaceGlowSprite;
          if ( !gameObject )
            goto LABEL_96;
          gameObject = (UISprite_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))gameObject->klass->vtable._33_MakePixelPerfect.method)(
                                       gameObject,
                                       gameObject->klass->vtable._34_get_minWidth.methodPtr);
          if ( !Component_object )
            goto LABEL_96;
          v28 = 322;
        }
        else
        {
          GameObjectExtensions__SetLocalPositionX(v27, 1.0, 0LL);
          gameObject = this->fields.waveNumTensPlaceSprite;
          if ( !gameObject )
            goto LABEL_96;
          gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_96;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          gameObject = this->fields.waveNumTensPlaceGlowSprite;
          if ( !gameObject )
            goto LABEL_96;
          gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_96;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          if ( !Component_object )
            goto LABEL_96;
          v28 = 308;
        }
        UIWidget__set_width((UIWidget_o *)Component_object, v28, 0LL);
      }
      else
      {
        GameObjectExtensions__SetLocalPositionX(this->fields.waveNumObject, 7.0, 0LL);
        gameObject = this->fields.waveNumTensPlaceSprite;
        if ( !gameObject )
          goto LABEL_96;
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        gameObject = this->fields.waveNumTensPlaceGlowSprite;
        if ( !gameObject )
          goto LABEL_96;
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        gameObject = this->fields.waveMaxNumTensPlaceSprite;
        if ( !gameObject )
          goto LABEL_96;
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        gameObject = this->fields.waveMaxNumTensPlaceGlowSprite;
        if ( !gameObject )
          goto LABEL_96;
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_96;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        if ( !Component_object )
          goto LABEL_96;
        UIWidget__set_width((UIWidget_o *)Component_object, 296, 0LL);
        gameObject = this->fields.waveMaxNumOnesPlaceSprite;
        if ( !gameObject )
          goto LABEL_96;
        v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionX(v14, 67.0, 0LL);
        gameObject = this->fields.waveMaxNumOnesPlaceGlowSprite;
        if ( !gameObject )
          goto LABEL_96;
        v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionX(v15, 67.0, 0LL);
      }
      waveNumOnesPlaceSprite = this->fields.waveNumOnesPlaceSprite;
      v50 = v11 % 10;
      v36 = System_Int32__ToString((int32_t)&v50, 0LL);
      v37 = System_String__Concat_61707032((System_String_o *)StringLiteral_17129/*"battle_num_"*/, v36, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetPartyOrganizationImage(waveNumOnesPlaceSprite, v37, 0LL);
      waveNumOnesPlaceGlowSprite = this->fields.waveNumOnesPlaceGlowSprite;
      v50 = v11 % 10;
      v39 = System_Int32__ToString((int32_t)&v50, 0LL);
      v40 = System_String__Concat_61718292(
              (System_String_o *)StringLiteral_17129/*"battle_num_"*/,
              v39,
              (System_String_o *)StringLiteral_16542/*"_glow"*/,
              0LL);
      AtlasManager__SetPartyOrganizationImage(waveNumOnesPlaceGlowSprite, v40, 0LL);
      waveMaxNumOnesPlaceSprite = this->fields.waveMaxNumOnesPlaceSprite;
      v50 = this->fields.pageMax % 10;
      v42 = System_Int32__ToString((int32_t)&v50, 0LL);
      v43 = System_String__Concat_61707032((System_String_o *)StringLiteral_17129/*"battle_num_"*/, v42, 0LL);
      AtlasManager__SetPartyOrganizationImage(waveMaxNumOnesPlaceSprite, v43, 0LL);
      waveMaxNumOnesPlaceGlowSprite = this->fields.waveMaxNumOnesPlaceGlowSprite;
      v50 = this->fields.pageMax % 10;
      v45 = System_Int32__ToString((int32_t)&v50, 0LL);
      v46 = System_String__Concat_61718292(
              (System_String_o *)StringLiteral_17129/*"battle_num_"*/,
              v45,
              (System_String_o *)StringLiteral_16542/*"_glow"*/,
              0LL);
      AtlasManager__SetPartyOrganizationImage(waveMaxNumOnesPlaceGlowSprite, v46, 0LL);
      gameObject = this->fields.waveNumOnesPlaceSprite;
      if ( !gameObject )
        goto LABEL_96;
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))gameObject->klass->vtable._33_MakePixelPerfect.method)(
        gameObject,
        gameObject->klass->vtable._34_get_minWidth.methodPtr);
      gameObject = this->fields.waveNumOnesPlaceGlowSprite;
      if ( !gameObject )
        goto LABEL_96;
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))gameObject->klass->vtable._33_MakePixelPerfect.method)(
        gameObject,
        gameObject->klass->vtable._34_get_minWidth.methodPtr);
      gameObject = this->fields.waveMaxNumOnesPlaceSprite;
      if ( !gameObject )
        goto LABEL_96;
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))gameObject->klass->vtable._33_MakePixelPerfect.method)(
        gameObject,
        gameObject->klass->vtable._34_get_minWidth.methodPtr);
      gameObject = this->fields.waveMaxNumOnesPlaceGlowSprite;
      if ( !gameObject )
        goto LABEL_96;
    }
    else
    {
      if ( !waveNumObject )
        goto LABEL_96;
      v16 = (System_String_o *)gameObject;
      gameObject = (UISprite_o *)UnityEngine_GameObject__get_gameObject(this->fields.waveNumObject, 0LL);
      if ( !gameObject )
        goto LABEL_96;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      GameObjectExtensions__SetLocalPositionY(this->fields.indexBaseObject, 271.0, 0LL);
      gameObject = (UISprite_o *)this->fields.indexBaseObject;
      if ( !gameObject )
        goto LABEL_96;
      gameObject = (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)gameObject,
                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !gameObject )
        goto LABEL_96;
      v17 = gameObject;
      UISprite__set_atlas(gameObject, this->fields.indexLocalAtlas, 0LL);
      UISprite__set_spriteName(v17, (System_String_o *)StringLiteral_22475/*"party_bg"*/, 0LL);
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v17->klass->vtable._33_MakePixelPerfect.method)(
        v17,
        v17->klass->vtable._34_get_minWidth.methodPtr);
      gameObject = this->fields.indexSprite;
      if ( !gameObject )
        goto LABEL_96;
      gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_96;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v18 = System_String__Concat_61707032((System_String_o *)StringLiteral_22476/*"party_txt_"*/, v16, 0LL);
      indexSprite = this->fields.indexSprite;
      v20 = v18;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( !AtlasManager__SetPartyOrganizationImage(indexSprite, v20, 0LL) )
      {
        gameObject = this->fields.indexSprite;
        if ( !gameObject )
          goto LABEL_96;
        UISprite__set_atlas(gameObject, this->fields.indexLocalAtlas, 0LL);
        gameObject = this->fields.indexSprite;
        if ( !gameObject )
          goto LABEL_96;
        UISprite__set_spriteName(gameObject, v20, 0LL);
      }
      gameObject = this->fields.indexSprite;
      if ( !gameObject )
        goto LABEL_96;
    }
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))gameObject->klass->vtable._33_MakePixelPerfect.method)(
      gameObject,
      gameObject->klass->vtable._34_get_minWidth.methodPtr);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_91;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    gameObject = (UISprite_o *)OptionManager__GetAutoSelectParty(0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_96;
      questId = questRestrictionInfo->fields.questId;
      if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      v49 = LastUsedDeckNumberManager__GetDeckNumber(questId, 0LL) - 1 == index;
    }
    else
    {
LABEL_91:
      v49 = 0;
    }
    gameObject = this->fields.lastTimeUsedSprite;
    if ( !gameObject
      || (gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
    {
LABEL_96:
      sub_1B8880C(gameObject, v7);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v49, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewIndicator__SetPageMax(
        PartyListViewIndicator_o *this,
        int32_t max,
        const MethodInfo *method)
{
  PartyListViewIndicator_o *v4; // x19
  System_Array_o *pageSpriteList; // x8
  System_Array_o **p_pageSpriteList; // x21
  PartyListViewIndicator_o *v7; // x22
  System_Array_o *v8; // x8
  Il2CppObject *klass; // x23
  System_Array_o *v10; // x8
  float v11; // s0
  float v12; // s1
  float v13; // s2
  System_Array_o *v14; // x8
  float v15; // s8
  float v16; // s9
  float v17; // s10
  int32_t v18; // w2
  int32_t v19; // w3
  float v20; // s0
  float v21; // s1
  float v22; // s2
  int monitor; // w24
  float v24; // s8
  float v25; // s9
  float v26; // s10
  ServantStatusBattleListViewItem_o *v27; // x25
  UnityEngine_Component_o *v28; // x26
  PartyListViewIndicator_o *v29; // x28
  UnityEngine_MonoBehaviour_o *v30; // x29
  EventDelegate_o *v31; // x27
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  struct UnityEngine_GameObject_o *soloBaseObject; // x29
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w3
  int32_t m_CancellationTokenSource; // w2
  int v40; // w8
  __int64 v41; // x8
  _QWORD *v42; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v44; // x8
  int32_t v45; // w2
  int32_t v46; // w3
  __int64 v47; // x22
  void *v48; // x9
  UnityEngine_Object_o *pageBaseObject; // x20
  System_Array_o *v50; // x8
  __int64 v51; // x20
  int v52; // w9
  System_String_o *v53; // x1
  float v54; // s1
  float v55; // s2
  int32_t pageMax; // w19
  float v57; // s8
  float v58; // s9
  __int64 v59; // x0
  UnityEngine_Transform_o *parent; // [xsp+8h] [xbp-88h]
  int v61; // [xsp+1Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4A56F5C & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    sub_1B885B0(&EventDelegate_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDelegate__get_Item__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_UISprite___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&UISprite___TypeInfo);
    sub_1B885B0(&StringLiteral_20467/*"img_slider_off"*/);
    this = (PartyListViewIndicator_o *)sub_1B885B0(&StringLiteral_9871/*"OnClickTabParty"*/);
    byte_4A56F5C = 1;
  }
  p_pageSpriteList = (System_Array_o **)&v4->fields.pageSpriteList;
  pageSpriteList = (System_Array_o *)v4->fields.pageSpriteList;
  if ( !pageSpriteList )
    goto LABEL_67;
  if ( SLODWORD(pageSpriteList[1].monitor) < max )
  {
    this = (PartyListViewIndicator_o *)sub_1B88658(UISprite___TypeInfo, (unsigned int)max);
    if ( !*p_pageSpriteList )
      goto LABEL_67;
    v7 = this;
    System_Array__CopyTo(*p_pageSpriteList, (System_Array_o *)this, 0, 0LL);
    v8 = *p_pageSpriteList;
    if ( !*p_pageSpriteList )
      goto LABEL_67;
    if ( !LODWORD(v8[1].monitor) )
      goto LABEL_74;
    klass = (Il2CppObject *)v8[2].klass;
    if ( !klass )
      goto LABEL_67;
    this = (PartyListViewIndicator_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8[2].klass, 0LL);
    if ( !this )
      goto LABEL_67;
    this = (PartyListViewIndicator_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
    v10 = *p_pageSpriteList;
    parent = (UnityEngine_Transform_o *)this;
    if ( !*p_pageSpriteList )
      goto LABEL_67;
    if ( LODWORD(v10[1].monitor) <= 1 )
      goto LABEL_74;
    this = (PartyListViewIndicator_o *)v10[2].monitor;
    if ( !this )
      goto LABEL_67;
    this = (PartyListViewIndicator_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_67;
    *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v14 = *p_pageSpriteList;
    if ( !*p_pageSpriteList )
      goto LABEL_67;
    if ( !LODWORD(v14[1].monitor) )
LABEL_74:
      sub_1B88814(this, *(_QWORD *)&max);
    this = (PartyListViewIndicator_o *)v14[2].klass;
    if ( !this )
      goto LABEL_67;
    v15 = v11;
    v16 = v12;
    v17 = v13;
    this = (PartyListViewIndicator_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_67;
    *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    if ( !*p_pageSpriteList || !v7 )
      goto LABEL_67;
    monitor = (int)(*p_pageSpriteList)[1].monitor;
    if ( monitor < SLODWORD(v7->fields.m_CancellationTokenSource) )
    {
      v24 = v15 - v20;
      v25 = v16 - v21;
      v26 = v17 - v22;
      v27 = (ServantStatusBattleListViewItem_o *)(&v7->fields.soloBaseObject + monitor);
      while ( 1 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (PartyListViewIndicator_o *)UnityEngine_Object__Instantiate_object__49297800(
                                             klass,
                                             parent,
                                             (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_UISprite___);
        if ( !this )
          break;
        v28 = (UnityEngine_Component_o *)this;
        this = (PartyListViewIndicator_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          break;
        v62.fields.z = v26 * (float)monitor;
        v62.fields.y = v25 * (float)monitor;
        v62.fields.x = v24 * (float)monitor;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v62, 0LL);
        this = (PartyListViewIndicator_o *)UnityEngine_Component__GetComponent_object_(
                                             v28,
                                             (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
        if ( !this )
          break;
        v29 = this;
        this = (PartyListViewIndicator_o *)this->fields.selectNameLabel;
        if ( !this )
          break;
        this = (PartyListViewIndicator_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)this,
                                             0,
                                             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventDelegate__get_Item__);
        if ( !this )
          break;
        v30 = *(UnityEngine_MonoBehaviour_o **)&this->fields.m_CachedPtr;
        v31 = (EventDelegate_o *)sub_1B887FC(EventDelegate_TypeInfo);
        EventDelegate___ctor_46787224(v31, v30, (System_String_o *)StringLiteral_9871/*"OnClickTabParty"*/, 0LL);
        if ( !v31 )
          break;
        this = (PartyListViewIndicator_o *)EventDelegate__get_parameters(v31, 0LL);
        if ( !this )
          break;
        if ( !LODWORD(this->fields.m_CancellationTokenSource) )
          goto LABEL_74;
        soloBaseObject = this->fields.soloBaseObject;
        v61 = monitor;
        this = (PartyListViewIndicator_o *)j_il2cpp_value_box_0(int_TypeInfo, &v61, v32, v33, v34);
        if ( !soloBaseObject )
          break;
        soloBaseObject[1].monitor = this;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&soloBaseObject[1].monitor, (int32_t)this, v36, v37);
        this = (PartyListViewIndicator_o *)v29->fields.selectNameLabel;
        if ( !this )
          break;
        m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
        v40 = HIDWORD(this->fields.m_CancellationTokenSource) + 1;
        LODWORD(this->fields.m_CancellationTokenSource) = 0;
        HIDWORD(this->fields.m_CancellationTokenSource) = v40;
        if ( m_CancellationTokenSource >= 1 )
        {
          System_Array__Clear(*(System_Array_o **)&this->fields.m_CachedPtr, 0, m_CancellationTokenSource, 0LL);
          this = (PartyListViewIndicator_o *)v29->fields.selectNameLabel;
          if ( !this )
            break;
        }
        v41 = *(_QWORD *)&this->fields.m_CachedPtr;
        v42 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v41 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v41 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v31,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
        else
        {
          v44 = v41 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v44 + 32) = v31;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v44 + 32), (int32_t)v31, m_CancellationTokenSource, v38);
        }
        this = (PartyListViewIndicator_o *)sub_1B886EC(v28, v7->klass->_1.element_class);
        if ( !this )
        {
          v59 = sub_1B88830();
          sub_1B886D8(v59, 0LL);
        }
        if ( (unsigned int)monitor >= LODWORD(v7->fields.m_CancellationTokenSource) )
          goto LABEL_74;
        v27->klass = (ServantStatusBattleListViewItem_c *)v28;
        sub_1B88554(v27, (int32_t)v28, v45, v46);
        ++monitor;
        v27 = (ServantStatusBattleListViewItem_o *)((char *)v27 + 8);
        if ( monitor >= SLODWORD(v7->fields.m_CancellationTokenSource) )
          goto LABEL_43;
      }
LABEL_67:
      sub_1B8880C(this, *(_QWORD *)&max);
    }
LABEL_43:
    *p_pageSpriteList = (System_Array_o *)v7;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.pageSpriteList, (int32_t)v7, v18, v19);
    pageSpriteList = *p_pageSpriteList;
    if ( !*p_pageSpriteList )
      goto LABEL_67;
  }
  v47 = 0LL;
  while ( 1 )
  {
    v48 = pageSpriteList[1].monitor;
    if ( (int)v47 >= (int)v48 )
      break;
    if ( (unsigned int)v47 >= (unsigned int)v48 )
      goto LABEL_74;
    this = (PartyListViewIndicator_o *)*((_QWORD *)&pageSpriteList[2].klass + v47);
    if ( this )
    {
      this = (PartyListViewIndicator_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (int)v47 < max, 0LL);
        pageSpriteList = *p_pageSpriteList;
        ++v47;
        if ( *p_pageSpriteList )
          continue;
      }
    }
    goto LABEL_67;
  }
  if ( (int)v48 >= max )
    LODWORD(v48) = max;
  v4->fields.pageMax = (int)v48;
  v4->fields.pageIndex = -1;
  if ( (int)v48 <= 1 )
    v4->fields.pageMax = 0;
  pageBaseObject = (UnityEngine_Object_o *)v4->fields.pageBaseObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PartyListViewIndicator_o *)UnityEngine_Object__op_Inequality(pageBaseObject, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v50 = *p_pageSpriteList;
    if ( !*p_pageSpriteList )
      goto LABEL_67;
    v51 = 0LL;
    while ( 1 )
    {
      v52 = (int)v50[1].monitor;
      if ( (int)v51 >= v52 )
        break;
      if ( (unsigned int)v51 >= v52 )
        goto LABEL_74;
      this = (PartyListViewIndicator_o *)*((_QWORD *)&v50[2].klass + v51);
      if ( this )
      {
        v53 = (int)v51 >= v4->fields.pageMax ? 0LL : (System_String_o *)StringLiteral_20467/*"img_slider_off"*/;
        UISprite__set_spriteName((UISprite_o *)this, v53, 0LL);
        v50 = (System_Array_o *)v4->fields.pageSpriteList;
        ++v51;
        if ( v50 )
          continue;
      }
      goto LABEL_67;
    }
    this = (PartyListViewIndicator_o *)v4->fields.pageBaseObject;
    if ( !this )
      goto LABEL_67;
    this = (PartyListViewIndicator_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_67;
    *(UnityEngine_Vector3_o *)(&v54 - 1) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)this,
                                             0LL);
    this = (PartyListViewIndicator_o *)v4->fields.pageBaseObject;
    if ( !this )
      goto LABEL_67;
    pageMax = v4->fields.pageMax;
    v57 = v54;
    v58 = v55;
    this = (PartyListViewIndicator_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_67;
    v63.fields.x = (float)(-10 * pageMax + 10);
    v63.fields.y = v57;
    v63.fields.z = v58;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v63, 0LL);
  }
}


void __fastcall PartyListViewIndicator__SetScrollEnabled(
        PartyListViewIndicator_o *this,
        bool enabled,
        const MethodInfo *method)
{
  this->fields.isScrollEnabled = enabled;
}