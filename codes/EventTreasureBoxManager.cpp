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
  WebViewManager_o *Instance; // x0
  ShopMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array *EventItemList; // x25
  WebViewManager_o *v22; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // x0
  WarEntity_o *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x27
  EventDetailEntity_o *v26; // x26
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x28
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  ShopCurrencyInfoController_o *v38; // x27
  bool IsForcedAdjustmentDialog; // w0
  UnityEngine_Component_o *v40; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v42; // x0
  UnityEngine_Transform_o *transform; // x0
  float v44; // s0
  float v45; // s1
  float v46; // s2
  UnityEngine_Component_o *v47; // x0
  float v48; // s8
  float v49; // s9
  float v50; // s10
  UnityEngine_Transform_o *v51; // x0
  UnityEngine_Component_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x0
  TweenPosition_o *v54; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  struct EventTreasureBoxPanelComponent_array *treasureBoxList; // x8
  __int64 v58; // x25
  int max_length; // w9
  EventTreasureBoxPanelComponent_o *v60; // x26
  WebViewManager_o *v61; // x0
  TreasureBoxMaster_o *v62; // x0
  TreasureBoxEntity_o *TreasureBoxData; // x0
  const MethodInfo *v64; // x6
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_40F9BE0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureBoxMaster___, v14);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v16);
    sub_B16FFC(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_40F9BE0 = 1;
  }
  this->fields.eventId = eventId;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_26;
  EventItemList = ShopMaster__GetEventItemList(MasterData_WarQuestSelectionMaster, eventId, 0LL);
  v22 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v22 )
    goto LABEL_26;
  v23 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v22,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !v23 )
    goto LABEL_26;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v23,
             eventId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v26 = (EventDetailEntity_o *)Entity;
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo,
                                                                                                  v27,
                                                                                                  v28,
                                                                                                  v29,
                                                                                                  v30);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_26;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v31;
  sub_B16F98(
    (BattleServantConfConponent_o *)&currencyInfoController->fields.objectList,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  if ( !v26 )
    goto LABEL_26;
  v38 = this->fields.currencyInfoController;
  IsForcedAdjustmentDialog = EventDetailEntity__IsForcedAdjustmentDialog(v26, 0LL);
  if ( !v38 )
    goto LABEL_26;
  ShopCurrencyInfoController__RefreshEventItemInfo(v38, 6, eventId, 1, EventItemList, IsForcedAdjustmentDialog, 0LL);
  v40 = (UnityEngine_Component_o *)this->fields.currencyInfoController;
  if ( !v40 )
    goto LABEL_26;
  gameObject = UnityEngine_Component__get_gameObject(v40, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v42 = (UnityEngine_Component_o *)this->fields.currencyInfoController;
  if ( !v42 )
    goto LABEL_26;
  transform = UnityEngine_Component__get_transform(v42, 0LL);
  if ( !transform )
    goto LABEL_26;
  *(UnityEngine_Vector3_o *)&v44 = UnityEngine_Transform__get_localPosition(transform, 0LL);
  v47 = (UnityEngine_Component_o *)this->fields.currencyInfoController;
  if ( !v47 )
    goto LABEL_26;
  v48 = v44;
  v49 = v45;
  v50 = v46;
  v51 = UnityEngine_Component__get_transform(v47, 0LL);
  if ( !v51 )
    goto LABEL_26;
  v65.fields.x = -220.0;
  v65.fields.y = -1000.0;
  v65.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(v51, v65, 0LL);
  v52 = (UnityEngine_Component_o *)this->fields.currencyInfoController;
  if ( !v52
    || (v53 = UnityEngine_Component__get_gameObject(v52, 0LL),
        v66.fields.x = v48,
        v66.fields.y = v49,
        v66.fields.z = v50,
        (v54 = TweenPosition__Begin(v53, 0.4, v66, 0LL)) == 0LL)
    || (v54->fields.style = 3, (treasureBoxList = this->fields.treasureBoxList) == 0LL) )
  {
LABEL_26:
    sub_B170D4();
  }
  v58 = 0LL;
  while ( 1 )
  {
    max_length = treasureBoxList->max_length;
    if ( (int)v58 >= max_length )
      break;
    if ( (unsigned int)v58 >= max_length )
    {
      sub_B17100(v54, v55, v56);
      sub_B170A0();
    }
    v60 = treasureBoxList->m_Items[v58];
    v61 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( v61 )
    {
      v62 = (TreasureBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v61,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureBoxMaster___);
      if ( v62 )
      {
        TreasureBoxData = TreasureBoxMaster__GetTreasureBoxData(v62, eventId, v58, 0LL);
        if ( v60 )
        {
          EventTreasureBoxPanelComponent__Init(v60, TreasureBoxData, svtId, drawAction, playVoice, requestCallBack, v64);
          treasureBoxList = this->fields.treasureBoxList;
          ++v58;
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
    sub_B170D4();
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, 0LL);
}


void __fastcall EventTreasureBoxManager__UpdateEventItemList(EventTreasureBoxManager_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_B170D4();
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.eventId, 1, 0LL);
}


int32_t __fastcall EventTreasureBoxManager__get_ItemBaseWindowHeight(
        EventTreasureBoxManager_o *this,
        const MethodInfo *method)
{
  struct ShopCurrencyInfoController_o *currencyInfoController; // x8

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_B170D4();
  return currencyInfoController->fields._ItemBaseWindowHeight_k__BackingField;
}