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
  struct BoostEntity_o **p_boostEntity; // x22
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  bool v17; // w0

  if ( (byte_4A1AB2D & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_CommonConsumeMaster___, *(_QWORD *)&index);
    sub_1B715CC(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v11);
    sub_1B715CC(&Method_System_Linq_Enumerable_Contains_int___, v12);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4A1AB2D = 1;
  }
  ListViewItem___ctor_40493632((ListViewItem_o *)this, index, 0LL);
  this->fields.boostEntity = boostEntity;
  p_boostEntity = &this->fields.boostEntity;
  sub_1B71570(&this->fields.boostEntity);
  this->fields.usrItemEntityList = usrItemEntityList;
  sub_1B71570(&this->fields.usrItemEntityList);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !*p_boostEntity )
    goto LABEL_14;
  if ( !Instance )
    goto LABEL_14;
  this->fields.commonConsumeEntity = CommonConsumeMaster__GetIdEntityList(
                                       (CommonConsumeMaster_o *)Instance,
                                       (*p_boostEntity)->fields.commonConsumeId,
                                       0LL);
  sub_1B71570(&this->fields.commonConsumeEntity);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !*p_boostEntity || !Instance )
    goto LABEL_14;
  Instance = (Il2CppObject *)CommonReleaseMaster__IsOpen(
                               (CommonReleaseMaster_o *)Instance,
                               (*p_boostEntity)->fields.commonReleaseId,
                               0LL,
                               0,
                               0LL);
  this->fields.isRelease = (unsigned __int8)Instance & 1;
  if ( !recommendedBoostIds )
  {
    v17 = 0;
    goto LABEL_13;
  }
  if ( !boostEntity )
LABEL_14:
    sub_1B71828(Instance, v16);
  v17 = System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)recommendedBoostIds,
          boostEntity->fields.id,
          (const MethodInfo_2E754F4 *)Method_System_Linq_Enumerable_Contains_int___);
LABEL_13:
  this->fields.isRecommended = v17;
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