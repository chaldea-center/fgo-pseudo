void __fastcall UserOwnSvtCoin___ctor(
        UserOwnSvtCoin_o *this,
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v14; // x1
  UserSvtCoinEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4389DC9 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    byte_4389DC9 = 1;
  }
  entity = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._ItemEntity_k__BackingField = itemEntity;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._ItemEntity_k__BackingField,
    (System_Int32_array **)itemEntity,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
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
    sub_B7769C(Master_WarQuestSelectionMaster, v14);
  this->fields._Num_k__BackingField = entity->fields.num;
}