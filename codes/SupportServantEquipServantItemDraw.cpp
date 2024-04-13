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
  __int64 v3; // x3
  UnityEngine_Component_o *decideButton; // x0

  if ( (byte_42EC470 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Collider___, isInput, (_DWORD)method, v3);
    byte_42EC470 = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                    decideButton,
                                                    (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)decideButton, isInput, 0LL),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0LL) )
  {
    sub_B5D69C(decideButton, isInput);
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
  __int64 v3; // x3
  SupportServantEquipServantItem_o *v4; // x20
  SupportServantEquipServantItemDraw_o **v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_Object_o *v15; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t hp; // w2
  int32_t adjustHp; // w3
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  int32_t v20; // w4
  UnityEngine_Object_o *v21; // x21
  struct UserServantEntity_o *v22; // x8
  int32_t atk; // w2
  int32_t adjustAtk; // w3
  struct UserServantEntity_o *v25; // x8
  int32_t v26; // w4
  UnityEngine_Object_o *v27; // x21
  struct UserServantEntity_o *v28; // x8
  int32_t v29; // w2
  UnityEngine_Object_o *v30; // x21
  struct UserServantEntity_o *v31; // x8
  UserServantEntity_o **p_equipUserSvtEntity; // x25
  int32_t v33; // w2
  SkillInfo_o *v34; // x8
  UILabel_o *v35; // x21
  System_String_o *MargeExplanation; // x0
  UserServantEntity_o *v37; // x8
  UISprite_o *v38; // x21
  __int64 v39; // x22
  __int64 v40; // x23
  int32_t v41; // w22
  UnityEngine_Object_o *v42; // x21
  struct ServantEntity_o *equipServantEntity; // x8
  int limitMax; // w22
  UnityEngine_Object_o *v45; // x20
  const MethodInfo *v46; // x1
  SupportServantEquipServantItemDraw_o *v47; // x21
  UnityEngine_Object_o *v48; // x20
  __int64 v49; // x0
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  v4 = item;
  v5 = (SupportServantEquipServantItemDraw_o **)this;
  if ( (byte_42EC46F & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    this = (SupportServantEquipServantItemDraw_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v12, v13, v14);
    byte_42EC46F = 1;
  }
  skillInfoList = 0LL;
  if ( !v4 )
    goto LABEL_115;
  this = v5[3];
  if ( !this )
    goto LABEL_115;
  if ( v4->fields.userServantEntity )
  {
    ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)this, 1, 0LL);
    this = v5[3];
    if ( !this )
      goto LABEL_115;
    ServantFaceIconComponent__Set_30775392(
      (ServantFaceIconComponent_o *)this,
      v4->fields.userServantEntity,
      v4->fields.iconLabelInfo,
      0LL,
      0LL);
    v15 = (UnityEngine_Object_o *)v5[9];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
    {
      this = v5[9];
      if ( !this )
        goto LABEL_115;
      this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_115;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      userServantEntity = v4->fields.userServantEntity;
      this = v5[9];
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
      equipUserSvtEntity = v4->fields.equipUserSvtEntity;
      if ( equipUserSvtEntity )
      {
        v20 = equipUserSvtEntity->fields.hp;
        if ( !this )
          goto LABEL_115;
      }
      else
      {
        v20 = 0;
        if ( !this )
          goto LABEL_115;
      }
      UIIconLabel__Set_41886452((UIIconLabel_o *)this, 3, hp, adjustHp, v20, 0LL, 0, 0, 0, 0LL);
    }
    v21 = (UnityEngine_Object_o *)v5[11];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
    {
      this = v5[11];
      if ( !this )
        goto LABEL_115;
      this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_115;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v22 = v4->fields.userServantEntity;
      this = v5[11];
      if ( v22 )
      {
        atk = v22->fields.atk;
        adjustAtk = v22->fields.adjustAtk;
      }
      else
      {
        atk = 0;
        adjustAtk = 0;
      }
      v25 = v4->fields.equipUserSvtEntity;
      if ( v25 )
      {
        v26 = v25->fields.atk;
        if ( !this )
          goto LABEL_115;
      }
      else
      {
        v26 = 0;
        if ( !this )
          goto LABEL_115;
      }
      UIIconLabel__Set_41886452((UIIconLabel_o *)this, 5, atk, adjustAtk, v26, 0LL, 0, 0, 0, 0LL);
    }
  }
  else
  {
    ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)this, 0, 0LL);
    this = v5[3];
    if ( !this )
      goto LABEL_115;
    ServantFaceIconComponent__NoMount_Support((ServantFaceIconComponent_o *)this, 0LL);
    this = v5[9];
    if ( !this )
      goto LABEL_115;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = v5[11];
    if ( !this )
      goto LABEL_115;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  v27 = (UnityEngine_Object_o *)v5[10];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
  {
    this = v5[10];
    if ( !this )
      goto LABEL_115;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v28 = v4->fields.equipUserSvtEntity;
    this = v5[10];
    if ( v28 )
    {
      v29 = v28->fields.hp;
      if ( !this )
        goto LABEL_115;
    }
    else
    {
      v29 = 0;
      if ( !this )
        goto LABEL_115;
    }
    UIIconLabel__Set_41886452((UIIconLabel_o *)this, 41, v29, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  v30 = (UnityEngine_Object_o *)v5[12];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v30, 0LL, 0LL) )
  {
    this = v5[12];
    if ( !this )
      goto LABEL_115;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = v5[12];
    p_equipUserSvtEntity = &v4->fields.equipUserSvtEntity;
    v31 = v4->fields.equipUserSvtEntity;
    if ( v31 )
    {
      v33 = v31->fields.atk;
      if ( !this )
        goto LABEL_115;
    }
    else
    {
      v33 = 0;
      if ( !this )
        goto LABEL_115;
    }
    UIIconLabel__Set_41886452((UIIconLabel_o *)this, 42, v33, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  else
  {
    p_equipUserSvtEntity = &v4->fields.equipUserSvtEntity;
  }
  if ( *p_equipUserSvtEntity )
  {
    UserServantEntity__getEquipSkillInfo(*p_equipUserSvtEntity, &skillInfoList, 1, 0LL);
    if ( !skillInfoList )
      goto LABEL_115;
    if ( !skillInfoList->max_length )
    {
      v49 = sub_B5D6C8(this);
      sub_B5D668(v49, 0LL);
    }
    v34 = skillInfoList->m_Items[0];
    if ( !v34 )
      goto LABEL_115;
    this = v5[7];
    if ( !this )
      goto LABEL_115;
    UILabel__set_text((UILabel_o *)this, v34->fields.title, 0LL);
    v35 = (UILabel_o *)v5[8];
    MargeExplanation = SkillInfo__GetMargeExplanation(skillInfoList, 1, 0LL);
    WrapControlText__textAdjust(v35, MargeExplanation, 22, 0, 0, 0LL);
    this = v5[4];
    if ( !this )
      goto LABEL_115;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = v5[5];
    if ( !this )
      goto LABEL_115;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v37 = *p_equipUserSvtEntity;
    if ( !*p_equipUserSvtEntity )
      goto LABEL_115;
    v38 = (UISprite_o *)v5[5];
    v40 = *(_QWORD *)&v37->fields.svtId.fields.currentCryptoKey;
    v39 = *(_QWORD *)&v37->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v51.fields.currentCryptoKey = v40;
    *(_QWORD *)&v51.fields.fakeValue = v39;
    v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v51, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEquipFace(v38, v41, 0LL);
    v42 = (UnityEngine_Object_o *)v5[6];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Object__op_Inequality(v42, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( *p_equipUserSvtEntity )
      {
        equipServantEntity = v4->fields.equipServantEntity;
        if ( !equipServantEntity )
          goto LABEL_115;
        limitMax = equipServantEntity->fields.limitMax;
      }
      else
      {
        limitMax = 0;
      }
      this = v5[6];
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
            goto LABEL_115;
        }
        else
        {
          this = (SupportServantEquipServantItemDraw_o *)SupportServantEquipServantItem__get_EquipLimitCount(v4, v46);
          item = (SupportServantEquipServantItem_o *)((int)this >= limitMax);
          if ( !v47 )
            goto LABEL_115;
        }
        this = v47;
        goto LABEL_107;
      }
      goto LABEL_115;
    }
  }
  else
  {
    this = v5[7];
    if ( !this )
      goto LABEL_115;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = v5[8];
    if ( !this )
      goto LABEL_115;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = v5[4];
    if ( !this )
      goto LABEL_115;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = v5[5];
    if ( !this )
      goto LABEL_115;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    v45 = (UnityEngine_Object_o *)v5[6];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v45, 0LL, 0LL) )
    {
      this = v5[6];
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
      sub_B5D69C(this, item);
    }
  }
LABEL_108:
  v48 = (UnityEngine_Object_o *)v5[13];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v48, 0LL, 0LL) )
  {
    this = v5[13];
    if ( !this )
      goto LABEL_115;
    UICommonButton__SetColliderEnable((UICommonButton_o *)this, *p_equipUserSvtEntity != 0LL, 1, 0LL);
  }
}