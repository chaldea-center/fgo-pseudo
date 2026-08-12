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

  if ( (byte_596CD4F & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_596CD4F = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton
    || (decideButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    decideButton,
                                                    (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)decideButton, isInput, 0),
        (decideButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0) )
  {
    sub_2213CDC(decideButton, isInput);
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
        bool isGrandEnable,
        const MethodInfo *method)
{
  SupportServantEquipServantItem_o *v9; // x19
  SupportServantEquipServantItemDraw_o **v10; // x20
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *v14; // x24
  ServantOverwriteStatus_o *v15; // x23
  __int64 v16; // x2
  UIIconLabel_o *v17; // x24
  int32_t Hp_k__BackingField; // w26
  int32_t v19; // w3
  __int64 v20; // x2
  struct UserServantEntity_o *equipUserSvtEntity; // x8
  int32_t hp; // w4
  UnityEngine_Object_o *v23; // x22
  UIIconLabel_o *v24; // x22
  int32_t Atk_k__BackingField; // w23
  int32_t v26; // w3
  struct UserServantEntity_o *v27; // x8
  int32_t atk; // w4
  UnityEngine_Object_o *v29; // x21
  __int64 v30; // x2
  struct UserServantEntity_o *v31; // x8
  int32_t v32; // w2
  UnityEngine_Object_o *v33; // x21
  struct UserServantEntity_o *v34; // x8
  int32_t v35; // w2
  UserServantEntity_o *v36; // x0
  SkillInfo_o *v37; // x8
  UILabel_o *v38; // x21
  System_String_o *MargeExplanation; // x0
  __int64 v40; // x2
  struct UserServantEntity_o *v41; // x8
  UISprite_o *v42; // x21
  __int64 v43; // x22
  __int64 v44; // x23
  __int64 v45; // x1
  __int64 v46; // x2
  int32_t v47; // w22
  __int64 v48; // x1
  __int64 v49; // x2
  UnityEngine_Object_o *v50; // x21
  __int64 v51; // x2
  struct ServantEntity_o *equipServantEntity; // x8
  int limitMax; // w22
  __int64 v54; // x1
  __int64 v55; // x2
  UnityEngine_Object_o *v56; // x21
  const MethodInfo *v57; // x1
  SupportServantEquipServantItemDraw_o *v58; // x21
  UnityEngine_Object_o *v59; // x21
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  v9 = item;
  v10 = (SupportServantEquipServantItemDraw_o **)this;
  if ( (byte_596CD4E & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (SupportServantEquipServantItemDraw_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596CD4E = 1;
  }
  skillInfoList = 0;
  if ( !v9 )
    goto LABEL_113;
  this = v10[4];
  if ( v9->fields.userServantEntity )
  {
    if ( !this )
      goto LABEL_113;
    ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)this, 1, 0);
    this = v10[4];
    if ( !this )
      goto LABEL_113;
    ServantFaceIconComponent__Set_48049524(
      (ServantFaceIconComponent_o *)this,
      v9->fields.userServantEntity,
      v9->fields.iconLabelInfo,
      0,
      0,
      0);
    this = (SupportServantEquipServantItemDraw_o *)v9->fields.userServantEntity;
    if ( !this )
      goto LABEL_113;
    OverwriteStatus = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)this, 0, 0);
    v14 = (UnityEngine_Object_o *)v10[10];
    v15 = OverwriteStatus;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
    if ( UnityEngine_Object__op_Inequality(v14, 0, 0) )
    {
      this = v10[10];
      if ( !this )
        goto LABEL_113;
      this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
      if ( !this )
        goto LABEL_113;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      if ( !v15 )
        goto LABEL_113;
      this = (SupportServantEquipServantItemDraw_o *)v9->fields.userServantEntity;
      v17 = (UIIconLabel_o *)v10[10];
      Hp_k__BackingField = v15->fields._Hp_k__BackingField;
      if ( this )
      {
        this = (SupportServantEquipServantItemDraw_o *)UserServantEntity__get_HpBoostValue(
                                                         (UserServantEntity_o *)this,
                                                         0);
        v19 = (int)this;
      }
      else
      {
        v19 = 0;
      }
      equipUserSvtEntity = v9->fields.equipUserSvtEntity;
      if ( equipUserSvtEntity )
      {
        hp = equipUserSvtEntity->fields.hp;
        if ( !v17 )
          goto LABEL_113;
      }
      else
      {
        hp = 0;
        if ( !v17 )
          goto LABEL_113;
      }
      UIIconLabel__Set_48071660(v17, 3, Hp_k__BackingField + addBaseHp, v19, hp, 0, 0, 0, 0, 0, 0);
    }
    v23 = (UnityEngine_Object_o *)v10[12];
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v16);
    if ( UnityEngine_Object__op_Inequality(v23, 0, 0) )
    {
      this = v10[12];
      if ( !this )
        goto LABEL_113;
      this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
      if ( !this )
        goto LABEL_113;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      if ( !v15 )
        goto LABEL_113;
      this = (SupportServantEquipServantItemDraw_o *)v9->fields.userServantEntity;
      v24 = (UIIconLabel_o *)v10[12];
      Atk_k__BackingField = v15->fields._Atk_k__BackingField;
      if ( this )
      {
        this = (SupportServantEquipServantItemDraw_o *)UserServantEntity__get_AtkBoostValue(
                                                         (UserServantEntity_o *)this,
                                                         0);
        v26 = (int)this;
      }
      else
      {
        v26 = 0;
      }
      v27 = v9->fields.equipUserSvtEntity;
      if ( v27 )
      {
        atk = v27->fields.atk;
        if ( !v24 )
          goto LABEL_113;
      }
      else
      {
        atk = 0;
        if ( !v24 )
          goto LABEL_113;
      }
      UIIconLabel__Set_48071660(v24, 5, Atk_k__BackingField + addBaseAtk, v26, atk, 0, 0, 0, 0, 0, 0);
    }
  }
  else
  {
    if ( !this )
      goto LABEL_113;
    ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)this, 0, 0);
    this = v10[4];
    if ( isGrandEnable )
    {
      if ( !this )
        goto LABEL_113;
      ServantFaceIconComponent__NoMountGrandSupport((ServantFaceIconComponent_o *)this, 0);
    }
    else
    {
      if ( !this )
        goto LABEL_113;
      ServantFaceIconComponent__NoMountSupport((ServantFaceIconComponent_o *)this, 0);
    }
    this = v10[10];
    if ( !this )
      goto LABEL_113;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
    if ( !this )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = v10[12];
    if ( !this )
      goto LABEL_113;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
    if ( !this )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  v29 = (UnityEngine_Object_o *)v10[11];
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v20);
  if ( UnityEngine_Object__op_Inequality(v29, 0, 0) )
  {
    this = v10[11];
    if ( !this )
      goto LABEL_113;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
    if ( !this )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v31 = v9->fields.equipUserSvtEntity;
    this = v10[11];
    if ( v31 )
    {
      v32 = v31->fields.hp;
      if ( !this )
        goto LABEL_113;
    }
    else
    {
      v32 = 0;
      if ( !this )
        goto LABEL_113;
    }
    UIIconLabel__Set_48071660((UIIconLabel_o *)this, 41, v32, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  v33 = (UnityEngine_Object_o *)v10[13];
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v30);
  if ( UnityEngine_Object__op_Inequality(v33, 0, 0) )
  {
    this = v10[13];
    if ( !this )
      goto LABEL_113;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
    if ( !this )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v34 = v9->fields.equipUserSvtEntity;
    this = v10[13];
    if ( v34 )
    {
      v35 = v34->fields.atk;
      if ( !this )
        goto LABEL_113;
    }
    else
    {
      v35 = 0;
      if ( !this )
        goto LABEL_113;
    }
    UIIconLabel__Set_48071660((UIIconLabel_o *)this, 42, v35, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  v36 = v9->fields.equipUserSvtEntity;
  if ( v36 )
  {
    UserServantEntity__getEquipSkillInfo(v36, &skillInfoList, 1, 0);
    if ( !skillInfoList )
      goto LABEL_113;
    if ( !LODWORD(skillInfoList->max_length) )
      sub_2213CE4(this);
    v37 = skillInfoList->m_Items[0];
    if ( !v37 )
      goto LABEL_113;
    this = v10[8];
    if ( !this )
      goto LABEL_113;
    UILabel__set_text((UILabel_o *)this, v37->fields.title, 0);
    v38 = (UILabel_o *)v10[9];
    MargeExplanation = SkillInfo__GetMargeExplanation(skillInfoList, 1, 0);
    WrapControlText__textAdjust(v38, MargeExplanation, 22, 0, 0);
    this = v10[5];
    if ( !this )
      goto LABEL_113;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
    if ( !this )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = v10[6];
    if ( !this )
      goto LABEL_113;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
    if ( !this )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v41 = v9->fields.equipUserSvtEntity;
    if ( !v41 )
      goto LABEL_113;
    v42 = (UISprite_o *)v10[6];
    v43 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
    v44 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, item, v40);
    *(_QWORD *)&v61.fields.currentCryptoKey = v43;
    *(_QWORD *)&v61.fields.fakeValue = v44;
    v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v61, 0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v45, v46);
    AtlasManager__SetEquipFace(v42, v47, 0, 0);
    v50 = (UnityEngine_Object_o *)v10[7];
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48, v49);
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Object__op_Inequality(v50, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( v9->fields.equipUserSvtEntity )
      {
        equipServantEntity = v9->fields.equipServantEntity;
        if ( !equipServantEntity )
          goto LABEL_113;
        limitMax = equipServantEntity->fields.limitMax;
      }
      else
      {
        limitMax = 0;
      }
      this = v10[7];
      if ( this )
      {
        this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
        v58 = this;
        if ( limitMax < 1 )
        {
          item = 0;
          if ( !this )
            goto LABEL_113;
        }
        else
        {
          this = (SupportServantEquipServantItemDraw_o *)SupportServantEquipServantItem__get_EquipLimitCount(v9, v57);
          item = (SupportServantEquipServantItem_o *)((int)this >= limitMax);
          if ( !v58 )
            goto LABEL_113;
        }
        this = v58;
        goto LABEL_106;
      }
      goto LABEL_113;
    }
  }
  else
  {
    this = v10[8];
    if ( !this )
      goto LABEL_113;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
    this = v10[9];
    if ( !this )
      goto LABEL_113;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
    this = v10[5];
    if ( !this )
      goto LABEL_113;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
    if ( !this )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v9->fields.userServantEntity != 0, 0);
    this = v10[6];
    if ( !this )
      goto LABEL_113;
    this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
    if ( !this )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    v56 = (UnityEngine_Object_o *)v10[7];
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54, v55);
    if ( UnityEngine_Object__op_Inequality(v56, 0, 0) )
    {
      this = v10[7];
      if ( this )
      {
        this = (SupportServantEquipServantItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
        if ( this )
        {
          LOBYTE(item) = 0;
LABEL_106:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)item, 0);
          goto LABEL_107;
        }
      }
LABEL_113:
      sub_2213CDC(this, item);
    }
  }
LABEL_107:
  v59 = (UnityEngine_Object_o *)v10[14];
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v51);
  if ( UnityEngine_Object__op_Inequality(v59, 0, 0) )
  {
    this = v10[14];
    if ( !this )
      goto LABEL_113;
    UICommonButton__SetColliderEnable((UICommonButton_o *)this, v9->fields.equipUserSvtEntity != 0, 1, 0);
  }
}