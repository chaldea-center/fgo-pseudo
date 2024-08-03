void __fastcall EventInfoFortificationControl___ctor(EventInfoFortificationControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Array_o *v6; // x0
  struct System_Int32_array *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_RuntimeFieldHandle_o v15; // 0:w1.4

  if ( (byte_49FCFBE & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem___ctor__, v3);
    sub_1B640C8(&System_Collections_Generic_List_EventInfoFortificationViewItem__TypeInfo, v4);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1,
      v5);
    byte_49FCFBE = 1;
  }
  v6 = (System_Array_o *)sub_1B64170(int___TypeInfo, 3LL);
  v15.fields.value = Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1;
  v7 = (struct System_Int32_array *)v6;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v6, v15, 0LL);
  this->fields.workTypeOrder = v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.workTypeOrder, (int32_t)v7, v8, v9);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventInfoFortificationViewItem__TypeInfo,
                                                       v10,
                                                       v11);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventInfoFortificationViewItem___ctor__);
  this->fields.fortificationViewItemList = (struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *)v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.fortificationViewItemList, (int32_t)v12, v13, v14);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoFortificationControl__CheckAssertion(
        EventInfoFortificationControl_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoFortificationControl__CreateFortificationViewItem(
        EventInfoFortificationControl_o *this,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t v10; // w29
  UnityEngine_Transform_o *fortificationViewItemParent; // x21
  Il2CppObject *fortificationViewItemPrefab; // x22
  Il2CppObject *v13; // x21
  System_Collections_Generic_List_object__o *fortificationViewItemList; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x8

  if ( (byte_49FCFBC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Add__, *(_QWORD *)&count);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_EventInfoFortificationViewItem___, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_23336/*"spot_info_gauge_base_color"*/, v7);
    sub_1B640C8(&StringLiteral_23338/*"spot_info_gauge_s"*/, v8);
    sub_1B640C8(&StringLiteral_23335/*"spot_info_gauge_base"*/, v9);
    byte_49FCFBC = 1;
  }
  if ( count >= 1 )
  {
    v10 = count;
    do
    {
      fortificationViewItemParent = this->fields.fortificationViewItemParent;
      fortificationViewItemPrefab = (Il2CppObject *)this->fields.fortificationViewItemPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v13 = UnityEngine_Object__Instantiate_object__49003980(
              fortificationViewItemPrefab,
              fortificationViewItemParent,
              (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_EventInfoFortificationViewItem___);
      fortificationViewItemList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                                 (UnityEngine_Object_o *)v13,
                                                                                 0LL,
                                                                                 0LL);
      if ( ((unsigned __int8)fortificationViewItemList & 1) != 0 )
      {
        if ( !v13 )
          goto LABEL_18;
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          (UISprite_o *)v13[2].klass,
          (System_String_o *)StringLiteral_23335/*"spot_info_gauge_base"*/,
          0LL);
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          (UISprite_o *)v13[2].monitor,
          (System_String_o *)StringLiteral_23338/*"spot_info_gauge_s"*/,
          0LL);
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          (UISprite_o *)v13[3].klass,
          (System_String_o *)StringLiteral_23336/*"spot_info_gauge_base_color"*/,
          0LL);
        fortificationViewItemList = (System_Collections_Generic_List_object__o *)this->fields.fortificationViewItemList;
        if ( !fortificationViewItemList )
          goto LABEL_18;
        items = fortificationViewItemList->fields._items;
        v18 = Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Add__;
        ++fortificationViewItemList->fields._version;
        if ( !items )
          goto LABEL_18;
        size = fortificationViewItemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            fortificationViewItemList,
            v13,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          fortificationViewItemList->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v13;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v13, v15, v16);
        }
      }
      --v10;
    }
    while ( v10 );
    fortificationViewItemList = (System_Collections_Generic_List_object__o *)this->fields.itemGrid;
    if ( !fortificationViewItemList )
LABEL_18:
      sub_1B64324(fortificationViewItemList);
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
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *fortificationViewItemList; // x8
  int32_t size; // w2
  int v10; // w9
  EventUiEntity_o *eventUiEntity; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_o *v14; // x21

  v5 = this;
  if ( (byte_49FCFB9 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, entity);
    sub_1B640C8(&Method_EventInfoFortificationControl__Initialization_b__13_0__, v6);
    this = (EventInfoFortificationControl_o *)sub_1B640C8(
                                                &Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Clear__,
                                                v7);
    byte_49FCFB9 = 1;
  }
  fortificationViewItemList = v5->fields.fortificationViewItemList;
  if ( !fortificationViewItemList )
    sub_1B64324(this);
  size = fortificationViewItemList->fields._size;
  v10 = fortificationViewItemList->fields._version + 1;
  fortificationViewItemList->fields._size = 0;
  fortificationViewItemList->fields._version = v10;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)fortificationViewItemList->fields._items, 0, size, 0LL);
  v5->fields.eventUiEntity = entity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->fields.eventUiEntity, (int32_t)entity, size, v3);
  eventUiEntity = v5->fields.eventUiEntity;
  v14 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)v5, Method_EventInfoFortificationControl__Initialization_b__13_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)v5, eventUiEntity, v14, 0LL);
}


bool __fastcall EventInfoFortificationControl__IsFortificationEvent(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0

  if ( (byte_49FCFBD & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventFortificationMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    byte_49FCFBD = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_object )
    sub_1B64324(0LL);
  return EventFortificationMaster__IsFortificationEvent((EventFortificationMaster_o *)Master_object, eventId, 0LL);
}


void __fastcall EventInfoFortificationControl__OnDestroy(
        EventInfoFortificationControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1B64324(this);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  int64_t Instance; // x0
  struct EventUiEntity_o *eventUiEntity; // x8
  const MethodInfo *v21; // x2
  struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *fortificationViewItemList; // x9
  System_Collections_Generic_List_EventFortificationEntity__o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  System_Func_object__int__o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  System_Linq_IOrderedEnumerable_TSource__o *v29; // x20
  EventInfoFortificationControl___c_c *v30; // x8
  System_Func_object__int__o *_9__17_1; // x21
  Il2CppObject *v32; // x22
  struct EventInfoFortificationControl___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Collections_Generic_List_object__o *v37; // x8
  System_Collections_Generic_List_object__o *v38; // x20
  int32_t v39; // w21
  bool v40; // cc
  Il2CppObject *Item; // x22
  EventFortificationEntity_o *v42; // x23
  const MethodInfo *v43; // x2
  Il2CppObject *Master_object; // x24
  float v45; // s0
  UserEventFortificationEntity_o *v46; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FCFBA & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventFortificationMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMaster_UserEventFortificationMaster___, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderBy_EventFortificationEntity__int___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_ThenBy_EventFortificationEntity__int___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_EventFortificationEntity___, v7);
    sub_1B640C8(&Method_EventInfoFortificationControl__SetupFortificationItem_b__17_0__, v8);
    sub_1B640C8(&System_Func_EventFortificationEntity__int__TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationEntity__get_Count__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationEntity__get_Item__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Item__, v13);
    sub_1B640C8(&NetworkManager_TypeInfo, v14);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B640C8(&Method_EventInfoFortificationControl___c__SetupFortificationItem_b__17_1__, v17);
    sub_1B640C8(&EventInfoFortificationControl___c_TypeInfo, v18);
    byte_49FCFBA = 1;
  }
  v46 = 0LL;
  entities = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventFortificationMaster___);
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
          v21);
        v23 = entities;
        v26 = (System_Func_object__int__o *)sub_1B64314(System_Func_EventFortificationEntity__int__TypeInfo, v24, v25);
        System_Func_object__int____ctor(
          v26,
          (Il2CppObject *)this,
          Method_EventInfoFortificationControl__SetupFortificationItem_b__17_0__,
          0LL);
        v29 = System_Linq_Enumerable__OrderBy_object__int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v23,
                (System_Func_TSource__TKey__o *)v26,
                (const MethodInfo_2E630C0 *)Method_System_Linq_Enumerable_OrderBy_EventFortificationEntity__int___);
        v30 = EventInfoFortificationControl___c_TypeInfo;
        if ( !EventInfoFortificationControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoFortificationControl___c_TypeInfo);
          v30 = EventInfoFortificationControl___c_TypeInfo;
        }
        _9__17_1 = (System_Func_object__int__o *)v30->static_fields->__9__17_1;
        if ( !_9__17_1 )
        {
          if ( !v30->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v30);
            v30 = EventInfoFortificationControl___c_TypeInfo;
          }
          v32 = (Il2CppObject *)v30->static_fields->__9;
          _9__17_1 = (System_Func_object__int__o *)sub_1B64314(
                                                     System_Func_EventFortificationEntity__int__TypeInfo,
                                                     v27,
                                                     v28);
          System_Func_object__int____ctor(
            _9__17_1,
            v32,
            Method_EventInfoFortificationControl___c__SetupFortificationItem_b__17_1__,
            0LL);
          static_fields = EventInfoFortificationControl___c_TypeInfo->static_fields;
          static_fields->__9__17_1 = (struct System_Func_EventFortificationEntity__int__o *)_9__17_1;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__17_1, (int32_t)_9__17_1, v34, v35);
        }
        v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                     v29,
                                                                     (System_Func_TSource__TKey__o *)_9__17_1,
                                                                     (const MethodInfo_2E709F0 *)Method_System_Linq_Enumerable_ThenBy_EventFortificationEntity__int___);
        Instance = (int64_t)System_Linq_Enumerable__ToList_object_(
                              v36,
                              (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_EventFortificationEntity___);
        v37 = (System_Collections_Generic_List_object__o *)this->fields.fortificationViewItemList;
        if ( v37 )
        {
          v38 = (System_Collections_Generic_List_object__o *)Instance;
          v39 = 0;
          do
          {
            if ( v39 >= v37->fields._size )
              return;
            if ( !v38 )
              break;
            v40 = v38->fields._size <= v39;
            Item = System_Collections_Generic_List_object___get_Item(
                     v37,
                     v39,
                     (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Item__);
            if ( v40 )
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
                                      v39,
                                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Item__);
                if ( !Instance )
                  break;
                goto LABEL_46;
              }
            }
            else
            {
              v42 = (EventFortificationEntity_o *)System_Collections_Generic_List_object___get_Item(
                                                    v38,
                                                    v39,
                                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventFortificationEntity__get_Item__);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              Instance = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL);
              if ( !v42 || (Instance & 1) != 0 )
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
                EventInfoFortificationViewItem__Setup((EventInfoFortificationViewItem_o *)Item, v42, v43);
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                Instance = NetworkManager__get_UserId(0LL);
                if ( !Master_object )
                  break;
                Instance = UserEventFortificationMaster__TryGetEntity(
                             (UserEventFortificationMaster_o *)Master_object,
                             &v46,
                             Instance,
                             v42->fields.eventId,
                             v42->fields.idx,
                             0LL);
                if ( (Instance & 1) != 0 )
                {
                  if ( !v46 )
                    break;
                  Instance = (int64_t)Item[2].monitor;
                  if ( !Instance )
                    break;
                  v45 = (float)v46->fields.totalFortificationPoint / (float)v42->fields.maxFortificationPoint;
                }
                else
                {
                  Instance = (int64_t)Item[2].monitor;
                  if ( !Instance )
                    break;
                  v45 = 0.0;
                }
                UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Instance, v45, 0LL);
              }
            }
            v37 = (System_Collections_Generic_List_object__o *)this->fields.fortificationViewItemList;
            ++v39;
          }
          while ( v37 );
        }
      }
    }
LABEL_52:
    sub_1B64324(Instance);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Master_object; // x0
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t TotalFortificationRewardNum; // w20
  UILabel_o *totalRewardNumLabel; // x19
  System_String_o *v11; // x21
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FCFBB & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserEventFortificationMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&int_TypeInfo, v4);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_5618/*"EVENT_POINT_COMMON_FORMAT"*/, v6);
    byte_49FCFBB = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
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
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5618/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
  v14 = TotalFortificationRewardNum;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v13 = System_String__Format(v11, v12, 0LL);
  if ( !totalRewardNumLabel )
    sub_1B64324(v13);
  UILabel__set_text(totalRewardNumLabel, v13, 0LL);
}


void __fastcall EventInfoFortificationControl___Initialization_b__13_0(
        EventInfoFortificationControl_o *this,
        const MethodInfo *method)
{
  EventInfoFortificationControl_o *v2; // x19
  struct EventUiEntity_o *eventUiEntity; // x8

  v2 = this;
  if ( (byte_49FCFBF & 1) == 0 )
  {
    this = (EventInfoFortificationControl_o *)sub_1B640C8(&StringLiteral_19131/*"event_progress_bg"*/, method);
    byte_49FCFBF = 1;
  }
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity
    || (EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)v2, eventUiEntity->fields.eventId, 0LL),
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)v2,
          v2->fields.bgSprite,
          (System_String_o *)StringLiteral_19131/*"event_progress_bg"*/,
          0LL),
        (this = (EventInfoFortificationControl_o *)v2->fields.bgSprite) == 0LL) )
  {
    sub_1B64324(this);
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
  if ( (byte_49FCFC0 & 1) == 0 )
  {
    this = (EventInfoFortificationControl_o *)sub_1B640C8(&Method_System_Array_IndexOf_int___, entity);
    byte_49FCFC0 = 1;
  }
  if ( !entity )
    sub_1B64324(this);
  return System_Array__IndexOf_int_(
           v4->fields.workTypeOrder,
           entity->fields.workType,
           (const MethodInfo_2F31E68 *)Method_System_Array_IndexOf_int___);
}


void __fastcall EventInfoFortificationControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FCFC1 & 1) == 0 )
  {
    sub_1B640C8(&EventInfoFortificationControl___c_TypeInfo, v1);
    byte_49FCFC1 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventInfoFortificationControl___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventInfoFortificationControl___c_TypeInfo->static_fields->__9 = (struct EventInfoFortificationControl___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventInfoFortificationControl___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return entity->fields.idx;
}