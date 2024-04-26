void __fastcall EventInfoFortificationControl___ctor(EventInfoFortificationControl_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_RuntimeFieldHandle_o v17; // 0:w1.4

  if ( (byte_4352A0D & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventInfoFortificationViewItem__TypeInfo);
    sub_B70694(&Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1);
    byte_4352A0D = 1;
  }
  v3 = (System_Array_o *)sub_B706AC(int___TypeInfo, 3LL);
  v17.fields.value = Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264(v3, v17, 0LL);
  this->fields.workTypeOrder = (struct System_Int32_array *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.workTypeOrder,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventInfoFortificationViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventInfoFortificationViewItem___ctor__);
  this->fields.fortificationViewItemList = (struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *)v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.fortificationViewItemList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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
  int32_t v5; // w23
  UnityEngine_Transform_o *fortificationViewItemParent; // x21
  struct EventInfoFortificationViewItem_o *fortificationViewItemPrefab; // x22
  UILabel_o *v8; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *fortificationViewItemList; // x0
  __int64 v10; // x1

  if ( (byte_4352A0B & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Add__);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_EventInfoFortificationViewItem___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_22596/*"spot_info_gauge_base_color"*/);
    sub_B70694(&StringLiteral_22598/*"spot_info_gauge_s"*/);
    sub_B70694(&StringLiteral_22595/*"spot_info_gauge_base"*/);
    byte_4352A0B = 1;
  }
  if ( count >= 1 )
  {
    v5 = 0;
    do
    {
      fortificationViewItemParent = this->fields.fortificationViewItemParent;
      fortificationViewItemPrefab = this->fields.fortificationViewItemPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v8 = UnityEngine_Object__Instantiate_UILabel_(
             (UILabel_o *)fortificationViewItemPrefab,
             fortificationViewItemParent,
             (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_EventInfoFortificationViewItem___);
      fortificationViewItemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL);
      if ( ((unsigned __int8)fortificationViewItemList & 1) != 0 )
      {
        if ( !v8 )
          goto LABEL_16;
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          (UISprite_o *)v8->fields.leftAnchor,
          (System_String_o *)StringLiteral_22595/*"spot_info_gauge_base"*/,
          0LL);
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          (UISprite_o *)v8->fields.rightAnchor,
          (System_String_o *)StringLiteral_22598/*"spot_info_gauge_s"*/,
          0LL);
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          (UISprite_o *)v8->fields.bottomAnchor,
          (System_String_o *)StringLiteral_22596/*"spot_info_gauge_base_color"*/,
          0LL);
        fortificationViewItemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.fortificationViewItemList;
        if ( !fortificationViewItemList )
          goto LABEL_16;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          fortificationViewItemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v8,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Add__);
      }
      ++v5;
    }
    while ( v5 < count );
    fortificationViewItemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemGrid;
    if ( !fortificationViewItemList )
LABEL_16:
      sub_B7076C(fortificationViewItemList, v10);
    ((void (__fastcall *)(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *, Il2CppMethodPointer))fortificationViewItemList->klass->vtable._8_unknown.method)(
      fortificationViewItemList,
      fortificationViewItemList->klass->vtable._9_unknown.methodPtr);
  }
}


void __fastcall EventInfoFortificationControl__Initialization(
        EventInfoFortificationControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *fortificationViewItemList; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  EventUiEntity_o *eventUiEntity; // x20
  System_Action_o *v13; // x21

  if ( (byte_4352A08 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_EventInfoFortificationControl__Initialization_b__13_0__);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Clear__);
    byte_4352A08 = 1;
  }
  fortificationViewItemList = this->fields.fortificationViewItemList;
  if ( !fortificationViewItemList )
    sub_B7076C(0LL, entity);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)fortificationViewItemList,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Clear__);
  this->fields.eventUiEntity = entity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
    (System_Int32_array **)entity,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  eventUiEntity = this->fields.eventUiEntity;
  v13 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_EventInfoFortificationControl__Initialization_b__13_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v13, 0LL);
}


bool __fastcall EventInfoFortificationControl__IsFortificationEvent(int32_t eventId, const MethodInfo *method)
{
  EventFortificationMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1

  if ( (byte_4352A0C & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_EventFortificationMaster___);
    sub_B70694(&DataManager_TypeInfo);
    byte_4352A0C = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B7076C(0LL, v4);
  return EventFortificationMaster__IsFortificationEvent(Master_WarQuestSelectionMaster, eventId, 0LL);
}


void __fastcall EventInfoFortificationControl__OnDestroy(
        EventInfoFortificationControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_B7076C(this, method);
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
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v9; // x21
  System_Linq_IOrderedEnumerable_TSource__o *v10; // x20
  EventInfoFortificationControl___c_c *v11; // x8
  struct EventInfoFortificationControl___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__17_1; // x21
  Il2CppObject *v14; // x22
  struct EventInfoFortificationControl___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *v23; // x21
  int64_t v24; // x20
  __int64 v25; // x24
  unsigned __int64 v26; // x22
  UnityEngine_Object_o *v27; // x21
  EventFortificationEntity_o *v28; // x22
  const MethodInfo *v29; // x2
  UserEventFortificationMaster_o *Master_WarQuestSelectionMaster; // x23
  float v31; // s0
  struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *v32; // x21
  UserEventFortificationEntity_o *v33; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4352A09 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventFortificationMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserEventFortificationMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_OrderBy_EventFortificationEntity__int___);
    sub_B70694(&Method_System_Linq_Enumerable_ThenBy_EventFortificationEntity__int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_EventFortificationEntity___);
    sub_B70694(&Method_EventInfoFortificationControl__SetupFortificationItem_b__17_0__);
    sub_B70694(&Method_System_Func_EventFortificationEntity__int___ctor__);
    sub_B70694(&System_Func_EventFortificationEntity__int__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventFortificationEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_EventFortificationEntity__get_Item__);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_EventInfoFortificationControl___c__SetupFortificationItem_b__17_1__);
    sub_B70694(&EventInfoFortificationControl___c_TypeInfo);
    byte_4352A09 = 1;
  }
  v33 = 0LL;
  entities = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity || !Instance )
    goto LABEL_65;
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
        v9 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_EventFortificationEntity__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          v9,
          (Il2CppObject *)this,
          Method_EventInfoFortificationControl__SetupFortificationItem_b__17_0__,
          (const MethodInfo_29AD124 *)Method_System_Func_EventFortificationEntity__int___ctor__);
        v10 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v8,
                (System_Func_TSource__TKey__o *)v9,
                (const MethodInfo_1CBFB4C *)Method_System_Linq_Enumerable_OrderBy_EventFortificationEntity__int___);
        v11 = EventInfoFortificationControl___c_TypeInfo;
        if ( (BYTE3(EventInfoFortificationControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventInfoFortificationControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoFortificationControl___c_TypeInfo);
          v11 = EventInfoFortificationControl___c_TypeInfo;
        }
        static_fields = v11->static_fields;
        _9__17_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__17_1;
        if ( !_9__17_1 )
        {
          if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v11);
            static_fields = EventInfoFortificationControl___c_TypeInfo->static_fields;
          }
          v14 = (Il2CppObject *)static_fields->__9;
          _9__17_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_EventFortificationEntity__int__TypeInfo);
          System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
            _9__17_1,
            v14,
            Method_EventInfoFortificationControl___c__SetupFortificationItem_b__17_1__,
            (const MethodInfo_29AD124 *)Method_System_Func_EventFortificationEntity__int___ctor__);
          v15 = EventInfoFortificationControl___c_TypeInfo->static_fields;
          v15->__9__17_1 = (struct System_Func_EventFortificationEntity__int__o *)_9__17_1;
          sub_B70630(
            (BattleServantConfConponent_o *)&v15->__9__17_1,
            (System_Int32_array **)_9__17_1,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21);
        }
        v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                                     v10,
                                                                     (System_Func_TSource__TKey__o *)_9__17_1,
                                                                     (const MethodInfo_1CC7F60 *)Method_System_Linq_Enumerable_ThenBy_EventFortificationEntity__int___);
        Instance = (int64_t)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                              v22,
                              (const MethodInfo_1CCB668 *)Method_System_Linq_Enumerable_ToList_EventFortificationEntity___);
        v23 = this->fields.fortificationViewItemList;
        if ( v23 )
        {
          v24 = Instance;
          v25 = 4LL;
          do
          {
            v26 = v25 - 4;
            if ( v25 - 4 >= v23->fields._size )
              return;
            if ( !v24 )
              break;
            if ( v26 >= (unsigned int)v23->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
            v27 = (UnityEngine_Object_o *)*((_QWORD *)&v23->fields._items->obj.klass + v25);
            if ( (__int64)v26 >= *(int *)(v24 + 24) )
            {
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              Instance = UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
              if ( (Instance & 1) != 0 )
              {
                v32 = this->fields.fortificationViewItemList;
                if ( !v32 )
                  break;
                if ( v26 >= (unsigned int)v32->fields._size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
                Instance = *((_QWORD *)&v32->fields._items->obj.klass + v25);
                if ( !Instance )
                  break;
                goto LABEL_59;
              }
            }
            else
            {
              if ( v26 >= *(unsigned int *)(v24 + 24) )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
              v28 = *(EventFortificationEntity_o **)(*(_QWORD *)(v24 + 16) + 8 * v25);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              Instance = UnityEngine_Object__op_Equality(v27, 0LL, 0LL);
              if ( !v28 || (Instance & 1) != 0 )
              {
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                Instance = UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
                if ( (Instance & 1) != 0 )
                {
                  if ( !v27 )
                    break;
                  Instance = (int64_t)v27;
LABEL_59:
                  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                  if ( !Instance )
                    break;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                }
              }
              else
              {
                if ( !v27 )
                  break;
                Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v27, 0LL);
                if ( !Instance )
                  break;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                EventInfoFortificationViewItem__Setup((EventInfoFortificationViewItem_o *)v27, v28, v29);
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                }
                Master_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
                if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                }
                Instance = NetworkManager__get_UserId(0LL);
                if ( !Master_WarQuestSelectionMaster )
                  break;
                Instance = UserEventFortificationMaster__TryGetEntity(
                             Master_WarQuestSelectionMaster,
                             &v33,
                             Instance,
                             v28->fields.eventId,
                             v28->fields.idx,
                             0LL);
                if ( (Instance & 1) != 0 )
                {
                  if ( !v33 )
                    break;
                  Instance = (int64_t)v27[1].monitor;
                  if ( !Instance )
                    break;
                  v31 = (float)v33->fields.totalFortificationPoint / (float)v28->fields.maxFortificationPoint;
                }
                else
                {
                  Instance = (int64_t)v27[1].monitor;
                  if ( !Instance )
                    break;
                  v31 = 0.0;
                }
                UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Instance, v31, 0LL);
              }
            }
            v23 = this->fields.fortificationViewItemList;
            ++v25;
          }
          while ( v23 );
        }
      }
    }
LABEL_65:
    sub_B7076C(Instance, v4);
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
  UserEventFortificationMaster_o *Master_WarQuestSelectionMaster; // x0
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t TotalFortificationRewardNum; // w20
  UILabel_o *totalRewardNumLabel; // x19
  System_String_o *v7; // x21
  __int64 v8; // x2
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4352A0A & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_UserEventFortificationMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_5740/*"EVENT_POINT_COMMON_FORMAT"*/);
    byte_4352A0A = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
  if ( Master_WarQuestSelectionMaster && (eventUiEntity = this->fields.eventUiEntity) != 0LL )
    TotalFortificationRewardNum = UserEventFortificationMaster__GetTotalFortificationRewardNum(
                                    Master_WarQuestSelectionMaster,
                                    eventUiEntity->fields.eventId,
                                    0LL);
  else
    TotalFortificationRewardNum = 0;
  totalRewardNumLabel = this->fields.totalRewardNumLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5740/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
  v12 = TotalFortificationRewardNum;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v8);
  v10 = System_String__Format(v7, v9, 0LL);
  if ( !totalRewardNumLabel )
    sub_B7076C(v10, v11);
  UILabel__set_text(totalRewardNumLabel, v10, 0LL);
}


void __fastcall EventInfoFortificationControl___Initialization_b__13_0(
        EventInfoFortificationControl_o *this,
        const MethodInfo *method)
{
  EventInfoFortificationControl_o *v2; // x19
  struct EventUiEntity_o *eventUiEntity; // x8

  v2 = this;
  if ( (byte_4352A0E & 1) == 0 )
  {
    this = (EventInfoFortificationControl_o *)sub_B70694(&StringLiteral_18821/*"event_progress_bg"*/);
    byte_4352A0E = 1;
  }
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity
    || (EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)v2, eventUiEntity->fields.eventId, 0LL),
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)v2,
          v2->fields.bgSprite,
          (System_String_o *)StringLiteral_18821/*"event_progress_bg"*/,
          0LL),
        (this = (EventInfoFortificationControl_o *)v2->fields.bgSprite) == 0LL) )
  {
    sub_B7076C(this, method);
  }
  (*(void (__fastcall **)(EventInfoFortificationControl_o *, Il2CppMethodPointer))&this->klass[1]._2.naturalAligment)(
    this,
    this->klass[1].vtable._0_Equals.methodPtr);
}


int32_t __fastcall EventInfoFortificationControl___SetupFortificationItem_b__17_0(
        EventInfoFortificationControl_o *this,
        EventFortificationEntity_o *entity,
        const MethodInfo *method)
{
  EventInfoFortificationControl_o *v4; // x20

  v4 = this;
  if ( (byte_4352A0F & 1) == 0 )
  {
    this = (EventInfoFortificationControl_o *)sub_B70694(&Method_System_Array_IndexOf_int___);
    byte_4352A0F = 1;
  }
  if ( !entity )
    sub_B7076C(this, entity);
  return System_Array__IndexOf_int_(
           v4->fields.workTypeOrder,
           entity->fields.workType,
           (const MethodInfo_1FCBFE4 *)Method_System_Array_IndexOf_int___);
}


void __fastcall EventInfoFortificationControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventInfoFortificationControl___c_StaticFields *static_fields; // x0

  if ( (byte_434F082 & 1) == 0 )
  {
    sub_B70694(&EventInfoFortificationControl___c_TypeInfo);
    byte_434F082 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(EventInfoFortificationControl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventInfoFortificationControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoFortificationControl___c_o *)v1;
  sub_B70630(static_fields);
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
    sub_B7076C(this, 0LL);
  return entity->fields.idx;
}