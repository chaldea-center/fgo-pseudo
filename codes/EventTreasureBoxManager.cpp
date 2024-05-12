void __fastcall EventTreasureBoxManager___ctor(EventTreasureBoxManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTreasureBoxManager__Init(
        EventTreasureBoxManager_o *this,
        int32_t eventId,
        int32_t svtId,
        System_Action_o *drawAction,
        System_Action_int__string____Action__o *playVoice,
        System_Action_BattleDropItem____int__Action__o *requestCallBack,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  System_Int32_array *EventItemList; // x25
  WarEntity_o *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x27
  EventDetailEntity_o *v18; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x28
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  ShopCurrencyInfoController_o *v26; // x27
  float v27; // s0
  float v28; // s1
  float v29; // s2
  float v30; // s8
  float v31; // s9
  float v32; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventTreasureBoxPanelComponent_array *treasureBoxList; // x8
  __int64 v35; // x25
  int max_length; // w9
  EventTreasureBoxPanelComponent_o *v37; // x26
  const MethodInfo *v38; // x6
  __int64 v39; // x0
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_438A6A2 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_TreasureBoxMaster___);
    sub_B775C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438A6A2 = 1;
  }
  this->fields.eventId = eventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_26;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, eventId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_26;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             eventId,
             (const MethodInfo_21FB894 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v18 = (EventDetailEntity_o *)Entity;
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_26;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v19;
  sub_B77560(
    (BattleServantConfConponent_o *)&currencyInfoController->fields.objectList,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( !v18 )
    goto LABEL_26;
  v26 = this->fields.currencyInfoController;
  Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v18, 0LL);
  if ( !v26 )
    goto LABEL_26;
  ShopCurrencyInfoController__RefreshEventItemInfo(
    v26,
    6,
    eventId,
    1,
    EventItemList,
    (unsigned __int8)Instance & 1,
    0LL);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_26;
  *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_26;
  v30 = v27;
  v31 = v28;
  v32 = v29;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_26;
  v40.fields.x = -220.0;
  v40.fields.y = -1000.0;
  v40.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v40, 0LL);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL),
        v41.fields.x = v30,
        v41.fields.y = v31,
        v41.fields.z = v32,
        (Instance = (DataManager_o *)TweenPosition__Begin(gameObject, 0.4, v41, 0LL)) == 0LL)
    || (LODWORD(Instance->fields.datalist) = 3, (treasureBoxList = this->fields.treasureBoxList) == 0LL) )
  {
LABEL_26:
    sub_B7769C(Instance, v14);
  }
  v35 = 0LL;
  while ( 1 )
  {
    max_length = treasureBoxList->max_length;
    if ( (int)v35 >= max_length )
      break;
    if ( (unsigned int)v35 >= max_length )
    {
      v39 = sub_B776C8(Instance);
      sub_B77668(v39, 0LL);
    }
    v37 = treasureBoxList->m_Items[v35];
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_TreasureBoxMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)TreasureBoxMaster__GetTreasureBoxData(
                                      (TreasureBoxMaster_o *)Instance,
                                      eventId,
                                      v35,
                                      0LL);
        if ( v37 )
        {
          EventTreasureBoxPanelComponent__Init(
            v37,
            (TreasureBoxEntity_o *)Instance,
            svtId,
            drawAction,
            playVoice,
            requestCallBack,
            v38);
          treasureBoxList = this->fields.treasureBoxList;
          ++v35;
          if ( treasureBoxList )
            continue;
        }
      }
    }
    goto LABEL_26;
  }
}


void __fastcall EventTreasureBoxManager__StopUpdateRemainTime(
        EventTreasureBoxManager_o *this,
        const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_B7769C(0LL, method);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, 0LL);
}


void __fastcall EventTreasureBoxManager__UpdateEventItemList(EventTreasureBoxManager_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_B7769C(0LL, method);
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.eventId, 1, 0LL);
}


int32_t __fastcall EventTreasureBoxManager__get_ItemBaseWindowHeight(
        EventTreasureBoxManager_o *this,
        const MethodInfo *method)
{
  struct ShopCurrencyInfoController_o *currencyInfoController; // x8

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_B7769C(this, method);
  return currencyInfoController->fields._ItemBaseWindowHeight_k__BackingField;
}