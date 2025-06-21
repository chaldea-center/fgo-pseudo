// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardItemModel___ctor(
        ClassBoardItemModel_o *this,
        int32_t itemId,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x0
  ClassBoardItemModel_Fields *p_fields; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4B1FEAD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ItemMaster___, *(_QWORD *)&itemId);
    sub_1BCAFF8(&DataManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8);
    byte_4B1FEAD = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    sub_1BCB254(0LL, v10);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             itemId,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.entity = (struct ItemEntity_o *)Entity;
  p_fields = &this->fields;
  sub_1BCAF9C((CGThumbnailListItem_o *)p_fields, (int32_t)Entity, v13, v14);
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
    sub_1BCB254(this, method);
  return entity->fields.id;
}


int32_t __fastcall ClassBoardItemModel__get_Num(ClassBoardItemModel_o *this, const MethodInfo *method)
{
  return this->fields._Num_k__BackingField;
}


int64_t __fastcall ClassBoardItemModel__get_UserNum(ClassBoardItemModel_o *this, const MethodInfo *method)
{
  struct ItemEntity_o *entity; // x8
  int64_t result; // x0

  entity = this->fields.entity;
  if ( !entity )
    sub_1BCB254(this, method);
  result = (int64_t)UserOwnItemDetail__GetUserOwnInfoByItemId(entity->fields.id, 0LL);
  if ( result )
    return *(_QWORD *)(result + 16);
  return result;
}