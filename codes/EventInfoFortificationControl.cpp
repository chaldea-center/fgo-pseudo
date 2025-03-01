void __fastcall EventInfoFortificationControl___ctor(EventInfoFortificationControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Array_o *v6; // x0
  struct System_Int32_array *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_List_object__o *v14; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_RuntimeFieldHandle_o v21; // 0:w1.4

  if ( (byte_4BFDFB4 & 1) == 0 )
  {
    sub_1C2E12C(&int___TypeInfo, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem___ctor__, v3);
    sub_1C2E12C(&System_Collections_Generic_List_EventInfoFortificationViewItem__TypeInfo, v4);
    sub_1C2E12C(
      &Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1,
      v5);
    byte_4BFDFB4 = 1;
  }
  v6 = (System_Array_o *)sub_1C2E1D4(int___TypeInfo, 3LL);
  v21.fields.value = Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1;
  v7 = (struct System_Int32_array *)v6;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63142920(v6, v21, 0LL);
  this->fields.workTypeOrder = v7;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.workTypeOrder, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_EventInfoFortificationViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_EventInfoFortificationViewItem___ctor__);
  this->fields.fortificationViewItemList = (struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *)v14;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.fortificationViewItemList,
    (int64_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
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
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x8

  if ( (byte_4BFDFB2 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Add__, *(_QWORD *)&count);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_EventInfoFortificationViewItem___, v5);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v6);
    sub_1C2E12C(&StringLiteral_23884/*"spot_info_gauge_base_color"*/, v7);
    sub_1C2E12C(&StringLiteral_23886/*"spot_info_gauge_s"*/, v8);
    sub_1C2E12C(&StringLiteral_23883/*"spot_info_gauge_base"*/, v9);
    byte_4BFDFB2 = 1;
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
      v13 = UnityEngine_Object__Instantiate_object__50692032(
              fortificationViewItemPrefab,
              fortificationViewItemParent,
              (const MethodInfo_3057FC0 *)Method_UnityEngine_Object_Instantiate_EventInfoFortificationViewItem___);
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
          (System_String_o *)StringLiteral_23883/*"spot_info_gauge_base"*/,
          0LL);
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          (UISprite_o *)v13[2].monitor,
          (System_String_o *)StringLiteral_23886/*"spot_info_gauge_s"*/,
          0LL);
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          (UISprite_o *)v13[3].klass,
          (System_String_o *)StringLiteral_23884/*"spot_info_gauge_base_color"*/,
          0LL);
        fortificationViewItemList = (System_Collections_Generic_List_object__o *)this->fields.fortificationViewItemList;
        if ( !fortificationViewItemList )
          goto LABEL_18;
        items = fortificationViewItemList->fields._items;
        v23 = Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Add__;
        ++fortificationViewItemList->fields._version;
        if ( !items )
          goto LABEL_18;
        size = fortificationViewItemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            fortificationViewItemList,
            v13,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          fortificationViewItemList->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v13;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v25 + 4), (int64_t)v13, v16, v17, v18, v19, v20, v21);
        }
      }
      --v10;
    }
    while ( v10 );
    fortificationViewItemList = (System_Collections_Generic_List_object__o *)this->fields.itemGrid;
    if ( !fortificationViewItemList )
LABEL_18:
      sub_1C2E388(fortificationViewItemList, v15);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  EventInfoFortificationControl_o *v9; // x19
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *fortificationViewItemList; // x8
  int64_t size; // x2
  int v14; // w9
  EventUiEntity_o *eventUiEntity; // x20
  System_Action_o *v16; // x21

  v9 = this;
  if ( (byte_4BFDFAF & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, entity);
    sub_1C2E12C(&Method_EventInfoFortificationControl__Initialization_b__13_0__, v10);
    this = (EventInfoFortificationControl_o *)sub_1C2E12C(
                                                &Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Clear__,
                                                v11);
    byte_4BFDFAF = 1;
  }
  fortificationViewItemList = v9->fields.fortificationViewItemList;
  if ( !fortificationViewItemList )
    sub_1C2E388(this, entity);
  size = (unsigned int)fortificationViewItemList->fields._size;
  v14 = fortificationViewItemList->fields._version + 1;
  fortificationViewItemList->fields._size = 0;
  fortificationViewItemList->fields._version = v14;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)fortificationViewItemList->fields._items, 0, size, 0LL);
  v9->fields.eventUiEntity = entity;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v9->fields.eventUiEntity, (int64_t)entity, size, v3, v4, v5, v6, v7);
  eventUiEntity = v9->fields.eventUiEntity;
  v16 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)v9, Method_EventInfoFortificationControl__Initialization_b__13_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)v9, eventUiEntity, v16, 0LL);
}


bool __fastcall EventInfoFortificationControl__IsFortificationEvent(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_4BFDFB3 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_EventFortificationMaster___, method);
    sub_1C2E12C(&DataManager_TypeInfo, v3);
    byte_4BFDFB3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_object )
    sub_1C2E388(0LL, v5);
  return EventFortificationMaster__IsFortificationEvent((EventFortificationMaster_o *)Master_object, eventId, 0LL);
}


void __fastcall EventInfoFortificationControl__OnDestroy(
        EventInfoFortificationControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C2E388(this, method);
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
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  const MethodInfo *v22; // x2
  struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *fortificationViewItemList; // x9
  System_Collections_Generic_List_EventFortificationEntity__o *v24; // x20
  System_Func_object__int__o *v25; // x21
  System_Linq_IOrderedEnumerable_TSource__o *v26; // x20
  EventInfoFortificationControl___c_c *v27; // x8
  System_Func_object__int__o *_9__17_1; // x21
  Il2CppObject *v29; // x22
  struct EventInfoFortificationControl___c_StaticFields *static_fields; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Collections_Generic_List_object__o *v38; // x8
  System_Collections_Generic_List_object__o *v39; // x20
  int32_t v40; // w21
  bool v41; // cc
  Il2CppObject *Item; // x23
  EventFortificationEntity_o *v43; // x24
  Il2CppObject *Master_object; // x25
  float v45; // s0
  UserEventFortificationEntity_o *v46; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BFDFB0 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventFortificationMaster___, method);
    sub_1C2E12C(&Method_DataManager_GetMaster_UserEventFortificationMaster___, v3);
    sub_1C2E12C(&DataManager_TypeInfo, v4);
    sub_1C2E12C(&Method_System_Linq_Enumerable_OrderBy_EventFortificationEntity__int___, v5);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ThenBy_EventFortificationEntity__int___, v6);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToList_EventFortificationEntity___, v7);
    sub_1C2E12C(&Method_EventInfoFortificationControl__SetupFortificationItem_b__17_0__, v8);
    sub_1C2E12C(&System_Func_EventFortificationEntity__int__TypeInfo, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Count__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventFortificationEntity__get_Count__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventFortificationEntity__get_Item__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Item__, v13);
    sub_1C2E12C(&NetworkManager_TypeInfo, v14);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v15);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1C2E12C(&Method_EventInfoFortificationControl___c__SetupFortificationItem_b__17_1__, v17);
    sub_1C2E12C(&EventInfoFortificationControl___c_TypeInfo, v18);
    byte_4BFDFB0 = 1;
  }
  v46 = 0LL;
  entities = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity || !Instance )
    goto LABEL_54;
  Instance = (DataManager_o *)EventFortificationMaster__TryGetEntityList(
                                (EventFortificationMaster_o *)Instance,
                                &entities,
                                eventUiEntity->fields.eventId,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entities )
    {
      fortificationViewItemList = this->fields.fortificationViewItemList;
      if ( fortificationViewItemList )
      {
        EventInfoFortificationControl__CreateFortificationViewItem(
          this,
          entities->fields._size - fortificationViewItemList->fields._size,
          v22);
        v24 = entities;
        v25 = (System_Func_object__int__o *)sub_1C2E378(System_Func_EventFortificationEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          v25,
          (Il2CppObject *)this,
          Method_EventInfoFortificationControl__SetupFortificationItem_b__17_0__,
          0LL);
        v26 = System_Linq_Enumerable__OrderBy_object__int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v24,
                (System_Func_TSource__TKey__o *)v25,
                (const MethodInfo_2FFB4B4 *)Method_System_Linq_Enumerable_OrderBy_EventFortificationEntity__int___);
        v27 = EventInfoFortificationControl___c_TypeInfo;
        if ( !EventInfoFortificationControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoFortificationControl___c_TypeInfo);
          v27 = EventInfoFortificationControl___c_TypeInfo;
        }
        _9__17_1 = (System_Func_object__int__o *)v27->static_fields->__9__17_1;
        if ( !_9__17_1 )
        {
          if ( !v27->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v27);
            v27 = EventInfoFortificationControl___c_TypeInfo;
          }
          v29 = (Il2CppObject *)v27->static_fields->__9;
          _9__17_1 = (System_Func_object__int__o *)sub_1C2E378(System_Func_EventFortificationEntity__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__17_1,
            v29,
            Method_EventInfoFortificationControl___c__SetupFortificationItem_b__17_1__,
            0LL);
          static_fields = EventInfoFortificationControl___c_TypeInfo->static_fields;
          static_fields->__9__17_1 = (struct System_Func_EventFortificationEntity__int__o *)_9__17_1;
          sub_1C2E0D0(
            (PartyOrganizationUtility_o *)&static_fields->__9__17_1,
            (int64_t)_9__17_1,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36);
        }
        v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                     v26,
                                                                     (System_Func_TSource__TKey__o *)_9__17_1,
                                                                     (const MethodInfo_300B250 *)Method_System_Linq_Enumerable_ThenBy_EventFortificationEntity__int___);
        Instance = (DataManager_o *)System_Linq_Enumerable__ToList_object_(
                                      v37,
                                      (const MethodInfo_300FBA0 *)Method_System_Linq_Enumerable_ToList_EventFortificationEntity___);
        v38 = (System_Collections_Generic_List_object__o *)this->fields.fortificationViewItemList;
        if ( v38 )
        {
          v39 = (System_Collections_Generic_List_object__o *)Instance;
          v40 = 0;
          do
          {
            if ( v40 >= v38->fields._size )
              return;
            if ( !v39 )
              break;
            v41 = v39->fields._size <= v40;
            Item = System_Collections_Generic_List_object___get_Item(
                     v38,
                     v40,
                     (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Item__);
            if ( v41 )
            {
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                Instance = (DataManager_o *)this->fields.fortificationViewItemList;
                if ( !Instance )
                  break;
                Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)Instance,
                                              v40,
                                              (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Item__);
                if ( !Instance )
                  break;
                goto LABEL_49;
              }
            }
            else
            {
              v43 = (EventFortificationEntity_o *)System_Collections_Generic_List_object___get_Item(
                                                    v39,
                                                    v40,
                                                    (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_EventFortificationEntity__get_Item__);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              Instance = (DataManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL);
              if ( !v43 || ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
                  if ( !Item )
                    break;
                  Instance = (DataManager_o *)Item;
LABEL_49:
                  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)Instance,
                                                0LL);
                  if ( !Instance )
                    break;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                }
              }
              else
              {
                if ( !Item )
                  break;
                Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0LL);
                if ( !Instance )
                  break;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                EventInfoFortificationViewItem__Setup((EventInfoFortificationViewItem_o *)Item, v43, 0LL);
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                if ( !byte_4BF81D5 )
                {
                  sub_1C2E12C(&NetworkManager_TypeInfo, v20);
                  byte_4BF81D5 = 1;
                }
                Instance = (DataManager_o *)NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  Instance = (DataManager_o *)NetworkManager_TypeInfo;
                }
                if ( !Master_object )
                  break;
                Instance = (DataManager_o *)UserEventFortificationMaster__TryGetEntity(
                                              (UserEventFortificationMaster_o *)Master_object,
                                              &v46,
                                              *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                              v43->fields.eventId,
                                              v43->fields.idx,
                                              0LL);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
                  if ( !v46 )
                    break;
                  v45 = (float)v46->fields.totalFortificationPoint / (float)v43->fields.maxFortificationPoint;
                }
                else
                {
                  v45 = 0.0;
                }
                EventInfoFortificationViewItem__UpdateProgressBar((EventInfoFortificationViewItem_o *)Item, v45, 0LL);
              }
            }
            v38 = (System_Collections_Generic_List_object__o *)this->fields.fortificationViewItemList;
            ++v40;
          }
          while ( v38 );
        }
      }
    }
LABEL_54:
    sub_1C2E388(Instance, v20);
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
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  __int64 v17; // x1
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BFDFB1 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_UserEventFortificationMaster___, method);
    sub_1C2E12C(&DataManager_TypeInfo, v3);
    sub_1C2E12C(&int_TypeInfo, v4);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v5);
    sub_1C2E12C(&StringLiteral_5762/*"EVENT_POINT_COMMON_FORMAT"*/, v6);
    byte_4BFDFB1 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
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
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5762/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
  v18 = TotalFortificationRewardNum;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v12, v13, v14);
  v16 = System_String__Format(v11, v15, 0LL);
  if ( !totalRewardNumLabel )
    sub_1C2E388(v16, v17);
  UILabel__set_text(totalRewardNumLabel, v16, 0LL);
}


void __fastcall EventInfoFortificationControl___Initialization_b__13_0(
        EventInfoFortificationControl_o *this,
        const MethodInfo *method)
{
  EventInfoFortificationControl_o *v2; // x19
  struct EventUiEntity_o *eventUiEntity; // x8

  v2 = this;
  if ( (byte_4BFDFB5 & 1) == 0 )
  {
    this = (EventInfoFortificationControl_o *)sub_1C2E12C(&StringLiteral_19552/*"event_progress_bg"*/, method);
    byte_4BFDFB5 = 1;
  }
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity
    || (EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)v2, eventUiEntity->fields.eventId, 0LL),
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)v2,
          v2->fields.bgSprite,
          (System_String_o *)StringLiteral_19552/*"event_progress_bg"*/,
          0LL),
        (this = (EventInfoFortificationControl_o *)v2->fields.bgSprite) == 0LL) )
  {
    sub_1C2E388(this, method);
  }
  ((void (__fastcall *)(EventInfoFortificationControl_o *, _QWORD))this->klass[1]._2.genericContainerHandle)(
    this,
    *(_QWORD *)&this->klass[1]._2.instance_size);
}


int32_t __fastcall EventInfoFortificationControl___SetupFortificationItem_b__17_0(
        EventInfoFortificationControl_o *this,
        EventFortificationEntity_o *entity,
        const MethodInfo *method)
{
  EventInfoFortificationControl_o *v4; // x20

  v4 = this;
  if ( (byte_4BFDFB6 & 1) == 0 )
  {
    this = (EventInfoFortificationControl_o *)sub_1C2E12C(&Method_System_Array_IndexOf_int___, entity);
    byte_4BFDFB6 = 1;
  }
  if ( !entity )
    sub_1C2E388(this, entity);
  return System_Array__IndexOf_int_(
           v4->fields.workTypeOrder,
           entity->fields.workType,
           (const MethodInfo_30CF08C *)Method_System_Array_IndexOf_int___);
}


void __fastcall EventInfoFortificationControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BFED7B & 1) == 0 )
  {
    sub_1C2E12C(&EventInfoFortificationControl___c_TypeInfo, v1);
    byte_4BFED7B = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(EventInfoFortificationControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventInfoFortificationControl___c_TypeInfo->static_fields->__9 = (struct EventInfoFortificationControl___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)EventInfoFortificationControl___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C2E388(this, 0LL);
  return entity->fields.idx;
}