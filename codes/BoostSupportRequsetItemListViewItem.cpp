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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  DataManager_o *Instance; // x0
  __int64 v28; // x1
  struct CommonConsumeEntity_array *IdEntityList; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  bool v36; // w8

  if ( (byte_41896A0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonConsumeMaster___, *(_QWORD *)&index);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v11);
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_41896A0 = 1;
  }
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.boostEntity = boostEntity;
  p_boostEntity = &this->fields.boostEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.boostEntity,
    (System_Int32_array **)boostEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.usrItemEntityList = usrItemEntityList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.usrItemEntityList,
    (System_Int32_array **)usrItemEntityList,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !*p_boostEntity )
    goto LABEL_14;
  if ( !Instance )
    goto LABEL_14;
  IdEntityList = CommonConsumeMaster__GetIdEntityList(
                   (CommonConsumeMaster_o *)Instance,
                   (*p_boostEntity)->fields.commonConsumeId,
                   0LL);
  this->fields.commonConsumeEntity = IdEntityList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commonConsumeEntity,
    (System_Int32_array **)IdEntityList,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !*p_boostEntity || !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)CommonReleaseMaster__IsOpen(
                                (CommonReleaseMaster_o *)Instance,
                                (*p_boostEntity)->fields.commonReleaseId,
                                0LL,
                                0,
                                0LL);
  this->fields.isRelease = (unsigned __int8)Instance & 1;
  if ( !recommendedBoostIds )
  {
    v36 = 0;
    goto LABEL_13;
  }
  if ( !boostEntity )
LABEL_14:
    sub_B2C434(Instance, v28);
  v36 = System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)recommendedBoostIds,
          boostEntity->fields.id,
          (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
LABEL_13:
  this->fields.isRecommended = v36;
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