// local variable allocation has failed, the output may be wrong!
void __fastcall BoostSupportRequsetItemListViewItem___ctor(
        BoostSupportRequsetItemListViewItem_o *this,
        int32_t index,
        BoostEntity_o *boostEntity,
        UserItemEntity_array *usrItemEntityList,
        System_Int32_array *recommendedBoostIds,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *Master_object; // x0
  __int64 v15; // x1
  CommonReleaseMaster_o *v16; // x22
  bool v17; // w0

  if ( (byte_4C1C8F9 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_CommonConsumeMaster___, *(_QWORD *)&index);
    sub_1C3B764(&Method_DataManager_GetMaster_CommonReleaseMaster___, v11);
    sub_1C3B764(&DataManager_TypeInfo, v12);
    sub_1C3B764(&Method_System_Linq_Enumerable_Contains_int___, v13);
    byte_4C1C8F9 = 1;
  }
  ListViewItem___ctor_42199332((ListViewItem_o *)this, index, 0LL);
  this->fields.boostEntity = boostEntity;
  sub_1C3B708(&this->fields.boostEntity);
  this->fields.usrItemEntityList = usrItemEntityList;
  sub_1C3B708(&this->fields.usrItemEntityList);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !boostEntity
    || !Master_object
    || (this->fields.commonConsumeEntity = CommonConsumeMaster__GetIdEntityList(
                                             (CommonConsumeMaster_o *)Master_object,
                                             boostEntity->fields.commonConsumeId,
                                             0LL),
        sub_1C3B708(&this->fields.commonConsumeEntity),
        (Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_CommonReleaseMaster___)) == 0LL) )
  {
    sub_1C3B9C0(Master_object, v15);
  }
  v16 = (CommonReleaseMaster_o *)Master_object;
  this->fields.isRelease = CommonReleaseMaster__IsOpen(
                             (CommonReleaseMaster_o *)Master_object,
                             boostEntity->fields.commonReleaseId,
                             0LL,
                             0,
                             0LL);
  if ( recommendedBoostIds )
    v17 = System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)recommendedBoostIds,
            boostEntity->fields.id,
            (const MethodInfo_300875C *)Method_System_Linq_Enumerable_Contains_int___);
  else
    v17 = 0;
  this->fields.isRecommended = v17;
  this->fields.isHide = CommonReleaseMaster__IsOpen(v16, boostEntity->fields.hideCommonReleaseId, 0LL, 0, 0LL);
}


void __fastcall BoostSupportRequsetItemListViewItem__Finalize(
        BoostSupportRequsetItemListViewItem_o *this,
        const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


BoostEntity_o *__fastcall BoostSupportRequsetItemListViewItem__get_BoostEntity(
        BoostSupportRequsetItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.boostEntity;
}


CommonConsumeEntity_array *__fastcall BoostSupportRequsetItemListViewItem__get_ConsumeList(
        BoostSupportRequsetItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.commonConsumeEntity;
}


int32_t __fastcall BoostSupportRequsetItemListViewItem__get_Image_id(
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


bool __fastcall BoostSupportRequsetItemListViewItem__get_IsHide(
        BoostSupportRequsetItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isHide;
}


bool __fastcall BoostSupportRequsetItemListViewItem__get_IsRecommended(
        BoostSupportRequsetItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isRecommended;
}


bool __fastcall BoostSupportRequsetItemListViewItem__get_IsRelease(
        BoostSupportRequsetItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isRelease;
}


int32_t __fastcall BoostSupportRequsetItemListViewItem__get_ItemId(
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


int32_t __fastcall BoostSupportRequsetItemListViewItem__get_Skill_id(
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


UserItemEntity_array *__fastcall BoostSupportRequsetItemListViewItem__get_UserItemEntityList(
        BoostSupportRequsetItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.usrItemEntityList;
}