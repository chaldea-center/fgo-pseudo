void UITable___ctor(UITable_o *this, const MethodInfo *method)
{
  this->fields.hideInactive = 1;
  if ( !byte_4D2A019 )
  {
    sub_1C93AD4(&UnityEngine_Vector2_TypeInfo);
    byte_4D2A019 = 1;
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  UnityEngine_Object_o *v14; // x23
  UnityEngine_GameObject_o *gameObject; // x24
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  System_Comparison_T__o *v20; // x0
  intptr_t *v21; // x8
  System_Collections_Generic_List_object__o *v22; // x0
  System_Comparison_T__o *v23; // x20

  if ( (byte_4D35146 & 1) == 0 )
  {
    sub_1C93AD4(&System_Comparison_Transform__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_Transform__TypeInfo);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_UIGrid_SortByName__);
    sub_1C93AD4(&Method_UIGrid_SortHorizontal__);
    sub_1C93AD4(&Method_UIGrid_SortVertical__);
    byte_4D35146 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_Transform___ctor__);
  if ( !transform )
LABEL_32:
    sub_1C93D2C(childCount, onCustomSort);
  childCount = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0);
  if ( (int)childCount >= 1 )
  {
    for ( i = 0; i < (int)childCount; ++i )
    {
      childCount = UnityEngine_Transform__GetChild(transform, i, 0);
      v14 = (UnityEngine_Object_o *)childCount;
      if ( !this->fields.hideInactive )
        goto LABEL_35;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      childCount = (UnityEngine_Transform_o *)UnityEngine_Object__op_Implicit(v14, 0);
      if ( ((unsigned __int8)childCount & 1) != 0 )
      {
        if ( !v14 )
          goto LABEL_32;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0);
        if ( !NGUITools_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
        childCount = (UnityEngine_Transform_o *)NGUITools__GetActive_50071416(gameObject, 0);
        if ( ((unsigned __int8)childCount & 1) != 0 )
        {
LABEL_35:
          if ( !v4 )
            goto LABEL_32;
          items = v4->fields._items;
          v17 = Method_System_Collections_Generic_List_Transform__Add__;
          ++v4->fields._version;
          if ( !items )
            goto LABEL_32;
          size = v4->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v4,
              (Il2CppObject *)v14,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v19[4] = (Il2CppClass *)v14;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v14, v8, v9, v10, v11, v12, v13);
          }
        }
      }
      childCount = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0);
    }
  }
  switch ( this->fields.sorting )
  {
    case 0:
      return (System_Collections_Generic_List_Transform__o *)v4;
    case 1:
      v20 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_Transform__TypeInfo);
      v21 = &Method_UIGrid_SortByName__;
      goto LABEL_27;
    case 2:
      v20 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_Transform__TypeInfo);
      v21 = &Method_UIGrid_SortHorizontal__;
      goto LABEL_27;
    case 3:
      v20 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_Transform__TypeInfo);
      v21 = &Method_UIGrid_SortVertical__;
LABEL_27:
      v23 = v20;
      System_Comparison_object____ctor(v20, 0, *v21, 0);
      if ( !v4 )
        goto LABEL_32;
      v22 = v4;
      onCustomSort = v23;
      goto LABEL_29;
    default:
      onCustomSort = (System_Comparison_T__o *)this->fields.onCustomSort;
      if ( !onCustomSort )
      {
        ((void (__fastcall *)(UITable_o *, System_Collections_Generic_List_object__o *, const MethodInfo *))this->klass->vtable._4_Sort.methodPtr)(
          this,
          v4,
          this->klass->vtable._4_Sort.method);
        return (System_Collections_Generic_List_Transform__o *)v4;
      }
      if ( !v4 )
        goto LABEL_32;
      v22 = v4;
LABEL_29:
      System_Collections_Generic_List_object___Sort_59225184(
        v22,
        onCustomSort,
        (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_Transform__Sort__);
      return (System_Collections_Generic_List_Transform__o *)v4;
  }
}


void UITable__Init(UITable_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  Il2CppObject *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4D35148 & 1) == 0 )
  {
    sub_1C93AD4(&Method_NGUITools_FindInParents_UIPanel___);
    sub_1C93AD4(&NGUITools_TypeInfo);
    byte_4D35148 = 1;
  }
  this->fields.mInitDone = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v4 = NGUITools__FindInParents_object_(
         gameObject,
         (const MethodInfo_322EDC8 *)Method_NGUITools_FindInParents_UIPanel___);
  this->fields.mPanel = (struct UIPanel_o *)v4;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mPanel, (int32_t)v4, v5, v6, v7, v8, v9, v10);
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
  if ( (byte_4D35149 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Application_TypeInfo);
    sub_1C93AD4(&NGUITools_TypeInfo);
    byte_4D35149 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( !UnityEngine_Application__get_isPlaying(0) )
  {
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
      ((void (__fastcall *)(UITable_o *, const MethodInfo *))this->klass->vtable._8_Reposition.methodPtr)(
        this,
        this->klass->vtable._8_Reposition.method);
  }
}


void UITable__Reposition(UITable_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x20
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Transform__o *ChildList; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  UnityEngine_Object_o *mPanel; // x21
  Il2CppObject *Component_object; // x20
  struct UITable_OnReposition_o *onReposition; // x8

  if ( (byte_4D3514B & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Application_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3514B = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0) && !this->fields.mInitDone )
  {
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
      ((void (__fastcall *)(UITable_o *, const MethodInfo *))this->klass->vtable._6_Init.methodPtr)(
        this,
        this->klass->vtable._6_Init.method);
  }
  this->fields.mReposition = 0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  ChildList = UITable__GetChildList(this, v4);
  if ( !ChildList )
    goto LABEL_28;
  if ( ChildList->fields._size >= 1 )
    UITable__RepositionVariableSize(this, ChildList, v7);
  if ( this->fields.keepWithinPanel )
  {
    mPanel = (UnityEngine_Object_o *)this->fields.mPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mPanel, 0, 0) )
    {
      ChildList = (System_Collections_Generic_List_Transform__o *)this->fields.mPanel;
      if ( !ChildList )
        goto LABEL_28;
      UIPanel__ConstrainTargetToBounds_49843072((UIPanel_o *)ChildList, transform, 1, 0);
      ChildList = (System_Collections_Generic_List_Transform__o *)this->fields.mPanel;
      if ( !ChildList )
        goto LABEL_28;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)ChildList,
                           (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        sub_1C93D2C(ChildList, v6);
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
  float32x2_t v17; // d10
  float z; // s11
  float32x2_t v19; // d12
  float v20; // s13
  __int64 v21; // x8
  __int64 v22; // x9
  float32x2_t v23; // d3
  float v24; // s4
  float32x2_t v25; // d1
  float v26; // s5
  float32x2_t v27; // d3
  float v28; // s4
  float32x2_t v29; // d6
  float v30; // s7
  float32x2_t v31; // d1
  float v32; // s4
  float32x2_t v33; // d2
  float v34; // s3
  __int64 v35; // x9
  float32x2_t v36; // d5
  float v37; // s4
  float *v38; // x9
  float v39; // s16
  float v40; // s17
  float v41; // s18
  float v42; // s19
  float v43; // s20
  float v44; // s21
  float v45; // s0
  float v46; // s1
  float v47; // s3
  float v48; // s4
  float v49; // s6
  float v50; // s7
  float v51; // s16
  float v52; // s17
  float v53; // s19
  float v54; // s18
  float v55; // s16
  float v56; // s16
  float v57; // s17
  float v58; // s6
  float v59; // s18
  float v60; // s7
  float v61; // s20
  float v62; // s6
  float v63; // s16
  float v64; // s19
  float v65; // s7
  float v66; // s17
  float v67; // s16
  float v68; // s18
  float v69; // s6
  float v70; // s7
  float v71; // s16
  float *v72; // x8
  float v73; // s6
  float v74; // s7
  float v75; // s16
  float v76; // s17
  float v77; // s18
  float v78; // s19
  int32_t v79; // w9
  float v80; // s20
  float v81; // s21
  bool v82; // nf
  float v83; // s22
  float v84; // s6
  float v85; // s17
  float v86; // s7
  float v87; // s18
  float v88; // s16
  float v89; // s19
  float v90; // s0
  float v91; // s0
  float v92; // s5
  float v93; // s1
  float v94; // s16
  float v95; // s0
  float v96; // s17
  float v97; // s5
  float v98; // s7
  float v99; // s1
  float v100; // s6
  float v101; // s2
  float v102; // s0
  float v103; // s2
  float v104; // s1
  _BOOL4 v105; // w8
  int v106; // w9
  const MethodInfo *v107; // x1
  UnityEngine_Vector2_o PivotOffset; // kr30_8
  int32_t v109; // w26
  float v110; // s0
  float v111; // s2
  float v112; // s4
  unsigned int v113; // w28
  unsigned int v114; // w27
  int32_t v115; // w24
  float v116; // s10
  float v117; // s0
  float v118; // s13
  __int64 v119; // x8
  __int64 v120; // x8
  UnityEngine_Transform_o *v121; // x25
  __int64 v122; // x10
  __int64 v123; // x9
  float *v124; // x8
  float v125; // s14
  float v126; // s12
  float v127; // s8
  float v128; // s10
  float v129; // s9
  float v130; // s11
  float v131; // s15
  float v132; // s1
  float v133; // s0
  float v134; // s3
  float x; // s4
  int v137; // w8
  int32_t pivot; // w0
  UnityEngine_Vector2_o v139; // kr38_8
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v141; // x4
  __int64 v142; // kr40_8
  float v143; // s1
  float v144; // s0
  float v145; // s8
  float v146; // s9
  UnityEngine_Transform_o *v147; // x19
  float v148; // s8
  int32_t v149; // w20
  float v150; // s9
  UnityEngine_Transform_o *v151; // x21
  Il2CppObject *Component_object; // x22
  float v153; // s1
  float32x2_t v154; // d0
  float v155; // [xsp+4h] [xbp-CCh]
  float v156; // [xsp+8h] [xbp-C8h]
  float v157; // [xsp+10h] [xbp-C0h]
  float v158; // [xsp+14h] [xbp-BCh]
  UnityEngine_Bounds_o v159; // [xsp+18h] [xbp-B8h] BYREF
  UnityEngine_Vector3_o localScale; // 0:kr00_12.12
  UnityEngine_Vector3_o localPosition; // 0:kr20_12.12
  UnityEngine_Vector3_o v162; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v163; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4D3514A & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Bounds____TypeInfo);
    sub_1C93AD4(&UnityEngine_Bounds___TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_SpringPosition___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__get_Item__);
    this = (UITable_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3514A = 1;
  }
  columns = v4->fields.columns;
  if ( columns < 1 )
  {
    if ( !children )
      goto LABEL_119;
    columns = children->fields._size;
    v6 = 1;
  }
  else
  {
    if ( !children )
      goto LABEL_119;
    v6 = children->fields._size / columns + 1;
  }
  *(_QWORD *)&v159.fields.m_Center.fields.x = v6;
  *(_QWORD *)&v159.fields.m_Center.fields.z = columns;
  v7 = sub_1C93B84(UnityEngine_Bounds____TypeInfo, &v159);
  v8 = sub_1C93B7C(UnityEngine_Bounds___TypeInfo, (unsigned int)columns);
  v9 = sub_1C93B7C(UnityEngine_Bounds___TypeInfo, (unsigned int)v6);
  size = children->fields._size;
  v11 = v9;
  if ( size >= 1 )
  {
    v12 = 0;
    v13 = 0;
    v14 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)children,
               v14,
               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_Transform__get_Item__);
      this = (UITable_o *)NGUIMath__CalculateRelativeWidgetBounds_50022900(
                            &v159,
                            (UnityEngine_Transform_o *)Item,
                            (UnityEngine_Transform_o *)Item,
                            !v4->fields.hideInactive,
                            1,
                            v16);
      if ( !Item )
        break;
      v17.n64_u64[0] = *(unsigned __int64 *)&v159.fields.m_Center.fields.x;
      z = v159.fields.m_Center.fields.z;
      v19.n64_u64[0] = *(unsigned __int64 *)&v159.fields.m_Extents.fields.x;
      v20 = v159.fields.m_Extents.fields.z;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Item, 0);
      v154.n64_u32[0] = LODWORD(localScale.fields.x);
      if ( !v7 )
        break;
      v21 = *(_QWORD *)(v7 + 16);
      if ( v13 >= *(_DWORD *)v21 )
        goto LABEL_120;
      v22 = *(_QWORD *)(v21 + 16);
      if ( v12 >= (unsigned int)v22 )
        goto LABEL_120;
      v154.n64_u32[1] = LODWORD(localScale.fields.y);
      v23.n64_u64[0] = vmul_f32(vsub_f32(v17, v19), v154).n64_u64[0];
      v24 = (float)(z - v20) * localScale.fields.z;
      v25.n64_u64[0] = vmul_f32(vsub_f32(vadd_f32(v17, v19), v23), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v26 = (float)((float)(z + v20) - v24) * 0.5;
      v27.n64_u64[0] = vadd_f32(v23, v25).n64_u64[0];
      v28 = v24 + v26;
      v29.n64_u64[0] = vadd_f32(v25, v27).n64_u64[0];
      v30 = v26 + v28;
      v31.n64_u64[0] = vsub_f32(v27, v25).n64_u64[0];
      v32 = v28 - v26;
      v33.n64_u64[0] = vmul_f32(vsub_f32(vmul_f32(v154, v29), v31), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v34 = (float)((float)(localScale.fields.z * v30) - v32) * 0.5;
      v35 = v7 + 24 * ((int)v12 + v22 * (int)v13);
      v36.n64_u64[0] = vadd_f32(v31, v33).n64_u64[0];
      v37 = v32 + v34;
      *(float32x2_t *)(v35 + 44) = v33;
      *(float32x2_t *)(v35 + 32) = v36;
      *(float *)(v35 + 40) = v37;
      *(float *)(v35 + 52) = v34;
      if ( !v8 )
        break;
      if ( v12 >= *(_DWORD *)(v8 + 24) )
LABEL_120:
        sub_1C93D34(this);
      v38 = (float *)(v8 + 24LL * (int)v12);
      v39 = v38[8];
      v40 = v38[9];
      v41 = v38[10];
      v42 = v38[11];
      v43 = v38[12];
      v44 = v38[13];
      v45 = vsub_f32(v36, v33).n64_f32[0];
      v46 = v37 - v34;
      v33.n64_u32[0] = vadd_f32(v33, v36).n64_u32[0];
      v47 = v34 + v37;
      v36.n64_f32[0] = v36.n64_f32[1] - v33.n64_f32[1];
      v48 = v33.n64_f32[1] + v36.n64_f32[1];
      v49 = v39 - v42;
      v50 = v40 - v43;
      if ( (float)(v39 - v42) >= v45 )
        v49 = v45;
      v51 = v39 + v42;
      if ( v50 >= v36.n64_f32[0] )
        v50 = v36.n64_f32[1] - v33.n64_f32[1];
      v52 = v40 + v43;
      if ( (float)(v41 - v44) >= v46 )
        v53 = v46;
      else
        v53 = v41 - v44;
      v54 = v41 + v44;
      if ( v51 <= v45 )
        v51 = v45;
      if ( v52 <= v36.n64_f32[0] )
        v52 = v36.n64_f32[1] - v33.n64_f32[1];
      v55 = v51 - v49;
      if ( v54 <= v46 )
        v54 = v46;
      v56 = v55 * 0.5;
      v57 = (float)(v52 - v50) * 0.5;
      v58 = v49 + v56;
      v59 = (float)(v54 - v53) * 0.5;
      v60 = v50 + v57;
      v61 = v58 - v56;
      v62 = v56 + v58;
      v63 = v53 + v59;
      v64 = v60 - v57;
      v65 = v57 + v60;
      v66 = v63 - v59;
      if ( v61 >= v33.n64_f32[0] )
        v61 = v33.n64_f32[0];
      v67 = v59 + v63;
      if ( v64 >= v48 )
        v68 = v33.n64_f32[1] + v36.n64_f32[1];
      else
        v68 = v64;
      if ( v66 >= v47 )
        v66 = v47;
      if ( v62 <= v33.n64_f32[0] )
        v62 = v33.n64_f32[0];
      if ( v65 <= v48 )
        v65 = v33.n64_f32[1] + v36.n64_f32[1];
      if ( v67 <= v47 )
        v67 = v47;
      v69 = (float)(v62 - v61) * 0.5;
      v70 = (float)(v65 - v68) * 0.5;
      v71 = (float)(v67 - v66) * 0.5;
      v38[12] = v70;
      v38[13] = v71;
      v38[8] = v61 + v69;
      v38[9] = v68 + v70;
      v38[10] = v66 + v71;
      v38[11] = v69;
      if ( !v11 )
        break;
      if ( v13 >= *(_DWORD *)(v11 + 24) )
        goto LABEL_120;
      v72 = (float *)(v11 + 24LL * (int)v13);
      v73 = v72[8];
      v74 = v72[9];
      v75 = v72[10];
      v76 = v72[11];
      v77 = v72[12];
      v78 = v72[13];
      v79 = v12 + 1;
      ++v14;
      v80 = v73 - v76;
      v81 = v74 - v77;
      v82 = (float)(v73 - v76) < v45;
      v83 = v75 - v78;
      v84 = v73 + v76;
      if ( v82 )
        v85 = v80;
      else
        v85 = v45;
      v86 = v74 + v77;
      if ( v81 >= v36.n64_f32[0] )
        v87 = v36.n64_f32[1] - v33.n64_f32[1];
      else
        v87 = v81;
      v88 = v75 + v78;
      if ( v83 >= v46 )
        v89 = v46;
      else
        v89 = v83;
      if ( v84 > v45 )
        v45 = v84;
      if ( v86 > v36.n64_f32[0] )
        v36.n64_f32[0] = v86;
      v90 = v45 - v85;
      if ( v88 > v46 )
        v46 = v88;
      v91 = v90 * 0.5;
      v92 = (float)(v36.n64_f32[0] - v87) * 0.5;
      v93 = (float)(v46 - v89) * 0.5;
      v94 = (float)(v85 + v91) - v91;
      v95 = v91 + (float)(v85 + v91);
      v96 = (float)(v87 + v92) - v92;
      v97 = v92 + (float)(v87 + v92);
      v98 = (float)(v89 + v93) - v93;
      if ( v94 >= v33.n64_f32[0] )
        v94 = v33.n64_f32[0];
      v99 = v93 + (float)(v89 + v93);
      if ( v96 >= v48 )
        v100 = v33.n64_f32[1] + v36.n64_f32[1];
      else
        v100 = v96;
      if ( v98 >= v47 )
        v98 = v47;
      if ( v95 <= v33.n64_f32[0] )
        v95 = v33.n64_f32[0];
      if ( v97 <= v48 )
        v101 = v33.n64_f32[1] + v36.n64_f32[1];
      else
        v101 = v97;
      if ( v99 <= v47 )
        v99 = v47;
      v102 = (float)(v95 - v94) * 0.5;
      v103 = (float)(v101 - v100) * 0.5;
      v104 = (float)(v99 - v98) * 0.5;
      v72[12] = v103;
      v72[13] = v104;
      v72[8] = v94 + v102;
      v72[9] = v100 + v103;
      v72[10] = v98 + v104;
      v72[11] = v102;
      v105 = v79 < v4->fields.columns || v4->fields.columns < 1;
      v106 = v79 >= v4->fields.columns && v4->fields.columns >= 1;
      if ( v105 )
        ++v12;
      else
        v12 = 0;
      v13 += v106;
      if ( size == v14 )
        goto LABEL_77;
    }
LABEL_119:
    sub_1C93D2C(this, children);
  }
LABEL_77:
  PivotOffset = NGUIMath__GetPivotOffset(v4->fields.cellAlignment, (const MethodInfo *)children);
  v109 = children->fields._size;
  if ( v109 >= 1 )
  {
    v110 = fminf(PivotOffset.fields.x, 1.0);
    v111 = fminf(PivotOffset.fields.y, 1.0);
    if ( PivotOffset.fields.x < 0.0 )
      v112 = 0.0;
    else
      v112 = v110;
    v113 = 0;
    v114 = 0;
    v115 = 0;
    v116 = 0.0;
    if ( PivotOffset.fields.y < 0.0 )
      v117 = 0.0;
    else
      v117 = v111;
    v118 = 0.0;
    v155 = v117;
    v156 = v112;
    do
    {
      this = (UITable_o *)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)children,
                            v115,
                            (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_Transform__get_Item__);
      if ( !v7 )
        goto LABEL_119;
      v119 = *(_QWORD *)(v7 + 16);
      if ( v114 >= *(_DWORD *)v119 )
        goto LABEL_120;
      v120 = *(_QWORD *)(v119 + 16);
      if ( v113 >= (unsigned int)v120 )
        goto LABEL_120;
      if ( !v8 )
        goto LABEL_119;
      if ( v113 >= *(_DWORD *)(v8 + 24) )
        goto LABEL_120;
      if ( !v11 )
        goto LABEL_119;
      if ( v114 >= *(_DWORD *)(v11 + 24) )
        goto LABEL_120;
      v121 = (UnityEngine_Transform_o *)this;
      v158 = v116;
      if ( !this )
        goto LABEL_119;
      v122 = v8 + 24LL * (int)v113;
      v123 = v11 + 24LL * (int)v114;
      v124 = (float *)(v7 + 24 * ((int)v113 + v120 * (int)v114));
      v125 = *(float *)(v122 + 44);
      v126 = *(float *)(v123 + 36);
      v127 = v124[8];
      v128 = v124[9];
      v129 = v124[11];
      v130 = v124[12];
      v131 = *(float *)(v123 + 48);
      v157 = *(float *)(v122 + 32);
      v162.fields.z = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0).fields.z;
      v132 = v126 + v131;
      v133 = v126 - v131;
      v134 = (float)(v128 + v130) - (float)(v128 - v130);
      if ( v4->fields.direction )
        v162.fields.y = (float)((float)(v118 + v130) - v128)
                      - (float)((float)((float)(v155 * (float)(v133 + (float)(v134 - v132))) + 0.0)
                              - v4->fields.padding.fields.y);
      else
        v162.fields.y = (float)((float)((float)-v118 - v130) - v128)
                      + (float)((float)((float)(v133 + (float)(v134 - v132))
                                      + (float)(v155 * (float)(0.0 - (float)(v133 + (float)(v134 - v132)))))
                              - v4->fields.padding.fields.y);
      x = v4->fields.padding.fields.x;
      v162.fields.x = (float)((float)(v158 + v129) - v127)
                    - (float)((float)((float)(v156
                                            * (float)((float)(v157 - v125)
                                                    + (float)((float)((float)(v127 + v129) - (float)(v127 - v129))
                                                            - (float)(v157 + v125))))
                                    + 0.0)
                            - x);
      v116 = v158 + (float)((float)(v125 + v125) + (float)(x + x));
      UnityEngine_Transform__set_localPosition(v121, v162, 0);
      v137 = v4->fields.columns;
      if ( (int)++v113 >= v137 && v137 >= 1 )
      {
        v113 = 0;
        ++v114;
        v118 = v118 + (float)((float)(v131 + v131) + (float)(v4->fields.padding.fields.y + v4->fields.padding.fields.y));
        v116 = 0.0;
      }
    }
    while ( v109 != ++v115 );
  }
  pivot = v4->fields.pivot;
  if ( pivot )
  {
    v139 = NGUIMath__GetPivotOffset(pivot, v107);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0);
    NGUIMath__CalculateRelativeWidgetBounds_50022900(&v159, transform, transform, 0, 1, v141);
    v142 = *(_QWORD *)&v159.fields.m_Extents.fields.x;
    v143 = fminf(v139.fields.x, 1.0);
    v144 = fminf(v139.fields.y, 1.0);
    if ( v139.fields.x < 0.0 )
      v145 = 0.0;
    else
      v145 = v143;
    if ( v139.fields.y < 0.0 )
      v146 = 0.0;
    else
      v146 = v144;
    this = (UITable_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0);
    if ( !this )
      goto LABEL_119;
    v147 = (UnityEngine_Transform_o *)this;
    if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0) >= 1 )
    {
      v148 = (float)(v145 * (float)(*(float *)&v142 + *(float *)&v142)) + 0.0;
      v149 = 0;
      v150 = (float)(*((float *)&v142 + 1) * -2.0)
           + (float)(v146 * (float)(0.0 - (float)(*((float *)&v142 + 1) * -2.0)));
      while ( 1 )
      {
        this = (UITable_o *)UnityEngine_Transform__GetChild(v147, v149, 0);
        if ( !this )
          goto LABEL_119;
        v151 = (UnityEngine_Transform_o *)this;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)this,
                             (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_SpringPosition___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (UITable_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_119;
          v153 = *((float *)&Component_object[2].klass + 1) - v150;
          *(float *)&Component_object[2].klass = *(float *)&Component_object[2].klass - v148;
          *((float *)&Component_object[2].klass + 1) = v153;
        }
        else
        {
          localPosition = UnityEngine_Transform__get_localPosition(v151, 0);
          v163.fields.z = localPosition.fields.z;
          v163.fields.x = localPosition.fields.x - v148;
          v163.fields.y = localPosition.fields.y - v150;
          UnityEngine_Transform__set_localPosition(v151, v163, 0);
        }
        if ( ++v149 >= UnityEngine_Transform__get_childCount(v147, 0) )
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

  if ( (byte_4D35147 & 1) == 0 )
  {
    sub_1C93AD4(&System_Comparison_Transform__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__Sort__);
    sub_1C93AD4(&Method_UIGrid_SortByName__);
    byte_4D35147 = 1;
  }
  v4 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_Transform__TypeInfo);
  System_Comparison_object____ctor(v4, 0, Method_UIGrid_SortByName__, 0);
  if ( !list )
    sub_1C93D2C(v5, v6);
  System_Collections_Generic_List_object___Sort_59225184(
    (System_Collections_Generic_List_object__o *)list,
    v4,
    (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_Transform__Sort__);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1ACFE3C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1ACFDFC;
}


System_IAsyncResult_o *UITable_OnReposition__BeginInvoke(
        UITable_OnReposition_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return sub_1C93A88(this, &v5, callback, object);
}


void UITable_OnReposition__EndInvoke(
        UITable_OnReposition_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void UITable_OnReposition__Invoke(UITable_OnReposition_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}