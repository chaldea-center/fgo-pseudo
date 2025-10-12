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
  UnityEngine_Object_o *name; // x0

  if ( (byte_4C37DBD & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_654/*"("*/);
    sub_1C32C20(&StringLiteral_759/*")"*/);
    byte_4C37DBD = 1;
  }
  baseBuffPointPrefab = (Il2CppObject *)this->fields.baseBuffPointPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__Instantiate_object_(
         baseBuffPointPrefab,
         (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0) )
  {
    name = (UnityEngine_Object_o *)this->fields.baseBuffPointPrefab;
    if ( !name
      || (name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0), !ent)
      || (name = (UnityEngine_Object_o *)System_String__Concat_63558796(
                                           (System_String_o *)name,
                                           (System_String_o *)StringLiteral_654/*"("*/,
                                           ent->fields.value,
                                           (System_String_o *)StringLiteral_759/*")"*/,
                                           0),
          !v6) )
    {
      sub_1C32E7C(name);
    }
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v6, (System_String_o *)name, 0);
    GameObjectExtensions__SafeSetParent_36042552((UnityEngine_GameObject_o *)v6, this->fields.rootObject, 0);
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
  struct System_Collections_Generic_List_EventInfoCommandBuffPointComponent_ViewData__o *ViewDataList; // x19
  System_Predicate_object__o *v8; // x20

  if ( (byte_4C37DBE & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent_ViewData__Find__);
    sub_1C32C20(&System_Predicate_EventInfoCommandBuffPointComponent_ViewData__TypeInfo);
    sub_1C32C20(&Method_EventInfoCommandBuffPointControl___c__DisplayClass15_0__GetViewData_b__0__);
    sub_1C32C20(&EventInfoCommandBuffPointControl___c__DisplayClass15_0_TypeInfo);
    byte_4C37DBE = 1;
  }
  v5 = sub_1C32E6C(EventInfoCommandBuffPointControl___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = GroupId,
        ViewDataList = this->fields.ViewDataList,
        v8 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_EventInfoCommandBuffPointComponent_ViewData__TypeInfo),
        System_Predicate_object____ctor(
          v8,
          (Il2CppObject *)v5,
          Method_EventInfoCommandBuffPointControl___c__DisplayClass15_0__GetViewData_b__0__,
          0),
        !ViewDataList) )
  {
    sub_1C32E7C(v6);
  }
  return (EventInfoCommandBuffPointComponent_ViewData_o *)System_Collections_Generic_List_object___Find(
                                                            (System_Collections_Generic_List_object__o *)ViewDataList,
                                                            (System_Predicate_T__o *)v8,
                                                            (const MethodInfo_3798E24 *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent_ViewData__Find__);
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

  if ( (byte_4C37DBB & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventInfoCommandBuffPointComponent__TypeInfo);
    byte_4C37DBB = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.eventUiEntity, (int32_t)entity, (int32_t)method, v3);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventInfoCommandBuffPointComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent___ctor__);
  this->fields.buffPointCompnentList = (struct System_Collections_Generic_List_EventInfoCommandBuffPointComponent__o *)v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.buffPointCompnentList, (int32_t)v6, v7, v8);
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

  if ( (byte_4C37DBF & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__GetEnumerator__);
    byte_4C37DBF = 1;
  }
  memset(&v9, 0, sizeof(v9));
  buffPointCompnentList = this->fields.buffPointCompnentList;
  if ( !buffPointCompnentList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)buffPointCompnentList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__GetEnumerator__);
  for ( i = 0; ; i += *(int64_t *)((char *)off_50 + (_QWORD)current) )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__MoveNext__);
    if ( !v5 )
      break;
    current = v9.fields._current;
    if ( !v9.fields._current )
      sub_1C32E7C(v5);
    EventInfoCommandBuffPointComponent__UpdatePoint((EventInfoCommandBuffPointComponent_o *)v9.fields._current, v6);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__Dispose__);
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
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  int64_t v18; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C37DC0 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_5638/*"EVENT_POINT_COMMON_FORMAT"*/);
    byte_4C37DC0 = 1;
  }
  totalPointLabel = (UnityEngine_Object_o *)this->fields.totalPointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(totalPointLabel, 0, 0) )
  {
    v6 = this->fields.totalPointLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5638/*"EVENT_POINT_COMMON_FORMAT"*/, 0);
    v8 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v8 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v8->static_fields->UserPointEventMax;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v18 = System_Math__Min_65042316(totalPoint, UserPointEventMax, 0);
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v18, v10, v11, v12, v13, v14, v15);
    v17 = System_String__Format(v7, v16, 0);
    if ( !v6 )
      sub_1C32E7C(v17);
    UILabel__set_text(v6, v17, 0);
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
  void *totalPointBgSprite; // x0
  Il2CppObject *Component_object; // x21
  UnityEngine_Object_o *titleBgSprite; // x21
  System_String_o *titleBgSpriteName; // x21
  UISprite_o *v12; // x22
  EventInfoCommandBuffPointControl___c_c *v13; // x0
  System_Func_object__int__o *_9__13_0; // x21
  Il2CppObject *v15; // x22
  struct EventInfoCommandBuffPointControl___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  const MethodInfo *v20; // x2
  int v21; // w8
  void *v22; // x21
  unsigned int v23; // w25
  int64_t v24; // x20
  EventUiValueEntity_o *v25; // x22
  UnityEngine_Object_o *BuffPointObject; // x23
  UnityEngine_Object_o *v27; // x23
  int32_t v28; // w0
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x4
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  _DWORD *monitor; // x8
  int v34; // s0
  void *v35; // x9
  __int64 v36; // x8
  _QWORD *v37; // x10
  __int64 v38; // x11
  __int64 v39; // x8
  UnityEngine_Object_o *totalPointObject; // x21
  const MethodInfo *v41; // x2
  UnityEngine_Object_o *v42; // x20
  System_String_o *totalPointBgSpriteName; // x20
  UISprite_o *v44; // x21

  if ( (byte_4C37DBC & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    sub_1C32C20(&System_Func_EventUiValueEntity__int__TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_EventInfoCommandBuffPointComponent___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__Add__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_EventInfoCommandBuffPointControl___c__Setup_b__13_0__);
    sub_1C32C20(&EventInfoCommandBuffPointControl___c_TypeInfo);
    byte_4C37DBC = 1;
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
                             (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
        v12 = this->fields.titleBgSprite;
        titleBgSpriteName = this->fields.titleBgSpriteName;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventUI(v12, titleBgSpriteName, 0);
        totalPointBgSprite = this->fields.totalPointBgSprite;
        if ( !totalPointBgSprite )
          goto LABEL_66;
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)totalPointBgSprite + 840LL))(
          totalPointBgSprite,
          *(_QWORD *)(*(_QWORD *)totalPointBgSprite + 848LL));
      }
      v13 = EventInfoCommandBuffPointControl___c_TypeInfo;
      if ( !EventInfoCommandBuffPointControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoCommandBuffPointControl___c_TypeInfo);
        v13 = EventInfoCommandBuffPointControl___c_TypeInfo;
      }
      _9__13_0 = (System_Func_object__int__o *)v13->static_fields->__9__13_0;
      if ( !_9__13_0 )
      {
        if ( !v13->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v13);
          v13 = EventInfoCommandBuffPointControl___c_TypeInfo;
        }
        v15 = (Il2CppObject *)v13->static_fields->__9;
        _9__13_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_EventUiValueEntity__int__TypeInfo);
        System_Func_object__int____ctor(_9__13_0, v15, Method_EventInfoCommandBuffPointControl___c__Setup_b__13_0__, 0);
        static_fields = EventInfoCommandBuffPointControl___c_TypeInfo->static_fields;
        static_fields->__9__13_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__13_0;
        sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v17, v18);
      }
      v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                                                                   (System_Func_TSource__TKey__o *)_9__13_0,
                                                                   (const MethodInfo_310D0C4 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
      totalPointBgSprite = System_Linq_Enumerable__ToArray_object_(
                             v19,
                             (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
      if ( !totalPointBgSprite )
        goto LABEL_66;
      v21 = *((_DWORD *)totalPointBgSprite + 6);
      v22 = totalPointBgSprite;
      if ( v21 >= 1 )
      {
        v23 = 0;
        v24 = 0;
        while ( 1 )
        {
          if ( v23 >= v21 )
            sub_1C32E84(totalPointBgSprite);
          v25 = (EventUiValueEntity_o *)*((_QWORD *)v22 + (int)v23 + 4);
          if ( !v25 )
            break;
          if ( v25->fields.type == 2 )
          {
            BuffPointObject = (UnityEngine_Object_o *)EventInfoCommandBuffPointControl__CreateBuffPointObject(
                                                        this,
                                                        v25,
                                                        v20);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            totalPointBgSprite = (void *)UnityEngine_Object__op_Equality(BuffPointObject, 0, 0);
            if ( ((unsigned __int8)totalPointBgSprite & 1) == 0 )
            {
              GameObjectExtensions__AddLocalPositionY((UnityEngine_GameObject_o *)BuffPointObject, v7, 0);
              if ( !BuffPointObject )
                break;
              v27 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)BuffPointObject,
                                              (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_EventInfoCommandBuffPointComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              totalPointBgSprite = (void *)UnityEngine_Object__op_Equality(v27, 0, 0);
              if ( ((unsigned __int8)totalPointBgSprite & 1) == 0 )
              {
                v28 = System_Int32__Parse(v25->fields.value, 0);
                totalPointBgSprite = EventInfoCommandBuffPointControl__GetViewData(this, v28, v29);
                if ( !v27 )
                  break;
                EventInfoCommandBuffPointComponent__Setup(
                  (EventInfoCommandBuffPointComponent_o *)v27,
                  this->fields.eventUiEntity,
                  v25,
                  (EventInfoCommandBuffPointComponent_ViewData_o *)totalPointBgSprite,
                  v30);
                monitor = v27[1].monitor;
                if ( !monitor )
                  break;
                totalPointBgSprite = this->fields.buffPointCompnentList;
                if ( !totalPointBgSprite )
                  break;
                v34 = monitor[43];
                v35 = v27[3].monitor;
                v36 = *((_QWORD *)totalPointBgSprite + 2);
                v37 = Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__Add__;
                ++*((_DWORD *)totalPointBgSprite + 7);
                if ( !v36 )
                  break;
                v38 = *((int *)totalPointBgSprite + 6);
                v7 = v7 - (float)v34;
                v24 += (int64_t)v35;
                if ( (unsigned int)v38 >= *(_DWORD *)(v36 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)totalPointBgSprite,
                    (Il2CppObject *)v27,
                    *(const MethodInfo_37987BC **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
                }
                else
                {
                  v39 = v36 + 8 * v38;
                  *((_DWORD *)totalPointBgSprite + 6) = v38 + 1;
                  *(_QWORD *)(v39 + 32) = v27;
                  sub_1C32BC4((CGThumbnailListItem_o *)(v39 + 32), (int32_t)v27, v31, v32);
                }
              }
            }
          }
          v21 = *((_DWORD *)v22 + 6);
          if ( (int)++v23 >= v21 )
            goto LABEL_53;
        }
LABEL_66:
        sub_1C32E7C(totalPointBgSprite);
      }
      v24 = 0;
LABEL_53:
      totalPointObject = (UnityEngine_Object_o *)this->fields.totalPointObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(totalPointObject, 0, 0) )
        GameObjectExtensions__AddLocalPositionY(this->fields.totalPointObject, v7, 0);
      EventInfoCommandBuffPointControl__SetTotalPointLabel(this, v24, v41);
      v42 = (UnityEngine_Object_o *)this->fields.totalPointBgSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v42, 0, 0)
        && !System_String__IsNullOrEmpty(this->fields.totalPointBgSpriteName, 0) )
      {
        v44 = this->fields.totalPointBgSprite;
        totalPointBgSpriteName = this->fields.totalPointBgSpriteName;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventUI(v44, totalPointBgSpriteName, 0);
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

  if ( (byte_4C37DC1 & 1) == 0 )
  {
    sub_1C32C20(&EventInfoCommandBuffPointControl___c_TypeInfo);
    byte_4C37DC1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(EventInfoCommandBuffPointControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoCommandBuffPointControl___c_TypeInfo->static_fields->__9 = (struct EventInfoCommandBuffPointControl___c_o *)v1;
  sub_1C32BC4(
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return x->fields.GroupId == this->fields.GroupId;
}