UnityEngine_GameObject_o *EventInfoSubmarineItemCounterCotrol__CreateItemObject(
        EventInfoSubmarineItemCounterCotrol_o *this,
        EventUiValueEntity_o *ent,
        const MethodInfo *method)
{
  Il2CppObject *baseItemPrefab; // x21
  Il2CppObject *v6; // x21
  __int64 v7; // x1
  UnityEngine_Object_o *name; // x0

  if ( (byte_4D2E5DE & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_650/*"("*/);
    sub_1C94098(&StringLiteral_756/*")"*/);
    byte_4D2E5DE = 1;
  }
  baseItemPrefab = (Il2CppObject *)this->fields.baseItemPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__Instantiate_object_(
         baseItemPrefab,
         (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0) )
  {
    name = (UnityEngine_Object_o *)this->fields.baseItemPrefab;
    if ( !name
      || (name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0), !ent)
      || (name = (UnityEngine_Object_o *)System_String__Concat_64458012(
                                           (System_String_o *)name,
                                           (System_String_o *)StringLiteral_650/*"("*/,
                                           ent->fields.value,
                                           (System_String_o *)StringLiteral_756/*")"*/,
                                           0),
          !v6) )
    {
      sub_1C942F0(name, v7);
    }
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v6, (System_String_o *)name, 0);
    GameObjectExtensions__SafeSetParent_36804604((UnityEngine_GameObject_o *)v6, this->fields.rootObject, 0);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v6, 1, 0);
  }
  return (UnityEngine_GameObject_o *)v6;
}


EventInfoSubmarineItemCounterCotrol_ItemData_o *EventInfoSubmarineItemCounterCotrol__GetItemData(
        EventInfoSubmarineItemCounterCotrol_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_EventInfoSubmarineItemCounterCotrol_ItemData__o *itemDataList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4D2E5DF & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterCotrol_ItemData__Find__);
    sub_1C94098(&System_Predicate_EventInfoSubmarineItemCounterCotrol_ItemData__TypeInfo);
    sub_1C94098(&Method_EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0__GetItemData_b__0__);
    sub_1C94098(&EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_TypeInfo);
    byte_4D2E5DF = 1;
  }
  v5 = sub_1C942E4(EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = itemId,
        itemDataList = this->fields.itemDataList,
        v9 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_EventInfoSubmarineItemCounterCotrol_ItemData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0__GetItemData_b__0__,
          0),
        !itemDataList) )
  {
    sub_1C942F0(v6, v7);
  }
  return (EventInfoSubmarineItemCounterCotrol_ItemData_o *)System_Collections_Generic_List_object___Find(
                                                             (System_Collections_Generic_List_object__o *)itemDataList,
                                                             (System_Predicate_T__o *)v9,
                                                             (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterCotrol_ItemData__Find__);
}


void EventInfoSubmarineItemCounterCotrol__Initialization(
        EventInfoSubmarineItemCounterCotrol_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  EventInfoSubmarineItemCounterCotrol_o *v4; // x20
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x3

  v4 = this;
  if ( (byte_4D2E5DB & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_EventInfoSubmarineItemCounterCotrol__Initialization_b__9_0__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent___ctor__);
    this = (EventInfoSubmarineItemCounterCotrol_o *)sub_1C94098(&System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__TypeInfo);
    byte_4D2E5DB = 1;
  }
  if ( !entity )
    sub_1C942F0(this, entity);
  v4->fields.eventId = entity->fields.eventId;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent___ctor__);
  v4->fields.itemCompnentList = (struct System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__o *)v5;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v4->fields.itemCompnentList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)v4, Method_EventInfoSubmarineItemCounterCotrol__Initialization_b__9_0__, 0);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)v4, entity, v12, v13);
}


bool EventInfoSubmarineItemCounterCotrol__IsMainInterlude(
        EventInfoSubmarineItemCounterCotrol_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2E5E0 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    byte_4D2E5E0 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          this->fields.eventId,
          (const MethodInfo_345B50C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
LABEL_11:
    sub_1C942F0(Master_object, v4);
  return EventDetailEntity__IsMainInterlude((EventDetailEntity_o *)entity, 0);
}


void EventInfoSubmarineItemCounterCotrol__OnDestroy(
        EventInfoSubmarineItemCounterCotrol_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1

  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, this->fields.eventId, v2);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, v4);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoSubmarineItemCounterCotrol__PlayAnim(
        EventInfoSubmarineItemCounterCotrol_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2
  System_Collections_IEnumerator_o *v7; // x1

  if ( EventInfoSubmarineItemCounterCotrol__IsMainInterlude(this, *(const MethodInfo **)&type) )
  {
    ActionExtensions__Call(callback, 0);
  }
  else
  {
    v7 = EventInfoSubmarineItemCounterCotrol__PlayCountAnim(this, callback, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)this, v7, 0);
  }
}


System_Collections_IEnumerator_o *EventInfoSubmarineItemCounterCotrol__PlayCountAnim(
        EventInfoSubmarineItemCounterCotrol_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D2E5DD & 1) == 0 )
  {
    sub_1C94098(&EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_TypeInfo);
    byte_4D2E5DD = 1;
  }
  v5 = sub_1C942E4(EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)callback, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void EventInfoSubmarineItemCounterCotrol__Setup(
        EventInfoSubmarineItemCounterCotrol_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseItemPrefab; // x21
  const MethodInfo *v6; // x3
  EventInfoSubmarineItemCounterCotrol___c_c *v7; // x0
  System_Func_object__int__o *_9__10_0; // x21
  Il2CppObject *v9; // x22
  struct EventInfoSubmarineItemCounterCotrol___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  void *ItemData; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  int v21; // w8
  void *v22; // x20
  unsigned int v23; // w25
  EventUiValueEntity_o *v24; // x21
  UnityEngine_Object_o *ItemObject; // x22
  int32_t v26; // w0
  const MethodInfo *v27; // x2
  EventInfoSubmarineItemCounterCotrol_ItemData_o *v28; // x23
  Il2CppObject *Component_object; // x22
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  __int64 v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  __int64 v40; // x8
  UILabel_o *titleLabel; // x19

  if ( (byte_4D2E5DC & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    sub_1C94098(&System_Func_EventUiValueEntity__int__TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_EventInfoSubmarineItemCounterComponent___);
    sub_1C94098(&Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__Add__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_EventInfoSubmarineItemCounterCotrol___c__Setup_b__10_0__);
    sub_1C94098(&EventInfoSubmarineItemCounterCotrol___c_TypeInfo);
    sub_1C94098(&StringLiteral_5728/*"EVENT_SUBMARINE_RESOURCE_TITLE"*/);
    sub_1C94098(&StringLiteral_19359/*"event_itembase"*/);
    byte_4D2E5DC = 1;
  }
  if ( entitys )
  {
    baseItemPrefab = (UnityEngine_Object_o *)this->fields.baseItemPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(baseItemPrefab, 0, 0) )
    {
      EventInfoUIBase__SetSpriteByLocalAtlas(
        (EventInfoUIBase_o *)this,
        this->fields.bgSprite,
        (System_String_o *)StringLiteral_19359/*"event_itembase"*/,
        v6);
      if ( entitys->max_length )
      {
        v7 = EventInfoSubmarineItemCounterCotrol___c_TypeInfo;
        if ( !EventInfoSubmarineItemCounterCotrol___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoSubmarineItemCounterCotrol___c_TypeInfo);
          v7 = EventInfoSubmarineItemCounterCotrol___c_TypeInfo;
        }
        _9__10_0 = (System_Func_object__int__o *)v7->static_fields->__9__10_0;
        if ( !_9__10_0 )
        {
          if ( !v7->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v7);
            v7 = EventInfoSubmarineItemCounterCotrol___c_TypeInfo;
          }
          v9 = (Il2CppObject *)v7->static_fields->__9;
          _9__10_0 = (System_Func_object__int__o *)sub_1C942E4(System_Func_EventUiValueEntity__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__10_0,
            v9,
            Method_EventInfoSubmarineItemCounterCotrol___c__Setup_b__10_0__,
            0);
          static_fields = EventInfoSubmarineItemCounterCotrol___c_TypeInfo->static_fields;
          static_fields->__9__10_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__10_0;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&static_fields->__9__10_0,
            (int32_t)_9__10_0,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16);
        }
        v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                                                                     (System_Func_TSource__TKey__o *)_9__10_0,
                                                                     (const MethodInfo_31CC684 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
        ItemData = System_Linq_Enumerable__ToArray_object_(
                     v17,
                     (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
        if ( !ItemData )
          goto LABEL_40;
        v21 = *((_DWORD *)ItemData + 6);
        v22 = ItemData;
        if ( v21 >= 1 )
        {
          v23 = 0;
          while ( 1 )
          {
            if ( v23 >= v21 )
              sub_1C942F8(ItemData);
            v24 = (EventUiValueEntity_o *)*((_QWORD *)v22 + (int)v23 + 4);
            if ( !v24 )
              break;
            if ( v24->fields.type == 1 )
            {
              ItemObject = (UnityEngine_Object_o *)EventInfoSubmarineItemCounterCotrol__CreateItemObject(this, v24, v20);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              ItemData = (void *)UnityEngine_Object__op_Equality(ItemObject, 0, 0);
              if ( ((unsigned __int8)ItemData & 1) == 0 )
              {
                v26 = System_Int32__Parse(v24->fields.value, 0);
                ItemData = EventInfoSubmarineItemCounterCotrol__GetItemData(this, v26, v27);
                if ( !ItemData )
                  break;
                v28 = (EventInfoSubmarineItemCounterCotrol_ItemData_o *)ItemData;
                GameObjectExtensions__SetLocalPosition_36798708(
                  (UnityEngine_GameObject_o *)ItemObject,
                  *(UnityEngine_Vector2_o *)((char *)ItemData + 20),
                  0);
                if ( !ItemObject )
                  break;
                Component_object = UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)ItemObject,
                                     (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_EventInfoSubmarineItemCounterComponent___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                ItemData = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
                if ( ((unsigned __int8)ItemData & 1) == 0 )
                {
                  if ( !Component_object )
                    break;
                  EventInfoSubmarineItemCounterComponent__Setup(
                    (EventInfoSubmarineItemCounterComponent_o *)Component_object,
                    v24,
                    v28,
                    v30);
                  ItemData = this->fields.itemCompnentList;
                  if ( !ItemData )
                    break;
                  v37 = *((_QWORD *)ItemData + 2);
                  v38 = Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__Add__;
                  ++*((_DWORD *)ItemData + 7);
                  if ( !v37 )
                    break;
                  v39 = *((int *)ItemData + 6);
                  if ( (unsigned int)v39 >= *(_DWORD *)(v37 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)ItemData,
                      Component_object,
                      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v40 = v37 + 8 * v39;
                    *((_DWORD *)ItemData + 6) = v39 + 1;
                    *(_QWORD *)(v40 + 32) = Component_object;
                    sub_1C9403C(
                      (GrandQuestFolderBoardItem_o *)(v40 + 32),
                      (int32_t)Component_object,
                      v31,
                      v32,
                      v33,
                      v34,
                      v35,
                      v36);
                  }
                }
              }
            }
            v21 = *((_DWORD *)v22 + 6);
            if ( (int)++v23 >= v21 )
              goto LABEL_35;
          }
LABEL_40:
          sub_1C942F0(ItemData, v19);
        }
LABEL_35:
        titleLabel = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        ItemData = LocalizationManager__Get((System_String_o *)StringLiteral_5728/*"EVENT_SUBMARINE_RESOURCE_TITLE"*/, 0);
        if ( !titleLabel )
          goto LABEL_40;
        UILabel__set_text(titleLabel, (System_String_o *)ItemData, 0);
      }
    }
  }
}


void EventInfoSubmarineItemCounterCotrol__UpdateAllCount(
        EventInfoSubmarineItemCounterCotrol_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(EventInfoSubmarineItemCounterCotrol_o *, _QWORD, _QWORD, const MethodInfo *))this->klass->vtable._8_PlayAnim.methodPtr)(
    this,
    0,
    0,
    this->klass->vtable._8_PlayAnim.method);
}


void EventInfoSubmarineItemCounterCotrol___Initialization_b__9_0(
        EventInfoSubmarineItemCounterCotrol_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, this->fields.eventId, v2);
}


void EventInfoSubmarineItemCounterCotrol_ItemData___ctor(
        EventInfoSubmarineItemCounterCotrol_ItemData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12___ctor(
        EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12__MoveNext(
        EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *this,
        const MethodInfo *method)
{
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *v2; // x19
  int32_t _1__state; // w8
  struct EventInfoSubmarineItemCounterCotrol_o *_4__this; // x23
  System_Collections_Generic_List_object__o *itemCompnentList; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x0
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *v9; // x9
  __int128 v10; // q0
  struct System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__o *p__7__wrap1; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  const MethodInfo *v18; // x1
  struct EventInfoSubmarineItemCounterComponent_o *current; // x8
  UICounterLabel_o *countLabel; // x0
  bool IsAnimFinished; // w0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  bool result; // w0
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *v29; // x8
  System_Action_o *callback; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-90h] BYREF
  __int64 v33; // [xsp+40h] [xbp-70h]
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o **v34; // [xsp+48h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+50h] [xbp-60h] BYREF
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *v36; // [xsp+78h] [xbp-38h] BYREF

  v36 = this;
  v2 = this;
  if ( (byte_4D2E5E2 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__get_Current__);
    this = (EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *)sub_1C94098(&Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__GetEnumerator__);
    byte_4D2E5E2 = 1;
  }
  memset(&i, 0, sizeof(i));
  v33 = 0;
  v34 = &v36;
  _1__state = v2->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C942F0(this, method);
    itemCompnentList = (System_Collections_Generic_List_object__o *)_4__this->fields.itemCompnentList;
    if ( !itemCompnentList )
      sub_1C942F0(0, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      itemCompnentList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__GetEnumerator__);
    for ( i = v32;
          System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__MoveNext__);
          EventInfoSubmarineItemCounterComponent__PlayAnimation(
            (EventInfoSubmarineItemCounterComponent_o *)i.fields._current,
            v6) )
    {
      if ( !i.fields._current )
        sub_1C942F0(0, v6);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__);
    v8 = (System_Collections_Generic_List_object__o *)_4__this->fields.itemCompnentList;
    if ( !v8 )
      sub_1C942F0(0, v7);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v31,
      v8,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__GetEnumerator__);
    v9 = v36;
    v10 = *(_OWORD *)&v31.fields._list;
    p__7__wrap1 = &v36->fields.__7__wrap1;
    v32 = v31;
    v36->fields.__7__wrap1.fields._current = (struct EventInfoSubmarineItemCounterComponent_o *)v31.fields._current;
    *(_OWORD *)&v9->fields.__7__wrap1.fields._list = v10;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)p__7__wrap1, 0, v12, v13, v14, v15, v16, v17);
    v2 = v36;
  }
  v2->fields.__1__state = -3;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap1,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__MoveNext__) )
  {
    current = v36->fields.__7__wrap1.fields._current;
    if ( !current )
      sub_1C942F0(v36, v18);
    countLabel = current->fields.countLabel;
    if ( !countLabel )
      sub_1C942F0(0, v18);
    IsAnimFinished = UICounterLabel__get_IsAnimFinished(countLabel, 0);
    v2 = v36;
    if ( !IsAnimFinished )
    {
      v36->fields.__2__current = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v2->fields.__2__current, 0, v22, v23, v24, v25, v26, v27);
      result = 1;
      v36->fields.__1__state = 1;
      return result;
    }
  }
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12____m__Finally1(v36, v18);
  v29 = v36;
  callback = v36->fields.callback;
  v36->fields.__7__wrap1.fields._list = 0;
  *(_QWORD *)&v29->fields.__7__wrap1.fields._index = 0;
  v29->fields.__7__wrap1.fields._current = 0;
  ActionExtensions__Call(callback, 0);
  return 0;
}


Il2CppObject *EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12__System_Collections_IEnumerator_Reset(
        EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12__System_Collections_IEnumerator_get_Current(
        EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12__System_IDisposable_Dispose(
        EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12____m__Finally1(this, method);
}


void EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12____m__Finally1(
        EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2E5E3 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__);
    byte_4D2E5E3 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__);
}


void EventInfoSubmarineItemCounterCotrol___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2E5E1 & 1) == 0 )
  {
    sub_1C94098(&EventInfoSubmarineItemCounterCotrol___c_TypeInfo);
    byte_4D2E5E1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(EventInfoSubmarineItemCounterCotrol___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoSubmarineItemCounterCotrol___c_TypeInfo->static_fields->__9 = (struct EventInfoSubmarineItemCounterCotrol___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)EventInfoSubmarineItemCounterCotrol___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventInfoSubmarineItemCounterCotrol___c___ctor(
        EventInfoSubmarineItemCounterCotrol___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventInfoSubmarineItemCounterCotrol___c___Setup_b__10_0(
        EventInfoSubmarineItemCounterCotrol___c_o *this,
        EventUiValueEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C942F0(this, 0);
  return ent->fields.priority;
}


void EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0___ctor(
        EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0___GetItemData_b__0(
        EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_o *this,
        EventInfoSubmarineItemCounterCotrol_ItemData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.ItemId == this->fields.itemId;
}