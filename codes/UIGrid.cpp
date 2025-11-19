void UIGrid___ctor(UIGrid_o *this, const MethodInfo *method)
{
  *(int32x2_t *)&this->fields.cellWidth = vdup_n_s32(0x43480000u);
  UIWidgetContainer___ctor((UIWidgetContainer_o *)this, 0);
}


void UIGrid__AddChild(UIGrid_o *this, UnityEngine_Transform_o *trans, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  UIGrid__AddChild_49476400(this, trans, 0, v3);
}


void UIGrid__AddChild_49476400(UIGrid_o *this, UnityEngine_Transform_o *trans, bool sort, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  System_Collections_Generic_List_Transform__o *ChildList; // x0

  if ( (byte_4CBA986 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBA986 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)trans, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !trans )
      sub_1C6BC60(transform, v7);
    UnityEngine_Transform__set_parent(trans, transform, 0);
    ChildList = UIGrid__GetChildList(this, v8);
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
  __int64 v6; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_4CBA98C & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBA98C = 1;
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
    UIPanel__ConstrainTargetToBounds_49422064(v4, transform, 1, 0);
    transform = (UnityEngine_Transform_o *)this->fields.mPanel;
    if ( !transform )
      goto LABEL_14;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
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
      sub_1C6BC60(transform, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Transform_o *UIGrid__GetChild(UIGrid_o *this, int32_t index, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ChildList; // x0
  __int64 v6; // x1

  if ( (byte_4CBA984 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Transform__get_Item__);
    byte_4CBA984 = 1;
  }
  ChildList = (System_Collections_Generic_List_object__o *)UIGrid__GetChildList(this, *(const MethodInfo **)&index);
  if ( !ChildList )
    sub_1C6BC60(0, v6);
  if ( ChildList->fields._size <= index )
    return 0;
  else
    return (UnityEngine_Transform_o *)System_Collections_Generic_List_object___get_Item(
                                        ChildList,
                                        index,
                                        (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_Transform__get_Item__);
}


System_Collections_Generic_List_Transform__o *UIGrid__GetChildList(UIGrid_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x21
  System_Collections_Generic_List_object__o *v4; // x19
  UnityEngine_Transform_o *childCount; // x0
  System_Comparison_T__o *onCustomSort; // x1
  int32_t i; // w22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *v10; // x23
  UnityEngine_GameObject_o *gameObject; // x24
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  int32_t sorting; // w8
  System_Comparison_T__o *v17; // x0
  intptr_t *v18; // x8
  System_Comparison_T__o *v19; // x20
  System_Collections_Generic_List_object__o *v20; // x0

  if ( (byte_4CBA983 & 1) == 0 )
  {
    sub_1C6BA08(&System_Comparison_Transform__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Transform__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Transform__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Transform___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_Transform__TypeInfo);
    sub_1C6BA08(&NGUITools_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_UIGrid_SortByName__);
    sub_1C6BA08(&Method_UIGrid_SortHorizontal__);
    sub_1C6BA08(&Method_UIGrid_SortVertical__);
    byte_4CBA983 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_Transform___ctor__);
  if ( !transform )
    goto LABEL_36;
  childCount = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0);
  if ( (int)childCount >= 1 )
  {
    for ( i = 0; i < (int)childCount; ++i )
    {
      childCount = UnityEngine_Transform__GetChild(transform, i, 0);
      v10 = (UnityEngine_Object_o *)childCount;
      if ( !this->fields.hideInactive )
        goto LABEL_39;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      childCount = (UnityEngine_Transform_o *)UnityEngine_Object__op_Implicit(v10, 0);
      if ( ((unsigned __int8)childCount & 1) != 0 )
      {
        if ( !v10 )
          goto LABEL_36;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0);
        if ( !NGUITools_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
        childCount = (UnityEngine_Transform_o *)NGUITools__GetActive_49647220(gameObject, 0);
        if ( ((unsigned __int8)childCount & 1) != 0 )
        {
LABEL_39:
          if ( !v4 )
            goto LABEL_36;
          items = v4->fields._items;
          v13 = Method_System_Collections_Generic_List_Transform__Add__;
          ++v4->fields._version;
          if ( !items )
            goto LABEL_36;
          size = v4->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v4,
              (Il2CppObject *)v10,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v15[4] = (Il2CppClass *)v10;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v10, v8, v9);
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
        v17 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_Transform__TypeInfo);
        v18 = &Method_UIGrid_SortVertical__;
        break;
      case 2:
        v17 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_Transform__TypeInfo);
        v18 = &Method_UIGrid_SortHorizontal__;
        break;
      case 1:
        v17 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_Transform__TypeInfo);
        v18 = &Method_UIGrid_SortByName__;
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
          v20 = v4;
          goto LABEL_30;
        }
LABEL_36:
        sub_1C6BC60(childCount, onCustomSort);
    }
    v19 = v17;
    System_Comparison_object____ctor(v17, 0, *v18, 0);
    if ( v4 )
    {
      v20 = v4;
      onCustomSort = v19;
LABEL_30:
      System_Collections_Generic_List_object___Sort_58729528(
        v20,
        onCustomSort,
        (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_Transform__Sort__);
      return (System_Collections_Generic_List_Transform__o *)v4;
    }
    goto LABEL_36;
  }
  return (System_Collections_Generic_List_Transform__o *)v4;
}


int32_t UIGrid__GetIndex(UIGrid_o *this, UnityEngine_Transform_o *trans, const MethodInfo *method)
{
  System_Collections_Generic_List_Transform__o *ChildList; // x0
  __int64 v6; // x1

  if ( (byte_4CBA985 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Transform__IndexOf__);
    byte_4CBA985 = 1;
  }
  ChildList = UIGrid__GetChildList(this, (const MethodInfo *)trans);
  if ( !ChildList )
    sub_1C6BC60(0, v6);
  return System_Collections_Generic_List_object___IndexOf(
           (System_Collections_Generic_List_object__o *)ChildList,
           (Il2CppObject *)trans,
           (const MethodInfo_3801614 *)Method_System_Collections_Generic_List_Transform__IndexOf__);
}


void UIGrid__Init(UIGrid_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  Il2CppObject *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4CBA989 & 1) == 0 )
  {
    sub_1C6BA08(&Method_NGUITools_FindInParents_UIPanel___);
    sub_1C6BA08(&NGUITools_TypeInfo);
    byte_4CBA989 = 1;
  }
  this->fields.mInitDone = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v4 = NGUITools__FindInParents_object_(
         gameObject,
         (const MethodInfo_31C5E70 *)Method_NGUITools_FindInParents_UIPanel___);
  this->fields.mPanel = (struct UIPanel_o *)v4;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mPanel, (int32_t)v4, v5, v6);
}


void UIGrid__OnValidate(UIGrid_o *this, const MethodInfo *method)
{
  if ( (byte_4CBA98A & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Application_TypeInfo);
    sub_1C6BA08(&NGUITools_TypeInfo);
    byte_4CBA98A = 1;
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
  __int64 v4; // x1
  int32_t v5; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4CBA988 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBA988 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_11;
  v5 = UnityEngine_Transform__get_childCount(transform, 0) - 1;
  if ( v5 >= 0 )
  {
    while ( 1 )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !transform )
        break;
      transform = UnityEngine_Transform__GetChild(transform, v5, 0);
      if ( !transform )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)transform,
                                             0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71659676(gameObject, 0);
      if ( --v5 < 0 )
        return;
    }
LABEL_11:
    sub_1C6BC60(transform, v4);
  }
}


bool UIGrid__RemoveChild(UIGrid_o *this, UnityEngine_Transform_o *t, const MethodInfo *method)
{
  System_Collections_Generic_List_Transform__o *ChildList; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Transform__o *v7; // x21
  bool v8; // w20

  if ( (byte_4CBA987 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Transform__Remove__);
    byte_4CBA987 = 1;
  }
  ChildList = UIGrid__GetChildList(this, (const MethodInfo *)t);
  if ( !ChildList )
    sub_1C6BC60(0, v6);
  v7 = ChildList;
  v8 = System_Collections_Generic_List_object___Remove(
         (System_Collections_Generic_List_object__o *)ChildList,
         (Il2CppObject *)t,
         (const MethodInfo_3801E9C *)Method_System_Collections_Generic_List_Transform__Remove__);
  if ( v8 )
    ((void (__fastcall *)(UIGrid_o *, System_Collections_Generic_List_Transform__o *, const MethodInfo *))this->klass->vtable._9_ResetPosition.methodPtr)(
      this,
      v7,
      this->klass->vtable._9_ResetPosition.method);
  return v8;
}


void UIGrid__Reposition(UIGrid_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  int32_t sorting; // w8
  System_Collections_Generic_List_Transform__o *ChildList; // x0
  const MethodInfo *v7; // x1
  struct UIGrid_OnReposition_o *onReposition; // x8

  if ( (byte_4CBA98B & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Application_TypeInfo);
    sub_1C6BA08(&NGUITools_TypeInfo);
    byte_4CBA98B = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0) && !this->fields.mInitDone )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive_49647220(gameObject, 0) )
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
  __int64 v6; // x1
  int32_t size; // w26
  UnityEngine_Transform_o *v8; // x19
  int v9; // w27
  int v10; // w28
  int v11; // w25
  int v12; // w24
  int32_t v13; // w22
  UnityEngine_Component_o *v14; // x23
  int32_t arrangement; // w8
  float z; // s8
  float x; // s9
  float v18; // s0
  float y; // s10
  float v20; // s9
  double v21; // d0
  __int64 v22; // x8
  float v23; // s0
  float v24; // s1
  float cellWidth; // s2
  float v26; // s0
  float v27; // s3
  float v28; // s1
  float cellHeight; // s0
  float v30; // s10
  double v31; // d0
  __int64 v32; // x8
  float v33; // s1
  UnityEngine_GameObject_o *gameObject; // x0
  _BOOL4 v35; // w8
  int32_t pivot; // w0
  UnityEngine_Vector2_o PivotOffset; // kr00_8
  int32_t v38; // w8
  float v39; // s3
  int v40; // w22
  int v41; // w21
  float v42; // s2
  float v43; // s10
  float v44; // s9
  float v45; // s11
  float v46; // s12
  float v47; // s8
  int32_t v48; // w20
  float v49; // s9
  UnityEngine_Transform_o *v50; // x21
  Il2CppObject *Component_object; // x22
  float v52; // s1
  double iptr; // [xsp+8h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CBA98D & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Application_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_SpringPosition___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Transform__get_Item__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBA98D = 1;
  }
  this->fields.mReposition = 0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !list )
    goto LABEL_78;
  size = list->fields._size;
  v8 = (UnityEngine_Transform_o *)transform;
  if ( size >= 1 )
  {
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      transform = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)list,
                    v13,
                    (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_Transform__get_Item__);
      if ( !transform )
        goto LABEL_78;
      v14 = (UnityEngine_Component_o *)transform;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
      arrangement = this->fields.arrangement;
      z = localPosition.fields.z;
      if ( arrangement != 2 )
      {
        cellWidth = this->fields.cellWidth;
        v26 = (float)v9;
        v27 = (float)v10;
        v28 = -this->fields.cellHeight;
        if ( !arrangement )
        {
          x = cellWidth * v26;
          y = v27 * v28;
          goto LABEL_36;
        }
        x = cellWidth * v27;
        goto LABEL_35;
      }
      x = localPosition.fields.x;
      v18 = this->fields.cellWidth;
      y = localPosition.fields.y;
      if ( v18 > 0.0 )
        break;
LABEL_23:
      cellHeight = this->fields.cellHeight;
      if ( cellHeight <= 0.0 )
        goto LABEL_36;
      v30 = y / cellHeight;
      v31 = modf(v30, &iptr);
      if ( v30 >= 0.0 )
      {
        if ( v31 == 0.5 )
        {
          v32 = (__int64)iptr;
          v26 = iptr;
          v33 = v26 + 1.0;
LABEL_29:
          if ( (v32 & 1) != 0 )
            v26 = v33;
          goto LABEL_34;
        }
        v26 = floorf(v30 + 0.5);
      }
      else
      {
        if ( v31 == -0.5 )
        {
          v32 = (__int64)iptr;
          v26 = iptr;
          v33 = v26 + -1.0;
          goto LABEL_29;
        }
        v26 = ceilf(v30 + -0.5);
      }
LABEL_34:
      v28 = this->fields.cellHeight;
LABEL_35:
      y = v26 * v28;
LABEL_36:
      if ( !this->fields.animateSmoothly )
        goto LABEL_42;
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      if ( UnityEngine_Application__get_isPlaying(0) )
      {
        gameObject = UnityEngine_Component__get_gameObject(v14, 0);
        v55.fields.x = x;
        v55.fields.y = y;
        v55.fields.z = z;
        transform = SpringPosition__Begin(gameObject, v55, 15.0, 0);
        if ( !transform )
          goto LABEL_78;
        *(_WORD *)((char *)transform + 49) = 257;
      }
      else
      {
LABEL_42:
        v56.fields.x = x;
        v56.fields.y = y;
        v56.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v14, v56, 0);
      }
      if ( v11 <= v9 )
        v11 = v9;
      if ( v12 <= v10 )
        v12 = v10;
      v35 = v9 + 1 < this->fields.maxPerLine || this->fields.maxPerLine < 1;
      ++v13;
      if ( v35 )
        ++v9;
      else
        v9 = 0;
      v10 += !v35;
      if ( size == v13 )
        goto LABEL_53;
    }
    v20 = x / v18;
    v21 = modf(v20, &iptr);
    if ( v20 >= 0.0 )
    {
      if ( v21 == 0.5 )
      {
        v22 = (__int64)iptr;
        v23 = iptr;
        v24 = v23 + 1.0;
LABEL_17:
        if ( (v22 & 1) != 0 )
          v23 = v24;
        goto LABEL_22;
      }
      v23 = floorf(v20 + 0.5);
    }
    else
    {
      if ( v21 == -0.5 )
      {
        v22 = (__int64)iptr;
        v23 = iptr;
        v24 = v23 + -1.0;
        goto LABEL_17;
      }
      v23 = ceilf(v20 + -0.5);
    }
LABEL_22:
    x = v23 * this->fields.cellWidth;
    goto LABEL_23;
  }
  v12 = 0;
  v11 = 0;
LABEL_53:
  pivot = this->fields.pivot;
  if ( pivot )
  {
    PivotOffset = NGUIMath__GetPivotOffset(pivot, 0);
    v38 = this->fields.arrangement;
    v39 = fminf(PivotOffset.fields.x, 1.0);
    if ( v38 )
      v40 = v12;
    else
      v40 = v11;
    if ( v38 )
      v41 = v11;
    else
      v41 = v12;
    v42 = fminf(PivotOffset.fields.y, 1.0);
    if ( PivotOffset.fields.x < 0.0 )
      v43 = 0.0;
    else
      v43 = v39;
    if ( PivotOffset.fields.y < 0.0 )
      v44 = 0.0;
    else
      v44 = v42;
    if ( !v8 )
      goto LABEL_78;
    v46 = this->fields.cellWidth;
    v45 = this->fields.cellHeight;
    if ( UnityEngine_Transform__get_childCount(v8, 0) >= 1 )
    {
      v47 = (float)((float)(v46 * (float)v40) * v43) + 0.0;
      v48 = 0;
      v49 = (float)(v45 * (float)-v41) + (float)(v44 * (float)(0.0 - (float)(v45 * (float)-v41)));
      while ( 1 )
      {
        transform = UnityEngine_Transform__GetChild(v8, v48, 0);
        if ( !transform )
          break;
        v50 = (UnityEngine_Transform_o *)transform;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)transform,
                             (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_SpringPosition___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !Component_object )
            break;
          v52 = *((float *)&Component_object[2].klass + 1) - v49;
          *(float *)&Component_object[2].klass = *(float *)&Component_object[2].klass - v47;
          *((float *)&Component_object[2].klass + 1) = v52;
        }
        else
        {
          v57 = UnityEngine_Transform__get_localPosition(v50, 0);
          v57.fields.x = v57.fields.x - v47;
          v57.fields.y = v57.fields.y - v49;
          UnityEngine_Transform__set_localPosition(v50, v57, 0);
        }
        if ( ++v48 >= UnityEngine_Transform__get_childCount(v8, 0) )
          return;
      }
LABEL_78:
      sub_1C6BC60(transform, v6);
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
    sub_1C6BC60(a, b);
  v4 = (System_String_o *)a;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)b, 0);
  return System_String__Compare(v4, name, 0);
}


int32_t UIGrid__SortHorizontal(UnityEngine_Transform_o *a, UnityEngine_Transform_o *b, const MethodInfo *method)
{
  UnityEngine_Vector3_o localPosition; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  if ( !a || (localPosition = UnityEngine_Transform__get_localPosition(a, 0), !b) )
    sub_1C6BC60(a, b);
  v6 = UnityEngine_Transform__get_localPosition(b, 0);
  return System_Single__CompareTo_65559812(v6.fields.x, v6.fields.y, (const MethodInfo *)&localPosition);
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
    sub_1C6BC60(a, b);
  }
  v7 = UnityEngine_Transform__get_localPosition(a, 0);
  return System_Single__CompareTo_65559812(v7.fields.y, v7.fields.y, (const MethodInfo *)v5);
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AA8C4C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA8C0C;
}


System_IAsyncResult_o *UIGrid_OnReposition__BeginInvoke(
        UIGrid_OnReposition_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, &v5, callback, object);
}


void UIGrid_OnReposition__EndInvoke(
        UIGrid_OnReposition_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
}


void UIGrid_OnReposition__Invoke(UIGrid_OnReposition_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}