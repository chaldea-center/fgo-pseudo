void __fastcall ClassBoardItemModel___ctor(
        ClassBoardItemModel_o *this,
        int32_t itemId,
        int32_t num,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v14; // x1
  struct ItemEntity_o *Entity; // x0
  ClassBoardItemModel_Fields *p_fields; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_42EA7FD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ItemMaster___, itemId, num, method);
    sub_B5D5C4(&DataManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v10, v11, v12);
    byte_42EA7FD = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v14);
  Entity = (struct ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    Master_WarQuestSelectionMaster,
                                    itemId,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.entity = Entity;
  p_fields = &this->fields;
  sub_B5D560((BattleServantConfConponent_o *)p_fields, (System_Int32_array **)Entity, v17, v18, v19, v20, v21, v22);
  p_fields->_Num_k__BackingField = num;
}


bool __fastcall ClassBoardItemModel__get_HasItem(ClassBoardItemModel_o *this, const MethodInfo *method)
{
  return ClassBoardItemModel__get_UserNum(this, method) >= this->fields._Num_k__BackingField;
}


int32_t __fastcall ClassBoardItemModel__get_Id(ClassBoardItemModel_o *this, const MethodInfo *method)
{
  struct ItemEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B5D69C(this, method);
  return entity->fields.id;
}


int32_t __fastcall ClassBoardItemModel__get_Num(ClassBoardItemModel_o *this, const MethodInfo *method)
{
  return this->fields._Num_k__BackingField;
}


int32_t __fastcall ClassBoardItemModel__get_UserNum(ClassBoardItemModel_o *this, const MethodInfo *method)
{
  struct ItemEntity_o *entity; // x8
  UserOwnItemInfo_o *UserOwnInfoByItemId; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_B5D69C(this, method);
  UserOwnInfoByItemId = UserOwnItemDetail__GetUserOwnInfoByItemId(entity->fields.id, 0LL);
  if ( UserOwnInfoByItemId )
    LODWORD(UserOwnInfoByItemId) = UserOwnInfoByItemId->fields._Num_k__BackingField;
  return (int)UserOwnInfoByItemId;
}