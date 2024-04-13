void __fastcall EventRecipeListViewItem___ctor(
        EventRecipeListViewItem_o *this,
        int32_t index,
        EventRecipeEntity_o *eventRecipeEntity,
        EventRecipeGiftEntity_array *eventRecipeGiftEntity,
        int32_t eventId,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct EventRecipeEntity_o **p_eventRecipeEntity; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  DataManager_o *Instance; // x0
  __int64 v31; // x1
  struct CommonConsumeEntity_array *SortedEntityList; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct EventRecipeEntity_o *v39; // x8
  char IsOpen; // w8

  if ( (byte_42E8ECE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_CommonConsumeMaster___,
      index,
      (_DWORD)eventRecipeEntity,
      eventRecipeGiftEntity);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    byte_42E8ECE = 1;
  }
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.eventRecipeEntity = eventRecipeEntity;
  p_eventRecipeEntity = &this->fields.eventRecipeEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventRecipeEntity,
    (System_Int32_array **)eventRecipeEntity,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.eventRecipeGiftEntity = eventRecipeGiftEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventRecipeGiftEntity,
    (System_Int32_array **)eventRecipeGiftEntity,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.currentEventId = eventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !*p_eventRecipeEntity )
    goto LABEL_14;
  if ( !Instance )
    goto LABEL_14;
  SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                       (CommonConsumeMaster_o *)Instance,
                       (*p_eventRecipeEntity)->fields.commonConsumeId,
                       0LL);
  this->fields.commonConsumeEntity = SortedEntityList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.commonConsumeEntity,
    (System_Int32_array **)SortedEntityList,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = this->fields.eventRecipeEntity;
  if ( !v39 )
    goto LABEL_14;
  if ( !v39->fields.commonReleaseId )
  {
    IsOpen = 1;
    goto LABEL_13;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        !*p_eventRecipeEntity)
    || !Instance )
  {
LABEL_14:
    sub_B5D69C(Instance, v31);
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
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8ECF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9405/*"NONE"*/, (_DWORD)method, v2, v3);
    byte_42E8ECF = 1;
  }
  return (System_String_o *)StringLiteral_9405/*"NONE"*/;
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
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
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
  }
  v3 = eventRecipeGiftEntity->m_Items[0];
  if ( !v3 )
LABEL_5:
    sub_B5D69C(this, method);
  return v3->fields.topIconId;
}


int32_t __fastcall EventRecipeListViewItem__get_teaIconId(EventRecipeListViewItem_o *this, const MethodInfo *method)
{
  struct EventRecipeEntity_o *eventRecipeEntity; // x8

  eventRecipeEntity = this->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    sub_B5D69C(this, method);
  return eventRecipeEntity->fields.iconId;
}