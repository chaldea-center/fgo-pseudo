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
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  struct UICommonButton_o *v7; // x0

  if ( (byte_40FC4E2 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, isInput);
    byte_40FC4E2 = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton
    || (Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              decideButton,
                                                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled(Component_WebViewObject, isInput, 0LL), (v7 = this->fields.decideButton) == 0LL) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v7->klass->vtable._14_SetState.method)(
    v7,
    0LL,
    1LL,
    v7->klass->vtable._15_OnPress.methodPtr);
}


void __fastcall EquipGraphServantItemDraw__SetItem(
        EquipGraphServantItemDraw_o *this,
        EquipGraphServantItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  UnityEngine_Object_o *servantCostIconLabel; // x21
  struct ServantEntity_o *servantEntity; // x8
  UIIconLabel_o *v12; // x0
  int32_t cost; // w2
  struct ServantEntity_o *equipServantEntity; // x8
  int32_t v15; // w4
  UserServantEntity_o *equipUserSvtEntity; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  SkillInfo_o *v20; // x8
  UILabel_o *skillNameLabel; // x0
  UILabel_o *skillExplanationLabel; // x21
  System_String_o *MargeExplanation; // x0
  UnityEngine_Component_o *noneEquipSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *equipSprite; // x0
  UnityEngine_GameObject_o *v27; // x0
  struct UserServantEntity_o *v28; // x8
  UISprite_o *v29; // x21
  __int64 v30; // x22
  __int64 v31; // x23
  int32_t v32; // w22
  UnityEngine_Object_o *equipLimitCountSprite; // x21
  struct ServantEntity_o *v34; // x8
  int32_t limitMax; // w22
  UILabel_o *v36; // x0
  UILabel_o *v37; // x0
  UnityEngine_Component_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_Component_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_Object_o *v42; // x21
  UnityEngine_Component_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x0
  bool v45; // w1
  UnityEngine_Component_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  const MethodInfo *v48; // x1
  UnityEngine_GameObject_o *v49; // x21
  UnityEngine_Object_o *costIconLabel; // x21
  struct ServantEntity_o *v51; // x8
  UIIconLabel_o *v52; // x0
  struct ServantEntity_o *v53; // x9
  UnityEngine_Object_o *differCostIconLabel; // x21
  struct ServantEntity_o *v55; // x8
  UIIconLabel_o *v56; // x0
  int32_t v57; // w2
  UnityEngine_Object_o *hpIconLabel; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  UIIconLabel_o *v60; // x0
  int32_t hp; // w2
  int32_t adjustHp; // w3
  struct UserServantEntity_o *v63; // x8
  int32_t v64; // w4
  UnityEngine_Object_o *differHpIconLabel; // x21
  struct UserServantEntity_o *v66; // x8
  UIIconLabel_o *v67; // x0
  int32_t v68; // w2
  UnityEngine_Object_o *attackIconLabel; // x21
  struct UserServantEntity_o *v70; // x8
  UIIconLabel_o *v71; // x0
  int32_t atk; // w2
  int32_t adjustAtk; // w3
  struct UserServantEntity_o *v74; // x8
  int32_t v75; // w4
  UnityEngine_Object_o *differAttackIconLabel; // x21
  struct UserServantEntity_o *v77; // x8
  UIIconLabel_o *v78; // x0
  int32_t v79; // w2
  UnityEngine_Object_o *equipButton; // x21
  UICommonButton_o *v81; // x0
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16

  if ( (byte_40FC4E1 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_1, v7);
    byte_40FC4E1 = 1;
  }
  skillInfoList = 0LL;
  if ( !item )
    goto LABEL_129;
  baseItem = item->fields.baseItem;
  if ( !baseItem )
    goto LABEL_129;
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_129;
  ServantFaceIconComponent__Set(
    servantFaceIcon,
    item->fields.userServantEntity,
    0LL,
    baseItem->fields.questRestrictionInfo,
    item->fields.iconLabelInfo,
    0LL,
    0LL);
  servantCostIconLabel = (UnityEngine_Object_o *)this->fields.servantCostIconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(servantCostIconLabel, 0LL, 0LL) )
  {
    servantEntity = item->fields.servantEntity;
    v12 = this->fields.servantCostIconLabel;
    if ( servantEntity )
      cost = servantEntity->fields.cost;
    else
      cost = 0;
    equipServantEntity = item->fields.equipServantEntity;
    if ( equipServantEntity )
    {
      v15 = equipServantEntity->fields.cost;
      if ( !v12 )
        goto LABEL_129;
    }
    else
    {
      v15 = 0;
      if ( !v12 )
        goto LABEL_129;
    }
    UIIconLabel__Set_40377052(v12, 7, cost, 0, v15, 0LL, 0, 0, 0, 0LL);
  }
  equipUserSvtEntity = item->fields.equipUserSvtEntity;
  if ( equipUserSvtEntity )
  {
    UserServantEntity__getEquipSkillInfo(equipUserSvtEntity, &skillInfoList, 1, 0LL);
    if ( !skillInfoList )
      goto LABEL_129;
    if ( !skillInfoList->max_length )
    {
      sub_B17100(v17, v18, v19);
      sub_B170A0();
    }
    v20 = skillInfoList->m_Items[0];
    if ( !v20 )
      goto LABEL_129;
    skillNameLabel = this->fields.skillNameLabel;
    if ( !skillNameLabel )
      goto LABEL_129;
    UILabel__set_text(skillNameLabel, v20->fields.title, 0LL);
    skillExplanationLabel = this->fields.skillExplanationLabel;
    MargeExplanation = SkillInfo__GetMargeExplanation(skillInfoList, 1, 0LL);
    WrapControlText__textAdjust(skillExplanationLabel, MargeExplanation, 22, 0, 0, 0LL);
    noneEquipSprite = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
    if ( !noneEquipSprite )
      goto LABEL_129;
    gameObject = UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL);
    if ( !gameObject )
      goto LABEL_129;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    equipSprite = (UnityEngine_Component_o *)this->fields.equipSprite;
    if ( !equipSprite )
      goto LABEL_129;
    v27 = UnityEngine_Component__get_gameObject(equipSprite, 0LL);
    if ( !v27 )
      goto LABEL_129;
    UnityEngine_GameObject__SetActive(v27, 1, 0LL);
    v28 = item->fields.equipUserSvtEntity;
    if ( !v28 )
      goto LABEL_129;
    v29 = (UISprite_o *)this->fields.equipSprite;
    v31 = *(_QWORD *)&v28->fields.svtId.fields.currentCryptoKey;
    v30 = *(_QWORD *)&v28->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v83.fields.currentCryptoKey = v31;
    *(_QWORD *)&v83.fields.fakeValue = v30;
    v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v83, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEquipFace(v29, v32, 0LL);
    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
    {
      v34 = item->fields.equipServantEntity;
      if ( v34 )
        limitMax = v34->fields.limitMax;
      else
        limitMax = 0;
      v46 = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
      if ( !v46 )
        goto LABEL_129;
      v47 = UnityEngine_Component__get_gameObject(v46, 0LL);
      v49 = v47;
      if ( limitMax < 1 )
      {
        v45 = 0;
        if ( !v47 )
          goto LABEL_129;
      }
      else
      {
        v45 = EquipGraphServantItem__get_EquipLimitCount(item, v48) >= limitMax;
        if ( !v49 )
          goto LABEL_129;
      }
      v44 = v49;
      goto LABEL_60;
    }
  }
  else
  {
    v36 = this->fields.skillNameLabel;
    if ( !v36 )
      goto LABEL_129;
    UILabel__set_text(v36, (System_String_o *)StringLiteral_1, 0LL);
    v37 = this->fields.skillExplanationLabel;
    if ( !v37 )
      goto LABEL_129;
    UILabel__set_text(v37, (System_String_o *)StringLiteral_1, 0LL);
    v38 = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
    if ( !v38 )
      goto LABEL_129;
    v39 = UnityEngine_Component__get_gameObject(v38, 0LL);
    if ( !v39 )
      goto LABEL_129;
    UnityEngine_GameObject__SetActive(v39, 1, 0LL);
    v40 = (UnityEngine_Component_o *)this->fields.equipSprite;
    if ( !v40 )
      goto LABEL_129;
    v41 = UnityEngine_Component__get_gameObject(v40, 0LL);
    if ( !v41 )
      goto LABEL_129;
    UnityEngine_GameObject__SetActive(v41, 0, 0LL);
    v42 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v42, 0LL, 0LL) )
    {
      v43 = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
      if ( !v43 )
        goto LABEL_129;
      v44 = UnityEngine_Component__get_gameObject(v43, 0LL);
      if ( !v44 )
        goto LABEL_129;
      v45 = 0;
LABEL_60:
      UnityEngine_GameObject__SetActive(v44, v45, 0LL);
    }
  }
  costIconLabel = (UnityEngine_Object_o *)this->fields.costIconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(costIconLabel, 0LL, 0LL) )
  {
    v51 = item->fields.servantEntity;
    v52 = this->fields.costIconLabel;
    if ( v51 )
      LODWORD(v51) = v51->fields.cost;
    v53 = item->fields.equipServantEntity;
    if ( v53 )
      LODWORD(v53) = v53->fields.cost;
    if ( v52 )
    {
      UIIconLabel__Set_40377052(v52, 7, (_DWORD)v53 + (_DWORD)v51, 0, 0, 0LL, 0, 0, 0, 0LL);
      goto LABEL_71;
    }
LABEL_129:
    sub_B170D4();
  }
LABEL_71:
  differCostIconLabel = (UnityEngine_Object_o *)this->fields.differCostIconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(differCostIconLabel, 0LL, 0LL) )
  {
    v55 = item->fields.equipServantEntity;
    v56 = this->fields.differCostIconLabel;
    if ( v55 )
    {
      v57 = v55->fields.cost;
      if ( !v56 )
        goto LABEL_129;
    }
    else
    {
      v57 = 0;
      if ( !v56 )
        goto LABEL_129;
    }
    UIIconLabel__Set_40377052(v56, 43, v57, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  hpIconLabel = (UnityEngine_Object_o *)this->fields.hpIconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(hpIconLabel, 0LL, 0LL) )
  {
    userServantEntity = item->fields.userServantEntity;
    v60 = this->fields.hpIconLabel;
    if ( userServantEntity )
    {
      hp = userServantEntity->fields.hp;
      adjustHp = userServantEntity->fields.adjustHp;
    }
    else
    {
      hp = 0;
      adjustHp = 0;
    }
    v63 = item->fields.equipUserSvtEntity;
    if ( v63 )
    {
      v64 = v63->fields.hp;
      if ( !v60 )
        goto LABEL_129;
    }
    else
    {
      v64 = 0;
      if ( !v60 )
        goto LABEL_129;
    }
    UIIconLabel__Set_40377052(v60, 3, hp, adjustHp, v64, 0LL, 0, 0, 0, 0LL);
  }
  differHpIconLabel = (UnityEngine_Object_o *)this->fields.differHpIconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(differHpIconLabel, 0LL, 0LL) )
  {
    v66 = item->fields.equipUserSvtEntity;
    v67 = this->fields.differHpIconLabel;
    if ( v66 )
    {
      v68 = v66->fields.hp;
      if ( !v67 )
        goto LABEL_129;
    }
    else
    {
      v68 = 0;
      if ( !v67 )
        goto LABEL_129;
    }
    UIIconLabel__Set_40377052(v67, 41, v68, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  attackIconLabel = (UnityEngine_Object_o *)this->fields.attackIconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(attackIconLabel, 0LL, 0LL) )
  {
    v70 = item->fields.userServantEntity;
    v71 = this->fields.attackIconLabel;
    if ( v70 )
    {
      atk = v70->fields.atk;
      adjustAtk = v70->fields.adjustAtk;
    }
    else
    {
      atk = 0;
      adjustAtk = 0;
    }
    v74 = item->fields.equipUserSvtEntity;
    if ( v74 )
    {
      v75 = v74->fields.atk;
      if ( !v71 )
        goto LABEL_129;
    }
    else
    {
      v75 = 0;
      if ( !v71 )
        goto LABEL_129;
    }
    UIIconLabel__Set_40377052(v71, 5, atk, adjustAtk, v75, 0LL, 0, 0, 0, 0LL);
  }
  differAttackIconLabel = (UnityEngine_Object_o *)this->fields.differAttackIconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(differAttackIconLabel, 0LL, 0LL) )
  {
    v77 = item->fields.equipUserSvtEntity;
    v78 = this->fields.differAttackIconLabel;
    if ( v77 )
    {
      v79 = v77->fields.atk;
      if ( !v78 )
        goto LABEL_129;
    }
    else
    {
      v79 = 0;
      if ( !v78 )
        goto LABEL_129;
    }
    UIIconLabel__Set_40377052(v78, 42, v79, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  equipButton = (UnityEngine_Object_o *)this->fields.equipButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(equipButton, 0LL, 0LL) )
  {
    v81 = this->fields.equipButton;
    if ( !v81 )
      goto LABEL_129;
    UICommonButton__SetColliderEnable(v81, item->fields.equipUserSvtEntity != 0LL, 1, 0LL);
  }
}