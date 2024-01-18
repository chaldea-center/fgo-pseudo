void __fastcall EventItemListComponent___ctor(EventItemListComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventItemListComponent__Clear(EventItemListComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  struct EventItemComponent_array *eventItemDrawList; // x8
  __int64 v6; // x20
  int max_length; // w9
  __int64 v8; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_8:
    sub_B2C434(gameObject, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  eventItemDrawList = this->fields.eventItemDrawList;
  if ( eventItemDrawList )
  {
    v6 = 0LL;
    while ( 1 )
    {
      max_length = eventItemDrawList->max_length;
      if ( (int)v6 >= max_length )
        break;
      if ( (unsigned int)v6 >= max_length )
      {
        v8 = sub_B2C460(gameObject);
        sub_B2C400(v8, 0LL);
      }
      gameObject = (UnityEngine_GameObject_o *)eventItemDrawList->m_Items[v6];
      if ( gameObject )
      {
        EventItemComponent__Clear((EventItemComponent_o *)gameObject, v4);
        eventItemDrawList = this->fields.eventItemDrawList;
        ++v6;
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
  __int64 v3; // x1
  __int64 v4; // x1
  SceneJumpInfo_o *v5; // x19
  AvalonSceneManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4188D4D & 1) == 0 )
  {
    sub_B2C35C(&SceneJumpInfo_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B2C35C(&StringLiteral_9631/*"NormalEventShop"*/, v4);
    byte_4188D4D = 1;
  }
  v5 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo);
  SceneJumpInfo___ctor_17292968(v5, (System_String_o *)StringLiteral_9631/*"NormalEventShop"*/, eventId, 0LL);
  if ( !v5
    || (SceneJumpInfo__SetReturnNowScene(v5, 0LL),
        (Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B2C434(Instance, v7);
  }
  AvalonSceneManager__transitionScene(Instance, 72, 1, (Il2CppObject *)v5, 0LL);
}


void __fastcall EventItemListComponent__GoToShopEventItemExchange(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  SceneJumpInfo_o *v5; // x19
  AvalonSceneManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4188D4C & 1) == 0 )
  {
    sub_B2C35C(&SceneJumpInfo_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B2C35C(&StringLiteral_6171/*"EventItem"*/, v4);
    byte_4188D4C = 1;
  }
  v5 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo);
  SceneJumpInfo___ctor_17292968(v5, (System_String_o *)StringLiteral_6171/*"EventItem"*/, eventId, 0LL);
  if ( !v5
    || (SceneJumpInfo__SetReturnNowScene(v5, 0LL),
        (Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B2C434(Instance, v7);
  }
  AvalonSceneManager__transitionScene(Instance, 22, 1, (Il2CppObject *)v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemListComponent__Set(EventItemListComponent_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  struct EventItemComponent_array *eventItemDrawList; // x8
  UnityEngine_GameObject_o *v10; // x21
  unsigned __int64 v11; // x22
  void **p_monitor; // x23
  unsigned __int64 max_length; // x9
  unsigned __int64 klass_low; // x9
  __int64 v15; // x0

  if ( (byte_4188D4E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4188D4E = 1;
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
          (gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)gameObject,
                                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
    {
LABEL_19:
      sub_B2C434(gameObject, v7);
    }
    gameObject = (UnityEngine_GameObject_o *)ShopMaster__GetEventItemList((ShopMaster_o *)gameObject, eventId, 0LL);
    eventItemDrawList = this->fields.eventItemDrawList;
    if ( eventItemDrawList )
    {
      v10 = gameObject;
      v11 = 0LL;
      p_monitor = &gameObject[1].monitor;
      while ( 1 )
      {
        max_length = eventItemDrawList->max_length;
        if ( (__int64)v11 >= (int)max_length )
          break;
        if ( !v10 )
          goto LABEL_19;
        if ( v11 >= max_length )
        {
LABEL_22:
          v15 = sub_B2C460(gameObject);
          sub_B2C400(v15, 0LL);
        }
        klass_low = LODWORD(v10[1].klass);
        gameObject = (UnityEngine_GameObject_o *)eventItemDrawList->m_Items[v11];
        if ( (__int64)v11 >= (int)klass_low )
        {
          if ( !gameObject )
            goto LABEL_19;
          EventItemComponent__Clear((EventItemComponent_o *)gameObject, v7);
        }
        else
        {
          if ( v11 >= klass_low )
            goto LABEL_22;
          if ( !gameObject )
            goto LABEL_19;
          EventItemComponent__Set((EventItemComponent_o *)gameObject, *((_DWORD *)p_monitor + v11), v8);
        }
        eventItemDrawList = this->fields.eventItemDrawList;
        ++v11;
        if ( !eventItemDrawList )
          goto LABEL_19;
      }
    }
    this->fields.eventId = eventId;
  }
}