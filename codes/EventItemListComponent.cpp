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
    sub_1BCAA3C(gameObject, v4);
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
        sub_1BCAA44(gameObject, v4);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  SceneJumpInfo_o *v9; // x20
  Il2CppObject *Instance; // x0
  __int64 v11; // x1

  if ( (byte_4B15663 & 1) == 0 )
  {
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6);
    sub_1BCA7E0(&StringLiteral_9660/*"NormalEventShop"*/, v7, v8);
    byte_4B15663 = 1;
  }
  v9 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, method, v2, v3);
  SceneJumpInfo___ctor_39380884(v9, (System_String_o *)StringLiteral_9660/*"NormalEventShop"*/, eventId, 0LL);
  if ( !v9
    || (SceneJumpInfo__SetReturnNowScene(v9, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v11);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 72, 1, (Il2CppObject *)v9, 0LL);
}


void __fastcall EventItemListComponent__GoToShopEventItemExchange(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  SceneJumpInfo_o *v9; // x20
  Il2CppObject *Instance; // x0
  __int64 v11; // x1

  if ( (byte_4B15662 & 1) == 0 )
  {
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6);
    sub_1BCA7E0(&StringLiteral_6308/*"EventItem"*/, v7, v8);
    byte_4B15662 = 1;
  }
  v9 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, method, v2, v3);
  SceneJumpInfo___ctor_39380884(v9, (System_String_o *)StringLiteral_6308/*"EventItem"*/, eventId, 0LL);
  if ( !v9
    || (SceneJumpInfo__SetReturnNowScene(v9, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v11);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemListComponent__Set(EventItemListComponent_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  struct EventItemComponent_array *eventItemDrawList; // x8
  UnityEngine_GameObject_o *v11; // x21
  unsigned __int64 v12; // x22
  void **p_monitor; // x23
  unsigned __int64 max_length; // x9
  unsigned __int64 klass_low; // x9

  if ( (byte_4B15664 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B15664 = 1;
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
          (gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)gameObject,
                                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
    {
LABEL_19:
      sub_1BCAA3C(gameObject, v8);
    }
    gameObject = (UnityEngine_GameObject_o *)ShopMaster__GetEventItemList((ShopMaster_o *)gameObject, eventId, 0LL);
    eventItemDrawList = this->fields.eventItemDrawList;
    if ( eventItemDrawList )
    {
      v11 = gameObject;
      v12 = 0LL;
      p_monitor = &gameObject[1].monitor;
      while ( 1 )
      {
        max_length = eventItemDrawList->max_length;
        if ( (__int64)v12 >= (int)max_length )
          break;
        if ( !v11 )
          goto LABEL_19;
        if ( v12 >= max_length )
LABEL_22:
          sub_1BCAA44(gameObject, v8);
        klass_low = LODWORD(v11[1].klass);
        gameObject = (UnityEngine_GameObject_o *)eventItemDrawList->m_Items[v12];
        if ( (__int64)v12 >= (int)klass_low )
        {
          if ( !gameObject )
            goto LABEL_19;
          EventItemComponent__Clear((EventItemComponent_o *)gameObject, v8);
        }
        else
        {
          if ( v12 >= klass_low )
            goto LABEL_22;
          if ( !gameObject )
            goto LABEL_19;
          EventItemComponent__Set((EventItemComponent_o *)gameObject, *((_DWORD *)p_monitor + v12), v9);
        }
        eventItemDrawList = this->fields.eventItemDrawList;
        ++v12;
        if ( !eventItemDrawList )
          goto LABEL_19;
      }
    }
    this->fields.eventId = eventId;
  }
}