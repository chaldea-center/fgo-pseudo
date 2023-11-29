void __fastcall EventInfoFortificationControl___ctor(EventInfoFortificationControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Array_o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_RuntimeFieldHandle_o v25; // 0:w1.4

  if ( (byte_40FA11D & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem___ctor__, v4);
    sub_B16FFC(&System_Collections_Generic_List_EventInfoFortificationViewItem__TypeInfo, v5);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1,
      v6);
    byte_40FA11D = 1;
  }
  v7 = (System_Array_o *)sub_B17014(int___TypeInfo, 3LL, v2);
  v25.fields.value = Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v7, v25, 0LL);
  this->fields.workTypeOrder = (struct System_Int32_array *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.workTypeOrder,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventInfoFortificationViewItem__TypeInfo,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventInfoFortificationViewItem___ctor__);
  this->fields.fortificationViewItemList = (struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *)v18;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.fortificationViewItemList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
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
  struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *fortificationViewItemList; // x0
  struct UIGrid_o *itemGrid; // x0

  if ( (byte_40FA11B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Add__, *(_QWORD *)&count);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_EventInfoFortificationViewItem___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_22132, v7);
    sub_B16FFC(&StringLiteral_22134, v8);
    sub_B16FFC(&StringLiteral_22131, v9);
    byte_40FA11B = 1;
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
              (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_EventInfoFortificationViewItem___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL) )
      {
        if ( !v13 )
          goto LABEL_16;
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          (UISprite_o *)v13->fields.leftAnchor,
          (System_String_o *)StringLiteral_22131,
          0LL);
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          (UISprite_o *)v13->fields.rightAnchor,
          (System_String_o *)StringLiteral_22134,
          0LL);
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          (UISprite_o *)v13->fields.bottomAnchor,
          (System_String_o *)StringLiteral_22132,
          0LL);
        fortificationViewItemList = this->fields.fortificationViewItemList;
        if ( !fortificationViewItemList )
          goto LABEL_16;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)fortificationViewItemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Add__);
      }
      ++v10;
    }
    while ( v10 < count );
    itemGrid = this->fields.itemGrid;
    if ( !itemGrid )
LABEL_16:
      sub_B170D4();
    ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))itemGrid->klass->vtable._8_Reposition.method)(
      itemGrid,
      itemGrid->klass->vtable._9_ResetPosition.methodPtr);
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
  __int64 v17; // x3
  __int64 v18; // x4
  System_Action_o *v19; // x21

  if ( (byte_40FA118 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, entity);
    sub_B16FFC(&Method_EventInfoFortificationControl__Initialization_b__13_0__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Clear__, v6);
    byte_40FA118 = 1;
  }
  fortificationViewItemList = this->fields.fortificationViewItemList;
  if ( !fortificationViewItemList )
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)fortificationViewItemList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Clear__);
  this->fields.eventUiEntity = entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
    (System_Int32_array **)entity,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  eventUiEntity = this->fields.eventUiEntity;
  v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v15, v16, v17, v18);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_EventInfoFortificationControl__Initialization_b__13_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v19, 0LL);
}


bool __fastcall EventInfoFortificationControl__IsFortificationEvent(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  EventFortificationMaster_o *Master_WarQuestSelectionMaster; // x0

  if ( (byte_40FA11C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventFortificationMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    byte_40FA11C = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
  return EventFortificationMaster__IsFortificationEvent(Master_WarQuestSelectionMaster, eventId, 0LL);
}


void __fastcall EventInfoFortificationControl__OnDestroy(
        EventInfoFortificationControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  EventFortificationMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct EventUiEntity_o *eventUiEntity; // x8
  const MethodInfo *v23; // x2
  struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *fortificationViewItemList; // x9
  System_Collections_Generic_List_EventFortificationEntity__o *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Linq_IOrderedEnumerable_TSource__o *v35; // x20
  EventInfoFortificationControl___c_c *v36; // x8
  struct EventInfoFortificationControl___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__17_1; // x21
  Il2CppObject *v39; // x22
  struct EventInfoFortificationControl___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  System_Collections_Generic_List_TSource__o *v48; // x0
  struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *v49; // x21
  System_Collections_Generic_List_TSource__o *v50; // x20
  __int64 v51; // x24
  unsigned __int64 v52; // x22
  UnityEngine_Object_o *v53; // x21
  EventFortificationEntity_o *v54; // x22
  bool v55; // w0
  UnityEngine_GameObject_o *v56; // x0
  const MethodInfo *v57; // x2
  UserEventFortificationMaster_o *Master_WarQuestSelectionMaster; // x23
  int64_t UserId; // x0
  UIBasicSprite_o *monitor; // x0
  float v61; // s0
  struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *v62; // x21
  UnityEngine_Component_o *v63; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UserEventFortificationEntity_o *v65; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FA119 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventFortificationMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventFortificationMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderBy_EventFortificationEntity__int___, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_ThenBy_EventFortificationEntity__int___, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_EventFortificationEntity___, v7);
    sub_B16FFC(&Method_EventInfoFortificationControl__SetupFortificationItem_b__17_0__, v8);
    sub_B16FFC(&Method_System_Func_EventFortificationEntity__int___ctor__, v9);
    sub_B16FFC(&System_Func_EventFortificationEntity__int__TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationEntity__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Count__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Item__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationEntity__get_Item__, v14);
    sub_B16FFC(&NetworkManager_TypeInfo, v15);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&Method_EventInfoFortificationControl___c__SetupFortificationItem_b__17_1__, v18);
    sub_B16FFC(&EventInfoFortificationControl___c_TypeInfo, v19);
    byte_40FA119 = 1;
  }
  v65 = 0LL;
  entities = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  MasterData_WarQuestSelectionMaster = (EventFortificationMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventFortificationMaster___);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity || !MasterData_WarQuestSelectionMaster )
    goto LABEL_65;
  if ( EventFortificationMaster__TryGetEntityList(
         MasterData_WarQuestSelectionMaster,
         &entities,
         eventUiEntity->fields.eventId,
         0LL) )
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
        v30 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_EventFortificationEntity__int__TypeInfo,
                                                                                v26,
                                                                                v27,
                                                                                v28,
                                                                                v29);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          v30,
          (Il2CppObject *)this,
          Method_EventInfoFortificationControl__SetupFortificationItem_b__17_0__,
          (const MethodInfo_2B6B6EC *)Method_System_Func_EventFortificationEntity__int___ctor__);
        v35 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v25,
                (System_Func_TSource__TKey__o *)v30,
                (const MethodInfo_19BD754 *)Method_System_Linq_Enumerable_OrderBy_EventFortificationEntity__int___);
        v36 = EventInfoFortificationControl___c_TypeInfo;
        if ( (BYTE3(EventInfoFortificationControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventInfoFortificationControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoFortificationControl___c_TypeInfo);
          v36 = EventInfoFortificationControl___c_TypeInfo;
        }
        static_fields = v36->static_fields;
        _9__17_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__17_1;
        if ( !_9__17_1 )
        {
          if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v36);
            static_fields = EventInfoFortificationControl___c_TypeInfo->static_fields;
          }
          v39 = (Il2CppObject *)static_fields->__9;
          _9__17_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                       System_Func_EventFortificationEntity__int__TypeInfo,
                                                                                       v31,
                                                                                       v32,
                                                                                       v33,
                                                                                       v34);
          System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
            _9__17_1,
            v39,
            Method_EventInfoFortificationControl___c__SetupFortificationItem_b__17_1__,
            (const MethodInfo_2B6B6EC *)Method_System_Func_EventFortificationEntity__int___ctor__);
          v40 = EventInfoFortificationControl___c_TypeInfo->static_fields;
          v40->__9__17_1 = (struct System_Func_EventFortificationEntity__int__o *)_9__17_1;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v40->__9__17_1,
            (System_Int32_array **)_9__17_1,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46);
        }
        v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                                     v35,
                                                                     (System_Func_TSource__TKey__o *)_9__17_1,
                                                                     (const MethodInfo_19C4504 *)Method_System_Linq_Enumerable_ThenBy_EventFortificationEntity__int___);
        v48 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                v47,
                (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_EventFortificationEntity___);
        v49 = this->fields.fortificationViewItemList;
        if ( v49 )
        {
          v50 = v48;
          v51 = 4LL;
          do
          {
            v52 = v51 - 4;
            if ( v51 - 4 >= v49->fields._size )
              return;
            if ( !v50 )
              break;
            if ( v52 >= (unsigned int)v49->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v53 = (UnityEngine_Object_o *)*((_QWORD *)&v49->fields._items->obj.klass + v51);
            if ( (__int64)v52 >= v50->fields._size )
            {
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(v53, 0LL, 0LL) )
              {
                v62 = this->fields.fortificationViewItemList;
                if ( !v62 )
                  break;
                if ( v52 >= (unsigned int)v62->fields._size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                v63 = (UnityEngine_Component_o *)*((_QWORD *)&v62->fields._items->obj.klass + v51);
                if ( !v63 )
                  break;
                goto LABEL_59;
              }
            }
            else
            {
              if ( v52 >= (unsigned int)v50->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
              v54 = (EventFortificationEntity_o *)*((_QWORD *)&v50->fields._items->obj.klass + v51);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              v55 = UnityEngine_Object__op_Equality(v53, 0LL, 0LL);
              if ( !v54 || v55 )
              {
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(v53, 0LL, 0LL) )
                {
                  if ( !v53 )
                    break;
                  v63 = (UnityEngine_Component_o *)v53;
LABEL_59:
                  gameObject = UnityEngine_Component__get_gameObject(v63, 0LL);
                  if ( !gameObject )
                    break;
                  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
                }
              }
              else
              {
                if ( !v53 )
                  break;
                v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v53, 0LL);
                if ( !v56 )
                  break;
                UnityEngine_GameObject__SetActive(v56, 1, 0LL);
                EventInfoFortificationViewItem__Setup((EventInfoFortificationViewItem_o *)v53, v54, v57);
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                }
                Master_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
                if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                }
                UserId = NetworkManager__get_UserId(0LL);
                if ( !Master_WarQuestSelectionMaster )
                  break;
                if ( UserEventFortificationMaster__TryGetEntity(
                       Master_WarQuestSelectionMaster,
                       &v65,
                       UserId,
                       v54->fields.eventId,
                       v54->fields.idx,
                       0LL) )
                {
                  if ( !v65 )
                    break;
                  monitor = (UIBasicSprite_o *)v53[1].monitor;
                  if ( !monitor )
                    break;
                  v61 = (float)v65->fields.totalFortificationPoint / (float)v54->fields.maxFortificationPoint;
                }
                else
                {
                  monitor = (UIBasicSprite_o *)v53[1].monitor;
                  if ( !monitor )
                    break;
                  v61 = 0.0;
                }
                UIBasicSprite__set_fillAmount(monitor, v61, 0LL);
              }
            }
            v49 = this->fields.fortificationViewItemList;
            ++v51;
          }
          while ( v49 );
        }
      }
    }
LABEL_65:
    sub_B170D4();
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

  if ( (byte_40FA11A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventFortificationMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&int_TypeInfo, v4);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_5635, v6);
    byte_40FA11A = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
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
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5635, 0LL);
  v14 = TotalFortificationRewardNum;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v13 = System_String__Format(v11, v12, 0LL);
  if ( !totalRewardNumLabel )
    sub_B170D4();
  UILabel__set_text(totalRewardNumLabel, v13, 0LL);
}


void __fastcall EventInfoFortificationControl___Initialization_b__13_0(
        EventInfoFortificationControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8
  struct UISprite_o *bgSprite; // x0

  if ( (byte_40FA11E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18471, method);
    byte_40FA11E = 1;
  }
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity
    || (EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL),
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          this->fields.bgSprite,
          (System_String_o *)StringLiteral_18471,
          0LL),
        (bgSprite = this->fields.bgSprite) == 0LL) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))bgSprite->klass->vtable._33_MakePixelPerfect.method)(
    bgSprite,
    bgSprite->klass->vtable._34_get_minWidth.methodPtr);
}


int32_t __fastcall EventInfoFortificationControl___SetupFortificationItem_b__17_0(
        EventInfoFortificationControl_o *this,
        EventFortificationEntity_o *entity,
        const MethodInfo *method)
{
  if ( (byte_40FA11F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, entity);
    byte_40FA11F = 1;
  }
  if ( !entity )
    sub_B170D4();
  return System_Array__IndexOf_int_(
           this->fields.workTypeOrder,
           entity->fields.workType,
           (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___);
}


void __fastcall EventInfoFortificationControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F6FD0 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoFortificationControl___c_TypeInfo, v1);
    byte_40F6FD0 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventInfoFortificationControl___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventInfoFortificationControl___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return entity->fields.idx;
}