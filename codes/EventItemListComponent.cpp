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

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_8:
    sub_1B8880C(gameObject, v4);
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
        sub_1B88814(gameObject, v4);
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
  SceneJumpInfo_o *v3; // x20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A5A5F9 & 1) == 0 )
  {
    sub_1B885B0(&SceneJumpInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&StringLiteral_9528/*"NormalEventShop"*/);
    byte_4A5A5F9 = 1;
  }
  v3 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
  SceneJumpInfo___ctor_38664432(v3, (System_String_o *)StringLiteral_9528/*"NormalEventShop"*/, eventId, 0LL);
  if ( !v3
    || (SceneJumpInfo__SetReturnNowScene(v3, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(Instance, v5);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 72, 1, (Il2CppObject *)v3, 0LL);
}


void __fastcall EventItemListComponent__GoToShopEventItemExchange(int32_t eventId, const MethodInfo *method)
{
  SceneJumpInfo_o *v3; // x20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A5A5F8 & 1) == 0 )
  {
    sub_1B885B0(&SceneJumpInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&StringLiteral_6188/*"EventItem"*/);
    byte_4A5A5F8 = 1;
  }
  v3 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
  SceneJumpInfo___ctor_38664432(v3, (System_String_o *)StringLiteral_6188/*"EventItem"*/, eventId, 0LL);
  if ( !v3
    || (SceneJumpInfo__SetReturnNowScene(v3, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(Instance, v5);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v3, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemListComponent__Set(EventItemListComponent_o *this, int32_t eventId, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  struct EventItemComponent_array *eventItemDrawList; // x8
  UnityEngine_GameObject_o *v9; // x21
  unsigned __int64 v10; // x22
  void **p_monitor; // x23
  unsigned __int64 max_length; // x9
  unsigned __int64 klass_low; // x9

  if ( (byte_4A5A5FA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A5FA = 1;
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
          (gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)gameObject,
                                                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
    {
LABEL_19:
      sub_1B8880C(gameObject, v6);
    }
    gameObject = (UnityEngine_GameObject_o *)ShopMaster__GetEventItemList((ShopMaster_o *)gameObject, eventId, 0LL);
    eventItemDrawList = this->fields.eventItemDrawList;
    if ( eventItemDrawList )
    {
      v9 = gameObject;
      v10 = 0LL;
      p_monitor = &gameObject[1].monitor;
      while ( 1 )
      {
        max_length = eventItemDrawList->max_length;
        if ( (__int64)v10 >= (int)max_length )
          break;
        if ( !v9 )
          goto LABEL_19;
        if ( v10 >= max_length )
LABEL_22:
          sub_1B88814(gameObject, v6);
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