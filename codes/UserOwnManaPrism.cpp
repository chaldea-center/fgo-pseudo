void UserOwnManaPrism___ctor(
        UserOwnManaPrism_o *this,
        ItemEntity_o *itemEntity,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x0
  __int64 v14; // x1

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._ItemEntity_k__BackingField = itemEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ItemEntity_k__BackingField,
    (int32_t)itemEntity,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( !userGameEntity )
    sub_21FFECC(v13, v14);
  this->fields._Num_k__BackingField = userGameEntity->fields.mana;
}