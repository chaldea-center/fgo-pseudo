void __fastcall PartyListViewIndicator___ctor(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BalanceConfig_c *v8; // x0
  struct System_Int32_array *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  float v16; // s4
  float v17; // s5
  float v18; // s6
  float v19; // s4
  float v20; // s5
  float v21; // s6
  struct UnityEngine_Color_o v22; // [xsp+0h] [xbp-30h] BYREF
  struct UnityEngine_Color_o v23; // [xsp+10h] [xbp-20h] BYREF
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42ECE5A & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v5, v6, v7);
    byte_42ECE5A = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v9 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, (unsigned int)(v8->static_fields->DeckMax + 1));
  this->fields.useLimitEquip = v9;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.useLimitEquip,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v24.fields.r = 1.0;
  v24.fields.g = 1.0;
  v24.fields.b = 1.0;
  v23 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_41567816(v24, v16, v17, v18, (const MethodInfo *)&v23);
  this->fields.ICON_NORMAL_COLOR = v23;
  v25.fields.r = 0.4;
  v22 = (struct UnityEngine_Color_o)0LL;
  v25.fields.g = 0.4;
  v25.fields.b = 0.4;
  UnityEngine_Color___ctor_41567816(v25, v19, v20, v21, (const MethodInfo *)&v22);
  this->fields.ICON_MASK_COLOR = v22;
  this->fields.isScrollEnabled = 1;
  ListViewIndicator___ctor((ListViewIndicator_o *)this, 0LL);
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
    sub_B5D69C(limitMasterFormationButton, method);
  }
}


void __fastcall PartyListViewIndicator__DispFriendPointUpBonus(
        PartyListViewIndicator_o *this,
        int32_t bonusVal,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *friendPointUpBonusSprite; // x21
  UnityEngine_Object_o *friendPointUpBonusLabel; // x21
  __int64 v8; // x1
  UILabel_o *v9; // x20
  UnityEngine_Component_o *gameObject; // x0
  bool v11; // w1
  unsigned int v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42ECE59 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, bonusVal, (_DWORD)method, v3);
    byte_42ECE59 = 1;
  }
  v12 = 0;
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
            v11 = 0;
            goto LABEL_19;
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
LABEL_19:
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v11, 0LL);
              return;
            }
          }
        }
      }
      sub_B5D69C(gameObject, v8);
    }
  }
}


void __fastcall PartyListViewIndicator__DrawEventLimitEquip(
        PartyListViewIndicator_o *this,
        PartyListViewItem_o *partyItem,
        bool isChng,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  int v31; // w1
  char v32; // w2
  __int64 v33; // x3
  int v34; // w1
  char v35; // w2
  __int64 v36; // x3
  int v37; // w1
  char v38; // w2
  __int64 v39; // x3
  const MethodInfo *v40; // x1
  __int64 Instance; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v43; // x8
  int32_t index; // w24
  char v45; // w21
  UISprite_o *masterEquipBackSprite; // x22
  System_String_o *v47; // x22
  __int64 v48; // x22
  unsigned __int64 v49; // x25
  struct System_Int32_array *useLimitEquip; // x28
  UISprite_o *limitEquipFixSprite; // x19
  struct System_Int32_array *v52; // x8
  struct System_Int32_array *v53; // x8
  int32_t v54; // w21
  WebViewObject_o *Component_WebViewObject; // x20
  __int64 v56; // x0
  EventEquipSkillReleaseEntity_o *outEnt; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42ECE52 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)partyItem, isChng, method);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&char___TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UISprite___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_18732/*"event_emblem_frame"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_19576/*"icon_equip_fixation"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_8479/*"LIMIT_EQUIP_SETTING"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_17225/*"btn_skill_off"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_18731/*"event_emblem_dim"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_17226/*"btn_skill_on"*/, v37, v38, v39);
    byte_42ECE52 = 1;
  }
  outEnt = 0LL;
  if ( !PartyListViewIndicator__IsEventOnlyEquip(this, (const MethodInfo *)partyItem) )
    goto LABEL_50;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
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
    PartyListViewIndicator__ClearEventLimitEquip(this, v40);
    return;
  }
  Instance = (__int64)outEnt;
  if ( !outEnt )
    goto LABEL_75;
  Instance = EventEquipSkillReleaseEntity__isForceOverwrite(outEnt, 0LL);
  if ( !partyItem )
    goto LABEL_75;
  v43 = partyItem->fields.questRestrictionInfo;
  index = partyItem->fields.index;
  v45 = Instance;
  if ( v43 )
    LOBYTE(v43) = v43->fields.eventDeckNum > 0;
  if ( ((unsigned __int8)v43 & 1) != 0 || (unsigned int)(partyItem->fields.menuKind - 1) <= 6 )
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
    sub_B5D69C(Instance, v40);
  ItemIconComponent__SetEquipItem((ItemIconComponent_o *)Instance, outEnt->fields.overwriteEquipIconId, 0LL);
  masterEquipBackSprite = this->fields.masterEquipBackSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(masterEquipBackSprite, (System_String_o *)StringLiteral_18731/*"event_emblem_dim"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.masterEquipFrameSprite, (System_String_o *)StringLiteral_18732/*"event_emblem_frame"*/, 0LL);
  if ( !this->fields.isChkSave )
  {
    if ( (v45 & 1) == 0 )
    {
      Instance = (__int64)UnityEngine_PlayerPrefs__GetString_35648228((System_String_o *)StringLiteral_8479/*"LIMIT_EQUIP_SETTING"*/, 0LL);
      if ( !Instance )
        goto LABEL_75;
      v47 = (System_String_o *)Instance;
      if ( *(int *)(Instance + 16) >= 1 )
      {
        Instance = sub_B5D5DC(char___TypeInfo, 1LL);
        if ( !Instance )
          goto LABEL_75;
        if ( !*(_DWORD *)(Instance + 24) )
          goto LABEL_76;
        *(_WORD *)(Instance + 32) = 44;
        Instance = (__int64)System_String__Split(v47, (System_Char_array *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_75;
        v48 = Instance;
        if ( *(int *)(Instance + 24) >= 1 )
        {
          v49 = 0LL;
          do
          {
            Instance = (__int64)BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = (__int64)BalanceConfig_TypeInfo;
            }
            if ( (__int64)v49 > *(int *)(*(_QWORD *)(Instance + 184) + 148LL) )
              break;
            if ( v49 >= *(unsigned int *)(v48 + 24) )
              goto LABEL_76;
            useLimitEquip = this->fields.useLimitEquip;
            Instance = System_Int32__Parse(*(System_String_o **)(v48 + 32 + 8 * v49), 0LL);
            if ( !useLimitEquip )
              goto LABEL_75;
            if ( v49 >= useLimitEquip->max_length )
              goto LABEL_76;
            useLimitEquip->m_Items[++v49] = Instance;
          }
          while ( (__int64)v49 < *(int *)(v48 + 24) );
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
  if ( (v45 & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    if ( isChng )
    {
      v52 = this->fields.useLimitEquip;
      if ( !v52 )
        goto LABEL_75;
      if ( index >= v52->max_length )
        goto LABEL_76;
      v52->m_Items[index + 1] = v52->m_Items[index + 1] == 0;
    }
    v53 = this->fields.useLimitEquip;
    if ( !v53 )
      goto LABEL_75;
    if ( index < v53->max_length )
    {
      Instance = (__int64)this->fields.limitMasterFormationButton;
      if ( Instance )
      {
        v54 = v53->m_Items[index + 1];
        Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)Instance,
                                    (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( v54 )
        {
          if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetEventUI((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_17226/*"btn_skill_on"*/, 0LL);
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
          AtlasManager__SetEventUI((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_17225/*"btn_skill_off"*/, 0LL);
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
    v56 = sub_B5D6C8(Instance);
    sub_B5D668(v56, 0LL);
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
  AtlasManager__SetEventUI(limitEquipFixSprite, (System_String_o *)StringLiteral_19576/*"icon_equip_fixation"*/, 0LL);
}


void __fastcall PartyListViewIndicator__DrawPartyInfo(
        PartyListViewIndicator_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  UnityEngine_GameObject_o *soloBaseObject; // x0
  UISprite_o *v52; // x21
  bool v53; // w1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  EventPartyMargeUpValInfo_o *v66; // x1
  const MethodInfo *v67; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestRestrictionInfo_o *v69; // x0
  int32_t servantNumMax; // w1
  UISprite_o *v71; // x21
  struct QuestRestrictionInfo_o *v72; // x8
  BalanceConfig_c *v73; // x0
  struct QuestRestrictionInfo_o *v74; // x8
  struct QuestRestrictionInfo_o *v75; // x8
  int32_t maxCost; // w21
  QuestRestrictionInfo_o *v77; // x0
  int32_t v78; // w22
  System_String_o *v79; // x21
  UILabel_o *maxCostLabel; // x22
  System_String_o *v81; // x0
  UILabel_o *splitCostLabel; // x22
  System_String_o *v83; // x0
  int32_t cost; // w8
  UILabel_o *selectCostLabel; // x22
  System_String_o *v86; // x0
  System_String_o *v87; // x0
  UserServantEntity_o *Entity; // x0
  const MethodInfo *v89; // x3
  struct EventUpValSetupInfo_o *setupInfo; // x8
  struct System_Int32_array *eventIdList; // x8
  __int64 v92; // x9
  int32_t v93; // w21
  ServantEntity_array *SvtEntityList; // x22
  const MethodInfo *v95; // x1
  System_String_array *SvtNameList; // x23
  const MethodInfo *v97; // x1
  System_Boolean_array *IsFollowerList; // x24
  EventPartyMargeUpValInfo_o *v99; // x25
  struct EventPartyMargeUpValInfo_o **p_eventMargeUpValInfo; // x21
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  const MethodInfo *v107; // x3
  EventUpValInfo_array *v108; // x8
  unsigned __int64 v109; // x20
  unsigned __int64 max_length; // x9
  EventPartyMargeUpValInfo_o *v111; // x22
  UILabel_o *selectNameLabel; // x21
  System_String_o *v113; // x0
  __int64 v114; // x0
  EventUpValInfo_array *v115; // [xsp+0h] [xbp-70h] BYREF
  int32_t genderImageId; // [xsp+Ch] [xbp-64h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *equipName; // [xsp+18h] [xbp-58h] BYREF
  int32_t maxLv; // [xsp+24h] [xbp-4Ch] BYREF
  int32_t condUsrLv[2]; // [xsp+28h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+38h] [xbp-38h] BYREF
  int32_t v122; // [xsp+3Ch] [xbp-34h] BYREF

  if ( (byte_42ECE51 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)partyItem, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEquipMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&EventPartyMargeUpValInfo_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v18, v19, v20);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_10462/*"PARTY_ORGANIZATION_NAME"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_22485/*"solo_bg"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_10432/*"PARTY_ORGANIZATION_COST_SPLIT"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_10430/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_10431/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_22514/*"specialparty_bg"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_10429/*"PARTY_ORGANIZATION_COST_COLOR"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_1/*""*/, v48, v49, v50);
    byte_42ECE51 = 1;
  }
  v122 = 0;
  eventId = 0;
  *(_QWORD *)condUsrLv = 0LL;
  maxLv = 0;
  detail = 0LL;
  equipName = 0LL;
  genderImageId = 0;
  v115 = 0LL;
  if ( partyItem )
  {
    switch ( this->fields.menuKind )
    {
      case 1:
      case 3:
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_117;
        soloBaseObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       soloBaseObject,
                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !this->fields.soloBaseObject )
          goto LABEL_117;
        v52 = (UISprite_o *)soloBaseObject;
        UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0LL);
        if ( !v52 )
          goto LABEL_117;
        UISprite__set_spriteName(v52, (System_String_o *)StringLiteral_22485/*"solo_bg"*/, 0LL);
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v52->klass->vtable._33_MakePixelPerfect.method)(
          v52,
          v52->klass->vtable._34_get_minWidth.methodPtr);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_117;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.indexBaseObject;
        if ( !soloBaseObject )
          goto LABEL_117;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.selectNameBaseObject;
        if ( !soloBaseObject )
          goto LABEL_117;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.costBaseObject;
        if ( !soloBaseObject )
          goto LABEL_117;
        v53 = 0;
        goto LABEL_72;
      case 2:
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_117;
        soloBaseObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       soloBaseObject,
                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !this->fields.soloBaseObject )
          goto LABEL_117;
        v71 = (UISprite_o *)soloBaseObject;
        UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0LL);
        if ( !v71 )
          goto LABEL_117;
        UISprite__set_spriteName(v71, (System_String_o *)StringLiteral_22514/*"specialparty_bg"*/, 0LL);
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v71->klass->vtable._33_MakePixelPerfect.method)(
          v71,
          v71->klass->vtable._34_get_minWidth.methodPtr);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_117;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        goto LABEL_67;
      case 4:
      case 5:
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_117;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_117;
        UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
        questRestrictionInfo = this->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_67;
        goto LABEL_35;
      case 6:
      case 7:
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_117;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_117;
        UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
        v69 = this->fields.questRestrictionInfo;
        if ( !v69 )
          goto LABEL_67;
        soloBaseObject = (UnityEngine_GameObject_o *)QuestRestrictionInfo__IsServantNum(v69, 0LL);
        if ( ((unsigned __int8)soloBaseObject & 1) != 0 )
        {
          questRestrictionInfo = this->fields.questRestrictionInfo;
          if ( !questRestrictionInfo )
            goto LABEL_117;
LABEL_35:
          servantNumMax = questRestrictionInfo->fields.servantNumMax;
        }
        else
        {
          soloBaseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !soloBaseObject )
            goto LABEL_117;
          soloBaseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)soloBaseObject,
                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
          v74 = this->fields.questRestrictionInfo;
          if ( !v74 )
            goto LABEL_117;
          if ( !soloBaseObject )
            goto LABEL_117;
          soloBaseObject = (UnityEngine_GameObject_o *)NpcFollowerMaster__GetQuestFollowerList(
                                                         (NpcFollowerMaster_o *)soloBaseObject,
                                                         v74->fields.questId,
                                                         v74->fields.questPhase,
                                                         0LL);
          v75 = this->fields.questRestrictionInfo;
          if ( !v75 || !soloBaseObject )
            goto LABEL_117;
          servantNumMax = v75->fields.myServantNumMax + LODWORD(soloBaseObject[1].klass);
        }
        goto LABEL_66;
      case 9:
        soloBaseObject = this->fields.soloBaseObject;
        if ( !soloBaseObject )
          goto LABEL_117;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.organizationNumObject;
        if ( !soloBaseObject )
          goto LABEL_117;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.indexBaseObject;
        if ( !soloBaseObject )
          goto LABEL_117;
        UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
        soloBaseObject = this->fields.selectNameBaseObject;
        if ( !soloBaseObject )
          goto LABEL_117;
        UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        soloBaseObject = this->fields.costBaseObject;
        if ( !soloBaseObject )
          goto LABEL_117;
        UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
        soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEventPointIndicator;
        if ( !soloBaseObject )
          goto LABEL_117;
        PartyEventPointIndicator__SetTrendDisp(
          (PartyEventPointIndicator_o *)soloBaseObject,
          partyItem->fields.waveBattleEnemyClassIds,
          0LL);
        soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipButton;
        if ( !soloBaseObject )
          goto LABEL_117;
        UICommonButton__SetEnable(
          (UICommonButton_o *)soloBaseObject,
          !partyItem->fields._IsWaveBattleRestart_k__BackingField,
          0LL);
        soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partySwapButton;
        if ( !soloBaseObject )
          goto LABEL_117;
        UICommonButton__SetEnable(
          (UICommonButton_o *)soloBaseObject,
          !partyItem->fields._IsClearedWave_k__BackingField,
          0LL);
        soloBaseObject = (UnityEngine_GameObject_o *)this->fields.autoOrganizationButton;
        if ( !soloBaseObject )
          goto LABEL_117;
        UICommonButton__SetEnable(
          (UICommonButton_o *)soloBaseObject,
          !partyItem->fields._IsClearedWave_k__BackingField,
          0LL);
        soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEditButton;
        if ( !soloBaseObject )
          goto LABEL_117;
        UICommonButton__SetEnable(
          (UICommonButton_o *)soloBaseObject,
          !partyItem->fields._IsClearedWave_k__BackingField,
          0LL);
        goto LABEL_73;
      default:
        v72 = this->fields.questRestrictionInfo;
        if ( v72 && v72->fields.eventDeckNum >= 1 )
        {
          soloBaseObject = this->fields.soloBaseObject;
          if ( !soloBaseObject )
            goto LABEL_117;
          UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
          soloBaseObject = this->fields.organizationNumObject;
          if ( !soloBaseObject )
            goto LABEL_117;
          UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
          v73 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v73 = BalanceConfig_TypeInfo;
          }
          servantNumMax = v73->static_fields->DeckMemberMax;
LABEL_66:
          PartyListViewIndicator__SetEventDeckPartyName(this, servantNumMax, v67);
LABEL_67:
          soloBaseObject = this->fields.indexBaseObject;
          if ( !soloBaseObject
            || (UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL),
                (soloBaseObject = this->fields.selectNameBaseObject) == 0LL) )
          {
LABEL_117:
            sub_B5D69C(soloBaseObject, partyItem);
          }
          UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
        }
        else
        {
          soloBaseObject = this->fields.soloBaseObject;
          if ( !soloBaseObject )
            goto LABEL_117;
          UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
          soloBaseObject = this->fields.organizationNumObject;
          if ( !soloBaseObject )
            goto LABEL_117;
          UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
          soloBaseObject = this->fields.indexBaseObject;
          if ( !soloBaseObject )
            goto LABEL_117;
          UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
          soloBaseObject = this->fields.selectNameBaseObject;
          if ( !soloBaseObject )
            goto LABEL_117;
          UnityEngine_GameObject__SetActive(soloBaseObject, 1, 0LL);
          selectNameLabel = this->fields.selectNameLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v113 = LocalizationManager__Get((System_String_o *)StringLiteral_10462/*"PARTY_ORGANIZATION_NAME"*/, 0LL);
          soloBaseObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                         v113,
                                                         (Il2CppObject *)partyItem->fields.deckName,
                                                         0LL);
          if ( !selectNameLabel )
            goto LABEL_117;
          UILabel__set_text(selectNameLabel, (System_String_o *)soloBaseObject, 0LL);
        }
        soloBaseObject = this->fields.costBaseObject;
        if ( soloBaseObject )
        {
          v53 = 1;
LABEL_72:
          UnityEngine_GameObject__SetActive(soloBaseObject, v53, 0LL);
LABEL_73:
          maxCost = partyItem->fields.maxCost;
          v122 = maxCost;
          v77 = this->fields.questRestrictionInfo;
          v78 = v77 ? QuestRestrictionInfo__GetTotalCostRestriction(v77, 0LL) : 0;
          if ( v78 && maxCost > v78 )
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v79 = LocalizationManager__Get((System_String_o *)StringLiteral_10431/*"PARTY_ORGANIZATION_COST_RESTRICTION_COLOR"*/, 0LL);
            v122 = v78;
          }
          else
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v79 = LocalizationManager__Get((System_String_o *)StringLiteral_10429/*"PARTY_ORGANIZATION_COST_COLOR"*/, 0LL);
          }
          maxCostLabel = this->fields.maxCostLabel;
          v81 = System_Int32__ToString((int32_t)&v122, 0LL);
          soloBaseObject = (UnityEngine_GameObject_o *)System_String__Concat_44577788(v79, v81, 0LL);
          if ( maxCostLabel )
          {
            UILabel__set_text(maxCostLabel, (System_String_o *)soloBaseObject, 0LL);
            splitCostLabel = this->fields.splitCostLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v83 = LocalizationManager__Get((System_String_o *)StringLiteral_10432/*"PARTY_ORGANIZATION_COST_SPLIT"*/, 0LL);
            soloBaseObject = (UnityEngine_GameObject_o *)System_String__Concat_44577788(v79, v83, 0LL);
            if ( splitCostLabel )
            {
              UILabel__set_text(splitCostLabel, (System_String_o *)soloBaseObject, 0LL);
              cost = partyItem->fields.cost;
              selectCostLabel = this->fields.selectCostLabel;
              if ( cost > v122 )
              {
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v86 = LocalizationManager__Get((System_String_o *)StringLiteral_10430/*"PARTY_ORGANIZATION_COST_OVER_COLOR"*/, 0LL);
                cost = partyItem->fields.cost;
                v79 = v86;
              }
              condUsrLv[1] = cost;
              v87 = System_Int32__ToString((int32_t)&condUsrLv[1], 0LL);
              soloBaseObject = (UnityEngine_GameObject_o *)System_String__Concat_44577788(v79, v87, 0LL);
              if ( selectCostLabel )
              {
                UILabel__set_text(selectCostLabel, (System_String_o *)soloBaseObject, 0LL);
                soloBaseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( soloBaseObject )
                {
                  soloBaseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)soloBaseObject,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEquipMaster___);
                  if ( soloBaseObject )
                  {
                    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)soloBaseObject,
                               partyItem->fields.userEquipId,
                               (const MethodInfo_23FB038 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
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
                        goto LABEL_117;
                      ItemIconComponent__SetEquipItem((ItemIconComponent_o *)soloBaseObject, genderImageId, 0LL);
                      soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipIcon2;
                      if ( !soloBaseObject )
                        goto LABEL_117;
                      ItemIconComponent__SetEquipItem((ItemIconComponent_o *)soloBaseObject, genderImageId, 0LL);
                    }
                    PartyListViewIndicator__DrawEventLimitEquip(this, partyItem, 0, v89);
                    setupInfo = this->fields.setupInfo;
                    if ( !setupInfo )
                      goto LABEL_108;
                    eventIdList = setupInfo->fields.eventIdList;
                    if ( !eventIdList )
                      goto LABEL_117;
                    v92 = *(_QWORD *)&eventIdList->max_length;
                    if ( v92 )
                    {
                      if ( !(_DWORD)v92 )
                      {
LABEL_130:
                        v114 = sub_B5D6C8(soloBaseObject);
                        sub_B5D668(v114, 0LL);
                      }
                      v93 = eventIdList->m_Items[1];
                    }
                    else
                    {
LABEL_108:
                      v93 = 0;
                    }
                    eventId = v93;
                    SvtEntityList = PartyListViewItem__GetSvtEntityList(partyItem, (const MethodInfo *)partyItem);
                    SvtNameList = PartyListViewItem__GetSvtNameList(partyItem, v95);
                    IsFollowerList = PartyListViewItem__GetIsFollowerList(partyItem, v97);
                    v99 = (EventPartyMargeUpValInfo_o *)sub_B5D694(EventPartyMargeUpValInfo_TypeInfo);
                    EventPartyMargeUpValInfo___ctor(v99, v93, SvtEntityList, SvtNameList, IsFollowerList, 0LL);
                    p_eventMargeUpValInfo = &this->fields.eventMargeUpValInfo;
                    this->fields.eventMargeUpValInfo = v99;
                    sub_B5D560(
                      (BattleServantConfConponent_o *)&this->fields.eventMargeUpValInfo,
                      (System_Int32_array **)v99,
                      v101,
                      v102,
                      v103,
                      v104,
                      v105,
                      v106);
                    soloBaseObject = (UnityEngine_GameObject_o *)PartyListViewItem__GetEventUpVal(
                                                                   partyItem,
                                                                   &eventId,
                                                                   &v115,
                                                                   v107);
                    v108 = v115;
                    if ( v115 )
                    {
                      v109 = 0LL;
                      while ( 1 )
                      {
                        max_length = v108->max_length;
                        if ( (__int64)v109 >= (int)max_length )
                          break;
                        if ( v109 >= max_length )
                          goto LABEL_130;
                        soloBaseObject = (UnityEngine_GameObject_o *)v108->m_Items[v109];
                        if ( soloBaseObject )
                        {
                          v111 = *p_eventMargeUpValInfo;
                          soloBaseObject = (UnityEngine_GameObject_o *)EventUpValInfo__GetDropItemList(
                                                                         (EventUpValInfo_o *)soloBaseObject,
                                                                         v109,
                                                                         0LL);
                          if ( !v111 )
                            goto LABEL_117;
                          EventPartyMargeUpValInfo__Add(v111, (EventDropItemUpValInfo_array *)soloBaseObject, 0LL);
                          v108 = v115;
                        }
                        ++v109;
                        if ( !v108 )
                          goto LABEL_117;
                      }
                      soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEventPointIndicator;
                      if ( soloBaseObject )
                      {
                        v66 = *p_eventMargeUpValInfo;
                        goto LABEL_120;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_117;
    }
  }
  soloBaseObject = this->fields.soloBaseObject;
  if ( !soloBaseObject )
    goto LABEL_117;
  UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
  soloBaseObject = this->fields.organizationNumObject;
  if ( !soloBaseObject )
    goto LABEL_117;
  UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
  soloBaseObject = this->fields.indexBaseObject;
  if ( !soloBaseObject )
    goto LABEL_117;
  UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
  soloBaseObject = this->fields.selectNameBaseObject;
  if ( !soloBaseObject )
    goto LABEL_117;
  UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
  soloBaseObject = this->fields.costBaseObject;
  if ( !soloBaseObject )
    goto LABEL_117;
  UnityEngine_GameObject__SetActive(soloBaseObject, 0, 0LL);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.selectNameLabel;
  if ( !soloBaseObject )
    goto LABEL_117;
  UILabel__set_text((UILabel_o *)soloBaseObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.maxCostLabel;
  if ( !soloBaseObject )
    goto LABEL_117;
  UILabel__set_text((UILabel_o *)soloBaseObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.splitCostLabel;
  if ( !soloBaseObject )
    goto LABEL_117;
  UILabel__set_text((UILabel_o *)soloBaseObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.selectCostLabel;
  if ( !soloBaseObject )
    goto LABEL_117;
  UILabel__set_text((UILabel_o *)soloBaseObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipIcon1;
  if ( !soloBaseObject )
    goto LABEL_117;
  ItemIconComponent__Clear((ItemIconComponent_o *)soloBaseObject, 0LL);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.masterEquipIcon2;
  if ( !soloBaseObject )
    goto LABEL_117;
  ItemIconComponent__Clear((ItemIconComponent_o *)soloBaseObject, 0LL);
  this->fields.questRestrictionInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v54, v55, v56, v57, v58, v59);
  this->fields.eventMargeUpValInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.eventMargeUpValInfo, 0LL, v60, v61, v62, v63, v64, v65);
  soloBaseObject = (UnityEngine_GameObject_o *)this->fields.partyEventPointIndicator;
  if ( !soloBaseObject )
    goto LABEL_117;
  v66 = 0LL;
LABEL_120:
  PartyEventPointIndicator__SetTotalDropItemList((PartyEventPointIndicator_o *)soloBaseObject, v66, 0LL);
}


bool __fastcall PartyListViewIndicator__IsEventOnlyEquip(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42ECE58 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42ECE58 = 1;
  }
  entity = 0LL;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (questRestrictionInfo = this->fields.questRestrictionInfo) == 0LL)
    || !Instance )
  {
LABEL_12:
    sub_B5D69C(Instance, v12);
  }
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          questRestrictionInfo->fields.eventId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v15; // x8
  int32_t index; // w21
  BalanceConfig_c *v17; // x0
  struct System_Int32_array *useLimitEquip; // x8
  __int64 v20; // x0
  EventEquipSkillReleaseEntity_o *outEnt; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42ECE57 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)partyItem, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42ECE57 = 1;
  }
  outEnt = 0LL;
  if ( !PartyListViewIndicator__IsEventOnlyEquip(this, (const MethodInfo *)partyItem) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventEquipSkillReleaseMaster___);
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
  v15 = partyItem->fields.questRestrictionInfo;
  index = partyItem->fields.index;
  if ( v15 )
    LOBYTE(v15) = v15->fields.eventDeckNum > 0;
  if ( ((unsigned __int8)v15 & 1) != 0 || (unsigned int)(partyItem->fields.menuKind - 1) <= 6 )
  {
    v17 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v17 = BalanceConfig_TypeInfo;
    }
    index = v17->static_fields->DeckMax;
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
    sub_B5D69C(Instance, v13);
  if ( index >= useLimitEquip->max_length )
  {
    v20 = sub_B5D6C8(Instance);
    sub_B5D668(v20, 0LL);
  }
  return useLimitEquip->m_Items[index + 1] == 0;
}


void __fastcall PartyListViewIndicator__OnClickLeft(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *manager; // x20
  __int64 v9; // x1
  ListViewManager_o *v10; // x0
  int32_t pageIndex; // w8
  struct ListViewManager_o *v12; // x8

  if ( (byte_42ECE53 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42ECE53 = 1;
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
    v10 = this->fields.manager;
    if ( !v10 )
      goto LABEL_25;
    ListViewManager__BackLoopItem(v10, 0LL);
    if ( this->fields.pageIndex >= 1 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(7, 0LL);
      v10 = this->fields.manager;
      if ( v10 )
      {
        pageIndex = this->fields.pageIndex;
LABEL_23:
        ListViewManager__MoveCenterItem(v10, pageIndex - 1, 1, 0, 0.0, 0LL);
        return;
      }
      goto LABEL_25;
    }
    v12 = this->fields.manager;
    if ( !v12 )
      goto LABEL_25;
    if ( v12->fields.isLoop )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(7, 0LL);
      v10 = this->fields.manager;
      if ( v10 )
      {
        pageIndex = this->fields.pageMax;
        goto LABEL_23;
      }
LABEL_25:
      sub_B5D69C(v10, v9);
    }
  }
}


void __fastcall PartyListViewIndicator__OnClickRight(PartyListViewIndicator_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *manager; // x20
  __int64 v9; // x1
  ListViewManager_o *v10; // x0
  int32_t pageIndex; // w8
  int32_t v12; // w1
  struct ListViewManager_o *v13; // x8

  if ( (byte_42ECE54 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42ECE54 = 1;
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
    v10 = this->fields.manager;
    if ( !v10 )
      goto LABEL_26;
    ListViewManager__FowardLoopItem(v10, 0LL);
    pageIndex = this->fields.pageIndex;
    if ( (pageIndex & 0x80000000) == 0 && pageIndex < this->fields.pageMax - 1 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(7, 0LL);
      v10 = this->fields.manager;
      if ( v10 )
      {
        v12 = this->fields.pageIndex + 1;
LABEL_24:
        ListViewManager__MoveCenterItem(v10, v12, 1, 0, 0.0, 0LL);
        return;
      }
      goto LABEL_26;
    }
    v13 = this->fields.manager;
    if ( !v13 )
      goto LABEL_26;
    if ( v13->fields.isLoop )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(7, 0LL);
      v10 = this->fields.manager;
      if ( v10 )
      {
        v12 = 0;
        goto LABEL_24;
      }
LABEL_26:
      sub_B5D69C(v10, v9);
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
  if ( (byte_42ECE4E & 1) == 0 )
  {
    sub_B5D5C4(&PartyListViewItem_TypeInfo, (_DWORD)manager, (_DWORD)item, isTop);
    byte_42ECE4E = 1;
  }
  this->fields.manager = manager;
  sub_B5D560(
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
    sub_B5D69C(leftObject, v14);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  UnityEngine_GameObject_o *organizationNumObject; // x0
  int v19; // w8
  UnityEngine_GameObject_o *v20; // x19
  __int64 *v21; // x8
  UISprite_o *v22; // x21

  if ( (byte_42ECE55 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, servantNum, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_20483/*"limited_bg"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_22485/*"solo_bg"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_22590/*"startingonly_bg"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_21695/*"pair_bg"*/, v15, v16, v17);
    byte_42ECE55 = 1;
  }
  organizationNumObject = this->fields.organizationNumObject;
  if ( !organizationNumObject )
LABEL_19:
    sub_B5D69C(organizationNumObject, *(_QWORD *)&servantNum);
  organizationNumObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        organizationNumObject,
                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v19 = servantNum - 1;
  v20 = organizationNumObject;
  switch ( v19 )
  {
    case 0:
      organizationNumObject = this->fields.soloBaseObject;
      if ( !organizationNumObject )
        goto LABEL_19;
      organizationNumObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            organizationNumObject,
                                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !this->fields.soloBaseObject )
        goto LABEL_19;
      v22 = (UISprite_o *)organizationNumObject;
      UnityEngine_GameObject__SetActive(this->fields.soloBaseObject, 1, 0LL);
      organizationNumObject = this->fields.organizationNumObject;
      if ( !organizationNumObject )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive(organizationNumObject, 0, 0LL);
      if ( !v22 )
        goto LABEL_19;
      UISprite__set_spriteName(v22, (System_String_o *)StringLiteral_22485/*"solo_bg"*/, 0LL);
      organizationNumObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v22->klass->vtable._33_MakePixelPerfect.method)(
                                                            v22,
                                                            v22->klass->vtable._34_get_minWidth.methodPtr);
      if ( !v20 )
        goto LABEL_19;
      goto LABEL_18;
    case 1:
      if ( !organizationNumObject )
        goto LABEL_19;
      v21 = &StringLiteral_21695/*"pair_bg"*/;
      break;
    case 2:
      if ( !organizationNumObject )
        goto LABEL_19;
      v21 = &StringLiteral_22590/*"startingonly_bg"*/;
      break;
    default:
      if ( !organizationNumObject )
        goto LABEL_19;
      v21 = &StringLiteral_20483/*"limited_bg"*/;
      break;
  }
  UISprite__set_spriteName((UISprite_o *)organizationNumObject, (System_String_o *)*v21, 0LL);
LABEL_18:
  ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))v20->klass[2]._1.typeMetadataHandle)(
    v20,
    v20->klass[2]._1.interopData);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    (System_String_array **)questRestrictionInfo,
    (System_String_array **)classIds,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.eventMargeUpValInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.eventMargeUpValInfo, 0LL, v17, v18, v19, v20, v21, v22);
  partyEventPointIndicator = this->fields.partyEventPointIndicator;
  if ( !partyEventPointIndicator
    || (PartyEventPointIndicator__SetInfomation(partyEventPointIndicator, questRestrictionInfo, classIds, 0LL),
        (partyEventPointIndicator = this->fields.partyEventPointIndicator) == 0LL) )
  {
    sub_B5D69C(partyEventPointIndicator, v23);
  }
  PartyEventPointIndicator__SetTotalDropItemList(partyEventPointIndicator, 0LL, 0LL);
}


void __fastcall PartyListViewIndicator__SetEventLimitEquipSetting(
        PartyListViewIndicator_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_String_o *IsEventOnlyEquip; // x0
  __int64 v15; // x1
  struct System_Int32_array *useLimitEquip; // x21
  __int64 v17; // x8
  System_String_o *v18; // x20
  unsigned __int64 v19; // x22
  int v20; // w26
  Il2CppObject *v21; // x0
  __int64 v22; // x0
  int v23; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42ECE56 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_8479/*"LIMIT_EQUIP_SETTING"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_707/*","*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_1/*""*/, v11, v12, v13);
    byte_42ECE56 = 1;
  }
  IsEventOnlyEquip = (System_String_o *)PartyListViewIndicator__IsEventOnlyEquip(this, method);
  if ( ((unsigned __int8)IsEventOnlyEquip & 1) != 0 )
  {
    useLimitEquip = this->fields.useLimitEquip;
    if ( !useLimitEquip )
      goto LABEL_15;
    v17 = *(_QWORD *)&useLimitEquip->max_length;
    v18 = (System_String_o *)StringLiteral_1/*""*/;
    if ( (int)v17 >= 1 )
    {
      v19 = 0LL;
      while ( 1 )
      {
        if ( v19 >= (unsigned int)v17 )
        {
          v22 = sub_B5D6C8(IsEventOnlyEquip);
          sub_B5D668(v22, 0LL);
        }
        if ( !v18 )
          break;
        v20 = useLimitEquip->m_Items[v19 + 1];
        if ( v18->fields.m_stringLength >= 1 )
          v18 = System_String__Concat_44577788(v18, (System_String_o *)StringLiteral_707/*","*/, 0LL);
        v23 = v20;
        v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
        IsEventOnlyEquip = System_String__Concat((Il2CppObject *)v18, v21, 0LL);
        LODWORD(v17) = useLimitEquip->max_length;
        ++v19;
        v18 = IsEventOnlyEquip;
        if ( (__int64)v19 >= (int)v17 )
          goto LABEL_12;
      }
LABEL_15:
      sub_B5D69C(IsEventOnlyEquip, v15);
    }
LABEL_12:
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_8479/*"LIMIT_EQUIP_SETTING"*/, v18, 0LL);
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
    sub_B5D69C(leftObject, v4);
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


void __fastcall PartyListViewIndicator__SetPageIndex(
        PartyListViewIndicator_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  UnityEngine_Object_o *pageBaseObject; // x21
  UISprite_o *gameObject; // x0
  __int64 v47; // x1
  __int64 v48; // x21
  struct UISprite_array *pageSpriteList; // x8
  __int64 *v50; // x8
  int v51; // w24
  struct UnityEngine_GameObject_o *waveNumObject; // x8
  UISprite_o *Component_srcLineSprite; // x21
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_GameObject_o *v55; // x0
  System_String_o *v56; // x21
  struct UISprite_o *indexSprite; // x8
  UISprite_o *v58; // x22
  UISprite_o *v59; // x22
  UISprite_o *waveMaxNumTensPlaceSprite; // x22
  System_String_o *v61; // x0
  System_String_o *v62; // x23
  UISprite_o *waveMaxNumTensPlaceGlowSprite; // x22
  System_String_o *v64; // x0
  System_String_o *v65; // x0
  UnityEngine_GameObject_o *v66; // x0
  int32_t v67; // w1
  UISprite_o *waveNumTensPlaceSprite; // x22
  System_String_o *v69; // x0
  System_String_o *v70; // x23
  UISprite_o *waveNumTensPlaceGlowSprite; // x22
  System_String_o *v72; // x0
  System_String_o *v73; // x0
  UISprite_o *waveNumOnesPlaceSprite; // x21
  System_String_o *v75; // x0
  System_String_o *v76; // x22
  UISprite_o *waveNumOnesPlaceGlowSprite; // x21
  System_String_o *v78; // x0
  System_String_o *v79; // x0
  UISprite_o *waveMaxNumOnesPlaceSprite; // x21
  System_String_o *v81; // x0
  System_String_o *v82; // x0
  UISprite_o *waveMaxNumOnesPlaceGlowSprite; // x21
  System_String_o *v84; // x0
  System_String_o *v85; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w21
  bool v88; // w20
  __int64 v89; // x0
  int v90; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42ECE50 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v6, v7, v8);
    sub_B5D5C4(&LastUsedDeckNumberManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&OptionManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_16869/*"battle_num_"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_19880/*"img_slider_on"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_16338/*"_glow"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_16871/*"battle_num_slash_glow"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_21716/*"party_txt_"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_16864/*"battle_bg"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_19879/*"img_slider_off"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_16870/*"battle_num_slash"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_21715/*"party_bg"*/, v42, v43, v44);
    byte_42ECE50 = 1;
  }
  v90 = 0;
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
      v48 = 0LL;
      do
      {
        pageSpriteList = this->fields.pageSpriteList;
        if ( !pageSpriteList )
          goto LABEL_99;
        if ( (unsigned int)v48 >= pageSpriteList->max_length )
        {
          v89 = sub_B5D6C8(gameObject);
          sub_B5D668(v89, 0LL);
        }
        gameObject = pageSpriteList->m_Items[v48];
        if ( !gameObject )
          goto LABEL_99;
        if ( index == (_DWORD)v48 )
          v50 = &StringLiteral_19880/*"img_slider_on"*/;
        else
          v50 = &StringLiteral_19879/*"img_slider_off"*/;
        UISprite__set_spriteName(gameObject, (System_String_o *)*v50, 0LL);
      }
      while ( (int)++v48 < this->fields.pageMax );
    }
    v51 = index + 1;
    v90 = index + 1;
    gameObject = (UISprite_o *)System_Int32__ToString((int32_t)&v90, 0LL);
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
                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetPartyOrganizationImage(Component_srcLineSprite, (System_String_o *)StringLiteral_16864/*"battle_bg"*/, 0LL);
      AtlasManager__SetPartyOrganizationImage(
        this->fields.waveNumSlashSprite,
        (System_String_o *)StringLiteral_16870/*"battle_num_slash"*/,
        0LL);
      AtlasManager__SetPartyOrganizationImage(
        this->fields.waveNumSlashGlowSprite,
        (System_String_o *)StringLiteral_16871/*"battle_num_slash_glow"*/,
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
        v90 = this->fields.pageMax / 10;
        v61 = System_Int32__ToString((int32_t)&v90, 0LL);
        v62 = System_String__Concat_44577788((System_String_o *)StringLiteral_16869/*"battle_num_"*/, v61, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetPartyOrganizationImage(waveMaxNumTensPlaceSprite, v62, 0LL);
        waveMaxNumTensPlaceGlowSprite = this->fields.waveMaxNumTensPlaceGlowSprite;
        v90 = this->fields.pageMax / 10;
        v64 = System_Int32__ToString((int32_t)&v90, 0LL);
        v65 = System_String__Concat_44580072(
                (System_String_o *)StringLiteral_16869/*"battle_num_"*/,
                v64,
                (System_String_o *)StringLiteral_16338/*"_glow"*/,
                0LL);
        AtlasManager__SetPartyOrganizationImage(waveMaxNumTensPlaceGlowSprite, v65, 0LL);
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
        v66 = this->fields.waveNumObject;
        if ( v51 >= 10 )
        {
          GameObjectExtensions__SetLocalPositionX(v66, 7.0, 0LL);
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
          v90 = v51 / 0xAu;
          v69 = System_Int32__ToString((int32_t)&v90, 0LL);
          v70 = System_String__Concat_44577788((System_String_o *)StringLiteral_16869/*"battle_num_"*/, v69, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetPartyOrganizationImage(waveNumTensPlaceSprite, v70, 0LL);
          waveNumTensPlaceGlowSprite = this->fields.waveNumTensPlaceGlowSprite;
          v90 = v51 / 0xAu;
          v72 = System_Int32__ToString((int32_t)&v90, 0LL);
          v73 = System_String__Concat_44580072(
                  (System_String_o *)StringLiteral_16869/*"battle_num_"*/,
                  v72,
                  (System_String_o *)StringLiteral_16338/*"_glow"*/,
                  0LL);
          AtlasManager__SetPartyOrganizationImage(waveNumTensPlaceGlowSprite, v73, 0LL);
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
          v67 = 322;
        }
        else
        {
          GameObjectExtensions__SetLocalPositionX(v66, 1.0, 0LL);
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
          v67 = 308;
        }
        UIWidget__set_width((UIWidget_o *)Component_srcLineSprite, v67, 0LL);
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
        v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionX(v54, 67.0, 0LL);
        gameObject = this->fields.waveMaxNumOnesPlaceGlowSprite;
        if ( !gameObject )
          goto LABEL_99;
        v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionX(v55, 67.0, 0LL);
      }
      waveNumOnesPlaceSprite = this->fields.waveNumOnesPlaceSprite;
      v90 = v51 % 10;
      v75 = System_Int32__ToString((int32_t)&v90, 0LL);
      v76 = System_String__Concat_44577788((System_String_o *)StringLiteral_16869/*"battle_num_"*/, v75, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetPartyOrganizationImage(waveNumOnesPlaceSprite, v76, 0LL);
      waveNumOnesPlaceGlowSprite = this->fields.waveNumOnesPlaceGlowSprite;
      v90 = v51 % 10;
      v78 = System_Int32__ToString((int32_t)&v90, 0LL);
      v79 = System_String__Concat_44580072(
              (System_String_o *)StringLiteral_16869/*"battle_num_"*/,
              v78,
              (System_String_o *)StringLiteral_16338/*"_glow"*/,
              0LL);
      AtlasManager__SetPartyOrganizationImage(waveNumOnesPlaceGlowSprite, v79, 0LL);
      waveMaxNumOnesPlaceSprite = this->fields.waveMaxNumOnesPlaceSprite;
      v90 = this->fields.pageMax % 10;
      v81 = System_Int32__ToString((int32_t)&v90, 0LL);
      v82 = System_String__Concat_44577788((System_String_o *)StringLiteral_16869/*"battle_num_"*/, v81, 0LL);
      AtlasManager__SetPartyOrganizationImage(waveMaxNumOnesPlaceSprite, v82, 0LL);
      waveMaxNumOnesPlaceGlowSprite = this->fields.waveMaxNumOnesPlaceGlowSprite;
      v90 = this->fields.pageMax % 10;
      v84 = System_Int32__ToString((int32_t)&v90, 0LL);
      v85 = System_String__Concat_44580072(
              (System_String_o *)StringLiteral_16869/*"battle_num_"*/,
              v84,
              (System_String_o *)StringLiteral_16338/*"_glow"*/,
              0LL);
      AtlasManager__SetPartyOrganizationImage(waveMaxNumOnesPlaceGlowSprite, v85, 0LL);
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
      v56 = (System_String_o *)gameObject;
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
                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      indexSprite = this->fields.indexSprite;
      if ( !indexSprite )
        goto LABEL_99;
      v58 = gameObject;
      if ( !gameObject )
        goto LABEL_99;
      UISprite__set_atlas(gameObject, indexSprite->fields.mAtlas, 0LL);
      UISprite__set_spriteName(v58, (System_String_o *)StringLiteral_21715/*"party_bg"*/, 0LL);
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v58->klass->vtable._33_MakePixelPerfect.method)(
        v58,
        v58->klass->vtable._34_get_minWidth.methodPtr);
      gameObject = this->fields.indexSprite;
      if ( !gameObject )
        goto LABEL_99;
      gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_99;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v59 = this->fields.indexSprite;
      gameObject = (UISprite_o *)System_String__Concat_44577788((System_String_o *)StringLiteral_21716/*"party_txt_"*/, v56, 0LL);
      if ( !v59 )
        goto LABEL_99;
      UISprite__set_spriteName(v59, (System_String_o *)gameObject, 0LL);
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
      v88 = LastUsedDeckNumberManager__GetDeckNumber(questId, 0LL) - 1 == index;
    }
    else
    {
LABEL_94:
      v88 = 0;
    }
    gameObject = this->fields.lastTimeUsedSprite;
    if ( !gameObject
      || (gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
    {
LABEL_99:
      sub_B5D69C(gameObject, v47);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v88, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewIndicator__SetPageMax(
        PartyListViewIndicator_o *this,
        int32_t max,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PartyListViewIndicator_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct UISprite_array *pageSpriteList; // x8
  int32_t max_length; // w8
  UnityEngine_Object_o *pageBaseObject; // x20
  struct UISprite_array *v12; // x8
  __int64 v13; // x20
  int v14; // w9
  System_String_o *v15; // x1
  float v16; // s1
  float v17; // s2
  int32_t pageMax; // w19
  float v19; // s8
  float v20; // s9
  __int64 v21; // x0
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_42ECE4F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, max, (_DWORD)method, v3);
    this = (PartyListViewIndicator_o *)sub_B5D5C4(&StringLiteral_19879/*"img_slider_off"*/, v6, v7, v8);
    byte_42ECE4F = 1;
  }
  pageSpriteList = v5->fields.pageSpriteList;
  if ( !pageSpriteList )
    goto LABEL_21;
  max_length = pageSpriteList->max_length;
  v5->fields.pageIndex = -1;
  if ( max_length >= max )
    max_length = max;
  v5->fields.pageMax = max_length;
  if ( max_length <= 1 )
    v5->fields.pageMax = 0;
  pageBaseObject = (UnityEngine_Object_o *)v5->fields.pageBaseObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (PartyListViewIndicator_o *)UnityEngine_Object__op_Inequality(pageBaseObject, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v12 = v5->fields.pageSpriteList;
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
          v21 = sub_B5D6C8(this);
          sub_B5D668(v21, 0LL);
        }
        this = (PartyListViewIndicator_o *)v12->m_Items[v13];
        if ( this )
        {
          v15 = (int)v13 >= v5->fields.pageMax ? 0LL : (System_String_o *)StringLiteral_19879/*"img_slider_off"*/;
          UISprite__set_spriteName((UISprite_o *)this, v15, 0LL);
          v12 = v5->fields.pageSpriteList;
          ++v13;
          if ( v12 )
            continue;
        }
        goto LABEL_21;
      }
      this = (PartyListViewIndicator_o *)v5->fields.pageBaseObject;
      if ( this )
      {
        this = (PartyListViewIndicator_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        if ( this )
        {
          *(UnityEngine_Vector3_o *)(&v16 - 1) = UnityEngine_Transform__get_localPosition(
                                                   (UnityEngine_Transform_o *)this,
                                                   0LL);
          this = (PartyListViewIndicator_o *)v5->fields.pageBaseObject;
          if ( this )
          {
            pageMax = v5->fields.pageMax;
            v19 = v16;
            v20 = v17;
            this = (PartyListViewIndicator_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0LL);
            if ( this )
            {
              v22.fields.x = (float)(-10 * pageMax + 10);
              v22.fields.y = v19;
              v22.fields.z = v20;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v22, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_21:
    sub_B5D69C(this, *(_QWORD *)&max);
  }
}


void __fastcall PartyListViewIndicator__SetScrollEnabled(
        PartyListViewIndicator_o *this,
        bool enabled,
        const MethodInfo *method)
{
  this->fields.isScrollEnabled = enabled;
}