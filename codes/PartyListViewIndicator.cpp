void __fastcall PartyListViewIndicator___ctor(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0

  if ( (byte_4BC364A & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, method);
    sub_1C1ABD4(&int___TypeInfo, v3);
    byte_4BC364A = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  this->fields.useLimitEquip = (struct System_Int32_array *)sub_1C1AC7C(
                                                              int___TypeInfo,
                                                              (unsigned int)(v4->static_fields->DeckMax + 1));
  sub_1C1AB78(&this->fields.useLimitEquip);
  __asm { FMOV            V1.4S, #1.0 }
  this->fields.isScrollEnabled = 1;
  this->fields.ICON_NORMAL_COLOR = _Q1;
  this->fields.ICON_MASK_COLOR = (struct UnityEngine_Color_o)xmmword_BF9D70;
  ListViewIndicator___ctor((ListViewIndicator_o *)this, 0LL);
}


void __fastcall PartyListViewIndicator__Awake(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  struct UISprite_o *indexSprite; // x8

  indexSprite = this->fields.indexSprite;
  if ( !indexSprite )
    sub_1C1AE30(this, method);
  this->fields.indexLocalAtlas = indexSprite->fields.mAtlas;
  sub_1C1AB78(&this->fields.indexLocalAtlas);
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
    sub_1C1AE30(limitMasterFormationButton, method);
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

  if ( (byte_4BC3649 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&bonusVal);
    byte_4BC3649 = 1;
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
      sub_1C1AE30(gameObject, v7);
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
  char v20; // w21
  int32_t DeckNum; // w23
  il2cpp_array_size_t v22; // w24
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

  if ( (byte_4BC3642 & 1) == 0 )
  {
    sub_1C1ABD4(&AtlasManager_TypeInfo, partyItem);
    sub_1C1ABD4(&BalanceConfig_TypeInfo, v7);
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_UISprite___, v8);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___, v9);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1C1ABD4(&StringLiteral_19485/*"event_emblem_frame"*/, v11);
    sub_1C1ABD4(&StringLiteral_20481/*"icon_equip_fixation"*/, v12);
    sub_1C1ABD4(&StringLiteral_8423/*"LIMIT_EQUIP_SETTING"*/, v13);
    sub_1C1ABD4(&StringLiteral_17816/*"btn_skill_off"*/, v14);
    sub_1C1ABD4(&StringLiteral_19484/*"event_emblem_dim"*/, v15);
    sub_1C1ABD4(&StringLiteral_17817/*"btn_skill_on"*/, v16);
    byte_4BC3642 = 1;
  }
  outEnt = 0LL;
  if ( !PartyListViewIndicator__IsEventOnlyEquip(this, (const MethodInfo *)partyItem) )
    goto LABEL_14;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
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
    PartyListViewIndicator__ClearEventLimitEquip(this, v17);
    return;
  }
  Instance = (DataManager_o *)outEnt;
  if ( !outEnt )
    goto LABEL_62;
  Instance = (DataManager_o *)EventEquipSkillReleaseEntity__isForceOverwrite(outEnt, 0LL);
  if ( !partyItem )
    goto LABEL_62;
  v20 = (char)Instance;
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
    v22 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 148LL);
  }
  else
  {
    v22 = DeckNum - 1;
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
  AtlasManager__SetEventUI(masterEquipBackSprite, (System_String_o *)StringLiteral_19484/*"event_emblem_dim"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.masterEquipFrameSprite, (System_String_o *)StringLiteral_19485/*"event_emblem_frame"*/, 0LL);
  if ( !this->fields.isChkSave )
  {
    if ( (v20 & 1) == 0 )
    {
      Instance = (DataManager_o *)UnityEngine_PlayerPrefs__GetString_70752688(
                                    (System_String_o *)StringLiteral_8423/*"LIMIT_EQUIP_SETTING"*/,
                                    0LL);
      if ( !Instance )
        goto LABEL_62;
      if ( Instance->fields.m_CachedPtr >= 1 )
      {
        Instance = (DataManager_o *)System_String__Split((System_String_o *)Instance, 0x2Cu, 0, 0LL);
        if ( !Instance )
          goto LABEL_62;
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
              goto LABEL_63;
            useLimitEquip = this->fields.useLimitEquip;
            Instance = (DataManager_o *)System_Int32__Parse(*((System_String_o **)&v24->fields._DispLog + v25), 0LL);
            if ( !useLimitEquip )
              goto LABEL_62;
            if ( v25 >= useLimitEquip->max_length )
              goto LABEL_63;
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
LABEL_62:
    sub_1C1AE30(Instance, v17);
  }
  if ( (v20 & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    v28 = this->fields.useLimitEquip;
    v29 = (char *)v28 + 4 * (int)v22;
    if ( isChng )
    {
      if ( !v28 )
        goto LABEL_62;
      if ( v22 >= v28->max_length )
        goto LABEL_63;
      *((_DWORD *)v29 + 8) = *((_DWORD *)v29 + 8) == 0;
    }
    else if ( !v28 )
    {
      goto LABEL_62;
    }
    if ( v22 < v28->max_length )
    {
      Instance = (DataManager_o *)this->fields.limitMasterFormationButton;
      if ( Instance )
      {
        v30 = *((_DWORD *)v29 + 8);
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)Instance,
                             (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( v30 )
        {
          AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_17817/*"btn_skill_on"*/, 0LL);
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
          AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_17816/*"btn_skill_off"*/, 0LL);
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
    sub_1C1AE38(Instance, v17);
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
  AtlasManager__SetEventUI(limitEquipFixSprite, (System_String_o *)StringLiteral_20481/*"icon_equip_fixation"*/, 0LL);
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
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestRestrictionInfo_o *v27; // x0
  int32_t servantNumMax; // w1
  UISprite_o *v29; // x21
  struct QuestRestrictionInfo_o *v30; // x8
  BalanceConfig_c *v31; // x0
  const MethodInfo *v32; // x2
  UICommonButton_o *masterEquipButton; // x21
  struct QuestRestrictionInfo_o *v34; // x8
  struct QuestRestrictionInfo_o *v35; // x8
  int32_t maxCost; // w21
  QuestRestrictionInfo_o *v37; // x0
  int32_t TotalCostRestriction; // w22
  bool v39; // w21
  System_String_o *v40; // x21
  UILabel_o *maxCostLabel; // x22
  System_String_o *v42; // x0
  UILabel_o *splitCostLabel; // x22
  System_String_o *v44; // x0
  int cost; // w8
  UILabel_o *selectCostLabel; // x22
  System_String_o *v47; // x0
  System_String_o *v48; // x0
  Il2CppObject *Entity; // x0
  const MethodInfo *v50; // x3
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  __int64 v53; // x9
  int32_t v54; // w21
  ServantEntity_array *SvtEntityList; // x22
  System_String_array *SvtNameList; // x23
  System_Boolean_array *IsFollowerList; // x24
  EventPartyMargeUpValInfo_o *v58; // x25
  EventUpValInfo_array *v59; // x8
  unsigned __int64 v60; // x20
  unsigned __int64 max_length; // x9
  EventPartyMargeUpValInfo_o *eventMargeUpValInfo; // x22
  UILabel_o *selectNameLabel; // x21
  System_String_o *v64; // x0
  EventUpValInfo_array *eventUpValList; // [xsp+8h] [xbp-78h] BYREF
  int32_t genderImageId; // [xsp+14h] [xbp-6Ch] BYREF
  System_String_o *detail; // [xsp+18h] [xbp-68h] BYREF
  System_String_o *equipName; // [xsp+20h] [xbp-60h] BYREF
  int32_t maxLv; // [xsp+2Ch] [xbp-54h] BYREF
  int32_t condUsrLv[2]; // [xsp+30h] [xbp-50h] BYREF
  __int64 eventId; // [xsp+38h] [xbp-48h] BYREF

  v3 = partyItem;
  if ( (byte_4BC3641 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, partyItem);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v5);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserEquipMaster___, v6);
    sub_1C1ABD4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v7);
    sub_1C1ABD4(&EventPartyMargeUpValInfo_TypeInfo, v8);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v9);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v10);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1C1ABD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    sub_1C1ABD4(&StringLiteral_10468/*"PARTY_ORGANIZATION_NAME"*/, v13);
    sub_1C1ABD4(&StringLiteral_23799/*"solo_bg"*/, v14);
    sub_1C1ABD4(&StringLiteral_10431/*"PARTY_ORGANIZATION_COST_SPLIT"*/, v15);
    sub_1C1ABD4(&StringLiteral_10429/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, v16);
    sub_1C1ABD4(&StringLiteral_10430/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, v17);
    sub_1C1ABD4(&StringLiteral_23830/*"specialparty_bg"*/, v18);
    sub_1C1ABD4(&StringLiteral_10428/*"PARTY_ORGANIZATION_COST_COLOR"*/, v19);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v20);
    byte_4BC3641 = 1;
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
                          sub_1C1AB78(&this->fields.questRestrictionInfo);
                          this->fields.eventMargeUpValInfo = 0LL;
                          sub_1C1AB78(&this->fields.eventMargeUpValInfo);
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
                                                     (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !this->fields.soloBaseObject )
        goto LABEL_107;
      v22 = (UISprite_o *)soloBaseObject;
      UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0LL);
      if ( !v22 )
        goto LABEL_107;
      UISprite__set_spriteName(v22, (System_String_o *)StringLiteral_23799/*"solo_bg"*/, 0LL);
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v22->klass->vtable._33_MakePixelPerfect.method)(
        v22,
        v22->klass->vtable._34_get_minWidth.methodPtr);
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
      v23 = 0;
      goto LABEL_68;
    case 2:
      soloBaseObject = this->fields.soloBaseObject;
      if ( !soloBaseObject )
        goto LABEL_107;
      soloBaseObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     soloBaseObject,
                                                     (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !this->fields.soloBaseObject )
        goto LABEL_107;
      v29 = (UISprite_o *)soloBaseObject;
      UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0LL);
      if ( !v29 )
        goto LABEL_107;
      UISprite__set_spriteName(v29, (System_String_o *)StringLiteral_23830/*"specialparty_bg"*/, 0LL);
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v29->klass->vtable._33_MakePixelPerfect.method)(
        v29,
        v29->klass->vtable._34_get_minWidth.methodPtr);
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
      v27 = this->fields.questRestrictionInfo;
      if ( !v27 )
        goto LABEL_63;
      soloBaseObject = (UnityEngine_GameObject_o *)QuestRestrictionInfo__IsServantNum(v27, 0LL);
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
        soloBaseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !soloBaseObject )
          goto LABEL_107;
        soloBaseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)soloBaseObject,
                                                       (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
        v34 = this->fields.questRestrictionInfo;
        if ( !v34 )
          goto LABEL_107;
        if ( !soloBaseObject )
          goto LABEL_107;
        soloBaseObject = (UnityEngine_GameObject_o *)NpcFollowerMaster__GetQuestFollowerList(
                                                       (NpcFollowerMaster_o *)soloBaseObject,
                                                       v34->fields.questId,
                                                       v34->fields.questPhase,
                                                       0LL);
        v35 = this->fields.questRestrictionInfo;
        if ( !v35 || !soloBaseObject )
          goto LABEL_107;
        servantNumMax = v35->fields.myServantNumMax + LODWORD(soloBaseObject[1].klass);
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
                                                     v32);
      masterEquipButton = this->fields.masterEquipButton;
      if ( v3->fields._IsWaveBattleRestart_k__BackingField )
      {
        soloBaseObject = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
      v30 = this->fields.questRestrictionInfo;
      if ( v30 && v30->fields.eventDeckNum >= 1 )
      {
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_107;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_107;
        UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
        v31 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v31 = BalanceConfig_TypeInfo;
        }
        servantNumMax = v31->static_fields->DeckMemberMax;
LABEL_62:
        PartyListViewIndicator__SetEventDeckPartyName(this, servantNumMax, v25);
LABEL_63:
        soloBaseObject = this->fields.indexBaseObject;
        if ( !soloBaseObject
          || (UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL),
              (soloBaseObject = this->fields.selectNameBaseObject) == 0LL) )
        {
LABEL_107:
          sub_1C1AE30(soloBaseObject, partyItem);
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
        v64 = LocalizationManager__Get((System_String_o *)StringLiteral_10468/*"PARTY_ORGANIZATION_NAME"*/, 0LL);
        soloBaseObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                       v64,
                                                       (Il2CppObject *)v3->fields.deckName,
                                                       0LL);
        if ( !selectNameLabel )
          goto LABEL_107;
        UILabel__set_text(selectNameLabel, (System_String_o *)soloBaseObject, 0LL);
      }
      soloBaseObject = this->fields.costBaseObject;
      if ( !soloBaseObject )
        goto LABEL_107;
      v23 = 1;
LABEL_68:
      UnityEngine_GameObject__SetActive(soloBaseObject, v23, 0LL);
LABEL_69:
      maxCost = v3->fields.maxCost;
      HIDWORD(eventId) = maxCost;
      v37 = this->fields.questRestrictionInfo;
      if ( v37 )
        TotalCostRestriction = QuestRestrictionInfo__GetTotalCostRestriction(v37, 0LL);
      else
        TotalCostRestriction = 0;
      v39 = TotalCostRestriction != 0 && maxCost > TotalCostRestriction;
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( v39 )
        {
LABEL_74:
          v40 = LocalizationManager__Get((System_String_o *)StringLiteral_10430/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0LL);
          HIDWORD(eventId) = TotalCostRestriction;
          goto LABEL_77;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v39 )
          goto LABEL_74;
      }
      v40 = LocalizationManager__Get((System_String_o *)StringLiteral_10428/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
LABEL_77:
      maxCostLabel = this->fields.maxCostLabel;
      v42 = System_Int32__ToString((int32_t)&eventId + 4, 0LL);
      soloBaseObject = (UnityEngine_GameObject_o *)System_String__Concat_63040368(v40, v42, 0LL);
      if ( !maxCostLabel )
        goto LABEL_107;
      UILabel__set_text(maxCostLabel, (System_String_o *)soloBaseObject, 0LL);
      splitCostLabel = this->fields.splitCostLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v44 = LocalizationManager__Get((System_String_o *)StringLiteral_10431/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
      soloBaseObject = (UnityEngine_GameObject_o *)System_String__Concat_63040368(v40, v44, 0LL);
      if ( !splitCostLabel )
        goto LABEL_107;
      UILabel__set_text(splitCostLabel, (System_String_o *)soloBaseObject, 0LL);
      cost = v3->fields.cost;
      selectCostLabel = this->fields.selectCostLabel;
      if ( cost > SHIDWORD(eventId) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v47 = LocalizationManager__Get((System_String_o *)StringLiteral_10429/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
        cost = v3->fields.cost;
        v40 = v47;
      }
      condUsrLv[1] = cost;
      v48 = System_Int32__ToString((int32_t)&condUsrLv[1], 0LL);
      soloBaseObject = (UnityEngine_GameObject_o *)System_String__Concat_63040368(v40, v48, 0LL);
      if ( !selectCostLabel )
        goto LABEL_107;
      UILabel__set_text(selectCostLabel, (System_String_o *)soloBaseObject, 0LL);
      soloBaseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !soloBaseObject )
        goto LABEL_107;
      soloBaseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)soloBaseObject,
                                                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserEquipMaster___);
      if ( !soloBaseObject )
        goto LABEL_107;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)soloBaseObject,
                 v3->fields.userEquipId,
                 (const MethodInfo_324ABD4 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
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
      PartyListViewIndicator__DrawEventLimitEquip(this, v3, 0, v50);
      setupInfo = this->fields.setupInfo;
      if ( !setupInfo )
        goto LABEL_97;
      eventIdList = setupInfo->fields.eventIdList;
      if ( !eventIdList )
        goto LABEL_107;
      v53 = *(_QWORD *)&eventIdList->max_length;
      if ( v53 )
      {
        if ( !(_DWORD)v53 )
LABEL_124:
          sub_1C1AE38(soloBaseObject, partyItem);
        v54 = eventIdList->m_Items[1];
      }
      else
      {
LABEL_97:
        v54 = 0;
      }
      LODWORD(eventId) = v54;
      SvtEntityList = PartyListViewItem__GetSvtEntityList(v3, 0LL);
      SvtNameList = PartyListViewItem__GetSvtNameList(v3, 0LL);
      IsFollowerList = PartyListViewItem__GetIsFollowerList(v3, 0LL);
      v58 = (EventPartyMargeUpValInfo_o *)sub_1C1AE20(EventPartyMargeUpValInfo_TypeInfo);
      EventPartyMargeUpValInfo___ctor(v58, v54, SvtEntityList, SvtNameList, IsFollowerList, 0LL);
      this->fields.eventMargeUpValInfo = v58;
      sub_1C1AB78(&this->fields.eventMargeUpValInfo);
      soloBaseObject = (UnityEngine_GameObject_o *)PartyListViewItem__GetEventUpVal(
                                                     v3,
                                                     (int32_t *)&eventId,
                                                     &eventUpValList,
                                                     0LL);
      if ( ((unsigned __int8)soloBaseObject & 1) != 0 )
      {
        v59 = eventUpValList;
        if ( !eventUpValList )
          goto LABEL_107;
        v60 = 0LL;
        while ( 1 )
        {
          max_length = v59->max_length;
          if ( (__int64)v60 >= (int)max_length )
            break;
          if ( v60 >= max_length )
            goto LABEL_124;
          soloBaseObject = (UnityEngine_GameObject_o *)v59->m_Items[v60];
          if ( soloBaseObject )
          {
            eventMargeUpValInfo = this->fields.eventMargeUpValInfo;
            soloBaseObject = (UnityEngine_GameObject_o *)EventUpValInfo__GetDropItemList(
                                                           (EventUpValInfo_o *)soloBaseObject,
                                                           v60,
                                                           0LL);
            if ( !eventMargeUpValInfo )
              goto LABEL_107;
            EventPartyMargeUpValInfo__Add(eventMargeUpValInfo, (EventDropItemUpValInfo_array *)soloBaseObject, 0LL);
            v59 = eventUpValList;
          }
          ++v60;
          if ( !v59 )
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
        v24);
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

  if ( (byte_4BC3648 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1C1ABD4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BC3648 = 1;
  }
  entity = 0LL;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (questRestrictionInfo = this->fields.questRestrictionInfo) == 0LL)
    || !Instance )
  {
LABEL_12:
    sub_1C1AE30(Instance, v6);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          questRestrictionInfo->fields.eventId,
          (const MethodInfo_32486C4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
  int32_t DeckNum; // w21
  BalanceConfig_c *v11; // x0
  il2cpp_array_size_t DeckMax; // w20
  struct System_Int32_array *useLimitEquip; // x8
  EventEquipSkillReleaseEntity_o *outEnt; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BC3647 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, partyItem);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4BC3647 = 1;
  }
  outEnt = 0LL;
  if ( !PartyListViewIndicator__IsEventOnlyEquip(this, (const MethodInfo *)partyItem) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
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
    v11 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v11 = BalanceConfig_TypeInfo;
    }
    DeckMax = v11->static_fields->DeckMax;
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
    sub_1C1AE30(Instance, v8);
  if ( DeckMax >= useLimitEquip->max_length )
    sub_1C1AE38(Instance, v8);
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

  if ( (byte_4BC3643 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    sub_1C1ABD4(&Method_PartyListViewIndicator_OnClickLeft__, v3);
    byte_4BC3643 = 1;
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
        v7 = (_QWORD *)sub_1C1ABEC(Method_PartyListViewIndicator_OnClickLeft__);
      v8 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 7, 0, 0LL);
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
        v11 = (_QWORD *)sub_1C1ABEC(Method_PartyListViewIndicator_OnClickLeft__);
      v12 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 7, 0, 0LL);
      v6 = this->fields.manager;
      if ( v6 )
      {
        pageIndex = this->fields.pageMax;
        goto LABEL_20;
      }
LABEL_22:
      sub_1C1AE30(v6, v5);
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

  if ( (byte_4BC3644 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    sub_1C1ABD4(&Method_PartyListViewIndicator_OnClickRight__, v3);
    byte_4BC3644 = 1;
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
        v8 = (_QWORD *)sub_1C1ABEC(Method_PartyListViewIndicator_OnClickRight__);
      v9 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 7, 0, 0LL);
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
        v12 = (_QWORD *)sub_1C1ABEC(Method_PartyListViewIndicator_OnClickRight__);
      v13 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 7, 0, 0LL);
      v6 = this->fields.manager;
      if ( v6 )
      {
        v10 = 0;
        goto LABEL_21;
      }
LABEL_23:
      sub_1C1AE30(v6, v5);
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

  if ( (byte_4BC363E & 1) == 0 )
  {
    sub_1C1ABD4(&PartyListViewItem_TypeInfo, manager);
    byte_4BC363E = 1;
  }
  this->fields.manager = manager;
  leftObject = (UnityEngine_GameObject_o *)sub_1C1AB78(&this->fields.manager);
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
    sub_1C1AE30(leftObject, v14);
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

  if ( (byte_4BC3645 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, *(_QWORD *)&servantNum);
    sub_1C1ABD4(&StringLiteral_21468/*"limited_bg"*/, v5);
    sub_1C1ABD4(&StringLiteral_23799/*"solo_bg"*/, v6);
    sub_1C1ABD4(&StringLiteral_23913/*"startingonly_bg"*/, v7);
    sub_1C1ABD4(&StringLiteral_22838/*"pair_bg"*/, v8);
    byte_4BC3645 = 1;
  }
  organizationNumObject = this->fields.organizationNumObject;
  if ( !organizationNumObject )
LABEL_19:
    sub_1C1AE30(organizationNumObject, *(_QWORD *)&servantNum);
  organizationNumObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        organizationNumObject,
                                                        (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
                                                            (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
      UISprite__set_spriteName(v13, (System_String_o *)StringLiteral_23799/*"solo_bg"*/, 0LL);
      organizationNumObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v13->klass->vtable._33_MakePixelPerfect.method)(
                                                            v13,
                                                            v13->klass->vtable._34_get_minWidth.methodPtr);
      if ( !v11 )
        goto LABEL_19;
      goto LABEL_18;
    case 1:
      if ( !organizationNumObject )
        goto LABEL_19;
      v12 = &StringLiteral_22838/*"pair_bg"*/;
      break;
    case 2:
      if ( !organizationNumObject )
        goto LABEL_19;
      v12 = &StringLiteral_23913/*"startingonly_bg"*/;
      break;
    default:
      if ( !organizationNumObject )
        goto LABEL_19;
      v12 = &StringLiteral_21468/*"limited_bg"*/;
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
  EventPartyMargeUpValInfo_o *v8; // x1
  const MethodInfo *v9; // x3
  PartyEventPointIndicator_o *partyEventPointIndicator; // x0
  const MethodInfo *v11; // x2

  this->fields.setupInfo = setupInfo;
  sub_1C1AB78(&this->fields.setupInfo);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C1AB78(&this->fields.questRestrictionInfo);
  this->fields.eventMargeUpValInfo = 0LL;
  sub_1C1AB78(&this->fields.eventMargeUpValInfo);
  partyEventPointIndicator = this->fields.partyEventPointIndicator;
  if ( !partyEventPointIndicator
    || (PartyEventPointIndicator__SetInfomation(partyEventPointIndicator, questRestrictionInfo, classIds, v9),
        (partyEventPointIndicator = this->fields.partyEventPointIndicator) == 0LL) )
  {
    sub_1C1AE30(partyEventPointIndicator, v8);
  }
  PartyEventPointIndicator__SetTotalDropItemList(partyEventPointIndicator, v8, v11);
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

  if ( (byte_4BC3646 & 1) == 0 )
  {
    sub_1C1ABD4(&int_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_8423/*"LIMIT_EQUIP_SETTING"*/, v3);
    sub_1C1ABD4(&StringLiteral_866/*","*/, v4);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v5);
    byte_4BC3646 = 1;
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
          sub_1C1AE38(IsEventOnlyEquip, v7);
        if ( !v13 )
          break;
        v15 = useLimitEquip->m_Items[v14 + 1];
        if ( v13->fields._stringLength >= 1 )
          v13 = System_String__Concat_63040368(v13, (System_String_o *)StringLiteral_866/*","*/, 0LL);
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
      sub_1C1AE30(IsEventOnlyEquip, v7);
    }
LABEL_12:
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_8423/*"LIMIT_EQUIP_SETTING"*/, v13, 0LL);
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
    sub_1C1AE30(leftObject, v4);
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
  UISprite_o *v30; // x22
  System_String_o *v31; // x0
  UISprite_o *indexSprite; // x22
  System_String_o *v33; // x21
  UISprite_o *waveMaxNumTensPlaceSprite; // x22
  System_String_o *v35; // x0
  System_String_o *v36; // x23
  UISprite_o *waveMaxNumTensPlaceGlowSprite; // x22
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x0
  int32_t v41; // w1
  UISprite_o *waveNumTensPlaceSprite; // x22
  System_String_o *v43; // x0
  System_String_o *v44; // x23
  UISprite_o *waveNumTensPlaceGlowSprite; // x22
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  UISprite_o *waveNumOnesPlaceSprite; // x21
  System_String_o *v49; // x0
  System_String_o *v50; // x22
  UISprite_o *waveNumOnesPlaceGlowSprite; // x21
  System_String_o *v52; // x0
  System_String_o *v53; // x0
  UISprite_o *waveMaxNumOnesPlaceSprite; // x21
  System_String_o *v55; // x0
  System_String_o *v56; // x0
  UISprite_o *waveMaxNumOnesPlaceGlowSprite; // x21
  System_String_o *v58; // x0
  System_String_o *v59; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w21
  bool v62; // w20
  int v63; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4BC3640 & 1) == 0 )
  {
    sub_1C1ABD4(&AtlasManager_TypeInfo, *(_QWORD *)&index);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v5);
    sub_1C1ABD4(&LastUsedDeckNumberManager_TypeInfo, v6);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v7);
    sub_1C1ABD4(&OptionManager_TypeInfo, v8);
    sub_1C1ABD4(&StringLiteral_17404/*"battle_num_"*/, v9);
    sub_1C1ABD4(&StringLiteral_20819/*"img_slider_on"*/, v10);
    sub_1C1ABD4(&StringLiteral_16810/*"_glow"*/, v11);
    sub_1C1ABD4(&StringLiteral_17406/*"battle_num_slash_glow"*/, v12);
    sub_1C1ABD4(&StringLiteral_22868/*"party_txt_"*/, v13);
    sub_1C1ABD4(&StringLiteral_17399/*"battle_bg"*/, v14);
    sub_1C1ABD4(&StringLiteral_20818/*"img_slider_off"*/, v15);
    sub_1C1ABD4(&StringLiteral_17405/*"battle_num_slash"*/, v16);
    sub_1C1ABD4(&StringLiteral_22867/*"party_bg"*/, v17);
    byte_4BC3640 = 1;
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
          goto LABEL_96;
        if ( (unsigned int)v21 >= pageSpriteList->max_length )
          sub_1C1AE38(gameObject, v20);
        gameObject = pageSpriteList->m_Items[v21];
        if ( !gameObject )
          goto LABEL_96;
        if ( index == (_DWORD)v21 )
          v23 = &StringLiteral_20819/*"img_slider_on"*/;
        else
          v23 = &StringLiteral_20818/*"img_slider_off"*/;
        UISprite__set_spriteName(gameObject, (System_String_o *)*v23, 0LL);
      }
      while ( (int)++v21 < this->fields.pageMax );
    }
    v24 = index + 1;
    v63 = index + 1;
    gameObject = (UISprite_o *)System_Int32__ToString((int32_t)&v63, 0LL);
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
                           (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetPartyOrganizationImage(
        (UISprite_o *)Component_object,
        (System_String_o *)StringLiteral_17399/*"battle_bg"*/,
        0LL);
      AtlasManager__SetPartyOrganizationImage(
        this->fields.waveNumSlashSprite,
        (System_String_o *)StringLiteral_17405/*"battle_num_slash"*/,
        0LL);
      AtlasManager__SetPartyOrganizationImage(
        this->fields.waveNumSlashGlowSprite,
        (System_String_o *)StringLiteral_17406/*"battle_num_slash_glow"*/,
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
        v63 = this->fields.pageMax / 10;
        v35 = System_Int32__ToString((int32_t)&v63, 0LL);
        v36 = System_String__Concat_63040368((System_String_o *)StringLiteral_17404/*"battle_num_"*/, v35, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetPartyOrganizationImage(waveMaxNumTensPlaceSprite, v36, 0LL);
        waveMaxNumTensPlaceGlowSprite = this->fields.waveMaxNumTensPlaceGlowSprite;
        v63 = this->fields.pageMax / 10;
        v38 = System_Int32__ToString((int32_t)&v63, 0LL);
        v39 = System_String__Concat_63051628(
                (System_String_o *)StringLiteral_17404/*"battle_num_"*/,
                v38,
                (System_String_o *)StringLiteral_16810/*"_glow"*/,
                0LL);
        AtlasManager__SetPartyOrganizationImage(waveMaxNumTensPlaceGlowSprite, v39, 0LL);
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
        v40 = this->fields.waveNumObject;
        if ( v24 >= 10 )
        {
          GameObjectExtensions__SetLocalPositionX(v40, 7.0, 0LL);
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
          v63 = v24 / 0xAu;
          v43 = System_Int32__ToString((int32_t)&v63, 0LL);
          v44 = System_String__Concat_63040368((System_String_o *)StringLiteral_17404/*"battle_num_"*/, v43, 0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetPartyOrganizationImage(waveNumTensPlaceSprite, v44, 0LL);
          waveNumTensPlaceGlowSprite = this->fields.waveNumTensPlaceGlowSprite;
          v63 = v24 / 0xAu;
          v46 = System_Int32__ToString((int32_t)&v63, 0LL);
          v47 = System_String__Concat_63051628(
                  (System_String_o *)StringLiteral_17404/*"battle_num_"*/,
                  v46,
                  (System_String_o *)StringLiteral_16810/*"_glow"*/,
                  0LL);
          AtlasManager__SetPartyOrganizationImage(waveNumTensPlaceGlowSprite, v47, 0LL);
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
          v41 = 322;
        }
        else
        {
          GameObjectExtensions__SetLocalPositionX(v40, 1.0, 0LL);
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
          v41 = 308;
        }
        UIWidget__set_width((UIWidget_o *)Component_object, v41, 0LL);
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
        v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionX(v27, 67.0, 0LL);
        gameObject = this->fields.waveMaxNumOnesPlaceGlowSprite;
        if ( !gameObject )
          goto LABEL_96;
        v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionX(v28, 67.0, 0LL);
      }
      waveNumOnesPlaceSprite = this->fields.waveNumOnesPlaceSprite;
      v63 = v24 % 10;
      v49 = System_Int32__ToString((int32_t)&v63, 0LL);
      v50 = System_String__Concat_63040368((System_String_o *)StringLiteral_17404/*"battle_num_"*/, v49, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetPartyOrganizationImage(waveNumOnesPlaceSprite, v50, 0LL);
      waveNumOnesPlaceGlowSprite = this->fields.waveNumOnesPlaceGlowSprite;
      v63 = v24 % 10;
      v52 = System_Int32__ToString((int32_t)&v63, 0LL);
      v53 = System_String__Concat_63051628(
              (System_String_o *)StringLiteral_17404/*"battle_num_"*/,
              v52,
              (System_String_o *)StringLiteral_16810/*"_glow"*/,
              0LL);
      AtlasManager__SetPartyOrganizationImage(waveNumOnesPlaceGlowSprite, v53, 0LL);
      waveMaxNumOnesPlaceSprite = this->fields.waveMaxNumOnesPlaceSprite;
      v63 = this->fields.pageMax % 10;
      v55 = System_Int32__ToString((int32_t)&v63, 0LL);
      v56 = System_String__Concat_63040368((System_String_o *)StringLiteral_17404/*"battle_num_"*/, v55, 0LL);
      AtlasManager__SetPartyOrganizationImage(waveMaxNumOnesPlaceSprite, v56, 0LL);
      waveMaxNumOnesPlaceGlowSprite = this->fields.waveMaxNumOnesPlaceGlowSprite;
      v63 = this->fields.pageMax % 10;
      v58 = System_Int32__ToString((int32_t)&v63, 0LL);
      v59 = System_String__Concat_63051628(
              (System_String_o *)StringLiteral_17404/*"battle_num_"*/,
              v58,
              (System_String_o *)StringLiteral_16810/*"_glow"*/,
              0LL);
      AtlasManager__SetPartyOrganizationImage(waveMaxNumOnesPlaceGlowSprite, v59, 0LL);
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
      v29 = (System_String_o *)gameObject;
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
                                   (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !gameObject )
        goto LABEL_96;
      v30 = gameObject;
      UISprite__set_atlas(gameObject, this->fields.indexLocalAtlas, 0LL);
      UISprite__set_spriteName(v30, (System_String_o *)StringLiteral_22867/*"party_bg"*/, 0LL);
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v30->klass->vtable._33_MakePixelPerfect.method)(
        v30,
        v30->klass->vtable._34_get_minWidth.methodPtr);
      gameObject = this->fields.indexSprite;
      if ( !gameObject )
        goto LABEL_96;
      gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_96;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v31 = System_String__Concat_63040368((System_String_o *)StringLiteral_22868/*"party_txt_"*/, v29, 0LL);
      indexSprite = this->fields.indexSprite;
      v33 = v31;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( !AtlasManager__SetPartyOrganizationImage(indexSprite, v33, 0LL) )
      {
        gameObject = this->fields.indexSprite;
        if ( !gameObject )
          goto LABEL_96;
        UISprite__set_atlas(gameObject, this->fields.indexLocalAtlas, 0LL);
        gameObject = this->fields.indexSprite;
        if ( !gameObject )
          goto LABEL_96;
        UISprite__set_spriteName(gameObject, v33, 0LL);
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
      v62 = LastUsedDeckNumberManager__GetDeckNumber(questId, 0LL) - 1 == index;
    }
    else
    {
LABEL_91:
      v62 = 0;
    }
    gameObject = this->fields.lastTimeUsedSprite;
    if ( !gameObject
      || (gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
    {
LABEL_96:
      sub_1C1AE30(gameObject, v20);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v62, 0LL);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Array_o *pageSpriteList; // x8
  System_Array_o **p_pageSpriteList; // x21
  PartyListViewIndicator_o *v17; // x22
  System_Array_o *v18; // x8
  Il2CppObject *klass; // x23
  System_Array_o *v20; // x8
  float v21; // s0
  float v22; // s1
  float v23; // s2
  System_Array_o *v24; // x8
  float v25; // s8
  float v26; // s9
  float v27; // s10
  float v28; // s0
  float v29; // s1
  float v30; // s2
  int monitor; // w24
  float v32; // s8
  float v33; // s9
  float v34; // s10
  UnityEngine_Component_o **v35; // x25
  UnityEngine_Component_o *v36; // x26
  PartyListViewIndicator_o *v37; // x28
  UnityEngine_MonoBehaviour_o *v38; // x29
  EventDelegate_o *v39; // x27
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  struct UnityEngine_GameObject_o *soloBaseObject; // x29
  int32_t m_CancellationTokenSource; // w2
  int v45; // w8
  __int64 v46; // x8
  _QWORD *v47; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v49; // x8
  __int64 v50; // x22
  void *v51; // x9
  UnityEngine_Object_o *pageBaseObject; // x20
  System_Array_o *v53; // x8
  __int64 v54; // x20
  int v55; // w9
  System_String_o *v56; // x1
  float v57; // s1
  float v58; // s2
  int32_t pageMax; // w19
  float v60; // s8
  float v61; // s9
  __int64 v62; // x0
  UnityEngine_Transform_o *parent; // [xsp+8h] [xbp-88h]
  int v64; // [xsp+1Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4BC363F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_UICommonButton___, *(_QWORD *)&max);
    sub_1C1ABD4(&EventDelegate_TypeInfo, v5);
    sub_1C1ABD4(&int_TypeInfo, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventDelegate__get_Item__, v9);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_UISprite___, v10);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v11);
    sub_1C1ABD4(&UISprite___TypeInfo, v12);
    sub_1C1ABD4(&StringLiteral_20818/*"img_slider_off"*/, v13);
    this = (PartyListViewIndicator_o *)sub_1C1ABD4(&StringLiteral_10058/*"OnClickTabParty"*/, v14);
    byte_4BC363F = 1;
  }
  p_pageSpriteList = (System_Array_o **)&v4->fields.pageSpriteList;
  pageSpriteList = (System_Array_o *)v4->fields.pageSpriteList;
  if ( !pageSpriteList )
    goto LABEL_67;
  if ( SLODWORD(pageSpriteList[1].monitor) < max )
  {
    this = (PartyListViewIndicator_o *)sub_1C1AC7C(UISprite___TypeInfo, (unsigned int)max);
    if ( !*p_pageSpriteList )
      goto LABEL_67;
    v17 = this;
    System_Array__CopyTo(*p_pageSpriteList, (System_Array_o *)this, 0, 0LL);
    v18 = *p_pageSpriteList;
    if ( !*p_pageSpriteList )
      goto LABEL_67;
    if ( !LODWORD(v18[1].monitor) )
      goto LABEL_74;
    klass = (Il2CppObject *)v18[2].klass;
    if ( !klass )
      goto LABEL_67;
    this = (PartyListViewIndicator_o *)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)v18[2].klass,
                                         0LL);
    if ( !this )
      goto LABEL_67;
    this = (PartyListViewIndicator_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
    v20 = *p_pageSpriteList;
    parent = (UnityEngine_Transform_o *)this;
    if ( !*p_pageSpriteList )
      goto LABEL_67;
    if ( LODWORD(v20[1].monitor) <= 1 )
      goto LABEL_74;
    this = (PartyListViewIndicator_o *)v20[2].monitor;
    if ( !this )
      goto LABEL_67;
    this = (PartyListViewIndicator_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_67;
    *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v24 = *p_pageSpriteList;
    if ( !*p_pageSpriteList )
      goto LABEL_67;
    if ( !LODWORD(v24[1].monitor) )
LABEL_74:
      sub_1C1AE38(this, *(_QWORD *)&max);
    this = (PartyListViewIndicator_o *)v24[2].klass;
    if ( !this )
      goto LABEL_67;
    v25 = v21;
    v26 = v22;
    v27 = v23;
    this = (PartyListViewIndicator_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_67;
    *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    if ( !*p_pageSpriteList || !v17 )
      goto LABEL_67;
    monitor = (int)(*p_pageSpriteList)[1].monitor;
    if ( monitor < SLODWORD(v17->fields.m_CancellationTokenSource) )
    {
      v32 = v25 - v28;
      v33 = v26 - v29;
      v34 = v27 - v30;
      v35 = (UnityEngine_Component_o **)(&v17->fields.soloBaseObject + monitor);
      while ( 1 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (PartyListViewIndicator_o *)UnityEngine_Object__Instantiate_object__50483316(
                                             klass,
                                             parent,
                                             (const MethodInfo_3025074 *)Method_UnityEngine_Object_Instantiate_UISprite___);
        if ( !this )
          break;
        v36 = (UnityEngine_Component_o *)this;
        this = (PartyListViewIndicator_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          break;
        v65.fields.z = v34 * (float)monitor;
        v65.fields.y = v33 * (float)monitor;
        v65.fields.x = v32 * (float)monitor;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v65, 0LL);
        this = (PartyListViewIndicator_o *)UnityEngine_Component__GetComponent_object_(
                                             v36,
                                             (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
        if ( !this )
          break;
        v37 = this;
        this = (PartyListViewIndicator_o *)this->fields.selectNameLabel;
        if ( !this )
          break;
        this = (PartyListViewIndicator_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)this,
                                             0,
                                             (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_EventDelegate__get_Item__);
        if ( !this )
          break;
        v38 = *(UnityEngine_MonoBehaviour_o **)&this->fields.m_CachedPtr;
        v39 = (EventDelegate_o *)sub_1C1AE20(EventDelegate_TypeInfo);
        EventDelegate___ctor_47893912(v39, v38, (System_String_o *)StringLiteral_10058/*"OnClickTabParty"*/, 0LL);
        if ( !v39 )
          break;
        this = (PartyListViewIndicator_o *)EventDelegate__get_parameters(v39, 0LL);
        if ( !this )
          break;
        if ( !LODWORD(this->fields.m_CancellationTokenSource) )
          goto LABEL_74;
        soloBaseObject = this->fields.soloBaseObject;
        v64 = monitor;
        this = (PartyListViewIndicator_o *)j_il2cpp_value_box_0(int_TypeInfo, &v64, v40, v41, v42);
        if ( !soloBaseObject )
          break;
        soloBaseObject[1].monitor = this;
        sub_1C1AB78(&soloBaseObject[1].monitor);
        this = (PartyListViewIndicator_o *)v37->fields.selectNameLabel;
        if ( !this )
          break;
        m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
        v45 = HIDWORD(this->fields.m_CancellationTokenSource) + 1;
        LODWORD(this->fields.m_CancellationTokenSource) = 0;
        HIDWORD(this->fields.m_CancellationTokenSource) = v45;
        if ( m_CancellationTokenSource >= 1 )
        {
          System_Array__Clear(*(System_Array_o **)&this->fields.m_CachedPtr, 0, m_CancellationTokenSource, 0LL);
          this = (PartyListViewIndicator_o *)v37->fields.selectNameLabel;
          if ( !this )
            break;
        }
        v46 = *(_QWORD *)&this->fields.m_CachedPtr;
        v47 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v46 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v46 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v39,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
        }
        else
        {
          v49 = v46 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v49 + 32) = v39;
          sub_1C1AB78(v49 + 32);
        }
        this = (PartyListViewIndicator_o *)sub_1C1AD10(v36, v17->klass->_1.element_class);
        if ( !this )
        {
          v62 = sub_1C1AE54();
          sub_1C1ACFC(v62, 0LL);
        }
        if ( (unsigned int)monitor >= LODWORD(v17->fields.m_CancellationTokenSource) )
          goto LABEL_74;
        *v35 = v36;
        sub_1C1AB78(v35);
        ++monitor;
        ++v35;
        if ( monitor >= SLODWORD(v17->fields.m_CancellationTokenSource) )
          goto LABEL_43;
      }
LABEL_67:
      sub_1C1AE30(this, *(_QWORD *)&max);
    }
LABEL_43:
    *p_pageSpriteList = (System_Array_o *)v17;
    this = (PartyListViewIndicator_o *)sub_1C1AB78(&v4->fields.pageSpriteList);
    pageSpriteList = *p_pageSpriteList;
    if ( !*p_pageSpriteList )
      goto LABEL_67;
  }
  v50 = 0LL;
  while ( 1 )
  {
    v51 = pageSpriteList[1].monitor;
    if ( (int)v50 >= (int)v51 )
      break;
    if ( (unsigned int)v50 >= (unsigned int)v51 )
      goto LABEL_74;
    this = (PartyListViewIndicator_o *)*((_QWORD *)&pageSpriteList[2].klass + v50);
    if ( this )
    {
      this = (PartyListViewIndicator_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (int)v50 < max, 0LL);
        pageSpriteList = *p_pageSpriteList;
        ++v50;
        if ( *p_pageSpriteList )
          continue;
      }
    }
    goto LABEL_67;
  }
  if ( (int)v51 >= max )
    LODWORD(v51) = max;
  v4->fields.pageMax = (int)v51;
  v4->fields.pageIndex = -1;
  if ( (int)v51 <= 1 )
    v4->fields.pageMax = 0;
  pageBaseObject = (UnityEngine_Object_o *)v4->fields.pageBaseObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PartyListViewIndicator_o *)UnityEngine_Object__op_Inequality(pageBaseObject, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v53 = *p_pageSpriteList;
    if ( !*p_pageSpriteList )
      goto LABEL_67;
    v54 = 0LL;
    while ( 1 )
    {
      v55 = (int)v53[1].monitor;
      if ( (int)v54 >= v55 )
        break;
      if ( (unsigned int)v54 >= v55 )
        goto LABEL_74;
      this = (PartyListViewIndicator_o *)*((_QWORD *)&v53[2].klass + v54);
      if ( this )
      {
        v56 = (int)v54 >= v4->fields.pageMax ? 0LL : (System_String_o *)StringLiteral_20818/*"img_slider_off"*/;
        UISprite__set_spriteName((UISprite_o *)this, v56, 0LL);
        v53 = (System_Array_o *)v4->fields.pageSpriteList;
        ++v54;
        if ( v53 )
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
    *(UnityEngine_Vector3_o *)(&v57 - 1) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)this,
                                             0LL);
    this = (PartyListViewIndicator_o *)v4->fields.pageBaseObject;
    if ( !this )
      goto LABEL_67;
    pageMax = v4->fields.pageMax;
    v60 = v57;
    v61 = v58;
    this = (PartyListViewIndicator_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_67;
    v66.fields.x = (float)(-10 * pageMax + 10);
    v66.fields.y = v60;
    v66.fields.z = v61;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v66, 0LL);
  }
}


void __fastcall PartyListViewIndicator__SetScrollEnabled(
        PartyListViewIndicator_o *this,
        bool enabled,
        const MethodInfo *method)
{
  this->fields.isScrollEnabled = enabled;
}