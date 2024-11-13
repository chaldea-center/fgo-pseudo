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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *baseBuffPointPrefab; // x21
  Il2CppObject *v12; // x21
  __int64 v13; // x1
  UnityEngine_Object_o *name; // x0

  if ( (byte_4B16A1F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, ent, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_691/*"("*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_809/*")"*/, v9, v10);
    byte_4B16A1F = 1;
  }
  baseBuffPointPrefab = (Il2CppObject *)this->fields.baseBuffPointPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, ent);
  v12 = UnityEngine_Object__Instantiate_object_(
          baseBuffPointPrefab,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL) )
  {
    name = (UnityEngine_Object_o *)this->fields.baseBuffPointPrefab;
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
EventInfoCommandBuffPointComponent_ViewData_o *__fastcall EventInfoCommandBuffPointControl__GetViewData(
        EventInfoCommandBuffPointControl_o *this,
        int32_t GroupId,
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
  struct System_Collections_Generic_List_EventInfoCommandBuffPointComponent_ViewData__o *ViewDataList; // x19
  System_Predicate_object__o *v18; // x20

  if ( (byte_4B16A20 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent_ViewData__Find__,
      *(_QWORD *)&GroupId,
      method);
    sub_1BCA7E0(&System_Predicate_EventInfoCommandBuffPointComponent_ViewData__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_EventInfoCommandBuffPointControl___c__DisplayClass15_0__GetViewData_b__0__, v8, v9);
    sub_1BCA7E0(&EventInfoCommandBuffPointControl___c__DisplayClass15_0_TypeInfo, v10, v11);
    byte_4B16A20 = 1;
  }
  v12 = sub_1BCAA2C(EventInfoCommandBuffPointControl___c__DisplayClass15_0_TypeInfo, *(_QWORD *)&GroupId, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_DWORD *)(v12 + 16) = GroupId,
        ViewDataList = this->fields.ViewDataList,
        v18 = (System_Predicate_object__o *)sub_1BCAA2C(
                                              System_Predicate_EventInfoCommandBuffPointComponent_ViewData__TypeInfo,
                                              v14,
                                              v15,
                                              v16),
        System_Predicate_object____ctor(
          v18,
          (Il2CppObject *)v12,
          Method_EventInfoCommandBuffPointControl___c__DisplayClass15_0__GetViewData_b__0__,
          0LL),
        !ViewDataList) )
  {
    sub_1BCAA3C(v13, v14);
  }
  return (EventInfoCommandBuffPointComponent_ViewData_o *)System_Collections_Generic_List_object___Find(
                                                            (System_Collections_Generic_List_object__o *)ViewDataList,
                                                            (System_Predicate_T__o *)v18,
                                                            (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent_ViewData__Find__);
}


void __fastcall EventInfoCommandBuffPointControl__Initialization(
        EventInfoCommandBuffPointControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Collections_Generic_List_object__o *v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B16A1D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent___ctor__, entity, method);
    sub_1BCA7E0(&System_Collections_Generic_List_EventInfoCommandBuffPointComponent__TypeInfo, v10, v11);
    byte_4B16A1D = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventUiEntity,
    (int64_t)entity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventInfoCommandBuffPointComponent__TypeInfo,
                                                       v12,
                                                       v13,
                                                       v14);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent___ctor__);
  this->fields.buffPointCompnentList = (struct System_Collections_Generic_List_EventInfoCommandBuffPointComponent__o *)v15;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.buffPointCompnentList,
    (int64_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


void __fastcall EventInfoCommandBuffPointControl__Redisplay(
        EventInfoCommandBuffPointControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_List_EventInfoCommandBuffPointComponent__o *buffPointCompnentList; // x0
  int64_t i; // x20
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x1
  Il2CppObject *current; // x21
  const MethodInfo *v15; // x2
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B16A21 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__GetEnumerator__, v8, v9);
    byte_4B16A21 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  buffPointCompnentList = this->fields.buffPointCompnentList;
  if ( !buffPointCompnentList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)buffPointCompnentList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__GetEnumerator__);
  for ( i = 0LL; ; i += (int64_t)current[5].klass )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__MoveNext__);
    if ( !v12 )
      break;
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_1BCAA3C(v12, v13);
    EventInfoCommandBuffPointComponent__UpdatePoint((EventInfoCommandBuffPointComponent_o *)v16.fields._current, v13);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__Dispose__);
  EventInfoCommandBuffPointControl__SetTotalPointLabel(this, i, v15);
}


void __fastcall EventInfoCommandBuffPointControl__SetTotalPointLabel(
        EventInfoCommandBuffPointControl_o *this,
        int64_t totalPoint,
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
  UnityEngine_Object_o *totalPointLabel; // x21
  __int64 v16; // x1
  UILabel_o *v17; // x20
  __int64 v18; // x1
  System_String_o *v19; // x21
  BalanceConfig_c *v20; // x8
  int64_t UserPointEventMax; // x22
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  __int64 v24; // x1
  int64_t v25; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16A22 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, totalPoint, method);
    sub_1BCA7E0(&long_TypeInfo, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Math_TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, v13, v14);
    byte_4B16A22 = 1;
  }
  totalPointLabel = (UnityEngine_Object_o *)this->fields.totalPointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, totalPoint);
  if ( !UnityEngine_Object__op_Equality(totalPointLabel, 0LL, 0LL) )
  {
    v17 = this->fields.totalPointLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    v20 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v18);
      v20 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v20->static_fields->UserPointEventMax;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v18);
    v25 = System_Math__Min_63220536(totalPoint, UserPointEventMax, 0LL);
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v25);
    v23 = System_String__Format(v19, v22, 0LL);
    if ( !v17 )
      sub_1BCAA3C(v23, v24);
    UILabel__set_text(v17, v23, 0LL);
  }
}


void __fastcall EventInfoCommandBuffPointControl__Setup(
        EventInfoCommandBuffPointControl_o *this,
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
  UnityEngine_Object_o *baseBuffPointPrefab; // x21
  __int64 v24; // x1
  UnityEngine_Object_o *titleObject; // x21
  __int64 v26; // x1
  float v27; // s8
  void *totalPointBgSprite; // x0
  __int64 v29; // x1
  Il2CppObject *Component_object; // x21
  UnityEngine_Object_o *titleBgSprite; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_String_o *titleBgSpriteName; // x21
  UISprite_o *v36; // x22
  EventInfoCommandBuffPointControl___c_c *v37; // x0
  System_Func_object__int__o *_9__13_0; // x21
  Il2CppObject *v39; // x22
  struct EventInfoCommandBuffPointControl___c_StaticFields *static_fields; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  const MethodInfo *v48; // x2
  int v49; // w8
  void *v50; // x21
  unsigned int v51; // w25
  int64_t v52; // x20
  EventUiValueEntity_o *v53; // x22
  __int64 v54; // x1
  UnityEngine_Object_o *BuffPointObject; // x23
  __int64 v56; // x1
  UnityEngine_Object_o *v57; // x23
  int32_t v58; // w0
  const MethodInfo *v59; // x2
  const MethodInfo *v60; // x4
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  _DWORD *monitor; // x8
  int v68; // s0
  void *v69; // x9
  __int64 v70; // x8
  _QWORD *v71; // x10
  __int64 v72; // x11
  __int64 v73; // x8
  UnityEngine_Object_o *totalPointObject; // x21
  const MethodInfo *v75; // x2
  __int64 v76; // x1
  UnityEngine_Object_o *v77; // x20
  __int64 v78; // x1
  System_String_o *totalPointBgSpriteName; // x20
  UISprite_o *v80; // x21

  if ( (byte_4B16A1E & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, entitys, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___, v7, v8);
    sub_1BCA7E0(&System_Func_EventUiValueEntity__int__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventInfoCommandBuffPointComponent___, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__Add__, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_EventInfoCommandBuffPointControl___c__Setup_b__13_0__, v19, v20);
    sub_1BCA7E0(&EventInfoCommandBuffPointControl___c_TypeInfo, v21, v22);
    byte_4B16A1E = 1;
  }
  if ( entitys )
  {
    baseBuffPointPrefab = (UnityEngine_Object_o *)this->fields.baseBuffPointPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, entitys);
    if ( !UnityEngine_Object__op_Equality(baseBuffPointPrefab, 0LL, 0LL) )
    {
      titleObject = (UnityEngine_Object_o *)this->fields.titleObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
      v27 = 0.0;
      if ( UnityEngine_Object__op_Inequality(titleObject, 0LL, 0LL) )
      {
        GameObjectExtensions__AddLocalPositionY(this->fields.titleObject, 0.0, 0LL);
        totalPointBgSprite = this->fields.titleObject;
        if ( !totalPointBgSprite )
          goto LABEL_66;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)totalPointBgSprite,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
        totalPointBgSprite = (void *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)Component_object,
                                       0LL,
                                       0LL);
        v27 = 0.0;
        if ( ((unsigned __int8)totalPointBgSprite & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_66;
          v27 = 0.0 - (float)SHIDWORD(Component_object[10].monitor);
        }
      }
      titleBgSprite = (UnityEngine_Object_o *)this->fields.titleBgSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
      if ( UnityEngine_Object__op_Inequality(titleBgSprite, 0LL, 0LL)
        && !System_String__IsNullOrEmpty(this->fields.titleBgSpriteName, 0LL) )
      {
        v36 = this->fields.titleBgSprite;
        titleBgSpriteName = this->fields.titleBgSpriteName;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v32);
        AtlasManager__SetEventUI(v36, titleBgSpriteName, 0LL);
        totalPointBgSprite = this->fields.totalPointBgSprite;
        if ( !totalPointBgSprite )
          goto LABEL_66;
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)totalPointBgSprite + 840LL))(
          totalPointBgSprite,
          *(_QWORD *)(*(_QWORD *)totalPointBgSprite + 848LL));
      }
      v37 = EventInfoCommandBuffPointControl___c_TypeInfo;
      if ( !EventInfoCommandBuffPointControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoCommandBuffPointControl___c_TypeInfo, v32);
        v37 = EventInfoCommandBuffPointControl___c_TypeInfo;
      }
      _9__13_0 = (System_Func_object__int__o *)v37->static_fields->__9__13_0;
      if ( !_9__13_0 )
      {
        if ( !v37->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v37, v32);
          v37 = EventInfoCommandBuffPointControl___c_TypeInfo;
        }
        v39 = (Il2CppObject *)v37->static_fields->__9;
        _9__13_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                   System_Func_EventUiValueEntity__int__TypeInfo,
                                                   v32,
                                                   v33,
                                                   v34);
        System_Func_object__int____ctor(
          _9__13_0,
          v39,
          Method_EventInfoCommandBuffPointControl___c__Setup_b__13_0__,
          0LL);
        static_fields = EventInfoCommandBuffPointControl___c_TypeInfo->static_fields;
        static_fields->__9__13_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__13_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__13_0,
          (int64_t)_9__13_0,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46);
      }
      v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                                                                   (System_Func_TSource__TKey__o *)_9__13_0,
                                                                   (const MethodInfo_2F3B8C4 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
      totalPointBgSprite = System_Linq_Enumerable__ToArray_object_(
                             v47,
                             (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
      if ( !totalPointBgSprite )
        goto LABEL_66;
      v49 = *((_DWORD *)totalPointBgSprite + 6);
      v50 = totalPointBgSprite;
      if ( v49 >= 1 )
      {
        v51 = 0;
        v52 = 0LL;
        while ( 1 )
        {
          if ( v51 >= v49 )
            sub_1BCAA44(totalPointBgSprite, v26);
          v53 = (EventUiValueEntity_o *)*((_QWORD *)v50 + (int)v51 + 4);
          if ( !v53 )
            break;
          if ( v53->fields.type == 2 )
          {
            BuffPointObject = (UnityEngine_Object_o *)EventInfoCommandBuffPointControl__CreateBuffPointObject(
                                                        this,
                                                        v53,
                                                        v48);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54);
            totalPointBgSprite = (void *)UnityEngine_Object__op_Equality(BuffPointObject, 0LL, 0LL);
            if ( ((unsigned __int8)totalPointBgSprite & 1) == 0 )
            {
              GameObjectExtensions__AddLocalPositionY((UnityEngine_GameObject_o *)BuffPointObject, v27, 0LL);
              if ( !BuffPointObject )
                break;
              v57 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)BuffPointObject,
                                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventInfoCommandBuffPointComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v56);
              totalPointBgSprite = (void *)UnityEngine_Object__op_Equality(v57, 0LL, 0LL);
              if ( ((unsigned __int8)totalPointBgSprite & 1) == 0 )
              {
                v58 = System_Int32__Parse(v53->fields.value, 0LL);
                totalPointBgSprite = EventInfoCommandBuffPointControl__GetViewData(this, v58, v59);
                if ( !v57 )
                  break;
                EventInfoCommandBuffPointComponent__Setup(
                  (EventInfoCommandBuffPointComponent_o *)v57,
                  this->fields.eventUiEntity,
                  v53,
                  (EventInfoCommandBuffPointComponent_ViewData_o *)totalPointBgSprite,
                  v60);
                monitor = v57[1].monitor;
                if ( !monitor )
                  break;
                totalPointBgSprite = this->fields.buffPointCompnentList;
                if ( !totalPointBgSprite )
                  break;
                v68 = monitor[43];
                v69 = v57[3].monitor;
                v70 = *((_QWORD *)totalPointBgSprite + 2);
                v71 = Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__Add__;
                ++*((_DWORD *)totalPointBgSprite + 7);
                if ( !v70 )
                  break;
                v72 = *((int *)totalPointBgSprite + 6);
                v27 = v27 - (float)v68;
                v52 += (int64_t)v69;
                if ( (unsigned int)v72 >= *(_DWORD *)(v70 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)totalPointBgSprite,
                    (Il2CppObject *)v57,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
                }
                else
                {
                  v73 = v70 + 8 * v72;
                  *((_DWORD *)totalPointBgSprite + 6) = v72 + 1;
                  *(_QWORD *)(v73 + 32) = v57;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v73 + 32), (int64_t)v57, v61, v62, v63, v64, v65, v66);
                }
              }
            }
          }
          v49 = *((_DWORD *)v50 + 6);
          if ( (int)++v51 >= v49 )
            goto LABEL_53;
        }
LABEL_66:
        sub_1BCAA3C(totalPointBgSprite, v26);
      }
      v52 = 0LL;
LABEL_53:
      totalPointObject = (UnityEngine_Object_o *)this->fields.totalPointObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
      if ( UnityEngine_Object__op_Inequality(totalPointObject, 0LL, 0LL) )
        GameObjectExtensions__AddLocalPositionY(this->fields.totalPointObject, v27, 0LL);
      EventInfoCommandBuffPointControl__SetTotalPointLabel(this, v52, v75);
      v77 = (UnityEngine_Object_o *)this->fields.totalPointBgSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v76);
      if ( UnityEngine_Object__op_Inequality(v77, 0LL, 0LL)
        && !System_String__IsNullOrEmpty(this->fields.totalPointBgSpriteName, 0LL) )
      {
        v80 = this->fields.totalPointBgSprite;
        totalPointBgSpriteName = this->fields.totalPointBgSpriteName;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v78);
        AtlasManager__SetEventUI(v80, totalPointBgSpriteName, 0LL);
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


void __fastcall EventInfoCommandBuffPointControl___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B16A23 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoCommandBuffPointControl___c_TypeInfo, v1, v2);
    byte_4B16A23 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventInfoCommandBuffPointControl___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventInfoCommandBuffPointControl___c_TypeInfo->static_fields->__9 = (struct EventInfoCommandBuffPointControl___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventInfoCommandBuffPointControl___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.GroupId == this->fields.GroupId;
}