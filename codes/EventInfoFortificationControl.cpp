void __fastcall EventInfoFortificationControl___ctor(EventInfoFortificationControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Array_o *v10; // x0
  struct System_Int32_array *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Collections_Generic_List_object__o *v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_RuntimeFieldHandle_o v28; // 0:w1.4

  if ( (byte_4B16A5C & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem___ctor__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_List_EventInfoFortificationViewItem__TypeInfo, v6, v7);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1,
      v8,
      v9);
    byte_4B16A5C = 1;
  }
  v10 = (System_Array_o *)sub_1BCA888(int___TypeInfo, 3LL);
  v28.fields.value = Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1;
  v11 = (struct System_Int32_array *)v10;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v10, v28, 0LL);
  this->fields.workTypeOrder = v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.workTypeOrder, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventInfoFortificationViewItem__TypeInfo,
                                                       v18,
                                                       v19,
                                                       v20);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventInfoFortificationViewItem___ctor__);
  this->fields.fortificationViewItemList = (struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *)v21;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.fortificationViewItemList,
    (int64_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t v15; // w29
  UnityEngine_Transform_o *fortificationViewItemParent; // x21
  Il2CppObject *fortificationViewItemPrefab; // x22
  Il2CppObject *v18; // x21
  System_Collections_Generic_List_object__o *fortificationViewItemList; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8

  if ( (byte_4B16A5A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Add__,
      *(_QWORD *)&count,
      method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_EventInfoFortificationViewItem___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_23682/*"spot_info_gauge_base_color"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_23684/*"spot_info_gauge_s"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_23681/*"spot_info_gauge_base"*/, v13, v14);
    byte_4B16A5A = 1;
  }
  if ( count >= 1 )
  {
    v15 = count;
    do
    {
      fortificationViewItemParent = this->fields.fortificationViewItemParent;
      fortificationViewItemPrefab = (Il2CppObject *)this->fields.fortificationViewItemPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&count);
      v18 = UnityEngine_Object__Instantiate_object__49903816(
              fortificationViewItemPrefab,
              fortificationViewItemParent,
              (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_EventInfoFortificationViewItem___);
      fortificationViewItemList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                                 (UnityEngine_Object_o *)v18,
                                                                                 0LL,
                                                                                 0LL);
      if ( ((unsigned __int8)fortificationViewItemList & 1) != 0 )
      {
        if ( !v18 )
          goto LABEL_18;
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          (UISprite_o *)v18[2].klass,
          (System_String_o *)StringLiteral_23681/*"spot_info_gauge_base"*/,
          0LL);
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          (UISprite_o *)v18[2].monitor,
          (System_String_o *)StringLiteral_23684/*"spot_info_gauge_s"*/,
          0LL);
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          (UISprite_o *)v18[3].klass,
          (System_String_o *)StringLiteral_23682/*"spot_info_gauge_base_color"*/,
          0LL);
        fortificationViewItemList = (System_Collections_Generic_List_object__o *)this->fields.fortificationViewItemList;
        if ( !fortificationViewItemList )
          goto LABEL_18;
        items = fortificationViewItemList->fields._items;
        v27 = Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Add__;
        ++fortificationViewItemList->fields._version;
        if ( !items )
          goto LABEL_18;
        size = fortificationViewItemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            fortificationViewItemList,
            v18,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          fortificationViewItemList->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v18;
          sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 4), (int64_t)v18, v20, v21, v22, v23, v24, v25);
        }
      }
      --v15;
    }
    while ( v15 );
    fortificationViewItemList = (System_Collections_Generic_List_object__o *)this->fields.itemGrid;
    if ( !fortificationViewItemList )
LABEL_18:
      sub_1BCAA3C(fortificationViewItemList, *(_QWORD *)&count);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *fortificationViewItemList; // x8
  int64_t size; // x2
  int v16; // w9
  EventUiEntity_o *eventUiEntity; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Action_o *v21; // x21

  v9 = this;
  if ( (byte_4B16A57 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, entity, method);
    sub_1BCA7E0(&Method_EventInfoFortificationControl__Initialization_b__13_0__, v10, v11);
    this = (EventInfoFortificationControl_o *)sub_1BCA7E0(
                                                &Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Clear__,
                                                v12,
                                                v13);
    byte_4B16A57 = 1;
  }
  fortificationViewItemList = v9->fields.fortificationViewItemList;
  if ( !fortificationViewItemList )
    sub_1BCAA3C(this, entity);
  size = (unsigned int)fortificationViewItemList->fields._size;
  v16 = fortificationViewItemList->fields._version + 1;
  fortificationViewItemList->fields._size = 0;
  fortificationViewItemList->fields._version = v16;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)fortificationViewItemList->fields._items, 0, size, 0LL);
  v9->fields.eventUiEntity = entity;
  sub_1BCA784((PartyOrganizationUtility_o *)&v9->fields.eventUiEntity, (int64_t)entity, size, v3, v4, v5, v6, v7);
  eventUiEntity = v9->fields.eventUiEntity;
  v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v18, v19, v20);
  System_Action___ctor(v21, (Il2CppObject *)v9, Method_EventInfoFortificationControl__Initialization_b__13_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)v9, eventUiEntity, v21, 0LL);
}


bool __fastcall EventInfoFortificationControl__IsFortificationEvent(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1

  if ( (byte_4B16A5B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventFortificationMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B16A5B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v7);
  return EventFortificationMaster__IsFortificationEvent((EventFortificationMaster_o *)Master_object, eventId, 0LL);
}


void __fastcall EventInfoFortificationControl__OnDestroy(
        EventInfoFortificationControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  int64_t Instance; // x0
  __int64 v37; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  const MethodInfo *v39; // x2
  struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *fortificationViewItemList; // x9
  System_Collections_Generic_List_EventFortificationEntity__o *v41; // x20
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Func_object__int__o *v45; // x21
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v49; // x20
  EventInfoFortificationControl___c_c *v50; // x8
  System_Func_object__int__o *_9__17_1; // x21
  Il2CppObject *v52; // x22
  struct EventInfoFortificationControl___c_StaticFields *static_fields; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0
  System_Collections_Generic_List_object__o *v61; // x8
  System_Collections_Generic_List_object__o *v62; // x20
  int32_t v63; // w21
  bool v64; // cc
  __int64 v65; // x1
  Il2CppObject *Item; // x22
  __int64 v67; // x1
  EventFortificationEntity_o *v68; // x23
  __int64 v69; // x1
  __int64 v70; // x1
  Il2CppObject *Master_object; // x24
  float v72; // s0
  UserEventFortificationEntity_o *v73; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B16A58 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventFortificationMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventFortificationMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_EventFortificationEntity__int___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ThenBy_EventFortificationEntity__int___, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_EventFortificationEntity___, v12, v13);
    sub_1BCA7E0(&Method_EventInfoFortificationControl__SetupFortificationItem_b__17_0__, v14, v15);
    sub_1BCA7E0(&System_Func_EventFortificationEntity__int__TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Count__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationEntity__get_Count__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationEntity__get_Item__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Item__, v24, v25);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v26, v27);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31);
    sub_1BCA7E0(&Method_EventInfoFortificationControl___c__SetupFortificationItem_b__17_1__, v32, v33);
    sub_1BCA7E0(&EventInfoFortificationControl___c_TypeInfo, v34, v35);
    byte_4B16A58 = 1;
  }
  v73 = 0LL;
  entities = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity || !Instance )
    goto LABEL_50;
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
          v39);
        v41 = entities;
        v45 = (System_Func_object__int__o *)sub_1BCAA2C(
                                              System_Func_EventFortificationEntity__int__TypeInfo,
                                              v42,
                                              v43,
                                              v44);
        System_Func_object__int____ctor(
          v45,
          (Il2CppObject *)this,
          Method_EventInfoFortificationControl__SetupFortificationItem_b__17_0__,
          0LL);
        v49 = System_Linq_Enumerable__OrderBy_object__int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v41,
                (System_Func_TSource__TKey__o *)v45,
                (const MethodInfo_2F3B394 *)Method_System_Linq_Enumerable_OrderBy_EventFortificationEntity__int___);
        v50 = EventInfoFortificationControl___c_TypeInfo;
        if ( !EventInfoFortificationControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoFortificationControl___c_TypeInfo, v46);
          v50 = EventInfoFortificationControl___c_TypeInfo;
        }
        _9__17_1 = (System_Func_object__int__o *)v50->static_fields->__9__17_1;
        if ( !_9__17_1 )
        {
          if ( !v50->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v50, v46);
            v50 = EventInfoFortificationControl___c_TypeInfo;
          }
          v52 = (Il2CppObject *)v50->static_fields->__9;
          _9__17_1 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                     System_Func_EventFortificationEntity__int__TypeInfo,
                                                     v46,
                                                     v47,
                                                     v48);
          System_Func_object__int____ctor(
            _9__17_1,
            v52,
            Method_EventInfoFortificationControl___c__SetupFortificationItem_b__17_1__,
            0LL);
          static_fields = EventInfoFortificationControl___c_TypeInfo->static_fields;
          static_fields->__9__17_1 = (struct System_Func_EventFortificationEntity__int__o *)_9__17_1;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&static_fields->__9__17_1,
            (int64_t)_9__17_1,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59);
        }
        v60 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                     v49,
                                                                     (System_Func_TSource__TKey__o *)_9__17_1,
                                                                     (const MethodInfo_2F4AE9C *)Method_System_Linq_Enumerable_ThenBy_EventFortificationEntity__int___);
        Instance = (int64_t)System_Linq_Enumerable__ToList_object_(
                              v60,
                              (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_EventFortificationEntity___);
        v61 = (System_Collections_Generic_List_object__o *)this->fields.fortificationViewItemList;
        if ( v61 )
        {
          v62 = (System_Collections_Generic_List_object__o *)Instance;
          v63 = 0;
          do
          {
            if ( v63 >= v61->fields._size )
              return;
            if ( !v62 )
              break;
            v64 = v62->fields._size <= v63;
            Item = System_Collections_Generic_List_object___get_Item(
                     v61,
                     v63,
                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Item__);
            if ( v64 )
            {
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v65);
              Instance = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL);
              if ( (Instance & 1) != 0 )
              {
                Instance = (int64_t)this->fields.fortificationViewItemList;
                if ( !Instance )
                  break;
                Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      v63,
                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Item__);
                if ( !Instance )
                  break;
                goto LABEL_45;
              }
            }
            else
            {
              v68 = (EventFortificationEntity_o *)System_Collections_Generic_List_object___get_Item(
                                                    v62,
                                                    v63,
                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventFortificationEntity__get_Item__);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v67);
              Instance = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL);
              if ( !v68 || (Instance & 1) != 0 )
              {
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
                Instance = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL);
                if ( (Instance & 1) != 0 )
                {
                  if ( !Item )
                    break;
                  Instance = (int64_t)Item;
LABEL_45:
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
                EventInfoFortificationViewItem__Setup((EventInfoFortificationViewItem_o *)Item, v68, 0LL);
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v69);
                Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v70);
                Instance = NetworkManager__get_UserId(0LL);
                if ( !Master_object )
                  break;
                Instance = UserEventFortificationMaster__TryGetEntity(
                             (UserEventFortificationMaster_o *)Master_object,
                             &v73,
                             Instance,
                             v68->fields.eventId,
                             v68->fields.idx,
                             0LL);
                if ( (Instance & 1) != 0 )
                {
                  if ( !v73 )
                    break;
                  v72 = (float)v73->fields.totalFortificationPoint / (float)v68->fields.maxFortificationPoint;
                }
                else
                {
                  v72 = 0.0;
                }
                EventInfoFortificationViewItem__UpdateProgressBar((EventInfoFortificationViewItem_o *)Item, v72, 0LL);
              }
            }
            v61 = (System_Collections_Generic_List_object__o *)this->fields.fortificationViewItemList;
            ++v63;
          }
          while ( v61 );
        }
      }
    }
LABEL_50:
    sub_1BCAA3C(Instance, v37);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t TotalFortificationRewardNum; // w20
  UILabel_o *totalRewardNumLabel; // x19
  System_String_o *v17; // x21
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  __int64 v20; // x1
  int32_t v21; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B16A59 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventFortificationMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&int_TypeInfo, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, v10, v11);
    byte_4B16A59 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
  if ( Master_object && (eventUiEntity = this->fields.eventUiEntity) != 0LL )
    TotalFortificationRewardNum = UserEventFortificationMaster__GetTotalFortificationRewardNum(
                                    (UserEventFortificationMaster_o *)Master_object,
                                    eventUiEntity->fields.eventId,
                                    0LL);
  else
    TotalFortificationRewardNum = 0;
  totalRewardNumLabel = this->fields.totalRewardNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
  v21 = TotalFortificationRewardNum;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  v19 = System_String__Format(v17, v18, 0LL);
  if ( !totalRewardNumLabel )
    sub_1BCAA3C(v19, v20);
  UILabel__set_text(totalRewardNumLabel, v19, 0LL);
}


void __fastcall EventInfoFortificationControl___Initialization_b__13_0(
        EventInfoFortificationControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventInfoFortificationControl_o *v3; // x19
  struct EventUiEntity_o *eventUiEntity; // x8

  v3 = this;
  if ( (byte_4B16A5D & 1) == 0 )
  {
    this = (EventInfoFortificationControl_o *)sub_1BCA7E0(&StringLiteral_19409/*"event_progress_bg"*/, method, v2);
    byte_4B16A5D = 1;
  }
  eventUiEntity = v3->fields.eventUiEntity;
  if ( !eventUiEntity
    || (EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)v3, eventUiEntity->fields.eventId, 0LL),
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)v3,
          v3->fields.bgSprite,
          (System_String_o *)StringLiteral_19409/*"event_progress_bg"*/,
          0LL),
        (this = (EventInfoFortificationControl_o *)v3->fields.bgSprite) == 0LL) )
  {
    sub_1BCAA3C(this, method);
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
  if ( (byte_4B16A5E & 1) == 0 )
  {
    this = (EventInfoFortificationControl_o *)sub_1BCA7E0(&Method_System_Array_IndexOf_int___, entity, method);
    byte_4B16A5E = 1;
  }
  if ( !entity )
    sub_1BCAA3C(this, entity);
  return System_Array__IndexOf_int_(
           v4->fields.workTypeOrder,
           entity->fields.workType,
           (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___);
}


void __fastcall EventInfoFortificationControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B17769 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoFortificationControl___c_TypeInfo, v1, v2);
    byte_4B17769 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventInfoFortificationControl___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventInfoFortificationControl___c_TypeInfo->static_fields->__9 = (struct EventInfoFortificationControl___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventInfoFortificationControl___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return entity->fields.idx;
}