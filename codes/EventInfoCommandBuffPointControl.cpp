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
  __int64 v10; // x1
  UnityEngine_Object_o *name; // x0

  if ( (byte_4A2EA71 & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_Object_Instantiate_GameObject___, ent);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v5);
    sub_1B761C0(&StringLiteral_696/*"("*/, v6);
    sub_1B761C0(&StringLiteral_814/*")"*/, v7);
    byte_4A2EA71 = 1;
  }
  baseBuffPointPrefab = (Il2CppObject *)this->fields.baseBuffPointPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__Instantiate_object_(
         baseBuffPointPrefab,
         (const MethodInfo_2EE5790 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL) )
  {
    name = (UnityEngine_Object_o *)this->fields.baseBuffPointPrefab;
    if ( !name
      || (name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL), !ent)
      || (name = (UnityEngine_Object_o *)System_String__Concat_61548324(
                                           (System_String_o *)name,
                                           (System_String_o *)StringLiteral_696/*"("*/,
                                           ent->fields.value,
                                           (System_String_o *)StringLiteral_814/*")"*/,
                                           0LL),
          !v9) )
    {
      sub_1B7641C(name, v10);
    }
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v9, (System_String_o *)name, 0LL);
    GameObjectExtensions__SafeSetParent_33557996((UnityEngine_GameObject_o *)v9, this->fields.rootObject, 0LL);
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
  struct System_Collections_Generic_List_EventInfoCommandBuffPointComponent_ViewData__o *ViewDataList; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_4A2EA72 & 1) == 0 )
  {
    sub_1B761C0(
      &Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent_ViewData__Find__,
      *(_QWORD *)&GroupId);
    sub_1B761C0(&System_Predicate_EventInfoCommandBuffPointComponent_ViewData__TypeInfo, v5);
    sub_1B761C0(&Method_EventInfoCommandBuffPointControl___c__DisplayClass15_0__GetViewData_b__0__, v6);
    sub_1B761C0(&EventInfoCommandBuffPointControl___c__DisplayClass15_0_TypeInfo, v7);
    byte_4A2EA72 = 1;
  }
  v8 = sub_1B7640C(EventInfoCommandBuffPointControl___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = GroupId,
        ViewDataList = this->fields.ViewDataList,
        v12 = (System_Predicate_object__o *)sub_1B7640C(System_Predicate_EventInfoCommandBuffPointComponent_ViewData__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_EventInfoCommandBuffPointControl___c__DisplayClass15_0__GetViewData_b__0__,
          0LL),
        !ViewDataList) )
  {
    sub_1B7641C(v9, v10);
  }
  return (EventInfoCommandBuffPointComponent_ViewData_o *)System_Collections_Generic_List_object___Find(
                                                            (System_Collections_Generic_List_object__o *)ViewDataList,
                                                            (System_Predicate_T__o *)v12,
                                                            (const MethodInfo_34D7C3C *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent_ViewData__Find__);
}


void __fastcall EventInfoCommandBuffPointControl__Initialization(
        EventInfoCommandBuffPointControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A2EA6F & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent___ctor__, entity);
    sub_1B761C0(&System_Collections_Generic_List_EventInfoCommandBuffPointComponent__TypeInfo, v6);
    byte_4A2EA6F = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.eventUiEntity, (int32_t)entity, (int32_t)method, v3);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_EventInfoCommandBuffPointComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent___ctor__);
  this->fields.buffPointCompnentList = (struct System_Collections_Generic_List_EventInfoCommandBuffPointComponent__o *)v7;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.buffPointCompnentList, (int32_t)v7, v8, v9);
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

  if ( (byte_4A2EA73 & 1) == 0 )
  {
    sub_1B761C0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__Dispose__,
      method);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__MoveNext__, v3);
    sub_1B761C0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__get_Current__,
      v4);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__GetEnumerator__, v5);
    byte_4A2EA73 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  buffPointCompnentList = this->fields.buffPointCompnentList;
  if ( !buffPointCompnentList )
    sub_1B7641C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)buffPointCompnentList,
    (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__GetEnumerator__);
  for ( i = 0LL; ; i += (int64_t)current[5].klass )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__MoveNext__);
    if ( !v8 )
      break;
    current = v12.fields._current;
    if ( !v12.fields._current )
      sub_1B7641C(v8, v9);
    EventInfoCommandBuffPointComponent__UpdatePoint((EventInfoCommandBuffPointComponent_o *)v12.fields._current, v9);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoCommandBuffPointComponent__Dispose__);
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
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  __int64 v20; // x1
  int64_t v21; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A2EA74 & 1) == 0 )
  {
    sub_1B761C0(&BalanceConfig_TypeInfo, totalPoint);
    sub_1B761C0(&long_TypeInfo, v5);
    sub_1B761C0(&LocalizationManager_TypeInfo, v6);
    sub_1B761C0(&System_Math_TypeInfo, v7);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v8);
    sub_1B761C0(&StringLiteral_5643/*"EVENT_POINT_COMMON_FORMAT"*/, v9);
    byte_4A2EA74 = 1;
  }
  totalPointLabel = (UnityEngine_Object_o *)this->fields.totalPointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(totalPointLabel, 0LL, 0LL) )
  {
    v11 = this->fields.totalPointLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5643/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    v13 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v13 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v13->static_fields->UserPointEventMax;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v21 = System_Math__Min_62354048(totalPoint, UserPointEventMax, 0LL);
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v21, v15, v16, v17);
    v19 = System_String__Format(v12, v18, 0LL);
    if ( !v11 )
      sub_1B7641C(v19, v20);
    UILabel__set_text(v11, v19, 0LL);
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
  __int64 v17; // x1
  void *totalPointBgSprite; // x0
  Il2CppObject *Component_object; // x21
  UnityEngine_Object_o *titleBgSprite; // x21
  System_String_o *titleBgSpriteName; // x21
  UISprite_o *v22; // x22
  EventInfoCommandBuffPointControl___c_c *v23; // x0
  System_Func_object__int__o *_9__13_0; // x21
  Il2CppObject *v25; // x22
  struct EventInfoCommandBuffPointControl___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  const MethodInfo *v30; // x2
  int v31; // w8
  void *v32; // x21
  unsigned int v33; // w25
  int64_t v34; // x20
  EventUiValueEntity_o *v35; // x22
  UnityEngine_Object_o *BuffPointObject; // x23
  UnityEngine_Object_o *v37; // x23
  int32_t v38; // w0
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x4
  int32_t v41; // w2
  int32_t v42; // w3
  _DWORD *monitor; // x8
  int v44; // s0
  void *v45; // x9
  __int64 v46; // x8
  _QWORD *v47; // x10
  __int64 v48; // x11
  __int64 v49; // x8
  UnityEngine_Object_o *totalPointObject; // x21
  const MethodInfo *v51; // x2
  UnityEngine_Object_o *v52; // x20
  System_String_o *totalPointBgSpriteName; // x20
  UISprite_o *v54; // x21

  if ( (byte_4A2EA70 & 1) == 0 )
  {
    sub_1B761C0(&AtlasManager_TypeInfo, entitys);
    sub_1B761C0(&Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___, v5);
    sub_1B761C0(&Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___, v6);
    sub_1B761C0(&System_Func_EventUiValueEntity__int__TypeInfo, v7);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_EventInfoCommandBuffPointComponent___, v8);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v9);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__Add__, v10);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v11);
    sub_1B761C0(&Method_EventInfoCommandBuffPointControl___c__Setup_b__13_0__, v12);
    sub_1B761C0(&EventInfoCommandBuffPointControl___c_TypeInfo, v13);
    byte_4A2EA70 = 1;
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
                             (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
        v22 = this->fields.titleBgSprite;
        titleBgSpriteName = this->fields.titleBgSpriteName;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventUI(v22, titleBgSpriteName, 0LL);
        totalPointBgSprite = this->fields.totalPointBgSprite;
        if ( !totalPointBgSprite )
          goto LABEL_66;
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)totalPointBgSprite + 840LL))(
          totalPointBgSprite,
          *(_QWORD *)(*(_QWORD *)totalPointBgSprite + 848LL));
      }
      v23 = EventInfoCommandBuffPointControl___c_TypeInfo;
      if ( !EventInfoCommandBuffPointControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoCommandBuffPointControl___c_TypeInfo);
        v23 = EventInfoCommandBuffPointControl___c_TypeInfo;
      }
      _9__13_0 = (System_Func_object__int__o *)v23->static_fields->__9__13_0;
      if ( !_9__13_0 )
      {
        if ( !v23->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v23);
          v23 = EventInfoCommandBuffPointControl___c_TypeInfo;
        }
        v25 = (Il2CppObject *)v23->static_fields->__9;
        _9__13_0 = (System_Func_object__int__o *)sub_1B7640C(System_Func_EventUiValueEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__13_0,
          v25,
          Method_EventInfoCommandBuffPointControl___c__Setup_b__13_0__,
          0LL);
        static_fields = EventInfoCommandBuffPointControl___c_TypeInfo->static_fields;
        static_fields->__9__13_0 = (struct System_Func_EventUiValueEntity__int__o *)_9__13_0;
        sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v27, v28);
      }
      v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                                                                   (System_Func_TSource__TKey__o *)_9__13_0,
                                                                   (const MethodInfo_2E8CDF0 *)Method_System_Linq_Enumerable_OrderByDescending_EventUiValueEntity__int___);
      totalPointBgSprite = System_Linq_Enumerable__ToArray_object_(
                             v29,
                             (const MethodInfo_2E9AEA4 *)Method_System_Linq_Enumerable_ToArray_EventUiValueEntity___);
      if ( !totalPointBgSprite )
        goto LABEL_66;
      v31 = *((_DWORD *)totalPointBgSprite + 6);
      v32 = totalPointBgSprite;
      if ( v31 >= 1 )
      {
        v33 = 0;
        v34 = 0LL;
        while ( 1 )
        {
          if ( v33 >= v31 )
            sub_1B76424(totalPointBgSprite, v17);
          v35 = (EventUiValueEntity_o *)*((_QWORD *)v32 + (int)v33 + 4);
          if ( !v35 )
            break;
          if ( v35->fields.type == 2 )
          {
            BuffPointObject = (UnityEngine_Object_o *)EventInfoCommandBuffPointControl__CreateBuffPointObject(
                                                        this,
                                                        v35,
                                                        v30);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            totalPointBgSprite = (void *)UnityEngine_Object__op_Equality(BuffPointObject, 0LL, 0LL);
            if ( ((unsigned __int8)totalPointBgSprite & 1) == 0 )
            {
              GameObjectExtensions__AddLocalPositionY((UnityEngine_GameObject_o *)BuffPointObject, v16, 0LL);
              if ( !BuffPointObject )
                break;
              v37 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)BuffPointObject,
                                              (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_EventInfoCommandBuffPointComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              totalPointBgSprite = (void *)UnityEngine_Object__op_Equality(v37, 0LL, 0LL);
              if ( ((unsigned __int8)totalPointBgSprite & 1) == 0 )
              {
                v38 = System_Int32__Parse(v35->fields.value, 0LL);
                totalPointBgSprite = EventInfoCommandBuffPointControl__GetViewData(this, v38, v39);
                if ( !v37 )
                  break;
                EventInfoCommandBuffPointComponent__Setup(
                  (EventInfoCommandBuffPointComponent_o *)v37,
                  this->fields.eventUiEntity,
                  v35,
                  (EventInfoCommandBuffPointComponent_ViewData_o *)totalPointBgSprite,
                  v40);
                monitor = v37[1].monitor;
                if ( !monitor )
                  break;
                totalPointBgSprite = this->fields.buffPointCompnentList;
                if ( !totalPointBgSprite )
                  break;
                v44 = monitor[43];
                v45 = v37[3].monitor;
                v46 = *((_QWORD *)totalPointBgSprite + 2);
                v47 = Method_System_Collections_Generic_List_EventInfoCommandBuffPointComponent__Add__;
                ++*((_DWORD *)totalPointBgSprite + 7);
                if ( !v46 )
                  break;
                v48 = *((int *)totalPointBgSprite + 6);
                v16 = v16 - (float)v44;
                v34 += (int64_t)v45;
                if ( (unsigned int)v48 >= *(_DWORD *)(v46 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)totalPointBgSprite,
                    (Il2CppObject *)v37,
                    *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
                }
                else
                {
                  v49 = v46 + 8 * v48;
                  *((_DWORD *)totalPointBgSprite + 6) = v48 + 1;
                  *(_QWORD *)(v49 + 32) = v37;
                  sub_1B76164((ServantStatusBattleListViewItem_o *)(v49 + 32), (int32_t)v37, v41, v42);
                }
              }
            }
          }
          v31 = *((_DWORD *)v32 + 6);
          if ( (int)++v33 >= v31 )
            goto LABEL_53;
        }
LABEL_66:
        sub_1B7641C(totalPointBgSprite, v17);
      }
      v34 = 0LL;
LABEL_53:
      totalPointObject = (UnityEngine_Object_o *)this->fields.totalPointObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(totalPointObject, 0LL, 0LL) )
        GameObjectExtensions__AddLocalPositionY(this->fields.totalPointObject, v16, 0LL);
      EventInfoCommandBuffPointControl__SetTotalPointLabel(this, v34, v51);
      v52 = (UnityEngine_Object_o *)this->fields.totalPointBgSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v52, 0LL, 0LL)
        && !System_String__IsNullOrEmpty(this->fields.totalPointBgSpriteName, 0LL) )
      {
        v54 = this->fields.totalPointBgSprite;
        totalPointBgSpriteName = this->fields.totalPointBgSpriteName;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventUI(v54, totalPointBgSpriteName, 0LL);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A2EA75 & 1) == 0 )
  {
    sub_1B761C0(&EventInfoCommandBuffPointControl___c_TypeInfo, v1);
    byte_4A2EA75 = 1;
  }
  v2 = (Il2CppObject *)sub_1B7640C(EventInfoCommandBuffPointControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventInfoCommandBuffPointControl___c_TypeInfo->static_fields->__9 = (struct EventInfoCommandBuffPointControl___c_o *)v2;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)EventInfoCommandBuffPointControl___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B7641C(this, 0LL);
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
    sub_1B7641C(this, 0LL);
  return x->fields.GroupId == this->fields.GroupId;
}