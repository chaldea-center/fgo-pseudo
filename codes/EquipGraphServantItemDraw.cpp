void EquipGraphServantItemDraw___ctor(EquipGraphServantItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphServantItemDraw__SetInput(EquipGraphServantItemDraw_o *this, bool isInput, const MethodInfo *method)
{
  UnityEngine_Component_o *decideButton; // x0

  if ( (byte_4C27682 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_4C27682 = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)decideButton, isInput, 0),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0) )
  {
    sub_1C2D6EC(decideButton, isInput);
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))decideButton->klass[1]._1.nestedTypes)(
    decideButton,
    0,
    1,
    decideButton->klass[1]._1.implementedInterfaces);
}


void EquipGraphServantItemDraw__SetItem(
        EquipGraphServantItemDraw_o *this,
        EquipGraphServantItem_o *item,
        int32_t addBaseHp,
        int32_t addBaseAtk,
        const MethodInfo *method)
{
  EquipGraphServantItem_o *v7; // x19
  EquipGraphServantItemDraw_o *v8; // x20
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  UnityEngine_Object_o *servantCostIconLabel; // x23
  int32_t cost; // w2
  struct ServantEntity_o *equipServantEntity; // x8
  int32_t v13; // w4
  UserServantEntity_o *equipUserSvtEntity; // x0
  __int64 v15; // x2
  SkillInfo_o *v16; // x8
  UILabel_o *skillExplanationLabel; // x23
  System_String_o *MargeExplanation; // x0
  struct UserServantEntity_o *v19; // x8
  UISprite_o *equipSprite; // x23
  __int64 v21; // x24
  __int64 v22; // x25
  int32_t v23; // w24
  UnityEngine_Object_o *equipLimitCountSprite; // x23
  struct ServantEntity_o *v25; // x8
  int limitMax; // w24
  UnityEngine_Object_o *v27; // x23
  const MethodInfo *v28; // x1
  EquipGraphServantItemDraw_o *v29; // x23
  UnityEngine_Object_o *costIconLabel; // x23
  struct ServantEntity_o *servantEntity; // x8
  struct ServantEntity_o *v32; // x9
  UnityEngine_Object_o *differCostIconLabel; // x23
  struct ServantEntity_o *v34; // x8
  int32_t v35; // w2
  UnityEngine_Object_o *hpIconLabel; // x23
  const MethodInfo *v37; // x1
  UIIconLabel_o *v38; // x23
  int32_t hp; // w24
  struct UserServantEntity_o *v40; // x8
  int32_t v41; // w4
  UnityEngine_Object_o *differHpIconLabel; // x22
  struct UserServantEntity_o *v43; // x8
  int32_t v44; // w2
  UnityEngine_Object_o *attackIconLabel; // x22
  const MethodInfo *v46; // x1
  UIIconLabel_o *v47; // x22
  int32_t atk; // w23
  struct UserServantEntity_o *v49; // x8
  int32_t v50; // w4
  UnityEngine_Object_o *differAttackIconLabel; // x21
  struct UserServantEntity_o *v52; // x8
  int32_t v53; // w2
  UnityEngine_Object_o *equipButton; // x21
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  v7 = item;
  v8 = this;
  if ( (byte_4C27681 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (EquipGraphServantItemDraw_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C27681 = 1;
  }
  skillInfoList = 0;
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
    0,
    baseItem->fields.questRestrictionInfo,
    v7->fields.iconLabelInfo,
    0,
    v7->fields._IsTempGrand_k__BackingField,
    0,
    0,
    0);
  servantCostIconLabel = (UnityEngine_Object_o *)v8->fields.servantCostIconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(servantCostIconLabel, 0, 0) )
  {
    if ( v7->fields.servantEntity )
      cost = v7->fields.cost;
    else
      cost = 0;
    equipServantEntity = v7->fields.equipServantEntity;
    this = (EquipGraphServantItemDraw_o *)v8->fields.servantCostIconLabel;
    if ( equipServantEntity && !v7->fields.equipType )
    {
      v13 = equipServantEntity->fields.cost;
      if ( !this )
        goto LABEL_116;
    }
    else
    {
      v13 = 0;
      if ( !this )
        goto LABEL_116;
    }
    UIIconLabel__Set_40889008((UIIconLabel_o *)this, 7, cost, 0, v13, 0, 0, 0, 0, 0, 0);
  }
  equipUserSvtEntity = v7->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
  {
    UserServantEntity__getEquipSkillInfo(equipUserSvtEntity, &skillInfoList, 1, 0);
    if ( !skillInfoList )
      goto LABEL_116;
    if ( !LODWORD(skillInfoList->max_length) )
      sub_1C2D6F4(this, item, v15);
    v16 = skillInfoList->m_Items[0];
    if ( !v16 )
      goto LABEL_116;
    this = (EquipGraphServantItemDraw_o *)v8->fields.skillNameLabel;
    if ( !this )
      goto LABEL_116;
    UILabel__set_text((UILabel_o *)this, v16->fields.title, 0);
    skillExplanationLabel = v8->fields.skillExplanationLabel;
    MargeExplanation = SkillInfo__GetMargeExplanation(skillInfoList, 1, 0);
    WrapControlText__textAdjust(skillExplanationLabel, MargeExplanation, 22, 0, 0);
    this = (EquipGraphServantItemDraw_o *)v8->fields.noneEquipSprite;
    if ( !this )
      goto LABEL_116;
    this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_116;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (EquipGraphServantItemDraw_o *)v8->fields.equipSprite;
    if ( !this )
      goto LABEL_116;
    this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_116;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v19 = v7->fields.equipUserSvtEntity;
    if ( !v19 )
      goto LABEL_116;
    equipSprite = (UISprite_o *)v8->fields.equipSprite;
    v22 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
    v21 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v56.fields.currentCryptoKey = v22;
    *(_QWORD *)&v56.fields.fakeValue = v21;
    v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v56, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEquipFace(equipSprite, v23, 0, 0);
    equipLimitCountSprite = (UnityEngine_Object_o *)v8->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
    {
      v25 = v7->fields.equipServantEntity;
      if ( v25 )
        limitMax = v25->fields.limitMax;
      else
        limitMax = 0;
      this = (EquipGraphServantItemDraw_o *)v8->fields.equipLimitCountSprite;
      if ( this )
      {
        this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        v29 = this;
        if ( limitMax < 1 )
        {
          item = 0;
          if ( !this )
            goto LABEL_116;
        }
        else
        {
          this = (EquipGraphServantItemDraw_o *)EquipGraphServantItem__get_EquipLimitCount(v7, v28);
          item = (EquipGraphServantItem_o *)((int)this >= limitMax);
          if ( !v29 )
            goto LABEL_116;
        }
        this = v29;
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
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
    this = (EquipGraphServantItemDraw_o *)v8->fields.skillExplanationLabel;
    if ( !this )
      goto LABEL_116;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
    this = (EquipGraphServantItemDraw_o *)v8->fields.noneEquipSprite;
    if ( !this )
      goto LABEL_116;
    this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_116;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (EquipGraphServantItemDraw_o *)v8->fields.equipSprite;
    if ( !this )
      goto LABEL_116;
    this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_116;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    v27 = (UnityEngine_Object_o *)v8->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v27, 0, 0) )
    {
      this = (EquipGraphServantItemDraw_o *)v8->fields.equipLimitCountSprite;
      if ( this )
      {
        this = (EquipGraphServantItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( this )
        {
          LOBYTE(item) = 0;
LABEL_56:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)item, 0);
          goto LABEL_57;
        }
      }
LABEL_116:
      sub_1C2D6EC(this, item);
    }
  }
LABEL_57:
  costIconLabel = (UnityEngine_Object_o *)v8->fields.costIconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(costIconLabel, 0, 0) )
  {
    servantEntity = v7->fields.servantEntity;
    if ( servantEntity )
      LODWORD(servantEntity) = v7->fields.cost;
    v32 = v7->fields.equipServantEntity;
    this = (EquipGraphServantItemDraw_o *)v8->fields.costIconLabel;
    if ( v32 )
    {
      if ( !v7->fields.equipType )
      {
        LODWORD(v32) = v32->fields.cost;
        if ( !this )
          goto LABEL_116;
        goto LABEL_66;
      }
      LODWORD(v32) = 0;
    }
    if ( !this )
      goto LABEL_116;
LABEL_66:
    UIIconLabel__Set_40889008((UIIconLabel_o *)this, 7, (_DWORD)v32 + (_DWORD)servantEntity, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  differCostIconLabel = (UnityEngine_Object_o *)v8->fields.differCostIconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(differCostIconLabel, 0, 0) )
  {
    v34 = v7->fields.equipServantEntity;
    this = (EquipGraphServantItemDraw_o *)v8->fields.differCostIconLabel;
    if ( v34 && !v7->fields.equipType )
    {
      v35 = v34->fields.cost;
      if ( !this )
        goto LABEL_116;
    }
    else
    {
      v35 = 0;
      if ( !this )
        goto LABEL_116;
    }
    UIIconLabel__Set_40889008((UIIconLabel_o *)this, 43, v35, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  hpIconLabel = (UnityEngine_Object_o *)v8->fields.hpIconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpIconLabel, 0, 0) )
  {
    v38 = v8->fields.hpIconLabel;
    hp = v7->fields.hp;
    this = (EquipGraphServantItemDraw_o *)EquipGraphServantItem__get_HpBoostValue(v7, v37);
    v40 = v7->fields.equipUserSvtEntity;
    if ( v40 )
    {
      v41 = v40->fields.hp;
      if ( !v38 )
        goto LABEL_116;
    }
    else
    {
      v41 = 0;
      if ( !v38 )
        goto LABEL_116;
    }
    UIIconLabel__Set_40889008(v38, 3, hp + addBaseHp, (int32_t)this, v41, 0, 0, 0, 0, 0, 0);
  }
  differHpIconLabel = (UnityEngine_Object_o *)v8->fields.differHpIconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(differHpIconLabel, 0, 0) )
  {
    v43 = v7->fields.equipUserSvtEntity;
    this = (EquipGraphServantItemDraw_o *)v8->fields.differHpIconLabel;
    if ( v43 )
    {
      v44 = v43->fields.hp;
      if ( !this )
        goto LABEL_116;
    }
    else
    {
      v44 = 0;
      if ( !this )
        goto LABEL_116;
    }
    UIIconLabel__Set_40889008((UIIconLabel_o *)this, 41, v44, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  attackIconLabel = (UnityEngine_Object_o *)v8->fields.attackIconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(attackIconLabel, 0, 0) )
  {
    v47 = v8->fields.attackIconLabel;
    atk = v7->fields.atk;
    this = (EquipGraphServantItemDraw_o *)EquipGraphServantItem__get_AtkBoostValue(v7, v46);
    v49 = v7->fields.equipUserSvtEntity;
    if ( v49 )
    {
      v50 = v49->fields.atk;
      if ( !v47 )
        goto LABEL_116;
    }
    else
    {
      v50 = 0;
      if ( !v47 )
        goto LABEL_116;
    }
    UIIconLabel__Set_40889008(v47, 5, atk + addBaseAtk, (int32_t)this, v50, 0, 0, 0, 0, 0, 0);
  }
  differAttackIconLabel = (UnityEngine_Object_o *)v8->fields.differAttackIconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(differAttackIconLabel, 0, 0) )
  {
    v52 = v7->fields.equipUserSvtEntity;
    this = (EquipGraphServantItemDraw_o *)v8->fields.differAttackIconLabel;
    if ( v52 )
    {
      v53 = v52->fields.atk;
      if ( !this )
        goto LABEL_116;
    }
    else
    {
      v53 = 0;
      if ( !this )
        goto LABEL_116;
    }
    UIIconLabel__Set_40889008((UIIconLabel_o *)this, 42, v53, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  equipButton = (UnityEngine_Object_o *)v8->fields.equipButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipButton, 0, 0) )
  {
    this = (EquipGraphServantItemDraw_o *)v8->fields.equipButton;
    if ( !this )
      goto LABEL_116;
    UICommonButton__SetColliderEnable((UICommonButton_o *)this, v7->fields.equipUserSvtEntity != 0, 1, 0);
  }
}