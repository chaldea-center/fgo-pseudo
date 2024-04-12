void __fastcall ClassBoardItemModel___ctor(
        ClassBoardItemModel_o *this,
        int32_t itemId,
        int32_t num,
        const MethodInfo *method)
{
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v8; // x1
  struct ItemEntity_o *Entity; // x0
  ClassBoardItemModel_Fields *p_fields; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42B3863 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ItemMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    byte_42B3863 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B52A5C(0LL, v8);
  Entity = (struct ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    Master_WarQuestSelectionMaster,
                                    itemId,
                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.entity = Entity;
  p_fields = &this->fields;
  sub_B52920((BattleServantConfConponent_o *)p_fields, (System_Int32_array **)Entity, v11, v12, v13, v14, v15, v16);
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
    sub_B52A5C(this, method);
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
    sub_B52A5C(this, method);
  UserOwnInfoByItemId = UserOwnItemDetail__GetUserOwnInfoByItemId(entity->fields.id, 0LL);
  if ( UserOwnInfoByItemId )
    LODWORD(UserOwnInfoByItemId) = UserOwnInfoByItemId->fields._Num_k__BackingField;
  return (int)UserOwnInfoByItemId;
}