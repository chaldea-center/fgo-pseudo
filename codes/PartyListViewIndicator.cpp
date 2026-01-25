void PartyListViewIndicator___ctor(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct System_Int32_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4CE9E72 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&int___TypeInfo);
    byte_4CE9E72 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct System_Int32_array *)sub_1C7BB90(int___TypeInfo, (unsigned int)(v3->static_fields->DeckMax + 1));
  this->fields.useLimitEquip = v4;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.useLimitEquip, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  __asm { FMOV            V1.4S, #1.0 }
  this->fields.ICON_NORMAL_COLOR = _Q1;
  this->fields.ICON_MASK_COLOR = (struct UnityEngine_Color_o)xmmword_CF53A0;
  this->fields.isScrollEnabled = 1;
  ListViewIndicator___ctor((ListViewIndicator_o *)this, 0);
}


void PartyListViewIndicator__Awake(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UISprite_o *indexSprite; // x8
  struct UIAtlas_o *mAtlas; // x1

  indexSprite = this->fields.indexSprite;
  if ( !indexSprite )
    sub_1C7BD40(this, method);
  mAtlas = indexSprite->fields.mAtlas;
  this->fields.indexLocalAtlas = mAtlas;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.indexLocalAtlas, (int32_t)mAtlas, v2, v3, v4, v5, v6, v7);
}


void PartyListViewIndicator__ClearEventLimitEquip(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *limitMasterFormationButton; // x0

  limitMasterFormationButton = (UnityEngine_Component_o *)this->fields.limitMasterFormationButton;
  if ( !limitMasterFormationButton )
    goto LABEL_13;
  limitMasterFormationButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                            limitMasterFormationButton,
                                                            0);
  if ( !limitMasterFormationButton )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)limitMasterFormationButton, 0, 0);
  limitMasterFormationButton = (UnityEngine_Component_o *)this->fields.limitEquipIcon;
  if ( !limitMasterFormationButton )
    goto LABEL_13;
  ItemIconComponent__Clear((ItemIconComponent_o *)limitMasterFormationButton, 0);
  limitMasterFormationButton = (UnityEngine_Component_o *)this->fields.limitEquipFixSprite;
  if ( !limitMasterFormationButton )
    goto LABEL_13;
  UISprite__set_spriteName((UISprite_o *)limitMasterFormationButton, 0, 0);
  limitMasterFormationButton = (UnityEngine_Component_o *)this->fields.masterEquipBackSprite;
  if ( !limitMasterFormationButton )
    goto LABEL_13;
  UISprite__set_spriteName((UISprite_o *)limitMasterFormationButton, 0, 0);
  limitMasterFormationButton = (UnityEngine_Component_o *)this->fields.masterEquipFrameSprite;
  if ( !limitMasterFormationButton )
    goto LABEL_13;
  UISprite__set_spriteName((UISprite_o *)limitMasterFormationButton, 0, 0);
  limitMasterFormationButton = (UnityEngine_Component_o *)this->fields.masterEquipButton;
  if ( !limitMasterFormationButton )
    goto LABEL_13;
  if ( (((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))limitMasterFormationButton->klass[1]._1.image)(
          limitMasterFormationButton,
          limitMasterFormationButton->klass[1]._1.gc_desc)
      & 1) != 0 )
  {
    limitMasterFormationButton = (UnityEngine_Component_o *)this->fields.masterEquipIcon1;
    if ( limitMasterFormationButton )
    {
      ItemIconComponent__SetColor((ItemIconComponent_o *)limitMasterFormationButton, this->fields.ICON_NORMAL_COLOR, 0);
      limitMasterFormationButton = (UnityEngine_Component_o *)this->fields.masterEquipIcon2;
      if ( limitMasterFormationButton )
      {
        ItemIconComponent__SetColor(
          (ItemIconComponent_o *)limitMasterFormationButton,
          this->fields.ICON_NORMAL_COLOR,
          0);
        return;
      }
    }
LABEL_13:
    sub_1C7BD40(limitMasterFormationButton, method);
  }
}


void PartyListViewIndicator__DispFriendPointUpBonus(
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

  if ( (byte_4CE9E71 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE9E71 = 1;
  }
  friendPointUpBonusSprite = (UnityEngine_Object_o *)this->fields.friendPointUpBonusSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendPointUpBonusSprite, 0, 0) )
  {
    friendPointUpBonusLabel = (UnityEngine_Object_o *)this->fields.friendPointUpBonusLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(friendPointUpBonusLabel, 0, 0) )
    {
      if ( bonusVal < 1 )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.friendPointUpBonusSprite;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
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
        gameObject = (UnityEngine_Component_o *)System_Int32__ToString((int32_t)&v11, 0);
        if ( v8 )
        {
          UILabel__set_text(v8, (System_String_o *)gameObject, 0);
          gameObject = (UnityEngine_Component_o *)this->fields.friendPointUpBonusSprite;
          if ( gameObject )
          {
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
            if ( gameObject )
            {
              v10 = 1;
LABEL_17:
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v10, 0);
              return;
            }
          }
        }
      }
      sub_1C7BD40(gameObject, v7);
    }
  }
}


void PartyListViewIndicator__DrawEventLimitEquip(
        PartyListViewIndicator_o *this,
        PartyListViewItem_o *partyItem,
        bool isChng,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  DataManager_o *Instance; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v10; // x8
  char v11; // w21
  unsigned int index; // w24
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

  if ( (byte_4CE9E6A & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_19328/*"event_emblem_frame"*/);
    sub_1C7BAE8(&StringLiteral_20355/*"icon_equip_fixation"*/);
    sub_1C7BAE8(&StringLiteral_8304/*"LIMIT_EQUIP_SETTING"*/);
    sub_1C7BAE8(&StringLiteral_17606/*"btn_skill_off"*/);
    sub_1C7BAE8(&StringLiteral_19327/*"event_emblem_dim"*/);
    sub_1C7BAE8(&StringLiteral_17607/*"btn_skill_on"*/);
    byte_4CE9E6A = 1;
  }
  outEnt = 0;
  if ( !PartyListViewIndicator__IsEventOnlyEquip(this, (const MethodInfo *)partyItem) )
    goto LABEL_15;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !Instance )
    goto LABEL_65;
  if ( !EventEquipSkillReleaseMaster__tryGetOpenEventEquipSkillReleaseEntity(
          (EventEquipSkillReleaseMaster_o *)Instance,
          questRestrictionInfo->fields.eventId,
          &outEnt,
          0) )
  {
LABEL_15:
    PartyListViewIndicator__ClearEventLimitEquip(this, v7);
    return;
  }
  Instance = (DataManager_o *)outEnt;
  if ( !outEnt )
    goto LABEL_65;
  Instance = (DataManager_o *)EventEquipSkillReleaseEntity__isForceOverwrite(outEnt, 0);
  if ( !partyItem )
    goto LABEL_65;
  v10 = partyItem->fields.questRestrictionInfo;
  v11 = (char)Instance;
  if ( v10 )
    LOBYTE(v10) = v10->fields.eventDeckNum > 0;
  if ( ((unsigned __int8)v10 & 1) != 0 || (unsigned int)(partyItem->fields.menuKind - 1) <= 6 )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    index = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 164LL);
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
  ItemIconComponent__SetEquipItem((ItemIconComponent_o *)Instance, outEnt->fields.overwriteEquipIconId, 0);
  masterEquipBackSprite = this->fields.masterEquipBackSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(masterEquipBackSprite, (System_String_o *)StringLiteral_19327/*"event_emblem_dim"*/, 0);
  AtlasManager__SetEventUI(this->fields.masterEquipFrameSprite, (System_String_o *)StringLiteral_19328/*"event_emblem_frame"*/, 0);
  if ( !this->fields.isChkSave )
  {
    if ( (v11 & 1) == 0 )
    {
      Instance = (DataManager_o *)UnityEngine_PlayerPrefs__GetString_71828452((System_String_o *)StringLiteral_8304/*"LIMIT_EQUIP_SETTING"*/, 0);
      if ( !Instance )
        goto LABEL_65;
      if ( SLODWORD(Instance->fields.m_CachedPtr) >= 1 )
      {
        Instance = (DataManager_o *)System_String__Split((System_String_o *)Instance, 0x2Cu, 0, 0);
        if ( !Instance )
          goto LABEL_65;
        v14 = Instance;
        if ( SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
        {
          v15 = 0;
          do
          {
            Instance = (DataManager_o *)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = (DataManager_o *)BalanceConfig_TypeInfo;
            }
            if ( (__int64)v15 > *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 164LL) )
              break;
            if ( v15 >= LODWORD(v14->fields.m_CancellationTokenSource) )
              goto LABEL_66;
            useLimitEquip = this->fields.useLimitEquip;
            Instance = (DataManager_o *)System_Int32__Parse(*((System_String_o **)&v14->fields._DispLog + v15), 0);
            if ( !useLimitEquip )
              goto LABEL_65;
            if ( v15 >= LODWORD(useLimitEquip->max_length) )
              goto LABEL_66;
            useLimitEquip->m_Items[v15++] = (int)Instance;
          }
          while ( (__int64)v15 < SLODWORD(v14->fields.m_CancellationTokenSource) );
        }
      }
    }
    this->fields.isChkSave = 1;
  }
  Instance = (DataManager_o *)this->fields.limitMasterFormationButton;
  if ( !Instance
    || (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0)) == 0 )
  {
LABEL_65:
    sub_1C7BD40(Instance, v7);
  }
  if ( (v11 & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    v18 = this->fields.useLimitEquip;
    v19 = (char *)v18 + 4 * (int)index;
    if ( isChng )
    {
      if ( !v18 )
        goto LABEL_65;
      if ( index >= LODWORD(v18->max_length) )
        goto LABEL_66;
      *((_DWORD *)v19 + 8) = *((_DWORD *)v19 + 8) == 0;
    }
    else if ( !v18 )
    {
      goto LABEL_65;
    }
    if ( index < LODWORD(v18->max_length) )
    {
      Instance = (DataManager_o *)this->fields.limitMasterFormationButton;
      if ( Instance )
      {
        v20 = *((_DWORD *)v19 + 8);
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)Instance,
                             (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( v20 )
        {
          AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_17607/*"btn_skill_on"*/, 0);
          Instance = (DataManager_o *)this->fields.limitEquipIcon;
          if ( Instance )
          {
            ItemIconComponent__SetColor((ItemIconComponent_o *)Instance, this->fields.ICON_MASK_COLOR, 0);
            Instance = (DataManager_o *)this->fields.masterEquipIcon1;
            if ( Instance )
            {
              ItemIconComponent__SetColor((ItemIconComponent_o *)Instance, this->fields.ICON_NORMAL_COLOR, 0);
              Instance = (DataManager_o *)this->fields.masterEquipIcon2;
              if ( Instance )
              {
                ItemIconComponent__SetColor((ItemIconComponent_o *)Instance, this->fields.ICON_NORMAL_COLOR, 0);
                Instance = (DataManager_o *)this->fields.masterEquipBackSprite;
                if ( Instance )
                {
                  UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
                  return;
                }
              }
            }
          }
        }
        else
        {
          AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_17606/*"btn_skill_off"*/, 0);
          Instance = (DataManager_o *)this->fields.limitEquipIcon;
          if ( Instance )
          {
            ItemIconComponent__SetColor((ItemIconComponent_o *)Instance, this->fields.ICON_NORMAL_COLOR, 0);
            Instance = (DataManager_o *)this->fields.masterEquipIcon1;
            if ( Instance )
            {
              ItemIconComponent__SetColor((ItemIconComponent_o *)Instance, this->fields.ICON_MASK_COLOR, 0);
              Instance = (DataManager_o *)this->fields.masterEquipIcon2;
              if ( Instance )
              {
                ItemIconComponent__SetColor((ItemIconComponent_o *)Instance, this->fields.ICON_MASK_COLOR, 0);
                return;
              }
            }
          }
        }
      }
      goto LABEL_65;
    }
LABEL_66:
    sub_1C7BD48(Instance);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.masterEquipIcon1;
  if ( !Instance )
    goto LABEL_65;
  ItemIconComponent__SetColor((ItemIconComponent_o *)Instance, this->fields.ICON_MASK_COLOR, 0);
  Instance = (DataManager_o *)this->fields.masterEquipIcon2;
  if ( !Instance )
    goto LABEL_65;
  ItemIconComponent__SetColor((ItemIconComponent_o *)Instance, this->fields.ICON_MASK_COLOR, 0);
  limitEquipFixSprite = this->fields.limitEquipFixSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(limitEquipFixSprite, (System_String_o *)StringLiteral_20355/*"icon_equip_fixation"*/, 0);
}


void PartyListViewIndicator__DrawPartyInfo(
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
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  EventPartyMargeUpValInfo_o *v20; // x1
  const MethodInfo *v21; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestRestrictionInfo_o *v23; // x0
  int32_t servantNumMax; // w1
  UISprite_o *v25; // x21
  struct QuestRestrictionInfo_o *v26; // x8
  BalanceConfig_c *v27; // x0
  QuestRestrictionInfo_o *v28; // x0
  UICommonButton_o *masterEquipButton; // x21
  struct QuestRestrictionInfo_o *v30; // x8
  struct QuestRestrictionInfo_o *v31; // x8
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x1
  QuestRestrictionInfo_o *v34; // x0
  UILabel_o *masterEquipFixedLabel; // x21
  bool v36; // w1
  Il2CppObject *Entity; // x0
  const MethodInfo *v38; // x3
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  il2cpp_array_size_t max_length; // x9
  int32_t v42; // w21
  ServantEntity_array *SvtEntityList; // x22
  const MethodInfo *v44; // x1
  System_String_array *SvtNameList; // x23
  const MethodInfo *v46; // x1
  System_Boolean_array *IsFollowerList; // x24
  EventPartyMargeUpValInfo_o *v48; // x25
  struct EventPartyMargeUpValInfo_o **p_eventMargeUpValInfo; // x21
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  const MethodInfo *v56; // x3
  EventUpValInfo_array *v57; // x8
  unsigned __int64 v58; // x20
  unsigned __int64 max_length_low; // x9
  EventPartyMargeUpValInfo_o *v60; // x22
  UILabel_o *selectNameLabel; // x21
  System_String_o *v62; // x0
  EventUpValInfo_array *v63; // [xsp+0h] [xbp-70h] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *equipName; // [xsp+10h] [xbp-60h] BYREF
  int32_t maxLv; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t condUsrLv[2]; // [xsp+20h] [xbp-50h] BYREF
  int32_t genderImageId[2]; // [xsp+28h] [xbp-48h] BYREF

  v3 = partyItem;
  if ( (byte_4CE9E68 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_1C7BAE8(&EventPartyMargeUpValInfo_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C7BAE8(&StringLiteral_10289/*"PARTY_ORGANIZATION_NAME"*/);
    sub_1C7BAE8(&StringLiteral_23787/*"solo_bg"*/);
    sub_1C7BAE8(&StringLiteral_10288/*"PARTY_ORGANIZATION_MASTER_EQUIP_FIXED"*/);
    sub_1C7BAE8(&StringLiteral_23818/*"specialparty_bg"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE9E68 = 1;
  }
  *(_QWORD *)condUsrLv = 0;
  *(_QWORD *)genderImageId = 0;
  maxLv = 0;
  detail = 0;
  equipName = 0;
  v63 = 0;
  if ( v3 )
  {
    switch ( this->fields.menuKind )
    {
      case 1:
      case 3:
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_108;
        soloBaseObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       soloBaseObject,
                                                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !this->fields.soloBaseObject )
          goto LABEL_108;
        v6 = (UISprite_o *)soloBaseObject;
        UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0);
        if ( !v6 )
          goto LABEL_108;
        UISprite__set_spriteName(v6, (System_String_o *)StringLiteral_23787/*"solo_bg"*/, 0);
        ((void (__fastcall *)(UISprite_o *, const MethodInfo *))v6->klass->vtable._33_MakePixelPerfect.methodPtr)(
          v6,
          v6->klass->vtable._33_MakePixelPerfect.method);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_108;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
        soloBaseObject = this->fields.indexBaseObject;
        if ( !soloBaseObject )
          goto LABEL_108;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
        soloBaseObject = this->fields.selectNameBaseObject;
        if ( !soloBaseObject )
          goto LABEL_108;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
        soloBaseObject = this->fields.costBaseObject;
        if ( !soloBaseObject )
          goto LABEL_108;
        v7 = 0;
        goto LABEL_74;
      case 2:
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_108;
        soloBaseObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       soloBaseObject,
                                                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !this->fields.soloBaseObject )
          goto LABEL_108;
        v25 = (UISprite_o *)soloBaseObject;
        UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0);
        if ( !v25 )
          goto LABEL_108;
        UISprite__set_spriteName(v25, (System_String_o *)StringLiteral_23818/*"specialparty_bg"*/, 0);
        ((void (__fastcall *)(UISprite_o *, const MethodInfo *))v25->klass->vtable._33_MakePixelPerfect.methodPtr)(
          v25,
          v25->klass->vtable._33_MakePixelPerfect.method);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_108;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
        goto LABEL_69;
      case 4:
      case 5:
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_108;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_108;
        UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0);
        questRestrictionInfo = this->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_69;
        goto LABEL_35;
      case 6:
      case 7:
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_108;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_108;
        UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0);
        v23 = this->fields.questRestrictionInfo;
        if ( !v23 )
          goto LABEL_69;
        soloBaseObject = (UnityEngine_GameObject_o *)QuestRestrictionInfo__IsServantNum(v23, 0);
        if ( ((unsigned __int8)soloBaseObject & 1) != 0 )
        {
          questRestrictionInfo = this->fields.questRestrictionInfo;
          if ( !questRestrictionInfo )
            goto LABEL_108;
LABEL_35:
          servantNumMax = questRestrictionInfo->fields.servantNumMax;
        }
        else
        {
          soloBaseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !soloBaseObject )
            goto LABEL_108;
          soloBaseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)soloBaseObject,
                                                         (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
          v30 = this->fields.questRestrictionInfo;
          if ( !v30 )
            goto LABEL_108;
          if ( !soloBaseObject )
            goto LABEL_108;
          soloBaseObject = (UnityEngine_GameObject_o *)NpcFollowerMaster__GetQuestFollowerList(
                                                         (NpcFollowerMaster_o *)soloBaseObject,
                                                         v30->fields.questId,
                                                         v30->fields.questPhase,
                                                         0);
          v31 = this->fields.questRestrictionInfo;
          if ( !v31 || !soloBaseObject )
            goto LABEL_108;
          servantNumMax = v31->fields.myServantNumMax + LODWORD(soloBaseObject[1].klass);
        }
        goto LABEL_68;
      case 9:
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_108;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_108;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
        soloBaseObject = this->fields.indexBaseObject;
        if ( !soloBaseObject )
          goto LABEL_108;
        UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0);
        soloBaseObject = this->fields.selectNameBaseObject;
        if ( !soloBaseObject )
          goto LABEL_108;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
        soloBaseObject = this->fields.costBaseObject;
        if ( !soloBaseObject )
          goto LABEL_108;
        UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0);
        v28 = this->fields.questRestrictionInfo;
        if ( v28 && QuestRestrictionInfo__IsWaveSetupSwitchParty(v28, 0) )
        {
          soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEventPointIndicator;
          if ( !soloBaseObject )
            goto LABEL_108;
          PartyEventPointIndicator__SetUnknown((PartyEventPointIndicator_o *)soloBaseObject, 0);
        }
        else
        {
          soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEventPointIndicator;
          if ( !soloBaseObject )
            goto LABEL_108;
          soloBaseObject = (UnityEngine_GameObject_o *)PartyEventPointIndicator__SetTrendDisp(
                                                         (PartyEventPointIndicator_o *)soloBaseObject,
                                                         v3->fields.trendDispWaveBattleEnemyClassIds,
                                                         0);
        }
        masterEquipButton = this->fields.masterEquipButton;
        if ( v3->fields._IsWaveBattleRestart_k__BackingField )
        {
          soloBaseObject = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !soloBaseObject )
            goto LABEL_108;
          partyItem = (PartyListViewItem_o *)(LODWORD(soloBaseObject[6].klass) == 1);
        }
        else
        {
          partyItem = (PartyListViewItem_o *)(&dword_0 + 1);
        }
        if ( !masterEquipButton )
          goto LABEL_108;
        UICommonButton__SetEnable(masterEquipButton, (bool)partyItem, 0);
        soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partySwapButton;
        if ( !soloBaseObject )
          goto LABEL_108;
        UICommonButton__SetEnable((UICommonButton_o *)soloBaseObject, !v3->fields._IsClearedWave_k__BackingField, 0);
        soloBaseObject = (UnityEngine_GameObject_o *)this->fields.autoOrganizationButton;
        if ( !soloBaseObject )
          goto LABEL_108;
        UICommonButton__SetEnable((UICommonButton_o *)soloBaseObject, !v3->fields._IsClearedWave_k__BackingField, 0);
        soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEditButton;
        if ( !soloBaseObject )
          goto LABEL_108;
        UICommonButton__SetEnable((UICommonButton_o *)soloBaseObject, !v3->fields._IsClearedWave_k__BackingField, 0);
        goto LABEL_75;
      default:
        v26 = this->fields.questRestrictionInfo;
        if ( v26 && v26->fields.eventDeckNum >= 1 )
        {
          soloBaseObject = this->fields.soloBaseObject;
          if ( !soloBaseObject )
            goto LABEL_108;
          UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
          soloBaseObject = this->fields.organizationNumObject;
          if ( !soloBaseObject )
            goto LABEL_108;
          UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0);
          v27 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v27 = BalanceConfig_TypeInfo;
          }
          servantNumMax = v27->static_fields->DeckMemberMax;
LABEL_68:
          PartyListViewIndicator__SetEventDeckPartyName(this, servantNumMax, v21);
LABEL_69:
          soloBaseObject = this->fields.indexBaseObject;
          if ( !soloBaseObject )
            goto LABEL_108;
          UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
          soloBaseObject = this->fields.selectNameBaseObject;
          if ( !soloBaseObject )
            goto LABEL_108;
          UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
        }
        else
        {
          soloBaseObject = this->fields.soloBaseObject;
          if ( !soloBaseObject )
            goto LABEL_108;
          UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
          soloBaseObject = this->fields.organizationNumObject;
          if ( !soloBaseObject )
            goto LABEL_108;
          UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
          soloBaseObject = this->fields.indexBaseObject;
          if ( !soloBaseObject )
            goto LABEL_108;
          UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0);
          soloBaseObject = this->fields.selectNameBaseObject;
          if ( !soloBaseObject )
            goto LABEL_108;
          UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0);
          selectNameLabel = this->fields.selectNameLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v62 = LocalizationManager__Get((System_String_o *)StringLiteral_10289/*"PARTY_ORGANIZATION_NAME"*/, 0);
          soloBaseObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                         v62,
                                                         (Il2CppObject *)v3->fields.deckName,
                                                         0);
          if ( !selectNameLabel )
            goto LABEL_108;
          UILabel__set_text(selectNameLabel, (System_String_o *)soloBaseObject, 0);
        }
        soloBaseObject = this->fields.costBaseObject;
        if ( !soloBaseObject )
          goto LABEL_108;
        v7 = 1;
LABEL_74:
        UnityEngine_GameObject__SetActive(soloBaseObject, v7, 0);
LABEL_75:
        PartyListViewIndicator__UpdateCost(this, v3, v32);
        PartyListViewItem__CheckRestriction(v3, v33);
        v34 = this->fields.questRestrictionInfo;
        if ( v34 && QuestRestrictionInfo__TryGetFixedMasterEquipInfo(v34, genderImageId, 0) )
        {
          masterEquipFixedLabel = this->fields.masterEquipFixedLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          soloBaseObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_10288/*"PARTY_ORGANIZATION_MASTER_EQUIP_FIXED"*/,
                                                         0);
          if ( !masterEquipFixedLabel )
            goto LABEL_108;
          UILabel__set_text(masterEquipFixedLabel, (System_String_o *)soloBaseObject, 0);
          soloBaseObject = this->fields.masterEquipFixedObject;
          if ( !soloBaseObject )
            goto LABEL_108;
          UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0);
          soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipIcon1;
          if ( !soloBaseObject )
            goto LABEL_108;
          ItemIconComponent__SetEquipItem((ItemIconComponent_o *)soloBaseObject, genderImageId[0], 0);
          soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipIcon2;
          if ( !soloBaseObject )
            goto LABEL_108;
          ItemIconComponent__SetEquipItem((ItemIconComponent_o *)soloBaseObject, genderImageId[0], 0);
          soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipButton;
          if ( !soloBaseObject )
            goto LABEL_108;
          v36 = 0;
        }
        else
        {
          soloBaseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !soloBaseObject )
            goto LABEL_108;
          soloBaseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)soloBaseObject,
                                                         (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserEquipMaster___);
          if ( !soloBaseObject )
            goto LABEL_108;
          Entity = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)soloBaseObject,
                     v3->fields.userEquipId,
                     (const MethodInfo_3430858 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
          if ( Entity )
          {
            UserEquipEntity__getEquipInfo(
              (UserEquipEntity_o *)Entity,
              condUsrLv,
              &maxLv,
              &equipName,
              &detail,
              &condUsrLv[1],
              0);
            soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipIcon1;
            if ( !soloBaseObject )
              goto LABEL_108;
            ItemIconComponent__SetEquipItem((ItemIconComponent_o *)soloBaseObject, condUsrLv[1], 0);
            soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipIcon2;
            if ( !soloBaseObject )
              goto LABEL_108;
            ItemIconComponent__SetEquipItem((ItemIconComponent_o *)soloBaseObject, condUsrLv[1], 0);
          }
          soloBaseObject = this->fields.masterEquipFixedObject;
          if ( !soloBaseObject )
            goto LABEL_108;
          UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
          soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipButton;
          if ( !soloBaseObject )
            goto LABEL_108;
          v36 = 1;
        }
        UICommonButton__SetEnable((UICommonButton_o *)soloBaseObject, v36, 0);
        PartyListViewIndicator__DrawEventLimitEquip(this, v3, 0, v38);
        setupInfo = this->fields.setupInfo;
        if ( !setupInfo )
          goto LABEL_99;
        eventIdList = setupInfo->fields.eventIdList;
        if ( !eventIdList )
          goto LABEL_108;
        max_length = eventIdList->max_length;
        if ( max_length )
        {
          if ( !(_DWORD)max_length )
LABEL_126:
            sub_1C7BD48(soloBaseObject);
          v42 = eventIdList->m_Items[0];
        }
        else
        {
LABEL_99:
          v42 = 0;
        }
        genderImageId[1] = v42;
        SvtEntityList = PartyListViewItem__GetSvtEntityList(v3, (const MethodInfo *)partyItem);
        SvtNameList = PartyListViewItem__GetSvtNameList(v3, v44);
        IsFollowerList = PartyListViewItem__GetIsFollowerList(v3, v46);
        v48 = (EventPartyMargeUpValInfo_o *)sub_1C7BD34(EventPartyMargeUpValInfo_TypeInfo);
        EventPartyMargeUpValInfo___ctor(v48, v42, SvtEntityList, SvtNameList, IsFollowerList, 0);
        p_eventMargeUpValInfo = &this->fields.eventMargeUpValInfo;
        this->fields.eventMargeUpValInfo = v48;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&this->fields.eventMargeUpValInfo,
          (int32_t)v48,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55);
        soloBaseObject = (UnityEngine_GameObject_o *)PartyListViewItem__GetEventUpVal(v3, &genderImageId[1], &v63, v56);
        v57 = v63;
        if ( v63 )
        {
          v58 = 0;
          while ( 1 )
          {
            max_length_low = LODWORD(v57->max_length);
            if ( (__int64)v58 >= (int)max_length_low )
              break;
            if ( v58 >= max_length_low )
              goto LABEL_126;
            soloBaseObject = (UnityEngine_GameObject_o *)v57->m_Items[v58];
            if ( soloBaseObject )
            {
              v60 = *p_eventMargeUpValInfo;
              soloBaseObject = (UnityEngine_GameObject_o *)EventUpValInfo__GetDropItemList(
                                                             (EventUpValInfo_o *)soloBaseObject,
                                                             v58,
                                                             0);
              if ( !v60 )
                goto LABEL_108;
              EventPartyMargeUpValInfo__Add(v60, (EventDropItemUpValInfo_array *)soloBaseObject, 0);
              v57 = v63;
            }
            ++v58;
            if ( !v57 )
              goto LABEL_108;
          }
          soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEventPointIndicator;
          if ( soloBaseObject )
          {
            v20 = *p_eventMargeUpValInfo;
            goto LABEL_111;
          }
        }
LABEL_108:
        sub_1C7BD40(soloBaseObject, partyItem);
    }
  }
  soloBaseObject = this->fields.soloBaseObject;
  if ( !soloBaseObject )
    goto LABEL_108;
  UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
  soloBaseObject = this->fields.organizationNumObject;
  if ( !soloBaseObject )
    goto LABEL_108;
  UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
  soloBaseObject = this->fields.indexBaseObject;
  if ( !soloBaseObject )
    goto LABEL_108;
  UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
  soloBaseObject = this->fields.selectNameBaseObject;
  if ( !soloBaseObject )
    goto LABEL_108;
  UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
  soloBaseObject = this->fields.costBaseObject;
  if ( !soloBaseObject )
    goto LABEL_108;
  UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.selectNameLabel;
  if ( !soloBaseObject )
    goto LABEL_108;
  UILabel__set_text((UILabel_o *)soloBaseObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.maxCostLabel;
  if ( !soloBaseObject )
    goto LABEL_108;
  UILabel__set_text((UILabel_o *)soloBaseObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.splitCostLabel;
  if ( !soloBaseObject )
    goto LABEL_108;
  UILabel__set_text((UILabel_o *)soloBaseObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.selectCostLabel;
  if ( !soloBaseObject )
    goto LABEL_108;
  UILabel__set_text((UILabel_o *)soloBaseObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipIcon1;
  if ( !soloBaseObject )
    goto LABEL_108;
  ItemIconComponent__Clear((ItemIconComponent_o *)soloBaseObject, 0);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipIcon2;
  if ( !soloBaseObject )
    goto LABEL_108;
  ItemIconComponent__Clear((ItemIconComponent_o *)soloBaseObject, 0);
  this->fields.questRestrictionInfo = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo, 0, v8, v9, v10, v11, v12, v13);
  this->fields.eventMargeUpValInfo = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.eventMargeUpValInfo, 0, v14, v15, v16, v17, v18, v19);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEventPointIndicator;
  if ( !soloBaseObject )
    goto LABEL_108;
  v20 = 0;
LABEL_111:
  PartyEventPointIndicator__SetTotalDropItemList((PartyEventPointIndicator_o *)soloBaseObject, v20, 0);
}


bool PartyListViewIndicator__IsEventOnlyEquip(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4CE9E70 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE9E70 = 1;
  }
  entity = 0;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (questRestrictionInfo = this->fields.questRestrictionInfo) == 0)
    || !Instance )
  {
LABEL_12:
    sub_1C7BD40(Instance, v4);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          questRestrictionInfo->fields.eventId,
          (const MethodInfo_342E348 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
    goto LABEL_12;
  return EventDetailEntity__IsEventOnlyEquip((EventDetailEntity_o *)entity, 0);
}


bool PartyListViewIndicator__IsUseEventLimitEquipUserWill(
        PartyListViewIndicator_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v8; // x8
  int32_t DeckMax; // w20
  BalanceConfig_c *v10; // x0
  struct System_Int32_array *useLimitEquip; // x8
  EventEquipSkillReleaseEntity_o *outEnt; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CE9E6F & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE9E6F = 1;
  }
  outEnt = 0;
  if ( !PartyListViewIndicator__IsEventOnlyEquip(this, (const MethodInfo *)partyItem) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)EventEquipSkillReleaseMaster__tryGetOpenEventEquipSkillReleaseEntity(
                                (EventEquipSkillReleaseMaster_o *)Instance,
                                questRestrictionInfo->fields.eventId,
                                &outEnt,
                                0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !partyItem )
    goto LABEL_24;
  v8 = partyItem->fields.questRestrictionInfo;
  if ( v8 )
    LOBYTE(v8) = v8->fields.eventDeckNum > 0;
  if ( ((unsigned __int8)v8 & 1) != 0 || (unsigned int)(partyItem->fields.menuKind - 1) <= 6 )
  {
    v10 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    DeckMax = v10->static_fields->DeckMax;
  }
  else
  {
    DeckMax = partyItem->fields.index;
  }
  Instance = (DataManager_o *)outEnt;
  if ( !outEnt )
    goto LABEL_24;
  Instance = (DataManager_o *)EventEquipSkillReleaseEntity__isForceOverwrite(outEnt, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    return 0;
  useLimitEquip = this->fields.useLimitEquip;
  if ( !useLimitEquip )
LABEL_24:
    sub_1C7BD40(Instance, v6);
  if ( (unsigned int)DeckMax >= LODWORD(useLimitEquip->max_length) )
    sub_1C7BD48(Instance);
  return useLimitEquip->m_Items[DeckMax] == 0;
}


void PartyListViewIndicator__OnClickLeft(PartyListViewIndicator_o *this, const MethodInfo *method)
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

  if ( (byte_4CE9E6B & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_PartyListViewIndicator_OnClickLeft__);
    byte_4CE9E6B = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(manager, 0, 0)
    && this->fields.isScrollEnabled
    && (this->fields.pageIndex & 0x80000000) == 0 )
  {
    v5 = this->fields.manager;
    if ( !v5 )
      goto LABEL_22;
    ListViewManager__BackLoopItem(v5, 0);
    if ( this->fields.pageIndex >= 1 )
    {
      v6 = Method_PartyListViewIndicator_OnClickLeft__;
      if ( (*((_BYTE *)Method_PartyListViewIndicator_OnClickLeft__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C7BB00(Method_PartyListViewIndicator_OnClickLeft__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 7, 0, 0);
      v5 = this->fields.manager;
      if ( v5 )
      {
        pageIndex = this->fields.pageIndex;
LABEL_20:
        ListViewManager__MoveCenterItem(v5, pageIndex - 1, 1, 0, 0.0, 0);
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
        v10 = (_QWORD *)sub_1C7BB00(Method_PartyListViewIndicator_OnClickLeft__);
      v11 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 7, 0, 0);
      v5 = this->fields.manager;
      if ( v5 )
      {
        pageIndex = this->fields.pageMax;
        goto LABEL_20;
      }
LABEL_22:
      sub_1C7BD40(v5, v4);
    }
  }
}


void PartyListViewIndicator__OnClickRight(PartyListViewIndicator_o *this, const MethodInfo *method)
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

  if ( (byte_4CE9E6C & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_PartyListViewIndicator_OnClickRight__);
    byte_4CE9E6C = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(manager, 0, 0)
    && this->fields.isScrollEnabled
    && (this->fields.pageIndex & 0x80000000) == 0 )
  {
    v5 = this->fields.manager;
    if ( !v5 )
      goto LABEL_23;
    ListViewManager__FowardLoopItem(v5, 0);
    pageIndex = this->fields.pageIndex;
    if ( (pageIndex & 0x80000000) == 0 && pageIndex < this->fields.pageMax - 1 )
    {
      v7 = Method_PartyListViewIndicator_OnClickRight__;
      if ( (*((_BYTE *)Method_PartyListViewIndicator_OnClickRight__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1C7BB00(Method_PartyListViewIndicator_OnClickRight__);
      v8 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 7, 0, 0);
      v5 = this->fields.manager;
      if ( v5 )
      {
        v9 = this->fields.pageIndex + 1;
LABEL_21:
        ListViewManager__MoveCenterItem(v5, v9, 1, 0, 0.0, 0);
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
        v11 = (_QWORD *)sub_1C7BB00(Method_PartyListViewIndicator_OnClickRight__);
      v12 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 7, 0, 0);
      v5 = this->fields.manager;
      if ( v5 )
      {
        v9 = 0;
        goto LABEL_21;
      }
LABEL_23:
      sub_1C7BD40(v5, v4);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewIndicator__OnModifyCenterItem(
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
  __int64 naturalAligment; // x10
  ListViewItem_o *v22; // x1

  v8 = isRight;
  if ( (byte_4CE9E63 & 1) == 0 )
  {
    sub_1C7BAE8(&PartyListViewItem_TypeInfo);
    byte_4CE9E63 = 1;
  }
  this->fields.manager = manager;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.manager,
    (int32_t)manager,
    (int32_t)item,
    isTop,
    (System_String_o *)isBottom,
    isLeft,
    isRight,
    (System_String_o *)method);
  v15 = this->fields.manager;
  if ( !v15 )
    goto LABEL_19;
  isLoop = v15->fields.isLoop;
  leftObject = this->fields.leftObject;
  v17 = isLeft | v8;
  if ( isLoop )
    v8 |= isLeft;
  if ( !leftObject
    || (isLoop ? (v18 = v17) : (v18 = isLeft),
        UnityEngine_GameObject__SetActive(leftObject, v18, 0),
        (leftObject = this->fields.rightObject) == 0) )
  {
LABEL_19:
    sub_1C7BD40(leftObject, v14);
  }
  UnityEngine_GameObject__SetActive(leftObject, v8 & 1, 0);
  if ( !item )
  {
    PartyListViewIndicator__SetPageIndex(this, -1, v19);
    goto LABEL_17;
  }
  PartyListViewIndicator__SetPageIndex(this, item->fields.index, v19);
  naturalAligment = PartyListViewItem_TypeInfo->_2.naturalAligment;
  if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment )
  {
LABEL_17:
    v22 = 0;
    goto LABEL_18;
  }
  if ( (PartyListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] == PartyListViewItem_TypeInfo )
    v22 = item;
  else
    v22 = 0;
LABEL_18:
  PartyListViewIndicator__DrawPartyInfo(this, (PartyListViewItem_o *)v22, v20);
}


void PartyListViewIndicator__OnModifyPosition(
        PartyListViewIndicator_o *this,
        ListViewManager_o *manager,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewIndicator__SetEventDeckPartyName(
        PartyListViewIndicator_o *this,
        int32_t servantNum,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *organizationNumObject; // x0
  int v6; // w8
  UnityEngine_GameObject_o *v7; // x19
  __int64 *v8; // x8
  UISprite_o *v9; // x21

  if ( (byte_4CE9E6D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C7BAE8(&StringLiteral_21437/*"limited_bg"*/);
    sub_1C7BAE8(&StringLiteral_23787/*"solo_bg"*/);
    sub_1C7BAE8(&StringLiteral_23902/*"startingonly_bg"*/);
    sub_1C7BAE8(&StringLiteral_22833/*"pair_bg"*/);
    byte_4CE9E6D = 1;
  }
  organizationNumObject = this->fields.organizationNumObject;
  if ( !organizationNumObject )
LABEL_19:
    sub_1C7BD40(organizationNumObject, *(_QWORD *)&servantNum);
  organizationNumObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        organizationNumObject,
                                                        (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
                                                            (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !this->fields.soloBaseObject )
        goto LABEL_19;
      v9 = (UISprite_o *)organizationNumObject;
      UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0);
      organizationNumObject = this->fields.organizationNumObject;
      if ( !organizationNumObject )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive(organizationNumObject, 0, 0);
      if ( !v9 )
        goto LABEL_19;
      UISprite__set_spriteName(v9, (System_String_o *)StringLiteral_23787/*"solo_bg"*/, 0);
      organizationNumObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UISprite_o *, const MethodInfo *))v9->klass->vtable._33_MakePixelPerfect.methodPtr)(
                                                            v9,
                                                            v9->klass->vtable._33_MakePixelPerfect.method);
      if ( !v7 )
        goto LABEL_19;
      goto LABEL_18;
    case 1:
      if ( !organizationNumObject )
        goto LABEL_19;
      v8 = &StringLiteral_22833/*"pair_bg"*/;
      break;
    case 2:
      if ( !organizationNumObject )
        goto LABEL_19;
      v8 = &StringLiteral_23902/*"startingonly_bg"*/;
      break;
    default:
      if ( !organizationNumObject )
        goto LABEL_19;
      v8 = &StringLiteral_21437/*"limited_bg"*/;
      break;
  }
  UISprite__set_spriteName((UISprite_o *)organizationNumObject, (System_String_o *)*v8, 0);
LABEL_18:
  ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))v7->klass[2]._1.parent)(v7, v7->klass[2]._1.generic_class);
}


void PartyListViewIndicator__SetEventId(
        PartyListViewIndicator_o *this,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        System_Int32_array *classIds,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  __int64 v23; // x1
  PartyEventPointIndicator_o *partyEventPointIndicator; // x0

  this->fields.setupInfo = setupInfo;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.setupInfo,
    (int32_t)setupInfo,
    (int32_t)questRestrictionInfo,
    (int32_t)classIds,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.eventMargeUpValInfo = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.eventMargeUpValInfo, 0, v17, v18, v19, v20, v21, v22);
  partyEventPointIndicator = this->fields.partyEventPointIndicator;
  if ( !partyEventPointIndicator
    || (PartyEventPointIndicator__SetInfomation(partyEventPointIndicator, questRestrictionInfo, classIds, 0),
        (partyEventPointIndicator = this->fields.partyEventPointIndicator) == 0) )
  {
    sub_1C7BD40(partyEventPointIndicator, v23);
  }
  PartyEventPointIndicator__SetTotalDropItemList(partyEventPointIndicator, 0, 0);
}


void PartyListViewIndicator__SetEventLimitEquipSetting(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  System_String_o *IsEventOnlyEquip; // x0
  __int64 v4; // x1
  struct System_Int32_array *useLimitEquip; // x21
  il2cpp_array_size_t max_length; // x8
  System_String_o *v7; // x20
  unsigned __int64 v8; // x22
  int32_t v9; // w26
  Il2CppObject *v10; // x0
  int32_t v11; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CE9E6E & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&StringLiteral_8304/*"LIMIT_EQUIP_SETTING"*/);
    sub_1C7BAE8(&StringLiteral_809/*","*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE9E6E = 1;
  }
  IsEventOnlyEquip = (System_String_o *)PartyListViewIndicator__IsEventOnlyEquip(this, method);
  if ( ((unsigned __int8)IsEventOnlyEquip & 1) != 0 )
  {
    useLimitEquip = this->fields.useLimitEquip;
    if ( !useLimitEquip )
      goto LABEL_15;
    max_length = useLimitEquip->max_length;
    v7 = (System_String_o *)StringLiteral_1/*""*/;
    if ( (int)max_length >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= (unsigned int)max_length )
          sub_1C7BD48(IsEventOnlyEquip);
        if ( !v7 )
          break;
        v9 = useLimitEquip->m_Items[v8];
        if ( v7->fields._stringLength >= 1 )
          v7 = System_String__Concat_64176912(v7, (System_String_o *)StringLiteral_809/*","*/, 0);
        v11 = v9;
        v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
        IsEventOnlyEquip = System_String__Concat((Il2CppObject *)v7, v10, 0);
        LODWORD(max_length) = useLimitEquip->max_length;
        ++v8;
        v7 = IsEventOnlyEquip;
        if ( (__int64)v8 >= (int)max_length )
          goto LABEL_12;
      }
LABEL_15:
      sub_1C7BD40(IsEventOnlyEquip, v4);
    }
LABEL_12:
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_8304/*"LIMIT_EQUIP_SETTING"*/, v7, 0);
    this->fields.isChkSave = 0;
  }
}


void PartyListViewIndicator__SetIndexMax(PartyListViewIndicator_o *this, int32_t max, const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_GameObject_o *leftObject; // x0

  PartyListViewIndicator__SetPageMax(this, max, method);
  leftObject = this->fields.leftObject;
  if ( !leftObject
    || (UnityEngine_GameObject__SetActive(leftObject, 0, 0), (leftObject = this->fields.rightObject) == 0) )
  {
    sub_1C7BD40(leftObject, v4);
  }
  UnityEngine_GameObject__SetActive(leftObject, 0, 0);
}


void PartyListViewIndicator__SetKind(PartyListViewIndicator_o *this, int32_t menuKind, const MethodInfo *method)
{
  this->fields.menuKind = menuKind;
}


void PartyListViewIndicator__SetPageIndex(PartyListViewIndicator_o *this, int32_t index, const MethodInfo *method)
{
  UnityEngine_Object_o *pageBaseObject; // x21
  UISprite_o *AutoSelectParty; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  __int64 v9; // x21
  struct UISprite_array *pageSpriteList; // x8
  __int64 *v11; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w21
  bool v14; // w20

  if ( (byte_4CE9E65 & 1) == 0 )
  {
    sub_1C7BAE8(&LastUsedDeckNumberManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&OptionManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_20751/*"img_slider_on"*/);
    sub_1C7BAE8(&StringLiteral_20750/*"img_slider_off"*/);
    byte_4CE9E65 = 1;
  }
  this->fields.pageIndex = index;
  if ( (index & 0x80000000) == 0 )
  {
    pageBaseObject = (UnityEngine_Object_o *)this->fields.pageBaseObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    AutoSelectParty = (UISprite_o *)UnityEngine_Object__op_Inequality(pageBaseObject, 0, 0);
    if ( ((unsigned __int8)AutoSelectParty & 1) != 0 && this->fields.pageMax >= 1 )
    {
      v9 = 0;
      do
      {
        pageSpriteList = this->fields.pageSpriteList;
        if ( !pageSpriteList )
          goto LABEL_32;
        if ( (unsigned int)v9 >= LODWORD(pageSpriteList->max_length) )
          sub_1C7BD48(AutoSelectParty);
        AutoSelectParty = pageSpriteList->m_Items[v9];
        if ( !AutoSelectParty )
          goto LABEL_32;
        if ( index == (_DWORD)v9 )
          v11 = &StringLiteral_20751/*"img_slider_on"*/;
        else
          v11 = &StringLiteral_20750/*"img_slider_off"*/;
        UISprite__set_spriteName(AutoSelectParty, (System_String_o *)*v11, 0);
      }
      while ( (int)++v9 < this->fields.pageMax );
    }
    if ( this->fields.menuKind == 9 )
      PartyListViewIndicator__SetPageIndexWaveBattle(this, index, v8);
    else
      PartyListViewIndicator__SetPageIndexDefault(this, index, v8);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_28;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    AutoSelectParty = (UISprite_o *)OptionManager__GetAutoSelectParty(0);
    if ( ((unsigned __int8)AutoSelectParty & 1) != 0 )
    {
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_32;
      questId = questRestrictionInfo->fields.questId;
      if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      v14 = LastUsedDeckNumberManager__GetDeckNumber(questId, 0) - 1 == index;
    }
    else
    {
LABEL_28:
      v14 = 0;
    }
    AutoSelectParty = this->fields.lastTimeUsedSprite;
    if ( !AutoSelectParty
      || (AutoSelectParty = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)AutoSelectParty,
                                            0)) == 0 )
    {
LABEL_32:
      sub_1C7BD40(AutoSelectParty, v7);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AutoSelectParty, v14, 0);
  }
}


void PartyListViewIndicator__SetPageIndexDefault(
        PartyListViewIndicator_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  System_String_o *v7; // x20
  UISprite_o *v8; // x21
  System_String_o *v9; // x0
  UISprite_o *indexSprite; // x21
  System_String_o *v11; // x20
  int v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CE9E67 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C7BAE8(&StringLiteral_22861/*"party_txt_"*/);
    sub_1C7BAE8(&StringLiteral_22860/*"party_bg"*/);
    byte_4CE9E67 = 1;
  }
  v12 = index + 1;
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v12, 0);
  if ( !this->fields.waveNumObject )
    goto LABEL_17;
  v7 = (System_String_o *)gameObject;
  gameObject = UnityEngine_GameObject__get_gameObject(this->fields.waveNumObject, 0);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  GameObjectExtensions__SetLocalPositionY(this->fields.indexBaseObject, 271.0, 0);
  gameObject = this->fields.indexBaseObject;
  if ( !gameObject )
    goto LABEL_17;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !gameObject )
    goto LABEL_17;
  v8 = (UISprite_o *)gameObject;
  UISprite__set_atlas((UISprite_o *)gameObject, this->fields.indexLocalAtlas, 0);
  UISprite__set_spriteName(v8, (System_String_o *)StringLiteral_22860/*"party_bg"*/, 0);
  ((void (__fastcall *)(UISprite_o *, const MethodInfo *))v8->klass->vtable._33_MakePixelPerfect.methodPtr)(
    v8,
    v8->klass->vtable._33_MakePixelPerfect.method);
  gameObject = (UnityEngine_GameObject_o *)this->fields.indexSprite;
  if ( !gameObject )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v9 = System_String__Concat_64176912((System_String_o *)StringLiteral_22861/*"party_txt_"*/, v7, 0);
  indexSprite = this->fields.indexSprite;
  v11 = v9;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetPartyOrganizationImage(indexSprite, v11, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.indexSprite;
    if ( gameObject )
    {
      UISprite__set_atlas((UISprite_o *)gameObject, this->fields.indexLocalAtlas, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.indexSprite;
      if ( gameObject )
      {
        UISprite__set_spriteName((UISprite_o *)gameObject, v11, 0);
        goto LABEL_15;
      }
    }
LABEL_17:
    sub_1C7BD40(gameObject, v6);
  }
LABEL_15:
  gameObject = (UnityEngine_GameObject_o *)this->fields.indexSprite;
  if ( !gameObject )
    goto LABEL_17;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))gameObject->klass[2]._1.parent)(
    gameObject,
    gameObject->klass[2]._1.generic_class);
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewIndicator__SetPageIndexWaveBattle(
        PartyListViewIndicator_o *this,
        int32_t index,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  const MethodInfo *v6; // x2
  UnityEngine_GameObject_o *waveNumObject; // x0
  Il2CppObject *Component_object; // x20
  int v9; // w26
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v11; // x0
  UISprite_o *waveMaxNumTensPlaceSprite; // x21
  System_String_o *v13; // x0
  System_String_o *v14; // x22
  UISprite_o *waveMaxNumTensPlaceGlowSprite; // x21
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  int32_t v19; // w1
  UISprite_o *waveNumTensPlaceSprite; // x21
  System_String_o *v21; // x0
  System_String_o *v22; // x22
  UISprite_o *waveNumTensPlaceGlowSprite; // x21
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  UISprite_o *waveNumOnesPlaceSprite; // x20
  int v27; // w26
  System_String_o *v28; // x0
  System_String_o *v29; // x21
  UISprite_o *waveNumOnesPlaceGlowSprite; // x20
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  UISprite_o *waveMaxNumOnesPlaceSprite; // x20
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  UISprite_o *waveMaxNumOnesPlaceGlowSprite; // x20
  System_String_o *v37; // x0
  System_String_o *v38; // x0
  unsigned int v39; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4CE9E66 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C7BAE8(&StringLiteral_17182/*"battle_num_"*/);
    sub_1C7BAE8(&StringLiteral_16614/*"_glow"*/);
    sub_1C7BAE8(&StringLiteral_17184/*"battle_num_slash_glow"*/);
    sub_1C7BAE8(&StringLiteral_17177/*"battle_bg"*/);
    sub_1C7BAE8(&StringLiteral_17183/*"battle_num_slash"*/);
    byte_4CE9E66 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo && QuestRestrictionInfo__IsWaveSetupSwitchParty(questRestrictionInfo, 0) )
  {
    PartyListViewIndicator__SetPageIndexDefault(this, index, v6);
    GameObjectExtensions__SetLocalPositionY(this->fields.indexBaseObject, 260.0, 0);
    return;
  }
  waveNumObject = this->fields.waveNumObject;
  if ( !waveNumObject )
    goto LABEL_60;
  waveNumObject = UnityEngine_GameObject__get_gameObject(waveNumObject, 0);
  if ( !waveNumObject )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive(waveNumObject, 1, 0);
  waveNumObject = (UnityEngine_GameObject_o *)this->fields.indexSprite;
  if ( !waveNumObject )
    goto LABEL_60;
  waveNumObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)waveNumObject, 0);
  if ( !waveNumObject )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive(waveNumObject, 0, 0);
  GameObjectExtensions__SetLocalPositionY(this->fields.indexBaseObject, 260.0, 0);
  waveNumObject = this->fields.indexBaseObject;
  if ( !waveNumObject )
    goto LABEL_60;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       waveNumObject,
                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v9 = index + 1;
  AtlasManager__SetPartyOrganizationImage((UISprite_o *)Component_object, (System_String_o *)StringLiteral_17177/*"battle_bg"*/, 0);
  AtlasManager__SetPartyOrganizationImage(this->fields.waveNumSlashSprite, (System_String_o *)StringLiteral_17183/*"battle_num_slash"*/, 0);
  AtlasManager__SetPartyOrganizationImage(
    this->fields.waveNumSlashGlowSprite,
    (System_String_o *)StringLiteral_17184/*"battle_num_slash_glow"*/,
    0);
  if ( this->fields.pageMax >= 10 )
  {
    waveNumObject = (UnityEngine_GameObject_o *)this->fields.waveMaxNumTensPlaceSprite;
    if ( waveNumObject )
    {
      waveNumObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)waveNumObject, 0);
      if ( waveNumObject )
      {
        UnityEngine_GameObject__SetActive(waveNumObject, 1, 0);
        waveNumObject = (UnityEngine_GameObject_o *)this->fields.waveMaxNumTensPlaceGlowSprite;
        if ( waveNumObject )
        {
          waveNumObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)waveNumObject, 0);
          if ( waveNumObject )
          {
            UnityEngine_GameObject__SetActive(waveNumObject, 1, 0);
            waveMaxNumTensPlaceSprite = this->fields.waveMaxNumTensPlaceSprite;
            v39 = this->fields.pageMax / 10;
            v13 = System_Int32__ToString((int32_t)&v39, 0);
            v14 = System_String__Concat_64176912((System_String_o *)StringLiteral_17182/*"battle_num_"*/, v13, 0);
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetPartyOrganizationImage(waveMaxNumTensPlaceSprite, v14, 0);
            waveMaxNumTensPlaceGlowSprite = this->fields.waveMaxNumTensPlaceGlowSprite;
            v39 = this->fields.pageMax / 10;
            v16 = System_Int32__ToString((int32_t)&v39, 0);
            v17 = System_String__Concat_64215176(
                    (System_String_o *)StringLiteral_17182/*"battle_num_"*/,
                    v16,
                    (System_String_o *)StringLiteral_16614/*"_glow"*/,
                    0);
            AtlasManager__SetPartyOrganizationImage(waveMaxNumTensPlaceGlowSprite, v17, 0);
            waveNumObject = (UnityEngine_GameObject_o *)this->fields.waveMaxNumTensPlaceSprite;
            if ( waveNumObject )
            {
              ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))waveNumObject->klass[2]._1.parent)(
                waveNumObject,
                waveNumObject->klass[2]._1.generic_class);
              waveNumObject = (UnityEngine_GameObject_o *)this->fields.waveMaxNumTensPlaceGlowSprite;
              if ( waveNumObject )
              {
                ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))waveNumObject->klass[2]._1.parent)(
                  waveNumObject,
                  waveNumObject->klass[2]._1.generic_class);
                v18 = this->fields.waveNumObject;
                if ( v9 < 10 )
                {
                  GameObjectExtensions__SetLocalPositionX(v18, 1.0, 0);
                  waveNumObject = (UnityEngine_GameObject_o *)this->fields.waveNumTensPlaceSprite;
                  if ( !waveNumObject )
                    goto LABEL_60;
                  waveNumObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)waveNumObject, 0);
                  if ( !waveNumObject )
                    goto LABEL_60;
                  UnityEngine_GameObject__SetActive(waveNumObject, 0, 0);
                  waveNumObject = (UnityEngine_GameObject_o *)this->fields.waveNumTensPlaceGlowSprite;
                  if ( !waveNumObject )
                    goto LABEL_60;
                  waveNumObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)waveNumObject, 0);
                  if ( !waveNumObject )
                    goto LABEL_60;
                  UnityEngine_GameObject__SetActive(waveNumObject, 0, 0);
                  if ( !Component_object )
                    goto LABEL_60;
                  v19 = 308;
                  goto LABEL_51;
                }
                GameObjectExtensions__SetLocalPositionX(v18, 7.0, 0);
                waveNumObject = (UnityEngine_GameObject_o *)this->fields.waveNumTensPlaceSprite;
                if ( waveNumObject )
                {
                  waveNumObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)waveNumObject, 0);
                  if ( waveNumObject )
                  {
                    UnityEngine_GameObject__SetActive(waveNumObject, 1, 0);
                    waveNumObject = (UnityEngine_GameObject_o *)this->fields.waveNumTensPlaceGlowSprite;
                    if ( waveNumObject )
                    {
                      waveNumObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)waveNumObject, 0);
                      if ( waveNumObject )
                      {
                        UnityEngine_GameObject__SetActive(waveNumObject, 1, 0);
                        waveNumTensPlaceSprite = this->fields.waveNumTensPlaceSprite;
                        v39 = v9 / 0xAu;
                        v21 = System_Int32__ToString((int32_t)&v39, 0);
                        v22 = System_String__Concat_64176912((System_String_o *)StringLiteral_17182/*"battle_num_"*/, v21, 0);
                        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        AtlasManager__SetPartyOrganizationImage(waveNumTensPlaceSprite, v22, 0);
                        waveNumTensPlaceGlowSprite = this->fields.waveNumTensPlaceGlowSprite;
                        v39 = v9 / 0xAu;
                        v24 = System_Int32__ToString((int32_t)&v39, 0);
                        v25 = System_String__Concat_64215176(
                                (System_String_o *)StringLiteral_17182/*"battle_num_"*/,
                                v24,
                                (System_String_o *)StringLiteral_16614/*"_glow"*/,
                                0);
                        AtlasManager__SetPartyOrganizationImage(waveNumTensPlaceGlowSprite, v25, 0);
                        waveNumObject = (UnityEngine_GameObject_o *)this->fields.waveNumTensPlaceSprite;
                        if ( waveNumObject )
                        {
                          ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))waveNumObject->klass[2]._1.parent)(
                            waveNumObject,
                            waveNumObject->klass[2]._1.generic_class);
                          waveNumObject = (UnityEngine_GameObject_o *)this->fields.waveNumTensPlaceGlowSprite;
                          if ( waveNumObject )
                          {
                            waveNumObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, void *))waveNumObject->klass[2]._1.parent)(
                                                                          waveNumObject,
                                                                          waveNumObject->klass[2]._1.generic_class);
                            if ( Component_object )
                            {
                              v19 = 322;
LABEL_51:
                              UIWidget__set_width((UIWidget_o *)Component_object, v19, 0);
                              goto LABEL_52;
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
      }
    }
LABEL_60:
    sub_1C7BD40(waveNumObject, *(_QWORD *)&index);
  }
  GameObjectExtensions__SetLocalPositionX(this->fields.waveNumObject, 7.0, 0);
  waveNumObject = (UnityEngine_GameObject_o *)this->fields.waveNumTensPlaceSprite;
  if ( !waveNumObject )
    goto LABEL_60;
  waveNumObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)waveNumObject, 0);
  if ( !waveNumObject )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive(waveNumObject, 0, 0);
  waveNumObject = (UnityEngine_GameObject_o *)this->fields.waveNumTensPlaceGlowSprite;
  if ( !waveNumObject )
    goto LABEL_60;
  waveNumObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)waveNumObject, 0);
  if ( !waveNumObject )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive(waveNumObject, 0, 0);
  waveNumObject = (UnityEngine_GameObject_o *)this->fields.waveMaxNumTensPlaceSprite;
  if ( !waveNumObject )
    goto LABEL_60;
  waveNumObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)waveNumObject, 0);
  if ( !waveNumObject )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive(waveNumObject, 0, 0);
  waveNumObject = (UnityEngine_GameObject_o *)this->fields.waveMaxNumTensPlaceGlowSprite;
  if ( !waveNumObject )
    goto LABEL_60;
  waveNumObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)waveNumObject, 0);
  if ( !waveNumObject )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive(waveNumObject, 0, 0);
  if ( !Component_object )
    goto LABEL_60;
  UIWidget__set_width((UIWidget_o *)Component_object, 296, 0);
  waveNumObject = (UnityEngine_GameObject_o *)this->fields.waveMaxNumOnesPlaceSprite;
  if ( !waveNumObject )
    goto LABEL_60;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)waveNumObject, 0);
  GameObjectExtensions__SetLocalPositionX(gameObject, 67.0, 0);
  waveNumObject = (UnityEngine_GameObject_o *)this->fields.waveMaxNumOnesPlaceGlowSprite;
  if ( !waveNumObject )
    goto LABEL_60;
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)waveNumObject, 0);
  GameObjectExtensions__SetLocalPositionX(v11, 67.0, 0);
LABEL_52:
  waveNumOnesPlaceSprite = this->fields.waveNumOnesPlaceSprite;
  v27 = v9 % 10;
  v39 = v27;
  v28 = System_Int32__ToString((int32_t)&v39, 0);
  v29 = System_String__Concat_64176912((System_String_o *)StringLiteral_17182/*"battle_num_"*/, v28, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(waveNumOnesPlaceSprite, v29, 0);
  waveNumOnesPlaceGlowSprite = this->fields.waveNumOnesPlaceGlowSprite;
  v39 = v27;
  v31 = System_Int32__ToString((int32_t)&v39, 0);
  v32 = System_String__Concat_64215176(
          (System_String_o *)StringLiteral_17182/*"battle_num_"*/,
          v31,
          (System_String_o *)StringLiteral_16614/*"_glow"*/,
          0);
  AtlasManager__SetPartyOrganizationImage(waveNumOnesPlaceGlowSprite, v32, 0);
  waveMaxNumOnesPlaceSprite = this->fields.waveMaxNumOnesPlaceSprite;
  v39 = this->fields.pageMax % 10;
  v34 = System_Int32__ToString((int32_t)&v39, 0);
  v35 = System_String__Concat_64176912((System_String_o *)StringLiteral_17182/*"battle_num_"*/, v34, 0);
  AtlasManager__SetPartyOrganizationImage(waveMaxNumOnesPlaceSprite, v35, 0);
  waveMaxNumOnesPlaceGlowSprite = this->fields.waveMaxNumOnesPlaceGlowSprite;
  v39 = this->fields.pageMax % 10;
  v37 = System_Int32__ToString((int32_t)&v39, 0);
  v38 = System_String__Concat_64215176(
          (System_String_o *)StringLiteral_17182/*"battle_num_"*/,
          v37,
          (System_String_o *)StringLiteral_16614/*"_glow"*/,
          0);
  AtlasManager__SetPartyOrganizationImage(waveMaxNumOnesPlaceGlowSprite, v38, 0);
  waveNumObject = (UnityEngine_GameObject_o *)this->fields.waveNumOnesPlaceSprite;
  if ( !waveNumObject )
    goto LABEL_60;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))waveNumObject->klass[2]._1.parent)(
    waveNumObject,
    waveNumObject->klass[2]._1.generic_class);
  waveNumObject = (UnityEngine_GameObject_o *)this->fields.waveNumOnesPlaceGlowSprite;
  if ( !waveNumObject )
    goto LABEL_60;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))waveNumObject->klass[2]._1.parent)(
    waveNumObject,
    waveNumObject->klass[2]._1.generic_class);
  waveNumObject = (UnityEngine_GameObject_o *)this->fields.waveMaxNumOnesPlaceSprite;
  if ( !waveNumObject )
    goto LABEL_60;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))waveNumObject->klass[2]._1.parent)(
    waveNumObject,
    waveNumObject->klass[2]._1.generic_class);
  waveNumObject = (UnityEngine_GameObject_o *)this->fields.waveMaxNumOnesPlaceGlowSprite;
  if ( !waveNumObject )
    goto LABEL_60;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))waveNumObject->klass[2]._1.parent)(
    waveNumObject,
    waveNumObject->klass[2]._1.generic_class);
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewIndicator__SetPageMax(PartyListViewIndicator_o *this, int32_t max, const MethodInfo *method)
{
  PartyListViewIndicator_o *v4; // x19
  System_Array_o *pageSpriteList; // x8
  System_Array_o **p_pageSpriteList; // x21
  PartyListViewIndicator_o *v7; // x22
  System_Array_o *v8; // x8
  Il2CppObject *klass; // x23
  System_Array_o *v10; // x8
  System_Array_o *v11; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int monitor; // w24
  float v22; // s8
  float v23; // s9
  float v24; // s10
  GrandQuestFolderBoardItem_o *v25; // x25
  UnityEngine_Component_o *v26; // x26
  PartyListViewIndicator_o *v27; // x28
  UnityEngine_MonoBehaviour_o *m_CachedPtr; // x29
  EventDelegate_o *v29; // x27
  struct UnityEngine_GameObject_o *soloBaseObject; // x29
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  int32_t m_CancellationTokenSource; // w2
  int v43; // w8
  intptr_t v44; // x8
  _QWORD *v45; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v47; // x8
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  __int64 v54; // x22
  void *v55; // x9
  UnityEngine_Object_o *pageBaseObject; // x20
  System_Array_o *v57; // x8
  __int64 v58; // x20
  int v59; // w9
  System_String_o *v60; // x1
  int32_t pageMax; // w19
  float v62; // s8
  float v63; // s9
  __int64 v64; // x0
  UnityEngine_Transform_o *parent; // [xsp+8h] [xbp-88h]
  int v66; // [xsp+1Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4CE9E64 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    sub_1C7BAE8(&EventDelegate_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventDelegate__get_Item__);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_UISprite___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UISprite___TypeInfo);
    sub_1C7BAE8(&StringLiteral_20750/*"img_slider_off"*/);
    this = (PartyListViewIndicator_o *)sub_1C7BAE8(&StringLiteral_9901/*"OnClickTabParty"*/);
    byte_4CE9E64 = 1;
  }
  p_pageSpriteList = (System_Array_o **)&v4->fields.pageSpriteList;
  pageSpriteList = (System_Array_o *)v4->fields.pageSpriteList;
  if ( !pageSpriteList )
    goto LABEL_67;
  if ( SLODWORD(pageSpriteList[1].monitor) < max )
  {
    this = (PartyListViewIndicator_o *)sub_1C7BB90(UISprite___TypeInfo, (unsigned int)max);
    if ( !*p_pageSpriteList )
      goto LABEL_67;
    v7 = this;
    System_Array__CopyTo(*p_pageSpriteList, (System_Array_o *)this, 0, 0);
    v8 = *p_pageSpriteList;
    if ( !*p_pageSpriteList )
      goto LABEL_67;
    if ( !LODWORD(v8[1].monitor) )
      goto LABEL_74;
    klass = (Il2CppObject *)v8[2].klass;
    if ( !klass )
      goto LABEL_67;
    this = (PartyListViewIndicator_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8[2].klass, 0);
    if ( !this )
      goto LABEL_67;
    this = (PartyListViewIndicator_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
    v10 = *p_pageSpriteList;
    parent = (UnityEngine_Transform_o *)this;
    if ( !*p_pageSpriteList )
      goto LABEL_67;
    if ( LODWORD(v10[1].monitor) <= 1 )
      goto LABEL_74;
    this = (PartyListViewIndicator_o *)v10[2].monitor;
    if ( !this )
      goto LABEL_67;
    this = (PartyListViewIndicator_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_67;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    v11 = *p_pageSpriteList;
    if ( !*p_pageSpriteList )
      goto LABEL_67;
    if ( !LODWORD(v11[1].monitor) )
LABEL_74:
      sub_1C7BD48(this);
    this = (PartyListViewIndicator_o *)v11[2].klass;
    if ( !this )
      goto LABEL_67;
    x = localPosition.fields.x;
    y = localPosition.fields.y;
    z = localPosition.fields.z;
    this = (PartyListViewIndicator_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_67;
    v68 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    if ( !*p_pageSpriteList || !v7 )
      goto LABEL_67;
    monitor = (int)(*p_pageSpriteList)[1].monitor;
    if ( monitor < SLODWORD(v7->fields.m_CancellationTokenSource) )
    {
      v22 = x - v68.fields.x;
      v23 = y - v68.fields.y;
      v24 = z - v68.fields.z;
      v25 = (GrandQuestFolderBoardItem_o *)(&v7->fields.soloBaseObject + monitor);
      while ( 1 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (PartyListViewIndicator_o *)UnityEngine_Object__Instantiate_object__52412380(
                                             klass,
                                             parent,
                                             (const MethodInfo_31FBFDC *)Method_UnityEngine_Object_Instantiate_UISprite___);
        if ( !this )
          break;
        v26 = (UnityEngine_Component_o *)this;
        this = (PartyListViewIndicator_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        if ( !this )
          break;
        v69.fields.z = v24 * (float)monitor;
        v69.fields.y = v23 * (float)monitor;
        v69.fields.x = v22 * (float)monitor;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v69, 0);
        this = (PartyListViewIndicator_o *)UnityEngine_Component__GetComponent_object_(
                                             v26,
                                             (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
        if ( !this )
          break;
        v27 = this;
        this = (PartyListViewIndicator_o *)this->fields.selectNameBaseObject;
        if ( !this )
          break;
        this = (PartyListViewIndicator_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)this,
                                             0,
                                             (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_EventDelegate__get_Item__);
        if ( !this )
          break;
        m_CachedPtr = (UnityEngine_MonoBehaviour_o *)this->fields.m_CachedPtr;
        v29 = (EventDelegate_o *)sub_1C7BD34(EventDelegate_TypeInfo);
        EventDelegate___ctor_49793316(v29, m_CachedPtr, (System_String_o *)StringLiteral_9901/*"OnClickTabParty"*/, 0);
        if ( !v29 )
          break;
        this = (PartyListViewIndicator_o *)EventDelegate__get_parameters(v29, 0);
        if ( !this )
          break;
        if ( !LODWORD(this->fields.m_CancellationTokenSource) )
          goto LABEL_74;
        soloBaseObject = this->fields.soloBaseObject;
        v66 = monitor;
        this = (PartyListViewIndicator_o *)j_il2cpp_value_box_0(int_TypeInfo, &v66);
        if ( !soloBaseObject )
          break;
        soloBaseObject[1].monitor = this;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&soloBaseObject[1].monitor,
          (int32_t)this,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
        this = (PartyListViewIndicator_o *)v27->fields.selectNameBaseObject;
        if ( !this )
          break;
        m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
        v43 = HIDWORD(this->fields.m_CancellationTokenSource) + 1;
        LODWORD(this->fields.m_CancellationTokenSource) = 0;
        HIDWORD(this->fields.m_CancellationTokenSource) = v43;
        if ( m_CancellationTokenSource >= 1 )
        {
          System_Array__Clear((System_Array_o *)this->fields.m_CachedPtr, 0, m_CancellationTokenSource, 0);
          this = (PartyListViewIndicator_o *)v27->fields.selectNameBaseObject;
          if ( !this )
            break;
        }
        v44 = this->fields.m_CachedPtr;
        v45 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v44 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v44 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v29,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v47 = v44 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v47 + 32) = v29;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)(v47 + 32),
            (int32_t)v29,
            m_CancellationTokenSource,
            v37,
            v38,
            v39,
            v40,
            v41);
        }
        this = (PartyListViewIndicator_o *)sub_1C7BC24(v26, v7->klass->_1.element_class);
        if ( !this )
        {
          v64 = sub_1C7BD64();
          sub_1C7BC10(v64, 0);
        }
        if ( (unsigned int)monitor >= LODWORD(v7->fields.m_CancellationTokenSource) )
          goto LABEL_74;
        v25->klass = (GrandQuestFolderBoardItem_c *)v26;
        sub_1C7BA8C(v25, (int32_t)v26, v48, v49, v50, v51, v52, v53);
        ++monitor;
        v25 = (GrandQuestFolderBoardItem_o *)((char *)v25 + 8);
        if ( monitor >= SLODWORD(v7->fields.m_CancellationTokenSource) )
          goto LABEL_43;
      }
LABEL_67:
      sub_1C7BD40(this, *(_QWORD *)&max);
    }
LABEL_43:
    *p_pageSpriteList = (System_Array_o *)v7;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v4->fields.pageSpriteList, (int32_t)v7, v15, v16, v17, v18, v19, v20);
    pageSpriteList = *p_pageSpriteList;
    if ( !*p_pageSpriteList )
      goto LABEL_67;
  }
  v54 = 0;
  while ( 1 )
  {
    v55 = pageSpriteList[1].monitor;
    if ( (int)v54 >= (int)v55 )
      break;
    if ( (unsigned int)v54 >= (unsigned int)v55 )
      goto LABEL_74;
    this = (PartyListViewIndicator_o *)*((_QWORD *)&pageSpriteList[2].klass + v54);
    if ( this )
    {
      this = (PartyListViewIndicator_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (int)v54 < max, 0);
        pageSpriteList = *p_pageSpriteList;
        ++v54;
        if ( *p_pageSpriteList )
          continue;
      }
    }
    goto LABEL_67;
  }
  if ( (int)v55 >= max )
    LODWORD(v55) = max;
  v4->fields.pageMax = (int)v55;
  v4->fields.pageIndex = -1;
  if ( (int)v55 <= 1 )
    v4->fields.pageMax = 0;
  pageBaseObject = (UnityEngine_Object_o *)v4->fields.pageBaseObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PartyListViewIndicator_o *)UnityEngine_Object__op_Inequality(pageBaseObject, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v57 = *p_pageSpriteList;
    if ( !*p_pageSpriteList )
      goto LABEL_67;
    v58 = 0;
    while ( 1 )
    {
      v59 = (int)v57[1].monitor;
      if ( (int)v58 >= v59 )
        break;
      if ( (unsigned int)v58 >= v59 )
        goto LABEL_74;
      this = (PartyListViewIndicator_o *)*((_QWORD *)&v57[2].klass + v58);
      if ( this )
      {
        v60 = (int)v58 >= v4->fields.pageMax ? 0LL : (System_String_o *)StringLiteral_20750/*"img_slider_off"*/;
        UISprite__set_spriteName((UISprite_o *)this, v60, 0);
        v57 = (System_Array_o *)v4->fields.pageSpriteList;
        ++v58;
        if ( v57 )
          continue;
      }
      goto LABEL_67;
    }
    this = (PartyListViewIndicator_o *)v4->fields.pageBaseObject;
    if ( !this )
      goto LABEL_67;
    this = (PartyListViewIndicator_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !this )
      goto LABEL_67;
    v70 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    this = (PartyListViewIndicator_o *)v4->fields.pageBaseObject;
    if ( !this )
      goto LABEL_67;
    pageMax = v4->fields.pageMax;
    v62 = v70.fields.y;
    v63 = v70.fields.z;
    this = (PartyListViewIndicator_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !this )
      goto LABEL_67;
    v71.fields.x = (float)(-10 * pageMax + 10);
    v71.fields.y = v62;
    v71.fields.z = v63;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v71, 0);
  }
}


void PartyListViewIndicator__SetScrollEnabled(PartyListViewIndicator_o *this, bool enabled, const MethodInfo *method)
{
  this->fields.isScrollEnabled = enabled;
}


void PartyListViewIndicator__UpdateCost(
        PartyListViewIndicator_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  PartyListViewIndicator_o *v4; // x20
  int32_t maxCost; // w24
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t TotalCostRestriction; // w22
  System_String_o *v8; // x21
  int32_t titleWidth; // w24
  UILabel_o *maxCostLabel; // x22
  System_String_o *v11; // x0
  UILabel_o *splitCostLabel; // x22
  System_String_o *v13; // x0
  int32_t cost; // w8
  UILabel_o *selectCostLabel; // x20
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  int32_t v18; // [xsp+8h] [xbp-48h] BYREF
  int32_t v19; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4CE9E69 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10250/*"PARTY_ORGANIZATION_COST_SPLIT"*/);
    sub_1C7BAE8(&StringLiteral_10248/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/);
    sub_1C7BAE8(&StringLiteral_10249/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/);
    sub_1C7BAE8(&StringLiteral_10247/*"PARTY_ORGANIZATION_COST_COLOR"*/);
    this = (PartyListViewIndicator_o *)sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE9E69 = 1;
  }
  v18 = 0;
  if ( !partyItem )
    goto LABEL_33;
  maxCost = partyItem->fields.maxCost;
  v19 = maxCost;
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    TotalCostRestriction = QuestRestrictionInfo__GetTotalCostRestriction(questRestrictionInfo, 0);
  else
    TotalCostRestriction = 0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( TotalCostRestriction != 0 && maxCost > TotalCostRestriction )
  {
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_10249/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0);
    v19 = TotalCostRestriction;
  }
  else
  {
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_10247/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0);
    TotalCostRestriction = maxCost;
  }
  this = (PartyListViewIndicator_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    this = (PartyListViewIndicator_o *)BalanceConfig_TypeInfo;
  }
  if ( !v4->fields.maxCostLabel )
    goto LABEL_33;
  titleWidth = this->fields.partyEventPointIndicator[6].fields.titleWidth;
  this = (PartyListViewIndicator_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)v4->fields.maxCostLabel,
                                       0);
  if ( !this )
    goto LABEL_33;
  if ( TotalCostRestriction >= titleWidth )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (PartyListViewIndicator_o *)v4->fields.infinityCostLabel;
    if ( !this )
      goto LABEL_33;
    this = (PartyListViewIndicator_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (PartyListViewIndicator_o *)v4->fields.infinityCostLabel;
    if ( !this )
      goto LABEL_33;
    this = (PartyListViewIndicator_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    maxCostLabel = v4->fields.maxCostLabel;
    v11 = System_Int32__ToString((int32_t)&v19, 0);
    this = (PartyListViewIndicator_o *)System_String__Concat_64176912(v8, v11, 0);
    if ( !maxCostLabel )
      goto LABEL_33;
    UILabel__set_text(maxCostLabel, (System_String_o *)this, 0);
  }
  splitCostLabel = v4->fields.splitCostLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_10250/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0);
  this = (PartyListViewIndicator_o *)System_String__Concat_64176912(v8, v13, 0);
  if ( !splitCostLabel )
    goto LABEL_33;
  UILabel__set_text(splitCostLabel, (System_String_o *)this, 0);
  cost = partyItem->fields.cost;
  selectCostLabel = v4->fields.selectCostLabel;
  if ( cost > v19 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_10248/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0);
    cost = partyItem->fields.cost;
    v8 = v16;
  }
  v18 = cost;
  v17 = System_Int32__ToString((int32_t)&v18, 0);
  this = (PartyListViewIndicator_o *)System_String__Concat_64176912(v8, v17, 0);
  if ( !selectCostLabel )
LABEL_33:
    sub_1C7BD40(this, partyItem);
  UILabel__set_text(selectCostLabel, (System_String_o *)this, 0);
}