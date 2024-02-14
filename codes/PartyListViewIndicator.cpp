void __fastcall PartyListViewIndicator___ctor(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct System_Int32_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  float v12; // s4
  float v13; // s5
  float v14; // s6
  float v15; // s4
  float v16; // s5
  float v17; // s6
  struct UnityEngine_Color_o v18; // [xsp+0h] [xbp-30h] BYREF
  struct UnityEngine_Color_o v19; // [xsp+10h] [xbp-20h] BYREF
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42181D8 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&int___TypeInfo, v3);
    byte_42181D8 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, (unsigned int)(v4->static_fields->DeckMax + 1));
  this->fields.useLimitEquip = v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.useLimitEquip,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v20.fields.r = 1.0;
  v20.fields.g = 1.0;
  v20.fields.b = 1.0;
  v19 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_40757524(v20, v12, v13, v14, (const MethodInfo *)&v19);
  this->fields.ICON_NORMAL_COLOR = v19;
  v21.fields.r = 0.4;
  v18 = (struct UnityEngine_Color_o)0LL;
  v21.fields.g = 0.4;
  v21.fields.b = 0.4;
  UnityEngine_Color___ctor_40757524(v21, v15, v16, v17, (const MethodInfo *)&v18);
  this->fields.ICON_MASK_COLOR = v18;
  this->fields.isScrollEnabled = 1;
  ListViewIndicator___ctor((ListViewIndicator_o *)this, 0LL);
}


void __fastcall PartyListViewIndicator__ClearEventLimitEquip(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *limitMasterFormationButton; // x0

  limitMasterFormationButton = (UnityEngine_Component_o *)this->fields.limitMasterFormationButton;
  if ( !limitMasterFormationButton )
    goto LABEL_10;
  limitMasterFormationButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                            limitMasterFormationButton,
                                                            0LL);
  if ( !limitMasterFormationButton )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)limitMasterFormationButton, 0, 0LL);
  limitMasterFormationButton = (UnityEngine_Component_o *)this->fields.limitEquipIcon;
  if ( !limitMasterFormationButton )
    goto LABEL_10;
  ItemIconComponent__Clear((ItemIconComponent_o *)limitMasterFormationButton, 0LL);
  limitMasterFormationButton = (UnityEngine_Component_o *)this->fields.limitEquipFixSprite;
  if ( !limitMasterFormationButton )
    goto LABEL_10;
  UISprite__set_spriteName((UISprite_o *)limitMasterFormationButton, 0LL, 0LL);
  limitMasterFormationButton = (UnityEngine_Component_o *)this->fields.masterEquipBackSprite;
  if ( !limitMasterFormationButton
    || (UISprite__set_spriteName((UISprite_o *)limitMasterFormationButton, 0LL, 0LL),
        (limitMasterFormationButton = (UnityEngine_Component_o *)this->fields.masterEquipFrameSprite) == 0LL)
    || (UISprite__set_spriteName((UISprite_o *)limitMasterFormationButton, 0LL, 0LL),
        (limitMasterFormationButton = (UnityEngine_Component_o *)this->fields.masterEquipIcon1) == 0LL)
    || (ItemIconComponent__SetColor(
          (ItemIconComponent_o *)limitMasterFormationButton,
          this->fields.ICON_NORMAL_COLOR,
          0LL),
        (limitMasterFormationButton = (UnityEngine_Component_o *)this->fields.masterEquipIcon2) == 0LL) )
  {
LABEL_10:
    sub_B0D97C(limitMasterFormationButton);
  }
  ItemIconComponent__SetColor((ItemIconComponent_o *)limitMasterFormationButton, this->fields.ICON_NORMAL_COLOR, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewIndicator__DispFriendPointUpBonus(
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

  if ( (byte_42181D7 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&bonusVal);
    byte_42181D7 = 1;
  }
  v10 = 0;
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
            v9 = 0;
            goto LABEL_19;
          }
        }
      }
      else
      {
        v10 = bonusVal / 0x3E8u;
        v7 = this->fields.friendPointUpBonusLabel;
        gameObject = (UnityEngine_Component_o *)System_Int32__ToString((int32_t)&v10, 0LL);
        if ( v7 )
        {
          UILabel__set_text(v7, (System_String_o *)gameObject, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.friendPointUpBonusSprite;
          if ( gameObject )
          {
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
            if ( gameObject )
            {
              v9 = 1;
LABEL_19:
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v9, 0LL);
              return;
            }
          }
        }
      }
      sub_B0D97C(gameObject);
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
  __int64 v17; // x1
  const MethodInfo *v18; // x1
  __int64 Instance; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v21; // x8
  int32_t index; // w24
  char v23; // w21
  UISprite_o *masterEquipBackSprite; // x22
  System_String_o *v25; // x22
  __int64 v26; // x22
  unsigned __int64 v27; // x25
  struct System_Int32_array *useLimitEquip; // x28
  UISprite_o *limitEquipFixSprite; // x19
  struct System_Int32_array *v30; // x8
  struct System_Int32_array *v31; // x8
  int32_t v32; // w21
  WebViewObject_o *Component_WebViewObject; // x20
  __int64 v34; // x0
  EventEquipSkillReleaseEntity_o *outEnt; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42181D0 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, partyItem);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v7);
    sub_B0D8A4(&char___TypeInfo, v8);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UISprite___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&StringLiteral_18560/*"event_emblem_frame"*/, v12);
    sub_B0D8A4(&StringLiteral_19393/*"icon_equip_fixation"*/, v13);
    sub_B0D8A4(&StringLiteral_8416/*"LIMIT_EQUIP_SETTING"*/, v14);
    sub_B0D8A4(&StringLiteral_17067/*"btn_skill_off"*/, v15);
    sub_B0D8A4(&StringLiteral_18559/*"event_emblem_dim"*/, v16);
    sub_B0D8A4(&StringLiteral_17068/*"btn_skill_on"*/, v17);
    byte_42181D0 = 1;
  }
  outEnt = 0LL;
  if ( !PartyListViewIndicator__IsEventOnlyEquip(this, (const MethodInfo *)partyItem) )
    goto LABEL_50;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
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
    PartyListViewIndicator__ClearEventLimitEquip(this, v18);
    return;
  }
  Instance = (__int64)outEnt;
  if ( !outEnt )
    goto LABEL_75;
  Instance = EventEquipSkillReleaseEntity__isForceOverwrite(outEnt, 0LL);
  if ( !partyItem )
    goto LABEL_75;
  v21 = partyItem->fields.questRestrictionInfo;
  index = partyItem->fields.index;
  v23 = Instance;
  if ( v21 )
    LOBYTE(v21) = v21->fields.eventDeckNum > 0;
  if ( ((unsigned __int8)v21 & 1) != 0 || (unsigned int)(partyItem->fields.menuKind - 1) <= 6 )
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
    sub_B0D97C(Instance);
  ItemIconComponent__SetEquipItem((ItemIconComponent_o *)Instance, outEnt->fields.overwriteEquipIconId, 0LL);
  masterEquipBackSprite = this->fields.masterEquipBackSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(masterEquipBackSprite, (System_String_o *)StringLiteral_18559/*"event_emblem_dim"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.masterEquipFrameSprite, (System_String_o *)StringLiteral_18560/*"event_emblem_frame"*/, 0LL);
  if ( !this->fields.isChkSave )
  {
    if ( (v23 & 1) == 0 )
    {
      Instance = (__int64)UnityEngine_PlayerPrefs__GetString_34963268((System_String_o *)StringLiteral_8416/*"LIMIT_EQUIP_SETTING"*/, 0LL);
      if ( !Instance )
        goto LABEL_75;
      v25 = (System_String_o *)Instance;
      if ( *(int *)(Instance + 16) >= 1 )
      {
        Instance = sub_B0D8BC(char___TypeInfo, 1LL);
        if ( !Instance )
          goto LABEL_75;
        if ( !*(_DWORD *)(Instance + 24) )
          goto LABEL_76;
        *(_WORD *)(Instance + 32) = 44;
        Instance = (__int64)System_String__Split(v25, (System_Char_array *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_75;
        v26 = Instance;
        if ( *(int *)(Instance + 24) >= 1 )
        {
          v27 = 0LL;
          do
          {
            Instance = (__int64)BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = (__int64)BalanceConfig_TypeInfo;
            }
            if ( (__int64)v27 > *(int *)(*(_QWORD *)(Instance + 184) + 148LL) )
              break;
            if ( v27 >= *(unsigned int *)(v26 + 24) )
              goto LABEL_76;
            useLimitEquip = this->fields.useLimitEquip;
            Instance = System_Int32__Parse(*(System_String_o **)(v26 + 32 + 8 * v27), 0LL);
            if ( !useLimitEquip )
              goto LABEL_75;
            if ( v27 >= useLimitEquip->max_length )
              goto LABEL_76;
            useLimitEquip->m_Items[++v27] = Instance;
          }
          while ( (__int64)v27 < *(int *)(v26 + 24) );
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
  if ( (v23 & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    if ( isChng )
    {
      v30 = this->fields.useLimitEquip;
      if ( !v30 )
        goto LABEL_75;
      if ( index >= v30->max_length )
        goto LABEL_76;
      v30->m_Items[index + 1] = v30->m_Items[index + 1] == 0;
    }
    v31 = this->fields.useLimitEquip;
    if ( !v31 )
      goto LABEL_75;
    if ( index < v31->max_length )
    {
      Instance = (__int64)this->fields.limitMasterFormationButton;
      if ( Instance )
      {
        v32 = v31->m_Items[index + 1];
        Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)Instance,
                                    (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( v32 )
        {
          if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetEventUI((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_17068/*"btn_skill_on"*/, 0LL);
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
          AtlasManager__SetEventUI((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_17067/*"btn_skill_off"*/, 0LL);
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
    v34 = sub_B0D9A8(Instance);
    sub_B0D948(v34, 0LL);
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
  AtlasManager__SetEventUI(limitEquipFixSprite, (System_String_o *)StringLiteral_19393/*"icon_equip_fixation"*/, 0LL);
}


void __fastcall PartyListViewIndicator__DrawPartyInfo(
        PartyListViewIndicator_o *this,
        PartyListViewItem_o *partyItem,
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
  __int64 v18; // x1
  __int64 v19; // x1
  UnityEngine_GameObject_o *soloBaseObject; // x0
  UISprite_o *v21; // x21
  bool v22; // w1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  EventPartyMargeUpValInfo_o *v35; // x1
  const MethodInfo *v36; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestRestrictionInfo_o *v38; // x0
  int32_t servantNumMax; // w1
  UISprite_o *v40; // x21
  struct QuestRestrictionInfo_o *v41; // x8
  BalanceConfig_c *v42; // x0
  struct QuestRestrictionInfo_o *v43; // x8
  struct QuestRestrictionInfo_o *v44; // x8
  int32_t maxCost; // w21
  QuestRestrictionInfo_o *v46; // x0
  int32_t v47; // w22
  System_String_o *v48; // x21
  UILabel_o *maxCostLabel; // x22
  System_String_o *v50; // x0
  UILabel_o *splitCostLabel; // x22
  System_String_o *v52; // x0
  int32_t cost; // w8
  UILabel_o *selectCostLabel; // x22
  System_String_o *v55; // x0
  System_String_o *v56; // x0
  UserServantEntity_o *Entity; // x0
  const MethodInfo *v58; // x3
  const MethodInfo *v59; // x1
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  __int64 v62; // x9
  int32_t v63; // w21
  ServantEntity_array *SvtEntityList; // x22
  const MethodInfo *v65; // x1
  System_String_array *SvtNameList; // x23
  const MethodInfo *v67; // x1
  System_Boolean_array *IsFollowerList; // x24
  __int64 v69; // x1
  __int64 v70; // x2
  EventPartyMargeUpValInfo_o *v71; // x25
  struct EventPartyMargeUpValInfo_o **p_eventMargeUpValInfo; // x21
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  const MethodInfo *v79; // x3
  EventUpValInfo_array *v80; // x8
  unsigned __int64 v81; // x20
  unsigned __int64 max_length; // x9
  EventPartyMargeUpValInfo_o *v83; // x22
  UILabel_o *selectNameLabel; // x21
  System_String_o *v85; // x0
  __int64 v86; // x0
  EventUpValInfo_array *v87; // [xsp+0h] [xbp-70h] BYREF
  int32_t genderImageId; // [xsp+Ch] [xbp-64h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *equipName; // [xsp+18h] [xbp-58h] BYREF
  int32_t maxLv; // [xsp+24h] [xbp-4Ch] BYREF
  int32_t condUsrLv[2]; // [xsp+28h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+38h] [xbp-38h] BYREF
  int32_t v94; // [xsp+3Ch] [xbp-34h] BYREF

  if ( (byte_42181CF & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, partyItem);
    sub_B0D8A4(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEquipMaster___, v6);
    sub_B0D8A4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v7);
    sub_B0D8A4(&EventPartyMargeUpValInfo_TypeInfo, v8);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v9);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&StringLiteral_10380/*"PARTY_ORGANIZATION_NAME"*/, v12);
    sub_B0D8A4(&StringLiteral_22258/*"solo_bg"*/, v13);
    sub_B0D8A4(&StringLiteral_10350/*"PARTY_ORGANIZATION_COST_SPLIT"*/, v14);
    sub_B0D8A4(&StringLiteral_10348/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, v15);
    sub_B0D8A4(&StringLiteral_10349/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, v16);
    sub_B0D8A4(&StringLiteral_22287/*"specialparty_bg"*/, v17);
    sub_B0D8A4(&StringLiteral_10347/*"PARTY_ORGANIZATION_COST_COLOR"*/, v18);
    sub_B0D8A4(&StringLiteral_1/*""*/, v19);
    byte_42181CF = 1;
  }
  v94 = 0;
  eventId = 0;
  *(_QWORD *)condUsrLv = 0LL;
  maxLv = 0;
  detail = 0LL;
  equipName = 0LL;
  genderImageId = 0;
  v87 = 0LL;
  if ( partyItem )
  {
    switch ( this->fields.menuKind )
    {
      case 1:
      case 3:
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_113;
        soloBaseObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       soloBaseObject,
                                                       (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !this->fields.soloBaseObject )
          goto LABEL_113;
        v21 = (UISprite_o *)soloBaseObject;
        UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0LL);
        if ( !v21 )
          goto LABEL_113;
        UISprite__set_spriteName(v21, (System_String_o *)StringLiteral_22258/*"solo_bg"*/, 0LL);
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v21->klass->vtable._33_MakePixelPerfect.method)(
          v21,
          v21->klass->vtable._34_get_minWidth.methodPtr);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_113;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.indexBaseObject;
        if ( !soloBaseObject )
          goto LABEL_113;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.selectNameBaseObject;
        if ( !soloBaseObject )
          goto LABEL_113;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.costBaseObject;
        if ( !soloBaseObject )
          goto LABEL_113;
        v22 = 0;
        goto LABEL_68;
      case 2:
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_113;
        soloBaseObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       soloBaseObject,
                                                       (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !this->fields.soloBaseObject )
          goto LABEL_113;
        v40 = (UISprite_o *)soloBaseObject;
        UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0LL);
        if ( !v40 )
          goto LABEL_113;
        UISprite__set_spriteName(v40, (System_String_o *)StringLiteral_22287/*"specialparty_bg"*/, 0LL);
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v40->klass->vtable._33_MakePixelPerfect.method)(
          v40,
          v40->klass->vtable._34_get_minWidth.methodPtr);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_113;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        goto LABEL_63;
      case 4:
      case 5:
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_113;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_113;
        UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
        questRestrictionInfo = this->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_63;
        goto LABEL_35;
      case 6:
      case 7:
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_113;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_113;
        UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
        v38 = this->fields.questRestrictionInfo;
        if ( !v38 )
          goto LABEL_63;
        soloBaseObject = (UnityEngine_GameObject_o *)QuestRestrictionInfo__IsServantNum(v38, 0LL);
        if ( ((unsigned __int8)soloBaseObject & 1) != 0 )
        {
          questRestrictionInfo = this->fields.questRestrictionInfo;
          if ( !questRestrictionInfo )
            goto LABEL_113;
LABEL_35:
          servantNumMax = questRestrictionInfo->fields.servantNumMax;
        }
        else
        {
          soloBaseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !soloBaseObject )
            goto LABEL_113;
          soloBaseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)soloBaseObject,
                                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
          v43 = this->fields.questRestrictionInfo;
          if ( !v43 )
            goto LABEL_113;
          if ( !soloBaseObject )
            goto LABEL_113;
          soloBaseObject = (UnityEngine_GameObject_o *)NpcFollowerMaster__GetQuestFollowerList(
                                                         (NpcFollowerMaster_o *)soloBaseObject,
                                                         v43->fields.questId,
                                                         v43->fields.questPhase,
                                                         0LL);
          v44 = this->fields.questRestrictionInfo;
          if ( !v44 || !soloBaseObject )
            goto LABEL_113;
          servantNumMax = v44->fields.myServantNumMax + LODWORD(soloBaseObject[1].klass);
        }
        goto LABEL_62;
      case 9:
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_113;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_113;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.indexBaseObject;
        if ( !soloBaseObject )
          goto LABEL_113;
        UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
        soloBaseObject = this->fields.selectNameBaseObject;
        if ( !soloBaseObject )
          goto LABEL_113;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.costBaseObject;
        if ( !soloBaseObject )
          goto LABEL_113;
        UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
        soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEventPointIndicator;
        if ( !soloBaseObject )
          goto LABEL_113;
        PartyEventPointIndicator__SetTrendDisp(
          (PartyEventPointIndicator_o *)soloBaseObject,
          partyItem->fields.waveBattleEnemyClassIds,
          0LL);
        goto LABEL_69;
      default:
        v41 = this->fields.questRestrictionInfo;
        if ( v41 && v41->fields.eventDeckNum >= 1 )
        {
          soloBaseObject = this->fields.soloBaseObject;
          if ( !soloBaseObject )
            goto LABEL_113;
          UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
          soloBaseObject = this->fields.organizationNumObject;
          if ( !soloBaseObject )
            goto LABEL_113;
          UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
          v42 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v42 = BalanceConfig_TypeInfo;
          }
          servantNumMax = v42->static_fields->DeckMemberMax;
LABEL_62:
          PartyListViewIndicator__SetEventDeckPartyName(this, servantNumMax, v36);
LABEL_63:
          soloBaseObject = this->fields.indexBaseObject;
          if ( !soloBaseObject
            || (UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL),
                (soloBaseObject = this->fields.selectNameBaseObject) == 0LL) )
          {
LABEL_113:
            sub_B0D97C(soloBaseObject);
          }
          UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        }
        else
        {
          soloBaseObject = this->fields.soloBaseObject;
          if ( !soloBaseObject )
            goto LABEL_113;
          UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
          soloBaseObject = this->fields.organizationNumObject;
          if ( !soloBaseObject )
            goto LABEL_113;
          UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
          soloBaseObject = this->fields.indexBaseObject;
          if ( !soloBaseObject )
            goto LABEL_113;
          UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
          soloBaseObject = this->fields.selectNameBaseObject;
          if ( !soloBaseObject )
            goto LABEL_113;
          UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
          selectNameLabel = this->fields.selectNameLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v85 = LocalizationManager__Get((System_String_o *)StringLiteral_10380/*"PARTY_ORGANIZATION_NAME"*/, 0LL);
          soloBaseObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                         v85,
                                                         (Il2CppObject *)partyItem->fields.deckName,
                                                         0LL);
          if ( !selectNameLabel )
            goto LABEL_113;
          UILabel__set_text(selectNameLabel, (System_String_o *)soloBaseObject, 0LL);
        }
        soloBaseObject = this->fields.costBaseObject;
        if ( soloBaseObject )
        {
          v22 = 1;
LABEL_68:
          UnityEngine_GameObject__SetActive(soloBaseObject, v22, 0LL);
LABEL_69:
          maxCost = partyItem->fields.maxCost;
          v94 = maxCost;
          v46 = this->fields.questRestrictionInfo;
          v47 = v46 ? QuestRestrictionInfo__GetTotalCostRestriction(v46, 0LL) : 0;
          if ( v47 && maxCost > v47 )
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v48 = LocalizationManager__Get((System_String_o *)StringLiteral_10349/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0LL);
            v94 = v47;
          }
          else
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v48 = LocalizationManager__Get((System_String_o *)StringLiteral_10347/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
          }
          maxCostLabel = this->fields.maxCostLabel;
          v50 = System_Int32__ToString((int32_t)&v94, 0LL);
          soloBaseObject = (UnityEngine_GameObject_o *)System_String__Concat_43849904(v48, v50, 0LL);
          if ( maxCostLabel )
          {
            UILabel__set_text(maxCostLabel, (System_String_o *)soloBaseObject, 0LL);
            splitCostLabel = this->fields.splitCostLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v52 = LocalizationManager__Get((System_String_o *)StringLiteral_10350/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
            soloBaseObject = (UnityEngine_GameObject_o *)System_String__Concat_43849904(v48, v52, 0LL);
            if ( splitCostLabel )
            {
              UILabel__set_text(splitCostLabel, (System_String_o *)soloBaseObject, 0LL);
              cost = partyItem->fields.cost;
              selectCostLabel = this->fields.selectCostLabel;
              if ( cost > v94 )
              {
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v55 = LocalizationManager__Get((System_String_o *)StringLiteral_10348/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
                cost = partyItem->fields.cost;
                v48 = v55;
              }
              condUsrLv[1] = cost;
              v56 = System_Int32__ToString((int32_t)&condUsrLv[1], 0LL);
              soloBaseObject = (UnityEngine_GameObject_o *)System_String__Concat_43849904(v48, v56, 0LL);
              if ( selectCostLabel )
              {
                UILabel__set_text(selectCostLabel, (System_String_o *)soloBaseObject, 0LL);
                soloBaseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( soloBaseObject )
                {
                  soloBaseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)soloBaseObject,
                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEquipMaster___);
                  if ( soloBaseObject )
                  {
                    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)soloBaseObject,
                               partyItem->fields.userEquipId,
                               (const MethodInfo_2669DFC *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
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
                        goto LABEL_113;
                      ItemIconComponent__SetEquipItem((ItemIconComponent_o *)soloBaseObject, genderImageId, 0LL);
                      soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipIcon2;
                      if ( !soloBaseObject )
                        goto LABEL_113;
                      ItemIconComponent__SetEquipItem((ItemIconComponent_o *)soloBaseObject, genderImageId, 0LL);
                    }
                    PartyListViewIndicator__DrawEventLimitEquip(this, partyItem, 0, v58);
                    setupInfo = this->fields.setupInfo;
                    if ( !setupInfo )
                      goto LABEL_104;
                    eventIdList = setupInfo->fields.eventIdList;
                    if ( !eventIdList )
                      goto LABEL_113;
                    v62 = *(_QWORD *)&eventIdList->max_length;
                    if ( v62 )
                    {
                      if ( !(_DWORD)v62 )
                      {
LABEL_126:
                        v86 = sub_B0D9A8(soloBaseObject);
                        sub_B0D948(v86, 0LL);
                      }
                      v63 = eventIdList->m_Items[1];
                    }
                    else
                    {
LABEL_104:
                      v63 = 0;
                    }
                    eventId = v63;
                    SvtEntityList = PartyListViewItem__GetSvtEntityList(partyItem, v59);
                    SvtNameList = PartyListViewItem__GetSvtNameList(partyItem, v65);
                    IsFollowerList = PartyListViewItem__GetIsFollowerList(partyItem, v67);
                    v71 = (EventPartyMargeUpValInfo_o *)sub_B0D974(EventPartyMargeUpValInfo_TypeInfo, v69, v70);
                    EventPartyMargeUpValInfo___ctor(v71, v63, SvtEntityList, SvtNameList, IsFollowerList, 0LL);
                    p_eventMargeUpValInfo = &this->fields.eventMargeUpValInfo;
                    this->fields.eventMargeUpValInfo = v71;
                    sub_B0D840(
                      (BattleServantConfConponent_o *)&this->fields.eventMargeUpValInfo,
                      (System_Int32_array **)v71,
                      v73,
                      v74,
                      v75,
                      v76,
                      v77,
                      v78);
                    soloBaseObject = (UnityEngine_GameObject_o *)PartyListViewItem__GetEventUpVal(
                                                                   partyItem,
                                                                   &eventId,
                                                                   &v87,
                                                                   v79);
                    v80 = v87;
                    if ( v87 )
                    {
                      v81 = 0LL;
                      while ( 1 )
                      {
                        max_length = v80->max_length;
                        if ( (__int64)v81 >= (int)max_length )
                          break;
                        if ( v81 >= max_length )
                          goto LABEL_126;
                        soloBaseObject = (UnityEngine_GameObject_o *)v80->m_Items[v81];
                        if ( soloBaseObject )
                        {
                          v83 = *p_eventMargeUpValInfo;
                          soloBaseObject = (UnityEngine_GameObject_o *)EventUpValInfo__GetDropItemList(
                                                                         (EventUpValInfo_o *)soloBaseObject,
                                                                         v81,
                                                                         0LL);
                          if ( !v83 )
                            goto LABEL_113;
                          EventPartyMargeUpValInfo__Add(v83, (EventDropItemUpValInfo_array *)soloBaseObject, 0LL);
                          v80 = v87;
                        }
                        ++v81;
                        if ( !v80 )
                          goto LABEL_113;
                      }
                      soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEventPointIndicator;
                      if ( soloBaseObject )
                      {
                        v35 = *p_eventMargeUpValInfo;
                        goto LABEL_116;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_113;
    }
  }
  soloBaseObject = this->fields.soloBaseObject;
  if ( !soloBaseObject )
    goto LABEL_113;
  UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
  soloBaseObject = this->fields.organizationNumObject;
  if ( !soloBaseObject )
    goto LABEL_113;
  UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
  soloBaseObject = this->fields.indexBaseObject;
  if ( !soloBaseObject )
    goto LABEL_113;
  UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
  soloBaseObject = this->fields.selectNameBaseObject;
  if ( !soloBaseObject )
    goto LABEL_113;
  UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
  soloBaseObject = this->fields.costBaseObject;
  if ( !soloBaseObject )
    goto LABEL_113;
  UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.selectNameLabel;
  if ( !soloBaseObject )
    goto LABEL_113;
  UILabel__set_text((UILabel_o *)soloBaseObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.maxCostLabel;
  if ( !soloBaseObject )
    goto LABEL_113;
  UILabel__set_text((UILabel_o *)soloBaseObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.splitCostLabel;
  if ( !soloBaseObject )
    goto LABEL_113;
  UILabel__set_text((UILabel_o *)soloBaseObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.selectCostLabel;
  if ( !soloBaseObject )
    goto LABEL_113;
  UILabel__set_text((UILabel_o *)soloBaseObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipIcon1;
  if ( !soloBaseObject )
    goto LABEL_113;
  ItemIconComponent__Clear((ItemIconComponent_o *)soloBaseObject, 0LL);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipIcon2;
  if ( !soloBaseObject )
    goto LABEL_113;
  ItemIconComponent__Clear((ItemIconComponent_o *)soloBaseObject, 0LL);
  this->fields.questRestrictionInfo = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v23, v24, v25, v26, v27, v28);
  this->fields.eventMargeUpValInfo = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.eventMargeUpValInfo, 0LL, v29, v30, v31, v32, v33, v34);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEventPointIndicator;
  if ( !soloBaseObject )
    goto LABEL_113;
  v35 = 0LL;
LABEL_116:
  PartyEventPointIndicator__SetTotalDropItemList((PartyEventPointIndicator_o *)soloBaseObject, v35, 0LL);
}


bool __fastcall PartyListViewIndicator__IsEventOnlyEquip(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42181D6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_42181D6 = 1;
  }
  entity = 0LL;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (questRestrictionInfo = this->fields.questRestrictionInfo) == 0LL)
    || !Instance )
  {
LABEL_12:
    sub_B0D97C(Instance);
  }
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          questRestrictionInfo->fields.eventId,
          (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v9; // x8
  int32_t index; // w21
  BalanceConfig_c *v11; // x0
  struct System_Int32_array *useLimitEquip; // x8
  __int64 v14; // x0
  EventEquipSkillReleaseEntity_o *outEnt; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42181D5 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, partyItem);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_42181D5 = 1;
  }
  outEnt = 0LL;
  if ( !PartyListViewIndicator__IsEventOnlyEquip(this, (const MethodInfo *)partyItem) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
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
  v9 = partyItem->fields.questRestrictionInfo;
  index = partyItem->fields.index;
  if ( v9 )
    LOBYTE(v9) = v9->fields.eventDeckNum > 0;
  if ( ((unsigned __int8)v9 & 1) != 0 || (unsigned int)(partyItem->fields.menuKind - 1) <= 6 )
  {
    v11 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v11 = BalanceConfig_TypeInfo;
    }
    index = v11->static_fields->DeckMax;
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
    sub_B0D97C(Instance);
  if ( index >= useLimitEquip->max_length )
  {
    v14 = sub_B0D9A8(Instance);
    sub_B0D948(v14, 0LL);
  }
  return useLimitEquip->m_Items[index + 1] == 0;
}


void __fastcall PartyListViewIndicator__OnClickLeft(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *manager; // x20
  ListViewManager_o *v5; // x0
  int32_t pageIndex; // w8
  struct ListViewManager_o *v7; // x8

  if ( (byte_42181D1 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_42181D1 = 1;
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
      sub_B0D97C(v5);
    }
  }
}


void __fastcall PartyListViewIndicator__OnClickRight(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *manager; // x20
  ListViewManager_o *v5; // x0
  int32_t pageIndex; // w8
  int32_t v7; // w1
  struct ListViewManager_o *v8; // x8

  if ( (byte_42181D2 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_42181D2 = 1;
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
      sub_B0D97C(v5);
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
  struct ListViewManager_o *v14; // x8
  _BOOL4 isLoop; // w8
  char v16; // w9
  bool v17; // w8
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  __int64 v20; // x10
  ListViewItem_o *v21; // x1

  v8 = isRight;
  if ( (byte_42181CC & 1) == 0 )
  {
    sub_B0D8A4(&PartyListViewItem_TypeInfo, manager);
    byte_42181CC = 1;
  }
  this->fields.manager = manager;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.manager,
    (System_Int32_array **)manager,
    (System_String_array **)item,
    (System_String_array **)isTop,
    (System_Boolean_array **)isBottom,
    (System_Int32_array **)isLeft,
    (System_Int32_array *)isRight,
    (System_Int32_array *)method);
  v14 = this->fields.manager;
  if ( !v14 )
    goto LABEL_19;
  isLoop = v14->fields.isLoop;
  leftObject = this->fields.leftObject;
  v16 = isLeft | v8;
  if ( isLoop )
    v8 |= isLeft;
  if ( !leftObject
    || (!isLoop ? (v17 = isLeft) : (v17 = v16),
        UnityEngine_GameObject__SetActive(leftObject, v17, 0LL),
        (leftObject = this->fields.rightObject) == 0LL) )
  {
LABEL_19:
    sub_B0D97C(leftObject);
  }
  UnityEngine_GameObject__SetActive(leftObject, v8 & 1, 0LL);
  if ( !item )
  {
    PartyListViewIndicator__SetPageIndex(this, -1, v18);
    goto LABEL_17;
  }
  PartyListViewIndicator__SetPageIndex(this, item->fields.index, v18);
  v20 = *(&PartyListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&item->klass->_2.bitflags2 + 1) < (unsigned int)v20 )
  {
LABEL_17:
    v21 = 0LL;
    goto LABEL_18;
  }
  if ( (PartyListViewItem_c *)item->klass->_2.typeHierarchy[v20 - 1] == PartyListViewItem_TypeInfo )
    v21 = item;
  else
    v21 = 0LL;
LABEL_18:
  PartyListViewIndicator__DrawPartyInfo(this, (PartyListViewItem_o *)v21, v19);
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

  if ( (byte_42181D3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, *(_QWORD *)&servantNum);
    sub_B0D8A4(&StringLiteral_20290/*"limited_bg"*/, v5);
    sub_B0D8A4(&StringLiteral_22258/*"solo_bg"*/, v6);
    sub_B0D8A4(&StringLiteral_22363/*"startingonly_bg"*/, v7);
    sub_B0D8A4(&StringLiteral_21480/*"pair_bg"*/, v8);
    byte_42181D3 = 1;
  }
  organizationNumObject = this->fields.organizationNumObject;
  if ( !organizationNumObject )
LABEL_19:
    sub_B0D97C(organizationNumObject);
  organizationNumObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        organizationNumObject,
                                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v10 = servantNum - 1;
  v11 = organizationNumObject;
  switch ( v10 )
  {
    case 0:
      organizationNumObject = this->fields.soloBaseObject;
      if ( !organizationNumObject )
        goto LABEL_19;
      organizationNumObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            organizationNumObject,
                                                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
      UISprite__set_spriteName(v13, (System_String_o *)StringLiteral_22258/*"solo_bg"*/, 0LL);
      organizationNumObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v13->klass->vtable._33_MakePixelPerfect.method)(
                                                            v13,
                                                            v13->klass->vtable._34_get_minWidth.methodPtr);
      if ( !v11 )
        goto LABEL_19;
      goto LABEL_18;
    case 1:
      if ( !organizationNumObject )
        goto LABEL_19;
      v12 = &StringLiteral_21480/*"pair_bg"*/;
      break;
    case 2:
      if ( !organizationNumObject )
        goto LABEL_19;
      v12 = &StringLiteral_22363/*"startingonly_bg"*/;
      break;
    default:
      if ( !organizationNumObject )
        goto LABEL_19;
      v12 = &StringLiteral_20290/*"limited_bg"*/;
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
  PartyEventPointIndicator_o *partyEventPointIndicator; // x0

  this->fields.setupInfo = setupInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    (System_String_array **)questRestrictionInfo,
    (System_String_array **)classIds,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.eventMargeUpValInfo = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.eventMargeUpValInfo, 0LL, v17, v18, v19, v20, v21, v22);
  partyEventPointIndicator = this->fields.partyEventPointIndicator;
  if ( !partyEventPointIndicator
    || (PartyEventPointIndicator__SetInfomation(partyEventPointIndicator, questRestrictionInfo, classIds, 0LL),
        (partyEventPointIndicator = this->fields.partyEventPointIndicator) == 0LL) )
  {
    sub_B0D97C(partyEventPointIndicator);
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
  struct System_Int32_array *useLimitEquip; // x21
  __int64 v8; // x8
  System_String_o *v9; // x20
  unsigned __int64 v10; // x22
  int v11; // w26
  Il2CppObject *v12; // x0
  __int64 v13; // x0
  int v14; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42181D4 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_8416/*"LIMIT_EQUIP_SETTING"*/, v3);
    sub_B0D8A4(&StringLiteral_705/*","*/, v4);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_42181D4 = 1;
  }
  IsEventOnlyEquip = (System_String_o *)PartyListViewIndicator__IsEventOnlyEquip(this, method);
  if ( ((unsigned __int8)IsEventOnlyEquip & 1) != 0 )
  {
    useLimitEquip = this->fields.useLimitEquip;
    if ( !useLimitEquip )
      goto LABEL_15;
    v8 = *(_QWORD *)&useLimitEquip->max_length;
    v9 = (System_String_o *)StringLiteral_1/*""*/;
    if ( (int)v8 >= 1 )
    {
      v10 = 0LL;
      while ( 1 )
      {
        if ( v10 >= (unsigned int)v8 )
        {
          v13 = sub_B0D9A8(IsEventOnlyEquip);
          sub_B0D948(v13, 0LL);
        }
        if ( !v9 )
          break;
        v11 = useLimitEquip->m_Items[v10 + 1];
        if ( v9->fields.m_stringLength >= 1 )
          v9 = System_String__Concat_43849904(v9, (System_String_o *)StringLiteral_705/*","*/, 0LL);
        v14 = v11;
        v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
        IsEventOnlyEquip = System_String__Concat((Il2CppObject *)v9, v12, 0LL);
        LODWORD(v8) = useLimitEquip->max_length;
        ++v10;
        v9 = IsEventOnlyEquip;
        if ( (__int64)v10 >= (int)v8 )
          goto LABEL_12;
      }
LABEL_15:
      sub_B0D97C(IsEventOnlyEquip);
    }
LABEL_12:
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_8416/*"LIMIT_EQUIP_SETTING"*/, v9, 0LL);
    this->fields.isChkSave = 0;
  }
}


void __fastcall PartyListViewIndicator__SetIndexMax(
        PartyListViewIndicator_o *this,
        int32_t max,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *leftObject; // x0

  PartyListViewIndicator__SetPageMax(this, max, method);
  leftObject = this->fields.leftObject;
  if ( !leftObject
    || (UnityEngine_GameObject__SetActive(leftObject, 0, 0LL), (leftObject = this->fields.rightObject) == 0LL) )
  {
    sub_B0D97C(leftObject);
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
  __int64 v20; // x21
  struct UISprite_array *pageSpriteList; // x8
  __int64 *v22; // x8
  int v23; // w24
  struct UnityEngine_GameObject_o *waveNumObject; // x8
  UISprite_o *Component_srcLineSprite; // x21
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  System_String_o *v28; // x21
  struct UISprite_o *indexSprite; // x8
  UISprite_o *v30; // x22
  UISprite_o *v31; // x22
  UISprite_o *waveMaxNumTensPlaceSprite; // x22
  System_String_o *v33; // x0
  System_String_o *v34; // x23
  UISprite_o *waveMaxNumTensPlaceGlowSprite; // x22
  System_String_o *v36; // x0
  System_String_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  int32_t v39; // w1
  UISprite_o *waveNumTensPlaceSprite; // x22
  System_String_o *v41; // x0
  System_String_o *v42; // x23
  UISprite_o *waveNumTensPlaceGlowSprite; // x22
  System_String_o *v44; // x0
  System_String_o *v45; // x0
  UISprite_o *waveNumOnesPlaceSprite; // x21
  System_String_o *v47; // x0
  System_String_o *v48; // x22
  UISprite_o *waveNumOnesPlaceGlowSprite; // x21
  System_String_o *v50; // x0
  System_String_o *v51; // x0
  UISprite_o *waveMaxNumOnesPlaceSprite; // x21
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  UISprite_o *waveMaxNumOnesPlaceGlowSprite; // x21
  System_String_o *v56; // x0
  System_String_o *v57; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w21
  bool v60; // w20
  __int64 v61; // x0
  int v62; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42181CE & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, *(_QWORD *)&index);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v5);
    sub_B0D8A4(&LastUsedDeckNumberManager_TypeInfo, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&OptionManager_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_16712/*"battle_num_"*/, v9);
    sub_B0D8A4(&StringLiteral_19693/*"img_slider_on"*/, v10);
    sub_B0D8A4(&StringLiteral_16193/*"_glow"*/, v11);
    sub_B0D8A4(&StringLiteral_16714/*"battle_num_slash_glow"*/, v12);
    sub_B0D8A4(&StringLiteral_21501/*"party_txt_"*/, v13);
    sub_B0D8A4(&StringLiteral_16708/*"battle_bg"*/, v14);
    sub_B0D8A4(&StringLiteral_19692/*"img_slider_off"*/, v15);
    sub_B0D8A4(&StringLiteral_16713/*"battle_num_slash"*/, v16);
    sub_B0D8A4(&StringLiteral_21500/*"party_bg"*/, v17);
    byte_42181CE = 1;
  }
  v62 = 0;
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
      v20 = 0LL;
      do
      {
        pageSpriteList = this->fields.pageSpriteList;
        if ( !pageSpriteList )
          goto LABEL_99;
        if ( (unsigned int)v20 >= pageSpriteList->max_length )
        {
          v61 = sub_B0D9A8(gameObject);
          sub_B0D948(v61, 0LL);
        }
        gameObject = pageSpriteList->m_Items[v20];
        if ( !gameObject )
          goto LABEL_99;
        if ( index == (_DWORD)v20 )
          v22 = &StringLiteral_19693/*"img_slider_on"*/;
        else
          v22 = &StringLiteral_19692/*"img_slider_off"*/;
        UISprite__set_spriteName(gameObject, (System_String_o *)*v22, 0LL);
      }
      while ( (int)++v20 < this->fields.pageMax );
    }
    v23 = index + 1;
    v62 = index + 1;
    gameObject = (UISprite_o *)System_Int32__ToString((int32_t)&v62, 0LL);
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
                                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetPartyOrganizationImage(Component_srcLineSprite, (System_String_o *)StringLiteral_16708/*"battle_bg"*/, 0LL);
      AtlasManager__SetPartyOrganizationImage(
        this->fields.waveNumSlashSprite,
        (System_String_o *)StringLiteral_16713/*"battle_num_slash"*/,
        0LL);
      AtlasManager__SetPartyOrganizationImage(
        this->fields.waveNumSlashGlowSprite,
        (System_String_o *)StringLiteral_16714/*"battle_num_slash_glow"*/,
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
        v62 = this->fields.pageMax / 10;
        v33 = System_Int32__ToString((int32_t)&v62, 0LL);
        v34 = System_String__Concat_43849904((System_String_o *)StringLiteral_16712/*"battle_num_"*/, v33, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetPartyOrganizationImage(waveMaxNumTensPlaceSprite, v34, 0LL);
        waveMaxNumTensPlaceGlowSprite = this->fields.waveMaxNumTensPlaceGlowSprite;
        v62 = this->fields.pageMax / 10;
        v36 = System_Int32__ToString((int32_t)&v62, 0LL);
        v37 = System_String__Concat_43852188(
                (System_String_o *)StringLiteral_16712/*"battle_num_"*/,
                v36,
                (System_String_o *)StringLiteral_16193/*"_glow"*/,
                0LL);
        AtlasManager__SetPartyOrganizationImage(waveMaxNumTensPlaceGlowSprite, v37, 0LL);
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
        v38 = this->fields.waveNumObject;
        if ( v23 >= 10 )
        {
          GameObjectExtensions__SetLocalPositionX(v38, 7.0, 0LL);
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
          v62 = v23 / 0xAu;
          v41 = System_Int32__ToString((int32_t)&v62, 0LL);
          v42 = System_String__Concat_43849904((System_String_o *)StringLiteral_16712/*"battle_num_"*/, v41, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetPartyOrganizationImage(waveNumTensPlaceSprite, v42, 0LL);
          waveNumTensPlaceGlowSprite = this->fields.waveNumTensPlaceGlowSprite;
          v62 = v23 / 0xAu;
          v44 = System_Int32__ToString((int32_t)&v62, 0LL);
          v45 = System_String__Concat_43852188(
                  (System_String_o *)StringLiteral_16712/*"battle_num_"*/,
                  v44,
                  (System_String_o *)StringLiteral_16193/*"_glow"*/,
                  0LL);
          AtlasManager__SetPartyOrganizationImage(waveNumTensPlaceGlowSprite, v45, 0LL);
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
          v39 = 322;
        }
        else
        {
          GameObjectExtensions__SetLocalPositionX(v38, 1.0, 0LL);
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
          v39 = 308;
        }
        UIWidget__set_width((UIWidget_o *)Component_srcLineSprite, v39, 0LL);
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
        v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionX(v26, 67.0, 0LL);
        gameObject = this->fields.waveMaxNumOnesPlaceGlowSprite;
        if ( !gameObject )
          goto LABEL_99;
        v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionX(v27, 67.0, 0LL);
      }
      waveNumOnesPlaceSprite = this->fields.waveNumOnesPlaceSprite;
      v62 = v23 % 10;
      v47 = System_Int32__ToString((int32_t)&v62, 0LL);
      v48 = System_String__Concat_43849904((System_String_o *)StringLiteral_16712/*"battle_num_"*/, v47, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetPartyOrganizationImage(waveNumOnesPlaceSprite, v48, 0LL);
      waveNumOnesPlaceGlowSprite = this->fields.waveNumOnesPlaceGlowSprite;
      v62 = v23 % 10;
      v50 = System_Int32__ToString((int32_t)&v62, 0LL);
      v51 = System_String__Concat_43852188(
              (System_String_o *)StringLiteral_16712/*"battle_num_"*/,
              v50,
              (System_String_o *)StringLiteral_16193/*"_glow"*/,
              0LL);
      AtlasManager__SetPartyOrganizationImage(waveNumOnesPlaceGlowSprite, v51, 0LL);
      waveMaxNumOnesPlaceSprite = this->fields.waveMaxNumOnesPlaceSprite;
      v62 = this->fields.pageMax % 10;
      v53 = System_Int32__ToString((int32_t)&v62, 0LL);
      v54 = System_String__Concat_43849904((System_String_o *)StringLiteral_16712/*"battle_num_"*/, v53, 0LL);
      AtlasManager__SetPartyOrganizationImage(waveMaxNumOnesPlaceSprite, v54, 0LL);
      waveMaxNumOnesPlaceGlowSprite = this->fields.waveMaxNumOnesPlaceGlowSprite;
      v62 = this->fields.pageMax % 10;
      v56 = System_Int32__ToString((int32_t)&v62, 0LL);
      v57 = System_String__Concat_43852188(
              (System_String_o *)StringLiteral_16712/*"battle_num_"*/,
              v56,
              (System_String_o *)StringLiteral_16193/*"_glow"*/,
              0LL);
      AtlasManager__SetPartyOrganizationImage(waveMaxNumOnesPlaceGlowSprite, v57, 0LL);
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
      v28 = (System_String_o *)gameObject;
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
                                   (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      indexSprite = this->fields.indexSprite;
      if ( !indexSprite )
        goto LABEL_99;
      v30 = gameObject;
      if ( !gameObject )
        goto LABEL_99;
      UISprite__set_atlas(gameObject, indexSprite->fields.mAtlas, 0LL);
      UISprite__set_spriteName(v30, (System_String_o *)StringLiteral_21500/*"party_bg"*/, 0LL);
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v30->klass->vtable._33_MakePixelPerfect.method)(
        v30,
        v30->klass->vtable._34_get_minWidth.methodPtr);
      gameObject = this->fields.indexSprite;
      if ( !gameObject )
        goto LABEL_99;
      gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_99;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v31 = this->fields.indexSprite;
      gameObject = (UISprite_o *)System_String__Concat_43849904((System_String_o *)StringLiteral_21501/*"party_txt_"*/, v28, 0LL);
      if ( !v31 )
        goto LABEL_99;
      UISprite__set_spriteName(v31, (System_String_o *)gameObject, 0LL);
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
      v60 = LastUsedDeckNumberManager__GetDeckNumber(questId, 0LL) - 1 == index;
    }
    else
    {
LABEL_94:
      v60 = 0;
    }
    gameObject = this->fields.lastTimeUsedSprite;
    if ( !gameObject
      || (gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
    {
LABEL_99:
      sub_B0D97C(gameObject);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v60, 0LL);
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
  int32_t max_length; // w8
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
  __int64 v18; // x0
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42181CD & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&max);
    this = (PartyListViewIndicator_o *)sub_B0D8A4(&StringLiteral_19692/*"img_slider_off"*/, v5);
    byte_42181CD = 1;
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
        {
          v18 = sub_B0D9A8(this);
          sub_B0D948(v18, 0LL);
        }
        this = (PartyListViewIndicator_o *)v9->m_Items[v10];
        if ( this )
        {
          v12 = (int)v10 >= v4->fields.pageMax ? 0LL : (System_String_o *)StringLiteral_19692/*"img_slider_off"*/;
          UISprite__set_spriteName((UISprite_o *)this, v12, 0LL);
          v9 = v4->fields.pageSpriteList;
          ++v10;
          if ( v9 )
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
              v19.fields.x = (float)(-10 * pageMax + 10);
              v19.fields.y = v16;
              v19.fields.z = v17;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v19, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_21:
    sub_B0D97C(this);
  }
}


void __fastcall PartyListViewIndicator__SetScrollEnabled(
        PartyListViewIndicator_o *this,
        bool enabled,
        const MethodInfo *method)
{
  this->fields.isScrollEnabled = enabled;
}