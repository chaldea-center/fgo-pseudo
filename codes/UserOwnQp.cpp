void __fastcall UserOwnQp___ctor(
        UserOwnQp_o *this,
        ItemEntity_o *itemEntity,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._ItemEntity_k__BackingField = itemEntity;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._ItemEntity_k__BackingField, (int32_t)itemEntity, v7, v8);
  if ( !userGameEntity )
    sub_1BCB254(v9, v10);
  this->fields._Num_k__BackingField = userGameEntity->fields.qp;
}