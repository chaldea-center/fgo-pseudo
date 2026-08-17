void EventInfoFortificationControl___ctor(EventInfoFortificationControl_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x0
  System_RuntimeFieldHandle_o v4; // x1
  struct System_Int32_array *v5; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_Generic_List_object__o *v12; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5971CB5 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventInfoFortificationViewItem__TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1);
    byte_5971CB5 = 1;
  }
  v3 = (System_Array_o *)sub_2213B20(int___TypeInfo, 3);
  v4.fields.value = Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1;
  v5 = (struct System_Int32_array *)v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v3, v4, 0);
  this->fields.workTypeOrder = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.workTypeOrder, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventInfoFortificationViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventInfoFortificationViewItem___ctor__);
  this->fields.fortificationViewItemList = (struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *)v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.fortificationViewItemList,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


void EventInfoFortificationControl__CheckAssertion(EventInfoFortificationControl_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void EventInfoFortificationControl__CreateFortificationViewItem(
        EventInfoFortificationControl_o *this,
        int32_t count,
        const MethodInfo *method)
{
  int32_t v5; // w29
  Il2CppObject *fortificationViewItemPrefab; // x21
  UnityEngine_Transform_o *fortificationViewItemParent; // x22
  Il2CppObject *v8; // x21
  System_Collections_Generic_List_object__o *fortificationViewItemList; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8

  if ( (byte_5971CB3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Add__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_EventInfoFortificationViewItem___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_24861/*"spot_info_gauge_base_color"*/);
    sub_2213A60(&StringLiteral_24863/*"spot_info_gauge_s"*/);
    sub_2213A60(&StringLiteral_24860/*"spot_info_gauge_base"*/);
    byte_5971CB3 = 1;
  }
  if ( count >= 1 )
  {
    v5 = count;
    do
    {
      fortificationViewItemParent = this->fields.fortificationViewItemParent;
      fortificationViewItemPrefab = (Il2CppObject *)this->fields.fortificationViewItemPrefab;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&count);
      v8 = UnityEngine_Object__Instantiate_object__59717116(
             fortificationViewItemPrefab,
             fortificationViewItemParent,
             (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_EventInfoFortificationViewItem___);
      fortificationViewItemList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                                 (UnityEngine_Object_o *)v8,
                                                                                 0,
                                                                                 0);
      if ( ((unsigned __int8)fortificationViewItemList & 1) != 0 )
      {
        if ( !v8 )
          goto LABEL_18;
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          (UISprite_o *)v8[2].klass,
          (System_String_o *)StringLiteral_24860/*"spot_info_gauge_base"*/,
          0);
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          (UISprite_o *)v8[2].monitor,
          (System_String_o *)StringLiteral_24863/*"spot_info_gauge_s"*/,
          0);
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          (UISprite_o *)v8[3].klass,
          (System_String_o *)StringLiteral_24861/*"spot_info_gauge_base_color"*/,
          0);
        fortificationViewItemList = (System_Collections_Generic_List_object__o *)this->fields.fortificationViewItemList;
        if ( !fortificationViewItemList )
          goto LABEL_18;
        items = fortificationViewItemList->fields._items;
        v17 = Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Add__;
        ++fortificationViewItemList->fields._version;
        if ( !items )
          goto LABEL_18;
        size = fortificationViewItemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            fortificationViewItemList,
            v8,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          fortificationViewItemList->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v8;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v8, v10, v11, v12, v13, v14, v15);
        }
      }
      --v5;
    }
    while ( v5 );
    fortificationViewItemList = (System_Collections_Generic_List_object__o *)this->fields.itemGrid;
    if ( !fortificationViewItemList )
LABEL_18:
      sub_2213CDC(fortificationViewItemList, *(_QWORD *)&count);
    ((void (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *))fortificationViewItemList->klass->vtable._8_unknown.methodPtr)(
      fortificationViewItemList,
      fortificationViewItemList->klass->vtable._8_unknown.method);
  }
}


void EventInfoFortificationControl__Initialization(
        EventInfoFortificationControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  EventInfoFortificationControl_o *v9; // x19
  struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *fortificationViewItemList; // x8
  System_String_o *size; // x2
  int v12; // w9
  EventUiEntity_o *eventUiEntity; // x20
  System_Action_o *v14; // x21

  v9 = this;
  if ( (byte_5971CB0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventInfoFortificationControl__Initialization_b__13_0__);
    this = (EventInfoFortificationControl_o *)sub_2213A60(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Clear__);
    byte_5971CB0 = 1;
  }
  fortificationViewItemList = v9->fields.fortificationViewItemList;
  if ( !fortificationViewItemList )
    sub_2213CDC(this, entity);
  size = (System_String_o *)(unsigned int)fortificationViewItemList->fields._size;
  v12 = fortificationViewItemList->fields._version + 1;
  fortificationViewItemList->fields._size = 0;
  fortificationViewItemList->fields._version = v12;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)fortificationViewItemList->fields._items, 0, (int32_t)size, 0);
  v9->fields.eventUiEntity = entity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->fields.eventUiEntity, (int32_t)entity, size, v3, v4, v5, v6, v7);
  eventUiEntity = v9->fields.eventUiEntity;
  v14 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)v9, Method_EventInfoFortificationControl__Initialization_b__13_0__, 0);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)v9, eventUiEntity, v14, 0);
}


bool EventInfoFortificationControl__IsFortificationEvent(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1

  if ( (byte_5971CB4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventFortificationMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5971CB4 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v4);
  return EventFortificationMaster__IsFortificationEvent((EventFortificationMaster_o *)Master_object, eventId, 0);
}


void EventInfoFortificationControl__OnDestroy(EventInfoFortificationControl_o *this, const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_2213CDC(this, method);
  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0);
}


void EventInfoFortificationControl__Redisplay(EventInfoFortificationControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  EventInfoFortificationControl__SetupFortificationItem(this, method);
  EventInfoFortificationControl__UpdateTotalRewardNum(this, v3);
}


void EventInfoFortificationControl__Setup(
        EventInfoFortificationControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  EventInfoFortificationControl__SetupFortificationItem(this, (const MethodInfo *)entitys);
  EventInfoFortificationControl__UpdateTotalRewardNum(this, v4);
}


void EventInfoFortificationControl__SetupFortificationItem(
        EventInfoFortificationControl_o *this,
        const MethodInfo *method)
{
  intptr_t Instance; // x0
  __int64 v4; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  const MethodInfo *v6; // x2
  struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *fortificationViewItemList; // x9
  System_Collections_Generic_List_EventFortificationEntity__o *v8; // x20
  System_Func_object__int__o *v9; // x21
  __int64 v10; // x1
  System_Linq_IOrderedEnumerable_TSource__o *v11; // x20
  EventInfoFortificationControl___c_c *v12; // x8
  struct EventInfoFortificationControl___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__17_1; // x21
  Il2CppObject *v15; // x22
  struct EventInfoFortificationControl___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_Collections_Generic_List_object__o *v24; // x8
  System_Collections_Generic_List_object__o *v25; // x20
  int32_t v26; // w21
  bool v27; // cc
  __int64 v28; // x1
  UnityEngine_Object_o *Item; // x23
  __int64 v30; // x1
  EventFortificationEntity_o *v31; // x24
  const MethodInfo *v32; // x2
  __int64 v33; // x1
  Il2CppObject *Master_object; // x25
  float v35; // s0
  UserEventFortificationEntity_o *v36; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_5971CB1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventFortificationMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventFortificationMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_EventFortificationEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenBy_EventFortificationEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_EventFortificationEntity___);
    sub_2213A60(&Method_EventInfoFortificationControl__SetupFortificationItem_b__17_0__);
    sub_2213A60(&System_Func_EventFortificationEntity__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Item__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_EventInfoFortificationControl___c__SetupFortificationItem_b__17_1__);
    sub_2213A60(&EventInfoFortificationControl___c_TypeInfo);
    byte_5971CB1 = 1;
  }
  v36 = 0;
  entities = 0;
  Instance = (intptr_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (intptr_t)DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity || !Instance )
    goto LABEL_56;
  Instance = EventFortificationMaster__TryGetEntityList(
               (EventFortificationMaster_o *)Instance,
               &entities,
               eventUiEntity->fields.eventId,
               0);
  if ( (Instance & 1) != 0 )
  {
    if ( entities )
    {
      fortificationViewItemList = this->fields.fortificationViewItemList;
      if ( fortificationViewItemList )
      {
        EventInfoFortificationControl__CreateFortificationViewItem(
          this,
          entities->fields._size - fortificationViewItemList->fields._size,
          v6);
        v8 = entities;
        v9 = (System_Func_object__int__o *)sub_2213CCC(System_Func_EventFortificationEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          v9,
          (Il2CppObject *)this,
          Method_EventInfoFortificationControl__SetupFortificationItem_b__17_0__,
          0);
        v11 = System_Linq_Enumerable__OrderBy_object__int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v8,
                (System_Func_TSource__TKey__o *)v9,
                (const MethodInfo_3888BA0 *)Method_System_Linq_Enumerable_OrderBy_EventFortificationEntity__int___);
        v12 = EventInfoFortificationControl___c_TypeInfo;
        if ( !*(&EventInfoFortificationControl___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(EventInfoFortificationControl___c_TypeInfo, v10);
          v12 = EventInfoFortificationControl___c_TypeInfo;
        }
        static_fields = v12->static_fields;
        _9__17_1 = (System_Func_object__int__o *)static_fields->__9__17_1;
        if ( !_9__17_1 )
        {
          if ( !*(&v12->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v12, v10);
            static_fields = EventInfoFortificationControl___c_TypeInfo->static_fields;
          }
          v15 = (Il2CppObject *)static_fields->__9;
          _9__17_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_EventFortificationEntity__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__17_1,
            v15,
            Method_EventInfoFortificationControl___c__SetupFortificationItem_b__17_1__,
            0);
          v16 = EventInfoFortificationControl___c_TypeInfo->static_fields;
          v16->__9__17_1 = (struct System_Func_EventFortificationEntity__int__o *)_9__17_1;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v16->__9__17_1,
            (int32_t)_9__17_1,
            v17,
            v18,
            v19,
            v20,
            v21,
            v22);
        }
        v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                     v11,
                                                                     (System_Func_TSource__TKey__o *)_9__17_1,
                                                                     (const MethodInfo_389AAF8 *)Method_System_Linq_Enumerable_ThenBy_EventFortificationEntity__int___);
        Instance = (intptr_t)System_Linq_Enumerable__ToList_object_(
                               v23,
                               (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_EventFortificationEntity___);
        v24 = (System_Collections_Generic_List_object__o *)this->fields.fortificationViewItemList;
        if ( v24 )
        {
          v25 = (System_Collections_Generic_List_object__o *)Instance;
          v26 = 0;
          do
          {
            if ( v26 >= v24->fields._size )
              return;
            if ( !v25 )
              break;
            v27 = v25->fields._size <= v26;
            Item = (UnityEngine_Object_o *)System_Collections_Generic_List_object___get_Item(
                                             v24,
                                             v26,
                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Item__);
            if ( v27 )
            {
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
              Instance = UnityEngine_Object__op_Inequality(Item, 0, 0);
              if ( (Instance & 1) != 0 )
              {
                Instance = (intptr_t)this->fields.fortificationViewItemList;
                if ( !Instance )
                  break;
                Instance = (intptr_t)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)Instance,
                                       v26,
                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Item__);
                if ( !Instance )
                  break;
                goto LABEL_50;
              }
            }
            else
            {
              v31 = (EventFortificationEntity_o *)System_Collections_Generic_List_object___get_Item(
                                                    v25,
                                                    v26,
                                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventFortificationEntity__get_Item__);
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
              Instance = UnityEngine_Object__op_Equality(Item, 0, 0);
              if ( !v31 || (Instance & 1) != 0 )
              {
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
                Instance = UnityEngine_Object__op_Inequality(Item, 0, 0);
                if ( (Instance & 1) != 0 )
                {
                  if ( !Item )
                    break;
                  Instance = (intptr_t)Item;
LABEL_50:
                  Instance = (intptr_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
                  if ( !Instance )
                    break;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
                }
              }
              else
              {
                if ( !Item )
                  break;
                Instance = (intptr_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
                if ( !Instance )
                  break;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
                EventInfoFortificationViewItem__Setup((EventInfoFortificationViewItem_o *)Item, v31, v32);
                if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v33);
                Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
                if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
                if ( !byte_5969EF2 )
                {
                  sub_2213A60(&NetworkManager_TypeInfo);
                  byte_5969EF2 = 1;
                }
                Instance = (intptr_t)NetworkManager_TypeInfo;
                if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
                  Instance = (intptr_t)NetworkManager_TypeInfo;
                }
                if ( !Master_object )
                  break;
                Instance = UserEventFortificationMaster__TryGetEntity(
                             (UserEventFortificationMaster_o *)Master_object,
                             &v36,
                             *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                             v31->fields.eventId,
                             v31->fields.idx,
                             0);
                if ( (Instance & 1) != 0 )
                {
                  if ( !v36 )
                    break;
                  Instance = Item[1].fields.m_CachedPtr;
                  if ( !Instance )
                    break;
                  v35 = (float)v36->fields.totalFortificationPoint / (float)v31->fields.maxFortificationPoint;
                }
                else
                {
                  Instance = Item[1].fields.m_CachedPtr;
                  if ( !Instance )
                    break;
                  v35 = 0.0;
                }
                UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Instance, v35, 0);
              }
            }
            v24 = (System_Collections_Generic_List_object__o *)this->fields.fortificationViewItemList;
            ++v26;
          }
          while ( v24 );
        }
      }
    }
LABEL_56:
    sub_2213CDC(Instance, v4);
  }
}


void EventInfoFortificationControl__UpdateFortificationInfo(
        EventInfoFortificationControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  EventInfoFortificationControl__SetupFortificationItem(this, method);
  EventInfoFortificationControl__UpdateTotalRewardNum(this, v3);
}


void EventInfoFortificationControl__UpdateTotalRewardNum(
        EventInfoFortificationControl_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t TotalFortificationRewardNum; // w20
  UILabel_o *totalRewardNumLabel; // x19
  System_String_o *v8; // x21
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5971CB2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserEventFortificationMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_5870/*"EVENT_POINT_COMMON_FORMAT"*/);
    byte_5971CB2 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
  if ( Master_object && (eventUiEntity = this->fields.eventUiEntity) != 0 )
    TotalFortificationRewardNum = UserEventFortificationMaster__GetTotalFortificationRewardNum(
                                    (UserEventFortificationMaster_o *)Master_object,
                                    eventUiEntity->fields.eventId,
                                    0);
  else
    TotalFortificationRewardNum = 0;
  totalRewardNumLabel = this->fields.totalRewardNumLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_5870/*"EVENT_POINT_COMMON_FORMAT"*/, 0);
  v12 = TotalFortificationRewardNum;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v12);
  v10 = System_String__Format(v8, v9, 0);
  if ( !totalRewardNumLabel )
    sub_2213CDC(v10, v11);
  UILabel__set_text(totalRewardNumLabel, v10, 0);
}


void EventInfoFortificationControl___Initialization_b__13_0(
        EventInfoFortificationControl_o *this,
        const MethodInfo *method)
{
  EventInfoFortificationControl_o *v2; // x19
  struct EventUiEntity_o *eventUiEntity; // x8

  v2 = this;
  if ( (byte_5971CB6 & 1) == 0 )
  {
    this = (EventInfoFortificationControl_o *)sub_2213A60(&StringLiteral_20121/*"event_progress_bg"*/);
    byte_5971CB6 = 1;
  }
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity
    || (EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)v2, eventUiEntity->fields.eventId, 0),
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)v2,
          v2->fields.bgSprite,
          (System_String_o *)StringLiteral_20121/*"event_progress_bg"*/,
          0),
        (this = (EventInfoFortificationControl_o *)v2->fields.bgSprite) == 0) )
  {
    sub_2213CDC(this, method);
  }
  (*(void (__fastcall **)(EventInfoFortificationControl_o *, size_t))&this->klass[1]._2.cctor_finished)(
    this,
    this->klass[1]._2.cctor_thread);
}


int32_t EventInfoFortificationControl___SetupFortificationItem_b__17_0(
        EventInfoFortificationControl_o *this,
        EventFortificationEntity_o *entity,
        const MethodInfo *method)
{
  EventInfoFortificationControl_o *v4; // x20

  v4 = this;
  if ( (byte_5971CB7 & 1) == 0 )
  {
    this = (EventInfoFortificationControl_o *)sub_2213A60(&Method_System_Array_IndexOf_int___);
    byte_5971CB7 = 1;
  }
  if ( !entity )
    sub_2213CDC(this, entity);
  return System_Array__IndexOf_int_(
           v4->fields.workTypeOrder,
           entity->fields.workType,
           (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___);
}


void EventInfoFortificationControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5971CB8 & 1) == 0 )
  {
    sub_2213A60(&EventInfoFortificationControl___c_TypeInfo);
    byte_5971CB8 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventInfoFortificationControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoFortificationControl___c_TypeInfo->static_fields->__9 = (struct EventInfoFortificationControl___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventInfoFortificationControl___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventInfoFortificationControl___c___ctor(EventInfoFortificationControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventInfoFortificationControl___c___SetupFortificationItem_b__17_1(
        EventInfoFortificationControl___c_o *this,
        EventFortificationEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_2213CDC(this, 0);
  return entity->fields.idx;
}