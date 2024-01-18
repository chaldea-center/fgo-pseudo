void __fastcall UserOwnFriendPoint___ctor(
        UserOwnFriendPoint_o *this,
        ItemEntity_o *itemEntity,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x0
  const MethodInfo *v14; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._ItemEntity_k__BackingField = itemEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._ItemEntity_k__BackingField,
    (System_Int32_array **)itemEntity,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( !userGameEntity )
    sub_B2C434(v13, v14);
  this->fields._Num_k__BackingField = UserGameEntity__GetFriendPoint(userGameEntity, v14);
}