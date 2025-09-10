void EventInfoCommandBuffPointControl___ctor(EventInfoCommandBuffPointControl_o *this, const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


UnityEngine_GameObject_o *EventInfoCommandBuffPointControl__CreateBuffPointObject(
        EventInfoCommandBuffPointControl_o *this,
        EventUiValueEntity_o *ent,
        const MethodInfo *method)
{
  Il2CppObject *baseBuffPointPrefab; // x21
  Il2CppObject *v6; // x21
  __int64 v7; // x1
  UnityEngine_Object_o *name; // x0

  if ( (byte_4C27733 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_654/*"("*/);
    sub_1C2D490(&StringLiteral_759/*")"*/);
    byte_4C27733 = 1;
  }
  baseBuffPointPrefab = (Il2CppObject *)this->fields.baseBuffPointPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__Instantiate_object_(
         baseBuffPointPrefab,
         (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0) )
  {
    name = (UnityEngine_Object_o *)this->fields.baseBuffPointPrefab;
    if ( !name
      || (name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0), !ent)
      || (name = (UnityEngine_Object_o *)System_String__Concat_63498116(
                                           (System_String_o *)name,
                                           (System_String_o *)StringLiteral_654/*"("*/,
                                           ent->fields.value,
                                           (System_String_o *)StringLiteral_759/*")"*/,
                                           0),
          !v6) )
    {
      sub_1C2D6EC(name, v7);
    }
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v6, (System_String_o *)name, 0);
    GameObjectExtensions__SafeSetParent_35924288((UnityEngine_GameObject_o *)v6, this->fields.rootObject, 0);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v6, 1, 0);
  }
  return (UnityEngine_GameObject_o *)v6;
}


EventInfoCommandBuffPointComponent_ViewData_o *EventInfoCommandBuffPointControl__GetViewData(
        EventInfoCommandBuffPointControl_o *this,
        int32_t GroupId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_EventInfoCommandBuffPointComponent_ViewData__o *ViewDataList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4C27734 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent_ViewData__Find__);
    sub_1C2D490(&System_Predicate_EventInfoCommandBuffPointComponent_ViewData__TypeInfo);
    sub_1C2D490(&Method_EventInfoCommandBuffPointControl___c__DisplayClass15_0__GetViewData_b__0__);
    sub_1C2D490(&EventInfoCommandBuffPointControl___c__DisplayClass15_0_TypeInfo);
    byte_4C27734 = 1;
  }
  v5 = sub_1C2D6DC(EventInfoCommandBuffPointControl___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = GroupId,
        ViewDataList = this->fields.ViewDataList,
        v9 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_EventInfoCommandBuffPointComponent_ViewData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_EventInfoCommandBuffPointControl___c__DisplayClass15_0__GetViewData_b__0__,
          0),
        !ViewDataList) )
  {
    sub_1C2D6EC(v6, v7);
  }
  return (EventInfoCommandBuffPointComponent_ViewData_o *)System_Collections_Generic_List_object___Find(
                                                            (System_Collections_Generic_List_object__o *)ViewDataList,
                                                            (System_Predicate_T__o *)v9,
                                                            (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent_ViewData__Find__);
}


void EventInfoCommandBuffPointControl__Initialization(
        EventInfoCommandBuffPointControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C27731 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventInfoCommandBuffPointComponent__TypeInfo);
    byte_4C27731 = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventUiEntity, (int32_t)entity, (int32_t)method, v3);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventInfoCommandBuffPointComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent___ctor__);
  this->fields.buffPointCompnentList = (struct System_Collections_Generic_List_EventInfoCommandBuffPointComponent__o *)v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.buffPointCompnentList, (int32_t)v6, v7, v8);
}


void EventInfoCommandBuffPointControl__Redisplay(EventInfoCommandBuffPointControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventInfoCommandBuffPointComponent__o *buffPointCompnentList; // x0
  int64_t i; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *current; // x21
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C27735 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__GetEnumerator__);
    byte_4C27735 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  buffPointCompnentList = this->fields.buffPointCompnentList;
  if ( !buffPointCompnentList )
    sub_1C2D6EC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)buffPointCompnentList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__GetEnumerator__);
  for ( i = 0; ; i += *(int64_t *)((char *)off_50 + (_QWORD)current) )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__MoveNext__);
    if ( !v5 )
      break;
    current = v9.fields._current;
    if ( !v9.fields._current )
      sub_1C2D6EC(v5, v6);
    EventInfoCommandBuffPointComponent__UpdatePoint((EventInfoCommandBuffPointComponent_o *)v9.fields._current, v6);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__Dispose__);
  EventInfoCommandBuffPointControl__SetTotalPointLabel(this, i, v8);
}


void EventInfoCommandBuffPointControl__SetTotalPointLabel(
        EventInfoCommandBuffPointControl_o *this,
        int64_t totalPoint,
        const MethodInfo *method)
{
  UnityEngine_Object_o *totalPointLabel; // x21
  UILabel_o *v6; // x20
  System_String_o *v7; // x21
  BalanceConfig_c *v8; // x8
  int64_t UserPointEventMax; // x22
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  __int64 v15; // x1
  int64_t v16; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C27736 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&System_Math_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_5630/*"EVENT_POINT_COMMON_FORMAT"*/);
    byte_4C27736 = 1;
  }
  totalPointLabel = (UnityEngine_Object_o *)this->fields.totalPointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(totalPointLabel, 0, 0) )
  {
    v6 = this->fields.totalPointLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5630/*"EVENT_POINT_COMMON_FORMAT"*/, 0);
    v8 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v8 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v8->static_fields->UserPointEventMax;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v16 = System_Math__Min_64982380(totalPoint, UserPointEventMax, 0);
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v16, v10, v11, v12);
    v14 = System_String__Format(v7, v13, 0);
    if ( !v6 )
      sub_1C2D6EC(v14, v15);
    UILabel__set_text(v6, v14, 0);
  }
}


void EventInfoCommandBuffPointControl__Setup(
        EventInfoCommandBuffPointControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseBuffPointPrefab; // x21
  UnityEngine_Object_o *titleObject; // x21
  float v7; // s8
  __int64 v8; // x1
  void *totalPointBgSprite; // x0
  Il2CppObject *Component_object; // x21
  UnityEngine_Object_o *titleBgSprite; // x21
  System_String_o *titleBgSpriteName; // x21
  UISprite_o *v13; // x22
  EventInfoCommandBuffPointControl___c_c *v14; // x0
  System_Func_object__int__o *_9__13_0; // x21
  Il2CppObject *v16; // x22
  struct EventInfoCommandBuffPointControl___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  const MethodInfo *v21; // x2
  int v22; // w8
  void *v23; // x21
  unsigned int v24; // w25
  int64_t v25; // x20
  EventUiValueEntity_o *v26; // x22
  UnityEngine_Object_o *BuffPointObject; // x23
  UnityEngine_Object_o *v28; // x23
  int32_t v29; // w0
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x4
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  _DWORD *monitor; // x8
  int v35; // s0
  void *v36; // x9
  __int64 v37; // x8
  _QWORD *v38; // x10
  __int64 v39; // x11
  __int64 v40; // x8
  UnityEngine_Object_o *totalPointObject; // x21
  const MethodInfo *v42; // x2
  UnityEngine_Object_o *v43; // x20
  System_String_o *totalPointBgSpriteName; // x20
  UISprite_o *v45; // x21

  if ( (byte_4C27732 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    sub_1C2D490(&System_Func_EventUiValueEntity__int__TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_EventInfoCommandBuffPointComponent___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__Add__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_EventInfoCommandBuffPointControl___c__Setup_b__13_0__);
    sub_1C2D490(&EventInfoCommandBuffPointControl___c_TypeInfo);
    byte_4C27732 = 1;
  }
  if ( entitys )
  {
    baseBuffPointPrefab = (UnityEngine_Object_o *)this->fields.baseBuffPointPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(baseBuffPointPrefab, 0, 0) )
    {
      titleObject = (UnityEngine_Object_o *)this->fields.titleObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v7 = 0.0;
      if ( UnityEngine_Object__op_Inequality(titleObject, 0, 0) )
      {
        GameObjectExtensions__AddLocalPositionY(this->fields.titleObject, 0.0, 0);
        totalPointBgSprite = this->fields.titleObject;
        if ( !totalPointBgSprite )
          goto LABEL_66;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)totalPointBgSprite,
                             (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        totalPointBgSprite = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        v7 = 0.0;
        if ( ((unsigned __int8)totalPointBgSprite & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_66;
          v7 = 0.0 - (float)SHIDWORD(Component_object[10].monitor);
        }
      }
      titleBgSprite = (UnityEngine_Object_o *)this->fields.titleBgSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(titleBgSprite, 0, 0)
        && !System_String__IsNullOrEmpty(this->fields.titleBgSpriteName, 0) )
      {
        v13 = this->fields.titleBgSprite;
        titleBgSpriteName = this->fields.titleBgSpriteName;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventUI(v13, titleBgSpriteName, 0);
        totalPointBgSprite = this->fields.totalPointBgSprite;
        if ( !totalPointBgSprite )
          goto LABEL_66;
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)totalPointBgSprite + 840LL))(
          totalPointBgSprite,
          *(_QWORD *)(*(_QWORD *)totalPointBgSprite + 848LL));
      }
      v14 = EventInfoCommandBuffPointControl___c_TypeInfo;
      if ( !EventInfoCommandBuffPointControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoCommandBuffPointControl___c_TypeInfo);
        v14 = EventInfoCommandBuffPointControl___c_TypeInfo;
      }
      _9__13_0 = (System_Func_object__int__o *)v14->static_fields->__9__13_0;
      if ( !_9__13_0 )
      {
        if ( !v14->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v14);
          v14 = EventInfoCommandBuffPointControl___c_TypeInfo;
        }
        v16 = (Il2CppObject *)v14->static_fields->__9;
        _9__13_0 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_EventUiValueEntity__int__TypeInfo);
        System_Func_object__int____ctor(_9__13_0, v16, Method_EventInfoCommandBuffPointControl___c__Setup_b__13_0__, 0);
        static_fields = EventInfoCommandBuffPointControl___c_TypeInfo->static_fields;
        static_fields->__9__13_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__13_0;
        sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v18, v19);
      }
      v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                                                                   (System_Func_TSource__TKey__o *)_9__13_0,
                                                                   (const MethodInfo_30FE624 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
      totalPointBgSprite = System_Linq_Enumerable__ToArray_object_(
                             v20,
                             (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
      if ( !totalPointBgSprite )
        goto LABEL_66;
      v22 = *((_DWORD *)totalPointBgSprite + 6);
      v23 = totalPointBgSprite;
      if ( v22 >= 1 )
      {
        v24 = 0;
        v25 = 0;
        while ( 1 )
        {
          if ( v24 >= v22 )
            sub_1C2D6F4(totalPointBgSprite, v8, v21);
          v26 = (EventUiValueEntity_o *)*((_QWORD *)v23 + (int)v24 + 4);
          if ( !v26 )
            break;
          if ( v26->fields.type == 2 )
          {
            BuffPointObject = (UnityEngine_Object_o *)EventInfoCommandBuffPointControl__CreateBuffPointObject(
                                                        this,
                                                        v26,
                                                        v21);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            totalPointBgSprite = (void *)UnityEngine_Object__op_Equality(BuffPointObject, 0, 0);
            if ( ((unsigned __int8)totalPointBgSprite & 1) == 0 )
            {
              GameObjectExtensions__AddLocalPositionY((UnityEngine_GameObject_o *)BuffPointObject, v7, 0);
              if ( !BuffPointObject )
                break;
              v28 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)BuffPointObject,
                                              (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EventInfoCommandBuffPointComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              totalPointBgSprite = (void *)UnityEngine_Object__op_Equality(v28, 0, 0);
              if ( ((unsigned __int8)totalPointBgSprite & 1) == 0 )
              {
                v29 = System_Int32__Parse(v26->fields.value, 0);
                totalPointBgSprite = EventInfoCommandBuffPointControl__GetViewData(this, v29, v30);
                if ( !v28 )
                  break;
                EventInfoCommandBuffPointComponent__Setup(
                  (EventInfoCommandBuffPointComponent_o *)v28,
                  this->fields.eventUiEntity,
                  v26,
                  (EventInfoCommandBuffPointComponent_ViewData_o *)totalPointBgSprite,
                  v31);
                monitor = v28[1].monitor;
                if ( !monitor )
                  break;
                totalPointBgSprite = this->fields.buffPointCompnentList;
                if ( !totalPointBgSprite )
                  break;
                v35 = monitor[43];
                v36 = v28[3].monitor;
                v37 = *((_QWORD *)totalPointBgSprite + 2);
                v38 = Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__Add__;
                ++*((_DWORD *)totalPointBgSprite + 7);
                if ( !v37 )
                  break;
                v39 = *((int *)totalPointBgSprite + 6);
                v7 = v7 - (float)v35;
                v25 += (int64_t)v36;
                if ( (unsigned int)v39 >= *(_DWORD *)(v37 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)totalPointBgSprite,
                    (Il2CppObject *)v28,
                    *(const MethodInfo_3789B84 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
                }
                else
                {
                  v40 = v37 + 8 * v39;
                  *((_DWORD *)totalPointBgSprite + 6) = v39 + 1;
                  *(_QWORD *)(v40 + 32) = v28;
                  sub_1C2D434((CGThumbnailListItem_o *)(v40 + 32), (int32_t)v28, v32, v33);
                }
              }
            }
          }
          v22 = *((_DWORD *)v23 + 6);
          if ( (int)++v24 >= v22 )
            goto LABEL_53;
        }
LABEL_66:
        sub_1C2D6EC(totalPointBgSprite, v8);
      }
      v25 = 0;
LABEL_53:
      totalPointObject = (UnityEngine_Object_o *)this->fields.totalPointObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(totalPointObject, 0, 0) )
        GameObjectExtensions__AddLocalPositionY(this->fields.totalPointObject, v7, 0);
      EventInfoCommandBuffPointControl__SetTotalPointLabel(this, v25, v42);
      v43 = (UnityEngine_Object_o *)this->fields.totalPointBgSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v43, 0, 0)
        && !System_String__IsNullOrEmpty(this->fields.totalPointBgSpriteName, 0) )
      {
        v45 = this->fields.totalPointBgSprite;
        totalPointBgSpriteName = this->fields.totalPointBgSpriteName;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventUI(v45, totalPointBgSpriteName, 0);
        totalPointBgSprite = this->fields.totalPointBgSprite;
        if ( !totalPointBgSprite )
          goto LABEL_66;
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)totalPointBgSprite + 840LL))(
          totalPointBgSprite,
          *(_QWORD *)(*(_QWORD *)totalPointBgSprite + 848LL));
      }
    }
  }
}


void EventInfoCommandBuffPointControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C27737 & 1) == 0 )
  {
    sub_1C2D490(&EventInfoCommandBuffPointControl___c_TypeInfo);
    byte_4C27737 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(EventInfoCommandBuffPointControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoCommandBuffPointControl___c_TypeInfo->static_fields->__9 = (struct EventInfoCommandBuffPointControl___c_o *)v1;
  sub_1C2D434(
    (CGThumbnailListItem_o *)EventInfoCommandBuffPointControl___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void EventInfoCommandBuffPointControl___c___ctor(
        EventInfoCommandBuffPointControl___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventInfoCommandBuffPointControl___c___Setup_b__13_0(
        EventInfoCommandBuffPointControl___c_o *this,
        EventUiValueEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C2D6EC(this, 0);
  return ent->fields.priority;
}


void EventInfoCommandBuffPointControl___c__DisplayClass15_0___ctor(
        EventInfoCommandBuffPointControl___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventInfoCommandBuffPointControl___c__DisplayClass15_0___GetViewData_b__0(
        EventInfoCommandBuffPointControl___c__DisplayClass15_0_o *this,
        EventInfoCommandBuffPointComponent_ViewData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.GroupId == this->fields.GroupId;
}