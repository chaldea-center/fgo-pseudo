void PartyListViewIndicator___ctor(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  struct System_Int32_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596BED8 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    byte_596BED8 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct System_Int32_array *)sub_2213B20(int___TypeInfo, (unsigned int)(v4->static_fields->DeckMax + 1));
  this->fields.useLimitEquip = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.useLimitEquip, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.isScrollEnabled = 1;
  this->fields.ICON_NORMAL_COLOR = _Q0;
  this->fields.ICON_MASK_COLOR = (struct UnityEngine_Color_o)xmmword_E9C860;
  ListViewIndicator___ctor((ListViewIndicator_o *)this, 0);
}


void PartyListViewIndicator__Awake(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UISprite_o *indexSprite; // x9
  struct UIAtlas_o *mAtlas; // x1

  indexSprite = this->fields.indexSprite;
  if ( !indexSprite )
    sub_2213CDC(this, method);
  mAtlas = indexSprite->fields.mAtlas;
  this->fields.indexLocalAtlas = mAtlas;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.indexLocalAtlas,
    (int32_t)mAtlas,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(limitMasterFormationButton, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewIndicator__DispFriendPointUpBonus(
        PartyListViewIndicator_o *this,
        int32_t bonusVal,
        const MethodInfo *method)
{
  UnityEngine_Object_o *friendPointUpBonusSprite; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *friendPointUpBonusLabel; // x21
  __int64 v9; // x1
  unsigned int v10; // kr00_4
  UILabel_o *v11; // x20
  UnityEngine_Component_o *gameObject; // x0
  unsigned int v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596BED7 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BED7 = 1;
  }
  friendPointUpBonusSprite = (UnityEngine_Object_o *)this->fields.friendPointUpBonusSprite;
  v13 = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&bonusVal, method);
  if ( UnityEngine_Object__op_Inequality(friendPointUpBonusSprite, 0, 0) )
  {
    friendPointUpBonusLabel = (UnityEngine_Object_o *)this->fields.friendPointUpBonusLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
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
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
            return;
          }
        }
      }
      else
      {
        v10 = bonusVal;
        v11 = this->fields.friendPointUpBonusLabel;
        v13 = v10 / 0x3E8;
        gameObject = (UnityEngine_Component_o *)System_Int32__ToString((int32_t)&v13, 0);
        if ( v11 )
        {
          UILabel__set_text(v11, (System_String_o *)gameObject, 0);
          gameObject = (UnityEngine_Component_o *)this->fields.friendPointUpBonusSprite;
          if ( gameObject )
          {
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
            if ( gameObject )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
              return;
            }
          }
        }
      }
      sub_2213CDC(gameObject, v9);
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
  const MethodInfo *v9; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  __int64 v11; // x2
  struct QuestRestrictionInfo_o *v12; // x8
  char v13; // w21
  unsigned int index; // w24
  __int64 v15; // x1
  __int64 v16; // x2
  UISprite_o *masterEquipBackSprite; // x22
  __int64 v18; // x2
  DataManager_o *v19; // x22
  unsigned __int64 v20; // x25
  struct System_Int32_array *useLimitEquip; // x28
  signed __int64 m_CancellationTokenSource_low; // x8
  char *v23; // x9
  __int64 v24; // x1
  __int64 v25; // x2
  UISprite_o *limitEquipFixSprite; // x19
  struct System_Int32_array *v27; // x9
  char *v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  Il2CppObject *Component_object; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  Il2CppObject *v34; // x20
  EventEquipSkillReleaseEntity_o *outEnt; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_596BED0 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_20079/*"event_emblem_frame"*/);
    sub_2213A60(&StringLiteral_21162/*"icon_equip_fixation"*/);
    sub_2213A60(&StringLiteral_8629/*"LIMIT_EQUIP_SETTING"*/);
    sub_2213A60(&StringLiteral_18286/*"btn_skill_off"*/);
    sub_2213A60(&StringLiteral_20078/*"event_emblem_dim"*/);
    sub_2213A60(&StringLiteral_18287/*"btn_skill_on"*/);
    byte_596BED0 = 1;
  }
  outEnt = 0;
  if ( !PartyListViewIndicator__IsEventOnlyEquip(this, (const MethodInfo *)partyItem) )
  {
    PartyListViewIndicator__ClearEventLimitEquip(this, v7);
    return;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !Instance )
    goto LABEL_71;
  if ( !EventEquipSkillReleaseMaster__tryGetOpenEventEquipSkillReleaseEntity(
          (EventEquipSkillReleaseMaster_o *)Instance,
          questRestrictionInfo->fields.eventId,
          &outEnt,
          0) )
  {
    PartyListViewIndicator__ClearEventLimitEquip(this, v9);
    return;
  }
  Instance = (DataManager_o *)outEnt;
  if ( !outEnt )
    goto LABEL_71;
  Instance = (DataManager_o *)EventEquipSkillReleaseEntity__isForceOverwrite(outEnt, 0);
  if ( !partyItem )
    goto LABEL_71;
  v12 = partyItem->fields.questRestrictionInfo;
  v13 = (char)Instance;
  if ( v12 )
    LOBYTE(v12) = v12->fields.eventDeckNum > 0;
  if ( ((unsigned __int8)v12 & 1) != 0 || (unsigned int)(partyItem->fields.menuKind - 1) <= 6 )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9, v11);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    index = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 164LL);
  }
  else
  {
    index = partyItem->fields.index;
  }
  if ( !outEnt )
    goto LABEL_71;
  Instance = (DataManager_o *)this->fields.limitEquipIcon;
  if ( !Instance )
    goto LABEL_71;
  ItemIconComponent__SetEquipItem((ItemIconComponent_o *)Instance, outEnt->fields.overwriteEquipIconId, 0);
  masterEquipBackSprite = this->fields.masterEquipBackSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v15, v16);
  AtlasManager__SetEventUI(masterEquipBackSprite, (System_String_o *)StringLiteral_20078/*"event_emblem_dim"*/, 0);
  AtlasManager__SetEventUI(this->fields.masterEquipFrameSprite, (System_String_o *)StringLiteral_20079/*"event_emblem_frame"*/, 0);
  if ( !this->fields.isChkSave )
  {
    if ( (v13 & 1) == 0 )
    {
      Instance = (DataManager_o *)UnityEngine_PlayerPrefs__GetString_83398240((System_String_o *)StringLiteral_8629/*"LIMIT_EQUIP_SETTING"*/, 0);
      if ( !Instance )
        goto LABEL_71;
      if ( SLODWORD(Instance->fields.m_CachedPtr) >= 1 )
      {
        Instance = (DataManager_o *)System_String__Split((System_String_o *)Instance, 0x2Cu, 0, 0);
        if ( !Instance )
          goto LABEL_71;
        v19 = Instance;
        if ( SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
        {
          v20 = 0;
          do
          {
            Instance = (DataManager_o *)BalanceConfig_TypeInfo;
            if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9, v18);
              Instance = (DataManager_o *)BalanceConfig_TypeInfo;
            }
            if ( (__int64)v20 > *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 164LL) )
              break;
            if ( v20 >= LODWORD(v19->fields.m_CancellationTokenSource) )
              goto LABEL_72;
            useLimitEquip = this->fields.useLimitEquip;
            Instance = (DataManager_o *)System_Int32__Parse(*((System_String_o **)&v19->fields._DispLog + v20), 0);
            if ( !useLimitEquip )
              goto LABEL_71;
            if ( v20 >= LODWORD(useLimitEquip->max_length) )
              goto LABEL_72;
            m_CancellationTokenSource_low = SLODWORD(v19->fields.m_CancellationTokenSource);
            v23 = (char *)useLimitEquip + 4 * v20++;
            *((_DWORD *)v23 + 8) = (_DWORD)Instance;
          }
          while ( (__int64)v20 < m_CancellationTokenSource_low );
        }
      }
    }
    this->fields.isChkSave = 1;
  }
  Instance = (DataManager_o *)this->fields.limitMasterFormationButton;
  if ( (v13 & 1) == 0 )
  {
    if ( !Instance )
      goto LABEL_71;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_71;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    v27 = this->fields.useLimitEquip;
    v28 = (char *)v27 + 4 * (int)index;
    if ( isChng )
    {
      if ( !v27 )
        goto LABEL_71;
      if ( index >= LODWORD(v27->max_length) )
        goto LABEL_72;
      *((_DWORD *)v28 + 8) = *((_DWORD *)v28 + 8) == 0;
    }
    else if ( !v27 )
    {
      goto LABEL_71;
    }
    if ( index < LODWORD(v27->max_length) )
    {
      Instance = (DataManager_o *)this->fields.limitMasterFormationButton;
      if ( *((_DWORD *)v28 + 8) )
      {
        if ( Instance )
        {
          Component_object = UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)Instance,
                               (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v29, v30);
          AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_18287/*"btn_skill_on"*/, 0);
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
      }
      else if ( Instance )
      {
        v34 = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)Instance,
                (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v32, v33);
        AtlasManager__SetEventUI((UISprite_o *)v34, (System_String_o *)StringLiteral_18286/*"btn_skill_off"*/, 0);
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
LABEL_71:
      sub_2213CDC(Instance, v9);
    }
LABEL_72:
    sub_2213CE4(Instance);
  }
  if ( !Instance )
    goto LABEL_71;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.masterEquipIcon1;
  if ( !Instance )
    goto LABEL_71;
  ItemIconComponent__SetColor((ItemIconComponent_o *)Instance, this->fields.ICON_MASK_COLOR, 0);
  Instance = (DataManager_o *)this->fields.masterEquipIcon2;
  if ( !Instance )
    goto LABEL_71;
  ItemIconComponent__SetColor((ItemIconComponent_o *)Instance, this->fields.ICON_MASK_COLOR, 0);
  limitEquipFixSprite = this->fields.limitEquipFixSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v24, v25);
  AtlasManager__SetEventUI(limitEquipFixSprite, (System_String_o *)StringLiteral_21162/*"icon_equip_fixation"*/, 0);
}


void PartyListViewIndicator__DrawPartyInfo(
        PartyListViewIndicator_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  PartyListViewItem_o *v3; // x20
  int32_t menuKind; // w8
  UnityEngine_GameObject_o *soloBaseObject; // x0
  UISprite_o *v7; // x21
  bool v8; // w1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  const MethodInfo *v21; // x2
  QuestRestrictionInfo_o *v22; // x0
  const MethodInfo *v23; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  UISprite_o *v25; // x21
  int32_t servantNumMax; // w1
  const MethodInfo *v27; // x2
  QuestRestrictionInfo_o *v28; // x0
  struct QuestRestrictionInfo_o *v29; // x8
  __int64 v30; // x1
  BalanceConfig_c *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  UILabel_o *selectNameLabel; // x21
  System_String_o *v35; // x0
  UICommonButton_o *masterEquipButton; // x21
  struct QuestRestrictionInfo_o *v37; // x8
  struct QuestRestrictionInfo_o *v38; // x8
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x1
  QuestRestrictionInfo_o *v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  UILabel_o *masterEquipFixedLabel; // x21
  bool v45; // w1
  Il2CppObject *Entity; // x0
  const MethodInfo *v47; // x3
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  il2cpp_array_size_t max_length; // x9
  int32_t v51; // w21
  ServantEntity_array *SvtEntityList; // x22
  const MethodInfo *v53; // x1
  System_String_array *SvtNameList; // x23
  const MethodInfo *v55; // x1
  System_Boolean_array *IsFollowerList; // x24
  EventPartyMargeUpValInfo_o *v57; // x25
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  const MethodInfo *v64; // x3
  const MethodInfo *v65; // x2
  EventUpValInfo_array *v66; // x8
  unsigned __int64 v67; // x20
  unsigned __int64 max_length_low; // x9
  EventPartyMargeUpValInfo_o *eventMargeUpValInfo; // x21
  EventUpValInfo_array *v70; // [xsp+0h] [xbp-70h] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *equipName; // [xsp+10h] [xbp-60h] BYREF
  int32_t maxLv; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t condUsrLv[2]; // [xsp+20h] [xbp-50h] BYREF
  __int64 genderImageId; // [xsp+28h] [xbp-48h] BYREF

  v3 = partyItem;
  if ( (byte_596BECE & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_2213A60(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_2213A60(&EventPartyMargeUpValInfo_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&StringLiteral_10668/*"PARTY_ORGANIZATION_NAME"*/);
    sub_2213A60(&StringLiteral_24812/*"solo_bg"*/);
    sub_2213A60(&StringLiteral_10667/*"PARTY_ORGANIZATION_MASTER_EQUIP_FIXED"*/);
    sub_2213A60(&StringLiteral_24848/*"specialparty_bg"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BECE = 1;
  }
  *(_QWORD *)condUsrLv = 0;
  genderImageId = 0;
  maxLv = 0;
  detail = 0;
  equipName = 0;
  v70 = 0;
  if ( !v3 )
  {
    soloBaseObject = this->fields.soloBaseObject;
    if ( soloBaseObject )
    {
      UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
      soloBaseObject = this->fields.organizationNumObject;
      if ( soloBaseObject )
      {
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
        soloBaseObject = this->fields.indexBaseObject;
        if ( soloBaseObject )
        {
          UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
          soloBaseObject = this->fields.selectNameBaseObject;
          if ( soloBaseObject )
          {
            UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
            soloBaseObject = this->fields.costBaseObject;
            if ( soloBaseObject )
            {
              UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
              soloBaseObject = (UnityEngine_GameObject_o *)this->fields.selectNameLabel;
              if ( soloBaseObject )
              {
                UILabel__set_text((UILabel_o *)soloBaseObject, (System_String_o *)StringLiteral_1/*""*/, 0);
                soloBaseObject = (UnityEngine_GameObject_o *)this->fields.maxCostLabel;
                if ( soloBaseObject )
                {
                  UILabel__set_text((UILabel_o *)soloBaseObject, (System_String_o *)StringLiteral_1/*""*/, 0);
                  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.splitCostLabel;
                  if ( soloBaseObject )
                  {
                    UILabel__set_text((UILabel_o *)soloBaseObject, (System_String_o *)StringLiteral_1/*""*/, 0);
                    soloBaseObject = (UnityEngine_GameObject_o *)this->fields.selectCostLabel;
                    if ( soloBaseObject )
                    {
                      UILabel__set_text((UILabel_o *)soloBaseObject, (System_String_o *)StringLiteral_1/*""*/, 0);
                      soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipIcon1;
                      if ( soloBaseObject )
                      {
                        ItemIconComponent__Clear((ItemIconComponent_o *)soloBaseObject, 0);
                        soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipIcon2;
                        if ( soloBaseObject )
                        {
                          ItemIconComponent__Clear((ItemIconComponent_o *)soloBaseObject, 0);
                          this->fields.questRestrictionInfo = 0;
                          sub_2213A04(
                            (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
                            0,
                            v9,
                            v10,
                            v11,
                            v12,
                            v13,
                            v14);
                          this->fields.eventMargeUpValInfo = 0;
                          sub_2213A04(
                            (MissionNaviTransitionBoardItem_o *)&this->fields.eventMargeUpValInfo,
                            0,
                            v15,
                            v16,
                            v17,
                            v18,
                            v19,
                            v20);
                          soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEventPointIndicator;
                          if ( soloBaseObject )
                          {
                            PartyEventPointIndicator__SetTotalDropItemList(
                              (PartyEventPointIndicator_o *)soloBaseObject,
                              (EventPartyMargeUpValInfo_o *)partyItem,
                              v21);
                            return;
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
    goto LABEL_124;
  }
  menuKind = this->fields.menuKind;
  if ( menuKind <= 3 )
  {
    switch ( menuKind )
    {
      case 1:
        goto LABEL_8;
      case 2:
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_124;
        soloBaseObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       soloBaseObject,
                                                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !this->fields.soloBaseObject )
          goto LABEL_124;
        v25 = (UISprite_o *)soloBaseObject;
        UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0);
        if ( !v25 )
          goto LABEL_124;
        UISprite__set_spriteName(v25, (System_String_o *)StringLiteral_24848/*"specialparty_bg"*/, 0);
        ((void (__fastcall *)(UISprite_o *, const MethodInfo *))v25->klass->vtable._33_MakePixelPerfect.methodPtr)(
          v25,
          v25->klass->vtable._33_MakePixelPerfect.method);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_124;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
        goto LABEL_83;
      case 3:
LABEL_8:
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_124;
        soloBaseObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       soloBaseObject,
                                                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !this->fields.soloBaseObject )
          goto LABEL_124;
        v7 = (UISprite_o *)soloBaseObject;
        UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0);
        if ( !v7 )
          goto LABEL_124;
        UISprite__set_spriteName(v7, (System_String_o *)StringLiteral_24812/*"solo_bg"*/, 0);
        ((void (__fastcall *)(UISprite_o *, const MethodInfo *))v7->klass->vtable._33_MakePixelPerfect.methodPtr)(
          v7,
          v7->klass->vtable._33_MakePixelPerfect.method);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_124;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
        soloBaseObject = this->fields.indexBaseObject;
        if ( !soloBaseObject )
          goto LABEL_124;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
        soloBaseObject = this->fields.selectNameBaseObject;
        if ( !soloBaseObject )
          goto LABEL_124;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
        soloBaseObject = this->fields.costBaseObject;
        if ( !soloBaseObject )
          goto LABEL_124;
        v8 = 0;
        goto LABEL_88;
    }
    goto LABEL_56;
  }
  if ( (unsigned int)(menuKind - 4) < 2 )
  {
    soloBaseObject = this->fields.soloBaseObject;
    if ( !soloBaseObject )
      goto LABEL_124;
    UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
    soloBaseObject = this->fields.organizationNumObject;
    if ( !soloBaseObject )
      goto LABEL_124;
    UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_83;
    goto LABEL_45;
  }
  if ( (unsigned int)(menuKind - 6) < 2 )
  {
    soloBaseObject = this->fields.soloBaseObject;
    if ( !soloBaseObject )
      goto LABEL_124;
    UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
    soloBaseObject = this->fields.organizationNumObject;
    if ( !soloBaseObject )
      goto LABEL_124;
    UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0);
    v22 = this->fields.questRestrictionInfo;
    if ( !v22 )
      goto LABEL_83;
    soloBaseObject = (UnityEngine_GameObject_o *)QuestRestrictionInfo__IsServantNum(v22, 0);
    if ( ((unsigned __int8)soloBaseObject & 1) == 0 )
    {
      soloBaseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !soloBaseObject )
        goto LABEL_124;
      soloBaseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)soloBaseObject,
                                                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
      v37 = this->fields.questRestrictionInfo;
      if ( !v37 )
        goto LABEL_124;
      if ( !soloBaseObject )
        goto LABEL_124;
      soloBaseObject = (UnityEngine_GameObject_o *)NpcFollowerMaster__GetQuestFollowerList(
                                                     (NpcFollowerMaster_o *)soloBaseObject,
                                                     v37->fields.questId,
                                                     v37->fields.questPhase,
                                                     0);
      v38 = this->fields.questRestrictionInfo;
      if ( !v38 || !soloBaseObject )
        goto LABEL_124;
      servantNumMax = v38->fields.myServantNumMax + LODWORD(soloBaseObject[1].klass);
      goto LABEL_82;
    }
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_124;
LABEL_45:
    servantNumMax = questRestrictionInfo->fields.servantNumMax;
LABEL_82:
    PartyListViewIndicator__SetEventDeckPartyName(this, servantNumMax, v23);
LABEL_83:
    soloBaseObject = this->fields.indexBaseObject;
    if ( !soloBaseObject )
      goto LABEL_124;
    UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
    soloBaseObject = this->fields.selectNameBaseObject;
    if ( !soloBaseObject )
      goto LABEL_124;
    UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
LABEL_86:
    soloBaseObject = this->fields.costBaseObject;
    if ( !soloBaseObject )
      goto LABEL_124;
    v8 = 1;
LABEL_88:
    UnityEngine_GameObject__SetActive(soloBaseObject, v8, 0);
    goto LABEL_89;
  }
  if ( menuKind != 9 )
  {
LABEL_56:
    v29 = this->fields.questRestrictionInfo;
    if ( !v29 || v29->fields.eventDeckNum < 1 )
    {
      soloBaseObject = this->fields.soloBaseObject;
      if ( !soloBaseObject )
        goto LABEL_124;
      UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
      soloBaseObject = this->fields.organizationNumObject;
      if ( !soloBaseObject )
        goto LABEL_124;
      UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
      soloBaseObject = this->fields.indexBaseObject;
      if ( !soloBaseObject )
        goto LABEL_124;
      UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0);
      soloBaseObject = this->fields.selectNameBaseObject;
      if ( !soloBaseObject )
        goto LABEL_124;
      UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0);
      selectNameLabel = this->fields.selectNameLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32, v33);
      v35 = LocalizationManager__Get((System_String_o *)StringLiteral_10668/*"PARTY_ORGANIZATION_NAME"*/, 0);
      soloBaseObject = (UnityEngine_GameObject_o *)System_String__Format(v35, (Il2CppObject *)v3->fields.deckName, 0);
      if ( !selectNameLabel )
        goto LABEL_124;
      UILabel__set_text(selectNameLabel, (System_String_o *)soloBaseObject, 0);
      goto LABEL_86;
    }
    soloBaseObject = this->fields.soloBaseObject;
    if ( !soloBaseObject )
      goto LABEL_124;
    UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
    soloBaseObject = this->fields.organizationNumObject;
    if ( !soloBaseObject )
      goto LABEL_124;
    UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0);
    v31 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v30, v23);
      v31 = BalanceConfig_TypeInfo;
    }
    servantNumMax = v31->static_fields->DeckMemberMax;
    goto LABEL_82;
  }
  soloBaseObject = this->fields.soloBaseObject;
  if ( !soloBaseObject )
    goto LABEL_124;
  UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
  soloBaseObject = this->fields.organizationNumObject;
  if ( !soloBaseObject )
    goto LABEL_124;
  UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
  soloBaseObject = this->fields.indexBaseObject;
  if ( !soloBaseObject )
    goto LABEL_124;
  UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0);
  soloBaseObject = this->fields.selectNameBaseObject;
  if ( !soloBaseObject )
    goto LABEL_124;
  UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
  soloBaseObject = this->fields.costBaseObject;
  if ( !soloBaseObject )
    goto LABEL_124;
  UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0);
  v28 = this->fields.questRestrictionInfo;
  if ( v28 && QuestRestrictionInfo__IsWaveSetupSwitchParty(v28, 0) )
  {
    soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEventPointIndicator;
    if ( !soloBaseObject )
      goto LABEL_124;
    PartyEventPointIndicator__SetUnknown((PartyEventPointIndicator_o *)soloBaseObject, (const MethodInfo *)partyItem);
  }
  else
  {
    soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEventPointIndicator;
    if ( !soloBaseObject )
      goto LABEL_124;
    soloBaseObject = (UnityEngine_GameObject_o *)PartyEventPointIndicator__SetTrendDisp(
                                                   (PartyEventPointIndicator_o *)soloBaseObject,
                                                   v3->fields.trendDispWaveBattleEnemyClassIds,
                                                   v27);
  }
  masterEquipButton = this->fields.masterEquipButton;
  if ( v3->fields._IsWaveBattleRestart_k__BackingField )
  {
    soloBaseObject = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !soloBaseObject )
      goto LABEL_124;
    partyItem = (PartyListViewItem_o *)(LODWORD(soloBaseObject[6].klass) == 1);
  }
  else
  {
    partyItem = (PartyListViewItem_o *)(&dword_0 + 1);
  }
  if ( !masterEquipButton )
    goto LABEL_124;
  UICommonButton__SetEnable(masterEquipButton, (bool)partyItem, 0);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partySwapButton;
  if ( !soloBaseObject )
    goto LABEL_124;
  UICommonButton__SetEnable((UICommonButton_o *)soloBaseObject, !v3->fields._IsClearedWave_k__BackingField, 0);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.autoOrganizationButton;
  if ( !soloBaseObject )
    goto LABEL_124;
  UICommonButton__SetEnable((UICommonButton_o *)soloBaseObject, !v3->fields._IsClearedWave_k__BackingField, 0);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEditButton;
  if ( !soloBaseObject )
    goto LABEL_124;
  UICommonButton__SetEnable((UICommonButton_o *)soloBaseObject, !v3->fields._IsClearedWave_k__BackingField, 0);
LABEL_89:
  PartyListViewIndicator__UpdateCost(this, v3, v39);
  PartyListViewItem__CheckRestriction(v3, v40);
  v41 = this->fields.questRestrictionInfo;
  if ( v41 && QuestRestrictionInfo__TryGetFixedMasterEquipInfo(v41, (int32_t *)&genderImageId, 0) )
  {
    masterEquipFixedLabel = this->fields.masterEquipFixedLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v42, v43);
    soloBaseObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10667/*"PARTY_ORGANIZATION_MASTER_EQUIP_FIXED"*/, 0);
    if ( !masterEquipFixedLabel )
      goto LABEL_124;
    UILabel__set_text(masterEquipFixedLabel, (System_String_o *)soloBaseObject, 0);
    soloBaseObject = this->fields.masterEquipFixedObject;
    if ( !soloBaseObject )
      goto LABEL_124;
    UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0);
    soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipIcon1;
    if ( !soloBaseObject )
      goto LABEL_124;
    ItemIconComponent__SetEquipItem((ItemIconComponent_o *)soloBaseObject, genderImageId, 0);
    soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipIcon2;
    if ( !soloBaseObject )
      goto LABEL_124;
    ItemIconComponent__SetEquipItem((ItemIconComponent_o *)soloBaseObject, genderImageId, 0);
    soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipButton;
    if ( !soloBaseObject )
      goto LABEL_124;
    v45 = 0;
    goto LABEL_109;
  }
  soloBaseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !soloBaseObject )
    goto LABEL_124;
  soloBaseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)soloBaseObject,
                                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEquipMaster___);
  if ( !soloBaseObject )
    goto LABEL_124;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)soloBaseObject,
             v3->fields.userEquipId,
             (const MethodInfo_3F13190 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  if ( Entity )
  {
    UserEquipEntity__getEquipInfo((UserEquipEntity_o *)Entity, condUsrLv, &maxLv, &equipName, &detail, &condUsrLv[1], 0);
    soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipIcon1;
    if ( !soloBaseObject )
      goto LABEL_124;
    ItemIconComponent__SetEquipItem((ItemIconComponent_o *)soloBaseObject, condUsrLv[1], 0);
    soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipIcon2;
    if ( !soloBaseObject )
      goto LABEL_124;
    ItemIconComponent__SetEquipItem((ItemIconComponent_o *)soloBaseObject, condUsrLv[1], 0);
  }
  soloBaseObject = this->fields.masterEquipFixedObject;
  if ( !soloBaseObject )
    goto LABEL_124;
  UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0);
  if ( this->fields.menuKind != 9 )
  {
    soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipButton;
    if ( !soloBaseObject )
      goto LABEL_124;
    v45 = 1;
LABEL_109:
    UICommonButton__SetEnable((UICommonButton_o *)soloBaseObject, v45, 0);
  }
  PartyListViewIndicator__DrawEventLimitEquip(this, v3, 0, v47);
  setupInfo = this->fields.setupInfo;
  if ( !setupInfo )
    goto LABEL_115;
  eventIdList = setupInfo->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_124;
  max_length = eventIdList->max_length;
  if ( max_length )
  {
    if ( !(_DWORD)max_length )
LABEL_133:
      sub_2213CE4(soloBaseObject);
    v51 = eventIdList->m_Items[0];
  }
  else
  {
LABEL_115:
    v51 = 0;
  }
  HIDWORD(genderImageId) = v51;
  SvtEntityList = PartyListViewItem__GetSvtEntityList(v3, (const MethodInfo *)partyItem);
  SvtNameList = PartyListViewItem__GetSvtNameList(v3, v53);
  IsFollowerList = PartyListViewItem__GetIsFollowerList(v3, v55);
  v57 = (EventPartyMargeUpValInfo_o *)sub_2213CCC(EventPartyMargeUpValInfo_TypeInfo);
  EventPartyMargeUpValInfo___ctor(v57, v51, SvtEntityList, SvtNameList, IsFollowerList, 0);
  this->fields.eventMargeUpValInfo = v57;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventMargeUpValInfo,
    (int32_t)v57,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  soloBaseObject = (UnityEngine_GameObject_o *)PartyListViewItem__GetEventUpVal(
                                                 v3,
                                                 (int32_t *)&genderImageId + 1,
                                                 &v70,
                                                 v64);
  v66 = v70;
  if ( !v70 )
    goto LABEL_124;
  v67 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(v66->max_length);
    if ( (__int64)v67 >= (int)max_length_low )
      break;
    if ( v67 >= max_length_low )
      goto LABEL_133;
    soloBaseObject = (UnityEngine_GameObject_o *)v66->m_Items[v67];
    if ( soloBaseObject )
    {
      eventMargeUpValInfo = this->fields.eventMargeUpValInfo;
      soloBaseObject = (UnityEngine_GameObject_o *)EventUpValInfo__GetDropItemList(
                                                     (EventUpValInfo_o *)soloBaseObject,
                                                     v67,
                                                     0);
      if ( !eventMargeUpValInfo )
        goto LABEL_124;
      EventPartyMargeUpValInfo__Add(eventMargeUpValInfo, (EventDropItemUpValInfo_array *)soloBaseObject, 0);
      v66 = v70;
    }
    ++v67;
    if ( !v66 )
      goto LABEL_124;
  }
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEventPointIndicator;
  if ( !soloBaseObject )
LABEL_124:
    sub_2213CDC(soloBaseObject, partyItem);
  PartyEventPointIndicator__SetTotalDropItemList(
    (PartyEventPointIndicator_o *)soloBaseObject,
    (EventPartyMargeUpValInfo_o *)partyItem,
    v65);
}


bool PartyListViewIndicator__IsEventOnlyEquip(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct QuestRestrictionInfo_o *v6; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_596BED6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596BED6 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  entity = 0;
  if ( !questRestrictionInfo )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (v6 = this->fields.questRestrictionInfo) == 0)
    || !Instance )
  {
LABEL_12:
    sub_2213CDC(Instance, v5);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          v6->fields.eventId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
  __int64 v8; // x2
  struct QuestRestrictionInfo_o *v9; // x8
  int32_t DeckMax; // w20
  BalanceConfig_c *v11; // x0
  struct System_Int32_array *useLimitEquip; // x8
  EventEquipSkillReleaseEntity_o *outEnt; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596BED5 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596BED5 = 1;
  }
  outEnt = 0;
  if ( !PartyListViewIndicator__IsEventOnlyEquip(this, (const MethodInfo *)partyItem) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
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
  v9 = partyItem->fields.questRestrictionInfo;
  if ( v9 )
    LOBYTE(v9) = v9->fields.eventDeckNum > 0;
  if ( ((unsigned __int8)v9 & 1) != 0 || (unsigned int)(partyItem->fields.menuKind - 1) <= 6 )
  {
    v11 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6, v8);
      v11 = BalanceConfig_TypeInfo;
    }
    DeckMax = v11->static_fields->DeckMax;
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
    sub_2213CDC(Instance, v6);
  if ( (unsigned int)DeckMax >= LODWORD(useLimitEquip->max_length) )
    sub_2213CE4(Instance);
  return useLimitEquip->m_Items[DeckMax] == 0;
}


void PartyListViewIndicator__OnClickLeft(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *manager; // x20
  __int64 v5; // x1
  ListViewManager_o *v6; // x0
  int32_t *p_pageIndex; // x20
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  struct ListViewManager_o *v10; // x8
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0

  if ( (byte_596BED1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_PartyListViewIndicator_OnClickLeft__);
    byte_596BED1 = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(manager, 0, 0)
    && this->fields.isScrollEnabled
    && (this->fields.pageIndex & 0x80000000) == 0 )
  {
    v6 = this->fields.manager;
    if ( !v6 )
      goto LABEL_22;
    p_pageIndex = &this->fields.pageIndex;
    ListViewManager__BackLoopItem(v6, 0);
    if ( this->fields.pageIndex >= 1 )
    {
      v8 = Method_PartyListViewIndicator_OnClickLeft__;
      if ( (*((_BYTE *)Method_PartyListViewIndicator_OnClickLeft__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_2213A78(Method_PartyListViewIndicator_OnClickLeft__);
      v9 = (System_Reflection_MethodBase_o *)sub_2213A44(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 7, 0, 0);
      v6 = this->fields.manager;
      if ( !v6 )
        goto LABEL_22;
LABEL_20:
      ListViewManager__MoveCenterItem(v6, *p_pageIndex - 1, 1, 0, 0.0, 1, 0);
      return;
    }
    v10 = this->fields.manager;
    if ( !v10 )
      goto LABEL_22;
    if ( v10->fields.isLoop )
    {
      v11 = Method_PartyListViewIndicator_OnClickLeft__;
      if ( (*((_BYTE *)Method_PartyListViewIndicator_OnClickLeft__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_2213A78(Method_PartyListViewIndicator_OnClickLeft__);
      v12 = (System_Reflection_MethodBase_o *)sub_2213A44(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 7, 0, 0);
      v6 = this->fields.manager;
      if ( !v6 )
LABEL_22:
        sub_2213CDC(v6, v5);
      p_pageIndex = &this->fields.pageMax;
      goto LABEL_20;
    }
  }
}


void PartyListViewIndicator__OnClickRight(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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

  if ( (byte_596BED2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_PartyListViewIndicator_OnClickRight__);
    byte_596BED2 = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(manager, 0, 0)
    && this->fields.isScrollEnabled
    && (this->fields.pageIndex & 0x80000000) == 0 )
  {
    v6 = this->fields.manager;
    if ( !v6 )
      goto LABEL_23;
    ListViewManager__FowardLoopItem(v6, 0);
    pageIndex = this->fields.pageIndex;
    if ( (pageIndex & 0x80000000) == 0 && pageIndex < this->fields.pageMax - 1 )
    {
      v8 = Method_PartyListViewIndicator_OnClickRight__;
      if ( (*((_BYTE *)Method_PartyListViewIndicator_OnClickRight__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_2213A78(Method_PartyListViewIndicator_OnClickRight__);
      v9 = (System_Reflection_MethodBase_o *)sub_2213A44(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 7, 0, 0);
      v6 = this->fields.manager;
      if ( v6 )
      {
        v10 = this->fields.pageIndex + 1;
LABEL_21:
        ListViewManager__MoveCenterItem(v6, v10, 1, 0, 0.0, 1, 0);
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
        v12 = (_QWORD *)sub_2213A78(Method_PartyListViewIndicator_OnClickRight__);
      v13 = (System_Reflection_MethodBase_o *)sub_2213A44(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 7, 0, 0);
      v6 = this->fields.manager;
      if ( v6 )
      {
        v10 = 0;
        goto LABEL_21;
      }
LABEL_23:
      sub_2213CDC(v6, v5);
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
  if ( (byte_596BEC9 & 1) == 0 )
  {
    sub_2213A60(&PartyListViewItem_TypeInfo);
    byte_596BEC9 = 1;
  }
  this->fields.manager = manager;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.manager,
    (int32_t)manager,
    (System_String_o *)item,
    (System_String_o *)isTop,
    isBottom,
    isLeft,
    isRight,
    (bool)method);
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
    sub_2213CDC(leftObject, v14);
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
  UnityEngine_GameObject_o *v6; // x19
  __int64 *v7; // x8
  UISprite_o *v8; // x21

  if ( (byte_596BED3 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&StringLiteral_22313/*"limited_bg"*/);
    sub_2213A60(&StringLiteral_24812/*"solo_bg"*/);
    sub_2213A60(&StringLiteral_24936/*"startingonly_bg"*/);
    sub_2213A60(&StringLiteral_23778/*"pair_bg"*/);
    byte_596BED3 = 1;
  }
  organizationNumObject = this->fields.organizationNumObject;
  if ( !organizationNumObject )
    goto LABEL_22;
  organizationNumObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        organizationNumObject,
                                                        (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v6 = organizationNumObject;
  if ( servantNum > 3 )
    goto LABEL_10;
  if ( servantNum != 1 )
  {
    if ( servantNum == 2 )
    {
      if ( organizationNumObject )
      {
        v7 = &StringLiteral_23778/*"pair_bg"*/;
        goto LABEL_20;
      }
      goto LABEL_22;
    }
    if ( servantNum == 3 )
    {
      if ( organizationNumObject )
      {
        v7 = &StringLiteral_24936/*"startingonly_bg"*/;
LABEL_20:
        UISprite__set_spriteName((UISprite_o *)organizationNumObject, (System_String_o *)*v7, 0);
        goto LABEL_21;
      }
      goto LABEL_22;
    }
LABEL_10:
    if ( organizationNumObject )
    {
      v7 = &StringLiteral_22313/*"limited_bg"*/;
      goto LABEL_20;
    }
LABEL_22:
    sub_2213CDC(organizationNumObject, *(_QWORD *)&servantNum);
  }
  organizationNumObject = this->fields.soloBaseObject;
  if ( !organizationNumObject )
    goto LABEL_22;
  organizationNumObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        organizationNumObject,
                                                        (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !this->fields.soloBaseObject )
    goto LABEL_22;
  v8 = (UISprite_o *)organizationNumObject;
  UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0);
  organizationNumObject = this->fields.organizationNumObject;
  if ( !organizationNumObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(organizationNumObject, 0, 0);
  if ( !v8 )
    goto LABEL_22;
  UISprite__set_spriteName(v8, (System_String_o *)StringLiteral_24812/*"solo_bg"*/, 0);
  organizationNumObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UISprite_o *, const MethodInfo *))v8->klass->vtable._33_MakePixelPerfect.methodPtr)(
                                                        v8,
                                                        v8->klass->vtable._33_MakePixelPerfect.method);
  if ( !v6 )
    goto LABEL_22;
LABEL_21:
  ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))v6->klass[2]._1.parent)(v6, v6->klass[2]._1.generic_class);
}


void PartyListViewIndicator__SetEventId(
        PartyListViewIndicator_o *this,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        System_Int32_array *classIds,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  EventPartyMargeUpValInfo_o *v23; // x1
  const MethodInfo *v24; // x3
  PartyEventPointIndicator_o *partyEventPointIndicator; // x0
  const MethodInfo *v26; // x2

  this->fields.setupInfo = setupInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo,
    (int32_t)setupInfo,
    (System_String_o *)questRestrictionInfo,
    (System_String_o *)classIds,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.eventMargeUpValInfo = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.eventMargeUpValInfo, 0, v17, v18, v19, v20, v21, v22);
  partyEventPointIndicator = this->fields.partyEventPointIndicator;
  if ( !partyEventPointIndicator
    || (PartyEventPointIndicator__SetInfomation(partyEventPointIndicator, questRestrictionInfo, classIds, v24),
        (partyEventPointIndicator = this->fields.partyEventPointIndicator) == 0) )
  {
    sub_2213CDC(partyEventPointIndicator, v23);
  }
  PartyEventPointIndicator__SetTotalDropItemList(partyEventPointIndicator, v23, v26);
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

  if ( (byte_596BED4 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_8629/*"LIMIT_EQUIP_SETTING"*/);
    sub_2213A60(&StringLiteral_869/*","*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BED4 = 1;
  }
  IsEventOnlyEquip = (System_String_o *)PartyListViewIndicator__IsEventOnlyEquip(this, method);
  if ( ((unsigned __int8)IsEventOnlyEquip & 1) != 0 )
  {
    useLimitEquip = this->fields.useLimitEquip;
    if ( !useLimitEquip )
      goto LABEL_14;
    max_length = useLimitEquip->max_length;
    v7 = (System_String_o *)StringLiteral_1/*""*/;
    if ( (int)max_length >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= (unsigned int)max_length )
          sub_2213CE4(IsEventOnlyEquip);
        if ( !v7 )
          break;
        v9 = useLimitEquip->m_Items[v8];
        if ( v7->fields._stringLength >= 1 )
          v7 = System_String__Concat_75651716(v7, (System_String_o *)StringLiteral_869/*","*/, 0);
        v11 = v9;
        v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v11);
        IsEventOnlyEquip = System_String__Concat((Il2CppObject *)v7, v10, 0);
        LODWORD(max_length) = useLimitEquip->max_length;
        ++v8;
        v7 = IsEventOnlyEquip;
        if ( (__int64)v8 >= (int)max_length )
          goto LABEL_12;
      }
LABEL_14:
      sub_2213CDC(IsEventOnlyEquip, v4);
    }
LABEL_12:
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_8629/*"LIMIT_EQUIP_SETTING"*/, v7, 0);
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
    sub_2213CDC(leftObject, v4);
  }
  UnityEngine_GameObject__SetActive(leftObject, 0, 0);
}


void PartyListViewIndicator__SetKind(PartyListViewIndicator_o *this, int32_t menuKind, const MethodInfo *method)
{
  this->fields.menuKind = menuKind;
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewIndicator__SetPageIndex(PartyListViewIndicator_o *this, int32_t index, const MethodInfo *method)
{
  UnityEngine_Object_o *pageBaseObject; // x21
  UISprite_o *AutoSelectParty; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  __int64 v9; // x21
  struct UISprite_array *pageSpriteList; // x8
  __int64 *v11; // x8
  __int64 v12; // x2
  __int64 v13; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w21
  bool v16; // w20

  if ( (byte_596BECB & 1) == 0 )
  {
    sub_2213A60(&LastUsedDeckNumberManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&OptionManager_TypeInfo);
    sub_2213A60(&StringLiteral_21574/*"img_slider_on"*/);
    sub_2213A60(&StringLiteral_21573/*"img_slider_off"*/);
    byte_596BECB = 1;
  }
  this->fields.pageIndex = index;
  if ( (index & 0x80000000) == 0 )
  {
    pageBaseObject = (UnityEngine_Object_o *)this->fields.pageBaseObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&index, method);
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
          sub_2213CE4(AutoSelectParty);
        AutoSelectParty = pageSpriteList->m_Items[v9];
        if ( !AutoSelectParty )
          goto LABEL_32;
        if ( index == (_DWORD)v9 )
          v11 = &StringLiteral_21574/*"img_slider_on"*/;
        else
          v11 = &StringLiteral_21573/*"img_slider_off"*/;
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
    if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v7, v12);
    AutoSelectParty = (UISprite_o *)OptionManager__GetAutoSelectParty(0);
    if ( ((unsigned __int8)AutoSelectParty & 1) != 0 )
    {
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_32;
      questId = questRestrictionInfo->fields.questId;
      if ( !*(&LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v7, v13);
      v16 = LastUsedDeckNumberManager__GetDeckNumber(questId, 0) - 1 == index;
    }
    else
    {
LABEL_28:
      v16 = 0;
    }
    AutoSelectParty = this->fields.lastTimeUsedSprite;
    if ( !AutoSelectParty
      || (AutoSelectParty = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)AutoSelectParty,
                                            0)) == 0 )
    {
LABEL_32:
      sub_2213CDC(AutoSelectParty, v7);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AutoSelectParty, v16, 0);
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
  __int64 v10; // x1
  __int64 v11; // x2
  UISprite_o *indexSprite; // x21
  System_String_o *v13; // x20
  int v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596BECD & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&StringLiteral_23810/*"party_txt_"*/);
    sub_2213A60(&StringLiteral_23809/*"party_bg"*/);
    byte_596BECD = 1;
  }
  v14 = index + 1;
  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v14, 0);
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
                                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !gameObject )
    goto LABEL_17;
  v8 = (UISprite_o *)gameObject;
  UISprite__set_atlas((UISprite_o *)gameObject, this->fields.indexLocalAtlas, 0);
  UISprite__set_spriteName(v8, (System_String_o *)StringLiteral_23809/*"party_bg"*/, 0);
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
  v9 = System_String__Concat_75651716((System_String_o *)StringLiteral_23810/*"party_txt_"*/, v7, 0);
  indexSprite = this->fields.indexSprite;
  v13 = v9;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10, v11);
  if ( !AtlasManager__SetPartyOrganizationImage(indexSprite, v13, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.indexSprite;
    if ( gameObject )
    {
      UISprite__set_atlas((UISprite_o *)gameObject, this->fields.indexLocalAtlas, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.indexSprite;
      if ( gameObject )
      {
        UISprite__set_spriteName((UISprite_o *)gameObject, v13, 0);
        goto LABEL_15;
      }
    }
LABEL_17:
    sub_2213CDC(gameObject, v6);
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
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Component_object; // x20
  int v11; // w26
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v13; // x0
  UISprite_o *waveMaxNumTensPlaceSprite; // x21
  System_String_o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  System_String_o *v18; // x22
  UISprite_o *waveMaxNumTensPlaceGlowSprite; // x21
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  UIWidget_o *v23; // x0
  int32_t v24; // w1
  UISprite_o *waveNumTensPlaceSprite; // x21
  System_String_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  System_String_o *v29; // x22
  UISprite_o *waveNumTensPlaceGlowSprite; // x21
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  UISprite_o *waveNumOnesPlaceSprite; // x20
  int v34; // w26
  System_String_o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  System_String_o *v38; // x21
  UISprite_o *waveNumOnesPlaceGlowSprite; // x20
  System_String_o *v40; // x0
  System_String_o *v41; // x0
  UISprite_o *waveMaxNumOnesPlaceSprite; // x20
  System_String_o *v43; // x0
  System_String_o *v44; // x0
  UISprite_o *waveMaxNumOnesPlaceGlowSprite; // x20
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  unsigned int v48; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_596BECC & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&StringLiteral_17833/*"battle_num_"*/);
    sub_2213A60(&StringLiteral_17225/*"_glow"*/);
    sub_2213A60(&StringLiteral_17835/*"battle_num_slash_glow"*/);
    sub_2213A60(&StringLiteral_17828/*"battle_bg"*/);
    sub_2213A60(&StringLiteral_17834/*"battle_num_slash"*/);
    byte_596BECC = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  v48 = 0;
  if ( questRestrictionInfo && QuestRestrictionInfo__IsWaveSetupSwitchParty(questRestrictionInfo, 0) )
  {
    PartyListViewIndicator__SetPageIndexDefault(this, index, v6);
    GameObjectExtensions__SetLocalPositionY(this->fields.indexBaseObject, 260.0, 0);
    return;
  }
  waveNumObject = this->fields.waveNumObject;
  if ( !waveNumObject )
    goto LABEL_59;
  waveNumObject = UnityEngine_GameObject__get_gameObject(waveNumObject, 0);
  if ( !waveNumObject )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive(waveNumObject, 1, 0);
  waveNumObject = (UnityEngine_GameObject_o *)this->fields.indexSprite;
  if ( !waveNumObject )
    goto LABEL_59;
  waveNumObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)waveNumObject, 0);
  if ( !waveNumObject )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive(waveNumObject, 0, 0);
  GameObjectExtensions__SetLocalPositionY(this->fields.indexBaseObject, 260.0, 0);
  waveNumObject = this->fields.indexBaseObject;
  if ( !waveNumObject )
    goto LABEL_59;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       waveNumObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v8, v9);
  v11 = index + 1;
  AtlasManager__SetPartyOrganizationImage((UISprite_o *)Component_object, (System_String_o *)StringLiteral_17828/*"battle_bg"*/, 0);
  AtlasManager__SetPartyOrganizationImage(this->fields.waveNumSlashSprite, (System_String_o *)StringLiteral_17834/*"battle_num_slash"*/, 0);
  AtlasManager__SetPartyOrganizationImage(
    this->fields.waveNumSlashGlowSprite,
    (System_String_o *)StringLiteral_17835/*"battle_num_slash_glow"*/,
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
            v48 = this->fields.pageMax / 10;
            v15 = System_Int32__ToString((int32_t)&v48, 0);
            v18 = System_String__Concat_75651716((System_String_o *)StringLiteral_17833/*"battle_num_"*/, v15, 0);
            if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v16, v17);
            AtlasManager__SetPartyOrganizationImage(waveMaxNumTensPlaceSprite, v18, 0);
            waveMaxNumTensPlaceGlowSprite = this->fields.waveMaxNumTensPlaceGlowSprite;
            v48 = this->fields.pageMax / 10;
            v20 = System_Int32__ToString((int32_t)&v48, 0);
            v21 = System_String__Concat_75694928(
                    (System_String_o *)StringLiteral_17833/*"battle_num_"*/,
                    v20,
                    (System_String_o *)StringLiteral_17225/*"_glow"*/,
                    0);
            AtlasManager__SetPartyOrganizationImage(waveMaxNumTensPlaceGlowSprite, v21, 0);
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
                v22 = this->fields.waveNumObject;
                if ( v11 < 10 )
                {
                  GameObjectExtensions__SetLocalPositionX(v22, 1.0, 0);
                  waveNumObject = (UnityEngine_GameObject_o *)this->fields.waveNumTensPlaceSprite;
                  if ( !waveNumObject )
                    goto LABEL_59;
                  waveNumObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)waveNumObject, 0);
                  if ( !waveNumObject )
                    goto LABEL_59;
                  UnityEngine_GameObject__SetActive(waveNumObject, 0, 0);
                  waveNumObject = (UnityEngine_GameObject_o *)this->fields.waveNumTensPlaceGlowSprite;
                  if ( !waveNumObject )
                    goto LABEL_59;
                  waveNumObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)waveNumObject, 0);
                  if ( !waveNumObject )
                    goto LABEL_59;
                  UnityEngine_GameObject__SetActive(waveNumObject, 0, 0);
                  if ( !Component_object )
                    goto LABEL_59;
                  v23 = (UIWidget_o *)Component_object;
                  v24 = 308;
                  goto LABEL_51;
                }
                GameObjectExtensions__SetLocalPositionX(v22, 7.0, 0);
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
                        v48 = v11 / 0xAu;
                        v26 = System_Int32__ToString((int32_t)&v48, 0);
                        v29 = System_String__Concat_75651716((System_String_o *)StringLiteral_17833/*"battle_num_"*/, v26, 0);
                        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v27, v28);
                        AtlasManager__SetPartyOrganizationImage(waveNumTensPlaceSprite, v29, 0);
                        waveNumTensPlaceGlowSprite = this->fields.waveNumTensPlaceGlowSprite;
                        v48 = v11 / 0xAu;
                        v31 = System_Int32__ToString((int32_t)&v48, 0);
                        v32 = System_String__Concat_75694928(
                                (System_String_o *)StringLiteral_17833/*"battle_num_"*/,
                                v31,
                                (System_String_o *)StringLiteral_17225/*"_glow"*/,
                                0);
                        AtlasManager__SetPartyOrganizationImage(waveNumTensPlaceGlowSprite, v32, 0);
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
                              v23 = (UIWidget_o *)Component_object;
                              v24 = 322;
LABEL_51:
                              UIWidget__set_width(v23, v24, 0);
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
LABEL_59:
    sub_2213CDC(waveNumObject, *(_QWORD *)&index);
  }
  GameObjectExtensions__SetLocalPositionX(this->fields.waveNumObject, 7.0, 0);
  waveNumObject = (UnityEngine_GameObject_o *)this->fields.waveNumTensPlaceSprite;
  if ( !waveNumObject )
    goto LABEL_59;
  waveNumObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)waveNumObject, 0);
  if ( !waveNumObject )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive(waveNumObject, 0, 0);
  waveNumObject = (UnityEngine_GameObject_o *)this->fields.waveNumTensPlaceGlowSprite;
  if ( !waveNumObject )
    goto LABEL_59;
  waveNumObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)waveNumObject, 0);
  if ( !waveNumObject )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive(waveNumObject, 0, 0);
  waveNumObject = (UnityEngine_GameObject_o *)this->fields.waveMaxNumTensPlaceSprite;
  if ( !waveNumObject )
    goto LABEL_59;
  waveNumObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)waveNumObject, 0);
  if ( !waveNumObject )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive(waveNumObject, 0, 0);
  waveNumObject = (UnityEngine_GameObject_o *)this->fields.waveMaxNumTensPlaceGlowSprite;
  if ( !waveNumObject )
    goto LABEL_59;
  waveNumObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)waveNumObject, 0);
  if ( !waveNumObject )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive(waveNumObject, 0, 0);
  if ( !Component_object )
    goto LABEL_59;
  UIWidget__set_width((UIWidget_o *)Component_object, 296, 0);
  waveNumObject = (UnityEngine_GameObject_o *)this->fields.waveMaxNumOnesPlaceSprite;
  if ( !waveNumObject )
    goto LABEL_59;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)waveNumObject, 0);
  GameObjectExtensions__SetLocalPositionX(gameObject, 67.0, 0);
  waveNumObject = (UnityEngine_GameObject_o *)this->fields.waveMaxNumOnesPlaceGlowSprite;
  if ( !waveNumObject )
    goto LABEL_59;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)waveNumObject, 0);
  GameObjectExtensions__SetLocalPositionX(v13, 67.0, 0);
LABEL_52:
  waveNumOnesPlaceSprite = this->fields.waveNumOnesPlaceSprite;
  v34 = v11 % 10;
  v48 = v34;
  v35 = System_Int32__ToString((int32_t)&v48, 0);
  v38 = System_String__Concat_75651716((System_String_o *)StringLiteral_17833/*"battle_num_"*/, v35, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v36, v37);
  AtlasManager__SetPartyOrganizationImage(waveNumOnesPlaceSprite, v38, 0);
  waveNumOnesPlaceGlowSprite = this->fields.waveNumOnesPlaceGlowSprite;
  v48 = v34;
  v40 = System_Int32__ToString((int32_t)&v48, 0);
  v41 = System_String__Concat_75694928(
          (System_String_o *)StringLiteral_17833/*"battle_num_"*/,
          v40,
          (System_String_o *)StringLiteral_17225/*"_glow"*/,
          0);
  AtlasManager__SetPartyOrganizationImage(waveNumOnesPlaceGlowSprite, v41, 0);
  waveMaxNumOnesPlaceSprite = this->fields.waveMaxNumOnesPlaceSprite;
  v48 = this->fields.pageMax % 10;
  v43 = System_Int32__ToString((int32_t)&v48, 0);
  v44 = System_String__Concat_75651716((System_String_o *)StringLiteral_17833/*"battle_num_"*/, v43, 0);
  AtlasManager__SetPartyOrganizationImage(waveMaxNumOnesPlaceSprite, v44, 0);
  waveMaxNumOnesPlaceGlowSprite = this->fields.waveMaxNumOnesPlaceGlowSprite;
  v48 = this->fields.pageMax % 10;
  v46 = System_Int32__ToString((int32_t)&v48, 0);
  v47 = System_String__Concat_75694928(
          (System_String_o *)StringLiteral_17833/*"battle_num_"*/,
          v46,
          (System_String_o *)StringLiteral_17225/*"_glow"*/,
          0);
  AtlasManager__SetPartyOrganizationImage(waveMaxNumOnesPlaceGlowSprite, v47, 0);
  waveNumObject = (UnityEngine_GameObject_o *)this->fields.waveNumOnesPlaceSprite;
  if ( !waveNumObject )
    goto LABEL_59;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))waveNumObject->klass[2]._1.parent)(
    waveNumObject,
    waveNumObject->klass[2]._1.generic_class);
  waveNumObject = (UnityEngine_GameObject_o *)this->fields.waveNumOnesPlaceGlowSprite;
  if ( !waveNumObject )
    goto LABEL_59;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))waveNumObject->klass[2]._1.parent)(
    waveNumObject,
    waveNumObject->klass[2]._1.generic_class);
  waveNumObject = (UnityEngine_GameObject_o *)this->fields.waveMaxNumOnesPlaceSprite;
  if ( !waveNumObject )
    goto LABEL_59;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))waveNumObject->klass[2]._1.parent)(
    waveNumObject,
    waveNumObject->klass[2]._1.generic_class);
  waveNumObject = (UnityEngine_GameObject_o *)this->fields.waveMaxNumOnesPlaceGlowSprite;
  if ( !waveNumObject )
    goto LABEL_59;
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 monitor_low; // x24
  MissionNaviTransitionBoardItem_o *v19; // x25
  UnityEngine_Component_o *v20; // x26
  PartyListViewIndicator_o *v21; // x28
  UnityEngine_MonoBehaviour_o *m_CachedPtr; // x29
  EventDelegate_o *v23; // x27
  struct UnityEngine_GameObject_o *soloBaseObject; // x29
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_String_o *m_CancellationTokenSource_low; // x2
  int v37; // w8
  intptr_t v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  intptr_t v41; // x8
  __int64 v42; // x1
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  __int64 v49; // x22
  int32_t monitor; // w9
  int32_t v51; // w8
  UnityEngine_Object_o *pageBaseObject; // x20
  System_Array_o *v53; // x8
  __int64 v54; // x21
  int v55; // w9
  System_String_o *v56; // x1
  int32_t pageMax; // w19
  __int64 v58; // x0
  UnityEngine_Transform_o *parent; // [xsp+8h] [xbp-88h]
  int v60; // [xsp+1Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v62; // 0:kr14_12.12
  UnityEngine_Vector3_o v63; // 0:kr20_12.12
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_596BECA & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__get_Item__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_UISprite____91801568);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UISprite___TypeInfo);
    sub_2213A60(&StringLiteral_21573/*"img_slider_off"*/);
    this = (PartyListViewIndicator_o *)sub_2213A60(&StringLiteral_10275/*"OnClickTabParty"*/);
    byte_596BECA = 1;
  }
  p_pageSpriteList = (System_Array_o **)&v4->fields.pageSpriteList;
  pageSpriteList = (System_Array_o *)v4->fields.pageSpriteList;
  if ( !pageSpriteList )
    goto LABEL_68;
  if ( SLODWORD(pageSpriteList[1].monitor) < max )
  {
    this = (PartyListViewIndicator_o *)sub_2213B20(UISprite___TypeInfo, (unsigned int)max);
    if ( !*p_pageSpriteList )
      goto LABEL_68;
    v7 = this;
    System_Array__CopyTo(*p_pageSpriteList, (System_Array_o *)this, 0, 0);
    v8 = *p_pageSpriteList;
    if ( !*p_pageSpriteList )
      goto LABEL_68;
    if ( !LODWORD(v8[1].monitor) )
      goto LABEL_75;
    klass = (Il2CppObject *)v8[2].klass;
    if ( !klass )
      goto LABEL_68;
    this = (PartyListViewIndicator_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8[2].klass, 0);
    if ( !this )
      goto LABEL_68;
    this = (PartyListViewIndicator_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
    v10 = *p_pageSpriteList;
    parent = (UnityEngine_Transform_o *)this;
    if ( !*p_pageSpriteList )
      goto LABEL_68;
    if ( ((__int64)v10[1].monitor & 0xFFFFFFFE) == 0 )
      goto LABEL_75;
    this = (PartyListViewIndicator_o *)v10[2].monitor;
    if ( !this )
      goto LABEL_68;
    this = (PartyListViewIndicator_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_68;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    v11 = *p_pageSpriteList;
    if ( !*p_pageSpriteList )
      goto LABEL_68;
    if ( !LODWORD(v11[1].monitor) )
LABEL_75:
      sub_2213CE4(this);
    this = (PartyListViewIndicator_o *)v11[2].klass;
    if ( !this )
      goto LABEL_68;
    this = (PartyListViewIndicator_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_68;
    v62 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    if ( !*p_pageSpriteList || !v7 )
      goto LABEL_68;
    monitor_low = SLODWORD((*p_pageSpriteList)[1].monitor);
    if ( monitor_low < SLODWORD(v7->fields.m_CancellationTokenSource) )
    {
      v19 = (MissionNaviTransitionBoardItem_o *)(&v7->fields.soloBaseObject + monitor_low);
      while ( 1 )
      {
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&max, v12);
        this = (PartyListViewIndicator_o *)UnityEngine_Object__Instantiate_object__59717116(
                                             klass,
                                             parent,
                                             (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_UISprite____91801568);
        if ( !this )
          break;
        v20 = (UnityEngine_Component_o *)this;
        this = (PartyListViewIndicator_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        if ( !this )
          break;
        v64.fields.z = (float)(localPosition.fields.z - v62.fields.z) * (float)(int)monitor_low;
        v64.fields.y = (float)(localPosition.fields.y - v62.fields.y) * (float)(int)monitor_low;
        v64.fields.x = (float)(localPosition.fields.x - v62.fields.x) * (float)(int)monitor_low;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v64, 0);
        this = (PartyListViewIndicator_o *)UnityEngine_Component__GetComponent_object_(
                                             v20,
                                             (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
        if ( !this )
          break;
        v21 = this;
        this = (PartyListViewIndicator_o *)this->fields.selectNameBaseObject;
        if ( !this )
          break;
        this = (PartyListViewIndicator_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)this,
                                             0,
                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventDelegate__get_Item__);
        if ( !this )
          break;
        m_CachedPtr = (UnityEngine_MonoBehaviour_o *)this->fields.m_CachedPtr;
        v23 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
        EventDelegate___ctor_56337752(v23, m_CachedPtr, (System_String_o *)StringLiteral_10275/*"OnClickTabParty"*/, 0);
        if ( !v23 )
          break;
        this = (PartyListViewIndicator_o *)EventDelegate__get_parameters(v23, 0);
        if ( !this )
          break;
        if ( !LODWORD(this->fields.m_CancellationTokenSource) )
          goto LABEL_75;
        soloBaseObject = this->fields.soloBaseObject;
        v60 = monitor_low;
        this = (PartyListViewIndicator_o *)j_il2cpp_value_box_0(qword_5984348, &v60);
        if ( !soloBaseObject )
          break;
        soloBaseObject[1].monitor = this;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&soloBaseObject[1].monitor,
          (int32_t)this,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
        this = (PartyListViewIndicator_o *)v21->fields.selectNameBaseObject;
        if ( !this )
          break;
        m_CancellationTokenSource_low = (System_String_o *)LODWORD(this->fields.m_CancellationTokenSource);
        v37 = HIDWORD(this->fields.m_CancellationTokenSource) + 1;
        LODWORD(this->fields.m_CancellationTokenSource) = 0;
        HIDWORD(this->fields.m_CancellationTokenSource) = v37;
        if ( (int)m_CancellationTokenSource_low >= 1 )
        {
          System_Array__Clear((System_Array_o *)this->fields.m_CachedPtr, 0, (int32_t)m_CancellationTokenSource_low, 0);
          this = (PartyListViewIndicator_o *)v21->fields.selectNameBaseObject;
          if ( !this )
            break;
        }
        v38 = this->fields.m_CachedPtr;
        v39 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v38 )
          break;
        v40 = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)v40 >= *(_DWORD *)(v38 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v23,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = v38 + 8 * v40;
          LODWORD(this->fields.m_CancellationTokenSource) = v40 + 1;
          *(_QWORD *)(v41 + 32) = v23;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)(v41 + 32),
            (int32_t)v23,
            m_CancellationTokenSource_low,
            v31,
            v32,
            v33,
            v34,
            v35);
        }
        this = (PartyListViewIndicator_o *)sub_2213BB4(v20, v7->klass->_1.element_class);
        if ( !this )
        {
          v58 = sub_2213D00(0, v42);
          sub_2213BA0(v58, 0);
        }
        if ( (unsigned int)monitor_low >= LODWORD(v7->fields.m_CancellationTokenSource) )
          goto LABEL_75;
        v19->klass = (MissionNaviTransitionBoardItem_c *)v20;
        sub_2213A04(v19, (int32_t)v20, v43, v44, v45, v46, v47, v48);
        ++monitor_low;
        v19 = (MissionNaviTransitionBoardItem_o *)((char *)v19 + 8);
        if ( monitor_low >= SLODWORD(v7->fields.m_CancellationTokenSource) )
          goto LABEL_43;
      }
LABEL_68:
      sub_2213CDC(this, *(_QWORD *)&max);
    }
LABEL_43:
    *p_pageSpriteList = (System_Array_o *)v7;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v4->fields.pageSpriteList,
      (int32_t)v7,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    pageSpriteList = *p_pageSpriteList;
    if ( !*p_pageSpriteList )
      goto LABEL_68;
  }
  v49 = 0;
  while ( 1 )
  {
    monitor = (int32_t)pageSpriteList[1].monitor;
    if ( (int)v49 >= monitor )
      break;
    if ( (unsigned int)v49 >= monitor )
      goto LABEL_75;
    this = (PartyListViewIndicator_o *)*((_QWORD *)&pageSpriteList[2].klass + v49);
    if ( this )
    {
      this = (PartyListViewIndicator_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (int)v49 < max, 0);
        pageSpriteList = *p_pageSpriteList;
        ++v49;
        if ( *p_pageSpriteList )
          continue;
      }
    }
    goto LABEL_68;
  }
  if ( monitor >= max )
    v51 = max;
  else
    v51 = (int32_t)pageSpriteList[1].monitor;
  v4->fields.pageMax = v51;
  v4->fields.pageIndex = -1;
  if ( v51 <= 1 )
    v4->fields.pageMax = 0;
  pageBaseObject = (UnityEngine_Object_o *)v4->fields.pageBaseObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&max, method);
  this = (PartyListViewIndicator_o *)UnityEngine_Object__op_Inequality(pageBaseObject, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v53 = *p_pageSpriteList;
    if ( !*p_pageSpriteList )
      goto LABEL_68;
    v54 = 0;
    while ( 1 )
    {
      v55 = (int)v53[1].monitor;
      if ( (int)v54 >= v55 )
        break;
      if ( (unsigned int)v54 >= v55 )
        goto LABEL_75;
      this = (PartyListViewIndicator_o *)*((_QWORD *)&v53[2].klass + v54);
      if ( this )
      {
        v56 = (int)v54 >= v4->fields.pageMax ? 0LL : (System_String_o *)StringLiteral_21573/*"img_slider_off"*/;
        UISprite__set_spriteName((UISprite_o *)this, v56, 0);
        v53 = (System_Array_o *)v4->fields.pageSpriteList;
        ++v54;
        if ( v53 )
          continue;
      }
      goto LABEL_68;
    }
    this = (PartyListViewIndicator_o *)v4->fields.pageBaseObject;
    if ( !this )
      goto LABEL_68;
    this = (PartyListViewIndicator_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !this )
      goto LABEL_68;
    v63 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    this = (PartyListViewIndicator_o *)v4->fields.pageBaseObject;
    if ( !this )
      goto LABEL_68;
    pageMax = v4->fields.pageMax;
    this = (PartyListViewIndicator_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !this )
      goto LABEL_68;
    v65.fields.y = v63.fields.y;
    v65.fields.z = v63.fields.z;
    v65.fields.x = (float)(-10 * pageMax + 10);
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v65, 0);
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
  int32_t maxCost; // w25
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t TotalCostRestriction; // w0
  int32_t v8; // w22
  __int64 v9; // x2
  System_String_o *v10; // x21
  BalanceConfig_c *v11; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  UILabel_o *maxCostLabel; // x22
  System_String_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  UILabel_o *splitCostLabel; // x22
  System_String_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  int32_t cost; // w8
  UILabel_o *selectCostLabel; // x20
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  __int64 v25; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_596BECF & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_10629/*"PARTY_ORGANIZATION_COST_SPLIT"*/);
    sub_2213A60(&StringLiteral_10627/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/);
    sub_2213A60(&StringLiteral_10628/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/);
    sub_2213A60(&StringLiteral_10626/*"PARTY_ORGANIZATION_COST_COLOR"*/);
    this = (PartyListViewIndicator_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BECF = 1;
  }
  v25 = 0;
  if ( !partyItem )
    goto LABEL_36;
  maxCost = partyItem->fields.maxCost;
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  HIDWORD(v25) = maxCost;
  if ( questRestrictionInfo
    && (TotalCostRestriction = QuestRestrictionInfo__GetTotalCostRestriction(questRestrictionInfo, 0)) != 0
    && (v8 = TotalCostRestriction, maxCost > TotalCostRestriction) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, partyItem, method);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_10628/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0);
    HIDWORD(v25) = v8;
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, partyItem, method);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_10626/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0);
    v8 = maxCost;
  }
  v11 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, partyItem, v9);
    v11 = BalanceConfig_TypeInfo;
  }
  static_fields = v11->static_fields;
  this = (PartyListViewIndicator_o *)v4->fields.maxCostLabel;
  if ( v8 >= static_fields->InfinityCostValue )
  {
    if ( !this )
      goto LABEL_36;
    this = (PartyListViewIndicator_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (PartyListViewIndicator_o *)v4->fields.infinityCostLabel;
    if ( !this )
      goto LABEL_36;
    this = (PartyListViewIndicator_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  }
  else
  {
    if ( !this )
      goto LABEL_36;
    this = (PartyListViewIndicator_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (PartyListViewIndicator_o *)v4->fields.infinityCostLabel;
    if ( !this )
      goto LABEL_36;
    this = (PartyListViewIndicator_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    maxCostLabel = v4->fields.maxCostLabel;
    v14 = System_Int32__ToString((int32_t)&v25 + 4, 0);
    this = (PartyListViewIndicator_o *)System_String__Concat_75651716(v10, v14, 0);
    if ( !maxCostLabel )
      goto LABEL_36;
    UILabel__set_text(maxCostLabel, (System_String_o *)this, 0);
  }
  splitCostLabel = v4->fields.splitCostLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_10629/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0);
  this = (PartyListViewIndicator_o *)System_String__Concat_75651716(v10, v18, 0);
  if ( !splitCostLabel )
    goto LABEL_36;
  UILabel__set_text(splitCostLabel, (System_String_o *)this, 0);
  cost = partyItem->fields.cost;
  selectCostLabel = v4->fields.selectCostLabel;
  if ( cost > SHIDWORD(v25) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v20);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_10627/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0);
    cost = partyItem->fields.cost;
    v10 = v23;
  }
  LODWORD(v25) = cost;
  v24 = System_Int32__ToString((int32_t)&v25, 0);
  this = (PartyListViewIndicator_o *)System_String__Concat_75651716(v10, v24, 0);
  if ( !selectCostLabel )
LABEL_36:
    sub_2213CDC(this, partyItem);
  UILabel__set_text(selectCostLabel, (System_String_o *)this, 0);
}