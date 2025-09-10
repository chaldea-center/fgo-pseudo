void SupportServantEquipServantItemDraw___ctor(SupportServantEquipServantItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void SupportServantEquipServantItemDraw__SetInput(
        SupportServantEquipServantItemDraw_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Component_o *decideButton; // x0

  if ( (byte_4C23A8B & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_4C23A8B = 1;
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


void SupportServantEquipServantItemDraw__SetItem(
        SupportServantEquipServantItemDraw_o *this,
        SupportServantEquipServantItem_o *item,
        int32_t addBaseHp,
        int32_t addBaseAtk,
        const MethodInfo *method)
{
  SupportServantEquipServantItem_o *v7; // x19
  SupportServantEquipServantItemDraw_o **v8; // x20
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  UnityEngine_Object_o *v10; // x24
  ServantOverwriteStatus_o *v11; // x23
  UIIconLabel_o *v12; // x24
  int32_t Hp_k__BackingField; // w26
  int32_t v14; // w3
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  int32_t hp; // w4
  UnityEngine_Object_o *v17; // x22
  UIIconLabel_o *v18; // x22
  int32_t Atk_k__BackingField; // w23
  int32_t v20; // w3
  struct UserServantEntity_o *v21; // x8
  int32_t atk; // w4
  UnityEngine_Object_o *v23; // x21
  struct UserServantEntity_o *v24; // x8
  int32_t v25; // w2
  UnityEngine_Object_o *v26; // x21
  struct UserServantEntity_o *v27; // x8
  int32_t v28; // w2
  UserServantEntity_o *v29; // x0
  __int64 v30; // x2
  SkillInfo_o *v31; // x8
  UILabel_o *v32; // x21
  System_String_o *MargeExplanation; // x0
  struct UserServantEntity_o *v34; // x8
  UISprite_o *v35; // x21
  __int64 v36; // x22
  __int64 v37; // x23
  int32_t v38; // w22
  UnityEngine_Object_o *v39; // x21
  struct ServantEntity_o *equipServantEntity; // x8
  int limitMax; // w22
  UnityEngine_Object_o *v42; // x21
  const MethodInfo *v43; // x1
  SupportServantEquipServantItemDraw_o *v44; // x21
  UnityEngine_Object_o *v45; // x21
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  v7 = item;
  v8 = (SupportServantEquipServantItemDraw_o **)this;
  if ( (byte_4C23A8A & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (SupportServantEquipServantItemDraw_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C23A8A = 1;
  }
  skillInfoList = 0;
  if ( !v7 )
    goto LABEL_108;
  this = v8[4];
  if ( !this )
    goto LABEL_108;
  if ( v7->fields.userServantEntity )
  {
    ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)this, 1, 0);
    this = v8[4];
    if ( !this )
      goto LABEL_108;
    ServantFaceIconComponent__Set_40783748(
      (ServantFaceIconComponent_o *)this,
      v7->fields.userServantEntity,
      v7->fields.iconLabelInfo,
      0,
      0);
    this = (SupportServantEquipServantItemDraw_o *)v7->fields.userServantEntity;
    if ( !this )
      goto LABEL_108;
    OverwriteStatus = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)this, 0, 0);
    v10 = (UnityEngine_Object_o *)v8[10];
    v11 = OverwriteStatus;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v10, 0, 0) )
    {
      this = v8[10];
      if ( !this )
        goto LABEL_108;
      this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
      if ( !this )
        goto LABEL_108;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      if ( !v11 )
        goto LABEL_108;
      v12 = (UIIconLabel_o *)v8[10];
      this = (SupportServantEquipServantItemDraw_o *)v7->fields.userServantEntity;
      Hp_k__BackingField = v11->fields._Hp_k__BackingField;
      if ( this )
      {
        this = (SupportServantEquipServantItemDraw_o *)UserServantEntity__get_HpBoostValue(
                                                         (UserServantEntity_o *)this,
                                                         0);
        v14 = (int)this;
      }
      else
      {
        v14 = 0;
      }
      equipUserSvtEntity = v7->fields.equipUserSvtEntity;
      if ( equipUserSvtEntity )
      {
        hp = equipUserSvtEntity->fields.hp;
        if ( !v12 )
          goto LABEL_108;
      }
      else
      {
        hp = 0;
        if ( !v12 )
          goto LABEL_108;
      }
      UIIconLabel__Set_40889008(v12, 3, Hp_k__BackingField + addBaseHp, v14, hp, 0, 0, 0, 0, 0, 0);
    }
    v17 = (UnityEngine_Object_o *)v8[12];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v17, 0, 0) )
    {
      this = v8[12];
      if ( !this )
        goto LABEL_108;
      this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
      if ( !this )
        goto LABEL_108;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      if ( !v11 )
        goto LABEL_108;
      v18 = (UIIconLabel_o *)v8[12];
      this = (SupportServantEquipServantItemDraw_o *)v7->fields.userServantEntity;
      Atk_k__BackingField = v11->fields._Atk_k__BackingField;
      if ( this )
      {
        this = (SupportServantEquipServantItemDraw_o *)UserServantEntity__get_AtkBoostValue(
                                                         (UserServantEntity_o *)this,
                                                         0);
        v20 = (int)this;
      }
      else
      {
        v20 = 0;
      }
      v21 = v7->fields.equipUserSvtEntity;
      if ( v21 )
      {
        atk = v21->fields.atk;
        if ( !v18 )
          goto LABEL_108;
      }
      else
      {
        atk = 0;
        if ( !v18 )
          goto LABEL_108;
      }
      UIIconLabel__Set_40889008(v18, 5, Atk_k__BackingField + addBaseAtk, v20, atk, 0, 0, 0, 0, 0, 0);
    }
  }
  else
  {
    ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)this, 0, 0);
    this = v8[4];
    if ( !this )
      goto LABEL_108;
    ServantFaceIconComponent__NoMount_Support((ServantFaceIconComponent_o *)this, 0);
    this = v8[10];
    if ( !this )
      goto LABEL_108;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
    if ( !this )
      goto LABEL_108;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = v8[12];
    if ( !this )
      goto LABEL_108;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
    if ( !this )
      goto LABEL_108;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  v23 = (UnityEngine_Object_o *)v8[11];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v23, 0, 0) )
  {
    this = v8[11];
    if ( !this )
      goto LABEL_108;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
    if ( !this )
      goto LABEL_108;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v24 = v7->fields.equipUserSvtEntity;
    this = v8[11];
    if ( v24 )
    {
      v25 = v24->fields.hp;
      if ( !this )
        goto LABEL_108;
    }
    else
    {
      v25 = 0;
      if ( !this )
        goto LABEL_108;
    }
    UIIconLabel__Set_40889008((UIIconLabel_o *)this, 41, v25, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  v26 = (UnityEngine_Object_o *)v8[13];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v26, 0, 0) )
  {
    this = v8[13];
    if ( !this )
      goto LABEL_108;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
    if ( !this )
      goto LABEL_108;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v27 = v7->fields.equipUserSvtEntity;
    this = v8[13];
    if ( v27 )
    {
      v28 = v27->fields.atk;
      if ( !this )
        goto LABEL_108;
    }
    else
    {
      v28 = 0;
      if ( !this )
        goto LABEL_108;
    }
    UIIconLabel__Set_40889008((UIIconLabel_o *)this, 42, v28, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  v29 = v7->fields.equipUserSvtEntity;
  if ( v29 )
  {
    UserServantEntity__getEquipSkillInfo(v29, &skillInfoList, 1, 0);
    if ( !skillInfoList )
      goto LABEL_108;
    if ( !LODWORD(skillInfoList->max_length) )
      sub_1C2D6F4(this, item, v30);
    v31 = skillInfoList->m_Items[0];
    if ( !v31 )
      goto LABEL_108;
    this = v8[8];
    if ( !this )
      goto LABEL_108;
    UILabel__set_text((UILabel_o *)this, v31->fields.title, 0);
    v32 = (UILabel_o *)v8[9];
    MargeExplanation = SkillInfo__GetMargeExplanation(skillInfoList, 1, 0);
    WrapControlText__textAdjust(v32, MargeExplanation, 22, 0, 0);
    this = v8[5];
    if ( !this )
      goto LABEL_108;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
    if ( !this )
      goto LABEL_108;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = v8[6];
    if ( !this )
      goto LABEL_108;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
    if ( !this )
      goto LABEL_108;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v34 = v7->fields.equipUserSvtEntity;
    if ( !v34 )
      goto LABEL_108;
    v35 = (UISprite_o *)v8[6];
    v37 = *(_QWORD *)&v34->fields.svtId.fields.currentCryptoKey;
    v36 = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v47.fields.currentCryptoKey = v37;
    *(_QWORD *)&v47.fields.fakeValue = v36;
    v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v47, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEquipFace(v35, v38, 0, 0);
    v39 = (UnityEngine_Object_o *)v8[7];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Object__op_Inequality(v39, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( v7->fields.equipUserSvtEntity )
      {
        equipServantEntity = v7->fields.equipServantEntity;
        if ( !equipServantEntity )
          goto LABEL_108;
        limitMax = equipServantEntity->fields.limitMax;
      }
      else
      {
        limitMax = 0;
      }
      this = v8[7];
      if ( this )
      {
        this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
        v44 = this;
        if ( limitMax < 1 )
        {
          item = 0;
          if ( !this )
            goto LABEL_108;
        }
        else
        {
          this = (SupportServantEquipServantItemDraw_o *)SupportServantEquipServantItem__get_EquipLimitCount(v7, v43);
          item = (SupportServantEquipServantItem_o *)((int)this >= limitMax);
          if ( !v44 )
            goto LABEL_108;
        }
        this = v44;
        goto LABEL_101;
      }
      goto LABEL_108;
    }
  }
  else
  {
    this = v8[8];
    if ( !this )
      goto LABEL_108;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
    this = v8[9];
    if ( !this )
      goto LABEL_108;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
    this = v8[5];
    if ( !this )
      goto LABEL_108;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
    if ( !this )
      goto LABEL_108;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = v8[6];
    if ( !this )
      goto LABEL_108;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
    if ( !this )
      goto LABEL_108;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    v42 = (UnityEngine_Object_o *)v8[7];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v42, 0, 0) )
    {
      this = v8[7];
      if ( this )
      {
        this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
        if ( this )
        {
          LOBYTE(item) = 0;
LABEL_101:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)item, 0);
          goto LABEL_102;
        }
      }
LABEL_108:
      sub_1C2D6EC(this, item);
    }
  }
LABEL_102:
  v45 = (UnityEngine_Object_o *)v8[14];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v45, 0, 0) )
  {
    this = v8[14];
    if ( !this )
      goto LABEL_108;
    UICommonButton__SetColliderEnable((UICommonButton_o *)this, v7->fields.equipUserSvtEntity != 0, 1, 0);
  }
}