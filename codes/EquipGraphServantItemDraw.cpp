void __fastcall EquipGraphServantItemDraw___ctor(EquipGraphServantItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphServantItemDraw__SetInput(
        EquipGraphServantItemDraw_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Component_o *decideButton; // x0

  if ( (byte_4B45053 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_Collider___, isInput);
    byte_4B45053 = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)decideButton, isInput, 0LL),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0LL) )
  {
    sub_1BDBAD4(decideButton, isInput);
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))decideButton->klass[1]._1.implementedInterfaces)(
    decideButton,
    0LL,
    1LL,
    decideButton->klass[1]._1.interfaceOffsets);
}


void __fastcall EquipGraphServantItemDraw__SetItem(
        EquipGraphServantItemDraw_o *this,
        EquipGraphServantItem_o *item,
        int32_t addBaseHp,
        int32_t addBaseAtk,
        const MethodInfo *method)
{
  EquipGraphServantItem_o *v7; // x19
  EquipGraphServantItemDraw_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  UnityEngine_Object_o *servantCostIconLabel; // x23
  int32_t cost; // w2
  struct ServantEntity_o *equipServantEntity; // x8
  int32_t v16; // w4
  UserServantEntity_o *equipUserSvtEntity; // x0
  __int64 v18; // x2
  SkillInfo_o *v19; // x8
  UILabel_o *skillExplanationLabel; // x23
  System_String_o *MargeExplanation; // x0
  struct UserServantEntity_o *v22; // x8
  UISprite_o *equipSprite; // x23
  __int64 v24; // x24
  __int64 v25; // x25
  int32_t v26; // w24
  UnityEngine_Object_o *equipLimitCountSprite; // x23
  struct ServantEntity_o *v28; // x8
  int limitMax; // w24
  UnityEngine_Object_o *v30; // x23
  const MethodInfo *v31; // x1
  EquipGraphServantItemDraw_o *v32; // x23
  UnityEngine_Object_o *costIconLabel; // x23
  struct ServantEntity_o *servantEntity; // x8
  struct ServantEntity_o *v35; // x9
  UnityEngine_Object_o *differCostIconLabel; // x23
  struct ServantEntity_o *v37; // x8
  int32_t v38; // w2
  UnityEngine_Object_o *hpIconLabel; // x23
  const MethodInfo *v40; // x1
  UIIconLabel_o *v41; // x23
  int32_t hp; // w24
  struct UserServantEntity_o *v43; // x8
  int32_t v44; // w4
  UnityEngine_Object_o *differHpIconLabel; // x22
  struct UserServantEntity_o *v46; // x8
  int32_t v47; // w2
  UnityEngine_Object_o *attackIconLabel; // x22
  const MethodInfo *v49; // x1
  UIIconLabel_o *v50; // x22
  int32_t atk; // w23
  struct UserServantEntity_o *v52; // x8
  int32_t v53; // w4
  UnityEngine_Object_o *differAttackIconLabel; // x21
  struct UserServantEntity_o *v55; // x8
  int32_t v56; // w2
  UnityEngine_Object_o *equipButton; // x21
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  v7 = item;
  v8 = this;
  if ( (byte_4B45052 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, item);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v9);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    this = (EquipGraphServantItemDraw_o *)sub_1BDB878(&StringLiteral_1/*""*/, v11);
    byte_4B45052 = 1;
  }
  skillInfoList = 0LL;
  if ( !v7 )
    goto LABEL_116;
  baseItem = v7->fields.baseItem;
  if ( !baseItem )
    goto LABEL_116;
  this = (EquipGraphServantItemDraw_o *)v8->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_116;
  ServantFaceIconComponent__Set(
    (ServantFaceIconComponent_o *)this,
    v7->fields.userServantEntity,
    0LL,
    baseItem->fields.questRestrictionInfo,
    v7->fields.iconLabelInfo,
    0LL,
    v7->fields._IsTempGrand_k__BackingField,
    0,
    0,
    0LL);
  servantCostIconLabel = (UnityEngine_Object_o *)v8->fields.servantCostIconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(servantCostIconLabel, 0LL, 0LL) )
  {
    if ( v7->fields.servantEntity )
      cost = v7->fields.cost;
    else
      cost = 0;
    equipServantEntity = v7->fields.equipServantEntity;
    this = (EquipGraphServantItemDraw_o *)v8->fields.servantCostIconLabel;
    if ( equipServantEntity && !v7->fields.equipType )
    {
      v16 = equipServantEntity->fields.cost;
      if ( !this )
        goto LABEL_116;
    }
    else
    {
      v16 = 0;
      if ( !this )
        goto LABEL_116;
    }
    UIIconLabel__Set_40036752((UIIconLabel_o *)this, 7, cost, 0, v16, 0LL, 0, 0, 0, 0, 0LL);
  }
  equipUserSvtEntity = v7->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
  {
    UserServantEntity__getEquipSkillInfo(equipUserSvtEntity, &skillInfoList, 1, 0LL);
    if ( !skillInfoList )
      goto LABEL_116;
    if ( !skillInfoList->max_length )
      sub_1BDBADC(this, item, v18);
    v19 = skillInfoList->m_Items[0];
    if ( !v19 )
      goto LABEL_116;
    this = (EquipGraphServantItemDraw_o *)v8->fields.skillNameLabel;
    if ( !this )
      goto LABEL_116;
    UILabel__set_text((UILabel_o *)this, v19->fields.title, 0LL);
    skillExplanationLabel = v8->fields.skillExplanationLabel;
    MargeExplanation = SkillInfo__GetMargeExplanation(skillInfoList, 1, 0LL);
    WrapControlText__textAdjust(skillExplanationLabel, MargeExplanation, 22, 0, 0LL);
    this = (EquipGraphServantItemDraw_o *)v8->fields.noneEquipSprite;
    if ( !this )
      goto LABEL_116;
    this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_116;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (EquipGraphServantItemDraw_o *)v8->fields.equipSprite;
    if ( !this )
      goto LABEL_116;
    this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_116;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v22 = v7->fields.equipUserSvtEntity;
    if ( !v22 )
      goto LABEL_116;
    equipSprite = (UISprite_o *)v8->fields.equipSprite;
    v25 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
    v24 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v59.fields.currentCryptoKey = v25;
    *(_QWORD *)&v59.fields.fakeValue = v24;
    v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v59, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEquipFace(equipSprite, v26, 0LL, 0LL);
    equipLimitCountSprite = (UnityEngine_Object_o *)v8->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
    {
      v28 = v7->fields.equipServantEntity;
      if ( v28 )
        limitMax = v28->fields.limitMax;
      else
        limitMax = 0;
      this = (EquipGraphServantItemDraw_o *)v8->fields.equipLimitCountSprite;
      if ( this )
      {
        this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
        v32 = this;
        if ( limitMax < 1 )
        {
          item = 0LL;
          if ( !this )
            goto LABEL_116;
        }
        else
        {
          this = (EquipGraphServantItemDraw_o *)EquipGraphServantItem__get_EquipLimitCount(v7, v31);
          item = (EquipGraphServantItem_o *)((int)this >= limitMax);
          if ( !v32 )
            goto LABEL_116;
        }
        this = v32;
        goto LABEL_56;
      }
      goto LABEL_116;
    }
  }
  else
  {
    this = (EquipGraphServantItemDraw_o *)v8->fields.skillNameLabel;
    if ( !this )
      goto LABEL_116;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = (EquipGraphServantItemDraw_o *)v8->fields.skillExplanationLabel;
    if ( !this )
      goto LABEL_116;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = (EquipGraphServantItemDraw_o *)v8->fields.noneEquipSprite;
    if ( !this )
      goto LABEL_116;
    this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_116;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (EquipGraphServantItemDraw_o *)v8->fields.equipSprite;
    if ( !this )
      goto LABEL_116;
    this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_116;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    v30 = (UnityEngine_Object_o *)v8->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v30, 0LL, 0LL) )
    {
      this = (EquipGraphServantItemDraw_o *)v8->fields.equipLimitCountSprite;
      if ( this )
      {
        this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
        if ( this )
        {
          LOBYTE(item) = 0;
LABEL_56:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)item, 0LL);
          goto LABEL_57;
        }
      }
LABEL_116:
      sub_1BDBAD4(this, item);
    }
  }
LABEL_57:
  costIconLabel = (UnityEngine_Object_o *)v8->fields.costIconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(costIconLabel, 0LL, 0LL) )
  {
    servantEntity = v7->fields.servantEntity;
    if ( servantEntity )
      LODWORD(servantEntity) = v7->fields.cost;
    v35 = v7->fields.equipServantEntity;
    this = (EquipGraphServantItemDraw_o *)v8->fields.costIconLabel;
    if ( v35 )
    {
      if ( !v7->fields.equipType )
      {
        LODWORD(v35) = v35->fields.cost;
        if ( !this )
          goto LABEL_116;
        goto LABEL_66;
      }
      LODWORD(v35) = 0;
    }
    if ( !this )
      goto LABEL_116;
LABEL_66:
    UIIconLabel__Set_40036752((UIIconLabel_o *)this, 7, (_DWORD)v35 + (_DWORD)servantEntity, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
  }
  differCostIconLabel = (UnityEngine_Object_o *)v8->fields.differCostIconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(differCostIconLabel, 0LL, 0LL) )
  {
    v37 = v7->fields.equipServantEntity;
    this = (EquipGraphServantItemDraw_o *)v8->fields.differCostIconLabel;
    if ( v37 && !v7->fields.equipType )
    {
      v38 = v37->fields.cost;
      if ( !this )
        goto LABEL_116;
    }
    else
    {
      v38 = 0;
      if ( !this )
        goto LABEL_116;
    }
    UIIconLabel__Set_40036752((UIIconLabel_o *)this, 43, v38, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
  }
  hpIconLabel = (UnityEngine_Object_o *)v8->fields.hpIconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpIconLabel, 0LL, 0LL) )
  {
    v41 = v8->fields.hpIconLabel;
    hp = v7->fields.hp;
    this = (EquipGraphServantItemDraw_o *)EquipGraphServantItem__get_HpBoostValue(v7, v40);
    v43 = v7->fields.equipUserSvtEntity;
    if ( v43 )
    {
      v44 = v43->fields.hp;
      if ( !v41 )
        goto LABEL_116;
    }
    else
    {
      v44 = 0;
      if ( !v41 )
        goto LABEL_116;
    }
    UIIconLabel__Set_40036752(v41, 3, hp + addBaseHp, (int32_t)this, v44, 0LL, 0, 0, 0, 0, 0LL);
  }
  differHpIconLabel = (UnityEngine_Object_o *)v8->fields.differHpIconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(differHpIconLabel, 0LL, 0LL) )
  {
    v46 = v7->fields.equipUserSvtEntity;
    this = (EquipGraphServantItemDraw_o *)v8->fields.differHpIconLabel;
    if ( v46 )
    {
      v47 = v46->fields.hp;
      if ( !this )
        goto LABEL_116;
    }
    else
    {
      v47 = 0;
      if ( !this )
        goto LABEL_116;
    }
    UIIconLabel__Set_40036752((UIIconLabel_o *)this, 41, v47, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
  }
  attackIconLabel = (UnityEngine_Object_o *)v8->fields.attackIconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(attackIconLabel, 0LL, 0LL) )
  {
    v50 = v8->fields.attackIconLabel;
    atk = v7->fields.atk;
    this = (EquipGraphServantItemDraw_o *)EquipGraphServantItem__get_AtkBoostValue(v7, v49);
    v52 = v7->fields.equipUserSvtEntity;
    if ( v52 )
    {
      v53 = v52->fields.atk;
      if ( !v50 )
        goto LABEL_116;
    }
    else
    {
      v53 = 0;
      if ( !v50 )
        goto LABEL_116;
    }
    UIIconLabel__Set_40036752(v50, 5, atk + addBaseAtk, (int32_t)this, v53, 0LL, 0, 0, 0, 0, 0LL);
  }
  differAttackIconLabel = (UnityEngine_Object_o *)v8->fields.differAttackIconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(differAttackIconLabel, 0LL, 0LL) )
  {
    v55 = v7->fields.equipUserSvtEntity;
    this = (EquipGraphServantItemDraw_o *)v8->fields.differAttackIconLabel;
    if ( v55 )
    {
      v56 = v55->fields.atk;
      if ( !this )
        goto LABEL_116;
    }
    else
    {
      v56 = 0;
      if ( !this )
        goto LABEL_116;
    }
    UIIconLabel__Set_40036752((UIIconLabel_o *)this, 42, v56, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
  }
  equipButton = (UnityEngine_Object_o *)v8->fields.equipButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipButton, 0LL, 0LL) )
  {
    this = (EquipGraphServantItemDraw_o *)v8->fields.equipButton;
    if ( !this )
      goto LABEL_116;
    UICommonButton__SetColliderEnable((UICommonButton_o *)this, v7->fields.equipUserSvtEntity != 0LL, 1, 0LL);
  }
}