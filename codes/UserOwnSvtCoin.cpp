void __fastcall UserOwnSvtCoin___ctor(
        UserOwnSvtCoin_o *this,
        ItemEntity_o *itemEntity,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  UserSvtCoinEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5C3D8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5C3D8 = 1;
  }
  entity = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._ItemEntity_k__BackingField = itemEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._ItemEntity_k__BackingField,
    (int32_t)itemEntity,
    v7,
    v8);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( !userGameEntity || !itemEntity || !Master_object )
    goto LABEL_12;
  Master_object = (Il2CppObject *)UserSvtCoinMaster__TryGetEntity(
                                    (UserSvtCoinMaster_o *)Master_object,
                                    &entity,
                                    userGameEntity->fields.userId,
                                    itemEntity->fields.imageId,
                                    0LL);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !entity )
LABEL_12:
    sub_1B8880C(Master_object, v10);
  this->fields._Num_k__BackingField = entity->fields.num;
}