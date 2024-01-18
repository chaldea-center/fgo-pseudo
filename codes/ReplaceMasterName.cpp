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

  if ( (byte_418AD7E & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, parse);
    byte_418AD7E = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B2C434(0LL, v5);
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
  if ( (byte_418AD7D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20402/*"masterName"*/, method);
    byte_418AD7D = 1;
  }
  return (System_String_o *)StringLiteral_20402/*"masterName"*/;
}