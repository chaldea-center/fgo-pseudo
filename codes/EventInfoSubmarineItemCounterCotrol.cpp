// attributes: thunk
void __fastcall EventInfoSubmarineItemCounterCotrol___ctor(
        EventInfoSubmarineItemCounterCotrol_o *this,
        const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, method);
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
  UnityEngine_Object_o *name; // x0

  if ( (byte_421595B & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, ent);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_591/*"("*/, v6);
    sub_B0D8A4(&StringLiteral_658/*")"*/, v7);
    byte_421595B = 1;
  }
  baseItemPrefab = this->fields.baseItemPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                 (UnityEngine_UI_Dropdown_DropdownItem_o *)baseItemPrefab,
                                 (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
  {
    name = (UnityEngine_Object_o *)this->fields.baseItemPrefab;
    if ( !name
      || (name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL), !ent)
      || (name = (UnityEngine_Object_o *)System_String__Concat_43853316(
                                           (System_String_o *)name,
                                           (System_String_o *)StringLiteral_591/*"("*/,
                                           ent->fields.value,
                                           (System_String_o *)StringLiteral_658/*")"*/,
                                           0LL),
          !v9) )
    {
      sub_B0D97C(name);
    }
    UnityEngine_Object__set_name(v9, (System_String_o *)name, 0LL);
    GameObjectExtensions__SafeSetParent_31184716((UnityEngine_GameObject_o *)v9, this->fields.rootObject, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *itemDataList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v14; // x20

  if ( (byte_421595C & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterCotrol_ItemData__Find__,
      *(_QWORD *)&itemId);
    sub_B0D8A4(&Method_System_Predicate_EventInfoSubmarineItemCounterCotrol_ItemData___ctor__, v5);
    sub_B0D8A4(&System_Predicate_EventInfoSubmarineItemCounterCotrol_ItemData__TypeInfo, v6);
    sub_B0D8A4(&Method_EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0__GetItemData_b__0__, v7);
    sub_B0D8A4(&EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_TypeInfo, v8);
    byte_421595C = 1;
  }
  v9 = (EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_o *)sub_B0D974(
                                                                        EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_TypeInfo,
                                                                        *(_QWORD *)&itemId,
                                                                        method);
  EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.itemId = itemId,
        itemDataList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)this->fields.itemDataList,
        v14 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_EventInfoSubmarineItemCounterCotrol_ItemData__TypeInfo,
                                                                         v11,
                                                                         v12),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v14,
          (Il2CppObject *)v9,
          Method_EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0__GetItemData_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_EventInfoSubmarineItemCounterCotrol_ItemData___ctor__),
        !itemDataList) )
  {
    sub_B0D97C(v10);
  }
  return (EventInfoSubmarineItemCounterCotrol_ItemData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                             itemDataList,
                                                             (System_Predicate_T__o *)v14,
                                                             (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterCotrol_ItemData__Find__);
}


void __fastcall EventInfoSubmarineItemCounterCotrol__Initialization(
        EventInfoSubmarineItemCounterCotrol_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  EventInfoSubmarineItemCounterCotrol_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_o *v17; // x21
  const MethodInfo *v18; // x3

  v4 = this;
  if ( (byte_4215958 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, entity);
    sub_B0D8A4(&Method_EventInfoSubmarineItemCounterCotrol__Initialization_b__9_0__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent___ctor__, v6);
    this = (EventInfoSubmarineItemCounterCotrol_o *)sub_B0D8A4(
                                                      &System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__TypeInfo,
                                                      v7);
    byte_4215958 = 1;
  }
  if ( !entity )
    sub_B0D97C(this);
  v4->fields.eventId = entity->fields.eventId;
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__TypeInfo,
                                                                                                 entity,
                                                                                                 method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent___ctor__);
  v4->fields.itemCompnentList = (struct System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__o *)v8;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v4->fields.itemCompnentList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v15, v16);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v4,
    Method_EventInfoSubmarineItemCounterCotrol__Initialization_b__9_0__,
    0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)v4, entity, v17, v18);
}


bool __fastcall EventInfoSubmarineItemCounterCotrol__IsMainInterlude(
        EventInfoSubmarineItemCounterCotrol_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_421595D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventDetailMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v4);
    byte_421595D = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          this->fields.eventId,
          (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)entity;
  if ( !entity )
LABEL_12:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  return EventDetailEntity__IsMainInterlude((EventDetailEntity_o *)entity, 0LL);
}


void __fastcall EventInfoSubmarineItemCounterCotrol__OnDestroy(
        EventInfoSubmarineItemCounterCotrol_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1

  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, this->fields.eventId, v2);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, v4);
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
    UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall EventInfoSubmarineItemCounterCotrol__PlayCountAnim(
        EventInfoSubmarineItemCounterCotrol_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_421595A & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_TypeInfo, callback);
    byte_421595A = 1;
  }
  v5 = sub_B0D974(EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_TypeInfo, callback, method);
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12___ctor(
    (EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v5 + 40) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)callback, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v5;
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
  const MethodInfo *v17; // x3
  __int64 v18; // x1
  __int64 v19; // x2
  EventInfoSubmarineItemCounterCotrol___c_c *v20; // x0
  struct EventInfoSubmarineItemCounterCotrol___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__10_0; // x21
  Il2CppObject *v23; // x22
  struct EventInfoSubmarineItemCounterCotrol___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  void *ItemData; // x0
  const MethodInfo *v33; // x2
  int v34; // w8
  void *v35; // x20
  unsigned int v36; // w25
  EventUiValueEntity_o *v37; // x21
  UnityEngine_Object_o *ItemObject; // x23
  int32_t v39; // w0
  const MethodInfo *v40; // x2
  EventInfoSubmarineItemCounterCotrol_ItemData_o *v41; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x23
  const MethodInfo *v43; // x3
  UILabel_o *titleLabel; // x19
  __int64 v45; // x0

  if ( (byte_4215959 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___, entitys);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___, v5);
    sub_B0D8A4(&Method_System_Func_EventUiValueEntity__int___ctor__, v6);
    sub_B0D8A4(&System_Func_EventUiValueEntity__int__TypeInfo, v7);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_EventInfoSubmarineItemCounterComponent___, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__Add__, v9);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&Method_EventInfoSubmarineItemCounterCotrol___c__Setup_b__10_0__, v12);
    sub_B0D8A4(&EventInfoSubmarineItemCounterCotrol___c_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_5742/*"EVENT_SUBMARINE_RESOURCE_TITLE"*/, v14);
    sub_B0D8A4(&StringLiteral_18585/*"event_itembase"*/, v15);
    byte_4215959 = 1;
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
        (System_String_o *)StringLiteral_18585/*"event_itembase"*/,
        v17);
      if ( *(_QWORD *)&entitys->max_length )
      {
        v20 = EventInfoSubmarineItemCounterCotrol___c_TypeInfo;
        if ( (BYTE3(EventInfoSubmarineItemCounterCotrol___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventInfoSubmarineItemCounterCotrol___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoSubmarineItemCounterCotrol___c_TypeInfo);
          v20 = EventInfoSubmarineItemCounterCotrol___c_TypeInfo;
        }
        static_fields = v20->static_fields;
        _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__10_0;
        if ( !_9__10_0 )
        {
          if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v20);
            static_fields = EventInfoSubmarineItemCounterCotrol___c_TypeInfo->static_fields;
          }
          v23 = (Il2CppObject *)static_fields->__9;
          _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                       System_Func_EventUiValueEntity__int__TypeInfo,
                                                                                       v18,
                                                                                       v19);
          System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
            _9__10_0,
            v23,
            Method_EventInfoSubmarineItemCounterCotrol___c__Setup_b__10_0__,
            (const MethodInfo_2619564 *)Method_System_Func_EventUiValueEntity__int___ctor__);
          v24 = EventInfoSubmarineItemCounterCotrol___c_TypeInfo->static_fields;
          v24->__9__10_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__10_0;
          sub_B0D840(
            (BattleServantConfConponent_o *)&v24->__9__10_0,
            (System_Int32_array **)_9__10_0,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30);
        }
        v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                                                                     (System_Func_TSource__TKey__o *)_9__10_0,
                                                                     (const MethodInfo_1B4ECD0 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
        ItemData = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                     v31,
                     (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
        if ( !ItemData )
          goto LABEL_43;
        v34 = *((_DWORD *)ItemData + 6);
        v35 = ItemData;
        if ( v34 >= 1 )
        {
          v36 = 0;
          while ( 1 )
          {
            if ( v36 >= v34 )
            {
              v45 = sub_B0D9A8(ItemData);
              sub_B0D948(v45, 0LL);
            }
            v37 = (EventUiValueEntity_o *)*((_QWORD *)v35 + (int)v36 + 4);
            if ( !v37 )
              break;
            if ( v37->fields.type == 1 )
            {
              ItemObject = (UnityEngine_Object_o *)EventInfoSubmarineItemCounterCotrol__CreateItemObject(this, v37, v33);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              ItemData = (void *)UnityEngine_Object__op_Equality(ItemObject, 0LL, 0LL);
              if ( ((unsigned __int8)ItemData & 1) == 0 )
              {
                v39 = System_Int32__Parse(v37->fields.value, 0LL);
                ItemData = EventInfoSubmarineItemCounterCotrol__GetItemData(this, v39, v40);
                if ( !ItemData )
                  break;
                v41 = (EventInfoSubmarineItemCounterCotrol_ItemData_o *)ItemData;
                GameObjectExtensions__SetLocalPosition_31178580(
                  (UnityEngine_GameObject_o *)ItemObject,
                  *(UnityEngine_Vector2_o *)((char *)ItemData + 20),
                  0LL);
                if ( !ItemObject )
                  break;
                Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    (UnityEngine_GameObject_o *)ItemObject,
                                                                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_EventInfoSubmarineItemCounterComponent___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                ItemData = (void *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
                if ( ((unsigned __int8)ItemData & 1) == 0 )
                {
                  if ( !Component_srcLineSprite )
                    break;
                  EventInfoSubmarineItemCounterComponent__Setup(
                    (EventInfoSubmarineItemCounterComponent_o *)Component_srcLineSprite,
                    v37,
                    v41,
                    v43);
                  ItemData = this->fields.itemCompnentList;
                  if ( !ItemData )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)ItemData,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__Add__);
                }
              }
            }
            v34 = *((_DWORD *)v35 + 6);
            if ( (int)++v36 >= v34 )
              goto LABEL_37;
          }
LABEL_43:
          sub_B0D97C(ItemData);
        }
LABEL_37:
        titleLabel = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        ItemData = LocalizationManager__Get((System_String_o *)StringLiteral_5742/*"EVENT_SUBMARINE_RESOURCE_TITLE"*/, 0LL);
        if ( !titleLabel )
          goto LABEL_43;
        UILabel__set_text(titleLabel, (System_String_o *)ItemData, 0LL);
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
  const MethodInfo *v2; // x2

  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, this->fields.eventId, v2);
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
  const MethodInfo *v14; // x1
  EventInfoSubmarineItemCounterComponent_o *current; // x0
  Il2CppObject *v16; // x0
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+20h] [xbp-80h] BYREF
  int v18; // [xsp+38h] [xbp-68h]
  int v19; // [xsp+48h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+50h] [xbp-50h] BYREF

  if ( (byte_4211B78 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__,
      method);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__MoveNext__,
      v3);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__get_Current__,
      v4);
    sub_B0D8A4(&int_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__GetEnumerator__, v6);
    byte_4211B78 = 1;
  }
  memset(&i, 0, sizeof(i));
  v19 = 0;
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
      sub_B0D97C(0LL);
    itemCompnentList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.itemCompnentList;
    if ( !itemCompnentList )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v17,
      itemCompnentList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__GetEnumerator__);
    for ( i = v17;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__MoveNext__);
          EventInfoSubmarineItemCounterComponent__PlayAnimation(
            (EventInfoSubmarineItemCounterComponent_o *)i.fields.current,
            0LL) )
    {
      if ( !i.fields.current )
        sub_B0D97C(0LL);
    }
    v18 = 89;
    v19 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__);
    if ( v18 == 89 )
      v19 = 0;
    v12 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.itemCompnentList;
    if ( !v12 )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v17,
      v12,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__GetEnumerator__);
    p__7__wrap1 = &this->fields.__7__wrap1;
    v13 = *(_OWORD *)&v17.fields.list;
    this->fields.__7__wrap1.fields.current = (struct EventInfoSubmarineItemCounterComponent_o *)v17.fields.current;
    *(_OWORD *)&this->fields.__7__wrap1.fields.list = v13;
    sub_B0D840(&this->fields.__7__wrap1, 0LL);
  }
  this->fields.__1__state = -3;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap1,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__MoveNext__) )
  {
    current = this->fields.__7__wrap1.fields.current;
    if ( !current )
      sub_B0D97C(0LL);
    if ( !EventInfoSubmarineItemCounterComponent__get_IsAnimFinished(current, 0LL) )
    {
      LODWORD(v17.fields.list) = 0;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
      this->fields.__2__current = v16;
      sub_B0D840(&this->fields.__2__current, v16);
      result = 1;
      this->fields.__1__state = 1;
      return result;
    }
  }
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12____m__Finally1(this, v14);
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  if ( (byte_4211B79 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__,
      method);
    byte_4211B79 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap1,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__);
}


void __fastcall EventInfoSubmarineItemCounterCotrol___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventInfoSubmarineItemCounterCotrol___c_StaticFields *static_fields; // x0

  if ( (byte_4211B77 & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoSubmarineItemCounterCotrol___c_TypeInfo, v1);
    byte_4211B77 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventInfoSubmarineItemCounterCotrol___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventInfoSubmarineItemCounterCotrol___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoSubmarineItemCounterCotrol___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return x->fields.ItemId == this->fields.itemId;
}