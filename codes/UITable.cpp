void UITable___ctor(UITable_o *this, const MethodInfo *method)
{
  this->fields.hideInactive = 1;
  if ( !byte_4CE7D39 )
  {
    sub_1C7BAE8(&UnityEngine_Vector2_TypeInfo);
    byte_4CE7D39 = 1;
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

  if ( (byte_4CF2D56 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Comparison_Transform__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Transform__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Transform__Sort__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Transform___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_Transform__TypeInfo);
    sub_1C7BAE8(&NGUITools_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_UIGrid_SortByName__);
    sub_1C7BAE8(&Method_UIGrid_SortHorizontal__);
    sub_1C7BAE8(&Method_UIGrid_SortVertical__);
    byte_4CF2D56 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_Transform___ctor__);
  if ( !transform )
LABEL_32:
    sub_1C7BD40(childCount, onCustomSort);
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
        childCount = (UnityEngine_Transform_o *)NGUITools__GetActive_49867064(gameObject, 0);
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
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v19[4] = (Il2CppClass *)v14;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v14, v8, v9, v10, v11, v12, v13);
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
      v20 = (System_Comparison_T__o *)sub_1C7BD34(System_Comparison_Transform__TypeInfo);
      v21 = &Method_UIGrid_SortByName__;
      goto LABEL_27;
    case 2:
      v20 = (System_Comparison_T__o *)sub_1C7BD34(System_Comparison_Transform__TypeInfo);
      v21 = &Method_UIGrid_SortHorizontal__;
      goto LABEL_27;
    case 3:
      v20 = (System_Comparison_T__o *)sub_1C7BD34(System_Comparison_Transform__TypeInfo);
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
      System_Collections_Generic_List_object___Sort_58984640(
        v22,
        onCustomSort,
        (const MethodInfo_38408C0 *)Method_System_Collections_Generic_List_Transform__Sort__);
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

  if ( (byte_4CF2D58 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_NGUITools_FindInParents_UIPanel___);
    sub_1C7BAE8(&NGUITools_TypeInfo);
    byte_4CF2D58 = 1;
  }
  this->fields.mInitDone = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v4 = NGUITools__FindInParents_object_(
         gameObject,
         (const MethodInfo_31F9E0C *)Method_NGUITools_FindInParents_UIPanel___);
  this->fields.mPanel = (struct UIPanel_o *)v4;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mPanel, (int32_t)v4, v5, v6, v7, v8, v9, v10);
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
  if ( (byte_4CF2D59 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Application_TypeInfo);
    sub_1C7BAE8(&NGUITools_TypeInfo);
    byte_4CF2D59 = 1;
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

  if ( (byte_4CF2D5B & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Application_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_1C7BAE8(&NGUITools_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2D5B = 1;
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
      UIPanel__ConstrainTargetToBounds_49638820((UIPanel_o *)ChildList, transform, 1, 0);
      ChildList = (System_Collections_Generic_List_Transform__o *)this->fields.mPanel;
      if ( !ChildList )
        goto LABEL_28;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)ChildList,
                           (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
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
        sub_1C7BD40(ChildList, v6);
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
  float32x2_t v17; // d10
  float z; // s11
  float32x2_t v19; // d12
  float v20; // s13
  __int64 v21; // x8
  __int64 v22; // x9
  float y; // v0.s[1]
  float32x2_t v24; // d3
  float v25; // s4
  float32x2_t v26; // d1
  float v27; // s5
  float32x2_t v28; // d3
  float v29; // s4
  float32x2_t v30; // d6
  float v31; // s7
  float32x2_t v32; // d1
  float v33; // s4
  float32x2_t v34; // d2
  float v35; // s3
  __int64 v36; // x9
  float32x2_t v37; // d5
  float v38; // s4
  float *v39; // x9
  float v40; // s16
  float v41; // s17
  float v42; // s18
  float v43; // s19
  float v44; // s20
  float v45; // s21
  float v46; // s0
  float v47; // s1
  float v48; // s3
  float v49; // s4
  float v50; // s6
  float v51; // s7
  float v52; // s16
  float v53; // s17
  float v54; // s19
  float v55; // s18
  float v56; // s16
  float v57; // s16
  float v58; // s17
  float v59; // s6
  float v60; // s18
  float v61; // s7
  float v62; // s20
  float v63; // s6
  float v64; // s16
  float v65; // s19
  float v66; // s7
  float v67; // s17
  float v68; // s16
  float v69; // s18
  float v70; // s6
  float v71; // s7
  float v72; // s16
  float *v73; // x8
  float v74; // s6
  float v75; // s7
  float v76; // s16
  float v77; // s17
  float v78; // s18
  float v79; // s19
  int32_t v80; // w9
  float v81; // s20
  float v82; // s21
  bool v83; // nf
  float v84; // s22
  float v85; // s6
  float v86; // s17
  float v87; // s7
  float v88; // s18
  float v89; // s16
  float v90; // s19
  float v91; // s0
  float v92; // s0
  float v93; // s5
  float v94; // s1
  float v95; // s16
  float v96; // s0
  float v97; // s17
  float v98; // s5
  float v99; // s7
  float v100; // s1
  float v101; // s6
  float v102; // s2
  float v103; // s0
  float v104; // s2
  float v105; // s1
  _BOOL4 v106; // w8
  int v107; // w9
  const MethodInfo *v108; // x1
  UnityEngine_Vector2_o PivotOffset; // kr00_8
  int32_t v110; // w26
  float v111; // s0
  float v112; // s2
  float v113; // s4
  unsigned int v114; // w28
  unsigned int v115; // w27
  int32_t v116; // w24
  float v117; // s10
  float v118; // s0
  float v119; // s13
  __int64 v120; // x8
  __int64 v121; // x8
  UnityEngine_Transform_o *v122; // x25
  __int64 v123; // x10
  __int64 v124; // x9
  float *v125; // x8
  float v126; // s14
  float v127; // s12
  float v128; // s8
  float v129; // s10
  float v130; // s9
  float v131; // s11
  float v132; // s15
  float v133; // s1
  float v134; // s0
  float v135; // s3
  float v136; // s1
  float x; // s4
  float v138; // s0
  int v139; // w8
  int32_t pivot; // w0
  UnityEngine_Vector2_o v141; // kr08_8
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v143; // x4
  float v144; // s10
  float v145; // s12
  float v146; // s1
  float v147; // s0
  float v148; // s8
  float v149; // s9
  UnityEngine_Transform_o *v150; // x19
  float v151; // s8
  int32_t v152; // w20
  float v153; // s9
  UnityEngine_Transform_o *v154; // x21
  Il2CppObject *Component_object; // x22
  float v156; // s1
  float v157; // [xsp+4h] [xbp-CCh]
  float v158; // [xsp+8h] [xbp-C8h]
  float v159; // [xsp+10h] [xbp-C0h]
  float v160; // [xsp+14h] [xbp-BCh]
  UnityEngine_Bounds_o v161; // [xsp+18h] [xbp-B8h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v164; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4CF2D5A & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Bounds____TypeInfo);
    sub_1C7BAE8(&UnityEngine_Bounds___TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_SpringPosition___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Transform__get_Item__);
    this = (UITable_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2D5A = 1;
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
  *(_QWORD *)&v161.fields.m_Center.fields.x = v6;
  *(_QWORD *)&v161.fields.m_Center.fields.z = columns;
  v7 = sub_1C7BB98(UnityEngine_Bounds____TypeInfo, &v161);
  v8 = sub_1C7BB90(UnityEngine_Bounds___TypeInfo, (unsigned int)columns);
  v9 = sub_1C7BB90(UnityEngine_Bounds___TypeInfo, (unsigned int)v6);
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
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_Transform__get_Item__);
      this = (UITable_o *)NGUIMath__CalculateRelativeWidgetBounds_49818548(
                            &v161,
                            (UnityEngine_Transform_o *)Item,
                            (UnityEngine_Transform_o *)Item,
                            !v4->fields.hideInactive,
                            1,
                            v16);
      if ( !Item )
        break;
      v17.n64_u64[0] = *(unsigned __int64 *)&v161.fields.m_Center.fields.x;
      z = v161.fields.m_Center.fields.z;
      v19.n64_u64[0] = *(unsigned __int64 *)&v161.fields.m_Extents.fields.x;
      v20 = v161.fields.m_Extents.fields.z;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Item, 0);
      if ( !v7 )
        break;
      v21 = *(_QWORD *)(v7 + 16);
      if ( v13 >= *(_DWORD *)v21 )
        goto LABEL_120;
      v22 = *(_QWORD *)(v21 + 16);
      if ( v12 >= (unsigned int)v22 )
        goto LABEL_120;
      y = localScale.fields.y;
      v24.n64_u64[0] = vmul_f32(vsub_f32(v17, v19), *(float32x2_t *)&localScale.fields.x).n64_u64[0];
      v25 = (float)(z - v20) * localScale.fields.z;
      v26.n64_u64[0] = vmul_f32(vsub_f32(vadd_f32(v17, v19), v24), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v27 = (float)((float)(z + v20) - v25) * 0.5;
      v28.n64_u64[0] = vadd_f32(v24, v26).n64_u64[0];
      v29 = v25 + v27;
      v30.n64_u64[0] = vadd_f32(v26, v28).n64_u64[0];
      v31 = v27 + v29;
      v32.n64_u64[0] = vsub_f32(v28, v26).n64_u64[0];
      v33 = v29 - v27;
      v28.n64_f32[0] = (float)(localScale.fields.z * v31) - v33;
      v34.n64_u64[0] = vmul_f32(
                         vsub_f32(vmul_f32(*(float32x2_t *)&localScale.fields.x, v30), v32),
                         (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v35 = v28.n64_f32[0] * 0.5;
      v36 = v7 + 24 * ((int)v12 + v22 * (int)v13);
      v37.n64_u64[0] = vadd_f32(v32, v34).n64_u64[0];
      v38 = v33 + v35;
      *(float32x2_t *)(v36 + 44) = v34;
      *(float32x2_t *)(v36 + 32) = v37;
      *(float *)(v36 + 40) = v38;
      *(float *)(v36 + 52) = v35;
      if ( !v8 )
        break;
      if ( v12 >= *(_DWORD *)(v8 + 24) )
LABEL_120:
        sub_1C7BD48(this);
      v39 = (float *)(v8 + 24LL * (int)v12);
      v40 = v39[8];
      v41 = v39[9];
      v42 = v39[10];
      v43 = v39[11];
      v44 = v39[12];
      v45 = v39[13];
      v46 = vsub_f32(v37, v34).n64_f32[0];
      v47 = v38 - v35;
      v34.n64_u32[0] = vadd_f32(v34, v37).n64_u32[0];
      v48 = v35 + v38;
      v37.n64_f32[0] = v37.n64_f32[1] - v34.n64_f32[1];
      v49 = v34.n64_f32[1] + v37.n64_f32[1];
      v50 = v40 - v43;
      v51 = v41 - v44;
      if ( (float)(v40 - v43) >= v46 )
        v50 = v46;
      v52 = v40 + v43;
      if ( v51 >= v37.n64_f32[0] )
        v51 = v37.n64_f32[1] - v34.n64_f32[1];
      v53 = v41 + v44;
      if ( (float)(v42 - v45) >= v47 )
        v54 = v47;
      else
        v54 = v42 - v45;
      v55 = v42 + v45;
      if ( v52 <= v46 )
        v52 = v46;
      if ( v53 <= v37.n64_f32[0] )
        v53 = v37.n64_f32[1] - v34.n64_f32[1];
      v56 = v52 - v50;
      if ( v55 <= v47 )
        v55 = v47;
      v57 = v56 * 0.5;
      v58 = (float)(v53 - v51) * 0.5;
      v59 = v50 + v57;
      v60 = (float)(v55 - v54) * 0.5;
      v61 = v51 + v58;
      v62 = v59 - v57;
      v63 = v57 + v59;
      v64 = v54 + v60;
      v65 = v61 - v58;
      v66 = v58 + v61;
      v67 = v64 - v60;
      if ( v62 >= v34.n64_f32[0] )
        v62 = v34.n64_f32[0];
      v68 = v60 + v64;
      if ( v65 >= v49 )
        v69 = v34.n64_f32[1] + v37.n64_f32[1];
      else
        v69 = v65;
      if ( v67 >= v48 )
        v67 = v48;
      if ( v63 <= v34.n64_f32[0] )
        v63 = v34.n64_f32[0];
      if ( v66 <= v49 )
        v66 = v34.n64_f32[1] + v37.n64_f32[1];
      if ( v68 <= v48 )
        v68 = v48;
      v70 = (float)(v63 - v62) * 0.5;
      v71 = (float)(v66 - v69) * 0.5;
      v72 = (float)(v68 - v67) * 0.5;
      v39[12] = v71;
      v39[13] = v72;
      v39[8] = v62 + v70;
      v39[9] = v69 + v71;
      v39[10] = v67 + v72;
      v39[11] = v70;
      if ( !v11 )
        break;
      if ( v13 >= *(_DWORD *)(v11 + 24) )
        goto LABEL_120;
      v73 = (float *)(v11 + 24LL * (int)v13);
      v74 = v73[8];
      v75 = v73[9];
      v76 = v73[10];
      v77 = v73[11];
      v78 = v73[12];
      v79 = v73[13];
      v80 = v12 + 1;
      ++v14;
      v81 = v74 - v77;
      v82 = v75 - v78;
      v83 = (float)(v74 - v77) < v46;
      v84 = v76 - v79;
      v85 = v74 + v77;
      if ( v83 )
        v86 = v81;
      else
        v86 = v46;
      v87 = v75 + v78;
      if ( v82 >= v37.n64_f32[0] )
        v88 = v37.n64_f32[1] - v34.n64_f32[1];
      else
        v88 = v82;
      v89 = v76 + v79;
      if ( v84 >= v47 )
        v90 = v47;
      else
        v90 = v84;
      if ( v85 > v46 )
        v46 = v85;
      if ( v87 > v37.n64_f32[0] )
        v37.n64_f32[0] = v87;
      v91 = v46 - v86;
      if ( v89 > v47 )
        v47 = v89;
      v92 = v91 * 0.5;
      v93 = (float)(v37.n64_f32[0] - v88) * 0.5;
      v94 = (float)(v47 - v90) * 0.5;
      v95 = (float)(v86 + v92) - v92;
      v96 = v92 + (float)(v86 + v92);
      v97 = (float)(v88 + v93) - v93;
      v98 = v93 + (float)(v88 + v93);
      v99 = (float)(v90 + v94) - v94;
      if ( v95 >= v34.n64_f32[0] )
        v95 = v34.n64_f32[0];
      v100 = v94 + (float)(v90 + v94);
      if ( v97 >= v49 )
        v101 = v34.n64_f32[1] + v37.n64_f32[1];
      else
        v101 = v97;
      if ( v99 >= v48 )
        v99 = v48;
      if ( v96 <= v34.n64_f32[0] )
        v96 = v34.n64_f32[0];
      if ( v98 <= v49 )
        v102 = v34.n64_f32[1] + v37.n64_f32[1];
      else
        v102 = v98;
      if ( v100 <= v48 )
        v100 = v48;
      v103 = (float)(v96 - v95) * 0.5;
      v104 = (float)(v102 - v101) * 0.5;
      v105 = (float)(v100 - v99) * 0.5;
      v73[12] = v104;
      v73[13] = v105;
      v73[8] = v95 + v103;
      v73[9] = v101 + v104;
      v73[10] = v99 + v105;
      v73[11] = v103;
      v106 = v80 < v4->fields.columns || v4->fields.columns < 1;
      v107 = v80 >= v4->fields.columns && v4->fields.columns >= 1;
      if ( v106 )
        ++v12;
      else
        v12 = 0;
      v13 += v107;
      if ( size == v14 )
        goto LABEL_77;
    }
LABEL_119:
    sub_1C7BD40(this, children);
  }
LABEL_77:
  PivotOffset = NGUIMath__GetPivotOffset(v4->fields.cellAlignment, (const MethodInfo *)children);
  v110 = children->fields._size;
  if ( v110 >= 1 )
  {
    v111 = fminf(PivotOffset.fields.x, 1.0);
    v112 = fminf(PivotOffset.fields.y, 1.0);
    if ( PivotOffset.fields.x < 0.0 )
      v113 = 0.0;
    else
      v113 = v111;
    v114 = 0;
    v115 = 0;
    v116 = 0;
    v117 = 0.0;
    if ( PivotOffset.fields.y < 0.0 )
      v118 = 0.0;
    else
      v118 = v112;
    v119 = 0.0;
    v157 = v118;
    v158 = v113;
    do
    {
      this = (UITable_o *)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)children,
                            v116,
                            (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_Transform__get_Item__);
      if ( !v7 )
        goto LABEL_119;
      v120 = *(_QWORD *)(v7 + 16);
      if ( v115 >= *(_DWORD *)v120 )
        goto LABEL_120;
      v121 = *(_QWORD *)(v120 + 16);
      if ( v114 >= (unsigned int)v121 )
        goto LABEL_120;
      if ( !v8 )
        goto LABEL_119;
      if ( v114 >= *(_DWORD *)(v8 + 24) )
        goto LABEL_120;
      if ( !v11 )
        goto LABEL_119;
      if ( v115 >= *(_DWORD *)(v11 + 24) )
        goto LABEL_120;
      v122 = (UnityEngine_Transform_o *)this;
      v160 = v117;
      if ( !this )
        goto LABEL_119;
      v123 = v8 + 24LL * (int)v114;
      v124 = v11 + 24LL * (int)v115;
      v125 = (float *)(v7 + 24 * ((int)v114 + v121 * (int)v115));
      v126 = *(float *)(v123 + 44);
      v127 = *(float *)(v124 + 36);
      v128 = v125[8];
      v129 = v125[9];
      v130 = v125[11];
      v131 = v125[12];
      v132 = *(float *)(v124 + 48);
      v159 = *(float *)(v123 + 32);
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
      v133 = v127 + v132;
      v134 = v127 - v132;
      v135 = (float)(v129 + v131) - (float)(v129 - v131);
      if ( v4->fields.direction )
        v136 = (float)((float)(v119 + v131) - v129)
             - (float)((float)((float)(v157 * (float)(v134 + (float)(v135 - v133))) + 0.0) - v4->fields.padding.fields.y);
      else
        v136 = (float)((float)((float)-v119 - v131) - v129)
             + (float)((float)((float)(v134 + (float)(v135 - v133))
                             + (float)(v157 * (float)(0.0 - (float)(v134 + (float)(v135 - v133)))))
                     - v4->fields.padding.fields.y);
      x = v4->fields.padding.fields.x;
      v138 = (float)((float)(v160 + v130) - v128)
           - (float)((float)((float)(v158
                                   * (float)((float)(v159 - v126)
                                           + (float)((float)((float)(v128 + v130) - (float)(v128 - v130))
                                                   - (float)(v159 + v126))))
                           + 0.0)
                   - x);
      v117 = v160 + (float)((float)(v126 + v126) + (float)(x + x));
      UnityEngine_Transform__set_localPosition(v122, localPosition, 0);
      v139 = v4->fields.columns;
      if ( (int)++v114 >= v139 && v139 >= 1 )
      {
        v114 = 0;
        ++v115;
        v119 = v119 + (float)((float)(v132 + v132) + (float)(v4->fields.padding.fields.y + v4->fields.padding.fields.y));
        v117 = 0.0;
      }
    }
    while ( v110 != ++v116 );
  }
  pivot = v4->fields.pivot;
  if ( pivot )
  {
    v141 = NGUIMath__GetPivotOffset(pivot, v108);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0);
    NGUIMath__CalculateRelativeWidgetBounds_49818548(&v161, transform, transform, 0, 1, v143);
    v145 = v161.fields.m_Extents.fields.x;
    v144 = v161.fields.m_Extents.fields.y;
    v146 = fminf(v141.fields.x, 1.0);
    v147 = fminf(v141.fields.y, 1.0);
    if ( v141.fields.x < 0.0 )
      v148 = 0.0;
    else
      v148 = v146;
    if ( v141.fields.y < 0.0 )
      v149 = 0.0;
    else
      v149 = v147;
    this = (UITable_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0);
    if ( !this )
      goto LABEL_119;
    v150 = (UnityEngine_Transform_o *)this;
    if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0) >= 1 )
    {
      v151 = (float)(v148 * (float)(v145 + v145)) + 0.0;
      v152 = 0;
      v153 = (float)(v144 * -2.0) + (float)(v149 * (float)(0.0 - (float)(v144 * -2.0)));
      while ( 1 )
      {
        this = (UITable_o *)UnityEngine_Transform__GetChild(v150, v152, 0);
        if ( !this )
          goto LABEL_119;
        v154 = (UnityEngine_Transform_o *)this;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)this,
                             (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_SpringPosition___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (UITable_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_119;
          v156 = *((float *)&Component_object[2].klass + 1) - v153;
          *(float *)&Component_object[2].klass = *(float *)&Component_object[2].klass - v151;
          *((float *)&Component_object[2].klass + 1) = v156;
        }
        else
        {
          v164 = UnityEngine_Transform__get_localPosition(v154, 0);
          v164.fields.x = v164.fields.x - v151;
          v164.fields.y = v164.fields.y - v153;
          UnityEngine_Transform__set_localPosition(v154, v164, 0);
        }
        if ( ++v152 >= UnityEngine_Transform__get_childCount(v150, 0) )
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

  if ( (byte_4CF2D57 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Comparison_Transform__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Transform__Sort__);
    sub_1C7BAE8(&Method_UIGrid_SortByName__);
    byte_4CF2D57 = 1;
  }
  v4 = (System_Comparison_T__o *)sub_1C7BD34(System_Comparison_Transform__TypeInfo);
  System_Comparison_object____ctor(v4, 0, Method_UIGrid_SortByName__, 0);
  if ( !list )
    sub_1C7BD40(v5, v6);
  System_Collections_Generic_List_object___Sort_58984640(
    (System_Collections_Generic_List_object__o *)list,
    v4,
    (const MethodInfo_38408C0 *)Method_System_Collections_Generic_List_Transform__Sort__);
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
  sub_1C7BA8C(
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
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AB8A74;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AB8A34;
}


System_IAsyncResult_o *UITable_OnReposition__BeginInvoke(
        UITable_OnReposition_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, &v5, callback, object);
}


void UITable_OnReposition__EndInvoke(
        UITable_OnReposition_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void UITable_OnReposition__Invoke(UITable_OnReposition_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}