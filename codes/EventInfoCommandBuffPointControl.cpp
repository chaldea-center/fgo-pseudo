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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct UnityEngine_GameObject_o *baseBuffPointPrefab; // x21
  UnityEngine_Object_o *v9; // x21
  __int64 v10; // x1
  UnityEngine_Object_o *name; // x0

  if ( (byte_4188622 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, ent);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_586/*"("*/, v6);
    sub_B2C35C(&StringLiteral_652/*")"*/, v7);
    byte_4188622 = 1;
  }
  baseBuffPointPrefab = this->fields.baseBuffPointPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                 (UnityEngine_UI_Dropdown_DropdownItem_o *)baseBuffPointPrefab,
                                 (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
  {
    name = (UnityEngine_Object_o *)this->fields.baseBuffPointPrefab;
    if ( !name
      || (name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL), !ent)
      || (name = (UnityEngine_Object_o *)System_String__Concat_44308944(
                                           (System_String_o *)name,
                                           (System_String_o *)StringLiteral_586/*"("*/,
                                           ent->fields.value,
                                           (System_String_o *)StringLiteral_652/*")"*/,
                                           0LL),
          !v9) )
    {
      sub_B2C434(name, v10);
    }
    UnityEngine_Object__set_name(v9, (System_String_o *)name, 0LL);
    GameObjectExtensions__SafeSetParent_31331952((UnityEngine_GameObject_o *)v9, this->fields.rootObject, 0LL);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v9, 1, 0LL);
  }
  return (UnityEngine_GameObject_o *)v9;
}


// local variable allocation has failed, the output may be wrong!
EventInfoCommandBuffPointComponent_ViewData_o *__fastcall EventInfoCommandBuffPointControl__GetViewData(
        EventInfoCommandBuffPointControl_o *this,
        int32_t GroupId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  EventInfoCommandBuffPointControl___c__DisplayClass15_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *ViewDataList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v13; // x20

  if ( (byte_4188623 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent_ViewData__Find__,
      *(_QWORD *)&GroupId);
    sub_B2C35C(&Method_System_Predicate_EventInfoCommandBuffPointComponent_ViewData___ctor__, v5);
    sub_B2C35C(&System_Predicate_EventInfoCommandBuffPointComponent_ViewData__TypeInfo, v6);
    sub_B2C35C(&Method_EventInfoCommandBuffPointControl___c__DisplayClass15_0__GetViewData_b__0__, v7);
    sub_B2C35C(&EventInfoCommandBuffPointControl___c__DisplayClass15_0_TypeInfo, v8);
    byte_4188623 = 1;
  }
  v9 = (EventInfoCommandBuffPointControl___c__DisplayClass15_0_o *)sub_B2C42C(EventInfoCommandBuffPointControl___c__DisplayClass15_0_TypeInfo);
  EventInfoCommandBuffPointControl___c__DisplayClass15_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.GroupId = GroupId,
        ViewDataList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)this->fields.ViewDataList,
        v13 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_EventInfoCommandBuffPointComponent_ViewData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v13,
          (Il2CppObject *)v9,
          Method_EventInfoCommandBuffPointControl___c__DisplayClass15_0__GetViewData_b__0__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_EventInfoCommandBuffPointComponent_ViewData___ctor__),
        !ViewDataList) )
  {
    sub_B2C434(v10, v11);
  }
  return (EventInfoCommandBuffPointComponent_ViewData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                            ViewDataList,
                                                            (System_Predicate_T__o *)v13,
                                                            (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent_ViewData__Find__);
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
  __int64 v10; // x1
  struct EventUiEntity_o **p_eventUiEntity; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4188620 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent___ctor__, entity);
    sub_B2C35C(&System_Collections_Generic_List_EventInfoCommandBuffPointComponent__TypeInfo, v10);
    byte_4188620 = 1;
  }
  this->fields.eventUiEntity = entity;
  p_eventUiEntity = &this->fields.eventUiEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_eventUiEntity,
    (System_Int32_array **)entity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventInfoCommandBuffPointComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent___ctor__);
  p_eventUiEntity[1] = (struct EventUiEntity_o *)v12;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(p_eventUiEntity + 1),
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void __fastcall EventInfoCommandBuffPointControl__Redisplay(
        EventInfoCommandBuffPointControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_EventInfoCommandBuffPointComponent__o *buffPointCompnentList; // x0
  int64_t i; // x20
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4188624 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__GetEnumerator__, v5);
    byte_4188624 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  buffPointCompnentList = this->fields.buffPointCompnentList;
  if ( !buffPointCompnentList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)buffPointCompnentList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__GetEnumerator__);
  for ( i = 0LL; ; i += (int64_t)current[4].monitor )
  {
    v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v12,
           (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__MoveNext__);
    if ( !v9 )
      break;
    current = v12.fields.current;
    if ( !v12.fields.current )
      sub_B2C434(v9, v10);
    EventInfoCommandBuffPointComponent__UpdatePoint((EventInfoCommandBuffPointComponent_o *)v12.fields.current, v10);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__Dispose__);
  EventInfoCommandBuffPointControl__SetTotalPointLabel(this, i, v11);
}


void __fastcall EventInfoCommandBuffPointControl__SetTotalPointLabel(
        EventInfoCommandBuffPointControl_o *this,
        int64_t totalPoint,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *totalPointLabel; // x21
  UILabel_o *v11; // x20
  System_String_o *v12; // x21
  BalanceConfig_c *v13; // x8
  int64_t UserPointEventMax; // x22
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  __int64 v17; // x1
  int64_t v18; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4188625 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, totalPoint);
    sub_B2C35C(&long_TypeInfo, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&System_Math_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_5651/*"EVENT_POINT_COMMON_FORMAT"*/, v9);
    byte_4188625 = 1;
  }
  totalPointLabel = (UnityEngine_Object_o *)this->fields.totalPointLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(totalPointLabel, 0LL, 0LL) )
  {
    v11 = this->fields.totalPointLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5651/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    v13 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v13 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v13->static_fields->UserPointEventMax;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v18 = System_Math__Min_45012816(totalPoint, UserPointEventMax, 0LL);
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v18);
    v16 = System_String__Format(v12, v15, 0LL);
    if ( !v11 )
      sub_B2C434(v16, v17);
    UILabel__set_text(v11, v16, 0LL);
  }
}


void __fastcall EventInfoCommandBuffPointControl__Setup(
        EventInfoCommandBuffPointControl_o *this,
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
  UnityEngine_Object_o *baseBuffPointPrefab; // x21
  UnityEngine_Object_o *titleObject; // x21
  float v17; // s8
  __int64 v18; // x1
  void *totalPointBgSprite; // x0
  srcLineSprite_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *titleBgSprite; // x21
  System_String_o *titleBgSpriteName; // x21
  UISprite_o *v23; // x22
  EventInfoCommandBuffPointControl___c_c *v24; // x0
  struct EventInfoCommandBuffPointControl___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__13_0; // x21
  Il2CppObject *v27; // x22
  struct EventInfoCommandBuffPointControl___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  const MethodInfo *v36; // x2
  int v37; // w8
  void *v38; // x21
  unsigned int v39; // w25
  int64_t v40; // x20
  EventUiValueEntity_o *v41; // x22
  UnityEngine_Object_o *BuffPointObject; // x23
  UnityEngine_Object_o *v43; // x23
  int32_t v44; // w0
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x4
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *totalPointObject; // x21
  const MethodInfo *v49; // x2
  UnityEngine_Object_o *v50; // x20
  System_String_o *totalPointBgSpriteName; // x20
  UISprite_o *v52; // x21
  __int64 v53; // x0

  if ( (byte_4188621 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, entitys);
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___, v6);
    sub_B2C35C(&Method_System_Func_EventUiValueEntity__int___ctor__, v7);
    sub_B2C35C(&System_Func_EventUiValueEntity__int__TypeInfo, v8);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventInfoCommandBuffPointComponent___, v9);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__Add__, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&Method_EventInfoCommandBuffPointControl___c__Setup_b__13_0__, v13);
    sub_B2C35C(&EventInfoCommandBuffPointControl___c_TypeInfo, v14);
    byte_4188621 = 1;
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
      v17 = 0.0;
      if ( UnityEngine_Object__op_Inequality(titleObject, 0LL, 0LL) )
      {
        GameObjectExtensions__AddLocalPositionY(this->fields.titleObject, 0.0, 0LL);
        totalPointBgSprite = this->fields.titleObject;
        if ( !totalPointBgSprite )
          goto LABEL_75;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)totalPointBgSprite,
                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        totalPointBgSprite = (void *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)Component_srcLineSprite,
                                       0LL,
                                       0LL);
        v17 = 0.0;
        if ( ((unsigned __int8)totalPointBgSprite & 1) != 0 )
        {
          if ( !Component_srcLineSprite )
            goto LABEL_75;
          v17 = 0.0 - (float)SHIDWORD(Component_srcLineSprite[1].fields.mFSM);
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
        v23 = this->fields.titleBgSprite;
        titleBgSpriteName = this->fields.titleBgSpriteName;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventUI(v23, titleBgSpriteName, 0LL);
        totalPointBgSprite = this->fields.totalPointBgSprite;
        if ( !totalPointBgSprite )
          goto LABEL_75;
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)totalPointBgSprite + 840LL))(
          totalPointBgSprite,
          *(_QWORD *)(*(_QWORD *)totalPointBgSprite + 848LL));
      }
      v24 = EventInfoCommandBuffPointControl___c_TypeInfo;
      if ( (BYTE3(EventInfoCommandBuffPointControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoCommandBuffPointControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoCommandBuffPointControl___c_TypeInfo);
        v24 = EventInfoCommandBuffPointControl___c_TypeInfo;
      }
      static_fields = v24->static_fields;
      _9__13_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__13_0;
      if ( !_9__13_0 )
      {
        if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v24);
          static_fields = EventInfoCommandBuffPointControl___c_TypeInfo->static_fields;
        }
        v27 = (Il2CppObject *)static_fields->__9;
        _9__13_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_EventUiValueEntity__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__13_0,
          v27,
          Method_EventInfoCommandBuffPointControl___c__Setup_b__13_0__,
          (const MethodInfo_27127B0 *)Method_System_Func_EventUiValueEntity__int___ctor__);
        v28 = EventInfoCommandBuffPointControl___c_TypeInfo->static_fields;
        v28->__9__13_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__13_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v28->__9__13_0,
          (System_Int32_array **)_9__13_0,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
      }
      v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                                                                   (System_Func_TSource__TKey__o *)_9__13_0,
                                                                   (const MethodInfo_1A93A04 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
      totalPointBgSprite = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                             v35,
                             (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
      if ( !totalPointBgSprite )
        goto LABEL_75;
      v37 = *((_DWORD *)totalPointBgSprite + 6);
      v38 = totalPointBgSprite;
      if ( v37 >= 1 )
      {
        v39 = 0;
        v40 = 0LL;
        while ( 1 )
        {
          if ( v39 >= v37 )
          {
            v53 = sub_B2C460(totalPointBgSprite);
            sub_B2C400(v53, 0LL);
          }
          v41 = (EventUiValueEntity_o *)*((_QWORD *)v38 + (int)v39 + 4);
          if ( !v41 )
            break;
          if ( v41->fields.type == 2 )
          {
            BuffPointObject = (UnityEngine_Object_o *)EventInfoCommandBuffPointControl__CreateBuffPointObject(
                                                        this,
                                                        v41,
                                                        v36);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            totalPointBgSprite = (void *)UnityEngine_Object__op_Equality(BuffPointObject, 0LL, 0LL);
            if ( ((unsigned __int8)totalPointBgSprite & 1) == 0 )
            {
              GameObjectExtensions__AddLocalPositionY((UnityEngine_GameObject_o *)BuffPointObject, v17, 0LL);
              if ( !BuffPointObject )
                break;
              v43 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)BuffPointObject,
                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventInfoCommandBuffPointComponent___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              totalPointBgSprite = (void *)UnityEngine_Object__op_Equality(v43, 0LL, 0LL);
              if ( ((unsigned __int8)totalPointBgSprite & 1) == 0 )
              {
                v44 = System_Int32__Parse(v41->fields.value, 0LL);
                totalPointBgSprite = EventInfoCommandBuffPointControl__GetViewData(this, v44, v45);
                if ( !v43 )
                  break;
                EventInfoCommandBuffPointComponent__Setup(
                  (EventInfoCommandBuffPointComponent_o *)v43,
                  this->fields.eventUiEntity,
                  v41,
                  (EventInfoCommandBuffPointComponent_ViewData_o *)totalPointBgSprite,
                  v46);
                klass = v43[1].klass;
                if ( !klass )
                  break;
                totalPointBgSprite = this->fields.buffPointCompnentList;
                if ( !totalPointBgSprite )
                  break;
                v40 += (int64_t)v43[3].klass;
                v17 = v17 - (float)SHIDWORD(klass->_1.nestedTypes);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)totalPointBgSprite,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__Add__);
              }
            }
          }
          v37 = *((_DWORD *)v38 + 6);
          if ( (int)++v39 >= v37 )
            goto LABEL_59;
        }
LABEL_75:
        sub_B2C434(totalPointBgSprite, v18);
      }
      v40 = 0LL;
LABEL_59:
      totalPointObject = (UnityEngine_Object_o *)this->fields.totalPointObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(totalPointObject, 0LL, 0LL) )
        GameObjectExtensions__AddLocalPositionY(this->fields.totalPointObject, v17, 0LL);
      EventInfoCommandBuffPointControl__SetTotalPointLabel(this, v40, v49);
      v50 = (UnityEngine_Object_o *)this->fields.totalPointBgSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v50, 0LL, 0LL)
        && !System_String__IsNullOrEmpty(this->fields.totalPointBgSpriteName, 0LL) )
      {
        v52 = this->fields.totalPointBgSprite;
        totalPointBgSpriteName = this->fields.totalPointBgSpriteName;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventUI(v52, totalPointBgSpriteName, 0LL);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventInfoCommandBuffPointControl___c_StaticFields *static_fields; // x0

  if ( (byte_4184AF9 & 1) == 0 )
  {
    sub_B2C35C(&EventInfoCommandBuffPointControl___c_TypeInfo, v1);
    byte_4184AF9 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventInfoCommandBuffPointControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventInfoCommandBuffPointControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoCommandBuffPointControl___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  return x->fields.GroupId == this->fields.GroupId;
}