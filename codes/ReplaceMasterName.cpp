void ReplaceMasterName___ctor(ReplaceMasterName_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *ReplaceMasterName__Replace(
        ReplaceMasterName_o *this,
        ParseBattleMessage_o *parse,
        System_String_o *str,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v5; // x1
  System_String_o *name; // x19

  if ( (byte_5973E87 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_5973E87 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    sub_2213CDC(0, v5);
  name = SelfUserGame->fields.name;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
  return LocalizationManager__ReplaceNameTag(name, 0, 0);
}


System_String_o *ReplaceMasterName__get_Tag(ReplaceMasterName_o *this, const MethodInfo *method)
{
  if ( (byte_5973E86 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22552/*"masterName"*/);
    byte_5973E86 = 1;
  }
  return (System_String_o *)StringLiteral_22552/*"masterName"*/;
}