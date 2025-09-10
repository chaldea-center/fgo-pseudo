void UserOwnStone___ctor(
        UserOwnStone_o *this,
        ItemEntity_o *itemEntity,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._ItemEntity_k__BackingField = itemEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._ItemEntity_k__BackingField, (int32_t)itemEntity, v7, v8);
  if ( !userGameEntity )
    sub_1C2D6EC(v9, v10);
  this->fields._Num_k__BackingField = userGameEntity->fields.stone;
}