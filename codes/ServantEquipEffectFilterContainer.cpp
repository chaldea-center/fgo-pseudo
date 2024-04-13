void __fastcall ServantEquipEffectFilterContainer___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB96B & 1) == 0 )
  {
    sub_B5D5C4(&ServantEquipEffectFilterContainer_TypeInfo, v1, v2, v3);
    byte_42EB96B = 1;
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
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *itemList; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EB96A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__, v11, v12, v13);
    byte_42EB96A = 1;
  }
  memset(&v17, 0, sizeof(v17));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__) )
  {
    if ( !v17.fields.current )
      sub_B5D69C(0LL, v15);
    ServantEquipEffectFilterItem__SetSelectState((ServantEquipEffectFilterItem_o *)v17.fields.current, 0, v16);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
}


void __fastcall ServantEquipEffectFilterContainer__ForceSelectAll(
        ServantEquipEffectFilterContainer_o *this,
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
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *itemList; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EB969 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__, v11, v12, v13);
    byte_42EB969 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__) )
  {
    if ( !v17.fields.current )
      sub_B5D69C(0LL, v15);
    ServantEquipEffectFilterItem__SetSelectState((ServantEquipEffectFilterItem_o *)v17.fields.current, 1, v16);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
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
  sub_B5D560(
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
    sub_B5D69C(v21, v22);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  ServantEquipEffectFilterContainer___c_c *v35; // x0
  struct ServantEquipEffectFilterContainer___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__18_0; // x22
  Il2CppObject *v38; // x23
  struct ServantEquipEffectFilterContainer___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x23
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o **p_itemList; // x22
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  UnityEngine_Component_o *transform; // x0
  __int64 v55; // x1
  signed int max_length; // w8
  unsigned int v57; // w26
  UnityEngine_UI_Dropdown_DropdownItem_o *itemPrefab; // x24
  FunctionCategoryEntity_o *v59; // x23
  UnityEngine_Component_o *v60; // x24
  UnityEngine_Transform_o *v61; // x25
  ListViewSort_o *v62; // x25
  bool SvtEquipEffectFilter; // w0
  const MethodInfo *v64; // x5
  __int64 v65; // x0

  if ( (byte_42EB964 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Sort_FunctionCategoryEntity___, (_DWORD)entities, (_DWORD)sort, onclickEvent);
    sub_B5D5C4(&Method_System_Comparison_FunctionCategoryEntity___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Comparison_FunctionCategoryEntity__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_ServantEquipEffectFilterItem__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterItem___, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_ServantEquipEffectFilterContainer___c__RefreshItems_b__18_0__, v29, v30, v31);
    sub_B5D5C4(&ServantEquipEffectFilterContainer___c_TypeInfo, v32, v33, v34);
    byte_42EB964 = 1;
  }
  v35 = ServantEquipEffectFilterContainer___c_TypeInfo;
  if ( (BYTE3(ServantEquipEffectFilterContainer___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantEquipEffectFilterContainer___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEquipEffectFilterContainer___c_TypeInfo);
    v35 = ServantEquipEffectFilterContainer___c_TypeInfo;
  }
  static_fields = v35->static_fields;
  _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      static_fields = ServantEquipEffectFilterContainer___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)static_fields->__9;
    _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_FunctionCategoryEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__18_0,
      v38,
      Method_ServantEquipEffectFilterContainer___c__RefreshItems_b__18_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_FunctionCategoryEntity___ctor__);
    v39 = ServantEquipEffectFilterContainer___c_TypeInfo->static_fields;
    v39->__9__18_0 = (struct System_Comparison_FunctionCategoryEntity__o *)_9__18_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v39->__9__18_0,
      (System_Int32_array **)_9__18_0,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    (BattleBuffData_BuffData_array *)entities,
    (System_Comparison_T__o *)_9__18_0,
    (const MethodInfo_1AC8530 *)Method_System_Array_Sort_FunctionCategoryEntity___);
  v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantEquipEffectFilterItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v46,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *)v46;
  p_itemList = &this->fields.itemList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemList,
    (System_Int32_array **)v46,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  if ( !entities )
    goto LABEL_29;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v57 = 0;
    while ( 1 )
    {
      if ( v57 >= max_length )
      {
        v65 = sub_B5D6C8(transform);
        sub_B5D668(v65, 0LL);
      }
      itemPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.itemPrefab;
      v59 = entities->m_Items[v57];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                               itemPrefab,
                                               (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterItem___);
      if ( !transform )
        break;
      v60 = transform;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !this->fields.grid )
        break;
      v61 = (UnityEngine_Transform_o *)transform;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)this->fields.grid,
                                               0LL);
      if ( !v61 )
        break;
      UnityEngine_Transform__SetParent_35741212(v61, (UnityEngine_Transform_o *)transform, 0, 0LL);
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v60, 0LL);
      if ( !transform )
        break;
      UnityEngine_Transform__SetAsLastSibling((UnityEngine_Transform_o *)transform, 0LL);
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v60, 0LL);
      if ( !transform )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
      if ( !v59 )
        break;
      v62 = this->fields.sort;
      if ( !v62 )
        break;
      SvtEquipEffectFilter = ListViewSort__GetSvtEquipEffectFilter(this->fields.sort, v59->fields.id, 0LL);
      ServantEquipEffectFilterItem__Init(
        (ServantEquipEffectFilterItem_o *)v60,
        v59,
        v62,
        SvtEquipEffectFilter,
        onclickEvent,
        v64);
      transform = (UnityEngine_Component_o *)*p_itemList;
      if ( !*p_itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v60,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__Add__);
      max_length = entities->max_length;
      if ( (int)++v57 >= max_length )
        goto LABEL_27;
    }
LABEL_29:
    sub_B5D69C(transform, v55);
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
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *itemList; // x0
  const MethodInfo *v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EB968 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__, v11, v12, v13);
    byte_42EB968 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__) )
  {
    if ( !v16.fields.current )
      sub_B5D69C(0LL, v15);
    ServantEquipEffectFilterItem__RefreshSelectState((ServantEquipEffectFilterItem_o *)v16.fields.current, v15);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterContainer__SetBottomPosition(
        ServantEquipEffectFilterContainer_o *this,
        int32_t displayCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantEquipEffectFilterContainer_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct UIGrid_o *grid; // x8
  float cellWidth; // w8
  int v11; // w21
  WebViewObject_o *Component_WebViewObject; // x20
  struct UIGrid_o *v13; // x8
  float v14; // s0
  double v15; // d0
  const MethodInfo *v16; // x1
  float v17; // s0
  float v18; // s2
  float v19; // s1
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_42EB965 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, displayCount, (_DWORD)method, v3);
    this = (ServantEquipEffectFilterContainer_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EB965 = 1;
  }
  grid = v5->fields.grid;
  if ( !grid )
    goto LABEL_19;
  cellWidth = grid->fields.cellWidth;
  if ( displayCount % SLODWORD(cellWidth) )
    v11 = displayCount / SLODWORD(cellWidth) + 1;
  else
    v11 = displayCount / SLODWORD(cellWidth);
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)v5,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    *(UnityEngine_Vector3_o *)&v17 = ServantEquipEffectFilterContainer__get_Position(
                                       v5,
                                       *(const MethodInfo **)&displayCount);
    goto LABEL_18;
  }
  if ( !Component_WebViewObject || (v13 = v5->fields.grid) == 0LL )
LABEL_19:
    sub_B5D69C(this, *(_QWORD *)&displayCount);
  v14 = *(float *)&v13->fields.animateSmoothly * (float)v11;
  if ( v14 == INFINITY )
    v15 = -v14;
  else
    v15 = v14;
  UIWidget__set_height(
    (UIWidget_o *)Component_WebViewObject,
    HIDWORD(Component_WebViewObject[1].fields.onStarted) + (int)v15,
    0LL);
  Position = ServantEquipEffectFilterContainer__get_Position(v5, v16);
  v17 = Position.fields.x + 0.0;
  v18 = Position.fields.z + 0.0;
  v19 = Position.fields.y + (float)-HIDWORD(Component_WebViewObject[1].fields.onStarted);
LABEL_18:
  v5->fields._BottomPosition_k__BackingField.fields.x = v17;
  v5->fields._BottomPosition_k__BackingField.fields.y = v19;
  v5->fields._BottomPosition_k__BackingField.fields.z = v18;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterContainer__SetCollider(
        ServantEquipEffectFilterContainer_o *this,
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
  int *Component_WebViewObject; // x19
  UnityEngine_Object_o *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  int v15; // s0
  int v17; // s2
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EB966 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_BoxCollider___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42EB966 = 1;
  }
  Component_WebViewObject = (int *)UnityEngine_Component__GetComponent_WebViewObject_(
                                     (UnityEngine_Component_o *)this,
                                     (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v12 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
    v13 = UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
    if ( (v13 & 1) != 0 )
    {
      if ( !Component_WebViewObject
        || (v13 = (*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)Component_WebViewObject + 664LL))(
                    Component_WebViewObject,
                    *(_QWORD *)(*(_QWORD *)Component_WebViewObject + 672LL)),
            !v12) )
      {
        sub_B5D69C(v13, v14);
      }
      v17 = 0;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v12, *(UnityEngine_Vector3_o *)&v15, 0LL);
      v18.fields.x = 0.0;
      v18.fields.y = (float)Component_WebViewObject[41] * -0.5;
      v18.fields.z = 0.0;
      UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)v12, v18, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterContainer__SetEnableFilterButton(
        ServantEquipEffectFilterContainer_o *this,
        bool isEnable,
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
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *itemList; // x0
  bool i; // w19
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppClass *klass; // x0
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EB967 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__,
      isEnable,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__, v6, v7, v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__,
      v9,
      v10,
      v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__, v12, v13, v14);
    byte_42EB967 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B5D69C(0LL, isEnable);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  for ( i = isEnable; ; UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)klass, i, 0LL) )
  {
    v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__);
    if ( !v17 )
      break;
    if ( !v20.fields.current )
      sub_B5D69C(v17, v18);
    klass = v20.fields.current[2].klass;
    if ( !klass )
      sub_B5D69C(0LL, v18);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterContainer__SetupHeader(
        ServantEquipEffectFilterContainer_o *this,
        int32_t groupType,
        int32_t categoryFlag,
        const MethodInfo *method)
{
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
  UILabel_o *titleLabel; // x20
  System_String_o *leftLineSptite; // x0
  System_String_o *v23; // x21
  System_String_o *v24; // x22
  int32_t v25; // w8
  __int64 *v26; // x9
  System_String_o *v27; // x21
  System_String_o *v28; // x21
  System_String_o *v29; // x0
  System_String_o *v30; // x21
  struct UILabel_o *v31; // x8
  int *fields; // x9
  int v33; // w10
  int v34; // w9
  int v35; // w8
  int v36; // w21
  int v37; // w23
  UnityEngine_Transform_o *v38; // x20
  float v39; // s0
  int v40; // s1
  struct UILabel_o *v42; // x8
  float v43; // s0
  int32_t v44; // w20
  UnityEngine_Transform_o *v45; // x21
  float v46; // s0
  float v47; // s1
  float v48; // s2
  struct UILabel_o *v49; // x8
  int32_t v50; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  v50 = groupType;
  if ( (byte_42EB963 & 1) == 0 )
  {
    sub_B5D5C4(&FunctionCategoryEntity_GroupType_TypeInfo, groupType, categoryFlag, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&ServantEquipEffectFilterContainer_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_3291/*"COMMAND_CODE_EFFECT_FILTER_GROUP_"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_11822/*"SERVANT_EFFECT_FILTER_GROUP_"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_11827/*"SERVANT_EQUIP_EFFECT_FILTER_GROUP_"*/, v18, v19, v20);
    byte_42EB963 = 1;
  }
  switch ( categoryFlag )
  {
    case 4:
      titleLabel = this->fields.titleLabel;
      leftLineSptite = (System_String_o *)j_il2cpp_value_box_0(FunctionCategoryEntity_GroupType_TypeInfo, &v50);
      if ( !leftLineSptite )
        goto LABEL_40;
      v27 = leftLineSptite;
      v24 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))leftLineSptite->klass->vtable._3_ToString.method)(
                                 leftLineSptite,
                                 leftLineSptite->klass->vtable._4_CompareTo.methodPtr);
      v25 = *(_DWORD *)j_il2cpp_object_unbox_0(v27);
      v26 = &StringLiteral_11822/*"SERVANT_EFFECT_FILTER_GROUP_"*/;
      break;
    case 2:
      titleLabel = this->fields.titleLabel;
      leftLineSptite = (System_String_o *)j_il2cpp_value_box_0(FunctionCategoryEntity_GroupType_TypeInfo, &v50);
      if ( !leftLineSptite )
        goto LABEL_40;
      v28 = leftLineSptite;
      v24 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))leftLineSptite->klass->vtable._3_ToString.method)(
                                 leftLineSptite,
                                 leftLineSptite->klass->vtable._4_CompareTo.methodPtr);
      v25 = *(_DWORD *)j_il2cpp_object_unbox_0(v28);
      v26 = &StringLiteral_3291/*"COMMAND_CODE_EFFECT_FILTER_GROUP_"*/;
      break;
    case 1:
      titleLabel = this->fields.titleLabel;
      leftLineSptite = (System_String_o *)j_il2cpp_value_box_0(FunctionCategoryEntity_GroupType_TypeInfo, &v50);
      if ( !leftLineSptite )
        goto LABEL_40;
      v23 = leftLineSptite;
      v24 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))leftLineSptite->klass->vtable._3_ToString.method)(
                                 leftLineSptite,
                                 leftLineSptite->klass->vtable._4_CompareTo.methodPtr);
      v25 = *(_DWORD *)j_il2cpp_object_unbox_0(v23);
      v26 = &StringLiteral_11827/*"SERVANT_EQUIP_EFFECT_FILTER_GROUP_"*/;
      break;
    default:
      goto LABEL_17;
  }
  v29 = (System_String_o *)*v26;
  v50 = v25;
  v30 = System_String__Concat_44577788(v29, v24, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  leftLineSptite = LocalizationManager__Get(v30, 0LL);
  if ( !titleLabel )
LABEL_40:
    sub_B5D69C(leftLineSptite, *(_QWORD *)&groupType);
  UILabel__set_text(titleLabel, leftLineSptite, 0LL);
LABEL_17:
  leftLineSptite = (System_String_o *)ServantEquipEffectFilterContainer_TypeInfo;
  if ( (BYTE3(ServantEquipEffectFilterContainer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantEquipEffectFilterContainer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEquipEffectFilterContainer_TypeInfo);
    leftLineSptite = (System_String_o *)ServantEquipEffectFilterContainer_TypeInfo;
  }
  v31 = this->fields.titleLabel;
  if ( !v31 )
    goto LABEL_40;
  fields = (int *)leftLineSptite[7].fields;
  leftLineSptite = (System_String_o *)this->fields.leftLineSptite;
  v33 = *fields;
  v34 = fields[1];
  v35 = v31->fields.mWidth + 2 * v33;
  v36 = v34 >= 0 ? v34 : v34 + 1;
  v37 = v35 >= 0 ? v35 : v35 + 1;
  if ( !leftLineSptite )
    goto LABEL_40;
  leftLineSptite = (System_String_o *)UnityEngine_Component__get_transform(
                                        (UnityEngine_Component_o *)leftLineSptite,
                                        0LL);
  if ( !this->fields.titleLabel )
    goto LABEL_40;
  v38 = (UnityEngine_Transform_o *)leftLineSptite;
  leftLineSptite = (System_String_o *)UnityEngine_Component__get_transform(
                                        (UnityEngine_Component_o *)this->fields.titleLabel,
                                        0LL);
  if ( !leftLineSptite )
    goto LABEL_40;
  *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)leftLineSptite,
                                     0LL);
  v42 = this->fields.titleLabel;
  if ( !v42 )
    goto LABEL_40;
  if ( !v38 )
    goto LABEL_40;
  v43 = v39
      - (float)(ServantEquipEffectFilterContainer_TypeInfo->static_fields->TITLE_LINE_SPRITE_SPACE
              + v42->fields.mWidth / 2);
  UnityEngine_Transform__set_localPosition(v38, *(UnityEngine_Vector3_o *)(&v40 - 1), 0LL);
  leftLineSptite = (System_String_o *)this->fields.leftLineSptite;
  if ( !leftLineSptite )
    goto LABEL_40;
  v44 = (v36 >> 1) - (v37 >> 1);
  UIWidget__set_width((UIWidget_o *)leftLineSptite, v44, 0LL);
  leftLineSptite = (System_String_o *)this->fields.rightLineSptite;
  if ( !leftLineSptite )
    goto LABEL_40;
  leftLineSptite = (System_String_o *)UnityEngine_Component__get_transform(
                                        (UnityEngine_Component_o *)leftLineSptite,
                                        0LL);
  if ( !this->fields.titleLabel )
    goto LABEL_40;
  v45 = (UnityEngine_Transform_o *)leftLineSptite;
  leftLineSptite = (System_String_o *)UnityEngine_Component__get_transform(
                                        (UnityEngine_Component_o *)this->fields.titleLabel,
                                        0LL);
  if ( !leftLineSptite )
    goto LABEL_40;
  *(UnityEngine_Vector3_o *)&v46 = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)leftLineSptite,
                                     0LL);
  v49 = this->fields.titleLabel;
  if ( !v49 )
    goto LABEL_40;
  if ( !v45 )
    goto LABEL_40;
  v51.fields.y = v47 + 0.0;
  v51.fields.z = v48 + 0.0;
  v51.fields.x = v46
               + (float)(ServantEquipEffectFilterContainer_TypeInfo->static_fields->TITLE_LINE_SPRITE_SPACE
                       + v49->fields.mWidth / 2);
  UnityEngine_Transform__set_localPosition(v45, v51, 0LL);
  leftLineSptite = (System_String_o *)this->fields.rightLineSptite;
  if ( !leftLineSptite )
    goto LABEL_40;
  UIWidget__set_width((UIWidget_o *)leftLineSptite, v44, 0LL);
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
    sub_B5D69C(0LL, v3);
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
    sub_B5D69C(0LL, v7);
  v8.fields.y = y;
  v8.fields.z = z;
  v8.fields.x = x;
  UnityEngine_Transform__set_localPosition(transform, v8, 0LL);
}


void __fastcall ServantEquipEffectFilterContainer___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantEquipEffectFilterContainer___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D52 & 1) == 0 )
  {
    sub_B5D5C4(&ServantEquipEffectFilterContainer___c_TypeInfo, v1, v2, v3);
    byte_42E5D52 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantEquipEffectFilterContainer___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantEquipEffectFilterContainer___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantEquipEffectFilterContainer___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, x);
  return x->fields.dispNo - y->fields.dispNo;
}