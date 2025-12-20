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

  if ( (byte_4D2FD40 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    byte_4D2FD40 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    sub_1C942F0(0, v5);
  name = SelfUserGame->fields.name;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__ReplaceNameTag(name, 0, 0);
}


System_String_o *ReplaceMasterName__get_Tag(ReplaceMasterName_o *this, const MethodInfo *method)
{
  if ( (byte_4D2FD3F & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_21663/*"masterName"*/);
    byte_4D2FD3F = 1;
  }
  return (System_String_o *)StringLiteral_21663/*"masterName"*/;
}