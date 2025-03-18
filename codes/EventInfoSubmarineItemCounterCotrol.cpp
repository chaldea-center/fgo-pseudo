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

  if ( (byte_4C23677 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject___, ent);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_672/*"(401) Unauthorized"*/, v6);
    sub_1C3B764(&StringLiteral_791/*")|("*/, v7);
    byte_4C23677 = 1;
  }
  baseItemPrefab = (Il2CppObject *)this->fields.baseItemPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__Instantiate_object_(
         baseItemPrefab,
         (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL) )
  {
    name = (UnityEngine_Object_o *)this->fields.baseItemPrefab;
    if ( !name
      || (name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL), !ent)
      || (name = (UnityEngine_Object_o *)System_String__Concat_63381876(
                                           (System_String_o *)name,
                                           (System_String_o *)StringLiteral_672/*"(401) Unauthorized"*/,
                                           ent->fields.value,
                                           (System_String_o *)StringLiteral_791/*")|("*/,
                                           0LL),
          !v9) )
    {
      sub_1C3B9C0(name, v10);
    }
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v9, (System_String_o *)name, 0LL);
    GameObjectExtensions__SafeSetParent_34969340((UnityEngine_GameObject_o *)v9, this->fields.rootObject, 0LL);
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
  EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_EventInfoSubmarineItemCounterCotrol_ItemData__o *itemDataList; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_4C23678 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterCotrol_ItemData__Find__,
      *(_QWORD *)&itemId);
    sub_1C3B764(&System_Predicate_EventInfoSubmarineItemCounterCotrol_ItemData__TypeInfo, v5);
    sub_1C3B764(&Method_EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0__GetItemData_b__0__, v6);
    sub_1C3B764(&EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_TypeInfo, v7);
    byte_4C23678 = 1;
  }
  v8 = (EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_o *)sub_1C3B9B0(EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_TypeInfo);
  EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0___ctor(v8, 0LL);
  if ( !v8
    || (v8->fields.itemId = itemId,
        itemDataList = this->fields.itemDataList,
        v12 = (System_Predicate_object__o *)sub_1C3B9B0(System_Predicate_EventInfoSubmarineItemCounterCotrol_ItemData__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0__GetItemData_b__0__,
          0LL),
        !itemDataList) )
  {
    sub_1C3B9C0(v9, v10);
  }
  return (EventInfoSubmarineItemCounterCotrol_ItemData_o *)System_Collections_Generic_List_object___Find(
                                                             (System_Collections_Generic_List_object__o *)itemDataList,
                                                             (System_Predicate_T__o *)v12,
                                                             (const MethodInfo_368C2D4 *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterCotrol_ItemData__Find__);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Action_o *v15; // x21

  v4 = this;
  if ( (byte_4C23674 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, entity);
    sub_1C3B764(&Method_EventInfoSubmarineItemCounterCotrol__Initialization_b__9_0__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent___ctor__, v6);
    this = (EventInfoSubmarineItemCounterCotrol_o *)sub_1C3B764(
                                                      &System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__TypeInfo,
                                                      v7);
    byte_4C23674 = 1;
  }
  if ( !entity )
    sub_1C3B9C0(this, entity);
  v4->fields.eventId = entity->fields.eventId;
  v8 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent___ctor__);
  v4->fields.itemCompnentList = (struct System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__o *)v8;
  sub_1C3B708((PartyOrganizationUtility_o *)&v4->fields.itemCompnentList, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  v15 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v4,
    Method_EventInfoSubmarineItemCounterCotrol__Initialization_b__9_0__,
    0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)v4, entity, v15, 0LL);
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

  if ( (byte_4C23679 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_EventDetailMaster___, method);
    sub_1C3B764(&DataManager_TypeInfo, v3);
    sub_1C3B764(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v4);
    byte_4C23679 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          this->fields.eventId,
          (const MethodInfo_329AE94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
LABEL_11:
    sub_1C3B9C0(Master_object, v6);
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
    UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4C23676 & 1) == 0 )
  {
    sub_1C3B764(&EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_TypeInfo, callback);
    byte_4C23676 = 1;
  }
  v5 = sub_1C3B9B0(EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_TypeInfo);
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12___ctor(
    (EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1C3B9C0(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C3B708((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)callback, v14, v15, v16, v17, v18, v19);
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  void *ItemData; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x2
  int v30; // w8
  void *v31; // x20
  unsigned int v32; // w25
  EventUiValueEntity_o *v33; // x21
  UnityEngine_Object_o *ItemObject; // x22
  int32_t v35; // w0
  const MethodInfo *v36; // x2
  EventInfoSubmarineItemCounterCotrol_ItemData_o *v37; // x23
  Il2CppObject *Component_object; // x22
  const MethodInfo *v39; // x3
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  UILabel_o *titleLabel; // x19

  if ( (byte_4C23675 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___, entitys);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___, v5);
    sub_1C3B764(&System_Func_EventUiValueEntity__int__TypeInfo, v6);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_EventInfoSubmarineItemCounterComponent___, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__Add__, v8);
    sub_1C3B764(&LocalizationManager_TypeInfo, v9);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v10);
    sub_1C3B764(&Method_EventInfoSubmarineItemCounterCotrol___c__Setup_b__10_0__, v11);
    sub_1C3B764(&EventInfoSubmarineItemCounterCotrol___c_TypeInfo, v12);
    sub_1C3B764(&StringLiteral_5838/*"Elements with the same name and in the same scope must have the same type."*/, v13);
    sub_1C3B764(&StringLiteral_19572/*"hidden"*/, v14);
    byte_4C23675 = 1;
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
        (System_String_o *)StringLiteral_19572/*"hidden"*/,
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
          _9__10_0 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_EventUiValueEntity__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__10_0,
            v18,
            Method_EventInfoSubmarineItemCounterCotrol___c__Setup_b__10_0__,
            0LL);
          static_fields = EventInfoSubmarineItemCounterCotrol___c_TypeInfo->static_fields;
          static_fields->__9__10_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__10_0;
          sub_1C3B708(
            (PartyOrganizationUtility_o *)&static_fields->__9__10_0,
            (int64_t)_9__10_0,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25);
        }
        v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                                                                     (System_Func_TSource__TKey__o *)_9__10_0,
                                                                     (const MethodInfo_301A780 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
        ItemData = System_Linq_Enumerable__ToArray_object_(
                     v26,
                     (const MethodInfo_302ACC8 *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
        if ( !ItemData )
          goto LABEL_40;
        v30 = *((_DWORD *)ItemData + 6);
        v31 = ItemData;
        if ( v30 >= 1 )
        {
          v32 = 0;
          while ( 1 )
          {
            if ( v32 >= v30 )
              sub_1C3B9C8(ItemData, v28);
            v33 = (EventUiValueEntity_o *)*((_QWORD *)v31 + (int)v32 + 4);
            if ( !v33 )
              break;
            if ( v33->fields.type == 1 )
            {
              ItemObject = (UnityEngine_Object_o *)EventInfoSubmarineItemCounterCotrol__CreateItemObject(this, v33, v29);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              ItemData = (void *)UnityEngine_Object__op_Equality(ItemObject, 0LL, 0LL);
              if ( ((unsigned __int8)ItemData & 1) == 0 )
              {
                v35 = System_Int32__Parse(v33->fields.value, 0LL);
                ItemData = EventInfoSubmarineItemCounterCotrol__GetItemData(this, v35, v36);
                if ( !ItemData )
                  break;
                v37 = (EventInfoSubmarineItemCounterCotrol_ItemData_o *)ItemData;
                GameObjectExtensions__SetLocalPosition_34963288(
                  (UnityEngine_GameObject_o *)ItemObject,
                  *(UnityEngine_Vector2_o *)((char *)ItemData + 20),
                  0LL);
                if ( !ItemObject )
                  break;
                Component_object = UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)ItemObject,
                                     (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_EventInfoSubmarineItemCounterComponent___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                ItemData = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
                if ( ((unsigned __int8)ItemData & 1) == 0 )
                {
                  if ( !Component_object )
                    break;
                  EventInfoSubmarineItemCounterComponent__Setup(
                    (EventInfoSubmarineItemCounterComponent_o *)Component_object,
                    v33,
                    v37,
                    v39);
                  ItemData = this->fields.itemCompnentList;
                  if ( !ItemData )
                    break;
                  v46 = *((_QWORD *)ItemData + 2);
                  v47 = Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__Add__;
                  ++*((_DWORD *)ItemData + 7);
                  if ( !v46 )
                    break;
                  v48 = *((int *)ItemData + 6);
                  if ( (unsigned int)v48 >= *(_DWORD *)(v46 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)ItemData,
                      Component_object,
                      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v49 = v46 + 8 * v48;
                    *((_DWORD *)ItemData + 6) = v48 + 1;
                    *(_QWORD *)(v49 + 32) = Component_object;
                    sub_1C3B708(
                      (PartyOrganizationUtility_o *)(v49 + 32),
                      (int64_t)Component_object,
                      v40,
                      v41,
                      v42,
                      v43,
                      v44,
                      v45);
                  }
                }
              }
            }
            v30 = *((_DWORD *)v31 + 6);
            if ( (int)++v32 >= v30 )
              goto LABEL_35;
          }
LABEL_40:
          sub_1C3B9C0(ItemData, v28);
        }
LABEL_35:
        titleLabel = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        ItemData = LocalizationManager__Get((System_String_o *)StringLiteral_5838/*"Elements with the same name and in the same scope must have the same type."*/, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x0
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *v12; // x9
  __int128 v13; // q0
  struct System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__o *p__7__wrap1; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  const MethodInfo *v21; // x1
  EventInfoSubmarineItemCounterComponent_o *current; // x0
  bool IsAnimFinished; // w0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  bool result; // w0
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *v31; // x8
  System_Action_o *callback; // x0
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+20h] [xbp-90h] BYREF
  __int64 v35; // [xsp+40h] [xbp-70h]
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o **v36; // [xsp+48h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+50h] [xbp-60h] BYREF
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *v38; // [xsp+78h] [xbp-38h] BYREF

  v38 = this;
  v2 = this;
  if ( (byte_4C23F8E & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__,
      method);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__MoveNext__,
      v3);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__get_Current__,
      v4);
    this = (EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *)sub_1C3B764(
                                                                           &Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__GetEnumerator__,
                                                                           v5);
    byte_4C23F8E = 1;
  }
  memset(&i, 0, sizeof(i));
  v35 = 0LL;
  v36 = &v38;
  _1__state = v2->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C3B9C0(this, method);
    itemCompnentList = (System_Collections_Generic_List_object__o *)_4__this->fields.itemCompnentList;
    if ( !itemCompnentList )
      sub_1C3B9C0(0LL, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v34,
      itemCompnentList,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__GetEnumerator__);
    for ( i = v34;
          System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__MoveNext__);
          EventInfoSubmarineItemCounterComponent__PlayAnimation(
            (EventInfoSubmarineItemCounterComponent_o *)i.fields._current,
            0LL) )
    {
      if ( !i.fields._current )
        sub_1C3B9C0(0LL, v9);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__);
    v11 = (System_Collections_Generic_List_object__o *)_4__this->fields.itemCompnentList;
    if ( !v11 )
      sub_1C3B9C0(0LL, v10);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v33,
      v11,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__GetEnumerator__);
    v12 = v38;
    v13 = *(_OWORD *)&v33.fields._list;
    p__7__wrap1 = &v38->fields.__7__wrap1;
    v34 = v33;
    v38->fields.__7__wrap1.fields._current = (struct EventInfoSubmarineItemCounterComponent_o *)v33.fields._current;
    *(_OWORD *)&v12->fields.__7__wrap1.fields._list = v13;
    sub_1C3B708((PartyOrganizationUtility_o *)p__7__wrap1, 0LL, v15, v16, v17, v18, v19, v20);
    v2 = v38;
  }
  v2->fields.__1__state = -3;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap1,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__MoveNext__) )
  {
    current = v38->fields.__7__wrap1.fields._current;
    if ( !current )
      sub_1C3B9C0(0LL, v21);
    IsAnimFinished = EventInfoSubmarineItemCounterComponent__get_IsAnimFinished(current, 0LL);
    v2 = v38;
    if ( !IsAnimFinished )
    {
      v38->fields.__2__current = 0LL;
      sub_1C3B708((PartyOrganizationUtility_o *)&v2->fields.__2__current, 0LL, v24, v25, v26, v27, v28, v29);
      result = 1;
      v38->fields.__1__state = 1;
      return result;
    }
  }
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12____m__Finally1(v38, v21);
  v31 = v38;
  callback = v38->fields.callback;
  v38->fields.__7__wrap1.fields._list = 0LL;
  *(_QWORD *)&v31->fields.__7__wrap1.fields._index = 0LL;
  v31->fields.__7__wrap1.fields._current = 0LL;
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

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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
  if ( (byte_4C23F8F & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__,
      method);
    byte_4C23F8F = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__);
}


void __fastcall EventInfoSubmarineItemCounterCotrol___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C23F8D & 1) == 0 )
  {
    sub_1C3B764(&EventInfoSubmarineItemCounterCotrol___c_TypeInfo, v1);
    byte_4C23F8D = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(EventInfoSubmarineItemCounterCotrol___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventInfoSubmarineItemCounterCotrol___c_TypeInfo->static_fields->__9 = (struct EventInfoSubmarineItemCounterCotrol___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)EventInfoSubmarineItemCounterCotrol___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, 0LL);
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
    sub_1C3B9C0(this, 0LL);
  return x->fields.ItemId == this->fields.itemId;
}