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
    sub_B5D69C(gameObject, v4);
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
        v8 = sub_B5D6C8(gameObject);
        sub_B5D668(v8, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  SceneJumpInfo_o *v11; // x19
  AvalonSceneManager_o *Instance; // x0
  __int64 v13; // x1

  if ( (byte_42E9B02 & 1) == 0 )
  {
    sub_B5D5C4(&SceneJumpInfo_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_9729/*"NormalEventShop"*/, v8, v9, v10);
    byte_42E9B02 = 1;
  }
  v11 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
  SceneJumpInfo___ctor_17509080(v11, (System_String_o *)StringLiteral_9729/*"NormalEventShop"*/, eventId, 0LL);
  if ( !v11
    || (SceneJumpInfo__SetReturnNowScene(v11, 0LL),
        (Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(Instance, v13);
  }
  AvalonSceneManager__transitionScene(Instance, 72, 1, (Il2CppObject *)v11, 0LL);
}


void __fastcall EventItemListComponent__GoToShopEventItemExchange(int32_t eventId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  SceneJumpInfo_o *v11; // x19
  AvalonSceneManager_o *Instance; // x0
  __int64 v13; // x1

  if ( (byte_42E9B01 & 1) == 0 )
  {
    sub_B5D5C4(&SceneJumpInfo_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_6250/*"EventItem"*/, v8, v9, v10);
    byte_42E9B01 = 1;
  }
  v11 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
  SceneJumpInfo___ctor_17509080(v11, (System_String_o *)StringLiteral_6250/*"EventItem"*/, eventId, 0LL);
  if ( !v11
    || (SceneJumpInfo__SetReturnNowScene(v11, 0LL),
        (Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(Instance, v13);
  }
  AvalonSceneManager__transitionScene(Instance, 22, 1, (Il2CppObject *)v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemListComponent__Set(EventItemListComponent_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  struct EventItemComponent_array *eventItemDrawList; // x8
  UnityEngine_GameObject_o *v13; // x21
  unsigned __int64 v14; // x22
  void **p_monitor; // x23
  unsigned __int64 max_length; // x9
  unsigned __int64 klass_low; // x9
  __int64 v18; // x0

  if ( (byte_42E9B03 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42E9B03 = 1;
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
          (gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)gameObject,
                                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
    {
LABEL_19:
      sub_B5D69C(gameObject, v10);
    }
    gameObject = (UnityEngine_GameObject_o *)ShopMaster__GetEventItemList((ShopMaster_o *)gameObject, eventId, 0LL);
    eventItemDrawList = this->fields.eventItemDrawList;
    if ( eventItemDrawList )
    {
      v13 = gameObject;
      v14 = 0LL;
      p_monitor = &gameObject[1].monitor;
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
          v18 = sub_B5D6C8(gameObject);
          sub_B5D668(v18, 0LL);
        }
        klass_low = LODWORD(v13[1].klass);
        gameObject = (UnityEngine_GameObject_o *)eventItemDrawList->m_Items[v14];
        if ( (__int64)v14 >= (int)klass_low )
        {
          if ( !gameObject )
            goto LABEL_19;
          EventItemComponent__Clear((EventItemComponent_o *)gameObject, v10);
        }
        else
        {
          if ( v14 >= klass_low )
            goto LABEL_22;
          if ( !gameObject )
            goto LABEL_19;
          EventItemComponent__Set((EventItemComponent_o *)gameObject, *((_DWORD *)p_monitor + v14), v11);
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