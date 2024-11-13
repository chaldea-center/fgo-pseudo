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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  Il2CppObject *Master_object; // x0
  __int64 v19; // x1
  struct CommonConsumeEntity_array *IdEntityList; // x0
  CommonReleaseMaster_o *v21; // x22
  bool v22; // w0

  if ( (byte_4B10D9D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonConsumeMaster___, *(_QWORD *)&index, boostEntity);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonReleaseMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v15, v16);
    byte_4B10D9D = 1;
  }
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields.boostEntity = boostEntity;
  sub_1BCA784(&this->fields.boostEntity, boostEntity);
  this->fields.usrItemEntityList = usrItemEntityList;
  sub_1BCA784(&this->fields.usrItemEntityList, usrItemEntityList);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !boostEntity
    || !Master_object
    || (IdEntityList = CommonConsumeMaster__GetIdEntityList(
                         (CommonConsumeMaster_o *)Master_object,
                         boostEntity->fields.commonConsumeId,
                         0LL),
        this->fields.commonConsumeEntity = IdEntityList,
        sub_1BCA784(&this->fields.commonConsumeEntity, IdEntityList),
        (Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonReleaseMaster___)) == 0LL) )
  {
    sub_1BCAA3C(Master_object, v19);
  }
  v21 = (CommonReleaseMaster_o *)Master_object;
  this->fields.isRelease = CommonReleaseMaster__IsOpen(
                             (CommonReleaseMaster_o *)Master_object,
                             boostEntity->fields.commonReleaseId,
                             0LL,
                             0,
                             0LL);
  if ( recommendedBoostIds )
    v22 = System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)recommendedBoostIds,
            boostEntity->fields.id,
            (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
  else
    v22 = 0;
  this->fields.isRecommended = v22;
  this->fields.isHide = CommonReleaseMaster__IsOpen(v21, boostEntity->fields.hideCommonReleaseId, 0LL, 0, 0LL);
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