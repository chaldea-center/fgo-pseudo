void PartyListViewIndicator___ctor(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct System_Int32_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C22C02 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    byte_4C22C02 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct System_Int32_array *)sub_1C2D538(int___TypeInfo, (unsigned int)(v3->static_fields->DeckMax + 1));
  this->fields.useLimitEquip = v4;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.useLimitEquip, (int32_t)v4, v5, v6);
  __asm { FMOV            V1.4S, #1.0 }
  this->fields.isScrollEnabled = 1;
  this->fields.ICON_NORMAL_COLOR = _Q1;
  this->fields.ICON_MASK_COLOR = (struct UnityEngine_Color_o)xmmword_C09130;
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
    sub_1C2D6EC(this, method);
  mAtlas = indexSprite->fields.mAtlas;
  this->fields.indexLocalAtlas = mAtlas;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.indexLocalAtlas, (int32_t)mAtlas, v2, v3);
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
    sub_1C2D6EC(limitMasterFormationButton, method);
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

  if ( (byte_4C22C01 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22C01 = 1;
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
      sub_1C2D6EC(gameObject, v7);
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
  __int64 v14; // x2
  DataManager_o *v15; // x22
  unsigned __int64 v16; // x25
  struct System_Int32_array *useLimitEquip; // x28
  UISprite_o *limitEquipFixSprite; // x19
  struct System_Int32_array *v19; // x9
  char *v20; // x8
  int v21; // w21
  Il2CppObject *Component_object; // x20
  EventEquipSkillReleaseEntity_o *outEnt; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C22BFA & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_19173/*"event_emblem_frame"*/);
    sub_1C2D490(&StringLiteral_20176/*"icon_equip_fixation"*/);
    sub_1C2D490(&StringLiteral_8274/*"LIMIT_EQUIP_SETTING"*/);
    sub_1C2D490(&StringLiteral_17512/*"btn_skill_off"*/);
    sub_1C2D490(&StringLiteral_19172/*"event_emblem_dim"*/);
    sub_1C2D490(&StringLiteral_17513/*"btn_skill_on"*/);
    byte_4C22BFA = 1;
  }
  outEnt = 0;
  if ( !PartyListViewIndicator__IsEventOnlyEquip(this, (const MethodInfo *)partyItem) )
    goto LABEL_15;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
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
  AtlasManager__SetEventUI(masterEquipBackSprite, (System_String_o *)StringLiteral_19172/*"event_emblem_dim"*/, 0);
  AtlasManager__SetEventUI(this->fields.masterEquipFrameSprite, (System_String_o *)StringLiteral_19173/*"event_emblem_frame"*/, 0);
  if ( !this->fields.isChkSave )
  {
    if ( (v11 & 1) == 0 )
    {
      Instance = (DataManager_o *)UnityEngine_PlayerPrefs__GetString_71122516((System_String_o *)StringLiteral_8274/*"LIMIT_EQUIP_SETTING"*/, 0);
      if ( !Instance )
        goto LABEL_65;
      if ( SLODWORD(Instance->fields.m_CachedPtr) >= 1 )
      {
        Instance = (DataManager_o *)System_String__Split((System_String_o *)Instance, 0x2Cu, 0, 0);
        if ( !Instance )
          goto LABEL_65;
        v15 = Instance;
        if ( SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
        {
          v16 = 0;
          do
          {
            Instance = (DataManager_o *)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = (DataManager_o *)BalanceConfig_TypeInfo;
            }
            if ( (__int64)v16 > *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 164LL) )
              break;
            if ( v16 >= LODWORD(v15->fields.m_CancellationTokenSource) )
              goto LABEL_66;
            useLimitEquip = this->fields.useLimitEquip;
            Instance = (DataManager_o *)System_Int32__Parse(*((System_String_o **)&v15->fields._DispLog + v16), 0);
            if ( !useLimitEquip )
              goto LABEL_65;
            if ( v16 >= LODWORD(useLimitEquip->max_length) )
              goto LABEL_66;
            useLimitEquip->m_Items[v16++] = (int)Instance;
          }
          while ( (__int64)v16 < SLODWORD(v15->fields.m_CancellationTokenSource) );
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
    sub_1C2D6EC(Instance, v7);
  }
  if ( (v11 & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    v19 = this->fields.useLimitEquip;
    v20 = (char *)v19 + 4 * (int)index;
    if ( isChng )
    {
      if ( !v19 )
        goto LABEL_65;
      if ( index >= LODWORD(v19->max_length) )
        goto LABEL_66;
      *((_DWORD *)v20 + 8) = *((_DWORD *)v20 + 8) == 0;
    }
    else if ( !v19 )
    {
      goto LABEL_65;
    }
    if ( index < LODWORD(v19->max_length) )
    {
      Instance = (DataManager_o *)this->fields.limitMasterFormationButton;
      if ( Instance )
      {
        v21 = *((_DWORD *)v20 + 8);
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)Instance,
                             (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( v21 )
        {
          AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_17513/*"btn_skill_on"*/, 0);
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
          AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_17512/*"btn_skill_off"*/, 0);
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
    sub_1C2D6F4(Instance, v7, v14);
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
  AtlasManager__SetEventUI(limitEquipFixSprite, (System_String_o *)StringLiteral_20176/*"icon_equip_fixation"*/, 0);
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
  struct QuestRestrictionInfo_o *v22; // x8
  struct QuestRestrictionInfo_o *v23; // x8
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v27; // x3
  __int64 v28; // x2
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  il2cpp_array_size_t max_length; // x9
  int32_t v32; // w21
  ServantEntity_array *SvtEntityList; // x22
  const MethodInfo *v34; // x1
  System_String_array *SvtNameList; // x23
  const MethodInfo *v36; // x1
  System_Boolean_array *IsFollowerList; // x24
  EventPartyMargeUpValInfo_o *v38; // x25
  struct EventPartyMargeUpValInfo_o **p_eventMargeUpValInfo; // x21
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x3
  EventUpValInfo_array *v43; // x8
  unsigned __int64 v44; // x20
  unsigned __int64 max_length_low; // x9
  EventPartyMargeUpValInfo_o *v46; // x22
  UILabel_o *selectNameLabel; // x21
  System_String_o *v48; // x0
  EventUpValInfo_array *v49; // [xsp+0h] [xbp-70h] BYREF
  int32_t genderImageId; // [xsp+Ch] [xbp-64h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *equipName; // [xsp+18h] [xbp-58h] BYREF
  int32_t maxLv; // [xsp+24h] [xbp-4Ch] BYREF
  int32_t condUsrLv[2]; // [xsp+28h] [xbp-48h] BYREF

  v3 = partyItem;
  if ( (byte_4C22BF8 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_1C2D490(&EventPartyMargeUpValInfo_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&StringLiteral_10251/*"PARTY_ORGANIZATION_NAME"*/);
    sub_1C2D490(&StringLiteral_23543/*"solo_bg"*/);
    sub_1C2D490(&StringLiteral_23572/*"specialparty_bg"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22BF8 = 1;
  }
  *(_QWORD *)condUsrLv = 0;
  maxLv = 0;
  detail = 0;
  equipName = 0;
  genderImageId = 0;
  v49 = 0;
  if ( v3 )
  {
    switch ( this->fields.menuKind )
    {
      case 1:
      case 3:
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_95;
        soloBaseObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       soloBaseObject,
                                                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !this->fields.soloBaseObject )
          goto LABEL_95;
        v6 = (UISprite_o *)soloBaseObject;
        UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0);
        if ( !v6 )
          goto LABEL_95;
        UISprite__set_spriteName(v6, (System_String_o *)StringLiteral_23543/*"solo_bg"*/, 0);
        ((void (__fastcall *)(UISprite_o *, const MethodInfo *))v6->klass->vtable._33_MakePixelPerfect.methodPtr)(
          v6,
          v6->klass->vtable._33_MakePixelPerfect.method);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_95;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
        soloBaseObject = this->fields.indexBaseObject;
        if ( !soloBaseObject )
          goto LABEL_95;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
        soloBaseObject = this->fields.selectNameBaseObject;
        if ( !soloBaseObject )
          goto LABEL_95;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
        soloBaseObject = this->fields.costBaseObject;
        if ( !soloBaseObject )
          goto LABEL_95;
        v7 = 0;
        goto LABEL_74;
      case 2:
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_95;
        soloBaseObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       soloBaseObject,
                                                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !this->fields.soloBaseObject )
          goto LABEL_95;
        v17 = (UISprite_o *)soloBaseObject;
        UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0);
        if ( !v17 )
          goto LABEL_95;
        UISprite__set_spriteName(v17, (System_String_o *)StringLiteral_23572/*"specialparty_bg"*/, 0);
        ((void (__fastcall *)(UISprite_o *, const MethodInfo *))v17->klass->vtable._33_MakePixelPerfect.methodPtr)(
          v17,
          v17->klass->vtable._33_MakePixelPerfect.method);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_95;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
        goto LABEL_69;
      case 4:
      case 5:
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_95;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_95;
        UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0);
        questRestrictionInfo = this->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_69;
        goto LABEL_35;
      case 6:
      case 7:
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_95;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_95;
        UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0);
        v15 = this->fields.questRestrictionInfo;
        if ( !v15 )
          goto LABEL_69;
        soloBaseObject = (UnityEngine_GameObject_o *)QuestRestrictionInfo__IsServantNum(v15, 0);
        if ( ((unsigned __int8)soloBaseObject & 1) != 0 )
        {
          questRestrictionInfo = this->fields.questRestrictionInfo;
          if ( !questRestrictionInfo )
            goto LABEL_95;
LABEL_35:
          servantNumMax = questRestrictionInfo->fields.servantNumMax;
        }
        else
        {
          soloBaseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !soloBaseObject )
            goto LABEL_95;
          soloBaseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)soloBaseObject,
                                                         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
          v22 = this->fields.questRestrictionInfo;
          if ( !v22 )
            goto LABEL_95;
          if ( !soloBaseObject )
            goto LABEL_95;
          soloBaseObject = (UnityEngine_GameObject_o *)NpcFollowerMaster__GetQuestFollowerList(
                                                         (NpcFollowerMaster_o *)soloBaseObject,
                                                         v22->fields.questId,
                                                         v22->fields.questPhase,
                                                         0);
          v23 = this->fields.questRestrictionInfo;
          if ( !v23 || !soloBaseObject )
            goto LABEL_95;
          servantNumMax = v23->fields.myServantNumMax + LODWORD(soloBaseObject[1].klass);
        }
        goto LABEL_68;
      case 9:
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_95;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_95;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
        soloBaseObject = this->fields.indexBaseObject;
        if ( !soloBaseObject )
          goto LABEL_95;
        UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0);
        soloBaseObject = this->fields.selectNameBaseObject;
        if ( !soloBaseObject )
          goto LABEL_95;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
        soloBaseObject = this->fields.costBaseObject;
        if ( !soloBaseObject )
          goto LABEL_95;
        UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0);
        v20 = this->fields.questRestrictionInfo;
        if ( v20 && QuestRestrictionInfo__IsWaveSetupSwitchParty(v20, 0) )
        {
          soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEventPointIndicator;
          if ( !soloBaseObject )
            goto LABEL_95;
          PartyEventPointIndicator__SetUnknown((PartyEventPointIndicator_o *)soloBaseObject, 0);
        }
        else
        {
          soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEventPointIndicator;
          if ( !soloBaseObject )
            goto LABEL_95;
          soloBaseObject = (UnityEngine_GameObject_o *)PartyEventPointIndicator__SetTrendDisp(
                                                         (PartyEventPointIndicator_o *)soloBaseObject,
                                                         v3->fields.trendDispWaveBattleEnemyClassIds,
                                                         0);
        }
        masterEquipButton = this->fields.masterEquipButton;
        if ( v3->fields._IsWaveBattleRestart_k__BackingField )
        {
          soloBaseObject = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !soloBaseObject )
            goto LABEL_95;
          partyItem = (PartyListViewItem_o *)(LODWORD(soloBaseObject[5].klass) == 1);
        }
        else
        {
          partyItem = (PartyListViewItem_o *)(&dword_0 + 1);
        }
        if ( !masterEquipButton )
          goto LABEL_95;
        UICommonButton__SetEnable(masterEquipButton, (bool)partyItem, 0);
        soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partySwapButton;
        if ( !soloBaseObject )
          goto LABEL_95;
        UICommonButton__SetEnable((UICommonButton_o *)soloBaseObject, !v3->fields._IsClearedWave_k__BackingField, 0);
        soloBaseObject = (UnityEngine_GameObject_o *)this->fields.autoOrganizationButton;
        if ( !soloBaseObject )
          goto LABEL_95;
        UICommonButton__SetEnable((UICommonButton_o *)soloBaseObject, !v3->fields._IsClearedWave_k__BackingField, 0);
        soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEditButton;
        if ( !soloBaseObject )
          goto LABEL_95;
        UICommonButton__SetEnable((UICommonButton_o *)soloBaseObject, !v3->fields._IsClearedWave_k__BackingField, 0);
        goto LABEL_75;
      default:
        v18 = this->fields.questRestrictionInfo;
        if ( v18 && v18->fields.eventDeckNum >= 1 )
        {
          soloBaseObject = this->fields.soloBaseObject;
          if ( !soloBaseObject )
            goto LABEL_95;
          UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
          soloBaseObject = this->fields.organizationNumObject;
          if ( !soloBaseObject )
            goto LABEL_95;
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
          if ( !soloBaseObject
            || (UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0),
                (soloBaseObject = this->fields.selectNameBaseObject) == 0) )
          {
LABEL_95:
            sub_1C2D6EC(soloBaseObject, partyItem);
          }
          UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
        }
        else
        {
          soloBaseObject = this->fields.soloBaseObject;
          if ( !soloBaseObject )
            goto LABEL_95;
          UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
          soloBaseObject = this->fields.organizationNumObject;
          if ( !soloBaseObject )
            goto LABEL_95;
          UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
          soloBaseObject = this->fields.indexBaseObject;
          if ( !soloBaseObject )
            goto LABEL_95;
          UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0);
          soloBaseObject = this->fields.selectNameBaseObject;
          if ( !soloBaseObject )
            goto LABEL_95;
          UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0);
          selectNameLabel = this->fields.selectNameLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v48 = LocalizationManager__Get((System_String_o *)StringLiteral_10251/*"PARTY_ORGANIZATION_NAME"*/, 0);
          soloBaseObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                         v48,
                                                         (Il2CppObject *)v3->fields.deckName,
                                                         0);
          if ( !selectNameLabel )
            goto LABEL_95;
          UILabel__set_text(selectNameLabel, (System_String_o *)soloBaseObject, 0);
        }
        soloBaseObject = this->fields.costBaseObject;
        if ( soloBaseObject )
        {
          v7 = 1;
LABEL_74:
          UnityEngine_GameObject__SetActive(soloBaseObject, v7, 0);
LABEL_75:
          PartyListViewIndicator__UpdateCost(this, v3, v24);
          PartyListViewItem__CheckRestriction(v3, v25);
          soloBaseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( soloBaseObject )
          {
            soloBaseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)soloBaseObject,
                                                           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEquipMaster___);
            if ( soloBaseObject )
            {
              Entity = DataMasterBase_object__object__long___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)soloBaseObject,
                         v3->fields.userEquipId,
                         (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
              if ( Entity )
              {
                UserEquipEntity__getEquipInfo(
                  (UserEquipEntity_o *)Entity,
                  condUsrLv,
                  &maxLv,
                  &equipName,
                  &detail,
                  &genderImageId,
                  0);
                soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipIcon1;
                if ( !soloBaseObject )
                  goto LABEL_95;
                ItemIconComponent__SetEquipItem((ItemIconComponent_o *)soloBaseObject, genderImageId, 0);
                soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipIcon2;
                if ( !soloBaseObject )
                  goto LABEL_95;
                ItemIconComponent__SetEquipItem((ItemIconComponent_o *)soloBaseObject, genderImageId, 0);
              }
              PartyListViewIndicator__DrawEventLimitEquip(this, v3, 0, v27);
              setupInfo = this->fields.setupInfo;
              if ( !setupInfo )
                goto LABEL_86;
              eventIdList = setupInfo->fields.eventIdList;
              if ( !eventIdList )
                goto LABEL_95;
              max_length = eventIdList->max_length;
              if ( max_length )
              {
                if ( !(_DWORD)max_length )
LABEL_113:
                  sub_1C2D6F4(soloBaseObject, partyItem, v28);
                v32 = eventIdList->m_Items[0];
              }
              else
              {
LABEL_86:
                v32 = 0;
              }
              condUsrLv[1] = v32;
              SvtEntityList = PartyListViewItem__GetSvtEntityList(v3, (const MethodInfo *)partyItem);
              SvtNameList = PartyListViewItem__GetSvtNameList(v3, v34);
              IsFollowerList = PartyListViewItem__GetIsFollowerList(v3, v36);
              v38 = (EventPartyMargeUpValInfo_o *)sub_1C2D6DC(EventPartyMargeUpValInfo_TypeInfo);
              EventPartyMargeUpValInfo___ctor(v38, v32, SvtEntityList, SvtNameList, IsFollowerList, 0);
              p_eventMargeUpValInfo = &this->fields.eventMargeUpValInfo;
              this->fields.eventMargeUpValInfo = v38;
              sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventMargeUpValInfo, (int32_t)v38, v40, v41);
              soloBaseObject = (UnityEngine_GameObject_o *)PartyListViewItem__GetEventUpVal(
                                                             v3,
                                                             &condUsrLv[1],
                                                             &v49,
                                                             v42);
              v43 = v49;
              if ( v49 )
              {
                v44 = 0;
                while ( 1 )
                {
                  max_length_low = LODWORD(v43->max_length);
                  if ( (__int64)v44 >= (int)max_length_low )
                    break;
                  if ( v44 >= max_length_low )
                    goto LABEL_113;
                  soloBaseObject = (UnityEngine_GameObject_o *)v43->m_Items[v44];
                  if ( soloBaseObject )
                  {
                    v46 = *p_eventMargeUpValInfo;
                    soloBaseObject = (UnityEngine_GameObject_o *)EventUpValInfo__GetDropItemList(
                                                                   (EventUpValInfo_o *)soloBaseObject,
                                                                   v44,
                                                                   0);
                    if ( !v46 )
                      goto LABEL_95;
                    EventPartyMargeUpValInfo__Add(v46, (EventDropItemUpValInfo_array *)soloBaseObject, 0);
                    v43 = v49;
                  }
                  ++v44;
                  if ( !v43 )
                    goto LABEL_95;
                }
                soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEventPointIndicator;
                if ( soloBaseObject )
                {
                  v12 = *p_eventMargeUpValInfo;
                  goto LABEL_98;
                }
              }
            }
          }
        }
        goto LABEL_95;
    }
  }
  soloBaseObject = this->fields.soloBaseObject;
  if ( !soloBaseObject )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
  soloBaseObject = this->fields.organizationNumObject;
  if ( !soloBaseObject )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
  soloBaseObject = this->fields.indexBaseObject;
  if ( !soloBaseObject )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
  soloBaseObject = this->fields.selectNameBaseObject;
  if ( !soloBaseObject )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
  soloBaseObject = this->fields.costBaseObject;
  if ( !soloBaseObject )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.selectNameLabel;
  if ( !soloBaseObject )
    goto LABEL_95;
  UILabel__set_text((UILabel_o *)soloBaseObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.maxCostLabel;
  if ( !soloBaseObject )
    goto LABEL_95;
  UILabel__set_text((UILabel_o *)soloBaseObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.splitCostLabel;
  if ( !soloBaseObject )
    goto LABEL_95;
  UILabel__set_text((UILabel_o *)soloBaseObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.selectCostLabel;
  if ( !soloBaseObject )
    goto LABEL_95;
  UILabel__set_text((UILabel_o *)soloBaseObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipIcon1;
  if ( !soloBaseObject )
    goto LABEL_95;
  ItemIconComponent__Clear((ItemIconComponent_o *)soloBaseObject, 0);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipIcon2;
  if ( !soloBaseObject )
    goto LABEL_95;
  ItemIconComponent__Clear((ItemIconComponent_o *)soloBaseObject, 0);
  this->fields.questRestrictionInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, 0, v8, v9);
  this->fields.eventMargeUpValInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventMargeUpValInfo, 0, v10, v11);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEventPointIndicator;
  if ( !soloBaseObject )
    goto LABEL_95;
  v12 = 0;
LABEL_98:
  PartyEventPointIndicator__SetTotalDropItemList((PartyEventPointIndicator_o *)soloBaseObject, v12, 0);
}


bool PartyListViewIndicator__IsEventOnlyEquip(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C22C00 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C22C00 = 1;
  }
  entity = 0;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (questRestrictionInfo = this->fields.questRestrictionInfo) == 0)
    || !Instance )
  {
LABEL_12:
    sub_1C2D6EC(Instance, v4);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          questRestrictionInfo->fields.eventId,
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
  __int64 v11; // x2
  struct System_Int32_array *useLimitEquip; // x8
  EventEquipSkillReleaseEntity_o *outEnt; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C22BFF & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C22BFF = 1;
  }
  outEnt = 0;
  if ( !PartyListViewIndicator__IsEventOnlyEquip(this, (const MethodInfo *)partyItem) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
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
    sub_1C2D6EC(Instance, v6);
  if ( (unsigned int)DeckMax >= LODWORD(useLimitEquip->max_length) )
    sub_1C2D6F4(Instance, v6, v11);
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

  if ( (byte_4C22BFB & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_PartyListViewIndicator_OnClickLeft__);
    byte_4C22BFB = 1;
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
        v6 = (_QWORD *)sub_1C2D4A8(Method_PartyListViewIndicator_OnClickLeft__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C2D474(v6, v6[4]);
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
        v10 = (_QWORD *)sub_1C2D4A8(Method_PartyListViewIndicator_OnClickLeft__);
      v11 = (System_Reflection_MethodBase_o *)sub_1C2D474(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 7, 0, 0);
      v5 = this->fields.manager;
      if ( v5 )
      {
        pageIndex = this->fields.pageMax;
        goto LABEL_20;
      }
LABEL_22:
      sub_1C2D6EC(v5, v4);
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

  if ( (byte_4C22BFC & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_PartyListViewIndicator_OnClickRight__);
    byte_4C22BFC = 1;
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
        v7 = (_QWORD *)sub_1C2D4A8(Method_PartyListViewIndicator_OnClickRight__);
      v8 = (System_Reflection_MethodBase_o *)sub_1C2D474(v7, v7[4]);
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
        v11 = (_QWORD *)sub_1C2D4A8(Method_PartyListViewIndicator_OnClickRight__);
      v12 = (System_Reflection_MethodBase_o *)sub_1C2D474(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 7, 0, 0);
      v5 = this->fields.manager;
      if ( v5 )
      {
        v9 = 0;
        goto LABEL_21;
      }
LABEL_23:
      sub_1C2D6EC(v5, v4);
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
  __int64 v14; // x1
  struct ListViewManager_o *v15; // x8
  _BOOL4 isLoop; // w8
  bool v17; // w9
  bool v18; // w8
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  __int64 naturalAligment; // x10
  ListViewItem_o *v22; // x1

  if ( (byte_4C22BF3 & 1) == 0 )
  {
    sub_1C2D490(&PartyListViewItem_TypeInfo);
    byte_4C22BF3 = 1;
  }
  this->fields.manager = manager;
  sub_1C2D434(
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
        UnityEngine_GameObject__SetActive(leftObject, v18, 0),
        (leftObject = this->fields.rightObject) == 0) )
  {
LABEL_19:
    sub_1C2D6EC(leftObject, v14);
  }
  UnityEngine_GameObject__SetActive(leftObject, isRight, 0);
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

  if ( (byte_4C22BFD & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C2D490(&StringLiteral_21225/*"limited_bg"*/);
    sub_1C2D490(&StringLiteral_23543/*"solo_bg"*/);
    sub_1C2D490(&StringLiteral_23655/*"startingonly_bg"*/);
    sub_1C2D490(&StringLiteral_22601/*"pair_bg"*/);
    byte_4C22BFD = 1;
  }
  organizationNumObject = this->fields.organizationNumObject;
  if ( !organizationNumObject )
LABEL_19:
    sub_1C2D6EC(organizationNumObject, *(_QWORD *)&servantNum);
  organizationNumObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        organizationNumObject,
                                                        (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
                                                            (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
      UISprite__set_spriteName(v9, (System_String_o *)StringLiteral_23543/*"solo_bg"*/, 0);
      organizationNumObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UISprite_o *, const MethodInfo *))v9->klass->vtable._33_MakePixelPerfect.methodPtr)(
                                                            v9,
                                                            v9->klass->vtable._33_MakePixelPerfect.method);
      if ( !v7 )
        goto LABEL_19;
      goto LABEL_18;
    case 1:
      if ( !organizationNumObject )
        goto LABEL_19;
      v8 = &StringLiteral_22601/*"pair_bg"*/;
      break;
    case 2:
      if ( !organizationNumObject )
        goto LABEL_19;
      v8 = &StringLiteral_23655/*"startingonly_bg"*/;
      break;
    default:
      if ( !organizationNumObject )
        goto LABEL_19;
      v8 = &StringLiteral_21225/*"limited_bg"*/;
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
  __int64 v12; // x1
  PartyEventPointIndicator_o *partyEventPointIndicator; // x0

  this->fields.setupInfo = setupInfo;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.setupInfo,
    (int32_t)setupInfo,
    (int32_t)questRestrictionInfo,
    (const MethodInfo *)classIds);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v8, v9);
  this->fields.eventMargeUpValInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventMargeUpValInfo, 0, v10, v11);
  partyEventPointIndicator = this->fields.partyEventPointIndicator;
  if ( !partyEventPointIndicator
    || (PartyEventPointIndicator__SetInfomation(partyEventPointIndicator, questRestrictionInfo, classIds, 0),
        (partyEventPointIndicator = this->fields.partyEventPointIndicator) == 0) )
  {
    sub_1C2D6EC(partyEventPointIndicator, v12);
  }
  PartyEventPointIndicator__SetTotalDropItemList(partyEventPointIndicator, 0, 0);
}


void PartyListViewIndicator__SetEventLimitEquipSetting(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  System_String_o *IsEventOnlyEquip; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  struct System_Int32_array *useLimitEquip; // x21
  il2cpp_array_size_t max_length; // x8
  System_String_o *v10; // x20
  unsigned __int64 v11; // x22
  int32_t v12; // w26
  Il2CppObject *v13; // x0
  int32_t v14; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C22BFE & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_8274/*"LIMIT_EQUIP_SETTING"*/);
    sub_1C2D490(&StringLiteral_811/*","*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22BFE = 1;
  }
  IsEventOnlyEquip = (System_String_o *)PartyListViewIndicator__IsEventOnlyEquip(this, method);
  if ( ((unsigned __int8)IsEventOnlyEquip & 1) != 0 )
  {
    useLimitEquip = this->fields.useLimitEquip;
    if ( !useLimitEquip )
      goto LABEL_15;
    max_length = useLimitEquip->max_length;
    v10 = (System_String_o *)StringLiteral_1/*""*/;
    if ( (int)max_length >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( v11 >= (unsigned int)max_length )
          sub_1C2D6F4(IsEventOnlyEquip, v4, v5);
        if ( !v10 )
          break;
        v12 = useLimitEquip->m_Items[v11];
        if ( v10->fields._stringLength >= 1 )
          v10 = System_String__Concat_63457864(v10, (System_String_o *)StringLiteral_811/*","*/, 0);
        v14 = v12;
        v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v5, v6, v7);
        IsEventOnlyEquip = System_String__Concat((Il2CppObject *)v10, v13, 0);
        LODWORD(max_length) = useLimitEquip->max_length;
        ++v11;
        v10 = IsEventOnlyEquip;
        if ( (__int64)v11 >= (int)max_length )
          goto LABEL_12;
      }
LABEL_15:
      sub_1C2D6EC(IsEventOnlyEquip, v4);
    }
LABEL_12:
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_8274/*"LIMIT_EQUIP_SETTING"*/, v10, 0);
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
    sub_1C2D6EC(leftObject, v4);
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

  if ( (byte_4C22BF5 & 1) == 0 )
  {
    sub_1C2D490(&LastUsedDeckNumberManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&OptionManager_TypeInfo);
    sub_1C2D490(&StringLiteral_20565/*"img_slider_on"*/);
    sub_1C2D490(&StringLiteral_20564/*"img_slider_off"*/);
    byte_4C22BF5 = 1;
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
          sub_1C2D6F4(AutoSelectParty, v7, v8);
        AutoSelectParty = pageSpriteList->m_Items[v9];
        if ( !AutoSelectParty )
          goto LABEL_32;
        if ( index == (_DWORD)v9 )
          v11 = &StringLiteral_20565/*"img_slider_on"*/;
        else
          v11 = &StringLiteral_20564/*"img_slider_off"*/;
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
      sub_1C2D6EC(AutoSelectParty, v7);
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

  if ( (byte_4C22BF7 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C2D490(&StringLiteral_22629/*"party_txt_"*/);
    sub_1C2D490(&StringLiteral_22628/*"party_bg"*/);
    byte_4C22BF7 = 1;
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
                                             (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !gameObject )
    goto LABEL_17;
  v8 = (UISprite_o *)gameObject;
  UISprite__set_atlas((UISprite_o *)gameObject, this->fields.indexLocalAtlas, 0);
  UISprite__set_spriteName(v8, (System_String_o *)StringLiteral_22628/*"party_bg"*/, 0);
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
  v9 = System_String__Concat_63457864((System_String_o *)StringLiteral_22629/*"party_txt_"*/, v7, 0);
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
    sub_1C2D6EC(gameObject, v6);
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

  if ( (byte_4C22BF6 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C2D490(&StringLiteral_17093/*"battle_num_"*/);
    sub_1C2D490(&StringLiteral_16549/*"_glow"*/);
    sub_1C2D490(&StringLiteral_17095/*"battle_num_slash_glow"*/);
    sub_1C2D490(&StringLiteral_17088/*"battle_bg"*/);
    sub_1C2D490(&StringLiteral_17094/*"battle_num_slash"*/);
    byte_4C22BF6 = 1;
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
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v9 = index + 1;
  AtlasManager__SetPartyOrganizationImage((UISprite_o *)Component_object, (System_String_o *)StringLiteral_17088/*"battle_bg"*/, 0);
  AtlasManager__SetPartyOrganizationImage(this->fields.waveNumSlashSprite, (System_String_o *)StringLiteral_17094/*"battle_num_slash"*/, 0);
  AtlasManager__SetPartyOrganizationImage(
    this->fields.waveNumSlashGlowSprite,
    (System_String_o *)StringLiteral_17095/*"battle_num_slash_glow"*/,
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
            v14 = System_String__Concat_63457864((System_String_o *)StringLiteral_17093/*"battle_num_"*/, v13, 0);
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetPartyOrganizationImage(waveMaxNumTensPlaceSprite, v14, 0);
            waveMaxNumTensPlaceGlowSprite = this->fields.waveMaxNumTensPlaceGlowSprite;
            v39 = this->fields.pageMax / 10;
            v16 = System_Int32__ToString((int32_t)&v39, 0);
            v17 = System_String__Concat_63496112(
                    (System_String_o *)StringLiteral_17093/*"battle_num_"*/,
                    v16,
                    (System_String_o *)StringLiteral_16549/*"_glow"*/,
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
                        v22 = System_String__Concat_63457864((System_String_o *)StringLiteral_17093/*"battle_num_"*/, v21, 0);
                        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        AtlasManager__SetPartyOrganizationImage(waveNumTensPlaceSprite, v22, 0);
                        waveNumTensPlaceGlowSprite = this->fields.waveNumTensPlaceGlowSprite;
                        v39 = v9 / 0xAu;
                        v24 = System_Int32__ToString((int32_t)&v39, 0);
                        v25 = System_String__Concat_63496112(
                                (System_String_o *)StringLiteral_17093/*"battle_num_"*/,
                                v24,
                                (System_String_o *)StringLiteral_16549/*"_glow"*/,
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
    sub_1C2D6EC(waveNumObject, *(_QWORD *)&index);
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
  v29 = System_String__Concat_63457864((System_String_o *)StringLiteral_17093/*"battle_num_"*/, v28, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(waveNumOnesPlaceSprite, v29, 0);
  waveNumOnesPlaceGlowSprite = this->fields.waveNumOnesPlaceGlowSprite;
  v39 = v27;
  v31 = System_Int32__ToString((int32_t)&v39, 0);
  v32 = System_String__Concat_63496112(
          (System_String_o *)StringLiteral_17093/*"battle_num_"*/,
          v31,
          (System_String_o *)StringLiteral_16549/*"_glow"*/,
          0);
  AtlasManager__SetPartyOrganizationImage(waveNumOnesPlaceGlowSprite, v32, 0);
  waveMaxNumOnesPlaceSprite = this->fields.waveMaxNumOnesPlaceSprite;
  v39 = this->fields.pageMax % 10;
  v34 = System_Int32__ToString((int32_t)&v39, 0);
  v35 = System_String__Concat_63457864((System_String_o *)StringLiteral_17093/*"battle_num_"*/, v34, 0);
  AtlasManager__SetPartyOrganizationImage(waveMaxNumOnesPlaceSprite, v35, 0);
  waveMaxNumOnesPlaceGlowSprite = this->fields.waveMaxNumOnesPlaceGlowSprite;
  v39 = this->fields.pageMax % 10;
  v37 = System_Int32__ToString((int32_t)&v39, 0);
  v38 = System_String__Concat_63496112(
          (System_String_o *)StringLiteral_17093/*"battle_num_"*/,
          v37,
          (System_String_o *)StringLiteral_16549/*"_glow"*/,
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
  __int64 v26; // x3
  __int64 v27; // x4
  struct UnityEngine_GameObject_o *soloBaseObject; // x29
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x3
  int32_t m_CancellationTokenSource; // w2
  int v33; // w8
  intptr_t v34; // x8
  _QWORD *v35; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v37; // x8
  const MethodInfo *v38; // x3
  __int64 v39; // x22
  void *v40; // x9
  UnityEngine_Object_o *pageBaseObject; // x20
  System_Array_o *v42; // x8
  __int64 v43; // x20
  int v44; // w9
  System_String_o *v45; // x1
  int32_t pageMax; // w19
  float v47; // s8
  float v48; // s9
  __int64 v49; // x0
  UnityEngine_Transform_o *parent; // [xsp+8h] [xbp-88h]
  int v51; // [xsp+1Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4C22BF4 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    sub_1C2D490(&EventDelegate_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDelegate__get_Item__);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_UISprite___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&UISprite___TypeInfo);
    sub_1C2D490(&StringLiteral_20564/*"img_slider_off"*/);
    this = (PartyListViewIndicator_o *)sub_1C2D490(&StringLiteral_9870/*"OnClickTabParty"*/);
    byte_4C22BF4 = 1;
  }
  p_pageSpriteList = (System_Array_o **)&v4->fields.pageSpriteList;
  pageSpriteList = (System_Array_o *)v4->fields.pageSpriteList;
  if ( !pageSpriteList )
    goto LABEL_67;
  if ( SLODWORD(pageSpriteList[1].monitor) < max )
  {
    this = (PartyListViewIndicator_o *)sub_1C2D538(UISprite___TypeInfo, (unsigned int)max);
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
      sub_1C2D6F4(this, *(_QWORD *)&max, method);
    this = (PartyListViewIndicator_o *)v11[2].klass;
    if ( !this )
      goto LABEL_67;
    x = localPosition.fields.x;
    y = localPosition.fields.y;
    z = localPosition.fields.z;
    this = (PartyListViewIndicator_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_67;
    v53 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    if ( !*p_pageSpriteList || !v7 )
      goto LABEL_67;
    monitor = (int)(*p_pageSpriteList)[1].monitor;
    if ( monitor < SLODWORD(v7->fields.m_CancellationTokenSource) )
    {
      v18 = x - v53.fields.x;
      v19 = y - v53.fields.y;
      v20 = z - v53.fields.z;
      v21 = (CGThumbnailListItem_o *)(&v7->fields.soloBaseObject + monitor);
      while ( 1 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (PartyListViewIndicator_o *)UnityEngine_Object__Instantiate_object__51752420(
                                             klass,
                                             parent,
                                             (const MethodInfo_315ADE4 *)Method_UnityEngine_Object_Instantiate_UISprite___);
        if ( !this )
          break;
        v22 = (UnityEngine_Component_o *)this;
        this = (PartyListViewIndicator_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        if ( !this )
          break;
        v54.fields.z = v20 * (float)monitor;
        v54.fields.y = v19 * (float)monitor;
        v54.fields.x = v18 * (float)monitor;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v54, 0);
        this = (PartyListViewIndicator_o *)UnityEngine_Component__GetComponent_object_(
                                             v22,
                                             (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
        if ( !this )
          break;
        v23 = this;
        this = (PartyListViewIndicator_o *)this->fields.selectNameLabel;
        if ( !this )
          break;
        this = (PartyListViewIndicator_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)this,
                                             0,
                                             (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventDelegate__get_Item__);
        if ( !this )
          break;
        m_CachedPtr = (UnityEngine_MonoBehaviour_o *)this->fields.m_CachedPtr;
        v25 = (EventDelegate_o *)sub_1C2D6DC(EventDelegate_TypeInfo);
        EventDelegate___ctor_49171260(v25, m_CachedPtr, (System_String_o *)StringLiteral_9870/*"OnClickTabParty"*/, 0);
        if ( !v25 )
          break;
        this = (PartyListViewIndicator_o *)EventDelegate__get_parameters(v25, 0);
        if ( !this )
          break;
        if ( !LODWORD(this->fields.m_CancellationTokenSource) )
          goto LABEL_74;
        soloBaseObject = this->fields.soloBaseObject;
        v51 = monitor;
        this = (PartyListViewIndicator_o *)j_il2cpp_value_box_0(int_TypeInfo, &v51, method, v26, v27);
        if ( !soloBaseObject )
          break;
        soloBaseObject[1].monitor = this;
        sub_1C2D434((CGThumbnailListItem_o *)&soloBaseObject[1].monitor, (int32_t)this, v29, v30);
        this = (PartyListViewIndicator_o *)v23->fields.selectNameLabel;
        if ( !this )
          break;
        m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
        v33 = HIDWORD(this->fields.m_CancellationTokenSource) + 1;
        LODWORD(this->fields.m_CancellationTokenSource) = 0;
        HIDWORD(this->fields.m_CancellationTokenSource) = v33;
        if ( m_CancellationTokenSource >= 1 )
        {
          System_Array__Clear((System_Array_o *)this->fields.m_CachedPtr, 0, m_CancellationTokenSource, 0);
          this = (PartyListViewIndicator_o *)v23->fields.selectNameLabel;
          if ( !this )
            break;
        }
        v34 = this->fields.m_CachedPtr;
        v35 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v34 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v34 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v25,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = v34 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v37 + 32) = v25;
          sub_1C2D434((CGThumbnailListItem_o *)(v37 + 32), (int32_t)v25, m_CancellationTokenSource, v31);
        }
        this = (PartyListViewIndicator_o *)sub_1C2D5CC(v22, v7->klass->_1.element_class);
        if ( !this )
        {
          v49 = sub_1C2D710();
          sub_1C2D5B8(v49, 0);
        }
        if ( (unsigned int)monitor >= LODWORD(v7->fields.m_CancellationTokenSource) )
          goto LABEL_74;
        v21->klass = (CGThumbnailListItem_c *)v22;
        sub_1C2D434(v21, (int32_t)v22, (int32_t)method, v38);
        ++monitor;
        v21 = (CGThumbnailListItem_o *)((char *)v21 + 8);
        if ( monitor >= SLODWORD(v7->fields.m_CancellationTokenSource) )
          goto LABEL_43;
      }
LABEL_67:
      sub_1C2D6EC(this, *(_QWORD *)&max);
    }
LABEL_43:
    *p_pageSpriteList = (System_Array_o *)v7;
    sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.pageSpriteList, (int32_t)v7, v15, v16);
    pageSpriteList = *p_pageSpriteList;
    if ( !*p_pageSpriteList )
      goto LABEL_67;
  }
  v39 = 0;
  while ( 1 )
  {
    v40 = pageSpriteList[1].monitor;
    if ( (int)v39 >= (int)v40 )
      break;
    if ( (unsigned int)v39 >= (unsigned int)v40 )
      goto LABEL_74;
    this = (PartyListViewIndicator_o *)*((_QWORD *)&pageSpriteList[2].klass + v39);
    if ( this )
    {
      this = (PartyListViewIndicator_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (int)v39 < max, 0);
        pageSpriteList = *p_pageSpriteList;
        ++v39;
        if ( *p_pageSpriteList )
          continue;
      }
    }
    goto LABEL_67;
  }
  if ( (int)v40 >= max )
    LODWORD(v40) = max;
  v4->fields.pageMax = (int)v40;
  v4->fields.pageIndex = -1;
  if ( (int)v40 <= 1 )
    v4->fields.pageMax = 0;
  pageBaseObject = (UnityEngine_Object_o *)v4->fields.pageBaseObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PartyListViewIndicator_o *)UnityEngine_Object__op_Inequality(pageBaseObject, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v42 = *p_pageSpriteList;
    if ( !*p_pageSpriteList )
      goto LABEL_67;
    v43 = 0;
    while ( 1 )
    {
      v44 = (int)v42[1].monitor;
      if ( (int)v43 >= v44 )
        break;
      if ( (unsigned int)v43 >= v44 )
        goto LABEL_74;
      this = (PartyListViewIndicator_o *)*((_QWORD *)&v42[2].klass + v43);
      if ( this )
      {
        v45 = (int)v43 >= v4->fields.pageMax ? 0LL : (System_String_o *)StringLiteral_20564/*"img_slider_off"*/;
        UISprite__set_spriteName((UISprite_o *)this, v45, 0);
        v42 = (System_Array_o *)v4->fields.pageSpriteList;
        ++v43;
        if ( v42 )
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
    v55 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    this = (PartyListViewIndicator_o *)v4->fields.pageBaseObject;
    if ( !this )
      goto LABEL_67;
    pageMax = v4->fields.pageMax;
    v47 = v55.fields.y;
    v48 = v55.fields.z;
    this = (PartyListViewIndicator_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !this )
      goto LABEL_67;
    v56.fields.x = (float)(-10 * pageMax + 10);
    v56.fields.y = v47;
    v56.fields.z = v48;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v56, 0);
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
  if ( (byte_4C22BF9 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_10213/*"PARTY_ORGANIZATION_COST_SPLIT"*/);
    sub_1C2D490(&StringLiteral_10211/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/);
    sub_1C2D490(&StringLiteral_10212/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/);
    sub_1C2D490(&StringLiteral_10210/*"PARTY_ORGANIZATION_COST_COLOR"*/);
    this = (PartyListViewIndicator_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22BF9 = 1;
  }
  v18 = 0;
  if ( !partyItem )
LABEL_22:
    sub_1C2D6EC(this, partyItem);
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
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_10210/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0);
    goto LABEL_12;
  }
  if ( !v8 )
    goto LABEL_11;
LABEL_9:
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_10212/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0);
  v19 = TotalCostRestriction;
LABEL_12:
  maxCostLabel = v4->fields.maxCostLabel;
  v11 = System_Int32__ToString((int32_t)&v19, 0);
  this = (PartyListViewIndicator_o *)System_String__Concat_63457864(v9, v11, 0);
  if ( !maxCostLabel )
    goto LABEL_22;
  UILabel__set_text(maxCostLabel, (System_String_o *)this, 0);
  splitCostLabel = v4->fields.splitCostLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_10213/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0);
  this = (PartyListViewIndicator_o *)System_String__Concat_63457864(v9, v13, 0);
  if ( !splitCostLabel )
    goto LABEL_22;
  UILabel__set_text(splitCostLabel, (System_String_o *)this, 0);
  cost = partyItem->fields.cost;
  selectCostLabel = v4->fields.selectCostLabel;
  if ( cost > v19 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_10211/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0);
    cost = partyItem->fields.cost;
    v9 = v16;
  }
  v18 = cost;
  v17 = System_Int32__ToString((int32_t)&v18, 0);
  this = (PartyListViewIndicator_o *)System_String__Concat_63457864(v9, v17, 0);
  if ( !selectCostLabel )
    goto LABEL_22;
  UILabel__set_text(selectCostLabel, (System_String_o *)this, 0);
}