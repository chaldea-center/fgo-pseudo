void __fastcall ServantEquipEffectFilterContainer___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1198A & 1) == 0 )
  {
    sub_1BCA7E0(&ServantEquipEffectFilterContainer_TypeInfo, v1, v2);
    byte_4B1198A = 1;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *itemList; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B11989 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__, v8, v9);
    byte_4B11989 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__) )
  {
    if ( !v13.fields._current )
      sub_1BCAA3C(0LL, v11);
    ServantEquipEffectFilterItem__SetSelectState((ServantEquipEffectFilterItem_o *)v13.fields._current, 0, v12);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
}


void __fastcall ServantEquipEffectFilterContainer__ForceSelectAll(
        ServantEquipEffectFilterContainer_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *itemList; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B11988 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__, v8, v9);
    byte_4B11988 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__) )
  {
    if ( !v13.fields._current )
      sub_1BCAA3C(0LL, v11);
    ServantEquipEffectFilterItem__SetSelectState((ServantEquipEffectFilterItem_o *)v13.fields._current, 1, v12);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
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
  sub_1BCA784(&this->fields.sort, sort);
  v24.fields.x = x;
  v24.fields.y = y;
  v24.fields.z = z;
  ServantEquipEffectFilterContainer__set_Position(this, v24, v16);
  ServantEquipEffectFilterContainer__SetupHeader(this, groupType, categoryFlag, v17);
  ServantEquipEffectFilterContainer__RefreshItems(this, entities, v18, onclickEvent, v19);
  if ( !entities )
    sub_1BCAA3C(v20, v21);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  ServantEquipEffectFilterContainer___c_c *v24; // x0
  System_Comparison_T__o *_9__18_0; // x22
  Il2CppObject *v26; // x23
  struct ServantEquipEffectFilterContainer___c_StaticFields *static_fields; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Collections_Generic_List_object__o *v31; // x23
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o **p_itemList; // x22
  UnityEngine_Component_o *transform; // x0
  __int64 v34; // x1
  signed int max_length; // w8
  unsigned int v36; // w26
  FunctionCategoryEntity_o *v37; // x24
  Il2CppObject *itemPrefab; // x23
  UnityEngine_Component_o *v39; // x23
  UnityEngine_Transform_o *v40; // x25
  ListViewSort_o *v41; // x25
  bool SvtEquipEffectFilter; // w0
  const MethodInfo *v43; // x5
  __int64 v44; // x8
  _QWORD *v45; // x9
  __int64 klass_low; // x10
  __int64 v47; // x8

  if ( (byte_4B11983 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Sort_FunctionCategoryEntity___, entities, sort);
    sub_1BCA7E0(&System_Comparison_FunctionCategoryEntity__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantEquipEffectFilterItem__TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterItem___, v16, v17);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_ServantEquipEffectFilterContainer___c__RefreshItems_b__18_0__, v20, v21);
    sub_1BCA7E0(&ServantEquipEffectFilterContainer___c_TypeInfo, v22, v23);
    byte_4B11983 = 1;
  }
  v24 = ServantEquipEffectFilterContainer___c_TypeInfo;
  if ( !ServantEquipEffectFilterContainer___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEquipEffectFilterContainer___c_TypeInfo, entities);
    v24 = ServantEquipEffectFilterContainer___c_TypeInfo;
  }
  _9__18_0 = (System_Comparison_T__o *)v24->static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24, entities);
      v24 = ServantEquipEffectFilterContainer___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v24->static_fields->__9;
    _9__18_0 = (System_Comparison_T__o *)sub_1BCAA2C(
                                           System_Comparison_FunctionCategoryEntity__TypeInfo,
                                           entities,
                                           sort,
                                           onclickEvent);
    System_Comparison_object____ctor(
      _9__18_0,
      v26,
      Method_ServantEquipEffectFilterContainer___c__RefreshItems_b__18_0__,
      0LL);
    static_fields = ServantEquipEffectFilterContainer___c_TypeInfo->static_fields;
    static_fields->__9__18_0 = (struct System_Comparison_FunctionCategoryEntity__o *)_9__18_0;
    sub_1BCA784(&static_fields->__9__18_0, _9__18_0);
  }
  System_Array__Sort_object__49153980(
    (System_Object_array *)entities,
    _9__18_0,
    (const MethodInfo_2EE07BC *)Method_System_Array_Sort_FunctionCategoryEntity___);
  v31 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantEquipEffectFilterItem__TypeInfo,
                                                       v28,
                                                       v29,
                                                       v30);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *)v31;
  p_itemList = &this->fields.itemList;
  transform = (UnityEngine_Component_o *)sub_1BCA784(&this->fields.itemList, v31);
  if ( !entities )
    goto LABEL_30;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v36 = 0;
    while ( 1 )
    {
      if ( v36 >= max_length )
        sub_1BCAA44(transform, v34);
      v37 = entities->m_Items[v36];
      itemPrefab = (Il2CppObject *)this->fields.itemPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                               itemPrefab,
                                               (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_ServantEquipEffectFilterItem___);
      if ( !transform )
        break;
      v39 = transform;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !this->fields.grid )
        break;
      v40 = (UnityEngine_Transform_o *)transform;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)this->fields.grid,
                                               0LL);
      if ( !v40 )
        break;
      UnityEngine_Transform__SetParent_70175492(v40, (UnityEngine_Transform_o *)transform, 0, 0LL);
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v39, 0LL);
      if ( !transform )
        break;
      UnityEngine_Transform__SetAsLastSibling((UnityEngine_Transform_o *)transform, 0LL);
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v39, 0LL);
      if ( !transform )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
      if ( !v37 )
        break;
      v41 = this->fields.sort;
      if ( !v41 )
        break;
      SvtEquipEffectFilter = ListViewSort__GetSvtEquipEffectFilter(this->fields.sort, v37->fields.id, 0LL);
      ServantEquipEffectFilterItem__Init(
        (ServantEquipEffectFilterItem_o *)v39,
        v37,
        v41,
        SvtEquipEffectFilter,
        onclickEvent,
        v43);
      transform = (UnityEngine_Component_o *)*p_itemList;
      if ( !*p_itemList )
        break;
      v44 = *(_QWORD *)&transform->fields.m_CachedPtr;
      v45 = Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__Add__;
      ++HIDWORD(transform[1].klass);
      if ( !v44 )
        break;
      klass_low = SLODWORD(transform[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(v44 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)transform,
          (Il2CppObject *)v39,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = v44 + 8 * klass_low;
        LODWORD(transform[1].klass) = klass_low + 1;
        *(_QWORD *)(v47 + 32) = v39;
        transform = (UnityEngine_Component_o *)sub_1BCA784(v47 + 32, v39);
      }
      max_length = entities->max_length;
      if ( (int)++v36 >= max_length )
        goto LABEL_28;
    }
LABEL_30:
    sub_1BCAA3C(transform, v34);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *itemList; // x0
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B11987 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__, v8, v9);
    byte_4B11987 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1BCAA3C(0LL, v11);
    ServantEquipEffectFilterItem__RefreshSelectState((ServantEquipEffectFilterItem_o *)v12.fields._current, v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterContainer__SetBottomPosition(
        ServantEquipEffectFilterContainer_o *this,
        int32_t displayCount,
        const MethodInfo *method)
{
  ServantEquipEffectFilterContainer_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  struct UIGrid_o *grid; // x8
  int32_t maxPerLine; // w8
  int v9; // w21
  __int64 v10; // x1
  Il2CppObject *Component_object; // x20
  struct UIGrid_o *v12; // x8
  float v13; // s0
  int v14; // w9
  const MethodInfo *v15; // x1
  float v16; // s0
  float v17; // s2
  float v18; // s1
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B11984 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&displayCount, method);
    this = (ServantEquipEffectFilterContainer_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B11984 = 1;
  }
  grid = v4->fields.grid;
  if ( !grid )
    goto LABEL_17;
  maxPerLine = grid->fields.maxPerLine;
  if ( displayCount % maxPerLine )
    v9 = displayCount / maxPerLine + 1;
  else
    v9 = displayCount / maxPerLine;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)v4,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  this = (ServantEquipEffectFilterContainer_o *)UnityEngine_Object__op_Inequality(
                                                  (UnityEngine_Object_o *)Component_object,
                                                  0LL,
                                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    *(UnityEngine_Vector3_o *)&v16 = ServantEquipEffectFilterContainer__get_Position(
                                       v4,
                                       *(const MethodInfo **)&displayCount);
    goto LABEL_16;
  }
  if ( !Component_object || (v12 = v4->fields.grid) == 0LL )
LABEL_17:
    sub_1BCAA3C(this, *(_QWORD *)&displayCount);
  v13 = v12->fields.cellHeight * (float)v9;
  v14 = (int)v13;
  if ( v13 == INFINITY )
    v14 = 0x80000000;
  UIWidget__set_height((UIWidget_o *)Component_object, v14 + HIDWORD(Component_object[10].monitor), 0LL);
  Position = ServantEquipEffectFilterContainer__get_Position(v4, v15);
  v16 = Position.fields.x + 0.0;
  v17 = Position.fields.z + 0.0;
  v18 = Position.fields.y + (float)-HIDWORD(Component_object[10].monitor);
LABEL_16:
  v4->fields._BottomPosition_k__BackingField.fields.x = v16;
  v4->fields._BottomPosition_k__BackingField.fields.y = v18;
  v4->fields._BottomPosition_k__BackingField.fields.z = v17;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterContainer__SetCollider(
        ServantEquipEffectFilterContainer_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int *Component_object; // x19
  __int64 v9; // x1
  Il2CppObject *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x0
  __int64 v13; // x1
  int v14; // s0
  int v16; // s2
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B11985 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_BoxCollider___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B11985 = 1;
  }
  Component_object = (int *)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v10 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0LL, 0LL);
    if ( (v12 & 1) != 0 )
    {
      if ( !Component_object
        || (v12 = (*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)Component_object + 664LL))(
                    Component_object,
                    *(_QWORD *)(*(_QWORD *)Component_object + 672LL)),
            !v10) )
      {
        sub_1BCAA3C(v12, v13);
      }
      v16 = 0;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v10, *(UnityEngine_Vector3_o *)&v14, 0LL);
      v17.fields.x = 0.0;
      v17.fields.y = (float)Component_object[43] * -0.5;
      v17.fields.z = 0.0;
      UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)v10, v17, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Collections_Generic_List_ServantEquipEffectFilterItem__o *itemList; // x0
  bool i; // w19
  _BOOL8 v13; // x0
  __int64 v14; // x1
  UICommonButton_o *monitor; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B11986 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__,
      isEnable,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__, v9, v10);
    byte_4B11986 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_1BCAA3C(0LL, isEnable);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantEquipEffectFilterItem__GetEnumerator__);
  for ( i = isEnable; ; UICommonButton__SetButtonEnableWithCollider(monitor, i, 0LL) )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__MoveNext__);
    if ( !v13 )
      break;
    if ( !v16.fields._current )
      sub_1BCAA3C(v13, v14);
    monitor = (UICommonButton_o *)v16.fields._current[2].monitor;
    if ( !monitor )
      sub_1BCAA3C(0LL, v14);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantEquipEffectFilterItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipEffectFilterContainer__SetupHeader(
        ServantEquipEffectFilterContainer_o *this,
        int32_t groupType,
        int32_t categoryFlag,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UILabel_o *titleLabel; // x21
  System_String_o *v18; // x0
  __int64 *v19; // x8
  __int64 v20; // x1
  System_String_o *v21; // x20
  System_String_o *leftLineSptite; // x0
  struct UILabel_o *v23; // x8
  _DWORD *fields; // x9
  int v25; // w10
  int v26; // w8
  int v27; // w21
  int v28; // w23
  UnityEngine_Transform_o *v29; // x20
  float v30; // s0
  int v31; // s1
  struct UILabel_o *v33; // x8
  float v34; // s0
  int32_t v35; // w20
  UnityEngine_Transform_o *v36; // x21
  float v37; // s0
  float v38; // s1
  float v39; // s2
  struct UILabel_o *v40; // x8
  System_Enum_o v41; // [xsp+8h] [xbp-48h] BYREF
  int32_t v42; // [xsp+18h] [xbp-38h]
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B11982 & 1) == 0 )
  {
    sub_1BCA7E0(&FunctionCategoryEntity_GroupType_TypeInfo, *(_QWORD *)&groupType, *(_QWORD *)&categoryFlag);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&ServantEquipEffectFilterContainer_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_3750/*"COMMAND_CODE_EFFECT_FILTER_GROUP_"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_11706/*"SERVANT_EFFECT_FILTER_GROUP_"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_11711/*"SERVANT_EQUIP_EFFECT_FILTER_GROUP_"*/, v15, v16);
    byte_4B11982 = 1;
  }
  switch ( categoryFlag )
  {
    case 4:
      titleLabel = this->fields.titleLabel;
      v42 = groupType;
      v41.klass = (System_Enum_c *)FunctionCategoryEntity_GroupType_TypeInfo;
      v41.monitor = (void *)-1LL;
      v18 = System_Enum__ToString(&v41, 0LL);
      v19 = &StringLiteral_11706/*"SERVANT_EFFECT_FILTER_GROUP_"*/;
      break;
    case 2:
      titleLabel = this->fields.titleLabel;
      v42 = groupType;
      v41.klass = (System_Enum_c *)FunctionCategoryEntity_GroupType_TypeInfo;
      v41.monitor = (void *)-1LL;
      v18 = System_Enum__ToString(&v41, 0LL);
      v19 = &StringLiteral_3750/*"COMMAND_CODE_EFFECT_FILTER_GROUP_"*/;
      break;
    case 1:
      titleLabel = this->fields.titleLabel;
      v42 = groupType;
      v41.klass = (System_Enum_c *)FunctionCategoryEntity_GroupType_TypeInfo;
      v41.monitor = (void *)-1LL;
      v18 = System_Enum__ToString(&v41, 0LL);
      v19 = &StringLiteral_11711/*"SERVANT_EQUIP_EFFECT_FILTER_GROUP_"*/;
      break;
    default:
      goto LABEL_13;
  }
  v21 = System_String__Concat_62401220((System_String_o *)*v19, v18, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
  leftLineSptite = LocalizationManager__Get(v21, 0LL);
  if ( !titleLabel )
LABEL_35:
    sub_1BCAA3C(leftLineSptite, *(_QWORD *)&groupType);
  UILabel__set_text(titleLabel, leftLineSptite, 0LL);
LABEL_13:
  leftLineSptite = (System_String_o *)ServantEquipEffectFilterContainer_TypeInfo;
  if ( !ServantEquipEffectFilterContainer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEquipEffectFilterContainer_TypeInfo, *(_QWORD *)&groupType);
    leftLineSptite = (System_String_o *)ServantEquipEffectFilterContainer_TypeInfo;
  }
  v23 = this->fields.titleLabel;
  if ( !v23 )
    goto LABEL_35;
  fields = (_DWORD *)leftLineSptite[7].fields;
  leftLineSptite = (System_String_o *)this->fields.leftLineSptite;
  v25 = fields[1];
  v26 = v23->fields.mWidth + 2 * *fields;
  v27 = v25 >= 0 ? fields[1] : v25 + 1;
  v28 = v26 >= 0 ? v26 : v26 + 1;
  if ( !leftLineSptite )
    goto LABEL_35;
  leftLineSptite = (System_String_o *)UnityEngine_Component__get_transform(
                                        (UnityEngine_Component_o *)leftLineSptite,
                                        0LL);
  if ( !this->fields.titleLabel )
    goto LABEL_35;
  v29 = (UnityEngine_Transform_o *)leftLineSptite;
  leftLineSptite = (System_String_o *)UnityEngine_Component__get_transform(
                                        (UnityEngine_Component_o *)this->fields.titleLabel,
                                        0LL);
  if ( !leftLineSptite )
    goto LABEL_35;
  *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)leftLineSptite,
                                     0LL);
  v33 = this->fields.titleLabel;
  if ( !v33 )
    goto LABEL_35;
  if ( !v29 )
    goto LABEL_35;
  v34 = v30
      - (float)(ServantEquipEffectFilterContainer_TypeInfo->static_fields->TITLE_LINE_SPRITE_SPACE
              + v33->fields.mWidth / 2);
  UnityEngine_Transform__set_localPosition(v29, *(UnityEngine_Vector3_o *)(&v31 - 1), 0LL);
  leftLineSptite = (System_String_o *)this->fields.leftLineSptite;
  if ( !leftLineSptite )
    goto LABEL_35;
  v35 = (v27 >> 1) - (v28 >> 1);
  UIWidget__set_width((UIWidget_o *)leftLineSptite, v35, 0LL);
  leftLineSptite = (System_String_o *)this->fields.rightLineSptite;
  if ( !leftLineSptite )
    goto LABEL_35;
  leftLineSptite = (System_String_o *)UnityEngine_Component__get_transform(
                                        (UnityEngine_Component_o *)leftLineSptite,
                                        0LL);
  if ( !this->fields.titleLabel )
    goto LABEL_35;
  v36 = (UnityEngine_Transform_o *)leftLineSptite;
  leftLineSptite = (System_String_o *)UnityEngine_Component__get_transform(
                                        (UnityEngine_Component_o *)this->fields.titleLabel,
                                        0LL);
  if ( !leftLineSptite )
    goto LABEL_35;
  *(UnityEngine_Vector3_o *)&v37 = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)leftLineSptite,
                                     0LL);
  v40 = this->fields.titleLabel;
  if ( !v40 )
    goto LABEL_35;
  if ( !v36 )
    goto LABEL_35;
  v43.fields.z = v39 + 0.0;
  v43.fields.y = v38 + 0.0;
  v43.fields.x = v37
               + (float)(ServantEquipEffectFilterContainer_TypeInfo->static_fields->TITLE_LINE_SPRITE_SPACE
                       + v40->fields.mWidth / 2);
  UnityEngine_Transform__set_localPosition(v36, v43, 0LL);
  leftLineSptite = (System_String_o *)this->fields.rightLineSptite;
  if ( !leftLineSptite )
    goto LABEL_35;
  UIWidget__set_width((UIWidget_o *)leftLineSptite, v35, 0LL);
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
    sub_1BCAA3C(0LL, v3);
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
    sub_1BCAA3C(0LL, v7);
  v8.fields.y = y;
  v8.fields.z = z;
  v8.fields.x = x;
  UnityEngine_Transform__set_localPosition(transform, v8, 0LL);
}


void __fastcall ServantEquipEffectFilterContainer___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B1198B & 1) == 0 )
  {
    sub_1BCA7E0(&ServantEquipEffectFilterContainer___c_TypeInfo, v1, v2);
    byte_4B1198B = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantEquipEffectFilterContainer___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantEquipEffectFilterContainer___c_TypeInfo->static_fields->__9 = (struct ServantEquipEffectFilterContainer___c_o *)v4;
  sub_1BCA784(ServantEquipEffectFilterContainer___c_TypeInfo->static_fields, v4);
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
    sub_1BCAA3C(this, x);
  return x->fields.dispNo - y->fields.dispNo;
}