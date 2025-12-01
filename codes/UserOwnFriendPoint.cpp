void UserOwnFriendPoint___ctor(
        UserOwnFriendPoint_o *this,
        ItemEntity_o *itemEntity,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x0
  __int64 v14; // x1

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._ItemEntity_k__BackingField = itemEntity;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._ItemEntity_k__BackingField,
    (int32_t)itemEntity,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( !userGameEntity )
    sub_1C71608(v13, v14);
  this->fields._Num_k__BackingField = UserGameEntity__GetFriendPoint(userGameEntity, 0);
}