void UITable___ctor(UITable_o *this, const MethodInfo *method)
{
  this->fields.hideInactive = 1;
  if ( !byte_4C312CA )
  {
    sub_1C32C20(&UnityEngine_Vector2_TypeInfo);
    byte_4C312CA = 1;
  }
  this->fields.padding = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


System_Collections_Generic_List_Transform__o *UITable__GetChildList(UITable_o *this, const MethodInfo *method)
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
  System_Comparison_T__o *v15; // x0
  intptr_t *v16; // x8
  System_Comparison_T__o *onCustomSort; // x1
  System_Collections_Generic_List_object__o *v18; // x0
  System_Comparison_T__o *v19; // x20

  if ( (byte_4C3C0CA & 1) == 0 )
  {
    sub_1C32C20(&System_Comparison_Transform__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Transform__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Transform__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Transform___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_Transform__TypeInfo);
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_UIGrid_SortByName__);
    sub_1C32C20(&Method_UIGrid_SortHorizontal__);
    sub_1C32C20(&Method_UIGrid_SortVertical__);
    byte_4C3C0CA = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_Transform___ctor__);
  if ( !transform )
LABEL_32:
    sub_1C32E7C(childCount);
  childCount = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0);
  if ( (int)childCount >= 1 )
  {
    for ( i = 0; i < (int)childCount; ++i )
    {
      childCount = UnityEngine_Transform__GetChild(transform, i, 0);
      v9 = (UnityEngine_Object_o *)childCount;
      if ( !this->fields.hideInactive )
        goto LABEL_35;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      childCount = (UnityEngine_Transform_o *)UnityEngine_Object__op_Implicit(v9, 0);
      if ( ((unsigned __int8)childCount & 1) != 0 )
      {
        if ( !v9 )
          goto LABEL_32;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0);
        if ( !NGUITools_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
        childCount = (UnityEngine_Transform_o *)NGUITools__GetActive_49301984(gameObject, 0);
        if ( ((unsigned __int8)childCount & 1) != 0 )
        {
LABEL_35:
          if ( !v4 )
            goto LABEL_32;
          items = v4->fields._items;
          v12 = Method_System_Collections_Generic_List_Transform__Add__;
          ++v4->fields._version;
          if ( !items )
            goto LABEL_32;
          size = v4->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v4,
              (Il2CppObject *)v9,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v14 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v14[4] = (Il2CppClass *)v9;
            sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v9, v7, v8);
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
      v15 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_Transform__TypeInfo);
      v16 = &Method_UIGrid_SortByName__;
      goto LABEL_27;
    case 2:
      v15 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_Transform__TypeInfo);
      v16 = &Method_UIGrid_SortHorizontal__;
      goto LABEL_27;
    case 3:
      v15 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_Transform__TypeInfo);
      v16 = &Method_UIGrid_SortVertical__;
LABEL_27:
      v19 = v15;
      System_Comparison_object____ctor(v15, 0, *v16, 0);
      if ( !v4 )
        goto LABEL_32;
      v18 = v4;
      onCustomSort = v19;
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
      v18 = v4;
LABEL_29:
      System_Collections_Generic_List_object___Sort_58303104(
        v18,
        onCustomSort,
        (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_Transform__Sort__);
      return (System_Collections_Generic_List_Transform__o *)v4;
  }
}


void UITable__Init(UITable_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  Il2CppObject *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3C0CC & 1) == 0 )
  {
    sub_1C32C20(&Method_NGUITools_FindInParents_UIPanel___);
    sub_1C32C20(&NGUITools_TypeInfo);
    byte_4C3C0CC = 1;
  }
  this->fields.mInitDone = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v4 = NGUITools__FindInParents_object_(
         gameObject,
         (const MethodInfo_31676B4 *)Method_NGUITools_FindInParents_UIPanel___);
  this->fields.mPanel = (struct UIPanel_o *)v4;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mPanel, (int32_t)v4, v5, v6);
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
  if ( (byte_4C3C0CD & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Application_TypeInfo);
    sub_1C32C20(&NGUITools_TypeInfo);
    byte_4C3C0CD = 1;
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
  const MethodInfo *v6; // x2
  UnityEngine_Object_o *mPanel; // x21
  Il2CppObject *Component_object; // x20
  struct UITable_OnReposition_o *onReposition; // x8

  if ( (byte_4C3C0CF & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Application_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C0CF = 1;
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
    UITable__RepositionVariableSize(this, ChildList, v6);
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
      UIPanel__ConstrainTargetToBounds_49076828((UIPanel_o *)ChildList, transform, 1, 0);
      ChildList = (System_Collections_Generic_List_Transform__o *)this->fields.mPanel;
      if ( !ChildList )
        goto LABEL_28;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)ChildList,
                           (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
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
        sub_1C32E7C(ChildList);
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
  const MethodInfo *v10; // x1
  int32_t size; // w27
  __int64 v12; // x23
  unsigned int v13; // w28
  unsigned int v14; // w29
  int32_t v15; // w24
  Il2CppObject *Item; // x25
  const MethodInfo *v17; // x4
  float32x2_t v18; // d10
  float z; // s11
  float32x2_t v20; // d12
  float v21; // s13
  __int64 v22; // x8
  __int64 v23; // x9
  float y; // v0.s[1]
  float32x2_t v25; // d3
  float v26; // s4
  float32x2_t v27; // d1
  float v28; // s5
  float32x2_t v29; // d3
  float v30; // s4
  float32x2_t v31; // d6
  float v32; // s7
  float32x2_t v33; // d1
  float v34; // s4
  float32x2_t v35; // d2
  float v36; // s3
  __int64 v37; // x9
  float32x2_t v38; // d5
  float v39; // s4
  float *v40; // x9
  float v41; // s16
  float v42; // s17
  float v43; // s18
  float v44; // s19
  float v45; // s20
  float v46; // s21
  float v47; // s0
  float v48; // s1
  float v49; // s3
  float v50; // s4
  float v51; // s6
  float v52; // s7
  float v53; // s16
  float v54; // s17
  float v55; // s19
  float v56; // s18
  float v57; // s16
  float v58; // s16
  float v59; // s17
  float v60; // s6
  float v61; // s18
  float v62; // s7
  float v63; // s20
  float v64; // s6
  float v65; // s16
  float v66; // s19
  float v67; // s7
  float v68; // s17
  float v69; // s16
  float v70; // s18
  float v71; // s6
  float v72; // s7
  float v73; // s16
  float *v74; // x8
  float v75; // s6
  float v76; // s7
  float v77; // s16
  float v78; // s17
  float v79; // s18
  float v80; // s19
  int32_t v81; // w9
  float v82; // s20
  float v83; // s21
  bool v84; // nf
  float v85; // s22
  float v86; // s6
  float v87; // s17
  float v88; // s7
  float v89; // s18
  float v90; // s16
  float v91; // s19
  float v92; // s0
  float v93; // s0
  float v94; // s5
  float v95; // s1
  float v96; // s16
  float v97; // s0
  float v98; // s17
  float v99; // s5
  float v100; // s7
  float v101; // s1
  float v102; // s6
  float v103; // s2
  float v104; // s0
  float v105; // s2
  float v106; // s1
  _BOOL4 v107; // w8
  int v108; // w9
  const MethodInfo *v109; // x1
  UnityEngine_Vector2_o PivotOffset; // kr00_8
  int32_t v111; // w26
  float v112; // s0
  float v113; // s2
  float v114; // s4
  unsigned int v115; // w28
  unsigned int v116; // w27
  int32_t v117; // w24
  float v118; // s10
  float v119; // s0
  float v120; // s13
  __int64 v121; // x8
  __int64 v122; // x8
  UnityEngine_Transform_o *v123; // x25
  __int64 v124; // x10
  __int64 v125; // x9
  float *v126; // x8
  float v127; // s14
  float v128; // s12
  float v129; // s8
  float v130; // s10
  float v131; // s9
  float v132; // s11
  float v133; // s15
  float v134; // s1
  float v135; // s0
  float v136; // s3
  float v137; // s1
  float x; // s4
  float v139; // s0
  int v140; // w8
  int32_t pivot; // w0
  UnityEngine_Vector2_o v142; // kr08_8
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v144; // x4
  float v145; // s10
  float v146; // s12
  float v147; // s1
  float v148; // s0
  float v149; // s8
  float v150; // s9
  UnityEngine_Transform_o *v151; // x19
  float v152; // s8
  int32_t v153; // w20
  float v154; // s9
  UnityEngine_Transform_o *v155; // x21
  Il2CppObject *Component_object; // x22
  float v157; // s1
  float v158; // [xsp+4h] [xbp-CCh]
  float v159; // [xsp+8h] [xbp-C8h]
  float v160; // [xsp+10h] [xbp-C0h]
  float v161; // [xsp+14h] [xbp-BCh]
  UnityEngine_Bounds_o v162; // [xsp+18h] [xbp-B8h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v165; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4C3C0CE & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Bounds____TypeInfo);
    sub_1C32C20(&UnityEngine_Bounds___TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_SpringPosition___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Transform__get_Item__);
    this = (UITable_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C0CE = 1;
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
  *(_QWORD *)&v162.fields.m_Center.fields.x = v6;
  *(_QWORD *)&v162.fields.m_Center.fields.z = columns;
  v7 = sub_1C32CD0(UnityEngine_Bounds____TypeInfo, &v162);
  v8 = sub_1C32CC8(UnityEngine_Bounds___TypeInfo, (unsigned int)columns);
  v9 = sub_1C32CC8(UnityEngine_Bounds___TypeInfo, (unsigned int)v6);
  size = children->fields._size;
  v12 = v9;
  if ( size >= 1 )
  {
    v13 = 0;
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)children,
               v15,
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_Transform__get_Item__);
      this = (UITable_o *)NGUIMath__CalculateRelativeWidgetBounds_49256556(
                            &v162,
                            (UnityEngine_Transform_o *)Item,
                            (UnityEngine_Transform_o *)Item,
                            !v4->fields.hideInactive,
                            1,
                            v17);
      if ( !Item )
        break;
      v18.n64_u64[0] = *(unsigned __int64 *)&v162.fields.m_Center.fields.x;
      z = v162.fields.m_Center.fields.z;
      v20.n64_u64[0] = *(unsigned __int64 *)&v162.fields.m_Extents.fields.x;
      v21 = v162.fields.m_Extents.fields.z;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Item, 0);
      if ( !v7 )
        break;
      v22 = *(_QWORD *)(v7 + 16);
      if ( v14 >= *(_DWORD *)v22 )
        goto LABEL_120;
      v23 = *(_QWORD *)(v22 + 16);
      if ( v13 >= (unsigned int)v23 )
        goto LABEL_120;
      y = localScale.fields.y;
      v25.n64_u64[0] = vmul_f32(vsub_f32(v18, v20), *(float32x2_t *)&localScale.fields.x).n64_u64[0];
      v26 = (float)(z - v21) * localScale.fields.z;
      v27.n64_u64[0] = vmul_f32(vsub_f32(vadd_f32(v18, v20), v25), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v28 = (float)((float)(z + v21) - v26) * 0.5;
      v29.n64_u64[0] = vadd_f32(v25, v27).n64_u64[0];
      v30 = v26 + v28;
      v31.n64_u64[0] = vadd_f32(v27, v29).n64_u64[0];
      v32 = v28 + v30;
      v33.n64_u64[0] = vsub_f32(v29, v27).n64_u64[0];
      v34 = v30 - v28;
      v29.n64_f32[0] = (float)(localScale.fields.z * v32) - v34;
      v35.n64_u64[0] = vmul_f32(
                         vsub_f32(vmul_f32(*(float32x2_t *)&localScale.fields.x, v31), v33),
                         (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      v36 = v29.n64_f32[0] * 0.5;
      v37 = v7 + 24 * ((int)v13 + v23 * (int)v14);
      v38.n64_u64[0] = vadd_f32(v33, v35).n64_u64[0];
      v39 = v34 + v36;
      *(float32x2_t *)(v37 + 44) = v35;
      *(float32x2_t *)(v37 + 32) = v38;
      *(float *)(v37 + 40) = v39;
      *(float *)(v37 + 52) = v36;
      if ( !v8 )
        break;
      if ( v13 >= *(_DWORD *)(v8 + 24) )
LABEL_120:
        sub_1C32E84(this);
      v40 = (float *)(v8 + 24LL * (int)v13);
      v41 = v40[8];
      v42 = v40[9];
      v43 = v40[10];
      v44 = v40[11];
      v45 = v40[12];
      v46 = v40[13];
      v47 = vsub_f32(v38, v35).n64_f32[0];
      v48 = v39 - v36;
      v35.n64_u32[0] = vadd_f32(v35, v38).n64_u32[0];
      v49 = v36 + v39;
      v38.n64_f32[0] = v38.n64_f32[1] - v35.n64_f32[1];
      v50 = v35.n64_f32[1] + v38.n64_f32[1];
      v51 = v41 - v44;
      v52 = v42 - v45;
      if ( (float)(v41 - v44) >= v47 )
        v51 = v47;
      v53 = v41 + v44;
      if ( v52 >= v38.n64_f32[0] )
        v52 = v38.n64_f32[1] - v35.n64_f32[1];
      v54 = v42 + v45;
      if ( (float)(v43 - v46) >= v48 )
        v55 = v48;
      else
        v55 = v43 - v46;
      v56 = v43 + v46;
      if ( v53 <= v47 )
        v53 = v47;
      if ( v54 <= v38.n64_f32[0] )
        v54 = v38.n64_f32[1] - v35.n64_f32[1];
      v57 = v53 - v51;
      if ( v56 <= v48 )
        v56 = v48;
      v58 = v57 * 0.5;
      v59 = (float)(v54 - v52) * 0.5;
      v60 = v51 + v58;
      v61 = (float)(v56 - v55) * 0.5;
      v62 = v52 + v59;
      v63 = v60 - v58;
      v64 = v58 + v60;
      v65 = v55 + v61;
      v66 = v62 - v59;
      v67 = v59 + v62;
      v68 = v65 - v61;
      if ( v63 >= v35.n64_f32[0] )
        v63 = v35.n64_f32[0];
      v69 = v61 + v65;
      if ( v66 >= v50 )
        v70 = v35.n64_f32[1] + v38.n64_f32[1];
      else
        v70 = v66;
      if ( v68 >= v49 )
        v68 = v49;
      if ( v64 <= v35.n64_f32[0] )
        v64 = v35.n64_f32[0];
      if ( v67 <= v50 )
        v67 = v35.n64_f32[1] + v38.n64_f32[1];
      if ( v69 <= v49 )
        v69 = v49;
      v71 = (float)(v64 - v63) * 0.5;
      v72 = (float)(v67 - v70) * 0.5;
      v73 = (float)(v69 - v68) * 0.5;
      v40[12] = v72;
      v40[13] = v73;
      v40[8] = v63 + v71;
      v40[9] = v70 + v72;
      v40[10] = v68 + v73;
      v40[11] = v71;
      if ( !v12 )
        break;
      if ( v14 >= *(_DWORD *)(v12 + 24) )
        goto LABEL_120;
      v74 = (float *)(v12 + 24LL * (int)v14);
      v75 = v74[8];
      v76 = v74[9];
      v77 = v74[10];
      v78 = v74[11];
      v79 = v74[12];
      v80 = v74[13];
      v81 = v13 + 1;
      ++v15;
      v82 = v75 - v78;
      v83 = v76 - v79;
      v84 = (float)(v75 - v78) < v47;
      v85 = v77 - v80;
      v86 = v75 + v78;
      if ( v84 )
        v87 = v82;
      else
        v87 = v47;
      v88 = v76 + v79;
      if ( v83 >= v38.n64_f32[0] )
        v89 = v38.n64_f32[1] - v35.n64_f32[1];
      else
        v89 = v83;
      v90 = v77 + v80;
      if ( v85 >= v48 )
        v91 = v48;
      else
        v91 = v85;
      if ( v86 > v47 )
        v47 = v86;
      if ( v88 > v38.n64_f32[0] )
        v38.n64_f32[0] = v88;
      v92 = v47 - v87;
      if ( v90 > v48 )
        v48 = v90;
      v93 = v92 * 0.5;
      v94 = (float)(v38.n64_f32[0] - v89) * 0.5;
      v95 = (float)(v48 - v91) * 0.5;
      v96 = (float)(v87 + v93) - v93;
      v97 = v93 + (float)(v87 + v93);
      v98 = (float)(v89 + v94) - v94;
      v99 = v94 + (float)(v89 + v94);
      v100 = (float)(v91 + v95) - v95;
      if ( v96 >= v35.n64_f32[0] )
        v96 = v35.n64_f32[0];
      v101 = v95 + (float)(v91 + v95);
      if ( v98 >= v50 )
        v102 = v35.n64_f32[1] + v38.n64_f32[1];
      else
        v102 = v98;
      if ( v100 >= v49 )
        v100 = v49;
      if ( v97 <= v35.n64_f32[0] )
        v97 = v35.n64_f32[0];
      if ( v99 <= v50 )
        v103 = v35.n64_f32[1] + v38.n64_f32[1];
      else
        v103 = v99;
      if ( v101 <= v49 )
        v101 = v49;
      v104 = (float)(v97 - v96) * 0.5;
      v105 = (float)(v103 - v102) * 0.5;
      v106 = (float)(v101 - v100) * 0.5;
      v74[12] = v105;
      v74[13] = v106;
      v74[8] = v96 + v104;
      v74[9] = v102 + v105;
      v74[10] = v100 + v106;
      v74[11] = v104;
      v107 = v81 < v4->fields.columns || v4->fields.columns < 1;
      v108 = v81 >= v4->fields.columns && v4->fields.columns >= 1;
      if ( v107 )
        ++v13;
      else
        v13 = 0;
      v14 += v108;
      if ( size == v15 )
        goto LABEL_77;
    }
LABEL_119:
    sub_1C32E7C(this);
  }
LABEL_77:
  PivotOffset = NGUIMath__GetPivotOffset(v4->fields.cellAlignment, v10);
  v111 = children->fields._size;
  if ( v111 >= 1 )
  {
    v112 = fminf(PivotOffset.fields.x, 1.0);
    v113 = fminf(PivotOffset.fields.y, 1.0);
    if ( PivotOffset.fields.x < 0.0 )
      v114 = 0.0;
    else
      v114 = v112;
    v115 = 0;
    v116 = 0;
    v117 = 0;
    v118 = 0.0;
    if ( PivotOffset.fields.y < 0.0 )
      v119 = 0.0;
    else
      v119 = v113;
    v120 = 0.0;
    v158 = v119;
    v159 = v114;
    do
    {
      this = (UITable_o *)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)children,
                            v117,
                            (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_Transform__get_Item__);
      if ( !v7 )
        goto LABEL_119;
      v121 = *(_QWORD *)(v7 + 16);
      if ( v116 >= *(_DWORD *)v121 )
        goto LABEL_120;
      v122 = *(_QWORD *)(v121 + 16);
      if ( v115 >= (unsigned int)v122 )
        goto LABEL_120;
      if ( !v8 )
        goto LABEL_119;
      if ( v115 >= *(_DWORD *)(v8 + 24) )
        goto LABEL_120;
      if ( !v12 )
        goto LABEL_119;
      if ( v116 >= *(_DWORD *)(v12 + 24) )
        goto LABEL_120;
      v123 = (UnityEngine_Transform_o *)this;
      v161 = v118;
      if ( !this )
        goto LABEL_119;
      v124 = v8 + 24LL * (int)v115;
      v125 = v12 + 24LL * (int)v116;
      v126 = (float *)(v7 + 24 * ((int)v115 + v122 * (int)v116));
      v127 = *(float *)(v124 + 44);
      v128 = *(float *)(v125 + 36);
      v129 = v126[8];
      v130 = v126[9];
      v131 = v126[11];
      v132 = v126[12];
      v133 = *(float *)(v125 + 48);
      v160 = *(float *)(v124 + 32);
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
      v134 = v128 + v133;
      v135 = v128 - v133;
      v136 = (float)(v130 + v132) - (float)(v130 - v132);
      if ( v4->fields.direction )
        v137 = (float)((float)(v120 + v132) - v130)
             - (float)((float)((float)(v158 * (float)(v135 + (float)(v136 - v134))) + 0.0) - v4->fields.padding.fields.y);
      else
        v137 = (float)((float)((float)-v120 - v132) - v130)
             + (float)((float)((float)(v135 + (float)(v136 - v134))
                             + (float)(v158 * (float)(0.0 - (float)(v135 + (float)(v136 - v134)))))
                     - v4->fields.padding.fields.y);
      x = v4->fields.padding.fields.x;
      v139 = (float)((float)(v161 + v131) - v129)
           - (float)((float)((float)(v159
                                   * (float)((float)(v160 - v127)
                                           + (float)((float)((float)(v129 + v131) - (float)(v129 - v131))
                                                   - (float)(v160 + v127))))
                           + 0.0)
                   - x);
      v118 = v161 + (float)((float)(v127 + v127) + (float)(x + x));
      UnityEngine_Transform__set_localPosition(v123, localPosition, 0);
      v140 = v4->fields.columns;
      if ( (int)++v115 >= v140 && v140 >= 1 )
      {
        v115 = 0;
        ++v116;
        v120 = v120 + (float)((float)(v133 + v133) + (float)(v4->fields.padding.fields.y + v4->fields.padding.fields.y));
        v118 = 0.0;
      }
    }
    while ( v111 != ++v117 );
  }
  pivot = v4->fields.pivot;
  if ( pivot )
  {
    v142 = NGUIMath__GetPivotOffset(pivot, v109);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0);
    NGUIMath__CalculateRelativeWidgetBounds_49256556(&v162, transform, transform, 0, 1, v144);
    v146 = v162.fields.m_Extents.fields.x;
    v145 = v162.fields.m_Extents.fields.y;
    v147 = fminf(v142.fields.x, 1.0);
    v148 = fminf(v142.fields.y, 1.0);
    if ( v142.fields.x < 0.0 )
      v149 = 0.0;
    else
      v149 = v147;
    if ( v142.fields.y < 0.0 )
      v150 = 0.0;
    else
      v150 = v148;
    this = (UITable_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0);
    if ( !this )
      goto LABEL_119;
    v151 = (UnityEngine_Transform_o *)this;
    if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0) >= 1 )
    {
      v152 = (float)(v149 * (float)(v146 + v146)) + 0.0;
      v153 = 0;
      v154 = (float)(v145 * -2.0) + (float)(v150 * (float)(0.0 - (float)(v145 * -2.0)));
      while ( 1 )
      {
        this = (UITable_o *)UnityEngine_Transform__GetChild(v151, v153, 0);
        if ( !this )
          goto LABEL_119;
        v155 = (UnityEngine_Transform_o *)this;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)this,
                             (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_SpringPosition___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (UITable_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_119;
          v157 = *((float *)&Component_object[2].klass + 1) - v154;
          *(float *)&Component_object[2].klass = *(float *)&Component_object[2].klass - v152;
          *((float *)&Component_object[2].klass + 1) = v157;
        }
        else
        {
          v165 = UnityEngine_Transform__get_localPosition(v155, 0);
          v165.fields.x = v165.fields.x - v152;
          v165.fields.y = v165.fields.y - v154;
          UnityEngine_Transform__set_localPosition(v155, v165, 0);
        }
        if ( ++v153 >= UnityEngine_Transform__get_childCount(v151, 0) )
          return;
      }
    }
  }
}


void UITable__Sort(UITable_o *this, System_Collections_Generic_List_Transform__o *list, const MethodInfo *method)
{
  System_Comparison_T__o *v4; // x20
  __int64 v5; // x0

  if ( (byte_4C3C0CB & 1) == 0 )
  {
    sub_1C32C20(&System_Comparison_Transform__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Transform__Sort__);
    sub_1C32C20(&Method_UIGrid_SortByName__);
    byte_4C3C0CB = 1;
  }
  v4 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_Transform__TypeInfo);
  System_Comparison_object____ctor(v4, 0, Method_UIGrid_SortByName__, 0);
  if ( !list )
    sub_1C32E7C(v5);
  System_Collections_Generic_List_object___Sort_58303104(
    (System_Collections_Generic_List_object__o *)list,
    v4,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_Transform__Sort__);
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
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A7E27C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7E23C;
}


System_IAsyncResult_o *UITable_OnReposition__BeginInvoke(
        UITable_OnReposition_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C32BD4(this, &v5, callback, object);
}


void UITable_OnReposition__EndInvoke(
        UITable_OnReposition_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void UITable_OnReposition__Invoke(UITable_OnReposition_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}