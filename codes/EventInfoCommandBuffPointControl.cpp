void __fastcall EventInfoCommandBuffPointControl___ctor(
        EventInfoCommandBuffPointControl_o *this,
        const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


UnityEngine_GameObject_o *__fastcall EventInfoCommandBuffPointControl__CreateBuffPointObject(
        EventInfoCommandBuffPointControl_o *this,
        EventUiValueEntity_o *ent,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *baseBuffPointPrefab; // x21
  UnityEngine_Object_o *v6; // x21
  __int64 v7; // x1
  UnityEngine_Object_o *name; // x0

  if ( (byte_43529DF & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_596/*"("*/);
    sub_B70694(&StringLiteral_663/*")"*/);
    byte_43529DF = 1;
  }
  baseBuffPointPrefab = this->fields.baseBuffPointPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                 (UnityEngine_UI_Dropdown_DropdownItem_o *)baseBuffPointPrefab,
                                 (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
  {
    name = (UnityEngine_Object_o *)this->fields.baseBuffPointPrefab;
    if ( !name
      || (name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL), !ent)
      || (name = (UnityEngine_Object_o *)System_String__Concat_44761580(
                                           (System_String_o *)name,
                                           (System_String_o *)StringLiteral_596/*"("*/,
                                           ent->fields.value,
                                           (System_String_o *)StringLiteral_663/*")"*/,
                                           0LL),
          !v6) )
    {
      sub_B7076C(name, v7);
    }
    UnityEngine_Object__set_name(v6, (System_String_o *)name, 0LL);
    GameObjectExtensions__SafeSetParent_32503456((UnityEngine_GameObject_o *)v6, this->fields.rootObject, 0LL);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v6, 1, 0LL);
  }
  return (UnityEngine_GameObject_o *)v6;
}


EventInfoCommandBuffPointComponent_ViewData_o *__fastcall EventInfoCommandBuffPointControl__GetViewData(
        EventInfoCommandBuffPointControl_o *this,
        int32_t GroupId,
        const MethodInfo *method)
{
  EventInfoCommandBuffPointControl___c__DisplayClass15_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *ViewDataList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x20

  if ( (byte_43529E0 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent_ViewData__Find__);
    sub_B70694(&Method_System_Predicate_EventInfoCommandBuffPointComponent_ViewData___ctor__);
    sub_B70694(&System_Predicate_EventInfoCommandBuffPointComponent_ViewData__TypeInfo);
    sub_B70694(&Method_EventInfoCommandBuffPointControl___c__DisplayClass15_0__GetViewData_b__0__);
    sub_B70694(&EventInfoCommandBuffPointControl___c__DisplayClass15_0_TypeInfo);
    byte_43529E0 = 1;
  }
  v5 = (EventInfoCommandBuffPointControl___c__DisplayClass15_0_o *)sub_B70764(EventInfoCommandBuffPointControl___c__DisplayClass15_0_TypeInfo);
  EventInfoCommandBuffPointControl___c__DisplayClass15_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.GroupId = GroupId,
        ViewDataList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)this->fields.ViewDataList,
        v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_EventInfoCommandBuffPointComponent_ViewData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_EventInfoCommandBuffPointControl___c__DisplayClass15_0__GetViewData_b__0__,
          (const MethodInfo_2BF23B8 *)Method_System_Predicate_EventInfoCommandBuffPointComponent_ViewData___ctor__),
        !ViewDataList) )
  {
    sub_B7076C(v6, v7);
  }
  return (EventInfoCommandBuffPointComponent_ViewData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                            ViewDataList,
                                                            (System_Predicate_T__o *)v9,
                                                            (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent_ViewData__Find__);
}


void __fastcall EventInfoCommandBuffPointControl__Initialization(
        EventInfoCommandBuffPointControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct EventUiEntity_o **p_eventUiEntity; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_43529DD & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventInfoCommandBuffPointComponent__TypeInfo);
    byte_43529DD = 1;
  }
  this->fields.eventUiEntity = entity;
  p_eventUiEntity = &this->fields.eventUiEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)p_eventUiEntity,
    (System_Int32_array **)entity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventInfoCommandBuffPointComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent___ctor__);
  p_eventUiEntity[1] = (struct EventUiEntity_o *)v11;
  sub_B70630(
    (BattleServantConfConponent_o *)(p_eventUiEntity + 1),
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void __fastcall EventInfoCommandBuffPointControl__Redisplay(
        EventInfoCommandBuffPointControl_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventInfoCommandBuffPointComponent__o *buffPointCompnentList; // x0
  int64_t i; // x20
  Il2CppObject *current; // x21
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_43529E1 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__GetEnumerator__);
    byte_43529E1 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  buffPointCompnentList = this->fields.buffPointCompnentList;
  if ( !buffPointCompnentList )
    sub_B7076C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)buffPointCompnentList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__GetEnumerator__);
  for ( i = 0LL; ; i += (int64_t)current[4].monitor )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v9,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__MoveNext__);
    if ( !v6 )
      break;
    current = v9.fields.current;
    if ( !v9.fields.current )
      sub_B7076C(v6, v7);
    EventInfoCommandBuffPointComponent__UpdatePoint((EventInfoCommandBuffPointComponent_o *)v9.fields.current, v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__Dispose__);
  EventInfoCommandBuffPointControl__SetTotalPointLabel(this, i, v8);
}


void __fastcall EventInfoCommandBuffPointControl__SetTotalPointLabel(
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
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  __int64 v13; // x1
  int64_t v14; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_43529E2 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&long_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&System_Math_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_5740/*"EVENT_POINT_COMMON_FORMAT"*/);
    byte_43529E2 = 1;
  }
  totalPointLabel = (UnityEngine_Object_o *)this->fields.totalPointLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(totalPointLabel, 0LL, 0LL) )
  {
    v6 = this->fields.totalPointLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5740/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    v8 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v8 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v8->static_fields->UserPointEventMax;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v14 = System_Math__Min_45601544(totalPoint, UserPointEventMax, 0LL);
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v14, v10);
    v12 = System_String__Format(v7, v11, 0LL);
    if ( !v6 )
      sub_B7076C(v12, v13);
    UILabel__set_text(v6, v12, 0LL);
  }
}


void __fastcall EventInfoCommandBuffPointControl__Setup(
        EventInfoCommandBuffPointControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseBuffPointPrefab; // x21
  UnityEngine_Object_o *titleObject; // x21
  float v7; // s8
  __int64 v8; // x1
  void *totalPointBgSprite; // x0
  srcLineSprite_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *titleBgSprite; // x21
  System_String_o *titleBgSpriteName; // x21
  UISprite_o *v13; // x22
  EventInfoCommandBuffPointControl___c_c *v14; // x0
  struct EventInfoCommandBuffPointControl___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__13_0; // x21
  Il2CppObject *v17; // x22
  struct EventInfoCommandBuffPointControl___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  const MethodInfo *v26; // x2
  int v27; // w8
  void *v28; // x21
  unsigned int v29; // w25
  int64_t v30; // x20
  EventUiValueEntity_o *v31; // x22
  UnityEngine_Object_o *BuffPointObject; // x23
  UnityEngine_Object_o *v33; // x23
  int32_t v34; // w0
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x4
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *totalPointObject; // x21
  const MethodInfo *v39; // x2
  UnityEngine_Object_o *v40; // x20
  System_String_o *totalPointBgSpriteName; // x20
  UISprite_o *v42; // x21
  __int64 v43; // x0

  if ( (byte_43529DE & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
    sub_B70694(&Method_System_Func_EventUiValueEntity__int___ctor__);
    sub_B70694(&System_Func_EventUiValueEntity__int__TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_EventInfoCommandBuffPointComponent___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__Add__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_EventInfoCommandBuffPointControl___c__Setup_b__13_0__);
    sub_B70694(&EventInfoCommandBuffPointControl___c_TypeInfo);
    byte_43529DE = 1;
  }
  if ( entitys )
  {
    baseBuffPointPrefab = (UnityEngine_Object_o *)this->fields.baseBuffPointPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(baseBuffPointPrefab, 0LL, 0LL) )
    {
      titleObject = (UnityEngine_Object_o *)this->fields.titleObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v7 = 0.0;
      if ( UnityEngine_Object__op_Inequality(titleObject, 0LL, 0LL) )
      {
        GameObjectExtensions__AddLocalPositionY(this->fields.titleObject, 0.0, 0LL);
        totalPointBgSprite = this->fields.titleObject;
        if ( !totalPointBgSprite )
          goto LABEL_75;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)totalPointBgSprite,
                                    (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        totalPointBgSprite = (void *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)Component_srcLineSprite,
                                       0LL,
                                       0LL);
        v7 = 0.0;
        if ( ((unsigned __int8)totalPointBgSprite & 1) != 0 )
        {
          if ( !Component_srcLineSprite )
            goto LABEL_75;
          v7 = 0.0 - (float)SHIDWORD(Component_srcLineSprite[1].fields.mFSM);
        }
      }
      titleBgSprite = (UnityEngine_Object_o *)this->fields.titleBgSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(titleBgSprite, 0LL, 0LL)
        && !System_String__IsNullOrEmpty(this->fields.titleBgSpriteName, 0LL) )
      {
        v13 = this->fields.titleBgSprite;
        titleBgSpriteName = this->fields.titleBgSpriteName;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventUI(v13, titleBgSpriteName, 0LL);
        totalPointBgSprite = this->fields.totalPointBgSprite;
        if ( !totalPointBgSprite )
          goto LABEL_75;
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)totalPointBgSprite + 840LL))(
          totalPointBgSprite,
          *(_QWORD *)(*(_QWORD *)totalPointBgSprite + 848LL));
      }
      v14 = EventInfoCommandBuffPointControl___c_TypeInfo;
      if ( (BYTE3(EventInfoCommandBuffPointControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoCommandBuffPointControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoCommandBuffPointControl___c_TypeInfo);
        v14 = EventInfoCommandBuffPointControl___c_TypeInfo;
      }
      static_fields = v14->static_fields;
      _9__13_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__13_0;
      if ( !_9__13_0 )
      {
        if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v14);
          static_fields = EventInfoCommandBuffPointControl___c_TypeInfo->static_fields;
        }
        v17 = (Il2CppObject *)static_fields->__9;
        _9__13_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_EventUiValueEntity__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__13_0,
          v17,
          Method_EventInfoCommandBuffPointControl___c__Setup_b__13_0__,
          (const MethodInfo_29AD124 *)Method_System_Func_EventUiValueEntity__int___ctor__);
        v18 = EventInfoCommandBuffPointControl___c_TypeInfo->static_fields;
        v18->__9__13_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__13_0;
        sub_B70630(
          (BattleServantConfConponent_o *)&v18->__9__13_0,
          (System_Int32_array **)_9__13_0,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
      }
      v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                                                                   (System_Func_TSource__TKey__o *)_9__13_0,
                                                                   (const MethodInfo_1CBFF6C *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
      totalPointBgSprite = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                             v25,
                             (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
      if ( !totalPointBgSprite )
        goto LABEL_75;
      v27 = *((_DWORD *)totalPointBgSprite + 6);
      v28 = totalPointBgSprite;
      if ( v27 >= 1 )
      {
        v29 = 0;
        v30 = 0LL;
        while ( 1 )
        {
          if ( v29 >= v27 )
          {
            v43 = sub_B70798(totalPointBgSprite);
            sub_B70738(v43, 0LL);
          }
          v31 = (EventUiValueEntity_o *)*((_QWORD *)v28 + (int)v29 + 4);
          if ( !v31 )
            break;
          if ( v31->fields.type == 2 )
          {
            BuffPointObject = (UnityEngine_Object_o *)EventInfoCommandBuffPointControl__CreateBuffPointObject(
                                                        this,
                                                        v31,
                                                        v26);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            totalPointBgSprite = (void *)UnityEngine_Object__op_Equality(BuffPointObject, 0LL, 0LL);
            if ( ((unsigned __int8)totalPointBgSprite & 1) == 0 )
            {
              GameObjectExtensions__AddLocalPositionY((UnityEngine_GameObject_o *)BuffPointObject, v7, 0LL);
              if ( !BuffPointObject )
                break;
              v33 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)BuffPointObject,
                                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_EventInfoCommandBuffPointComponent___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              totalPointBgSprite = (void *)UnityEngine_Object__op_Equality(v33, 0LL, 0LL);
              if ( ((unsigned __int8)totalPointBgSprite & 1) == 0 )
              {
                v34 = System_Int32__Parse(v31->fields.value, 0LL);
                totalPointBgSprite = EventInfoCommandBuffPointControl__GetViewData(this, v34, v35);
                if ( !v33 )
                  break;
                EventInfoCommandBuffPointComponent__Setup(
                  (EventInfoCommandBuffPointComponent_o *)v33,
                  this->fields.eventUiEntity,
                  v31,
                  (EventInfoCommandBuffPointComponent_ViewData_o *)totalPointBgSprite,
                  v36);
                klass = v33[1].klass;
                if ( !klass )
                  break;
                totalPointBgSprite = this->fields.buffPointCompnentList;
                if ( !totalPointBgSprite )
                  break;
                v30 += (int64_t)v33[3].klass;
                v7 = v7 - (float)SHIDWORD(klass->_1.nestedTypes);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)totalPointBgSprite,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v33,
                  (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__Add__);
              }
            }
          }
          v27 = *((_DWORD *)v28 + 6);
          if ( (int)++v29 >= v27 )
            goto LABEL_59;
        }
LABEL_75:
        sub_B7076C(totalPointBgSprite, v8);
      }
      v30 = 0LL;
LABEL_59:
      totalPointObject = (UnityEngine_Object_o *)this->fields.totalPointObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(totalPointObject, 0LL, 0LL) )
        GameObjectExtensions__AddLocalPositionY(this->fields.totalPointObject, v7, 0LL);
      EventInfoCommandBuffPointControl__SetTotalPointLabel(this, v30, v39);
      v40 = (UnityEngine_Object_o *)this->fields.totalPointBgSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v40, 0LL, 0LL)
        && !System_String__IsNullOrEmpty(this->fields.totalPointBgSpriteName, 0LL) )
      {
        v42 = this->fields.totalPointBgSprite;
        totalPointBgSpriteName = this->fields.totalPointBgSpriteName;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventUI(v42, totalPointBgSpriteName, 0LL);
        totalPointBgSprite = this->fields.totalPointBgSprite;
        if ( !totalPointBgSprite )
          goto LABEL_75;
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)totalPointBgSprite + 840LL))(
          totalPointBgSprite,
          *(_QWORD *)(*(_QWORD *)totalPointBgSprite + 848LL));
      }
    }
  }
}


void __fastcall EventInfoCommandBuffPointControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventInfoCommandBuffPointControl___c_StaticFields *static_fields; // x0

  if ( (byte_434F078 & 1) == 0 )
  {
    sub_B70694(&EventInfoCommandBuffPointControl___c_TypeInfo);
    byte_434F078 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(EventInfoCommandBuffPointControl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventInfoCommandBuffPointControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoCommandBuffPointControl___c_o *)v1;
  sub_B70630(static_fields);
}


void __fastcall EventInfoCommandBuffPointControl___c___ctor(
        EventInfoCommandBuffPointControl___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventInfoCommandBuffPointControl___c___Setup_b__13_0(
        EventInfoCommandBuffPointControl___c_o *this,
        EventUiValueEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B7076C(this, 0LL);
  return ent->fields.priority;
}


void __fastcall EventInfoCommandBuffPointControl___c__DisplayClass15_0___ctor(
        EventInfoCommandBuffPointControl___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoCommandBuffPointControl___c__DisplayClass15_0___GetViewData_b__0(
        EventInfoCommandBuffPointControl___c__DisplayClass15_0_o *this,
        EventInfoCommandBuffPointComponent_ViewData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.GroupId == this->fields.GroupId;
}