void __fastcall ServantEquipEffectFilterContainer___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_42174F0 & 1) == 0 )
  {
    sub_B0D8A4(&ServantEquipEffectFilterContainer_TypeInfo, v1);
    byte_42174F0 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *itemList; // x0
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42174EF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__, v5);
    byte_42174EF = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B0D97C(0LL);
    ServantEquipEffectFilterItem__SetSelectState((ServantEquipEffectFilterItem_o *)v8.fields.current, 0, v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
}


void __fastcall ServantEquipEffectFilterContainer__ForceSelectAll(
        ServantEquipEffectFilterContainer_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *itemList; // x0
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42174EE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__, v5);
    byte_42174EE = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B0D97C(0LL);
    ServantEquipEffectFilterItem__SetSelectState((ServantEquipEffectFilterItem_o *)v8.fields.current, 1, v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
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
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x1
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.sort = sort;
  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)sort,
    *(System_String_array ***)&groupType,
    (System_String_array **)sort,
    (System_Boolean_array **)onclickEvent,
    *(System_Int32_array ***)&categoryFlag,
    (System_Int32_array *)method,
    v8);
  v24.fields.x = x;
  v24.fields.y = y;
  v24.fields.z = z;
  ServantEquipEffectFilterContainer__set_Position(this, v24, v17);
  ServantEquipEffectFilterContainer__SetupHeader(this, groupType, categoryFlag, v18);
  ServantEquipEffectFilterContainer__RefreshItems(this, entities, v19, onclickEvent, v20);
  if ( !entities )
    sub_B0D97C(v21);
  ServantEquipEffectFilterContainer__SetBottomPosition(this, entities->max_length, v22);
  ServantEquipEffectFilterContainer__SetCollider(this, v23);
}


void __fastcall ServantEquipEffectFilterContainer__RefreshItems(
        ServantEquipEffectFilterContainer_o *this,
        FunctionCategoryEntity_array *entities,
        ListViewSort_o *sort,
        System_Action_o *onclickEvent,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  ServantEquipEffectFilterContainer___c_c *v17; // x0
  struct ServantEquipEffectFilterContainer___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__18_0; // x22
  Il2CppObject *v20; // x23
  struct ServantEquipEffectFilterContainer___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x23
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o **p_itemList; // x22
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UnityEngine_Component_o *transform; // x0
  signed int max_length; // w8
  unsigned int v40; // w26
  UnityEngine_UI_Dropdown_DropdownItem_o *itemPrefab; // x24
  FunctionCategoryEntity_o *v42; // x23
  UnityEngine_Component_o *v43; // x24
  UnityEngine_Transform_o *v44; // x25
  ListViewSort_o *v45; // x25
  bool SvtEquipEffectFilter; // w0
  const MethodInfo *v47; // x5
  __int64 v48; // x0

  if ( (byte_42174E9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Sort_FunctionCategoryEntity___, entities);
    sub_B0D8A4(&Method_System_Comparison_FunctionCategoryEntity___ctor__, v8);
    sub_B0D8A4(&System_Comparison_FunctionCategoryEntity__TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_ServantEquipEffectFilterItem__TypeInfo, v12);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterItem___, v13);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v14);
    sub_B0D8A4(&Method_ServantEquipEffectFilterContainer___c__RefreshItems_b__18_0__, v15);
    sub_B0D8A4(&ServantEquipEffectFilterContainer___c_TypeInfo, v16);
    byte_42174E9 = 1;
  }
  v17 = ServantEquipEffectFilterContainer___c_TypeInfo;
  if ( (BYTE3(ServantEquipEffectFilterContainer___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantEquipEffectFilterContainer___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEquipEffectFilterContainer___c_TypeInfo);
    v17 = ServantEquipEffectFilterContainer___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = ServantEquipEffectFilterContainer___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_FunctionCategoryEntity__TypeInfo,
                                                                           entities,
                                                                           sort);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__18_0,
      v20,
      Method_ServantEquipEffectFilterContainer___c__RefreshItems_b__18_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_FunctionCategoryEntity___ctor__);
    v21 = ServantEquipEffectFilterContainer___c_TypeInfo->static_fields;
    v21->__9__18_0 = (struct System_Comparison_FunctionCategoryEntity__o *)_9__18_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v21->__9__18_0,
      (System_Int32_array **)_9__18_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    (BattleBuffData_BuffData_array *)entities,
    (System_Comparison_T__o *)_9__18_0,
    (const MethodInfo_23398EC *)Method_System_Array_Sort_FunctionCategoryEntity___);
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantEquipEffectFilterItem__TypeInfo,
                                                                                                  v28,
                                                                                                  v29);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *)v30;
  p_itemList = &this->fields.itemList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.itemList,
    (System_Int32_array **)v30,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  if ( !entities )
    goto LABEL_29;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v40 = 0;
    while ( 1 )
    {
      if ( v40 >= max_length )
      {
        v48 = sub_B0D9A8(transform);
        sub_B0D948(v48, 0LL);
      }
      itemPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.itemPrefab;
      v42 = entities->m_Items[v40];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                               itemPrefab,
                                               (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterItem___);
      if ( !transform )
        break;
      v43 = transform;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !this->fields.grid )
        break;
      v44 = (UnityEngine_Transform_o *)transform;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)this->fields.grid,
                                               0LL);
      if ( !v44 )
        break;
      UnityEngine_Transform__SetParent_35056148(v44, (UnityEngine_Transform_o *)transform, 0, 0LL);
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v43, 0LL);
      if ( !transform )
        break;
      UnityEngine_Transform__SetAsLastSibling((UnityEngine_Transform_o *)transform, 0LL);
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v43, 0LL);
      if ( !transform )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
      if ( !v42 )
        break;
      v45 = this->fields.sort;
      if ( !v45 )
        break;
      SvtEquipEffectFilter = ListViewSort__GetSvtEquipEffectFilter(this->fields.sort, v42->fields.id, 0LL);
      ServantEquipEffectFilterItem__Init(
        (ServantEquipEffectFilterItem_o *)v43,
        v42,
        v45,
        SvtEquipEffectFilter,
        onclickEvent,
        v47);
      transform = (UnityEngine_Component_o *)*p_itemList;
      if ( !*p_itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__Add__);
      max_length = entities->max_length;
      if ( (int)++v40 >= max_length )
        goto LABEL_27;
    }
LABEL_29:
    sub_B0D97C(transform);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *itemList; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42174ED & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__, v5);
    byte_42174ED = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B0D97C(0LL);
    ServantEquipEffectFilterItem__RefreshSelectState((ServantEquipEffectFilterItem_o *)v8.fields.current, v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterContainer__SetBottomPosition(
        ServantEquipEffectFilterContainer_o *this,
        int32_t displayCount,
        const MethodInfo *method)
{
  ServantEquipEffectFilterContainer_o *v4; // x19
  __int64 v5; // x1
  struct UIGrid_o *grid; // x8
  float cellWidth; // w8
  int v8; // w21
  WebViewObject_o *Component_WebViewObject; // x20
  const MethodInfo *v10; // x1
  struct UIGrid_o *v11; // x8
  float v12; // s0
  double v13; // d0
  const MethodInfo *v14; // x1
  float v15; // s0
  float v16; // s2
  float v17; // s1
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42174EA & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&displayCount);
    this = (ServantEquipEffectFilterContainer_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_42174EA = 1;
  }
  grid = v4->fields.grid;
  if ( !grid )
    goto LABEL_19;
  cellWidth = grid->fields.cellWidth;
  if ( displayCount % SLODWORD(cellWidth) )
    v8 = displayCount / SLODWORD(cellWidth) + 1;
  else
    v8 = displayCount / SLODWORD(cellWidth);
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)v4,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    *(UnityEngine_Vector3_o *)&v15 = ServantEquipEffectFilterContainer__get_Position(v4, v10);
    goto LABEL_18;
  }
  if ( !Component_WebViewObject || (v11 = v4->fields.grid) == 0LL )
LABEL_19:
    sub_B0D97C(this);
  v12 = *(float *)&v11->fields.animateSmoothly * (float)v8;
  if ( v12 == INFINITY )
    v13 = -v12;
  else
    v13 = v12;
  UIWidget__set_height(
    (UIWidget_o *)Component_WebViewObject,
    HIDWORD(Component_WebViewObject[1].fields.onStarted) + (int)v13,
    0LL);
  Position = ServantEquipEffectFilterContainer__get_Position(v4, v14);
  v15 = Position.fields.x + 0.0;
  v16 = Position.fields.z + 0.0;
  v17 = Position.fields.y + (float)-HIDWORD(Component_WebViewObject[1].fields.onStarted);
LABEL_18:
  v4->fields._BottomPosition_k__BackingField.fields.x = v15;
  v4->fields._BottomPosition_k__BackingField.fields.y = v17;
  v4->fields._BottomPosition_k__BackingField.fields.z = v16;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterContainer__SetCollider(
        ServantEquipEffectFilterContainer_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int *Component_WebViewObject; // x19
  UnityEngine_Object_o *v6; // x20
  __int64 v7; // x0
  int v8; // s0
  int v10; // s2
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42174EB & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_BoxCollider___, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_42174EB = 1;
  }
  Component_WebViewObject = (int *)UnityEngine_Component__GetComponent_WebViewObject_(
                                     (UnityEngine_Component_o *)this,
                                     (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v6 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                 (UnityEngine_Component_o *)this,
                                 (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
    v7 = UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
    if ( (v7 & 1) != 0 )
    {
      if ( !Component_WebViewObject
        || (v7 = (*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)Component_WebViewObject + 664LL))(
                   Component_WebViewObject,
                   *(_QWORD *)(*(_QWORD *)Component_WebViewObject + 672LL)),
            !v6) )
      {
        sub_B0D97C(v7);
      }
      v10 = 0;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v6, *(UnityEngine_Vector3_o *)&v8, 0LL);
      v11.fields.x = 0.0;
      v11.fields.y = (float)Component_WebViewObject[41] * -0.5;
      v11.fields.z = 0.0;
      UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)v6, v11, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterContainer__SetEnableFilterButton(
        ServantEquipEffectFilterContainer_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *itemList; // x0
  bool i; // w19
  _BOOL8 v10; // x0
  Il2CppClass *klass; // x0
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42174EC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__, isEnable);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__, v7);
    byte_42174EC = 1;
  }
  memset(&v12, 0, sizeof(v12));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  for ( i = isEnable; ; UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)klass, i, 0LL) )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__);
    if ( !v10 )
      break;
    if ( !v12.fields.current )
      sub_B0D97C(v10);
    klass = v12.fields.current[2].klass;
    if ( !klass )
      sub_B0D97C(0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterContainer__SetupHeader(
        ServantEquipEffectFilterContainer_o *this,
        int32_t groupType,
        int32_t categoryFlag,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UILabel_o *titleLabel; // x20
  System_String_o *leftLineSptite; // x0
  System_String_o *v13; // x21
  System_String_o *v14; // x22
  int32_t v15; // w8
  __int64 *v16; // x9
  System_String_o *v17; // x21
  System_String_o *v18; // x21
  System_String_o *v19; // x0
  System_String_o *v20; // x21
  struct UILabel_o *v21; // x8
  int *fields; // x9
  int v23; // w10
  int v24; // w9
  int v25; // w8
  int v26; // w21
  int v27; // w23
  UnityEngine_Transform_o *v28; // x20
  float v29; // s0
  int v30; // s1
  struct UILabel_o *v32; // x8
  float v33; // s0
  int32_t v34; // w20
  UnityEngine_Transform_o *v35; // x21
  float v36; // s0
  float v37; // s1
  float v38; // s2
  struct UILabel_o *v39; // x8
  int32_t v40; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  v40 = groupType;
  if ( (byte_42174E8 & 1) == 0 )
  {
    sub_B0D8A4(&FunctionCategoryEntity_GroupType_TypeInfo, *(_QWORD *)&groupType);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&ServantEquipEffectFilterContainer_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_3238/*"COMMAND_CODE_EFFECT_FILTER_GROUP_"*/, v8);
    sub_B0D8A4(&StringLiteral_11711/*"SERVANT_EFFECT_FILTER_GROUP_"*/, v9);
    sub_B0D8A4(&StringLiteral_11716/*"SERVANT_EQUIP_EFFECT_FILTER_GROUP_"*/, v10);
    byte_42174E8 = 1;
  }
  switch ( categoryFlag )
  {
    case 4:
      titleLabel = this->fields.titleLabel;
      leftLineSptite = (System_String_o *)j_il2cpp_value_box_0(FunctionCategoryEntity_GroupType_TypeInfo, &v40);
      if ( !leftLineSptite )
        goto LABEL_40;
      v17 = leftLineSptite;
      v14 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))leftLineSptite->klass->vtable._3_ToString.method)(
                                 leftLineSptite,
                                 leftLineSptite->klass->vtable._4_CompareTo.methodPtr);
      v15 = *(_DWORD *)j_il2cpp_object_unbox_0(v17);
      v16 = &StringLiteral_11711/*"SERVANT_EFFECT_FILTER_GROUP_"*/;
      break;
    case 2:
      titleLabel = this->fields.titleLabel;
      leftLineSptite = (System_String_o *)j_il2cpp_value_box_0(FunctionCategoryEntity_GroupType_TypeInfo, &v40);
      if ( !leftLineSptite )
        goto LABEL_40;
      v18 = leftLineSptite;
      v14 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))leftLineSptite->klass->vtable._3_ToString.method)(
                                 leftLineSptite,
                                 leftLineSptite->klass->vtable._4_CompareTo.methodPtr);
      v15 = *(_DWORD *)j_il2cpp_object_unbox_0(v18);
      v16 = &StringLiteral_3238/*"COMMAND_CODE_EFFECT_FILTER_GROUP_"*/;
      break;
    case 1:
      titleLabel = this->fields.titleLabel;
      leftLineSptite = (System_String_o *)j_il2cpp_value_box_0(FunctionCategoryEntity_GroupType_TypeInfo, &v40);
      if ( !leftLineSptite )
        goto LABEL_40;
      v13 = leftLineSptite;
      v14 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))leftLineSptite->klass->vtable._3_ToString.method)(
                                 leftLineSptite,
                                 leftLineSptite->klass->vtable._4_CompareTo.methodPtr);
      v15 = *(_DWORD *)j_il2cpp_object_unbox_0(v13);
      v16 = &StringLiteral_11716/*"SERVANT_EQUIP_EFFECT_FILTER_GROUP_"*/;
      break;
    default:
      goto LABEL_17;
  }
  v19 = (System_String_o *)*v16;
  v40 = v15;
  v20 = System_String__Concat_43849904(v19, v14, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  leftLineSptite = LocalizationManager__Get(v20, 0LL);
  if ( !titleLabel )
LABEL_40:
    sub_B0D97C(leftLineSptite);
  UILabel__set_text(titleLabel, leftLineSptite, 0LL);
LABEL_17:
  leftLineSptite = (System_String_o *)ServantEquipEffectFilterContainer_TypeInfo;
  if ( (BYTE3(ServantEquipEffectFilterContainer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantEquipEffectFilterContainer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEquipEffectFilterContainer_TypeInfo);
    leftLineSptite = (System_String_o *)ServantEquipEffectFilterContainer_TypeInfo;
  }
  v21 = this->fields.titleLabel;
  if ( !v21 )
    goto LABEL_40;
  fields = (int *)leftLineSptite[7].fields;
  leftLineSptite = (System_String_o *)this->fields.leftLineSptite;
  v23 = *fields;
  v24 = fields[1];
  v25 = v21->fields.mWidth + 2 * v23;
  v26 = v24 >= 0 ? v24 : v24 + 1;
  v27 = v25 >= 0 ? v25 : v25 + 1;
  if ( !leftLineSptite )
    goto LABEL_40;
  leftLineSptite = (System_String_o *)UnityEngine_Component__get_transform(
                                        (UnityEngine_Component_o *)leftLineSptite,
                                        0LL);
  if ( !this->fields.titleLabel )
    goto LABEL_40;
  v28 = (UnityEngine_Transform_o *)leftLineSptite;
  leftLineSptite = (System_String_o *)UnityEngine_Component__get_transform(
                                        (UnityEngine_Component_o *)this->fields.titleLabel,
                                        0LL);
  if ( !leftLineSptite )
    goto LABEL_40;
  *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)leftLineSptite,
                                     0LL);
  v32 = this->fields.titleLabel;
  if ( !v32 )
    goto LABEL_40;
  if ( !v28 )
    goto LABEL_40;
  v33 = v29
      - (float)(ServantEquipEffectFilterContainer_TypeInfo->static_fields->TITLE_LINE_SPRITE_SPACE
              + v32->fields.mWidth / 2);
  UnityEngine_Transform__set_localPosition(v28, *(UnityEngine_Vector3_o *)(&v30 - 1), 0LL);
  leftLineSptite = (System_String_o *)this->fields.leftLineSptite;
  if ( !leftLineSptite )
    goto LABEL_40;
  v34 = (v26 >> 1) - (v27 >> 1);
  UIWidget__set_width((UIWidget_o *)leftLineSptite, v34, 0LL);
  leftLineSptite = (System_String_o *)this->fields.rightLineSptite;
  if ( !leftLineSptite )
    goto LABEL_40;
  leftLineSptite = (System_String_o *)UnityEngine_Component__get_transform(
                                        (UnityEngine_Component_o *)leftLineSptite,
                                        0LL);
  if ( !this->fields.titleLabel )
    goto LABEL_40;
  v35 = (UnityEngine_Transform_o *)leftLineSptite;
  leftLineSptite = (System_String_o *)UnityEngine_Component__get_transform(
                                        (UnityEngine_Component_o *)this->fields.titleLabel,
                                        0LL);
  if ( !leftLineSptite )
    goto LABEL_40;
  *(UnityEngine_Vector3_o *)&v36 = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)leftLineSptite,
                                     0LL);
  v39 = this->fields.titleLabel;
  if ( !v39 )
    goto LABEL_40;
  if ( !v35 )
    goto LABEL_40;
  v41.fields.y = v37 + 0.0;
  v41.fields.z = v38 + 0.0;
  v41.fields.x = v36
               + (float)(ServantEquipEffectFilterContainer_TypeInfo->static_fields->TITLE_LINE_SPRITE_SPACE
                       + v39->fields.mWidth / 2);
  UnityEngine_Transform__set_localPosition(v35, v41, 0LL);
  leftLineSptite = (System_String_o *)this->fields.rightLineSptite;
  if ( !leftLineSptite )
    goto LABEL_40;
  UIWidget__set_width((UIWidget_o *)leftLineSptite, v34, 0LL);
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
  float v3; // s0
  float v4; // s1
  float v5; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B0D97C(0LL);
  *(UnityEngine_Vector3_o *)&v3 = UnityEngine_Transform__get_localPosition(transform, 0LL);
  result.fields.z = v5;
  result.fields.y = v4;
  result.fields.x = v3;
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
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4

  z = value.fields.z;
  y = value.fields.y;
  x = value.fields.x;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B0D97C(0LL);
  v7.fields.y = y;
  v7.fields.z = z;
  v7.fields.x = x;
  UnityEngine_Transform__set_localPosition(transform, v7, 0LL);
}


void __fastcall ServantEquipEffectFilterContainer___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ServantEquipEffectFilterContainer___c_StaticFields *static_fields; // x0

  if ( (byte_4212229 & 1) == 0 )
  {
    sub_B0D8A4(&ServantEquipEffectFilterContainer___c_TypeInfo, v1);
    byte_4212229 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ServantEquipEffectFilterContainer___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ServantEquipEffectFilterContainer___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantEquipEffectFilterContainer___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return x->fields.dispNo - y->fields.dispNo;
}