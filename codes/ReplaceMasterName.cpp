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
  System_String_o *name; // x19

  if ( (byte_49FF098 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, parse);
    byte_49FF098 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_1B64324(0LL);
  name = SelfUserGame->fields.name;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__ReplaceNameTag(name, 0, 0LL);
}


System_String_o *__fastcall ReplaceMasterName__get_Tag(ReplaceMasterName_o *this, const MethodInfo *method)
{
  if ( (byte_49FF097 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_21225/*"masterName"*/, method);
    byte_49FF097 = 1;
  }
  return (System_String_o *)StringLiteral_21225/*"masterName"*/;
}