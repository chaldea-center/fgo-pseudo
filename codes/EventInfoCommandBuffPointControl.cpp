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
  Il2CppObject *baseBuffPointPrefab; // x21
  Il2CppObject *v9; // x21
  UnityEngine_Object_o *name; // x0

  if ( (byte_49FCF86 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, ent);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_697/*"("*/, v6);
    sub_1B640C8(&StringLiteral_815/*")"*/, v7);
    byte_49FCF86 = 1;
  }
  baseBuffPointPrefab = (Il2CppObject *)this->fields.baseBuffPointPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__Instantiate_object_(
         baseBuffPointPrefab,
         (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL) )
  {
    name = (UnityEngine_Object_o *)this->fields.baseBuffPointPrefab;
    if ( !name
      || (name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL), !ent)
      || (name = (UnityEngine_Object_o *)System_String__Concat_61388660(
                                           (System_String_o *)name,
                                           (System_String_o *)StringLiteral_697/*"("*/,
                                           ent->fields.value,
                                           (System_String_o *)StringLiteral_815/*")"*/,
                                           0LL),
          !v9) )
    {
      sub_1B64324(name);
    }
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v9, (System_String_o *)name, 0LL);
    GameObjectExtensions__SafeSetParent_33381252((UnityEngine_GameObject_o *)v9, this->fields.rootObject, 0LL);
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
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct System_Collections_Generic_List_EventInfoCommandBuffPointComponent_ViewData__o *ViewDataList; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_49FCF87 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent_ViewData__Find__,
      *(_QWORD *)&GroupId);
    sub_1B640C8(&System_Predicate_EventInfoCommandBuffPointComponent_ViewData__TypeInfo, v5);
    sub_1B640C8(&Method_EventInfoCommandBuffPointControl___c__DisplayClass15_0__GetViewData_b__0__, v6);
    sub_1B640C8(&EventInfoCommandBuffPointControl___c__DisplayClass15_0_TypeInfo, v7);
    byte_49FCF87 = 1;
  }
  v8 = sub_1B64314(EventInfoCommandBuffPointControl___c__DisplayClass15_0_TypeInfo, *(_QWORD *)&GroupId, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = GroupId,
        ViewDataList = this->fields.ViewDataList,
        v13 = (System_Predicate_object__o *)sub_1B64314(
                                              System_Predicate_EventInfoCommandBuffPointComponent_ViewData__TypeInfo,
                                              v10,
                                              v11),
        System_Predicate_object____ctor(
          v13,
          (Il2CppObject *)v8,
          Method_EventInfoCommandBuffPointControl___c__DisplayClass15_0__GetViewData_b__0__,
          0LL),
        !ViewDataList) )
  {
    sub_1B64324(v9);
  }
  return (EventInfoCommandBuffPointComponent_ViewData_o *)System_Collections_Generic_List_object___Find(
                                                            (System_Collections_Generic_List_object__o *)ViewDataList,
                                                            (System_Predicate_T__o *)v13,
                                                            (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent_ViewData__Find__);
}


void __fastcall EventInfoCommandBuffPointControl__Initialization(
        EventInfoCommandBuffPointControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49FCF84 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent___ctor__, entity);
    sub_1B640C8(&System_Collections_Generic_List_EventInfoCommandBuffPointComponent__TypeInfo, v6);
    byte_49FCF84 = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventUiEntity, (int32_t)entity, (int32_t)method, v3);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_EventInfoCommandBuffPointComponent__TypeInfo,
                                                      v7,
                                                      v8);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent___ctor__);
  this->fields.buffPointCompnentList = (struct System_Collections_Generic_List_EventInfoCommandBuffPointComponent__o *)v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.buffPointCompnentList, (int32_t)v9, v10, v11);
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
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x1
  Il2CppObject *current; // x21
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FCF88 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__Dispose__,
      method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__MoveNext__, v3);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__get_Current__,
      v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__GetEnumerator__, v5);
    byte_49FCF88 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  buffPointCompnentList = this->fields.buffPointCompnentList;
  if ( !buffPointCompnentList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)buffPointCompnentList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__GetEnumerator__);
  for ( i = 0LL; ; i += (int64_t)current[5].klass )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__MoveNext__);
    if ( !v8 )
      break;
    current = v12.fields._current;
    if ( !v12.fields._current )
      sub_1B64324(v8);
    EventInfoCommandBuffPointComponent__UpdatePoint((EventInfoCommandBuffPointComponent_o *)v12.fields._current, v9);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__Dispose__);
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

  if ( (byte_49FCF89 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, totalPoint);
    sub_1B640C8(&long_TypeInfo, v5);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&System_Math_TypeInfo, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_5618/*"EVENT_POINT_COMMON_FORMAT"*/, v9);
    byte_49FCF89 = 1;
  }
  totalPointLabel = (UnityEngine_Object_o *)this->fields.totalPointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(totalPointLabel, 0LL, 0LL) )
  {
    v11 = this->fields.totalPointLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5618/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    v13 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v13 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v13->static_fields->UserPointEventMax;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v17 = System_Math__Min_62194376(totalPoint, UserPointEventMax, 0LL);
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v17);
    v16 = System_String__Format(v12, v15, 0LL);
    if ( !v11 )
      sub_1B64324(v16);
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
  UnityEngine_Object_o *baseBuffPointPrefab; // x21
  UnityEngine_Object_o *titleObject; // x21
  float v16; // s8
  void *totalPointBgSprite; // x0
  Il2CppObject *Component_object; // x21
  UnityEngine_Object_o *titleBgSprite; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  System_String_o *titleBgSpriteName; // x21
  UISprite_o *v23; // x22
  EventInfoCommandBuffPointControl___c_c *v24; // x0
  System_Func_object__int__o *_9__13_0; // x21
  Il2CppObject *v26; // x22
  struct EventInfoCommandBuffPointControl___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x2
  int v33; // w8
  void *v34; // x21
  unsigned int v35; // w25
  int64_t v36; // x20
  EventUiValueEntity_o *v37; // x22
  UnityEngine_Object_o *BuffPointObject; // x23
  UnityEngine_Object_o *v39; // x23
  int32_t v40; // w0
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x4
  int32_t v43; // w2
  int32_t v44; // w3
  _DWORD *monitor; // x8
  int v46; // s0
  void *v47; // x9
  __int64 v48; // x8
  _QWORD *v49; // x10
  __int64 v50; // x11
  __int64 v51; // x8
  UnityEngine_Object_o *totalPointObject; // x21
  const MethodInfo *v53; // x2
  UnityEngine_Object_o *v54; // x20
  System_String_o *totalPointBgSpriteName; // x20
  UISprite_o *v56; // x21

  if ( (byte_49FCF85 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, entitys);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___, v6);
    sub_1B640C8(&System_Func_EventUiValueEntity__int__TypeInfo, v7);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_EventInfoCommandBuffPointComponent___, v8);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__Add__, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B640C8(&Method_EventInfoCommandBuffPointControl___c__Setup_b__13_0__, v12);
    sub_1B640C8(&EventInfoCommandBuffPointControl___c_TypeInfo, v13);
    byte_49FCF85 = 1;
  }
  if ( entitys )
  {
    baseBuffPointPrefab = (UnityEngine_Object_o *)this->fields.baseBuffPointPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(baseBuffPointPrefab, 0LL, 0LL) )
    {
      titleObject = (UnityEngine_Object_o *)this->fields.titleObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v16 = 0.0;
      if ( UnityEngine_Object__op_Inequality(titleObject, 0LL, 0LL) )
      {
        GameObjectExtensions__AddLocalPositionY(this->fields.titleObject, 0.0, 0LL);
        totalPointBgSprite = this->fields.titleObject;
        if ( !totalPointBgSprite )
          goto LABEL_66;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)totalPointBgSprite,
                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        totalPointBgSprite = (void *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)Component_object,
                                       0LL,
                                       0LL);
        v16 = 0.0;
        if ( ((unsigned __int8)totalPointBgSprite & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_66;
          v16 = 0.0 - (float)SHIDWORD(Component_object[10].monitor);
        }
      }
      titleBgSprite = (UnityEngine_Object_o *)this->fields.titleBgSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(titleBgSprite, 0LL, 0LL)
        && !System_String__IsNullOrEmpty(this->fields.titleBgSpriteName, 0LL) )
      {
        v23 = this->fields.titleBgSprite;
        titleBgSpriteName = this->fields.titleBgSpriteName;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventUI(v23, titleBgSpriteName, 0LL);
        totalPointBgSprite = this->fields.totalPointBgSprite;
        if ( !totalPointBgSprite )
          goto LABEL_66;
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)totalPointBgSprite + 840LL))(
          totalPointBgSprite,
          *(_QWORD *)(*(_QWORD *)totalPointBgSprite + 848LL));
      }
      v24 = EventInfoCommandBuffPointControl___c_TypeInfo;
      if ( !EventInfoCommandBuffPointControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoCommandBuffPointControl___c_TypeInfo);
        v24 = EventInfoCommandBuffPointControl___c_TypeInfo;
      }
      _9__13_0 = (System_Func_object__int__o *)v24->static_fields->__9__13_0;
      if ( !_9__13_0 )
      {
        if ( !v24->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v24);
          v24 = EventInfoCommandBuffPointControl___c_TypeInfo;
        }
        v26 = (Il2CppObject *)v24->static_fields->__9;
        _9__13_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_EventUiValueEntity__int__TypeInfo, v20, v21);
        System_Func_object__int____ctor(
          _9__13_0,
          v26,
          Method_EventInfoCommandBuffPointControl___c__Setup_b__13_0__,
          0LL);
        static_fields = EventInfoCommandBuffPointControl___c_TypeInfo->static_fields;
        static_fields->__9__13_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__13_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v28, v29);
      }
      v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                                                                   (System_Func_TSource__TKey__o *)_9__13_0,
                                                                   (const MethodInfo_2E63584 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
      totalPointBgSprite = System_Linq_Enumerable__ToArray_object_(
                             v30,
                             (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
      if ( !totalPointBgSprite )
        goto LABEL_66;
      v33 = *((_DWORD *)totalPointBgSprite + 6);
      v34 = totalPointBgSprite;
      if ( v33 >= 1 )
      {
        v35 = 0;
        v36 = 0LL;
        while ( 1 )
        {
          if ( v35 >= v33 )
            sub_1B6432C(totalPointBgSprite, v31);
          v37 = (EventUiValueEntity_o *)*((_QWORD *)v34 + (int)v35 + 4);
          if ( !v37 )
            break;
          if ( v37->fields.type == 2 )
          {
            BuffPointObject = (UnityEngine_Object_o *)EventInfoCommandBuffPointControl__CreateBuffPointObject(
                                                        this,
                                                        v37,
                                                        v32);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            totalPointBgSprite = (void *)UnityEngine_Object__op_Equality(BuffPointObject, 0LL, 0LL);
            if ( ((unsigned __int8)totalPointBgSprite & 1) == 0 )
            {
              GameObjectExtensions__AddLocalPositionY((UnityEngine_GameObject_o *)BuffPointObject, v16, 0LL);
              if ( !BuffPointObject )
                break;
              v39 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)BuffPointObject,
                                              (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_EventInfoCommandBuffPointComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              totalPointBgSprite = (void *)UnityEngine_Object__op_Equality(v39, 0LL, 0LL);
              if ( ((unsigned __int8)totalPointBgSprite & 1) == 0 )
              {
                v40 = System_Int32__Parse(v37->fields.value, 0LL);
                totalPointBgSprite = EventInfoCommandBuffPointControl__GetViewData(this, v40, v41);
                if ( !v39 )
                  break;
                EventInfoCommandBuffPointComponent__Setup(
                  (EventInfoCommandBuffPointComponent_o *)v39,
                  this->fields.eventUiEntity,
                  v37,
                  (EventInfoCommandBuffPointComponent_ViewData_o *)totalPointBgSprite,
                  v42);
                monitor = v39[1].monitor;
                if ( !monitor )
                  break;
                totalPointBgSprite = this->fields.buffPointCompnentList;
                if ( !totalPointBgSprite )
                  break;
                v46 = monitor[43];
                v47 = v39[3].monitor;
                v48 = *((_QWORD *)totalPointBgSprite + 2);
                v49 = Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__Add__;
                ++*((_DWORD *)totalPointBgSprite + 7);
                if ( !v48 )
                  break;
                v50 = *((int *)totalPointBgSprite + 6);
                v16 = v16 - (float)v46;
                v36 += (int64_t)v47;
                if ( (unsigned int)v50 >= *(_DWORD *)(v48 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)totalPointBgSprite,
                    (Il2CppObject *)v39,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
                }
                else
                {
                  v51 = v48 + 8 * v50;
                  *((_DWORD *)totalPointBgSprite + 6) = v50 + 1;
                  *(_QWORD *)(v51 + 32) = v39;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 32), (int32_t)v39, v43, v44);
                }
              }
            }
          }
          v33 = *((_DWORD *)v34 + 6);
          if ( (int)++v35 >= v33 )
            goto LABEL_53;
        }
LABEL_66:
        sub_1B64324(totalPointBgSprite);
      }
      v36 = 0LL;
LABEL_53:
      totalPointObject = (UnityEngine_Object_o *)this->fields.totalPointObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(totalPointObject, 0LL, 0LL) )
        GameObjectExtensions__AddLocalPositionY(this->fields.totalPointObject, v16, 0LL);
      EventInfoCommandBuffPointControl__SetTotalPointLabel(this, v36, v53);
      v54 = (UnityEngine_Object_o *)this->fields.totalPointBgSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v54, 0LL, 0LL)
        && !System_String__IsNullOrEmpty(this->fields.totalPointBgSpriteName, 0LL) )
      {
        v56 = this->fields.totalPointBgSprite;
        totalPointBgSpriteName = this->fields.totalPointBgSpriteName;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventUI(v56, totalPointBgSpriteName, 0LL);
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FCF8A & 1) == 0 )
  {
    sub_1B640C8(&EventInfoCommandBuffPointControl___c_TypeInfo, v1);
    byte_49FCF8A = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventInfoCommandBuffPointControl___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventInfoCommandBuffPointControl___c_TypeInfo->static_fields->__9 = (struct EventInfoCommandBuffPointControl___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventInfoCommandBuffPointControl___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return x->fields.GroupId == this->fields.GroupId;
}