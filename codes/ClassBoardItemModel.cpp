// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardItemModel___ctor(
        ClassBoardItemModel_o *this,
        int32_t itemId,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x1
  struct ItemEntity_o *Entity; // x0
  ClassBoardItemModel_Fields *p_fields; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_41894E8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ItemMaster___, *(_QWORD *)&itemId);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8);
    byte_41894E8 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v10);
  Entity = (struct ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    Master_WarQuestSelectionMaster,
                                    itemId,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.entity = Entity;
  p_fields = &this->fields;
  sub_B2C2F8((BattleServantConfConponent_o *)p_fields, (System_Int32_array **)Entity, v13, v14, v15, v16, v17, v18);
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
  UserOwnInfoByItemId = UserOwnItemDetail__GetUserOwnInfoByItemId(entity->fields.id, 0LL);
  if ( UserOwnInfoByItemId )
    LODWORD(UserOwnInfoByItemId) = UserOwnInfoByItemId->fields._Num_k__BackingField;
  return (int)UserOwnInfoByItemId;
}