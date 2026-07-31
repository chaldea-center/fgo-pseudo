void ClassBoardItemModel___ctor(ClassBoardItemModel_o *this, int32_t itemId, int32_t num, const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  Il2CppObject *Entity; // x0
  ClassBoardItemModel_Fields *p_fields; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_593C54F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ItemMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    byte_593C54F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v9);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             itemId,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.entity = (struct ItemEntity_o *)Entity;
  p_fields = &this->fields;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_fields, (int32_t)Entity, v12, v13, v14, v15, v16, v17);
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
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
  result = (int64_t)UserOwnItemDetail__GetUserOwnInfoByItemId(entity->fields.id, 0);
  if ( result )
    return *(_QWORD *)(result + 16);
  return result;
}