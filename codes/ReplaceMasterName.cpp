void __fastcall ReplaceMasterName___ctor(ReplaceMasterName_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall ReplaceMasterName__Replace(
        ReplaceMasterName_o *this,
        ParseBattleMessage_o *parse,
        System_String_o *str,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v5; // x1
  System_String_o *name; // x19

  if ( (byte_438EF5C & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    byte_438EF5C = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B7769C(0LL, v5);
  name = SelfUserGame->fields.name;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__ReplaceNameTag(name, 0, 0LL);
}


System_String_o *__fastcall ReplaceMasterName__get_Tag(ReplaceMasterName_o *this, const MethodInfo *method)
{
  if ( (byte_438EF5B & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20818/*"masterName"*/);
    byte_438EF5B = 1;
  }
  return (System_String_o *)StringLiteral_20818/*"masterName"*/;
}