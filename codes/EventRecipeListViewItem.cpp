// local variable allocation has failed, the output may be wrong!
void __fastcall EventRecipeListViewItem___ctor(
        EventRecipeListViewItem_o *this,
        int32_t index,
        EventRecipeEntity_o *eventRecipeEntity,
        EventRecipeGiftEntity_array *eventRecipeGiftEntity,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  struct EventRecipeEntity_o **p_eventRecipeEntity; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  DataManager_o *Instance; // x0
  __int64 v27; // x1
  struct CommonConsumeEntity_array *SortedEntityList; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct EventRecipeEntity_o *v35; // x8
  char IsOpen; // w8

  if ( (byte_41887A3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonConsumeMaster___, *(_QWORD *)&index);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_41887A3 = 1;
  }
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.eventRecipeEntity = eventRecipeEntity;
  p_eventRecipeEntity = &this->fields.eventRecipeEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventRecipeEntity,
    (System_Int32_array **)eventRecipeEntity,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.eventRecipeGiftEntity = eventRecipeGiftEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventRecipeGiftEntity,
    (System_Int32_array **)eventRecipeGiftEntity,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.currentEventId = eventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !*p_eventRecipeEntity )
    goto LABEL_14;
  if ( !Instance )
    goto LABEL_14;
  SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                       (CommonConsumeMaster_o *)Instance,
                       (*p_eventRecipeEntity)->fields.commonConsumeId,
                       0LL);
  this->fields.commonConsumeEntity = SortedEntityList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commonConsumeEntity,
    (System_Int32_array **)SortedEntityList,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = this->fields.eventRecipeEntity;
  if ( !v35 )
    goto LABEL_14;
  if ( !v35->fields.commonReleaseId )
  {
    IsOpen = 1;
    goto LABEL_13;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        !*p_eventRecipeEntity)
    || !Instance )
  {
LABEL_14:
    sub_B2C434(Instance, v27);
  }
  IsOpen = CommonReleaseMaster__IsOpen(
             (CommonReleaseMaster_o *)Instance,
             (*p_eventRecipeEntity)->fields.commonReleaseId,
             0LL,
             0,
             0LL);
LABEL_13:
  this->fields.isRelease = IsOpen;
}


System_String_o *__fastcall EventRecipeListViewItem__get_ClosedMessage(
        EventRecipeListViewItem_o *this,
        const MethodInfo *method)
{
  struct EventRecipeEntity_o *eventRecipeEntity; // x8

  eventRecipeEntity = this->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    sub_B2C434(this, method);
  return eventRecipeEntity->fields.closedMessage;
}


CommonConsumeEntity_array *__fastcall EventRecipeListViewItem__get_ConsumeList(
        EventRecipeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.commonConsumeEntity;
}


int32_t __fastcall EventRecipeListViewItem__get_GetEventId(EventRecipeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.currentEventId;
}


int32_t __fastcall EventRecipeListViewItem__get_GetIdx(EventRecipeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.index;
}


System_String_o *__fastcall EventRecipeListViewItem__get_InfoMessage(
        EventRecipeListViewItem_o *this,
        const MethodInfo *method)
{
  if ( (byte_41887A4 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9310/*"NONE"*/, method);
    byte_41887A4 = 1;
  }
  return (System_String_o *)StringLiteral_9310/*"NONE"*/;
}


bool __fastcall EventRecipeListViewItem__get_IsRelease(EventRecipeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isRelease;
}


int32_t __fastcall EventRecipeListViewItem__get_ItemCount(EventRecipeListViewItem_o *this, const MethodInfo *method)
{
  struct CommonConsumeEntity_array *commonConsumeEntity; // x8

  commonConsumeEntity = this->fields.commonConsumeEntity;
  if ( commonConsumeEntity )
    return commonConsumeEntity->max_length;
  else
    return 0;
}


System_String_o *__fastcall EventRecipeListViewItem__get_NameText(
        EventRecipeListViewItem_o *this,
        const MethodInfo *method)
{
  struct EventRecipeEntity_o *eventRecipeEntity; // x8

  eventRecipeEntity = this->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    sub_B2C434(this, method);
  return eventRecipeEntity->fields.name;
}


EventRecipeGiftEntity_array *__fastcall EventRecipeListViewItem__get_RecipeGiftEntity(
        EventRecipeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.eventRecipeGiftEntity;
}


int32_t __fastcall EventRecipeListViewItem__get_RecipeId(EventRecipeListViewItem_o *this, const MethodInfo *method)
{
  struct EventRecipeEntity_o *eventRecipeEntity; // x8

  eventRecipeEntity = this->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    sub_B2C434(this, method);
  return eventRecipeEntity->fields.id;
}


int32_t __fastcall EventRecipeListViewItem__get_TopIconId(EventRecipeListViewItem_o *this, const MethodInfo *method)
{
  struct EventRecipeGiftEntity_array *eventRecipeGiftEntity; // x8
  EventRecipeGiftEntity_o *v3; // x8
  __int64 v5; // x0

  eventRecipeGiftEntity = this->fields.eventRecipeGiftEntity;
  if ( !eventRecipeGiftEntity )
    goto LABEL_5;
  if ( !eventRecipeGiftEntity->max_length )
  {
    v5 = sub_B2C460(this);
    sub_B2C400(v5, 0LL);
  }
  v3 = eventRecipeGiftEntity->m_Items[0];
  if ( !v3 )
LABEL_5:
    sub_B2C434(this, method);
  return v3->fields.topIconId;
}


int32_t __fastcall EventRecipeListViewItem__get_teaIconId(EventRecipeListViewItem_o *this, const MethodInfo *method)
{
  struct EventRecipeEntity_o *eventRecipeEntity; // x8

  eventRecipeEntity = this->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    sub_B2C434(this, method);
  return eventRecipeEntity->fields.iconId;
}