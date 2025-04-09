void __fastcall ServantEquipEffectFilterContainer___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49B634B & 1) == 0 )
  {
    sub_1B4CF90(&ServantEquipEffectFilterContainer_TypeInfo, v1);
    byte_49B634B = 1;
  }
  *ServantEquipEffectFilterContainer_TypeInfo->static_fields = (struct ServantEquipEffectFilterContainer_StaticFields)0x2860000000FLL;
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
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49B634A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__, v5);
    byte_49B634A = 1;
  }
  memset(&v9, 0, sizeof(v9));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B4D1EC(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1B4D1EC(0LL, v7);
    ServantEquipEffectFilterItem__SetSelectState((ServantEquipEffectFilterItem_o *)v9.fields._current, 0, v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
}


void __fastcall ServantEquipEffectFilterContainer__ForceSelectAll(
        ServantEquipEffectFilterContainer_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *itemList; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49B6349 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__, v5);
    byte_49B6349 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B4D1EC(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1B4D1EC(0LL, v7);
    ServantEquipEffectFilterItem__SetSelectState((ServantEquipEffectFilterItem_o *)v9.fields._current, 1, v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
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
  float z; // s8
  float y; // s9
  float x; // s10
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x3
  ListViewSort_o *v18; // x2
  const MethodInfo *v19; // x4
  __int64 v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x1
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.sort = sort;
  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)sort, groupType, (const MethodInfo *)sort);
  v24.fields.x = x;
  v24.fields.y = y;
  v24.fields.z = z;
  ServantEquipEffectFilterContainer__set_Position(this, v24, v16);
  ServantEquipEffectFilterContainer__SetupHeader(this, groupType, categoryFlag, v17);
  ServantEquipEffectFilterContainer__RefreshItems(this, entities, v18, onclickEvent, v19);
  if ( !entities )
    sub_1B4D1EC(v20, v21);
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
  ServantEquipEffectFilterContainer___c_c *v16; // x0
  System_Comparison_T__o *_9__18_0; // x22
  Il2CppObject *v18; // x23
  struct ServantEquipEffectFilterContainer___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_object__o *v22; // x23
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o **p_itemList; // x22
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  UnityEngine_Component_o *transform; // x0
  __int64 v27; // x1
  signed int max_length; // w8
  unsigned int v29; // w26
  FunctionCategoryEntity_o *v30; // x24
  Il2CppObject *itemPrefab; // x23
  UnityEngine_Component_o *v32; // x23
  UnityEngine_Transform_o *v33; // x25
  ListViewSort_o *v34; // x25
  bool SvtEquipEffectFilter; // w0
  const MethodInfo *v36; // x5
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x8
  _QWORD *v40; // x9
  __int64 klass_low; // x10
  __int64 v42; // x8

  if ( (byte_49B6344 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_Sort_FunctionCategoryEntity___, entities);
    sub_1B4CF90(&System_Comparison_FunctionCategoryEntity__TypeInfo, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__Add__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem___ctor__, v10);
    sub_1B4CF90(&System_Collections_Generic_List_ServantEquipEffectFilterItem__TypeInfo, v11);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterItem___, v12);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v13);
    sub_1B4CF90(&Method_ServantEquipEffectFilterContainer___c__RefreshItems_b__18_0__, v14);
    sub_1B4CF90(&ServantEquipEffectFilterContainer___c_TypeInfo, v15);
    byte_49B6344 = 1;
  }
  v16 = ServantEquipEffectFilterContainer___c_TypeInfo;
  if ( !ServantEquipEffectFilterContainer___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEquipEffectFilterContainer___c_TypeInfo);
    v16 = ServantEquipEffectFilterContainer___c_TypeInfo;
  }
  _9__18_0 = (System_Comparison_T__o *)v16->static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = ServantEquipEffectFilterContainer___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__18_0 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_FunctionCategoryEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__18_0,
      v18,
      Method_ServantEquipEffectFilterContainer___c__RefreshItems_b__18_0__,
      0LL);
    static_fields = ServantEquipEffectFilterContainer___c_TypeInfo->static_fields;
    static_fields->__9__18_0 = (struct System_Comparison_FunctionCategoryEntity__o *)_9__18_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v20, v21);
  }
  System_Array__Sort_object__49088784(
    (System_Object_array *)entities,
    _9__18_0,
    (const MethodInfo_2ED0910 *)Method_System_Array_Sort_FunctionCategoryEntity___);
  v22 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ServantEquipEffectFilterItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *)v22;
  p_itemList = &this->fields.itemList;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.itemList, (int32_t)v22, v24, v25);
  if ( !entities )
    goto LABEL_30;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      if ( v29 >= max_length )
        sub_1B4D1F4(transform, v27);
      v30 = entities->m_Items[v29];
      itemPrefab = (Il2CppObject *)this->fields.itemPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                               itemPrefab,
                                               (const MethodInfo_2F87DCC *)Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterItem___);
      if ( !transform )
        break;
      v32 = transform;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !this->fields.grid )
        break;
      v33 = (UnityEngine_Transform_o *)transform;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)this->fields.grid,
                                               0LL);
      if ( !v33 )
        break;
      UnityEngine_Transform__SetParent_68825864(v33, (UnityEngine_Transform_o *)transform, 0, 0LL);
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v32, 0LL);
      if ( !transform )
        break;
      UnityEngine_Transform__SetAsLastSibling((UnityEngine_Transform_o *)transform, 0LL);
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v32, 0LL);
      if ( !transform )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
      if ( !v30 )
        break;
      v34 = this->fields.sort;
      if ( !v34 )
        break;
      SvtEquipEffectFilter = ListViewSort__GetSvtEquipEffectFilter(this->fields.sort, v30->fields.id, 0LL);
      ServantEquipEffectFilterItem__Init(
        (ServantEquipEffectFilterItem_o *)v32,
        v30,
        v34,
        SvtEquipEffectFilter,
        onclickEvent,
        v36);
      transform = (UnityEngine_Component_o *)*p_itemList;
      if ( !*p_itemList )
        break;
      v39 = *(_QWORD *)&transform->fields.m_CachedPtr;
      v40 = Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__Add__;
      ++HIDWORD(transform[1].klass);
      if ( !v39 )
        break;
      klass_low = SLODWORD(transform[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(v39 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)transform,
          (Il2CppObject *)v32,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = v39 + 8 * klass_low;
        LODWORD(transform[1].klass) = klass_low + 1;
        *(_QWORD *)(v42 + 32) = v32;
        sub_1B4CF34((CGThumbnailListItem_o *)(v42 + 32), (int32_t)v32, v37, v38);
      }
      max_length = entities->max_length;
      if ( (int)++v29 >= max_length )
        goto LABEL_28;
    }
LABEL_30:
    sub_1B4D1EC(transform, v27);
  }
LABEL_28:
  transform = (UnityEngine_Component_o *)this->fields.grid;
  if ( !transform )
    goto LABEL_30;
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
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49B6348 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__, v5);
    byte_49B6348 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B4D1EC(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1B4D1EC(0LL, v7);
    ServantEquipEffectFilterItem__RefreshSelectState((ServantEquipEffectFilterItem_o *)v8.fields._current, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
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
  int32_t maxPerLine; // w8
  int v8; // w21
  Il2CppObject *Component_object; // x20
  struct UIGrid_o *v10; // x8
  float v11; // s0
  int v12; // w9
  const MethodInfo *v13; // x1
  float v14; // s0
  float v15; // s2
  float v16; // s1
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_49B6345 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&displayCount);
    this = (ServantEquipEffectFilterContainer_o *)sub_1B4CF90(&UnityEngine_Object_TypeInfo, v5);
    byte_49B6345 = 1;
  }
  grid = v4->fields.grid;
  if ( !grid )
    goto LABEL_17;
  maxPerLine = grid->fields.maxPerLine;
  if ( displayCount % maxPerLine )
    v8 = displayCount / maxPerLine + 1;
  else
    v8 = displayCount / maxPerLine;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)v4,
                       (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantEquipEffectFilterContainer_o *)UnityEngine_Object__op_Inequality(
                                                  (UnityEngine_Object_o *)Component_object,
                                                  0LL,
                                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    *(UnityEngine_Vector3_o *)&v14 = ServantEquipEffectFilterContainer__get_Position(
                                       v4,
                                       *(const MethodInfo **)&displayCount);
    goto LABEL_16;
  }
  if ( !Component_object || (v10 = v4->fields.grid) == 0LL )
LABEL_17:
    sub_1B4D1EC(this, *(_QWORD *)&displayCount);
  v11 = v10->fields.cellHeight * (float)v8;
  v12 = (int)v11;
  if ( v11 == INFINITY )
    v12 = 0x80000000;
  UIWidget__set_height((UIWidget_o *)Component_object, v12 + HIDWORD(Component_object[10].monitor), 0LL);
  Position = ServantEquipEffectFilterContainer__get_Position(v4, v13);
  v14 = Position.fields.x + 0.0;
  v15 = Position.fields.z + 0.0;
  v16 = Position.fields.y + (float)-HIDWORD(Component_object[10].monitor);
LABEL_16:
  v4->fields._BottomPosition_k__BackingField.fields.x = v14;
  v4->fields._BottomPosition_k__BackingField.fields.y = v16;
  v4->fields._BottomPosition_k__BackingField.fields.z = v15;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterContainer__SetCollider(
        ServantEquipEffectFilterContainer_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int *Component_object; // x19
  Il2CppObject *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  int v9; // s0
  int v11; // s2
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49B6346 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_BoxCollider___, method);
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v4);
    byte_49B6346 = 1;
  }
  Component_object = (int *)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v6 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL);
    if ( (v7 & 1) != 0 )
    {
      if ( !Component_object
        || (v7 = (*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)Component_object + 664LL))(
                   Component_object,
                   *(_QWORD *)(*(_QWORD *)Component_object + 672LL)),
            !v6) )
      {
        sub_1B4D1EC(v7, v8);
      }
      v11 = 0;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v6, *(UnityEngine_Vector3_o *)&v9, 0LL);
      v12.fields.x = 0.0;
      v12.fields.y = (float)Component_object[43] * -0.5;
      v12.fields.z = 0.0;
      UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)v6, v12, 0LL);
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
  __int64 v11; // x1
  UICommonButton_o *monitor; // x0
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49B6347 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__, isEnable);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__, v7);
    byte_49B6347 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1B4D1EC(0LL, isEnable);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  for ( i = isEnable; ; UICommonButton__SetButtonEnableWithCollider(monitor, i, 0LL) )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__);
    if ( !v10 )
      break;
    if ( !v13.fields._current )
      sub_1B4D1EC(v10, v11);
    monitor = (UICommonButton_o *)v13.fields._current[2].monitor;
    if ( !monitor )
      sub_1B4D1EC(0LL, v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterContainer__SetupHeader(
        ServantEquipEffectFilterContainer_o *this,
        int32_t groupType,
        int32_t categoryFlag,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UILabel_o *titleLabel; // x21
  System_String_o *v13; // x0
  __int64 *v14; // x8
  System_String_o *v15; // x20
  System_String_o *leftLineSptite; // x0
  struct UILabel_o *v17; // x8
  _DWORD *fields; // x9
  int v19; // w10
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
  System_Enum_o v35; // [xsp+8h] [xbp-48h] BYREF
  int32_t v36; // [xsp+18h] [xbp-38h]
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49B6343 & 1) == 0 )
  {
    sub_1B4CF90(&FunctionCategoryEntity_GroupType_TypeInfo, *(_QWORD *)&groupType);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v7);
    sub_1B4CF90(&ServantEquipEffectFilterContainer_TypeInfo, v8);
    sub_1B4CF90(&StringLiteral_3620/*"COMMAND_CODE_EFFECT_FILTER_GROUP_"*/, v9);
    sub_1B4CF90(&StringLiteral_11336/*"SERVANT_EFFECT_FILTER_GROUP_"*/, v10);
    sub_1B4CF90(&StringLiteral_11341/*"SERVANT_EQUIP_EFFECT_FILTER_GROUP_"*/, v11);
    byte_49B6343 = 1;
  }
  switch ( categoryFlag )
  {
    case 4:
      titleLabel = this->fields.titleLabel;
      v36 = groupType;
      v35.klass = (System_Enum_c *)FunctionCategoryEntity_GroupType_TypeInfo;
      v35.monitor = (void *)-1LL;
      v13 = System_Enum__ToString(&v35, 0LL);
      v14 = &StringLiteral_11336/*"SERVANT_EFFECT_FILTER_GROUP_"*/;
      break;
    case 2:
      titleLabel = this->fields.titleLabel;
      v36 = groupType;
      v35.klass = (System_Enum_c *)FunctionCategoryEntity_GroupType_TypeInfo;
      v35.monitor = (void *)-1LL;
      v13 = System_Enum__ToString(&v35, 0LL);
      v14 = &StringLiteral_3620/*"COMMAND_CODE_EFFECT_FILTER_GROUP_"*/;
      break;
    case 1:
      titleLabel = this->fields.titleLabel;
      v36 = groupType;
      v35.klass = (System_Enum_c *)FunctionCategoryEntity_GroupType_TypeInfo;
      v35.monitor = (void *)-1LL;
      v13 = System_Enum__ToString(&v35, 0LL);
      v14 = &StringLiteral_11341/*"SERVANT_EQUIP_EFFECT_FILTER_GROUP_"*/;
      break;
    default:
      goto LABEL_13;
  }
  v15 = System_String__Concat_61093468((System_String_o *)*v14, v13, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  leftLineSptite = LocalizationManager__Get(v15, 0LL);
  if ( !titleLabel )
LABEL_35:
    sub_1B4D1EC(leftLineSptite, *(_QWORD *)&groupType);
  UILabel__set_text(titleLabel, leftLineSptite, 0LL);
LABEL_13:
  leftLineSptite = (System_String_o *)ServantEquipEffectFilterContainer_TypeInfo;
  if ( !ServantEquipEffectFilterContainer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEquipEffectFilterContainer_TypeInfo);
    leftLineSptite = (System_String_o *)ServantEquipEffectFilterContainer_TypeInfo;
  }
  v17 = this->fields.titleLabel;
  if ( !v17 )
    goto LABEL_35;
  fields = (_DWORD *)leftLineSptite[7].fields;
  leftLineSptite = (System_String_o *)this->fields.leftLineSptite;
  v19 = fields[1];
  v20 = v17->fields.mWidth + 2 * *fields;
  v21 = v19 >= 0 ? fields[1] : v19 + 1;
  v22 = v20 >= 0 ? v20 : v20 + 1;
  if ( !leftLineSptite )
    goto LABEL_35;
  leftLineSptite = (System_String_o *)UnityEngine_Component__get_transform(
                                        (UnityEngine_Component_o *)leftLineSptite,
                                        0LL);
  if ( !this->fields.titleLabel )
    goto LABEL_35;
  v23 = (UnityEngine_Transform_o *)leftLineSptite;
  leftLineSptite = (System_String_o *)UnityEngine_Component__get_transform(
                                        (UnityEngine_Component_o *)this->fields.titleLabel,
                                        0LL);
  if ( !leftLineSptite )
    goto LABEL_35;
  *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)leftLineSptite,
                                     0LL);
  v27 = this->fields.titleLabel;
  if ( !v27 )
    goto LABEL_35;
  if ( !v23 )
    goto LABEL_35;
  v28 = v24
      - (float)(ServantEquipEffectFilterContainer_TypeInfo->static_fields->TITLE_LINE_SPRITE_SPACE
              + v27->fields.mWidth / 2);
  UnityEngine_Transform__set_localPosition(v23, *(UnityEngine_Vector3_o *)(&v25 - 1), 0LL);
  leftLineSptite = (System_String_o *)this->fields.leftLineSptite;
  if ( !leftLineSptite )
    goto LABEL_35;
  v29 = (v21 >> 1) - (v22 >> 1);
  UIWidget__set_width((UIWidget_o *)leftLineSptite, v29, 0LL);
  leftLineSptite = (System_String_o *)this->fields.rightLineSptite;
  if ( !leftLineSptite )
    goto LABEL_35;
  leftLineSptite = (System_String_o *)UnityEngine_Component__get_transform(
                                        (UnityEngine_Component_o *)leftLineSptite,
                                        0LL);
  if ( !this->fields.titleLabel )
    goto LABEL_35;
  v30 = (UnityEngine_Transform_o *)leftLineSptite;
  leftLineSptite = (System_String_o *)UnityEngine_Component__get_transform(
                                        (UnityEngine_Component_o *)this->fields.titleLabel,
                                        0LL);
  if ( !leftLineSptite )
    goto LABEL_35;
  *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)leftLineSptite,
                                     0LL);
  v34 = this->fields.titleLabel;
  if ( !v34 )
    goto LABEL_35;
  if ( !v30 )
    goto LABEL_35;
  v37.fields.z = v33 + 0.0;
  v37.fields.y = v32 + 0.0;
  v37.fields.x = v31
               + (float)(ServantEquipEffectFilterContainer_TypeInfo->static_fields->TITLE_LINE_SPRITE_SPACE
                       + v34->fields.mWidth / 2);
  UnityEngine_Transform__set_localPosition(v30, v37, 0LL);
  leftLineSptite = (System_String_o *)this->fields.rightLineSptite;
  if ( !leftLineSptite )
    goto LABEL_35;
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
    sub_1B4D1EC(0LL, v3);
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
    sub_1B4D1EC(0LL, v7);
  v8.fields.y = y;
  v8.fields.z = z;
  v8.fields.x = x;
  UnityEngine_Transform__set_localPosition(transform, v8, 0LL);
}


void __fastcall ServantEquipEffectFilterContainer___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49B634C & 1) == 0 )
  {
    sub_1B4CF90(&ServantEquipEffectFilterContainer___c_TypeInfo, v1);
    byte_49B634C = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(ServantEquipEffectFilterContainer___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantEquipEffectFilterContainer___c_TypeInfo->static_fields->__9 = (struct ServantEquipEffectFilterContainer___c_o *)v2;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)ServantEquipEffectFilterContainer___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B4D1EC(this, x);
  return x->fields.dispNo - y->fields.dispNo;
}