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

  if ( (byte_418B502 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&int___TypeInfo, v3);
    byte_418B502 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, (unsigned int)(v4->static_fields->DeckMax + 1));
  this->fields.useLimitEquip = v5;
  sub_B2C2F8(
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
  UnityEngine_Color___ctor_40633184(v20, v12, v13, v14, (const MethodInfo *)&v19);
  this->fields.ICON_NORMAL_COLOR = v19;
  v21.fields.r = 0.4;
  v18 = (struct UnityEngine_Color_o)0LL;
  v21.fields.g = 0.4;
  v21.fields.b = 0.4;
  UnityEngine_Color___ctor_40633184(v21, v15, v16, v17, (const MethodInfo *)&v18);
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
    sub_B2C434(limitMasterFormationButton, method);
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
  __int64 v7; // x1
  UILabel_o *v8; // x20
  UnityEngine_Component_o *gameObject; // x0
  bool v10; // w1
  unsigned int v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_418B501 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&bonusVal);
    byte_418B501 = 1;
  }
  v11 = 0;
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
            v10 = 0;
            goto LABEL_19;
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
LABEL_19:
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v10, 0LL);
              return;
            }
          }
        }
      }
      sub_B2C434(gameObject, v7);
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

  if ( (byte_418B4FA & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, partyItem);
    sub_B2C35C(&BalanceConfig_TypeInfo, v7);
    sub_B2C35C(&char___TypeInfo, v8);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UISprite___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&StringLiteral_18503/*"event_emblem_frame"*/, v12);
    sub_B2C35C(&StringLiteral_19332/*"icon_equip_fixation"*/, v13);
    sub_B2C35C(&StringLiteral_8395/*"LIMIT_EQUIP_SETTING"*/, v14);
    sub_B2C35C(&StringLiteral_17016/*"btn_skill_off"*/, v15);
    sub_B2C35C(&StringLiteral_18502/*"event_emblem_dim"*/, v16);
    sub_B2C35C(&StringLiteral_17017/*"btn_skill_on"*/, v17);
    byte_418B4FA = 1;
  }
  outEnt = 0LL;
  if ( !PartyListViewIndicator__IsEventOnlyEquip(this, (const MethodInfo *)partyItem) )
    goto LABEL_50;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
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
    sub_B2C434(Instance, v18);
  ItemIconComponent__SetEquipItem((ItemIconComponent_o *)Instance, outEnt->fields.overwriteEquipIconId, 0LL);
  masterEquipBackSprite = this->fields.masterEquipBackSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(masterEquipBackSprite, (System_String_o *)StringLiteral_18502/*"event_emblem_dim"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.masterEquipFrameSprite, (System_String_o *)StringLiteral_18503/*"event_emblem_frame"*/, 0LL);
  if ( !this->fields.isChkSave )
  {
    if ( (v23 & 1) == 0 )
    {
      Instance = (__int64)UnityEngine_PlayerPrefs__GetString_35342888((System_String_o *)StringLiteral_8395/*"LIMIT_EQUIP_SETTING"*/, 0LL);
      if ( !Instance )
        goto LABEL_75;
      v25 = (System_String_o *)Instance;
      if ( *(int *)(Instance + 16) >= 1 )
      {
        Instance = sub_B2C374(char___TypeInfo, 1LL);
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
                                    (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( v32 )
        {
          if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetEventUI((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_17017/*"btn_skill_on"*/, 0LL);
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
          AtlasManager__SetEventUI((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_17016/*"btn_skill_off"*/, 0LL);
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
    v34 = sub_B2C460(Instance);
    sub_B2C400(v34, 0LL);
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
  AtlasManager__SetEventUI(limitEquipFixSprite, (System_String_o *)StringLiteral_19332/*"icon_equip_fixation"*/, 0LL);
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
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  __int64 v61; // x9
  int32_t v62; // w21
  ServantEntity_array *SvtEntityList; // x22
  const MethodInfo *v64; // x1
  System_String_array *SvtNameList; // x23
  const MethodInfo *v66; // x1
  System_Boolean_array *IsFollowerList; // x24
  EventPartyMargeUpValInfo_o *v68; // x25
  struct EventPartyMargeUpValInfo_o **p_eventMargeUpValInfo; // x21
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  const MethodInfo *v76; // x3
  EventUpValInfo_array *v77; // x8
  unsigned __int64 v78; // x20
  unsigned __int64 max_length; // x9
  EventPartyMargeUpValInfo_o *v80; // x22
  UILabel_o *selectNameLabel; // x21
  System_String_o *v82; // x0
  __int64 v83; // x0
  EventUpValInfo_array *v84; // [xsp+0h] [xbp-70h] BYREF
  int32_t genderImageId; // [xsp+Ch] [xbp-64h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *equipName; // [xsp+18h] [xbp-58h] BYREF
  int32_t maxLv; // [xsp+24h] [xbp-4Ch] BYREF
  int32_t condUsrLv[2]; // [xsp+28h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+38h] [xbp-38h] BYREF
  int32_t v91; // [xsp+3Ch] [xbp-34h] BYREF

  if ( (byte_418B4F9 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, partyItem);
    sub_B2C35C(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEquipMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v7);
    sub_B2C35C(&EventPartyMargeUpValInfo_TypeInfo, v8);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v9);
    sub_B2C35C(&LocalizationManager_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&StringLiteral_10356/*"PARTY_ORGANIZATION_NAME"*/, v12);
    sub_B2C35C(&StringLiteral_22183/*"solo_bg"*/, v13);
    sub_B2C35C(&StringLiteral_10326/*"PARTY_ORGANIZATION_COST_SPLIT"*/, v14);
    sub_B2C35C(&StringLiteral_10324/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, v15);
    sub_B2C35C(&StringLiteral_10325/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, v16);
    sub_B2C35C(&StringLiteral_22212/*"specialparty_bg"*/, v17);
    sub_B2C35C(&StringLiteral_10323/*"PARTY_ORGANIZATION_COST_COLOR"*/, v18);
    sub_B2C35C(&StringLiteral_1/*""*/, v19);
    byte_418B4F9 = 1;
  }
  v91 = 0;
  eventId = 0;
  *(_QWORD *)condUsrLv = 0LL;
  maxLv = 0;
  detail = 0LL;
  equipName = 0LL;
  genderImageId = 0;
  v84 = 0LL;
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
                                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !this->fields.soloBaseObject )
          goto LABEL_113;
        v21 = (UISprite_o *)soloBaseObject;
        UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0LL);
        if ( !v21 )
          goto LABEL_113;
        UISprite__set_spriteName(v21, (System_String_o *)StringLiteral_22183/*"solo_bg"*/, 0LL);
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
                                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !this->fields.soloBaseObject )
          goto LABEL_113;
        v40 = (UISprite_o *)soloBaseObject;
        UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0LL);
        if ( !v40 )
          goto LABEL_113;
        UISprite__set_spriteName(v40, (System_String_o *)StringLiteral_22212/*"specialparty_bg"*/, 0LL);
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
          soloBaseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !soloBaseObject )
            goto LABEL_113;
          soloBaseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)soloBaseObject,
                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
            sub_B2C434(soloBaseObject, partyItem);
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
          v82 = LocalizationManager__Get((System_String_o *)StringLiteral_10356/*"PARTY_ORGANIZATION_NAME"*/, 0LL);
          soloBaseObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                         v82,
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
          v91 = maxCost;
          v46 = this->fields.questRestrictionInfo;
          v47 = v46 ? QuestRestrictionInfo__GetTotalCostRestriction(v46, 0LL) : 0;
          if ( v47 && maxCost > v47 )
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v48 = LocalizationManager__Get((System_String_o *)StringLiteral_10325/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0LL);
            v91 = v47;
          }
          else
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v48 = LocalizationManager__Get((System_String_o *)StringLiteral_10323/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
          }
          maxCostLabel = this->fields.maxCostLabel;
          v50 = System_Int32__ToString((int32_t)&v91, 0LL);
          soloBaseObject = (UnityEngine_GameObject_o *)System_String__Concat_44305532(v48, v50, 0LL);
          if ( maxCostLabel )
          {
            UILabel__set_text(maxCostLabel, (System_String_o *)soloBaseObject, 0LL);
            splitCostLabel = this->fields.splitCostLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v52 = LocalizationManager__Get((System_String_o *)StringLiteral_10326/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
            soloBaseObject = (UnityEngine_GameObject_o *)System_String__Concat_44305532(v48, v52, 0LL);
            if ( splitCostLabel )
            {
              UILabel__set_text(splitCostLabel, (System_String_o *)soloBaseObject, 0LL);
              cost = partyItem->fields.cost;
              selectCostLabel = this->fields.selectCostLabel;
              if ( cost > v91 )
              {
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v55 = LocalizationManager__Get((System_String_o *)StringLiteral_10324/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
                cost = partyItem->fields.cost;
                v48 = v55;
              }
              condUsrLv[1] = cost;
              v56 = System_Int32__ToString((int32_t)&condUsrLv[1], 0LL);
              soloBaseObject = (UnityEngine_GameObject_o *)System_String__Concat_44305532(v48, v56, 0LL);
              if ( selectCostLabel )
              {
                UILabel__set_text(selectCostLabel, (System_String_o *)soloBaseObject, 0LL);
                soloBaseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( soloBaseObject )
                {
                  soloBaseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)soloBaseObject,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEquipMaster___);
                  if ( soloBaseObject )
                  {
                    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)soloBaseObject,
                               partyItem->fields.userEquipId,
                               (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
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
                    v61 = *(_QWORD *)&eventIdList->max_length;
                    if ( v61 )
                    {
                      if ( !(_DWORD)v61 )
                      {
LABEL_126:
                        v83 = sub_B2C460(soloBaseObject);
                        sub_B2C400(v83, 0LL);
                      }
                      v62 = eventIdList->m_Items[1];
                    }
                    else
                    {
LABEL_104:
                      v62 = 0;
                    }
                    eventId = v62;
                    SvtEntityList = PartyListViewItem__GetSvtEntityList(partyItem, (const MethodInfo *)partyItem);
                    SvtNameList = PartyListViewItem__GetSvtNameList(partyItem, v64);
                    IsFollowerList = PartyListViewItem__GetIsFollowerList(partyItem, v66);
                    v68 = (EventPartyMargeUpValInfo_o *)sub_B2C42C(EventPartyMargeUpValInfo_TypeInfo);
                    EventPartyMargeUpValInfo___ctor(v68, v62, SvtEntityList, SvtNameList, IsFollowerList, 0LL);
                    p_eventMargeUpValInfo = &this->fields.eventMargeUpValInfo;
                    this->fields.eventMargeUpValInfo = v68;
                    sub_B2C2F8(
                      (BattleServantConfConponent_o *)&this->fields.eventMargeUpValInfo,
                      (System_Int32_array **)v68,
                      v70,
                      v71,
                      v72,
                      v73,
                      v74,
                      v75);
                    soloBaseObject = (UnityEngine_GameObject_o *)PartyListViewItem__GetEventUpVal(
                                                                   partyItem,
                                                                   &eventId,
                                                                   &v84,
                                                                   v76);
                    v77 = v84;
                    if ( v84 )
                    {
                      v78 = 0LL;
                      while ( 1 )
                      {
                        max_length = v77->max_length;
                        if ( (__int64)v78 >= (int)max_length )
                          break;
                        if ( v78 >= max_length )
                          goto LABEL_126;
                        soloBaseObject = (UnityEngine_GameObject_o *)v77->m_Items[v78];
                        if ( soloBaseObject )
                        {
                          v80 = *p_eventMargeUpValInfo;
                          soloBaseObject = (UnityEngine_GameObject_o *)EventUpValInfo__GetDropItemList(
                                                                         (EventUpValInfo_o *)soloBaseObject,
                                                                         v78,
                                                                         0LL);
                          if ( !v80 )
                            goto LABEL_113;
                          EventPartyMargeUpValInfo__Add(v80, (EventDropItemUpValInfo_array *)soloBaseObject, 0LL);
                          v77 = v84;
                        }
                        ++v78;
                        if ( !v77 )
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v23, v24, v25, v26, v27, v28);
  this->fields.eventMargeUpValInfo = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.eventMargeUpValInfo, 0LL, v29, v30, v31, v32, v33, v34);
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
  __int64 v6; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418B500 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418B500 = 1;
  }
  entity = 0LL;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (questRestrictionInfo = this->fields.questRestrictionInfo) == 0LL)
    || !Instance )
  {
LABEL_12:
    sub_B2C434(Instance, v6);
  }
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          questRestrictionInfo->fields.eventId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
  __int64 v8; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v10; // x8
  int32_t index; // w21
  BalanceConfig_c *v12; // x0
  struct System_Int32_array *useLimitEquip; // x8
  __int64 v15; // x0
  EventEquipSkillReleaseEntity_o *outEnt; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418B4FF & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, partyItem);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_418B4FF = 1;
  }
  outEnt = 0LL;
  if ( !PartyListViewIndicator__IsEventOnlyEquip(this, (const MethodInfo *)partyItem) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
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
  Instance = (DataManager_o *)outEnt;
  if ( !outEnt )
    goto LABEL_23;
  Instance = (DataManager_o *)EventEquipSkillReleaseEntity__isForceOverwrite(outEnt, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    return 0;
  useLimitEquip = this->fields.useLimitEquip;
  if ( !useLimitEquip )
LABEL_23:
    sub_B2C434(Instance, v8);
  if ( index >= useLimitEquip->max_length )
  {
    v15 = sub_B2C460(Instance);
    sub_B2C400(v15, 0LL);
  }
  return useLimitEquip->m_Items[index + 1] == 0;
}


void __fastcall PartyListViewIndicator__OnClickLeft(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *manager; // x20
  __int64 v5; // x1
  ListViewManager_o *v6; // x0
  int32_t pageIndex; // w8
  struct ListViewManager_o *v8; // x8

  if ( (byte_418B4FB & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_418B4FB = 1;
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
    v6 = this->fields.manager;
    if ( !v6 )
      goto LABEL_25;
    ListViewManager__BackLoopItem(v6, 0LL);
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
      sub_B2C434(v6, v5);
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
  int32_t v8; // w1
  struct ListViewManager_o *v9; // x8

  if ( (byte_418B4FC & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_418B4FC = 1;
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
    v6 = this->fields.manager;
    if ( !v6 )
      goto LABEL_26;
    ListViewManager__FowardLoopItem(v6, 0LL);
    pageIndex = this->fields.pageIndex;
    if ( (pageIndex & 0x80000000) == 0 && pageIndex < this->fields.pageMax - 1 )
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
        v8 = this->fields.pageIndex + 1;
LABEL_24:
        ListViewManager__MoveCenterItem(v6, v8, 1, 0, 0.0, 0LL);
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
      v6 = this->fields.manager;
      if ( v6 )
      {
        v8 = 0;
        goto LABEL_24;
      }
LABEL_26:
      sub_B2C434(v6, v5);
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
  __int64 v14; // x1
  struct ListViewManager_o *v15; // x8
  _BOOL4 isLoop; // w8
  char v17; // w9
  bool v18; // w8
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  __int64 v21; // x10
  ListViewItem_o *v22; // x1

  v8 = isRight;
  if ( (byte_418B4F6 & 1) == 0 )
  {
    sub_B2C35C(&PartyListViewItem_TypeInfo, manager);
    byte_418B4F6 = 1;
  }
  this->fields.manager = manager;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.manager,
    (System_Int32_array **)manager,
    (System_String_array **)item,
    (System_String_array **)isTop,
    (System_Boolean_array **)isBottom,
    (System_Int32_array **)isLeft,
    (System_Int32_array *)isRight,
    (System_Int32_array *)method);
  v15 = this->fields.manager;
  if ( !v15 )
    goto LABEL_19;
  isLoop = v15->fields.isLoop;
  leftObject = this->fields.leftObject;
  v17 = isLeft | v8;
  if ( isLoop )
    v8 |= isLeft;
  if ( !leftObject
    || (!isLoop ? (v18 = isLeft) : (v18 = v17),
        UnityEngine_GameObject__SetActive(leftObject, v18, 0LL),
        (leftObject = this->fields.rightObject) == 0LL) )
  {
LABEL_19:
    sub_B2C434(leftObject, v14);
  }
  UnityEngine_GameObject__SetActive(leftObject, v8 & 1, 0LL);
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
  int v10; // w8
  UnityEngine_GameObject_o *v11; // x19
  __int64 *v12; // x8
  UISprite_o *v13; // x21

  if ( (byte_418B4FD & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, *(_QWORD *)&servantNum);
    sub_B2C35C(&StringLiteral_20227/*"limited_bg"*/, v5);
    sub_B2C35C(&StringLiteral_22183/*"solo_bg"*/, v6);
    sub_B2C35C(&StringLiteral_22287/*"startingonly_bg"*/, v7);
    sub_B2C35C(&StringLiteral_21411/*"pair_bg"*/, v8);
    byte_418B4FD = 1;
  }
  organizationNumObject = this->fields.organizationNumObject;
  if ( !organizationNumObject )
LABEL_19:
    sub_B2C434(organizationNumObject, *(_QWORD *)&servantNum);
  organizationNumObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        organizationNumObject,
                                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
                                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
      UISprite__set_spriteName(v13, (System_String_o *)StringLiteral_22183/*"solo_bg"*/, 0LL);
      organizationNumObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v13->klass->vtable._33_MakePixelPerfect.method)(
                                                            v13,
                                                            v13->klass->vtable._34_get_minWidth.methodPtr);
      if ( !v11 )
        goto LABEL_19;
      goto LABEL_18;
    case 1:
      if ( !organizationNumObject )
        goto LABEL_19;
      v12 = &StringLiteral_21411/*"pair_bg"*/;
      break;
    case 2:
      if ( !organizationNumObject )
        goto LABEL_19;
      v12 = &StringLiteral_22287/*"startingonly_bg"*/;
      break;
    default:
      if ( !organizationNumObject )
        goto LABEL_19;
      v12 = &StringLiteral_20227/*"limited_bg"*/;
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
  __int64 v23; // x1
  PartyEventPointIndicator_o *partyEventPointIndicator; // x0

  this->fields.setupInfo = setupInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    (System_String_array **)questRestrictionInfo,
    (System_String_array **)classIds,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.eventMargeUpValInfo = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.eventMargeUpValInfo, 0LL, v17, v18, v19, v20, v21, v22);
  partyEventPointIndicator = this->fields.partyEventPointIndicator;
  if ( !partyEventPointIndicator
    || (PartyEventPointIndicator__SetInfomation(partyEventPointIndicator, questRestrictionInfo, classIds, 0LL),
        (partyEventPointIndicator = this->fields.partyEventPointIndicator) == 0LL) )
  {
    sub_B2C434(partyEventPointIndicator, v23);
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
  struct System_Int32_array *useLimitEquip; // x21
  __int64 v9; // x8
  System_String_o *v10; // x20
  unsigned __int64 v11; // x22
  int v12; // w26
  Il2CppObject *v13; // x0
  __int64 v14; // x0
  int v15; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_418B4FE & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&StringLiteral_8395/*"LIMIT_EQUIP_SETTING"*/, v3);
    sub_B2C35C(&StringLiteral_699/*","*/, v4);
    sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_418B4FE = 1;
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
        {
          v14 = sub_B2C460(IsEventOnlyEquip);
          sub_B2C400(v14, 0LL);
        }
        if ( !v10 )
          break;
        v12 = useLimitEquip->m_Items[v11 + 1];
        if ( v10->fields.m_stringLength >= 1 )
          v10 = System_String__Concat_44305532(v10, (System_String_o *)StringLiteral_699/*","*/, 0LL);
        v15 = v12;
        v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
        IsEventOnlyEquip = System_String__Concat((Il2CppObject *)v10, v13, 0LL);
        LODWORD(v9) = useLimitEquip->max_length;
        ++v11;
        v10 = IsEventOnlyEquip;
        if ( (__int64)v11 >= (int)v9 )
          goto LABEL_12;
      }
LABEL_15:
      sub_B2C434(IsEventOnlyEquip, v7);
    }
LABEL_12:
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_8395/*"LIMIT_EQUIP_SETTING"*/, v10, 0LL);
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
    sub_B2C434(leftObject, v4);
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
  UnityEngine_Object_o *pageBaseObject; // x21
  UISprite_o *gameObject; // x0
  __int64 v19; // x1
  __int64 v20; // x21
  struct UISprite_array *pageSpriteList; // x8
  __int64 *v22; // x8
  int v23; // w24
  UISprite_o *indexSprite; // x21
  UISprite_o *Component_srcLineSprite; // x21
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  UISprite_o *waveMaxNumTensPlaceSprite; // x22
  System_String_o *v29; // x0
  System_String_o *v30; // x23
  UISprite_o *waveMaxNumTensPlaceGlowSprite; // x22
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  UnityEngine_GameObject_o *waveNumObject; // x0
  int32_t v35; // w1
  UISprite_o *waveNumTensPlaceSprite; // x22
  System_String_o *v37; // x0
  System_String_o *v38; // x23
  UISprite_o *waveNumTensPlaceGlowSprite; // x22
  System_String_o *v40; // x0
  System_String_o *v41; // x0
  UISprite_o *waveNumOnesPlaceSprite; // x21
  System_String_o *v43; // x0
  System_String_o *v44; // x22
  UISprite_o *waveNumOnesPlaceGlowSprite; // x21
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  UISprite_o *waveMaxNumOnesPlaceSprite; // x21
  System_String_o *v49; // x0
  System_String_o *v50; // x0
  UISprite_o *waveMaxNumOnesPlaceGlowSprite; // x21
  System_String_o *v52; // x0
  System_String_o *v53; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w21
  bool v56; // w20
  __int64 v57; // x0
  int v58; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_418B4F8 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v5);
    sub_B2C35C(&LastUsedDeckNumberManager_TypeInfo, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&OptionManager_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_16663/*"battle_num_"*/, v9);
    sub_B2C35C(&StringLiteral_19631/*"img_slider_on"*/, v10);
    sub_B2C35C(&StringLiteral_16145/*"_glow"*/, v11);
    sub_B2C35C(&StringLiteral_16665/*"battle_num_slash_glow"*/, v12);
    sub_B2C35C(&StringLiteral_21431/*"party_txt_"*/, v13);
    sub_B2C35C(&StringLiteral_16659/*"battle_bg"*/, v14);
    sub_B2C35C(&StringLiteral_19630/*"img_slider_off"*/, v15);
    sub_B2C35C(&StringLiteral_16664/*"battle_num_slash"*/, v16);
    byte_418B4F8 = 1;
  }
  v58 = 0;
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
          goto LABEL_90;
        if ( (unsigned int)v20 >= pageSpriteList->max_length )
        {
          v57 = sub_B2C460(gameObject);
          sub_B2C400(v57, 0LL);
        }
        gameObject = pageSpriteList->m_Items[v20];
        if ( !gameObject )
          goto LABEL_90;
        if ( index == (_DWORD)v20 )
          v22 = &StringLiteral_19631/*"img_slider_on"*/;
        else
          v22 = &StringLiteral_19630/*"img_slider_off"*/;
        UISprite__set_spriteName(gameObject, (System_String_o *)*v22, 0LL);
      }
      while ( (int)++v20 < this->fields.pageMax );
    }
    v23 = index + 1;
    v58 = index + 1;
    gameObject = (UISprite_o *)System_Int32__ToString((int32_t)&v58, 0LL);
    indexSprite = this->fields.indexSprite;
    if ( this->fields.menuKind == 9 )
    {
      if ( !indexSprite )
        goto LABEL_90;
      gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)this->fields.indexSprite,
                                   0LL);
      if ( !gameObject )
        goto LABEL_90;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      GameObjectExtensions__SetLocalPositionY(this->fields.indexBaseObject, 260.0, 0LL);
      gameObject = (UISprite_o *)this->fields.indexBaseObject;
      if ( !gameObject )
        goto LABEL_90;
      Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetPartyOrganizationImage(Component_srcLineSprite, (System_String_o *)StringLiteral_16659/*"battle_bg"*/, 0LL);
      AtlasManager__SetPartyOrganizationImage(
        this->fields.waveNumSlashSprite,
        (System_String_o *)StringLiteral_16664/*"battle_num_slash"*/,
        0LL);
      AtlasManager__SetPartyOrganizationImage(
        this->fields.waveNumSlashGlowSprite,
        (System_String_o *)StringLiteral_16665/*"battle_num_slash_glow"*/,
        0LL);
      if ( this->fields.pageMax >= 10 )
      {
        gameObject = this->fields.waveMaxNumTensPlaceSprite;
        if ( !gameObject )
          goto LABEL_90;
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = this->fields.waveMaxNumTensPlaceGlowSprite;
        if ( !gameObject )
          goto LABEL_90;
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        waveMaxNumTensPlaceSprite = this->fields.waveMaxNumTensPlaceSprite;
        v58 = this->fields.pageMax / 10;
        v29 = System_Int32__ToString((int32_t)&v58, 0LL);
        v30 = System_String__Concat_44305532((System_String_o *)StringLiteral_16663/*"battle_num_"*/, v29, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetPartyOrganizationImage(waveMaxNumTensPlaceSprite, v30, 0LL);
        waveMaxNumTensPlaceGlowSprite = this->fields.waveMaxNumTensPlaceGlowSprite;
        v58 = this->fields.pageMax / 10;
        v32 = System_Int32__ToString((int32_t)&v58, 0LL);
        v33 = System_String__Concat_44307816(
                (System_String_o *)StringLiteral_16663/*"battle_num_"*/,
                v32,
                (System_String_o *)StringLiteral_16145/*"_glow"*/,
                0LL);
        AtlasManager__SetPartyOrganizationImage(waveMaxNumTensPlaceGlowSprite, v33, 0LL);
        gameObject = this->fields.waveMaxNumTensPlaceSprite;
        if ( !gameObject )
          goto LABEL_90;
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))gameObject->klass->vtable._33_MakePixelPerfect.method)(
          gameObject,
          gameObject->klass->vtable._34_get_minWidth.methodPtr);
        gameObject = this->fields.waveMaxNumTensPlaceGlowSprite;
        if ( !gameObject )
          goto LABEL_90;
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))gameObject->klass->vtable._33_MakePixelPerfect.method)(
          gameObject,
          gameObject->klass->vtable._34_get_minWidth.methodPtr);
        waveNumObject = this->fields.waveNumObject;
        if ( v23 >= 10 )
        {
          GameObjectExtensions__SetLocalPositionX(waveNumObject, 7.0, 0LL);
          gameObject = this->fields.waveNumTensPlaceSprite;
          if ( !gameObject )
            goto LABEL_90;
          gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_90;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          gameObject = this->fields.waveNumTensPlaceGlowSprite;
          if ( !gameObject )
            goto LABEL_90;
          gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_90;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          waveNumTensPlaceSprite = this->fields.waveNumTensPlaceSprite;
          v58 = v23 / 0xAu;
          v37 = System_Int32__ToString((int32_t)&v58, 0LL);
          v38 = System_String__Concat_44305532((System_String_o *)StringLiteral_16663/*"battle_num_"*/, v37, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetPartyOrganizationImage(waveNumTensPlaceSprite, v38, 0LL);
          waveNumTensPlaceGlowSprite = this->fields.waveNumTensPlaceGlowSprite;
          v58 = v23 / 0xAu;
          v40 = System_Int32__ToString((int32_t)&v58, 0LL);
          v41 = System_String__Concat_44307816(
                  (System_String_o *)StringLiteral_16663/*"battle_num_"*/,
                  v40,
                  (System_String_o *)StringLiteral_16145/*"_glow"*/,
                  0LL);
          AtlasManager__SetPartyOrganizationImage(waveNumTensPlaceGlowSprite, v41, 0LL);
          gameObject = this->fields.waveNumTensPlaceSprite;
          if ( !gameObject )
            goto LABEL_90;
          ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))gameObject->klass->vtable._33_MakePixelPerfect.method)(
            gameObject,
            gameObject->klass->vtable._34_get_minWidth.methodPtr);
          gameObject = this->fields.waveNumTensPlaceGlowSprite;
          if ( !gameObject )
            goto LABEL_90;
          gameObject = (UISprite_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))gameObject->klass->vtable._33_MakePixelPerfect.method)(
                                       gameObject,
                                       gameObject->klass->vtable._34_get_minWidth.methodPtr);
          if ( !Component_srcLineSprite )
            goto LABEL_90;
          v35 = 322;
        }
        else
        {
          GameObjectExtensions__SetLocalPositionX(waveNumObject, 1.0, 0LL);
          gameObject = this->fields.waveNumTensPlaceSprite;
          if ( !gameObject )
            goto LABEL_90;
          gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_90;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          gameObject = this->fields.waveNumTensPlaceGlowSprite;
          if ( !gameObject )
            goto LABEL_90;
          gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_90;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          if ( !Component_srcLineSprite )
            goto LABEL_90;
          v35 = 308;
        }
        UIWidget__set_width((UIWidget_o *)Component_srcLineSprite, v35, 0LL);
      }
      else
      {
        GameObjectExtensions__SetLocalPositionX(this->fields.waveNumObject, 7.0, 0LL);
        gameObject = this->fields.waveNumTensPlaceSprite;
        if ( !gameObject )
          goto LABEL_90;
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        gameObject = this->fields.waveNumTensPlaceGlowSprite;
        if ( !gameObject )
          goto LABEL_90;
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        gameObject = this->fields.waveMaxNumTensPlaceSprite;
        if ( !gameObject )
          goto LABEL_90;
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        gameObject = this->fields.waveMaxNumTensPlaceGlowSprite;
        if ( !gameObject )
          goto LABEL_90;
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_90;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        if ( !Component_srcLineSprite )
          goto LABEL_90;
        UIWidget__set_width((UIWidget_o *)Component_srcLineSprite, 296, 0LL);
        gameObject = this->fields.waveMaxNumOnesPlaceSprite;
        if ( !gameObject )
          goto LABEL_90;
        v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionX(v26, 67.0, 0LL);
        gameObject = this->fields.waveMaxNumOnesPlaceGlowSprite;
        if ( !gameObject )
          goto LABEL_90;
        v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionX(v27, 67.0, 0LL);
      }
      waveNumOnesPlaceSprite = this->fields.waveNumOnesPlaceSprite;
      v58 = v23 % 10;
      v43 = System_Int32__ToString((int32_t)&v58, 0LL);
      v44 = System_String__Concat_44305532((System_String_o *)StringLiteral_16663/*"battle_num_"*/, v43, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetPartyOrganizationImage(waveNumOnesPlaceSprite, v44, 0LL);
      waveNumOnesPlaceGlowSprite = this->fields.waveNumOnesPlaceGlowSprite;
      v58 = v23 % 10;
      v46 = System_Int32__ToString((int32_t)&v58, 0LL);
      v47 = System_String__Concat_44307816(
              (System_String_o *)StringLiteral_16663/*"battle_num_"*/,
              v46,
              (System_String_o *)StringLiteral_16145/*"_glow"*/,
              0LL);
      AtlasManager__SetPartyOrganizationImage(waveNumOnesPlaceGlowSprite, v47, 0LL);
      waveMaxNumOnesPlaceSprite = this->fields.waveMaxNumOnesPlaceSprite;
      v58 = this->fields.pageMax % 10;
      v49 = System_Int32__ToString((int32_t)&v58, 0LL);
      v50 = System_String__Concat_44305532((System_String_o *)StringLiteral_16663/*"battle_num_"*/, v49, 0LL);
      AtlasManager__SetPartyOrganizationImage(waveMaxNumOnesPlaceSprite, v50, 0LL);
      waveMaxNumOnesPlaceGlowSprite = this->fields.waveMaxNumOnesPlaceGlowSprite;
      v58 = this->fields.pageMax % 10;
      v52 = System_Int32__ToString((int32_t)&v58, 0LL);
      v53 = System_String__Concat_44307816(
              (System_String_o *)StringLiteral_16663/*"battle_num_"*/,
              v52,
              (System_String_o *)StringLiteral_16145/*"_glow"*/,
              0LL);
      AtlasManager__SetPartyOrganizationImage(waveMaxNumOnesPlaceGlowSprite, v53, 0LL);
      gameObject = this->fields.waveNumOnesPlaceSprite;
      if ( !gameObject )
        goto LABEL_90;
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))gameObject->klass->vtable._33_MakePixelPerfect.method)(
        gameObject,
        gameObject->klass->vtable._34_get_minWidth.methodPtr);
      gameObject = this->fields.waveNumOnesPlaceGlowSprite;
      if ( !gameObject )
        goto LABEL_90;
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))gameObject->klass->vtable._33_MakePixelPerfect.method)(
        gameObject,
        gameObject->klass->vtable._34_get_minWidth.methodPtr);
      gameObject = this->fields.waveMaxNumOnesPlaceSprite;
      if ( !gameObject )
        goto LABEL_90;
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))gameObject->klass->vtable._33_MakePixelPerfect.method)(
        gameObject,
        gameObject->klass->vtable._34_get_minWidth.methodPtr);
      gameObject = this->fields.waveMaxNumOnesPlaceGlowSprite;
      if ( !gameObject )
        goto LABEL_90;
    }
    else
    {
      gameObject = (UISprite_o *)System_String__Concat_44305532(
                                   (System_String_o *)StringLiteral_21431/*"party_txt_"*/,
                                   (System_String_o *)gameObject,
                                   0LL);
      if ( !indexSprite )
        goto LABEL_90;
      UISprite__set_spriteName(indexSprite, (System_String_o *)gameObject, 0LL);
      gameObject = this->fields.indexSprite;
      if ( !gameObject )
        goto LABEL_90;
    }
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))gameObject->klass->vtable._33_MakePixelPerfect.method)(
      gameObject,
      gameObject->klass->vtable._34_get_minWidth.methodPtr);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_85;
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
        goto LABEL_90;
      questId = questRestrictionInfo->fields.questId;
      if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      }
      v56 = LastUsedDeckNumberManager__GetDeckNumber(questId, 0LL) - 1 == index;
    }
    else
    {
LABEL_85:
      v56 = 0;
    }
    gameObject = this->fields.lastTimeUsedSprite;
    if ( !gameObject
      || (gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
    {
LABEL_90:
      sub_B2C434(gameObject, v19);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v56, 0LL);
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
  if ( (byte_418B4F7 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&max);
    this = (PartyListViewIndicator_o *)sub_B2C35C(&StringLiteral_19630/*"img_slider_off"*/, v5);
    byte_418B4F7 = 1;
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
          v18 = sub_B2C460(this);
          sub_B2C400(v18, 0LL);
        }
        this = (PartyListViewIndicator_o *)v9->m_Items[v10];
        if ( this )
        {
          v12 = (int)v10 >= v4->fields.pageMax ? 0LL : (System_String_o *)StringLiteral_19630/*"img_slider_off"*/;
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
    sub_B2C434(this, *(_QWORD *)&max);
  }
}


void __fastcall PartyListViewIndicator__SetScrollEnabled(
        PartyListViewIndicator_o *this,
        bool enabled,
        const MethodInfo *method)
{
  this->fields.isScrollEnabled = enabled;
}