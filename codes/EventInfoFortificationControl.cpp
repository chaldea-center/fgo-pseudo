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
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_RuntimeFieldHandle_o v22; // 0:w1.4

  if ( (byte_42155B6 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem___ctor__, v3);
    sub_B0D8A4(&System_Collections_Generic_List_EventInfoFortificationViewItem__TypeInfo, v4);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1,
      v5);
    byte_42155B6 = 1;
  }
  v6 = (System_Array_o *)sub_B0D8BC(int___TypeInfo, 3LL);
  v22.fields.value = Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v6, v22, 0LL);
  this->fields.workTypeOrder = (struct System_Int32_array *)v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.workTypeOrder,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventInfoFortificationViewItem__TypeInfo,
                                                                                                  v13,
                                                                                                  v14);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventInfoFortificationViewItem___ctor__);
  this->fields.fortificationViewItemList = (struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *)v15;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.fortificationViewItemList,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
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

  if ( (byte_42155B4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Add__, *(_QWORD *)&count);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_EventInfoFortificationViewItem___, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_22299/*"spot_info_gauge_base_color"*/, v7);
    sub_B0D8A4(&StringLiteral_22301/*"spot_info_gauge_s"*/, v8);
    sub_B0D8A4(&StringLiteral_22298/*"spot_info_gauge_base"*/, v9);
    byte_42155B4 = 1;
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
              (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_EventInfoFortificationViewItem___);
      fortificationViewItemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL);
      if ( ((unsigned __int8)fortificationViewItemList & 1) != 0 )
      {
        if ( !v13 )
          goto LABEL_16;
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          (UISprite_o *)v13->fields.leftAnchor,
          (System_String_o *)StringLiteral_22298/*"spot_info_gauge_base"*/,
          0LL);
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          (UISprite_o *)v13->fields.rightAnchor,
          (System_String_o *)StringLiteral_22301/*"spot_info_gauge_s"*/,
          0LL);
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          (UISprite_o *)v13->fields.bottomAnchor,
          (System_String_o *)StringLiteral_22299/*"spot_info_gauge_base_color"*/,
          0LL);
        fortificationViewItemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.fortificationViewItemList;
        if ( !fortificationViewItemList )
          goto LABEL_16;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          fortificationViewItemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Add__);
      }
      ++v10;
    }
    while ( v10 < count );
    fortificationViewItemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemGrid;
    if ( !fortificationViewItemList )
LABEL_16:
      sub_B0D97C(fortificationViewItemList);
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
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_o *v17; // x21

  if ( (byte_42155B1 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, entity);
    sub_B0D8A4(&Method_EventInfoFortificationControl__Initialization_b__13_0__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Clear__, v6);
    byte_42155B1 = 1;
  }
  fortificationViewItemList = this->fields.fortificationViewItemList;
  if ( !fortificationViewItemList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)fortificationViewItemList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Clear__);
  this->fields.eventUiEntity = entity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
    (System_Int32_array **)entity,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  eventUiEntity = this->fields.eventUiEntity;
  v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v15, v16);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_EventInfoFortificationControl__Initialization_b__13_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v17, 0LL);
}


bool __fastcall EventInfoFortificationControl__IsFortificationEvent(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  EventFortificationMaster_o *Master_WarQuestSelectionMaster; // x0

  if ( (byte_42155B5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventFortificationMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    byte_42155B5 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B0D97C(0LL);
  return EventFortificationMaster__IsFortificationEvent(Master_WarQuestSelectionMaster, eventId, 0LL);
}


void __fastcall EventInfoFortificationControl__OnDestroy(
        EventInfoFortificationControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_B0D97C(this);
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
  struct EventUiEntity_o *eventUiEntity; // x8
  const MethodInfo *v22; // x2
  struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *fortificationViewItemList; // x9
  System_Collections_Generic_List_EventFortificationEntity__o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  System_Linq_IOrderedEnumerable_TSource__o *v30; // x20
  EventInfoFortificationControl___c_c *v31; // x8
  struct EventInfoFortificationControl___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__17_1; // x21
  Il2CppObject *v34; // x22
  struct EventInfoFortificationControl___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *v43; // x21
  int64_t v44; // x20
  __int64 v45; // x24
  unsigned __int64 v46; // x22
  UnityEngine_Object_o *v47; // x21
  EventFortificationEntity_o *v48; // x22
  const MethodInfo *v49; // x2
  UserEventFortificationMaster_o *Master_WarQuestSelectionMaster; // x23
  float v51; // s0
  struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *v52; // x21
  UserEventFortificationEntity_o *v53; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42155B2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventFortificationMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEventFortificationMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderBy_EventFortificationEntity__int___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ThenBy_EventFortificationEntity__int___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_EventFortificationEntity___, v7);
    sub_B0D8A4(&Method_EventInfoFortificationControl__SetupFortificationItem_b__17_0__, v8);
    sub_B0D8A4(&Method_System_Func_EventFortificationEntity__int___ctor__, v9);
    sub_B0D8A4(&System_Func_EventFortificationEntity__int__TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationEntity__get_Count__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Count__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Item__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationEntity__get_Item__, v14);
    sub_B0D8A4(&NetworkManager_TypeInfo, v15);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B0D8A4(&Method_EventInfoFortificationControl___c__SetupFortificationItem_b__17_1__, v18);
    sub_B0D8A4(&EventInfoFortificationControl___c_TypeInfo, v19);
    byte_42155B2 = 1;
  }
  v53 = 0LL;
  entities = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
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
          v22);
        v24 = entities;
        v27 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                System_Func_EventFortificationEntity__int__TypeInfo,
                                                                                v25,
                                                                                v26);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          v27,
          (Il2CppObject *)this,
          Method_EventInfoFortificationControl__SetupFortificationItem_b__17_0__,
          (const MethodInfo_2619564 *)Method_System_Func_EventFortificationEntity__int___ctor__);
        v30 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v24,
                (System_Func_TSource__TKey__o *)v27,
                (const MethodInfo_1B4E924 *)Method_System_Linq_Enumerable_OrderBy_EventFortificationEntity__int___);
        v31 = EventInfoFortificationControl___c_TypeInfo;
        if ( (BYTE3(EventInfoFortificationControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventInfoFortificationControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoFortificationControl___c_TypeInfo);
          v31 = EventInfoFortificationControl___c_TypeInfo;
        }
        static_fields = v31->static_fields;
        _9__17_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__17_1;
        if ( !_9__17_1 )
        {
          if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v31);
            static_fields = EventInfoFortificationControl___c_TypeInfo->static_fields;
          }
          v34 = (Il2CppObject *)static_fields->__9;
          _9__17_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                       System_Func_EventFortificationEntity__int__TypeInfo,
                                                                                       v28,
                                                                                       v29);
          System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
            _9__17_1,
            v34,
            Method_EventInfoFortificationControl___c__SetupFortificationItem_b__17_1__,
            (const MethodInfo_2619564 *)Method_System_Func_EventFortificationEntity__int___ctor__);
          v35 = EventInfoFortificationControl___c_TypeInfo->static_fields;
          v35->__9__17_1 = (struct System_Func_EventFortificationEntity__int__o *)_9__17_1;
          sub_B0D840(
            (BattleServantConfConponent_o *)&v35->__9__17_1,
            (System_Int32_array **)_9__17_1,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41);
        }
        v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                                     v30,
                                                                     (System_Func_TSource__TKey__o *)_9__17_1,
                                                                     (const MethodInfo_1B55AEC *)Method_System_Linq_Enumerable_ThenBy_EventFortificationEntity__int___);
        Instance = (int64_t)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                              v42,
                              (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_EventFortificationEntity___);
        v43 = this->fields.fortificationViewItemList;
        if ( v43 )
        {
          v44 = Instance;
          v45 = 4LL;
          do
          {
            v46 = v45 - 4;
            if ( v45 - 4 >= v43->fields._size )
              return;
            if ( !v44 )
              break;
            if ( v46 >= (unsigned int)v43->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            v47 = (UnityEngine_Object_o *)*((_QWORD *)&v43->fields._items->obj.klass + v45);
            if ( (__int64)v46 >= *(int *)(v44 + 24) )
            {
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              Instance = UnityEngine_Object__op_Inequality(v47, 0LL, 0LL);
              if ( (Instance & 1) != 0 )
              {
                v52 = this->fields.fortificationViewItemList;
                if ( !v52 )
                  break;
                if ( v46 >= (unsigned int)v52->fields._size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                Instance = *((_QWORD *)&v52->fields._items->obj.klass + v45);
                if ( !Instance )
                  break;
                goto LABEL_59;
              }
            }
            else
            {
              if ( v46 >= *(unsigned int *)(v44 + 24) )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
              v48 = *(EventFortificationEntity_o **)(*(_QWORD *)(v44 + 16) + 8 * v45);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              Instance = UnityEngine_Object__op_Equality(v47, 0LL, 0LL);
              if ( !v48 || (Instance & 1) != 0 )
              {
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                Instance = UnityEngine_Object__op_Inequality(v47, 0LL, 0LL);
                if ( (Instance & 1) != 0 )
                {
                  if ( !v47 )
                    break;
                  Instance = (int64_t)v47;
LABEL_59:
                  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                  if ( !Instance )
                    break;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                }
              }
              else
              {
                if ( !v47 )
                  break;
                Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v47, 0LL);
                if ( !Instance )
                  break;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                EventInfoFortificationViewItem__Setup((EventInfoFortificationViewItem_o *)v47, v48, v49);
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                }
                Master_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
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
                             &v53,
                             Instance,
                             v48->fields.eventId,
                             v48->fields.idx,
                             0LL);
                if ( (Instance & 1) != 0 )
                {
                  if ( !v53 )
                    break;
                  Instance = (int64_t)v47[1].monitor;
                  if ( !Instance )
                    break;
                  v51 = (float)v53->fields.totalFortificationPoint / (float)v48->fields.maxFortificationPoint;
                }
                else
                {
                  Instance = (int64_t)v47[1].monitor;
                  if ( !Instance )
                    break;
                  v51 = 0.0;
                }
                UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Instance, v51, 0LL);
              }
            }
            v43 = this->fields.fortificationViewItemList;
            ++v45;
          }
          while ( v43 );
        }
      }
    }
LABEL_65:
    sub_B0D97C(Instance);
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
  int32_t v14; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42155B3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEventFortificationMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    sub_B0D8A4(&int_TypeInfo, v4);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_5667/*"EVENT_POINT_COMMON_FORMAT"*/, v6);
    byte_42155B3 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
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
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5667/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
  v14 = TotalFortificationRewardNum;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v13 = System_String__Format(v11, v12, 0LL);
  if ( !totalRewardNumLabel )
    sub_B0D97C(v13);
  UILabel__set_text(totalRewardNumLabel, v13, 0LL);
}


void __fastcall EventInfoFortificationControl___Initialization_b__13_0(
        EventInfoFortificationControl_o *this,
        const MethodInfo *method)
{
  EventInfoFortificationControl_o *v2; // x19
  struct EventUiEntity_o *eventUiEntity; // x8

  v2 = this;
  if ( (byte_42155B7 & 1) == 0 )
  {
    this = (EventInfoFortificationControl_o *)sub_B0D8A4(&StringLiteral_18598/*"event_progress_bg"*/, method);
    byte_42155B7 = 1;
  }
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity
    || (EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)v2, eventUiEntity->fields.eventId, 0LL),
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)v2,
          v2->fields.bgSprite,
          (System_String_o *)StringLiteral_18598/*"event_progress_bg"*/,
          0LL),
        (this = (EventInfoFortificationControl_o *)v2->fields.bgSprite) == 0LL) )
  {
    sub_B0D97C(this);
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
  if ( (byte_42155B8 & 1) == 0 )
  {
    this = (EventInfoFortificationControl_o *)sub_B0D8A4(&Method_System_Array_IndexOf_int___, entity);
    byte_42155B8 = 1;
  }
  if ( !entity )
    sub_B0D97C(this);
  return System_Array__IndexOf_int_(
           v4->fields.workTypeOrder,
           entity->fields.workType,
           (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___);
}


void __fastcall EventInfoFortificationControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventInfoFortificationControl___c_StaticFields *static_fields; // x0

  if ( (byte_4211B62 & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoFortificationControl___c_TypeInfo, v1);
    byte_4211B62 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventInfoFortificationControl___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventInfoFortificationControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoFortificationControl___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return entity->fields.idx;
}