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
  Il2CppObject *baseItemPrefab; // x21
  Il2CppObject *v9; // x21
  UnityEngine_Object_o *name; // x0

  if ( (byte_49FDC45 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, ent);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_697/*"("*/, v6);
    sub_1B640C8(&StringLiteral_815/*")"*/, v7);
    byte_49FDC45 = 1;
  }
  baseItemPrefab = (Il2CppObject *)this->fields.baseItemPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__Instantiate_object_(
         baseItemPrefab,
         (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL) )
  {
    name = (UnityEngine_Object_o *)this->fields.baseItemPrefab;
    if ( !name
      || (name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL), !ent)
      || (name = (UnityEngine_Object_o *)System_String__Concat_61388660(
                                           (System_String_o *)name,
                                           (System_String_o *)StringLiteral_697/*"("*/,
                                           ent->fields.value,
                                           (System_String_o *)StringLiteral_815/*")"*/,
                                           0LL),
          !v9) )
    {
      sub_1B64324(name);
    }
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v9, (System_String_o *)name, 0LL);
    GameObjectExtensions__SafeSetParent_33381252((UnityEngine_GameObject_o *)v9, this->fields.rootObject, 0LL);
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
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct System_Collections_Generic_List_EventInfoSubmarineItemCounterCotrol_ItemData__o *itemDataList; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_49FDC46 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterCotrol_ItemData__Find__,
      *(_QWORD *)&itemId);
    sub_1B640C8(&System_Predicate_EventInfoSubmarineItemCounterCotrol_ItemData__TypeInfo, v5);
    sub_1B640C8(&Method_EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0__GetItemData_b__0__, v6);
    sub_1B640C8(&EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_TypeInfo, v7);
    byte_49FDC46 = 1;
  }
  v8 = sub_1B64314(EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_TypeInfo, *(_QWORD *)&itemId, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = itemId,
        itemDataList = this->fields.itemDataList,
        v13 = (System_Predicate_object__o *)sub_1B64314(
                                              System_Predicate_EventInfoSubmarineItemCounterCotrol_ItemData__TypeInfo,
                                              v10,
                                              v11),
        System_Predicate_object____ctor(
          v13,
          (Il2CppObject *)v8,
          Method_EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0__GetItemData_b__0__,
          0LL),
        !itemDataList) )
  {
    sub_1B64324(v9);
  }
  return (EventInfoSubmarineItemCounterCotrol_ItemData_o *)System_Collections_Generic_List_object___Find(
                                                             (System_Collections_Generic_List_object__o *)itemDataList,
                                                             (System_Predicate_T__o *)v13,
                                                             (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterCotrol_ItemData__Find__);
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
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x21

  v4 = this;
  if ( (byte_49FDC42 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, entity);
    sub_1B640C8(&Method_EventInfoSubmarineItemCounterCotrol__Initialization_b__9_0__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent___ctor__, v6);
    this = (EventInfoSubmarineItemCounterCotrol_o *)sub_1B640C8(
                                                      &System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__TypeInfo,
                                                      v7);
    byte_49FDC42 = 1;
  }
  if ( !entity )
    sub_1B64324(this);
  v4->fields.eventId = entity->fields.eventId;
  v8 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__TypeInfo,
                                                      entity,
                                                      method);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent___ctor__);
  v4->fields.itemCompnentList = (struct System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__o *)v8;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.itemCompnentList, (int32_t)v8, v9, v10);
  v13 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v11, v12);
  System_Action___ctor(
    v13,
    (Il2CppObject *)v4,
    Method_EventInfoSubmarineItemCounterCotrol__Initialization_b__9_0__,
    0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)v4, entity, v13, 0LL);
}


bool __fastcall EventInfoSubmarineItemCounterCotrol__IsMainInterlude(
        EventInfoSubmarineItemCounterCotrol_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FDC47 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventDetailMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v4);
    byte_49FDC47 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          this->fields.eventId,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
LABEL_11:
    sub_1B64324(Master_object);
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
    UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall EventInfoSubmarineItemCounterCotrol__PlayCountAnim(
        EventInfoSubmarineItemCounterCotrol_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FDC44 & 1) == 0 )
  {
    sub_1B640C8(&EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_TypeInfo, callback);
    byte_49FDC44 = 1;
  }
  v5 = sub_1B64314(EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_TypeInfo, callback, method);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)callback, v8, v9);
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
  UnityEngine_Object_o *baseItemPrefab; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  EventInfoSubmarineItemCounterCotrol___c_c *v18; // x0
  System_Func_object__int__o *_9__10_0; // x21
  Il2CppObject *v20; // x22
  struct EventInfoSubmarineItemCounterCotrol___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  void *ItemData; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  int v28; // w8
  void *v29; // x20
  unsigned int v30; // w25
  EventUiValueEntity_o *v31; // x21
  UnityEngine_Object_o *ItemObject; // x22
  int32_t v33; // w0
  const MethodInfo *v34; // x2
  EventInfoSubmarineItemCounterCotrol_ItemData_o *v35; // x23
  Il2CppObject *Component_object; // x22
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  __int64 v43; // x8
  UILabel_o *titleLabel; // x19

  if ( (byte_49FDC43 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___, entitys);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___, v5);
    sub_1B640C8(&System_Func_EventUiValueEntity__int__TypeInfo, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_EventInfoSubmarineItemCounterComponent___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__Add__, v8);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&Method_EventInfoSubmarineItemCounterCotrol___c__Setup_b__10_0__, v11);
    sub_1B640C8(&EventInfoSubmarineItemCounterCotrol___c_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_5693/*"EVENT_SUBMARINE_RESOURCE_TITLE"*/, v13);
    sub_1B640C8(&StringLiteral_19117/*"event_itembase"*/, v14);
    byte_49FDC43 = 1;
  }
  if ( entitys )
  {
    baseItemPrefab = (UnityEngine_Object_o *)this->fields.baseItemPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(baseItemPrefab, 0LL, 0LL) )
    {
      EventInfoUIBase__SetSpriteByLocalAtlas(
        (EventInfoUIBase_o *)this,
        this->fields.bgSprite,
        (System_String_o *)StringLiteral_19117/*"event_itembase"*/,
        0LL);
      if ( *(_QWORD *)&entitys->max_length )
      {
        v18 = EventInfoSubmarineItemCounterCotrol___c_TypeInfo;
        if ( !EventInfoSubmarineItemCounterCotrol___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoSubmarineItemCounterCotrol___c_TypeInfo);
          v18 = EventInfoSubmarineItemCounterCotrol___c_TypeInfo;
        }
        _9__10_0 = (System_Func_object__int__o *)v18->static_fields->__9__10_0;
        if ( !_9__10_0 )
        {
          if ( !v18->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v18);
            v18 = EventInfoSubmarineItemCounterCotrol___c_TypeInfo;
          }
          v20 = (Il2CppObject *)v18->static_fields->__9;
          _9__10_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_EventUiValueEntity__int__TypeInfo, v16, v17);
          System_Func_object__int____ctor(
            _9__10_0,
            v20,
            Method_EventInfoSubmarineItemCounterCotrol___c__Setup_b__10_0__,
            0LL);
          static_fields = EventInfoSubmarineItemCounterCotrol___c_TypeInfo->static_fields;
          static_fields->__9__10_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__10_0;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v22, v23);
        }
        v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                                                                     (System_Func_TSource__TKey__o *)_9__10_0,
                                                                     (const MethodInfo_2E63584 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
        ItemData = System_Linq_Enumerable__ToArray_object_(
                     v24,
                     (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
        if ( !ItemData )
          goto LABEL_40;
        v28 = *((_DWORD *)ItemData + 6);
        v29 = ItemData;
        if ( v28 >= 1 )
        {
          v30 = 0;
          while ( 1 )
          {
            if ( v30 >= v28 )
              sub_1B6432C(ItemData, v26);
            v31 = (EventUiValueEntity_o *)*((_QWORD *)v29 + (int)v30 + 4);
            if ( !v31 )
              break;
            if ( v31->fields.type == 1 )
            {
              ItemObject = (UnityEngine_Object_o *)EventInfoSubmarineItemCounterCotrol__CreateItemObject(this, v31, v27);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              ItemData = (void *)UnityEngine_Object__op_Equality(ItemObject, 0LL, 0LL);
              if ( ((unsigned __int8)ItemData & 1) == 0 )
              {
                v33 = System_Int32__Parse(v31->fields.value, 0LL);
                ItemData = EventInfoSubmarineItemCounterCotrol__GetItemData(this, v33, v34);
                if ( !ItemData )
                  break;
                v35 = (EventInfoSubmarineItemCounterCotrol_ItemData_o *)ItemData;
                GameObjectExtensions__SetLocalPosition_33375356(
                  (UnityEngine_GameObject_o *)ItemObject,
                  *(UnityEngine_Vector2_o *)((char *)ItemData + 20),
                  0LL);
                if ( !ItemObject )
                  break;
                Component_object = UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)ItemObject,
                                     (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_EventInfoSubmarineItemCounterComponent___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                ItemData = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
                if ( ((unsigned __int8)ItemData & 1) == 0 )
                {
                  if ( !Component_object )
                    break;
                  EventInfoSubmarineItemCounterComponent__Setup(
                    (EventInfoSubmarineItemCounterComponent_o *)Component_object,
                    v31,
                    v35,
                    v37);
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
                      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v43 = v40 + 8 * v42;
                    *((_DWORD *)ItemData + 6) = v42 + 1;
                    *(_QWORD *)(v43 + 32) = Component_object;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v43 + 32), (int32_t)Component_object, v38, v39);
                  }
                }
              }
            }
            v28 = *((_DWORD *)v29 + 6);
            if ( (int)++v30 >= v28 )
              goto LABEL_35;
          }
LABEL_40:
          sub_1B64324(ItemData);
        }
LABEL_35:
        titleLabel = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        ItemData = LocalizationManager__Get((System_String_o *)StringLiteral_5693/*"EVENT_SUBMARINE_RESOURCE_TITLE"*/, 0LL);
        if ( !titleLabel )
          goto LABEL_40;
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
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  struct EventInfoSubmarineItemCounterCotrol_o *_4__this; // x23
  System_Collections_Generic_List_object__o *itemCompnentList; // x0
  const MethodInfo *v10; // x1
  System_Collections_Generic_List_object__o *v11; // x0
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *v12; // x9
  __int128 v13; // q0
  struct System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__o *p__7__wrap1; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x1
  struct EventInfoSubmarineItemCounterComponent_o *current; // x8
  UICounterLabel_o *countLabel; // x0
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *v20; // x8
  System_Action_o *callback; // x0
  bool result; // w0
  Il2CppObject *v23; // x1
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-90h] BYREF
  __int64 v29; // [xsp+40h] [xbp-70h]
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o **v30; // [xsp+48h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+50h] [xbp-60h] BYREF
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *v32; // [xsp+78h] [xbp-38h] BYREF

  v32 = this;
  v2 = this;
  if ( (byte_49FDC49 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__,
      method);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__MoveNext__,
      v3);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__get_Current__,
      v4);
    sub_1B640C8(&int_TypeInfo, v5);
    this = (EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *)sub_1B640C8(
                                                                           &Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__GetEnumerator__,
                                                                           v6);
    byte_49FDC49 = 1;
  }
  memset(&i, 0, sizeof(i));
  v29 = 0LL;
  v30 = &v32;
  _1__state = v2->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_1B64324(this);
    itemCompnentList = (System_Collections_Generic_List_object__o *)_4__this->fields.itemCompnentList;
    if ( !itemCompnentList )
      sub_1B64324(0LL);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v28,
      itemCompnentList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__GetEnumerator__);
    for ( i = v28;
          System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__MoveNext__);
          EventInfoSubmarineItemCounterComponent__PlayAnimation(
            (EventInfoSubmarineItemCounterComponent_o *)i.fields._current,
            v10) )
    {
      if ( !i.fields._current )
        sub_1B64324(0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__);
    v11 = (System_Collections_Generic_List_object__o *)_4__this->fields.itemCompnentList;
    if ( !v11 )
      sub_1B64324(0LL);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v27,
      v11,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__GetEnumerator__);
    v12 = v32;
    v13 = *(_OWORD *)&v27.fields._list;
    p__7__wrap1 = &v32->fields.__7__wrap1;
    v28 = v27;
    v32->fields.__7__wrap1.fields._current = (struct EventInfoSubmarineItemCounterComponent_o *)v27.fields._current;
    *(_OWORD *)&v12->fields.__7__wrap1.fields._list = v13;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p__7__wrap1, 0, v15, v16);
    v2 = v32;
  }
  v2->fields.__1__state = -3;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap1,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__MoveNext__) )
    {
      EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12____m__Finally1(v32, v17);
      v20 = v32;
      callback = v32->fields.callback;
      v32->fields.__7__wrap1.fields._list = 0LL;
      *(_QWORD *)&v20->fields.__7__wrap1.fields._index = 0LL;
      v20->fields.__7__wrap1.fields._current = 0LL;
      ActionExtensions__Call(callback, 0LL);
      return 0;
    }
    current = v32->fields.__7__wrap1.fields._current;
    if ( !current )
      sub_1B64324(v32);
    countLabel = current->fields.countLabel;
    if ( !countLabel )
      sub_1B64324(0LL);
    if ( !UICounterLabel__get_IsAnimFinished(countLabel, 0LL) )
      break;
    v2 = v32;
  }
  LODWORD(v28.fields._list) = 0;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
  v24 = v32;
  v32->fields.__2__current = v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v24->fields.__2__current, (int32_t)v23, v25, v26);
  result = 1;
  v32->fields.__1__state = 1;
  return result;
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

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  if ( (byte_49FDC4A & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__,
      method);
    byte_49FDC4A = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__);
}


void __fastcall EventInfoSubmarineItemCounterCotrol___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FDC48 & 1) == 0 )
  {
    sub_1B640C8(&EventInfoSubmarineItemCounterCotrol___c_TypeInfo, v1);
    byte_49FDC48 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventInfoSubmarineItemCounterCotrol___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventInfoSubmarineItemCounterCotrol___c_TypeInfo->static_fields->__9 = (struct EventInfoSubmarineItemCounterCotrol___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventInfoSubmarineItemCounterCotrol___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return x->fields.ItemId == this->fields.itemId;
}