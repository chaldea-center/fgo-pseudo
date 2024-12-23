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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B6A1D7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_ItemMaster___, *(_QWORD *)&itemId);
    sub_1BE4ACC(&DataManager_TypeInfo, v7);
    sub_1BE4ACC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8);
    byte_4B6A1D7 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    sub_1BE4D28(0LL, v10);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             itemId,
             (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.entity = (struct ItemEntity_o *)Entity;
  p_fields = &this->fields;
  sub_1BE4A70((PartyOrganizationUtility_o *)p_fields, (int64_t)Entity, v13, v14, v15, v16, v17, v18);
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
    sub_1BE4D28(this, method);
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
    sub_1BE4D28(this, method);
  UserOwnInfoByItemId = UserOwnItemDetail__GetUserOwnInfoByItemId(entity->fields.id, 0LL);
  if ( UserOwnInfoByItemId )
    LODWORD(UserOwnInfoByItemId) = UserOwnInfoByItemId->fields._Num_k__BackingField;
  return (int)UserOwnInfoByItemId;
}