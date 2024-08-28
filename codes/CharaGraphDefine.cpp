void __fastcall CharaGraphDefine_CharaGraphItemBulkModifyArgs___ctor(
        CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *this,
        bool isResetSwap,
        const MethodInfo *method)
{
  bool v3; // w20

  v3 = isResetSwap;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._IsResetSwap_k__BackingField = v3;
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
  ServantStatusBattleListViewItem_o *p_userGameEntity; // x19
  UserGameEntity_o *userGameEntity; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  p_userGameEntity = (ServantStatusBattleListViewItem_o *)&this->fields.userGameEntity;
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
  {
    userGameEntity = UserGameMaster__getSelfUserGame(0LL);
    p_userGameEntity->klass = (ServantStatusBattleListViewItem_c *)userGameEntity;
    sub_1B71570(p_userGameEntity, (int32_t)userGameEntity, v4, v5);
  }
  return userGameEntity;
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