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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct UnityEngine_GameObject_o *baseBuffPointPrefab; // x21
  UnityEngine_Object_o *v16; // x21
  __int64 v17; // x1
  UnityEngine_Object_o *name; // x0

  if ( (byte_42E94A4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, (_DWORD)ent, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_592/*"("*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_659/*")"*/, v12, v13, v14);
    byte_42E94A4 = 1;
  }
  baseBuffPointPrefab = this->fields.baseBuffPointPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v16 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                  (UnityEngine_UI_Dropdown_DropdownItem_o *)baseBuffPointPrefab,
                                  (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
  {
    name = (UnityEngine_Object_o *)this->fields.baseBuffPointPrefab;
    if ( !name
      || (name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL), !ent)
      || (name = (UnityEngine_Object_o *)System_String__Concat_44581200(
                                           (System_String_o *)name,
                                           (System_String_o *)StringLiteral_592/*"("*/,
                                           ent->fields.value,
                                           (System_String_o *)StringLiteral_659/*")"*/,
                                           0LL),
          !v16) )
    {
      sub_B5D69C(name, v17);
    }
    UnityEngine_Object__set_name(v16, (System_String_o *)name, 0LL);
    GameObjectExtensions__SafeSetParent_32436524((UnityEngine_GameObject_o *)v16, this->fields.rootObject, 0LL);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v16, 1, 0LL);
  }
  return (UnityEngine_GameObject_o *)v16;
}


EventInfoCommandBuffPointComponent_ViewData_o *__fastcall EventInfoCommandBuffPointControl__GetViewData(
        EventInfoCommandBuffPointControl_o *this,
        int32_t GroupId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  EventInfoCommandBuffPointControl___c__DisplayClass15_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *ViewDataList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v22; // x20

  if ( (byte_42E94A5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent_ViewData__Find__,
      GroupId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Predicate_EventInfoCommandBuffPointComponent_ViewData___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Predicate_EventInfoCommandBuffPointComponent_ViewData__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_EventInfoCommandBuffPointControl___c__DisplayClass15_0__GetViewData_b__0__, v12, v13, v14);
    sub_B5D5C4(&EventInfoCommandBuffPointControl___c__DisplayClass15_0_TypeInfo, v15, v16, v17);
    byte_42E94A5 = 1;
  }
  v18 = (EventInfoCommandBuffPointControl___c__DisplayClass15_0_o *)sub_B5D694(EventInfoCommandBuffPointControl___c__DisplayClass15_0_TypeInfo);
  EventInfoCommandBuffPointControl___c__DisplayClass15_0___ctor(v18, 0LL);
  if ( !v18
    || (v18->fields.GroupId = GroupId,
        ViewDataList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)this->fields.ViewDataList,
        v22 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_EventInfoCommandBuffPointComponent_ViewData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v22,
          (Il2CppObject *)v18,
          Method_EventInfoCommandBuffPointControl___c__DisplayClass15_0__GetViewData_b__0__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_EventInfoCommandBuffPointComponent_ViewData___ctor__),
        !ViewDataList) )
  {
    sub_B5D69C(v19, v20);
  }
  return (EventInfoCommandBuffPointComponent_ViewData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                            ViewDataList,
                                                            (System_Predicate_T__o *)v22,
                                                            (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent_ViewData__Find__);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  struct EventUiEntity_o **p_eventUiEntity; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42E94A2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent___ctor__,
      (_DWORD)entity,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_Collections_Generic_List_EventInfoCommandBuffPointComponent__TypeInfo, v10, v11, v12);
    byte_42E94A2 = 1;
  }
  this->fields.eventUiEntity = entity;
  p_eventUiEntity = &this->fields.eventUiEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)p_eventUiEntity,
    (System_Int32_array **)entity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventInfoCommandBuffPointComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent___ctor__);
  p_eventUiEntity[1] = (struct EventUiEntity_o *)v14;
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_EventInfoCommandBuffPointComponent__o *buffPointCompnentList; // x0
  int64_t i; // x20
  Il2CppObject *current; // x21
  _BOOL8 v17; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E94A6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__GetEnumerator__,
      v11,
      v12,
      v13);
    byte_42E94A6 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  buffPointCompnentList = this->fields.buffPointCompnentList;
  if ( !buffPointCompnentList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)buffPointCompnentList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__GetEnumerator__);
  for ( i = 0LL; ; i += (int64_t)current[4].monitor )
  {
    v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__MoveNext__);
    if ( !v17 )
      break;
    current = v20.fields.current;
    if ( !v20.fields.current )
      sub_B5D69C(v17, v18);
    EventInfoCommandBuffPointComponent__UpdatePoint((EventInfoCommandBuffPointComponent_o *)v20.fields.current, v18);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__Dispose__);
  EventInfoCommandBuffPointControl__SetTotalPointLabel(this, i, v19);
}


void __fastcall EventInfoCommandBuffPointControl__SetTotalPointLabel(
        EventInfoCommandBuffPointControl_o *this,
        int64_t totalPoint,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  UnityEngine_Object_o *totalPointLabel; // x21
  UILabel_o *v22; // x20
  System_String_o *v23; // x21
  BalanceConfig_c *v24; // x8
  int64_t UserPointEventMax; // x22
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  __int64 v28; // x1
  int64_t v29; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E94A7 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, totalPoint, (_DWORD)method, v3);
    sub_B5D5C4(&long_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Math_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, v18, v19, v20);
    byte_42E94A7 = 1;
  }
  totalPointLabel = (UnityEngine_Object_o *)this->fields.totalPointLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(totalPointLabel, 0LL, 0LL) )
  {
    v22 = this->fields.totalPointLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    v24 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v24 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v24->static_fields->UserPointEventMax;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v29 = System_Math__Min_45149944(totalPoint, UserPointEventMax, 0LL);
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v29);
    v27 = System_String__Format(v23, v26, 0LL);
    if ( !v22 )
      sub_B5D69C(v27, v28);
    UILabel__set_text(v22, v27, 0LL);
  }
}


void __fastcall EventInfoCommandBuffPointControl__Setup(
        EventInfoCommandBuffPointControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  UnityEngine_Object_o *baseBuffPointPrefab; // x21
  UnityEngine_Object_o *titleObject; // x21
  float v38; // s8
  __int64 v39; // x1
  void *totalPointBgSprite; // x0
  srcLineSprite_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *titleBgSprite; // x21
  System_String_o *titleBgSpriteName; // x21
  UISprite_o *v44; // x22
  EventInfoCommandBuffPointControl___c_c *v45; // x0
  struct EventInfoCommandBuffPointControl___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__13_0; // x21
  Il2CppObject *v48; // x22
  struct EventInfoCommandBuffPointControl___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  const MethodInfo *v57; // x2
  int v58; // w8
  void *v59; // x21
  unsigned int v60; // w25
  int64_t v61; // x20
  EventUiValueEntity_o *v62; // x22
  UnityEngine_Object_o *BuffPointObject; // x23
  UnityEngine_Object_o *v64; // x23
  int32_t v65; // w0
  const MethodInfo *v66; // x2
  const MethodInfo *v67; // x4
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *totalPointObject; // x21
  const MethodInfo *v70; // x2
  UnityEngine_Object_o *v71; // x20
  System_String_o *totalPointBgSpriteName; // x20
  UISprite_o *v73; // x21
  __int64 v74; // x0

  if ( (byte_42E94A3 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)entitys, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_EventUiValueEntity__int___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Func_EventUiValueEntity__int__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventInfoCommandBuffPointComponent___, v18, v19, v20);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__Add__, v24, v25, v26);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_EventInfoCommandBuffPointControl___c__Setup_b__13_0__, v30, v31, v32);
    sub_B5D5C4(&EventInfoCommandBuffPointControl___c_TypeInfo, v33, v34, v35);
    byte_42E94A3 = 1;
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
      v38 = 0.0;
      if ( UnityEngine_Object__op_Inequality(titleObject, 0LL, 0LL) )
      {
        GameObjectExtensions__AddLocalPositionY(this->fields.titleObject, 0.0, 0LL);
        totalPointBgSprite = this->fields.titleObject;
        if ( !totalPointBgSprite )
          goto LABEL_75;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)totalPointBgSprite,
                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        totalPointBgSprite = (void *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)Component_srcLineSprite,
                                       0LL,
                                       0LL);
        v38 = 0.0;
        if ( ((unsigned __int8)totalPointBgSprite & 1) != 0 )
        {
          if ( !Component_srcLineSprite )
            goto LABEL_75;
          v38 = 0.0 - (float)SHIDWORD(Component_srcLineSprite[1].fields.mFSM);
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
        v44 = this->fields.titleBgSprite;
        titleBgSpriteName = this->fields.titleBgSpriteName;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventUI(v44, titleBgSpriteName, 0LL);
        totalPointBgSprite = this->fields.totalPointBgSprite;
        if ( !totalPointBgSprite )
          goto LABEL_75;
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)totalPointBgSprite + 840LL))(
          totalPointBgSprite,
          *(_QWORD *)(*(_QWORD *)totalPointBgSprite + 848LL));
      }
      v45 = EventInfoCommandBuffPointControl___c_TypeInfo;
      if ( (BYTE3(EventInfoCommandBuffPointControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoCommandBuffPointControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoCommandBuffPointControl___c_TypeInfo);
        v45 = EventInfoCommandBuffPointControl___c_TypeInfo;
      }
      static_fields = v45->static_fields;
      _9__13_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__13_0;
      if ( !_9__13_0 )
      {
        if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v45);
          static_fields = EventInfoCommandBuffPointControl___c_TypeInfo->static_fields;
        }
        v48 = (Il2CppObject *)static_fields->__9;
        _9__13_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_EventUiValueEntity__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__13_0,
          v48,
          Method_EventInfoCommandBuffPointControl___c__Setup_b__13_0__,
          (const MethodInfo_2C2F87C *)Method_System_Func_EventUiValueEntity__int___ctor__);
        v49 = EventInfoCommandBuffPointControl___c_TypeInfo->static_fields;
        v49->__9__13_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__13_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v49->__9__13_0,
          (System_Int32_array **)_9__13_0,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55);
      }
      v56 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                                                                   (System_Func_TSource__TKey__o *)_9__13_0,
                                                                   (const MethodInfo_1CAF5B4 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
      totalPointBgSprite = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                             v56,
                             (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
      if ( !totalPointBgSprite )
        goto LABEL_75;
      v58 = *((_DWORD *)totalPointBgSprite + 6);
      v59 = totalPointBgSprite;
      if ( v58 >= 1 )
      {
        v60 = 0;
        v61 = 0LL;
        while ( 1 )
        {
          if ( v60 >= v58 )
          {
            v74 = sub_B5D6C8(totalPointBgSprite);
            sub_B5D668(v74, 0LL);
          }
          v62 = (EventUiValueEntity_o *)*((_QWORD *)v59 + (int)v60 + 4);
          if ( !v62 )
            break;
          if ( v62->fields.type == 2 )
          {
            BuffPointObject = (UnityEngine_Object_o *)EventInfoCommandBuffPointControl__CreateBuffPointObject(
                                                        this,
                                                        v62,
                                                        v57);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            totalPointBgSprite = (void *)UnityEngine_Object__op_Equality(BuffPointObject, 0LL, 0LL);
            if ( ((unsigned __int8)totalPointBgSprite & 1) == 0 )
            {
              GameObjectExtensions__AddLocalPositionY((UnityEngine_GameObject_o *)BuffPointObject, v38, 0LL);
              if ( !BuffPointObject )
                break;
              v64 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)BuffPointObject,
                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventInfoCommandBuffPointComponent___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              totalPointBgSprite = (void *)UnityEngine_Object__op_Equality(v64, 0LL, 0LL);
              if ( ((unsigned __int8)totalPointBgSprite & 1) == 0 )
              {
                v65 = System_Int32__Parse(v62->fields.value, 0LL);
                totalPointBgSprite = EventInfoCommandBuffPointControl__GetViewData(this, v65, v66);
                if ( !v64 )
                  break;
                EventInfoCommandBuffPointComponent__Setup(
                  (EventInfoCommandBuffPointComponent_o *)v64,
                  this->fields.eventUiEntity,
                  v62,
                  (EventInfoCommandBuffPointComponent_ViewData_o *)totalPointBgSprite,
                  v67);
                klass = v64[1].klass;
                if ( !klass )
                  break;
                totalPointBgSprite = this->fields.buffPointCompnentList;
                if ( !totalPointBgSprite )
                  break;
                v61 += (int64_t)v64[3].klass;
                v38 = v38 - (float)SHIDWORD(klass->_1.nestedTypes);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)totalPointBgSprite,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v64,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__Add__);
              }
            }
          }
          v58 = *((_DWORD *)v59 + 6);
          if ( (int)++v60 >= v58 )
            goto LABEL_59;
        }
LABEL_75:
        sub_B5D69C(totalPointBgSprite, v39);
      }
      v61 = 0LL;
LABEL_59:
      totalPointObject = (UnityEngine_Object_o *)this->fields.totalPointObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(totalPointObject, 0LL, 0LL) )
        GameObjectExtensions__AddLocalPositionY(this->fields.totalPointObject, v38, 0LL);
      EventInfoCommandBuffPointControl__SetTotalPointLabel(this, v61, v70);
      v71 = (UnityEngine_Object_o *)this->fields.totalPointBgSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v71, 0LL, 0LL)
        && !System_String__IsNullOrEmpty(this->fields.totalPointBgSpriteName, 0LL) )
      {
        v73 = this->fields.totalPointBgSprite;
        totalPointBgSpriteName = this->fields.totalPointBgSpriteName;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventUI(v73, totalPointBgSpriteName, 0LL);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventInfoCommandBuffPointControl___c_StaticFields *static_fields; // x0

  if ( (byte_42E652C & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoCommandBuffPointControl___c_TypeInfo, v1, v2, v3);
    byte_42E652C = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventInfoCommandBuffPointControl___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventInfoCommandBuffPointControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoCommandBuffPointControl___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return x->fields.GroupId == this->fields.GroupId;
}