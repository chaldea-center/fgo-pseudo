void UITable___ctor(UITable_o *this, const MethodInfo *method)
{
  int v3; // w8

  v3 = (unsigned __int8)byte_5931820;
  this->fields.hideInactive = 1;
  if ( !v3 )
  {
    sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
    byte_5931820 = 1;
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

  if ( (byte_593CDAA & 1) == 0 )
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
    byte_593CDAA = 1;
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
  if ( sorting > 1 )
  {
    if ( sorting == 2 )
    {
      v22 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_Transform__TypeInfo);
      v23 = &Method_UIGrid_SortHorizontal__;
    }
    else
    {
      if ( sorting != 3 )
        goto LABEL_27;
      v22 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_Transform__TypeInfo);
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
      v22 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_Transform__TypeInfo);
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
      System_Collections_Generic_List_object___Sort_71636404(
        v24,
        onCustomSort,
        (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_Transform__Sort__);
      return (System_Collections_Generic_List_Transform__o *)v4;
    }
LABEL_36:
    sub_21FFECC(childCount, onCustomSort);
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

  if ( (byte_593CDAC & 1) == 0 )
  {
    sub_21FFC50(&Method_NGUITools_FindInParents_UIPanel___);
    sub_21FFC50(&NGUITools_TypeInfo);
    byte_593CDAC = 1;
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

  if ( (byte_593CDAD & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&NGUITools_TypeInfo);
    byte_593CDAD = 1;
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

  if ( (byte_593CDAF & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CDAF = 1;
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
      UIPanel__ConstrainTargetToBounds_55980736((UIPanel_o *)ChildList, transform, 1, 0);
      ChildList = (System_Collections_Generic_List_Transform__o *)this->fields.mPanel;
      if ( !ChildList )
        goto LABEL_28;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)ChildList,
                           (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
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
        sub_21FFECC(ChildList, v7);
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


// local variable allocation has failed, the output may be wrong!
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
  float y; // v0.s[1]
  float32x2_t v24; // d3
  float v25; // s1
  __int64 v26; // x9
  float32x2_t v27; // d4
  float v28; // s5
  float32x2_t v29; // d3
  float v30; // s1
  float32x2_t v31; // d6
  float32x2_t v32; // d4
  float v33; // s7
  float v34; // s1
  float32x2_t v35; // d3
  float v36; // s2
  float32x2_t v37; // d4
  float v38; // s5
  float v39; // s0
  int8x8_t v40; // d1
  __int64 v41; // x9
  float v42; // s2
  int8x8_t v43; // d3
  float v44; // s6
  float v45; // s7
  float32x2_t v46; // d18
  float v47; // s16
  float v48; // s6
  int8x8_t v49; // d7
  int8x8_t v50; // d17
  int8x8_t v51; // d18
  int8x8_t v52; // d19
  float32x2_t v53; // d7
  float32x2_t v54; // d17
  float32x2_t v55; // d17
  float v56; // s6
  float32x2_t v57; // d7
  float v58; // s16
  int8x8_t v59; // d4
  int8x8_t v60; // d7
  float v61; // s5
  float v62; // s6
  int8x8_t v63; // d16
  int8x8_t v64; // d17
  float32x2_t v65; // d4
  float32x2_t v66; // d7
  float32x2_t v67; // d7
  float v68; // s6
  __int64 v69; // x8
  float v70; // s4
  float v71; // s5
  float32x2_t v72; // d16
  float v73; // s6
  float v74; // s4
  int8x8_t v75; // d5
  int8x8_t v76; // d7
  int8x8_t v77; // d16
  int8x8_t v78; // d17
  float32x2_t v79; // d4
  float v80; // s0
  float32x2_t v81; // d1
  float v82; // s5
  float32x2_t v83; // d4
  float v84; // s6
  float v85; // s0
  int8x8_t v86; // d7
  int8x8_t v87; // d1
  int8x8_t v88; // d4
  int8x8_t v89; // d5
  float32x2_t v90; // d4
  float32x2_t v91; // d1
  float32x2_t v92; // d1
  float v93; // s0
  int v94; // w8
  const MethodInfo *v95; // x1
  UnityEngine_Vector2_o PivotOffset; // kr00_8
  int32_t v97; // w26
  unsigned int v98; // w28
  float v99; // s8
  float v100; // s13
  unsigned int v101; // w27
  int32_t v102; // w24
  float x; // s3
  float v104; // s5
  float v105; // s0
  __int64 v106; // x8
  __int64 v107; // x8
  UnityEngine_Transform_o *v108; // x25
  __int64 v109; // x10
  __int64 v110; // x9
  float *v111; // x8
  float v112; // s15
  float v113; // s12
  float v114; // s14
  float v115; // s10
  float v116; // s9
  float v117; // s11
  float v118; // s0
  float v119; // s1
  float v120; // s3
  float v121; // s0
  int v122; // w8
  int32_t pivot; // w0
  UnityEngine_Vector2_o v124; // kr08_8
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v126; // x4
  float v127; // s8
  UnityEngine_Transform_o *v128; // x19
  int32_t v129; // w20
  float32x2_t v135; // d2
  float32x2_t v136; // d4
  unsigned __int64 v137; // d0
  unsigned __int64 v138; // d0
  float v139; // s8
  UnityEngine_Transform_o *v140; // x21
  __int64 v141; // x1
  Il2CppObject *Component_object; // x22
  float v143; // [xsp+8h] [xbp-F8h]
  float v144; // [xsp+Ch] [xbp-F4h]
  unsigned __int64 v145; // [xsp+10h] [xbp-F0h]
  __int64 v146; // [xsp+20h] [xbp-E0h]
  float v147; // [xsp+20h] [xbp-E0h]
  float v148; // [xsp+30h] [xbp-D0h]
  float32x2_t v149; // [xsp+30h] [xbp-D0h]
  UnityEngine_Bounds_o v150; // [xsp+48h] [xbp-B8h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v153; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_593CDAE & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Bounds____TypeInfo);
    sub_21FFC50(&UnityEngine_Bounds___TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_SpringPosition___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Transform__get_Item__);
    this = (UITable_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CDAE = 1;
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
  *(_QWORD *)&v150.fields.m_Center.fields.x = v6;
  *(_QWORD *)&v150.fields.m_Center.fields.z = columns;
  v7 = sub_21FFD18(UnityEngine_Bounds____TypeInfo, &v150);
  v8 = sub_21FFD10(UnityEngine_Bounds___TypeInfo, (unsigned int)columns);
  v9 = sub_21FFD10(UnityEngine_Bounds___TypeInfo, (unsigned int)v6);
  size = children->fields._size;
  v11 = v9;
  if ( size >= 1 )
  {
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v146 = v9 + 32;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)children,
               v14,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_Transform__get_Item__);
      this = (UITable_o *)NGUIMath__CalculateRelativeWidgetBounds_56157848(
                            &v150,
                            (UnityEngine_Transform_o *)Item,
                            (UnityEngine_Transform_o *)Item,
                            !v4->fields.hideInactive,
                            1,
                            v16);
      if ( !Item )
        break;
      z = v150.fields.m_Center.fields.z;
      v18.n64_u64[0] = *(unsigned __int64 *)&v150.fields.m_Center.fields.x;
      v19.n64_u64[0] = *(unsigned __int64 *)&v150.fields.m_Extents.fields.x;
      v20 = v150.fields.m_Extents.fields.z;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Item, 0);
      if ( !v7 )
        break;
      v21 = *(_QWORD *)(v7 + 16);
      if ( v13 >= *(_DWORD *)v21 )
        goto LABEL_80;
      v22 = *(_QWORD *)(v21 + 16);
      if ( v12 >= (unsigned int)v22 )
        goto LABEL_80;
      y = localScale.fields.y;
      v24.n64_u64[0] = vmul_f32(vsub_f32(v18, v19), *(float32x2_t *)&localScale.fields.x).n64_u64[0];
      v25 = (float)(z - v20) * localScale.fields.z;
      v26 = v7 + 24 * ((int)v12 + v22 * (int)v13);
      v27.n64_u64[0] = vmul_f32(vsub_f32(vadd_f32(v18, v19), v24), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v28 = (float)((float)(z + v20) - v25) * 0.5;
      v29.n64_u64[0] = vadd_f32(v24, v27).n64_u64[0];
      v30 = v25 + v28;
      v31.n64_u64[0] = vadd_f32(v27, v29).n64_u64[0];
      v32.n64_u64[0] = vsub_f32(v29, v27).n64_u64[0];
      v33 = v28 + v30;
      v34 = v30 - v28;
      v35.n64_u64[0] = vmul_f32(
                         vsub_f32(vmul_f32(*(float32x2_t *)&localScale.fields.x, v31), v32),
                         (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v36 = (float)((float)(localScale.fields.z * v33) - v34) * 0.5;
      v37.n64_u64[0] = vadd_f32(v32, v35).n64_u64[0];
      *(float32x2_t *)(v26 + 44) = v35;
      v38 = v34 + v36;
      *(float *)(v26 + 52) = v36;
      *(float32x2_t *)(v26 + 32) = v37;
      *(float *)(v26 + 40) = v34 + v36;
      if ( !v8 )
        break;
      if ( v12 >= *(_DWORD *)(v8 + 24) )
LABEL_80:
        sub_21FFED4(this);
      v39 = v38 - v36;
      v40.n64_u64[0] = vsub_f32(v37, v35).n64_u64[0];
      v41 = v8 + 32 + 24LL * (int)v12;
      v42 = v36 + v38;
      v43.n64_u64[0] = vadd_f32(v35, v37).n64_u64[0];
      v44 = *(float *)(v41 + 8);
      v45 = *(float *)(v41 + 20);
      v46.n64_u64[0] = *(unsigned __int64 *)(v41 + 12);
      v47 = v44 - v45;
      v48 = v44 + v45;
      v49.n64_u64[0] = vsub_f32(*(float32x2_t *)v41, v46).n64_u64[0];
      v50.n64_u64[0] = vadd_f32(*(float32x2_t *)v41, v46).n64_u64[0];
      v51.n64_u64[0] = vcgt_f32(v40, v49).n64_u64[0];
      v52.n64_u64[0] = vcgt_f32(v50, v40).n64_u64[0];
      if ( v47 >= v39 )
        v47 = v39;
      v53.n64_u64[0] = vbsl_s8(v51, v49, v40).n64_u64[0];
      v54.n64_u64[0] = vbsl_s8(v52, v50, v40).n64_u64[0];
      if ( v48 <= v39 )
        v48 = v39;
      v55.n64_u64[0] = vmul_f32(vsub_f32(v54, v53), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v56 = (float)(v48 - v47) * 0.5;
      v57.n64_u64[0] = vadd_f32(v53, v55).n64_u64[0];
      v58 = v47 + v56;
      v59.n64_u64[0] = vsub_f32(v57, v55).n64_u64[0];
      v60.n64_u64[0] = vadd_f32(v55, v57).n64_u64[0];
      v61 = v58 - v56;
      v62 = v56 + v58;
      v63.n64_u64[0] = vcgt_f32(v43, v59).n64_u64[0];
      v64.n64_u64[0] = vcgt_f32(v60, v43).n64_u64[0];
      if ( v61 >= v42 )
        v61 = v42;
      v65.n64_u64[0] = vbsl_s8(v63, v59, v43).n64_u64[0];
      v66.n64_u64[0] = vbsl_s8(v64, v60, v43).n64_u64[0];
      if ( v62 <= v42 )
        v62 = v42;
      v67.n64_u64[0] = vmul_f32(vsub_f32(v66, v65), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v68 = (float)(v62 - v61) * 0.5;
      *(float32x2_t *)(v41 + 12) = v67;
      *(float *)(v41 + 20) = v68;
      *(float32x2_t *)v41 = vadd_f32(v65, v67);
      *(float *)(v41 + 8) = v61 + v68;
      if ( !v11 )
        break;
      if ( v13 >= *(_DWORD *)(v11 + 24) )
        goto LABEL_80;
      v69 = v146 + 24LL * (int)v13;
      ++v14;
      v70 = *(float *)(v69 + 8);
      v71 = *(float *)(v69 + 20);
      v72.n64_u64[0] = *(unsigned __int64 *)(v69 + 12);
      v73 = v70 - v71;
      v74 = v70 + v71;
      v75.n64_u64[0] = vsub_f32(*(float32x2_t *)v69, v72).n64_u64[0];
      v76.n64_u64[0] = vadd_f32(*(float32x2_t *)v69, v72).n64_u64[0];
      v77.n64_u64[0] = vcgt_f32(v40, v75).n64_u64[0];
      v78.n64_u64[0] = vcgt_f32(v76, v40).n64_u64[0];
      if ( v73 >= v39 )
        v73 = v39;
      if ( v74 > v39 )
        v39 = v74;
      v79.n64_u64[0] = vbsl_s8(v77, v75, v40).n64_u64[0];
      v80 = (float)(v39 - v73) * 0.5;
      v81.n64_u64[0] = vmul_f32(vsub_f32(vbsl_s8(v78, v76, v40), v79), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v82 = v73 + v80;
      v83.n64_u64[0] = vadd_f32(v79, v81).n64_u64[0];
      v84 = (float)(v73 + v80) - v80;
      v85 = v80 + v82;
      v86.n64_u64[0] = vsub_f32(v83, v81).n64_u64[0];
      v87.n64_u64[0] = vadd_f32(v81, v83).n64_u64[0];
      v88.n64_u64[0] = vcgt_f32(v43, v86).n64_u64[0];
      v89.n64_u64[0] = vcgt_f32(v87, v43).n64_u64[0];
      if ( v84 >= v42 )
        v84 = v42;
      v90.n64_u64[0] = vbsl_s8(v88, v86, v43).n64_u64[0];
      v91.n64_u64[0] = vbsl_s8(v89, v87, v43).n64_u64[0];
      if ( v85 <= v42 )
        v85 = v42;
      v92.n64_u64[0] = vmul_f32(vsub_f32(v91, v90), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v93 = (float)(v85 - v84) * 0.5;
      *(float *)(v69 + 20) = v93;
      *(float32x2_t *)(v69 + 12) = v92;
      *(float32x2_t *)v69 = vadd_f32(v90, v92);
      *(float *)(v69 + 8) = v84 + v93;
      v94 = (int)(v12 + 1) >= v4->fields.columns && v4->fields.columns > 0;
      if ( (int)(v12 + 1) >= v4->fields.columns && v4->fields.columns > 0 )
        v12 = 0;
      else
        ++v12;
      v13 += v94;
      if ( size == v14 )
        goto LABEL_38;
    }
LABEL_79:
    sub_21FFECC(this, children);
  }
LABEL_38:
  PivotOffset = NGUIMath__GetPivotOffset(v4->fields.cellAlignment, (const MethodInfo *)children);
  v97 = children->fields._size;
  if ( v97 >= 1 )
  {
    v98 = 0;
    v99 = 0.0;
    v100 = 0.0;
    v101 = 0;
    v102 = 0;
    if ( PivotOffset.fields.x <= 1.0 )
      x = PivotOffset.fields.x;
    else
      x = 1.0;
    if ( PivotOffset.fields.x >= 0.0 )
      v104 = x;
    else
      v104 = 0.0;
    if ( PivotOffset.fields.y <= 1.0 )
      v105 = PivotOffset.fields.y;
    else
      v105 = 1.0;
    if ( PivotOffset.fields.y < 0.0 )
      v105 = 0.0;
    v143 = v105;
    v144 = v104;
    do
    {
      this = (UITable_o *)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)children,
                            v102,
                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_Transform__get_Item__);
      if ( !v7 )
        goto LABEL_79;
      v106 = *(_QWORD *)(v7 + 16);
      if ( v101 >= *(_DWORD *)v106 )
        goto LABEL_80;
      v107 = *(_QWORD *)(v106 + 16);
      if ( v98 >= (unsigned int)v107 )
        goto LABEL_80;
      if ( !v8 )
        goto LABEL_79;
      if ( v98 >= *(_DWORD *)(v8 + 24) )
        goto LABEL_80;
      if ( !v11 )
        goto LABEL_79;
      if ( v101 >= *(_DWORD *)(v11 + 24) )
        goto LABEL_80;
      v108 = (UnityEngine_Transform_o *)this;
      if ( !this )
        goto LABEL_79;
      v109 = v8 + 24LL * (int)v98;
      v110 = v11 + 24LL * (int)v101;
      v111 = (float *)(v7 + 24 * ((int)v98 + v107 * (int)v101));
      v112 = *(float *)(v109 + 44);
      v113 = *(float *)(v110 + 36);
      v114 = *(float *)(v110 + 48);
      v147 = *(float *)(v109 + 32);
      v115 = v111[9];
      v116 = v111[11];
      v117 = v111[12];
      v148 = v111[8];
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
      v118 = (float)(v113 - v114) + (float)((float)((float)(v115 + v117) - (float)(v115 - v117)) - (float)(v113 + v114));
      if ( v4->fields.direction )
        v119 = (float)((float)(v100 + v117) - v115)
             - (float)((float)((float)(v143 * v118) + 0.0) - v4->fields.padding.fields.y);
      else
        v119 = (float)((float)((float)-v100 - v117) - v115)
             + (float)((float)(v118 + (float)(v143 * (float)(0.0 - v118))) - v4->fields.padding.fields.y);
      v120 = v4->fields.padding.fields.x;
      v121 = (float)((float)(v99 + v116) - v148)
           - (float)((float)((float)(v144
                                   * (float)((float)(v147 - v112)
                                           + (float)((float)((float)(v148 + v116) - (float)(v148 - v116))
                                                   - (float)(v147 + v112))))
                           + 0.0)
                   - v120);
      v99 = v99 + (float)((float)(v112 + v112) + (float)(v120 + v120));
      UnityEngine_Transform__set_localPosition(v108, localPosition, 0);
      v122 = v4->fields.columns;
      if ( (int)++v98 >= v122 && v122 >= 1 )
      {
        v99 = 0.0;
        v98 = 0;
        ++v101;
        v100 = v100 + (float)((float)(v114 + v114) + (float)(v4->fields.padding.fields.y + v4->fields.padding.fields.y));
      }
    }
    while ( v97 != ++v102 );
  }
  pivot = v4->fields.pivot;
  if ( pivot )
  {
    v124 = NGUIMath__GetPivotOffset(pivot, v95);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0);
    NGUIMath__CalculateRelativeWidgetBounds_56157848(&v150, transform, transform, 0, 1, v126);
    v127 = v150.fields.m_Extents.fields.y;
    v145 = *(_QWORD *)&v150.fields.m_Extents.fields.x;
    this = (UITable_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0);
    if ( !this )
      goto LABEL_79;
    v128 = (UnityEngine_Transform_o *)this;
    if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0) >= 1 )
    {
      v129 = 0;
      __asm { FMOV            V1.2S, #1.0 }
      v135.n64_u64[0] = v145;
      v136.n64_u32[0] = vadd_f32(v135, v135).n64_u32[0];
      v135.n64_f32[1] = v127 * -2.0;
      v137 = vsub_f32(0, v135).n64_u64[0];
      v135.n64_u32[0] = 0;
      v136.n64_u32[1] = HIDWORD(v137);
      v138 = vadd_f32(
               vmul_f32(
                 vbic_s8(vbsl_s8(vcgt_f32((float32x2_t)v124, _D1), _D1, (int8x8_t)v124), vcltz_f32((float32x2_t)v124)),
                 v136),
               v135).n64_u64[0];
      v139 = *((float *)&v138 + 1);
      v149.n64_u64[0] = v138;
      while ( 1 )
      {
        this = (UITable_o *)UnityEngine_Transform__GetChild(v128, v129, 0);
        if ( !this )
          goto LABEL_79;
        v140 = (UnityEngine_Transform_o *)this;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)this,
                             (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_SpringPosition___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v141);
        this = (UITable_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_79;
          Component_object[2].klass = (Il2CppClass *)vsub_f32((float32x2_t)Component_object[2].klass, v149).n64_u64[0];
        }
        else
        {
          v153 = UnityEngine_Transform__get_localPosition(v140, 0);
          v153.fields.y = v153.fields.y - v139;
          v153.fields.x = v153.fields.x - v149.n64_f32[0];
          UnityEngine_Transform__set_localPosition(v140, v153, 0);
        }
        if ( ++v129 >= UnityEngine_Transform__get_childCount(v128, 0) )
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

  if ( (byte_593CDAB & 1) == 0 )
  {
    sub_21FFC50(&System_Comparison_Transform__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Transform__Sort__);
    sub_21FFC50(&Method_UIGrid_SortByName__);
    byte_593CDAB = 1;
  }
  v4 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_Transform__TypeInfo);
  System_Comparison_object____ctor(v4, 0, Method_UIGrid_SortByName__, 0);
  if ( !list )
    sub_21FFECC(v5, v6);
  System_Collections_Generic_List_object___Sort_71636404(
    (System_Collections_Generic_List_object__o *)list,
    v4,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_Transform__Sort__);
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
  this->fields.invoke_impl = (intptr_t)sub_2003C88;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2003C48;
}


System_IAsyncResult_o *UITable_OnReposition__BeginInvoke(
        UITable_OnReposition_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  return (System_IAsyncResult_o *)sub_21FFC04(this, &v5, callback, object);
}


void UITable_OnReposition__EndInvoke(
        UITable_OnReposition_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void UITable_OnReposition__Invoke(UITable_OnReposition_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}