void UITable___ctor(UITable_o *this, const MethodInfo *method)
{
  int v3; // w8

  v3 = (unsigned __int8)byte_59699C0;
  this->fields.hideInactive = 1;
  if ( !v3 )
  {
    sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    byte_59699C0 = 1;
  }
  this->fields.padding = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


System_Collections_Generic_List_Transform__o *UITable__GetChildList(UITable_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_object__o *v24; // x0
  System_Comparison_T__o *v25; // x20

  if ( (byte_5975081 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_Transform__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform___ctor__);
    sub_2213A60(&System_Collections_Generic_List_Transform__TypeInfo);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_UIGrid_SortByName__);
    sub_2213A60(&Method_UIGrid_SortHorizontal__);
    sub_2213A60(&Method_UIGrid_SortVertical__);
    byte_5975081 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_Transform___ctor__);
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
        childCount = (UnityEngine_Transform_o *)NGUITools__GetActive_56411004(gameObject, 0);
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
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v14;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v14, v8, v9, v10, v11, v12, v13);
          }
        }
      }
      childCount = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0);
    }
  }
  sorting = this->fields.sorting;
  if ( sorting > 1 )
  {
    if ( sorting == 2 )
    {
      v22 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_Transform__TypeInfo);
      v23 = &Method_UIGrid_SortHorizontal__;
    }
    else
    {
      if ( sorting != 3 )
        goto LABEL_27;
      v22 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_Transform__TypeInfo);
      v23 = &Method_UIGrid_SortVertical__;
    }
LABEL_31:
    v25 = v22;
    System_Comparison_object____ctor(v22, 0, *v23, 0);
    if ( v4 )
    {
      v24 = v4;
      onCustomSort = v25;
      goto LABEL_33;
    }
    goto LABEL_36;
  }
  if ( sorting )
  {
    if ( sorting == 1 )
    {
      v22 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_Transform__TypeInfo);
      v23 = &Method_UIGrid_SortByName__;
      goto LABEL_31;
    }
LABEL_27:
    onCustomSort = (System_Comparison_T__o *)this->fields.onCustomSort;
    if ( !onCustomSort )
    {
      ((void (__fastcall *)(UITable_o *, System_Collections_Generic_List_object__o *, const MethodInfo *))this->klass->vtable._4_Sort.methodPtr)(
        this,
        v4,
        this->klass->vtable._4_Sort.method);
      return (System_Collections_Generic_List_Transform__o *)v4;
    }
    if ( v4 )
    {
      v24 = v4;
LABEL_33:
      System_Collections_Generic_List_object___Sort_71849708(
        v24,
        onCustomSort,
        (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_Transform__Sort__);
      return (System_Collections_Generic_List_Transform__o *)v4;
    }
LABEL_36:
    sub_2213CDC(childCount, onCustomSort);
  }
  return (System_Collections_Generic_List_Transform__o *)v4;
}


void UITable__Init(UITable_o *this, const MethodInfo *method)
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

  if ( (byte_5975083 & 1) == 0 )
  {
    sub_2213A60(&Method_NGUITools_FindInParents_UIPanel___);
    sub_2213A60(&NGUITools_TypeInfo);
    byte_5975083 = 1;
  }
  this->fields.mInitDone = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v3);
  v5 = NGUITools__FindInParents_object_(
         gameObject,
         (const MethodInfo_38F0B48 *)Method_NGUITools_FindInParents_UIPanel___);
  this->fields.mPanel = (struct UIPanel_o *)v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mPanel, (int32_t)v5, v6, v7, v8, v9, v10, v11);
}


void UITable__LateUpdate(UITable_o *this, const MethodInfo *method)
{
  if ( this->fields.mReposition )
    ((void (__fastcall *)(UITable_o *, const MethodInfo *))this->klass->vtable._8_Reposition.methodPtr)(
      this,
      this->klass->vtable._8_Reposition.method);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
}


void UITable__OnValidate(UITable_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_5975084 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&NGUITools_TypeInfo);
    byte_5975084 = 1;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  if ( !UnityEngine_Application__get_isPlaying(0) )
  {
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v3);
    if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
      ((void (__fastcall *)(UITable_o *, const MethodInfo *))this->klass->vtable._8_Reposition.methodPtr)(
        this,
        this->klass->vtable._8_Reposition.method);
  }
}


void UITable__Reposition(UITable_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x20
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_Transform__o *ChildList; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Transform__o *v9; // x1
  UnityEngine_Object_o *mPanel; // x21
  __int64 v11; // x1
  Il2CppObject *Component_object; // x20
  struct UITable_OnReposition_o *onReposition; // x8

  if ( (byte_5975086 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975086 = 1;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  if ( UnityEngine_Application__get_isPlaying(0) && !this->fields.mInitDone )
  {
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v3);
    if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
      ((void (__fastcall *)(UITable_o *, const MethodInfo *))this->klass->vtable._6_Init.methodPtr)(
        this,
        this->klass->vtable._6_Init.method);
  }
  this->fields.mReposition = 0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  ChildList = UITable__GetChildList(this, v5);
  if ( !ChildList )
    goto LABEL_28;
  v9 = ChildList;
  if ( ChildList->fields._size >= 1 )
    UITable__RepositionVariableSize(this, ChildList, v8);
  if ( this->fields.keepWithinPanel )
  {
    mPanel = (UnityEngine_Object_o *)this->fields.mPanel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( UnityEngine_Object__op_Inequality(mPanel, 0, 0) )
    {
      ChildList = (System_Collections_Generic_List_Transform__o *)this->fields.mPanel;
      if ( !ChildList )
        goto LABEL_28;
      UIPanel__ConstrainTargetToBounds_56185392((UIPanel_o *)ChildList, transform, 1, 0);
      ChildList = (System_Collections_Generic_List_Transform__o *)this->fields.mPanel;
      if ( !ChildList )
        goto LABEL_28;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)ChildList,
                           (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      ChildList = (System_Collections_Generic_List_Transform__o *)UnityEngine_Object__op_Inequality(
                                                                    (UnityEngine_Object_o *)Component_object,
                                                                    0,
                                                                    0);
      if ( ((unsigned __int8)ChildList & 1) != 0 )
      {
        if ( Component_object )
        {
          ((void (__fastcall *)(Il2CppObject *, __int64, const MethodInfo *))Component_object->klass->vtable[8].methodPtr)(
            Component_object,
            1,
            Component_object->klass->vtable[8].method);
          goto LABEL_25;
        }
LABEL_28:
        sub_2213CDC(ChildList, v7);
      }
    }
  }
LABEL_25:
  onReposition = this->fields.onReposition;
  if ( onReposition )
    ((void (__fastcall *)(intptr_t, intptr_t))onReposition->fields.invoke_impl)(
      onReposition->fields.method_code,
      onReposition->fields.method);
}


void UITable__RepositionVariableSize(
        UITable_o *this,
        System_Collections_Generic_List_Transform__o *children,
        const MethodInfo *method)
{
  UITable_o *v4; // x19
  int32_t columns; // w22
  int v6; // w23
  __int64 v7; // x21
  __int64 v8; // x22
  __int64 v9; // x0
  int32_t size; // w27
  __int64 v11; // x23
  unsigned int v12; // w28
  unsigned int v13; // w29
  int32_t v14; // w24
  Il2CppObject *Item; // x25
  const MethodInfo *v16; // x4
  float z; // s10
  float32x2_t v18; // d12
  float32x2_t v19; // d13
  float v20; // s11
  __int64 v21; // x8
  __int64 v22; // x9
  float32x2_t v23; // d3
  float v24; // s1
  __int64 v25; // x9
  float32x2_t v26; // d4
  float v27; // s5
  float32x2_t v28; // d3
  float v29; // s1
  float32x2_t v30; // d6
  float32x2_t v31; // d4
  float v32; // s7
  float v33; // s1
  float32x2_t v34; // d3
  float v35; // s2
  float32x2_t v36; // d4
  float v37; // s5
  float v38; // s0
  int8x8_t v39; // d1
  __int64 v40; // x9
  float v41; // s2
  int8x8_t v42; // d3
  float v43; // s6
  float v44; // s7
  float32x2_t v45; // d18
  float v46; // s16
  float v47; // s6
  int8x8_t v48; // d7
  int8x8_t v49; // d17
  int8x8_t v50; // d18
  int8x8_t v51; // d19
  float32x2_t v52; // d7
  float32x2_t v53; // d17
  float32x2_t v54; // d17
  float v55; // s6
  float32x2_t v56; // d7
  float v57; // s16
  int8x8_t v58; // d4
  int8x8_t v59; // d7
  float v60; // s5
  float v61; // s6
  int8x8_t v62; // d16
  int8x8_t v63; // d17
  float32x2_t v64; // d4
  float32x2_t v65; // d7
  float32x2_t v66; // d7
  float v67; // s6
  __int64 v68; // x8
  float v69; // s4
  float v70; // s5
  float32x2_t v71; // d16
  float v72; // s6
  float v73; // s4
  int8x8_t v74; // d5
  int8x8_t v75; // d7
  int8x8_t v76; // d16
  int8x8_t v77; // d17
  float32x2_t v78; // d4
  float v79; // s0
  float32x2_t v80; // d1
  float v81; // s5
  float32x2_t v82; // d4
  float v83; // s6
  float v84; // s0
  int8x8_t v85; // d7
  int8x8_t v86; // d1
  int8x8_t v87; // d4
  int8x8_t v88; // d5
  float32x2_t v89; // d4
  float32x2_t v90; // d1
  float32x2_t v91; // d1
  float v92; // s0
  int v93; // w8
  const MethodInfo *v94; // x1
  UnityEngine_Vector2_o PivotOffset; // kr30_8
  int32_t v96; // w26
  unsigned int v97; // w28
  float v98; // s8
  float v99; // s13
  unsigned int v100; // w27
  int32_t v101; // w24
  float x; // s3
  float v103; // s5
  float y; // s0
  __int64 v105; // x8
  __int64 v106; // x8
  UnityEngine_Transform_o *v107; // x25
  __int64 v108; // x10
  __int64 v109; // x9
  float *v110; // x8
  float v111; // s15
  float v112; // s12
  float v113; // s14
  float v114; // s10
  float v115; // s9
  float v116; // s11
  float v117; // s0
  float v119; // s3
  int v120; // w8
  int32_t pivot; // w0
  UnityEngine_Vector2_o v122; // kr38_8
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v124; // x4
  float v125; // s8
  UnityEngine_Transform_o *v126; // x19
  int32_t v127; // w20
  float32x2_t v133; // d2
  float32x2_t v134; // d4
  unsigned __int64 v135; // d0
  unsigned __int64 v136; // d0
  float v137; // s8
  UnityEngine_Transform_o *v138; // x21
  __int64 v139; // x1
  Il2CppObject *Component_object; // x22
  float32x2_t v141; // d0
  float v142; // [xsp+8h] [xbp-F8h]
  float v143; // [xsp+Ch] [xbp-F4h]
  unsigned __int64 v144; // [xsp+10h] [xbp-F0h]
  __int64 v145; // [xsp+20h] [xbp-E0h]
  float v146; // [xsp+20h] [xbp-E0h]
  float v147; // [xsp+30h] [xbp-D0h]
  float32x2_t v148; // [xsp+30h] [xbp-D0h]
  UnityEngine_Bounds_o v149; // [xsp+48h] [xbp-B8h] BYREF
  UnityEngine_Vector3_o localScale; // 0:kr00_12.12
  UnityEngine_Vector3_o localPosition; // 0:kr20_12.12
  UnityEngine_Vector3_o v152; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v153; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_5975085 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Bounds____TypeInfo);
    sub_2213A60(&UnityEngine_Bounds___TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SpringPosition___);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__get_Item__);
    this = (UITable_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975085 = 1;
  }
  columns = v4->fields.columns;
  if ( columns < 1 )
  {
    if ( !children )
      goto LABEL_79;
    columns = children->fields._size;
    v6 = 1;
  }
  else
  {
    if ( !children )
      goto LABEL_79;
    v6 = children->fields._size / columns + 1;
  }
  *(_QWORD *)&v149.fields.m_Center.fields.x = v6;
  *(_QWORD *)&v149.fields.m_Center.fields.z = columns;
  v7 = sub_2213B28(UnityEngine_Bounds____TypeInfo, &v149);
  v8 = sub_2213B20(UnityEngine_Bounds___TypeInfo, (unsigned int)columns);
  v9 = sub_2213B20(UnityEngine_Bounds___TypeInfo, (unsigned int)v6);
  size = children->fields._size;
  v11 = v9;
  if ( size >= 1 )
  {
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v145 = v9 + 32;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)children,
               v14,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_Transform__get_Item__);
      this = (UITable_o *)NGUIMath__CalculateRelativeWidgetBounds_56362504(
                            &v149,
                            (UnityEngine_Transform_o *)Item,
                            (UnityEngine_Transform_o *)Item,
                            !v4->fields.hideInactive,
                            1,
                            v16);
      if ( !Item )
        break;
      z = v149.fields.m_Center.fields.z;
      v18.n64_u64[0] = *(unsigned __int64 *)&v149.fields.m_Center.fields.x;
      v19.n64_u64[0] = *(unsigned __int64 *)&v149.fields.m_Extents.fields.x;
      v20 = v149.fields.m_Extents.fields.z;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Item, 0);
      v141.n64_u32[0] = LODWORD(localScale.fields.x);
      if ( !v7 )
        break;
      v21 = *(_QWORD *)(v7 + 16);
      if ( v13 >= *(_DWORD *)v21 )
        goto LABEL_80;
      v22 = *(_QWORD *)(v21 + 16);
      if ( v12 >= (unsigned int)v22 )
        goto LABEL_80;
      v141.n64_u32[1] = LODWORD(localScale.fields.y);
      v23.n64_u64[0] = vmul_f32(vsub_f32(v18, v19), v141).n64_u64[0];
      v24 = (float)(z - v20) * localScale.fields.z;
      v25 = v7 + 24 * ((int)v12 + v22 * (int)v13);
      v26.n64_u64[0] = vmul_f32(vsub_f32(vadd_f32(v18, v19), v23), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v27 = (float)((float)(z + v20) - v24) * 0.5;
      v28.n64_u64[0] = vadd_f32(v23, v26).n64_u64[0];
      v29 = v24 + v27;
      v30.n64_u64[0] = vadd_f32(v26, v28).n64_u64[0];
      v31.n64_u64[0] = vsub_f32(v28, v26).n64_u64[0];
      v32 = v27 + v29;
      v33 = v29 - v27;
      v34.n64_u64[0] = vmul_f32(vsub_f32(vmul_f32(v141, v30), v31), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v35 = (float)((float)(localScale.fields.z * v32) - v33) * 0.5;
      v36.n64_u64[0] = vadd_f32(v31, v34).n64_u64[0];
      *(float32x2_t *)(v25 + 44) = v34;
      v37 = v33 + v35;
      *(float *)(v25 + 52) = v35;
      *(float32x2_t *)(v25 + 32) = v36;
      *(float *)(v25 + 40) = v33 + v35;
      if ( !v8 )
        break;
      if ( v12 >= *(_DWORD *)(v8 + 24) )
LABEL_80:
        sub_2213CE4(this);
      v38 = v37 - v35;
      v39.n64_u64[0] = vsub_f32(v36, v34).n64_u64[0];
      v40 = v8 + 32 + 24LL * (int)v12;
      v41 = v35 + v37;
      v42.n64_u64[0] = vadd_f32(v34, v36).n64_u64[0];
      v43 = *(float *)(v40 + 8);
      v44 = *(float *)(v40 + 20);
      v45.n64_u64[0] = *(unsigned __int64 *)(v40 + 12);
      v46 = v43 - v44;
      v47 = v43 + v44;
      v48.n64_u64[0] = vsub_f32(*(float32x2_t *)v40, v45).n64_u64[0];
      v49.n64_u64[0] = vadd_f32(*(float32x2_t *)v40, v45).n64_u64[0];
      v50.n64_u64[0] = vcgt_f32(v39, v48).n64_u64[0];
      v51.n64_u64[0] = vcgt_f32(v49, v39).n64_u64[0];
      if ( v46 >= v38 )
        v46 = v38;
      v52.n64_u64[0] = vbsl_s8(v50, v48, v39).n64_u64[0];
      v53.n64_u64[0] = vbsl_s8(v51, v49, v39).n64_u64[0];
      if ( v47 <= v38 )
        v47 = v38;
      v54.n64_u64[0] = vmul_f32(vsub_f32(v53, v52), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v55 = (float)(v47 - v46) * 0.5;
      v56.n64_u64[0] = vadd_f32(v52, v54).n64_u64[0];
      v57 = v46 + v55;
      v58.n64_u64[0] = vsub_f32(v56, v54).n64_u64[0];
      v59.n64_u64[0] = vadd_f32(v54, v56).n64_u64[0];
      v60 = v57 - v55;
      v61 = v55 + v57;
      v62.n64_u64[0] = vcgt_f32(v42, v58).n64_u64[0];
      v63.n64_u64[0] = vcgt_f32(v59, v42).n64_u64[0];
      if ( v60 >= v41 )
        v60 = v41;
      v64.n64_u64[0] = vbsl_s8(v62, v58, v42).n64_u64[0];
      v65.n64_u64[0] = vbsl_s8(v63, v59, v42).n64_u64[0];
      if ( v61 <= v41 )
        v61 = v41;
      v66.n64_u64[0] = vmul_f32(vsub_f32(v65, v64), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v67 = (float)(v61 - v60) * 0.5;
      *(float32x2_t *)(v40 + 12) = v66;
      *(float *)(v40 + 20) = v67;
      *(float32x2_t *)v40 = vadd_f32(v64, v66);
      *(float *)(v40 + 8) = v60 + v67;
      if ( !v11 )
        break;
      if ( v13 >= *(_DWORD *)(v11 + 24) )
        goto LABEL_80;
      v68 = v145 + 24LL * (int)v13;
      ++v14;
      v69 = *(float *)(v68 + 8);
      v70 = *(float *)(v68 + 20);
      v71.n64_u64[0] = *(unsigned __int64 *)(v68 + 12);
      v72 = v69 - v70;
      v73 = v69 + v70;
      v74.n64_u64[0] = vsub_f32(*(float32x2_t *)v68, v71).n64_u64[0];
      v75.n64_u64[0] = vadd_f32(*(float32x2_t *)v68, v71).n64_u64[0];
      v76.n64_u64[0] = vcgt_f32(v39, v74).n64_u64[0];
      v77.n64_u64[0] = vcgt_f32(v75, v39).n64_u64[0];
      if ( v72 >= v38 )
        v72 = v38;
      if ( v73 > v38 )
        v38 = v73;
      v78.n64_u64[0] = vbsl_s8(v76, v74, v39).n64_u64[0];
      v79 = (float)(v38 - v72) * 0.5;
      v80.n64_u64[0] = vmul_f32(vsub_f32(vbsl_s8(v77, v75, v39), v78), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v81 = v72 + v79;
      v82.n64_u64[0] = vadd_f32(v78, v80).n64_u64[0];
      v83 = (float)(v72 + v79) - v79;
      v84 = v79 + v81;
      v85.n64_u64[0] = vsub_f32(v82, v80).n64_u64[0];
      v86.n64_u64[0] = vadd_f32(v80, v82).n64_u64[0];
      v87.n64_u64[0] = vcgt_f32(v42, v85).n64_u64[0];
      v88.n64_u64[0] = vcgt_f32(v86, v42).n64_u64[0];
      if ( v83 >= v41 )
        v83 = v41;
      v89.n64_u64[0] = vbsl_s8(v87, v85, v42).n64_u64[0];
      v90.n64_u64[0] = vbsl_s8(v88, v86, v42).n64_u64[0];
      if ( v84 <= v41 )
        v84 = v41;
      v91.n64_u64[0] = vmul_f32(vsub_f32(v90, v89), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v92 = (float)(v84 - v83) * 0.5;
      *(float *)(v68 + 20) = v92;
      *(float32x2_t *)(v68 + 12) = v91;
      *(float32x2_t *)v68 = vadd_f32(v89, v91);
      *(float *)(v68 + 8) = v83 + v92;
      v93 = (int)(v12 + 1) >= v4->fields.columns && v4->fields.columns > 0;
      if ( (int)(v12 + 1) >= v4->fields.columns && v4->fields.columns > 0 )
        v12 = 0;
      else
        ++v12;
      v13 += v93;
      if ( size == v14 )
        goto LABEL_38;
    }
LABEL_79:
    sub_2213CDC(this, children);
  }
LABEL_38:
  PivotOffset = NGUIMath__GetPivotOffset(v4->fields.cellAlignment, (const MethodInfo *)children);
  v96 = children->fields._size;
  if ( v96 >= 1 )
  {
    v97 = 0;
    v98 = 0.0;
    v99 = 0.0;
    v100 = 0;
    v101 = 0;
    if ( PivotOffset.fields.x <= 1.0 )
      x = PivotOffset.fields.x;
    else
      x = 1.0;
    if ( PivotOffset.fields.x >= 0.0 )
      v103 = x;
    else
      v103 = 0.0;
    if ( PivotOffset.fields.y <= 1.0 )
      y = PivotOffset.fields.y;
    else
      y = 1.0;
    if ( PivotOffset.fields.y < 0.0 )
      y = 0.0;
    v142 = y;
    v143 = v103;
    do
    {
      this = (UITable_o *)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)children,
                            v101,
                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_Transform__get_Item__);
      if ( !v7 )
        goto LABEL_79;
      v105 = *(_QWORD *)(v7 + 16);
      if ( v100 >= *(_DWORD *)v105 )
        goto LABEL_80;
      v106 = *(_QWORD *)(v105 + 16);
      if ( v97 >= (unsigned int)v106 )
        goto LABEL_80;
      if ( !v8 )
        goto LABEL_79;
      if ( v97 >= *(_DWORD *)(v8 + 24) )
        goto LABEL_80;
      if ( !v11 )
        goto LABEL_79;
      if ( v100 >= *(_DWORD *)(v11 + 24) )
        goto LABEL_80;
      v107 = (UnityEngine_Transform_o *)this;
      if ( !this )
        goto LABEL_79;
      v108 = v8 + 24LL * (int)v97;
      v109 = v11 + 24LL * (int)v100;
      v110 = (float *)(v7 + 24 * ((int)v97 + v106 * (int)v100));
      v111 = *(float *)(v108 + 44);
      v112 = *(float *)(v109 + 36);
      v113 = *(float *)(v109 + 48);
      v146 = *(float *)(v108 + 32);
      v114 = v110[9];
      v115 = v110[11];
      v116 = v110[12];
      v147 = v110[8];
      v152.fields.z = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0).fields.z;
      v117 = (float)(v112 - v113) + (float)((float)((float)(v114 + v116) - (float)(v114 - v116)) - (float)(v112 + v113));
      if ( v4->fields.direction )
        v152.fields.y = (float)((float)(v99 + v116) - v114)
                      - (float)((float)((float)(v142 * v117) + 0.0) - v4->fields.padding.fields.y);
      else
        v152.fields.y = (float)((float)((float)-v99 - v116) - v114)
                      + (float)((float)(v117 + (float)(v142 * (float)(0.0 - v117))) - v4->fields.padding.fields.y);
      v119 = v4->fields.padding.fields.x;
      v152.fields.x = (float)((float)(v98 + v115) - v147)
                    - (float)((float)((float)(v143
                                            * (float)((float)(v146 - v111)
                                                    + (float)((float)((float)(v147 + v115) - (float)(v147 - v115))
                                                            - (float)(v146 + v111))))
                                    + 0.0)
                            - v119);
      v98 = v98 + (float)((float)(v111 + v111) + (float)(v119 + v119));
      UnityEngine_Transform__set_localPosition(v107, v152, 0);
      v120 = v4->fields.columns;
      if ( (int)++v97 >= v120 && v120 >= 1 )
      {
        v98 = 0.0;
        v97 = 0;
        ++v100;
        v99 = v99 + (float)((float)(v113 + v113) + (float)(v4->fields.padding.fields.y + v4->fields.padding.fields.y));
      }
    }
    while ( v96 != ++v101 );
  }
  pivot = v4->fields.pivot;
  if ( pivot )
  {
    v122 = NGUIMath__GetPivotOffset(pivot, v94);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0);
    NGUIMath__CalculateRelativeWidgetBounds_56362504(&v149, transform, transform, 0, 1, v124);
    v125 = v149.fields.m_Extents.fields.y;
    v144 = *(_QWORD *)&v149.fields.m_Extents.fields.x;
    this = (UITable_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0);
    if ( !this )
      goto LABEL_79;
    v126 = (UnityEngine_Transform_o *)this;
    if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0) >= 1 )
    {
      v127 = 0;
      __asm { FMOV            V1.2S, #1.0 }
      v133.n64_u64[0] = v144;
      v134.n64_u32[0] = vadd_f32(v133, v133).n64_u32[0];
      v133.n64_f32[1] = v125 * -2.0;
      v135 = vsub_f32(0, v133).n64_u64[0];
      v133.n64_u32[0] = 0;
      v134.n64_u32[1] = HIDWORD(v135);
      v136 = vadd_f32(
               vmul_f32(
                 vbic_s8(vbsl_s8(vcgt_f32((float32x2_t)v122, _D1), _D1, (int8x8_t)v122), vcltz_f32((float32x2_t)v122)),
                 v134),
               v133).n64_u64[0];
      v137 = *((float *)&v136 + 1);
      v148.n64_u64[0] = v136;
      while ( 1 )
      {
        this = (UITable_o *)UnityEngine_Transform__GetChild(v126, v127, 0);
        if ( !this )
          goto LABEL_79;
        v138 = (UnityEngine_Transform_o *)this;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)this,
                             (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SpringPosition___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v139);
        this = (UITable_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_79;
          Component_object[2].klass = (Il2CppClass *)vsub_f32((float32x2_t)Component_object[2].klass, v148).n64_u64[0];
        }
        else
        {
          localPosition = UnityEngine_Transform__get_localPosition(v138, 0);
          v153.fields.z = localPosition.fields.z;
          v153.fields.y = localPosition.fields.y - v137;
          v153.fields.x = localPosition.fields.x - v148.n64_f32[0];
          UnityEngine_Transform__set_localPosition(v138, v153, 0);
        }
        if ( ++v127 >= UnityEngine_Transform__get_childCount(v126, 0) )
          return;
      }
    }
  }
}


void UITable__Sort(UITable_o *this, System_Collections_Generic_List_Transform__o *list, const MethodInfo *method)
{
  System_Comparison_T__o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_5975082 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_Transform__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__Sort__);
    sub_2213A60(&Method_UIGrid_SortByName__);
    byte_5975082 = 1;
  }
  v4 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_Transform__TypeInfo);
  System_Comparison_object____ctor(v4, 0, Method_UIGrid_SortByName__, 0);
  if ( !list )
    sub_2213CDC(v5, v6);
  System_Collections_Generic_List_object___Sort_71849708(
    (System_Collections_Generic_List_object__o *)list,
    v4,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_Transform__Sort__);
}


void UITable__Start(UITable_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(UITable_o *, const MethodInfo *))this->klass->vtable._6_Init.methodPtr)(
    this,
    this->klass->vtable._6_Init.method);
  ((void (__fastcall *)(UITable_o *, const MethodInfo *))this->klass->vtable._8_Reposition.methodPtr)(
    this,
    this->klass->vtable._8_Reposition.method);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
}


void UITable__set_repositionNow(UITable_o *this, bool value, const MethodInfo *method)
{
  if ( value )
  {
    this->fields.mReposition = 1;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
  }
}


void UITable_OnReposition___ctor(
        UITable_OnReposition_o *this,
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
  sub_2213A04(
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
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2016F70;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2016F30;
}


System_IAsyncResult_o *UITable_OnReposition__BeginInvoke(
        UITable_OnReposition_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  char v5; // [xsp+8h] [xbp-8h] BYREF

  return sub_2213A14(this, &v5, callback, object);
}


void UITable_OnReposition__EndInvoke(
        UITable_OnReposition_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void UITable_OnReposition__Invoke(UITable_OnReposition_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}