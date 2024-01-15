void __fastcall PartyListViewIndicator___ctor(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  struct System_Int32_array *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  float v13; // s4
  float v14; // s5
  float v15; // s6
  float v16; // s4
  float v17; // s5
  float v18; // s6
  struct UnityEngine_Color_o v19; // [xsp+0h] [xbp-30h] BYREF
  struct UnityEngine_Color_o v20; // [xsp+10h] [xbp-20h] BYREF
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FDD7B & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&int___TypeInfo, v4);
    byte_40FDD7B = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, (unsigned int)(v5->static_fields->DeckMax + 1), v2);
  this->fields.useLimitEquip = v6;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.useLimitEquip,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v21.fields.r = 1.0;
  v21.fields.g = 1.0;
  v21.fields.b = 1.0;
  v20 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_40666012(v21, v13, v14, v15, (const MethodInfo *)&v20);
  this->fields.ICON_NORMAL_COLOR = v20;
  v22.fields.r = 0.4;
  v19 = (struct UnityEngine_Color_o)0LL;
  v22.fields.g = 0.4;
  v22.fields.b = 0.4;
  UnityEngine_Color___ctor_40666012(v22, v16, v17, v18, (const MethodInfo *)&v19);
  this->fields.ICON_MASK_COLOR = v19;
  this->fields.isScrollEnabled = 1;
  ListViewIndicator___ctor((ListViewIndicator_o *)this, 0LL);
}


void __fastcall PartyListViewIndicator__ClearEventLimitEquip(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *limitMasterFormationButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  ItemIconComponent_o *limitEquipIcon; // x0
  UISprite_o *limitEquipFixSprite; // x0
  UISprite_o *masterEquipBackSprite; // x0
  UISprite_o *masterEquipFrameSprite; // x0
  ItemIconComponent_o *masterEquipIcon1; // x0
  ItemIconComponent_o *masterEquipIcon2; // x0

  limitMasterFormationButton = (UnityEngine_Component_o *)this->fields.limitMasterFormationButton;
  if ( !limitMasterFormationButton )
    goto LABEL_10;
  gameObject = UnityEngine_Component__get_gameObject(limitMasterFormationButton, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  limitEquipIcon = this->fields.limitEquipIcon;
  if ( !limitEquipIcon )
    goto LABEL_10;
  ItemIconComponent__Clear(limitEquipIcon, 0LL);
  limitEquipFixSprite = this->fields.limitEquipFixSprite;
  if ( !limitEquipFixSprite )
    goto LABEL_10;
  UISprite__set_spriteName(limitEquipFixSprite, 0LL, 0LL);
  masterEquipBackSprite = this->fields.masterEquipBackSprite;
  if ( !masterEquipBackSprite
    || (UISprite__set_spriteName(masterEquipBackSprite, 0LL, 0LL),
        (masterEquipFrameSprite = this->fields.masterEquipFrameSprite) == 0LL)
    || (UISprite__set_spriteName(masterEquipFrameSprite, 0LL, 0LL),
        (masterEquipIcon1 = this->fields.masterEquipIcon1) == 0LL)
    || (ItemIconComponent__SetColor(masterEquipIcon1, this->fields.ICON_NORMAL_COLOR, 0LL),
        (masterEquipIcon2 = this->fields.masterEquipIcon2) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  ItemIconComponent__SetColor(masterEquipIcon2, this->fields.ICON_NORMAL_COLOR, 0LL);
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
  System_String_o *v8; // x0
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  bool v11; // w1
  UnityEngine_Component_o *v12; // x0
  unsigned int v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FDD7A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&bonusVal);
    byte_40FDD7A = 1;
  }
  v13 = 0;
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
        v12 = (UnityEngine_Component_o *)this->fields.friendPointUpBonusSprite;
        if ( v12 )
        {
          gameObject = UnityEngine_Component__get_gameObject(v12, 0LL);
          if ( gameObject )
          {
            v11 = 0;
            goto LABEL_19;
          }
        }
      }
      else
      {
        v13 = bonusVal / 0x3E8u;
        v7 = this->fields.friendPointUpBonusLabel;
        v8 = System_Int32__ToString((int32_t)&v13, 0LL);
        if ( v7 )
        {
          UILabel__set_text(v7, v8, 0LL);
          v9 = (UnityEngine_Component_o *)this->fields.friendPointUpBonusSprite;
          if ( v9 )
          {
            gameObject = UnityEngine_Component__get_gameObject(v9, 0LL);
            if ( gameObject )
            {
              v11 = 1;
LABEL_19:
              UnityEngine_GameObject__SetActive(gameObject, v11, 0LL);
              return;
            }
          }
        }
      }
      sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  EventEquipSkillReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  bool isForceOverwrite; // w0
  struct QuestRestrictionInfo_o *v23; // x8
  int32_t index; // w24
  bool v25; // w21
  BalanceConfig_c *v26; // x0
  ItemIconComponent_o *limitEquipIcon; // x0
  UISprite_o *masterEquipBackSprite; // x22
  System_String_o *String_34837456; // x0
  __int64 v30; // x2
  System_String_o *v31; // x22
  BalanceConfig_c *v32; // x0
  __int64 v33; // x2
  BalanceConfig_c *v34; // x1
  System_String_array *v35; // x0
  System_String_array *v36; // x22
  unsigned __int64 v37; // x25
  struct System_Int32_array *useLimitEquip; // x28
  UnityEngine_Component_o *limitMasterFormationButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  ItemIconComponent_o *v41; // x0
  ItemIconComponent_o *v42; // x0
  UISprite_o *limitEquipFixSprite; // x19
  struct System_Int32_array *v44; // x8
  struct System_Int32_array *v45; // x8
  UnityEngine_Component_o *v46; // x0
  int32_t v47; // w21
  WebViewObject_o *Component_WebViewObject; // x20
  ItemIconComponent_o *v49; // x0
  ItemIconComponent_o *masterEquipIcon1; // x0
  ItemIconComponent_o *masterEquipIcon2; // x0
  UISprite_o *v52; // x0
  ItemIconComponent_o *v53; // x0
  ItemIconComponent_o *v54; // x0
  ItemIconComponent_o *v55; // x0
  EventEquipSkillReleaseEntity_o *outEnt; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FDD73 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, partyItem);
    sub_B16FFC(&BalanceConfig_TypeInfo, v7);
    sub_B16FFC(&char___TypeInfo, v8);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UISprite___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&StringLiteral_18434/*"event_emblem_frame"*/, v12);
    sub_B16FFC(&StringLiteral_19258/*"icon_equip_fixation"*/, v13);
    sub_B16FFC(&StringLiteral_8366/*"LIMIT_EQUIP_SETTING"*/, v14);
    sub_B16FFC(&StringLiteral_16950/*"btn_skill_off"*/, v15);
    sub_B16FFC(&StringLiteral_18433/*"event_emblem_dim"*/, v16);
    sub_B16FFC(&StringLiteral_16951/*"btn_skill_on"*/, v17);
    byte_40FDD73 = 1;
  }
  outEnt = 0LL;
  if ( !PartyListViewIndicator__IsEventOnlyEquip(this, (const MethodInfo *)partyItem) )
    goto LABEL_50;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  MasterData_WarQuestSelectionMaster = (EventEquipSkillReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)Instance,
                                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !MasterData_WarQuestSelectionMaster )
    goto LABEL_75;
  if ( !EventEquipSkillReleaseMaster__tryGetOpenEventEquipSkillReleaseEntity(
          MasterData_WarQuestSelectionMaster,
          questRestrictionInfo->fields.eventId,
          &outEnt,
          0LL) )
  {
LABEL_50:
    PartyListViewIndicator__ClearEventLimitEquip(this, v18);
    return;
  }
  if ( !outEnt )
    goto LABEL_75;
  isForceOverwrite = EventEquipSkillReleaseEntity__isForceOverwrite(outEnt, 0LL);
  if ( !partyItem )
    goto LABEL_75;
  v23 = partyItem->fields.questRestrictionInfo;
  index = partyItem->fields.index;
  v25 = isForceOverwrite;
  if ( v23 )
    LOBYTE(v23) = v23->fields.eventDeckNum > 0;
  if ( ((unsigned __int8)v23 & 1) != 0 || (unsigned int)(partyItem->fields.menuKind - 1) <= 6 )
  {
    v26 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v26 = BalanceConfig_TypeInfo;
    }
    index = v26->static_fields->DeckMax;
  }
  if ( !outEnt || (limitEquipIcon = this->fields.limitEquipIcon) == 0LL )
LABEL_75:
    sub_B170D4();
  ItemIconComponent__SetEquipItem(limitEquipIcon, outEnt->fields.overwriteEquipIconId, 0LL);
  masterEquipBackSprite = this->fields.masterEquipBackSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(masterEquipBackSprite, (System_String_o *)StringLiteral_18433/*"event_emblem_dim"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.masterEquipFrameSprite, (System_String_o *)StringLiteral_18434/*"event_emblem_frame"*/, 0LL);
  if ( !this->fields.isChkSave )
  {
    if ( !v25 )
    {
      String_34837456 = UnityEngine_PlayerPrefs__GetString_34837456((System_String_o *)StringLiteral_8366/*"LIMIT_EQUIP_SETTING"*/, 0LL);
      if ( !String_34837456 )
        goto LABEL_75;
      v31 = String_34837456;
      if ( String_34837456->fields.m_stringLength >= 1 )
      {
        v32 = (BalanceConfig_c *)sub_B17014(char___TypeInfo, 1LL, v30);
        if ( !v32 )
          goto LABEL_75;
        v34 = v32;
        if ( !LODWORD(v32->_1.namespaze) )
          goto LABEL_76;
        LOWORD(v32->_1.byval_arg.data) = 44;
        v35 = System_String__Split(v31, (System_Char_array *)v32, 0LL);
        if ( !v35 )
          goto LABEL_75;
        v36 = v35;
        if ( (int)v35->max_length >= 1 )
        {
          v37 = 0LL;
          do
          {
            v32 = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v32 = BalanceConfig_TypeInfo;
            }
            if ( (__int64)v37 > v32->static_fields->DeckMax )
              break;
            if ( v37 >= v36->max_length )
              goto LABEL_76;
            useLimitEquip = this->fields.useLimitEquip;
            v32 = (BalanceConfig_c *)System_Int32__Parse(v36->m_Items[v37], 0LL);
            if ( !useLimitEquip )
              goto LABEL_75;
            if ( v37 >= useLimitEquip->max_length )
              goto LABEL_76;
            useLimitEquip->m_Items[++v37] = (int)v32;
          }
          while ( (__int64)v37 < (int)v36->max_length );
        }
      }
    }
    this->fields.isChkSave = 1;
  }
  limitMasterFormationButton = (UnityEngine_Component_o *)this->fields.limitMasterFormationButton;
  if ( !limitMasterFormationButton )
    goto LABEL_75;
  gameObject = UnityEngine_Component__get_gameObject(limitMasterFormationButton, 0LL);
  if ( !gameObject )
    goto LABEL_75;
  if ( !v25 )
  {
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    if ( isChng )
    {
      v44 = this->fields.useLimitEquip;
      if ( !v44 )
        goto LABEL_75;
      if ( index >= v44->max_length )
        goto LABEL_76;
      v44->m_Items[index + 1] = v44->m_Items[index + 1] == 0;
    }
    v45 = this->fields.useLimitEquip;
    if ( !v45 )
      goto LABEL_75;
    if ( index < v45->max_length )
    {
      v46 = (UnityEngine_Component_o *)this->fields.limitMasterFormationButton;
      if ( v46 )
      {
        v47 = v45->m_Items[index + 1];
        Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    v46,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( v47 )
        {
          if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetEventUI((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_16951/*"btn_skill_on"*/, 0LL);
          v49 = this->fields.limitEquipIcon;
          if ( v49 )
          {
            ItemIconComponent__SetColor(v49, this->fields.ICON_MASK_COLOR, 0LL);
            masterEquipIcon1 = this->fields.masterEquipIcon1;
            if ( masterEquipIcon1 )
            {
              ItemIconComponent__SetColor(masterEquipIcon1, this->fields.ICON_NORMAL_COLOR, 0LL);
              masterEquipIcon2 = this->fields.masterEquipIcon2;
              if ( masterEquipIcon2 )
              {
                ItemIconComponent__SetColor(masterEquipIcon2, this->fields.ICON_NORMAL_COLOR, 0LL);
                v52 = this->fields.masterEquipBackSprite;
                if ( v52 )
                {
                  UISprite__set_spriteName(v52, 0LL, 0LL);
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
          AtlasManager__SetEventUI((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_16950/*"btn_skill_off"*/, 0LL);
          v53 = this->fields.limitEquipIcon;
          if ( v53 )
          {
            ItemIconComponent__SetColor(v53, this->fields.ICON_NORMAL_COLOR, 0LL);
            v54 = this->fields.masterEquipIcon1;
            if ( v54 )
            {
              ItemIconComponent__SetColor(v54, this->fields.ICON_MASK_COLOR, 0LL);
              v55 = this->fields.masterEquipIcon2;
              if ( v55 )
              {
                ItemIconComponent__SetColor(v55, this->fields.ICON_MASK_COLOR, 0LL);
                return;
              }
            }
          }
        }
      }
      goto LABEL_75;
    }
LABEL_76:
    sub_B17100(v32, v34, v33);
    sub_B170A0();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v41 = this->fields.masterEquipIcon1;
  if ( !v41 )
    goto LABEL_75;
  ItemIconComponent__SetColor(v41, this->fields.ICON_MASK_COLOR, 0LL);
  v42 = this->fields.masterEquipIcon2;
  if ( !v42 )
    goto LABEL_75;
  ItemIconComponent__SetColor(v42, this->fields.ICON_MASK_COLOR, 0LL);
  limitEquipFixSprite = this->fields.limitEquipFixSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(limitEquipFixSprite, (System_String_o *)StringLiteral_19258/*"icon_equip_fixation"*/, 0LL);
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
  srcLineSprite_o *Component_srcLineSprite; // x0
  UISprite_o *v22; // x21
  UnityEngine_GameObject_o *organizationNumObject; // x0
  UnityEngine_GameObject_o *indexBaseObject; // x0
  UnityEngine_GameObject_o *selectNameBaseObject; // x0
  UnityEngine_GameObject_o *costBaseObject; // x0
  bool v27; // w1
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  UILabel_o *v33; // x0
  UILabel_o *v34; // x0
  UILabel_o *v35; // x0
  UILabel_o *v36; // x0
  ItemIconComponent_o *v37; // x0
  ItemIconComponent_o *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  PartyEventPointIndicator_o *v51; // x0
  EventPartyMargeUpValInfo_o *v52; // x1
  UnityEngine_GameObject_o *v53; // x0
  UnityEngine_GameObject_o *v54; // x0
  const MethodInfo *v55; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  UnityEngine_GameObject_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x0
  QuestRestrictionInfo_o *v59; // x0
  int32_t servantNumMax; // w1
  UnityEngine_GameObject_o *v61; // x0
  srcLineSprite_o *v62; // x0
  UISprite_o *v63; // x21
  UnityEngine_GameObject_o *v64; // x0
  struct QuestRestrictionInfo_o *v65; // x8
  UnityEngine_GameObject_o *v66; // x0
  UnityEngine_GameObject_o *v67; // x0
  BalanceConfig_c *v68; // x0
  UnityEngine_GameObject_o *v69; // x0
  UnityEngine_GameObject_o *v70; // x0
  UnityEngine_GameObject_o *v71; // x0
  UnityEngine_GameObject_o *v72; // x0
  UnityEngine_GameObject_o *v73; // x0
  PartyEventPointIndicator_o *partyEventPointIndicator; // x0
  WebViewManager_o *Instance; // x0
  NpcFollowerMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct QuestRestrictionInfo_o *v77; // x8
  FollowerInfo_array *QuestFollowerList; // x0
  struct QuestRestrictionInfo_o *v79; // x8
  UnityEngine_GameObject_o *v80; // x0
  UnityEngine_GameObject_o *v81; // x0
  int32_t maxCost; // w21
  QuestRestrictionInfo_o *v83; // x0
  int32_t v84; // w22
  System_String_o *v85; // x21
  UILabel_o *maxCostLabel; // x22
  System_String_o *v87; // x0
  System_String_o *v88; // x0
  UILabel_o *splitCostLabel; // x22
  System_String_o *v90; // x0
  System_String_o *v91; // x0
  int32_t cost; // w8
  UILabel_o *selectCostLabel; // x22
  System_String_o *v94; // x0
  System_String_o *v95; // x0
  System_String_o *v96; // x0
  WebViewManager_o *v97; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v98; // x0
  UserServantEntity_o *Entity; // x0
  const MethodInfo *v100; // x3
  ItemIconComponent_o *masterEquipIcon1; // x0
  ItemIconComponent_o *masterEquipIcon2; // x0
  EventUpValInfo_o *EventUpVal; // x0
  const MethodInfo *v104; // x1
  __int64 v105; // x2
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  __int64 v108; // x9
  int32_t v109; // w21
  ServantEntity_array *SvtEntityList; // x22
  const MethodInfo *v111; // x1
  System_String_array *SvtNameList; // x23
  const MethodInfo *v113; // x1
  System_Boolean_array *IsFollowerList; // x24
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x3
  __int64 v118; // x4
  EventPartyMargeUpValInfo_o *v119; // x25
  struct EventPartyMargeUpValInfo_o **p_eventMargeUpValInfo; // x21
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  const MethodInfo *v127; // x3
  EventUpValInfo_array *v128; // x8
  unsigned __int64 v129; // x20
  unsigned __int64 max_length; // x9
  EventPartyMargeUpValInfo_o *v131; // x22
  EventDropItemUpValInfo_array *DropItemList; // x0
  UnityEngine_GameObject_o *v133; // x0
  UnityEngine_GameObject_o *v134; // x0
  UnityEngine_GameObject_o *v135; // x0
  UnityEngine_GameObject_o *v136; // x0
  UILabel_o *selectNameLabel; // x21
  System_String_o *v138; // x0
  System_String_o *v139; // x0
  EventUpValInfo_array *v140; // [xsp+0h] [xbp-70h] BYREF
  int32_t genderImageId; // [xsp+Ch] [xbp-64h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *equipName; // [xsp+18h] [xbp-58h] BYREF
  int32_t maxLv; // [xsp+24h] [xbp-4Ch] BYREF
  int32_t condUsrLv[2]; // [xsp+28h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+38h] [xbp-38h] BYREF
  int32_t v147; // [xsp+3Ch] [xbp-34h] BYREF

  if ( (byte_40FDD72 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, partyItem);
    sub_B16FFC(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEquipMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v7);
    sub_B16FFC(&EventPartyMargeUpValInfo_TypeInfo, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v9);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&StringLiteral_10323/*"PARTY_ORGANIZATION_NAME"*/, v12);
    sub_B16FFC(&StringLiteral_22091/*"solo_bg"*/, v13);
    sub_B16FFC(&StringLiteral_10293/*"PARTY_ORGANIZATION_COST_SPLIT"*/, v14);
    sub_B16FFC(&StringLiteral_10291/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, v15);
    sub_B16FFC(&StringLiteral_10292/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, v16);
    sub_B16FFC(&StringLiteral_22120/*"specialparty_bg"*/, v17);
    sub_B16FFC(&StringLiteral_10290/*"PARTY_ORGANIZATION_COST_COLOR"*/, v18);
    sub_B16FFC(&StringLiteral_1/*""*/, v19);
    byte_40FDD72 = 1;
  }
  v147 = 0;
  eventId = 0;
  *(_QWORD *)condUsrLv = 0LL;
  maxLv = 0;
  detail = 0LL;
  equipName = 0LL;
  genderImageId = 0;
  v140 = 0LL;
  if ( partyItem )
  {
    switch ( this->fields.menuKind )
    {
      case 1:
      case 3:
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_113;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    soloBaseObject,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !this->fields.soloBaseObject )
          goto LABEL_113;
        v22 = (UISprite_o *)Component_srcLineSprite;
        UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0LL);
        if ( !v22 )
          goto LABEL_113;
        UISprite__set_spriteName(v22, (System_String_o *)StringLiteral_22091/*"solo_bg"*/, 0LL);
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v22->klass->vtable._33_MakePixelPerfect.method)(
          v22,
          v22->klass->vtable._34_get_minWidth.methodPtr);
        organizationNumObject = this->fields.organizationNumObject;
        if ( !organizationNumObject )
          goto LABEL_113;
        UnityEngine_GameObject__SetActive(organizationNumObject, 0, 0LL);
        indexBaseObject = this->fields.indexBaseObject;
        if ( !indexBaseObject )
          goto LABEL_113;
        UnityEngine_GameObject__SetActive(indexBaseObject, 0, 0LL);
        selectNameBaseObject = this->fields.selectNameBaseObject;
        if ( !selectNameBaseObject )
          goto LABEL_113;
        UnityEngine_GameObject__SetActive(selectNameBaseObject, 0, 0LL);
        costBaseObject = this->fields.costBaseObject;
        if ( !costBaseObject )
          goto LABEL_113;
        v27 = 0;
        goto LABEL_68;
      case 2:
        v61 = this->fields.soloBaseObject;
        if ( !v61 )
          goto LABEL_113;
        v62 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                v61,
                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !this->fields.soloBaseObject )
          goto LABEL_113;
        v63 = (UISprite_o *)v62;
        UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0LL);
        if ( !v63 )
          goto LABEL_113;
        UISprite__set_spriteName(v63, (System_String_o *)StringLiteral_22120/*"specialparty_bg"*/, 0LL);
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v63->klass->vtable._33_MakePixelPerfect.method)(
          v63,
          v63->klass->vtable._34_get_minWidth.methodPtr);
        v64 = this->fields.organizationNumObject;
        if ( !v64 )
          goto LABEL_113;
        UnityEngine_GameObject__SetActive(v64, 0, 0LL);
        goto LABEL_63;
      case 4:
      case 5:
        v53 = this->fields.soloBaseObject;
        if ( !v53 )
          goto LABEL_113;
        UnityEngine_GameObject__SetActive(v53, 0, 0LL);
        v54 = this->fields.organizationNumObject;
        if ( !v54 )
          goto LABEL_113;
        UnityEngine_GameObject__SetActive(v54, 1, 0LL);
        questRestrictionInfo = this->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_63;
        goto LABEL_35;
      case 6:
      case 7:
        v57 = this->fields.soloBaseObject;
        if ( !v57 )
          goto LABEL_113;
        UnityEngine_GameObject__SetActive(v57, 0, 0LL);
        v58 = this->fields.organizationNumObject;
        if ( !v58 )
          goto LABEL_113;
        UnityEngine_GameObject__SetActive(v58, 1, 0LL);
        v59 = this->fields.questRestrictionInfo;
        if ( !v59 )
          goto LABEL_63;
        if ( QuestRestrictionInfo__IsServantNum(v59, 0LL) )
        {
          questRestrictionInfo = this->fields.questRestrictionInfo;
          if ( !questRestrictionInfo )
            goto LABEL_113;
LABEL_35:
          servantNumMax = questRestrictionInfo->fields.servantNumMax;
        }
        else
        {
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_113;
          MasterData_WarQuestSelectionMaster = (NpcFollowerMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
          v77 = this->fields.questRestrictionInfo;
          if ( !v77 )
            goto LABEL_113;
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_113;
          QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                                MasterData_WarQuestSelectionMaster,
                                v77->fields.questId,
                                v77->fields.questPhase,
                                0LL);
          v79 = this->fields.questRestrictionInfo;
          if ( !v79 || !QuestFollowerList )
            goto LABEL_113;
          servantNumMax = v79->fields.myServantNumMax + QuestFollowerList->max_length;
        }
        goto LABEL_62;
      case 9:
        v69 = this->fields.soloBaseObject;
        if ( !v69 )
          goto LABEL_113;
        UnityEngine_GameObject__SetActive(v69, 0, 0LL);
        v70 = this->fields.organizationNumObject;
        if ( !v70 )
          goto LABEL_113;
        UnityEngine_GameObject__SetActive(v70, 0, 0LL);
        v71 = this->fields.indexBaseObject;
        if ( !v71 )
          goto LABEL_113;
        UnityEngine_GameObject__SetActive(v71, 1, 0LL);
        v72 = this->fields.selectNameBaseObject;
        if ( !v72 )
          goto LABEL_113;
        UnityEngine_GameObject__SetActive(v72, 0, 0LL);
        v73 = this->fields.costBaseObject;
        if ( !v73 )
          goto LABEL_113;
        UnityEngine_GameObject__SetActive(v73, 1, 0LL);
        partyEventPointIndicator = this->fields.partyEventPointIndicator;
        if ( !partyEventPointIndicator )
          goto LABEL_113;
        PartyEventPointIndicator__SetTrendDisp(partyEventPointIndicator, partyItem->fields.waveBattleEnemyClassIds, 0LL);
        goto LABEL_69;
      default:
        v65 = this->fields.questRestrictionInfo;
        if ( v65 && v65->fields.eventDeckNum >= 1 )
        {
          v66 = this->fields.soloBaseObject;
          if ( !v66 )
            goto LABEL_113;
          UnityEngine_GameObject__SetActive(v66, 0, 0LL);
          v67 = this->fields.organizationNumObject;
          if ( !v67 )
            goto LABEL_113;
          UnityEngine_GameObject__SetActive(v67, 1, 0LL);
          v68 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v68 = BalanceConfig_TypeInfo;
          }
          servantNumMax = v68->static_fields->DeckMemberMax;
LABEL_62:
          PartyListViewIndicator__SetEventDeckPartyName(this, servantNumMax, v55);
LABEL_63:
          v80 = this->fields.indexBaseObject;
          if ( !v80
            || (UnityEngine_GameObject__SetActive(v80, 0, 0LL), (v81 = this->fields.selectNameBaseObject) == 0LL) )
          {
LABEL_113:
            sub_B170D4();
          }
          UnityEngine_GameObject__SetActive(v81, 0, 0LL);
        }
        else
        {
          v133 = this->fields.soloBaseObject;
          if ( !v133 )
            goto LABEL_113;
          UnityEngine_GameObject__SetActive(v133, 0, 0LL);
          v134 = this->fields.organizationNumObject;
          if ( !v134 )
            goto LABEL_113;
          UnityEngine_GameObject__SetActive(v134, 0, 0LL);
          v135 = this->fields.indexBaseObject;
          if ( !v135 )
            goto LABEL_113;
          UnityEngine_GameObject__SetActive(v135, 1, 0LL);
          v136 = this->fields.selectNameBaseObject;
          if ( !v136 )
            goto LABEL_113;
          UnityEngine_GameObject__SetActive(v136, 1, 0LL);
          selectNameLabel = this->fields.selectNameLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v138 = LocalizationManager__Get((System_String_o *)StringLiteral_10323/*"PARTY_ORGANIZATION_NAME"*/, 0LL);
          v139 = System_String__Format(v138, (Il2CppObject *)partyItem->fields.deckName, 0LL);
          if ( !selectNameLabel )
            goto LABEL_113;
          UILabel__set_text(selectNameLabel, v139, 0LL);
        }
        costBaseObject = this->fields.costBaseObject;
        if ( costBaseObject )
        {
          v27 = 1;
LABEL_68:
          UnityEngine_GameObject__SetActive(costBaseObject, v27, 0LL);
LABEL_69:
          maxCost = partyItem->fields.maxCost;
          v147 = maxCost;
          v83 = this->fields.questRestrictionInfo;
          v84 = v83 ? QuestRestrictionInfo__GetTotalCostRestriction(v83, 0LL) : 0;
          if ( v84 && maxCost > v84 )
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v85 = LocalizationManager__Get((System_String_o *)StringLiteral_10292/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0LL);
            v147 = v84;
          }
          else
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v85 = LocalizationManager__Get((System_String_o *)StringLiteral_10290/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
          }
          maxCostLabel = this->fields.maxCostLabel;
          v87 = System_Int32__ToString((int32_t)&v147, 0LL);
          v88 = System_String__Concat_43743732(v85, v87, 0LL);
          if ( maxCostLabel )
          {
            UILabel__set_text(maxCostLabel, v88, 0LL);
            splitCostLabel = this->fields.splitCostLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v90 = LocalizationManager__Get((System_String_o *)StringLiteral_10293/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
            v91 = System_String__Concat_43743732(v85, v90, 0LL);
            if ( splitCostLabel )
            {
              UILabel__set_text(splitCostLabel, v91, 0LL);
              cost = partyItem->fields.cost;
              selectCostLabel = this->fields.selectCostLabel;
              if ( cost > v147 )
              {
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v94 = LocalizationManager__Get((System_String_o *)StringLiteral_10291/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
                cost = partyItem->fields.cost;
                v85 = v94;
              }
              condUsrLv[1] = cost;
              v95 = System_Int32__ToString((int32_t)&condUsrLv[1], 0LL);
              v96 = System_String__Concat_43743732(v85, v95, 0LL);
              if ( selectCostLabel )
              {
                UILabel__set_text(selectCostLabel, v96, 0LL);
                v97 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( v97 )
                {
                  v98 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                 (DataManager_o *)v97,
                                                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEquipMaster___);
                  if ( v98 )
                  {
                    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                               v98,
                               partyItem->fields.userEquipId,
                               (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
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
                      masterEquipIcon1 = this->fields.masterEquipIcon1;
                      if ( !masterEquipIcon1 )
                        goto LABEL_113;
                      ItemIconComponent__SetEquipItem(masterEquipIcon1, genderImageId, 0LL);
                      masterEquipIcon2 = this->fields.masterEquipIcon2;
                      if ( !masterEquipIcon2 )
                        goto LABEL_113;
                      ItemIconComponent__SetEquipItem(masterEquipIcon2, genderImageId, 0LL);
                    }
                    PartyListViewIndicator__DrawEventLimitEquip(this, partyItem, 0, v100);
                    setupInfo = this->fields.setupInfo;
                    if ( !setupInfo )
                      goto LABEL_104;
                    eventIdList = setupInfo->fields.eventIdList;
                    if ( !eventIdList )
                      goto LABEL_113;
                    v108 = *(_QWORD *)&eventIdList->max_length;
                    if ( v108 )
                    {
                      if ( !(_DWORD)v108 )
                      {
LABEL_126:
                        sub_B17100(EventUpVal, v104, v105);
                        sub_B170A0();
                      }
                      v109 = eventIdList->m_Items[1];
                    }
                    else
                    {
LABEL_104:
                      v109 = 0;
                    }
                    eventId = v109;
                    SvtEntityList = PartyListViewItem__GetSvtEntityList(partyItem, v104);
                    SvtNameList = PartyListViewItem__GetSvtNameList(partyItem, v111);
                    IsFollowerList = PartyListViewItem__GetIsFollowerList(partyItem, v113);
                    v119 = (EventPartyMargeUpValInfo_o *)sub_B170CC(
                                                           EventPartyMargeUpValInfo_TypeInfo,
                                                           v115,
                                                           v116,
                                                           v117,
                                                           v118);
                    EventPartyMargeUpValInfo___ctor(v119, v109, SvtEntityList, SvtNameList, IsFollowerList, 0LL);
                    p_eventMargeUpValInfo = &this->fields.eventMargeUpValInfo;
                    this->fields.eventMargeUpValInfo = v119;
                    sub_B16F98(
                      (BattleServantConfConponent_o *)&this->fields.eventMargeUpValInfo,
                      (System_Int32_array **)v119,
                      v121,
                      v122,
                      v123,
                      v124,
                      v125,
                      v126);
                    EventUpVal = (EventUpValInfo_o *)PartyListViewItem__GetEventUpVal(partyItem, &eventId, &v140, v127);
                    v128 = v140;
                    if ( v140 )
                    {
                      v129 = 0LL;
                      while ( 1 )
                      {
                        max_length = v128->max_length;
                        if ( (__int64)v129 >= (int)max_length )
                          break;
                        if ( v129 >= max_length )
                          goto LABEL_126;
                        EventUpVal = v128->m_Items[v129];
                        if ( EventUpVal )
                        {
                          v131 = *p_eventMargeUpValInfo;
                          DropItemList = EventUpValInfo__GetDropItemList(EventUpVal, v129, 0LL);
                          if ( !v131 )
                            goto LABEL_113;
                          EventPartyMargeUpValInfo__Add(v131, DropItemList, 0LL);
                          v128 = v140;
                        }
                        ++v129;
                        if ( !v128 )
                          goto LABEL_113;
                      }
                      v51 = this->fields.partyEventPointIndicator;
                      if ( v51 )
                      {
                        v52 = *p_eventMargeUpValInfo;
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
  v28 = this->fields.soloBaseObject;
  if ( !v28 )
    goto LABEL_113;
  UnityEngine_GameObject__SetActive(v28, 0, 0LL);
  v29 = this->fields.organizationNumObject;
  if ( !v29 )
    goto LABEL_113;
  UnityEngine_GameObject__SetActive(v29, 0, 0LL);
  v30 = this->fields.indexBaseObject;
  if ( !v30 )
    goto LABEL_113;
  UnityEngine_GameObject__SetActive(v30, 0, 0LL);
  v31 = this->fields.selectNameBaseObject;
  if ( !v31 )
    goto LABEL_113;
  UnityEngine_GameObject__SetActive(v31, 0, 0LL);
  v32 = this->fields.costBaseObject;
  if ( !v32 )
    goto LABEL_113;
  UnityEngine_GameObject__SetActive(v32, 0, 0LL);
  v33 = this->fields.selectNameLabel;
  if ( !v33 )
    goto LABEL_113;
  UILabel__set_text(v33, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v34 = this->fields.maxCostLabel;
  if ( !v34 )
    goto LABEL_113;
  UILabel__set_text(v34, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v35 = this->fields.splitCostLabel;
  if ( !v35 )
    goto LABEL_113;
  UILabel__set_text(v35, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v36 = this->fields.selectCostLabel;
  if ( !v36 )
    goto LABEL_113;
  UILabel__set_text(v36, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v37 = this->fields.masterEquipIcon1;
  if ( !v37 )
    goto LABEL_113;
  ItemIconComponent__Clear(v37, 0LL);
  v38 = this->fields.masterEquipIcon2;
  if ( !v38 )
    goto LABEL_113;
  ItemIconComponent__Clear(v38, 0LL);
  this->fields.questRestrictionInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v39, v40, v41, v42, v43, v44);
  this->fields.eventMargeUpValInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.eventMargeUpValInfo, 0LL, v45, v46, v47, v48, v49, v50);
  v51 = this->fields.partyEventPointIndicator;
  if ( !v51 )
    goto LABEL_113;
  v52 = 0LL;
LABEL_116:
  PartyEventPointIndicator__SetTotalDropItemList(v51, v52, 0LL);
}


bool __fastcall PartyListViewIndicator__IsEventOnlyEquip(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FDD79 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FDD79 = 1;
  }
  entity = 0LL;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (questRestrictionInfo = this->fields.questRestrictionInfo) == 0LL)
    || !MasterData_WarQuestSelectionMaster )
  {
LABEL_12:
    sub_B170D4();
  }
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          questRestrictionInfo->fields.eventId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
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
  WebViewManager_o *Instance; // x0
  EventEquipSkillReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v10; // x8
  int32_t index; // w21
  BalanceConfig_c *v12; // x0
  _BOOL8 isForceOverwrite; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_Int32_array *useLimitEquip; // x8
  EventEquipSkillReleaseEntity_o *outEnt; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FDD78 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, partyItem);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FDD78 = 1;
  }
  outEnt = 0LL;
  if ( !PartyListViewIndicator__IsEventOnlyEquip(this, (const MethodInfo *)partyItem) )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_WarQuestSelectionMaster = (EventEquipSkillReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)Instance,
                                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !MasterData_WarQuestSelectionMaster )
    goto LABEL_23;
  if ( !EventEquipSkillReleaseMaster__tryGetOpenEventEquipSkillReleaseEntity(
          MasterData_WarQuestSelectionMaster,
          questRestrictionInfo->fields.eventId,
          &outEnt,
          0LL) )
    return 0;
  if ( !partyItem )
    goto LABEL_23;
  v10 = partyItem->fields.questRestrictionInfo;
  index = partyItem->fields.index;
  if ( v10 )
    LOBYTE(v10) = v10->fields.eventDeckNum > 0;
  if ( ((unsigned __int8)v10 & 1) != 0 || (unsigned int)(partyItem->fields.menuKind - 1) <= 6 )
  {
    v12 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v12 = BalanceConfig_TypeInfo;
    }
    index = v12->static_fields->DeckMax;
  }
  if ( !outEnt )
    goto LABEL_23;
  isForceOverwrite = EventEquipSkillReleaseEntity__isForceOverwrite(outEnt, 0LL);
  if ( isForceOverwrite )
    return 0;
  useLimitEquip = this->fields.useLimitEquip;
  if ( !useLimitEquip )
LABEL_23:
    sub_B170D4();
  if ( index >= useLimitEquip->max_length )
  {
    sub_B17100(isForceOverwrite, v14, v15);
    sub_B170A0();
  }
  return useLimitEquip->m_Items[index + 1] == 0;
}


void __fastcall PartyListViewIndicator__OnClickLeft(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *manager; // x20
  ListViewManager_o *v5; // x0
  ListViewManager_o *v6; // x0
  int32_t pageIndex; // w8
  struct ListViewManager_o *v8; // x8

  if ( (byte_40FDD74 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FDD74 = 1;
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
      v6 = this->fields.manager;
      if ( v6 )
      {
        pageIndex = this->fields.pageIndex;
LABEL_23:
        ListViewManager__MoveCenterItem(v6, pageIndex - 1, 1, 0, 0.0, 0LL);
        return;
      }
      goto LABEL_25;
    }
    v8 = this->fields.manager;
    if ( !v8 )
      goto LABEL_25;
    if ( v8->fields.isLoop )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(7, 0LL);
      v6 = this->fields.manager;
      if ( v6 )
      {
        pageIndex = this->fields.pageMax;
        goto LABEL_23;
      }
LABEL_25:
      sub_B170D4();
    }
  }
}


void __fastcall PartyListViewIndicator__OnClickRight(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *manager; // x20
  ListViewManager_o *v5; // x0
  int32_t pageIndex; // w8
  ListViewManager_o *v7; // x0
  int32_t v8; // w1
  struct ListViewManager_o *v9; // x8

  if ( (byte_40FDD75 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FDD75 = 1;
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
      v7 = this->fields.manager;
      if ( v7 )
      {
        v8 = this->fields.pageIndex + 1;
LABEL_24:
        ListViewManager__MoveCenterItem(v7, v8, 1, 0, 0.0, 0LL);
        return;
      }
      goto LABEL_26;
    }
    v9 = this->fields.manager;
    if ( !v9 )
      goto LABEL_26;
    if ( v9->fields.isLoop )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(7, 0LL);
      v7 = this->fields.manager;
      if ( v7 )
      {
        v8 = 0;
        goto LABEL_24;
      }
LABEL_26:
      sub_B170D4();
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
  struct ListViewManager_o *v13; // x8
  _BOOL4 isLoop; // w8
  UnityEngine_GameObject_o *leftObject; // x0
  char v16; // w9
  bool v17; // w8
  UnityEngine_GameObject_o *rightObject; // x0
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  __int64 v21; // x10
  ListViewItem_o *v22; // x1

  v8 = isRight;
  if ( (byte_40FDD6F & 1) == 0 )
  {
    sub_B16FFC(&PartyListViewItem_TypeInfo, manager);
    byte_40FDD6F = 1;
  }
  this->fields.manager = manager;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.manager,
    (System_Int32_array **)manager,
    (System_String_array **)item,
    (System_String_array **)isTop,
    (System_Boolean_array **)isBottom,
    (System_Int32_array **)isLeft,
    (System_Int32_array *)isRight,
    (System_Int32_array *)method);
  v13 = this->fields.manager;
  if ( !v13 )
    goto LABEL_19;
  isLoop = v13->fields.isLoop;
  leftObject = this->fields.leftObject;
  v16 = isLeft | v8;
  if ( isLoop )
    v8 |= isLeft;
  if ( !leftObject
    || (!isLoop ? (v17 = isLeft) : (v17 = v16),
        UnityEngine_GameObject__SetActive(leftObject, v17, 0LL),
        (rightObject = this->fields.rightObject) == 0LL) )
  {
LABEL_19:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(rightObject, v8 & 1, 0LL);
  if ( !item )
  {
    PartyListViewIndicator__SetPageIndex(this, -1, v19);
    goto LABEL_17;
  }
  PartyListViewIndicator__SetPageIndex(this, item->fields.index, v19);
  v21 = *(&PartyListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&item->klass->_2.bitflags2 + 1) < (unsigned int)v21 )
  {
LABEL_17:
    v22 = 0LL;
    goto LABEL_18;
  }
  if ( (PartyListViewItem_c *)item->klass->_2.typeHierarchy[v21 - 1] == PartyListViewItem_TypeInfo )
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
  UISprite_o *Component_srcLineSprite; // x0
  int v11; // w8
  UISprite_o *v12; // x19
  __int64 *v13; // x8
  UnityEngine_GameObject_o *soloBaseObject; // x0
  srcLineSprite_o *v15; // x0
  UISprite_o *v16; // x21
  UnityEngine_GameObject_o *v17; // x0

  if ( (byte_40FDD76 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, *(_QWORD *)&servantNum);
    sub_B16FFC(&StringLiteral_20144/*"limited_bg"*/, v5);
    sub_B16FFC(&StringLiteral_22091/*"solo_bg"*/, v6);
    sub_B16FFC(&StringLiteral_22195/*"startingonly_bg"*/, v7);
    sub_B16FFC(&StringLiteral_21318/*"pair_bg"*/, v8);
    byte_40FDD76 = 1;
  }
  organizationNumObject = this->fields.organizationNumObject;
  if ( !organizationNumObject )
LABEL_19:
    sub_B170D4();
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            organizationNumObject,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v11 = servantNum - 1;
  v12 = Component_srcLineSprite;
  switch ( v11 )
  {
    case 0:
      soloBaseObject = this->fields.soloBaseObject;
      if ( !soloBaseObject )
        goto LABEL_19;
      v15 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
              soloBaseObject,
              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !this->fields.soloBaseObject )
        goto LABEL_19;
      v16 = (UISprite_o *)v15;
      UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0LL);
      v17 = this->fields.organizationNumObject;
      if ( !v17 )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive(v17, 0, 0LL);
      if ( !v16 )
        goto LABEL_19;
      UISprite__set_spriteName(v16, (System_String_o *)StringLiteral_22091/*"solo_bg"*/, 0LL);
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v16->klass->vtable._33_MakePixelPerfect.method)(
        v16,
        v16->klass->vtable._34_get_minWidth.methodPtr);
      if ( !v12 )
        goto LABEL_19;
      goto LABEL_18;
    case 1:
      if ( !Component_srcLineSprite )
        goto LABEL_19;
      v13 = &StringLiteral_21318/*"pair_bg"*/;
      break;
    case 2:
      if ( !Component_srcLineSprite )
        goto LABEL_19;
      v13 = &StringLiteral_22195/*"startingonly_bg"*/;
      break;
    default:
      if ( !Component_srcLineSprite )
        goto LABEL_19;
      v13 = &StringLiteral_20144/*"limited_bg"*/;
      break;
  }
  UISprite__set_spriteName(Component_srcLineSprite, (System_String_o *)*v13, 0LL);
LABEL_18:
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v12->klass->vtable._33_MakePixelPerfect.method)(
    v12,
    v12->klass->vtable._34_get_minWidth.methodPtr);
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
  PartyEventPointIndicator_o *v24; // x0

  this->fields.setupInfo = setupInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    (System_String_array **)questRestrictionInfo,
    (System_String_array **)classIds,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.eventMargeUpValInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.eventMargeUpValInfo, 0LL, v17, v18, v19, v20, v21, v22);
  partyEventPointIndicator = this->fields.partyEventPointIndicator;
  if ( !partyEventPointIndicator
    || (PartyEventPointIndicator__SetInfomation(partyEventPointIndicator, questRestrictionInfo, classIds, 0LL),
        (v24 = this->fields.partyEventPointIndicator) == 0LL) )
  {
    sub_B170D4();
  }
  PartyEventPointIndicator__SetTotalDropItemList(v24, 0LL, 0LL);
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
  struct System_Int32_array *useLimitEquip; // x21
  __int64 v10; // x8
  System_String_o *v11; // x20
  unsigned __int64 v12; // x22
  int v13; // w26
  Il2CppObject *v14; // x0
  int v15; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40FDD77 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&StringLiteral_8366/*"LIMIT_EQUIP_SETTING"*/, v3);
    sub_B16FFC(&StringLiteral_698/*","*/, v4);
    sub_B16FFC(&StringLiteral_1/*""*/, v5);
    byte_40FDD77 = 1;
  }
  IsEventOnlyEquip = (System_String_o *)PartyListViewIndicator__IsEventOnlyEquip(this, method);
  if ( ((unsigned __int8)IsEventOnlyEquip & 1) != 0 )
  {
    useLimitEquip = this->fields.useLimitEquip;
    if ( !useLimitEquip )
      goto LABEL_15;
    v10 = *(_QWORD *)&useLimitEquip->max_length;
    v11 = (System_String_o *)StringLiteral_1/*""*/;
    if ( (int)v10 >= 1 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        if ( v12 >= (unsigned int)v10 )
        {
          sub_B17100(IsEventOnlyEquip, v7, v8);
          sub_B170A0();
        }
        if ( !v11 )
          break;
        v13 = useLimitEquip->m_Items[v12 + 1];
        if ( v11->fields.m_stringLength >= 1 )
          v11 = System_String__Concat_43743732(v11, (System_String_o *)StringLiteral_698/*","*/, 0LL);
        v15 = v13;
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
        IsEventOnlyEquip = System_String__Concat((Il2CppObject *)v11, v14, 0LL);
        LODWORD(v10) = useLimitEquip->max_length;
        ++v12;
        v11 = IsEventOnlyEquip;
        if ( (__int64)v12 >= (int)v10 )
          goto LABEL_12;
      }
LABEL_15:
      sub_B170D4();
    }
LABEL_12:
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_8366/*"LIMIT_EQUIP_SETTING"*/, v11, 0LL);
    this->fields.isChkSave = 0;
  }
}


void __fastcall PartyListViewIndicator__SetIndexMax(
        PartyListViewIndicator_o *this,
        int32_t max,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *leftObject; // x0
  UnityEngine_GameObject_o *rightObject; // x0

  PartyListViewIndicator__SetPageMax(this, max, method);
  leftObject = this->fields.leftObject;
  if ( !leftObject
    || (UnityEngine_GameObject__SetActive(leftObject, 0, 0LL), (rightObject = this->fields.rightObject) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(rightObject, 0, 0LL);
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
  UnityEngine_Object_o *pageBaseObject; // x21
  _BOOL8 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x21
  struct UISprite_array *pageSpriteList; // x8
  UISprite_o *v23; // x0
  __int64 *v24; // x8
  int v25; // w24
  System_String_o *v26; // x0
  UISprite_o *indexSprite; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *indexBaseObject; // x0
  UISprite_o *Component_srcLineSprite; // x21
  UnityEngine_Component_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_Component_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_Component_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Component_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_Component_o *waveMaxNumOnesPlaceSprite; // x0
  UnityEngine_GameObject_o *v40; // x0
  UnityEngine_Component_o *waveMaxNumOnesPlaceGlowSprite; // x0
  UnityEngine_GameObject_o *v42; // x0
  System_String_o *v43; // x0
  struct UISprite_o *v44; // x0
  UnityEngine_Component_o *waveMaxNumTensPlaceSprite; // x0
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_Component_o *waveMaxNumTensPlaceGlowSprite; // x0
  UnityEngine_GameObject_o *v48; // x0
  UISprite_o *v49; // x22
  System_String_o *v50; // x0
  System_String_o *v51; // x23
  UISprite_o *v52; // x22
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  struct UISprite_o *v55; // x0
  struct UISprite_o *v56; // x0
  UnityEngine_GameObject_o *waveNumObject; // x0
  UnityEngine_Component_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x0
  UnityEngine_Component_o *v60; // x0
  UnityEngine_GameObject_o *v61; // x0
  int32_t v62; // w1
  UnityEngine_Component_o *waveNumTensPlaceSprite; // x0
  UnityEngine_GameObject_o *v64; // x0
  UnityEngine_Component_o *waveNumTensPlaceGlowSprite; // x0
  UnityEngine_GameObject_o *v66; // x0
  UISprite_o *v67; // x22
  System_String_o *v68; // x0
  System_String_o *v69; // x23
  UISprite_o *v70; // x22
  System_String_o *v71; // x0
  System_String_o *v72; // x0
  struct UISprite_o *v73; // x0
  struct UISprite_o *v74; // x0
  UISprite_o *waveNumOnesPlaceSprite; // x21
  System_String_o *v76; // x0
  System_String_o *v77; // x22
  UISprite_o *waveNumOnesPlaceGlowSprite; // x21
  System_String_o *v79; // x0
  System_String_o *v80; // x0
  UISprite_o *v81; // x21
  System_String_o *v82; // x0
  System_String_o *v83; // x0
  UISprite_o *v84; // x21
  System_String_o *v85; // x0
  System_String_o *v86; // x0
  struct UISprite_o *v87; // x0
  struct UISprite_o *v88; // x0
  struct UISprite_o *v89; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w21
  bool v92; // w20
  UnityEngine_Component_o *lastTimeUsedSprite; // x0
  UnityEngine_GameObject_o *v94; // x0
  int v95; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40FDD71 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v5);
    sub_B16FFC(&LastUsedDeckNumberManager_TypeInfo, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&OptionManager_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_16599/*"battle_num_"*/, v9);
    sub_B16FFC(&StringLiteral_19557/*"img_slider_on"*/, v10);
    sub_B16FFC(&StringLiteral_16082/*"_glow"*/, v11);
    sub_B16FFC(&StringLiteral_16601/*"battle_num_slash_glow"*/, v12);
    sub_B16FFC(&StringLiteral_21339/*"party_txt_"*/, v13);
    sub_B16FFC(&StringLiteral_16595/*"battle_bg"*/, v14);
    sub_B16FFC(&StringLiteral_19556/*"img_slider_off"*/, v15);
    sub_B16FFC(&StringLiteral_16600/*"battle_num_slash"*/, v16);
    byte_40FDD71 = 1;
  }
  v95 = 0;
  this->fields.pageIndex = index;
  if ( (index & 0x80000000) == 0 )
  {
    pageBaseObject = (UnityEngine_Object_o *)this->fields.pageBaseObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v18 = UnityEngine_Object__op_Inequality(pageBaseObject, 0LL, 0LL);
    if ( v18 && this->fields.pageMax >= 1 )
    {
      v21 = 0LL;
      do
      {
        pageSpriteList = this->fields.pageSpriteList;
        if ( !pageSpriteList )
          goto LABEL_90;
        if ( (unsigned int)v21 >= pageSpriteList->max_length )
        {
          sub_B17100(v18, v19, v20);
          sub_B170A0();
        }
        v23 = pageSpriteList->m_Items[v21];
        if ( !v23 )
          goto LABEL_90;
        if ( index == (_DWORD)v21 )
          v24 = &StringLiteral_19557/*"img_slider_on"*/;
        else
          v24 = &StringLiteral_19556/*"img_slider_off"*/;
        UISprite__set_spriteName(v23, (System_String_o *)*v24, 0LL);
      }
      while ( (int)++v21 < this->fields.pageMax );
    }
    v25 = index + 1;
    v95 = index + 1;
    v26 = System_Int32__ToString((int32_t)&v95, 0LL);
    indexSprite = this->fields.indexSprite;
    if ( this->fields.menuKind == 9 )
    {
      if ( !indexSprite )
        goto LABEL_90;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.indexSprite, 0LL);
      if ( !gameObject )
        goto LABEL_90;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      GameObjectExtensions__SetLocalPositionY(this->fields.indexBaseObject, 260.0, 0LL);
      indexBaseObject = this->fields.indexBaseObject;
      if ( !indexBaseObject )
        goto LABEL_90;
      Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                indexBaseObject,
                                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetPartyOrganizationImage(Component_srcLineSprite, (System_String_o *)StringLiteral_16595/*"battle_bg"*/, 0LL);
      AtlasManager__SetPartyOrganizationImage(
        this->fields.waveNumSlashSprite,
        (System_String_o *)StringLiteral_16600/*"battle_num_slash"*/,
        0LL);
      AtlasManager__SetPartyOrganizationImage(
        this->fields.waveNumSlashGlowSprite,
        (System_String_o *)StringLiteral_16601/*"battle_num_slash_glow"*/,
        0LL);
      if ( this->fields.pageMax >= 10 )
      {
        waveMaxNumTensPlaceSprite = (UnityEngine_Component_o *)this->fields.waveMaxNumTensPlaceSprite;
        if ( !waveMaxNumTensPlaceSprite )
          goto LABEL_90;
        v46 = UnityEngine_Component__get_gameObject(waveMaxNumTensPlaceSprite, 0LL);
        if ( !v46 )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive(v46, 1, 0LL);
        waveMaxNumTensPlaceGlowSprite = (UnityEngine_Component_o *)this->fields.waveMaxNumTensPlaceGlowSprite;
        if ( !waveMaxNumTensPlaceGlowSprite )
          goto LABEL_90;
        v48 = UnityEngine_Component__get_gameObject(waveMaxNumTensPlaceGlowSprite, 0LL);
        if ( !v48 )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive(v48, 1, 0LL);
        v49 = this->fields.waveMaxNumTensPlaceSprite;
        v95 = this->fields.pageMax / 10;
        v50 = System_Int32__ToString((int32_t)&v95, 0LL);
        v51 = System_String__Concat_43743732((System_String_o *)StringLiteral_16599/*"battle_num_"*/, v50, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetPartyOrganizationImage(v49, v51, 0LL);
        v52 = this->fields.waveMaxNumTensPlaceGlowSprite;
        v95 = this->fields.pageMax / 10;
        v53 = System_Int32__ToString((int32_t)&v95, 0LL);
        v54 = System_String__Concat_43746016(
                (System_String_o *)StringLiteral_16599/*"battle_num_"*/,
                v53,
                (System_String_o *)StringLiteral_16082/*"_glow"*/,
                0LL);
        AtlasManager__SetPartyOrganizationImage(v52, v54, 0LL);
        v55 = this->fields.waveMaxNumTensPlaceSprite;
        if ( !v55 )
          goto LABEL_90;
        ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v55->klass->vtable._33_MakePixelPerfect.method)(
          v55,
          v55->klass->vtable._34_get_minWidth.methodPtr);
        v56 = this->fields.waveMaxNumTensPlaceGlowSprite;
        if ( !v56 )
          goto LABEL_90;
        ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v56->klass->vtable._33_MakePixelPerfect.method)(
          v56,
          v56->klass->vtable._34_get_minWidth.methodPtr);
        waveNumObject = this->fields.waveNumObject;
        if ( v25 >= 10 )
        {
          GameObjectExtensions__SetLocalPositionX(waveNumObject, 7.0, 0LL);
          waveNumTensPlaceSprite = (UnityEngine_Component_o *)this->fields.waveNumTensPlaceSprite;
          if ( !waveNumTensPlaceSprite )
            goto LABEL_90;
          v64 = UnityEngine_Component__get_gameObject(waveNumTensPlaceSprite, 0LL);
          if ( !v64 )
            goto LABEL_90;
          UnityEngine_GameObject__SetActive(v64, 1, 0LL);
          waveNumTensPlaceGlowSprite = (UnityEngine_Component_o *)this->fields.waveNumTensPlaceGlowSprite;
          if ( !waveNumTensPlaceGlowSprite )
            goto LABEL_90;
          v66 = UnityEngine_Component__get_gameObject(waveNumTensPlaceGlowSprite, 0LL);
          if ( !v66 )
            goto LABEL_90;
          UnityEngine_GameObject__SetActive(v66, 1, 0LL);
          v67 = this->fields.waveNumTensPlaceSprite;
          v95 = v25 / 0xAu;
          v68 = System_Int32__ToString((int32_t)&v95, 0LL);
          v69 = System_String__Concat_43743732((System_String_o *)StringLiteral_16599/*"battle_num_"*/, v68, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetPartyOrganizationImage(v67, v69, 0LL);
          v70 = this->fields.waveNumTensPlaceGlowSprite;
          v95 = v25 / 0xAu;
          v71 = System_Int32__ToString((int32_t)&v95, 0LL);
          v72 = System_String__Concat_43746016(
                  (System_String_o *)StringLiteral_16599/*"battle_num_"*/,
                  v71,
                  (System_String_o *)StringLiteral_16082/*"_glow"*/,
                  0LL);
          AtlasManager__SetPartyOrganizationImage(v70, v72, 0LL);
          v73 = this->fields.waveNumTensPlaceSprite;
          if ( !v73 )
            goto LABEL_90;
          ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v73->klass->vtable._33_MakePixelPerfect.method)(
            v73,
            v73->klass->vtable._34_get_minWidth.methodPtr);
          v74 = this->fields.waveNumTensPlaceGlowSprite;
          if ( !v74 )
            goto LABEL_90;
          ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v74->klass->vtable._33_MakePixelPerfect.method)(
            v74,
            v74->klass->vtable._34_get_minWidth.methodPtr);
          if ( !Component_srcLineSprite )
            goto LABEL_90;
          v62 = 322;
        }
        else
        {
          GameObjectExtensions__SetLocalPositionX(waveNumObject, 1.0, 0LL);
          v58 = (UnityEngine_Component_o *)this->fields.waveNumTensPlaceSprite;
          if ( !v58 )
            goto LABEL_90;
          v59 = UnityEngine_Component__get_gameObject(v58, 0LL);
          if ( !v59 )
            goto LABEL_90;
          UnityEngine_GameObject__SetActive(v59, 0, 0LL);
          v60 = (UnityEngine_Component_o *)this->fields.waveNumTensPlaceGlowSprite;
          if ( !v60 )
            goto LABEL_90;
          v61 = UnityEngine_Component__get_gameObject(v60, 0LL);
          if ( !v61 )
            goto LABEL_90;
          UnityEngine_GameObject__SetActive(v61, 0, 0LL);
          if ( !Component_srcLineSprite )
            goto LABEL_90;
          v62 = 308;
        }
        UIWidget__set_width((UIWidget_o *)Component_srcLineSprite, v62, 0LL);
      }
      else
      {
        GameObjectExtensions__SetLocalPositionX(this->fields.waveNumObject, 7.0, 0LL);
        v31 = (UnityEngine_Component_o *)this->fields.waveNumTensPlaceSprite;
        if ( !v31 )
          goto LABEL_90;
        v32 = UnityEngine_Component__get_gameObject(v31, 0LL);
        if ( !v32 )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive(v32, 0, 0LL);
        v33 = (UnityEngine_Component_o *)this->fields.waveNumTensPlaceGlowSprite;
        if ( !v33 )
          goto LABEL_90;
        v34 = UnityEngine_Component__get_gameObject(v33, 0LL);
        if ( !v34 )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive(v34, 0, 0LL);
        v35 = (UnityEngine_Component_o *)this->fields.waveMaxNumTensPlaceSprite;
        if ( !v35 )
          goto LABEL_90;
        v36 = UnityEngine_Component__get_gameObject(v35, 0LL);
        if ( !v36 )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive(v36, 0, 0LL);
        v37 = (UnityEngine_Component_o *)this->fields.waveMaxNumTensPlaceGlowSprite;
        if ( !v37 )
          goto LABEL_90;
        v38 = UnityEngine_Component__get_gameObject(v37, 0LL);
        if ( !v38 )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive(v38, 0, 0LL);
        if ( !Component_srcLineSprite )
          goto LABEL_90;
        UIWidget__set_width((UIWidget_o *)Component_srcLineSprite, 296, 0LL);
        waveMaxNumOnesPlaceSprite = (UnityEngine_Component_o *)this->fields.waveMaxNumOnesPlaceSprite;
        if ( !waveMaxNumOnesPlaceSprite )
          goto LABEL_90;
        v40 = UnityEngine_Component__get_gameObject(waveMaxNumOnesPlaceSprite, 0LL);
        GameObjectExtensions__SetLocalPositionX(v40, 67.0, 0LL);
        waveMaxNumOnesPlaceGlowSprite = (UnityEngine_Component_o *)this->fields.waveMaxNumOnesPlaceGlowSprite;
        if ( !waveMaxNumOnesPlaceGlowSprite )
          goto LABEL_90;
        v42 = UnityEngine_Component__get_gameObject(waveMaxNumOnesPlaceGlowSprite, 0LL);
        GameObjectExtensions__SetLocalPositionX(v42, 67.0, 0LL);
      }
      waveNumOnesPlaceSprite = this->fields.waveNumOnesPlaceSprite;
      v95 = v25 % 10;
      v76 = System_Int32__ToString((int32_t)&v95, 0LL);
      v77 = System_String__Concat_43743732((System_String_o *)StringLiteral_16599/*"battle_num_"*/, v76, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetPartyOrganizationImage(waveNumOnesPlaceSprite, v77, 0LL);
      waveNumOnesPlaceGlowSprite = this->fields.waveNumOnesPlaceGlowSprite;
      v95 = v25 % 10;
      v79 = System_Int32__ToString((int32_t)&v95, 0LL);
      v80 = System_String__Concat_43746016(
              (System_String_o *)StringLiteral_16599/*"battle_num_"*/,
              v79,
              (System_String_o *)StringLiteral_16082/*"_glow"*/,
              0LL);
      AtlasManager__SetPartyOrganizationImage(waveNumOnesPlaceGlowSprite, v80, 0LL);
      v81 = this->fields.waveMaxNumOnesPlaceSprite;
      v95 = this->fields.pageMax % 10;
      v82 = System_Int32__ToString((int32_t)&v95, 0LL);
      v83 = System_String__Concat_43743732((System_String_o *)StringLiteral_16599/*"battle_num_"*/, v82, 0LL);
      AtlasManager__SetPartyOrganizationImage(v81, v83, 0LL);
      v84 = this->fields.waveMaxNumOnesPlaceGlowSprite;
      v95 = this->fields.pageMax % 10;
      v85 = System_Int32__ToString((int32_t)&v95, 0LL);
      v86 = System_String__Concat_43746016(
              (System_String_o *)StringLiteral_16599/*"battle_num_"*/,
              v85,
              (System_String_o *)StringLiteral_16082/*"_glow"*/,
              0LL);
      AtlasManager__SetPartyOrganizationImage(v84, v86, 0LL);
      v87 = this->fields.waveNumOnesPlaceSprite;
      if ( !v87 )
        goto LABEL_90;
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v87->klass->vtable._33_MakePixelPerfect.method)(
        v87,
        v87->klass->vtable._34_get_minWidth.methodPtr);
      v88 = this->fields.waveNumOnesPlaceGlowSprite;
      if ( !v88 )
        goto LABEL_90;
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v88->klass->vtable._33_MakePixelPerfect.method)(
        v88,
        v88->klass->vtable._34_get_minWidth.methodPtr);
      v89 = this->fields.waveMaxNumOnesPlaceSprite;
      if ( !v89 )
        goto LABEL_90;
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v89->klass->vtable._33_MakePixelPerfect.method)(
        v89,
        v89->klass->vtable._34_get_minWidth.methodPtr);
      v44 = this->fields.waveMaxNumOnesPlaceGlowSprite;
      if ( !v44 )
        goto LABEL_90;
    }
    else
    {
      v43 = System_String__Concat_43743732((System_String_o *)StringLiteral_21339/*"party_txt_"*/, v26, 0LL);
      if ( !indexSprite )
        goto LABEL_90;
      UISprite__set_spriteName(indexSprite, v43, 0LL);
      v44 = this->fields.indexSprite;
      if ( !v44 )
        goto LABEL_90;
    }
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v44->klass->vtable._33_MakePixelPerfect.method)(
      v44,
      v44->klass->vtable._34_get_minWidth.methodPtr);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_85;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    if ( OptionManager__GetAutoSelectParty(0LL) )
    {
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_90;
      questId = questRestrictionInfo->fields.questId;
      if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      }
      v92 = LastUsedDeckNumberManager__GetDeckNumber(questId, 0LL) - 1 == index;
    }
    else
    {
LABEL_85:
      v92 = 0;
    }
    lastTimeUsedSprite = (UnityEngine_Component_o *)this->fields.lastTimeUsedSprite;
    if ( !lastTimeUsedSprite || (v94 = UnityEngine_Component__get_gameObject(lastTimeUsedSprite, 0LL)) == 0LL )
LABEL_90:
      sub_B170D4();
    UnityEngine_GameObject__SetActive(v94, v92, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewIndicator__SetPageMax(
        PartyListViewIndicator_o *this,
        int32_t max,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct UISprite_array *pageSpriteList; // x8
  int max_length; // w8
  UnityEngine_Object_o *pageBaseObject; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct UISprite_array *v12; // x8
  __int64 v13; // x20
  int v14; // w9
  UISprite_o *v15; // x0
  System_String_o *v16; // x1
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_Transform_o *transform; // x0
  float v19; // s1
  float v20; // s2
  UnityEngine_GameObject_o *v21; // x0
  int32_t pageMax; // w19
  float v23; // s8
  float v24; // s9
  UnityEngine_Transform_o *v25; // x0
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FDD70 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&max);
    sub_B16FFC(&StringLiteral_19556/*"img_slider_off"*/, v5);
    byte_40FDD70 = 1;
  }
  pageSpriteList = this->fields.pageSpriteList;
  if ( !pageSpriteList )
    goto LABEL_21;
  max_length = pageSpriteList->max_length;
  this->fields.pageIndex = -1;
  if ( max_length >= max )
    max_length = max;
  this->fields.pageMax = max_length;
  if ( max_length <= 1 )
    this->fields.pageMax = 0;
  pageBaseObject = (UnityEngine_Object_o *)this->fields.pageBaseObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Inequality(pageBaseObject, 0LL, 0LL);
  if ( v9 )
  {
    v12 = this->fields.pageSpriteList;
    if ( v12 )
    {
      v13 = 0LL;
      while ( 1 )
      {
        v14 = v12->max_length;
        if ( (int)v13 >= v14 )
          break;
        if ( (unsigned int)v13 >= v14 )
        {
          sub_B17100(v9, v10, v11);
          sub_B170A0();
        }
        v15 = v12->m_Items[v13];
        if ( v15 )
        {
          v16 = (int)v13 >= this->fields.pageMax ? 0LL : (System_String_o *)StringLiteral_19556/*"img_slider_off"*/;
          UISprite__set_spriteName(v15, v16, 0LL);
          v12 = this->fields.pageSpriteList;
          ++v13;
          if ( v12 )
            continue;
        }
        goto LABEL_21;
      }
      v17 = this->fields.pageBaseObject;
      if ( v17 )
      {
        transform = UnityEngine_GameObject__get_transform(v17, 0LL);
        if ( transform )
        {
          *(UnityEngine_Vector3_o *)(&v19 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
          v21 = this->fields.pageBaseObject;
          if ( v21 )
          {
            pageMax = this->fields.pageMax;
            v23 = v19;
            v24 = v20;
            v25 = UnityEngine_GameObject__get_transform(v21, 0LL);
            if ( v25 )
            {
              v26.fields.x = (float)(-10 * pageMax + 10);
              v26.fields.y = v23;
              v26.fields.z = v24;
              UnityEngine_Transform__set_localPosition(v25, v26, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_21:
    sub_B170D4();
  }
}


void __fastcall PartyListViewIndicator__SetScrollEnabled(
        PartyListViewIndicator_o *this,
        bool enabled,
        const MethodInfo *method)
{
  this->fields.isScrollEnabled = enabled;
}