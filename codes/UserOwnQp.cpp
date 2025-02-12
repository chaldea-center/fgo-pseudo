void __fastcall UserOwnQp___ctor(
        UserOwnQp_o *this,
        ItemEntity_o *itemEntity,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x0
  __int64 v14; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._ItemEntity_k__BackingField = itemEntity;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._ItemEntity_k__BackingField,
    (int64_t)itemEntity,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( !userGameEntity )
    sub_1C13F80(v13, v14);
  this->fields._Num_k__BackingField = userGameEntity->fields.qp;
}