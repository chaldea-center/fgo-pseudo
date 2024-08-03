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

  if ( (byte_49F8F25 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Collider___, isInput);
    byte_49F8F25 = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)decideButton, isInput, 0LL),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0LL) )
  {
    sub_1B64324(decideButton);
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
  SupportServantEquipServantItemDraw_o **v4; // x20
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
  int32_t v25; // w2
  UserServantEntity_o *v26; // x0
  __int64 v27; // x1
  SkillInfo_o *v28; // x8
  UILabel_o *v29; // x21
  System_String_o *MargeExplanation; // x0
  struct UserServantEntity_o *v31; // x8
  UISprite_o *v32; // x21
  __int64 v33; // x22
  __int64 v34; // x23
  int32_t v35; // w22
  UnityEngine_Object_o *v36; // x21
  struct ServantEntity_o *equipServantEntity; // x8
  int limitMax; // w22
  UnityEngine_Object_o *v39; // x21
  bool v40; // w1
  const MethodInfo *v41; // x1
  SupportServantEquipServantItemDraw_o *v42; // x21
  UnityEngine_Object_o *v43; // x21
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  v4 = (SupportServantEquipServantItemDraw_o **)this;
  if ( (byte_49F8F24 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, item);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (SupportServantEquipServantItemDraw_o *)sub_1B640C8(&StringLiteral_1/*""*/, v7);
    byte_49F8F24 = 1;
  }
  skillInfoList = 0LL;
  if ( !item )
    goto LABEL_105;
  this = v4[4];
  if ( !this )
    goto LABEL_105;
  if ( item->fields.userServantEntity )
  {
    ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)this, 1, 0LL);
    this = v4[4];
    if ( !this )
      goto LABEL_105;
    ServantFaceIconComponent__Set_37904900(
      (ServantFaceIconComponent_o *)this,
      item->fields.userServantEntity,
      item->fields.iconLabelInfo,
      0LL,
      0LL);
    v8 = (UnityEngine_Object_o *)v4[10];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) )
    {
      this = v4[10];
      if ( !this )
        goto LABEL_105;
      this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_105;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      userServantEntity = item->fields.userServantEntity;
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
      this = v4[10];
      if ( equipUserSvtEntity )
      {
        v13 = equipUserSvtEntity->fields.hp;
        if ( !this )
          goto LABEL_105;
      }
      else
      {
        v13 = 0;
        if ( !this )
          goto LABEL_105;
      }
      UIIconLabel__Set_37921148((UIIconLabel_o *)this, 3, hp, adjustHp, v13, 0LL, 0, 0, 0, 0LL);
    }
    v14 = (UnityEngine_Object_o *)v4[12];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
    {
      this = v4[12];
      if ( !this )
        goto LABEL_105;
      this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_105;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v15 = item->fields.userServantEntity;
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
      this = v4[12];
      if ( v18 )
      {
        v19 = v18->fields.atk;
        if ( !this )
          goto LABEL_105;
      }
      else
      {
        v19 = 0;
        if ( !this )
          goto LABEL_105;
      }
      UIIconLabel__Set_37921148((UIIconLabel_o *)this, 5, atk, adjustAtk, v19, 0LL, 0, 0, 0, 0LL);
    }
  }
  else
  {
    ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)this, 0, 0LL);
    this = v4[4];
    if ( !this )
      goto LABEL_105;
    ServantFaceIconComponent__NoMount_Support((ServantFaceIconComponent_o *)this, 0LL);
    this = v4[10];
    if ( !this )
      goto LABEL_105;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = v4[12];
    if ( !this )
      goto LABEL_105;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  v20 = (UnityEngine_Object_o *)v4[11];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
  {
    this = v4[11];
    if ( !this )
      goto LABEL_105;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v21 = item->fields.equipUserSvtEntity;
    this = v4[11];
    if ( v21 )
    {
      v22 = v21->fields.hp;
      if ( !this )
        goto LABEL_105;
    }
    else
    {
      v22 = 0;
      if ( !this )
        goto LABEL_105;
    }
    UIIconLabel__Set_37921148((UIIconLabel_o *)this, 41, v22, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  v23 = (UnityEngine_Object_o *)v4[13];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
  {
    this = v4[13];
    if ( !this )
      goto LABEL_105;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v24 = item->fields.equipUserSvtEntity;
    this = v4[13];
    if ( v24 )
    {
      v25 = v24->fields.atk;
      if ( !this )
        goto LABEL_105;
    }
    else
    {
      v25 = 0;
      if ( !this )
        goto LABEL_105;
    }
    UIIconLabel__Set_37921148((UIIconLabel_o *)this, 42, v25, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  v26 = item->fields.equipUserSvtEntity;
  if ( v26 )
  {
    UserServantEntity__getEquipSkillInfo(v26, &skillInfoList, 1, 0LL);
    if ( !skillInfoList )
      goto LABEL_105;
    if ( !skillInfoList->max_length )
      sub_1B6432C(this, v27);
    v28 = skillInfoList->m_Items[0];
    if ( !v28 )
      goto LABEL_105;
    this = v4[8];
    if ( !this )
      goto LABEL_105;
    UILabel__set_text((UILabel_o *)this, v28->fields.title, 0LL);
    v29 = (UILabel_o *)v4[9];
    MargeExplanation = SkillInfo__GetMargeExplanation(skillInfoList, 1, 0LL);
    WrapControlText__textAdjust(v29, MargeExplanation, 22, 0, 0, 0LL);
    this = v4[5];
    if ( !this )
      goto LABEL_105;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = v4[6];
    if ( !this )
      goto LABEL_105;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v31 = item->fields.equipUserSvtEntity;
    if ( !v31 )
      goto LABEL_105;
    v32 = (UISprite_o *)v4[6];
    v34 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
    v33 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v45.fields.currentCryptoKey = v34;
    *(_QWORD *)&v45.fields.fakeValue = v33;
    v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v45, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEquipFace(v32, v35, 0LL);
    v36 = (UnityEngine_Object_o *)v4[7];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Object__op_Inequality(v36, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( item->fields.equipUserSvtEntity )
      {
        equipServantEntity = item->fields.equipServantEntity;
        if ( !equipServantEntity )
          goto LABEL_105;
        limitMax = equipServantEntity->fields.limitMax;
      }
      else
      {
        limitMax = 0;
      }
      this = v4[7];
      if ( this )
      {
        this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        v42 = this;
        if ( limitMax < 1 )
        {
          v40 = 0;
          if ( !this )
            goto LABEL_105;
        }
        else
        {
          this = (SupportServantEquipServantItemDraw_o *)SupportServantEquipServantItem__get_EquipLimitCount(item, v41);
          v40 = (int)this >= limitMax;
          if ( !v42 )
            goto LABEL_105;
        }
        this = v42;
        goto LABEL_98;
      }
      goto LABEL_105;
    }
  }
  else
  {
    this = v4[8];
    if ( !this )
      goto LABEL_105;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = v4[9];
    if ( !this )
      goto LABEL_105;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = v4[5];
    if ( !this )
      goto LABEL_105;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = v4[6];
    if ( !this )
      goto LABEL_105;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    v39 = (UnityEngine_Object_o *)v4[7];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v39, 0LL, 0LL) )
    {
      this = v4[7];
      if ( this )
      {
        this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( this )
        {
          v40 = 0;
LABEL_98:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v40, 0LL);
          goto LABEL_99;
        }
      }
LABEL_105:
      sub_1B64324(this);
    }
  }
LABEL_99:
  v43 = (UnityEngine_Object_o *)v4[14];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v43, 0LL, 0LL) )
  {
    this = v4[14];
    if ( !this )
      goto LABEL_105;
    UICommonButton__SetColliderEnable((UICommonButton_o *)this, item->fields.equipUserSvtEntity != 0LL, 1, 0LL);
  }
}