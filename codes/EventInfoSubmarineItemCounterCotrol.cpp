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
  __int64 v10; // x1
  UnityEngine_Object_o *name; // x0

  if ( (byte_4A2F679 & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_Object_Instantiate_GameObject___, ent);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v5);
    sub_1B761C0(&StringLiteral_696/*"("*/, v6);
    sub_1B761C0(&StringLiteral_814/*")"*/, v7);
    byte_4A2F679 = 1;
  }
  baseItemPrefab = (Il2CppObject *)this->fields.baseItemPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__Instantiate_object_(
         baseItemPrefab,
         (const MethodInfo_2EE5790 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL) )
  {
    name = (UnityEngine_Object_o *)this->fields.baseItemPrefab;
    if ( !name
      || (name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL), !ent)
      || (name = (UnityEngine_Object_o *)System_String__Concat_61548324(
                                           (System_String_o *)name,
                                           (System_String_o *)StringLiteral_696/*"("*/,
                                           ent->fields.value,
                                           (System_String_o *)StringLiteral_814/*")"*/,
                                           0LL),
          !v9) )
    {
      sub_1B7641C(name, v10);
    }
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v9, (System_String_o *)name, 0LL);
    GameObjectExtensions__SafeSetParent_33557996((UnityEngine_GameObject_o *)v9, this->fields.rootObject, 0LL);
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
  struct System_Collections_Generic_List_EventInfoSubmarineItemCounterCotrol_ItemData__o *itemDataList; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_4A2F67A & 1) == 0 )
  {
    sub_1B761C0(
      &Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterCotrol_ItemData__Find__,
      *(_QWORD *)&itemId);
    sub_1B761C0(&System_Predicate_EventInfoSubmarineItemCounterCotrol_ItemData__TypeInfo, v5);
    sub_1B761C0(&Method_EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0__GetItemData_b__0__, v6);
    sub_1B761C0(&EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_TypeInfo, v7);
    byte_4A2F67A = 1;
  }
  v8 = sub_1B7640C(EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = itemId,
        itemDataList = this->fields.itemDataList,
        v12 = (System_Predicate_object__o *)sub_1B7640C(System_Predicate_EventInfoSubmarineItemCounterCotrol_ItemData__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0__GetItemData_b__0__,
          0LL),
        !itemDataList) )
  {
    sub_1B7641C(v9, v10);
  }
  return (EventInfoSubmarineItemCounterCotrol_ItemData_o *)System_Collections_Generic_List_object___Find(
                                                             (System_Collections_Generic_List_object__o *)itemDataList,
                                                             (System_Predicate_T__o *)v12,
                                                             (const MethodInfo_34D7C3C *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterCotrol_ItemData__Find__);
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
  System_Action_o *v11; // x21

  v4 = this;
  if ( (byte_4A2F676 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, entity);
    sub_1B761C0(&Method_EventInfoSubmarineItemCounterCotrol__Initialization_b__9_0__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent___ctor__, v6);
    this = (EventInfoSubmarineItemCounterCotrol_o *)sub_1B761C0(
                                                      &System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__TypeInfo,
                                                      v7);
    byte_4A2F676 = 1;
  }
  if ( !entity )
    sub_1B7641C(this, entity);
  v4->fields.eventId = entity->fields.eventId;
  v8 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent___ctor__);
  v4->fields.itemCompnentList = (struct System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__o *)v8;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v4->fields.itemCompnentList, (int32_t)v8, v9, v10);
  v11 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)v4,
    Method_EventInfoSubmarineItemCounterCotrol__Initialization_b__9_0__,
    0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)v4, entity, v11, 0LL);
}


bool __fastcall EventInfoSubmarineItemCounterCotrol__IsMainInterlude(
        EventInfoSubmarineItemCounterCotrol_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A2F67B & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMaster_EventDetailMaster___, method);
    sub_1B761C0(&DataManager_TypeInfo, v3);
    sub_1B761C0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v4);
    byte_4A2F67B = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          this->fields.eventId,
          (const MethodInfo_30FF7D4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
LABEL_11:
    sub_1B7641C(Master_object, v6);
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
    UnityEngine_MonoBehaviour__StartCoroutine_69272680((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
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

  if ( (byte_4A2F678 & 1) == 0 )
  {
    sub_1B761C0(&EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_TypeInfo, callback);
    byte_4A2F678 = 1;
  }
  v5 = sub_1B7640C(EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)callback, v8, v9);
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
  EventInfoSubmarineItemCounterCotrol___c_c *v16; // x0
  System_Func_object__int__o *_9__10_0; // x21
  Il2CppObject *v18; // x22
  struct EventInfoSubmarineItemCounterCotrol___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  void *ItemData; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  int v26; // w8
  void *v27; // x20
  unsigned int v28; // w25
  EventUiValueEntity_o *v29; // x21
  UnityEngine_Object_o *ItemObject; // x22
  int32_t v31; // w0
  const MethodInfo *v32; // x2
  EventInfoSubmarineItemCounterCotrol_ItemData_o *v33; // x23
  Il2CppObject *Component_object; // x22
  const MethodInfo *v35; // x3
  int32_t v36; // w2
  int32_t v37; // w3
  __int64 v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  __int64 v41; // x8
  UILabel_o *titleLabel; // x19

  if ( (byte_4A2F677 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___, entitys);
    sub_1B761C0(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___, v5);
    sub_1B761C0(&System_Func_EventUiValueEntity__int__TypeInfo, v6);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_EventInfoSubmarineItemCounterComponent___, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__Add__, v8);
    sub_1B761C0(&LocalizationManager_TypeInfo, v9);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v10);
    sub_1B761C0(&Method_EventInfoSubmarineItemCounterCotrol___c__Setup_b__10_0__, v11);
    sub_1B761C0(&EventInfoSubmarineItemCounterCotrol___c_TypeInfo, v12);
    sub_1B761C0(&StringLiteral_5718/*"EVENT_SUBMARINE_RESOURCE_TITLE"*/, v13);
    sub_1B761C0(&StringLiteral_19187/*"event_itembase"*/, v14);
    byte_4A2F677 = 1;
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
        (System_String_o *)StringLiteral_19187/*"event_itembase"*/,
        0LL);
      if ( *(_QWORD *)&entitys->max_length )
      {
        v16 = EventInfoSubmarineItemCounterCotrol___c_TypeInfo;
        if ( !EventInfoSubmarineItemCounterCotrol___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoSubmarineItemCounterCotrol___c_TypeInfo);
          v16 = EventInfoSubmarineItemCounterCotrol___c_TypeInfo;
        }
        _9__10_0 = (System_Func_object__int__o *)v16->static_fields->__9__10_0;
        if ( !_9__10_0 )
        {
          if ( !v16->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v16);
            v16 = EventInfoSubmarineItemCounterCotrol___c_TypeInfo;
          }
          v18 = (Il2CppObject *)v16->static_fields->__9;
          _9__10_0 = (System_Func_object__int__o *)sub_1B7640C(System_Func_EventUiValueEntity__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__10_0,
            v18,
            Method_EventInfoSubmarineItemCounterCotrol___c__Setup_b__10_0__,
            0LL);
          static_fields = EventInfoSubmarineItemCounterCotrol___c_TypeInfo->static_fields;
          static_fields->__9__10_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__10_0;
          sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v20, v21);
        }
        v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                                                                     (System_Func_TSource__TKey__o *)_9__10_0,
                                                                     (const MethodInfo_2E8CDF0 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
        ItemData = System_Linq_Enumerable__ToArray_object_(
                     v22,
                     (const MethodInfo_2E9AEA4 *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
        if ( !ItemData )
          goto LABEL_40;
        v26 = *((_DWORD *)ItemData + 6);
        v27 = ItemData;
        if ( v26 >= 1 )
        {
          v28 = 0;
          while ( 1 )
          {
            if ( v28 >= v26 )
              sub_1B76424(ItemData, v24);
            v29 = (EventUiValueEntity_o *)*((_QWORD *)v27 + (int)v28 + 4);
            if ( !v29 )
              break;
            if ( v29->fields.type == 1 )
            {
              ItemObject = (UnityEngine_Object_o *)EventInfoSubmarineItemCounterCotrol__CreateItemObject(this, v29, v25);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              ItemData = (void *)UnityEngine_Object__op_Equality(ItemObject, 0LL, 0LL);
              if ( ((unsigned __int8)ItemData & 1) == 0 )
              {
                v31 = System_Int32__Parse(v29->fields.value, 0LL);
                ItemData = EventInfoSubmarineItemCounterCotrol__GetItemData(this, v31, v32);
                if ( !ItemData )
                  break;
                v33 = (EventInfoSubmarineItemCounterCotrol_ItemData_o *)ItemData;
                GameObjectExtensions__SetLocalPosition_33551944(
                  (UnityEngine_GameObject_o *)ItemObject,
                  *(UnityEngine_Vector2_o *)((char *)ItemData + 20),
                  0LL);
                if ( !ItemObject )
                  break;
                Component_object = UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)ItemObject,
                                     (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_EventInfoSubmarineItemCounterComponent___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                ItemData = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
                if ( ((unsigned __int8)ItemData & 1) == 0 )
                {
                  if ( !Component_object )
                    break;
                  EventInfoSubmarineItemCounterComponent__Setup(
                    (EventInfoSubmarineItemCounterComponent_o *)Component_object,
                    v29,
                    v33,
                    v35);
                  ItemData = this->fields.itemCompnentList;
                  if ( !ItemData )
                    break;
                  v38 = *((_QWORD *)ItemData + 2);
                  v39 = Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__Add__;
                  ++*((_DWORD *)ItemData + 7);
                  if ( !v38 )
                    break;
                  v40 = *((int *)ItemData + 6);
                  if ( (unsigned int)v40 >= *(_DWORD *)(v38 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)ItemData,
                      Component_object,
                      *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v41 = v38 + 8 * v40;
                    *((_DWORD *)ItemData + 6) = v40 + 1;
                    *(_QWORD *)(v41 + 32) = Component_object;
                    sub_1B76164((ServantStatusBattleListViewItem_o *)(v41 + 32), (int32_t)Component_object, v36, v37);
                  }
                }
              }
            }
            v26 = *((_DWORD *)v27 + 6);
            if ( (int)++v28 >= v26 )
              goto LABEL_35;
          }
LABEL_40:
          sub_1B7641C(ItemData, v24);
        }
LABEL_35:
        titleLabel = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        ItemData = LocalizationManager__Get((System_String_o *)StringLiteral_5718/*"EVENT_SUBMARINE_RESOURCE_TITLE"*/, 0LL);
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
  int32_t _1__state; // w8
  struct EventInfoSubmarineItemCounterCotrol_o *_4__this; // x23
  System_Collections_Generic_List_object__o *itemCompnentList; // x0
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x0
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *v12; // x9
  __int128 v13; // q0
  struct System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__o *p__7__wrap1; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x1
  struct EventInfoSubmarineItemCounterComponent_o *current; // x8
  UICounterLabel_o *countLabel; // x0
  bool IsAnimFinished; // w0
  int32_t v21; // w2
  int32_t v22; // w3
  bool result; // w0
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *v24; // x8
  System_Action_o *callback; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-90h] BYREF
  __int64 v28; // [xsp+40h] [xbp-70h]
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o **v29; // [xsp+48h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+50h] [xbp-60h] BYREF
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *v31; // [xsp+78h] [xbp-38h] BYREF

  v31 = this;
  v2 = this;
  if ( (byte_4A2F67D & 1) == 0 )
  {
    sub_1B761C0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__,
      method);
    sub_1B761C0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__MoveNext__,
      v3);
    sub_1B761C0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__get_Current__,
      v4);
    this = (EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *)sub_1B761C0(
                                                                           &Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__GetEnumerator__,
                                                                           v5);
    byte_4A2F67D = 1;
  }
  memset(&i, 0, sizeof(i));
  v28 = 0LL;
  v29 = &v31;
  _1__state = v2->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_1B7641C(this, method);
    itemCompnentList = (System_Collections_Generic_List_object__o *)_4__this->fields.itemCompnentList;
    if ( !itemCompnentList )
      sub_1B7641C(0LL, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v27,
      itemCompnentList,
      (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__GetEnumerator__);
    for ( i = v27;
          System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__MoveNext__);
          EventInfoSubmarineItemCounterComponent__PlayAnimation(
            (EventInfoSubmarineItemCounterComponent_o *)i.fields._current,
            v9) )
    {
      if ( !i.fields._current )
        sub_1B7641C(0LL, v9);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__);
    v11 = (System_Collections_Generic_List_object__o *)_4__this->fields.itemCompnentList;
    if ( !v11 )
      sub_1B7641C(0LL, v10);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v26,
      v11,
      (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__GetEnumerator__);
    v12 = v31;
    v13 = *(_OWORD *)&v26.fields._list;
    p__7__wrap1 = &v31->fields.__7__wrap1;
    v27 = v26;
    v31->fields.__7__wrap1.fields._current = (struct EventInfoSubmarineItemCounterComponent_o *)v26.fields._current;
    *(_OWORD *)&v12->fields.__7__wrap1.fields._list = v13;
    sub_1B76164((ServantStatusBattleListViewItem_o *)p__7__wrap1, 0, v15, v16);
    v2 = v31;
  }
  v2->fields.__1__state = -3;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap1,
            (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__MoveNext__) )
  {
    current = v31->fields.__7__wrap1.fields._current;
    if ( !current )
      sub_1B7641C(v31, v17);
    countLabel = current->fields.countLabel;
    if ( !countLabel )
      sub_1B7641C(0LL, v17);
    IsAnimFinished = UICounterLabel__get_IsAnimFinished(countLabel, 0LL);
    v2 = v31;
    if ( !IsAnimFinished )
    {
      v31->fields.__2__current = 0LL;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&v2->fields.__2__current, 0, v21, v22);
      result = 1;
      v31->fields.__1__state = 1;
      return result;
    }
  }
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12____m__Finally1(v31, v17);
  v24 = v31;
  callback = v31->fields.callback;
  v31->fields.__7__wrap1.fields._list = 0LL;
  *(_QWORD *)&v24->fields.__7__wrap1.fields._index = 0LL;
  v24->fields.__7__wrap1.fields._current = 0LL;
  ActionExtensions__Call(callback, 0LL);
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

  v2 = sub_1B761D4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B7640C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B761D4(&Method_EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_System_Collections_IEnumerator_Reset__);
  sub_1B762E8(v3, v4);
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
  if ( (byte_4A2F67E & 1) == 0 )
  {
    sub_1B761C0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__,
      method);
    byte_4A2F67E = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__);
}


void __fastcall EventInfoSubmarineItemCounterCotrol___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A2F67C & 1) == 0 )
  {
    sub_1B761C0(&EventInfoSubmarineItemCounterCotrol___c_TypeInfo, v1);
    byte_4A2F67C = 1;
  }
  v2 = (Il2CppObject *)sub_1B7640C(EventInfoSubmarineItemCounterCotrol___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventInfoSubmarineItemCounterCotrol___c_TypeInfo->static_fields->__9 = (struct EventInfoSubmarineItemCounterCotrol___c_o *)v2;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)EventInfoSubmarineItemCounterCotrol___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B7641C(this, 0LL);
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
    sub_1B7641C(this, 0LL);
  return x->fields.ItemId == this->fields.itemId;
}