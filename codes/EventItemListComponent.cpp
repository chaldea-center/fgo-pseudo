void EventItemListComponent___ctor(EventItemListComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventItemListComponent__Clear(EventItemListComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  struct EventItemComponent_array *eventItemDrawList; // x8
  __int64 v6; // x20
  int max_length; // w9

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_8:
    sub_1C71608(gameObject, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  eventItemDrawList = this->fields.eventItemDrawList;
  if ( eventItemDrawList )
  {
    v6 = 0;
    while ( 1 )
    {
      max_length = eventItemDrawList->max_length;
      if ( (int)v6 >= max_length )
        break;
      if ( (unsigned int)v6 >= max_length )
        sub_1C71610(gameObject);
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


void EventItemListComponent__GoToEventShop(int32_t eventId, const MethodInfo *method)
{
  SceneJumpInfo_o *v3; // x20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4CC67AF & 1) == 0 )
  {
    sub_1C713B0(&SceneJumpInfo_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C713B0(&StringLiteral_9543/*"NormalEventShop"*/);
    byte_4CC67AF = 1;
  }
  v3 = (SceneJumpInfo_o *)sub_1C715FC(SceneJumpInfo_TypeInfo);
  SceneJumpInfo___ctor_41756228(v3, (System_String_o *)StringLiteral_9543/*"NormalEventShop"*/, eventId, 0);
  if ( !v3
    || (SceneJumpInfo__SetReturnNowScene(v3, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C71608(Instance, v5);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 72, 1, (Il2CppObject *)v3, 0);
}


void EventItemListComponent__GoToShopEventItemExchange(int32_t eventId, const MethodInfo *method)
{
  SceneJumpInfo_o *v3; // x20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4CC67AE & 1) == 0 )
  {
    sub_1C713B0(&SceneJumpInfo_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C713B0(&StringLiteral_6221/*"EventItem"*/);
    byte_4CC67AE = 1;
  }
  v3 = (SceneJumpInfo_o *)sub_1C715FC(SceneJumpInfo_TypeInfo);
  SceneJumpInfo___ctor_41756228(v3, (System_String_o *)StringLiteral_6221/*"EventItem"*/, eventId, 0);
  if ( !v3
    || (SceneJumpInfo__SetReturnNowScene(v3, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C71608(Instance, v5);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v3, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventItemListComponent__Set(EventItemListComponent_o *this, int32_t eventId, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  struct EventItemComponent_array *eventItemDrawList; // x8
  UnityEngine_GameObject_o *v9; // x21
  unsigned __int64 v10; // x22
  void **p_monitor; // x23
  unsigned __int64 max_length_low; // x9
  unsigned __int64 klass_low; // x9

  if ( (byte_4CC67B0 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC67B0 = 1;
  }
  if ( eventId < 1 )
  {
    EventItemListComponent__Clear(this, *(const MethodInfo **)&eventId);
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
          (gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
      || (gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)gameObject,
                                                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ShopMaster___)) == 0 )
    {
LABEL_19:
      sub_1C71608(gameObject, v6);
    }
    gameObject = (UnityEngine_GameObject_o *)ShopMaster__GetEventItemList((ShopMaster_o *)gameObject, eventId, 0);
    eventItemDrawList = this->fields.eventItemDrawList;
    if ( eventItemDrawList )
    {
      v9 = gameObject;
      v10 = 0;
      p_monitor = &gameObject[1].monitor;
      while ( 1 )
      {
        max_length_low = LODWORD(eventItemDrawList->max_length);
        if ( (__int64)v10 >= (int)max_length_low )
          break;
        if ( !v9 )
          goto LABEL_19;
        if ( v10 >= max_length_low )
LABEL_22:
          sub_1C71610(gameObject);
        klass_low = LODWORD(v9[1].klass);
        gameObject = (UnityEngine_GameObject_o *)eventItemDrawList->m_Items[v10];
        if ( (__int64)v10 >= (int)klass_low )
        {
          if ( !gameObject )
            goto LABEL_19;
          EventItemComponent__Clear((EventItemComponent_o *)gameObject, v6);
        }
        else
        {
          if ( v10 >= klass_low )
            goto LABEL_22;
          if ( !gameObject )
            goto LABEL_19;
          EventItemComponent__Set((EventItemComponent_o *)gameObject, *((_DWORD *)p_monitor + v10), v7);
        }
        eventItemDrawList = this->fields.eventItemDrawList;
        ++v10;
        if ( !eventItemDrawList )
          goto LABEL_19;
      }
    }
    this->fields.eventId = eventId;
  }
}