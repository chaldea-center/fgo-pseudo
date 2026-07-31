void ServantEquipEffectFilterContainer___cctor(const MethodInfo *method)
{
  if ( (byte_5932FCE & 1) == 0 )
  {
    sub_21FFC50(&ServantEquipEffectFilterContainer_TypeInfo);
    byte_5932FCE = 1;
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
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5932FCD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
    byte_5932FCD = 1;
  }
  itemList = this->fields.itemList;
  memset(&v6, 0, sizeof(v6));
  if ( !itemList )
    sub_21FFECC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v6,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__) )
  {
    if ( !v6.fields._current )
      sub_21FFECC(0, v4);
    ServantEquipEffectFilterItem__SetSelectState((ServantEquipEffectFilterItem_o *)v6.fields._current, 0, v5);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v6,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
}


void ServantEquipEffectFilterContainer__ForceSelectAll(
        ServantEquipEffectFilterContainer_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *itemList; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5932FCC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
    byte_5932FCC = 1;
  }
  itemList = this->fields.itemList;
  memset(&v6, 0, sizeof(v6));
  if ( !itemList )
    sub_21FFECC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v6,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__) )
  {
    if ( !v6.fields._current )
      sub_21FFECC(0, v4);
    ServantEquipEffectFilterItem__SetSelectState((ServantEquipEffectFilterItem_o *)v6.fields._current, 1, v5);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v6,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
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
  bool v8; // w7
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

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  this->fields.sort = sort;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.sort,
    (int32_t)sort,
    *(System_String_o **)&groupType,
    (System_String_o *)sort,
    (int32_t)onclickEvent,
    categoryFlag,
    (bool)method,
    v8);
  v25.fields.x = x;
  v25.fields.y = y;
  v25.fields.z = z;
  ServantEquipEffectFilterContainer__set_Position(this, v25, v17);
  ServantEquipEffectFilterContainer__SetupHeader(this, groupType, categoryFlag, v18);
  ServantEquipEffectFilterContainer__RefreshItems(this, entities, v19, onclickEvent, v20);
  if ( !entities )
    sub_21FFECC(v21, v22);
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
  struct ServantEquipEffectFilterContainer___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__18_0; // x22
  Il2CppObject *v11; // x23
  struct ServantEquipEffectFilterContainer___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_List_object__o *v19; // x23
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o **p_itemList; // x22
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  UnityEngine_Component_o *transform; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  int max_length; // w8
  unsigned int v31; // w29
  Il2CppObject *itemPrefab; // x23
  FunctionCategoryEntity_o *v33; // x24
  UnityEngine_Component_o *v34; // x23
  UnityEngine_Transform_o *v35; // x25
  ListViewSort_o *v36; // x25
  bool SvtEquipEffectFilter; // w0
  const MethodInfo *v38; // x5
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v46; // x9
  __int64 klass_low; // x10
  intptr_t v48; // x8

  if ( (byte_5932FC6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Sort_FunctionCategoryEntity___);
    sub_21FFC50(&System_Comparison_FunctionCategoryEntity__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ServantEquipEffectFilterItem__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterItem___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_ServantEquipEffectFilterContainer___c__RefreshItems_b__18_0__);
    sub_21FFC50(&ServantEquipEffectFilterContainer___c_TypeInfo);
    byte_5932FC6 = 1;
  }
  v8 = ServantEquipEffectFilterContainer___c_TypeInfo;
  if ( !*(&ServantEquipEffectFilterContainer___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantEquipEffectFilterContainer___c_TypeInfo, entities, sort);
    v8 = ServantEquipEffectFilterContainer___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__18_0 = (System_Comparison_T__o *)static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, entities, sort);
      static_fields = ServantEquipEffectFilterContainer___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__18_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_FunctionCategoryEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__18_0,
      v11,
      Method_ServantEquipEffectFilterContainer___c__RefreshItems_b__18_0__,
      0);
    v12 = ServantEquipEffectFilterContainer___c_TypeInfo->static_fields;
    v12->__9__18_0 = (struct System_Comparison_FunctionCategoryEntity__o *)_9__18_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12->__9__18_0, (int32_t)_9__18_0, v13, v14, v15, v16, v17, v18);
  }
  System_Array__Sort_object__58222280(
    (System_Object_array *)entities,
    _9__18_0,
    (const MethodInfo_37866C8 *)Method_System_Array_Sort_FunctionCategoryEntity___);
  v19 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantEquipEffectFilterItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *)v19;
  p_itemList = &this->fields.itemList;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.itemList, (int32_t)v19, v21, v22, v23, v24, v25, v26);
  if ( !entities )
    goto LABEL_30;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v31 = 0;
    while ( 1 )
    {
      if ( v31 >= max_length )
        sub_21FFED4(transform);
      itemPrefab = (Il2CppObject *)this->fields.itemPrefab;
      v33 = entities->m_Items[v31];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28, v29);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                               itemPrefab,
                                               (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterItem___);
      if ( !transform )
        break;
      v34 = transform;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
      if ( !this->fields.grid )
        break;
      v35 = (UnityEngine_Transform_o *)transform;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)this->fields.grid,
                                               0);
      if ( !v35 )
        break;
      UnityEngine_Transform__SetParent_83279140(v35, (UnityEngine_Transform_o *)transform, 0, 0);
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v34, 0);
      if ( !transform )
        break;
      UnityEngine_Transform__SetAsLastSibling((UnityEngine_Transform_o *)transform, 0);
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v34, 0);
      if ( !transform )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
      if ( !v33 )
        break;
      v36 = this->fields.sort;
      if ( !v36 )
        break;
      SvtEquipEffectFilter = ListViewSort__GetSvtEquipEffectFilter(this->fields.sort, v33->fields.id, 0);
      ServantEquipEffectFilterItem__Init(
        (ServantEquipEffectFilterItem_o *)v34,
        v33,
        v36,
        SvtEquipEffectFilter,
        onclickEvent,
        v38);
      transform = (UnityEngine_Component_o *)*p_itemList;
      if ( !*p_itemList )
        break;
      m_CachedPtr = transform->fields.m_CachedPtr;
      v46 = Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__Add__;
      ++HIDWORD(transform[1].klass);
      if ( !m_CachedPtr )
        break;
      klass_low = SLODWORD(transform[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)transform,
          (Il2CppObject *)v34,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = m_CachedPtr + 8 * klass_low;
        LODWORD(transform[1].klass) = klass_low + 1;
        *(_QWORD *)(v48 + 32) = v34;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v48 + 32), (int32_t)v34, v39, v40, v41, v42, v43, v44);
      }
      max_length = entities->max_length;
      if ( (int)++v31 >= max_length )
        goto LABEL_28;
    }
LABEL_30:
    sub_21FFECC(transform, v28);
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
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5932FCB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
    byte_5932FCB = 1;
  }
  itemList = this->fields.itemList;
  memset(&v5, 0, sizeof(v5));
  if ( !itemList )
    sub_21FFECC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_21FFECC(0, v4);
    ServantEquipEffectFilterItem__RefreshSelectState((ServantEquipEffectFilterItem_o *)v5.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
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
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Component_object; // x20
  struct UIGrid_o *v11; // x8
  float v12; // s0
  int v13; // w9
  const MethodInfo *v14; // x1
  float v15; // s0 OVERLAPPED
  float v16; // s2
  float v17; // s1
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_5932FC7 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    this = (ServantEquipEffectFilterContainer_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932FC7 = 1;
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
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  this = (ServantEquipEffectFilterContainer_o *)UnityEngine_Object__op_Inequality(
                                                  (UnityEngine_Object_o *)Component_object,
                                                  0,
                                                  0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    *(UnityEngine_Vector3_o *)&v15 = ServantEquipEffectFilterContainer__get_Position(
                                       v4,
                                       *(const MethodInfo **)&displayCount);
    goto LABEL_16;
  }
  if ( !Component_object || (v11 = v4->fields.grid) == 0 )
LABEL_17:
    sub_21FFECC(this, *(_QWORD *)&displayCount);
  v12 = v11->fields.cellHeight * (float)v7;
  v13 = (int)v12;
  if ( v12 == INFINITY )
    v13 = 0x80000000;
  UIWidget__set_height((UIWidget_o *)Component_object, v13 + HIDWORD(Component_object[10].monitor), 0);
  Position = ServantEquipEffectFilterContainer__get_Position(v4, v14);
  v15 = Position.fields.x + 0.0;
  v16 = Position.fields.z + 0.0;
  v17 = Position.fields.y + (float)-HIDWORD(Component_object[10].monitor);
LABEL_16:
  v4->fields._BottomPosition_k__BackingField.fields.x = v15;
  v4->fields._BottomPosition_k__BackingField.fields.y = v17;
  v4->fields._BottomPosition_k__BackingField.fields.z = v16;
}


// local variable allocation has failed, the output may be wrong!
void ServantEquipEffectFilterContainer__SetCollider(
        ServantEquipEffectFilterContainer_o *this,
        const MethodInfo *method)
{
  int *Component_object; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x0
  __int64 v10; // x1
  int v11; // s0 OVERLAPPED
  int v13; // s2
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5932FC8 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932FC8 = 1;
  }
  Component_object = (int *)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v6 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0);
    if ( (v9 & 1) != 0 )
    {
      if ( !Component_object
        || (v9 = (*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)Component_object + 664LL))(
                   Component_object,
                   *(_QWORD *)(*(_QWORD *)Component_object + 672LL)),
            !v6) )
      {
        sub_21FFECC(v9, v10);
      }
      v13 = 0;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v6, *(UnityEngine_Vector3_o *)&v11, 0);
      v14.fields.z = 0.0;
      v14.fields.y = (float)Component_object[43] * -0.5;
      v14.fields.x = 0.0;
      UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)v6, v14, 0);
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
  UICommonButton_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v9; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5932FC9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
    byte_5932FC9 = 1;
  }
  itemList = this->fields.itemList;
  memset(&v10, 0, sizeof(v10));
  if ( !itemList )
    sub_21FFECC(0, isEnable);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  v8 = 0;
  v9 = &v10;
  while ( 1 )
  {
    v6 = (UICommonButton_o *)System_Collections_Generic_List_Enumerator_object___MoveNext(
                               &v10,
                               (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__);
    if ( ((unsigned __int8)v6 & 1) == 0 )
      break;
    if ( !v10.fields._current
      || (v6 = *(UICommonButton_o **)((char *)&v10.fields._current->klass + (unsigned __int64)&qword_28)) == 0 )
    {
      sub_21FFECC(v6, v7);
    }
    UICommonButton__SetButtonEnableWithCollider(v6, isEnable, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void ServantEquipEffectFilterContainer__SetEnableFilterRewardUpEquipButton(
        ServantEquipEffectFilterContainer_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  int v5; // w8
  ConstantStrMaster_o *Master_object; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *RewardUpFuncCategory; // x0
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *itemList; // x9
  System_Collections_Generic_HashSet_int__o *v10; // x20
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

  if ( (byte_5932FCA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToHashSet_int___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
    byte_5932FCA = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  memset(&v20, 0, sizeof(v20));
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, isEnable, method);
  Master_object = (ConstantStrMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object
    || (RewardUpFuncCategory = (System_Collections_Generic_IEnumerable_TSource__o *)ConstantStrMaster__GetRewardUpFuncCategory(
                                                                                      Master_object,
                                                                                      0),
        Master_object = (ConstantStrMaster_o *)System_Linq_Enumerable__ToHashSet_int_(
                                                 RewardUpFuncCategory,
                                                 (const MethodInfo_386D418 *)Method_System_Linq_Enumerable_ToHashSet_int___),
        (itemList = this->fields.itemList) == 0) )
  {
    sub_21FFECC(Master_object, v7);
  }
  v10 = (System_Collections_Generic_HashSet_int__o *)Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  v20 = v19;
  v19.fields._list = 0;
  *(_QWORD *)&v19.fields._index = &v20;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__);
    if ( !v11 )
      break;
    current = (ServantEquipEffectFilterItem_o *)v20.fields._current;
    if ( !v20.fields._current )
      sub_21FFECC(v11, v12);
    monitor = v20.fields._current[4].monitor;
    if ( !monitor || !v10 )
      sub_21FFECC(v11, v12);
    v16 = System_Collections_Generic_HashSet_int___Contains(
            v10,
            monitor[4],
            (const MethodInfo_4280968 *)Method_System_Collections_Generic_HashSet_int__Contains__);
    button = current->fields.button;
    if ( v16 )
    {
      if ( !button )
        sub_21FFECC(0, v15);
      UICommonButton__SetButtonEnableWithCollider(button, isEnable, 0);
    }
    else
    {
      if ( !button )
        sub_21FFECC(0, v15);
      UICommonButton__SetButtonEnableWithCollider(button, 0, 0);
      ServantEquipEffectFilterItem__SetMask(current, v18);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
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
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *v12; // x20
  System_String_o *leftLineSptite; // x0
  struct UILabel_o *v14; // x8
  struct ServantEquipEffectFilterContainer_StaticFields *static_fields; // x9
  int TITLE_WIDTH; // w9
  int32_t TITLE_LINE_SPRITE_SPACE; // w10
  int v18; // w8
  int v19; // w21
  int v20; // w23
  UnityEngine_Transform_o *v21; // x20
  struct UILabel_o *v22; // x8
  float v23; // s0
  int32_t v24; // w20
  UnityEngine_Transform_o *v25; // x21
  struct UILabel_o *v26; // x8
  System_Enum_o v27; // [xsp+8h] [xbp-48h] BYREF
  int32_t v28; // [xsp+18h] [xbp-38h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5932FC5 & 1) == 0 )
  {
    sub_21FFC50(&FunctionCategoryEntity_GroupType_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&ServantEquipEffectFilterContainer_TypeInfo);
    sub_21FFC50(&StringLiteral_3783/*"COMMAND_CODE_EFFECT_FILTER_GROUP_"*/);
    sub_21FFC50(&StringLiteral_12086/*"SERVANT_EFFECT_FILTER_GROUP_"*/);
    sub_21FFC50(&StringLiteral_12091/*"SERVANT_EQUIP_EFFECT_FILTER_GROUP_"*/);
    byte_5932FC5 = 1;
  }
  switch ( categoryFlag )
  {
    case 4:
      titleLabel = this->fields.titleLabel;
      v28 = groupType;
      v27.klass = (System_Enum_c *)FunctionCategoryEntity_GroupType_TypeInfo;
      v27.monitor = (void *)-1LL;
      v8 = System_Enum__ToString(&v27, 0);
      v9 = &StringLiteral_12086/*"SERVANT_EFFECT_FILTER_GROUP_"*/;
      break;
    case 2:
      titleLabel = this->fields.titleLabel;
      v28 = groupType;
      v27.klass = (System_Enum_c *)FunctionCategoryEntity_GroupType_TypeInfo;
      v27.monitor = (void *)-1LL;
      v8 = System_Enum__ToString(&v27, 0);
      v9 = &StringLiteral_3783/*"COMMAND_CODE_EFFECT_FILTER_GROUP_"*/;
      break;
    case 1:
      titleLabel = this->fields.titleLabel;
      v28 = groupType;
      v27.klass = (System_Enum_c *)FunctionCategoryEntity_GroupType_TypeInfo;
      v27.monitor = (void *)-1LL;
      v8 = System_Enum__ToString(&v27, 0);
      v9 = &StringLiteral_12091/*"SERVANT_EQUIP_EFFECT_FILTER_GROUP_"*/;
      break;
    default:
      goto LABEL_13;
  }
  v12 = System_String__Concat_75438412((System_String_o *)*v9, v8, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v11);
  leftLineSptite = LocalizationManager__Get(v12, 0);
  if ( !titleLabel )
LABEL_35:
    sub_21FFECC(leftLineSptite, *(_QWORD *)&groupType);
  UILabel__set_text(titleLabel, leftLineSptite, 0);
LABEL_13:
  leftLineSptite = (System_String_o *)ServantEquipEffectFilterContainer_TypeInfo;
  if ( !*(&ServantEquipEffectFilterContainer_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(
      ServantEquipEffectFilterContainer_TypeInfo,
      *(_QWORD *)&groupType,
      *(_QWORD *)&categoryFlag);
  v14 = this->fields.titleLabel;
  if ( !v14 )
    goto LABEL_35;
  leftLineSptite = (System_String_o *)this->fields.leftLineSptite;
  static_fields = ServantEquipEffectFilterContainer_TypeInfo->static_fields;
  TITLE_LINE_SPRITE_SPACE = static_fields->TITLE_LINE_SPRITE_SPACE;
  TITLE_WIDTH = static_fields->TITLE_WIDTH;
  v18 = v14->fields.mWidth + 2 * TITLE_LINE_SPRITE_SPACE;
  v19 = TITLE_WIDTH >= 0 ? TITLE_WIDTH : TITLE_WIDTH + 1;
  v20 = v18 >= 0 ? v18 : v18 + 1;
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
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)leftLineSptite, 0);
  v22 = this->fields.titleLabel;
  if ( !v22 )
    goto LABEL_35;
  if ( !v21 )
    goto LABEL_35;
  v23 = localPosition.fields.x
      - (float)(ServantEquipEffectFilterContainer_TypeInfo->static_fields->TITLE_LINE_SPRITE_SPACE
              + v22->fields.mWidth / 2);
  UnityEngine_Transform__set_localPosition(v21, localPosition, 0);
  leftLineSptite = (System_String_o *)this->fields.leftLineSptite;
  if ( !leftLineSptite )
    goto LABEL_35;
  v24 = (v19 >> 1) - (v20 >> 1);
  UIWidget__set_width((UIWidget_o *)leftLineSptite, v24, 0);
  leftLineSptite = (System_String_o *)this->fields.rightLineSptite;
  if ( !leftLineSptite )
    goto LABEL_35;
  leftLineSptite = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)leftLineSptite, 0);
  if ( !this->fields.titleLabel )
    goto LABEL_35;
  v25 = (UnityEngine_Transform_o *)leftLineSptite;
  leftLineSptite = (System_String_o *)UnityEngine_Component__get_transform(
                                        (UnityEngine_Component_o *)this->fields.titleLabel,
                                        0);
  if ( !leftLineSptite )
    goto LABEL_35;
  v30 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)leftLineSptite, 0);
  v26 = this->fields.titleLabel;
  if ( !v26 )
    goto LABEL_35;
  if ( !v25 )
    goto LABEL_35;
  v31.fields.z = v30.fields.z + 0.0;
  v31.fields.y = v30.fields.y + 0.0;
  v31.fields.x = v30.fields.x
               + (float)(ServantEquipEffectFilterContainer_TypeInfo->static_fields->TITLE_LINE_SPRITE_SPACE
                       + v26->fields.mWidth / 2);
  UnityEngine_Transform__set_localPosition(v25, v31, 0);
  leftLineSptite = (System_String_o *)this->fields.rightLineSptite;
  if ( !leftLineSptite )
    goto LABEL_35;
  UIWidget__set_width((UIWidget_o *)leftLineSptite, v24, 0);
}


UnityEngine_Vector3_o ServantEquipEffectFilterContainer__get_BottomPosition(
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


UnityEngine_Vector3_o ServantEquipEffectFilterContainer__get_Position(
        ServantEquipEffectFilterContainer_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v3; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_21FFECC(0, v3);
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
    sub_21FFECC(0, v7);
  v8.fields.y = y;
  v8.fields.z = z;
  v8.fields.x = x;
  UnityEngine_Transform__set_localPosition(transform, v8, 0);
}


void ServantEquipEffectFilterContainer___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5932FCF & 1) == 0 )
  {
    sub_21FFC50(&ServantEquipEffectFilterContainer___c_TypeInfo);
    byte_5932FCF = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ServantEquipEffectFilterContainer___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantEquipEffectFilterContainer___c_TypeInfo->static_fields->__9 = (struct ServantEquipEffectFilterContainer___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ServantEquipEffectFilterContainer___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, x);
  return x->fields.dispNo - y->fields.dispNo;
}