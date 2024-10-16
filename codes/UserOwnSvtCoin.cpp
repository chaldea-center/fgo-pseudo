void __fastcall UserOwnSvtCoin___ctor(
        UserOwnSvtCoin_o *this,
        ItemEntity_o *itemEntity,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  UserSvtCoinEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4AB6FE1 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMaster_UserSvtCoinMaster___, itemEntity);
    sub_1BAB41C(&DataManager_TypeInfo, v7);
    byte_4AB6FE1 = 1;
  }
  entity = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._ItemEntity_k__BackingField = itemEntity;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields._ItemEntity_k__BackingField,
    (int32_t)itemEntity,
    v8,
    v9);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
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
    sub_1BAB678(Master_object, v11);
  this->fields._Num_k__BackingField = entity->fields.num;
}