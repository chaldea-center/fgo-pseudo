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

  if ( (byte_5971C76 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_681/*"("*/);
    sub_2213A60(&StringLiteral_789/*")"*/);
    byte_5971C76 = 1;
  }
  baseBuffPointPrefab = (Il2CppObject *)this->fields.baseBuffPointPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, ent);
  v6 = UnityEngine_Object__Instantiate_object_(
         baseBuffPointPrefab,
         (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0) )
  {
    name = (UnityEngine_Object_o *)this->fields.baseBuffPointPrefab;
    if ( !name
      || (name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0), !ent)
      || (name = (UnityEngine_Object_o *)System_String__Concat_75696856(
                                           (System_String_o *)name,
                                           (System_String_o *)StringLiteral_681/*"("*/,
                                           ent->fields.value,
                                           (System_String_o *)StringLiteral_789/*")"*/,
                                           0),
          !v6) )
    {
      sub_2213CDC(name, v7);
    }
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v6, (System_String_o *)name, 0);
    GameObjectExtensions__SafeSetParent_42897308((UnityEngine_GameObject_o *)v6, this->fields.rootObject, 0);
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
  struct System_Collections_Generic_List_EventInfoCommandBuffPointComponent_ViewData__o *ViewDataList; // x20
  System_Predicate_object__o *v9; // x19

  if ( (byte_5971C77 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent_ViewData__Find__);
    sub_2213A60(&System_Predicate_EventInfoCommandBuffPointComponent_ViewData__TypeInfo);
    sub_2213A60(&Method_EventInfoCommandBuffPointControl___c__DisplayClass15_0__GetViewData_b__0__);
    sub_2213A60(&EventInfoCommandBuffPointControl___c__DisplayClass15_0_TypeInfo);
    byte_5971C77 = 1;
  }
  v5 = sub_2213CCC(EventInfoCommandBuffPointControl___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (ViewDataList = this->fields.ViewDataList,
        *(_DWORD *)(v5 + 16) = GroupId,
        v9 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_EventInfoCommandBuffPointComponent_ViewData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_EventInfoCommandBuffPointControl___c__DisplayClass15_0__GetViewData_b__0__,
          0),
        !ViewDataList) )
  {
    sub_2213CDC(v6, v7);
  }
  return (EventInfoCommandBuffPointComponent_ViewData_o *)System_Collections_Generic_List_object___Find(
                                                            (System_Collections_Generic_List_object__o *)ViewDataList,
                                                            (System_Predicate_T__o *)v9,
                                                            (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent_ViewData__Find__);
}


void EventInfoCommandBuffPointControl__Initialization(
        EventInfoCommandBuffPointControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5971C74 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventInfoCommandBuffPointComponent__TypeInfo);
    byte_5971C74 = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventUiEntity,
    (int32_t)entity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventInfoCommandBuffPointComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent___ctor__);
  this->fields.buffPointCompnentList = (struct System_Collections_Generic_List_EventInfoCommandBuffPointComponent__o *)v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.buffPointCompnentList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void EventInfoCommandBuffPointControl__Redisplay(EventInfoCommandBuffPointControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventInfoCommandBuffPointComponent__o *buffPointCompnentList; // x0
  int64_t v4; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *current; // x21
  const MethodInfo *v8; // x2
  __int64 v9; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v10; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5971C78 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__GetEnumerator__);
    byte_5971C78 = 1;
  }
  buffPointCompnentList = this->fields.buffPointCompnentList;
  memset(&v11, 0, sizeof(v11));
  if ( !buffPointCompnentList )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)buffPointCompnentList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__GetEnumerator__);
  v4 = 0;
  v9 = 0;
  v10 = &v11;
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__MoveNext__);
    if ( !v5 )
      break;
    current = v11.fields._current;
    if ( !v11.fields._current )
      sub_2213CDC(v5, v6);
    EventInfoCommandBuffPointComponent__UpdatePoint((EventInfoCommandBuffPointComponent_o *)v11.fields._current, v6);
    v4 += *(int64_t *)((char *)off_50 + (_QWORD)current);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__Dispose__);
  EventInfoCommandBuffPointControl__SetTotalPointLabel(this, v4, v8);
}


void EventInfoCommandBuffPointControl__SetTotalPointLabel(
        EventInfoCommandBuffPointControl_o *this,
        int64_t totalPoint,
        const MethodInfo *method)
{
  UnityEngine_Object_o *totalPointLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1
  BalanceConfig_c *v10; // x8
  System_String_o *v11; // x21
  int64_t UserPointEventMax; // x22
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  __int64 v15; // x1
  int64_t v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5971C79 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_5870/*"EVENT_POINT_COMMON_FORMAT"*/);
    byte_5971C79 = 1;
  }
  totalPointLabel = (UnityEngine_Object_o *)this->fields.totalPointLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, totalPoint);
  if ( !UnityEngine_Object__op_Equality(totalPointLabel, 0, 0) )
  {
    v7 = this->fields.totalPointLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_5870/*"EVENT_POINT_COMMON_FORMAT"*/, 0);
    v10 = BalanceConfig_TypeInfo;
    v11 = v8;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9);
      v10 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v10->static_fields->UserPointEventMax;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v9);
    v16 = System_Math__Min_77153608(totalPoint, UserPointEventMax, 0);
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v16);
    v14 = System_String__Format(v11, v13, 0);
    if ( !v7 )
      sub_2213CDC(v14, v15);
    UILabel__set_text(v7, v14, 0);
  }
}


void EventInfoCommandBuffPointControl__Setup(
        EventInfoCommandBuffPointControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseBuffPointPrefab; // x21
  __int64 v6; // x1
  UnityEngine_Object_o *titleObject; // x21
  __int64 v8; // x1
  float v9; // s8
  void *totalPointBgSprite; // x0
  __int64 v11; // x1
  Il2CppObject *Component_object; // x21
  UnityEngine_Object_o *titleBgSprite; // x21
  __int64 v14; // x1
  UISprite_o *v15; // x21
  System_String_o *titleBgSpriteName; // x22
  EventInfoCommandBuffPointControl___c_c *v17; // x0
  struct EventInfoCommandBuffPointControl___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__13_0; // x21
  Il2CppObject *v20; // x22
  struct EventInfoCommandBuffPointControl___c_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  const MethodInfo *v29; // x2
  int v30; // w8
  void *v31; // x21
  unsigned int v32; // w25
  int64_t v33; // x20
  EventUiValueEntity_o *v34; // x23
  __int64 v35; // x1
  UnityEngine_Object_o *BuffPointObject; // x22
  __int64 v37; // x1
  UnityEngine_Object_o *v38; // x22
  int32_t v39; // w0
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x4
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  _DWORD *monitor; // x8
  int v49; // s0
  __int64 v50; // x8
  void *v51; // x10
  _QWORD *v52; // x9
  __int64 v53; // x11
  __int64 v54; // x8
  UnityEngine_Object_o *totalPointObject; // x21
  const MethodInfo *v56; // x2
  __int64 v57; // x1
  UnityEngine_Object_o *v58; // x20
  __int64 v59; // x1
  UISprite_o *v60; // x20
  System_String_o *totalPointBgSpriteName; // x21

  if ( (byte_5971C75 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    sub_2213A60(&System_Func_EventUiValueEntity__int__TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventInfoCommandBuffPointComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__Add__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_EventInfoCommandBuffPointControl___c__Setup_b__13_0__);
    sub_2213A60(&EventInfoCommandBuffPointControl___c_TypeInfo);
    byte_5971C75 = 1;
  }
  if ( entitys )
  {
    baseBuffPointPrefab = (UnityEngine_Object_o *)this->fields.baseBuffPointPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, entitys);
    if ( !UnityEngine_Object__op_Equality(baseBuffPointPrefab, 0, 0) )
    {
      titleObject = (UnityEngine_Object_o *)this->fields.titleObject;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      v9 = 0.0;
      if ( UnityEngine_Object__op_Inequality(titleObject, 0, 0) )
      {
        GameObjectExtensions__AddLocalPositionY(this->fields.titleObject, 0.0, 0);
        totalPointBgSprite = this->fields.titleObject;
        if ( !totalPointBgSprite )
          goto LABEL_66;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)totalPointBgSprite,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
        totalPointBgSprite = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        v9 = 0.0;
        if ( ((unsigned __int8)totalPointBgSprite & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_66;
          v9 = 0.0 - (float)SHIDWORD(Component_object[10].monitor);
        }
      }
      titleBgSprite = (UnityEngine_Object_o *)this->fields.titleBgSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      if ( UnityEngine_Object__op_Inequality(titleBgSprite, 0, 0)
        && !System_String__IsNullOrEmpty(this->fields.titleBgSpriteName, 0) )
      {
        v15 = this->fields.titleBgSprite;
        titleBgSpriteName = this->fields.titleBgSpriteName;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v14);
        AtlasManager__SetEventUI(v15, titleBgSpriteName, 0);
        totalPointBgSprite = this->fields.totalPointBgSprite;
        if ( !totalPointBgSprite )
          goto LABEL_66;
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)totalPointBgSprite + 840LL))(
          totalPointBgSprite,
          *(_QWORD *)(*(_QWORD *)totalPointBgSprite + 848LL));
      }
      v17 = EventInfoCommandBuffPointControl___c_TypeInfo;
      if ( !*(&EventInfoCommandBuffPointControl___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventInfoCommandBuffPointControl___c_TypeInfo, v14);
        v17 = EventInfoCommandBuffPointControl___c_TypeInfo;
      }
      static_fields = v17->static_fields;
      _9__13_0 = (System_Func_object__int__o *)static_fields->__9__13_0;
      if ( !_9__13_0 )
      {
        if ( !*(&v17->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v17, v14);
          static_fields = EventInfoCommandBuffPointControl___c_TypeInfo->static_fields;
        }
        v20 = (Il2CppObject *)static_fields->__9;
        _9__13_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_EventUiValueEntity__int__TypeInfo);
        System_Func_object__int____ctor(_9__13_0, v20, Method_EventInfoCommandBuffPointControl___c__Setup_b__13_0__, 0);
        v21 = EventInfoCommandBuffPointControl___c_TypeInfo->static_fields;
        v21->__9__13_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__13_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v21->__9__13_0,
          (int32_t)_9__13_0,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
      }
      v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                                                                   (System_Func_TSource__TKey__o *)_9__13_0,
                                                                   (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
      totalPointBgSprite = System_Linq_Enumerable__ToArray_object_(
                             v28,
                             (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
      if ( !totalPointBgSprite )
        goto LABEL_66;
      v30 = *((_DWORD *)totalPointBgSprite + 6);
      v31 = totalPointBgSprite;
      if ( v30 >= 1 )
      {
        v32 = 0;
        v33 = 0;
        while ( 1 )
        {
          if ( v32 >= v30 )
            sub_2213CE4(totalPointBgSprite);
          v34 = (EventUiValueEntity_o *)*((_QWORD *)v31 + (int)v32 + 4);
          if ( !v34 )
            break;
          if ( v34->fields.type == 2 )
          {
            BuffPointObject = (UnityEngine_Object_o *)EventInfoCommandBuffPointControl__CreateBuffPointObject(
                                                        this,
                                                        v34,
                                                        v29);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
            totalPointBgSprite = (void *)UnityEngine_Object__op_Equality(BuffPointObject, 0, 0);
            if ( ((unsigned __int8)totalPointBgSprite & 1) == 0 )
            {
              GameObjectExtensions__AddLocalPositionY((UnityEngine_GameObject_o *)BuffPointObject, v9, 0);
              if ( !BuffPointObject )
                break;
              v38 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)BuffPointObject,
                                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventInfoCommandBuffPointComponent___);
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
              totalPointBgSprite = (void *)UnityEngine_Object__op_Equality(v38, 0, 0);
              if ( ((unsigned __int8)totalPointBgSprite & 1) == 0 )
              {
                v39 = System_Int32__Parse(v34->fields.value, 0);
                totalPointBgSprite = EventInfoCommandBuffPointControl__GetViewData(this, v39, v40);
                if ( !v38 )
                  break;
                EventInfoCommandBuffPointComponent__Setup(
                  (EventInfoCommandBuffPointComponent_o *)v38,
                  this->fields.eventUiEntity,
                  v34,
                  (EventInfoCommandBuffPointComponent_ViewData_o *)totalPointBgSprite,
                  v41);
                monitor = v38[1].monitor;
                if ( !monitor )
                  break;
                totalPointBgSprite = this->fields.buffPointCompnentList;
                if ( !totalPointBgSprite )
                  break;
                v49 = monitor[43];
                v50 = *((_QWORD *)totalPointBgSprite + 2);
                v51 = v38[3].monitor;
                v52 = Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__Add__;
                ++*((_DWORD *)totalPointBgSprite + 7);
                if ( !v50 )
                  break;
                v53 = *((int *)totalPointBgSprite + 6);
                v33 += (int64_t)v51;
                v9 = v9 - (float)v49;
                if ( (unsigned int)v53 >= *(_DWORD *)(v50 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)totalPointBgSprite,
                    (Il2CppObject *)v38,
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
                }
                else
                {
                  v54 = v50 + 8 * v53;
                  *((_DWORD *)totalPointBgSprite + 6) = v53 + 1;
                  *(_QWORD *)(v54 + 32) = v38;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)(v54 + 32),
                    (int32_t)v38,
                    v42,
                    v43,
                    v44,
                    v45,
                    v46,
                    v47);
                }
              }
            }
          }
          v30 = *((_DWORD *)v31 + 6);
          if ( (int)++v32 >= v30 )
            goto LABEL_53;
        }
LABEL_66:
        sub_2213CDC(totalPointBgSprite, v8);
      }
      v33 = 0;
LABEL_53:
      totalPointObject = (UnityEngine_Object_o *)this->fields.totalPointObject;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      if ( UnityEngine_Object__op_Inequality(totalPointObject, 0, 0) )
        GameObjectExtensions__AddLocalPositionY(this->fields.totalPointObject, v9, 0);
      EventInfoCommandBuffPointControl__SetTotalPointLabel(this, v33, v56);
      v58 = (UnityEngine_Object_o *)this->fields.totalPointBgSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v57);
      if ( UnityEngine_Object__op_Inequality(v58, 0, 0)
        && !System_String__IsNullOrEmpty(this->fields.totalPointBgSpriteName, 0) )
      {
        v60 = this->fields.totalPointBgSprite;
        totalPointBgSpriteName = this->fields.totalPointBgSpriteName;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v59);
        AtlasManager__SetEventUI(v60, totalPointBgSpriteName, 0);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5971C7A & 1) == 0 )
  {
    sub_2213A60(&EventInfoCommandBuffPointControl___c_TypeInfo);
    byte_5971C7A = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventInfoCommandBuffPointControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoCommandBuffPointControl___c_TypeInfo->static_fields->__9 = (struct EventInfoCommandBuffPointControl___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventInfoCommandBuffPointControl___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
  return x->fields.GroupId == this->fields.GroupId;
}