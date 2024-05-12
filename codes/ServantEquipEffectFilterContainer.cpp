void __fastcall ServantEquipEffectFilterContainer___cctor(const MethodInfo *method)
{
  if ( (byte_438E8F3 & 1) == 0 )
  {
    sub_B775C4(&ServantEquipEffectFilterContainer_TypeInfo);
    byte_438E8F3 = 1;
  }
  ServantEquipEffectFilterContainer_TypeInfo->static_fields->TITLE_LINE_SPRITE_SPACE = 15;
  ServantEquipEffectFilterContainer_TypeInfo->static_fields->TITLE_WIDTH = 646;
}


void __fastcall ServantEquipEffectFilterContainer___ctor(
        ServantEquipEffectFilterContainer_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantEquipEffectFilterContainer__ForceDeselectAll(
        ServantEquipEffectFilterContainer_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *itemList; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  System_Collections_Generic_List_Enumerator_T__o v6; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438E8F2 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
    byte_438E8F2 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B7769C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v6,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v6,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__) )
  {
    if ( !v6.fields.current )
      sub_B7769C(0LL, v4);
    ServantEquipEffectFilterItem__SetSelectState((ServantEquipEffectFilterItem_o *)v6.fields.current, 0, v5);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v6,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
}


void __fastcall ServantEquipEffectFilterContainer__ForceSelectAll(
        ServantEquipEffectFilterContainer_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *itemList; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  System_Collections_Generic_List_Enumerator_T__o v6; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438E8F1 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
    byte_438E8F1 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B7769C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v6,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v6,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__) )
  {
    if ( !v6.fields.current )
      sub_B7769C(0LL, v4);
    ServantEquipEffectFilterItem__SetSelectState((ServantEquipEffectFilterItem_o *)v6.fields.current, 1, v5);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v6,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterContainer__Init(
        ServantEquipEffectFilterContainer_o *this,
        FunctionCategoryEntity_array *entities,
        int32_t groupType,
        ListViewSort_o *sort,
        UnityEngine_Vector3_o position,
        System_Action_o *onclickEvent,
        int32_t categoryFlag,
        const MethodInfo *method)
{
  System_Int32_array *v8; // x7
  float z; // s8
  float y; // s9
  float x; // s10
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x3
  ListViewSort_o *v19; // x2
  const MethodInfo *v20; // x4
  __int64 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x1
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.sort = sort;
  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)sort,
    *(System_String_array ***)&groupType,
    (System_String_array **)sort,
    (System_Boolean_array **)onclickEvent,
    *(System_Int32_array ***)&categoryFlag,
    (System_Int32_array *)method,
    v8);
  v25.fields.x = x;
  v25.fields.y = y;
  v25.fields.z = z;
  ServantEquipEffectFilterContainer__set_Position(this, v25, v17);
  ServantEquipEffectFilterContainer__SetupHeader(this, groupType, categoryFlag, v18);
  ServantEquipEffectFilterContainer__RefreshItems(this, entities, v19, onclickEvent, v20);
  if ( !entities )
    sub_B7769C(v21, v22);
  ServantEquipEffectFilterContainer__SetBottomPosition(this, entities->max_length, v23);
  ServantEquipEffectFilterContainer__SetCollider(this, v24);
}


void __fastcall ServantEquipEffectFilterContainer__RefreshItems(
        ServantEquipEffectFilterContainer_o *this,
        FunctionCategoryEntity_array *entities,
        ListViewSort_o *sort,
        System_Action_o *onclickEvent,
        const MethodInfo *method)
{
  ServantEquipEffectFilterContainer___c_c *v8; // x0
  struct ServantEquipEffectFilterContainer___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__18_0; // x22
  Il2CppObject *v11; // x23
  struct ServantEquipEffectFilterContainer___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x23
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o **p_itemList; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Component_o *transform; // x0
  __int64 v28; // x1
  signed int max_length; // w8
  unsigned int v30; // w26
  UnityEngine_UI_Dropdown_DropdownItem_o *itemPrefab; // x24
  FunctionCategoryEntity_o *v32; // x23
  UnityEngine_Component_o *v33; // x24
  UnityEngine_Transform_o *v34; // x25
  ListViewSort_o *v35; // x25
  bool SvtEquipEffectFilter; // w0
  const MethodInfo *v37; // x5
  __int64 v38; // x0

  if ( (byte_438E8EC & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_Sort_FunctionCategoryEntity___);
    sub_B775C4(&Method_System_Comparison_FunctionCategoryEntity___ctor__);
    sub_B775C4(&System_Comparison_FunctionCategoryEntity__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ServantEquipEffectFilterItem__TypeInfo);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterItem___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_ServantEquipEffectFilterContainer___c__RefreshItems_b__18_0__);
    sub_B775C4(&ServantEquipEffectFilterContainer___c_TypeInfo);
    byte_438E8EC = 1;
  }
  v8 = ServantEquipEffectFilterContainer___c_TypeInfo;
  if ( (BYTE3(ServantEquipEffectFilterContainer___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantEquipEffectFilterContainer___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEquipEffectFilterContainer___c_TypeInfo);
    v8 = ServantEquipEffectFilterContainer___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = ServantEquipEffectFilterContainer___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_FunctionCategoryEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__18_0,
      v11,
      Method_ServantEquipEffectFilterContainer___c__RefreshItems_b__18_0__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_FunctionCategoryEntity___ctor__);
    v12 = ServantEquipEffectFilterContainer___c_TypeInfo->static_fields;
    v12->__9__18_0 = (struct System_Comparison_FunctionCategoryEntity__o *)_9__18_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v12->__9__18_0,
      (System_Int32_array **)_9__18_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    (BattleBuffData_BuffData_array *)entities,
    (System_Comparison_T__o *)_9__18_0,
    (const MethodInfo_1C56B58 *)Method_System_Array_Sort_FunctionCategoryEntity___);
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ServantEquipEffectFilterItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *)v19;
  p_itemList = &this->fields.itemList;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.itemList,
    (System_Int32_array **)v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( !entities )
    goto LABEL_29;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      if ( v30 >= max_length )
      {
        v38 = sub_B776C8(transform);
        sub_B77668(v38, 0LL);
      }
      itemPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.itemPrefab;
      v32 = entities->m_Items[v30];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                               itemPrefab,
                                               (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterItem___);
      if ( !transform )
        break;
      v33 = transform;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !this->fields.grid )
        break;
      v34 = (UnityEngine_Transform_o *)transform;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)this->fields.grid,
                                               0LL);
      if ( !v34 )
        break;
      UnityEngine_Transform__SetParent_36431020(v34, (UnityEngine_Transform_o *)transform, 0, 0LL);
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v33, 0LL);
      if ( !transform )
        break;
      UnityEngine_Transform__SetAsLastSibling((UnityEngine_Transform_o *)transform, 0LL);
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v33, 0LL);
      if ( !transform )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
      if ( !v32 )
        break;
      v35 = this->fields.sort;
      if ( !v35 )
        break;
      SvtEquipEffectFilter = ListViewSort__GetSvtEquipEffectFilter(this->fields.sort, v32->fields.id, 0LL);
      ServantEquipEffectFilterItem__Init(
        (ServantEquipEffectFilterItem_o *)v33,
        v32,
        v35,
        SvtEquipEffectFilter,
        onclickEvent,
        v37);
      transform = (UnityEngine_Component_o *)*p_itemList;
      if ( !*p_itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v33,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__Add__);
      max_length = entities->max_length;
      if ( (int)++v30 >= max_length )
        goto LABEL_27;
    }
LABEL_29:
    sub_B7769C(transform, v28);
  }
LABEL_27:
  transform = (UnityEngine_Component_o *)this->fields.grid;
  if ( !transform )
    goto LABEL_29;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))transform->klass[1]._1.castClass)(
    transform,
    transform->klass[1]._1.declaringType);
}


void __fastcall ServantEquipEffectFilterContainer__RefreshSelectState(
        ServantEquipEffectFilterContainer_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *itemList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_T__o v5; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438E8F0 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
    byte_438E8F0 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B7769C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v5,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v5,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__) )
  {
    if ( !v5.fields.current )
      sub_B7769C(0LL, v4);
    ServantEquipEffectFilterItem__RefreshSelectState((ServantEquipEffectFilterItem_o *)v5.fields.current, v4);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v5,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterContainer__SetBottomPosition(
        ServantEquipEffectFilterContainer_o *this,
        int32_t displayCount,
        const MethodInfo *method)
{
  ServantEquipEffectFilterContainer_o *v4; // x19
  struct UIGrid_o *grid; // x8
  float cellWidth; // w8
  int v7; // w21
  WebViewObject_o *Component_WebViewObject; // x20
  struct UIGrid_o *v9; // x8
  float v10; // s0
  double v11; // d0
  const MethodInfo *v12; // x1
  float v13; // s0
  float v14; // s2
  float v15; // s1
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_438E8ED & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    this = (ServantEquipEffectFilterContainer_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E8ED = 1;
  }
  grid = v4->fields.grid;
  if ( !grid )
    goto LABEL_19;
  cellWidth = grid->fields.cellWidth;
  if ( displayCount % SLODWORD(cellWidth) )
    v7 = displayCount / SLODWORD(cellWidth) + 1;
  else
    v7 = displayCount / SLODWORD(cellWidth);
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)v4,
                              (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (ServantEquipEffectFilterContainer_o *)UnityEngine_Object__op_Inequality(
                                                  (UnityEngine_Object_o *)Component_WebViewObject,
                                                  0LL,
                                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    *(UnityEngine_Vector3_o *)&v13 = ServantEquipEffectFilterContainer__get_Position(
                                       v4,
                                       *(const MethodInfo **)&displayCount);
    goto LABEL_18;
  }
  if ( !Component_WebViewObject || (v9 = v4->fields.grid) == 0LL )
LABEL_19:
    sub_B7769C(this, *(_QWORD *)&displayCount);
  v10 = *(float *)&v9->fields.animateSmoothly * (float)v7;
  if ( v10 == INFINITY )
    v11 = -v10;
  else
    v11 = v10;
  UIWidget__set_height(
    (UIWidget_o *)Component_WebViewObject,
    HIDWORD(Component_WebViewObject[1].fields.onStarted) + (int)v11,
    0LL);
  Position = ServantEquipEffectFilterContainer__get_Position(v4, v12);
  v13 = Position.fields.x + 0.0;
  v14 = Position.fields.z + 0.0;
  v15 = Position.fields.y + (float)-HIDWORD(Component_WebViewObject[1].fields.onStarted);
LABEL_18:
  v4->fields._BottomPosition_k__BackingField.fields.x = v13;
  v4->fields._BottomPosition_k__BackingField.fields.y = v15;
  v4->fields._BottomPosition_k__BackingField.fields.z = v14;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterContainer__SetCollider(
        ServantEquipEffectFilterContainer_o *this,
        const MethodInfo *method)
{
  int *Component_WebViewObject; // x19
  UnityEngine_Object_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int v7; // s0
  int v9; // s2
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438E8EE & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E8EE = 1;
  }
  Component_WebViewObject = (int *)UnityEngine_Component__GetComponent_WebViewObject_(
                                     (UnityEngine_Component_o *)this,
                                     (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v4 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                 (UnityEngine_Component_o *)this,
                                 (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v5 = UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
    if ( (v5 & 1) != 0 )
    {
      if ( !Component_WebViewObject
        || (v5 = (*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)Component_WebViewObject + 664LL))(
                   Component_WebViewObject,
                   *(_QWORD *)(*(_QWORD *)Component_WebViewObject + 672LL)),
            !v4) )
      {
        sub_B7769C(v5, v6);
      }
      v9 = 0;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v4, *(UnityEngine_Vector3_o *)&v7, 0LL);
      v10.fields.x = 0.0;
      v10.fields.y = (float)Component_WebViewObject[41] * -0.5;
      v10.fields.z = 0.0;
      UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)v4, v10, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterContainer__SetEnableFilterButton(
        ServantEquipEffectFilterContainer_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *itemList; // x0
  bool i; // w19
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppClass *klass; // x0
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_438E8EF & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
    byte_438E8EF = 1;
  }
  memset(&v10, 0, sizeof(v10));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B7769C(0LL, isEnable);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  for ( i = isEnable; ; UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)klass, i, 0LL) )
  {
    v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v10,
           (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__);
    if ( !v7 )
      break;
    if ( !v10.fields.current )
      sub_B7769C(v7, v8);
    klass = v10.fields.current[2].klass;
    if ( !klass )
      sub_B7769C(0LL, v8);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterContainer__SetupHeader(
        ServantEquipEffectFilterContainer_o *this,
        int32_t groupType,
        int32_t categoryFlag,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x20
  System_String_o *leftLineSptite; // x0
  System_String_o *v8; // x21
  System_String_o *v9; // x22
  int32_t v10; // w8
  __int64 *v11; // x9
  System_String_o *v12; // x21
  System_String_o *v13; // x21
  System_String_o *v14; // x0
  System_String_o *v15; // x21
  struct UILabel_o *v16; // x8
  int *fields; // x9
  int v18; // w10
  int v19; // w9
  int v20; // w8
  int v21; // w21
  int v22; // w23
  UnityEngine_Transform_o *v23; // x20
  float v24; // s0
  int v25; // s1
  struct UILabel_o *v27; // x8
  float v28; // s0
  int32_t v29; // w20
  UnityEngine_Transform_o *v30; // x21
  float v31; // s0
  float v32; // s1
  float v33; // s2
  struct UILabel_o *v34; // x8
  int32_t v35; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  v35 = groupType;
  if ( (byte_438E8EB & 1) == 0 )
  {
    sub_B775C4(&FunctionCategoryEntity_GroupType_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&ServantEquipEffectFilterContainer_TypeInfo);
    sub_B775C4(&StringLiteral_3351/*"COMMAND_CODE_EFFECT_FILTER_GROUP_"*/);
    sub_B775C4(&StringLiteral_11907/*"SERVANT_EFFECT_FILTER_GROUP_"*/);
    sub_B775C4(&StringLiteral_11912/*"SERVANT_EQUIP_EFFECT_FILTER_GROUP_"*/);
    byte_438E8EB = 1;
  }
  switch ( categoryFlag )
  {
    case 4:
      titleLabel = this->fields.titleLabel;
      leftLineSptite = (System_String_o *)j_il2cpp_value_box_0(
                                            FunctionCategoryEntity_GroupType_TypeInfo,
                                            &v35,
                                            *(_QWORD *)&categoryFlag);
      if ( !leftLineSptite )
        goto LABEL_40;
      v12 = leftLineSptite;
      v9 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))leftLineSptite->klass->vtable._3_ToString.method)(
                                leftLineSptite,
                                leftLineSptite->klass->vtable._4_CompareTo.methodPtr);
      v10 = *(_DWORD *)j_il2cpp_object_unbox_0(v12);
      v11 = &StringLiteral_11907/*"SERVANT_EFFECT_FILTER_GROUP_"*/;
      break;
    case 2:
      titleLabel = this->fields.titleLabel;
      leftLineSptite = (System_String_o *)j_il2cpp_value_box_0(
                                            FunctionCategoryEntity_GroupType_TypeInfo,
                                            &v35,
                                            *(_QWORD *)&categoryFlag);
      if ( !leftLineSptite )
        goto LABEL_40;
      v13 = leftLineSptite;
      v9 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))leftLineSptite->klass->vtable._3_ToString.method)(
                                leftLineSptite,
                                leftLineSptite->klass->vtable._4_CompareTo.methodPtr);
      v10 = *(_DWORD *)j_il2cpp_object_unbox_0(v13);
      v11 = &StringLiteral_3351/*"COMMAND_CODE_EFFECT_FILTER_GROUP_"*/;
      break;
    case 1:
      titleLabel = this->fields.titleLabel;
      leftLineSptite = (System_String_o *)j_il2cpp_value_box_0(
                                            FunctionCategoryEntity_GroupType_TypeInfo,
                                            &v35,
                                            *(_QWORD *)&categoryFlag);
      if ( !leftLineSptite )
        goto LABEL_40;
      v8 = leftLineSptite;
      v9 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))leftLineSptite->klass->vtable._3_ToString.method)(
                                leftLineSptite,
                                leftLineSptite->klass->vtable._4_CompareTo.methodPtr);
      v10 = *(_DWORD *)j_il2cpp_object_unbox_0(v8);
      v11 = &StringLiteral_11912/*"SERVANT_EQUIP_EFFECT_FILTER_GROUP_"*/;
      break;
    default:
      goto LABEL_17;
  }
  v14 = (System_String_o *)*v11;
  v35 = v10;
  v15 = System_String__Concat_44901936(v14, v9, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  leftLineSptite = LocalizationManager__Get(v15, 0LL);
  if ( !titleLabel )
LABEL_40:
    sub_B7769C(leftLineSptite, *(_QWORD *)&groupType);
  UILabel__set_text(titleLabel, leftLineSptite, 0LL);
LABEL_17:
  leftLineSptite = (System_String_o *)ServantEquipEffectFilterContainer_TypeInfo;
  if ( (BYTE3(ServantEquipEffectFilterContainer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantEquipEffectFilterContainer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEquipEffectFilterContainer_TypeInfo);
    leftLineSptite = (System_String_o *)ServantEquipEffectFilterContainer_TypeInfo;
  }
  v16 = this->fields.titleLabel;
  if ( !v16 )
    goto LABEL_40;
  fields = (int *)leftLineSptite[7].fields;
  leftLineSptite = (System_String_o *)this->fields.leftLineSptite;
  v18 = *fields;
  v19 = fields[1];
  v20 = v16->fields.mWidth + 2 * v18;
  v21 = v19 >= 0 ? v19 : v19 + 1;
  v22 = v20 >= 0 ? v20 : v20 + 1;
  if ( !leftLineSptite )
    goto LABEL_40;
  leftLineSptite = (System_String_o *)UnityEngine_Component__get_transform(
                                        (UnityEngine_Component_o *)leftLineSptite,
                                        0LL);
  if ( !this->fields.titleLabel )
    goto LABEL_40;
  v23 = (UnityEngine_Transform_o *)leftLineSptite;
  leftLineSptite = (System_String_o *)UnityEngine_Component__get_transform(
                                        (UnityEngine_Component_o *)this->fields.titleLabel,
                                        0LL);
  if ( !leftLineSptite )
    goto LABEL_40;
  *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)leftLineSptite,
                                     0LL);
  v27 = this->fields.titleLabel;
  if ( !v27 )
    goto LABEL_40;
  if ( !v23 )
    goto LABEL_40;
  v28 = v24
      - (float)(ServantEquipEffectFilterContainer_TypeInfo->static_fields->TITLE_LINE_SPRITE_SPACE
              + v27->fields.mWidth / 2);
  UnityEngine_Transform__set_localPosition(v23, *(UnityEngine_Vector3_o *)(&v25 - 1), 0LL);
  leftLineSptite = (System_String_o *)this->fields.leftLineSptite;
  if ( !leftLineSptite )
    goto LABEL_40;
  v29 = (v21 >> 1) - (v22 >> 1);
  UIWidget__set_width((UIWidget_o *)leftLineSptite, v29, 0LL);
  leftLineSptite = (System_String_o *)this->fields.rightLineSptite;
  if ( !leftLineSptite )
    goto LABEL_40;
  leftLineSptite = (System_String_o *)UnityEngine_Component__get_transform(
                                        (UnityEngine_Component_o *)leftLineSptite,
                                        0LL);
  if ( !this->fields.titleLabel )
    goto LABEL_40;
  v30 = (UnityEngine_Transform_o *)leftLineSptite;
  leftLineSptite = (System_String_o *)UnityEngine_Component__get_transform(
                                        (UnityEngine_Component_o *)this->fields.titleLabel,
                                        0LL);
  if ( !leftLineSptite )
    goto LABEL_40;
  *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)leftLineSptite,
                                     0LL);
  v34 = this->fields.titleLabel;
  if ( !v34 )
    goto LABEL_40;
  if ( !v30 )
    goto LABEL_40;
  v36.fields.y = v32 + 0.0;
  v36.fields.z = v33 + 0.0;
  v36.fields.x = v31
               + (float)(ServantEquipEffectFilterContainer_TypeInfo->static_fields->TITLE_LINE_SPRITE_SPACE
                       + v34->fields.mWidth / 2);
  UnityEngine_Transform__set_localPosition(v30, v36, 0LL);
  leftLineSptite = (System_String_o *)this->fields.rightLineSptite;
  if ( !leftLineSptite )
    goto LABEL_40;
  UIWidget__set_width((UIWidget_o *)leftLineSptite, v29, 0LL);
}


UnityEngine_Vector3_o __fastcall ServantEquipEffectFilterContainer__get_BottomPosition(
        ServantEquipEffectFilterContainer_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields._BottomPosition_k__BackingField.fields.x;
  y = this->fields._BottomPosition_k__BackingField.fields.y;
  z = this->fields._BottomPosition_k__BackingField.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall ServantEquipEffectFilterContainer__get_Position(
        ServantEquipEffectFilterContainer_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v3; // x1
  float v4; // s0
  float v5; // s1
  float v6; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B7769C(0LL, v3);
  *(UnityEngine_Vector3_o *)&v4 = UnityEngine_Transform__get_localPosition(transform, 0LL);
  result.fields.z = v6;
  result.fields.y = v5;
  result.fields.x = v4;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterContainer__set_BottomPosition(
        ServantEquipEffectFilterContainer_o *this,
        UnityEngine_Vector3_o value,
        const MethodInfo *method)
{
  this->fields._BottomPosition_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterContainer__set_Position(
        ServantEquipEffectFilterContainer_o *this,
        UnityEngine_Vector3_o value,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  z = value.fields.z;
  y = value.fields.y;
  x = value.fields.x;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B7769C(0LL, v7);
  v8.fields.y = y;
  v8.fields.z = z;
  v8.fields.x = x;
  UnityEngine_Transform__set_localPosition(transform, v8, 0LL);
}


void __fastcall ServantEquipEffectFilterContainer___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ServantEquipEffectFilterContainer___c_StaticFields *static_fields; // x0

  if ( (byte_4388812 & 1) == 0 )
  {
    sub_B775C4(&ServantEquipEffectFilterContainer___c_TypeInfo);
    byte_4388812 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(ServantEquipEffectFilterContainer___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantEquipEffectFilterContainer___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantEquipEffectFilterContainer___c_o *)v1;
  sub_B77560(static_fields);
}


void __fastcall ServantEquipEffectFilterContainer___c___ctor(
        ServantEquipEffectFilterContainer___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantEquipEffectFilterContainer___c___RefreshItems_b__18_0(
        ServantEquipEffectFilterContainer___c_o *this,
        FunctionCategoryEntity_o *x,
        FunctionCategoryEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_B7769C(this, x);
  return x->fields.dispNo - y->fields.dispNo;
}