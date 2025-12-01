void BoostSupportRequsetItemListViewItem___ctor(
        BoostSupportRequsetItemListViewItem_o *this,
        int32_t index,
        BoostEntity_o *boostEntity,
        UserItemEntity_array *usrItemEntityList,
        System_Int32_array *recommendedBoostIds,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  struct CommonConsumeEntity_array *IdEntityList; // x0
  CommonReleaseMaster_o *v14; // x22
  bool v15; // w0

  if ( (byte_4CC10CD & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4CC10CD = 1;
  }
  ListViewItem___ctor_44097096((ListViewItem_o *)this, index, 0);
  this->fields.boostEntity = boostEntity;
  sub_1C71354(&this->fields.boostEntity, boostEntity);
  this->fields.usrItemEntityList = usrItemEntityList;
  sub_1C71354(&this->fields.usrItemEntityList, usrItemEntityList);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !boostEntity
    || !Master_object
    || (IdEntityList = CommonConsumeMaster__GetIdEntityList(
                         (CommonConsumeMaster_o *)Master_object,
                         boostEntity->fields.commonConsumeId,
                         0),
        this->fields.commonConsumeEntity = IdEntityList,
        sub_1C71354(&this->fields.commonConsumeEntity, IdEntityList),
        (Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_CommonReleaseMaster___)) == 0) )
  {
    sub_1C71608(Master_object, v12);
  }
  v14 = (CommonReleaseMaster_o *)Master_object;
  this->fields.isRelease = CommonReleaseMaster__IsOpen(
                             (CommonReleaseMaster_o *)Master_object,
                             boostEntity->fields.commonReleaseId,
                             0,
                             0,
                             0);
  if ( recommendedBoostIds )
    v15 = System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)recommendedBoostIds,
            boostEntity->fields.id,
            (const MethodInfo_3168198 *)Method_System_Linq_Enumerable_Contains_int___);
  else
    v15 = 0;
  this->fields.isRecommended = v15;
  this->fields.isHide = CommonReleaseMaster__IsOpen(v14, boostEntity->fields.hideCommonReleaseId, 0, 0, 0);
}


void BoostSupportRequsetItemListViewItem__Finalize(
        BoostSupportRequsetItemListViewItem_o *this,
        const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


BoostEntity_o *BoostSupportRequsetItemListViewItem__get_BoostEntity(
        BoostSupportRequsetItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.boostEntity;
}


CommonConsumeEntity_array *BoostSupportRequsetItemListViewItem__get_ConsumeList(
        BoostSupportRequsetItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.commonConsumeEntity;
}


int32_t BoostSupportRequsetItemListViewItem__get_Image_id(
        BoostSupportRequsetItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct BoostEntity_o *boostEntity; // x8

  boostEntity = this->fields.boostEntity;
  if ( boostEntity )
    return boostEntity->fields.imageId;
  else
    return 0;
}


bool BoostSupportRequsetItemListViewItem__get_IsHide(
        BoostSupportRequsetItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isHide;
}


bool BoostSupportRequsetItemListViewItem__get_IsRecommended(
        BoostSupportRequsetItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isRecommended;
}


bool BoostSupportRequsetItemListViewItem__get_IsRelease(
        BoostSupportRequsetItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isRelease;
}


int32_t BoostSupportRequsetItemListViewItem__get_ItemId(
        BoostSupportRequsetItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct BoostEntity_o *boostEntity; // x8

  boostEntity = this->fields.boostEntity;
  if ( boostEntity )
    return boostEntity->fields.id;
  else
    return 0;
}


int32_t BoostSupportRequsetItemListViewItem__get_Skill_id(
        BoostSupportRequsetItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct BoostEntity_o *boostEntity; // x8

  boostEntity = this->fields.boostEntity;
  if ( boostEntity )
    return boostEntity->fields.skillId;
  else
    return 0;
}


UserItemEntity_array *BoostSupportRequsetItemListViewItem__get_UserItemEntityList(
        BoostSupportRequsetItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.usrItemEntityList;
}