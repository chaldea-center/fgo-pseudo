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
  const MethodInfo_476E8C0 *v13; // x0
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  System_Int32_array *EventItemList; // x25
  Il2CppObject *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x29
  EventDetailEntity_o *v19; // x26
  System_Collections_Generic_List_object__o *v20; // x27
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  ShopCurrencyInfoController_o *v27; // x27
  float x; // s9
  float y; // s8
  float z; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventTreasureBoxPanelComponent_array *treasureBoxList; // x8
  __int64 v33; // x25
  int max_length; // w9
  EventTreasureBoxPanelComponent_o *v35; // x26
  const MethodInfo *v36; // x6
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_5932CA7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_TreasureBoxMaster___);
    sub_21FFC50(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5932CA7 = 1;
  }
  v13 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.eventId = eventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance(v13);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_26;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, eventId, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_26;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v19 = (EventDetailEntity_o *)Entity;
  v20 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_26;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v20;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&currencyInfoController->fields.objectList,
    (int32_t)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( !v19 )
    goto LABEL_26;
  v27 = this->fields.currencyInfoController;
  Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v19, 0);
  if ( !v27 )
    goto LABEL_26;
  ShopCurrencyInfoController__RefreshEventItemInfo(v27, 6, eventId, 1, EventItemList, (unsigned __int8)Instance & 1, 0);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_26;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_26;
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_26;
  v38.fields.z = 0.0;
  v38.fields.x = -220.0;
  v38.fields.y = -1000.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v38, 0);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0),
        v39.fields.x = x,
        v39.fields.y = y,
        v39.fields.z = z,
        (Instance = (DataManager_o *)TweenPosition__Begin(gameObject, 0.4, v39, 0)) == 0)
    || (treasureBoxList = this->fields.treasureBoxList, *(_DWORD *)&Instance->fields._DispLog = 3, !treasureBoxList) )
  {
LABEL_26:
    sub_21FFECC(Instance, v15);
  }
  v33 = 0;
  while ( 1 )
  {
    max_length = treasureBoxList->max_length;
    if ( (int)v33 >= max_length )
      break;
    if ( (unsigned int)v33 >= max_length )
      sub_21FFED4(Instance);
    v35 = treasureBoxList->m_Items[v33];
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TreasureBoxMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)TreasureBoxMaster__GetTreasureBoxData(
                                      (TreasureBoxMaster_o *)Instance,
                                      eventId,
                                      v33,
                                      0);
        if ( v35 )
        {
          EventTreasureBoxPanelComponent__Init(
            v35,
            (TreasureBoxEntity_o *)Instance,
            svtId,
            drawAction,
            playVoice,
            requestCallBack,
            v36);
          treasureBoxList = this->fields.treasureBoxList;
          ++v33;
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
    sub_21FFECC(0, method);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, 0);
}


void EventTreasureBoxManager__UpdateEventItemList(EventTreasureBoxManager_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_21FFECC(0, method);
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.eventId, 1, 0);
}


int32_t EventTreasureBoxManager__get_ItemBaseWindowHeight(EventTreasureBoxManager_o *this, const MethodInfo *method)
{
  struct ShopCurrencyInfoController_o *currencyInfoController; // x8

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_21FFECC(this, method);
  return currencyInfoController->fields._ItemBaseWindowHeight_k__BackingField;
}