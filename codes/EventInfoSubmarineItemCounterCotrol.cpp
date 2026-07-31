void EventInfoSubmarineItemCounterCotrol___ctor(EventInfoSubmarineItemCounterCotrol_o *this, const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


UnityEngine_GameObject_o *EventInfoSubmarineItemCounterCotrol__CreateItemObject(
        EventInfoSubmarineItemCounterCotrol_o *this,
        EventUiValueEntity_o *ent,
        const MethodInfo *method)
{
  Il2CppObject *baseItemPrefab; // x21
  Il2CppObject *v6; // x21
  __int64 v7; // x1
  UnityEngine_Object_o *name; // x0

  if ( (byte_593A4A0 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_681/*"("*/);
    sub_21FFC50(&StringLiteral_789/*")"*/);
    byte_593A4A0 = 1;
  }
  baseItemPrefab = (Il2CppObject *)this->fields.baseItemPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, ent);
  v6 = UnityEngine_Object__Instantiate_object_(
         baseItemPrefab,
         (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0) )
  {
    name = (UnityEngine_Object_o *)this->fields.baseItemPrefab;
    if ( !name
      || (name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0), !ent)
      || (name = (UnityEngine_Object_o *)System_String__Concat_75483552(
                                           (System_String_o *)name,
                                           (System_String_o *)StringLiteral_681/*"("*/,
                                           ent->fields.value,
                                           (System_String_o *)StringLiteral_789/*")"*/,
                                           0),
          !v6) )
    {
      sub_21FFECC(name, v7);
    }
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v6, (System_String_o *)name, 0);
    GameObjectExtensions__SafeSetParent_42881912((UnityEngine_GameObject_o *)v6, this->fields.rootObject, 0);
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
  struct System_Collections_Generic_List_EventInfoSubmarineItemCounterCotrol_ItemData__o *itemDataList; // x20
  System_Predicate_object__o *v9; // x19

  if ( (byte_593A4A1 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterCotrol_ItemData__Find__);
    sub_21FFC50(&System_Predicate_EventInfoSubmarineItemCounterCotrol_ItemData__TypeInfo);
    sub_21FFC50(&Method_EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0__GetItemData_b__0__);
    sub_21FFC50(&EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_TypeInfo);
    byte_593A4A1 = 1;
  }
  v5 = sub_21FFEBC(EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (itemDataList = this->fields.itemDataList,
        *(_DWORD *)(v5 + 16) = itemId,
        v9 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_EventInfoSubmarineItemCounterCotrol_ItemData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0__GetItemData_b__0__,
          0),
        !itemDataList) )
  {
    sub_21FFECC(v6, v7);
  }
  return (EventInfoSubmarineItemCounterCotrol_ItemData_o *)System_Collections_Generic_List_object___Find(
                                                             (System_Collections_Generic_List_object__o *)itemDataList,
                                                             (System_Predicate_T__o *)v9,
                                                             (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterCotrol_ItemData__Find__);
}


void EventInfoSubmarineItemCounterCotrol__Initialization(
        EventInfoSubmarineItemCounterCotrol_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  EventInfoSubmarineItemCounterCotrol_o *v4; // x20
  System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__c *v5; // x0
  System_Collections_Generic_List_object__o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_Action_o *v13; // x21

  v4 = this;
  if ( (byte_593A49D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventInfoSubmarineItemCounterCotrol__Initialization_b__9_0__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent___ctor__);
    this = (EventInfoSubmarineItemCounterCotrol_o *)sub_21FFC50(&System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__TypeInfo);
    byte_593A49D = 1;
  }
  if ( !entity )
    sub_21FFECC(this, entity);
  v5 = System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__TypeInfo;
  v4->fields.eventId = entity->fields.eventId;
  v6 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v5);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent___ctor__);
  v4->fields.itemCompnentList = (struct System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__o *)v6;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->fields.itemCompnentList, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  v13 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)v4, Method_EventInfoSubmarineItemCounterCotrol__Initialization_b__9_0__, 0);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)v4, entity, v13, 0);
}


bool EventInfoSubmarineItemCounterCotrol__IsMainInterlude(
        EventInfoSubmarineItemCounterCotrol_o *this,
        const MethodInfo *method)
{
  int v3; // w8
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_593A4A2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    byte_593A4A2 = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          this->fields.eventId,
          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
LABEL_11:
    sub_21FFECC(Master_object, v5);
  return EventDetailEntity__IsMainInterlude((EventDetailEntity_o *)entity, 0);
}


void EventInfoSubmarineItemCounterCotrol__OnDestroy(
        EventInfoSubmarineItemCounterCotrol_o *this,
        const MethodInfo *method)
{
  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, this->fields.eventId, 0);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0);
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
    UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v7, 0);
  }
}


System_Collections_IEnumerator_o *EventInfoSubmarineItemCounterCotrol__PlayCountAnim(
        EventInfoSubmarineItemCounterCotrol_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_593A49F & 1) == 0 )
  {
    sub_21FFC50(&EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_TypeInfo);
    byte_593A49F = 1;
  }
  v5 = sub_21FFEBC(EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)callback, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void EventInfoSubmarineItemCounterCotrol__Setup(
        EventInfoSubmarineItemCounterCotrol_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseItemPrefab; // x21
  __int64 v6; // x1
  EventInfoSubmarineItemCounterCotrol___c_c *v7; // x0
  struct EventInfoSubmarineItemCounterCotrol___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__10_0; // x21
  Il2CppObject *v10; // x22
  struct EventInfoSubmarineItemCounterCotrol___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  void *ItemData; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  int v22; // w8
  void *v23; // x20
  unsigned int v24; // w27
  EventUiValueEntity_o *v25; // x21
  __int64 v26; // x1
  UnityEngine_Object_o *ItemObject; // x22
  int32_t v28; // w0
  const MethodInfo *v29; // x2
  EventInfoSubmarineItemCounterCotrol_ItemData_o *v30; // x23
  __int64 v31; // x1
  Il2CppObject *Component_object; // x22
  const MethodInfo *v33; // x3
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  __int64 v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  __int64 v43; // x8
  UILabel_o *titleLabel; // x19

  if ( (byte_593A49E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    sub_21FFC50(&System_Func_EventUiValueEntity__int__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EventInfoSubmarineItemCounterComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__Add__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_EventInfoSubmarineItemCounterCotrol___c__Setup_b__10_0__);
    sub_21FFC50(&EventInfoSubmarineItemCounterCotrol___c_TypeInfo);
    sub_21FFC50(&StringLiteral_5943/*"EVENT_SUBMARINE_RESOURCE_TITLE"*/);
    sub_21FFC50(&StringLiteral_20064/*"event_itembase"*/);
    byte_593A49E = 1;
  }
  if ( entitys )
  {
    baseItemPrefab = (UnityEngine_Object_o *)this->fields.baseItemPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, entitys);
    if ( !UnityEngine_Object__op_Equality(baseItemPrefab, 0, 0) )
    {
      EventInfoUIBase__SetSpriteByLocalAtlas(
        (EventInfoUIBase_o *)this,
        this->fields.bgSprite,
        (System_String_o *)StringLiteral_20064/*"event_itembase"*/,
        0);
      if ( entitys->max_length )
      {
        v7 = EventInfoSubmarineItemCounterCotrol___c_TypeInfo;
        if ( !*(&EventInfoSubmarineItemCounterCotrol___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(EventInfoSubmarineItemCounterCotrol___c_TypeInfo, v6);
          v7 = EventInfoSubmarineItemCounterCotrol___c_TypeInfo;
        }
        static_fields = v7->static_fields;
        _9__10_0 = (System_Func_object__int__o *)static_fields->__9__10_0;
        if ( !_9__10_0 )
        {
          if ( !*(&v7->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v7, v6);
            static_fields = EventInfoSubmarineItemCounterCotrol___c_TypeInfo->static_fields;
          }
          v10 = (Il2CppObject *)static_fields->__9;
          _9__10_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_EventUiValueEntity__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__10_0,
            v10,
            Method_EventInfoSubmarineItemCounterCotrol___c__Setup_b__10_0__,
            0);
          v11 = EventInfoSubmarineItemCounterCotrol___c_TypeInfo->static_fields;
          v11->__9__10_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__10_0;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v11->__9__10_0,
            (int32_t)_9__10_0,
            v12,
            v13,
            v14,
            v15,
            v16,
            v17);
        }
        v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                                                                     (System_Func_TSource__TKey__o *)_9__10_0,
                                                                     (const MethodInfo_3855CFC *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
        ItemData = System_Linq_Enumerable__ToArray_object_(
                     v18,
                     (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
        if ( !ItemData )
          goto LABEL_40;
        v22 = *((_DWORD *)ItemData + 6);
        v23 = ItemData;
        if ( v22 >= 1 )
        {
          v24 = 0;
          while ( 1 )
          {
            if ( v24 >= v22 )
              sub_21FFED4(ItemData);
            v25 = (EventUiValueEntity_o *)*((_QWORD *)v23 + (int)v24 + 4);
            if ( !v25 )
              break;
            if ( v25->fields.type == 1 )
            {
              ItemObject = (UnityEngine_Object_o *)EventInfoSubmarineItemCounterCotrol__CreateItemObject(this, v25, v21);
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
              ItemData = (void *)UnityEngine_Object__op_Equality(ItemObject, 0, 0);
              if ( ((unsigned __int8)ItemData & 1) == 0 )
              {
                v28 = System_Int32__Parse(v25->fields.value, 0);
                ItemData = EventInfoSubmarineItemCounterCotrol__GetItemData(this, v28, v29);
                if ( !ItemData )
                  break;
                v30 = (EventInfoSubmarineItemCounterCotrol_ItemData_o *)ItemData;
                GameObjectExtensions__SetLocalPosition_42876016(
                  (UnityEngine_GameObject_o *)ItemObject,
                  *(UnityEngine_Vector2_o *)((char *)ItemData + 20),
                  0);
                if ( !ItemObject )
                  break;
                Component_object = UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)ItemObject,
                                     (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventInfoSubmarineItemCounterComponent___);
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
                ItemData = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
                if ( ((unsigned __int8)ItemData & 1) == 0 )
                {
                  if ( !Component_object )
                    break;
                  EventInfoSubmarineItemCounterComponent__Setup(
                    (EventInfoSubmarineItemCounterComponent_o *)Component_object,
                    v25,
                    v30,
                    v33);
                  ItemData = this->fields.itemCompnentList;
                  if ( !ItemData )
                    break;
                  v40 = *((_QWORD *)ItemData + 2);
                  v41 = Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__Add__;
                  ++*((_DWORD *)ItemData + 7);
                  if ( !v40 )
                    break;
                  v42 = *((int *)ItemData + 6);
                  if ( (unsigned int)v42 >= *(_DWORD *)(v40 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)ItemData,
                      Component_object,
                      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v43 = v40 + 8 * v42;
                    *((_DWORD *)ItemData + 6) = v42 + 1;
                    *(_QWORD *)(v43 + 32) = Component_object;
                    sub_21FFBF4(
                      (MissionNaviTransitionBoardItem_o *)(v43 + 32),
                      (int32_t)Component_object,
                      v34,
                      v35,
                      v36,
                      v37,
                      v38,
                      v39);
                  }
                }
              }
            }
            v22 = *((_DWORD *)v23 + 6);
            if ( (int)++v24 >= v22 )
              goto LABEL_35;
          }
LABEL_40:
          sub_21FFECC(ItemData, v20);
        }
LABEL_35:
        titleLabel = this->fields.titleLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
        ItemData = LocalizationManager__Get((System_String_o *)StringLiteral_5943/*"EVENT_SUBMARINE_RESOURCE_TITLE"*/, 0);
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
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, this->fields.eventId, 0);
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
  struct EventInfoSubmarineItemCounterCotrol_o *_4__this; // x22
  System_Collections_Generic_List_object__o *itemCompnentList; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x0
  Il2CppObject *current; // x8
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *v10; // x9
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x1
  struct EventInfoSubmarineItemCounterComponent_o *v18; // x8
  UICounterLabel_o *countLabel; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *v26; // x0
  bool result; // w0
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *v28; // x8
  System_Action_o *callback; // x0
  __int64 v30; // x19
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-80h] BYREF
  __int64 v33; // [xsp+40h] [xbp-60h]
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o **v34; // [xsp+48h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+50h] [xbp-50h] BYREF
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *v36; // [xsp+68h] [xbp-38h] BYREF

  v2 = this;
  v36 = this;
  if ( (byte_593A4A4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__get_Current__);
    this = (EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *)sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__GetEnumerator__);
    byte_593A4A4 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  _1__state = v2->fields.__1__state;
  v33 = 0;
  v34 = &v36;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -3;
    goto LABEL_14;
  }
  if ( !_1__state )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_21FFECC(this, method);
    itemCompnentList = (System_Collections_Generic_List_object__o *)_4__this->fields.itemCompnentList;
    if ( !itemCompnentList )
      sub_21FFECC(0, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      itemCompnentList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__GetEnumerator__);
    v35 = v32;
    v32.fields._list = 0;
    *(_QWORD *)&v32.fields._index = &v35;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v35,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__MoveNext__) )
    {
      if ( !v35.fields._current )
        sub_21FFECC(0, v6);
      EventInfoSubmarineItemCounterComponent__PlayAnimation(
        (EventInfoSubmarineItemCounterComponent_o *)v35.fields._current,
        v6);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v35,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__);
    v8 = (System_Collections_Generic_List_object__o *)_4__this->fields.itemCompnentList;
    if ( !v8 )
      sub_21FFECC(0, v7);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v31,
      v8,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__GetEnumerator__);
    current = v31.fields._current;
    v10 = v36;
    v32 = v31;
    *(_OWORD *)&v36->fields.__7__wrap1.fields._list = *(_OWORD *)&v31.fields._list;
    v10->fields.__7__wrap1.fields._current = (struct EventInfoSubmarineItemCounterComponent_o *)current;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->fields.__7__wrap1, 0, v11, v12, v13, v14, v15, v16);
    v36->fields.__1__state = -3;
LABEL_14:
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              (System_Collections_Generic_List_Enumerator_object__o *)&v36->fields.__7__wrap1,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__MoveNext__) )
    {
      v18 = v36->fields.__7__wrap1.fields._current;
      if ( !v18 )
        sub_21FFECC(v36, v17);
      countLabel = v18->fields.countLabel;
      if ( !countLabel )
        sub_21FFECC(0, v17);
      if ( !UICounterLabel__get_IsAnimFinished(countLabel, 0) )
      {
        v26 = v36;
        v36->fields.__2__current = 0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v26->fields.__2__current, 0, v20, v21, v22, v23, v24, v25);
        result = 1;
        v36->fields.__1__state = 1;
        goto LABEL_21;
      }
    }
    EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12____m__Finally1(v36, v17);
    v28 = v36;
    callback = v36->fields.callback;
    *(_QWORD *)&v36->fields.__7__wrap1.fields._index = 0;
    v28->fields.__7__wrap1.fields._current = 0;
    v28->fields.__7__wrap1.fields._list = 0;
    ActionExtensions__Call(callback, 0);
  }
  result = 0;
LABEL_21:
  v30 = v33;
  if ( v33 )
  {
    sub_1FFC7F4(&v34);
    sub_21FFEC4(v30);
  }
  return result;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  const MethodInfo_40C7F48 *v3; // x1

  if ( (byte_593A4A5 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__);
    byte_593A4A5 = 1;
  }
  v3 = (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__;
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    v3);
}


void EventInfoSubmarineItemCounterCotrol___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593A4A3 & 1) == 0 )
  {
    sub_21FFC50(&EventInfoSubmarineItemCounterCotrol___c_TypeInfo);
    byte_593A4A3 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventInfoSubmarineItemCounterCotrol___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoSubmarineItemCounterCotrol___c_TypeInfo->static_fields->__9 = (struct EventInfoSubmarineItemCounterCotrol___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventInfoSubmarineItemCounterCotrol___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, 0);
  return x->fields.ItemId == this->fields.itemId;
}