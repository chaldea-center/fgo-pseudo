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
  UnityEngine_Object_o *v10; // x0
  System_String_o *name; // x0
  System_String_o *v12; // x0

  if ( (byte_40FA0F3 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, ent);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_585, v6);
    sub_B16FFC(&StringLiteral_651, v7);
    byte_40FA0F3 = 1;
  }
  baseBuffPointPrefab = this->fields.baseBuffPointPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                 (UnityEngine_UI_Dropdown_DropdownItem_o *)baseBuffPointPrefab,
                                 (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
  {
    v10 = (UnityEngine_Object_o *)this->fields.baseBuffPointPrefab;
    if ( !v10
      || (name = UnityEngine_Object__get_name(v10, 0LL), !ent)
      || (v12 = System_String__Concat_43747144(
                  name,
                  (System_String_o *)StringLiteral_585,
                  ent->fields.value,
                  (System_String_o *)StringLiteral_651,
                  0LL),
          !v9) )
    {
      sub_B170D4();
    }
    UnityEngine_Object__set_name(v9, v12, 0LL);
    GameObjectExtensions__SafeSetParent_27425996((UnityEngine_GameObject_o *)v9, this->fields.rootObject, 0LL);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  EventInfoCommandBuffPointControl___c__DisplayClass15_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *ViewDataList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x20

  if ( (byte_40FA0F4 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent_ViewData__Find__,
      *(_QWORD *)&GroupId);
    sub_B16FFC(&Method_System_Predicate_EventInfoCommandBuffPointComponent_ViewData___ctor__, v7);
    sub_B16FFC(&System_Predicate_EventInfoCommandBuffPointComponent_ViewData__TypeInfo, v8);
    sub_B16FFC(&Method_EventInfoCommandBuffPointControl___c__DisplayClass15_0__GetViewData_b__0__, v9);
    sub_B16FFC(&EventInfoCommandBuffPointControl___c__DisplayClass15_0_TypeInfo, v10);
    byte_40FA0F4 = 1;
  }
  v11 = (EventInfoCommandBuffPointControl___c__DisplayClass15_0_o *)sub_B170CC(
                                                                      EventInfoCommandBuffPointControl___c__DisplayClass15_0_TypeInfo,
                                                                      *(_QWORD *)&GroupId,
                                                                      method,
                                                                      v3,
                                                                      v4);
  EventInfoCommandBuffPointControl___c__DisplayClass15_0___ctor(v11, 0LL);
  if ( !v11
    || (v11->fields.GroupId = GroupId,
        ViewDataList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)this->fields.ViewDataList,
        v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_EventInfoCommandBuffPointComponent_ViewData__TypeInfo,
                                                                         v12,
                                                                         v13,
                                                                         v14,
                                                                         v15),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v17,
          (Il2CppObject *)v11,
          Method_EventInfoCommandBuffPointControl___c__DisplayClass15_0__GetViewData_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_EventInfoCommandBuffPointComponent_ViewData___ctor__),
        !ViewDataList) )
  {
    sub_B170D4();
  }
  return (EventInfoCommandBuffPointComponent_ViewData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                            ViewDataList,
                                                            (System_Predicate_T__o *)v17,
                                                            (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent_ViewData__Find__);
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
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_40FA0F1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent___ctor__, entity);
    sub_B16FFC(&System_Collections_Generic_List_EventInfoCommandBuffPointComponent__TypeInfo, v10);
    byte_40FA0F1 = 1;
  }
  this->fields.eventUiEntity = entity;
  p_eventUiEntity = &this->fields.eventUiEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)p_eventUiEntity,
    (System_Int32_array **)entity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventInfoCommandBuffPointComponent__TypeInfo,
                                                                                                  v12,
                                                                                                  v13,
                                                                                                  v14,
                                                                                                  v15);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent___ctor__);
  p_eventUiEntity[1] = (struct EventUiEntity_o *)v16;
  sub_B16F98(
    (BattleServantConfConponent_o *)(p_eventUiEntity + 1),
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}


void __fastcall EventInfoCommandBuffPointControl__Redisplay(
        EventInfoCommandBuffPointControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_EventInfoCommandBuffPointComponent__o *buffPointCompnentList; // x0
  int64_t v7; // x20
  Il2CppObject *current; // x21
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FA0F5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__GetEnumerator__, v5);
    byte_40FA0F5 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  buffPointCompnentList = this->fields.buffPointCompnentList;
  if ( !buffPointCompnentList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)buffPointCompnentList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__GetEnumerator__);
  v7 = 0LL;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__MoveNext__) )
  {
    current = v11.fields.current;
    if ( !v11.fields.current )
      sub_B170D4();
    EventInfoCommandBuffPointComponent__UpdatePoint((EventInfoCommandBuffPointComponent_o *)v11.fields.current, v9);
    v7 += (int64_t)current[4].monitor;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__Dispose__);
  EventInfoCommandBuffPointControl__SetTotalPointLabel(this, v7, v10);
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

  if ( (byte_40FA0F6 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, totalPoint);
    sub_B16FFC(&long_TypeInfo, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&System_Math_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_5635, v9);
    byte_40FA0F6 = 1;
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
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5635, 0LL);
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
    v17 = System_Math__Min_44464240(totalPoint, UserPointEventMax, 0LL);
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v17);
    v16 = System_String__Format(v12, v15, 0LL);
    if ( !v11 )
      sub_B170D4();
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
  UnityEngine_GameObject_o *v18; // x0
  srcLineSprite_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *titleBgSprite; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_String_o *titleBgSpriteName; // x21
  UISprite_o *v26; // x22
  struct UISprite_o *totalPointBgSprite; // x0
  EventInfoCommandBuffPointControl___c_c *v28; // x0
  struct EventInfoCommandBuffPointControl___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__13_0; // x21
  Il2CppObject *v31; // x22
  struct EventInfoCommandBuffPointControl___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v40; // x0
  __int64 v41; // x1
  const MethodInfo *v42; // x2
  int max_length; // w8
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v44; // x21
  unsigned int v45; // w25
  int64_t v46; // x20
  EventUiValueEntity_o *v47; // x22
  UnityEngine_Object_o *BuffPointObject; // x23
  UnityEngine_Object_o *v49; // x23
  int32_t v50; // w0
  const MethodInfo *v51; // x2
  EventInfoCommandBuffPointComponent_ViewData_o *ViewData; // x0
  const MethodInfo *v53; // x4
  UnityEngine_Object_c *klass; // x8
  struct System_Collections_Generic_List_EventInfoCommandBuffPointComponent__o *buffPointCompnentList; // x0
  UnityEngine_Object_o *totalPointObject; // x21
  const MethodInfo *v57; // x2
  UnityEngine_Object_o *v58; // x20
  System_String_o *totalPointBgSpriteName; // x20
  UISprite_o *v60; // x21
  struct UISprite_o *v61; // x0

  if ( (byte_40FA0F2 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, entitys);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___, v6);
    sub_B16FFC(&Method_System_Func_EventUiValueEntity__int___ctor__, v7);
    sub_B16FFC(&System_Func_EventUiValueEntity__int__TypeInfo, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventInfoCommandBuffPointComponent___, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__Add__, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&Method_EventInfoCommandBuffPointControl___c__Setup_b__13_0__, v13);
    sub_B16FFC(&EventInfoCommandBuffPointControl___c_TypeInfo, v14);
    byte_40FA0F2 = 1;
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
        v18 = this->fields.titleObject;
        if ( !v18 )
          goto LABEL_75;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v18,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v17 = 0.0;
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
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
        v26 = this->fields.titleBgSprite;
        titleBgSpriteName = this->fields.titleBgSpriteName;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventUI(v26, titleBgSpriteName, 0LL);
        totalPointBgSprite = this->fields.totalPointBgSprite;
        if ( !totalPointBgSprite )
          goto LABEL_75;
        ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))totalPointBgSprite->klass->vtable._33_MakePixelPerfect.method)(
          totalPointBgSprite,
          totalPointBgSprite->klass->vtable._34_get_minWidth.methodPtr);
      }
      v28 = EventInfoCommandBuffPointControl___c_TypeInfo;
      if ( (BYTE3(EventInfoCommandBuffPointControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoCommandBuffPointControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoCommandBuffPointControl___c_TypeInfo);
        v28 = EventInfoCommandBuffPointControl___c_TypeInfo;
      }
      static_fields = v28->static_fields;
      _9__13_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__13_0;
      if ( !_9__13_0 )
      {
        if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v28);
          static_fields = EventInfoCommandBuffPointControl___c_TypeInfo->static_fields;
        }
        v31 = (Il2CppObject *)static_fields->__9;
        _9__13_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                     System_Func_EventUiValueEntity__int__TypeInfo,
                                                                                     v21,
                                                                                     v22,
                                                                                     v23,
                                                                                     v24);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__13_0,
          v31,
          Method_EventInfoCommandBuffPointControl___c__Setup_b__13_0__,
          (const MethodInfo_2B6B6EC *)Method_System_Func_EventUiValueEntity__int___ctor__);
        v32 = EventInfoCommandBuffPointControl___c_TypeInfo->static_fields;
        v32->__9__13_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__13_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v32->__9__13_0,
          (System_Int32_array **)_9__13_0,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
      }
      v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                                                                   (System_Func_TSource__TKey__o *)_9__13_0,
                                                                   (const MethodInfo_19BDA8C *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
      v40 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
              v39,
              (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
      if ( !v40 )
        goto LABEL_75;
      max_length = v40->max_length;
      v44 = v40;
      if ( max_length >= 1 )
      {
        v45 = 0;
        v46 = 0LL;
        while ( 1 )
        {
          if ( v45 >= max_length )
          {
            sub_B17100(v40, v41, v42);
            sub_B170A0();
          }
          v47 = (EventUiValueEntity_o *)v44->m_Items[v45];
          if ( !v47 )
            break;
          if ( v47->fields.type == 2 )
          {
            BuffPointObject = (UnityEngine_Object_o *)EventInfoCommandBuffPointControl__CreateBuffPointObject(
                                                        this,
                                                        v47,
                                                        v42);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v40 = (DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *)UnityEngine_Object__op_Equality(
                                                                              BuffPointObject,
                                                                              0LL,
                                                                              0LL);
            if ( ((unsigned __int8)v40 & 1) == 0 )
            {
              GameObjectExtensions__AddLocalPositionY((UnityEngine_GameObject_o *)BuffPointObject, v17, 0LL);
              if ( !BuffPointObject )
                break;
              v49 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)BuffPointObject,
                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventInfoCommandBuffPointComponent___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              v40 = (DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *)UnityEngine_Object__op_Equality(
                                                                                v49,
                                                                                0LL,
                                                                                0LL);
              if ( ((unsigned __int8)v40 & 1) == 0 )
              {
                v50 = System_Int32__Parse(v47->fields.value, 0LL);
                ViewData = EventInfoCommandBuffPointControl__GetViewData(this, v50, v51);
                if ( !v49 )
                  break;
                EventInfoCommandBuffPointComponent__Setup(
                  (EventInfoCommandBuffPointComponent_o *)v49,
                  this->fields.eventUiEntity,
                  v47,
                  ViewData,
                  v53);
                klass = v49[1].klass;
                if ( !klass )
                  break;
                buffPointCompnentList = this->fields.buffPointCompnentList;
                if ( !buffPointCompnentList )
                  break;
                v46 += (int64_t)v49[3].klass;
                v17 = v17 - (float)SHIDWORD(klass->_1.nestedTypes);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)buffPointCompnentList,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v49,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__Add__);
              }
            }
          }
          max_length = v44->max_length;
          if ( (int)++v45 >= max_length )
            goto LABEL_59;
        }
LABEL_75:
        sub_B170D4();
      }
      v46 = 0LL;
LABEL_59:
      totalPointObject = (UnityEngine_Object_o *)this->fields.totalPointObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(totalPointObject, 0LL, 0LL) )
        GameObjectExtensions__AddLocalPositionY(this->fields.totalPointObject, v17, 0LL);
      EventInfoCommandBuffPointControl__SetTotalPointLabel(this, v46, v57);
      v58 = (UnityEngine_Object_o *)this->fields.totalPointBgSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v58, 0LL, 0LL)
        && !System_String__IsNullOrEmpty(this->fields.totalPointBgSpriteName, 0LL) )
      {
        v60 = this->fields.totalPointBgSprite;
        totalPointBgSpriteName = this->fields.totalPointBgSpriteName;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventUI(v60, totalPointBgSpriteName, 0LL);
        v61 = this->fields.totalPointBgSprite;
        if ( !v61 )
          goto LABEL_75;
        ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v61->klass->vtable._33_MakePixelPerfect.method)(
          v61,
          v61->klass->vtable._34_get_minWidth.methodPtr);
      }
    }
  }
}


void __fastcall EventInfoCommandBuffPointControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F6FC6 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoCommandBuffPointControl___c_TypeInfo, v1);
    byte_40F6FC6 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventInfoCommandBuffPointControl___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventInfoCommandBuffPointControl___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
    sub_B170D4();
  return x->fields.GroupId == this->fields.GroupId;
}