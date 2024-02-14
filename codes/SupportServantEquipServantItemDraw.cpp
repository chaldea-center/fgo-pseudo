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

  if ( (byte_4217F1A & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Collider___, isInput);
    byte_4217F1A = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                    decideButton,
                                                    (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)decideButton, isInput, 0LL),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0LL) )
  {
    sub_B0D97C(decideButton);
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))decideButton->klass[1]._1.implementedInterfaces)(
    decideButton,
    0LL,
    1LL,
    decideButton->klass[1]._1.interfaceOffsets);
}


void __fastcall SupportServantEquipServantItemDraw__SetItem(
        SupportServantEquipServantItemDraw_o *this,
        SupportServantEquipServantItem_o *item,
        const MethodInfo *method)
{
  SupportServantEquipServantItemDraw_o **v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t hp; // w2
  int32_t adjustHp; // w3
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  int32_t v13; // w4
  UnityEngine_Object_o *v14; // x21
  struct UserServantEntity_o *v15; // x8
  int32_t atk; // w2
  int32_t adjustAtk; // w3
  struct UserServantEntity_o *v18; // x8
  int32_t v19; // w4
  UnityEngine_Object_o *v20; // x21
  struct UserServantEntity_o *v21; // x8
  int32_t v22; // w2
  UnityEngine_Object_o *v23; // x21
  struct UserServantEntity_o *v24; // x8
  UserServantEntity_o **p_equipUserSvtEntity; // x25
  int32_t v26; // w2
  SkillInfo_o *v27; // x8
  UILabel_o *v28; // x21
  System_String_o *MargeExplanation; // x0
  UserServantEntity_o *v30; // x8
  UISprite_o *v31; // x21
  __int64 v32; // x22
  __int64 v33; // x23
  int32_t v34; // w22
  UnityEngine_Object_o *v35; // x21
  struct ServantEntity_o *equipServantEntity; // x8
  int limitMax; // w22
  UnityEngine_Object_o *v38; // x20
  bool v39; // w1
  const MethodInfo *v40; // x1
  SupportServantEquipServantItemDraw_o *v41; // x21
  UnityEngine_Object_o *v42; // x20
  __int64 v43; // x0
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  v4 = (SupportServantEquipServantItemDraw_o **)this;
  if ( (byte_4217F19 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, item);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (SupportServantEquipServantItemDraw_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v7);
    byte_4217F19 = 1;
  }
  skillInfoList = 0LL;
  if ( !item )
    goto LABEL_115;
  this = v4[3];
  if ( !this )
    goto LABEL_115;
  if ( item->fields.userServantEntity )
  {
    ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)this, 1, 0LL);
    this = v4[3];
    if ( !this )
      goto LABEL_115;
    ServantFaceIconComponent__Set_29552540(
      (ServantFaceIconComponent_o *)this,
      item->fields.userServantEntity,
      item->fields.iconLabelInfo,
      0LL,
      0LL);
    v8 = (UnityEngine_Object_o *)v4[9];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) )
    {
      this = v4[9];
      if ( !this )
        goto LABEL_115;
      this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_115;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      userServantEntity = item->fields.userServantEntity;
      this = v4[9];
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
        v13 = equipUserSvtEntity->fields.hp;
        if ( !this )
          goto LABEL_115;
      }
      else
      {
        v13 = 0;
        if ( !this )
          goto LABEL_115;
      }
      UIIconLabel__Set_41076120((UIIconLabel_o *)this, 3, hp, adjustHp, v13, 0LL, 0, 0, 0, 0LL);
    }
    v14 = (UnityEngine_Object_o *)v4[11];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
    {
      this = v4[11];
      if ( !this )
        goto LABEL_115;
      this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_115;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v15 = item->fields.userServantEntity;
      this = v4[11];
      if ( v15 )
      {
        atk = v15->fields.atk;
        adjustAtk = v15->fields.adjustAtk;
      }
      else
      {
        atk = 0;
        adjustAtk = 0;
      }
      v18 = item->fields.equipUserSvtEntity;
      if ( v18 )
      {
        v19 = v18->fields.atk;
        if ( !this )
          goto LABEL_115;
      }
      else
      {
        v19 = 0;
        if ( !this )
          goto LABEL_115;
      }
      UIIconLabel__Set_41076120((UIIconLabel_o *)this, 5, atk, adjustAtk, v19, 0LL, 0, 0, 0, 0LL);
    }
  }
  else
  {
    ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)this, 0, 0LL);
    this = v4[3];
    if ( !this )
      goto LABEL_115;
    ServantFaceIconComponent__NoMount_Support((ServantFaceIconComponent_o *)this, 0LL);
    this = v4[9];
    if ( !this )
      goto LABEL_115;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = v4[11];
    if ( !this )
      goto LABEL_115;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  v20 = (UnityEngine_Object_o *)v4[10];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
  {
    this = v4[10];
    if ( !this )
      goto LABEL_115;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v21 = item->fields.equipUserSvtEntity;
    this = v4[10];
    if ( v21 )
    {
      v22 = v21->fields.hp;
      if ( !this )
        goto LABEL_115;
    }
    else
    {
      v22 = 0;
      if ( !this )
        goto LABEL_115;
    }
    UIIconLabel__Set_41076120((UIIconLabel_o *)this, 41, v22, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  v23 = (UnityEngine_Object_o *)v4[12];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
  {
    this = v4[12];
    if ( !this )
      goto LABEL_115;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = v4[12];
    p_equipUserSvtEntity = &item->fields.equipUserSvtEntity;
    v24 = item->fields.equipUserSvtEntity;
    if ( v24 )
    {
      v26 = v24->fields.atk;
      if ( !this )
        goto LABEL_115;
    }
    else
    {
      v26 = 0;
      if ( !this )
        goto LABEL_115;
    }
    UIIconLabel__Set_41076120((UIIconLabel_o *)this, 42, v26, 0, 0, 0LL, 0, 0, 0, 0LL);
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
      v43 = sub_B0D9A8(this);
      sub_B0D948(v43, 0LL);
    }
    v27 = skillInfoList->m_Items[0];
    if ( !v27 )
      goto LABEL_115;
    this = v4[7];
    if ( !this )
      goto LABEL_115;
    UILabel__set_text((UILabel_o *)this, v27->fields.title, 0LL);
    v28 = (UILabel_o *)v4[8];
    MargeExplanation = SkillInfo__GetMargeExplanation(skillInfoList, 1, 0LL);
    WrapControlText__textAdjust(v28, MargeExplanation, 22, 0, 0, 0LL);
    this = v4[4];
    if ( !this )
      goto LABEL_115;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = v4[5];
    if ( !this )
      goto LABEL_115;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v30 = *p_equipUserSvtEntity;
    if ( !*p_equipUserSvtEntity )
      goto LABEL_115;
    v31 = (UISprite_o *)v4[5];
    v33 = *(_QWORD *)&v30->fields.svtId.fields.currentCryptoKey;
    v32 = *(_QWORD *)&v30->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v45.fields.currentCryptoKey = v33;
    *(_QWORD *)&v45.fields.fakeValue = v32;
    v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v45, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEquipFace(v31, v34, 0LL);
    v35 = (UnityEngine_Object_o *)v4[6];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Object__op_Inequality(v35, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
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
      this = v4[6];
      if ( this )
      {
        this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        v41 = this;
        if ( limitMax < 1 )
        {
          v39 = 0;
          if ( !this )
            goto LABEL_115;
        }
        else
        {
          this = (SupportServantEquipServantItemDraw_o *)SupportServantEquipServantItem__get_EquipLimitCount(item, v40);
          v39 = (int)this >= limitMax;
          if ( !v41 )
            goto LABEL_115;
        }
        this = v41;
        goto LABEL_107;
      }
      goto LABEL_115;
    }
  }
  else
  {
    this = v4[7];
    if ( !this )
      goto LABEL_115;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = v4[8];
    if ( !this )
      goto LABEL_115;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = v4[4];
    if ( !this )
      goto LABEL_115;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = v4[5];
    if ( !this )
      goto LABEL_115;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    v38 = (UnityEngine_Object_o *)v4[6];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v38, 0LL, 0LL) )
    {
      this = v4[6];
      if ( this )
      {
        this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( this )
        {
          v39 = 0;
LABEL_107:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v39, 0LL);
          goto LABEL_108;
        }
      }
LABEL_115:
      sub_B0D97C(this);
    }
  }
LABEL_108:
  v42 = (UnityEngine_Object_o *)v4[13];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v42, 0LL, 0LL) )
  {
    this = v4[13];
    if ( !this )
      goto LABEL_115;
    UICommonButton__SetColliderEnable((UICommonButton_o *)this, *p_equipUserSvtEntity != 0LL, 1, 0LL);
  }
}