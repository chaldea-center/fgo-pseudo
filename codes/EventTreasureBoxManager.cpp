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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  System_Int32_array *EventItemList; // x25
  WarEntity_o *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x27
  EventDetailEntity_o *v24; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x28
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  ShopCurrencyInfoController_o *v32; // x27
  float v33; // s0
  float v34; // s1
  float v35; // s2
  float v36; // s8
  float v37; // s9
  float v38; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventTreasureBoxPanelComponent_array *treasureBoxList; // x8
  __int64 v41; // x25
  int max_length; // w9
  EventTreasureBoxPanelComponent_o *v43; // x26
  const MethodInfo *v44; // x6
  __int64 v45; // x0
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_418825B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureBoxMaster___, v14);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v16);
    sub_B2C35C(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_418825B = 1;
  }
  this->fields.eventId = eventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_26;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, eventId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_26;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             eventId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v24 = (EventDetailEntity_o *)Entity;
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_26;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v25;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&currencyInfoController->fields.objectList,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( !v24 )
    goto LABEL_26;
  v32 = this->fields.currencyInfoController;
  Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v24, 0LL);
  if ( !v32 )
    goto LABEL_26;
  ShopCurrencyInfoController__RefreshEventItemInfo(
    v32,
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
  *(UnityEngine_Vector3_o *)&v33 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_26;
  v36 = v33;
  v37 = v34;
  v38 = v35;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_26;
  v46.fields.x = -220.0;
  v46.fields.y = -1000.0;
  v46.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v46, 0LL);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL),
        v47.fields.x = v36,
        v47.fields.y = v37,
        v47.fields.z = v38,
        (Instance = (DataManager_o *)TweenPosition__Begin(gameObject, 0.4, v47, 0LL)) == 0LL)
    || (LODWORD(Instance->fields.datalist) = 3, (treasureBoxList = this->fields.treasureBoxList) == 0LL) )
  {
LABEL_26:
    sub_B2C434(Instance, v20);
  }
  v41 = 0LL;
  while ( 1 )
  {
    max_length = treasureBoxList->max_length;
    if ( (int)v41 >= max_length )
      break;
    if ( (unsigned int)v41 >= max_length )
    {
      v45 = sub_B2C460(Instance);
      sub_B2C400(v45, 0LL);
    }
    v43 = treasureBoxList->m_Items[v41];
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureBoxMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)TreasureBoxMaster__GetTreasureBoxData(
                                      (TreasureBoxMaster_o *)Instance,
                                      eventId,
                                      v41,
                                      0LL);
        if ( v43 )
        {
          EventTreasureBoxPanelComponent__Init(
            v43,
            (TreasureBoxEntity_o *)Instance,
            svtId,
            drawAction,
            playVoice,
            requestCallBack,
            v44);
          treasureBoxList = this->fields.treasureBoxList;
          ++v41;
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
    sub_B2C434(0LL, method);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, 0LL);
}


void __fastcall EventTreasureBoxManager__UpdateEventItemList(EventTreasureBoxManager_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_B2C434(0LL, method);
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.eventId, 1, 0LL);
}


int32_t __fastcall EventTreasureBoxManager__get_ItemBaseWindowHeight(
        EventTreasureBoxManager_o *this,
        const MethodInfo *method)
{
  struct ShopCurrencyInfoController_o *currencyInfoController; // x8

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_B2C434(this, method);
  return currencyInfoController->fields._ItemBaseWindowHeight_k__BackingField;
}