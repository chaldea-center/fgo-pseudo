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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *baseItemPrefab; // x21
  Il2CppObject *v12; // x21
  __int64 v13; // x1
  UnityEngine_Object_o *name; // x0

  if ( (byte_4B17824 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, ent, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_691/*"("*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_809/*")"*/, v9, v10);
    byte_4B17824 = 1;
  }
  baseItemPrefab = (Il2CppObject *)this->fields.baseItemPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, ent);
  v12 = UnityEngine_Object__Instantiate_object_(
          baseItemPrefab,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL) )
  {
    name = (UnityEngine_Object_o *)this->fields.baseItemPrefab;
    if ( !name
      || (name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL), !ent)
      || (name = (UnityEngine_Object_o *)System_String__Concat_62414484(
                                           (System_String_o *)name,
                                           (System_String_o *)StringLiteral_691/*"("*/,
                                           ent->fields.value,
                                           (System_String_o *)StringLiteral_809/*")"*/,
                                           0LL),
          !v12) )
    {
      sub_1BCAA3C(name, v13);
    }
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v12, (System_String_o *)name, 0LL);
    GameObjectExtensions__SafeSetParent_34336992((UnityEngine_GameObject_o *)v12, this->fields.rootObject, 0LL);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v12, 1, 0LL);
  }
  return (UnityEngine_GameObject_o *)v12;
}


// local variable allocation has failed, the output may be wrong!
EventInfoSubmarineItemCounterCotrol_ItemData_o *__fastcall EventInfoSubmarineItemCounterCotrol__GetItemData(
        EventInfoSubmarineItemCounterCotrol_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  struct System_Collections_Generic_List_EventInfoSubmarineItemCounterCotrol_ItemData__o *itemDataList; // x19
  System_Predicate_object__o *v18; // x20

  if ( (byte_4B17825 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterCotrol_ItemData__Find__,
      *(_QWORD *)&itemId,
      method);
    sub_1BCA7E0(&System_Predicate_EventInfoSubmarineItemCounterCotrol_ItemData__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0__GetItemData_b__0__, v8, v9);
    sub_1BCA7E0(&EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_TypeInfo, v10, v11);
    byte_4B17825 = 1;
  }
  v12 = sub_1BCAA2C(EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0_TypeInfo, *(_QWORD *)&itemId, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_DWORD *)(v12 + 16) = itemId,
        itemDataList = this->fields.itemDataList,
        v18 = (System_Predicate_object__o *)sub_1BCAA2C(
                                              System_Predicate_EventInfoSubmarineItemCounterCotrol_ItemData__TypeInfo,
                                              v14,
                                              v15,
                                              v16),
        System_Predicate_object____ctor(
          v18,
          (Il2CppObject *)v12,
          Method_EventInfoSubmarineItemCounterCotrol___c__DisplayClass15_0__GetItemData_b__0__,
          0LL),
        !itemDataList) )
  {
    sub_1BCAA3C(v13, v14);
  }
  return (EventInfoSubmarineItemCounterCotrol_ItemData_o *)System_Collections_Generic_List_object___Find(
                                                             (System_Collections_Generic_List_object__o *)itemDataList,
                                                             (System_Predicate_T__o *)v18,
                                                             (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterCotrol_ItemData__Find__);
}


void __fastcall EventInfoSubmarineItemCounterCotrol__Initialization(
        EventInfoSubmarineItemCounterCotrol_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventInfoSubmarineItemCounterCotrol_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *v12; // x21
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Action_o *v22; // x21

  v5 = this;
  if ( (byte_4B17821 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, entity, method);
    sub_1BCA7E0(&Method_EventInfoSubmarineItemCounterCotrol__Initialization_b__9_0__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent___ctor__, v8, v9);
    this = (EventInfoSubmarineItemCounterCotrol_o *)sub_1BCA7E0(
                                                      &System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__TypeInfo,
                                                      v10,
                                                      v11);
    byte_4B17821 = 1;
  }
  if ( !entity )
    sub_1BCAA3C(this, entity);
  v5->fields.eventId = entity->fields.eventId;
  v12 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__TypeInfo,
                                                       entity,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent___ctor__);
  v5->fields.itemCompnentList = (struct System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__o *)v12;
  sub_1BCA784((PartyOrganizationUtility_o *)&v5->fields.itemCompnentList, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  v22 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v5,
    Method_EventInfoSubmarineItemCounterCotrol__Initialization_b__9_0__,
    0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)v5, entity, v22, 0LL);
}


bool __fastcall EventInfoSubmarineItemCounterCotrol__IsMainInterlude(
        EventInfoSubmarineItemCounterCotrol_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B17826 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventDetailMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6, v7);
    byte_4B17826 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          this->fields.eventId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
LABEL_11:
    sub_1BCAA3C(Master_object, v9);
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
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall EventInfoSubmarineItemCounterCotrol__PlayCountAnim(
        EventInfoSubmarineItemCounterCotrol_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B17823 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_TypeInfo, callback, method);
    byte_4B17823 = 1;
  }
  v6 = sub_1BCAA2C(EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)callback, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall EventInfoSubmarineItemCounterCotrol__Setup(
        EventInfoSubmarineItemCounterCotrol_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_Object_o *baseItemPrefab; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  EventInfoSubmarineItemCounterCotrol___c_c *v29; // x0
  System_Func_object__int__o *_9__10_0; // x21
  Il2CppObject *v31; // x22
  struct EventInfoSubmarineItemCounterCotrol___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  void *ItemData; // x0
  __int64 v41; // x1
  const MethodInfo *v42; // x2
  int v43; // w8
  void *v44; // x20
  unsigned int v45; // w25
  EventUiValueEntity_o *v46; // x21
  __int64 v47; // x1
  UnityEngine_Object_o *ItemObject; // x22
  int32_t v49; // w0
  const MethodInfo *v50; // x2
  EventInfoSubmarineItemCounterCotrol_ItemData_o *v51; // x23
  __int64 v52; // x1
  Il2CppObject *Component_object; // x22
  const MethodInfo *v54; // x3
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  __int64 v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  __int64 v64; // x8
  UILabel_o *titleLabel; // x19

  if ( (byte_4B17822 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___, entitys, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___, v5, v6);
    sub_1BCA7E0(&System_Func_EventUiValueEntity__int__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventInfoSubmarineItemCounterComponent___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__Add__, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_EventInfoSubmarineItemCounterCotrol___c__Setup_b__10_0__, v17, v18);
    sub_1BCA7E0(&EventInfoSubmarineItemCounterCotrol___c_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_5803/*"EVENT_SUBMARINE_RESOURCE_TITLE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_19394/*"event_itembase"*/, v23, v24);
    byte_4B17822 = 1;
  }
  if ( entitys )
  {
    baseItemPrefab = (UnityEngine_Object_o *)this->fields.baseItemPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, entitys);
    if ( !UnityEngine_Object__op_Equality(baseItemPrefab, 0LL, 0LL) )
    {
      EventInfoUIBase__SetSpriteByLocalAtlas(
        (EventInfoUIBase_o *)this,
        this->fields.bgSprite,
        (System_String_o *)StringLiteral_19394/*"event_itembase"*/,
        0LL);
      if ( *(_QWORD *)&entitys->max_length )
      {
        v29 = EventInfoSubmarineItemCounterCotrol___c_TypeInfo;
        if ( !EventInfoSubmarineItemCounterCotrol___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventInfoSubmarineItemCounterCotrol___c_TypeInfo, v26);
          v29 = EventInfoSubmarineItemCounterCotrol___c_TypeInfo;
        }
        _9__10_0 = (System_Func_object__int__o *)v29->static_fields->__9__10_0;
        if ( !_9__10_0 )
        {
          if ( !v29->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v29, v26);
            v29 = EventInfoSubmarineItemCounterCotrol___c_TypeInfo;
          }
          v31 = (Il2CppObject *)v29->static_fields->__9;
          _9__10_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                     System_Func_EventUiValueEntity__int__TypeInfo,
                                                     v26,
                                                     v27,
                                                     v28);
          System_Func_object__int____ctor(
            _9__10_0,
            v31,
            Method_EventInfoSubmarineItemCounterCotrol___c__Setup_b__10_0__,
            0LL);
          static_fields = EventInfoSubmarineItemCounterCotrol___c_TypeInfo->static_fields;
          static_fields->__9__10_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__10_0;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&static_fields->__9__10_0,
            (int64_t)_9__10_0,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38);
        }
        v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                                                                     (System_Func_TSource__TKey__o *)_9__10_0,
                                                                     (const MethodInfo_2F3B8C4 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
        ItemData = System_Linq_Enumerable__ToArray_object_(
                     v39,
                     (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
        if ( !ItemData )
          goto LABEL_40;
        v43 = *((_DWORD *)ItemData + 6);
        v44 = ItemData;
        if ( v43 >= 1 )
        {
          v45 = 0;
          while ( 1 )
          {
            if ( v45 >= v43 )
              sub_1BCAA44(ItemData, v41);
            v46 = (EventUiValueEntity_o *)*((_QWORD *)v44 + (int)v45 + 4);
            if ( !v46 )
              break;
            if ( v46->fields.type == 1 )
            {
              ItemObject = (UnityEngine_Object_o *)EventInfoSubmarineItemCounterCotrol__CreateItemObject(this, v46, v42);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47);
              ItemData = (void *)UnityEngine_Object__op_Equality(ItemObject, 0LL, 0LL);
              if ( ((unsigned __int8)ItemData & 1) == 0 )
              {
                v49 = System_Int32__Parse(v46->fields.value, 0LL);
                ItemData = EventInfoSubmarineItemCounterCotrol__GetItemData(this, v49, v50);
                if ( !ItemData )
                  break;
                v51 = (EventInfoSubmarineItemCounterCotrol_ItemData_o *)ItemData;
                GameObjectExtensions__SetLocalPosition_34330940(
                  (UnityEngine_GameObject_o *)ItemObject,
                  *(UnityEngine_Vector2_o *)((char *)ItemData + 20),
                  0LL);
                if ( !ItemObject )
                  break;
                Component_object = UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)ItemObject,
                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventInfoSubmarineItemCounterComponent___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v52);
                ItemData = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
                if ( ((unsigned __int8)ItemData & 1) == 0 )
                {
                  if ( !Component_object )
                    break;
                  EventInfoSubmarineItemCounterComponent__Setup(
                    (EventInfoSubmarineItemCounterComponent_o *)Component_object,
                    v46,
                    v51,
                    v54);
                  ItemData = this->fields.itemCompnentList;
                  if ( !ItemData )
                    break;
                  v61 = *((_QWORD *)ItemData + 2);
                  v62 = Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__Add__;
                  ++*((_DWORD *)ItemData + 7);
                  if ( !v61 )
                    break;
                  v63 = *((int *)ItemData + 6);
                  if ( (unsigned int)v63 >= *(_DWORD *)(v61 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)ItemData,
                      Component_object,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v64 = v61 + 8 * v63;
                    *((_DWORD *)ItemData + 6) = v63 + 1;
                    *(_QWORD *)(v64 + 32) = Component_object;
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)(v64 + 32),
                      (int64_t)Component_object,
                      v55,
                      v56,
                      v57,
                      v58,
                      v59,
                      v60);
                  }
                }
              }
            }
            v43 = *((_DWORD *)v44 + 6);
            if ( (int)++v45 >= v43 )
              goto LABEL_35;
          }
LABEL_40:
          sub_1BCAA3C(ItemData, v41);
        }
LABEL_35:
        titleLabel = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41);
        ItemData = LocalizationManager__Get((System_String_o *)StringLiteral_5803/*"EVENT_SUBMARINE_RESOURCE_TITLE"*/, 0LL);
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
  __int64 v2; // x2
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t _1__state; // w8
  struct EventInfoSubmarineItemCounterCotrol_o *_4__this; // x23
  System_Collections_Generic_List_object__o *itemCompnentList; // x0
  const MethodInfo *v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x0
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *v16; // x9
  __int128 v17; // q0
  struct System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__o *p__7__wrap1; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  const MethodInfo *v25; // x1
  struct EventInfoSubmarineItemCounterComponent_o *current; // x8
  UICounterLabel_o *countLabel; // x0
  bool IsAnimFinished; // w0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  bool result; // w0
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *v36; // x8
  System_Action_o *callback; // x0
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-90h] BYREF
  __int64 v40; // [xsp+40h] [xbp-70h]
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o **v41; // [xsp+48h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+50h] [xbp-60h] BYREF
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *v43; // [xsp+78h] [xbp-38h] BYREF

  v43 = this;
  v3 = this;
  if ( (byte_4B17828 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__get_Current__,
      v6,
      v7);
    this = (EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_o *)sub_1BCA7E0(
                                                                           &Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__GetEnumerator__,
                                                                           v8,
                                                                           v9);
    byte_4B17828 = 1;
  }
  memset(&i, 0, sizeof(i));
  v40 = 0LL;
  v41 = &v43;
  _1__state = v3->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    _4__this = v3->fields.__4__this;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      sub_1BCAA3C(this, method);
    itemCompnentList = (System_Collections_Generic_List_object__o *)_4__this->fields.itemCompnentList;
    if ( !itemCompnentList )
      sub_1BCAA3C(0LL, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v39,
      itemCompnentList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__GetEnumerator__);
    for ( i = v39;
          System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__MoveNext__);
          EventInfoSubmarineItemCounterComponent__PlayAnimation(
            (EventInfoSubmarineItemCounterComponent_o *)i.fields._current,
            v13) )
    {
      if ( !i.fields._current )
        sub_1BCAA3C(0LL, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__);
    v15 = (System_Collections_Generic_List_object__o *)_4__this->fields.itemCompnentList;
    if ( !v15 )
      sub_1BCAA3C(0LL, v14);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v38,
      v15,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventInfoSubmarineItemCounterComponent__GetEnumerator__);
    v16 = v43;
    v17 = *(_OWORD *)&v38.fields._list;
    p__7__wrap1 = &v43->fields.__7__wrap1;
    v39 = v38;
    v43->fields.__7__wrap1.fields._current = (struct EventInfoSubmarineItemCounterComponent_o *)v38.fields._current;
    *(_OWORD *)&v16->fields.__7__wrap1.fields._list = v17;
    sub_1BCA784((PartyOrganizationUtility_o *)p__7__wrap1, 0LL, v19, v20, v21, v22, v23, v24);
    v3 = v43;
  }
  v3->fields.__1__state = -3;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v3->fields.__7__wrap1,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__MoveNext__) )
  {
    current = v43->fields.__7__wrap1.fields._current;
    if ( !current )
      sub_1BCAA3C(v43, v25);
    countLabel = current->fields.countLabel;
    if ( !countLabel )
      sub_1BCAA3C(0LL, v25);
    IsAnimFinished = UICounterLabel__get_IsAnimFinished(countLabel, 0LL);
    v3 = v43;
    if ( !IsAnimFinished )
    {
      v43->fields.__2__current = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.__2__current, 0LL, v29, v30, v31, v32, v33, v34);
      result = 1;
      v43->fields.__1__state = 1;
      return result;
    }
  }
  EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12____m__Finally1(v43, v25);
  v36 = v43;
  callback = v43->fields.callback;
  v43->fields.__7__wrap1.fields._list = 0LL;
  *(_QWORD *)&v36->fields.__7__wrap1.fields._index = 0LL;
  v36->fields.__7__wrap1.fields._current = 0LL;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_EventInfoSubmarineItemCounterCotrol__PlayCountAnim_d__12_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2

  if ( (byte_4B17829 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__,
      method,
      v2);
    byte_4B17829 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoSubmarineItemCounterComponent__Dispose__);
}


void __fastcall EventInfoSubmarineItemCounterCotrol___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B17827 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoSubmarineItemCounterCotrol___c_TypeInfo, v1, v2);
    byte_4B17827 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventInfoSubmarineItemCounterCotrol___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventInfoSubmarineItemCounterCotrol___c_TypeInfo->static_fields->__9 = (struct EventInfoSubmarineItemCounterCotrol___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventInfoSubmarineItemCounterCotrol___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.ItemId == this->fields.itemId;
}