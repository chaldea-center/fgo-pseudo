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
  struct UnityEngine_GameObject_o *baseItemPrefab; // x21
  UnityEngine_Object_o *v16; // x21
  __int64 v17; // x1
  UnityEngine_Object_o *name; // x0

  if ( (byte_42E9A68 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, (_DWORD)ent, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_592/*"("*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_659/*")"*/, v12, v13, v14);
    byte_42E9A68 = 1;
  }
  baseItemPrefab = this->fields.baseItemPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v16 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                  (UnityEngine_UI_Dropdown_DropdownItem_o *)baseItemPrefab,
                                  (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
  {
    name = (UnityEngine_Object_o *)this->fields.baseItemPrefab;
    if ( !name
      || (name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL), !ent)
      || (name = (UnityEngine_Object_o *)System_String__Concat_44581200(
                                           (System_String_o *)name,
                                           (System_String_o *)StringLiteral_592/*"("*/,
                                           ent->fields.value,
                                           (System_String_o *)StringLiteral_659/*")"*/,
                                           0LL),
          !v16) )
    {
      sub_B5D69C(name, v17);
    }
    UnityEngine_Object__set_name(v16, (System_String_o *)name, 0LL);
    GameObjectExtensions__SafeSetParent_32436524((UnityEngine_GameObject_o *)v16, this->fields.rootObject, 0LL);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v16, 1, 0LL);
  }
  return (UnityEngine_GameObject_o *)v16;
}


EventInfoSubmarineItemCounterCotrol_ItemData_o *__fastcall EventInfoSubmarineItemCounterCotrol__GetItemData(
        EventInfoSubmarineItemCounterCotrol_o *this,
        int32_t itemId,
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
  EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *itemDataList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v22; // x20

  if ( (byte_42E9A69 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterCotrol_ItemData__Find__,
      itemId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Predicate_EventInfoSubmarineItemCounterCotrol_ItemData___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Predicate_EventInfoSubmarineItemCounterCotrol_ItemData__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0__GetItemData_b__0__, v12, v13, v14);
    sub_B5D5C4(&EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_TypeInfo, v15, v16, v17);
    byte_42E9A69 = 1;
  }
  v18 = (EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_o *)sub_B5D694(EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_TypeInfo);
  EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0___ctor(v18, 0LL);
  if ( !v18
    || (v18->fields.itemId = itemId,
        itemDataList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)this->fields.itemDataList,
        v22 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_EventInfoSubmarineItemCounterCotrol_ItemData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v22,
          (Il2CppObject *)v18,
          Method_EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0__GetItemData_b__0__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_EventInfoSubmarineItemCounterCotrol_ItemData___ctor__),
        !itemDataList) )
  {
    sub_B5D69C(v19, v20);
  }
  return (EventInfoSubmarineItemCounterCotrol_ItemData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                             itemDataList,
                                                             (System_Predicate_T__o *)v22,
                                                             (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterCotrol_ItemData__Find__);
}


void __fastcall EventInfoSubmarineItemCounterCotrol__Initialization(
        EventInfoSubmarineItemCounterCotrol_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventInfoSubmarineItemCounterCotrol_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Action_o *v22; // x21
  const MethodInfo *v23; // x3

  v5 = this;
  if ( (byte_42E9A65 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_EventInfoSubmarineItemCounterCotrol__Initialization_b__9_0__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent___ctor__, v9, v10, v11);
    this = (EventInfoSubmarineItemCounterCotrol_o *)sub_B5D5C4(
                                                      &System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__TypeInfo,
                                                      v12,
                                                      v13,
                                                      v14);
    byte_42E9A65 = 1;
  }
  if ( !entity )
    sub_B5D69C(this, entity);
  v5->fields.eventId = entity->fields.eventId;
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent___ctor__);
  v5->fields.itemCompnentList = (struct System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__o *)v15;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v5->fields.itemCompnentList,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v5,
    Method_EventInfoSubmarineItemCounterCotrol__Initialization_b__9_0__,
    0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)v5, entity, v22, v23);
}


bool __fastcall EventInfoSubmarineItemCounterCotrol__IsMainInterlude(
        EventInfoSubmarineItemCounterCotrol_o *this,
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
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E9A6A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventDetailMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v8, v9, v10);
    byte_42E9A6A = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          this->fields.eventId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)entity;
  if ( !entity )
LABEL_12:
    sub_B5D69C(Master_WarQuestSelectionMaster, v12);
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
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall EventInfoSubmarineItemCounterCotrol__PlayCountAnim(
        EventInfoSubmarineItemCounterCotrol_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42E9A67 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    byte_42E9A67 = 1;
  }
  v6 = sub_B5D694(EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_TypeInfo);
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12___ctor(
    (EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)callback, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall EventInfoSubmarineItemCounterCotrol__Setup(
        EventInfoSubmarineItemCounterCotrol_o *this,
        EventUiValueEntity_array *entitys,
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  UnityEngine_Object_o *baseItemPrefab; // x21
  const MethodInfo *v40; // x3
  EventInfoSubmarineItemCounterCotrol___c_c *v41; // x0
  struct EventInfoSubmarineItemCounterCotrol___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__10_0; // x21
  Il2CppObject *v44; // x22
  struct EventInfoSubmarineItemCounterCotrol___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  void *ItemData; // x0
  __int64 v54; // x1
  const MethodInfo *v55; // x2
  int v56; // w8
  void *v57; // x20
  unsigned int v58; // w25
  EventUiValueEntity_o *v59; // x21
  UnityEngine_Object_o *ItemObject; // x23
  int32_t v61; // w0
  const MethodInfo *v62; // x2
  EventInfoSubmarineItemCounterCotrol_ItemData_o *v63; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x23
  const MethodInfo *v65; // x3
  UILabel_o *titleLabel; // x19
  __int64 v67; // x0

  if ( (byte_42E9A66 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___,
      (_DWORD)entitys,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_EventUiValueEntity__int___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_EventUiValueEntity__int__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventInfoSubmarineItemCounterComponent___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__Add__, v18, v19, v20);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_EventInfoSubmarineItemCounterCotrol___c__Setup_b__10_0__, v27, v28, v29);
    sub_B5D5C4(&EventInfoSubmarineItemCounterCotrol___c_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_5803/*"EVENT_SUBMARINE_RESOURCE_TITLE"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_18757/*"event_itembase"*/, v36, v37, v38);
    byte_42E9A66 = 1;
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
        (System_String_o *)StringLiteral_18757/*"event_itembase"*/,
        v40);
      if ( *(_QWORD *)&entitys->max_length )
      {
        v41 = EventInfoSubmarineItemCounterCotrol___c_TypeInfo;
        if ( (BYTE3(EventInfoSubmarineItemCounterCotrol___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventInfoSubmarineItemCounterCotrol___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoSubmarineItemCounterCotrol___c_TypeInfo);
          v41 = EventInfoSubmarineItemCounterCotrol___c_TypeInfo;
        }
        static_fields = v41->static_fields;
        _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__10_0;
        if ( !_9__10_0 )
        {
          if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v41);
            static_fields = EventInfoSubmarineItemCounterCotrol___c_TypeInfo->static_fields;
          }
          v44 = (Il2CppObject *)static_fields->__9;
          _9__10_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_EventUiValueEntity__int__TypeInfo);
          System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
            _9__10_0,
            v44,
            Method_EventInfoSubmarineItemCounterCotrol___c__Setup_b__10_0__,
            (const MethodInfo_2C2F87C *)Method_System_Func_EventUiValueEntity__int___ctor__);
          v45 = EventInfoSubmarineItemCounterCotrol___c_TypeInfo->static_fields;
          v45->__9__10_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__10_0;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v45->__9__10_0,
            (System_Int32_array **)_9__10_0,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51);
        }
        v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                                                                     (System_Func_TSource__TKey__o *)_9__10_0,
                                                                     (const MethodInfo_1CAF5B4 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
        ItemData = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                     v52,
                     (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
        if ( !ItemData )
          goto LABEL_43;
        v56 = *((_DWORD *)ItemData + 6);
        v57 = ItemData;
        if ( v56 >= 1 )
        {
          v58 = 0;
          while ( 1 )
          {
            if ( v58 >= v56 )
            {
              v67 = sub_B5D6C8(ItemData);
              sub_B5D668(v67, 0LL);
            }
            v59 = (EventUiValueEntity_o *)*((_QWORD *)v57 + (int)v58 + 4);
            if ( !v59 )
              break;
            if ( v59->fields.type == 1 )
            {
              ItemObject = (UnityEngine_Object_o *)EventInfoSubmarineItemCounterCotrol__CreateItemObject(this, v59, v55);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              ItemData = (void *)UnityEngine_Object__op_Equality(ItemObject, 0LL, 0LL);
              if ( ((unsigned __int8)ItemData & 1) == 0 )
              {
                v61 = System_Int32__Parse(v59->fields.value, 0LL);
                ItemData = EventInfoSubmarineItemCounterCotrol__GetItemData(this, v61, v62);
                if ( !ItemData )
                  break;
                v63 = (EventInfoSubmarineItemCounterCotrol_ItemData_o *)ItemData;
                GameObjectExtensions__SetLocalPosition_32430388(
                  (UnityEngine_GameObject_o *)ItemObject,
                  *(UnityEngine_Vector2_o *)((char *)ItemData + 20),
                  0LL);
                if ( !ItemObject )
                  break;
                Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    (UnityEngine_GameObject_o *)ItemObject,
                                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventInfoSubmarineItemCounterComponent___);
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
                    v59,
                    v63,
                    v65);
                  ItemData = this->fields.itemCompnentList;
                  if ( !ItemData )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)ItemData,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__Add__);
                }
              }
            }
            v56 = *((_DWORD *)v57 + 6);
            if ( (int)++v58 >= v56 )
              goto LABEL_37;
          }
LABEL_43:
          sub_B5D69C(ItemData, v54);
        }
LABEL_37:
        titleLabel = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        ItemData = LocalizationManager__Get((System_String_o *)StringLiteral_5803/*"EVENT_SUBMARINE_RESOURCE_TITLE"*/, 0LL);
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
  int32_t _1__state; // w8
  bool result; // w0
  struct EventInfoSubmarineItemCounterCotrol_o *_4__this; // x21
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *itemCompnentList; // x0
  __int64 v21; // x1
  struct System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__o *p__7__wrap1; // x20
  __int64 v23; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v24; // x0
  __int128 v25; // q0
  const MethodInfo *v26; // x1
  EventInfoSubmarineItemCounterComponent_o *current; // x0
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+20h] [xbp-80h] BYREF
  int v29; // [xsp+38h] [xbp-68h]
  int v30; // [xsp+48h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+50h] [xbp-50h] BYREF

  if ( (byte_42E654D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&int_TypeInfo, v11, v12, v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__GetEnumerator__,
      v14,
      v15,
      v16);
    byte_42E654D = 1;
  }
  memset(&i, 0, sizeof(i));
  v30 = 0;
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
      sub_B5D69C(0LL, method);
    itemCompnentList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.itemCompnentList;
    if ( !itemCompnentList )
      sub_B5D69C(0LL, method);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v28,
      itemCompnentList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__GetEnumerator__);
    for ( i = v28;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__MoveNext__);
          EventInfoSubmarineItemCounterComponent__PlayAnimation(
            (EventInfoSubmarineItemCounterComponent_o *)i.fields.current,
            0LL) )
    {
      if ( !i.fields.current )
        sub_B5D69C(0LL, v21);
    }
    v29 = 89;
    v30 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__);
    if ( v29 == 89 )
      v30 = 0;
    v24 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.itemCompnentList;
    if ( !v24 )
      sub_B5D69C(0LL, v23);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v28,
      v24,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__GetEnumerator__);
    p__7__wrap1 = &this->fields.__7__wrap1;
    v25 = *(_OWORD *)&v28.fields.list;
    this->fields.__7__wrap1.fields.current = (struct EventInfoSubmarineItemCounterComponent_o *)v28.fields.current;
    *(_OWORD *)&this->fields.__7__wrap1.fields.list = v25;
    sub_B5D560(&this->fields.__7__wrap1);
  }
  this->fields.__1__state = -3;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap1,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__MoveNext__) )
  {
    current = this->fields.__7__wrap1.fields.current;
    if ( !current )
      sub_B5D69C(0LL, v26);
    if ( !EventInfoSubmarineItemCounterComponent__get_IsAnimFinished(current, 0LL) )
    {
      LODWORD(v28.fields.list) = 0;
      this->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
      sub_B5D560(&this->fields.__2__current);
      result = 1;
      this->fields.__1__state = 1;
      return result;
    }
  }
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12____m__Finally1(this, v26);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E654E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E654E = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap1,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__);
}


void __fastcall EventInfoSubmarineItemCounterCotrol___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventInfoSubmarineItemCounterCotrol___c_StaticFields *static_fields; // x0

  if ( (byte_42E654C & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoSubmarineItemCounterCotrol___c_TypeInfo, v1, v2, v3);
    byte_42E654C = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventInfoSubmarineItemCounterCotrol___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventInfoSubmarineItemCounterCotrol___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoSubmarineItemCounterCotrol___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return x->fields.ItemId == this->fields.itemId;
}