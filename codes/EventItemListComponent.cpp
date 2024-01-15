void __fastcall EventItemListComponent___ctor(EventItemListComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventItemListComponent__Clear(EventItemListComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  struct EventItemComponent_array *eventItemDrawList; // x8
  __int64 v8; // x20
  int max_length; // w9
  EventItemComponent_o *v10; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_8:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  eventItemDrawList = this->fields.eventItemDrawList;
  if ( eventItemDrawList )
  {
    v8 = 0LL;
    while ( 1 )
    {
      max_length = eventItemDrawList->max_length;
      if ( (int)v8 >= max_length )
        break;
      if ( (unsigned int)v8 >= max_length )
      {
        sub_B17100(v4, v5, v6);
        sub_B170A0();
      }
      v10 = eventItemDrawList->m_Items[v8];
      if ( v10 )
      {
        EventItemComponent__Clear(v10, v5);
        eventItemDrawList = this->fields.eventItemDrawList;
        ++v8;
        if ( eventItemDrawList )
          continue;
      }
      goto LABEL_8;
    }
  }
  this->fields.eventId = 0;
}


void __fastcall EventItemListComponent__GoToEventShop(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  SceneJumpInfo_o *v8; // x19
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40F8847 & 1) == 0 )
  {
    sub_B16FFC(&SceneJumpInfo_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_B16FFC(&StringLiteral_9601/*"NormalEventShop"*/, v7);
    byte_40F8847 = 1;
  }
  v8 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, method, v2, v3, v4);
  SceneJumpInfo___ctor_29748028(v8, (System_String_o *)StringLiteral_9601/*"NormalEventShop"*/, eventId, 0LL);
  if ( !v8
    || (SceneJumpInfo__SetReturnNowScene(v8, 0LL),
        (Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  AvalonSceneManager__transitionScene(Instance, 72, 1, (Il2CppObject *)v8, 0LL);
}


void __fastcall EventItemListComponent__GoToShopEventItemExchange(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  SceneJumpInfo_o *v8; // x19
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40F8846 & 1) == 0 )
  {
    sub_B16FFC(&SceneJumpInfo_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_B16FFC(&StringLiteral_6153/*"EventItem"*/, v7);
    byte_40F8846 = 1;
  }
  v8 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, method, v2, v3, v4);
  SceneJumpInfo___ctor_29748028(v8, (System_String_o *)StringLiteral_6153/*"EventItem"*/, eventId, 0LL);
  if ( !v8
    || (SceneJumpInfo__SetReturnNowScene(v8, 0LL),
        (Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  AvalonSceneManager__transitionScene(Instance, 22, 1, (Il2CppObject *)v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemListComponent__Set(EventItemListComponent_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  WebViewManager_o *Instance; // x0
  ShopMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventItemComponent_o *EventItemList; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  struct EventItemComponent_array *eventItemDrawList; // x8
  EventItemComponent_o *v13; // x21
  unsigned __int64 v14; // x22
  struct UISprite_o **p_baseSp; // x23
  unsigned __int64 max_length; // x9
  unsigned __int64 baseObject_low; // x9

  if ( (byte_40F8848 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F8848 = 1;
  }
  if ( eventId < 1 )
  {
    EventItemListComponent__Clear(this, *(const MethodInfo **)&eventId);
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
          (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (MasterData_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
    {
LABEL_19:
      sub_B170D4();
    }
    EventItemList = (EventItemComponent_o *)ShopMaster__GetEventItemList(
                                              MasterData_WarQuestSelectionMaster,
                                              eventId,
                                              0LL);
    eventItemDrawList = this->fields.eventItemDrawList;
    if ( eventItemDrawList )
    {
      v13 = EventItemList;
      v14 = 0LL;
      p_baseSp = &EventItemList->fields.baseSp;
      while ( 1 )
      {
        max_length = eventItemDrawList->max_length;
        if ( (__int64)v14 >= (int)max_length )
          break;
        if ( !v13 )
          goto LABEL_19;
        if ( v14 >= max_length )
        {
LABEL_22:
          sub_B17100(EventItemList, v10, v11);
          sub_B170A0();
        }
        baseObject_low = LODWORD(v13->fields.baseObject);
        EventItemList = eventItemDrawList->m_Items[v14];
        if ( (__int64)v14 >= (int)baseObject_low )
        {
          if ( !EventItemList )
            goto LABEL_19;
          EventItemComponent__Clear(EventItemList, v10);
        }
        else
        {
          if ( v14 >= baseObject_low )
            goto LABEL_22;
          if ( !EventItemList )
            goto LABEL_19;
          EventItemComponent__Set(EventItemList, *((_DWORD *)p_baseSp + v14), v11);
        }
        eventItemDrawList = this->fields.eventItemDrawList;
        ++v14;
        if ( !eventItemDrawList )
          goto LABEL_19;
      }
    }
    this->fields.eventId = eventId;
  }
}