void UIGrid___ctor(UIGrid_o *this, const MethodInfo *method)
{
  *(int32x2_t *)&this->fields.cellWidth = vdup_n_s32(0x43480000u);
  UIWidgetContainer___ctor((UIWidgetContainer_o *)this, 0);
}


void UIGrid__AddChild(UIGrid_o *this, UnityEngine_Transform_o *trans, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  UIGrid__AddChild_49174276(this, trans, 0, v3);
}


void UIGrid__AddChild_49174276(UIGrid_o *this, UnityEngine_Transform_o *trans, bool sort, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_Transform__o *ChildList; // x0

  if ( (byte_4C475B2 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C475B2 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)trans, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !trans )
      sub_1C372B4(transform);
    UnityEngine_Transform__set_parent(trans, transform, 0);
    ChildList = UIGrid__GetChildList(this, v7);
    ((void (__fastcall *)(UIGrid_o *, System_Collections_Generic_List_Transform__o *, const MethodInfo *))this->klass->vtable._9_ResetPosition.methodPtr)(
      this,
      ChildList,
      this->klass->vtable._9_ResetPosition.method);
  }
}


void UIGrid__ConstrainWithinPanel(UIGrid_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mPanel; // x20
  UIPanel_o *v4; // x20
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x19

  if ( (byte_4C475B8 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C475B8 = 1;
  }
  mPanel = (UnityEngine_Object_o *)this->fields.mPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mPanel, 0, 0) )
  {
    v4 = this->fields.mPanel;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !v4 )
      goto LABEL_14;
    UIPanel__ConstrainTargetToBounds_49119940(v4, transform, 1, 0);
    transform = (UnityEngine_Transform_o *)this->fields.mPanel;
    if ( !transform )
      goto LABEL_14;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( Component_object )
      {
        ((void (__fastcall *)(Il2CppObject *, __int64, const MethodInfo *))Component_object->klass->vtable[8].methodPtr)(
          Component_object,
          1,
          Component_object->klass->vtable[8].method);
        return;
      }
LABEL_14:
      sub_1C372B4(transform);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Transform_o *UIGrid__GetChild(UIGrid_o *this, int32_t index, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ChildList; // x0

  if ( (byte_4C475B0 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_Transform__get_Item__);
    byte_4C475B0 = 1;
  }
  ChildList = (System_Collections_Generic_List_object__o *)UIGrid__GetChildList(this, *(const MethodInfo **)&index);
  if ( !ChildList )
    sub_1C372B4(0);
  if ( ChildList->fields._size <= index )
    return 0;
  else
    return (UnityEngine_Transform_o *)System_Collections_Generic_List_object___get_Item(
                                        ChildList,
                                        index,
                                        (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_Transform__get_Item__);
}


System_Collections_Generic_List_Transform__o *UIGrid__GetChildList(UIGrid_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x21
  System_Collections_Generic_List_object__o *v4; // x19
  UnityEngine_Transform_o *childCount; // x0
  int32_t i; // w22
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Object_o *v9; // x23
  UnityEngine_GameObject_o *gameObject; // x24
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  int32_t sorting; // w8
  System_Comparison_T__o *v16; // x0
  intptr_t *v17; // x8
  System_Comparison_T__o *v18; // x20
  System_Collections_Generic_List_object__o *v19; // x0
  System_Comparison_T__o *onCustomSort; // x1

  if ( (byte_4C475AF & 1) == 0 )
  {
    sub_1C37058(&System_Comparison_Transform__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Transform__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_Transform__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_Transform___ctor__);
    sub_1C37058(&System_Collections_Generic_List_Transform__TypeInfo);
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_UIGrid_SortByName__);
    sub_1C37058(&Method_UIGrid_SortHorizontal__);
    sub_1C37058(&Method_UIGrid_SortVertical__);
    byte_4C475AF = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_Transform___ctor__);
  if ( !transform )
    goto LABEL_36;
  childCount = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0);
  if ( (int)childCount >= 1 )
  {
    for ( i = 0; i < (int)childCount; ++i )
    {
      childCount = UnityEngine_Transform__GetChild(transform, i, 0);
      v9 = (UnityEngine_Object_o *)childCount;
      if ( !this->fields.hideInactive )
        goto LABEL_39;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      childCount = (UnityEngine_Transform_o *)UnityEngine_Object__op_Implicit(v9, 0);
      if ( ((unsigned __int8)childCount & 1) != 0 )
      {
        if ( !v9 )
          goto LABEL_36;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0);
        if ( !NGUITools_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
        childCount = (UnityEngine_Transform_o *)NGUITools__GetActive_49345096(gameObject, 0);
        if ( ((unsigned __int8)childCount & 1) != 0 )
        {
LABEL_39:
          if ( !v4 )
            goto LABEL_36;
          items = v4->fields._items;
          v12 = Method_System_Collections_Generic_List_Transform__Add__;
          ++v4->fields._version;
          if ( !items )
            goto LABEL_36;
          size = v4->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v4,
              (Il2CppObject *)v9,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v14 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v14[4] = (Il2CppClass *)v9;
            sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v9, v7, v8);
          }
        }
      }
      childCount = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0);
    }
  }
  sorting = this->fields.sorting;
  if ( sorting && this->fields.arrangement != 2 )
  {
    switch ( sorting )
    {
      case 3:
        v16 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_Transform__TypeInfo);
        v17 = &Method_UIGrid_SortVertical__;
        break;
      case 2:
        v16 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_Transform__TypeInfo);
        v17 = &Method_UIGrid_SortHorizontal__;
        break;
      case 1:
        v16 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_Transform__TypeInfo);
        v17 = &Method_UIGrid_SortByName__;
        break;
      default:
        onCustomSort = (System_Comparison_T__o *)this->fields.onCustomSort;
        if ( !onCustomSort )
        {
          ((void (__fastcall *)(UIGrid_o *, System_Collections_Generic_List_object__o *, const MethodInfo *))this->klass->vtable._7_Sort.methodPtr)(
            this,
            v4,
            this->klass->vtable._7_Sort.method);
          return (System_Collections_Generic_List_Transform__o *)v4;
        }
        if ( v4 )
        {
          v19 = v4;
          goto LABEL_30;
        }
LABEL_36:
        sub_1C372B4(childCount);
    }
    v18 = v16;
    System_Comparison_object____ctor(v16, 0, *v17, 0);
    if ( v4 )
    {
      v19 = v4;
      onCustomSort = v18;
LABEL_30:
      System_Collections_Generic_List_object___Sort_58346216(
        v19,
        onCustomSort,
        (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_Transform__Sort__);
      return (System_Collections_Generic_List_Transform__o *)v4;
    }
    goto LABEL_36;
  }
  return (System_Collections_Generic_List_Transform__o *)v4;
}


int32_t UIGrid__GetIndex(UIGrid_o *this, UnityEngine_Transform_o *trans, const MethodInfo *method)
{
  System_Collections_Generic_List_Transform__o *ChildList; // x0

  if ( (byte_4C475B1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Transform__IndexOf__);
    byte_4C475B1 = 1;
  }
  ChildList = UIGrid__GetChildList(this, (const MethodInfo *)trans);
  if ( !ChildList )
    sub_1C372B4(0);
  return System_Collections_Generic_List_object___IndexOf(
           (System_Collections_Generic_List_object__o *)ChildList,
           (Il2CppObject *)trans,
           (const MethodInfo_37A3CC4 *)Method_System_Collections_Generic_List_Transform__IndexOf__);
}


void UIGrid__Init(UIGrid_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  Il2CppObject *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C475B5 & 1) == 0 )
  {
    sub_1C37058(&Method_NGUITools_FindInParents_UIPanel___);
    sub_1C37058(&NGUITools_TypeInfo);
    byte_4C475B5 = 1;
  }
  this->fields.mInitDone = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v4 = NGUITools__FindInParents_object_(
         gameObject,
         (const MethodInfo_3171F1C *)Method_NGUITools_FindInParents_UIPanel___);
  this->fields.mPanel = (struct UIPanel_o *)v4;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mPanel, (int32_t)v4, v5, v6);
}


void UIGrid__OnValidate(UIGrid_o *this, const MethodInfo *method)
{
  if ( (byte_4C475B6 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&NGUITools_TypeInfo);
    byte_4C475B6 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( !UnityEngine_Application__get_isPlaying(0) )
  {
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
      ((void (__fastcall *)(UIGrid_o *, const MethodInfo *))this->klass->vtable._8_Reposition.methodPtr)(
        this,
        this->klass->vtable._8_Reposition.method);
  }
}


void UIGrid__RemoveAllChild(UIGrid_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  int32_t v4; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4C475B4 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C475B4 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_11;
  v4 = UnityEngine_Transform__get_childCount(transform, 0) - 1;
  if ( v4 >= 0 )
  {
    while ( 1 )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !transform )
        break;
      transform = UnityEngine_Transform__GetChild(transform, v4, 0);
      if ( !transform )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)transform,
                                             0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71266752(gameObject, 0);
      if ( --v4 < 0 )
        return;
    }
LABEL_11:
    sub_1C372B4(transform);
  }
}


bool UIGrid__RemoveChild(UIGrid_o *this, UnityEngine_Transform_o *t, const MethodInfo *method)
{
  System_Collections_Generic_List_Transform__o *ChildList; // x0
  System_Collections_Generic_List_Transform__o *v6; // x21
  bool v7; // w20

  if ( (byte_4C475B3 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Transform__Remove__);
    byte_4C475B3 = 1;
  }
  ChildList = UIGrid__GetChildList(this, (const MethodInfo *)t);
  if ( !ChildList )
    sub_1C372B4(0);
  v6 = ChildList;
  v7 = System_Collections_Generic_List_object___Remove(
         (System_Collections_Generic_List_object__o *)ChildList,
         (Il2CppObject *)t,
         (const MethodInfo_37A454C *)Method_System_Collections_Generic_List_Transform__Remove__);
  if ( v7 )
    ((void (__fastcall *)(UIGrid_o *, System_Collections_Generic_List_Transform__o *, const MethodInfo *))this->klass->vtable._9_ResetPosition.methodPtr)(
      this,
      v6,
      this->klass->vtable._9_ResetPosition.method);
  return v7;
}


void UIGrid__Reposition(UIGrid_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  int32_t sorting; // w8
  System_Collections_Generic_List_Transform__o *ChildList; // x0
  const MethodInfo *v7; // x1
  struct UIGrid_OnReposition_o *onReposition; // x8

  if ( (byte_4C475B7 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&NGUITools_TypeInfo);
    byte_4C475B7 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0) && !this->fields.mInitDone )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive_49345096(gameObject, 0) )
      ((void (__fastcall *)(UIGrid_o *, const MethodInfo *))this->klass->vtable._4_Init.methodPtr)(
        this,
        this->klass->vtable._4_Init.method);
  }
  if ( this->fields.sorted )
  {
    sorting = this->fields.sorting;
    this->fields.sorted = 0;
    if ( !sorting )
      this->fields.sorting = 1;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__SetDirty((UnityEngine_Object_o *)this, 0);
  }
  ChildList = UIGrid__GetChildList(this, v3);
  ((void (__fastcall *)(UIGrid_o *, System_Collections_Generic_List_Transform__o *, const MethodInfo *))this->klass->vtable._9_ResetPosition.methodPtr)(
    this,
    ChildList,
    this->klass->vtable._9_ResetPosition.method);
  if ( this->fields.keepWithinPanel )
    UIGrid__ConstrainWithinPanel(this, v7);
  onReposition = this->fields.onReposition;
  if ( onReposition )
    ((void (__fastcall *)(intptr_t, intptr_t))onReposition->fields.invoke_impl)(
      onReposition->fields.method_code,
      onReposition->fields.method);
}


void UIGrid__ResetPosition(
        UIGrid_o *this,
        System_Collections_Generic_List_Transform__o *list,
        const MethodInfo *method)
{
  void *transform; // x0
  int32_t size; // w26
  UnityEngine_Transform_o *v7; // x19
  int v8; // w27
  int v9; // w28
  int v10; // w25
  int v11; // w24
  int32_t v12; // w22
  UnityEngine_Component_o *v13; // x23
  int32_t arrangement; // w8
  float z; // s8
  float x; // s9
  float v17; // s0
  float y; // s10
  float v19; // s9
  double v20; // d0
  __int64 v21; // x8
  float v22; // s0
  float v23; // s1
  float cellWidth; // s2
  float v25; // s0
  float v26; // s3
  float v27; // s1
  float cellHeight; // s0
  float v29; // s10
  double v30; // d0
  __int64 v31; // x8
  float v32; // s1
  UnityEngine_GameObject_o *gameObject; // x0
  _BOOL4 v34; // w8
  int32_t pivot; // w0
  UnityEngine_Vector2_o PivotOffset; // kr00_8
  int32_t v37; // w8
  float v38; // s3
  int v39; // w22
  int v40; // w21
  float v41; // s2
  float v42; // s10
  float v43; // s9
  float v44; // s11
  float v45; // s12
  float v46; // s8
  int32_t v47; // w20
  float v48; // s9
  UnityEngine_Transform_o *v49; // x21
  Il2CppObject *Component_object; // x22
  float v51; // s1
  double iptr; // [xsp+8h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C475B9 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_SpringPosition___);
    sub_1C37058(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_Transform__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C475B9 = 1;
  }
  this->fields.mReposition = 0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !list )
    goto LABEL_78;
  size = list->fields._size;
  v7 = (UnityEngine_Transform_o *)transform;
  if ( size >= 1 )
  {
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      transform = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)list,
                    v12,
                    (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_Transform__get_Item__);
      if ( !transform )
        goto LABEL_78;
      v13 = (UnityEngine_Component_o *)transform;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
      arrangement = this->fields.arrangement;
      z = localPosition.fields.z;
      if ( arrangement != 2 )
      {
        cellWidth = this->fields.cellWidth;
        v25 = (float)v8;
        v26 = (float)v9;
        v27 = -this->fields.cellHeight;
        if ( !arrangement )
        {
          x = cellWidth * v25;
          y = v26 * v27;
          goto LABEL_36;
        }
        x = cellWidth * v26;
        goto LABEL_35;
      }
      x = localPosition.fields.x;
      v17 = this->fields.cellWidth;
      y = localPosition.fields.y;
      if ( v17 > 0.0 )
        break;
LABEL_23:
      cellHeight = this->fields.cellHeight;
      if ( cellHeight <= 0.0 )
        goto LABEL_36;
      v29 = y / cellHeight;
      v30 = modf(v29, &iptr);
      if ( v29 >= 0.0 )
      {
        if ( v30 == 0.5 )
        {
          v31 = (__int64)iptr;
          v25 = iptr;
          v32 = v25 + 1.0;
LABEL_29:
          if ( (v31 & 1) != 0 )
            v25 = v32;
          goto LABEL_34;
        }
        v25 = floorf(v29 + 0.5);
      }
      else
      {
        if ( v30 == -0.5 )
        {
          v31 = (__int64)iptr;
          v25 = iptr;
          v32 = v25 + -1.0;
          goto LABEL_29;
        }
        v25 = ceilf(v29 + -0.5);
      }
LABEL_34:
      v27 = this->fields.cellHeight;
LABEL_35:
      y = v25 * v27;
LABEL_36:
      if ( !this->fields.animateSmoothly )
        goto LABEL_42;
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      if ( UnityEngine_Application__get_isPlaying(0) )
      {
        gameObject = UnityEngine_Component__get_gameObject(v13, 0);
        v54.fields.x = x;
        v54.fields.y = y;
        v54.fields.z = z;
        transform = SpringPosition__Begin(gameObject, v54, 15.0, 0);
        if ( !transform )
          goto LABEL_78;
        *(_WORD *)((char *)transform + 49) = 257;
      }
      else
      {
LABEL_42:
        v55.fields.x = x;
        v55.fields.y = y;
        v55.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v13, v55, 0);
      }
      if ( v10 <= v8 )
        v10 = v8;
      if ( v11 <= v9 )
        v11 = v9;
      v34 = v8 + 1 < this->fields.maxPerLine || this->fields.maxPerLine < 1;
      ++v12;
      if ( v34 )
        ++v8;
      else
        v8 = 0;
      v9 += !v34;
      if ( size == v12 )
        goto LABEL_53;
    }
    v19 = x / v17;
    v20 = modf(v19, &iptr);
    if ( v19 >= 0.0 )
    {
      if ( v20 == 0.5 )
      {
        v21 = (__int64)iptr;
        v22 = iptr;
        v23 = v22 + 1.0;
LABEL_17:
        if ( (v21 & 1) != 0 )
          v22 = v23;
        goto LABEL_22;
      }
      v22 = floorf(v19 + 0.5);
    }
    else
    {
      if ( v20 == -0.5 )
      {
        v21 = (__int64)iptr;
        v22 = iptr;
        v23 = v22 + -1.0;
        goto LABEL_17;
      }
      v22 = ceilf(v19 + -0.5);
    }
LABEL_22:
    x = v22 * this->fields.cellWidth;
    goto LABEL_23;
  }
  v11 = 0;
  v10 = 0;
LABEL_53:
  pivot = this->fields.pivot;
  if ( pivot )
  {
    PivotOffset = NGUIMath__GetPivotOffset(pivot, 0);
    v37 = this->fields.arrangement;
    v38 = fminf(PivotOffset.fields.x, 1.0);
    if ( v37 )
      v39 = v11;
    else
      v39 = v10;
    if ( v37 )
      v40 = v10;
    else
      v40 = v11;
    v41 = fminf(PivotOffset.fields.y, 1.0);
    if ( PivotOffset.fields.x < 0.0 )
      v42 = 0.0;
    else
      v42 = v38;
    if ( PivotOffset.fields.y < 0.0 )
      v43 = 0.0;
    else
      v43 = v41;
    if ( !v7 )
      goto LABEL_78;
    v45 = this->fields.cellWidth;
    v44 = this->fields.cellHeight;
    if ( UnityEngine_Transform__get_childCount(v7, 0) >= 1 )
    {
      v46 = (float)((float)(v45 * (float)v39) * v42) + 0.0;
      v47 = 0;
      v48 = (float)(v44 * (float)-v40) + (float)(v43 * (float)(0.0 - (float)(v44 * (float)-v40)));
      while ( 1 )
      {
        transform = UnityEngine_Transform__GetChild(v7, v47, 0);
        if ( !transform )
          break;
        v49 = (UnityEngine_Transform_o *)transform;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)transform,
                             (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_SpringPosition___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !Component_object )
            break;
          v51 = *((float *)&Component_object[2].klass + 1) - v48;
          *(float *)&Component_object[2].klass = *(float *)&Component_object[2].klass - v46;
          *((float *)&Component_object[2].klass + 1) = v51;
        }
        else
        {
          v56 = UnityEngine_Transform__get_localPosition(v49, 0);
          v56.fields.x = v56.fields.x - v46;
          v56.fields.y = v56.fields.y - v48;
          UnityEngine_Transform__set_localPosition(v49, v56, 0);
        }
        if ( ++v47 >= UnityEngine_Transform__get_childCount(v7, 0) )
          return;
      }
LABEL_78:
      sub_1C372B4(transform);
    }
  }
}


void UIGrid__Sort(UIGrid_o *this, System_Collections_Generic_List_Transform__o *list, const MethodInfo *method)
{
  ;
}


int32_t UIGrid__SortByName(UnityEngine_Transform_o *a, UnityEngine_Transform_o *b, const MethodInfo *method)
{
  System_String_o *v4; // x20
  System_String_o *name; // x1

  if ( !a || (a = (UnityEngine_Transform_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)a, 0), !b) )
    sub_1C372B4(a);
  v4 = (System_String_o *)a;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)b, 0);
  return System_String__Compare(v4, name, 0);
}


int32_t UIGrid__SortHorizontal(UnityEngine_Transform_o *a, UnityEngine_Transform_o *b, const MethodInfo *method)
{
  UnityEngine_Vector3_o localPosition; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  if ( !a || (localPosition = UnityEngine_Transform__get_localPosition(a, 0), !b) )
    sub_1C372B4(a);
  v6 = UnityEngine_Transform__get_localPosition(b, 0);
  return System_Single__CompareTo_65156288(v6.fields.x, v6.fields.y, (const MethodInfo *)&localPosition);
}


int32_t UIGrid__SortVertical(UnityEngine_Transform_o *a, UnityEngine_Transform_o *b, const MethodInfo *method)
{
  _DWORD v5[3]; // [xsp+4h] [xbp-2Ch] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4

  if ( !b
    || (localPosition = UnityEngine_Transform__get_localPosition(b, 0),
        v5[0] = LODWORD(localPosition.fields.y),
        v5[1] = LODWORD(localPosition.fields.z),
        !a) )
  {
    sub_1C372B4(a);
  }
  v7 = UnityEngine_Transform__get_localPosition(a, 0);
  return System_Single__CompareTo_65156288(v7.fields.y, v7.fields.y, (const MethodInfo *)v5);
}


void UIGrid__Start(UIGrid_o *this, const MethodInfo *method)
{
  UIGrid_c *klass; // x8
  bool animateSmoothly; // w20

  if ( !this->fields.mInitDone )
    ((void (__fastcall *)(UIGrid_o *, const MethodInfo *))this->klass->vtable._4_Init.methodPtr)(
      this,
      this->klass->vtable._4_Init.method);
  klass = this->klass;
  animateSmoothly = this->fields.animateSmoothly;
  this->fields.animateSmoothly = 0;
  ((void (__fastcall *)(UIGrid_o *, const MethodInfo *))klass->vtable._8_Reposition.methodPtr)(
    this,
    klass->vtable._8_Reposition.method);
  this->fields.animateSmoothly = animateSmoothly;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
}


void UIGrid__Update(UIGrid_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(UIGrid_o *, const MethodInfo *))this->klass->vtable._8_Reposition.methodPtr)(
    this,
    this->klass->vtable._8_Reposition.method);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
}


void UIGrid__set_repositionNow(UIGrid_o *this, bool value, const MethodInfo *method)
{
  if ( value )
  {
    this->fields.mReposition = 1;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
  }
}


void UIGrid_OnReposition___ctor(
        UIGrid_OnReposition_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A821E4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A821A4;
}


System_IAsyncResult_o *UIGrid_OnReposition__BeginInvoke(
        UIGrid_OnReposition_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C3700C(this, &v5, callback, object);
}


void UIGrid_OnReposition__EndInvoke(
        UIGrid_OnReposition_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void UIGrid_OnReposition__Invoke(UIGrid_OnReposition_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}