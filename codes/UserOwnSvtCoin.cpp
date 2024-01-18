void __fastcall UserOwnSvtCoin___ctor(
        UserOwnSvtCoin_o *this,
        ItemEntity_o *itemEntity,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v15; // x1
  UserSvtCoinEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4187077 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserSvtCoinMaster___, itemEntity);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    byte_4187077 = 1;
  }
  entity = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._ItemEntity_k__BackingField = itemEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._ItemEntity_k__BackingField,
    (System_Int32_array **)itemEntity,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( !userGameEntity || !itemEntity || !Master_WarQuestSelectionMaster )
    goto LABEL_13;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)UserSvtCoinMaster__TryGetEntity(
                                                                  (UserSvtCoinMaster_o *)Master_WarQuestSelectionMaster,
                                                                  &entity,
                                                                  userGameEntity->fields.userId,
                                                                  itemEntity->fields.imageId,
                                                                  0LL);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
    return;
  if ( !entity )
LABEL_13:
    sub_B2C434(Master_WarQuestSelectionMaster, v15);
  this->fields._Num_k__BackingField = entity->fields.num;
}