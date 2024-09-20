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
  __int64 Instance; // x0
  __int64 v14; // x1
  System_Int32_array *EventItemList; // x25
  Il2CppObject *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x27
  EventDetailEntity_o *v18; // x26
  System_Collections_Generic_List_object__o *v19; // x28
  ShopCurrencyInfoController_o *v20; // x27
  float v21; // s0
  float v22; // s1
  float v23; // s2
  float v24; // s8
  float v25; // s9
  float v26; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventTreasureBoxPanelComponent_array *treasureBoxList; // x8
  __int64 v29; // x25
  int max_length; // w9
  EventTreasureBoxPanelComponent_o *v31; // x26
  const MethodInfo *v32; // x6
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4A563E6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_TreasureBoxMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A563E6 = 1;
  }
  this->fields.eventId = eventId;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_26;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, eventId, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_26;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v18 = (EventDetailEntity_o *)Entity;
  v19 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_26;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v19;
  Instance = sub_1B88554(&currencyInfoController->fields.objectList, v19);
  if ( !v18 )
    goto LABEL_26;
  v20 = this->fields.currencyInfoController;
  Instance = EventDetailEntity__IsForcedAdjustmentDialog(v18, 0LL);
  if ( !v20 )
    goto LABEL_26;
  ShopCurrencyInfoController__RefreshEventItemInfo(v20, 6, eventId, 1, EventItemList, Instance & 1, 0LL);
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
  *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  Instance = (__int64)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_26;
  v24 = v21;
  v25 = v22;
  v26 = v23;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_26;
  v33.fields.z = 0.0;
  v33.fields.x = -220.0;
  v33.fields.y = -1000.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v33, 0LL);
  Instance = (__int64)this->fields.currencyInfoController;
  if ( !Instance
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL),
        v34.fields.x = v24,
        v34.fields.y = v25,
        v34.fields.z = v26,
        (Instance = (__int64)TweenPosition__Begin(gameObject, 0.4, v34, 0LL)) == 0)
    || (*(_DWORD *)(Instance + 32) = 3, (treasureBoxList = this->fields.treasureBoxList) == 0LL) )
  {
LABEL_26:
    sub_1B8880C(Instance, v14);
  }
  v29 = 0LL;
  while ( 1 )
  {
    max_length = treasureBoxList->max_length;
    if ( (int)v29 >= max_length )
      break;
    if ( (unsigned int)v29 >= max_length )
      sub_1B88814(Instance, v14);
    v31 = treasureBoxList->m_Items[v29];
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TreasureBoxMaster___);
      if ( Instance )
      {
        Instance = (__int64)TreasureBoxMaster__GetTreasureBoxData((TreasureBoxMaster_o *)Instance, eventId, v29, 0LL);
        if ( v31 )
        {
          EventTreasureBoxPanelComponent__Init(
            v31,
            (TreasureBoxEntity_o *)Instance,
            svtId,
            drawAction,
            playVoice,
            requestCallBack,
            v32);
          treasureBoxList = this->fields.treasureBoxList;
          ++v29;
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
    sub_1B8880C(0LL, method);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, 0LL);
}


void __fastcall EventTreasureBoxManager__UpdateEventItemList(EventTreasureBoxManager_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1B8880C(0LL, method);
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.eventId, 1, 0LL);
}


int32_t __fastcall EventTreasureBoxManager__get_ItemBaseWindowHeight(
        EventTreasureBoxManager_o *this,
        const MethodInfo *method)
{
  struct ShopCurrencyInfoController_o *currencyInfoController; // x8

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1B8880C(this, method);
  return currencyInfoController->fields._ItemBaseWindowHeight_k__BackingField;
}