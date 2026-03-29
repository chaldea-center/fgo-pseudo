void ServantEquipEffectFilterContainer___cctor(const MethodInfo *method)
{
  if ( (byte_4D2B8E2 & 1) == 0 )
  {
    sub_1C93AD4(&ServantEquipEffectFilterContainer_TypeInfo);
    byte_4D2B8E2 = 1;
  }
  *ServantEquipEffectFilterContainer_TypeInfo->static_fields = (struct ServantEquipEffectFilterContainer_StaticFields)0x2860000000FLL;
}


void ServantEquipEffectFilterContainer___ctor(ServantEquipEffectFilterContainer_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantEquipEffectFilterContainer__ForceDeselectAll(
        ServantEquipEffectFilterContainer_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *itemList; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2B8E1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
    byte_4D2B8E1 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C93D2C(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v6,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__) )
  {
    if ( !v6.fields._current )
      sub_1C93D2C(0, v4);
    ServantEquipEffectFilterItem__SetSelectState((ServantEquipEffectFilterItem_o *)v6.fields._current, 0, v5);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v6,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
}


void ServantEquipEffectFilterContainer__ForceSelectAll(
        ServantEquipEffectFilterContainer_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *itemList; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2B8E0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
    byte_4D2B8E0 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C93D2C(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v6,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__) )
  {
    if ( !v6.fields._current )
      sub_1C93D2C(0, v4);
    ServantEquipEffectFilterItem__SetSelectState((ServantEquipEffectFilterItem_o *)v6.fields._current, 1, v5);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v6,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
}


void ServantEquipEffectFilterContainer__Init(
        ServantEquipEffectFilterContainer_o *this,
        FunctionCategoryEntity_array *entities,
        int32_t groupType,
        ListViewSort_o *sort,
        UnityEngine_Vector3_o position,
        System_Action_o *onclickEvent,
        int32_t categoryFlag,
        const MethodInfo *method)
{
  System_String_o *v8; // x7
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
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.sort,
    (int32_t)sort,
    groupType,
    (int32_t)sort,
    (System_String_o *)onclickEvent,
    categoryFlag,
    (int64_t)method,
    v8);
  v25.fields.x = x;
  v25.fields.y = y;
  v25.fields.z = z;
  ServantEquipEffectFilterContainer__set_Position(this, v25, v17);
  ServantEquipEffectFilterContainer__SetupHeader(this, groupType, categoryFlag, v18);
  ServantEquipEffectFilterContainer__RefreshItems(this, entities, v19, onclickEvent, v20);
  if ( !entities )
    sub_1C93D2C(v21, v22);
  ServantEquipEffectFilterContainer__SetBottomPosition(this, entities->max_length, v23);
  ServantEquipEffectFilterContainer__SetCollider(this, v24);
}


void ServantEquipEffectFilterContainer__RefreshItems(
        ServantEquipEffectFilterContainer_o *this,
        FunctionCategoryEntity_array *entities,
        ListViewSort_o *sort,
        System_Action_o *onclickEvent,
        const MethodInfo *method)
{
  ServantEquipEffectFilterContainer___c_c *v8; // x0
  System_Comparison_T__o *_9__18_0; // x22
  Il2CppObject *v10; // x23
  struct ServantEquipEffectFilterContainer___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_List_object__o *v18; // x23
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o **p_itemList; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  UnityEngine_Component_o *transform; // x0
  __int64 v27; // x1
  int max_length; // w8
  unsigned int v29; // w26
  FunctionCategoryEntity_o *v30; // x24
  Il2CppObject *itemPrefab; // x23
  UnityEngine_Component_o *v32; // x23
  UnityEngine_Transform_o *v33; // x25
  ListViewSort_o *v34; // x25
  bool SvtEquipEffectFilter; // w0
  const MethodInfo *v36; // x5
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v44; // x9
  __int64 klass_low; // x10
  intptr_t v46; // x8

  if ( (byte_4D2B8DA & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Sort_FunctionCategoryEntity___);
    sub_1C93AD4(&System_Comparison_FunctionCategoryEntity__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ServantEquipEffectFilterItem__TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterItem___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_ServantEquipEffectFilterContainer___c__RefreshItems_b__18_0__);
    sub_1C93AD4(&ServantEquipEffectFilterContainer___c_TypeInfo);
    byte_4D2B8DA = 1;
  }
  v8 = ServantEquipEffectFilterContainer___c_TypeInfo;
  if ( !ServantEquipEffectFilterContainer___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEquipEffectFilterContainer___c_TypeInfo);
    v8 = ServantEquipEffectFilterContainer___c_TypeInfo;
  }
  _9__18_0 = (System_Comparison_T__o *)v8->static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = ServantEquipEffectFilterContainer___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__18_0 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_FunctionCategoryEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__18_0,
      v10,
      Method_ServantEquipEffectFilterContainer___c__RefreshItems_b__18_0__,
      0);
    static_fields = ServantEquipEffectFilterContainer___c_TypeInfo->static_fields;
    static_fields->__9__18_0 = (struct System_Comparison_FunctionCategoryEntity__o *)_9__18_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__18_0,
      (int32_t)_9__18_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  System_Array__Sort_object__51842132(
    (System_Object_array *)entities,
    _9__18_0,
    (const MethodInfo_3170C54 *)Method_System_Array_Sort_FunctionCategoryEntity___);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantEquipEffectFilterItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *)v18;
  p_itemList = &this->fields.itemList;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.itemList, (int32_t)v18, v20, v21, v22, v23, v24, v25);
  if ( !entities )
    goto LABEL_30;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      if ( v29 >= max_length )
        sub_1C93D34(transform);
      v30 = entities->m_Items[v29];
      itemPrefab = (Il2CppObject *)this->fields.itemPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                               itemPrefab,
                                               (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterItem___);
      if ( !transform )
        break;
      v32 = transform;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
      if ( !this->fields.grid )
        break;
      v33 = (UnityEngine_Transform_o *)transform;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)this->fields.grid,
                                               0);
      if ( !v33 )
        break;
      UnityEngine_Transform__SetParent_72143348(v33, (UnityEngine_Transform_o *)transform, 0, 0);
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v32, 0);
      if ( !transform )
        break;
      UnityEngine_Transform__SetAsLastSibling((UnityEngine_Transform_o *)transform, 0);
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v32, 0);
      if ( !transform )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
      if ( !v30 )
        break;
      v34 = this->fields.sort;
      if ( !v34 )
        break;
      SvtEquipEffectFilter = ListViewSort__GetSvtEquipEffectFilter(this->fields.sort, v30->fields.id, 0);
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
      m_CachedPtr = transform->fields.m_CachedPtr;
      v44 = Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__Add__;
      ++HIDWORD(transform[1].klass);
      if ( !m_CachedPtr )
        break;
      klass_low = SLODWORD(transform[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)transform,
          (Il2CppObject *)v32,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = m_CachedPtr + 8 * klass_low;
        LODWORD(transform[1].klass) = klass_low + 1;
        *(_QWORD *)(v46 + 32) = v32;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v46 + 32), (int32_t)v32, v37, v38, v39, v40, v41, v42);
      }
      max_length = entities->max_length;
      if ( (int)++v29 >= max_length )
        goto LABEL_28;
    }
LABEL_30:
    sub_1C93D2C(transform, v27);
  }
LABEL_28:
  transform = (UnityEngine_Component_o *)this->fields.grid;
  if ( !transform )
    goto LABEL_30;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))transform->klass[1]._1.element_class)(
    transform,
    transform->klass[1]._1.castClass);
}


void ServantEquipEffectFilterContainer__RefreshSelectState(
        ServantEquipEffectFilterContainer_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *itemList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2B8DF & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
    byte_4D2B8DF = 1;
  }
  memset(&v5, 0, sizeof(v5));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C93D2C(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C93D2C(0, v4);
    ServantEquipEffectFilterItem__RefreshSelectState((ServantEquipEffectFilterItem_o *)v5.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void ServantEquipEffectFilterContainer__SetBottomPosition(
        ServantEquipEffectFilterContainer_o *this,
        int32_t displayCount,
        const MethodInfo *method)
{
  ServantEquipEffectFilterContainer_o *v4; // x19
  struct UIGrid_o *grid; // x8
  int32_t maxPerLine; // w8
  int v7; // w21
  Il2CppObject *Component_object; // x20
  struct UIGrid_o *v9; // x8
  float v10; // s0
  int v11; // w9
  const MethodInfo *v12; // x1
  float x; // s0
  float z; // s2
  float y; // s1
  UnityEngine_Vector3_o v16; // 0:kr00_12.12
  UnityEngine_Vector3_o Position; // 0:kr14_12.12

  v4 = this;
  if ( (byte_4D2B8DB & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    this = (ServantEquipEffectFilterContainer_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2B8DB = 1;
  }
  grid = v4->fields.grid;
  if ( !grid )
    goto LABEL_17;
  maxPerLine = grid->fields.maxPerLine;
  if ( displayCount % maxPerLine )
    v7 = displayCount / maxPerLine + 1;
  else
    v7 = displayCount / maxPerLine;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)v4,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantEquipEffectFilterContainer_o *)UnityEngine_Object__op_Inequality(
                                                  (UnityEngine_Object_o *)Component_object,
                                                  0,
                                                  0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    Position = ServantEquipEffectFilterContainer__get_Position(v4, *(const MethodInfo **)&displayCount);
    x = Position.fields.x;
    y = Position.fields.y;
    z = Position.fields.z;
    goto LABEL_16;
  }
  if ( !Component_object || (v9 = v4->fields.grid) == 0 )
LABEL_17:
    sub_1C93D2C(this, *(_QWORD *)&displayCount);
  v10 = v9->fields.cellHeight * (float)v7;
  v11 = (int)v10;
  if ( v10 == INFINITY )
    v11 = 0x80000000;
  UIWidget__set_height((UIWidget_o *)Component_object, v11 + HIDWORD(Component_object[10].monitor), 0);
  v16 = ServantEquipEffectFilterContainer__get_Position(v4, v12);
  x = v16.fields.x + 0.0;
  z = v16.fields.z + 0.0;
  y = v16.fields.y + (float)-HIDWORD(Component_object[10].monitor);
LABEL_16:
  v4->fields._BottomPosition_k__BackingField.fields.x = x;
  v4->fields._BottomPosition_k__BackingField.fields.y = y;
  v4->fields._BottomPosition_k__BackingField.fields.z = z;
}


void ServantEquipEffectFilterContainer__SetCollider(
        ServantEquipEffectFilterContainer_o *this,
        const MethodInfo *method)
{
  int *Component_object; // x19
  Il2CppObject *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2B8DC & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2B8DC = 1;
  }
  Component_object = (int *)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v4 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v4, 0, 0);
    if ( (v5 & 1) != 0 )
    {
      if ( !Component_object
        || (v5 = (*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)Component_object + 664LL))(
                   Component_object,
                   *(_QWORD *)(*(_QWORD *)Component_object + 672LL)),
            !v4) )
      {
        sub_1C93D2C(v5, v6);
      }
      v8.fields.z = 0.0;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v4, v8, 0);
      v9.fields.x = 0.0;
      v9.fields.y = (float)Component_object[43] * -0.5;
      v9.fields.z = 0.0;
      UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)v4, v9, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantEquipEffectFilterContainer__SetEnableFilterButton(
        ServantEquipEffectFilterContainer_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *itemList; // x0
  bool i; // w19
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UICommonButton_o *v9; // x0
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2B8DD & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
    byte_4D2B8DD = 1;
  }
  memset(&v10, 0, sizeof(v10));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C93D2C(0, isEnable);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  for ( i = isEnable; ; UICommonButton__SetButtonEnableWithCollider(v9, i, 0) )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__);
    if ( !v7 )
      break;
    if ( !v10.fields._current )
      sub_1C93D2C(v7, v8);
    v9 = *(UICommonButton_o **)((char *)&v10.fields._current->klass + (unsigned __int64)&qword_28);
    if ( !v9 )
      sub_1C93D2C(0, v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
}


void ServantEquipEffectFilterContainer__SetEnableFilterRewardUpEquipButton(
        ServantEquipEffectFilterContainer_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  ConstantStrMaster_o *Master_object; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *RewardUpFuncCategory; // x0
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *itemList; // x9
  System_Collections_Generic_HashSet_int__o *v9; // x20
  bool v10; // w19
  _BOOL8 v11; // x0
  __int64 v12; // x1
  ServantEquipEffectFilterItem_o *current; // x21
  _DWORD *monitor; // x8
  __int64 v15; // x1
  bool v16; // w8
  UICommonButton_o *button; // x0
  const MethodInfo *v18; // x1
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D2B8DE & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToHashSet_int___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
    byte_4D2B8DE = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ConstantStrMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object
    || (RewardUpFuncCategory = (System_Collections_Generic_IEnumerable_TSource__o *)ConstantStrMaster__GetRewardUpFuncCategory(
                                                                                      Master_object,
                                                                                      0),
        Master_object = (ConstantStrMaster_o *)System_Linq_Enumerable__ToHashSet_int_(
                                                 RewardUpFuncCategory,
                                                 (const MethodInfo_31E8950 *)Method_System_Linq_Enumerable_ToHashSet_int___),
        (itemList = this->fields.itemList) == 0) )
  {
    sub_1C93D2C(Master_object, v6);
  }
  v9 = (System_Collections_Generic_HashSet_int__o *)Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  v10 = isEnable;
  v20 = v19;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__);
    if ( !v11 )
      break;
    current = (ServantEquipEffectFilterItem_o *)v20.fields._current;
    if ( !v20.fields._current )
      sub_1C93D2C(v11, v12);
    monitor = v20.fields._current[4].monitor;
    if ( !monitor )
      sub_1C93D2C(v11, v12);
    if ( !v9 )
      sub_1C93D2C(v11, v12);
    v16 = System_Collections_Generic_HashSet_int___Contains(
            v9,
            monitor[4],
            (const MethodInfo_3725A9C *)Method_System_Collections_Generic_HashSet_int__Contains__);
    button = current->fields.button;
    if ( v16 )
    {
      if ( !button )
        sub_1C93D2C(0, v15);
      UICommonButton__SetButtonEnableWithCollider(button, v10, 0);
    }
    else
    {
      if ( !button )
        sub_1C93D2C(0, v15);
      UICommonButton__SetButtonEnableWithCollider(button, 0, 0);
      ServantEquipEffectFilterItem__SetMask(current, v18);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void ServantEquipEffectFilterContainer__SetupHeader(
        ServantEquipEffectFilterContainer_o *this,
        int32_t groupType,
        int32_t categoryFlag,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x21
  System_String_o *v8; // x0
  __int64 *v9; // x8
  System_String_o *v10; // x20
  System_String_o *leftLineSptite; // x0
  struct UILabel_o *v12; // x8
  _DWORD *fields; // x9
  int v14; // w10
  int v15; // w8
  int v16; // w21
  int v17; // w23
  UnityEngine_Transform_o *v18; // x20
  struct UILabel_o *v19; // x8
  int32_t v20; // w20
  UnityEngine_Transform_o *v21; // x21
  struct UILabel_o *v22; // x8
  System_Enum_o v24; // [xsp+8h] [xbp-48h] BYREF
  int32_t v25; // [xsp+18h] [xbp-38h]
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v27; // 0:kr14_12.12
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2B8D9 & 1) == 0 )
  {
    sub_1C93AD4(&FunctionCategoryEntity_GroupType_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&ServantEquipEffectFilterContainer_TypeInfo);
    sub_1C93AD4(&StringLiteral_3667/*"COMMAND_CODE_EFFECT_FILTER_GROUP_"*/);
    sub_1C93AD4(&StringLiteral_11688/*"SERVANT_EFFECT_FILTER_GROUP_"*/);
    sub_1C93AD4(&StringLiteral_11693/*"SERVANT_EQUIP_EFFECT_FILTER_GROUP_"*/);
    byte_4D2B8D9 = 1;
  }
  switch ( categoryFlag )
  {
    case 4:
      titleLabel = this->fields.titleLabel;
      v25 = groupType;
      v24.klass = (System_Enum_c *)FunctionCategoryEntity_GroupType_TypeInfo;
      v24.monitor = (void *)-1LL;
      v8 = System_Enum__ToString(&v24, 0);
      v9 = &StringLiteral_11688/*"SERVANT_EFFECT_FILTER_GROUP_"*/;
      break;
    case 2:
      titleLabel = this->fields.titleLabel;
      v25 = groupType;
      v24.klass = (System_Enum_c *)FunctionCategoryEntity_GroupType_TypeInfo;
      v24.monitor = (void *)-1LL;
      v8 = System_Enum__ToString(&v24, 0);
      v9 = &StringLiteral_3667/*"COMMAND_CODE_EFFECT_FILTER_GROUP_"*/;
      break;
    case 1:
      titleLabel = this->fields.titleLabel;
      v25 = groupType;
      v24.klass = (System_Enum_c *)FunctionCategoryEntity_GroupType_TypeInfo;
      v24.monitor = (void *)-1LL;
      v8 = System_Enum__ToString(&v24, 0);
      v9 = &StringLiteral_11693/*"SERVANT_EQUIP_EFFECT_FILTER_GROUP_"*/;
      break;
    default:
      goto LABEL_13;
  }
  v10 = System_String__Concat_64425724((System_String_o *)*v9, v8, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  leftLineSptite = LocalizationManager__Get(v10, 0);
  if ( !titleLabel )
LABEL_35:
    sub_1C93D2C(leftLineSptite, *(_QWORD *)&groupType);
  UILabel__set_text(titleLabel, leftLineSptite, 0);
LABEL_13:
  leftLineSptite = (System_String_o *)ServantEquipEffectFilterContainer_TypeInfo;
  if ( !ServantEquipEffectFilterContainer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEquipEffectFilterContainer_TypeInfo);
    leftLineSptite = (System_String_o *)ServantEquipEffectFilterContainer_TypeInfo;
  }
  v12 = this->fields.titleLabel;
  if ( !v12 )
    goto LABEL_35;
  fields = (_DWORD *)leftLineSptite[7].fields;
  leftLineSptite = (System_String_o *)this->fields.leftLineSptite;
  v14 = fields[1];
  v15 = v12->fields.mWidth + 2 * *fields;
  v16 = v14 >= 0 ? fields[1] : v14 + 1;
  v17 = v15 >= 0 ? v15 : v15 + 1;
  if ( !leftLineSptite )
    goto LABEL_35;
  leftLineSptite = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)leftLineSptite, 0);
  if ( !this->fields.titleLabel )
    goto LABEL_35;
  v18 = (UnityEngine_Transform_o *)leftLineSptite;
  leftLineSptite = (System_String_o *)UnityEngine_Component__get_transform(
                                        (UnityEngine_Component_o *)this->fields.titleLabel,
                                        0);
  if ( !leftLineSptite )
    goto LABEL_35;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)leftLineSptite, 0);
  v29.fields.y = localPosition.fields.y;
  v29.fields.z = localPosition.fields.z;
  v19 = this->fields.titleLabel;
  if ( !v19 )
    goto LABEL_35;
  if ( !v18 )
    goto LABEL_35;
  v29.fields.x = localPosition.fields.x
               - (float)(ServantEquipEffectFilterContainer_TypeInfo->static_fields->TITLE_LINE_SPRITE_SPACE
                       + v19->fields.mWidth / 2);
  UnityEngine_Transform__set_localPosition(v18, v29, 0);
  leftLineSptite = (System_String_o *)this->fields.leftLineSptite;
  if ( !leftLineSptite )
    goto LABEL_35;
  v20 = (v16 >> 1) - (v17 >> 1);
  UIWidget__set_width((UIWidget_o *)leftLineSptite, v20, 0);
  leftLineSptite = (System_String_o *)this->fields.rightLineSptite;
  if ( !leftLineSptite )
    goto LABEL_35;
  leftLineSptite = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)leftLineSptite, 0);
  if ( !this->fields.titleLabel )
    goto LABEL_35;
  v21 = (UnityEngine_Transform_o *)leftLineSptite;
  leftLineSptite = (System_String_o *)UnityEngine_Component__get_transform(
                                        (UnityEngine_Component_o *)this->fields.titleLabel,
                                        0);
  if ( !leftLineSptite )
    goto LABEL_35;
  v27 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)leftLineSptite, 0);
  v22 = this->fields.titleLabel;
  if ( !v22 )
    goto LABEL_35;
  if ( !v21 )
    goto LABEL_35;
  v28.fields.y = v27.fields.y + 0.0;
  v28.fields.x = v27.fields.x
               + (float)(ServantEquipEffectFilterContainer_TypeInfo->static_fields->TITLE_LINE_SPRITE_SPACE
                       + v22->fields.mWidth / 2);
  v28.fields.z = v27.fields.z + 0.0;
  UnityEngine_Transform__set_localPosition(v21, v28, 0);
  leftLineSptite = (System_String_o *)this->fields.rightLineSptite;
  if ( !leftLineSptite )
    goto LABEL_35;
  UIWidget__set_width((UIWidget_o *)leftLineSptite, v20, 0);
}


UnityEngine_Vector3_o ServantEquipEffectFilterContainer__get_BottomPosition(
        ServantEquipEffectFilterContainer_o *this,
        const MethodInfo *method)
{
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  result.fields.x = this->fields._BottomPosition_k__BackingField.fields.x;
  result.fields.y = this->fields._BottomPosition_k__BackingField.fields.y;
  result.fields.z = this->fields._BottomPosition_k__BackingField.fields.z;
  return result;
}


UnityEngine_Vector3_o ServantEquipEffectFilterContainer__get_Position(
        ServantEquipEffectFilterContainer_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v3; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C93D2C(0, v3);
  return UnityEngine_Transform__get_localPosition(transform, 0);
}


void ServantEquipEffectFilterContainer__set_BottomPosition(
        ServantEquipEffectFilterContainer_o *this,
        UnityEngine_Vector3_o value,
        const MethodInfo *method)
{
  this->fields._BottomPosition_k__BackingField = value;
}


void ServantEquipEffectFilterContainer__set_Position(
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
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C93D2C(0, v7);
  v8.fields.y = y;
  v8.fields.z = z;
  v8.fields.x = x;
  UnityEngine_Transform__set_localPosition(transform, v8, 0);
}


void ServantEquipEffectFilterContainer___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2B8E3 & 1) == 0 )
  {
    sub_1C93AD4(&ServantEquipEffectFilterContainer___c_TypeInfo);
    byte_4D2B8E3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(ServantEquipEffectFilterContainer___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantEquipEffectFilterContainer___c_TypeInfo->static_fields->__9 = (struct ServantEquipEffectFilterContainer___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ServantEquipEffectFilterContainer___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantEquipEffectFilterContainer___c___ctor(
        ServantEquipEffectFilterContainer___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantEquipEffectFilterContainer___c___RefreshItems_b__18_0(
        ServantEquipEffectFilterContainer___c_o *this,
        FunctionCategoryEntity_o *x,
        FunctionCategoryEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1C93D2C(this, x);
  return x->fields.dispNo - y->fields.dispNo;
}