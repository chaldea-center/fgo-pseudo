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
  struct UnityEngine_GameObject_o *baseItemPrefab; // x21
  UnityEngine_Object_o *v6; // x21
  __int64 v7; // x1
  UnityEngine_Object_o *name; // x0

  if ( (byte_42B109E & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_593/*"("*/);
    sub_B52984(&StringLiteral_661/*")"*/);
    byte_42B109E = 1;
  }
  baseItemPrefab = this->fields.baseItemPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                 (UnityEngine_UI_Dropdown_DropdownItem_o *)baseItemPrefab,
                                 (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
  {
    name = (UnityEngine_Object_o *)this->fields.baseItemPrefab;
    if ( !name
      || (name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL), !ent)
      || (name = (UnityEngine_Object_o *)System_String__Concat_44571728(
                                           (System_String_o *)name,
                                           (System_String_o *)StringLiteral_593/*"("*/,
                                           ent->fields.value,
                                           (System_String_o *)StringLiteral_661/*")"*/,
                                           0LL),
          !v6) )
    {
      sub_B52A5C(name, v7);
    }
    UnityEngine_Object__set_name(v6, (System_String_o *)name, 0LL);
    GameObjectExtensions__SafeSetParent_32091088((UnityEngine_GameObject_o *)v6, this->fields.rootObject, 0LL);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v6, 1, 0LL);
  }
  return (UnityEngine_GameObject_o *)v6;
}


EventInfoSubmarineItemCounterCotrol_ItemData_o *__fastcall EventInfoSubmarineItemCounterCotrol__GetItemData(
        EventInfoSubmarineItemCounterCotrol_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *itemDataList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x20

  if ( (byte_42B109F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterCotrol_ItemData__Find__);
    sub_B52984(&Method_System_Predicate_EventInfoSubmarineItemCounterCotrol_ItemData___ctor__);
    sub_B52984(&System_Predicate_EventInfoSubmarineItemCounterCotrol_ItemData__TypeInfo);
    sub_B52984(&Method_EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0__GetItemData_b__0__);
    sub_B52984(&EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_TypeInfo);
    byte_42B109F = 1;
  }
  v5 = (EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_o *)sub_B52A54(EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_TypeInfo);
  EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.itemId = itemId,
        itemDataList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)this->fields.itemDataList,
        v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_EventInfoSubmarineItemCounterCotrol_ItemData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0__GetItemData_b__0__,
          (const MethodInfo_28D2DBC *)Method_System_Predicate_EventInfoSubmarineItemCounterCotrol_ItemData___ctor__),
        !itemDataList) )
  {
    sub_B52A5C(v6, v7);
  }
  return (EventInfoSubmarineItemCounterCotrol_ItemData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                             itemDataList,
                                                             (System_Predicate_T__o *)v9,
                                                             (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterCotrol_ItemData__Find__);
}


void __fastcall EventInfoSubmarineItemCounterCotrol__Initialization(
        EventInfoSubmarineItemCounterCotrol_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  EventInfoSubmarineItemCounterCotrol_o *v4; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x3

  v4 = this;
  if ( (byte_42B109B & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_EventInfoSubmarineItemCounterCotrol__Initialization_b__9_0__);
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent___ctor__);
    this = (EventInfoSubmarineItemCounterCotrol_o *)sub_B52984(&System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__TypeInfo);
    byte_42B109B = 1;
  }
  if ( !entity )
    sub_B52A5C(this, entity);
  v4->fields.eventId = entity->fields.eventId;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent___ctor__);
  v4->fields.itemCompnentList = (struct System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__o *)v5;
  sub_B52920(
    (BattleServantConfConponent_o *)&v4->fields.itemCompnentList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v4,
    Method_EventInfoSubmarineItemCounterCotrol__Initialization_b__9_0__,
    0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)v4, entity, v12, v13);
}


bool __fastcall EventInfoSubmarineItemCounterCotrol__IsMainInterlude(
        EventInfoSubmarineItemCounterCotrol_o *this,
        const MethodInfo *method)
{
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B10A0 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    byte_42B10A0 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          this->fields.eventId,
          (const MethodInfo_23E2334 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)entity;
  if ( !entity )
LABEL_12:
    sub_B52A5C(Master_WarQuestSelectionMaster, v4);
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
    UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall EventInfoSubmarineItemCounterCotrol__PlayCountAnim(
        EventInfoSubmarineItemCounterCotrol_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
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

  if ( (byte_42B109D & 1) == 0 )
  {
    sub_B52984(&EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_TypeInfo);
    byte_42B109D = 1;
  }
  v5 = sub_B52A54(EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_TypeInfo);
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12___ctor(
    (EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = callback;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall EventInfoSubmarineItemCounterCotrol__Setup(
        EventInfoSubmarineItemCounterCotrol_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseItemPrefab; // x21
  const MethodInfo *v6; // x3
  EventInfoSubmarineItemCounterCotrol___c_c *v7; // x0
  struct EventInfoSubmarineItemCounterCotrol___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__10_0; // x21
  Il2CppObject *v10; // x22
  struct EventInfoSubmarineItemCounterCotrol___c_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  void *ItemData; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  int v22; // w8
  void *v23; // x20
  unsigned int v24; // w25
  EventUiValueEntity_o *v25; // x21
  UnityEngine_Object_o *ItemObject; // x23
  int32_t v27; // w0
  const MethodInfo *v28; // x2
  EventInfoSubmarineItemCounterCotrol_ItemData_o *v29; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x23
  const MethodInfo *v31; // x3
  UILabel_o *titleLabel; // x19
  __int64 v33; // x0

  if ( (byte_42B109C & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    sub_B52984(&Method_System_Func_EventUiValueEntity__int___ctor__);
    sub_B52984(&System_Func_EventUiValueEntity__int__TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_EventInfoSubmarineItemCounterComponent___);
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__Add__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_EventInfoSubmarineItemCounterCotrol___c__Setup_b__10_0__);
    sub_B52984(&EventInfoSubmarineItemCounterCotrol___c_TypeInfo);
    sub_B52984(&StringLiteral_5768/*"EVENT_SUBMARINE_RESOURCE_TITLE"*/);
    sub_B52984(&StringLiteral_18662/*"event_itembase"*/);
    byte_42B109C = 1;
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
        (System_String_o *)StringLiteral_18662/*"event_itembase"*/,
        v6);
      if ( *(_QWORD *)&entitys->max_length )
      {
        v7 = EventInfoSubmarineItemCounterCotrol___c_TypeInfo;
        if ( (BYTE3(EventInfoSubmarineItemCounterCotrol___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventInfoSubmarineItemCounterCotrol___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoSubmarineItemCounterCotrol___c_TypeInfo);
          v7 = EventInfoSubmarineItemCounterCotrol___c_TypeInfo;
        }
        static_fields = v7->static_fields;
        _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__10_0;
        if ( !_9__10_0 )
        {
          if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v7);
            static_fields = EventInfoSubmarineItemCounterCotrol___c_TypeInfo->static_fields;
          }
          v10 = (Il2CppObject *)static_fields->__9;
          _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_EventUiValueEntity__int__TypeInfo);
          System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
            _9__10_0,
            v10,
            Method_EventInfoSubmarineItemCounterCotrol___c__Setup_b__10_0__,
            (const MethodInfo_2BC9C68 *)Method_System_Func_EventUiValueEntity__int___ctor__);
          v11 = EventInfoSubmarineItemCounterCotrol___c_TypeInfo->static_fields;
          v11->__9__10_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__10_0;
          sub_B52920(
            (BattleServantConfConponent_o *)&v11->__9__10_0,
            (System_Int32_array **)_9__10_0,
            v12,
            v13,
            v14,
            v15,
            v16,
            v17);
        }
        v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                                                                     (System_Func_TSource__TKey__o *)_9__10_0,
                                                                     (const MethodInfo_1B666DC *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
        ItemData = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                     v18,
                     (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
        if ( !ItemData )
          goto LABEL_43;
        v22 = *((_DWORD *)ItemData + 6);
        v23 = ItemData;
        if ( v22 >= 1 )
        {
          v24 = 0;
          while ( 1 )
          {
            if ( v24 >= v22 )
            {
              v33 = sub_B52A88(ItemData);
              sub_B52A28(v33, 0LL);
            }
            v25 = (EventUiValueEntity_o *)*((_QWORD *)v23 + (int)v24 + 4);
            if ( !v25 )
              break;
            if ( v25->fields.type == 1 )
            {
              ItemObject = (UnityEngine_Object_o *)EventInfoSubmarineItemCounterCotrol__CreateItemObject(this, v25, v21);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              ItemData = (void *)UnityEngine_Object__op_Equality(ItemObject, 0LL, 0LL);
              if ( ((unsigned __int8)ItemData & 1) == 0 )
              {
                v27 = System_Int32__Parse(v25->fields.value, 0LL);
                ItemData = EventInfoSubmarineItemCounterCotrol__GetItemData(this, v27, v28);
                if ( !ItemData )
                  break;
                v29 = (EventInfoSubmarineItemCounterCotrol_ItemData_o *)ItemData;
                GameObjectExtensions__SetLocalPosition_32084952(
                  (UnityEngine_GameObject_o *)ItemObject,
                  *(UnityEngine_Vector2_o *)((char *)ItemData + 20),
                  0LL);
                if ( !ItemObject )
                  break;
                Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    (UnityEngine_GameObject_o *)ItemObject,
                                                                    (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_EventInfoSubmarineItemCounterComponent___);
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
                    v25,
                    v29,
                    v31);
                  ItemData = this->fields.itemCompnentList;
                  if ( !ItemData )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)ItemData,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
                    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__Add__);
                }
              }
            }
            v22 = *((_DWORD *)v23 + 6);
            if ( (int)++v24 >= v22 )
              goto LABEL_37;
          }
LABEL_43:
          sub_B52A5C(ItemData, v20);
        }
LABEL_37:
        titleLabel = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        ItemData = LocalizationManager__Get((System_String_o *)StringLiteral_5768/*"EVENT_SUBMARINE_RESOURCE_TITLE"*/, 0LL);
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
  int32_t _1__state; // w8
  bool result; // w0
  struct EventInfoSubmarineItemCounterCotrol_o *_4__this; // x21
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *itemCompnentList; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__o *p__7__wrap1; // x20
  __int64 v9; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v10; // x0
  __int128 v11; // q0
  const MethodInfo *v12; // x1
  EventInfoSubmarineItemCounterComponent_o *current; // x0
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+20h] [xbp-80h] BYREF
  int v15; // [xsp+38h] [xbp-68h]
  int v16; // [xsp+48h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+50h] [xbp-50h] BYREF

  if ( (byte_42AD90F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__get_Current__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__GetEnumerator__);
    byte_42AD90F = 1;
  }
  memset(&i, 0, sizeof(i));
  v16 = 0;
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
      sub_B52A5C(0LL, method);
    itemCompnentList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.itemCompnentList;
    if ( !itemCompnentList )
      sub_B52A5C(0LL, method);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v14,
      itemCompnentList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__GetEnumerator__);
    for ( i = v14;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__MoveNext__);
          EventInfoSubmarineItemCounterComponent__PlayAnimation(
            (EventInfoSubmarineItemCounterComponent_o *)i.fields.current,
            0LL) )
    {
      if ( !i.fields.current )
        sub_B52A5C(0LL, v7);
    }
    v15 = 89;
    v16 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__);
    if ( v15 == 89 )
      v16 = 0;
    v10 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.itemCompnentList;
    if ( !v10 )
      sub_B52A5C(0LL, v9);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v14,
      v10,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__GetEnumerator__);
    p__7__wrap1 = &this->fields.__7__wrap1;
    v11 = *(_OWORD *)&v14.fields.list;
    this->fields.__7__wrap1.fields.current = (struct EventInfoSubmarineItemCounterComponent_o *)v14.fields.current;
    *(_OWORD *)&this->fields.__7__wrap1.fields.list = v11;
    sub_B52920(&this->fields.__7__wrap1);
  }
  this->fields.__1__state = -3;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap1,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__MoveNext__) )
  {
    current = this->fields.__7__wrap1.fields.current;
    if ( !current )
      sub_B52A5C(0LL, v12);
    if ( !EventInfoSubmarineItemCounterComponent__get_IsAnimFinished(current, 0LL) )
    {
      LODWORD(v14.fields.list) = 0;
      this->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
      sub_B52920(&this->fields.__2__current);
      result = 1;
      this->fields.__1__state = 1;
      return result;
    }
  }
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12____m__Finally1(this, v12);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  if ( (byte_42AD910 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__);
    byte_42AD910 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap1,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__);
}


void __fastcall EventInfoSubmarineItemCounterCotrol___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventInfoSubmarineItemCounterCotrol___c_StaticFields *static_fields; // x0

  if ( (byte_42AD90E & 1) == 0 )
  {
    sub_B52984(&EventInfoSubmarineItemCounterCotrol___c_TypeInfo);
    byte_42AD90E = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(EventInfoSubmarineItemCounterCotrol___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventInfoSubmarineItemCounterCotrol___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoSubmarineItemCounterCotrol___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
  return x->fields.ItemId == this->fields.itemId;
}