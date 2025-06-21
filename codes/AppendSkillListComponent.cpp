void __fastcall AppendSkillListComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B1B8AC & 1) == 0 )
  {
    sub_1BCAFF8(&AppendSkillListComponent_TypeInfo, v1);
    byte_4B1B8AC = 1;
  }
  AppendSkillListComponent_TypeInfo->static_fields->SKILL_LEVEL_LABEL_MAX_LENGTH = 122;
}


void __fastcall AppendSkillListComponent___ctor(AppendSkillListComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall AppendSkillListComponent__Clear(AppendSkillListComponent_o *this, const MethodInfo *method)
{
  UILabel_o *skillLevelListLabel; // x0

  if ( (byte_4B1B8AA & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1/*""*/, method);
    byte_4B1B8AA = 1;
  }
  skillLevelListLabel = this->fields.skillLevelListLabel;
  if ( !skillLevelListLabel
    || (UILabel__set_text(skillLevelListLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (skillLevelListLabel = (UILabel_o *)this->fields.skillIconSprite) == 0LL) )
  {
    sub_1BCB254(skillLevelListLabel, method);
  }
  UISprite__set_spriteName((UISprite_o *)skillLevelListLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall AppendSkillListComponent__Set(
        AppendSkillListComponent_o *this,
        System_String_o *skillLevelListText,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  UILabel_o *skillLevelListLabel; // x0
  UILabel_o *v9; // x20
  UISprite_o *skillIconSprite; // x20

  if ( (byte_4B1B8AB & 1) == 0 )
  {
    sub_1BCAFF8(&AppendSkillListComponent_TypeInfo, skillLevelListText);
    sub_1BCAFF8(&AtlasManager_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_19946/*"icon_append_mini"*/, v6);
    byte_4B1B8AB = 1;
  }
  if ( System_String__IsNullOrEmpty(skillLevelListText, 0LL) )
  {
    AppendSkillListComponent__Clear(this, v7);
  }
  else
  {
    skillLevelListLabel = this->fields.skillLevelListLabel;
    if ( !skillLevelListLabel )
      goto LABEL_13;
    UILabel__set_text(skillLevelListLabel, skillLevelListText, 0LL);
    v9 = this->fields.skillLevelListLabel;
    skillLevelListLabel = (UILabel_o *)AppendSkillListComponent_TypeInfo;
    if ( !AppendSkillListComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AppendSkillListComponent_TypeInfo);
    if ( !v9 )
      goto LABEL_13;
    UILabel__SetCondensedScale(
      v9,
      AppendSkillListComponent_TypeInfo->static_fields->SKILL_LEVEL_LABEL_MAX_LENGTH,
      0,
      0LL);
    skillIconSprite = this->fields.skillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(skillIconSprite, (System_String_o *)StringLiteral_19946/*"icon_append_mini"*/, 0LL);
    skillLevelListLabel = (UILabel_o *)this->fields.skillIconSprite;
    if ( !skillLevelListLabel )
LABEL_13:
      sub_1BCB254(skillLevelListLabel, v7);
    ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))skillLevelListLabel->klass->vtable._33_MakePixelPerfect.method)(
      skillLevelListLabel,
      skillLevelListLabel->klass->vtable._34_get_minWidth.methodPtr);
  }
}