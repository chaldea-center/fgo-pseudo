void CharaGraphDefine_CharaGraphItemBulkModifyArgs___ctor(
        CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *this,
        bool isResetSwap,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._IsResetSwap_k__BackingField = isResetSwap;
}


bool CharaGraphDefine_CharaGraphItemBulkModifyArgs__get_IsResetSwap(
        CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._IsResetSwap_k__BackingField;
}


UserGameEntity_o *CharaGraphDefine_CharaGraphItemBulkModifyArgs__get_UserGameEntity(
        CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *this,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_userGameEntity; // x19
  UserGameEntity_o *userGameEntity; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  p_userGameEntity = (MissionNaviTransitionBoardItem_o *)&this->fields.userGameEntity;
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
  {
    userGameEntity = UserGameMaster__getSelfUserGame(0);
    p_userGameEntity->klass = (MissionNaviTransitionBoardItem_c *)userGameEntity;
    sub_21FFBF4(p_userGameEntity, (int32_t)userGameEntity, v4, v5, v6, v7, v8, v9);
  }
  return userGameEntity;
}


void CharaGraphDefine_CharaGraphRootInfo___ctor(CharaGraphDefine_CharaGraphRootInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t CharaGraphDefine_CharaGraphRootInfo__get_ModeKind(
        CharaGraphDefine_CharaGraphRootInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._ModeKind_k__BackingField;
}


void CharaGraphDefine_CharaGraphRootInfo__set_ModeKind(
        CharaGraphDefine_CharaGraphRootInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ModeKind_k__BackingField = value;
}