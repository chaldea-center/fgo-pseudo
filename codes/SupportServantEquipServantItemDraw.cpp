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

  if ( (byte_42B38F6 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_42B38F6 = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                    decideButton,
                                                    (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)decideButton, isInput, 0LL),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0LL) )
  {
    sub_B52A5C(decideButton, isInput);
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
  SupportServantEquipServantItem_o *v3; // x20
  SupportServantEquipServantItemDraw_o **v4; // x19
  UnityEngine_Object_o *v5; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t hp; // w2
  int32_t adjustHp; // w3
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  int32_t v10; // w4
  UnityEngine_Object_o *v11; // x21
  struct UserServantEntity_o *v12; // x8
  int32_t atk; // w2
  int32_t adjustAtk; // w3
  struct UserServantEntity_o *v15; // x8
  int32_t v16; // w4
  UnityEngine_Object_o *v17; // x21
  struct UserServantEntity_o *v18; // x8
  int32_t v19; // w2
  UnityEngine_Object_o *v20; // x21
  struct UserServantEntity_o *v21; // x8
  UserServantEntity_o **p_equipUserSvtEntity; // x25
  int32_t v23; // w2
  SkillInfo_o *v24; // x8
  UILabel_o *v25; // x21
  System_String_o *MargeExplanation; // x0
  UserServantEntity_o *v27; // x8
  UISprite_o *v28; // x21
  __int64 v29; // x22
  __int64 v30; // x23
  int32_t v31; // w22
  UnityEngine_Object_o *v32; // x21
  struct ServantEntity_o *equipServantEntity; // x8
  int limitMax; // w22
  UnityEngine_Object_o *v35; // x20
  const MethodInfo *v36; // x1
  SupportServantEquipServantItemDraw_o *v37; // x21
  UnityEngine_Object_o *v38; // x20
  __int64 v39; // x0
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  v3 = item;
  v4 = (SupportServantEquipServantItemDraw_o **)this;
  if ( (byte_42B38F5 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (SupportServantEquipServantItemDraw_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B38F5 = 1;
  }
  skillInfoList = 0LL;
  if ( !v3 )
    goto LABEL_115;
  this = v4[3];
  if ( !this )
    goto LABEL_115;
  if ( v3->fields.userServantEntity )
  {
    ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)this, 1, 0LL);
    this = v4[3];
    if ( !this )
      goto LABEL_115;
    ServantFaceIconComponent__Set_30396076(
      (ServantFaceIconComponent_o *)this,
      v3->fields.userServantEntity,
      v3->fields.iconLabelInfo,
      0LL,
      0LL);
    v5 = (UnityEngine_Object_o *)v4[9];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
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
      userServantEntity = v3->fields.userServantEntity;
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
      equipUserSvtEntity = v3->fields.equipUserSvtEntity;
      if ( equipUserSvtEntity )
      {
        v10 = equipUserSvtEntity->fields.hp;
        if ( !this )
          goto LABEL_115;
      }
      else
      {
        v10 = 0;
        if ( !this )
          goto LABEL_115;
      }
      UIIconLabel__Set_41786400((UIIconLabel_o *)this, 3, hp, adjustHp, v10, 0LL, 0, 0, 0, 0LL);
    }
    v11 = (UnityEngine_Object_o *)v4[11];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
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
      v12 = v3->fields.userServantEntity;
      this = v4[11];
      if ( v12 )
      {
        atk = v12->fields.atk;
        adjustAtk = v12->fields.adjustAtk;
      }
      else
      {
        atk = 0;
        adjustAtk = 0;
      }
      v15 = v3->fields.equipUserSvtEntity;
      if ( v15 )
      {
        v16 = v15->fields.atk;
        if ( !this )
          goto LABEL_115;
      }
      else
      {
        v16 = 0;
        if ( !this )
          goto LABEL_115;
      }
      UIIconLabel__Set_41786400((UIIconLabel_o *)this, 5, atk, adjustAtk, v16, 0LL, 0, 0, 0, 0LL);
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
  v17 = (UnityEngine_Object_o *)v4[10];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
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
    v18 = v3->fields.equipUserSvtEntity;
    this = v4[10];
    if ( v18 )
    {
      v19 = v18->fields.hp;
      if ( !this )
        goto LABEL_115;
    }
    else
    {
      v19 = 0;
      if ( !this )
        goto LABEL_115;
    }
    UIIconLabel__Set_41786400((UIIconLabel_o *)this, 41, v19, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  v20 = (UnityEngine_Object_o *)v4[12];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
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
    p_equipUserSvtEntity = &v3->fields.equipUserSvtEntity;
    v21 = v3->fields.equipUserSvtEntity;
    if ( v21 )
    {
      v23 = v21->fields.atk;
      if ( !this )
        goto LABEL_115;
    }
    else
    {
      v23 = 0;
      if ( !this )
        goto LABEL_115;
    }
    UIIconLabel__Set_41786400((UIIconLabel_o *)this, 42, v23, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  else
  {
    p_equipUserSvtEntity = &v3->fields.equipUserSvtEntity;
  }
  if ( *p_equipUserSvtEntity )
  {
    UserServantEntity__getEquipSkillInfo(*p_equipUserSvtEntity, &skillInfoList, 1, 0LL);
    if ( !skillInfoList )
      goto LABEL_115;
    if ( !skillInfoList->max_length )
    {
      v39 = sub_B52A88(this);
      sub_B52A28(v39, 0LL);
    }
    v24 = skillInfoList->m_Items[0];
    if ( !v24 )
      goto LABEL_115;
    this = v4[7];
    if ( !this )
      goto LABEL_115;
    UILabel__set_text((UILabel_o *)this, v24->fields.title, 0LL);
    v25 = (UILabel_o *)v4[8];
    MargeExplanation = SkillInfo__GetMargeExplanation(skillInfoList, 1, 0LL);
    WrapControlText__textAdjust(v25, MargeExplanation, 22, 0, 0, 0LL);
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
    v27 = *p_equipUserSvtEntity;
    if ( !*p_equipUserSvtEntity )
      goto LABEL_115;
    v28 = (UISprite_o *)v4[5];
    v30 = *(_QWORD *)&v27->fields.svtId.fields.currentCryptoKey;
    v29 = *(_QWORD *)&v27->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v41.fields.currentCryptoKey = v30;
    *(_QWORD *)&v41.fields.fakeValue = v29;
    v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v41, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEquipFace(v28, v31, 0LL);
    v32 = (UnityEngine_Object_o *)v4[6];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Object__op_Inequality(v32, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( *p_equipUserSvtEntity )
      {
        equipServantEntity = v3->fields.equipServantEntity;
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
        v37 = this;
        if ( limitMax < 1 )
        {
          item = 0LL;
          if ( !this )
            goto LABEL_115;
        }
        else
        {
          this = (SupportServantEquipServantItemDraw_o *)SupportServantEquipServantItem__get_EquipLimitCount(v3, v36);
          item = (SupportServantEquipServantItem_o *)((int)this >= limitMax);
          if ( !v37 )
            goto LABEL_115;
        }
        this = v37;
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
    v35 = (UnityEngine_Object_o *)v4[6];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v35, 0LL, 0LL) )
    {
      this = v4[6];
      if ( this )
      {
        this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( this )
        {
          LOBYTE(item) = 0;
LABEL_107:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)item, 0LL);
          goto LABEL_108;
        }
      }
LABEL_115:
      sub_B52A5C(this, item);
    }
  }
LABEL_108:
  v38 = (UnityEngine_Object_o *)v4[13];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v38, 0LL, 0LL) )
  {
    this = v4[13];
    if ( !this )
      goto LABEL_115;
    UICommonButton__SetColliderEnable((UICommonButton_o *)this, *p_equipUserSvtEntity != 0LL, 1, 0LL);
  }
}