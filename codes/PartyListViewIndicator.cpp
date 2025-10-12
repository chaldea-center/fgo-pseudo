void PartyListViewIndicator___ctor(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct System_Int32_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C332D1 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    byte_4C332D1 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct System_Int32_array *)sub_1C32CC8(int___TypeInfo, (unsigned int)(v3->static_fields->DeckMax + 1));
  this->fields.useLimitEquip = v4;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.useLimitEquip, (int32_t)v4, v5, v6);
  __asm { FMOV            V1.4S, #1.0 }
  this->fields.isScrollEnabled = 1;
  this->fields.ICON_NORMAL_COLOR = _Q1;
  this->fields.ICON_MASK_COLOR = (struct UnityEngine_Color_o)xmmword_C0C4F0;
  ListViewIndicator___ctor((ListViewIndicator_o *)this, 0);
}


void PartyListViewIndicator__Awake(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct UISprite_o *indexSprite; // x8
  struct UIAtlas_o *mAtlas; // x1

  indexSprite = this->fields.indexSprite;
  if ( !indexSprite )
    sub_1C32E7C(this);
  mAtlas = indexSprite->fields.mAtlas;
  this->fields.indexLocalAtlas = mAtlas;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.indexLocalAtlas, (int32_t)mAtlas, v2, v3);
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
    sub_1C32E7C(limitMasterFormationButton);
  }
}


void PartyListViewIndicator__DispFriendPointUpBonus(
        PartyListViewIndicator_o *this,
        int32_t bonusVal,
        const MethodInfo *method)
{
  UnityEngine_Object_o *friendPointUpBonusSprite; // x21
  UnityEngine_Object_o *friendPointUpBonusLabel; // x21
  UILabel_o *v7; // x20
  UnityEngine_Component_o *gameObject; // x0
  bool v9; // w1
  unsigned int v10; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C332D0 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C332D0 = 1;
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
            v9 = 0;
            goto LABEL_17;
          }
        }
      }
      else
      {
        v10 = bonusVal / 0x3E8u;
        v7 = this->fields.friendPointUpBonusLabel;
        gameObject = (UnityEngine_Component_o *)System_Int32__ToString((int32_t)&v10, 0);
        if ( v7 )
        {
          UILabel__set_text(v7, (System_String_o *)gameObject, 0);
          gameObject = (UnityEngine_Component_o *)this->fields.friendPointUpBonusSprite;
          if ( gameObject )
          {
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
            if ( gameObject )
            {
              v9 = 1;
LABEL_17:
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v9, 0);
              return;
            }
          }
        }
      }
      sub_1C32E7C(gameObject);
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

  if ( (byte_4C332C9 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_19184/*"event_emblem_frame"*/);
    sub_1C32C20(&StringLiteral_20188/*"icon_equip_fixation"*/);
    sub_1C32C20(&StringLiteral_8280/*"LIMIT_EQUIP_SETTING"*/);
    sub_1C32C20(&StringLiteral_17516/*"btn_skill_off"*/);
    sub_1C32C20(&StringLiteral_19183/*"event_emblem_dim"*/);
    sub_1C32C20(&StringLiteral_17517/*"btn_skill_on"*/);
    byte_4C332C9 = 1;
  }
  outEnt = 0;
  if ( !PartyListViewIndicator__IsEventOnlyEquip(this, (const MethodInfo *)partyItem) )
    goto LABEL_15;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
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
  AtlasManager__SetEventUI(masterEquipBackSprite, (System_String_o *)StringLiteral_19183/*"event_emblem_dim"*/, 0);
  AtlasManager__SetEventUI(this->fields.masterEquipFrameSprite, (System_String_o *)StringLiteral_19184/*"event_emblem_frame"*/, 0);
  if ( !this->fields.isChkSave )
  {
    if ( (v11 & 1) == 0 )
    {
      Instance = (DataManager_o *)UnityEngine_PlayerPrefs__GetString_71182452((System_String_o *)StringLiteral_8280/*"LIMIT_EQUIP_SETTING"*/, 0);
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
    sub_1C32E7C(Instance);
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
                             (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( v20 )
        {
          AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_17517/*"btn_skill_on"*/, 0);
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
          AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_17516/*"btn_skill_off"*/, 0);
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
    sub_1C32E84(Instance);
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
  AtlasManager__SetEventUI(limitEquipFixSprite, (System_String_o *)StringLiteral_20188/*"icon_equip_fixation"*/, 0);
}


void PartyListViewIndicator__DrawPartyInfo(
        PartyListViewIndicator_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *soloBaseObject; // x0
  UISprite_o *v6; // x21
  bool v7; // w1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  EventPartyMargeUpValInfo_o *v12; // x1
  const MethodInfo *v13; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestRestrictionInfo_o *v15; // x0
  int32_t servantNumMax; // w1
  UISprite_o *v17; // x21
  struct QuestRestrictionInfo_o *v18; // x8
  BalanceConfig_c *v19; // x0
  QuestRestrictionInfo_o *v20; // x0
  UICommonButton_o *masterEquipButton; // x21
  char v22; // w1
  struct QuestRestrictionInfo_o *v23; // x8
  struct QuestRestrictionInfo_o *v24; // x8
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x1
  QuestRestrictionInfo_o *v27; // x0
  UILabel_o *masterEquipFixedLabel; // x21
  bool v29; // w1
  Il2CppObject *Entity; // x0
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x1
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  il2cpp_array_size_t max_length; // x9
  int32_t v36; // w21
  ServantEntity_array *SvtEntityList; // x22
  const MethodInfo *v38; // x1
  System_String_array *SvtNameList; // x23
  const MethodInfo *v40; // x1
  System_Boolean_array *IsFollowerList; // x24
  EventPartyMargeUpValInfo_o *v42; // x25
  struct EventPartyMargeUpValInfo_o **p_eventMargeUpValInfo; // x21
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  const MethodInfo *v46; // x3
  EventUpValInfo_array *v47; // x8
  unsigned __int64 v48; // x20
  unsigned __int64 max_length_low; // x9
  EventPartyMargeUpValInfo_o *v50; // x22
  UILabel_o *selectNameLabel; // x21
  System_String_o *v52; // x0
  EventUpValInfo_array *v53; // [xsp+0h] [xbp-70h] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *equipName; // [xsp+10h] [xbp-60h] BYREF
  int32_t maxLv; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t condUsrLv[2]; // [xsp+20h] [xbp-50h] BYREF
  int32_t genderImageId[2]; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4C332C7 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_1C32C20(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_1C32C20(&EventPartyMargeUpValInfo_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C32C20(&StringLiteral_10257/*"PARTY_ORGANIZATION_NAME"*/);
    sub_1C32C20(&StringLiteral_23561/*"solo_bg"*/);
    sub_1C32C20(&StringLiteral_10256/*"PARTY_ORGANIZATION_MASTER_EQUIP_FIXED"*/);
    sub_1C32C20(&StringLiteral_23590/*"specialparty_bg"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C332C7 = 1;
  }
  *(_QWORD *)condUsrLv = 0;
  *(_QWORD *)genderImageId = 0;
  maxLv = 0;
  detail = 0;
  equipName = 0;
  v53 = 0;
  if ( partyItem )
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
                                                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !this->fields.soloBaseObject )
          goto LABEL_108;
        v6 = (UISprite_o *)soloBaseObject;
        UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0);
        if ( !v6 )
          goto LABEL_108;
        UISprite__set_spriteName(v6, (System_String_o *)StringLiteral_23561/*"solo_bg"*/, 0);
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
                                                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !this->fields.soloBaseObject )
          goto LABEL_108;
        v17 = (UISprite_o *)soloBaseObject;
        UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0);
        if ( !v17 )
          goto LABEL_108;
        UISprite__set_spriteName(v17, (System_String_o *)StringLiteral_23590/*"specialparty_bg"*/, 0);
        ((void (__fastcall *)(UISprite_o *, const MethodInfo *))v17->klass->vtable._33_MakePixelPerfect.methodPtr)(
          v17,
          v17->klass->vtable._33_MakePixelPerfect.method);
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
        v15 = this->fields.questRestrictionInfo;
        if ( !v15 )
          goto LABEL_69;
        soloBaseObject = (UnityEngine_GameObject_o *)QuestRestrictionInfo__IsServantNum(v15, 0);
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
          soloBaseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !soloBaseObject )
            goto LABEL_108;
          soloBaseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)soloBaseObject,
                                                         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
          v23 = this->fields.questRestrictionInfo;
          if ( !v23 )
            goto LABEL_108;
          if ( !soloBaseObject )
            goto LABEL_108;
          soloBaseObject = (UnityEngine_GameObject_o *)NpcFollowerMaster__GetQuestFollowerList(
                                                         (NpcFollowerMaster_o *)soloBaseObject,
                                                         v23->fields.questId,
                                                         v23->fields.questPhase,
                                                         0);
          v24 = this->fields.questRestrictionInfo;
          if ( !v24 || !soloBaseObject )
            goto LABEL_108;
          servantNumMax = v24->fields.myServantNumMax + LODWORD(soloBaseObject[1].klass);
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
        v20 = this->fields.questRestrictionInfo;
        if ( v20 && QuestRestrictionInfo__IsWaveSetupSwitchParty(v20, 0) )
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
                                                         partyItem->fields.trendDispWaveBattleEnemyClassIds,
                                                         0);
        }
        masterEquipButton = this->fields.masterEquipButton;
        if ( partyItem->fields._IsWaveBattleRestart_k__BackingField )
        {
          soloBaseObject = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !soloBaseObject )
            goto LABEL_108;
          v22 = LODWORD(soloBaseObject[5].klass) == 1;
        }
        else
        {
          v22 = 1;
        }
        if ( !masterEquipButton )
          goto LABEL_108;
        UICommonButton__SetEnable(masterEquipButton, v22, 0);
        soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partySwapButton;
        if ( !soloBaseObject )
          goto LABEL_108;
        UICommonButton__SetEnable(
          (UICommonButton_o *)soloBaseObject,
          !partyItem->fields._IsClearedWave_k__BackingField,
          0);
        soloBaseObject = (UnityEngine_GameObject_o *)this->fields.autoOrganizationButton;
        if ( !soloBaseObject )
          goto LABEL_108;
        UICommonButton__SetEnable(
          (UICommonButton_o *)soloBaseObject,
          !partyItem->fields._IsClearedWave_k__BackingField,
          0);
        soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEditButton;
        if ( !soloBaseObject )
          goto LABEL_108;
        UICommonButton__SetEnable(
          (UICommonButton_o *)soloBaseObject,
          !partyItem->fields._IsClearedWave_k__BackingField,
          0);
        goto LABEL_75;
      default:
        v18 = this->fields.questRestrictionInfo;
        if ( v18 && v18->fields.eventDeckNum >= 1 )
        {
          soloBaseObject = this->fields.soloBaseObject;
          if ( !soloBaseObject )
            goto LABEL_108;
          UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
          soloBaseObject = this->fields.organizationNumObject;
          if ( !soloBaseObject )
            goto LABEL_108;
          UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0);
          v19 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v19 = BalanceConfig_TypeInfo;
          }
          servantNumMax = v19->static_fields->DeckMemberMax;
LABEL_68:
          PartyListViewIndicator__SetEventDeckPartyName(this, servantNumMax, v13);
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
          v52 = LocalizationManager__Get((System_String_o *)StringLiteral_10257/*"PARTY_ORGANIZATION_NAME"*/, 0);
          soloBaseObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                         v52,
                                                         (Il2CppObject *)partyItem->fields.deckName,
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
        PartyListViewIndicator__UpdateCost(this, partyItem, v25);
        PartyListViewItem__CheckRestriction(partyItem, v26);
        v27 = this->fields.questRestrictionInfo;
        if ( v27 && QuestRestrictionInfo__TryGetFixedMasterEquipInfo(v27, genderImageId, 0) )
        {
          masterEquipFixedLabel = this->fields.masterEquipFixedLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          soloBaseObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_10256/*"PARTY_ORGANIZATION_MASTER_EQUIP_FIXED"*/,
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
          v29 = 0;
        }
        else
        {
          soloBaseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !soloBaseObject )
            goto LABEL_108;
          soloBaseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)soloBaseObject,
                                                         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEquipMaster___);
          if ( !soloBaseObject )
            goto LABEL_108;
          Entity = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)soloBaseObject,
                     partyItem->fields.userEquipId,
                     (const MethodInfo_3398D94 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
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
          v29 = 1;
        }
        UICommonButton__SetEnable((UICommonButton_o *)soloBaseObject, v29, 0);
        PartyListViewIndicator__DrawEventLimitEquip(this, partyItem, 0, v31);
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
            sub_1C32E84(soloBaseObject);
          v36 = eventIdList->m_Items[0];
        }
        else
        {
LABEL_99:
          v36 = 0;
        }
        genderImageId[1] = v36;
        SvtEntityList = PartyListViewItem__GetSvtEntityList(partyItem, v32);
        SvtNameList = PartyListViewItem__GetSvtNameList(partyItem, v38);
        IsFollowerList = PartyListViewItem__GetIsFollowerList(partyItem, v40);
        v42 = (EventPartyMargeUpValInfo_o *)sub_1C32E6C(EventPartyMargeUpValInfo_TypeInfo);
        EventPartyMargeUpValInfo___ctor(v42, v36, SvtEntityList, SvtNameList, IsFollowerList, 0);
        p_eventMargeUpValInfo = &this->fields.eventMargeUpValInfo;
        this->fields.eventMargeUpValInfo = v42;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.eventMargeUpValInfo, (int32_t)v42, v44, v45);
        soloBaseObject = (UnityEngine_GameObject_o *)PartyListViewItem__GetEventUpVal(
                                                       partyItem,
                                                       &genderImageId[1],
                                                       &v53,
                                                       v46);
        v47 = v53;
        if ( v53 )
        {
          v48 = 0;
          while ( 1 )
          {
            max_length_low = LODWORD(v47->max_length);
            if ( (__int64)v48 >= (int)max_length_low )
              break;
            if ( v48 >= max_length_low )
              goto LABEL_126;
            soloBaseObject = (UnityEngine_GameObject_o *)v47->m_Items[v48];
            if ( soloBaseObject )
            {
              v50 = *p_eventMargeUpValInfo;
              soloBaseObject = (UnityEngine_GameObject_o *)EventUpValInfo__GetDropItemList(
                                                             (EventUpValInfo_o *)soloBaseObject,
                                                             v48,
                                                             0);
              if ( !v50 )
                goto LABEL_108;
              EventPartyMargeUpValInfo__Add(v50, (EventDropItemUpValInfo_array *)soloBaseObject, 0);
              v47 = v53;
            }
            ++v48;
            if ( !v47 )
              goto LABEL_108;
          }
          soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEventPointIndicator;
          if ( soloBaseObject )
          {
            v12 = *p_eventMargeUpValInfo;
            goto LABEL_111;
          }
        }
LABEL_108:
        sub_1C32E7C(soloBaseObject);
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, 0, v8, v9);
  this->fields.eventMargeUpValInfo = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.eventMargeUpValInfo, 0, v10, v11);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEventPointIndicator;
  if ( !soloBaseObject )
    goto LABEL_108;
  v12 = 0;
LABEL_111:
  PartyEventPointIndicator__SetTotalDropItemList((PartyEventPointIndicator_o *)soloBaseObject, v12, 0);
}


bool PartyListViewIndicator__IsEventOnlyEquip(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C332CF & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C332CF = 1;
  }
  entity = 0;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (questRestrictionInfo = this->fields.questRestrictionInfo) == 0)
    || !Instance )
  {
LABEL_12:
    sub_1C32E7C(Instance);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          questRestrictionInfo->fields.eventId,
          (const MethodInfo_3396884 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v7; // x8
  int32_t DeckMax; // w20
  BalanceConfig_c *v9; // x0
  struct System_Int32_array *useLimitEquip; // x8
  EventEquipSkillReleaseEntity_o *outEnt; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C332CE & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C332CE = 1;
  }
  outEnt = 0;
  if ( !PartyListViewIndicator__IsEventOnlyEquip(this, (const MethodInfo *)partyItem) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
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
  v7 = partyItem->fields.questRestrictionInfo;
  if ( v7 )
    LOBYTE(v7) = v7->fields.eventDeckNum > 0;
  if ( ((unsigned __int8)v7 & 1) != 0 || (unsigned int)(partyItem->fields.menuKind - 1) <= 6 )
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
    sub_1C32E7C(Instance);
  if ( (unsigned int)DeckMax >= LODWORD(useLimitEquip->max_length) )
    sub_1C32E84(Instance);
  return useLimitEquip->m_Items[DeckMax] == 0;
}


void PartyListViewIndicator__OnClickLeft(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *manager; // x20
  ListViewManager_o *v4; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  int32_t pageIndex; // w8
  struct ListViewManager_o *v8; // x8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0

  if ( (byte_4C332CA & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_PartyListViewIndicator_OnClickLeft__);
    byte_4C332CA = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(manager, 0, 0)
    && this->fields.isScrollEnabled
    && (this->fields.pageIndex & 0x80000000) == 0 )
  {
    v4 = this->fields.manager;
    if ( !v4 )
      goto LABEL_22;
    ListViewManager__BackLoopItem(v4, 0);
    if ( this->fields.pageIndex >= 1 )
    {
      v5 = Method_PartyListViewIndicator_OnClickLeft__;
      if ( (*((_BYTE *)Method_PartyListViewIndicator_OnClickLeft__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C32C38(Method_PartyListViewIndicator_OnClickLeft__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 7, 0, 0);
      v4 = this->fields.manager;
      if ( v4 )
      {
        pageIndex = this->fields.pageIndex;
LABEL_20:
        ListViewManager__MoveCenterItem(v4, pageIndex - 1, 1, 0, 0.0, 0);
        return;
      }
      goto LABEL_22;
    }
    v8 = this->fields.manager;
    if ( !v8 )
      goto LABEL_22;
    if ( v8->fields.isLoop )
    {
      v9 = Method_PartyListViewIndicator_OnClickLeft__;
      if ( (*((_BYTE *)Method_PartyListViewIndicator_OnClickLeft__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1C32C38(Method_PartyListViewIndicator_OnClickLeft__);
      v10 = (System_Reflection_MethodBase_o *)sub_1C32C04(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 7, 0, 0);
      v4 = this->fields.manager;
      if ( v4 )
      {
        pageIndex = this->fields.pageMax;
        goto LABEL_20;
      }
LABEL_22:
      sub_1C32E7C(v4);
    }
  }
}


void PartyListViewIndicator__OnClickRight(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *manager; // x20
  ListViewManager_o *v4; // x0
  int32_t pageIndex; // w8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  int32_t v8; // w1
  struct ListViewManager_o *v9; // x8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0

  if ( (byte_4C332CB & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_PartyListViewIndicator_OnClickRight__);
    byte_4C332CB = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(manager, 0, 0)
    && this->fields.isScrollEnabled
    && (this->fields.pageIndex & 0x80000000) == 0 )
  {
    v4 = this->fields.manager;
    if ( !v4 )
      goto LABEL_23;
    ListViewManager__FowardLoopItem(v4, 0);
    pageIndex = this->fields.pageIndex;
    if ( (pageIndex & 0x80000000) == 0 && pageIndex < this->fields.pageMax - 1 )
    {
      v6 = Method_PartyListViewIndicator_OnClickRight__;
      if ( (*((_BYTE *)Method_PartyListViewIndicator_OnClickRight__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C32C38(Method_PartyListViewIndicator_OnClickRight__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C32C04(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 7, 0, 0);
      v4 = this->fields.manager;
      if ( v4 )
      {
        v8 = this->fields.pageIndex + 1;
LABEL_21:
        ListViewManager__MoveCenterItem(v4, v8, 1, 0, 0.0, 0);
        return;
      }
      goto LABEL_23;
    }
    v9 = this->fields.manager;
    if ( !v9 )
      goto LABEL_23;
    if ( v9->fields.isLoop )
    {
      v10 = Method_PartyListViewIndicator_OnClickRight__;
      if ( (*((_BYTE *)Method_PartyListViewIndicator_OnClickRight__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1C32C38(Method_PartyListViewIndicator_OnClickRight__);
      v11 = (System_Reflection_MethodBase_o *)sub_1C32C04(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 7, 0, 0);
      v4 = this->fields.manager;
      if ( v4 )
      {
        v8 = 0;
        goto LABEL_21;
      }
LABEL_23:
      sub_1C32E7C(v4);
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
  UnityEngine_GameObject_o *leftObject; // x0
  struct ListViewManager_o *v14; // x8
  _BOOL4 isLoop; // w8
  bool v16; // w9
  bool v17; // w8
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  __int64 naturalAligment; // x10
  ListViewItem_o *v21; // x1

  if ( (byte_4C332C2 & 1) == 0 )
  {
    sub_1C32C20(&PartyListViewItem_TypeInfo);
    byte_4C332C2 = 1;
  }
  this->fields.manager = manager;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.manager,
    (int32_t)manager,
    (int32_t)item,
    (const MethodInfo *)isTop);
  v14 = this->fields.manager;
  if ( !v14 )
    goto LABEL_19;
  isLoop = v14->fields.isLoop;
  leftObject = this->fields.leftObject;
  v16 = isLeft || isRight;
  if ( isLoop )
    isRight |= isLeft;
  if ( !leftObject
    || (isLoop ? (v17 = v16) : (v17 = isLeft),
        UnityEngine_GameObject__SetActive(leftObject, v17, 0),
        (leftObject = this->fields.rightObject) == 0) )
  {
LABEL_19:
    sub_1C32E7C(leftObject);
  }
  UnityEngine_GameObject__SetActive(leftObject, isRight, 0);
  if ( !item )
  {
    PartyListViewIndicator__SetPageIndex(this, -1, v18);
    goto LABEL_17;
  }
  PartyListViewIndicator__SetPageIndex(this, item->fields.index, v18);
  naturalAligment = PartyListViewItem_TypeInfo->_2.naturalAligment;
  if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment )
  {
LABEL_17:
    v21 = 0;
    goto LABEL_18;
  }
  if ( (PartyListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] == PartyListViewItem_TypeInfo )
    v21 = item;
  else
    v21 = 0;
LABEL_18:
  PartyListViewIndicator__DrawPartyInfo(this, (PartyListViewItem_o *)v21, v19);
}


void PartyListViewIndicator__OnModifyPosition(
        PartyListViewIndicator_o *this,
        ListViewManager_o *manager,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ;
}


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

  if ( (byte_4C332CC & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C32C20(&StringLiteral_21237/*"limited_bg"*/);
    sub_1C32C20(&StringLiteral_23561/*"solo_bg"*/);
    sub_1C32C20(&StringLiteral_23673/*"startingonly_bg"*/);
    sub_1C32C20(&StringLiteral_22618/*"pair_bg"*/);
    byte_4C332CC = 1;
  }
  organizationNumObject = this->fields.organizationNumObject;
  if ( !organizationNumObject )
LABEL_19:
    sub_1C32E7C(organizationNumObject);
  organizationNumObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        organizationNumObject,
                                                        (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
                                                            (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
      UISprite__set_spriteName(v9, (System_String_o *)StringLiteral_23561/*"solo_bg"*/, 0);
      organizationNumObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UISprite_o *, const MethodInfo *))v9->klass->vtable._33_MakePixelPerfect.methodPtr)(
                                                            v9,
                                                            v9->klass->vtable._33_MakePixelPerfect.method);
      if ( !v7 )
        goto LABEL_19;
      goto LABEL_18;
    case 1:
      if ( !organizationNumObject )
        goto LABEL_19;
      v8 = &StringLiteral_22618/*"pair_bg"*/;
      break;
    case 2:
      if ( !organizationNumObject )
        goto LABEL_19;
      v8 = &StringLiteral_23673/*"startingonly_bg"*/;
      break;
    default:
      if ( !organizationNumObject )
        goto LABEL_19;
      v8 = &StringLiteral_21237/*"limited_bg"*/;
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  PartyEventPointIndicator_o *partyEventPointIndicator; // x0

  this->fields.setupInfo = setupInfo;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.setupInfo,
    (int32_t)setupInfo,
    (int32_t)questRestrictionInfo,
    (const MethodInfo *)classIds);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v8, v9);
  this->fields.eventMargeUpValInfo = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.eventMargeUpValInfo, 0, v10, v11);
  partyEventPointIndicator = this->fields.partyEventPointIndicator;
  if ( !partyEventPointIndicator
    || (PartyEventPointIndicator__SetInfomation(partyEventPointIndicator, questRestrictionInfo, classIds, 0),
        (partyEventPointIndicator = this->fields.partyEventPointIndicator) == 0) )
  {
    sub_1C32E7C(partyEventPointIndicator);
  }
  PartyEventPointIndicator__SetTotalDropItemList(partyEventPointIndicator, 0, 0);
}


void PartyListViewIndicator__SetEventLimitEquipSetting(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  System_String_o *IsEventOnlyEquip; // x0
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  struct System_Int32_array *useLimitEquip; // x21
  il2cpp_array_size_t max_length; // x8
  System_String_o *v12; // x20
  unsigned __int64 v13; // x22
  int32_t v14; // w26
  Il2CppObject *v15; // x0
  int32_t v16; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C332CD & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&StringLiteral_8280/*"LIMIT_EQUIP_SETTING"*/);
    sub_1C32C20(&StringLiteral_811/*","*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C332CD = 1;
  }
  IsEventOnlyEquip = (System_String_o *)PartyListViewIndicator__IsEventOnlyEquip(this, method);
  if ( ((unsigned __int8)IsEventOnlyEquip & 1) != 0 )
  {
    useLimitEquip = this->fields.useLimitEquip;
    if ( !useLimitEquip )
      goto LABEL_15;
    max_length = useLimitEquip->max_length;
    v12 = (System_String_o *)StringLiteral_1/*""*/;
    if ( (int)max_length >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= (unsigned int)max_length )
          sub_1C32E84(IsEventOnlyEquip);
        if ( !v12 )
          break;
        v14 = useLimitEquip->m_Items[v13];
        if ( v12->fields._stringLength >= 1 )
          v12 = System_String__Concat_63518544(v12, (System_String_o *)StringLiteral_811/*","*/, 0);
        v16 = v14;
        v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v4, v5, v6, v7, v8, v9);
        IsEventOnlyEquip = System_String__Concat((Il2CppObject *)v12, v15, 0);
        LODWORD(max_length) = useLimitEquip->max_length;
        ++v13;
        v12 = IsEventOnlyEquip;
        if ( (__int64)v13 >= (int)max_length )
          goto LABEL_12;
      }
LABEL_15:
      sub_1C32E7C(IsEventOnlyEquip);
    }
LABEL_12:
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_8280/*"LIMIT_EQUIP_SETTING"*/, v12, 0);
    this->fields.isChkSave = 0;
  }
}


void PartyListViewIndicator__SetIndexMax(PartyListViewIndicator_o *this, int32_t max, const MethodInfo *method)
{
  UnityEngine_GameObject_o *leftObject; // x0

  PartyListViewIndicator__SetPageMax(this, max, method);
  leftObject = this->fields.leftObject;
  if ( !leftObject
    || (UnityEngine_GameObject__SetActive(leftObject, 0, 0), (leftObject = this->fields.rightObject) == 0) )
  {
    sub_1C32E7C(leftObject);
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
  const MethodInfo *v7; // x2
  __int64 v8; // x21
  struct UISprite_array *pageSpriteList; // x8
  __int64 *v10; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w21
  bool v13; // w20

  if ( (byte_4C332C4 & 1) == 0 )
  {
    sub_1C32C20(&LastUsedDeckNumberManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&OptionManager_TypeInfo);
    sub_1C32C20(&StringLiteral_20577/*"img_slider_on"*/);
    sub_1C32C20(&StringLiteral_20576/*"img_slider_off"*/);
    byte_4C332C4 = 1;
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
      v8 = 0;
      do
      {
        pageSpriteList = this->fields.pageSpriteList;
        if ( !pageSpriteList )
          goto LABEL_32;
        if ( (unsigned int)v8 >= LODWORD(pageSpriteList->max_length) )
          sub_1C32E84(AutoSelectParty);
        AutoSelectParty = pageSpriteList->m_Items[v8];
        if ( !AutoSelectParty )
          goto LABEL_32;
        if ( index == (_DWORD)v8 )
          v10 = &StringLiteral_20577/*"img_slider_on"*/;
        else
          v10 = &StringLiteral_20576/*"img_slider_off"*/;
        UISprite__set_spriteName(AutoSelectParty, (System_String_o *)*v10, 0);
      }
      while ( (int)++v8 < this->fields.pageMax );
    }
    if ( this->fields.menuKind == 9 )
      PartyListViewIndicator__SetPageIndexWaveBattle(this, index, v7);
    else
      PartyListViewIndicator__SetPageIndexDefault(this, index, v7);
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
      v13 = LastUsedDeckNumberManager__GetDeckNumber(questId, 0) - 1 == index;
    }
    else
    {
LABEL_28:
      v13 = 0;
    }
    AutoSelectParty = this->fields.lastTimeUsedSprite;
    if ( !AutoSelectParty
      || (AutoSelectParty = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)AutoSelectParty,
                                            0)) == 0 )
    {
LABEL_32:
      sub_1C32E7C(AutoSelectParty);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AutoSelectParty, v13, 0);
  }
}


void PartyListViewIndicator__SetPageIndexDefault(
        PartyListViewIndicator_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v6; // x20
  UISprite_o *v7; // x21
  System_String_o *v8; // x0
  UISprite_o *indexSprite; // x21
  System_String_o *v10; // x20
  int v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C332C6 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C32C20(&StringLiteral_22646/*"party_txt_"*/);
    sub_1C32C20(&StringLiteral_22645/*"party_bg"*/);
    byte_4C332C6 = 1;
  }
  v11 = index + 1;
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v11, 0);
  if ( !this->fields.waveNumObject )
    goto LABEL_17;
  v6 = (System_String_o *)gameObject;
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
                                             (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !gameObject )
    goto LABEL_17;
  v7 = (UISprite_o *)gameObject;
  UISprite__set_atlas((UISprite_o *)gameObject, this->fields.indexLocalAtlas, 0);
  UISprite__set_spriteName(v7, (System_String_o *)StringLiteral_22645/*"party_bg"*/, 0);
  ((void (__fastcall *)(UISprite_o *, const MethodInfo *))v7->klass->vtable._33_MakePixelPerfect.methodPtr)(
    v7,
    v7->klass->vtable._33_MakePixelPerfect.method);
  gameObject = (UnityEngine_GameObject_o *)this->fields.indexSprite;
  if ( !gameObject )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v8 = System_String__Concat_63518544((System_String_o *)StringLiteral_22646/*"party_txt_"*/, v6, 0);
  indexSprite = this->fields.indexSprite;
  v10 = v8;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetPartyOrganizationImage(indexSprite, v10, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.indexSprite;
    if ( gameObject )
    {
      UISprite__set_atlas((UISprite_o *)gameObject, this->fields.indexLocalAtlas, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.indexSprite;
      if ( gameObject )
      {
        UISprite__set_spriteName((UISprite_o *)gameObject, v10, 0);
        goto LABEL_15;
      }
    }
LABEL_17:
    sub_1C32E7C(gameObject);
  }
LABEL_15:
  gameObject = (UnityEngine_GameObject_o *)this->fields.indexSprite;
  if ( !gameObject )
    goto LABEL_17;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))gameObject->klass[2]._1.parent)(
    gameObject,
    gameObject->klass[2]._1.generic_class);
}


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

  if ( (byte_4C332C5 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C32C20(&StringLiteral_17097/*"battle_num_"*/);
    sub_1C32C20(&StringLiteral_16551/*"_glow"*/);
    sub_1C32C20(&StringLiteral_17099/*"battle_num_slash_glow"*/);
    sub_1C32C20(&StringLiteral_17092/*"battle_bg"*/);
    sub_1C32C20(&StringLiteral_17098/*"battle_num_slash"*/);
    byte_4C332C5 = 1;
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
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v9 = index + 1;
  AtlasManager__SetPartyOrganizationImage((UISprite_o *)Component_object, (System_String_o *)StringLiteral_17092/*"battle_bg"*/, 0);
  AtlasManager__SetPartyOrganizationImage(this->fields.waveNumSlashSprite, (System_String_o *)StringLiteral_17098/*"battle_num_slash"*/, 0);
  AtlasManager__SetPartyOrganizationImage(
    this->fields.waveNumSlashGlowSprite,
    (System_String_o *)StringLiteral_17099/*"battle_num_slash_glow"*/,
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
            v14 = System_String__Concat_63518544((System_String_o *)StringLiteral_17097/*"battle_num_"*/, v13, 0);
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetPartyOrganizationImage(waveMaxNumTensPlaceSprite, v14, 0);
            waveMaxNumTensPlaceGlowSprite = this->fields.waveMaxNumTensPlaceGlowSprite;
            v39 = this->fields.pageMax / 10;
            v16 = System_Int32__ToString((int32_t)&v39, 0);
            v17 = System_String__Concat_63556792(
                    (System_String_o *)StringLiteral_17097/*"battle_num_"*/,
                    v16,
                    (System_String_o *)StringLiteral_16551/*"_glow"*/,
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
                        v22 = System_String__Concat_63518544((System_String_o *)StringLiteral_17097/*"battle_num_"*/, v21, 0);
                        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        AtlasManager__SetPartyOrganizationImage(waveNumTensPlaceSprite, v22, 0);
                        waveNumTensPlaceGlowSprite = this->fields.waveNumTensPlaceGlowSprite;
                        v39 = v9 / 0xAu;
                        v24 = System_Int32__ToString((int32_t)&v39, 0);
                        v25 = System_String__Concat_63556792(
                                (System_String_o *)StringLiteral_17097/*"battle_num_"*/,
                                v24,
                                (System_String_o *)StringLiteral_16551/*"_glow"*/,
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
    sub_1C32E7C(waveNumObject);
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
  v29 = System_String__Concat_63518544((System_String_o *)StringLiteral_17097/*"battle_num_"*/, v28, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(waveNumOnesPlaceSprite, v29, 0);
  waveNumOnesPlaceGlowSprite = this->fields.waveNumOnesPlaceGlowSprite;
  v39 = v27;
  v31 = System_Int32__ToString((int32_t)&v39, 0);
  v32 = System_String__Concat_63556792(
          (System_String_o *)StringLiteral_17097/*"battle_num_"*/,
          v31,
          (System_String_o *)StringLiteral_16551/*"_glow"*/,
          0);
  AtlasManager__SetPartyOrganizationImage(waveNumOnesPlaceGlowSprite, v32, 0);
  waveMaxNumOnesPlaceSprite = this->fields.waveMaxNumOnesPlaceSprite;
  v39 = this->fields.pageMax % 10;
  v34 = System_Int32__ToString((int32_t)&v39, 0);
  v35 = System_String__Concat_63518544((System_String_o *)StringLiteral_17097/*"battle_num_"*/, v34, 0);
  AtlasManager__SetPartyOrganizationImage(waveMaxNumOnesPlaceSprite, v35, 0);
  waveMaxNumOnesPlaceGlowSprite = this->fields.waveMaxNumOnesPlaceGlowSprite;
  v39 = this->fields.pageMax % 10;
  v37 = System_Int32__ToString((int32_t)&v39, 0);
  v38 = System_String__Concat_63556792(
          (System_String_o *)StringLiteral_17097/*"battle_num_"*/,
          v37,
          (System_String_o *)StringLiteral_16551/*"_glow"*/,
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
  const MethodInfo *v16; // x3
  int monitor; // w24
  float v18; // s8
  float v19; // s9
  float v20; // s10
  CGThumbnailListItem_o *v21; // x25
  UnityEngine_Component_o *v22; // x26
  PartyListViewIndicator_o *v23; // x28
  UnityEngine_MonoBehaviour_o *m_CachedPtr; // x29
  EventDelegate_o *v25; // x27
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x5
  __int64 v30; // x6
  __int64 v31; // x7
  struct UnityEngine_GameObject_o *soloBaseObject; // x29
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  int32_t m_CancellationTokenSource; // w2
  int v37; // w8
  intptr_t v38; // x8
  _QWORD *v39; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v41; // x8
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  __int64 v44; // x22
  void *v45; // x9
  UnityEngine_Object_o *pageBaseObject; // x20
  System_Array_o *v47; // x8
  __int64 v48; // x20
  int v49; // w9
  System_String_o *v50; // x1
  int32_t pageMax; // w19
  float v52; // s8
  float v53; // s9
  __int64 v54; // x0
  UnityEngine_Transform_o *parent; // [xsp+8h] [xbp-88h]
  int v56; // [xsp+1Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4C332C3 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    sub_1C32C20(&EventDelegate_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDelegate__get_Item__);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_UISprite___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UISprite___TypeInfo);
    sub_1C32C20(&StringLiteral_20576/*"img_slider_off"*/);
    this = (PartyListViewIndicator_o *)sub_1C32C20(&StringLiteral_9875/*"OnClickTabParty"*/);
    byte_4C332C3 = 1;
  }
  p_pageSpriteList = (System_Array_o **)&v4->fields.pageSpriteList;
  pageSpriteList = (System_Array_o *)v4->fields.pageSpriteList;
  if ( !pageSpriteList )
    goto LABEL_67;
  if ( SLODWORD(pageSpriteList[1].monitor) < max )
  {
    this = (PartyListViewIndicator_o *)sub_1C32CC8(UISprite___TypeInfo, (unsigned int)max);
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
      sub_1C32E84(this);
    this = (PartyListViewIndicator_o *)v11[2].klass;
    if ( !this )
      goto LABEL_67;
    x = localPosition.fields.x;
    y = localPosition.fields.y;
    z = localPosition.fields.z;
    this = (PartyListViewIndicator_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_67;
    v58 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    if ( !*p_pageSpriteList || !v7 )
      goto LABEL_67;
    monitor = (int)(*p_pageSpriteList)[1].monitor;
    if ( monitor < SLODWORD(v7->fields.m_CancellationTokenSource) )
    {
      v18 = x - v58.fields.x;
      v19 = y - v58.fields.y;
      v20 = z - v58.fields.z;
      v21 = (CGThumbnailListItem_o *)(&v7->fields.soloBaseObject + monitor);
      while ( 1 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (PartyListViewIndicator_o *)UnityEngine_Object__Instantiate_object__51812484(
                                             klass,
                                             parent,
                                             (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_UISprite___);
        if ( !this )
          break;
        v22 = (UnityEngine_Component_o *)this;
        this = (PartyListViewIndicator_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        if ( !this )
          break;
        v59.fields.z = v20 * (float)monitor;
        v59.fields.y = v19 * (float)monitor;
        v59.fields.x = v18 * (float)monitor;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v59, 0);
        this = (PartyListViewIndicator_o *)UnityEngine_Component__GetComponent_object_(
                                             v22,
                                             (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
        if ( !this )
          break;
        v23 = this;
        this = (PartyListViewIndicator_o *)this->fields.selectNameLabel;
        if ( !this )
          break;
        this = (PartyListViewIndicator_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)this,
                                             0,
                                             (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventDelegate__get_Item__);
        if ( !this )
          break;
        m_CachedPtr = (UnityEngine_MonoBehaviour_o *)this->fields.m_CachedPtr;
        v25 = (EventDelegate_o *)sub_1C32E6C(EventDelegate_TypeInfo);
        EventDelegate___ctor_49231324(v25, m_CachedPtr, (System_String_o *)StringLiteral_9875/*"OnClickTabParty"*/, 0);
        if ( !v25 )
          break;
        this = (PartyListViewIndicator_o *)EventDelegate__get_parameters(v25, 0);
        if ( !this )
          break;
        if ( !LODWORD(this->fields.m_CancellationTokenSource) )
          goto LABEL_74;
        soloBaseObject = this->fields.soloBaseObject;
        v56 = monitor;
        this = (PartyListViewIndicator_o *)j_il2cpp_value_box_0(int_TypeInfo, &v56, v26, v27, v28, v29, v30, v31);
        if ( !soloBaseObject )
          break;
        soloBaseObject[1].monitor = this;
        sub_1C32BC4((CGThumbnailListItem_o *)&soloBaseObject[1].monitor, (int32_t)this, v33, v34);
        this = (PartyListViewIndicator_o *)v23->fields.selectNameLabel;
        if ( !this )
          break;
        m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
        v37 = HIDWORD(this->fields.m_CancellationTokenSource) + 1;
        LODWORD(this->fields.m_CancellationTokenSource) = 0;
        HIDWORD(this->fields.m_CancellationTokenSource) = v37;
        if ( m_CancellationTokenSource >= 1 )
        {
          System_Array__Clear((System_Array_o *)this->fields.m_CachedPtr, 0, m_CancellationTokenSource, 0);
          this = (PartyListViewIndicator_o *)v23->fields.selectNameLabel;
          if ( !this )
            break;
        }
        v38 = this->fields.m_CachedPtr;
        v39 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v38 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v38 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v25,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = v38 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v41 + 32) = v25;
          sub_1C32BC4((CGThumbnailListItem_o *)(v41 + 32), (int32_t)v25, m_CancellationTokenSource, v35);
        }
        this = (PartyListViewIndicator_o *)sub_1C32D5C(v22, v7->klass->_1.element_class);
        if ( !this )
        {
          v54 = sub_1C32EA0();
          sub_1C32D48(v54, 0);
        }
        if ( (unsigned int)monitor >= LODWORD(v7->fields.m_CancellationTokenSource) )
          goto LABEL_74;
        v21->klass = (CGThumbnailListItem_c *)v22;
        sub_1C32BC4(v21, (int32_t)v22, v42, v43);
        ++monitor;
        v21 = (CGThumbnailListItem_o *)((char *)v21 + 8);
        if ( monitor >= SLODWORD(v7->fields.m_CancellationTokenSource) )
          goto LABEL_43;
      }
LABEL_67:
      sub_1C32E7C(this);
    }
LABEL_43:
    *p_pageSpriteList = (System_Array_o *)v7;
    sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.pageSpriteList, (int32_t)v7, v15, v16);
    pageSpriteList = *p_pageSpriteList;
    if ( !*p_pageSpriteList )
      goto LABEL_67;
  }
  v44 = 0;
  while ( 1 )
  {
    v45 = pageSpriteList[1].monitor;
    if ( (int)v44 >= (int)v45 )
      break;
    if ( (unsigned int)v44 >= (unsigned int)v45 )
      goto LABEL_74;
    this = (PartyListViewIndicator_o *)*((_QWORD *)&pageSpriteList[2].klass + v44);
    if ( this )
    {
      this = (PartyListViewIndicator_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (int)v44 < max, 0);
        pageSpriteList = *p_pageSpriteList;
        ++v44;
        if ( *p_pageSpriteList )
          continue;
      }
    }
    goto LABEL_67;
  }
  if ( (int)v45 >= max )
    LODWORD(v45) = max;
  v4->fields.pageMax = (int)v45;
  v4->fields.pageIndex = -1;
  if ( (int)v45 <= 1 )
    v4->fields.pageMax = 0;
  pageBaseObject = (UnityEngine_Object_o *)v4->fields.pageBaseObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PartyListViewIndicator_o *)UnityEngine_Object__op_Inequality(pageBaseObject, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v47 = *p_pageSpriteList;
    if ( !*p_pageSpriteList )
      goto LABEL_67;
    v48 = 0;
    while ( 1 )
    {
      v49 = (int)v47[1].monitor;
      if ( (int)v48 >= v49 )
        break;
      if ( (unsigned int)v48 >= v49 )
        goto LABEL_74;
      this = (PartyListViewIndicator_o *)*((_QWORD *)&v47[2].klass + v48);
      if ( this )
      {
        v50 = (int)v48 >= v4->fields.pageMax ? 0LL : (System_String_o *)StringLiteral_20576/*"img_slider_off"*/;
        UISprite__set_spriteName((UISprite_o *)this, v50, 0);
        v47 = (System_Array_o *)v4->fields.pageSpriteList;
        ++v48;
        if ( v47 )
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
    v60 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    this = (PartyListViewIndicator_o *)v4->fields.pageBaseObject;
    if ( !this )
      goto LABEL_67;
    pageMax = v4->fields.pageMax;
    v52 = v60.fields.y;
    v53 = v60.fields.z;
    this = (PartyListViewIndicator_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !this )
      goto LABEL_67;
    v61.fields.x = (float)(-10 * pageMax + 10);
    v61.fields.y = v52;
    v61.fields.z = v53;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v61, 0);
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
  int32_t maxCost; // w21
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t TotalCostRestriction; // w22
  bool v8; // w21
  System_String_o *v9; // x21
  UILabel_o *maxCostLabel; // x22
  System_String_o *v11; // x0
  UILabel_o *splitCostLabel; // x22
  System_String_o *v13; // x0
  int32_t cost; // w8
  UILabel_o *selectCostLabel; // x20
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  int32_t v18; // [xsp+8h] [xbp-38h] BYREF
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4C332C8 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_10218/*"PARTY_ORGANIZATION_COST_SPLIT"*/);
    sub_1C32C20(&StringLiteral_10216/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/);
    sub_1C32C20(&StringLiteral_10217/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/);
    sub_1C32C20(&StringLiteral_10215/*"PARTY_ORGANIZATION_COST_COLOR"*/);
    this = (PartyListViewIndicator_o *)sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C332C8 = 1;
  }
  v18 = 0;
  if ( !partyItem )
LABEL_22:
    sub_1C32E7C(this);
  maxCost = partyItem->fields.maxCost;
  v19 = maxCost;
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    TotalCostRestriction = QuestRestrictionInfo__GetTotalCostRestriction(questRestrictionInfo, 0);
  else
    TotalCostRestriction = 0;
  v8 = TotalCostRestriction != 0 && maxCost > TotalCostRestriction;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v8 )
      goto LABEL_9;
LABEL_11:
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_10215/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0);
    goto LABEL_12;
  }
  if ( !v8 )
    goto LABEL_11;
LABEL_9:
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_10217/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0);
  v19 = TotalCostRestriction;
LABEL_12:
  maxCostLabel = v4->fields.maxCostLabel;
  v11 = System_Int32__ToString((int32_t)&v19, 0);
  this = (PartyListViewIndicator_o *)System_String__Concat_63518544(v9, v11, 0);
  if ( !maxCostLabel )
    goto LABEL_22;
  UILabel__set_text(maxCostLabel, (System_String_o *)this, 0);
  splitCostLabel = v4->fields.splitCostLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_10218/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0);
  this = (PartyListViewIndicator_o *)System_String__Concat_63518544(v9, v13, 0);
  if ( !splitCostLabel )
    goto LABEL_22;
  UILabel__set_text(splitCostLabel, (System_String_o *)this, 0);
  cost = partyItem->fields.cost;
  selectCostLabel = v4->fields.selectCostLabel;
  if ( cost > v19 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_10216/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0);
    cost = partyItem->fields.cost;
    v9 = v16;
  }
  v18 = cost;
  v17 = System_Int32__ToString((int32_t)&v18, 0);
  this = (PartyListViewIndicator_o *)System_String__Concat_63518544(v9, v17, 0);
  if ( !selectCostLabel )
    goto LABEL_22;
  UILabel__set_text(selectCostLabel, (System_String_o *)this, 0);
}