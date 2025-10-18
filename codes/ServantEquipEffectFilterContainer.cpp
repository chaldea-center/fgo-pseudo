void ServantEquipEffectFilterContainer___cctor(const MethodInfo *method)
{
  if ( (byte_4C3D8C8 & 1) == 0 )
  {
    sub_1C37058(&ServantEquipEffectFilterContainer_TypeInfo);
    byte_4C3D8C8 = 1;
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
  const MethodInfo *v4; // x2
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3D8C7 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
    byte_4C3D8C7 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C372B4(0);
    ServantEquipEffectFilterItem__SetSelectState((ServantEquipEffectFilterItem_o *)v5.fields._current, 0, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
}


void ServantEquipEffectFilterContainer__ForceSelectAll(
        ServantEquipEffectFilterContainer_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *itemList; // x0
  const MethodInfo *v4; // x2
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3D8C6 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
    byte_4C3D8C6 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C372B4(0);
    ServantEquipEffectFilterItem__SetSelectState((ServantEquipEffectFilterItem_o *)v5.fields._current, 1, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
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
  float z; // s8
  float y; // s9
  float x; // s10
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x3
  ListViewSort_o *v18; // x2
  const MethodInfo *v19; // x4
  __int64 v20; // x0
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x1
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.sort = sort;
  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  sub_1C36FFC(&this->fields.sort, sort);
  v23.fields.x = x;
  v23.fields.y = y;
  v23.fields.z = z;
  ServantEquipEffectFilterContainer__set_Position(this, v23, v16);
  ServantEquipEffectFilterContainer__SetupHeader(this, groupType, categoryFlag, v17);
  ServantEquipEffectFilterContainer__RefreshItems(this, entities, v18, onclickEvent, v19);
  if ( !entities )
    sub_1C372B4(v20);
  ServantEquipEffectFilterContainer__SetBottomPosition(this, entities->max_length, v21);
  ServantEquipEffectFilterContainer__SetCollider(this, v22);
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
  System_Collections_Generic_List_object__o *v12; // x23
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o **p_itemList; // x22
  UnityEngine_Component_o *transform; // x0
  int max_length; // w8
  unsigned int v16; // w26
  FunctionCategoryEntity_o *v17; // x24
  Il2CppObject *itemPrefab; // x23
  UnityEngine_Component_o *v19; // x23
  UnityEngine_Transform_o *v20; // x25
  ListViewSort_o *v21; // x25
  bool SvtEquipEffectFilter; // w0
  const MethodInfo *v23; // x5
  intptr_t m_CachedPtr; // x8
  _QWORD *v25; // x9
  __int64 klass_low; // x10
  intptr_t v27; // x8

  if ( (byte_4C3D8C0 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Sort_FunctionCategoryEntity___);
    sub_1C37058(&System_Comparison_FunctionCategoryEntity__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ServantEquipEffectFilterItem__TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterItem___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_ServantEquipEffectFilterContainer___c__RefreshItems_b__18_0__);
    sub_1C37058(&ServantEquipEffectFilterContainer___c_TypeInfo);
    byte_4C3D8C0 = 1;
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
    _9__18_0 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_FunctionCategoryEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__18_0,
      v10,
      Method_ServantEquipEffectFilterContainer___c__RefreshItems_b__18_0__,
      0);
    static_fields = ServantEquipEffectFilterContainer___c_TypeInfo->static_fields;
    static_fields->__9__18_0 = (struct System_Comparison_FunctionCategoryEntity__o *)_9__18_0;
    sub_1C36FFC(&static_fields->__9__18_0, _9__18_0);
  }
  System_Array__Sort_object__51069808(
    (System_Object_array *)entities,
    _9__18_0,
    (const MethodInfo_30B4370 *)Method_System_Array_Sort_FunctionCategoryEntity___);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ServantEquipEffectFilterItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *)v12;
  p_itemList = &this->fields.itemList;
  transform = (UnityEngine_Component_o *)sub_1C36FFC(&this->fields.itemList, v12);
  if ( !entities )
    goto LABEL_30;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
        sub_1C372BC(transform);
      v17 = entities->m_Items[v16];
      itemPrefab = (Il2CppObject *)this->fields.itemPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                               itemPrefab,
                                               (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterItem___);
      if ( !transform )
        break;
      v19 = transform;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
      if ( !this->fields.grid )
        break;
      v20 = (UnityEngine_Transform_o *)transform;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)this->fields.grid,
                                               0);
      if ( !v20 )
        break;
      UnityEngine_Transform__SetParent_71290012(v20, (UnityEngine_Transform_o *)transform, 0, 0);
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v19, 0);
      if ( !transform )
        break;
      UnityEngine_Transform__SetAsLastSibling((UnityEngine_Transform_o *)transform, 0);
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v19, 0);
      if ( !transform )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
      if ( !v17 )
        break;
      v21 = this->fields.sort;
      if ( !v21 )
        break;
      SvtEquipEffectFilter = ListViewSort__GetSvtEquipEffectFilter(this->fields.sort, v17->fields.id, 0);
      ServantEquipEffectFilterItem__Init(
        (ServantEquipEffectFilterItem_o *)v19,
        v17,
        v21,
        SvtEquipEffectFilter,
        onclickEvent,
        v23);
      transform = (UnityEngine_Component_o *)*p_itemList;
      if ( !*p_itemList )
        break;
      m_CachedPtr = transform->fields.m_CachedPtr;
      v25 = Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__Add__;
      ++HIDWORD(transform[1].klass);
      if ( !m_CachedPtr )
        break;
      klass_low = SLODWORD(transform[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)transform,
          (Il2CppObject *)v19,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = m_CachedPtr + 8 * klass_low;
        LODWORD(transform[1].klass) = klass_low + 1;
        *(_QWORD *)(v27 + 32) = v19;
        transform = (UnityEngine_Component_o *)sub_1C36FFC(v27 + 32, v19);
      }
      max_length = entities->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_28;
    }
LABEL_30:
    sub_1C372B4(transform);
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

  if ( (byte_4C3D8C5 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
    byte_4C3D8C5 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C372B4(0);
    ServantEquipEffectFilterItem__RefreshSelectState((ServantEquipEffectFilterItem_o *)v5.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
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
  const MethodInfo *v9; // x1
  struct UIGrid_o *v10; // x8
  float v11; // s0
  int v12; // w9
  const MethodInfo *v13; // x1
  float v14; // s0 OVERLAPPED
  float v15; // s2
  float v16; // s1
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4C3D8C1 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    this = (ServantEquipEffectFilterContainer_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3D8C1 = 1;
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
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantEquipEffectFilterContainer_o *)UnityEngine_Object__op_Inequality(
                                                  (UnityEngine_Object_o *)Component_object,
                                                  0,
                                                  0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    *(UnityEngine_Vector3_o *)&v14 = ServantEquipEffectFilterContainer__get_Position(v4, v9);
    goto LABEL_16;
  }
  if ( !Component_object || (v10 = v4->fields.grid) == 0 )
LABEL_17:
    sub_1C372B4(this);
  v11 = v10->fields.cellHeight * (float)v7;
  v12 = (int)v11;
  if ( v11 == INFINITY )
    v12 = 0x80000000;
  UIWidget__set_height((UIWidget_o *)Component_object, v12 + HIDWORD(Component_object[10].monitor), 0);
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
void ServantEquipEffectFilterContainer__SetCollider(
        ServantEquipEffectFilterContainer_o *this,
        const MethodInfo *method)
{
  int *Component_object; // x19
  Il2CppObject *v4; // x20
  __int64 v5; // x0
  int v6; // s0 OVERLAPPED
  int v8; // s2
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3D8C2 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3D8C2 = 1;
  }
  Component_object = (int *)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v4 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
        sub_1C372B4(v5);
      }
      v8 = 0;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v4, *(UnityEngine_Vector3_o *)&v6, 0);
      v9.fields.x = 0.0;
      v9.fields.y = (float)Component_object[43] * -0.5;
      v9.fields.z = 0.0;
      UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)v4, v9, 0);
    }
  }
}


void ServantEquipEffectFilterContainer__SetEnableFilterButton(
        ServantEquipEffectFilterContainer_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *itemList; // x0
  bool i; // w19
  _BOOL8 v7; // x0
  UICommonButton_o *v8; // x0
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3D8C3 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
    byte_4C3D8C3 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  for ( i = isEnable; ; UICommonButton__SetButtonEnableWithCollider(v8, i, 0) )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__);
    if ( !v7 )
      break;
    if ( !v9.fields._current )
      sub_1C372B4(v7);
    v8 = *(UICommonButton_o **)((char *)&v9.fields._current->klass + (unsigned __int64)&qword_28);
    if ( !v8 )
      sub_1C372B4(0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
}


void ServantEquipEffectFilterContainer__SetEnableFilterRewardUpEquipButton(
        ServantEquipEffectFilterContainer_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  ConstantStrMaster_o *Master_object; // x0
  System_Collections_Generic_IEnumerable_TSource__o *RewardUpFuncCategory; // x0
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *itemList; // x9
  System_Collections_Generic_HashSet_int__o *v8; // x20
  bool v9; // w19
  _BOOL8 v10; // x0
  ServantEquipEffectFilterItem_o *current; // x21
  _DWORD *monitor; // x8
  bool v13; // w8
  UICommonButton_o *button; // x0
  const MethodInfo *v15; // x1
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C3D8C4 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_ToHashSet_int___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
    byte_4C3D8C4 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ConstantStrMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object
    || (RewardUpFuncCategory = (System_Collections_Generic_IEnumerable_TSource__o *)ConstantStrMaster__GetRewardUpFuncCategory(
                                                                                      Master_object,
                                                                                      0),
        Master_object = (ConstantStrMaster_o *)System_Linq_Enumerable__ToHashSet_int_(
                                                 RewardUpFuncCategory,
                                                 (const MethodInfo_312BB20 *)Method_System_Linq_Enumerable_ToHashSet_int___),
        (itemList = this->fields.itemList) == 0) )
  {
    sub_1C372B4(Master_object);
  }
  v8 = (System_Collections_Generic_HashSet_int__o *)Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  v9 = isEnable;
  v17 = v16;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__);
    if ( !v10 )
      break;
    current = (ServantEquipEffectFilterItem_o *)v17.fields._current;
    if ( !v17.fields._current )
      sub_1C372B4(v10);
    monitor = v17.fields._current[4].monitor;
    if ( !monitor )
      sub_1C372B4(v10);
    if ( !v8 )
      sub_1C372B4(v10);
    v13 = System_Collections_Generic_HashSet_int___Contains(
            v8,
            monitor[4],
            (const MethodInfo_365417C *)Method_System_Collections_Generic_HashSet_int__Contains__);
    button = current->fields.button;
    if ( v13 )
    {
      if ( !button )
        sub_1C372B4(0);
      UICommonButton__SetButtonEnableWithCollider(button, v9, 0);
    }
    else
    {
      if ( !button )
        sub_1C372B4(0);
      UICommonButton__SetButtonEnableWithCollider(button, 0, 0);
      ServantEquipEffectFilterItem__SetMask(current, v15);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
}


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
  float v20; // s0
  int32_t v21; // w20
  UnityEngine_Transform_o *v22; // x21
  struct UILabel_o *v23; // x8
  System_Enum_o v24; // [xsp+8h] [xbp-48h] BYREF
  int32_t v25; // [xsp+18h] [xbp-38h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3D8BF & 1) == 0 )
  {
    sub_1C37058(&FunctionCategoryEntity_GroupType_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&ServantEquipEffectFilterContainer_TypeInfo);
    sub_1C37058(&StringLiteral_3646/*"COMMAND_CODE_EFFECT_FILTER_GROUP_"*/);
    sub_1C37058(&StringLiteral_11601/*"SERVANT_EFFECT_FILTER_GROUP_"*/);
    sub_1C37058(&StringLiteral_11606/*"SERVANT_EQUIP_EFFECT_FILTER_GROUP_"*/);
    byte_4C3D8BF = 1;
  }
  switch ( categoryFlag )
  {
    case 4:
      titleLabel = this->fields.titleLabel;
      v25 = groupType;
      v24.klass = (System_Enum_c *)FunctionCategoryEntity_GroupType_TypeInfo;
      v24.monitor = (void *)-1LL;
      v8 = System_Enum__ToString(&v24, 0);
      v9 = &StringLiteral_11601/*"SERVANT_EFFECT_FILTER_GROUP_"*/;
      break;
    case 2:
      titleLabel = this->fields.titleLabel;
      v25 = groupType;
      v24.klass = (System_Enum_c *)FunctionCategoryEntity_GroupType_TypeInfo;
      v24.monitor = (void *)-1LL;
      v8 = System_Enum__ToString(&v24, 0);
      v9 = &StringLiteral_3646/*"COMMAND_CODE_EFFECT_FILTER_GROUP_"*/;
      break;
    case 1:
      titleLabel = this->fields.titleLabel;
      v25 = groupType;
      v24.klass = (System_Enum_c *)FunctionCategoryEntity_GroupType_TypeInfo;
      v24.monitor = (void *)-1LL;
      v8 = System_Enum__ToString(&v24, 0);
      v9 = &StringLiteral_11606/*"SERVANT_EQUIP_EFFECT_FILTER_GROUP_"*/;
      break;
    default:
      goto LABEL_13;
  }
  v10 = System_String__Concat_63561656((System_String_o *)*v9, v8, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  leftLineSptite = LocalizationManager__Get(v10, 0);
  if ( !titleLabel )
LABEL_35:
    sub_1C372B4(leftLineSptite);
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
  v19 = this->fields.titleLabel;
  if ( !v19 )
    goto LABEL_35;
  if ( !v18 )
    goto LABEL_35;
  v20 = localPosition.fields.x
      - (float)(ServantEquipEffectFilterContainer_TypeInfo->static_fields->TITLE_LINE_SPRITE_SPACE
              + v19->fields.mWidth / 2);
  UnityEngine_Transform__set_localPosition(v18, localPosition, 0);
  leftLineSptite = (System_String_o *)this->fields.leftLineSptite;
  if ( !leftLineSptite )
    goto LABEL_35;
  v21 = (v16 >> 1) - (v17 >> 1);
  UIWidget__set_width((UIWidget_o *)leftLineSptite, v21, 0);
  leftLineSptite = (System_String_o *)this->fields.rightLineSptite;
  if ( !leftLineSptite )
    goto LABEL_35;
  leftLineSptite = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)leftLineSptite, 0);
  if ( !this->fields.titleLabel )
    goto LABEL_35;
  v22 = (UnityEngine_Transform_o *)leftLineSptite;
  leftLineSptite = (System_String_o *)UnityEngine_Component__get_transform(
                                        (UnityEngine_Component_o *)this->fields.titleLabel,
                                        0);
  if ( !leftLineSptite )
    goto LABEL_35;
  v27 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)leftLineSptite, 0);
  v23 = this->fields.titleLabel;
  if ( !v23 )
    goto LABEL_35;
  if ( !v22 )
    goto LABEL_35;
  v28.fields.y = v27.fields.y + 0.0;
  v28.fields.x = v27.fields.x
               + (float)(ServantEquipEffectFilterContainer_TypeInfo->static_fields->TITLE_LINE_SPRITE_SPACE
                       + v23->fields.mWidth / 2);
  v28.fields.z = v27.fields.z + 0.0;
  UnityEngine_Transform__set_localPosition(v22, v28, 0);
  leftLineSptite = (System_String_o *)this->fields.rightLineSptite;
  if ( !leftLineSptite )
    goto LABEL_35;
  UIWidget__set_width((UIWidget_o *)leftLineSptite, v21, 0);
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

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C372B4(0);
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
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4

  z = value.fields.z;
  y = value.fields.y;
  x = value.fields.x;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C372B4(0);
  v7.fields.y = y;
  v7.fields.z = z;
  v7.fields.x = x;
  UnityEngine_Transform__set_localPosition(transform, v7, 0);
}


void ServantEquipEffectFilterContainer___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C3D8C9 & 1) == 0 )
  {
    sub_1C37058(&ServantEquipEffectFilterContainer___c_TypeInfo);
    byte_4C3D8C9 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ServantEquipEffectFilterContainer___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantEquipEffectFilterContainer___c_TypeInfo->static_fields->__9 = (struct ServantEquipEffectFilterContainer___c_o *)v1;
  sub_1C36FFC(ServantEquipEffectFilterContainer___c_TypeInfo->static_fields, v1);
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
    sub_1C372B4(this);
  return x->fields.dispNo - y->fields.dispNo;
}