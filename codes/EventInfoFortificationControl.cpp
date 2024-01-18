void __fastcall EventInfoFortificationControl___ctor(EventInfoFortificationControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Array_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_RuntimeFieldHandle_o v20; // 0:w1.4

  if ( (byte_4188650 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_EventInfoFortificationViewItem__TypeInfo, v4);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1,
      v5);
    byte_4188650 = 1;
  }
  v6 = (System_Array_o *)sub_B2C374(int___TypeInfo, 3LL);
  v20.fields.value = Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v6, v20, 0LL);
  this->fields.workTypeOrder = (struct System_Int32_array *)v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.workTypeOrder,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventInfoFortificationViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventInfoFortificationViewItem___ctor__);
  this->fields.fortificationViewItemList = (struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *)v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.fortificationViewItemList,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
  int32_t v10; // w23
  UnityEngine_Transform_o *fortificationViewItemParent; // x21
  struct EventInfoFortificationViewItem_o *fortificationViewItemPrefab; // x22
  UILabel_o *v13; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *fortificationViewItemList; // x0
  __int64 v15; // x1

  if ( (byte_418864E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Add__, *(_QWORD *)&count);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_EventInfoFortificationViewItem___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_22224/*"spot_info_gauge_base_color"*/, v7);
    sub_B2C35C(&StringLiteral_22226/*"spot_info_gauge_s"*/, v8);
    sub_B2C35C(&StringLiteral_22223/*"spot_info_gauge_base"*/, v9);
    byte_418864E = 1;
  }
  if ( count >= 1 )
  {
    v10 = 0;
    do
    {
      fortificationViewItemParent = this->fields.fortificationViewItemParent;
      fortificationViewItemPrefab = this->fields.fortificationViewItemPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v13 = UnityEngine_Object__Instantiate_UILabel_(
              (UILabel_o *)fortificationViewItemPrefab,
              fortificationViewItemParent,
              (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_EventInfoFortificationViewItem___);
      fortificationViewItemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL);
      if ( ((unsigned __int8)fortificationViewItemList & 1) != 0 )
      {
        if ( !v13 )
          goto LABEL_16;
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          (UISprite_o *)v13->fields.leftAnchor,
          (System_String_o *)StringLiteral_22223/*"spot_info_gauge_base"*/,
          0LL);
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          (UISprite_o *)v13->fields.rightAnchor,
          (System_String_o *)StringLiteral_22226/*"spot_info_gauge_s"*/,
          0LL);
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          (UISprite_o *)v13->fields.bottomAnchor,
          (System_String_o *)StringLiteral_22224/*"spot_info_gauge_base_color"*/,
          0LL);
        fortificationViewItemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.fortificationViewItemList;
        if ( !fortificationViewItemList )
          goto LABEL_16;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          fortificationViewItemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Add__);
      }
      ++v10;
    }
    while ( v10 < count );
    fortificationViewItemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemGrid;
    if ( !fortificationViewItemList )
LABEL_16:
      sub_B2C434(fortificationViewItemList, v15);
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
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *fortificationViewItemList; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  EventUiEntity_o *eventUiEntity; // x20
  System_Action_o *v15; // x21

  if ( (byte_418864B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, entity);
    sub_B2C35C(&Method_EventInfoFortificationControl__Initialization_b__13_0__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Clear__, v6);
    byte_418864B = 1;
  }
  fortificationViewItemList = this->fields.fortificationViewItemList;
  if ( !fortificationViewItemList )
    sub_B2C434(0LL, entity);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)fortificationViewItemList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Clear__);
  this->fields.eventUiEntity = entity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
    (System_Int32_array **)entity,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  eventUiEntity = this->fields.eventUiEntity;
  v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_EventInfoFortificationControl__Initialization_b__13_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v15, 0LL);
}


bool __fastcall EventInfoFortificationControl__IsFortificationEvent(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  EventFortificationMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1

  if ( (byte_418864F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventFortificationMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    byte_418864F = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v5);
  return EventFortificationMaster__IsFortificationEvent(Master_WarQuestSelectionMaster, eventId, 0LL);
}


void __fastcall EventInfoFortificationControl__OnDestroy(
        EventInfoFortificationControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_B2C434(this, method);
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
  __int64 v19; // x1
  int64_t Instance; // x0
  __int64 v21; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  const MethodInfo *v23; // x2
  struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *fortificationViewItemList; // x9
  System_Collections_Generic_List_EventFortificationEntity__o *v25; // x20
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v26; // x21
  System_Linq_IOrderedEnumerable_TSource__o *v27; // x20
  EventInfoFortificationControl___c_c *v28; // x8
  struct EventInfoFortificationControl___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__17_1; // x21
  Il2CppObject *v31; // x22
  struct EventInfoFortificationControl___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *v40; // x21
  int64_t v41; // x20
  __int64 v42; // x24
  unsigned __int64 v43; // x22
  UnityEngine_Object_o *v44; // x21
  EventFortificationEntity_o *v45; // x22
  const MethodInfo *v46; // x2
  UserEventFortificationMaster_o *Master_WarQuestSelectionMaster; // x23
  float v48; // s0
  struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *v49; // x21
  UserEventFortificationEntity_o *v50; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_418864C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventFortificationMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventFortificationMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderBy_EventFortificationEntity__int___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_ThenBy_EventFortificationEntity__int___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_EventFortificationEntity___, v7);
    sub_B2C35C(&Method_EventInfoFortificationControl__SetupFortificationItem_b__17_0__, v8);
    sub_B2C35C(&Method_System_Func_EventFortificationEntity__int___ctor__, v9);
    sub_B2C35C(&System_Func_EventFortificationEntity__int__TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationEntity__get_Count__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Count__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Item__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationEntity__get_Item__, v14);
    sub_B2C35C(&NetworkManager_TypeInfo, v15);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&Method_EventInfoFortificationControl___c__SetupFortificationItem_b__17_1__, v18);
    sub_B2C35C(&EventInfoFortificationControl___c_TypeInfo, v19);
    byte_418864C = 1;
  }
  v50 = 0LL;
  entities = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventFortificationMaster___);
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
          v23);
        v25 = entities;
        v26 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_EventFortificationEntity__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          v26,
          (Il2CppObject *)this,
          Method_EventInfoFortificationControl__SetupFortificationItem_b__17_0__,
          (const MethodInfo_27127B0 *)Method_System_Func_EventFortificationEntity__int___ctor__);
        v27 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v25,
                (System_Func_TSource__TKey__o *)v26,
                (const MethodInfo_1A93658 *)Method_System_Linq_Enumerable_OrderBy_EventFortificationEntity__int___);
        v28 = EventInfoFortificationControl___c_TypeInfo;
        if ( (BYTE3(EventInfoFortificationControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventInfoFortificationControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoFortificationControl___c_TypeInfo);
          v28 = EventInfoFortificationControl___c_TypeInfo;
        }
        static_fields = v28->static_fields;
        _9__17_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__17_1;
        if ( !_9__17_1 )
        {
          if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v28);
            static_fields = EventInfoFortificationControl___c_TypeInfo->static_fields;
          }
          v31 = (Il2CppObject *)static_fields->__9;
          _9__17_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_EventFortificationEntity__int__TypeInfo);
          System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
            _9__17_1,
            v31,
            Method_EventInfoFortificationControl___c__SetupFortificationItem_b__17_1__,
            (const MethodInfo_27127B0 *)Method_System_Func_EventFortificationEntity__int___ctor__);
          v32 = EventInfoFortificationControl___c_TypeInfo->static_fields;
          v32->__9__17_1 = (struct System_Func_EventFortificationEntity__int__o *)_9__17_1;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v32->__9__17_1,
            (System_Int32_array **)_9__17_1,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38);
        }
        v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                                     v27,
                                                                     (System_Func_TSource__TKey__o *)_9__17_1,
                                                                     (const MethodInfo_1A9A820 *)Method_System_Linq_Enumerable_ThenBy_EventFortificationEntity__int___);
        Instance = (int64_t)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                              v39,
                              (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_EventFortificationEntity___);
        v40 = this->fields.fortificationViewItemList;
        if ( v40 )
        {
          v41 = Instance;
          v42 = 4LL;
          do
          {
            v43 = v42 - 4;
            if ( v42 - 4 >= v40->fields._size )
              return;
            if ( !v41 )
              break;
            if ( v43 >= (unsigned int)v40->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            v44 = (UnityEngine_Object_o *)*((_QWORD *)&v40->fields._items->obj.klass + v42);
            if ( (__int64)v43 >= *(int *)(v41 + 24) )
            {
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              Instance = UnityEngine_Object__op_Inequality(v44, 0LL, 0LL);
              if ( (Instance & 1) != 0 )
              {
                v49 = this->fields.fortificationViewItemList;
                if ( !v49 )
                  break;
                if ( v43 >= (unsigned int)v49->fields._size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                Instance = *((_QWORD *)&v49->fields._items->obj.klass + v42);
                if ( !Instance )
                  break;
                goto LABEL_59;
              }
            }
            else
            {
              if ( v43 >= *(unsigned int *)(v41 + 24) )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
              v45 = *(EventFortificationEntity_o **)(*(_QWORD *)(v41 + 16) + 8 * v42);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              Instance = UnityEngine_Object__op_Equality(v44, 0LL, 0LL);
              if ( !v45 || (Instance & 1) != 0 )
              {
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                Instance = UnityEngine_Object__op_Inequality(v44, 0LL, 0LL);
                if ( (Instance & 1) != 0 )
                {
                  if ( !v44 )
                    break;
                  Instance = (int64_t)v44;
LABEL_59:
                  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                  if ( !Instance )
                    break;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                }
              }
              else
              {
                if ( !v44 )
                  break;
                Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v44, 0LL);
                if ( !Instance )
                  break;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                EventInfoFortificationViewItem__Setup((EventInfoFortificationViewItem_o *)v44, v45, v46);
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                }
                Master_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
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
                             &v50,
                             Instance,
                             v45->fields.eventId,
                             v45->fields.idx,
                             0LL);
                if ( (Instance & 1) != 0 )
                {
                  if ( !v50 )
                    break;
                  Instance = (int64_t)v44[1].monitor;
                  if ( !Instance )
                    break;
                  v48 = (float)v50->fields.totalFortificationPoint / (float)v45->fields.maxFortificationPoint;
                }
                else
                {
                  Instance = (int64_t)v44[1].monitor;
                  if ( !Instance )
                    break;
                  v48 = 0.0;
                }
                UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Instance, v48, 0LL);
              }
            }
            v40 = this->fields.fortificationViewItemList;
            ++v42;
          }
          while ( v40 );
        }
      }
    }
LABEL_65:
    sub_B2C434(Instance, v21);
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
  UserEventFortificationMaster_o *Master_WarQuestSelectionMaster; // x0
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t TotalFortificationRewardNum; // w20
  UILabel_o *totalRewardNumLabel; // x19
  System_String_o *v11; // x21
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  __int64 v14; // x1
  int32_t v15; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418864D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventFortificationMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&int_TypeInfo, v4);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_5651/*"EVENT_POINT_COMMON_FORMAT"*/, v6);
    byte_418864D = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
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
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5651/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
  v15 = TotalFortificationRewardNum;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v13 = System_String__Format(v11, v12, 0LL);
  if ( !totalRewardNumLabel )
    sub_B2C434(v13, v14);
  UILabel__set_text(totalRewardNumLabel, v13, 0LL);
}


void __fastcall EventInfoFortificationControl___Initialization_b__13_0(
        EventInfoFortificationControl_o *this,
        const MethodInfo *method)
{
  EventInfoFortificationControl_o *v2; // x19
  struct EventUiEntity_o *eventUiEntity; // x8

  v2 = this;
  if ( (byte_4188651 & 1) == 0 )
  {
    this = (EventInfoFortificationControl_o *)sub_B2C35C(&StringLiteral_18540/*"event_progress_bg"*/, method);
    byte_4188651 = 1;
  }
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity
    || (EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)v2, eventUiEntity->fields.eventId, 0LL),
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)v2,
          v2->fields.bgSprite,
          (System_String_o *)StringLiteral_18540/*"event_progress_bg"*/,
          0LL),
        (this = (EventInfoFortificationControl_o *)v2->fields.bgSprite) == 0LL) )
  {
    sub_B2C434(this, method);
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
  if ( (byte_4188652 & 1) == 0 )
  {
    this = (EventInfoFortificationControl_o *)sub_B2C35C(&Method_System_Array_IndexOf_int___, entity);
    byte_4188652 = 1;
  }
  if ( !entity )
    sub_B2C434(this, entity);
  return System_Array__IndexOf_int_(
           v4->fields.workTypeOrder,
           entity->fields.workType,
           (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___);
}


void __fastcall EventInfoFortificationControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventInfoFortificationControl___c_StaticFields *static_fields; // x0

  if ( (byte_4184B03 & 1) == 0 )
  {
    sub_B2C35C(&EventInfoFortificationControl___c_TypeInfo, v1);
    byte_4184B03 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventInfoFortificationControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventInfoFortificationControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoFortificationControl___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return entity->fields.idx;
}