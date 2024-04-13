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

  if ( (byte_42EC55F & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)parse, (_DWORD)str, method);
    byte_42EC55F = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B5D69C(0LL, v5);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC55E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20662/*"masterName"*/, (_DWORD)method, v2, v3);
    byte_42EC55E = 1;
  }
  return (System_String_o *)StringLiteral_20662/*"masterName"*/;
}