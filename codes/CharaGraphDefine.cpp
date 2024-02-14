void __fastcall CharaGraphDefine_CharaGraphItemBulkModifyArgs___ctor(
        CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *this,
        bool isResetSwap,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._IsResetSwap_k__BackingField = isResetSwap;
}


bool __fastcall CharaGraphDefine_CharaGraphItemBulkModifyArgs__get_IsResetSwap(
        CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._IsResetSwap_k__BackingField;
}


UserGameEntity_o *__fastcall CharaGraphDefine_CharaGraphItemBulkModifyArgs__get_UserGameEntity(
        CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_userGameEntity; // x19
  System_Int32_array **userGameEntity; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  p_userGameEntity = (BattleServantConfConponent_o *)&this->fields.userGameEntity;
  userGameEntity = (System_Int32_array **)this->fields.userGameEntity;
  if ( !userGameEntity )
  {
    userGameEntity = (System_Int32_array **)UserGameMaster__getSelfUserGame(0LL);
    p_userGameEntity->klass = (BattleServantConfConponent_c *)userGameEntity;
    sub_B0D840(p_userGameEntity, userGameEntity, v4, v5, v6, v7, v8, v9);
  }
  return (UserGameEntity_o *)userGameEntity;
}


void __fastcall CharaGraphDefine_CharaGraphRootInfo___ctor(
        CharaGraphDefine_CharaGraphRootInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall CharaGraphDefine_CharaGraphRootInfo__get_ModeKind(
        CharaGraphDefine_CharaGraphRootInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._ModeKind_k__BackingField;
}


void __fastcall CharaGraphDefine_CharaGraphRootInfo__set_ModeKind(
        CharaGraphDefine_CharaGraphRootInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ModeKind_k__BackingField = value;
}