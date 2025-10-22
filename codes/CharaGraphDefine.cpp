void CharaGraphDefine_CharaGraphItemBulkModifyArgs___ctor(
        CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *this,
        bool isResetSwap,
        const MethodInfo *method)
{
  bool v3; // w20

  v3 = isResetSwap;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._IsResetSwap_k__BackingField = v3;
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
  CGThumbnailListItem_o *p_userGameEntity; // x19
  UserGameEntity_o *userGameEntity; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  p_userGameEntity = (CGThumbnailListItem_o *)&this->fields.userGameEntity;
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
  {
    userGameEntity = UserGameMaster__getSelfUserGame(0);
    p_userGameEntity->klass = (CGThumbnailListItem_c *)userGameEntity;
    sub_1C3E508(p_userGameEntity, (int32_t)userGameEntity, v4, v5);
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