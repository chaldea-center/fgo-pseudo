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
  Il2CppObject *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x27
  EventDetailEntity_o *v24; // x26
  System_Collections_Generic_List_object__o *v25; // x28
  int32_t v26; // w2
  int32_t v27; // w3
  ShopCurrencyInfoController_o *v28; // x27
  float v29; // s0
  float v30; // s1
  float v31; // s2
  float v32; // s8
  float v33; // s9
  float v34; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventTreasureBoxPanelComponent_array *treasureBoxList; // x8
  __int64 v37; // x25
  int max_length; // w9
  EventTreasureBoxPanelComponent_o *v39; // x26
  const MethodInfo *v40; // x6
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4A322B0 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_1B761C0(&Method_DataManager_GetMasterData_ShopMaster___, v13);
    sub_1B761C0(&Method_DataManager_GetMasterData_TreasureBoxMaster___, v14);
    sub_1B761C0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v15);
    sub_1B761C0(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v16);
    sub_1B761C0(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v17);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4A322B0 = 1;
  }
  this->fields.eventId = eventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_26;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, eventId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_26;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_30FF780 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v24 = (EventDetailEntity_o *)Entity;
  v25 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_26;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v25;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&currencyInfoController->fields.objectList, (int32_t)v25, v26, v27);
  if ( !v24 )
    goto LABEL_26;
  v28 = this->fields.currencyInfoController;
  Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v24, 0LL);
  if ( !v28 )
    goto LABEL_26;
  ShopCurrencyInfoController__RefreshEventItemInfo(
    v28,
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
  *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_26;
  v32 = v29;
  v33 = v30;
  v34 = v31;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_26;
  v41.fields.z = 0.0;
  v41.fields.x = -220.0;
  v41.fields.y = -1000.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v41, 0LL);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL),
        v42.fields.x = v32,
        v42.fields.y = v33,
        v42.fields.z = v34,
        (Instance = (DataManager_o *)TweenPosition__Begin(gameObject, 0.4, v42, 0LL)) == 0LL)
    || (*(_DWORD *)&Instance->fields._DispLog = 3, (treasureBoxList = this->fields.treasureBoxList) == 0LL) )
  {
LABEL_26:
    sub_1B7641C(Instance, v20);
  }
  v37 = 0LL;
  while ( 1 )
  {
    max_length = treasureBoxList->max_length;
    if ( (int)v37 >= max_length )
      break;
    if ( (unsigned int)v37 >= max_length )
      sub_1B76424(Instance, v20);
    v39 = treasureBoxList->m_Items[v37];
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_TreasureBoxMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)TreasureBoxMaster__GetTreasureBoxData(
                                      (TreasureBoxMaster_o *)Instance,
                                      eventId,
                                      v37,
                                      0LL);
        if ( v39 )
        {
          EventTreasureBoxPanelComponent__Init(
            v39,
            (TreasureBoxEntity_o *)Instance,
            svtId,
            drawAction,
            playVoice,
            requestCallBack,
            v40);
          treasureBoxList = this->fields.treasureBoxList;
          ++v37;
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
    sub_1B7641C(0LL, method);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, 0LL);
}


void __fastcall EventTreasureBoxManager__UpdateEventItemList(EventTreasureBoxManager_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1B7641C(0LL, method);
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.eventId, 1, 0LL);
}


int32_t __fastcall EventTreasureBoxManager__get_ItemBaseWindowHeight(
        EventTreasureBoxManager_o *this,
        const MethodInfo *method)
{
  struct ShopCurrencyInfoController_o *currencyInfoController; // x8

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1B7641C(this, method);
  return currencyInfoController->fields._ItemBaseWindowHeight_k__BackingField;
}