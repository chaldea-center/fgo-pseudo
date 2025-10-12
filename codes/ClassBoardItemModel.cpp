void ClassBoardItemModel___ctor(ClassBoardItemModel_o *this, int32_t itemId, int32_t num, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  Il2CppObject *Entity; // x0
  ClassBoardItemModel_Fields *p_fields; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C3B594 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    byte_4C3B594 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    sub_1C32E7C(0);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             itemId,
             (const MethodInfo_3396838 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.entity = (struct ItemEntity_o *)Entity;
  p_fields = &this->fields;
  sub_1C32BC4((CGThumbnailListItem_o *)p_fields, (int32_t)Entity, v10, v11);
  p_fields->_Num_k__BackingField = num;
}


bool ClassBoardItemModel__get_HasItem(ClassBoardItemModel_o *this, const MethodInfo *method)
{
  return ClassBoardItemModel__get_UserNum(this, method) >= this->fields._Num_k__BackingField;
}


int32_t ClassBoardItemModel__get_Id(ClassBoardItemModel_o *this, const MethodInfo *method)
{
  struct ItemEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1C32E7C(this);
  return entity->fields.id;
}


int32_t ClassBoardItemModel__get_Num(ClassBoardItemModel_o *this, const MethodInfo *method)
{
  return this->fields._Num_k__BackingField;
}


int64_t ClassBoardItemModel__get_UserNum(ClassBoardItemModel_o *this, const MethodInfo *method)
{
  struct ItemEntity_o *entity; // x8
  int64_t result; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_1C32E7C(this);
  result = (int64_t)UserOwnItemDetail__GetUserOwnInfoByItemId(entity->fields.id, 0);
  if ( result )
    return *(_QWORD *)(result + 16);
  return result;
}