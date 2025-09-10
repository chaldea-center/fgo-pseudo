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
  struct EventRecipeEntity_o *v14; // x8
  bool IsOpen; // w0

  if ( (byte_4C218FB & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C218FB = 1;
  }
  ListViewItem___ctor_43566844((ListViewItem_o *)this, index, 0);
  this->fields.eventRecipeEntity = eventRecipeEntity;
  p_eventRecipeEntity = &this->fields.eventRecipeEntity;
  sub_1C2D434(&this->fields.eventRecipeEntity);
  this->fields.eventRecipeGiftEntity = eventRecipeGiftEntity;
  sub_1C2D434(&this->fields.eventRecipeGiftEntity);
  this->fields.currentEventId = eventId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !*p_eventRecipeEntity )
    goto LABEL_14;
  if ( !Instance )
    goto LABEL_14;
  this->fields.commonConsumeEntity = CommonConsumeMaster__GetSortedEntityList(
                                       (CommonConsumeMaster_o *)Instance,
                                       (*p_eventRecipeEntity)->fields.commonConsumeId,
                                       0);
  Instance = (Il2CppObject *)sub_1C2D434(&this->fields.commonConsumeEntity);
  v14 = this->fields.eventRecipeEntity;
  if ( !v14 )
    goto LABEL_14;
  if ( !v14->fields.commonReleaseId )
  {
    IsOpen = 1;
    goto LABEL_13;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        !*p_eventRecipeEntity)
    || !Instance )
  {
LABEL_14:
    sub_1C2D6EC(Instance, v13);
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
    sub_1C2D6EC(this, method);
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


int32_t EventRecipeListViewItem__get_GetIdx(EventRecipeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.index;
}


System_String_o *EventRecipeListViewItem__get_InfoMessage(EventRecipeListViewItem_o *this, const MethodInfo *method)
{
  if ( (byte_4C218FC & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9269/*"NONE"*/);
    byte_4C218FC = 1;
  }
  return (System_String_o *)StringLiteral_9269/*"NONE"*/;
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(this, method);
  return eventRecipeEntity->fields.id;
}


int32_t EventRecipeListViewItem__get_TopIconId(EventRecipeListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct EventRecipeGiftEntity_array *eventRecipeGiftEntity; // x8
  EventRecipeGiftEntity_o *v4; // x8

  eventRecipeGiftEntity = this->fields.eventRecipeGiftEntity;
  if ( !eventRecipeGiftEntity )
    goto LABEL_5;
  if ( !LODWORD(eventRecipeGiftEntity->max_length) )
    sub_1C2D6F4(this, method, v2);
  v4 = eventRecipeGiftEntity->m_Items[0];
  if ( !v4 )
LABEL_5:
    sub_1C2D6EC(this, method);
  return v4->fields.topIconId;
}


int32_t EventRecipeListViewItem__get_teaIconId(EventRecipeListViewItem_o *this, const MethodInfo *method)
{
  struct EventRecipeEntity_o *eventRecipeEntity; // x8

  eventRecipeEntity = this->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    sub_1C2D6EC(this, method);
  return eventRecipeEntity->fields.iconId;
}