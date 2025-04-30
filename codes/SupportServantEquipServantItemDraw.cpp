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

  if ( (byte_4A4AD21 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_Collider___, isInput);
    byte_4A4AD21 = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)decideButton, isInput, 0LL),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0LL) )
  {
    sub_1B86614(decideButton, isInput);
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
  __int64 v6; // x1
  __int64 v7; // x1
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  UnityEngine_Object_o *v9; // x22
  ServantOverwriteStatus_o *v10; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t adjustHp; // w3
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  int32_t hp; // w4
  UnityEngine_Object_o *v15; // x22
  struct UserServantEntity_o *v16; // x8
  int32_t adjustAtk; // w3
  struct UserServantEntity_o *v18; // x8
  int32_t atk; // w4
  UnityEngine_Object_o *v20; // x21
  struct UserServantEntity_o *v21; // x8
  int32_t v22; // w2
  UnityEngine_Object_o *v23; // x21
  struct UserServantEntity_o *v24; // x8
  int32_t v25; // w2
  UserServantEntity_o *v26; // x0
  SkillInfo_o *v27; // x8
  UILabel_o *v28; // x21
  System_String_o *MargeExplanation; // x0
  struct UserServantEntity_o *v30; // x8
  UISprite_o *v31; // x21
  __int64 v32; // x22
  __int64 v33; // x23
  int32_t v34; // w22
  UnityEngine_Object_o *v35; // x21
  struct ServantEntity_o *equipServantEntity; // x8
  int limitMax; // w22
  UnityEngine_Object_o *v38; // x21
  const MethodInfo *v39; // x1
  SupportServantEquipServantItemDraw_o *v40; // x21
  UnityEngine_Object_o *v41; // x21
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  v3 = item;
  v4 = (SupportServantEquipServantItemDraw_o **)this;
  if ( (byte_4A4AD20 & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, item);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (SupportServantEquipServantItemDraw_o *)sub_1B863B8(&StringLiteral_1/*""*/, v7);
    byte_4A4AD20 = 1;
  }
  skillInfoList = 0LL;
  if ( !v3 )
    goto LABEL_108;
  this = v4[4];
  if ( !this )
    goto LABEL_108;
  if ( v3->fields.userServantEntity )
  {
    ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)this, 1, 0LL);
    this = v4[4];
    if ( !this )
      goto LABEL_108;
    ServantFaceIconComponent__Set_39177000(
      (ServantFaceIconComponent_o *)this,
      v3->fields.userServantEntity,
      v3->fields.iconLabelInfo,
      0LL,
      0LL);
    this = (SupportServantEquipServantItemDraw_o *)v3->fields.userServantEntity;
    if ( !this )
      goto LABEL_108;
    OverwriteStatus = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)this, 0LL, 0LL);
    v9 = (UnityEngine_Object_o *)v4[10];
    v10 = OverwriteStatus;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
    {
      this = v4[10];
      if ( !this )
        goto LABEL_108;
      this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_108;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      if ( !v10 )
        goto LABEL_108;
      userServantEntity = v3->fields.userServantEntity;
      if ( userServantEntity )
        adjustHp = userServantEntity->fields.adjustHp;
      else
        adjustHp = 0;
      equipUserSvtEntity = v3->fields.equipUserSvtEntity;
      this = v4[10];
      if ( equipUserSvtEntity )
      {
        hp = equipUserSvtEntity->fields.hp;
        if ( !this )
          goto LABEL_108;
      }
      else
      {
        hp = 0;
        if ( !this )
          goto LABEL_108;
      }
      UIIconLabel__Set_39193520(
        (UIIconLabel_o *)this,
        3,
        v10->fields._Hp_k__BackingField,
        adjustHp,
        hp,
        0LL,
        0,
        0,
        0,
        0,
        0LL);
    }
    v15 = (UnityEngine_Object_o *)v4[12];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
    {
      this = v4[12];
      if ( !this )
        goto LABEL_108;
      this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_108;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      if ( !v10 )
        goto LABEL_108;
      v16 = v3->fields.userServantEntity;
      if ( v16 )
        adjustAtk = v16->fields.adjustAtk;
      else
        adjustAtk = 0;
      v18 = v3->fields.equipUserSvtEntity;
      this = v4[12];
      if ( v18 )
      {
        atk = v18->fields.atk;
        if ( !this )
          goto LABEL_108;
      }
      else
      {
        atk = 0;
        if ( !this )
          goto LABEL_108;
      }
      UIIconLabel__Set_39193520(
        (UIIconLabel_o *)this,
        5,
        v10->fields._Atk_k__BackingField,
        adjustAtk,
        atk,
        0LL,
        0,
        0,
        0,
        0,
        0LL);
    }
  }
  else
  {
    ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)this, 0, 0LL);
    this = v4[4];
    if ( !this )
      goto LABEL_108;
    ServantFaceIconComponent__NoMount_Support((ServantFaceIconComponent_o *)this, 0LL);
    this = v4[10];
    if ( !this )
      goto LABEL_108;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_108;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = v4[12];
    if ( !this )
      goto LABEL_108;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_108;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  v20 = (UnityEngine_Object_o *)v4[11];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
  {
    this = v4[11];
    if ( !this )
      goto LABEL_108;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_108;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v21 = v3->fields.equipUserSvtEntity;
    this = v4[11];
    if ( v21 )
    {
      v22 = v21->fields.hp;
      if ( !this )
        goto LABEL_108;
    }
    else
    {
      v22 = 0;
      if ( !this )
        goto LABEL_108;
    }
    UIIconLabel__Set_39193520((UIIconLabel_o *)this, 41, v22, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
  }
  v23 = (UnityEngine_Object_o *)v4[13];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
  {
    this = v4[13];
    if ( !this )
      goto LABEL_108;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_108;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v24 = v3->fields.equipUserSvtEntity;
    this = v4[13];
    if ( v24 )
    {
      v25 = v24->fields.atk;
      if ( !this )
        goto LABEL_108;
    }
    else
    {
      v25 = 0;
      if ( !this )
        goto LABEL_108;
    }
    UIIconLabel__Set_39193520((UIIconLabel_o *)this, 42, v25, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
  }
  v26 = v3->fields.equipUserSvtEntity;
  if ( v26 )
  {
    UserServantEntity__getEquipSkillInfo(v26, &skillInfoList, 1, 0LL);
    if ( !skillInfoList )
      goto LABEL_108;
    if ( !skillInfoList->max_length )
      sub_1B8661C(this, item);
    v27 = skillInfoList->m_Items[0];
    if ( !v27 )
      goto LABEL_108;
    this = v4[8];
    if ( !this )
      goto LABEL_108;
    UILabel__set_text((UILabel_o *)this, v27->fields.title, 0LL);
    v28 = (UILabel_o *)v4[9];
    MargeExplanation = SkillInfo__GetMargeExplanation(skillInfoList, 1, 0LL);
    WrapControlText__textAdjust(v28, MargeExplanation, 22, 0, 0LL);
    this = v4[5];
    if ( !this )
      goto LABEL_108;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_108;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = v4[6];
    if ( !this )
      goto LABEL_108;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_108;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v30 = v3->fields.equipUserSvtEntity;
    if ( !v30 )
      goto LABEL_108;
    v31 = (UISprite_o *)v4[6];
    v33 = *(_QWORD *)&v30->fields.svtId.fields.currentCryptoKey;
    v32 = *(_QWORD *)&v30->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v43.fields.currentCryptoKey = v33;
    *(_QWORD *)&v43.fields.fakeValue = v32;
    v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v43, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEquipFace(v31, v34, 0LL, 0LL);
    v35 = (UnityEngine_Object_o *)v4[7];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Object__op_Inequality(v35, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( v3->fields.equipUserSvtEntity )
      {
        equipServantEntity = v3->fields.equipServantEntity;
        if ( !equipServantEntity )
          goto LABEL_108;
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
        v40 = this;
        if ( limitMax < 1 )
        {
          item = 0LL;
          if ( !this )
            goto LABEL_108;
        }
        else
        {
          this = (SupportServantEquipServantItemDraw_o *)SupportServantEquipServantItem__get_EquipLimitCount(v3, v39);
          item = (SupportServantEquipServantItem_o *)((int)this >= limitMax);
          if ( !v40 )
            goto LABEL_108;
        }
        this = v40;
        goto LABEL_101;
      }
      goto LABEL_108;
    }
  }
  else
  {
    this = v4[8];
    if ( !this )
      goto LABEL_108;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = v4[9];
    if ( !this )
      goto LABEL_108;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = v4[5];
    if ( !this )
      goto LABEL_108;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_108;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = v4[6];
    if ( !this )
      goto LABEL_108;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_108;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    v38 = (UnityEngine_Object_o *)v4[7];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v38, 0LL, 0LL) )
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
LABEL_101:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)item, 0LL);
          goto LABEL_102;
        }
      }
LABEL_108:
      sub_1B86614(this, item);
    }
  }
LABEL_102:
  v41 = (UnityEngine_Object_o *)v4[14];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v41, 0LL, 0LL) )
  {
    this = v4[14];
    if ( !this )
      goto LABEL_108;
    UICommonButton__SetColliderEnable((UICommonButton_o *)this, v3->fields.equipUserSvtEntity != 0LL, 1, 0LL);
  }
}