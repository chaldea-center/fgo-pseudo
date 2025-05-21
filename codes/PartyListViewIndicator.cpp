void __fastcall PartyListViewIndicator___ctor(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct System_Int32_array *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B4047A & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, method);
    sub_1BDB878(&int___TypeInfo, v3);
    byte_4B4047A = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct System_Int32_array *)sub_1BDB920(int___TypeInfo, (unsigned int)(v4->static_fields->DeckMax + 1));
  this->fields.useLimitEquip = v5;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.useLimitEquip, (int32_t)v5, v6, v7);
  __asm { FMOV            V1.4S, #1.0 }
  this->fields.isScrollEnabled = 1;
  this->fields.ICON_NORMAL_COLOR = _Q1;
  this->fields.ICON_MASK_COLOR = (struct UnityEngine_Color_o)xmmword_BEA6E0;
  ListViewIndicator___ctor((ListViewIndicator_o *)this, 0LL);
}


void __fastcall PartyListViewIndicator__Awake(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct UISprite_o *indexSprite; // x8
  struct UIAtlas_o *mAtlas; // x1

  indexSprite = this->fields.indexSprite;
  if ( !indexSprite )
    sub_1BDBAD4(this, method);
  mAtlas = indexSprite->fields.mAtlas;
  this->fields.indexLocalAtlas = mAtlas;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.indexLocalAtlas, (int32_t)mAtlas, v2, v3);
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
    sub_1BDBAD4(limitMasterFormationButton, method);
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

  if ( (byte_4B40479 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, *(_QWORD *)&bonusVal);
    byte_4B40479 = 1;
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
      sub_1BDBAD4(gameObject, v7);
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
  __int64 v24; // x2
  DataManager_o *v25; // x22
  unsigned __int64 v26; // x25
  struct System_Int32_array *useLimitEquip; // x28
  UISprite_o *limitEquipFixSprite; // x19
  struct System_Int32_array *v29; // x9
  char *v30; // x8
  int v31; // w21
  Il2CppObject *Component_object; // x20
  EventEquipSkillReleaseEntity_o *outEnt; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B40472 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, partyItem);
    sub_1BDB878(&BalanceConfig_TypeInfo, v7);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_UISprite___, v8);
    sub_1BDB878(&Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___, v9);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BDB878(&StringLiteral_19192/*"event_emblem_frame"*/, v11);
    sub_1BDB878(&StringLiteral_20209/*"icon_equip_fixation"*/, v12);
    sub_1BDB878(&StringLiteral_8270/*"LIMIT_EQUIP_SETTING"*/, v13);
    sub_1BDB878(&StringLiteral_17531/*"btn_skill_off"*/, v14);
    sub_1BDB878(&StringLiteral_19191/*"event_emblem_dim"*/, v15);
    sub_1BDB878(&StringLiteral_17532/*"btn_skill_on"*/, v16);
    byte_4B40472 = 1;
  }
  outEnt = 0LL;
  if ( !PartyListViewIndicator__IsEventOnlyEquip(this, (const MethodInfo *)partyItem) )
    goto LABEL_15;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
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
  ItemIconComponent__SetEquipItem((ItemIconComponent_o *)Instance, outEnt->fields.overwriteEquipIconId, 0LL);
  masterEquipBackSprite = this->fields.masterEquipBackSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(masterEquipBackSprite, (System_String_o *)StringLiteral_19191/*"event_emblem_dim"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.masterEquipFrameSprite, (System_String_o *)StringLiteral_19192/*"event_emblem_frame"*/, 0LL);
  if ( !this->fields.isChkSave )
  {
    if ( (v21 & 1) == 0 )
    {
      Instance = (DataManager_o *)UnityEngine_PlayerPrefs__GetString_70242896(
                                    (System_String_o *)StringLiteral_8270/*"LIMIT_EQUIP_SETTING"*/,
                                    0LL);
      if ( !Instance )
        goto LABEL_65;
      if ( Instance->fields.m_CachedPtr >= 1 )
      {
        Instance = (DataManager_o *)System_String__Split((System_String_o *)Instance, 0x2Cu, 0, 0LL);
        if ( !Instance )
          goto LABEL_65;
        v25 = Instance;
        if ( SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
        {
          v26 = 0LL;
          do
          {
            Instance = (DataManager_o *)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = (DataManager_o *)BalanceConfig_TypeInfo;
            }
            if ( (__int64)v26 > *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 164LL) )
              break;
            if ( v26 >= LODWORD(v25->fields.m_CancellationTokenSource) )
              goto LABEL_66;
            useLimitEquip = this->fields.useLimitEquip;
            Instance = (DataManager_o *)System_Int32__Parse(*((System_String_o **)&v25->fields._DispLog + v26), 0LL);
            if ( !useLimitEquip )
              goto LABEL_65;
            if ( v26 >= useLimitEquip->max_length )
              goto LABEL_66;
            useLimitEquip->m_Items[++v26] = (int)Instance;
          }
          while ( (__int64)v26 < SLODWORD(v25->fields.m_CancellationTokenSource) );
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
    sub_1BDBAD4(Instance, v17);
  }
  if ( (v21 & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    v29 = this->fields.useLimitEquip;
    v30 = (char *)v29 + 4 * (int)index;
    if ( isChng )
    {
      if ( !v29 )
        goto LABEL_65;
      if ( index >= v29->max_length )
        goto LABEL_66;
      *((_DWORD *)v30 + 8) = *((_DWORD *)v30 + 8) == 0;
    }
    else if ( !v29 )
    {
      goto LABEL_65;
    }
    if ( index < v29->max_length )
    {
      Instance = (DataManager_o *)this->fields.limitMasterFormationButton;
      if ( Instance )
      {
        v31 = *((_DWORD *)v30 + 8);
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)Instance,
                             (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( v31 )
        {
          AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_17532/*"btn_skill_on"*/, 0LL);
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
          AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_17531/*"btn_skill_off"*/, 0LL);
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
    sub_1BDBADC(Instance, v17, v24);
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
  AtlasManager__SetEventUI(limitEquipFixSprite, (System_String_o *)StringLiteral_20209/*"icon_equip_fixation"*/, 0LL);
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
  UnityEngine_GameObject_o *soloBaseObject; // x0
  UISprite_o *v18; // x21
  bool v19; // w1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  EventPartyMargeUpValInfo_o *v24; // x1
  const MethodInfo *v25; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestRestrictionInfo_o *v27; // x0
  int32_t servantNumMax; // w1
  UISprite_o *v29; // x21
  struct QuestRestrictionInfo_o *v30; // x8
  BalanceConfig_c *v31; // x0
  UICommonButton_o *masterEquipButton; // x21
  struct QuestRestrictionInfo_o *v33; // x8
  struct QuestRestrictionInfo_o *v34; // x8
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v38; // x3
  __int64 v39; // x2
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  __int64 v42; // x9
  int32_t v43; // w21
  ServantEntity_array *SvtEntityList; // x22
  const MethodInfo *v45; // x1
  System_String_array *SvtNameList; // x23
  const MethodInfo *v47; // x1
  System_Boolean_array *IsFollowerList; // x24
  EventPartyMargeUpValInfo_o *v49; // x25
  struct EventPartyMargeUpValInfo_o **p_eventMargeUpValInfo; // x21
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x3
  EventUpValInfo_array *v54; // x8
  unsigned __int64 v55; // x20
  unsigned __int64 max_length; // x9
  EventPartyMargeUpValInfo_o *v57; // x22
  UILabel_o *selectNameLabel; // x21
  System_String_o *v59; // x0
  EventUpValInfo_array *v60; // [xsp+0h] [xbp-70h] BYREF
  int32_t genderImageId; // [xsp+Ch] [xbp-64h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *equipName; // [xsp+18h] [xbp-58h] BYREF
  int32_t maxLv; // [xsp+24h] [xbp-4Ch] BYREF
  int32_t condUsrLv[2]; // [xsp+28h] [xbp-48h] BYREF

  v3 = partyItem;
  if ( (byte_4B40470 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, partyItem);
    sub_1BDB878(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v5);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserEquipMaster___, v6);
    sub_1BDB878(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v7);
    sub_1BDB878(&EventPartyMargeUpValInfo_TypeInfo, v8);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v9);
    sub_1BDB878(&LocalizationManager_TypeInfo, v10);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BDB878(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    sub_1BDB878(&StringLiteral_10256/*"PARTY_ORGANIZATION_NAME"*/, v13);
    sub_1BDB878(&StringLiteral_23594/*"solo_bg"*/, v14);
    sub_1BDB878(&StringLiteral_23624/*"specialparty_bg"*/, v15);
    sub_1BDB878(&StringLiteral_1/*""*/, v16);
    byte_4B40470 = 1;
  }
  *(_QWORD *)condUsrLv = 0LL;
  maxLv = 0;
  detail = 0LL;
  equipName = 0LL;
  genderImageId = 0;
  v60 = 0LL;
  if ( v3 )
  {
    switch ( this->fields.menuKind )
    {
      case 1:
      case 3:
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_90;
        soloBaseObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       soloBaseObject,
                                                       (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !this->fields.soloBaseObject )
          goto LABEL_90;
        v18 = (UISprite_o *)soloBaseObject;
        UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0LL);
        if ( !v18 )
          goto LABEL_90;
        UISprite__set_spriteName(v18, (System_String_o *)StringLiteral_23594/*"solo_bg"*/, 0LL);
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v18->klass->vtable._33_MakePixelPerfect.method)(
          v18,
          v18->klass->vtable._34_get_minWidth.methodPtr);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.indexBaseObject;
        if ( !soloBaseObject )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.selectNameBaseObject;
        if ( !soloBaseObject )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.costBaseObject;
        if ( !soloBaseObject )
          goto LABEL_90;
        v19 = 0;
        goto LABEL_69;
      case 2:
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_90;
        soloBaseObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       soloBaseObject,
                                                       (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !this->fields.soloBaseObject )
          goto LABEL_90;
        v29 = (UISprite_o *)soloBaseObject;
        UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0LL);
        if ( !v29 )
          goto LABEL_90;
        UISprite__set_spriteName(v29, (System_String_o *)StringLiteral_23624/*"specialparty_bg"*/, 0LL);
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v29->klass->vtable._33_MakePixelPerfect.method)(
          v29,
          v29->klass->vtable._34_get_minWidth.methodPtr);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        goto LABEL_64;
      case 4:
      case 5:
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
        questRestrictionInfo = this->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_64;
        goto LABEL_35;
      case 6:
      case 7:
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
        v27 = this->fields.questRestrictionInfo;
        if ( !v27 )
          goto LABEL_64;
        soloBaseObject = (UnityEngine_GameObject_o *)QuestRestrictionInfo__IsServantNum(v27, 0LL);
        if ( ((unsigned __int8)soloBaseObject & 1) != 0 )
        {
          questRestrictionInfo = this->fields.questRestrictionInfo;
          if ( !questRestrictionInfo )
            goto LABEL_90;
LABEL_35:
          servantNumMax = questRestrictionInfo->fields.servantNumMax;
        }
        else
        {
          soloBaseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !soloBaseObject )
            goto LABEL_90;
          soloBaseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)soloBaseObject,
                                                         (const MethodInfo_303395C *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
          v33 = this->fields.questRestrictionInfo;
          if ( !v33 )
            goto LABEL_90;
          if ( !soloBaseObject )
            goto LABEL_90;
          soloBaseObject = (UnityEngine_GameObject_o *)NpcFollowerMaster__GetQuestFollowerList(
                                                         (NpcFollowerMaster_o *)soloBaseObject,
                                                         v33->fields.questId,
                                                         v33->fields.questPhase,
                                                         0LL);
          v34 = this->fields.questRestrictionInfo;
          if ( !v34 || !soloBaseObject )
            goto LABEL_90;
          servantNumMax = v34->fields.myServantNumMax + LODWORD(soloBaseObject[1].klass);
        }
        goto LABEL_63;
      case 9:
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.indexBaseObject;
        if ( !soloBaseObject )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
        soloBaseObject = this->fields.selectNameBaseObject;
        if ( !soloBaseObject )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.costBaseObject;
        if ( !soloBaseObject )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
        soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEventPointIndicator;
        if ( !soloBaseObject )
          goto LABEL_90;
        soloBaseObject = (UnityEngine_GameObject_o *)PartyEventPointIndicator__SetTrendDisp(
                                                       (PartyEventPointIndicator_o *)soloBaseObject,
                                                       v3->fields.trendDispWaveBattleEnemyClassIds,
                                                       0LL);
        masterEquipButton = this->fields.masterEquipButton;
        if ( v3->fields._IsWaveBattleRestart_k__BackingField )
        {
          soloBaseObject = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !soloBaseObject )
            goto LABEL_90;
          partyItem = (PartyListViewItem_o *)(LODWORD(soloBaseObject[5].klass) == 1);
        }
        else
        {
          partyItem = (PartyListViewItem_o *)(&dword_0 + 1);
        }
        if ( !masterEquipButton )
          goto LABEL_90;
        UICommonButton__SetEnable(masterEquipButton, (bool)partyItem, 0LL);
        soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partySwapButton;
        if ( !soloBaseObject )
          goto LABEL_90;
        UICommonButton__SetEnable((UICommonButton_o *)soloBaseObject, !v3->fields._IsClearedWave_k__BackingField, 0LL);
        soloBaseObject = (UnityEngine_GameObject_o *)this->fields.autoOrganizationButton;
        if ( !soloBaseObject )
          goto LABEL_90;
        UICommonButton__SetEnable((UICommonButton_o *)soloBaseObject, !v3->fields._IsClearedWave_k__BackingField, 0LL);
        soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEditButton;
        if ( !soloBaseObject )
          goto LABEL_90;
        UICommonButton__SetEnable((UICommonButton_o *)soloBaseObject, !v3->fields._IsClearedWave_k__BackingField, 0LL);
        goto LABEL_70;
      default:
        v30 = this->fields.questRestrictionInfo;
        if ( v30 && v30->fields.eventDeckNum >= 1 )
        {
          soloBaseObject = this->fields.soloBaseObject;
          if ( !soloBaseObject )
            goto LABEL_90;
          UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
          soloBaseObject = this->fields.organizationNumObject;
          if ( !soloBaseObject )
            goto LABEL_90;
          UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
          v31 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v31 = BalanceConfig_TypeInfo;
          }
          servantNumMax = v31->static_fields->DeckMemberMax;
LABEL_63:
          PartyListViewIndicator__SetEventDeckPartyName(this, servantNumMax, v25);
LABEL_64:
          soloBaseObject = this->fields.indexBaseObject;
          if ( !soloBaseObject
            || (UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL),
                (soloBaseObject = this->fields.selectNameBaseObject) == 0LL) )
          {
LABEL_90:
            sub_1BDBAD4(soloBaseObject, partyItem);
          }
          UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        }
        else
        {
          soloBaseObject = this->fields.soloBaseObject;
          if ( !soloBaseObject )
            goto LABEL_90;
          UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
          soloBaseObject = this->fields.organizationNumObject;
          if ( !soloBaseObject )
            goto LABEL_90;
          UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
          soloBaseObject = this->fields.indexBaseObject;
          if ( !soloBaseObject )
            goto LABEL_90;
          UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
          soloBaseObject = this->fields.selectNameBaseObject;
          if ( !soloBaseObject )
            goto LABEL_90;
          UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
          selectNameLabel = this->fields.selectNameLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v59 = LocalizationManager__Get((System_String_o *)StringLiteral_10256/*"PARTY_ORGANIZATION_NAME"*/, 0LL);
          soloBaseObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                         v59,
                                                         (Il2CppObject *)v3->fields.deckName,
                                                         0LL);
          if ( !selectNameLabel )
            goto LABEL_90;
          UILabel__set_text(selectNameLabel, (System_String_o *)soloBaseObject, 0LL);
        }
        soloBaseObject = this->fields.costBaseObject;
        if ( soloBaseObject )
        {
          v19 = 1;
LABEL_69:
          UnityEngine_GameObject__SetActive(soloBaseObject, v19, 0LL);
LABEL_70:
          PartyListViewIndicator__UpdateCost(this, v3, v35);
          PartyListViewItem__CheckRestriction(v3, v36);
          soloBaseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( soloBaseObject )
          {
            soloBaseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)soloBaseObject,
                                                           (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserEquipMaster___);
            if ( soloBaseObject )
            {
              Entity = DataMasterBase_object__object__long___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)soloBaseObject,
                         v3->fields.userEquipId,
                         (const MethodInfo_32E4398 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
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
                  goto LABEL_90;
                ItemIconComponent__SetEquipItem((ItemIconComponent_o *)soloBaseObject, genderImageId, 0LL);
                soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipIcon2;
                if ( !soloBaseObject )
                  goto LABEL_90;
                ItemIconComponent__SetEquipItem((ItemIconComponent_o *)soloBaseObject, genderImageId, 0LL);
              }
              PartyListViewIndicator__DrawEventLimitEquip(this, v3, 0, v38);
              setupInfo = this->fields.setupInfo;
              if ( !setupInfo )
                goto LABEL_81;
              eventIdList = setupInfo->fields.eventIdList;
              if ( !eventIdList )
                goto LABEL_90;
              v42 = *(_QWORD *)&eventIdList->max_length;
              if ( v42 )
              {
                if ( !(_DWORD)v42 )
LABEL_108:
                  sub_1BDBADC(soloBaseObject, partyItem, v39);
                v43 = eventIdList->m_Items[1];
              }
              else
              {
LABEL_81:
                v43 = 0;
              }
              condUsrLv[1] = v43;
              SvtEntityList = PartyListViewItem__GetSvtEntityList(v3, (const MethodInfo *)partyItem);
              SvtNameList = PartyListViewItem__GetSvtNameList(v3, v45);
              IsFollowerList = PartyListViewItem__GetIsFollowerList(v3, v47);
              v49 = (EventPartyMargeUpValInfo_o *)sub_1BDBAC4(EventPartyMargeUpValInfo_TypeInfo);
              EventPartyMargeUpValInfo___ctor(v49, v43, SvtEntityList, SvtNameList, IsFollowerList, 0LL);
              p_eventMargeUpValInfo = &this->fields.eventMargeUpValInfo;
              this->fields.eventMargeUpValInfo = v49;
              sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.eventMargeUpValInfo, (int32_t)v49, v51, v52);
              soloBaseObject = (UnityEngine_GameObject_o *)PartyListViewItem__GetEventUpVal(
                                                             v3,
                                                             &condUsrLv[1],
                                                             &v60,
                                                             v53);
              v54 = v60;
              if ( v60 )
              {
                v55 = 0LL;
                while ( 1 )
                {
                  max_length = v54->max_length;
                  if ( (__int64)v55 >= (int)max_length )
                    break;
                  if ( v55 >= max_length )
                    goto LABEL_108;
                  soloBaseObject = (UnityEngine_GameObject_o *)v54->m_Items[v55];
                  if ( soloBaseObject )
                  {
                    v57 = *p_eventMargeUpValInfo;
                    soloBaseObject = (UnityEngine_GameObject_o *)EventUpValInfo__GetDropItemList(
                                                                   (EventUpValInfo_o *)soloBaseObject,
                                                                   v55,
                                                                   0LL);
                    if ( !v57 )
                      goto LABEL_90;
                    EventPartyMargeUpValInfo__Add(v57, (EventDropItemUpValInfo_array *)soloBaseObject, 0LL);
                    v54 = v60;
                  }
                  ++v55;
                  if ( !v54 )
                    goto LABEL_90;
                }
                soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEventPointIndicator;
                if ( soloBaseObject )
                {
                  v24 = *p_eventMargeUpValInfo;
                  goto LABEL_93;
                }
              }
            }
          }
        }
        goto LABEL_90;
    }
  }
  soloBaseObject = this->fields.soloBaseObject;
  if ( !soloBaseObject )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
  soloBaseObject = this->fields.organizationNumObject;
  if ( !soloBaseObject )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
  soloBaseObject = this->fields.indexBaseObject;
  if ( !soloBaseObject )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
  soloBaseObject = this->fields.selectNameBaseObject;
  if ( !soloBaseObject )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
  soloBaseObject = this->fields.costBaseObject;
  if ( !soloBaseObject )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.selectNameLabel;
  if ( !soloBaseObject )
    goto LABEL_90;
  UILabel__set_text((UILabel_o *)soloBaseObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.maxCostLabel;
  if ( !soloBaseObject )
    goto LABEL_90;
  UILabel__set_text((UILabel_o *)soloBaseObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.splitCostLabel;
  if ( !soloBaseObject )
    goto LABEL_90;
  UILabel__set_text((UILabel_o *)soloBaseObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.selectCostLabel;
  if ( !soloBaseObject )
    goto LABEL_90;
  UILabel__set_text((UILabel_o *)soloBaseObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipIcon1;
  if ( !soloBaseObject )
    goto LABEL_90;
  ItemIconComponent__Clear((ItemIconComponent_o *)soloBaseObject, 0LL);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipIcon2;
  if ( !soloBaseObject )
    goto LABEL_90;
  ItemIconComponent__Clear((ItemIconComponent_o *)soloBaseObject, 0LL);
  this->fields.questRestrictionInfo = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, 0, v20, v21);
  this->fields.eventMargeUpValInfo = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.eventMargeUpValInfo, 0, v22, v23);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEventPointIndicator;
  if ( !soloBaseObject )
    goto LABEL_90;
  v24 = 0LL;
LABEL_93:
  PartyEventPointIndicator__SetTotalDropItemList((PartyEventPointIndicator_o *)soloBaseObject, v24, 0LL);
}


bool __fastcall PartyListViewIndicator__IsEventOnlyEquip(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B40478 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1BDB878(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B40478 = 1;
  }
  entity = 0LL;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (questRestrictionInfo = this->fields.questRestrictionInfo) == 0LL)
    || !Instance )
  {
LABEL_12:
    sub_1BDBAD4(Instance, v6);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          questRestrictionInfo->fields.eventId,
          (const MethodInfo_32E1E88 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
  __int64 v13; // x2
  struct System_Int32_array *useLimitEquip; // x8
  EventEquipSkillReleaseEntity_o *outEnt; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B40477 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, partyItem);
    sub_1BDB878(&Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B40477 = 1;
  }
  outEnt = 0LL;
  if ( !PartyListViewIndicator__IsEventOnlyEquip(this, (const MethodInfo *)partyItem) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
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
    sub_1BDBAD4(Instance, v8);
  if ( DeckMax >= useLimitEquip->max_length )
    sub_1BDBADC(Instance, v8, v13);
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

  if ( (byte_4B40473 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    sub_1BDB878(&Method_PartyListViewIndicator_OnClickLeft__, v3);
    byte_4B40473 = 1;
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
        v7 = (_QWORD *)sub_1BDB890(Method_PartyListViewIndicator_OnClickLeft__);
      v8 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v7, v7[4]);
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
        v11 = (_QWORD *)sub_1BDB890(Method_PartyListViewIndicator_OnClickLeft__);
      v12 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 7, 0, 0LL);
      v6 = this->fields.manager;
      if ( v6 )
      {
        pageIndex = this->fields.pageMax;
        goto LABEL_20;
      }
LABEL_22:
      sub_1BDBAD4(v6, v5);
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

  if ( (byte_4B40474 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    sub_1BDB878(&Method_PartyListViewIndicator_OnClickRight__, v3);
    byte_4B40474 = 1;
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
        v8 = (_QWORD *)sub_1BDB890(Method_PartyListViewIndicator_OnClickRight__);
      v9 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v8, v8[4]);
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
        v12 = (_QWORD *)sub_1BDB890(Method_PartyListViewIndicator_OnClickRight__);
      v13 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 7, 0, 0LL);
      v6 = this->fields.manager;
      if ( v6 )
      {
        v10 = 0;
        goto LABEL_21;
      }
LABEL_23:
      sub_1BDBAD4(v6, v5);
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

  if ( (byte_4B4046D & 1) == 0 )
  {
    sub_1BDB878(&PartyListViewItem_TypeInfo, manager);
    byte_4B4046D = 1;
  }
  this->fields.manager = manager;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields.manager,
    (int32_t)manager,
    (int32_t)item,
    (const MethodInfo *)isTop);
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
    sub_1BDBAD4(leftObject, v14);
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

  if ( (byte_4B40475 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_UISprite___, *(_QWORD *)&servantNum);
    sub_1BDB878(&StringLiteral_21253/*"limited_bg"*/, v5);
    sub_1BDB878(&StringLiteral_23594/*"solo_bg"*/, v6);
    sub_1BDB878(&StringLiteral_23707/*"startingonly_bg"*/, v7);
    sub_1BDB878(&StringLiteral_22633/*"pair_bg"*/, v8);
    byte_4B40475 = 1;
  }
  organizationNumObject = this->fields.organizationNumObject;
  if ( !organizationNumObject )
LABEL_19:
    sub_1BDBAD4(organizationNumObject, *(_QWORD *)&servantNum);
  organizationNumObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        organizationNumObject,
                                                        (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
                                                            (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
      UISprite__set_spriteName(v13, (System_String_o *)StringLiteral_23594/*"solo_bg"*/, 0LL);
      organizationNumObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v13->klass->vtable._33_MakePixelPerfect.method)(
                                                            v13,
                                                            v13->klass->vtable._34_get_minWidth.methodPtr);
      if ( !v11 )
        goto LABEL_19;
      goto LABEL_18;
    case 1:
      if ( !organizationNumObject )
        goto LABEL_19;
      v12 = &StringLiteral_22633/*"pair_bg"*/;
      break;
    case 2:
      if ( !organizationNumObject )
        goto LABEL_19;
      v12 = &StringLiteral_23707/*"startingonly_bg"*/;
      break;
    default:
      if ( !organizationNumObject )
        goto LABEL_19;
      v12 = &StringLiteral_21253/*"limited_bg"*/;
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
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x1
  PartyEventPointIndicator_o *partyEventPointIndicator; // x0

  this->fields.setupInfo = setupInfo;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields.setupInfo,
    (int32_t)setupInfo,
    (int32_t)questRestrictionInfo,
    (const MethodInfo *)classIds);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v8, v9);
  this->fields.eventMargeUpValInfo = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.eventMargeUpValInfo, 0, v10, v11);
  partyEventPointIndicator = this->fields.partyEventPointIndicator;
  if ( !partyEventPointIndicator
    || (PartyEventPointIndicator__SetInfomation(partyEventPointIndicator, questRestrictionInfo, classIds, 0LL),
        (partyEventPointIndicator = this->fields.partyEventPointIndicator) == 0LL) )
  {
    sub_1BDBAD4(partyEventPointIndicator, v12);
  }
  PartyEventPointIndicator__SetTotalDropItemList(partyEventPointIndicator, 0LL, 0LL);
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

  if ( (byte_4B40476 & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, method);
    sub_1BDB878(&StringLiteral_8270/*"LIMIT_EQUIP_SETTING"*/, v3);
    sub_1BDB878(&StringLiteral_820/*","*/, v4);
    sub_1BDB878(&StringLiteral_1/*""*/, v5);
    byte_4B40476 = 1;
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
          sub_1BDBADC(IsEventOnlyEquip, v7, v8);
        if ( !v13 )
          break;
        v15 = useLimitEquip->m_Items[v14 + 1];
        if ( v13->fields._stringLength >= 1 )
          v13 = System_String__Concat_62572260(v13, (System_String_o *)StringLiteral_820/*","*/, 0LL);
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
      sub_1BDBAD4(IsEventOnlyEquip, v7);
    }
LABEL_12:
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_8270/*"LIMIT_EQUIP_SETTING"*/, v13, 0LL);
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
    sub_1BDBAD4(leftObject, v4);
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
  __int64 v21; // x2
  __int64 v22; // x21
  struct UISprite_array *pageSpriteList; // x8
  __int64 *v24; // x8
  int v25; // w24
  struct UnityEngine_GameObject_o *waveNumObject; // x8
  Il2CppObject *Component_object; // x21
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  System_String_o *v30; // x21
  UISprite_o *v31; // x22
  System_String_o *v32; // x0
  UISprite_o *indexSprite; // x22
  System_String_o *v34; // x21
  UISprite_o *waveMaxNumTensPlaceSprite; // x22
  System_String_o *v36; // x0
  System_String_o *v37; // x23
  UISprite_o *waveMaxNumTensPlaceGlowSprite; // x22
  System_String_o *v39; // x0
  System_String_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  int32_t v42; // w1
  UISprite_o *waveNumTensPlaceSprite; // x22
  System_String_o *v44; // x0
  System_String_o *v45; // x23
  UISprite_o *waveNumTensPlaceGlowSprite; // x22
  System_String_o *v47; // x0
  System_String_o *v48; // x0
  UISprite_o *waveNumOnesPlaceSprite; // x21
  System_String_o *v50; // x0
  System_String_o *v51; // x22
  UISprite_o *waveNumOnesPlaceGlowSprite; // x21
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  UISprite_o *waveMaxNumOnesPlaceSprite; // x21
  System_String_o *v56; // x0
  System_String_o *v57; // x0
  UISprite_o *waveMaxNumOnesPlaceGlowSprite; // x21
  System_String_o *v59; // x0
  System_String_o *v60; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w21
  bool v63; // w20
  int v64; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B4046F & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, *(_QWORD *)&index);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v5);
    sub_1BDB878(&LastUsedDeckNumberManager_TypeInfo, v6);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v7);
    sub_1BDB878(&OptionManager_TypeInfo, v8);
    sub_1BDB878(&StringLiteral_17113/*"battle_num_"*/, v9);
    sub_1BDB878(&StringLiteral_20588/*"img_slider_on"*/, v10);
    sub_1BDB878(&StringLiteral_16532/*"_glow"*/, v11);
    sub_1BDB878(&StringLiteral_17115/*"battle_num_slash_glow"*/, v12);
    sub_1BDB878(&StringLiteral_22662/*"party_txt_"*/, v13);
    sub_1BDB878(&StringLiteral_17108/*"battle_bg"*/, v14);
    sub_1BDB878(&StringLiteral_20587/*"img_slider_off"*/, v15);
    sub_1BDB878(&StringLiteral_17114/*"battle_num_slash"*/, v16);
    sub_1BDB878(&StringLiteral_22661/*"party_bg"*/, v17);
    byte_4B4046F = 1;
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
      v22 = 0LL;
      do
      {
        pageSpriteList = this->fields.pageSpriteList;
        if ( !pageSpriteList )
          goto LABEL_96;
        if ( (unsigned int)v22 >= pageSpriteList->max_length )
          sub_1BDBADC(gameObject, v20, v21);
        gameObject = pageSpriteList->m_Items[v22];
        if ( !gameObject )
          goto LABEL_96;
        if ( index == (_DWORD)v22 )
          v24 = &StringLiteral_20588/*"img_slider_on"*/;
        else
          v24 = &StringLiteral_20587/*"img_slider_off"*/;
        UISprite__set_spriteName(gameObject, (System_String_o *)*v24, 0LL);
      }
      while ( (int)++v22 < this->fields.pageMax );
    }
    v25 = index + 1;
    v64 = index + 1;
    gameObject = (UISprite_o *)System_Int32__ToString((int32_t)&v64, 0LL);
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
                           (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetPartyOrganizationImage(
        (UISprite_o *)Component_object,
        (System_String_o *)StringLiteral_17108/*"battle_bg"*/,
        0LL);
      AtlasManager__SetPartyOrganizationImage(
        this->fields.waveNumSlashSprite,
        (System_String_o *)StringLiteral_17114/*"battle_num_slash"*/,
        0LL);
      AtlasManager__SetPartyOrganizationImage(
        this->fields.waveNumSlashGlowSprite,
        (System_String_o *)StringLiteral_17115/*"battle_num_slash_glow"*/,
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
        v64 = this->fields.pageMax / 10;
        v36 = System_Int32__ToString((int32_t)&v64, 0LL);
        v37 = System_String__Concat_62572260((System_String_o *)StringLiteral_17113/*"battle_num_"*/, v36, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetPartyOrganizationImage(waveMaxNumTensPlaceSprite, v37, 0LL);
        waveMaxNumTensPlaceGlowSprite = this->fields.waveMaxNumTensPlaceGlowSprite;
        v64 = this->fields.pageMax / 10;
        v39 = System_Int32__ToString((int32_t)&v64, 0LL);
        v40 = System_String__Concat_62610508(
                (System_String_o *)StringLiteral_17113/*"battle_num_"*/,
                v39,
                (System_String_o *)StringLiteral_16532/*"_glow"*/,
                0LL);
        AtlasManager__SetPartyOrganizationImage(waveMaxNumTensPlaceGlowSprite, v40, 0LL);
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
        v41 = this->fields.waveNumObject;
        if ( v25 >= 10 )
        {
          GameObjectExtensions__SetLocalPositionX(v41, 7.0, 0LL);
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
          v64 = v25 / 0xAu;
          v44 = System_Int32__ToString((int32_t)&v64, 0LL);
          v45 = System_String__Concat_62572260((System_String_o *)StringLiteral_17113/*"battle_num_"*/, v44, 0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetPartyOrganizationImage(waveNumTensPlaceSprite, v45, 0LL);
          waveNumTensPlaceGlowSprite = this->fields.waveNumTensPlaceGlowSprite;
          v64 = v25 / 0xAu;
          v47 = System_Int32__ToString((int32_t)&v64, 0LL);
          v48 = System_String__Concat_62610508(
                  (System_String_o *)StringLiteral_17113/*"battle_num_"*/,
                  v47,
                  (System_String_o *)StringLiteral_16532/*"_glow"*/,
                  0LL);
          AtlasManager__SetPartyOrganizationImage(waveNumTensPlaceGlowSprite, v48, 0LL);
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
          v42 = 322;
        }
        else
        {
          GameObjectExtensions__SetLocalPositionX(v41, 1.0, 0LL);
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
          v42 = 308;
        }
        UIWidget__set_width((UIWidget_o *)Component_object, v42, 0LL);
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
        v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionX(v28, 67.0, 0LL);
        gameObject = this->fields.waveMaxNumOnesPlaceGlowSprite;
        if ( !gameObject )
          goto LABEL_96;
        v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionX(v29, 67.0, 0LL);
      }
      waveNumOnesPlaceSprite = this->fields.waveNumOnesPlaceSprite;
      v64 = v25 % 10;
      v50 = System_Int32__ToString((int32_t)&v64, 0LL);
      v51 = System_String__Concat_62572260((System_String_o *)StringLiteral_17113/*"battle_num_"*/, v50, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetPartyOrganizationImage(waveNumOnesPlaceSprite, v51, 0LL);
      waveNumOnesPlaceGlowSprite = this->fields.waveNumOnesPlaceGlowSprite;
      v64 = v25 % 10;
      v53 = System_Int32__ToString((int32_t)&v64, 0LL);
      v54 = System_String__Concat_62610508(
              (System_String_o *)StringLiteral_17113/*"battle_num_"*/,
              v53,
              (System_String_o *)StringLiteral_16532/*"_glow"*/,
              0LL);
      AtlasManager__SetPartyOrganizationImage(waveNumOnesPlaceGlowSprite, v54, 0LL);
      waveMaxNumOnesPlaceSprite = this->fields.waveMaxNumOnesPlaceSprite;
      v64 = this->fields.pageMax % 10;
      v56 = System_Int32__ToString((int32_t)&v64, 0LL);
      v57 = System_String__Concat_62572260((System_String_o *)StringLiteral_17113/*"battle_num_"*/, v56, 0LL);
      AtlasManager__SetPartyOrganizationImage(waveMaxNumOnesPlaceSprite, v57, 0LL);
      waveMaxNumOnesPlaceGlowSprite = this->fields.waveMaxNumOnesPlaceGlowSprite;
      v64 = this->fields.pageMax % 10;
      v59 = System_Int32__ToString((int32_t)&v64, 0LL);
      v60 = System_String__Concat_62610508(
              (System_String_o *)StringLiteral_17113/*"battle_num_"*/,
              v59,
              (System_String_o *)StringLiteral_16532/*"_glow"*/,
              0LL);
      AtlasManager__SetPartyOrganizationImage(waveMaxNumOnesPlaceGlowSprite, v60, 0LL);
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
      v30 = (System_String_o *)gameObject;
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
                                   (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !gameObject )
        goto LABEL_96;
      v31 = gameObject;
      UISprite__set_atlas(gameObject, this->fields.indexLocalAtlas, 0LL);
      UISprite__set_spriteName(v31, (System_String_o *)StringLiteral_22661/*"party_bg"*/, 0LL);
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v31->klass->vtable._33_MakePixelPerfect.method)(
        v31,
        v31->klass->vtable._34_get_minWidth.methodPtr);
      gameObject = this->fields.indexSprite;
      if ( !gameObject )
        goto LABEL_96;
      gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_96;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v32 = System_String__Concat_62572260((System_String_o *)StringLiteral_22662/*"party_txt_"*/, v30, 0LL);
      indexSprite = this->fields.indexSprite;
      v34 = v32;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( !AtlasManager__SetPartyOrganizationImage(indexSprite, v34, 0LL) )
      {
        gameObject = this->fields.indexSprite;
        if ( !gameObject )
          goto LABEL_96;
        UISprite__set_atlas(gameObject, this->fields.indexLocalAtlas, 0LL);
        gameObject = this->fields.indexSprite;
        if ( !gameObject )
          goto LABEL_96;
        UISprite__set_spriteName(gameObject, v34, 0LL);
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
      v63 = LastUsedDeckNumberManager__GetDeckNumber(questId, 0LL) - 1 == index;
    }
    else
    {
LABEL_91:
      v63 = 0;
    }
    gameObject = this->fields.lastTimeUsedSprite;
    if ( !gameObject
      || (gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
    {
LABEL_96:
      sub_1BDBAD4(gameObject, v20);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v63, 0LL);
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
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  float v30; // s0
  float v31; // s1
  float v32; // s2
  int monitor; // w24
  float v34; // s8
  float v35; // s9
  float v36; // s10
  CGThumbnailListItem_o *v37; // x25
  UnityEngine_Component_o *v38; // x26
  PartyListViewIndicator_o *v39; // x28
  UnityEngine_MonoBehaviour_o *v40; // x29
  EventDelegate_o *v41; // x27
  __int64 v42; // x3
  __int64 v43; // x4
  struct UnityEngine_GameObject_o *soloBaseObject; // x29
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  const MethodInfo *v47; // x3
  int32_t m_CancellationTokenSource; // w2
  int v49; // w8
  __int64 v50; // x8
  _QWORD *v51; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v53; // x8
  const MethodInfo *v54; // x3
  __int64 v55; // x22
  void *v56; // x9
  UnityEngine_Object_o *pageBaseObject; // x20
  System_Array_o *v58; // x8
  __int64 v59; // x20
  int v60; // w9
  System_String_o *v61; // x1
  float v62; // s1
  float v63; // s2
  int32_t pageMax; // w19
  float v65; // s8
  float v66; // s9
  __int64 v67; // x0
  UnityEngine_Transform_o *parent; // [xsp+8h] [xbp-88h]
  int v69; // [xsp+1Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B4046E & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_UICommonButton___, *(_QWORD *)&max);
    sub_1BDB878(&EventDelegate_TypeInfo, v5);
    sub_1BDB878(&int_TypeInfo, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventDelegate__Add__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventDelegate__get_Item__, v9);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_UISprite___, v10);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v11);
    sub_1BDB878(&UISprite___TypeInfo, v12);
    sub_1BDB878(&StringLiteral_20587/*"img_slider_off"*/, v13);
    this = (PartyListViewIndicator_o *)sub_1BDB878(&StringLiteral_9875/*"OnClickTabParty"*/, v14);
    byte_4B4046E = 1;
  }
  p_pageSpriteList = (System_Array_o **)&v4->fields.pageSpriteList;
  pageSpriteList = (System_Array_o *)v4->fields.pageSpriteList;
  if ( !pageSpriteList )
    goto LABEL_67;
  if ( SLODWORD(pageSpriteList[1].monitor) < max )
  {
    this = (PartyListViewIndicator_o *)sub_1BDB920(UISprite___TypeInfo, (unsigned int)max);
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
      sub_1BDBADC(this, *(_QWORD *)&max, method);
    this = (PartyListViewIndicator_o *)v24[2].klass;
    if ( !this )
      goto LABEL_67;
    v25 = v21;
    v26 = v22;
    v27 = v23;
    this = (PartyListViewIndicator_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_67;
    *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    if ( !*p_pageSpriteList || !v17 )
      goto LABEL_67;
    monitor = (int)(*p_pageSpriteList)[1].monitor;
    if ( monitor < SLODWORD(v17->fields.m_CancellationTokenSource) )
    {
      v34 = v25 - v30;
      v35 = v26 - v31;
      v36 = v27 - v32;
      v37 = (CGThumbnailListItem_o *)(&v17->fields.soloBaseObject + monitor);
      while ( 1 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (PartyListViewIndicator_o *)UnityEngine_Object__Instantiate_object__51108816(
                                             klass,
                                             parent,
                                             (const MethodInfo_30BDBD0 *)Method_UnityEngine_Object_Instantiate_UISprite___);
        if ( !this )
          break;
        v38 = (UnityEngine_Component_o *)this;
        this = (PartyListViewIndicator_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          break;
        v70.fields.z = v36 * (float)monitor;
        v70.fields.y = v35 * (float)monitor;
        v70.fields.x = v34 * (float)monitor;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v70, 0LL);
        this = (PartyListViewIndicator_o *)UnityEngine_Component__GetComponent_object_(
                                             v38,
                                             (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
        if ( !this )
          break;
        v39 = this;
        this = (PartyListViewIndicator_o *)this->fields.selectNameLabel;
        if ( !this )
          break;
        this = (PartyListViewIndicator_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)this,
                                             0,
                                             (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_EventDelegate__get_Item__);
        if ( !this )
          break;
        v40 = *(UnityEngine_MonoBehaviour_o **)&this->fields.m_CachedPtr;
        v41 = (EventDelegate_o *)sub_1BDBAC4(EventDelegate_TypeInfo);
        EventDelegate___ctor_48569040(v41, v40, (System_String_o *)StringLiteral_9875/*"OnClickTabParty"*/, 0LL);
        if ( !v41 )
          break;
        this = (PartyListViewIndicator_o *)EventDelegate__get_parameters(v41, 0LL);
        if ( !this )
          break;
        if ( !LODWORD(this->fields.m_CancellationTokenSource) )
          goto LABEL_74;
        soloBaseObject = this->fields.soloBaseObject;
        v69 = monitor;
        this = (PartyListViewIndicator_o *)j_il2cpp_value_box_0(int_TypeInfo, &v69, method, v42, v43);
        if ( !soloBaseObject )
          break;
        soloBaseObject[1].monitor = this;
        sub_1BDB81C((CGThumbnailListItem_o *)&soloBaseObject[1].monitor, (int32_t)this, v45, v46);
        this = (PartyListViewIndicator_o *)v39->fields.selectNameLabel;
        if ( !this )
          break;
        m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
        v49 = HIDWORD(this->fields.m_CancellationTokenSource) + 1;
        LODWORD(this->fields.m_CancellationTokenSource) = 0;
        HIDWORD(this->fields.m_CancellationTokenSource) = v49;
        if ( m_CancellationTokenSource >= 1 )
        {
          System_Array__Clear(*(System_Array_o **)&this->fields.m_CachedPtr, 0, m_CancellationTokenSource, 0LL);
          this = (PartyListViewIndicator_o *)v39->fields.selectNameLabel;
          if ( !this )
            break;
        }
        v50 = *(_QWORD *)&this->fields.m_CachedPtr;
        v51 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v50 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v50 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v41,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
        }
        else
        {
          v53 = v50 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v53 + 32) = v41;
          sub_1BDB81C((CGThumbnailListItem_o *)(v53 + 32), (int32_t)v41, m_CancellationTokenSource, v47);
        }
        this = (PartyListViewIndicator_o *)sub_1BDB9B4(v38, v17->klass->_1.element_class);
        if ( !this )
        {
          v67 = sub_1BDBAF8();
          sub_1BDB9A0(v67, 0LL);
        }
        if ( (unsigned int)monitor >= LODWORD(v17->fields.m_CancellationTokenSource) )
          goto LABEL_74;
        v37->klass = (CGThumbnailListItem_c *)v38;
        sub_1BDB81C(v37, (int32_t)v38, (int32_t)method, v54);
        ++monitor;
        v37 = (CGThumbnailListItem_o *)((char *)v37 + 8);
        if ( monitor >= SLODWORD(v17->fields.m_CancellationTokenSource) )
          goto LABEL_43;
      }
LABEL_67:
      sub_1BDBAD4(this, *(_QWORD *)&max);
    }
LABEL_43:
    *p_pageSpriteList = (System_Array_o *)v17;
    sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields.pageSpriteList, (int32_t)v17, v28, v29);
    pageSpriteList = *p_pageSpriteList;
    if ( !*p_pageSpriteList )
      goto LABEL_67;
  }
  v55 = 0LL;
  while ( 1 )
  {
    v56 = pageSpriteList[1].monitor;
    if ( (int)v55 >= (int)v56 )
      break;
    if ( (unsigned int)v55 >= (unsigned int)v56 )
      goto LABEL_74;
    this = (PartyListViewIndicator_o *)*((_QWORD *)&pageSpriteList[2].klass + v55);
    if ( this )
    {
      this = (PartyListViewIndicator_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (int)v55 < max, 0LL);
        pageSpriteList = *p_pageSpriteList;
        ++v55;
        if ( *p_pageSpriteList )
          continue;
      }
    }
    goto LABEL_67;
  }
  if ( (int)v56 >= max )
    LODWORD(v56) = max;
  v4->fields.pageMax = (int)v56;
  v4->fields.pageIndex = -1;
  if ( (int)v56 <= 1 )
    v4->fields.pageMax = 0;
  pageBaseObject = (UnityEngine_Object_o *)v4->fields.pageBaseObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PartyListViewIndicator_o *)UnityEngine_Object__op_Inequality(pageBaseObject, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v58 = *p_pageSpriteList;
    if ( !*p_pageSpriteList )
      goto LABEL_67;
    v59 = 0LL;
    while ( 1 )
    {
      v60 = (int)v58[1].monitor;
      if ( (int)v59 >= v60 )
        break;
      if ( (unsigned int)v59 >= v60 )
        goto LABEL_74;
      this = (PartyListViewIndicator_o *)*((_QWORD *)&v58[2].klass + v59);
      if ( this )
      {
        v61 = (int)v59 >= v4->fields.pageMax ? 0LL : (System_String_o *)StringLiteral_20587/*"img_slider_off"*/;
        UISprite__set_spriteName((UISprite_o *)this, v61, 0LL);
        v58 = (System_Array_o *)v4->fields.pageSpriteList;
        ++v59;
        if ( v58 )
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
    *(UnityEngine_Vector3_o *)(&v62 - 1) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)this,
                                             0LL);
    this = (PartyListViewIndicator_o *)v4->fields.pageBaseObject;
    if ( !this )
      goto LABEL_67;
    pageMax = v4->fields.pageMax;
    v65 = v62;
    v66 = v63;
    this = (PartyListViewIndicator_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_67;
    v71.fields.x = (float)(-10 * pageMax + 10);
    v71.fields.y = v65;
    v71.fields.z = v66;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v71, 0LL);
  }
}


void __fastcall PartyListViewIndicator__SetScrollEnabled(
        PartyListViewIndicator_o *this,
        bool enabled,
        const MethodInfo *method)
{
  this->fields.isScrollEnabled = enabled;
}


void __fastcall PartyListViewIndicator__UpdateCost(
        PartyListViewIndicator_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  PartyListViewIndicator_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t maxCost; // w21
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t TotalCostRestriction; // w22
  bool v13; // w21
  System_String_o *v14; // x21
  UILabel_o *maxCostLabel; // x22
  System_String_o *v16; // x0
  UILabel_o *splitCostLabel; // x22
  System_String_o *v18; // x0
  int32_t cost; // w8
  UILabel_o *selectCostLabel; // x20
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  int32_t v23; // [xsp+8h] [xbp-38h] BYREF
  int32_t v24; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4B40471 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, partyItem);
    sub_1BDB878(&StringLiteral_10218/*"PARTY_ORGANIZATION_COST_SPLIT"*/, v5);
    sub_1BDB878(&StringLiteral_10216/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, v6);
    sub_1BDB878(&StringLiteral_10217/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, v7);
    sub_1BDB878(&StringLiteral_10215/*"PARTY_ORGANIZATION_COST_COLOR"*/, v8);
    this = (PartyListViewIndicator_o *)sub_1BDB878(&StringLiteral_1/*""*/, v9);
    byte_4B40471 = 1;
  }
  v23 = 0;
  if ( !partyItem )
LABEL_22:
    sub_1BDBAD4(this, partyItem);
  maxCost = partyItem->fields.maxCost;
  v24 = maxCost;
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    TotalCostRestriction = QuestRestrictionInfo__GetTotalCostRestriction(questRestrictionInfo, 0LL);
  else
    TotalCostRestriction = 0;
  v13 = TotalCostRestriction != 0 && maxCost > TotalCostRestriction;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v13 )
      goto LABEL_9;
LABEL_11:
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_10215/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
    goto LABEL_12;
  }
  if ( !v13 )
    goto LABEL_11;
LABEL_9:
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_10217/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0LL);
  v24 = TotalCostRestriction;
LABEL_12:
  maxCostLabel = v4->fields.maxCostLabel;
  v16 = System_Int32__ToString((int32_t)&v24, 0LL);
  this = (PartyListViewIndicator_o *)System_String__Concat_62572260(v14, v16, 0LL);
  if ( !maxCostLabel )
    goto LABEL_22;
  UILabel__set_text(maxCostLabel, (System_String_o *)this, 0LL);
  splitCostLabel = v4->fields.splitCostLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_10218/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
  this = (PartyListViewIndicator_o *)System_String__Concat_62572260(v14, v18, 0LL);
  if ( !splitCostLabel )
    goto LABEL_22;
  UILabel__set_text(splitCostLabel, (System_String_o *)this, 0LL);
  cost = partyItem->fields.cost;
  selectCostLabel = v4->fields.selectCostLabel;
  if ( cost > v24 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_10216/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
    cost = partyItem->fields.cost;
    v14 = v21;
  }
  v23 = cost;
  v22 = System_Int32__ToString((int32_t)&v23, 0LL);
  this = (PartyListViewIndicator_o *)System_String__Concat_62572260(v14, v22, 0LL);
  if ( !selectCostLabel )
    goto LABEL_22;
  UILabel__set_text(selectCostLabel, (System_String_o *)this, 0LL);
}