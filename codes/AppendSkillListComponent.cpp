void __fastcall AppendSkillListComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B155F8 & 1) == 0 )
  {
    sub_1BCA7E0(&AppendSkillListComponent_TypeInfo, v1, v2);
    byte_4B155F8 = 1;
  }
  AppendSkillListComponent_TypeInfo->static_fields->SKILL_LEVEL_LABEL_MAX_LENGTH = 122;
}


void __fastcall AppendSkillListComponent___ctor(AppendSkillListComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall AppendSkillListComponent__Clear(AppendSkillListComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *skillLevelListLabel; // x0

  if ( (byte_4B155F6 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B155F6 = 1;
  }
  skillLevelListLabel = this->fields.skillLevelListLabel;
  if ( !skillLevelListLabel
    || (UILabel__set_text(skillLevelListLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (skillLevelListLabel = (UILabel_o *)this->fields.skillIconSprite) == 0LL) )
  {
    sub_1BCAA3C(skillLevelListLabel, method);
  }
  UISprite__set_spriteName((UISprite_o *)skillLevelListLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall AppendSkillListComponent__Set(
        AppendSkillListComponent_o *this,
        System_String_o *skillLevelListText,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x1
  UILabel_o *skillLevelListLabel; // x0
  UILabel_o *v11; // x20
  __int64 v12; // x1
  UISprite_o *skillIconSprite; // x20

  if ( (byte_4B155F7 & 1) == 0 )
  {
    sub_1BCA7E0(&AppendSkillListComponent_TypeInfo, skillLevelListText, method);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_20291/*"icon_append_mini"*/, v7, v8);
    byte_4B155F7 = 1;
  }
  if ( System_String__IsNullOrEmpty(skillLevelListText, 0LL) )
  {
    AppendSkillListComponent__Clear(this, v9);
  }
  else
  {
    skillLevelListLabel = this->fields.skillLevelListLabel;
    if ( !skillLevelListLabel )
      goto LABEL_13;
    UILabel__set_text(skillLevelListLabel, skillLevelListText, 0LL);
    v11 = this->fields.skillLevelListLabel;
    skillLevelListLabel = (UILabel_o *)AppendSkillListComponent_TypeInfo;
    if ( !AppendSkillListComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AppendSkillListComponent_TypeInfo, v9);
    if ( !v11 )
      goto LABEL_13;
    UILabel__SetCondensedScale(v11, AppendSkillListComponent_TypeInfo->static_fields->SKILL_LEVEL_LABEL_MAX_LENGTH, 0LL);
    skillIconSprite = this->fields.skillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
    AtlasManager__SetEventSprite(skillIconSprite, (System_String_o *)StringLiteral_20291/*"icon_append_mini"*/, 0LL);
    skillLevelListLabel = (UILabel_o *)this->fields.skillIconSprite;
    if ( !skillLevelListLabel )
LABEL_13:
      sub_1BCAA3C(skillLevelListLabel, v9);
    ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))skillLevelListLabel->klass->vtable._33_MakePixelPerfect.method)(
      skillLevelListLabel,
      skillLevelListLabel->klass->vtable._34_get_minWidth.methodPtr);
  }
}