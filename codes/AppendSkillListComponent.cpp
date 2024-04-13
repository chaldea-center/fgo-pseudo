void __fastcall AppendSkillListComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB768 & 1) == 0 )
  {
    sub_B5D5C4(&AppendSkillListComponent_TypeInfo, v1, v2, v3);
    byte_42EB768 = 1;
  }
  AppendSkillListComponent_TypeInfo->static_fields->SKILL_LEVEL_LABEL_MAX_LENGTH = 122;
}


void __fastcall AppendSkillListComponent___ctor(AppendSkillListComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall AppendSkillListComponent__Clear(AppendSkillListComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *skillLevelListLabel; // x0

  if ( (byte_42EB766 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EB766 = 1;
  }
  skillLevelListLabel = this->fields.skillLevelListLabel;
  if ( !skillLevelListLabel
    || (UILabel__set_text(skillLevelListLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (skillLevelListLabel = (UILabel_o *)this->fields.skillIconSprite) == 0LL) )
  {
    sub_B5D69C(skillLevelListLabel, method);
  }
  UISprite__set_spriteName((UISprite_o *)skillLevelListLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall AppendSkillListComponent__Set(
        AppendSkillListComponent_o *this,
        System_String_o *skillLevelListText,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  const MethodInfo *v12; // x1
  UILabel_o *skillLevelListLabel; // x0
  UILabel_o *v14; // x20
  UISprite_o *skillIconSprite; // x20

  if ( (byte_42EB767 & 1) == 0 )
  {
    sub_B5D5C4(&AppendSkillListComponent_TypeInfo, (_DWORD)skillLevelListText, (_DWORD)method, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_19519/*"icon_append_mini"*/, v9, v10, v11);
    byte_42EB767 = 1;
  }
  if ( System_String__IsNullOrEmpty(skillLevelListText, 0LL) )
  {
    AppendSkillListComponent__Clear(this, v12);
  }
  else
  {
    skillLevelListLabel = this->fields.skillLevelListLabel;
    if ( !skillLevelListLabel )
      goto LABEL_15;
    UILabel__set_text(skillLevelListLabel, skillLevelListText, 0LL);
    v14 = this->fields.skillLevelListLabel;
    skillLevelListLabel = (UILabel_o *)AppendSkillListComponent_TypeInfo;
    if ( (BYTE3(AppendSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AppendSkillListComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AppendSkillListComponent_TypeInfo);
    }
    if ( !v14 )
      goto LABEL_15;
    UILabel__SetCondensedScale(v14, AppendSkillListComponent_TypeInfo->static_fields->SKILL_LEVEL_LABEL_MAX_LENGTH, 0LL);
    skillIconSprite = this->fields.skillIconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(skillIconSprite, (System_String_o *)StringLiteral_19519/*"icon_append_mini"*/, 0LL);
    skillLevelListLabel = (UILabel_o *)this->fields.skillIconSprite;
    if ( !skillLevelListLabel )
LABEL_15:
      sub_B5D69C(skillLevelListLabel, v12);
    ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))skillLevelListLabel->klass->vtable._33_MakePixelPerfect.method)(
      skillLevelListLabel,
      skillLevelListLabel->klass->vtable._34_get_minWidth.methodPtr);
  }
}