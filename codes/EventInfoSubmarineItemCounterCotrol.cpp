void __fastcall EventInfoSubmarineItemCounterCotrol___ctor(
        EventInfoSubmarineItemCounterCotrol_o *this,
        const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


UnityEngine_GameObject_o *__fastcall EventInfoSubmarineItemCounterCotrol__CreateItemObject(
        EventInfoSubmarineItemCounterCotrol_o *this,
        EventUiValueEntity_o *ent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct UnityEngine_GameObject_o *baseItemPrefab; // x21
  UnityEngine_Object_o *v9; // x21
  UnityEngine_Object_o *v10; // x0
  System_String_o *name; // x0
  System_String_o *v12; // x0

  if ( (byte_40FA187 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, ent);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_585, v6);
    sub_B16FFC(&StringLiteral_651, v7);
    byte_40FA187 = 1;
  }
  baseItemPrefab = this->fields.baseItemPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                 (UnityEngine_UI_Dropdown_DropdownItem_o *)baseItemPrefab,
                                 (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
  {
    v10 = (UnityEngine_Object_o *)this->fields.baseItemPrefab;
    if ( !v10
      || (name = UnityEngine_Object__get_name(v10, 0LL), !ent)
      || (v12 = System_String__Concat_43747144(
                  name,
                  (System_String_o *)StringLiteral_585,
                  ent->fields.value,
                  (System_String_o *)StringLiteral_651,
                  0LL),
          !v9) )
    {
      sub_B170D4();
    }
    UnityEngine_Object__set_name(v9, v12, 0LL);
    GameObjectExtensions__SafeSetParent_27425996((UnityEngine_GameObject_o *)v9, this->fields.rootObject, 0LL);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v9, 1, 0LL);
  }
  return (UnityEngine_GameObject_o *)v9;
}


// local variable allocation has failed, the output may be wrong!
EventInfoSubmarineItemCounterCotrol_ItemData_o *__fastcall EventInfoSubmarineItemCounterCotrol__GetItemData(
        EventInfoSubmarineItemCounterCotrol_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *itemDataList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x20

  if ( (byte_40FA188 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterCotrol_ItemData__Find__,
      *(_QWORD *)&itemId);
    sub_B16FFC(&Method_System_Predicate_EventInfoSubmarineItemCounterCotrol_ItemData___ctor__, v7);
    sub_B16FFC(&System_Predicate_EventInfoSubmarineItemCounterCotrol_ItemData__TypeInfo, v8);
    sub_B16FFC(&Method_EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0__GetItemData_b__0__, v9);
    sub_B16FFC(&EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_TypeInfo, v10);
    byte_40FA188 = 1;
  }
  v11 = (EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_o *)sub_B170CC(
                                                                         EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_TypeInfo,
                                                                         *(_QWORD *)&itemId,
                                                                         method,
                                                                         v3,
                                                                         v4);
  EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0___ctor(v11, 0LL);
  if ( !v11
    || (v11->fields.itemId = itemId,
        itemDataList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)this->fields.itemDataList,
        v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_EventInfoSubmarineItemCounterCotrol_ItemData__TypeInfo,
                                                                         v12,
                                                                         v13,
                                                                         v14,
                                                                         v15),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v17,
          (Il2CppObject *)v11,
          Method_EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0__GetItemData_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_EventInfoSubmarineItemCounterCotrol_ItemData___ctor__),
        !itemDataList) )
  {
    sub_B170D4();
  }
  return (EventInfoSubmarineItemCounterCotrol_ItemData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                             itemDataList,
                                                             (System_Predicate_T__o *)v17,
                                                             (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterCotrol_ItemData__Find__);
}


void __fastcall EventInfoSubmarineItemCounterCotrol__Initialization(
        EventInfoSubmarineItemCounterCotrol_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Action_o *v21; // x21

  if ( (byte_40FA184 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, entity);
    sub_B16FFC(&Method_EventInfoSubmarineItemCounterCotrol__Initialization_b__9_0__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__TypeInfo, v9);
    byte_40FA184 = 1;
  }
  if ( !entity )
    sub_B170D4();
  this->fields.eventId = entity->fields.eventId;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__TypeInfo,
                                                                                                  entity,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent___ctor__);
  this->fields.itemCompnentList = (struct System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__o *)v10;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemCompnentList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v17, v18, v19, v20);
  System_Action___ctor(
    v21,
    (Il2CppObject *)this,
    Method_EventInfoSubmarineItemCounterCotrol__Initialization_b__9_0__,
    0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, entity, v21, 0LL);
}


bool __fastcall EventInfoSubmarineItemCounterCotrol__IsMainInterlude(
        EventInfoSubmarineItemCounterCotrol_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FA189 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventDetailMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v4);
    byte_40FA189 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          this->fields.eventId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
LABEL_12:
    sub_B170D4();
  return EventDetailEntity__IsMainInterlude((EventDetailEntity_o *)entity, 0LL);
}


void __fastcall EventInfoSubmarineItemCounterCotrol__OnDestroy(
        EventInfoSubmarineItemCounterCotrol_o *this,
        const MethodInfo *method)
{
  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, this->fields.eventId, 0LL);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoSubmarineItemCounterCotrol__PlayAnim(
        EventInfoSubmarineItemCounterCotrol_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2
  System_Collections_IEnumerator_o *v7; // x1

  if ( EventInfoSubmarineItemCounterCotrol__IsMainInterlude(this, *(const MethodInfo **)&type) )
  {
    ActionExtensions__Call(callback, 0LL);
  }
  else
  {
    v7 = EventInfoSubmarineItemCounterCotrol__PlayCountAnim(this, callback, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall EventInfoSubmarineItemCounterCotrol__PlayCountAnim(
        EventInfoSubmarineItemCounterCotrol_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40FA186 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_TypeInfo, callback);
    byte_40FA186 = 1;
  }
  v7 = sub_B170CC(EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_TypeInfo, callback, method, v3, v4);
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12___ctor(
    (EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall EventInfoSubmarineItemCounterCotrol__Setup(
        EventInfoSubmarineItemCounterCotrol_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
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
  UnityEngine_Object_o *baseItemPrefab; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  EventInfoSubmarineItemCounterCotrol___c_c *v21; // x0
  struct EventInfoSubmarineItemCounterCotrol___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__10_0; // x21
  Il2CppObject *v24; // x22
  struct EventInfoSubmarineItemCounterCotrol___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v33; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x2
  int max_length; // w8
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v37; // x20
  unsigned int v38; // w25
  EventUiValueEntity_o *v39; // x21
  UnityEngine_Object_o *ItemObject; // x23
  int32_t v41; // w0
  const MethodInfo *v42; // x2
  EventInfoSubmarineItemCounterCotrol_ItemData_o *ItemData; // x0
  EventInfoSubmarineItemCounterCotrol_ItemData_o *v44; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x23
  const MethodInfo *v46; // x3
  struct System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__o *itemCompnentList; // x0
  UILabel_o *titleLabel; // x19
  System_String_o *v49; // x0

  if ( (byte_40FA185 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___, entitys);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___, v5);
    sub_B16FFC(&Method_System_Func_EventUiValueEntity__int___ctor__, v6);
    sub_B16FFC(&System_Func_EventUiValueEntity__int__TypeInfo, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventInfoSubmarineItemCounterComponent___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__Add__, v9);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&Method_EventInfoSubmarineItemCounterCotrol___c__Setup_b__10_0__, v12);
    sub_B16FFC(&EventInfoSubmarineItemCounterCotrol___c_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_5708, v14);
    sub_B16FFC(&StringLiteral_18457, v15);
    byte_40FA185 = 1;
  }
  if ( entitys )
  {
    baseItemPrefab = (UnityEngine_Object_o *)this->fields.baseItemPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(baseItemPrefab, 0LL, 0LL) )
    {
      EventInfoUIBase__SetSpriteByLocalAtlas(
        (EventInfoUIBase_o *)this,
        this->fields.bgSprite,
        (System_String_o *)StringLiteral_18457,
        0LL);
      if ( *(_QWORD *)&entitys->max_length )
      {
        v21 = EventInfoSubmarineItemCounterCotrol___c_TypeInfo;
        if ( (BYTE3(EventInfoSubmarineItemCounterCotrol___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventInfoSubmarineItemCounterCotrol___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoSubmarineItemCounterCotrol___c_TypeInfo);
          v21 = EventInfoSubmarineItemCounterCotrol___c_TypeInfo;
        }
        static_fields = v21->static_fields;
        _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__10_0;
        if ( !_9__10_0 )
        {
          if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v21);
            static_fields = EventInfoSubmarineItemCounterCotrol___c_TypeInfo->static_fields;
          }
          v24 = (Il2CppObject *)static_fields->__9;
          _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                       System_Func_EventUiValueEntity__int__TypeInfo,
                                                                                       v17,
                                                                                       v18,
                                                                                       v19,
                                                                                       v20);
          System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
            _9__10_0,
            v24,
            Method_EventInfoSubmarineItemCounterCotrol___c__Setup_b__10_0__,
            (const MethodInfo_2B6B6EC *)Method_System_Func_EventUiValueEntity__int___ctor__);
          v25 = EventInfoSubmarineItemCounterCotrol___c_TypeInfo->static_fields;
          v25->__9__10_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__10_0;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v25->__9__10_0,
            (System_Int32_array **)_9__10_0,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31);
        }
        v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                                                                     (System_Func_TSource__TKey__o *)_9__10_0,
                                                                     (const MethodInfo_19BDA8C *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
        v33 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                v32,
                (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
        if ( !v33 )
          goto LABEL_43;
        max_length = v33->max_length;
        v37 = v33;
        if ( max_length >= 1 )
        {
          v38 = 0;
          while ( 1 )
          {
            if ( v38 >= max_length )
            {
              sub_B17100(v33, v34, v35);
              sub_B170A0();
            }
            v39 = (EventUiValueEntity_o *)v37->m_Items[v38];
            if ( !v39 )
              break;
            if ( v39->fields.type == 1 )
            {
              ItemObject = (UnityEngine_Object_o *)EventInfoSubmarineItemCounterCotrol__CreateItemObject(this, v39, v35);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              v33 = (DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *)UnityEngine_Object__op_Equality(
                                                                                ItemObject,
                                                                                0LL,
                                                                                0LL);
              if ( ((unsigned __int8)v33 & 1) == 0 )
              {
                v41 = System_Int32__Parse(v39->fields.value, 0LL);
                ItemData = EventInfoSubmarineItemCounterCotrol__GetItemData(this, v41, v42);
                if ( !ItemData )
                  break;
                v44 = ItemData;
                GameObjectExtensions__SetLocalPosition_27419860(
                  (UnityEngine_GameObject_o *)ItemObject,
                  ItemData->fields.Position,
                  0LL);
                if ( !ItemObject )
                  break;
                Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    (UnityEngine_GameObject_o *)ItemObject,
                                                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventInfoSubmarineItemCounterComponent___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                v33 = (DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *)UnityEngine_Object__op_Equality(
                                                                                  Component_srcLineSprite,
                                                                                  0LL,
                                                                                  0LL);
                if ( ((unsigned __int8)v33 & 1) == 0 )
                {
                  if ( !Component_srcLineSprite )
                    break;
                  EventInfoSubmarineItemCounterComponent__Setup(
                    (EventInfoSubmarineItemCounterComponent_o *)Component_srcLineSprite,
                    v39,
                    v44,
                    v46);
                  itemCompnentList = this->fields.itemCompnentList;
                  if ( !itemCompnentList )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemCompnentList,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__Add__);
                }
              }
            }
            max_length = v37->max_length;
            if ( (int)++v38 >= max_length )
              goto LABEL_37;
          }
LABEL_43:
          sub_B170D4();
        }
LABEL_37:
        titleLabel = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v49 = LocalizationManager__Get((System_String_o *)StringLiteral_5708, 0LL);
        if ( !titleLabel )
          goto LABEL_43;
        UILabel__set_text(titleLabel, v49, 0LL);
      }
    }
  }
}


void __fastcall EventInfoSubmarineItemCounterCotrol__UpdateAllCount(
        EventInfoSubmarineItemCounterCotrol_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(EventInfoSubmarineItemCounterCotrol_o *, _QWORD, _QWORD, Il2CppMethodPointer))this->klass->vtable._8_PlayAnim.method)(
    this,
    0LL,
    0LL,
    this->klass->vtable._9_ReleaseAsset.methodPtr);
}


void __fastcall EventInfoSubmarineItemCounterCotrol___Initialization_b__9_0(
        EventInfoSubmarineItemCounterCotrol_o *this,
        const MethodInfo *method)
{
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, this->fields.eventId, 0LL);
}


void __fastcall EventInfoSubmarineItemCounterCotrol_ItemData___ctor(
        EventInfoSubmarineItemCounterCotrol_ItemData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12___ctor(
        EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12__MoveNext(
        EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  bool result; // w0
  struct EventInfoSubmarineItemCounterCotrol_o *_4__this; // x21
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *itemCompnentList; // x0
  struct System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__o *p__7__wrap1; // x20
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v12; // x0
  __int128 v13; // q0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x1
  EventInfoSubmarineItemCounterComponent_o *current; // x0
  Il2CppObject *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+20h] [xbp-80h] BYREF
  int v30; // [xsp+38h] [xbp-68h]
  int v31; // [xsp+48h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+50h] [xbp-50h] BYREF

  if ( (byte_40F6FE0 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__,
      method);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__MoveNext__,
      v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__get_Current__,
      v4);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__GetEnumerator__, v6);
    byte_40F6FE0 = 1;
  }
  memset(&i, 0, sizeof(i));
  v31 = 0;
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    p__7__wrap1 = &this->fields.__7__wrap1;
  }
  else
  {
    result = 0;
    if ( _1__state )
      return result;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_B170D4();
    itemCompnentList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.itemCompnentList;
    if ( !itemCompnentList )
      sub_B170D4();
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v29,
      itemCompnentList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__GetEnumerator__);
    for ( i = v29;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__MoveNext__);
          EventInfoSubmarineItemCounterComponent__PlayAnimation(
            (EventInfoSubmarineItemCounterComponent_o *)i.fields.current,
            0LL) )
    {
      if ( !i.fields.current )
        sub_B170D4();
    }
    v30 = 89;
    v31 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__);
    if ( v30 == 89 )
      v31 = 0;
    v12 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.itemCompnentList;
    if ( !v12 )
      sub_B170D4();
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v29,
      v12,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__GetEnumerator__);
    p__7__wrap1 = &this->fields.__7__wrap1;
    v13 = *(_OWORD *)&v29.fields.list;
    this->fields.__7__wrap1.fields.current = (struct EventInfoSubmarineItemCounterComponent_o *)v29.fields.current;
    *(_OWORD *)&this->fields.__7__wrap1.fields.list = v13;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.__7__wrap1, 0LL, v14, v15, v16, v17, v18, v19);
  }
  this->fields.__1__state = -3;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap1,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__MoveNext__) )
  {
    current = this->fields.__7__wrap1.fields.current;
    if ( !current )
      sub_B170D4();
    if ( !EventInfoSubmarineItemCounterComponent__get_IsAnimFinished(current, 0LL) )
    {
      LODWORD(v29.fields.list) = 0;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
      this->fields.__2__current = v22;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__2__current,
        (System_Int32_array **)v22,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      result = 1;
      this->fields.__1__state = 1;
      return result;
    }
  }
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12____m__Finally1(this, v20);
  *(_QWORD *)&p__7__wrap1->fields.index = 0LL;
  p__7__wrap1->fields.current = 0LL;
  p__7__wrap1->fields.list = 0LL;
  ActionExtensions__Call(this->fields.callback, 0LL);
  return 0;
}


Il2CppObject *__fastcall EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12__System_Collections_IEnumerator_Reset(
        EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(
    &Method_EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_System_Collections_IEnumerator_Reset__,
    v8);
  sub_B170A0();
}


Il2CppObject *__fastcall EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12__System_Collections_IEnumerator_get_Current(
        EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12__System_IDisposable_Dispose(
        EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12____m__Finally1(this, method);
}


void __fastcall EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12____m__Finally1(
        EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F6FE1 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__,
      method);
    byte_40F6FE1 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap1,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__);
}


void __fastcall EventInfoSubmarineItemCounterCotrol___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F6FDF & 1) == 0 )
  {
    sub_B16FFC(&EventInfoSubmarineItemCounterCotrol___c_TypeInfo, v1);
    byte_40F6FDF = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventInfoSubmarineItemCounterCotrol___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventInfoSubmarineItemCounterCotrol___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall EventInfoSubmarineItemCounterCotrol___c___ctor(
        EventInfoSubmarineItemCounterCotrol___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventInfoSubmarineItemCounterCotrol___c___Setup_b__10_0(
        EventInfoSubmarineItemCounterCotrol___c_o *this,
        EventUiValueEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B170D4();
  return ent->fields.priority;
}


void __fastcall EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0___ctor(
        EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0___GetItemData_b__0(
        EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_o *this,
        EventInfoSubmarineItemCounterCotrol_ItemData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.ItemId == this->fields.itemId;
}