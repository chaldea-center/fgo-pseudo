void __fastcall EventInfoFortificationControl___ctor(EventInfoFortificationControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Array_o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_RuntimeFieldHandle_o v28; // 0:w1.4

  if ( (byte_42E94D2 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_EventInfoFortificationViewItem__TypeInfo, v8, v9, v10);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1,
      v11,
      v12,
      v13);
    byte_42E94D2 = 1;
  }
  v14 = (System_Array_o *)sub_B5D5DC(int___TypeInfo, 3LL);
  v28.fields.value = Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v14, v28, 0LL);
  this->fields.workTypeOrder = (struct System_Int32_array *)v14;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.workTypeOrder,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventInfoFortificationViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventInfoFortificationViewItem___ctor__);
  this->fields.fortificationViewItemList = (struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *)v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.fortificationViewItemList,
    (System_Int32_array **)v21,
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


void __fastcall EventInfoFortificationControl__CreateFortificationViewItem(
        EventInfoFortificationControl_o *this,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int32_t v21; // w23
  UnityEngine_Transform_o *fortificationViewItemParent; // x21
  struct EventInfoFortificationViewItem_o *fortificationViewItemPrefab; // x22
  UILabel_o *v24; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *fortificationViewItemList; // x0
  __int64 v26; // x1

  if ( (byte_42E94D0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Add__, count, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_EventInfoFortificationViewItem___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_22526/*"spot_info_gauge_base_color"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_22528/*"spot_info_gauge_s"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_22525/*"spot_info_gauge_base"*/, v18, v19, v20);
    byte_42E94D0 = 1;
  }
  if ( count >= 1 )
  {
    v21 = 0;
    do
    {
      fortificationViewItemParent = this->fields.fortificationViewItemParent;
      fortificationViewItemPrefab = this->fields.fortificationViewItemPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v24 = UnityEngine_Object__Instantiate_UILabel_(
              (UILabel_o *)fortificationViewItemPrefab,
              fortificationViewItemParent,
              (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_EventInfoFortificationViewItem___);
      fortificationViewItemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0LL, 0LL);
      if ( ((unsigned __int8)fortificationViewItemList & 1) != 0 )
      {
        if ( !v24 )
          goto LABEL_16;
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          (UISprite_o *)v24->fields.leftAnchor,
          (System_String_o *)StringLiteral_22525/*"spot_info_gauge_base"*/,
          0LL);
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          (UISprite_o *)v24->fields.rightAnchor,
          (System_String_o *)StringLiteral_22528/*"spot_info_gauge_s"*/,
          0LL);
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          (UISprite_o *)v24->fields.bottomAnchor,
          (System_String_o *)StringLiteral_22526/*"spot_info_gauge_base_color"*/,
          0LL);
        fortificationViewItemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.fortificationViewItemList;
        if ( !fortificationViewItemList )
          goto LABEL_16;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          fortificationViewItemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Add__);
      }
      ++v21;
    }
    while ( v21 < count );
    fortificationViewItemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemGrid;
    if ( !fortificationViewItemList )
LABEL_16:
      sub_B5D69C(fortificationViewItemList, v26);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *fortificationViewItemList; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  EventUiEntity_o *eventUiEntity; // x20
  System_Action_o *v20; // x21

  if ( (byte_42E94CD & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_EventInfoFortificationControl__Initialization_b__13_0__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Clear__, v9, v10, v11);
    byte_42E94CD = 1;
  }
  fortificationViewItemList = this->fields.fortificationViewItemList;
  if ( !fortificationViewItemList )
    sub_B5D69C(0LL, entity);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)fortificationViewItemList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_EventInfoFortificationViewItem__Clear__);
  this->fields.eventUiEntity = entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
    (System_Int32_array **)entity,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  eventUiEntity = this->fields.eventUiEntity;
  v20 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_EventInfoFortificationControl__Initialization_b__13_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v20, 0LL);
}


bool __fastcall EventInfoFortificationControl__IsFortificationEvent(int32_t eventId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  EventFortificationMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1

  if ( (byte_42E94D1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventFortificationMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42E94D1 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v9);
  return EventFortificationMaster__IsFortificationEvent(Master_WarQuestSelectionMaster, eventId, 0LL);
}


void __fastcall EventInfoFortificationControl__OnDestroy(
        EventInfoFortificationControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int64_t Instance; // x0
  __int64 v57; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  const MethodInfo *v59; // x2
  struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *fortificationViewItemList; // x9
  System_Collections_Generic_List_EventFortificationEntity__o *v61; // x20
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v62; // x21
  System_Linq_IOrderedEnumerable_TSource__o *v63; // x20
  EventInfoFortificationControl___c_c *v64; // x8
  struct EventInfoFortificationControl___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__17_1; // x21
  Il2CppObject *v67; // x22
  struct EventInfoFortificationControl___c_StaticFields *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x0
  struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *v76; // x21
  int64_t v77; // x20
  __int64 v78; // x24
  unsigned __int64 v79; // x22
  UnityEngine_Object_o *v80; // x21
  EventFortificationEntity_o *v81; // x22
  const MethodInfo *v82; // x2
  UserEventFortificationMaster_o *Master_WarQuestSelectionMaster; // x23
  float v84; // s0
  struct System_Collections_Generic_List_EventInfoFortificationViewItem__o *v85; // x21
  UserEventFortificationEntity_o *v86; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E94CE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventFortificationMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventFortificationMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderBy_EventFortificationEntity__int___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ThenBy_EventFortificationEntity__int___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_EventFortificationEntity___, v17, v18, v19);
    sub_B5D5C4(&Method_EventInfoFortificationControl__SetupFortificationItem_b__17_0__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Func_EventFortificationEntity__int___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Func_EventFortificationEntity__int__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationEntity__get_Count__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Count__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoFortificationViewItem__get_Item__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationEntity__get_Item__, v38, v39, v40);
    sub_B5D5C4(&NetworkManager_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v47, v48, v49);
    sub_B5D5C4(&Method_EventInfoFortificationControl___c__SetupFortificationItem_b__17_1__, v50, v51, v52);
    sub_B5D5C4(&EventInfoFortificationControl___c_TypeInfo, v53, v54, v55);
    byte_42E94CE = 1;
  }
  v86 = 0LL;
  entities = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventFortificationMaster___);
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
          v59);
        v61 = entities;
        v62 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_EventFortificationEntity__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          v62,
          (Il2CppObject *)this,
          Method_EventInfoFortificationControl__SetupFortificationItem_b__17_0__,
          (const MethodInfo_2C2F87C *)Method_System_Func_EventFortificationEntity__int___ctor__);
        v63 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v61,
                (System_Func_TSource__TKey__o *)v62,
                (const MethodInfo_1CAF208 *)Method_System_Linq_Enumerable_OrderBy_EventFortificationEntity__int___);
        v64 = EventInfoFortificationControl___c_TypeInfo;
        if ( (BYTE3(EventInfoFortificationControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventInfoFortificationControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoFortificationControl___c_TypeInfo);
          v64 = EventInfoFortificationControl___c_TypeInfo;
        }
        static_fields = v64->static_fields;
        _9__17_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__17_1;
        if ( !_9__17_1 )
        {
          if ( (BYTE3(v64->vtable._0_Equals.methodPtr) & 4) != 0 && !v64->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v64);
            static_fields = EventInfoFortificationControl___c_TypeInfo->static_fields;
          }
          v67 = (Il2CppObject *)static_fields->__9;
          _9__17_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_EventFortificationEntity__int__TypeInfo);
          System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
            _9__17_1,
            v67,
            Method_EventInfoFortificationControl___c__SetupFortificationItem_b__17_1__,
            (const MethodInfo_2C2F87C *)Method_System_Func_EventFortificationEntity__int___ctor__);
          v68 = EventInfoFortificationControl___c_TypeInfo->static_fields;
          v68->__9__17_1 = (struct System_Func_EventFortificationEntity__int__o *)_9__17_1;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v68->__9__17_1,
            (System_Int32_array **)_9__17_1,
            v69,
            v70,
            v71,
            v72,
            v73,
            v74);
        }
        v75 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                                     v63,
                                                                     (System_Func_TSource__TKey__o *)_9__17_1,
                                                                     (const MethodInfo_1CB702C *)Method_System_Linq_Enumerable_ThenBy_EventFortificationEntity__int___);
        Instance = (int64_t)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                              v75,
                              (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_EventFortificationEntity___);
        v76 = this->fields.fortificationViewItemList;
        if ( v76 )
        {
          v77 = Instance;
          v78 = 4LL;
          do
          {
            v79 = v78 - 4;
            if ( v78 - 4 >= v76->fields._size )
              return;
            if ( !v77 )
              break;
            if ( v79 >= (unsigned int)v76->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v80 = (UnityEngine_Object_o *)*((_QWORD *)&v76->fields._items->obj.klass + v78);
            if ( (__int64)v79 >= *(int *)(v77 + 24) )
            {
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              Instance = UnityEngine_Object__op_Inequality(v80, 0LL, 0LL);
              if ( (Instance & 1) != 0 )
              {
                v85 = this->fields.fortificationViewItemList;
                if ( !v85 )
                  break;
                if ( v79 >= (unsigned int)v85->fields._size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                Instance = *((_QWORD *)&v85->fields._items->obj.klass + v78);
                if ( !Instance )
                  break;
                goto LABEL_59;
              }
            }
            else
            {
              if ( v79 >= *(unsigned int *)(v77 + 24) )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              v81 = *(EventFortificationEntity_o **)(*(_QWORD *)(v77 + 16) + 8 * v78);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              Instance = UnityEngine_Object__op_Equality(v80, 0LL, 0LL);
              if ( !v81 || (Instance & 1) != 0 )
              {
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                Instance = UnityEngine_Object__op_Inequality(v80, 0LL, 0LL);
                if ( (Instance & 1) != 0 )
                {
                  if ( !v80 )
                    break;
                  Instance = (int64_t)v80;
LABEL_59:
                  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                  if ( !Instance )
                    break;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                }
              }
              else
              {
                if ( !v80 )
                  break;
                Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v80, 0LL);
                if ( !Instance )
                  break;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                EventInfoFortificationViewItem__Setup((EventInfoFortificationViewItem_o *)v80, v81, v82);
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                }
                Master_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
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
                             &v86,
                             Instance,
                             v81->fields.eventId,
                             v81->fields.idx,
                             0LL);
                if ( (Instance & 1) != 0 )
                {
                  if ( !v86 )
                    break;
                  Instance = (int64_t)v80[1].monitor;
                  if ( !Instance )
                    break;
                  v84 = (float)v86->fields.totalFortificationPoint / (float)v81->fields.maxFortificationPoint;
                }
                else
                {
                  Instance = (int64_t)v80[1].monitor;
                  if ( !Instance )
                    break;
                  v84 = 0.0;
                }
                UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Instance, v84, 0LL);
              }
            }
            v76 = this->fields.fortificationViewItemList;
            ++v78;
          }
          while ( v76 );
        }
      }
    }
LABEL_65:
    sub_B5D69C(Instance, v57);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UserEventFortificationMaster_o *Master_WarQuestSelectionMaster; // x0
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t TotalFortificationRewardNum; // w20
  UILabel_o *totalRewardNumLabel; // x19
  System_String_o *v21; // x21
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  __int64 v24; // x1
  int32_t v25; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E94CF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventFortificationMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&int_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, v14, v15, v16);
    byte_42E94CF = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
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
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
  v25 = TotalFortificationRewardNum;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
  v23 = System_String__Format(v21, v22, 0LL);
  if ( !totalRewardNumLabel )
    sub_B5D69C(v23, v24);
  UILabel__set_text(totalRewardNumLabel, v23, 0LL);
}


void __fastcall EventInfoFortificationControl___Initialization_b__13_0(
        EventInfoFortificationControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventInfoFortificationControl_o *v4; // x19
  struct EventUiEntity_o *eventUiEntity; // x8

  v4 = this;
  if ( (byte_42E94D3 & 1) == 0 )
  {
    this = (EventInfoFortificationControl_o *)sub_B5D5C4(&StringLiteral_18771/*"event_progress_bg"*/, (_DWORD)method, v2, v3);
    byte_42E94D3 = 1;
  }
  eventUiEntity = v4->fields.eventUiEntity;
  if ( !eventUiEntity
    || (EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)v4, eventUiEntity->fields.eventId, 0LL),
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)v4,
          v4->fields.bgSprite,
          (System_String_o *)StringLiteral_18771/*"event_progress_bg"*/,
          0LL),
        (this = (EventInfoFortificationControl_o *)v4->fields.bgSprite) == 0LL) )
  {
    sub_B5D69C(this, method);
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
  __int64 v3; // x3
  EventInfoFortificationControl_o *v5; // x20

  v5 = this;
  if ( (byte_42E94D4 & 1) == 0 )
  {
    this = (EventInfoFortificationControl_o *)sub_B5D5C4(
                                                &Method_System_Array_IndexOf_int___,
                                                (_DWORD)entity,
                                                (_DWORD)method,
                                                v3);
    byte_42E94D4 = 1;
  }
  if ( !entity )
    sub_B5D69C(this, entity);
  return System_Array__IndexOf_int_(
           v5->fields.workTypeOrder,
           entity->fields.workType,
           (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___);
}


void __fastcall EventInfoFortificationControl___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventInfoFortificationControl___c_StaticFields *static_fields; // x0

  if ( (byte_42E6536 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoFortificationControl___c_TypeInfo, v1, v2, v3);
    byte_42E6536 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventInfoFortificationControl___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventInfoFortificationControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoFortificationControl___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return entity->fields.idx;
}