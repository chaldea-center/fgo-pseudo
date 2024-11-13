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

  if ( (byte_4B12BFA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, isInput, method);
    byte_4B12BFA = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)decideButton, isInput, 0LL),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0LL) )
  {
    sub_1BCAA3C(decideButton, isInput);
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
  SupportServantEquipServantItem_o *v3; // x19
  SupportServantEquipServantItemDraw_o **v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  UnityEngine_Object_o *v12; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t hp; // w2
  int32_t adjustHp; // w3
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  int32_t v17; // w4
  UnityEngine_Object_o *v18; // x21
  struct UserServantEntity_o *v19; // x8
  int32_t atk; // w2
  int32_t adjustAtk; // w3
  struct UserServantEntity_o *v22; // x8
  int32_t v23; // w4
  UnityEngine_Object_o *v24; // x21
  struct UserServantEntity_o *v25; // x8
  int32_t v26; // w2
  UnityEngine_Object_o *v27; // x21
  struct UserServantEntity_o *v28; // x8
  int32_t v29; // w2
  UserServantEntity_o *v30; // x0
  SkillInfo_o *v31; // x8
  UILabel_o *v32; // x21
  System_String_o *MargeExplanation; // x0
  struct UserServantEntity_o *v34; // x8
  UISprite_o *v35; // x21
  __int64 v36; // x22
  __int64 v37; // x23
  __int64 v38; // x1
  int32_t v39; // w22
  __int64 v40; // x1
  UnityEngine_Object_o *v41; // x21
  struct ServantEntity_o *equipServantEntity; // x8
  int limitMax; // w22
  __int64 v44; // x1
  UnityEngine_Object_o *v45; // x21
  const MethodInfo *v46; // x1
  SupportServantEquipServantItemDraw_o *v47; // x21
  UnityEngine_Object_o *v48; // x21
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  v3 = item;
  v4 = (SupportServantEquipServantItemDraw_o **)this;
  if ( (byte_4B12BF9 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    this = (SupportServantEquipServantItemDraw_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B12BF9 = 1;
  }
  skillInfoList = 0LL;
  if ( !v3 )
    goto LABEL_105;
  this = v4[4];
  if ( !this )
    goto LABEL_105;
  if ( v3->fields.userServantEntity )
  {
    ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)this, 1, 0LL);
    this = v4[4];
    if ( !this )
      goto LABEL_105;
    ServantFaceIconComponent__Set_38931252(
      (ServantFaceIconComponent_o *)this,
      v3->fields.userServantEntity,
      v3->fields.iconLabelInfo,
      0LL,
      0LL);
    v12 = (UnityEngine_Object_o *)v4[10];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
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
      userServantEntity = v3->fields.userServantEntity;
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
      equipUserSvtEntity = v3->fields.equipUserSvtEntity;
      this = v4[10];
      if ( equipUserSvtEntity )
      {
        v17 = equipUserSvtEntity->fields.hp;
        if ( !this )
          goto LABEL_105;
      }
      else
      {
        v17 = 0;
        if ( !this )
          goto LABEL_105;
      }
      UIIconLabel__Set_38947284((UIIconLabel_o *)this, 3, hp, adjustHp, v17, 0LL, 0, 0, 0, 0LL);
    }
    v18 = (UnityEngine_Object_o *)v4[12];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
    if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
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
      v19 = v3->fields.userServantEntity;
      if ( v19 )
      {
        atk = v19->fields.atk;
        adjustAtk = v19->fields.adjustAtk;
      }
      else
      {
        atk = 0;
        adjustAtk = 0;
      }
      v22 = v3->fields.equipUserSvtEntity;
      this = v4[12];
      if ( v22 )
      {
        v23 = v22->fields.atk;
        if ( !this )
          goto LABEL_105;
      }
      else
      {
        v23 = 0;
        if ( !this )
          goto LABEL_105;
      }
      UIIconLabel__Set_38947284((UIIconLabel_o *)this, 5, atk, adjustAtk, v23, 0LL, 0, 0, 0, 0LL);
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
  v24 = (UnityEngine_Object_o *)v4[11];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
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
    v25 = v3->fields.equipUserSvtEntity;
    this = v4[11];
    if ( v25 )
    {
      v26 = v25->fields.hp;
      if ( !this )
        goto LABEL_105;
    }
    else
    {
      v26 = 0;
      if ( !this )
        goto LABEL_105;
    }
    UIIconLabel__Set_38947284((UIIconLabel_o *)this, 41, v26, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  v27 = (UnityEngine_Object_o *)v4[13];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
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
    v28 = v3->fields.equipUserSvtEntity;
    this = v4[13];
    if ( v28 )
    {
      v29 = v28->fields.atk;
      if ( !this )
        goto LABEL_105;
    }
    else
    {
      v29 = 0;
      if ( !this )
        goto LABEL_105;
    }
    UIIconLabel__Set_38947284((UIIconLabel_o *)this, 42, v29, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  v30 = v3->fields.equipUserSvtEntity;
  if ( v30 )
  {
    UserServantEntity__getEquipSkillInfo(v30, &skillInfoList, 1, 0LL);
    if ( !skillInfoList )
      goto LABEL_105;
    if ( !skillInfoList->max_length )
      sub_1BCAA44(this, item);
    v31 = skillInfoList->m_Items[0];
    if ( !v31 )
      goto LABEL_105;
    this = v4[8];
    if ( !this )
      goto LABEL_105;
    UILabel__set_text((UILabel_o *)this, v31->fields.title, 0LL);
    v32 = (UILabel_o *)v4[9];
    MargeExplanation = SkillInfo__GetMargeExplanation(skillInfoList, 1, 0LL);
    WrapControlText__textAdjust(v32, MargeExplanation, 22, 0, 0, 0LL);
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
    v34 = v3->fields.equipUserSvtEntity;
    if ( !v34 )
      goto LABEL_105;
    v35 = (UISprite_o *)v4[6];
    v37 = *(_QWORD *)&v34->fields.svtId.fields.currentCryptoKey;
    v36 = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, item);
    *(_QWORD *)&v50.fields.currentCryptoKey = v37;
    *(_QWORD *)&v50.fields.fakeValue = v36;
    v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v50, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v38);
    AtlasManager__SetEquipFace(v35, v39, 0LL);
    v41 = (UnityEngine_Object_o *)v4[7];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40);
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Object__op_Inequality(v41, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( v3->fields.equipUserSvtEntity )
      {
        equipServantEntity = v3->fields.equipServantEntity;
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
        v47 = this;
        if ( limitMax < 1 )
        {
          item = 0LL;
          if ( !this )
            goto LABEL_105;
        }
        else
        {
          this = (SupportServantEquipServantItemDraw_o *)SupportServantEquipServantItem__get_EquipLimitCount(v3, v46);
          item = (SupportServantEquipServantItem_o *)((int)this >= limitMax);
          if ( !v47 )
            goto LABEL_105;
        }
        this = v47;
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
    v45 = (UnityEngine_Object_o *)v4[7];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44);
    if ( UnityEngine_Object__op_Inequality(v45, 0LL, 0LL) )
    {
      this = v4[7];
      if ( this )
      {
        this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( this )
        {
          LOBYTE(item) = 0;
LABEL_98:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)item, 0LL);
          goto LABEL_99;
        }
      }
LABEL_105:
      sub_1BCAA3C(this, item);
    }
  }
LABEL_99:
  v48 = (UnityEngine_Object_o *)v4[14];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( UnityEngine_Object__op_Inequality(v48, 0LL, 0LL) )
  {
    this = v4[14];
    if ( !this )
      goto LABEL_105;
    UICommonButton__SetColliderEnable((UICommonButton_o *)this, v3->fields.equipUserSvtEntity != 0LL, 1, 0LL);
  }
}