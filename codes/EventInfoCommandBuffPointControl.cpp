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
  UnityEngine_Object_o *name; // x0

  if ( (byte_4215588 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, ent);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_591/*"("*/, v6);
    sub_B0D8A4(&StringLiteral_658/*")"*/, v7);
    byte_4215588 = 1;
  }
  baseBuffPointPrefab = this->fields.baseBuffPointPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                 (UnityEngine_UI_Dropdown_DropdownItem_o *)baseBuffPointPrefab,
                                 (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
  {
    name = (UnityEngine_Object_o *)this->fields.baseBuffPointPrefab;
    if ( !name
      || (name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL), !ent)
      || (name = (UnityEngine_Object_o *)System_String__Concat_43853316(
                                           (System_String_o *)name,
                                           (System_String_o *)StringLiteral_591/*"("*/,
                                           ent->fields.value,
                                           (System_String_o *)StringLiteral_658/*")"*/,
                                           0LL),
          !v9) )
    {
      sub_B0D97C(name);
    }
    UnityEngine_Object__set_name(v9, (System_String_o *)name, 0LL);
    GameObjectExtensions__SafeSetParent_31184716((UnityEngine_GameObject_o *)v9, this->fields.rootObject, 0LL);
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
  __int64 v12; // x2
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *ViewDataList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v14; // x20

  if ( (byte_4215589 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent_ViewData__Find__,
      *(_QWORD *)&GroupId);
    sub_B0D8A4(&Method_System_Predicate_EventInfoCommandBuffPointComponent_ViewData___ctor__, v5);
    sub_B0D8A4(&System_Predicate_EventInfoCommandBuffPointComponent_ViewData__TypeInfo, v6);
    sub_B0D8A4(&Method_EventInfoCommandBuffPointControl___c__DisplayClass15_0__GetViewData_b__0__, v7);
    sub_B0D8A4(&EventInfoCommandBuffPointControl___c__DisplayClass15_0_TypeInfo, v8);
    byte_4215589 = 1;
  }
  v9 = (EventInfoCommandBuffPointControl___c__DisplayClass15_0_o *)sub_B0D974(
                                                                     EventInfoCommandBuffPointControl___c__DisplayClass15_0_TypeInfo,
                                                                     *(_QWORD *)&GroupId,
                                                                     method);
  EventInfoCommandBuffPointControl___c__DisplayClass15_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.GroupId = GroupId,
        ViewDataList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)this->fields.ViewDataList,
        v14 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_EventInfoCommandBuffPointComponent_ViewData__TypeInfo,
                                                                         v11,
                                                                         v12),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v14,
          (Il2CppObject *)v9,
          Method_EventInfoCommandBuffPointControl___c__DisplayClass15_0__GetViewData_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_EventInfoCommandBuffPointComponent_ViewData___ctor__),
        !ViewDataList) )
  {
    sub_B0D97C(v10);
  }
  return (EventInfoCommandBuffPointComponent_ViewData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                            ViewDataList,
                                                            (System_Predicate_T__o *)v14,
                                                            (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent_ViewData__Find__);
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
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4215586 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent___ctor__, entity);
    sub_B0D8A4(&System_Collections_Generic_List_EventInfoCommandBuffPointComponent__TypeInfo, v10);
    byte_4215586 = 1;
  }
  this->fields.eventUiEntity = entity;
  p_eventUiEntity = &this->fields.eventUiEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)p_eventUiEntity,
    (System_Int32_array **)entity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventInfoCommandBuffPointComponent__TypeInfo,
                                                                                                  v12,
                                                                                                  v13);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent___ctor__);
  p_eventUiEntity[1] = (struct EventUiEntity_o *)v14;
  sub_B0D840(
    (BattleServantConfConponent_o *)(p_eventUiEntity + 1),
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
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

  if ( (byte_421558A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__GetEnumerator__, v5);
    byte_421558A = 1;
  }
  memset(&v12, 0, sizeof(v12));
  buffPointCompnentList = this->fields.buffPointCompnentList;
  if ( !buffPointCompnentList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)buffPointCompnentList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__GetEnumerator__);
  for ( i = 0LL; ; i += (int64_t)current[4].monitor )
  {
    v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v12,
           (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__MoveNext__);
    if ( !v9 )
      break;
    current = v12.fields.current;
    if ( !v12.fields.current )
      sub_B0D97C(v9);
    EventInfoCommandBuffPointComponent__UpdatePoint((EventInfoCommandBuffPointComponent_o *)v12.fields.current, v10);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__Dispose__);
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
  int64_t v17; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_421558B & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, totalPoint);
    sub_B0D8A4(&long_TypeInfo, v5);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&System_Math_TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_5667/*"EVENT_POINT_COMMON_FORMAT"*/, v9);
    byte_421558B = 1;
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
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5667/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
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
    v17 = System_Math__Min_44560000(totalPoint, UserPointEventMax, 0LL);
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v17);
    v16 = System_String__Format(v12, v15, 0LL);
    if ( !v11 )
      sub_B0D97C(v16);
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
  void *totalPointBgSprite; // x0
  srcLineSprite_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *titleBgSprite; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  System_String_o *titleBgSpriteName; // x21
  UISprite_o *v24; // x22
  EventInfoCommandBuffPointControl___c_c *v25; // x0
  struct EventInfoCommandBuffPointControl___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__13_0; // x21
  Il2CppObject *v28; // x22
  struct EventInfoCommandBuffPointControl___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  const MethodInfo *v37; // x2
  int v38; // w8
  void *v39; // x21
  unsigned int v40; // w25
  int64_t v41; // x20
  EventUiValueEntity_o *v42; // x22
  UnityEngine_Object_o *BuffPointObject; // x23
  UnityEngine_Object_o *v44; // x23
  int32_t v45; // w0
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x4
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *totalPointObject; // x21
  const MethodInfo *v50; // x2
  UnityEngine_Object_o *v51; // x20
  System_String_o *totalPointBgSpriteName; // x20
  UISprite_o *v53; // x21
  __int64 v54; // x0

  if ( (byte_4215587 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, entitys);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___, v6);
    sub_B0D8A4(&Method_System_Func_EventUiValueEntity__int___ctor__, v7);
    sub_B0D8A4(&System_Func_EventUiValueEntity__int__TypeInfo, v8);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_EventInfoCommandBuffPointComponent___, v9);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__Add__, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&Method_EventInfoCommandBuffPointControl___c__Setup_b__13_0__, v13);
    sub_B0D8A4(&EventInfoCommandBuffPointControl___c_TypeInfo, v14);
    byte_4215587 = 1;
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
                                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
        v24 = this->fields.titleBgSprite;
        titleBgSpriteName = this->fields.titleBgSpriteName;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventUI(v24, titleBgSpriteName, 0LL);
        totalPointBgSprite = this->fields.totalPointBgSprite;
        if ( !totalPointBgSprite )
          goto LABEL_75;
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)totalPointBgSprite + 840LL))(
          totalPointBgSprite,
          *(_QWORD *)(*(_QWORD *)totalPointBgSprite + 848LL));
      }
      v25 = EventInfoCommandBuffPointControl___c_TypeInfo;
      if ( (BYTE3(EventInfoCommandBuffPointControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoCommandBuffPointControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoCommandBuffPointControl___c_TypeInfo);
        v25 = EventInfoCommandBuffPointControl___c_TypeInfo;
      }
      static_fields = v25->static_fields;
      _9__13_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__13_0;
      if ( !_9__13_0 )
      {
        if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v25);
          static_fields = EventInfoCommandBuffPointControl___c_TypeInfo->static_fields;
        }
        v28 = (Il2CppObject *)static_fields->__9;
        _9__13_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                     System_Func_EventUiValueEntity__int__TypeInfo,
                                                                                     v21,
                                                                                     v22);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__13_0,
          v28,
          Method_EventInfoCommandBuffPointControl___c__Setup_b__13_0__,
          (const MethodInfo_2619564 *)Method_System_Func_EventUiValueEntity__int___ctor__);
        v29 = EventInfoCommandBuffPointControl___c_TypeInfo->static_fields;
        v29->__9__13_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__13_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v29->__9__13_0,
          (System_Int32_array **)_9__13_0,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
      }
      v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                                                                   (System_Func_TSource__TKey__o *)_9__13_0,
                                                                   (const MethodInfo_1B4ECD0 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
      totalPointBgSprite = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                             v36,
                             (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
      if ( !totalPointBgSprite )
        goto LABEL_75;
      v38 = *((_DWORD *)totalPointBgSprite + 6);
      v39 = totalPointBgSprite;
      if ( v38 >= 1 )
      {
        v40 = 0;
        v41 = 0LL;
        while ( 1 )
        {
          if ( v40 >= v38 )
          {
            v54 = sub_B0D9A8(totalPointBgSprite);
            sub_B0D948(v54, 0LL);
          }
          v42 = (EventUiValueEntity_o *)*((_QWORD *)v39 + (int)v40 + 4);
          if ( !v42 )
            break;
          if ( v42->fields.type == 2 )
          {
            BuffPointObject = (UnityEngine_Object_o *)EventInfoCommandBuffPointControl__CreateBuffPointObject(
                                                        this,
                                                        v42,
                                                        v37);
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
              v44 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)BuffPointObject,
                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_EventInfoCommandBuffPointComponent___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              totalPointBgSprite = (void *)UnityEngine_Object__op_Equality(v44, 0LL, 0LL);
              if ( ((unsigned __int8)totalPointBgSprite & 1) == 0 )
              {
                v45 = System_Int32__Parse(v42->fields.value, 0LL);
                totalPointBgSprite = EventInfoCommandBuffPointControl__GetViewData(this, v45, v46);
                if ( !v44 )
                  break;
                EventInfoCommandBuffPointComponent__Setup(
                  (EventInfoCommandBuffPointComponent_o *)v44,
                  this->fields.eventUiEntity,
                  v42,
                  (EventInfoCommandBuffPointComponent_ViewData_o *)totalPointBgSprite,
                  v47);
                klass = v44[1].klass;
                if ( !klass )
                  break;
                totalPointBgSprite = this->fields.buffPointCompnentList;
                if ( !totalPointBgSprite )
                  break;
                v41 += (int64_t)v44[3].klass;
                v17 = v17 - (float)SHIDWORD(klass->_1.nestedTypes);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)totalPointBgSprite,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v44,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__Add__);
              }
            }
          }
          v38 = *((_DWORD *)v39 + 6);
          if ( (int)++v40 >= v38 )
            goto LABEL_59;
        }
LABEL_75:
        sub_B0D97C(totalPointBgSprite);
      }
      v41 = 0LL;
LABEL_59:
      totalPointObject = (UnityEngine_Object_o *)this->fields.totalPointObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(totalPointObject, 0LL, 0LL) )
        GameObjectExtensions__AddLocalPositionY(this->fields.totalPointObject, v17, 0LL);
      EventInfoCommandBuffPointControl__SetTotalPointLabel(this, v41, v50);
      v51 = (UnityEngine_Object_o *)this->fields.totalPointBgSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v51, 0LL, 0LL)
        && !System_String__IsNullOrEmpty(this->fields.totalPointBgSpriteName, 0LL) )
      {
        v53 = this->fields.totalPointBgSprite;
        totalPointBgSpriteName = this->fields.totalPointBgSpriteName;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventUI(v53, totalPointBgSpriteName, 0LL);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventInfoCommandBuffPointControl___c_StaticFields *static_fields; // x0

  if ( (byte_4211B58 & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoCommandBuffPointControl___c_TypeInfo, v1);
    byte_4211B58 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventInfoCommandBuffPointControl___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventInfoCommandBuffPointControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoCommandBuffPointControl___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return x->fields.GroupId == this->fields.GroupId;
}