void __fastcall EventInfoFortificationControl___ctor(EventInfoFortificationControl_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x0
  struct System_Int32_array *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_RuntimeFieldHandle_o v10; // 0:w1.4

  if ( (byte_4A5BB29 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventInfoFortificationViewItem__TypeInfo);
    sub_1B885B0(&Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1);
    byte_4A5BB29 = 1;
  }
  v3 = (System_Array_o *)sub_1B88658(int___TypeInfo, 3LL);
  v10.fields.value = Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1;
  v4 = (struct System_Int32_array *)v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v3, v10, 0LL);
  this->fields.workTypeOrder = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.workTypeOrder, (int32_t)v4, v5, v6);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventInfoFortificationViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventInfoFortificationViewItem___ctor__);
  this->fields.fortificationViewItemList = (struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *)v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fortificationViewItemList, (int32_t)v7, v8, v9);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoFortificationControl__CheckAssertion(
        EventInfoFortificationControl_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoFortificationControl__CreateFortificationViewItem(
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
  int32_t v12; // w3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8

  if ( (byte_4A5BB27 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Add__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_EventInfoFortificationViewItem___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_23434/*"spot_info_gauge_base_color"*/);
    sub_1B885B0(&StringLiteral_23436/*"spot_info_gauge_s"*/);
    sub_1B885B0(&StringLiteral_23433/*"spot_info_gauge_base"*/);
    byte_4A5BB27 = 1;
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
      v8 = UnityEngine_Object__Instantiate_object__49297800(
             fortificationViewItemPrefab,
             fortificationViewItemParent,
             (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_EventInfoFortificationViewItem___);
      fortificationViewItemList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                                 (UnityEngine_Object_o *)v8,
                                                                                 0LL,
                                                                                 0LL);
      if ( ((unsigned __int8)fortificationViewItemList & 1) != 0 )
      {
        if ( !v8 )
          goto LABEL_18;
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          (UISprite_o *)v8[2].klass,
          (System_String_o *)StringLiteral_23433/*"spot_info_gauge_base"*/,
          0LL);
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          (UISprite_o *)v8[2].monitor,
          (System_String_o *)StringLiteral_23436/*"spot_info_gauge_s"*/,
          0LL);
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          (UISprite_o *)v8[3].klass,
          (System_String_o *)StringLiteral_23434/*"spot_info_gauge_base_color"*/,
          0LL);
        fortificationViewItemList = (System_Collections_Generic_List_object__o *)this->fields.fortificationViewItemList;
        if ( !fortificationViewItemList )
          goto LABEL_18;
        items = fortificationViewItemList->fields._items;
        v14 = Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Add__;
        ++fortificationViewItemList->fields._version;
        if ( !items )
          goto LABEL_18;
        size = fortificationViewItemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            fortificationViewItemList,
            v8,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v16 = &items->obj.klass + size;
          fortificationViewItemList->fields._size = size + 1;
          v16[4] = (Il2CppClass *)v8;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v8, v11, v12);
        }
      }
      --v5;
    }
    while ( v5 );
    fortificationViewItemList = (System_Collections_Generic_List_object__o *)this->fields.itemGrid;
    if ( !fortificationViewItemList )
LABEL_18:
      sub_1B8880C(fortificationViewItemList, v10);
    ((void (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer))fortificationViewItemList->klass->vtable._8_unknown.method)(
      fortificationViewItemList,
      fortificationViewItemList->klass->vtable._9_unknown.methodPtr);
  }
}


void __fastcall EventInfoFortificationControl__Initialization(
        EventInfoFortificationControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  EventInfoFortificationControl_o *v5; // x19
  struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *fortificationViewItemList; // x8
  int32_t size; // w2
  int v8; // w9
  EventUiEntity_o *eventUiEntity; // x20
  System_Action_o *v10; // x21

  v5 = this;
  if ( (byte_4A5BB24 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventInfoFortificationControl__Initialization_b__13_0__);
    this = (EventInfoFortificationControl_o *)sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Clear__);
    byte_4A5BB24 = 1;
  }
  fortificationViewItemList = v5->fields.fortificationViewItemList;
  if ( !fortificationViewItemList )
    sub_1B8880C(this, entity);
  size = fortificationViewItemList->fields._size;
  v8 = fortificationViewItemList->fields._version + 1;
  fortificationViewItemList->fields._size = 0;
  fortificationViewItemList->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)fortificationViewItemList->fields._items, 0, size, 0LL);
  v5->fields.eventUiEntity = entity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.eventUiEntity, (int32_t)entity, size, v3);
  eventUiEntity = v5->fields.eventUiEntity;
  v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)v5, Method_EventInfoFortificationControl__Initialization_b__13_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)v5, eventUiEntity, v10, 0LL);
}


bool __fastcall EventInfoFortificationControl__IsFortificationEvent(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1

  if ( (byte_4A5BB28 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventFortificationMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5BB28 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v4);
  return EventFortificationMaster__IsFortificationEvent((EventFortificationMaster_o *)Master_object, eventId, 0LL);
}


void __fastcall EventInfoFortificationControl__OnDestroy(
        EventInfoFortificationControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1B8880C(this, method);
  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoFortificationControl__Redisplay(
        EventInfoFortificationControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  EventInfoFortificationControl__SetupFortificationItem(this, method);
  EventInfoFortificationControl__UpdateTotalRewardNum(this, v3);
}


void __fastcall EventInfoFortificationControl__Setup(
        EventInfoFortificationControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  EventInfoFortificationControl__SetupFortificationItem(this, (const MethodInfo *)entitys);
  EventInfoFortificationControl__UpdateTotalRewardNum(this, v4);
}


void __fastcall EventInfoFortificationControl__SetupFortificationItem(
        EventInfoFortificationControl_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
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
  int32_t v16; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Collections_Generic_List_object__o *v18; // x8
  System_Collections_Generic_List_object__o *v19; // x20
  int32_t v20; // w21
  bool v21; // cc
  Il2CppObject *Item; // x22
  EventFortificationEntity_o *v23; // x23
  const MethodInfo *v24; // x2
  Il2CppObject *Master_object; // x24
  float v26; // s0
  UserEventFortificationEntity_o *v27; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5BB25 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventFortificationMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventFortificationMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderBy_EventFortificationEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ThenBy_EventFortificationEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_EventFortificationEntity___);
    sub_1B885B0(&Method_EventInfoFortificationControl__SetupFortificationItem_b__17_0__);
    sub_1B885B0(&System_Func_EventFortificationEntity__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationEntity__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Item__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventInfoFortificationControl___c__SetupFortificationItem_b__17_1__);
    sub_1B885B0(&EventInfoFortificationControl___c_TypeInfo);
    byte_4A5BB25 = 1;
  }
  v27 = 0LL;
  entities = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity || !Instance )
    goto LABEL_52;
  Instance = EventFortificationMaster__TryGetEntityList(
               (EventFortificationMaster_o *)Instance,
               &entities,
               eventUiEntity->fields.eventId,
               0LL);
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
        v9 = (System_Func_object__int__o *)sub_1B887FC(System_Func_EventFortificationEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          v9,
          (Il2CppObject *)this,
          Method_EventInfoFortificationControl__SetupFortificationItem_b__17_0__,
          0LL);
        v10 = System_Linq_Enumerable__OrderBy_object__int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v8,
                (System_Func_TSource__TKey__o *)v9,
                (const MethodInfo_2EA9E2C *)Method_System_Linq_Enumerable_OrderBy_EventFortificationEntity__int___);
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
          _9__17_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_EventFortificationEntity__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__17_1,
            v13,
            Method_EventInfoFortificationControl___c__SetupFortificationItem_b__17_1__,
            0LL);
          static_fields = EventInfoFortificationControl___c_TypeInfo->static_fields;
          static_fields->__9__17_1 = (struct System_Func_EventFortificationEntity__int__o *)_9__17_1;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__17_1, (int32_t)_9__17_1, v15, v16);
        }
        v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                     v10,
                                                                     (System_Func_TSource__TKey__o *)_9__17_1,
                                                                     (const MethodInfo_2EB7B78 *)Method_System_Linq_Enumerable_ThenBy_EventFortificationEntity__int___);
        Instance = (int64_t)System_Linq_Enumerable__ToList_object_(
                              v17,
                              (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_EventFortificationEntity___);
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
            Item = System_Collections_Generic_List_object___get_Item(
                     v18,
                     v20,
                     (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Item__);
            if ( v21 )
            {
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              Instance = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL);
              if ( (Instance & 1) != 0 )
              {
                Instance = (int64_t)this->fields.fortificationViewItemList;
                if ( !Instance )
                  break;
                Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      v20,
                                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Item__);
                if ( !Instance )
                  break;
                goto LABEL_46;
              }
            }
            else
            {
              v23 = (EventFortificationEntity_o *)System_Collections_Generic_List_object___get_Item(
                                                    v19,
                                                    v20,
                                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventFortificationEntity__get_Item__);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              Instance = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL);
              if ( !v23 || (Instance & 1) != 0 )
              {
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                Instance = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL);
                if ( (Instance & 1) != 0 )
                {
                  if ( !Item )
                    break;
                  Instance = (int64_t)Item;
LABEL_46:
                  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                  if ( !Instance )
                    break;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                }
              }
              else
              {
                if ( !Item )
                  break;
                Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0LL);
                if ( !Instance )
                  break;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                EventInfoFortificationViewItem__Setup((EventInfoFortificationViewItem_o *)Item, v23, v24);
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                Instance = NetworkManager__get_UserId(0LL);
                if ( !Master_object )
                  break;
                Instance = UserEventFortificationMaster__TryGetEntity(
                             (UserEventFortificationMaster_o *)Master_object,
                             &v27,
                             Instance,
                             v23->fields.eventId,
                             v23->fields.idx,
                             0LL);
                if ( (Instance & 1) != 0 )
                {
                  if ( !v27 )
                    break;
                  Instance = (int64_t)Item[2].monitor;
                  if ( !Instance )
                    break;
                  v26 = (float)v27->fields.totalFortificationPoint / (float)v23->fields.maxFortificationPoint;
                }
                else
                {
                  Instance = (int64_t)Item[2].monitor;
                  if ( !Instance )
                    break;
                  v26 = 0.0;
                }
                UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Instance, v26, 0LL);
              }
            }
            v18 = (System_Collections_Generic_List_object__o *)this->fields.fortificationViewItemList;
            ++v20;
          }
          while ( v18 );
        }
      }
    }
LABEL_52:
    sub_1B8880C(Instance, v4);
  }
}


void __fastcall EventInfoFortificationControl__UpdateFortificationInfo(
        EventInfoFortificationControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  EventInfoFortificationControl__SetupFortificationItem(this, method);
  EventInfoFortificationControl__UpdateTotalRewardNum(this, v3);
}


void __fastcall EventInfoFortificationControl__UpdateTotalRewardNum(
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
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  __int64 v13; // x1
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5BB26 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventFortificationMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_5644/*"EVENT_POINT_COMMON_FORMAT"*/);
    byte_4A5BB26 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
  if ( Master_object && (eventUiEntity = this->fields.eventUiEntity) != 0LL )
    TotalFortificationRewardNum = UserEventFortificationMaster__GetTotalFortificationRewardNum(
                                    (UserEventFortificationMaster_o *)Master_object,
                                    eventUiEntity->fields.eventId,
                                    0LL);
  else
    TotalFortificationRewardNum = 0;
  totalRewardNumLabel = this->fields.totalRewardNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5644/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
  v14 = TotalFortificationRewardNum;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v8, v9, v10);
  v12 = System_String__Format(v7, v11, 0LL);
  if ( !totalRewardNumLabel )
    sub_1B8880C(v12, v13);
  UILabel__set_text(totalRewardNumLabel, v12, 0LL);
}


void __fastcall EventInfoFortificationControl___Initialization_b__13_0(
        EventInfoFortificationControl_o *this,
        const MethodInfo *method)
{
  EventInfoFortificationControl_o *v2; // x19
  struct EventUiEntity_o *eventUiEntity; // x8

  v2 = this;
  if ( (byte_4A5BB2A & 1) == 0 )
  {
    this = (EventInfoFortificationControl_o *)sub_1B885B0(&StringLiteral_19208/*"event_progress_bg"*/);
    byte_4A5BB2A = 1;
  }
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity
    || (EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)v2, eventUiEntity->fields.eventId, 0LL),
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)v2,
          v2->fields.bgSprite,
          (System_String_o *)StringLiteral_19208/*"event_progress_bg"*/,
          0LL),
        (this = (EventInfoFortificationControl_o *)v2->fields.bgSprite) == 0LL) )
  {
    sub_1B8880C(this, method);
  }
  (*(void (__fastcall **)(EventInfoFortificationControl_o *, _QWORD))&this->klass[1]._2.field_count)(
    this,
    *(_QWORD *)&this->klass[1]._2.interfaces_count);
}


int32_t __fastcall EventInfoFortificationControl___SetupFortificationItem_b__17_0(
        EventInfoFortificationControl_o *this,
        EventFortificationEntity_o *entity,
        const MethodInfo *method)
{
  EventInfoFortificationControl_o *v4; // x20

  v4 = this;
  if ( (byte_4A5BB2B & 1) == 0 )
  {
    this = (EventInfoFortificationControl_o *)sub_1B885B0(&Method_System_Array_IndexOf_int___);
    byte_4A5BB2B = 1;
  }
  if ( !entity )
    sub_1B8880C(this, entity);
  return System_Array__IndexOf_int_(
           v4->fields.workTypeOrder,
           entity->fields.workType,
           (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___);
}


void __fastcall EventInfoFortificationControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5BB2C & 1) == 0 )
  {
    sub_1B885B0(&EventInfoFortificationControl___c_TypeInfo);
    byte_4A5BB2C = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventInfoFortificationControl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventInfoFortificationControl___c_TypeInfo->static_fields->__9 = (struct EventInfoFortificationControl___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventInfoFortificationControl___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall EventInfoFortificationControl___c___ctor(
        EventInfoFortificationControl___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventInfoFortificationControl___c___SetupFortificationItem_b__17_1(
        EventInfoFortificationControl___c_o *this,
        EventFortificationEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B8880C(this, 0LL);
  return entity->fields.idx;
}