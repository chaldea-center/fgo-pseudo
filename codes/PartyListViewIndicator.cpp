void __fastcall PartyListViewIndicator___ctor(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BalanceConfig_c *v6; // x0
  struct System_Int32_array *v7; // x0

  if ( (byte_4B11E46 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&int___TypeInfo, v4, v5);
    byte_4B11E46 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)(v6->static_fields->DeckMax + 1));
  this->fields.useLimitEquip = v7;
  sub_1BCA784(&this->fields.useLimitEquip, v7);
  __asm { FMOV            V1.4S, #1.0 }
  this->fields.isScrollEnabled = 1;
  this->fields.ICON_NORMAL_COLOR = _Q1;
  this->fields.ICON_MASK_COLOR = (struct UnityEngine_Color_o)xmmword_BD2330;
  ListViewIndicator___ctor((ListViewIndicator_o *)this, 0LL);
}


void __fastcall PartyListViewIndicator__Awake(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  struct UISprite_o *indexSprite; // x8
  struct UIAtlas_o *mAtlas; // x1

  indexSprite = this->fields.indexSprite;
  if ( !indexSprite )
    sub_1BCAA3C(this, method);
  mAtlas = indexSprite->fields.mAtlas;
  this->fields.indexLocalAtlas = mAtlas;
  sub_1BCA784(&this->fields.indexLocalAtlas, mAtlas);
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
    sub_1BCAA3C(limitMasterFormationButton, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewIndicator__DispFriendPointUpBonus(
        PartyListViewIndicator_o *this,
        int32_t bonusVal,
        const MethodInfo *method)
{
  UnityEngine_Object_o *friendPointUpBonusSprite; // x21
  __int64 v6; // x1
  UnityEngine_Object_o *friendPointUpBonusLabel; // x21
  __int64 v8; // x1
  UILabel_o *v9; // x20
  UnityEngine_Component_o *gameObject; // x0
  bool v11; // w1
  unsigned int v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B11E45 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&bonusVal, method);
    byte_4B11E45 = 1;
  }
  friendPointUpBonusSprite = (UnityEngine_Object_o *)this->fields.friendPointUpBonusSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&bonusVal);
  if ( UnityEngine_Object__op_Inequality(friendPointUpBonusSprite, 0LL, 0LL) )
  {
    friendPointUpBonusLabel = (UnityEngine_Object_o *)this->fields.friendPointUpBonusLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
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
            v11 = 0;
            goto LABEL_17;
          }
        }
      }
      else
      {
        v12 = bonusVal / 0x3E8u;
        v9 = this->fields.friendPointUpBonusLabel;
        gameObject = (UnityEngine_Component_o *)System_Int32__ToString((int32_t)&v12, 0LL);
        if ( v9 )
        {
          UILabel__set_text(v9, (System_String_o *)gameObject, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.friendPointUpBonusSprite;
          if ( gameObject )
          {
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
            if ( gameObject )
            {
              v11 = 1;
LABEL_17:
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v11, 0LL);
              return;
            }
          }
        }
      }
      sub_1BCAA3C(gameObject, v8);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewIndicator__DrawEventLimitEquip(
        PartyListViewIndicator_o *this,
        PartyListViewItem_o *partyItem,
        bool isChng,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  const MethodInfo *v27; // x1
  DataManager_o *Instance; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  char v30; // w21
  int32_t DeckNum; // w23
  il2cpp_array_size_t v32; // w24
  __int64 v33; // x1
  UISprite_o *masterEquipBackSprite; // x22
  DataManager_o *v35; // x22
  unsigned __int64 v36; // x25
  struct System_Int32_array *useLimitEquip; // x28
  __int64 v38; // x1
  UISprite_o *limitEquipFixSprite; // x19
  struct System_Int32_array *v40; // x9
  char *v41; // x8
  int v42; // w21
  __int64 v43; // x1
  Il2CppObject *Component_object; // x20
  EventEquipSkillReleaseEntity_o *outEnt; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B11E3E & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, partyItem, isChng);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&StringLiteral_19369/*"event_emblem_frame"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_20355/*"icon_equip_fixation"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_8380/*"LIMIT_EQUIP_SETTING"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_17713/*"btn_skill_off"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_19368/*"event_emblem_dim"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_17714/*"btn_skill_on"*/, v25, v26);
    byte_4B11E3E = 1;
  }
  outEnt = 0LL;
  if ( !PartyListViewIndicator__IsEventOnlyEquip(this, (const MethodInfo *)partyItem) )
    goto LABEL_14;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
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
    PartyListViewIndicator__ClearEventLimitEquip(this, v27);
    return;
  }
  Instance = (DataManager_o *)outEnt;
  if ( !outEnt )
    goto LABEL_62;
  Instance = (DataManager_o *)EventEquipSkillReleaseEntity__isForceOverwrite(outEnt, 0LL);
  if ( !partyItem )
    goto LABEL_62;
  v30 = (char)Instance;
  DeckNum = PartyListViewItem__get_DeckNum(partyItem, 0LL);
  Instance = (DataManager_o *)PartyListViewItem__IsSpecificMenuKind(partyItem, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v27);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    v32 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 148LL);
  }
  else
  {
    v32 = DeckNum - 1;
  }
  if ( !outEnt )
    goto LABEL_62;
  Instance = (DataManager_o *)this->fields.limitEquipIcon;
  if ( !Instance )
    goto LABEL_62;
  ItemIconComponent__SetEquipItem((ItemIconComponent_o *)Instance, outEnt->fields.overwriteEquipIconId, 0LL);
  masterEquipBackSprite = this->fields.masterEquipBackSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v33);
  AtlasManager__SetEventUI(masterEquipBackSprite, (System_String_o *)StringLiteral_19368/*"event_emblem_dim"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.masterEquipFrameSprite, (System_String_o *)StringLiteral_19369/*"event_emblem_frame"*/, 0LL);
  if ( !this->fields.isChkSave )
  {
    if ( (v30 & 1) == 0 )
    {
      Instance = (DataManager_o *)UnityEngine_PlayerPrefs__GetString_70112520(
                                    (System_String_o *)StringLiteral_8380/*"LIMIT_EQUIP_SETTING"*/,
                                    0LL);
      if ( !Instance )
        goto LABEL_62;
      if ( Instance->fields.m_CachedPtr >= 1 )
      {
        Instance = (DataManager_o *)System_String__Split((System_String_o *)Instance, 0x2Cu, 0, 0LL);
        if ( !Instance )
          goto LABEL_62;
        v35 = Instance;
        if ( SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
        {
          v36 = 0LL;
          do
          {
            Instance = (DataManager_o *)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v27);
              Instance = (DataManager_o *)BalanceConfig_TypeInfo;
            }
            if ( (__int64)v36 > *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 148LL) )
              break;
            if ( v36 >= LODWORD(v35->fields.m_CancellationTokenSource) )
              goto LABEL_63;
            useLimitEquip = this->fields.useLimitEquip;
            Instance = (DataManager_o *)System_Int32__Parse(*((System_String_o **)&v35->fields._DispLog + v36), 0LL);
            if ( !useLimitEquip )
              goto LABEL_62;
            if ( v36 >= useLimitEquip->max_length )
              goto LABEL_63;
            useLimitEquip->m_Items[++v36] = (int)Instance;
          }
          while ( (__int64)v36 < SLODWORD(v35->fields.m_CancellationTokenSource) );
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
    sub_1BCAA3C(Instance, v27);
  }
  if ( (v30 & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    v40 = this->fields.useLimitEquip;
    v41 = (char *)v40 + 4 * (int)v32;
    if ( isChng )
    {
      if ( !v40 )
        goto LABEL_62;
      if ( v32 >= v40->max_length )
        goto LABEL_63;
      *((_DWORD *)v41 + 8) = *((_DWORD *)v41 + 8) == 0;
    }
    else if ( !v40 )
    {
      goto LABEL_62;
    }
    if ( v32 < v40->max_length )
    {
      Instance = (DataManager_o *)this->fields.limitMasterFormationButton;
      if ( Instance )
      {
        v42 = *((_DWORD *)v41 + 8);
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)Instance,
                             (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v43);
        if ( v42 )
        {
          AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_17714/*"btn_skill_on"*/, 0LL);
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
          AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_17713/*"btn_skill_off"*/, 0LL);
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
    sub_1BCAA44(Instance, v27);
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
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v38);
  AtlasManager__SetEventUI(limitEquipFixSprite, (System_String_o *)StringLiteral_20355/*"icon_equip_fixation"*/, 0LL);
}


void __fastcall PartyListViewIndicator__DrawPartyInfo(
        PartyListViewIndicator_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  PartyListViewItem_o *v3; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  UnityEngine_GameObject_o *soloBaseObject; // x0
  UISprite_o *v38; // x21
  bool v39; // w1
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestRestrictionInfo_o *v43; // x0
  int32_t servantNumMax; // w1
  UISprite_o *v45; // x21
  struct QuestRestrictionInfo_o *v46; // x8
  __int64 v47; // x1
  BalanceConfig_c *v48; // x0
  const MethodInfo *v49; // x2
  UICommonButton_o *masterEquipButton; // x21
  struct QuestRestrictionInfo_o *v51; // x8
  struct QuestRestrictionInfo_o *v52; // x8
  __int64 v53; // x1
  int32_t maxCost; // w21
  QuestRestrictionInfo_o *v55; // x0
  int32_t TotalCostRestriction; // w22
  bool v57; // w21
  System_String_o *v58; // x21
  UILabel_o *maxCostLabel; // x22
  System_String_o *v60; // x0
  __int64 v61; // x1
  UILabel_o *splitCostLabel; // x22
  System_String_o *v63; // x0
  __int64 v64; // x1
  int cost; // w8
  UILabel_o *selectCostLabel; // x22
  System_String_o *v67; // x0
  System_String_o *v68; // x0
  Il2CppObject *Entity; // x0
  const MethodInfo *v70; // x3
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  __int64 v73; // x9
  int32_t v74; // w21
  ServantEntity_array *SvtEntityList; // x22
  System_String_array *SvtNameList; // x23
  System_Boolean_array *IsFollowerList; // x24
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  EventPartyMargeUpValInfo_o *v81; // x25
  EventUpValInfo_array *v82; // x8
  unsigned __int64 v83; // x20
  unsigned __int64 max_length; // x9
  EventPartyMargeUpValInfo_o *eventMargeUpValInfo; // x22
  __int64 v86; // x1
  UILabel_o *selectNameLabel; // x21
  System_String_o *v88; // x0
  EventUpValInfo_array *eventUpValList; // [xsp+8h] [xbp-78h] BYREF
  int32_t genderImageId; // [xsp+14h] [xbp-6Ch] BYREF
  System_String_o *detail; // [xsp+18h] [xbp-68h] BYREF
  System_String_o *equipName; // [xsp+20h] [xbp-60h] BYREF
  int32_t maxLv; // [xsp+2Ch] [xbp-54h] BYREF
  int32_t condUsrLv[2]; // [xsp+30h] [xbp-50h] BYREF
  __int64 eventId; // [xsp+38h] [xbp-48h] BYREF

  v3 = partyItem;
  if ( (byte_4B11E3D & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, partyItem, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEquipMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v9, v10);
    sub_1BCA7E0(&EventPartyMargeUpValInfo_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v13, v14);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v19, v20);
    sub_1BCA7E0(&StringLiteral_10408/*"PARTY_ORGANIZATION_NAME"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_23639/*"solo_bg"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_10376/*"PARTY_ORGANIZATION_COST_SPLIT"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_10374/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_10375/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_23670/*"specialparty_bg"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_10373/*"PARTY_ORGANIZATION_COST_COLOR"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v35, v36);
    byte_4B11E3D = 1;
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
                          sub_1BCA784(&this->fields.questRestrictionInfo, 0LL);
                          this->fields.eventMargeUpValInfo = 0LL;
                          sub_1BCA784(&this->fields.eventMargeUpValInfo, 0LL);
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
                                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !this->fields.soloBaseObject )
        goto LABEL_107;
      v38 = (UISprite_o *)soloBaseObject;
      UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0LL);
      if ( !v38 )
        goto LABEL_107;
      UISprite__set_spriteName(v38, (System_String_o *)StringLiteral_23639/*"solo_bg"*/, 0LL);
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v38->klass->vtable._33_MakePixelPerfect.method)(
        v38,
        v38->klass->vtable._34_get_minWidth.methodPtr);
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
      v39 = 0;
      goto LABEL_68;
    case 2:
      soloBaseObject = this->fields.soloBaseObject;
      if ( !soloBaseObject )
        goto LABEL_107;
      soloBaseObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     soloBaseObject,
                                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !this->fields.soloBaseObject )
        goto LABEL_107;
      v45 = (UISprite_o *)soloBaseObject;
      UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0LL);
      if ( !v45 )
        goto LABEL_107;
      UISprite__set_spriteName(v45, (System_String_o *)StringLiteral_23670/*"specialparty_bg"*/, 0LL);
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v45->klass->vtable._33_MakePixelPerfect.method)(
        v45,
        v45->klass->vtable._34_get_minWidth.methodPtr);
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
      v43 = this->fields.questRestrictionInfo;
      if ( !v43 )
        goto LABEL_63;
      soloBaseObject = (UnityEngine_GameObject_o *)QuestRestrictionInfo__IsServantNum(v43, 0LL);
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
        soloBaseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !soloBaseObject )
          goto LABEL_107;
        soloBaseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)soloBaseObject,
                                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
        v51 = this->fields.questRestrictionInfo;
        if ( !v51 )
          goto LABEL_107;
        if ( !soloBaseObject )
          goto LABEL_107;
        soloBaseObject = (UnityEngine_GameObject_o *)NpcFollowerMaster__GetQuestFollowerList(
                                                       (NpcFollowerMaster_o *)soloBaseObject,
                                                       v51->fields.questId,
                                                       v51->fields.questPhase,
                                                       0LL);
        v52 = this->fields.questRestrictionInfo;
        if ( !v52 || !soloBaseObject )
          goto LABEL_107;
        servantNumMax = v52->fields.myServantNumMax + LODWORD(soloBaseObject[1].klass);
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
                                                     v49);
      masterEquipButton = this->fields.masterEquipButton;
      if ( v3->fields._IsWaveBattleRestart_k__BackingField )
      {
        soloBaseObject = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
      v46 = this->fields.questRestrictionInfo;
      if ( v46 && v46->fields.eventDeckNum >= 1 )
      {
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_107;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_107;
        UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
        v48 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v47);
          v48 = BalanceConfig_TypeInfo;
        }
        servantNumMax = v48->static_fields->DeckMemberMax;
LABEL_62:
        PartyListViewIndicator__SetEventDeckPartyName(this, servantNumMax, v41);
LABEL_63:
        soloBaseObject = this->fields.indexBaseObject;
        if ( !soloBaseObject
          || (UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL),
              (soloBaseObject = this->fields.selectNameBaseObject) == 0LL) )
        {
LABEL_107:
          sub_1BCAA3C(soloBaseObject, partyItem);
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
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v86);
        v88 = LocalizationManager__Get((System_String_o *)StringLiteral_10408/*"PARTY_ORGANIZATION_NAME"*/, 0LL);
        soloBaseObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                       v88,
                                                       (Il2CppObject *)v3->fields.deckName,
                                                       0LL);
        if ( !selectNameLabel )
          goto LABEL_107;
        UILabel__set_text(selectNameLabel, (System_String_o *)soloBaseObject, 0LL);
      }
      soloBaseObject = this->fields.costBaseObject;
      if ( !soloBaseObject )
        goto LABEL_107;
      v39 = 1;
LABEL_68:
      UnityEngine_GameObject__SetActive(soloBaseObject, v39, 0LL);
LABEL_69:
      maxCost = v3->fields.maxCost;
      HIDWORD(eventId) = maxCost;
      v55 = this->fields.questRestrictionInfo;
      if ( v55 )
        TotalCostRestriction = QuestRestrictionInfo__GetTotalCostRestriction(v55, 0LL);
      else
        TotalCostRestriction = 0;
      v57 = TotalCostRestriction != 0 && maxCost > TotalCostRestriction;
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( v57 )
        {
LABEL_74:
          v58 = LocalizationManager__Get((System_String_o *)StringLiteral_10375/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0LL);
          HIDWORD(eventId) = TotalCostRestriction;
          goto LABEL_77;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v53);
        if ( v57 )
          goto LABEL_74;
      }
      v58 = LocalizationManager__Get((System_String_o *)StringLiteral_10373/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
LABEL_77:
      maxCostLabel = this->fields.maxCostLabel;
      v60 = System_Int32__ToString((int32_t)&eventId + 4, 0LL);
      soloBaseObject = (UnityEngine_GameObject_o *)System_String__Concat_62401220(v58, v60, 0LL);
      if ( !maxCostLabel )
        goto LABEL_107;
      UILabel__set_text(maxCostLabel, (System_String_o *)soloBaseObject, 0LL);
      splitCostLabel = this->fields.splitCostLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v61);
      v63 = LocalizationManager__Get((System_String_o *)StringLiteral_10376/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
      soloBaseObject = (UnityEngine_GameObject_o *)System_String__Concat_62401220(v58, v63, 0LL);
      if ( !splitCostLabel )
        goto LABEL_107;
      UILabel__set_text(splitCostLabel, (System_String_o *)soloBaseObject, 0LL);
      cost = v3->fields.cost;
      selectCostLabel = this->fields.selectCostLabel;
      if ( cost > SHIDWORD(eventId) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v64);
        v67 = LocalizationManager__Get((System_String_o *)StringLiteral_10374/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
        cost = v3->fields.cost;
        v58 = v67;
      }
      condUsrLv[1] = cost;
      v68 = System_Int32__ToString((int32_t)&condUsrLv[1], 0LL);
      soloBaseObject = (UnityEngine_GameObject_o *)System_String__Concat_62401220(v58, v68, 0LL);
      if ( !selectCostLabel )
        goto LABEL_107;
      UILabel__set_text(selectCostLabel, (System_String_o *)soloBaseObject, 0LL);
      soloBaseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !soloBaseObject )
        goto LABEL_107;
      soloBaseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)soloBaseObject,
                                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEquipMaster___);
      if ( !soloBaseObject )
        goto LABEL_107;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)soloBaseObject,
                 v3->fields.userEquipId,
                 (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
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
      PartyListViewIndicator__DrawEventLimitEquip(this, v3, 0, v70);
      setupInfo = this->fields.setupInfo;
      if ( !setupInfo )
        goto LABEL_97;
      eventIdList = setupInfo->fields.eventIdList;
      if ( !eventIdList )
        goto LABEL_107;
      v73 = *(_QWORD *)&eventIdList->max_length;
      if ( v73 )
      {
        if ( !(_DWORD)v73 )
LABEL_124:
          sub_1BCAA44(soloBaseObject, partyItem);
        v74 = eventIdList->m_Items[1];
      }
      else
      {
LABEL_97:
        v74 = 0;
      }
      LODWORD(eventId) = v74;
      SvtEntityList = PartyListViewItem__GetSvtEntityList(v3, 0LL);
      SvtNameList = PartyListViewItem__GetSvtNameList(v3, 0LL);
      IsFollowerList = PartyListViewItem__GetIsFollowerList(v3, 0LL);
      v81 = (EventPartyMargeUpValInfo_o *)sub_1BCAA2C(EventPartyMargeUpValInfo_TypeInfo, v78, v79, v80);
      EventPartyMargeUpValInfo___ctor(v81, v74, SvtEntityList, SvtNameList, IsFollowerList, 0LL);
      this->fields.eventMargeUpValInfo = v81;
      sub_1BCA784(&this->fields.eventMargeUpValInfo, v81);
      soloBaseObject = (UnityEngine_GameObject_o *)PartyListViewItem__GetEventUpVal(
                                                     v3,
                                                     (int32_t *)&eventId,
                                                     &eventUpValList,
                                                     0LL);
      if ( ((unsigned __int8)soloBaseObject & 1) != 0 )
      {
        v82 = eventUpValList;
        if ( !eventUpValList )
          goto LABEL_107;
        v83 = 0LL;
        while ( 1 )
        {
          max_length = v82->max_length;
          if ( (__int64)v83 >= (int)max_length )
            break;
          if ( v83 >= max_length )
            goto LABEL_124;
          soloBaseObject = (UnityEngine_GameObject_o *)v82->m_Items[v83];
          if ( soloBaseObject )
          {
            eventMargeUpValInfo = this->fields.eventMargeUpValInfo;
            soloBaseObject = (UnityEngine_GameObject_o *)EventUpValInfo__GetDropItemList(
                                                           (EventUpValInfo_o *)soloBaseObject,
                                                           v83,
                                                           0LL);
            if ( !eventMargeUpValInfo )
              goto LABEL_107;
            EventPartyMargeUpValInfo__Add(eventMargeUpValInfo, (EventDropItemUpValInfo_array *)soloBaseObject, 0LL);
            v82 = eventUpValList;
          }
          ++v83;
          if ( !v82 )
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
        v40);
      return;
  }
}


bool __fastcall PartyListViewIndicator__IsEventOnlyEquip(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B11E44 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B11E44 = 1;
  }
  entity = 0LL;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (questRestrictionInfo = this->fields.questRestrictionInfo) == 0LL)
    || !Instance )
  {
LABEL_12:
    sub_1BCAA3C(Instance, v9);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          questRestrictionInfo->fields.eventId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t DeckNum; // w21
  BalanceConfig_c *v13; // x0
  il2cpp_array_size_t DeckMax; // w20
  struct System_Int32_array *useLimitEquip; // x8
  EventEquipSkillReleaseEntity_o *outEnt; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B11E43 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, partyItem, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B11E43 = 1;
  }
  outEnt = 0LL;
  if ( !PartyListViewIndicator__IsEventOnlyEquip(this, (const MethodInfo *)partyItem) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
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
    v13 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10);
      v13 = BalanceConfig_TypeInfo;
    }
    DeckMax = v13->static_fields->DeckMax;
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
    sub_1BCAA3C(Instance, v10);
  if ( DeckMax >= useLimitEquip->max_length )
    sub_1BCAA44(Instance, v10);
  return useLimitEquip->m_Items[DeckMax + 1] == 0;
}


void __fastcall PartyListViewIndicator__OnClickLeft(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *manager; // x20
  __int64 v7; // x1
  ListViewManager_o *v8; // x0
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  int32_t pageIndex; // w8
  struct ListViewManager_o *v12; // x8
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0

  if ( (byte_4B11E3F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_PartyListViewIndicator_OnClickLeft__, v4, v5);
    byte_4B11E3F = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(manager, 0LL, 0LL)
    && this->fields.isScrollEnabled
    && (this->fields.pageIndex & 0x80000000) == 0 )
  {
    v8 = this->fields.manager;
    if ( !v8 )
      goto LABEL_22;
    ListViewManager__BackLoopItem(v8, 0LL);
    if ( this->fields.pageIndex >= 1 )
    {
      v9 = Method_PartyListViewIndicator_OnClickLeft__;
      if ( (*((_BYTE *)Method_PartyListViewIndicator_OnClickLeft__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1BCA7F8(Method_PartyListViewIndicator_OnClickLeft__);
      v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 7, 0LL);
      v8 = this->fields.manager;
      if ( v8 )
      {
        pageIndex = this->fields.pageIndex;
LABEL_20:
        ListViewManager__MoveCenterItem(v8, pageIndex - 1, 1, 0, 0.0, 0LL);
        return;
      }
      goto LABEL_22;
    }
    v12 = this->fields.manager;
    if ( !v12 )
      goto LABEL_22;
    if ( v12->fields.isLoop )
    {
      v13 = Method_PartyListViewIndicator_OnClickLeft__;
      if ( (*((_BYTE *)Method_PartyListViewIndicator_OnClickLeft__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_1BCA7F8(Method_PartyListViewIndicator_OnClickLeft__);
      v14 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 7, 0LL);
      v8 = this->fields.manager;
      if ( v8 )
      {
        pageIndex = this->fields.pageMax;
        goto LABEL_20;
      }
LABEL_22:
      sub_1BCAA3C(v8, v7);
    }
  }
}


void __fastcall PartyListViewIndicator__OnClickRight(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *manager; // x20
  __int64 v7; // x1
  ListViewManager_o *v8; // x0
  int32_t pageIndex; // w8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  int32_t v12; // w1
  struct ListViewManager_o *v13; // x8
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0

  if ( (byte_4B11E40 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_PartyListViewIndicator_OnClickRight__, v4, v5);
    byte_4B11E40 = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(manager, 0LL, 0LL)
    && this->fields.isScrollEnabled
    && (this->fields.pageIndex & 0x80000000) == 0 )
  {
    v8 = this->fields.manager;
    if ( !v8 )
      goto LABEL_23;
    ListViewManager__FowardLoopItem(v8, 0LL);
    pageIndex = this->fields.pageIndex;
    if ( (pageIndex & 0x80000000) == 0 && pageIndex < this->fields.pageMax - 1 )
    {
      v10 = Method_PartyListViewIndicator_OnClickRight__;
      if ( (*((_BYTE *)Method_PartyListViewIndicator_OnClickRight__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1BCA7F8(Method_PartyListViewIndicator_OnClickRight__);
      v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 7, 0LL);
      v8 = this->fields.manager;
      if ( v8 )
      {
        v12 = this->fields.pageIndex + 1;
LABEL_21:
        ListViewManager__MoveCenterItem(v8, v12, 1, 0, 0.0, 0LL);
        return;
      }
      goto LABEL_23;
    }
    v13 = this->fields.manager;
    if ( !v13 )
      goto LABEL_23;
    if ( v13->fields.isLoop )
    {
      v14 = Method_PartyListViewIndicator_OnClickRight__;
      if ( (*((_BYTE *)Method_PartyListViewIndicator_OnClickRight__ + 83) & 2) != 0 )
        v14 = (_QWORD *)sub_1BCA7F8(Method_PartyListViewIndicator_OnClickRight__);
      v15 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v14, v14[4]);
      OverwriteAssetSoundName__PlaySystemSe(v15, 7, 0LL);
      v8 = this->fields.manager;
      if ( v8 )
      {
        v12 = 0;
        goto LABEL_21;
      }
LABEL_23:
      sub_1BCAA3C(v8, v7);
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

  if ( (byte_4B11E3A & 1) == 0 )
  {
    sub_1BCA7E0(&PartyListViewItem_TypeInfo, manager, item);
    byte_4B11E3A = 1;
  }
  this->fields.manager = manager;
  leftObject = (UnityEngine_GameObject_o *)sub_1BCA784(&this->fields.manager, manager);
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
    sub_1BCAA3C(leftObject, v14);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_GameObject_o *organizationNumObject; // x0
  int v14; // w8
  UnityEngine_GameObject_o *v15; // x19
  __int64 *v16; // x8
  UISprite_o *v17; // x21

  if ( (byte_4B11E41 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, *(_QWORD *)&servantNum, method);
    sub_1BCA7E0(&StringLiteral_21334/*"limited_bg"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_23639/*"solo_bg"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_23753/*"startingonly_bg"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_22688/*"pair_bg"*/, v11, v12);
    byte_4B11E41 = 1;
  }
  organizationNumObject = this->fields.organizationNumObject;
  if ( !organizationNumObject )
LABEL_19:
    sub_1BCAA3C(organizationNumObject, *(_QWORD *)&servantNum);
  organizationNumObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        organizationNumObject,
                                                        (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v14 = servantNum - 1;
  v15 = organizationNumObject;
  switch ( v14 )
  {
    case 0:
      organizationNumObject = this->fields.soloBaseObject;
      if ( !organizationNumObject )
        goto LABEL_19;
      organizationNumObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            organizationNumObject,
                                                            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !this->fields.soloBaseObject )
        goto LABEL_19;
      v17 = (UISprite_o *)organizationNumObject;
      UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0LL);
      organizationNumObject = this->fields.organizationNumObject;
      if ( !organizationNumObject )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive(organizationNumObject, 0, 0LL);
      if ( !v17 )
        goto LABEL_19;
      UISprite__set_spriteName(v17, (System_String_o *)StringLiteral_23639/*"solo_bg"*/, 0LL);
      organizationNumObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v17->klass->vtable._33_MakePixelPerfect.method)(
                                                            v17,
                                                            v17->klass->vtable._34_get_minWidth.methodPtr);
      if ( !v15 )
        goto LABEL_19;
      goto LABEL_18;
    case 1:
      if ( !organizationNumObject )
        goto LABEL_19;
      v16 = &StringLiteral_22688/*"pair_bg"*/;
      break;
    case 2:
      if ( !organizationNumObject )
        goto LABEL_19;
      v16 = &StringLiteral_23753/*"startingonly_bg"*/;
      break;
    default:
      if ( !organizationNumObject )
        goto LABEL_19;
      v16 = &StringLiteral_21334/*"limited_bg"*/;
      break;
  }
  UISprite__set_spriteName((UISprite_o *)organizationNumObject, (System_String_o *)*v16, 0LL);
LABEL_18:
  ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))v15->klass[2]._1.typeMetadataHandle)(
    v15,
    v15->klass[2]._1.interopData);
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
  sub_1BCA784(&this->fields.setupInfo, setupInfo);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1BCA784(&this->fields.questRestrictionInfo, questRestrictionInfo);
  this->fields.eventMargeUpValInfo = 0LL;
  sub_1BCA784(&this->fields.eventMargeUpValInfo, 0LL);
  partyEventPointIndicator = this->fields.partyEventPointIndicator;
  if ( !partyEventPointIndicator
    || (PartyEventPointIndicator__SetInfomation(partyEventPointIndicator, questRestrictionInfo, classIds, v9),
        (partyEventPointIndicator = this->fields.partyEventPointIndicator) == 0LL) )
  {
    sub_1BCAA3C(partyEventPointIndicator, v8);
  }
  PartyEventPointIndicator__SetTotalDropItemList(partyEventPointIndicator, v8, v11);
}


void __fastcall PartyListViewIndicator__SetEventLimitEquipSetting(
        PartyListViewIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *IsEventOnlyEquip; // x0
  __int64 v11; // x1
  struct System_Int32_array *useLimitEquip; // x21
  __int64 v13; // x8
  System_String_o *v14; // x20
  unsigned __int64 v15; // x22
  int v16; // w26
  Il2CppObject *v17; // x0
  int v18; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B11E42 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_8380/*"LIMIT_EQUIP_SETTING"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    byte_4B11E42 = 1;
  }
  IsEventOnlyEquip = (System_String_o *)PartyListViewIndicator__IsEventOnlyEquip(this, method);
  if ( ((unsigned __int8)IsEventOnlyEquip & 1) != 0 )
  {
    useLimitEquip = this->fields.useLimitEquip;
    if ( !useLimitEquip )
      goto LABEL_15;
    v13 = *(_QWORD *)&useLimitEquip->max_length;
    v14 = (System_String_o *)StringLiteral_1/*""*/;
    if ( (int)v13 >= 1 )
    {
      v15 = 0LL;
      while ( 1 )
      {
        if ( v15 >= (unsigned int)v13 )
          sub_1BCAA44(IsEventOnlyEquip, v11);
        if ( !v14 )
          break;
        v16 = useLimitEquip->m_Items[v15 + 1];
        if ( v14->fields._stringLength >= 1 )
          v14 = System_String__Concat_62401220(v14, (System_String_o *)StringLiteral_863/*","*/, 0LL);
        v18 = v16;
        v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
        IsEventOnlyEquip = System_String__Concat((Il2CppObject *)v14, v17, 0LL);
        LODWORD(v13) = useLimitEquip->max_length;
        ++v15;
        v14 = IsEventOnlyEquip;
        if ( (__int64)v15 >= (int)v13 )
          goto LABEL_12;
      }
LABEL_15:
      sub_1BCAA3C(IsEventOnlyEquip, v11);
    }
LABEL_12:
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_8380/*"LIMIT_EQUIP_SETTING"*/, v14, 0LL);
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
    sub_1BCAA3C(leftObject, v4);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  UnityEngine_Object_o *pageBaseObject; // x21
  UISprite_o *gameObject; // x0
  __int64 v33; // x1
  __int64 v34; // x21
  struct UISprite_array *pageSpriteList; // x8
  __int64 *v36; // x8
  int v37; // w24
  struct UnityEngine_GameObject_o *waveNumObject; // x8
  __int64 v39; // x1
  Il2CppObject *Component_object; // x21
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x0
  System_String_o *v43; // x21
  UISprite_o *v44; // x22
  System_String_o *v45; // x0
  __int64 v46; // x1
  UISprite_o *indexSprite; // x22
  System_String_o *v48; // x21
  UISprite_o *waveMaxNumTensPlaceSprite; // x22
  System_String_o *v50; // x0
  __int64 v51; // x1
  System_String_o *v52; // x23
  UISprite_o *waveMaxNumTensPlaceGlowSprite; // x22
  System_String_o *v54; // x0
  System_String_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  int32_t v57; // w1
  UISprite_o *waveNumTensPlaceSprite; // x22
  System_String_o *v59; // x0
  __int64 v60; // x1
  System_String_o *v61; // x23
  UISprite_o *waveNumTensPlaceGlowSprite; // x22
  System_String_o *v63; // x0
  System_String_o *v64; // x0
  UISprite_o *waveNumOnesPlaceSprite; // x21
  System_String_o *v66; // x0
  __int64 v67; // x1
  System_String_o *v68; // x22
  UISprite_o *waveNumOnesPlaceGlowSprite; // x21
  System_String_o *v70; // x0
  System_String_o *v71; // x0
  UISprite_o *waveMaxNumOnesPlaceSprite; // x21
  System_String_o *v73; // x0
  System_String_o *v74; // x0
  UISprite_o *waveMaxNumOnesPlaceGlowSprite; // x21
  System_String_o *v76; // x0
  System_String_o *v77; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w21
  bool v80; // w20
  int v81; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B11E3C & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v5, v6);
    sub_1BCA7E0(&LastUsedDeckNumberManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&OptionManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_17301/*"battle_num_"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_20687/*"img_slider_on"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_16711/*"_glow"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_17303/*"battle_num_slash_glow"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_22718/*"party_txt_"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_17296/*"battle_bg"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_20686/*"img_slider_off"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_17302/*"battle_num_slash"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_22717/*"party_bg"*/, v29, v30);
    byte_4B11E3C = 1;
  }
  this->fields.pageIndex = index;
  if ( (index & 0x80000000) == 0 )
  {
    pageBaseObject = (UnityEngine_Object_o *)this->fields.pageBaseObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    gameObject = (UISprite_o *)UnityEngine_Object__op_Inequality(pageBaseObject, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 && this->fields.pageMax >= 1 )
    {
      v34 = 0LL;
      do
      {
        pageSpriteList = this->fields.pageSpriteList;
        if ( !pageSpriteList )
          goto LABEL_96;
        if ( (unsigned int)v34 >= pageSpriteList->max_length )
          sub_1BCAA44(gameObject, v33);
        gameObject = pageSpriteList->m_Items[v34];
        if ( !gameObject )
          goto LABEL_96;
        if ( index == (_DWORD)v34 )
          v36 = &StringLiteral_20687/*"img_slider_on"*/;
        else
          v36 = &StringLiteral_20686/*"img_slider_off"*/;
        UISprite__set_spriteName(gameObject, (System_String_o *)*v36, 0LL);
      }
      while ( (int)++v34 < this->fields.pageMax );
    }
    v37 = index + 1;
    v81 = index + 1;
    gameObject = (UISprite_o *)System_Int32__ToString((int32_t)&v81, 0LL);
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
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v39);
      AtlasManager__SetPartyOrganizationImage(
        (UISprite_o *)Component_object,
        (System_String_o *)StringLiteral_17296/*"battle_bg"*/,
        0LL);
      AtlasManager__SetPartyOrganizationImage(
        this->fields.waveNumSlashSprite,
        (System_String_o *)StringLiteral_17302/*"battle_num_slash"*/,
        0LL);
      AtlasManager__SetPartyOrganizationImage(
        this->fields.waveNumSlashGlowSprite,
        (System_String_o *)StringLiteral_17303/*"battle_num_slash_glow"*/,
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
        v81 = this->fields.pageMax / 10;
        v50 = System_Int32__ToString((int32_t)&v81, 0LL);
        v52 = System_String__Concat_62401220((System_String_o *)StringLiteral_17301/*"battle_num_"*/, v50, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v51);
        AtlasManager__SetPartyOrganizationImage(waveMaxNumTensPlaceSprite, v52, 0LL);
        waveMaxNumTensPlaceGlowSprite = this->fields.waveMaxNumTensPlaceGlowSprite;
        v81 = this->fields.pageMax / 10;
        v54 = System_Int32__ToString((int32_t)&v81, 0LL);
        v55 = System_String__Concat_62412480(
                (System_String_o *)StringLiteral_17301/*"battle_num_"*/,
                v54,
                (System_String_o *)StringLiteral_16711/*"_glow"*/,
                0LL);
        AtlasManager__SetPartyOrganizationImage(waveMaxNumTensPlaceGlowSprite, v55, 0LL);
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
        v56 = this->fields.waveNumObject;
        if ( v37 >= 10 )
        {
          GameObjectExtensions__SetLocalPositionX(v56, 7.0, 0LL);
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
          v81 = v37 / 0xAu;
          v59 = System_Int32__ToString((int32_t)&v81, 0LL);
          v61 = System_String__Concat_62401220((System_String_o *)StringLiteral_17301/*"battle_num_"*/, v59, 0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v60);
          AtlasManager__SetPartyOrganizationImage(waveNumTensPlaceSprite, v61, 0LL);
          waveNumTensPlaceGlowSprite = this->fields.waveNumTensPlaceGlowSprite;
          v81 = v37 / 0xAu;
          v63 = System_Int32__ToString((int32_t)&v81, 0LL);
          v64 = System_String__Concat_62412480(
                  (System_String_o *)StringLiteral_17301/*"battle_num_"*/,
                  v63,
                  (System_String_o *)StringLiteral_16711/*"_glow"*/,
                  0LL);
          AtlasManager__SetPartyOrganizationImage(waveNumTensPlaceGlowSprite, v64, 0LL);
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
          v57 = 322;
        }
        else
        {
          GameObjectExtensions__SetLocalPositionX(v56, 1.0, 0LL);
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
          v57 = 308;
        }
        UIWidget__set_width((UIWidget_o *)Component_object, v57, 0LL);
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
        v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionX(v41, 67.0, 0LL);
        gameObject = this->fields.waveMaxNumOnesPlaceGlowSprite;
        if ( !gameObject )
          goto LABEL_96;
        v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionX(v42, 67.0, 0LL);
      }
      waveNumOnesPlaceSprite = this->fields.waveNumOnesPlaceSprite;
      v81 = v37 % 10;
      v66 = System_Int32__ToString((int32_t)&v81, 0LL);
      v68 = System_String__Concat_62401220((System_String_o *)StringLiteral_17301/*"battle_num_"*/, v66, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v67);
      AtlasManager__SetPartyOrganizationImage(waveNumOnesPlaceSprite, v68, 0LL);
      waveNumOnesPlaceGlowSprite = this->fields.waveNumOnesPlaceGlowSprite;
      v81 = v37 % 10;
      v70 = System_Int32__ToString((int32_t)&v81, 0LL);
      v71 = System_String__Concat_62412480(
              (System_String_o *)StringLiteral_17301/*"battle_num_"*/,
              v70,
              (System_String_o *)StringLiteral_16711/*"_glow"*/,
              0LL);
      AtlasManager__SetPartyOrganizationImage(waveNumOnesPlaceGlowSprite, v71, 0LL);
      waveMaxNumOnesPlaceSprite = this->fields.waveMaxNumOnesPlaceSprite;
      v81 = this->fields.pageMax % 10;
      v73 = System_Int32__ToString((int32_t)&v81, 0LL);
      v74 = System_String__Concat_62401220((System_String_o *)StringLiteral_17301/*"battle_num_"*/, v73, 0LL);
      AtlasManager__SetPartyOrganizationImage(waveMaxNumOnesPlaceSprite, v74, 0LL);
      waveMaxNumOnesPlaceGlowSprite = this->fields.waveMaxNumOnesPlaceGlowSprite;
      v81 = this->fields.pageMax % 10;
      v76 = System_Int32__ToString((int32_t)&v81, 0LL);
      v77 = System_String__Concat_62412480(
              (System_String_o *)StringLiteral_17301/*"battle_num_"*/,
              v76,
              (System_String_o *)StringLiteral_16711/*"_glow"*/,
              0LL);
      AtlasManager__SetPartyOrganizationImage(waveMaxNumOnesPlaceGlowSprite, v77, 0LL);
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
      v43 = (System_String_o *)gameObject;
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
                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !gameObject )
        goto LABEL_96;
      v44 = gameObject;
      UISprite__set_atlas(gameObject, this->fields.indexLocalAtlas, 0LL);
      UISprite__set_spriteName(v44, (System_String_o *)StringLiteral_22717/*"party_bg"*/, 0LL);
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v44->klass->vtable._33_MakePixelPerfect.method)(
        v44,
        v44->klass->vtable._34_get_minWidth.methodPtr);
      gameObject = this->fields.indexSprite;
      if ( !gameObject )
        goto LABEL_96;
      gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_96;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v45 = System_String__Concat_62401220((System_String_o *)StringLiteral_22718/*"party_txt_"*/, v43, 0LL);
      indexSprite = this->fields.indexSprite;
      v48 = v45;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v46);
      if ( !AtlasManager__SetPartyOrganizationImage(indexSprite, v48, 0LL) )
      {
        gameObject = this->fields.indexSprite;
        if ( !gameObject )
          goto LABEL_96;
        UISprite__set_atlas(gameObject, this->fields.indexLocalAtlas, 0LL);
        gameObject = this->fields.indexSprite;
        if ( !gameObject )
          goto LABEL_96;
        UISprite__set_spriteName(gameObject, v48, 0LL);
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
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v33);
    gameObject = (UISprite_o *)OptionManager__GetAutoSelectParty(0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_96;
      questId = questRestrictionInfo->fields.questId;
      if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v33);
      v80 = LastUsedDeckNumberManager__GetDeckNumber(questId, 0LL) - 1 == index;
    }
    else
    {
LABEL_91:
      v80 = 0;
    }
    gameObject = this->fields.lastTimeUsedSprite;
    if ( !gameObject
      || (gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
    {
LABEL_96:
      sub_1BCAA3C(gameObject, v33);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v80, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  System_Array_o *pageSpriteList; // x8
  System_Array_o **p_pageSpriteList; // x21
  PartyListViewIndicator_o *v27; // x22
  System_Array_o *v28; // x8
  Il2CppObject *klass; // x23
  System_Array_o *v30; // x8
  float v31; // s0
  float v32; // s1
  float v33; // s2
  System_Array_o *v34; // x8
  float v35; // s8
  float v36; // s9
  float v37; // s10
  float v38; // s0
  float v39; // s1
  float v40; // s2
  int monitor; // w24
  float v42; // s8
  float v43; // s9
  float v44; // s10
  UnityEngine_Component_o **v45; // x25
  UnityEngine_Component_o *v46; // x26
  PartyListViewIndicator_o *v47; // x28
  __int64 v48; // x2
  __int64 v49; // x3
  UnityEngine_MonoBehaviour_o *v50; // x29
  EventDelegate_o *v51; // x27
  struct UnityEngine_GameObject_o *soloBaseObject; // x29
  int32_t m_CancellationTokenSource; // w2
  int v54; // w8
  __int64 v55; // x8
  _QWORD *v56; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v58; // x8
  __int64 v59; // x22
  void *v60; // x9
  UnityEngine_Object_o *pageBaseObject; // x20
  System_Array_o *v62; // x8
  __int64 v63; // x20
  int v64; // w9
  System_String_o *v65; // x1
  float v66; // s1
  float v67; // s2
  int32_t pageMax; // w19
  float v69; // s8
  float v70; // s9
  __int64 v71; // x0
  UnityEngine_Transform_o *parent; // [xsp+8h] [xbp-88h]
  int v73; // [xsp+1Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B11E3B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UICommonButton___, *(_QWORD *)&max, method);
    sub_1BCA7E0(&EventDelegate_TypeInfo, v5, v6);
    sub_1BCA7E0(&int_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__get_Item__, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_UISprite___, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&UISprite___TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_20686/*"img_slider_off"*/, v21, v22);
    this = (PartyListViewIndicator_o *)sub_1BCA7E0(&StringLiteral_10004/*"OnClickTabParty"*/, v23, v24);
    byte_4B11E3B = 1;
  }
  p_pageSpriteList = (System_Array_o **)&v4->fields.pageSpriteList;
  pageSpriteList = (System_Array_o *)v4->fields.pageSpriteList;
  if ( !pageSpriteList )
    goto LABEL_67;
  if ( SLODWORD(pageSpriteList[1].monitor) < max )
  {
    this = (PartyListViewIndicator_o *)sub_1BCA888(UISprite___TypeInfo, (unsigned int)max);
    if ( !*p_pageSpriteList )
      goto LABEL_67;
    v27 = this;
    System_Array__CopyTo(*p_pageSpriteList, (System_Array_o *)this, 0, 0LL);
    v28 = *p_pageSpriteList;
    if ( !*p_pageSpriteList )
      goto LABEL_67;
    if ( !LODWORD(v28[1].monitor) )
      goto LABEL_74;
    klass = (Il2CppObject *)v28[2].klass;
    if ( !klass )
      goto LABEL_67;
    this = (PartyListViewIndicator_o *)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)v28[2].klass,
                                         0LL);
    if ( !this )
      goto LABEL_67;
    this = (PartyListViewIndicator_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
    v30 = *p_pageSpriteList;
    parent = (UnityEngine_Transform_o *)this;
    if ( !*p_pageSpriteList )
      goto LABEL_67;
    if ( LODWORD(v30[1].monitor) <= 1 )
      goto LABEL_74;
    this = (PartyListViewIndicator_o *)v30[2].monitor;
    if ( !this )
      goto LABEL_67;
    this = (PartyListViewIndicator_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_67;
    *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v34 = *p_pageSpriteList;
    if ( !*p_pageSpriteList )
      goto LABEL_67;
    if ( !LODWORD(v34[1].monitor) )
LABEL_74:
      sub_1BCAA44(this, *(_QWORD *)&max);
    this = (PartyListViewIndicator_o *)v34[2].klass;
    if ( !this )
      goto LABEL_67;
    v35 = v31;
    v36 = v32;
    v37 = v33;
    this = (PartyListViewIndicator_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_67;
    *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    if ( !*p_pageSpriteList || !v27 )
      goto LABEL_67;
    monitor = (int)(*p_pageSpriteList)[1].monitor;
    if ( monitor < SLODWORD(v27->fields.m_CancellationTokenSource) )
    {
      v42 = v35 - v38;
      v43 = v36 - v39;
      v44 = v37 - v40;
      v45 = (UnityEngine_Component_o **)(&v27->fields.soloBaseObject + monitor);
      while ( 1 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&max);
        this = (PartyListViewIndicator_o *)UnityEngine_Object__Instantiate_object__49903816(
                                             klass,
                                             parent,
                                             (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_UISprite___);
        if ( !this )
          break;
        v46 = (UnityEngine_Component_o *)this;
        this = (PartyListViewIndicator_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          break;
        v74.fields.z = v44 * (float)monitor;
        v74.fields.y = v43 * (float)monitor;
        v74.fields.x = v42 * (float)monitor;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v74, 0LL);
        this = (PartyListViewIndicator_o *)UnityEngine_Component__GetComponent_object_(
                                             v46,
                                             (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
        if ( !this )
          break;
        v47 = this;
        this = (PartyListViewIndicator_o *)this->fields.selectNameLabel;
        if ( !this )
          break;
        this = (PartyListViewIndicator_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)this,
                                             0,
                                             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventDelegate__get_Item__);
        if ( !this )
          break;
        v50 = *(UnityEngine_MonoBehaviour_o **)&this->fields.m_CachedPtr;
        v51 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, *(_QWORD *)&max, v48, v49);
        EventDelegate___ctor_47349156(v51, v50, (System_String_o *)StringLiteral_10004/*"OnClickTabParty"*/, 0LL);
        if ( !v51 )
          break;
        this = (PartyListViewIndicator_o *)EventDelegate__get_parameters(v51, 0LL);
        if ( !this )
          break;
        if ( !LODWORD(this->fields.m_CancellationTokenSource) )
          goto LABEL_74;
        soloBaseObject = this->fields.soloBaseObject;
        v73 = monitor;
        this = (PartyListViewIndicator_o *)j_il2cpp_value_box_0(int_TypeInfo, &v73);
        if ( !soloBaseObject )
          break;
        soloBaseObject[1].monitor = this;
        sub_1BCA784(&soloBaseObject[1].monitor, this);
        this = (PartyListViewIndicator_o *)v47->fields.selectNameLabel;
        if ( !this )
          break;
        m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
        v54 = HIDWORD(this->fields.m_CancellationTokenSource) + 1;
        LODWORD(this->fields.m_CancellationTokenSource) = 0;
        HIDWORD(this->fields.m_CancellationTokenSource) = v54;
        if ( m_CancellationTokenSource >= 1 )
        {
          System_Array__Clear(*(System_Array_o **)&this->fields.m_CachedPtr, 0, m_CancellationTokenSource, 0LL);
          this = (PartyListViewIndicator_o *)v47->fields.selectNameLabel;
          if ( !this )
            break;
        }
        v55 = *(_QWORD *)&this->fields.m_CachedPtr;
        v56 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v55 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v55 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v51,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
        }
        else
        {
          v58 = v55 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v58 + 32) = v51;
          sub_1BCA784(v58 + 32, v51);
        }
        this = (PartyListViewIndicator_o *)sub_1BCA91C(v46, v27->klass->_1.element_class);
        if ( !this )
        {
          v71 = sub_1BCAA60();
          sub_1BCA908(v71, 0LL);
        }
        if ( (unsigned int)monitor >= LODWORD(v27->fields.m_CancellationTokenSource) )
          goto LABEL_74;
        *v45 = v46;
        sub_1BCA784(v45, v46);
        ++monitor;
        ++v45;
        if ( monitor >= SLODWORD(v27->fields.m_CancellationTokenSource) )
          goto LABEL_43;
      }
LABEL_67:
      sub_1BCAA3C(this, *(_QWORD *)&max);
    }
LABEL_43:
    *p_pageSpriteList = (System_Array_o *)v27;
    this = (PartyListViewIndicator_o *)sub_1BCA784(&v4->fields.pageSpriteList, v27);
    pageSpriteList = *p_pageSpriteList;
    if ( !*p_pageSpriteList )
      goto LABEL_67;
  }
  v59 = 0LL;
  while ( 1 )
  {
    v60 = pageSpriteList[1].monitor;
    if ( (int)v59 >= (int)v60 )
      break;
    if ( (unsigned int)v59 >= (unsigned int)v60 )
      goto LABEL_74;
    this = (PartyListViewIndicator_o *)*((_QWORD *)&pageSpriteList[2].klass + v59);
    if ( this )
    {
      this = (PartyListViewIndicator_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (int)v59 < max, 0LL);
        pageSpriteList = *p_pageSpriteList;
        ++v59;
        if ( *p_pageSpriteList )
          continue;
      }
    }
    goto LABEL_67;
  }
  if ( (int)v60 >= max )
    LODWORD(v60) = max;
  v4->fields.pageMax = (int)v60;
  v4->fields.pageIndex = -1;
  if ( (int)v60 <= 1 )
    v4->fields.pageMax = 0;
  pageBaseObject = (UnityEngine_Object_o *)v4->fields.pageBaseObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&max);
  this = (PartyListViewIndicator_o *)UnityEngine_Object__op_Inequality(pageBaseObject, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v62 = *p_pageSpriteList;
    if ( !*p_pageSpriteList )
      goto LABEL_67;
    v63 = 0LL;
    while ( 1 )
    {
      v64 = (int)v62[1].monitor;
      if ( (int)v63 >= v64 )
        break;
      if ( (unsigned int)v63 >= v64 )
        goto LABEL_74;
      this = (PartyListViewIndicator_o *)*((_QWORD *)&v62[2].klass + v63);
      if ( this )
      {
        v65 = (int)v63 >= v4->fields.pageMax ? 0LL : (System_String_o *)StringLiteral_20686/*"img_slider_off"*/;
        UISprite__set_spriteName((UISprite_o *)this, v65, 0LL);
        v62 = (System_Array_o *)v4->fields.pageSpriteList;
        ++v63;
        if ( v62 )
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
    *(UnityEngine_Vector3_o *)(&v66 - 1) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)this,
                                             0LL);
    this = (PartyListViewIndicator_o *)v4->fields.pageBaseObject;
    if ( !this )
      goto LABEL_67;
    pageMax = v4->fields.pageMax;
    v69 = v66;
    v70 = v67;
    this = (PartyListViewIndicator_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_67;
    v75.fields.x = (float)(-10 * pageMax + 10);
    v75.fields.y = v69;
    v75.fields.z = v70;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v75, 0LL);
  }
}


void __fastcall PartyListViewIndicator__SetScrollEnabled(
        PartyListViewIndicator_o *this,
        bool enabled,
        const MethodInfo *method)
{
  this->fields.isScrollEnabled = enabled;
}