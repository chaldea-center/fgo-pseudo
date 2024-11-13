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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 Instance; // x0
  __int64 v26; // x1
  System_Int32_array *EventItemList; // x25
  Il2CppObject *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x27
  EventDetailEntity_o *v30; // x26
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Collections_Generic_List_object__o *v34; // x28
  ShopCurrencyInfoController_o *v35; // x27
  float v36; // s0
  float v37; // s1
  float v38; // s2
  float v39; // s8
  float v40; // s9
  float v41; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventTreasureBoxPanelComponent_array *treasureBoxList; // x8
  __int64 v44; // x25
  int max_length; // w9
  EventTreasureBoxPanelComponent_o *v46; // x26
  const MethodInfo *v47; // x6
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4B1130A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId, *(_QWORD *)&svtId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureBoxMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    byte_4B1130A = 1;
  }
  this->fields.eventId = eventId;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_26;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, eventId, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_26;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v30 = (EventDetailEntity_o *)Entity;
  v34 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo,
                                                       v31,
                                                       v32,
                                                       v33);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_26;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v34;
  Instance = sub_1BCA784(&currencyInfoController->fields.objectList, v34);
  if ( !v30 )
    goto LABEL_26;
  v35 = this->fields.currencyInfoController;
  Instance = EventDetailEntity__IsForcedAdjustmentDialog(v30, 0LL);
  if ( !v35 )
    goto LABEL_26;
  ShopCurrencyInfoController__RefreshEventItemInfo(v35, 6, eventId, 1, EventItemList, Instance & 1, 0LL);
  Instance = (__int64)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_26;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_26;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_26;
  *(UnityEngine_Vector3_o *)&v36 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  Instance = (__int64)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_26;
  v39 = v36;
  v40 = v37;
  v41 = v38;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_26;
  v48.fields.z = 0.0;
  v48.fields.x = -220.0;
  v48.fields.y = -1000.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v48, 0LL);
  Instance = (__int64)this->fields.currencyInfoController;
  if ( !Instance
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL),
        v49.fields.x = v39,
        v49.fields.y = v40,
        v49.fields.z = v41,
        (Instance = (__int64)TweenPosition__Begin(gameObject, 0.4, v49, 0LL)) == 0)
    || (*(_DWORD *)(Instance + 32) = 3, (treasureBoxList = this->fields.treasureBoxList) == 0LL) )
  {
LABEL_26:
    sub_1BCAA3C(Instance, v26);
  }
  v44 = 0LL;
  while ( 1 )
  {
    max_length = treasureBoxList->max_length;
    if ( (int)v44 >= max_length )
      break;
    if ( (unsigned int)v44 >= max_length )
      sub_1BCAA44(Instance, v26);
    v46 = treasureBoxList->m_Items[v44];
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureBoxMaster___);
      if ( Instance )
      {
        Instance = (__int64)TreasureBoxMaster__GetTreasureBoxData((TreasureBoxMaster_o *)Instance, eventId, v44, 0LL);
        if ( v46 )
        {
          EventTreasureBoxPanelComponent__Init(
            v46,
            (TreasureBoxEntity_o *)Instance,
            svtId,
            drawAction,
            playVoice,
            requestCallBack,
            v47);
          treasureBoxList = this->fields.treasureBoxList;
          ++v44;
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
    sub_1BCAA3C(0LL, method);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, 0LL);
}


void __fastcall EventTreasureBoxManager__UpdateEventItemList(EventTreasureBoxManager_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1BCAA3C(0LL, method);
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.eventId, 1, 0LL);
}


int32_t __fastcall EventTreasureBoxManager__get_ItemBaseWindowHeight(
        EventTreasureBoxManager_o *this,
        const MethodInfo *method)
{
  struct ShopCurrencyInfoController_o *currencyInfoController; // x8

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1BCAA3C(this, method);
  return currencyInfoController->fields._ItemBaseWindowHeight_k__BackingField;
}