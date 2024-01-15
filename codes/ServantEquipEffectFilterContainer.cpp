void __fastcall ServantEquipEffectFilterContainer___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD062 & 1) == 0 )
  {
    sub_B16FFC(&ServantEquipEffectFilterContainer_TypeInfo, v1);
    byte_40FD062 = 1;
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

  if ( (byte_40FD061 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__, v5);
    byte_40FD061 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B170D4();
    ServantEquipEffectFilterItem__SetSelectState((ServantEquipEffectFilterItem_o *)v8.fields.current, 0, v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
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

  if ( (byte_40FD060 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__, v5);
    byte_40FD060 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B170D4();
    ServantEquipEffectFilterItem__SetSelectState((ServantEquipEffectFilterItem_o *)v8.fields.current, 1, v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
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
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x1
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.sort = sort;
  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)sort,
    *(System_String_array ***)&groupType,
    (System_String_array **)sort,
    (System_Boolean_array **)onclickEvent,
    *(System_Int32_array ***)&categoryFlag,
    (System_Int32_array *)method,
    v8);
  v23.fields.x = x;
  v23.fields.y = y;
  v23.fields.z = z;
  ServantEquipEffectFilterContainer__set_Position(this, v23, v17);
  ServantEquipEffectFilterContainer__SetupHeader(this, groupType, categoryFlag, v18);
  ServantEquipEffectFilterContainer__RefreshItems(this, entities, v19, onclickEvent, v20);
  if ( !entities )
    sub_B170D4();
  ServantEquipEffectFilterContainer__SetBottomPosition(this, entities->max_length, v21);
  ServantEquipEffectFilterContainer__SetCollider(this, v22);
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
  __int64 v30; // x3
  __int64 v31; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_itemList; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  signed int max_length; // w8
  unsigned int v44; // w26
  UnityEngine_UI_Dropdown_DropdownItem_o *itemPrefab; // x24
  FunctionCategoryEntity_o *v46; // x23
  UnityEngine_Component_o *v47; // x0
  UnityEngine_Component_o *v48; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v50; // x25
  UnityEngine_Transform_o *v51; // x0
  UnityEngine_Transform_o *v52; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  ListViewSort_o *v54; // x25
  bool SvtEquipEffectFilter; // w0
  const MethodInfo *v56; // x5
  struct UIGrid_o *grid; // x0

  if ( (byte_40FD05B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Sort_FunctionCategoryEntity___, entities);
    sub_B16FFC(&Method_System_Comparison_FunctionCategoryEntity___ctor__, v8);
    sub_B16FFC(&System_Comparison_FunctionCategoryEntity__TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_ServantEquipEffectFilterItem__TypeInfo, v12);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterItem___, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&Method_ServantEquipEffectFilterContainer___c__RefreshItems_b__18_0__, v15);
    sub_B16FFC(&ServantEquipEffectFilterContainer___c_TypeInfo, v16);
    byte_40FD05B = 1;
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
    _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_FunctionCategoryEntity__TypeInfo,
                                                                           entities,
                                                                           sort,
                                                                           onclickEvent,
                                                                           method);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__18_0,
      v20,
      Method_ServantEquipEffectFilterContainer___c__RefreshItems_b__18_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_FunctionCategoryEntity___ctor__);
    v21 = ServantEquipEffectFilterContainer___c_TypeInfo->static_fields;
    v21->__9__18_0 = (struct System_Comparison_FunctionCategoryEntity__o *)_9__18_0;
    sub_B16F98(
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
    (const MethodInfo_2506BD4 *)Method_System_Array_Sort_FunctionCategoryEntity___);
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantEquipEffectFilterItem__TypeInfo,
                                                                                                  v28,
                                                                                                  v29,
                                                                                                  v30,
                                                                                                  v31);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *)v32;
  p_itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.itemList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemList,
    (System_Int32_array **)v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  if ( !entities )
    goto LABEL_29;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v44 = 0;
    while ( 1 )
    {
      if ( v44 >= max_length )
      {
        sub_B17100(v40, v41, v42);
        sub_B170A0();
      }
      itemPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.itemPrefab;
      v46 = entities->m_Items[v44];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v47 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         itemPrefab,
                                         (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterItem___);
      if ( !v47 )
        break;
      v48 = v47;
      transform = UnityEngine_Component__get_transform(v47, 0LL);
      if ( !this->fields.grid )
        break;
      v50 = transform;
      v51 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.grid, 0LL);
      if ( !v50 )
        break;
      UnityEngine_Transform__SetParent_34930292(v50, v51, 0, 0LL);
      v52 = UnityEngine_Component__get_transform(v48, 0LL);
      if ( !v52 )
        break;
      UnityEngine_Transform__SetAsLastSibling(v52, 0LL);
      gameObject = UnityEngine_Component__get_gameObject(v48, 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      if ( !v46 )
        break;
      v54 = this->fields.sort;
      if ( !v54 )
        break;
      SvtEquipEffectFilter = ListViewSort__GetSvtEquipEffectFilter(this->fields.sort, v46->fields.id, 0LL);
      ServantEquipEffectFilterItem__Init(
        (ServantEquipEffectFilterItem_o *)v48,
        v46,
        v54,
        SvtEquipEffectFilter,
        onclickEvent,
        v56);
      if ( !*p_itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        *p_itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__Add__);
      max_length = entities->max_length;
      if ( (int)++v44 >= max_length )
        goto LABEL_27;
    }
LABEL_29:
    sub_B170D4();
  }
LABEL_27:
  grid = this->fields.grid;
  if ( !grid )
    goto LABEL_29;
  ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))grid->klass->vtable._8_Reposition.method)(
    grid,
    grid->klass->vtable._9_ResetPosition.methodPtr);
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

  if ( (byte_40FD05F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__, v5);
    byte_40FD05F = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B170D4();
    ServantEquipEffectFilterItem__RefreshSelectState((ServantEquipEffectFilterItem_o *)v8.fields.current, v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterContainer__SetBottomPosition(
        ServantEquipEffectFilterContainer_o *this,
        int32_t displayCount,
        const MethodInfo *method)
{
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

  if ( (byte_40FD05C & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&displayCount);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FD05C = 1;
  }
  grid = this->fields.grid;
  if ( !grid )
    goto LABEL_19;
  cellWidth = grid->fields.cellWidth;
  if ( displayCount % SLODWORD(cellWidth) )
    v8 = displayCount / SLODWORD(cellWidth) + 1;
  else
    v8 = displayCount / SLODWORD(cellWidth);
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
  {
    *(UnityEngine_Vector3_o *)&v15 = ServantEquipEffectFilterContainer__get_Position(this, v10);
    goto LABEL_18;
  }
  if ( !Component_WebViewObject || (v11 = this->fields.grid) == 0LL )
LABEL_19:
    sub_B170D4();
  v12 = *(float *)&v11->fields.animateSmoothly * (float)v8;
  if ( v12 == INFINITY )
    v13 = -v12;
  else
    v13 = v12;
  UIWidget__set_height(
    (UIWidget_o *)Component_WebViewObject,
    HIDWORD(Component_WebViewObject[1].fields.onStarted) + (int)v13,
    0LL);
  Position = ServantEquipEffectFilterContainer__get_Position(this, v14);
  v15 = Position.fields.x + 0.0;
  v16 = Position.fields.z + 0.0;
  v17 = Position.fields.y + (float)-HIDWORD(Component_WebViewObject[1].fields.onStarted);
LABEL_18:
  this->fields._BottomPosition_k__BackingField.fields.x = v15;
  this->fields._BottomPosition_k__BackingField.fields.y = v17;
  this->fields._BottomPosition_k__BackingField.fields.z = v16;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterContainer__SetCollider(
        ServantEquipEffectFilterContainer_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int *Component_WebViewObject; // x19
  UnityEngine_BoxCollider_o *v6; // x20
  int v7; // s0
  int v9; // s2
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FD05D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_BoxCollider___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FD05D = 1;
  }
  Component_WebViewObject = (int *)UnityEngine_Component__GetComponent_WebViewObject_(
                                     (UnityEngine_Component_o *)this,
                                     (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v6 = (UnityEngine_BoxCollider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                      (UnityEngine_Component_o *)this,
                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL) )
    {
      if ( !Component_WebViewObject
        || ((*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)Component_WebViewObject + 664LL))(
              Component_WebViewObject,
              *(_QWORD *)(*(_QWORD *)Component_WebViewObject + 672LL)),
            !v6) )
      {
        sub_B170D4();
      }
      v9 = 0;
      UnityEngine_BoxCollider__set_size(v6, *(UnityEngine_Vector3_o *)&v7, 0LL);
      v10.fields.x = 0.0;
      v10.fields.y = (float)Component_WebViewObject[41] * -0.5;
      v10.fields.z = 0.0;
      UnityEngine_BoxCollider__set_center(v6, v10, 0LL);
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
  bool v9; // w19
  Il2CppClass *klass; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FD05E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__, isEnable);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__, v7);
    byte_40FD05E = 1;
  }
  memset(&v11, 0, sizeof(v11));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  v9 = isEnable;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__) )
  {
    if ( !v11.fields.current )
      sub_B170D4();
    klass = v11.fields.current[2].klass;
    if ( !klass )
      sub_B170D4();
    UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)klass, v9, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
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
  __int64 v12; // x0
  __int64 v13; // x21
  System_String_o *v14; // x22
  int32_t v15; // w8
  __int64 *v16; // x9
  __int64 v17; // x0
  __int64 v18; // x21
  __int64 v19; // x0
  __int64 v20; // x21
  System_String_o *v21; // x0
  System_String_o *v22; // x21
  System_String_o *v23; // x0
  ServantEquipEffectFilterContainer_c *v24; // x0
  struct UILabel_o *v25; // x8
  struct ServantEquipEffectFilterContainer_StaticFields *static_fields; // x9
  UnityEngine_Component_o *leftLineSptite; // x0
  int32_t TITLE_LINE_SPRITE_SPACE; // w10
  int TITLE_WIDTH; // w9
  int v30; // w8
  int v31; // w21
  int v32; // w23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v34; // x20
  UnityEngine_Transform_o *v35; // x0
  float v36; // s0
  int v37; // s1
  struct UILabel_o *v39; // x8
  float v40; // s0
  UIWidget_o *v41; // x0
  int32_t v42; // w20
  UnityEngine_Component_o *rightLineSptite; // x0
  UnityEngine_Transform_o *v44; // x0
  UnityEngine_Transform_o *v45; // x21
  UnityEngine_Transform_o *v46; // x0
  float v47; // s0
  float v48; // s1
  float v49; // s2
  struct UILabel_o *v50; // x8
  UIWidget_o *v51; // x0
  int32_t v52; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4

  v52 = groupType;
  if ( (byte_40FD05A & 1) == 0 )
  {
    sub_B16FFC(&FunctionCategoryEntity_GroupType_TypeInfo, *(_QWORD *)&groupType);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&ServantEquipEffectFilterContainer_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_3217/*"COMMAND_CODE_EFFECT_FILTER_GROUP_"*/, v8);
    sub_B16FFC(&StringLiteral_11644/*"SERVANT_EFFECT_FILTER_GROUP_"*/, v9);
    sub_B16FFC(&StringLiteral_11649/*"SERVANT_EQUIP_EFFECT_FILTER_GROUP_"*/, v10);
    byte_40FD05A = 1;
  }
  switch ( categoryFlag )
  {
    case 4:
      titleLabel = this->fields.titleLabel;
      v17 = j_il2cpp_value_box_0(FunctionCategoryEntity_GroupType_TypeInfo, &v52);
      if ( !v17 )
        goto LABEL_40;
      v18 = v17;
      v14 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 360LL))(
                                 v17,
                                 *(_QWORD *)(*(_QWORD *)v17 + 368LL));
      v15 = *(_DWORD *)j_il2cpp_object_unbox_0(v18);
      v16 = &StringLiteral_11644/*"SERVANT_EFFECT_FILTER_GROUP_"*/;
      break;
    case 2:
      titleLabel = this->fields.titleLabel;
      v19 = j_il2cpp_value_box_0(FunctionCategoryEntity_GroupType_TypeInfo, &v52);
      if ( !v19 )
        goto LABEL_40;
      v20 = v19;
      v14 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 360LL))(
                                 v19,
                                 *(_QWORD *)(*(_QWORD *)v19 + 368LL));
      v15 = *(_DWORD *)j_il2cpp_object_unbox_0(v20);
      v16 = &StringLiteral_3217/*"COMMAND_CODE_EFFECT_FILTER_GROUP_"*/;
      break;
    case 1:
      titleLabel = this->fields.titleLabel;
      v12 = j_il2cpp_value_box_0(FunctionCategoryEntity_GroupType_TypeInfo, &v52);
      if ( !v12 )
        goto LABEL_40;
      v13 = v12;
      v14 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 360LL))(
                                 v12,
                                 *(_QWORD *)(*(_QWORD *)v12 + 368LL));
      v15 = *(_DWORD *)j_il2cpp_object_unbox_0(v13);
      v16 = &StringLiteral_11649/*"SERVANT_EQUIP_EFFECT_FILTER_GROUP_"*/;
      break;
    default:
      goto LABEL_17;
  }
  v21 = (System_String_o *)*v16;
  v52 = v15;
  v22 = System_String__Concat_43743732(v21, v14, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v23 = LocalizationManager__Get(v22, 0LL);
  if ( !titleLabel )
LABEL_40:
    sub_B170D4();
  UILabel__set_text(titleLabel, v23, 0LL);
LABEL_17:
  v24 = ServantEquipEffectFilterContainer_TypeInfo;
  if ( (BYTE3(ServantEquipEffectFilterContainer_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantEquipEffectFilterContainer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEquipEffectFilterContainer_TypeInfo);
    v24 = ServantEquipEffectFilterContainer_TypeInfo;
  }
  v25 = this->fields.titleLabel;
  if ( !v25 )
    goto LABEL_40;
  static_fields = v24->static_fields;
  leftLineSptite = (UnityEngine_Component_o *)this->fields.leftLineSptite;
  TITLE_LINE_SPRITE_SPACE = static_fields->TITLE_LINE_SPRITE_SPACE;
  TITLE_WIDTH = static_fields->TITLE_WIDTH;
  v30 = v25->fields.mWidth + 2 * TITLE_LINE_SPRITE_SPACE;
  v31 = TITLE_WIDTH >= 0 ? TITLE_WIDTH : TITLE_WIDTH + 1;
  v32 = v30 >= 0 ? v30 : v30 + 1;
  if ( !leftLineSptite )
    goto LABEL_40;
  transform = UnityEngine_Component__get_transform(leftLineSptite, 0LL);
  if ( !this->fields.titleLabel )
    goto LABEL_40;
  v34 = transform;
  v35 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.titleLabel, 0LL);
  if ( !v35 )
    goto LABEL_40;
  *(UnityEngine_Vector3_o *)&v36 = UnityEngine_Transform__get_localPosition(v35, 0LL);
  v39 = this->fields.titleLabel;
  if ( !v39 )
    goto LABEL_40;
  if ( !v34 )
    goto LABEL_40;
  v40 = v36
      - (float)(ServantEquipEffectFilterContainer_TypeInfo->static_fields->TITLE_LINE_SPRITE_SPACE
              + v39->fields.mWidth / 2);
  UnityEngine_Transform__set_localPosition(v34, *(UnityEngine_Vector3_o *)(&v37 - 1), 0LL);
  v41 = (UIWidget_o *)this->fields.leftLineSptite;
  if ( !v41 )
    goto LABEL_40;
  v42 = (v31 >> 1) - (v32 >> 1);
  UIWidget__set_width(v41, v42, 0LL);
  rightLineSptite = (UnityEngine_Component_o *)this->fields.rightLineSptite;
  if ( !rightLineSptite )
    goto LABEL_40;
  v44 = UnityEngine_Component__get_transform(rightLineSptite, 0LL);
  if ( !this->fields.titleLabel )
    goto LABEL_40;
  v45 = v44;
  v46 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.titleLabel, 0LL);
  if ( !v46 )
    goto LABEL_40;
  *(UnityEngine_Vector3_o *)&v47 = UnityEngine_Transform__get_localPosition(v46, 0LL);
  v50 = this->fields.titleLabel;
  if ( !v50 )
    goto LABEL_40;
  if ( !v45 )
    goto LABEL_40;
  v53.fields.y = v48 + 0.0;
  v53.fields.z = v49 + 0.0;
  v53.fields.x = v47
               + (float)(ServantEquipEffectFilterContainer_TypeInfo->static_fields->TITLE_LINE_SPRITE_SPACE
                       + v50->fields.mWidth / 2);
  UnityEngine_Transform__set_localPosition(v45, v53, 0LL);
  v51 = (UIWidget_o *)this->fields.rightLineSptite;
  if ( !v51 )
    goto LABEL_40;
  UIWidget__set_width(v51, v42, 0LL);
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
    sub_B170D4();
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
    sub_B170D4();
  v7.fields.y = y;
  v7.fields.z = z;
  v7.fields.x = x;
  UnityEngine_Transform__set_localPosition(transform, v7, 0LL);
}


void __fastcall ServantEquipEffectFilterContainer___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F7626 & 1) == 0 )
  {
    sub_B16FFC(&ServantEquipEffectFilterContainer___c_TypeInfo, v1);
    byte_40F7626 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ServantEquipEffectFilterContainer___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantEquipEffectFilterContainer___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return x->fields.dispNo - y->fields.dispNo;
}