void EventRecipeListViewItem___ctor(
        EventRecipeListViewItem_o *this,
        int32_t index,
        EventRecipeEntity_o *eventRecipeEntity,
        EventRecipeGiftEntity_array *eventRecipeGiftEntity,
        int32_t eventId,
        const MethodInfo *method)
{
  struct EventRecipeEntity_o **p_eventRecipeEntity; // x20
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  struct CommonConsumeEntity_array *SortedEntityList; // x0
  struct EventRecipeEntity_o *v15; // x8
  bool IsOpen; // w0

  if ( (byte_4D2AE16 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2AE16 = 1;
  }
  ListViewItem___ctor_44487500((ListViewItem_o *)this, index, 0);
  this->fields.eventRecipeEntity = eventRecipeEntity;
  p_eventRecipeEntity = &this->fields.eventRecipeEntity;
  sub_1C93A78(&this->fields.eventRecipeEntity, eventRecipeEntity);
  this->fields.eventRecipeGiftEntity = eventRecipeGiftEntity;
  sub_1C93A78(&this->fields.eventRecipeGiftEntity, eventRecipeGiftEntity);
  this->fields.currentEventId = eventId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !*p_eventRecipeEntity )
    goto LABEL_14;
  if ( !Instance )
    goto LABEL_14;
  SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                       (CommonConsumeMaster_o *)Instance,
                       (*p_eventRecipeEntity)->fields.commonConsumeId,
                       0);
  this->fields.commonConsumeEntity = SortedEntityList;
  Instance = (Il2CppObject *)sub_1C93A78(&this->fields.commonConsumeEntity, SortedEntityList);
  v15 = this->fields.eventRecipeEntity;
  if ( !v15 )
    goto LABEL_14;
  if ( !v15->fields.commonReleaseId )
  {
    IsOpen = 1;
    goto LABEL_13;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        !*p_eventRecipeEntity)
    || !Instance )
  {
LABEL_14:
    sub_1C93D2C(Instance, v13);
  }
  IsOpen = CommonReleaseMaster__IsOpen(
             (CommonReleaseMaster_o *)Instance,
             (*p_eventRecipeEntity)->fields.commonReleaseId,
             0,
             0,
             0);
LABEL_13:
  this->fields.isRelease = IsOpen;
}


System_String_o *EventRecipeListViewItem__get_ClosedMessage(EventRecipeListViewItem_o *this, const MethodInfo *method)
{
  struct EventRecipeEntity_o *eventRecipeEntity; // x8

  eventRecipeEntity = this->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    sub_1C93D2C(this, method);
  return eventRecipeEntity->fields.closedMessage;
}


CommonConsumeEntity_array *EventRecipeListViewItem__get_ConsumeList(
        EventRecipeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.commonConsumeEntity;
}


int32_t EventRecipeListViewItem__get_GetEventId(EventRecipeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.currentEventId;
}


bool EventRecipeListViewItem__get_IsRelease(EventRecipeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isRelease;
}


int32_t EventRecipeListViewItem__get_ItemCount(EventRecipeListViewItem_o *this, const MethodInfo *method)
{
  struct CommonConsumeEntity_array *commonConsumeEntity; // x8

  commonConsumeEntity = this->fields.commonConsumeEntity;
  if ( commonConsumeEntity )
    return commonConsumeEntity->max_length;
  else
    return 0;
}


System_String_o *EventRecipeListViewItem__get_NameText(EventRecipeListViewItem_o *this, const MethodInfo *method)
{
  struct EventRecipeEntity_o *eventRecipeEntity; // x8

  eventRecipeEntity = this->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    sub_1C93D2C(this, method);
  return eventRecipeEntity->fields.name;
}


EventRecipeGiftEntity_array *EventRecipeListViewItem__get_RecipeGiftEntity(
        EventRecipeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.eventRecipeGiftEntity;
}


int32_t EventRecipeListViewItem__get_RecipeId(EventRecipeListViewItem_o *this, const MethodInfo *method)
{
  struct EventRecipeEntity_o *eventRecipeEntity; // x8

  eventRecipeEntity = this->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    sub_1C93D2C(this, method);
  return eventRecipeEntity->fields.id;
}


int32_t EventRecipeListViewItem__get_teaIconId(EventRecipeListViewItem_o *this, const MethodInfo *method)
{
  struct EventRecipeEntity_o *eventRecipeEntity; // x8

  eventRecipeEntity = this->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    sub_1C93D2C(this, method);
  return eventRecipeEntity->fields.iconId;
}