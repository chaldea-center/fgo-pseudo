void EventTreasureBoxManager___ctor(EventTreasureBoxManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventTreasureBoxManager__Init(
        EventTreasureBoxManager_o *this,
        int32_t eventId,
        int32_t svtId,
        System_Action_o *drawAction,
        System_Action_int__string____Action__o *playVoice,
        System_Action_BattleDropItem____int__Action__o *requestCallBack,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v14; // x1
  System_Int32_array *EventItemList; // x25
  Il2CppObject *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x27
  EventDetailEntity_o *v18; // x26
  System_Collections_Generic_List_object__o *v19; // x28
  ShopCurrencyInfoController_o *v20; // x27
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventTreasureBoxPanelComponent_array *treasureBoxList; // x8
  __int64 v23; // x25
  int max_length; // w9
  EventTreasureBoxPanelComponent_o *v25; // x26
  const MethodInfo *v26; // x6
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2B2CB & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_TreasureBoxMaster___);
    sub_1C93AD4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2B2CB = 1;
  }
  this->fields.eventId = eventId;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_26;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, eventId, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_26;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_3463274 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v18 = (EventDetailEntity_o *)Entity;
  v19 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_26;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v19;
  Instance = sub_1C93A78(&currencyInfoController->fields.objectList, v19);
  if ( !v18 )
    goto LABEL_26;
  v20 = this->fields.currencyInfoController;
  Instance = EventDetailEntity__IsForcedAdjustmentDialog(v18, 0);
  if ( !v20 )
    goto LABEL_26;
  ShopCurrencyInfoController__RefreshEventItemInfo(v20, 6, eventId, 1, EventItemList, Instance & 1, 0);
  Instance = (__int64)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_26;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (__int64)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_26;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_26;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0);
  Instance = (__int64)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_26;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_26;
  v28.fields.z = 0.0;
  v28.fields.x = -220.0;
  v28.fields.y = -1000.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v28, 0);
  Instance = (__int64)this->fields.currencyInfoController;
  if ( !Instance
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0),
        (Instance = (__int64)TweenPosition__Begin(gameObject, 0.4, localPosition, 0)) == 0)
    || (*(_DWORD *)(Instance + 32) = 3, (treasureBoxList = this->fields.treasureBoxList) == 0) )
  {
LABEL_26:
    sub_1C93D2C(Instance, v14);
  }
  v23 = 0;
  while ( 1 )
  {
    max_length = treasureBoxList->max_length;
    if ( (int)v23 >= max_length )
      break;
    if ( (unsigned int)v23 >= max_length )
      sub_1C93D34(Instance);
    v25 = treasureBoxList->m_Items[v23];
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_TreasureBoxMaster___);
      if ( Instance )
      {
        Instance = (__int64)TreasureBoxMaster__GetTreasureBoxData((TreasureBoxMaster_o *)Instance, eventId, v23, 0);
        if ( v25 )
        {
          EventTreasureBoxPanelComponent__Init(
            v25,
            (TreasureBoxEntity_o *)Instance,
            svtId,
            drawAction,
            playVoice,
            requestCallBack,
            v26);
          treasureBoxList = this->fields.treasureBoxList;
          ++v23;
          if ( treasureBoxList )
            continue;
        }
      }
    }
    goto LABEL_26;
  }
}


void EventTreasureBoxManager__StopUpdateRemainTime(EventTreasureBoxManager_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1C93D2C(0, method);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, 0);
}


void EventTreasureBoxManager__UpdateEventItemList(EventTreasureBoxManager_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1C93D2C(0, method);
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.eventId, 1, 0);
}


int32_t EventTreasureBoxManager__get_ItemBaseWindowHeight(EventTreasureBoxManager_o *this, const MethodInfo *method)
{
  struct ShopCurrencyInfoController_o *currencyInfoController; // x8

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1C93D2C(this, method);
  return currencyInfoController->fields._ItemBaseWindowHeight_k__BackingField;
}