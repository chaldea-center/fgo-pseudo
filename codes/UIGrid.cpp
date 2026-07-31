void UIGrid___ctor(UIGrid_o *this, const MethodInfo *method)
{
  *(int32x2_t *)&this->fields.cellWidth = vdup_n_s32(0x43480000u);
  UIWidgetContainer___ctor((UIWidgetContainer_o *)this, 0);
}


void UIGrid__AddChild(UIGrid_o *this, UnityEngine_Transform_o *trans, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  UIGrid__AddChild_56035008(this, trans, 0, v3);
}


void UIGrid__AddChild_56035008(UIGrid_o *this, UnityEngine_Transform_o *trans, bool sort, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  System_Collections_Generic_List_Transform__o *ChildList; // x0

  if ( (byte_593CD17 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CD17 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, trans);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)trans, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !trans )
      sub_21FFECC(transform, v7);
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
  __int64 v7; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_593CD1D & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CD1D = 1;
  }
  mPanel = (UnityEngine_Object_o *)this->fields.mPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mPanel, 0, 0) )
  {
    v4 = this->fields.mPanel;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !v4 )
      goto LABEL_14;
    UIPanel__ConstrainTargetToBounds_55980736(v4, transform, 1, 0);
    transform = (UnityEngine_Transform_o *)this->fields.mPanel;
    if ( !transform )
      goto LABEL_14;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
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
      sub_21FFECC(transform, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Transform_o *UIGrid__GetChild(UIGrid_o *this, int32_t index, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ChildList; // x0
  __int64 v6; // x1

  if ( (byte_593CD15 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Transform__get_Item__);
    byte_593CD15 = 1;
  }
  ChildList = (System_Collections_Generic_List_object__o *)UIGrid__GetChildList(this, *(const MethodInfo **)&index);
  if ( !ChildList )
    sub_21FFECC(0, v6);
  if ( ChildList->fields._size <= index )
    return 0;
  else
    return (UnityEngine_Transform_o *)System_Collections_Generic_List_object___get_Item(
                                        ChildList,
                                        index,
                                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_Transform__get_Item__);
}


System_Collections_Generic_List_Transform__o *UIGrid__GetChildList(UIGrid_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x21
  System_Collections_Generic_List_object__o *v4; // x19
  UnityEngine_Transform_o *childCount; // x0
  System_Comparison_T__o *onCustomSort; // x1
  int32_t i; // w22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  UnityEngine_Object_o *v14; // x23
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x24
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  int32_t sorting; // w8
  System_Comparison_T__o *v22; // x0
  intptr_t *v23; // x8
  System_Comparison_T__o *v24; // x20
  System_Collections_Generic_List_object__o *v25; // x0

  if ( (byte_593CD14 & 1) == 0 )
  {
    sub_21FFC50(&System_Comparison_Transform__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Transform__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Transform__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Transform___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_Transform__TypeInfo);
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_UIGrid_SortByName__);
    sub_21FFC50(&Method_UIGrid_SortHorizontal__);
    sub_21FFC50(&Method_UIGrid_SortVertical__);
    byte_593CD14 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_Transform___ctor__);
  if ( !transform )
    goto LABEL_36;
  childCount = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0);
  if ( (int)childCount >= 1 )
  {
    for ( i = 0; i < (int)childCount; ++i )
    {
      childCount = UnityEngine_Transform__GetChild(transform, i, 0);
      v14 = (UnityEngine_Object_o *)childCount;
      if ( !this->fields.hideInactive )
        goto LABEL_39;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, onCustomSort);
      childCount = (UnityEngine_Transform_o *)UnityEngine_Object__op_Implicit(v14, 0);
      if ( ((unsigned __int8)childCount & 1) != 0 )
      {
        if ( !v14 )
          goto LABEL_36;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0);
        if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v15);
        childCount = (UnityEngine_Transform_o *)NGUITools__GetActive_56206348(gameObject, 0);
        if ( ((unsigned __int8)childCount & 1) != 0 )
        {
LABEL_39:
          if ( !v4 )
            goto LABEL_36;
          items = v4->fields._items;
          v18 = Method_System_Collections_Generic_List_Transform__Add__;
          ++v4->fields._version;
          if ( !items )
            goto LABEL_36;
          size = v4->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v4,
              (Il2CppObject *)v14,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v14;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v14, v8, v9, v10, v11, v12, v13);
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
        v22 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_Transform__TypeInfo);
        v23 = &Method_UIGrid_SortVertical__;
        break;
      case 2:
        v22 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_Transform__TypeInfo);
        v23 = &Method_UIGrid_SortHorizontal__;
        break;
      case 1:
        v22 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_Transform__TypeInfo);
        v23 = &Method_UIGrid_SortByName__;
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
          v25 = v4;
          goto LABEL_30;
        }
LABEL_36:
        sub_21FFECC(childCount, onCustomSort);
    }
    v24 = v22;
    System_Comparison_object____ctor(v22, 0, *v23, 0);
    if ( v4 )
    {
      v25 = v4;
      onCustomSort = v24;
LABEL_30:
      System_Collections_Generic_List_object___Sort_71636404(
        v25,
        onCustomSort,
        (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_Transform__Sort__);
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

  if ( (byte_593CD16 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Transform__IndexOf__);
    byte_593CD16 = 1;
  }
  ChildList = UIGrid__GetChildList(this, (const MethodInfo *)trans);
  if ( !ChildList )
    sub_21FFECC(0, v6);
  return System_Collections_Generic_List_object___IndexOf(
           (System_Collections_Generic_List_object__o *)ChildList,
           (Il2CppObject *)trans,
           (const MethodInfo_44507B0 *)Method_System_Collections_Generic_List_Transform__IndexOf__);
}


void UIGrid__Init(UIGrid_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  Il2CppObject *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_593CD1A & 1) == 0 )
  {
    sub_21FFC50(&Method_NGUITools_FindInParents_UIPanel___);
    sub_21FFC50(&NGUITools_TypeInfo);
    byte_593CD1A = 1;
  }
  this->fields.mInitDone = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v3);
  v5 = NGUITools__FindInParents_object_(
         gameObject,
         (const MethodInfo_38BD680 *)Method_NGUITools_FindInParents_UIPanel___);
  this->fields.mPanel = (struct UIPanel_o *)v5;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mPanel, (int32_t)v5, v6, v7, v8, v9, v10, v11);
}


void UIGrid__OnValidate(UIGrid_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_593CD1B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&NGUITools_TypeInfo);
    byte_593CD1B = 1;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  if ( !UnityEngine_Application__get_isPlaying(0) )
  {
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v3);
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
  int32_t childCount; // w0
  int v6; // w20
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_593CD19 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CD19 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_12;
  childCount = UnityEngine_Transform__get_childCount(transform, 0);
  if ( childCount - 1 >= 0 )
  {
    v6 = childCount;
    while ( 1 )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !transform )
        break;
      transform = UnityEngine_Transform__GetChild(transform, --v6, 0);
      if ( !transform )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)transform,
                                             0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      UnityEngine_Object__Destroy_83246496(gameObject, 0);
      if ( v6 <= 0 )
        return;
    }
LABEL_12:
    sub_21FFECC(transform, v4);
  }
}


bool UIGrid__RemoveChild(UIGrid_o *this, UnityEngine_Transform_o *t, const MethodInfo *method)
{
  System_Collections_Generic_List_Transform__o *ChildList; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Transform__o *v7; // x21
  bool v8; // w20

  if ( (byte_593CD18 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Transform__Remove__);
    byte_593CD18 = 1;
  }
  ChildList = UIGrid__GetChildList(this, (const MethodInfo *)t);
  if ( !ChildList )
    sub_21FFECC(0, v6);
  v7 = ChildList;
  v8 = System_Collections_Generic_List_object___Remove(
         (System_Collections_Generic_List_object__o *)ChildList,
         (Il2CppObject *)t,
         (const MethodInfo_445101C *)Method_System_Collections_Generic_List_Transform__Remove__);
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
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  int32_t sorting; // w8
  System_Collections_Generic_List_Transform__o *ChildList; // x0
  const MethodInfo *v8; // x1
  struct UIGrid_OnReposition_o *onReposition; // x8

  if ( (byte_593CD1C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&NGUITools_TypeInfo);
    byte_593CD1C = 1;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  if ( UnityEngine_Application__get_isPlaying(0) && !this->fields.mInitDone )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v4);
    if ( NGUITools__GetActive_56206348(gameObject, 0) )
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
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v3);
    NGUITools__SetDirty((UnityEngine_Object_o *)this, 0);
  }
  ChildList = UIGrid__GetChildList(this, v3);
  ((void (__fastcall *)(UIGrid_o *, System_Collections_Generic_List_Transform__o *, const MethodInfo *))this->klass->vtable._9_ResetPosition.methodPtr)(
    this,
    ChildList,
    this->klass->vtable._9_ResetPosition.method);
  if ( this->fields.keepWithinPanel )
    UIGrid__ConstrainWithinPanel(this, v8);
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
  int v11; // w24
  int v12; // w25
  int32_t v13; // w22
  UnityEngine_Component_o *v14; // x23
  __int64 v15; // x1
  float z; // s8
  int32_t arrangement; // w8
  float cellWidth; // s13
  float x; // s9
  float y; // s10
  float v21; // s9
  double v22; // d0
  float v23; // s1
  __int64 v24; // x8
  float v25; // s0
  float v26; // s0
  float v27; // s1
  UnityEngine_GameObject_o *gameObject; // x0
  int v29; // w8
  float cellHeight; // s13
  float v31; // s10
  double v32; // d0
  float v33; // s1
  __int64 v34; // x8
  float v35; // s0
  int32_t pivot; // w0
  UnityEngine_Vector2_o PivotOffset; // kr00_8
  int32_t v38; // w8
  int v39; // w21
  int v40; // w22
  float v41; // s8
  float v42; // s9
  int32_t v43; // w20
  float32x2_t v49; // d2
  float32x2_t v50; // d3
  unsigned __int64 v51; // d0
  float v52; // s8
  UnityEngine_Transform_o *v53; // x21
  __int64 v54; // x1
  Il2CppObject *Component_object; // x22
  float32x2_t v56; // [xsp+10h] [xbp-C0h]
  double iptr; // [xsp+28h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593CD1E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_SpringPosition___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Transform__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CD1E = 1;
  }
  this->fields.mReposition = 0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !list )
    goto LABEL_72;
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
                    (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_Transform__get_Item__);
      if ( !transform )
        goto LABEL_72;
      v14 = (UnityEngine_Component_o *)transform;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
      z = localPosition.fields.z;
      arrangement = this->fields.arrangement;
      cellWidth = this->fields.cellWidth;
      if ( !arrangement )
      {
        v26 = (float)v9;
        v27 = (float)v10;
LABEL_15:
        x = cellWidth * v26;
        y = -(float)(this->fields.cellHeight * v27);
        goto LABEL_16;
      }
      if ( arrangement != 2 )
      {
        v26 = (float)v10;
        v27 = (float)v9;
        goto LABEL_15;
      }
      x = localPosition.fields.x;
      y = localPosition.fields.y;
      if ( cellWidth > 0.0 )
        break;
LABEL_40:
      cellHeight = this->fields.cellHeight;
      if ( cellHeight <= 0.0 )
        goto LABEL_16;
      v31 = y / cellHeight;
      v32 = modf(v31, &iptr);
      if ( v31 >= 0.0 )
      {
        if ( v32 == 0.5 )
        {
          v33 = iptr;
          v34 = (__int64)iptr;
          v35 = v33 + 1.0;
LABEL_46:
          if ( (v34 & 1) == 0 )
            v35 = v33;
          goto LABEL_51;
        }
        v35 = floorf(v31 + 0.5);
      }
      else
      {
        if ( v32 == -0.5 )
        {
          v33 = iptr;
          v34 = (__int64)iptr;
          v35 = v33 + -1.0;
          goto LABEL_46;
        }
        v35 = ceilf(v31 + -0.5);
      }
LABEL_51:
      y = cellHeight * v35;
LABEL_16:
      if ( !this->fields.animateSmoothly )
        goto LABEL_22;
      if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v15);
      if ( UnityEngine_Application__get_isPlaying(0) )
      {
        gameObject = UnityEngine_Component__get_gameObject(v14, 0);
        v59.fields.x = x;
        v59.fields.y = y;
        v59.fields.z = z;
        transform = SpringPosition__Begin(gameObject, v59, 15.0, 0);
        if ( !transform )
          goto LABEL_72;
        *(_WORD *)((char *)transform + 49) = 257;
      }
      else
      {
LABEL_22:
        v60.fields.x = x;
        v60.fields.y = y;
        v60.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v14, v60, 0);
      }
      if ( v11 <= v9 )
        v11 = v9;
      ++v13;
      if ( v12 <= v10 )
        v12 = v10;
      v29 = v9 + 1 >= this->fields.maxPerLine && this->fields.maxPerLine > 0;
      if ( v9 + 1 >= this->fields.maxPerLine && this->fields.maxPerLine > 0 )
        v9 = 0;
      else
        ++v9;
      v10 += v29;
      if ( size == v13 )
        goto LABEL_53;
    }
    v21 = localPosition.fields.x / cellWidth;
    v22 = modf((float)(localPosition.fields.x / cellWidth), &iptr);
    if ( v21 >= 0.0 )
    {
      if ( v22 == 0.5 )
      {
        v23 = iptr;
        v24 = (__int64)iptr;
        v25 = v23 + 1.0;
LABEL_34:
        if ( (v24 & 1) == 0 )
          v25 = v23;
        goto LABEL_39;
      }
      v25 = floorf(v21 + 0.5);
    }
    else
    {
      if ( v22 == -0.5 )
      {
        v23 = iptr;
        v24 = (__int64)iptr;
        v25 = v23 + -1.0;
        goto LABEL_34;
      }
      v25 = ceilf(v21 + -0.5);
    }
LABEL_39:
    x = cellWidth * v25;
    goto LABEL_40;
  }
  v12 = 0;
  v11 = 0;
LABEL_53:
  pivot = this->fields.pivot;
  if ( pivot )
  {
    PivotOffset = NGUIMath__GetPivotOffset(pivot, 0);
    v38 = this->fields.arrangement;
    if ( v38 )
      v39 = v12;
    else
      v39 = v11;
    if ( v38 )
      v40 = v11;
    else
      v40 = v12;
    if ( !v8 )
      goto LABEL_72;
    v41 = this->fields.cellWidth;
    v42 = this->fields.cellHeight;
    if ( UnityEngine_Transform__get_childCount(v8, 0) >= 1 )
    {
      v43 = 0;
      __asm { FMOV            V1.2S, #1.0 }
      v49.n64_f32[0] = v41 * (float)v39;
      v49.n64_f32[1] = 0.0 - (float)(v42 * (float)-v40);
      v50.n64_u32[0] = 0;
      v50.n64_f32[1] = v42 * (float)-v40;
      v51 = vadd_f32(
              vmul_f32(
                vbic_s8(
                  vbsl_s8(vcgt_f32((float32x2_t)PivotOffset, _D1), _D1, (int8x8_t)PivotOffset),
                  vcltz_f32((float32x2_t)PivotOffset)),
                v49),
              v50).n64_u64[0];
      v52 = *((float *)&v51 + 1);
      v56.n64_u64[0] = v51;
      while ( 1 )
      {
        transform = UnityEngine_Transform__GetChild(v8, v43, 0);
        if ( !transform )
          break;
        v53 = (UnityEngine_Transform_o *)transform;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)transform,
                             (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_SpringPosition___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54);
        transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !Component_object )
            break;
          Component_object[2].klass = (Il2CppClass *)vsub_f32((float32x2_t)Component_object[2].klass, v56).n64_u64[0];
        }
        else
        {
          v61 = UnityEngine_Transform__get_localPosition(v53, 0);
          v61.fields.y = v61.fields.y - v52;
          v61.fields.x = v61.fields.x - v56.n64_f32[0];
          UnityEngine_Transform__set_localPosition(v53, v61, 0);
        }
        if ( ++v43 >= UnityEngine_Transform__get_childCount(v8, 0) )
          return;
      }
LABEL_72:
      sub_21FFECC(transform, v6);
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
    sub_21FFECC(a, b);
  v4 = (System_String_o *)a;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)b, 0);
  return System_String__Compare(v4, name, 0);
}


int32_t UIGrid__SortHorizontal(UnityEngine_Transform_o *a, UnityEngine_Transform_o *b, const MethodInfo *method)
{
  UnityEngine_Vector3_o localPosition; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  localPosition.fields.z = 0.0;
  *(_QWORD *)&localPosition.fields.x = 0;
  if ( !a || (localPosition = UnityEngine_Transform__get_localPosition(a, 0), !b) )
    sub_21FFECC(a, b);
  v6 = UnityEngine_Transform__get_localPosition(b, 0);
  return System_Single__CompareTo_77012320(v6.fields.x, v6.fields.y, (const MethodInfo *)&localPosition);
}


int32_t UIGrid__SortVertical(UnityEngine_Transform_o *a, UnityEngine_Transform_o *b, const MethodInfo *method)
{
  __int64 v5; // [xsp+0h] [xbp-30h] BYREF
  float z; // [xsp+8h] [xbp-28h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  z = 0.0;
  HIDWORD(v5) = 0;
  if ( !b
    || (localPosition = UnityEngine_Transform__get_localPosition(b, 0),
        HIDWORD(v5) = LODWORD(localPosition.fields.y),
        z = localPosition.fields.z,
        !a) )
  {
    sub_21FFECC(a, b);
  }
  v8 = UnityEngine_Transform__get_localPosition(a, 0);
  return System_Single__CompareTo_77012320(v8.fields.y, v8.fields.y, (const MethodInfo *)((char *)&v5 + 4));
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2003A30;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_20039F0;
}


System_IAsyncResult_o *UIGrid_OnReposition__BeginInvoke(
        UIGrid_OnReposition_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  return (System_IAsyncResult_o *)sub_21FFC04(this, &v5, callback, object);
}


void UIGrid_OnReposition__EndInvoke(
        UIGrid_OnReposition_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void UIGrid_OnReposition__Invoke(UIGrid_OnReposition_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}