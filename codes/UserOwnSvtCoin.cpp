void UserOwnSvtCoin___ctor(
        UserOwnSvtCoin_o *this,
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
  Il2CppObject *Master_object; // x0
  __int64 v14; // x1
  UserSvtCoinEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CEFB9F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    byte_4CEFB9F = 1;
  }
  entity = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._ItemEntity_k__BackingField = itemEntity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._ItemEntity_k__BackingField,
    (int32_t)itemEntity,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( !userGameEntity || !itemEntity || !Master_object )
    goto LABEL_12;
  Master_object = (Il2CppObject *)UserSvtCoinMaster__TryGetEntity(
                                    (UserSvtCoinMaster_o *)Master_object,
                                    &entity,
                                    userGameEntity->fields.userId,
                                    itemEntity->fields.imageId,
                                    0);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !entity )
LABEL_12:
    sub_1C7BD40(Master_object, v14);
  this->fields._Num_k__BackingField = entity->fields.num;
}