void __fastcall SupportServantEquipServantItemDraw___ctor(
        SupportServantEquipServantItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipServantItemDraw__SetInput(
        SupportServantEquipServantItemDraw_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Component_o *decideButton; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  struct UICommonButton_o *v7; // x0

  if ( (byte_40FD9F7 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, isInput);
    byte_40FD9F7 = 1;
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


void __fastcall SupportServantEquipServantItemDraw__SetItem(
        SupportServantEquipServantItemDraw_o *this,
        SupportServantEquipServantItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  ServantFaceIconComponent_o *v9; // x0
  UnityEngine_Object_o *hpIconLabel; // x21
  UnityEngine_Component_o *v11; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UserServantEntity_o *userServantEntity; // x8
  UIIconLabel_o *v14; // x0
  int32_t hp; // w2
  int32_t adjustHp; // w3
  ServantFaceIconComponent_o *v17; // x0
  UnityEngine_Component_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_Component_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  int32_t v23; // w4
  UnityEngine_Object_o *attackIconLabel; // x21
  UnityEngine_Component_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  struct UserServantEntity_o *v27; // x8
  UIIconLabel_o *v28; // x0
  int32_t atk; // w2
  int32_t adjustAtk; // w3
  struct UserServantEntity_o *v31; // x8
  int32_t v32; // w4
  UnityEngine_Object_o *differHpIconLabel; // x21
  UnityEngine_Component_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  struct UserServantEntity_o *v36; // x8
  UIIconLabel_o *v37; // x0
  int32_t v38; // w2
  UnityEngine_Object_o *differAttackIconLabel; // x21
  UnityEngine_Component_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  UIIconLabel_o *v42; // x0
  struct UserServantEntity_o *v43; // x8
  UserServantEntity_o **p_equipUserSvtEntity; // x25
  int32_t v45; // w2
  __int64 v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  SkillInfo_o *v49; // x8
  UILabel_o *skillNameLabel; // x0
  UILabel_o *skillExplanationLabel; // x21
  System_String_o *MargeExplanation; // x0
  UnityEngine_Component_o *noneEquipSprite; // x0
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_Component_o *equipSprite; // x0
  UnityEngine_GameObject_o *v56; // x0
  UserServantEntity_o *v57; // x8
  UISprite_o *v58; // x21
  __int64 v59; // x22
  __int64 v60; // x23
  int32_t v61; // w22
  UnityEngine_Object_o *equipLimitCountSprite; // x21
  struct ServantEntity_o *equipServantEntity; // x8
  int32_t limitMax; // w22
  UILabel_o *v65; // x0
  UILabel_o *v66; // x0
  UnityEngine_Component_o *v67; // x0
  UnityEngine_GameObject_o *v68; // x0
  UnityEngine_Component_o *v69; // x0
  UnityEngine_GameObject_o *v70; // x0
  UnityEngine_Object_o *v71; // x20
  UnityEngine_Component_o *v72; // x0
  UnityEngine_GameObject_o *v73; // x0
  bool v74; // w1
  UnityEngine_Component_o *v75; // x0
  UnityEngine_GameObject_o *v76; // x0
  const MethodInfo *v77; // x1
  UnityEngine_GameObject_o *v78; // x21
  UnityEngine_Object_o *equipButton; // x20
  UICommonButton_o *v80; // x0
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16

  if ( (byte_40FD9F6 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_1, v7);
    byte_40FD9F6 = 1;
  }
  skillInfoList = 0LL;
  if ( !item )
    goto LABEL_115;
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_115;
  if ( item->fields.userServantEntity )
  {
    ServantFaceIconComponent__FaceSpriteDisp(servantFaceIcon, 1, 0LL);
    v9 = this->fields.servantFaceIcon;
    if ( !v9 )
      goto LABEL_115;
    ServantFaceIconComponent__Set_30631556(v9, item->fields.userServantEntity, item->fields.iconLabelInfo, 0LL, 0LL);
    hpIconLabel = (UnityEngine_Object_o *)this->fields.hpIconLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(hpIconLabel, 0LL, 0LL) )
    {
      v11 = (UnityEngine_Component_o *)this->fields.hpIconLabel;
      if ( !v11 )
        goto LABEL_115;
      gameObject = UnityEngine_Component__get_gameObject(v11, 0LL);
      if ( !gameObject )
        goto LABEL_115;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      userServantEntity = item->fields.userServantEntity;
      v14 = this->fields.hpIconLabel;
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
      equipUserSvtEntity = item->fields.equipUserSvtEntity;
      if ( equipUserSvtEntity )
      {
        v23 = equipUserSvtEntity->fields.hp;
        if ( !v14 )
          goto LABEL_115;
      }
      else
      {
        v23 = 0;
        if ( !v14 )
          goto LABEL_115;
      }
      UIIconLabel__Set_40377052(v14, 3, hp, adjustHp, v23, 0LL, 0, 0, 0, 0LL);
    }
    attackIconLabel = (UnityEngine_Object_o *)this->fields.attackIconLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(attackIconLabel, 0LL, 0LL) )
    {
      v25 = (UnityEngine_Component_o *)this->fields.attackIconLabel;
      if ( !v25 )
        goto LABEL_115;
      v26 = UnityEngine_Component__get_gameObject(v25, 0LL);
      if ( !v26 )
        goto LABEL_115;
      UnityEngine_GameObject__SetActive(v26, 1, 0LL);
      v27 = item->fields.userServantEntity;
      v28 = this->fields.attackIconLabel;
      if ( v27 )
      {
        atk = v27->fields.atk;
        adjustAtk = v27->fields.adjustAtk;
      }
      else
      {
        atk = 0;
        adjustAtk = 0;
      }
      v31 = item->fields.equipUserSvtEntity;
      if ( v31 )
      {
        v32 = v31->fields.atk;
        if ( !v28 )
          goto LABEL_115;
      }
      else
      {
        v32 = 0;
        if ( !v28 )
          goto LABEL_115;
      }
      UIIconLabel__Set_40377052(v28, 5, atk, adjustAtk, v32, 0LL, 0, 0, 0, 0LL);
    }
  }
  else
  {
    ServantFaceIconComponent__FaceSpriteDisp(servantFaceIcon, 0, 0LL);
    v17 = this->fields.servantFaceIcon;
    if ( !v17 )
      goto LABEL_115;
    ServantFaceIconComponent__NoMount_Support(v17, 0LL);
    v18 = (UnityEngine_Component_o *)this->fields.hpIconLabel;
    if ( !v18 )
      goto LABEL_115;
    v19 = UnityEngine_Component__get_gameObject(v18, 0LL);
    if ( !v19 )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive(v19, 0, 0LL);
    v20 = (UnityEngine_Component_o *)this->fields.attackIconLabel;
    if ( !v20 )
      goto LABEL_115;
    v21 = UnityEngine_Component__get_gameObject(v20, 0LL);
    if ( !v21 )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive(v21, 0, 0LL);
  }
  differHpIconLabel = (UnityEngine_Object_o *)this->fields.differHpIconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(differHpIconLabel, 0LL, 0LL) )
  {
    v34 = (UnityEngine_Component_o *)this->fields.differHpIconLabel;
    if ( !v34 )
      goto LABEL_115;
    v35 = UnityEngine_Component__get_gameObject(v34, 0LL);
    if ( !v35 )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive(v35, 1, 0LL);
    v36 = item->fields.equipUserSvtEntity;
    v37 = this->fields.differHpIconLabel;
    if ( v36 )
    {
      v38 = v36->fields.hp;
      if ( !v37 )
        goto LABEL_115;
    }
    else
    {
      v38 = 0;
      if ( !v37 )
        goto LABEL_115;
    }
    UIIconLabel__Set_40377052(v37, 41, v38, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  differAttackIconLabel = (UnityEngine_Object_o *)this->fields.differAttackIconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(differAttackIconLabel, 0LL, 0LL) )
  {
    v40 = (UnityEngine_Component_o *)this->fields.differAttackIconLabel;
    if ( !v40 )
      goto LABEL_115;
    v41 = UnityEngine_Component__get_gameObject(v40, 0LL);
    if ( !v41 )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive(v41, 1, 0LL);
    v42 = this->fields.differAttackIconLabel;
    p_equipUserSvtEntity = &item->fields.equipUserSvtEntity;
    v43 = item->fields.equipUserSvtEntity;
    if ( v43 )
    {
      v45 = v43->fields.atk;
      if ( !v42 )
        goto LABEL_115;
    }
    else
    {
      v45 = 0;
      if ( !v42 )
        goto LABEL_115;
    }
    UIIconLabel__Set_40377052(v42, 42, v45, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  else
  {
    p_equipUserSvtEntity = &item->fields.equipUserSvtEntity;
  }
  if ( *p_equipUserSvtEntity )
  {
    UserServantEntity__getEquipSkillInfo(*p_equipUserSvtEntity, &skillInfoList, 1, 0LL);
    if ( !skillInfoList )
      goto LABEL_115;
    if ( !skillInfoList->max_length )
    {
      sub_B17100(v46, v47, v48);
      sub_B170A0();
    }
    v49 = skillInfoList->m_Items[0];
    if ( !v49 )
      goto LABEL_115;
    skillNameLabel = this->fields.skillNameLabel;
    if ( !skillNameLabel )
      goto LABEL_115;
    UILabel__set_text(skillNameLabel, v49->fields.title, 0LL);
    skillExplanationLabel = this->fields.skillExplanationLabel;
    MargeExplanation = SkillInfo__GetMargeExplanation(skillInfoList, 1, 0LL);
    WrapControlText__textAdjust(skillExplanationLabel, MargeExplanation, 22, 0, 0, 0LL);
    noneEquipSprite = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
    if ( !noneEquipSprite )
      goto LABEL_115;
    v54 = UnityEngine_Component__get_gameObject(noneEquipSprite, 0LL);
    if ( !v54 )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive(v54, 0, 0LL);
    equipSprite = (UnityEngine_Component_o *)this->fields.equipSprite;
    if ( !equipSprite )
      goto LABEL_115;
    v56 = UnityEngine_Component__get_gameObject(equipSprite, 0LL);
    if ( !v56 )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive(v56, 1, 0LL);
    v57 = *p_equipUserSvtEntity;
    if ( !*p_equipUserSvtEntity )
      goto LABEL_115;
    v58 = (UISprite_o *)this->fields.equipSprite;
    v60 = *(_QWORD *)&v57->fields.svtId.fields.currentCryptoKey;
    v59 = *(_QWORD *)&v57->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v82.fields.currentCryptoKey = v60;
    *(_QWORD *)&v82.fields.fakeValue = v59;
    v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v82, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEquipFace(v58, v61, 0LL);
    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
    {
      if ( *p_equipUserSvtEntity )
      {
        equipServantEntity = item->fields.equipServantEntity;
        if ( !equipServantEntity )
          goto LABEL_115;
        limitMax = equipServantEntity->fields.limitMax;
      }
      else
      {
        limitMax = 0;
      }
      v75 = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
      if ( v75 )
      {
        v76 = UnityEngine_Component__get_gameObject(v75, 0LL);
        v78 = v76;
        if ( limitMax < 1 )
        {
          v74 = 0;
          if ( !v76 )
            goto LABEL_115;
        }
        else
        {
          v74 = SupportServantEquipServantItem__get_EquipLimitCount(item, v77) >= limitMax;
          if ( !v78 )
            goto LABEL_115;
        }
        v73 = v78;
        goto LABEL_107;
      }
      goto LABEL_115;
    }
  }
  else
  {
    v65 = this->fields.skillNameLabel;
    if ( !v65 )
      goto LABEL_115;
    UILabel__set_text(v65, (System_String_o *)StringLiteral_1, 0LL);
    v66 = this->fields.skillExplanationLabel;
    if ( !v66 )
      goto LABEL_115;
    UILabel__set_text(v66, (System_String_o *)StringLiteral_1, 0LL);
    v67 = (UnityEngine_Component_o *)this->fields.noneEquipSprite;
    if ( !v67 )
      goto LABEL_115;
    v68 = UnityEngine_Component__get_gameObject(v67, 0LL);
    if ( !v68 )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive(v68, 1, 0LL);
    v69 = (UnityEngine_Component_o *)this->fields.equipSprite;
    if ( !v69 )
      goto LABEL_115;
    v70 = UnityEngine_Component__get_gameObject(v69, 0LL);
    if ( !v70 )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive(v70, 0, 0LL);
    v71 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v71, 0LL, 0LL) )
    {
      v72 = (UnityEngine_Component_o *)this->fields.equipLimitCountSprite;
      if ( v72 )
      {
        v73 = UnityEngine_Component__get_gameObject(v72, 0LL);
        if ( v73 )
        {
          v74 = 0;
LABEL_107:
          UnityEngine_GameObject__SetActive(v73, v74, 0LL);
          goto LABEL_108;
        }
      }
LABEL_115:
      sub_B170D4();
    }
  }
LABEL_108:
  equipButton = (UnityEngine_Object_o *)this->fields.equipButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(equipButton, 0LL, 0LL) )
  {
    v80 = this->fields.equipButton;
    if ( !v80 )
      goto LABEL_115;
    UICommonButton__SetColliderEnable(v80, *p_equipUserSvtEntity != 0LL, 1, 0LL);
  }
}