void EventInfoFortificationControl___ctor(EventInfoFortificationControl_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x0
  System_RuntimeFieldHandle_o v4; // x1
  struct System_Int32_array *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C58281 & 1) == 0 )
  {
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_EventInfoFortificationViewItem__TypeInfo);
    sub_1C3E564(&Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1);
    byte_4C58281 = 1;
  }
  v3 = (System_Array_o *)sub_1C3E60C(int___TypeInfo, 3);
  v4.fields.value = Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1;
  v5 = (struct System_Int32_array *)v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v3, v4, 0);
  this->fields.workTypeOrder = v5;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.workTypeOrder, (int32_t)v5, v6, v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EventInfoFortificationViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventInfoFortificationViewItem___ctor__);
  this->fields.fortificationViewItemList = (struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *)v8;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.fortificationViewItemList, (int32_t)v8, v9, v10);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


void EventInfoFortificationControl__CheckAssertion(EventInfoFortificationControl_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoFortificationControl__CreateFortificationViewItem(
        EventInfoFortificationControl_o *this,
        int32_t count,
        const MethodInfo *method)
{
  int32_t v5; // w29
  UnityEngine_Transform_o *fortificationViewItemParent; // x21
  Il2CppObject *fortificationViewItemPrefab; // x22
  Il2CppObject *v8; // x21
  System_Collections_Generic_List_object__o *fortificationViewItemList; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8

  if ( (byte_4C5827F & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Add__);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_EventInfoFortificationViewItem___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_23626/*"spot_info_gauge_base_color"*/);
    sub_1C3E564(&StringLiteral_23628/*"spot_info_gauge_s"*/);
    sub_1C3E564(&StringLiteral_23625/*"spot_info_gauge_base"*/);
    byte_4C5827F = 1;
  }
  if ( count >= 1 )
  {
    v5 = count;
    do
    {
      fortificationViewItemParent = this->fields.fortificationViewItemParent;
      fortificationViewItemPrefab = (Il2CppObject *)this->fields.fortificationViewItemPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = UnityEngine_Object__Instantiate_object__51929056(
             fortificationViewItemPrefab,
             fortificationViewItemParent,
             (const MethodInfo_3185FE0 *)Method_UnityEngine_Object_Instantiate_EventInfoFortificationViewItem___);
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
          (System_String_o *)StringLiteral_23625/*"spot_info_gauge_base"*/,
          0);
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          (UISprite_o *)v8[2].monitor,
          (System_String_o *)StringLiteral_23628/*"spot_info_gauge_s"*/,
          0);
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          (UISprite_o *)v8[3].klass,
          (System_String_o *)StringLiteral_23626/*"spot_info_gauge_base_color"*/,
          0);
        fortificationViewItemList = (System_Collections_Generic_List_object__o *)this->fields.fortificationViewItemList;
        if ( !fortificationViewItemList )
          goto LABEL_18;
        items = fortificationViewItemList->fields._items;
        v14 = Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Add__;
        ++fortificationViewItemList->fields._version;
        if ( !items )
          goto LABEL_18;
        size = fortificationViewItemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            fortificationViewItemList,
            v8,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v16 = &items->obj.klass + size;
          fortificationViewItemList->fields._size = size + 1;
          v16[4] = (Il2CppClass *)v8;
          sub_1C3E508((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v8, v11, v12);
        }
      }
      --v5;
    }
    while ( v5 );
    fortificationViewItemList = (System_Collections_Generic_List_object__o *)this->fields.itemGrid;
    if ( !fortificationViewItemList )
LABEL_18:
      sub_1C3E7C0(fortificationViewItemList, v10);
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
  const MethodInfo *v3; // x3
  EventInfoFortificationControl_o *v5; // x19
  struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *fortificationViewItemList; // x8
  int32_t size; // w2
  int v8; // w9
  EventUiEntity_o *eventUiEntity; // x20
  System_Action_o *v10; // x21

  v5 = this;
  if ( (byte_4C5827C & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_EventInfoFortificationControl__Initialization_b__13_0__);
    this = (EventInfoFortificationControl_o *)sub_1C3E564(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Clear__);
    byte_4C5827C = 1;
  }
  fortificationViewItemList = v5->fields.fortificationViewItemList;
  if ( !fortificationViewItemList )
    sub_1C3E7C0(this, entity);
  size = fortificationViewItemList->fields._size;
  v8 = fortificationViewItemList->fields._version + 1;
  fortificationViewItemList->fields._size = 0;
  fortificationViewItemList->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)fortificationViewItemList->fields._items, 0, size, 0);
  v5->fields.eventUiEntity = entity;
  sub_1C3E508((CGThumbnailListItem_o *)&v5->fields.eventUiEntity, (int32_t)entity, size, v3);
  eventUiEntity = v5->fields.eventUiEntity;
  v10 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)v5, Method_EventInfoFortificationControl__Initialization_b__13_0__, 0);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)v5, eventUiEntity, v10, 0);
}


bool EventInfoFortificationControl__IsFortificationEvent(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1

  if ( (byte_4C58280 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_EventFortificationMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C58280 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_object )
    sub_1C3E7C0(0, v4);
  return EventFortificationMaster__IsFortificationEvent((EventFortificationMaster_o *)Master_object, eventId, 0);
}


void EventInfoFortificationControl__OnDestroy(EventInfoFortificationControl_o *this, const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C3E7C0(this, method);
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
  System_Linq_IOrderedEnumerable_TSource__o *v10; // x20
  EventInfoFortificationControl___c_c *v11; // x8
  System_Func_object__int__o *_9__17_1; // x21
  Il2CppObject *v13; // x22
  struct EventInfoFortificationControl___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Collections_Generic_List_object__o *v18; // x8
  System_Collections_Generic_List_object__o *v19; // x20
  int32_t v20; // w21
  bool v21; // cc
  UnityEngine_Object_o *Item; // x23
  EventFortificationEntity_o *v23; // x24
  const MethodInfo *v24; // x2
  Il2CppObject *Master_object; // x25
  float v26; // s0
  UserEventFortificationEntity_o *v27; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C5827D & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventFortificationMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserEventFortificationMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_OrderBy_EventFortificationEntity__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ThenBy_EventFortificationEntity__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_EventFortificationEntity___);
    sub_1C3E564(&Method_EventInfoFortificationControl__SetupFortificationItem_b__17_0__);
    sub_1C3E564(&System_Func_EventFortificationEntity__int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventFortificationEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventFortificationEntity__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Item__);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_EventInfoFortificationControl___c__SetupFortificationItem_b__17_1__);
    sub_1C3E564(&EventInfoFortificationControl___c_TypeInfo);
    byte_4C5827D = 1;
  }
  v27 = 0;
  entities = 0;
  Instance = (intptr_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (intptr_t)DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
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
        v9 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_EventFortificationEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          v9,
          (Il2CppObject *)this,
          Method_EventInfoFortificationControl__SetupFortificationItem_b__17_0__,
          0);
        v10 = System_Linq_Enumerable__OrderBy_object__int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v8,
                (System_Func_TSource__TKey__o *)v9,
                (const MethodInfo_31292A0 *)Method_System_Linq_Enumerable_OrderBy_EventFortificationEntity__int___);
        v11 = EventInfoFortificationControl___c_TypeInfo;
        if ( !EventInfoFortificationControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoFortificationControl___c_TypeInfo);
          v11 = EventInfoFortificationControl___c_TypeInfo;
        }
        _9__17_1 = (System_Func_object__int__o *)v11->static_fields->__9__17_1;
        if ( !_9__17_1 )
        {
          if ( !v11->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v11);
            v11 = EventInfoFortificationControl___c_TypeInfo;
          }
          v13 = (Il2CppObject *)v11->static_fields->__9;
          _9__17_1 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_EventFortificationEntity__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__17_1,
            v13,
            Method_EventInfoFortificationControl___c__SetupFortificationItem_b__17_1__,
            0);
          static_fields = EventInfoFortificationControl___c_TypeInfo->static_fields;
          static_fields->__9__17_1 = (struct System_Func_EventFortificationEntity__int__o *)_9__17_1;
          sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__17_1, (int32_t)_9__17_1, v15, v16);
        }
        v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                     v10,
                                                                     (System_Func_TSource__TKey__o *)_9__17_1,
                                                                     (const MethodInfo_313834C *)Method_System_Linq_Enumerable_ThenBy_EventFortificationEntity__int___);
        Instance = (intptr_t)System_Linq_Enumerable__ToList_object_(
                               v17,
                               (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_EventFortificationEntity___);
        v18 = (System_Collections_Generic_List_object__o *)this->fields.fortificationViewItemList;
        if ( v18 )
        {
          v19 = (System_Collections_Generic_List_object__o *)Instance;
          v20 = 0;
          do
          {
            if ( v20 >= v18->fields._size )
              return;
            if ( !v19 )
              break;
            v21 = v19->fields._size <= v20;
            Item = (UnityEngine_Object_o *)System_Collections_Generic_List_object___get_Item(
                                             v18,
                                             v20,
                                             (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Item__);
            if ( v21 )
            {
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              Instance = UnityEngine_Object__op_Inequality(Item, 0, 0);
              if ( (Instance & 1) != 0 )
              {
                Instance = (intptr_t)this->fields.fortificationViewItemList;
                if ( !Instance )
                  break;
                Instance = (intptr_t)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)Instance,
                                       v20,
                                       (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Item__);
                if ( !Instance )
                  break;
                goto LABEL_50;
              }
            }
            else
            {
              v23 = (EventFortificationEntity_o *)System_Collections_Generic_List_object___get_Item(
                                                    v19,
                                                    v20,
                                                    (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventFortificationEntity__get_Item__);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              Instance = UnityEngine_Object__op_Equality(Item, 0, 0);
              if ( !v23 || (Instance & 1) != 0 )
              {
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                EventInfoFortificationViewItem__Setup((EventInfoFortificationViewItem_o *)Item, v23, v24);
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                if ( !byte_4C50AE2 )
                {
                  sub_1C3E564(&NetworkManager_TypeInfo);
                  byte_4C50AE2 = 1;
                }
                Instance = (intptr_t)NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  Instance = (intptr_t)NetworkManager_TypeInfo;
                }
                if ( !Master_object )
                  break;
                Instance = UserEventFortificationMaster__TryGetEntity(
                             (UserEventFortificationMaster_o *)Master_object,
                             &v27,
                             *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                             v23->fields.eventId,
                             v23->fields.idx,
                             0);
                if ( (Instance & 1) != 0 )
                {
                  if ( !v27 )
                    break;
                  Instance = Item[1].fields.m_CachedPtr;
                  if ( !Instance )
                    break;
                  v26 = (float)v27->fields.totalFortificationPoint / (float)v23->fields.maxFortificationPoint;
                }
                else
                {
                  Instance = Item[1].fields.m_CachedPtr;
                  if ( !Instance )
                    break;
                  v26 = 0.0;
                }
                UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Instance, v26, 0);
              }
            }
            v18 = (System_Collections_Generic_List_object__o *)this->fields.fortificationViewItemList;
            ++v20;
          }
          while ( v18 );
        }
      }
    }
LABEL_56:
    sub_1C3E7C0(Instance, v4);
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
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t TotalFortificationRewardNum; // w20
  UILabel_o *totalRewardNumLabel; // x19
  System_String_o *v7; // x21
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x5
  __int64 v12; // x6
  __int64 v13; // x7
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C5827E & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_UserEventFortificationMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_5639/*"EVENT_POINT_COMMON_FORMAT"*/);
    byte_4C5827E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
  if ( Master_object && (eventUiEntity = this->fields.eventUiEntity) != 0 )
    TotalFortificationRewardNum = UserEventFortificationMaster__GetTotalFortificationRewardNum(
                                    (UserEventFortificationMaster_o *)Master_object,
                                    eventUiEntity->fields.eventId,
                                    0);
  else
    TotalFortificationRewardNum = 0;
  totalRewardNumLabel = this->fields.totalRewardNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5639/*"EVENT_POINT_COMMON_FORMAT"*/, 0);
  v17 = TotalFortificationRewardNum;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v8, v9, v10, v11, v12, v13);
  v15 = System_String__Format(v7, v14, 0);
  if ( !totalRewardNumLabel )
    sub_1C3E7C0(v15, v16);
  UILabel__set_text(totalRewardNumLabel, v15, 0);
}


void EventInfoFortificationControl___Initialization_b__13_0(
        EventInfoFortificationControl_o *this,
        const MethodInfo *method)
{
  EventInfoFortificationControl_o *v2; // x19
  struct EventUiEntity_o *eventUiEntity; // x8

  v2 = this;
  if ( (byte_4C58282 & 1) == 0 )
  {
    this = (EventInfoFortificationControl_o *)sub_1C3E564(&StringLiteral_19247/*"event_progress_bg"*/);
    byte_4C58282 = 1;
  }
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity
    || (EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)v2, eventUiEntity->fields.eventId, 0),
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)v2,
          v2->fields.bgSprite,
          (System_String_o *)StringLiteral_19247/*"event_progress_bg"*/,
          0),
        (this = (EventInfoFortificationControl_o *)v2->fields.bgSprite) == 0) )
  {
    sub_1C3E7C0(this, method);
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
  if ( (byte_4C58283 & 1) == 0 )
  {
    this = (EventInfoFortificationControl_o *)sub_1C3E564(&Method_System_Array_IndexOf_int___);
    byte_4C58283 = 1;
  }
  if ( !entity )
    sub_1C3E7C0(this, entity);
  return System_Array__IndexOf_int_(
           v4->fields.workTypeOrder,
           entity->fields.workType,
           (const MethodInfo_3200C2C *)Method_System_Array_IndexOf_int___);
}


void EventInfoFortificationControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C58284 & 1) == 0 )
  {
    sub_1C3E564(&EventInfoFortificationControl___c_TypeInfo);
    byte_4C58284 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(EventInfoFortificationControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoFortificationControl___c_TypeInfo->static_fields->__9 = (struct EventInfoFortificationControl___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)EventInfoFortificationControl___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C3E7C0(this, 0);
  return entity->fields.idx;
}