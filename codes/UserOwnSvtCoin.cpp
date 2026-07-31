void UserOwnSvtCoin___ctor(
        UserOwnSvtCoin_o *this,
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
  __int64 v13; // x1
  Il2CppObject *Master_object; // x0
  __int64 v15; // x1
  UserSvtCoinEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5939C5A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5939C5A = 1;
  }
  entity = 0;
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
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
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
    sub_21FFECC(Master_object, v15);
  this->fields._Num_k__BackingField = entity->fields.num;
}