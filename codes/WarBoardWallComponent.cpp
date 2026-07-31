void WarBoardWallComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct WarBoardWallComponent_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5935F05 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardWallComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_21688/*"img_wall_{0}"*/);
    sub_21FFC50(&StringLiteral_3346/*"BreakWall_{0:00}"*/);
    byte_5935F05 = 1;
  }
  v7 = StringLiteral_21688/*"img_wall_{0}"*/;
  WarBoardWallComponent_TypeInfo->static_fields->WALL_ICON_NAME = (struct System_String_o *)StringLiteral_21688/*"img_wall_{0}"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)WarBoardWallComponent_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_3346/*"BreakWall_{0:00}"*/;
  static_fields = WarBoardWallComponent_TypeInfo->static_fields;
  static_fields->BREAK_ANIMATION_NAME = (struct System_String_o *)StringLiteral_3346/*"BreakWall_{0:00}"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->BREAK_ANIMATION_NAME,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void WarBoardWallComponent___ctor(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardWallComponent__CreateEffectText(
        WarBoardWallComponent_o *this,
        System_String_o *effectName,
        System_String_o *popText,
        int32_t popTextColor,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v11; // x20
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *CommonEffectAsset_object; // x24
  UnityEngine_Transform_o *transform; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_o *effectDisplayTransform; // x23
  UnityEngine_Object_o *v21; // x25
  __int64 v22; // x1
  __int64 v23; // x2
  Il2CppObject *v24; // x24
  WarBoardPopTextEffectPerformance_o *v25; // x0
  WarBoardPopTextEffectPerformance_o *v26; // x23
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Nullable_Vector3__o v37; // 0:x3.16
  System_Nullable_Vector3__o v38; // 0:x5.16

  if ( (byte_5935F03 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    sub_21FFC50(&WarBoardPopTextEffectPerformance_TypeInfo);
    byte_5935F03 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               effectName,
                               (const MethodInfo_39E28E0 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    effectDisplayTransform = (UnityEngine_Object_o *)this->fields.effectDisplayTransform;
    v21 = (UnityEngine_Object_o *)transform;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
    if ( !UnityEngine_Object__op_Inequality(effectDisplayTransform, 0, 0) )
      effectDisplayTransform = v21;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v23);
    v24 = UnityEngine_Object__Instantiate_object__59506996(
            CommonEffectAsset_object,
            (UnityEngine_Transform_o *)effectDisplayTransform,
            (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    v25 = (WarBoardPopTextEffectPerformance_o *)sub_21FFEBC(WarBoardPopTextEffectPerformance_TypeInfo);
    *(_QWORD *)&v37.fields.hasValue = 0;
    *(_QWORD *)&v37.fields.value.fields.y = 0;
    *(_QWORD *)&v38.fields.hasValue = 0;
    *(_QWORD *)&v38.fields.value.fields.y = 0;
    v26 = v25;
    WarBoardPopTextEffectPerformance___ctor(
      v25,
      0,
      (UnityEngine_GameObject_o *)v24,
      v37,
      v38,
      (System_Nullable_Vector3__o)0,
      0,
      1,
      0);
    if ( v26 )
    {
      WarBoardPopTextEffectPerformance__SetPopText(v26, popText, popTextColor, 0);
      if ( v11 )
      {
        items = v11->fields._items;
        v34 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
        ++v11->fields._version;
        if ( items )
        {
          size = v11->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)v26,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
            if ( taskList )
              goto LABEL_18;
          }
          else
          {
            v36 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v36[4] = (Il2CppClass *)v26;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v36 + 4), (int32_t)v26, v27, v28, v29, v30, v31, v32);
            if ( taskList )
            {
LABEL_18:
              System_Collections_Generic_List_object___AddRange(
                (System_Collections_Generic_List_object__o *)taskList,
                (System_Collections_Generic_IEnumerable_T__o *)v11,
                (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
              return;
            }
          }
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( Instance )
          {
            WarBoardManager__AddTask_44947516(
              (WarBoardManager_o *)Instance,
              0,
              (System_Collections_Generic_List_WarBoardTaskBase__o *)v11,
              0);
            return;
          }
        }
      }
    }
LABEL_22:
    sub_21FFECC(Instance, v13);
  }
}


UnityEngine_Vector3_o WarBoardWallComponent__GetIconPosition(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *iconSp; // x0

  iconSp = (UnityEngine_Component_o *)this->fields.iconSp;
  if ( !iconSp || (iconSp = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSp, 0)) == 0 )
    sub_21FFECC(iconSp, method);
  return UnityEngine_Transform__get_position((UnityEngine_Transform_o *)iconSp, 0);
}


WarBoardSimpleAnimationPerformance_o *WarBoardWallComponent__GetSimpleAnimationPerformance(
        WarBoardWallComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x20
  WarBoardSimpleAnimationPerformance_o *v6; // x21

  if ( (byte_5935F01 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardSimpleAnimationPerformance_TypeInfo);
    byte_5935F01 = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  v6 = (WarBoardSimpleAnimationPerformance_o *)sub_21FFEBC(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(v6, simpleAnimation, animationName, 0);
  return v6;
}


void WarBoardWallComponent__Initialize(
        WarBoardWallComponent_o *this,
        WarBoardWallData_o *data,
        UIAtlas_o *wallIconAtlas,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct WarBoardWallData_o **p_wallData; // x20
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  WarBoardBreakPointComponent_o *wallData; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x2
  UISprite_o *iconSp; // x21
  System_String_o *WALL_ICON_NAME; // x22
  Il2CppObject *v30; // x0
  UnityEngine_Transform_o *transform; // x21
  struct WarBoardWallData_o *v32; // x8
  __int64 breakPointMax_k__BackingField; // x21
  struct WarBoardBreakPointComponent_array *v34; // x0
  struct WarBoardBreakPointComponent_array **p_breakPoints; // x22
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  struct UIWidget_o *breakPointParent; // x8
  float v43; // s8
  unsigned __int64 v44; // x25
  __int64 v45; // x29
  int v46; // w28
  float v47; // s9
  Il2CppObject *breakPointPrefab; // x23
  __int64 v49; // x1
  __int64 v50; // x2
  UnityEngine_Transform_o *v51; // x24
  UnityEngine_GameObject_o *v52; // x24
  WarBoardBreakPointComponent_o *v53; // x23
  struct UIWidget_o *v54; // x8
  unsigned __int64 v55; // x24
  unsigned int *v56; // x26
  __int64 v57; // x1
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  struct WarBoardBreakPointComponent_array *v64; // x8
  float maxSpacing; // s0
  UnityEngine_Transform_array *v66; // x20
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  UnityEngine_Transform_o *v73; // x21
  const MethodInfo *v74; // x2
  struct WarBoardWallData_o *v75; // x8
  __int64 v76; // x0
  int32_t wallImageId; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5935EFB & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&UnityEngine_Transform___TypeInfo);
    sub_21FFC50(&WarBoardBreakPointComponent___TypeInfo);
    sub_21FFC50(&WarBoardWallComponent_TypeInfo);
    byte_5935EFB = 1;
  }
  this->fields.wallData = data;
  p_wallData = &this->fields.wallData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.wallData,
    (int32_t)data,
    (System_String_o *)wallIconAtlas,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  wallData = (WarBoardBreakPointComponent_o *)this->fields.wallData;
  if ( !wallData )
    goto LABEL_41;
  *(_QWORD *)&wallData->fields.maxSpacing = this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&wallData->fields.maxSpacing,
    (int32_t)this,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  wallData = (WarBoardBreakPointComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !wallData )
    goto LABEL_41;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)wallData,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.simpleAnimation,
    (int32_t)Component_object,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  wallData = (WarBoardBreakPointComponent_o *)this->fields.iconSp;
  if ( !wallData )
    goto LABEL_41;
  UISprite__set_atlas((UISprite_o *)wallData, wallIconAtlas, 0);
  iconSp = this->fields.iconSp;
  if ( !*(&WarBoardWallComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarBoardWallComponent_TypeInfo, v12, v27);
  wallData = (WarBoardBreakPointComponent_o *)*p_wallData;
  if ( !*p_wallData )
    goto LABEL_41;
  WALL_ICON_NAME = WarBoardWallComponent_TypeInfo->static_fields->WALL_ICON_NAME;
  wallImageId = WarBoardWallData__get_wallImageId((WarBoardWallData_o *)wallData, 0);
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &wallImageId);
  wallData = (WarBoardBreakPointComponent_o *)System_String__Format(WALL_ICON_NAME, v30, 0);
  if ( !iconSp )
    goto LABEL_41;
  UISprite__set_spriteName(iconSp, (System_String_o *)wallData, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  wallData = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v32 = this->fields.wallData;
  if ( !v32 )
    goto LABEL_41;
  if ( !wallData )
    goto LABEL_41;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)wallData,
                     v32->fields._squareIndex_k__BackingField,
                     0);
  if ( !transform )
    goto LABEL_41;
  UnityEngine_Transform__set_localPosition(transform, SquarePosition, 0);
  if ( !*p_wallData )
    goto LABEL_41;
  breakPointMax_k__BackingField = (unsigned int)(*p_wallData)->fields._breakPointMax_k__BackingField;
  v34 = (struct WarBoardBreakPointComponent_array *)sub_21FFD10(
                                                      WarBoardBreakPointComponent___TypeInfo,
                                                      (unsigned int)breakPointMax_k__BackingField);
  this->fields.breakPoints = v34;
  p_breakPoints = &this->fields.breakPoints;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.breakPoints, (int32_t)v34, v36, v37, v38, v39, v40, v41);
  breakPointParent = this->fields.breakPointParent;
  if ( !breakPointParent )
    goto LABEL_41;
  if ( (int)breakPointMax_k__BackingField >= 1 )
  {
    v43 = 0.0;
    v44 = 0;
    v45 = 8;
    v46 = 2 * breakPointMax_k__BackingField - 2;
    v47 = (float)breakPointParent->fields.mWidth / (float)(int)breakPointMax_k__BackingField;
    while ( 1 )
    {
      wallData = (WarBoardBreakPointComponent_o *)this->fields.breakPointParent;
      if ( !wallData )
        break;
      breakPointPrefab = (Il2CppObject *)this->fields.breakPointPrefab;
      v51 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)wallData, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49, v50);
      wallData = (WarBoardBreakPointComponent_o *)UnityEngine_Object__Instantiate_object__59506996(
                                                    breakPointPrefab,
                                                    v51,
                                                    (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
      if ( !wallData )
        break;
      v52 = (UnityEngine_GameObject_o *)wallData;
      v53 = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)wallData,
                                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      wallData = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__get_transform(v52, 0);
      if ( !wallData )
        break;
      v79.fields.y = 0.0;
      v79.fields.z = 0.0;
      v79.fields.x = v43;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)wallData, v79, 0);
      v54 = this->fields.breakPointParent;
      if ( !v54 )
        break;
      if ( !v53 )
        break;
      v55 = v44 + 1;
      WarBoardBreakPointComponent__Initialize(v53, v46 + v54->fields.mDepth, v44 + 1, 0, 0, 1, 0);
      v56 = (unsigned int *)*p_breakPoints;
      if ( !*p_breakPoints )
        break;
      wallData = (WarBoardBreakPointComponent_o *)sub_21FFDA4(v53, *(_QWORD *)(*(_QWORD *)v56 + 64LL));
      if ( !wallData )
        goto LABEL_43;
      if ( v44 >= v56[6] )
        goto LABEL_42;
      *(_QWORD *)&v56[v45] = v53;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v56[v45], (int32_t)v53, v58, v59, v60, v61, v62, v63);
      v64 = *p_breakPoints;
      if ( !*p_breakPoints )
        break;
      if ( v44 >= LODWORD(v64->max_length) )
        goto LABEL_42;
      if ( !*p_wallData )
        break;
      wallData = v64->m_Items[v44];
      if ( !wallData )
        break;
      WarBoardBreakPointComponent__SetActive(
        wallData,
        (__int64)v44 < (*p_wallData)->fields._breakPoint_k__BackingField,
        0,
        0);
      maxSpacing = v53->fields.maxSpacing;
      v46 -= 2;
      v45 += 2;
      ++v44;
      if ( maxSpacing >= v47 )
        maxSpacing = v47;
      v43 = v43 + maxSpacing;
      if ( breakPointMax_k__BackingField == v55 )
        goto LABEL_34;
    }
LABEL_41:
    sub_21FFECC(wallData, v12);
  }
LABEL_34:
  v66 = (UnityEngine_Transform_array *)sub_21FFD10(UnityEngine_Transform___TypeInfo, 1);
  wallData = (WarBoardBreakPointComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !v66 )
    goto LABEL_41;
  v73 = (UnityEngine_Transform_o *)wallData;
  if ( wallData )
  {
    wallData = (WarBoardBreakPointComponent_o *)sub_21FFDA4(wallData, v66->obj.klass->_1.element_class);
    if ( !wallData )
    {
LABEL_43:
      v76 = sub_21FFEF0(wallData, v57);
      sub_21FFD90(v76, 0);
    }
  }
  if ( !LODWORD(v66->max_length) )
LABEL_42:
    sub_21FFED4(wallData);
  v66->m_Items[0] = v73;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v66->m_Items, (int32_t)v73, v67, v68, v69, v70, v71, v72);
  WarBoardWallComponent__SetButtonTweenTarget(this, v66, v74);
  wallData = (WarBoardBreakPointComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v75 = this->fields.wallData;
  if ( !v75 || !wallData )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wallData, !v75->fields._isDestroy_k__BackingField, 0);
  this->fields.isSelectable = 0;
}


// local variable allocation has failed, the output may be wrong!
void WarBoardWallComponent__OnBreak(
        WarBoardWallComponent_o *this,
        int32_t oldBreakPoint,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        int32_t dummyPoint,
        const MethodInfo *method)
{
  struct WarBoardWallData_o *wallData; // x8
  int32_t breakPoint_k__BackingField; // w9
  WarBoardWallComponent_o *v8; // x20
  signed __int64 v9; // x22
  signed __int64 v10; // x23
  signed __int64 v11; // x21
  struct WarBoardBreakPointComponent_array *breakPoints; // x8

  wallData = this->fields.wallData;
  if ( !wallData )
LABEL_17:
    sub_21FFECC(this, *(_QWORD *)&oldBreakPoint);
  breakPoint_k__BackingField = wallData->fields._breakPoint_k__BackingField;
  v8 = this;
  v9 = oldBreakPoint;
  v10 = 0;
  if ( dummyPoint >= 0 )
    breakPoint_k__BackingField = dummyPoint;
  v11 = breakPoint_k__BackingField;
  while ( v10 < wallData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = v8->fields.breakPoints;
    if ( v10 >= v9 || v10 < v11 )
    {
      if ( !breakPoints )
        goto LABEL_17;
      if ( v10 >= (unsigned __int64)LODWORD(breakPoints->max_length) )
LABEL_19:
        sub_21FFED4(this);
      this = (WarBoardWallComponent_o *)breakPoints->m_Items[v10];
      if ( !this )
        goto LABEL_17;
      WarBoardBreakPointComponent__SetActive((WarBoardBreakPointComponent_o *)this, v10 < v11, 0, 0);
    }
    else
    {
      if ( !breakPoints )
        goto LABEL_17;
      if ( v10 >= (unsigned __int64)LODWORD(breakPoints->max_length) )
        goto LABEL_19;
      this = (WarBoardWallComponent_o *)breakPoints->m_Items[v10];
      if ( !this )
        goto LABEL_17;
      WarBoardBreakPointComponent__OnBreak((WarBoardBreakPointComponent_o *)this, taskList, 0, 0);
    }
    wallData = v8->fields.wallData;
    ++v10;
    if ( !wallData )
      goto LABEL_17;
  }
}


void WarBoardWallComponent__OnClick(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  WarBoardWallComponent_o *v2; // x19
  struct WarBoardWallData_o *wallData; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  struct WarBoardWallData_o *v7; // x8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x20
  struct System_Threading_CancellationTokenSource_o *v10; // x8
  Il2CppObject *Instance; // x0
  WarBoardWallData_o *v12; // x20
  WarBoardManager_o *v13; // x21
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_5935EFF & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardWallComponent_o *)sub_21FFC50(&Method_WarBoardWallComponent_OnClick__);
    byte_5935EFF = 1;
  }
  wallData = v2->fields.wallData;
  if ( !wallData )
    goto LABEL_22;
  if ( wallData->fields._isDestroy_k__BackingField )
    return;
  this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)this, 0) && v2->fields.isSelectable )
  {
    v4 = Method_WarBoardWallComponent_OnClick__;
    if ( (*((_BYTE *)Method_WarBoardWallComponent_OnClick__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_21FFC68(Method_WarBoardWallComponent_OnClick__);
    v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
    this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( this )
    {
      m_CancellationTokenSource = this[3].fields.m_CancellationTokenSource;
      if ( m_CancellationTokenSource )
      {
        OverwriteAssetSoundName__PlaySe(
          v5,
          (System_String_o *)m_CancellationTokenSource->fields._registeredCallbacksLists,
          0,
          0);
        this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        v7 = v2->fields.wallData;
        if ( v7 )
        {
          if ( this )
          {
            WarBoardManager__SelectedPieceAction((WarBoardManager_o *)this, v7->fields._squareIndex_k__BackingField, 0);
            return;
          }
        }
      }
    }
LABEL_22:
    sub_21FFECC(this, method);
  }
  v8 = Method_WarBoardWallComponent_OnClick__;
  if ( (*((_BYTE *)Method_WarBoardWallComponent_OnClick__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_21FFC68(Method_WarBoardWallComponent_OnClick__);
  v9 = (System_Reflection_MethodBase_o *)sub_21FFC34(v8, v8[4]);
  this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  v10 = this[3].fields.m_CancellationTokenSource;
  if ( !v10 )
    goto LABEL_22;
  OverwriteAssetSoundName__PlaySe(v9, *(System_String_o **)&v10->fields._disposed, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v12 = v2->fields.wallData;
  v13 = (WarBoardManager_o *)Instance;
  this = (WarBoardWallComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0);
  if ( !this )
    goto LABEL_22;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
  if ( !v13 )
    goto LABEL_22;
  WarBoardManager__ShowWallSimplePopup(v13, v12, position, 0);
}


void WarBoardWallComponent__OnDead(
        WarBoardWallComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  char *wallData; // x0
  System_String_o *BREAK_ANIMATION_NAME; // x20
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  const MethodInfo *v9; // x2
  Il2CppObject *v10; // x20
  MissionNaviTransitionBoardItem_o *v11; // x22
  System_Delegate_o *v12; // x23
  WarBoardTaskBase_TaskCallback_o *v13; // x24
  System_Delegate_o *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  int32_t v21; // w8
  WarBoardTaskBase_TaskCallback_c *v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  Il2CppObject *Instance; // x19
  char *v40; // x21
  __int64 v41; // x0
  __int64 v42; // x1
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  __int64 v49; // x0
  int32_t wallDestroyEffectId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5935F02 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&WarBoardTaskBase___TypeInfo);
    sub_21FFC50(&Method_WarBoardWallComponent__OnDead_b__22_0__);
    sub_21FFC50(&WarBoardWallComponent_TypeInfo);
    byte_5935F02 = 1;
  }
  if ( !*(&WarBoardWallComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarBoardWallComponent_TypeInfo, taskList, method);
  wallData = (char *)this->fields.wallData;
  if ( !wallData )
    goto LABEL_24;
  BREAK_ANIMATION_NAME = WarBoardWallComponent_TypeInfo->static_fields->BREAK_ANIMATION_NAME;
  wallDestroyEffectId = WarBoardWallData__get_wallDestroyEffectId((WarBoardWallData_o *)wallData, 0);
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &wallDestroyEffectId);
  v8 = System_String__Format(BREAK_ANIMATION_NAME, v7, 0);
  wallData = (char *)WarBoardWallComponent__GetSimpleAnimationPerformance(this, v8, v9);
  if ( !wallData )
    goto LABEL_24;
  v10 = (Il2CppObject *)wallData;
  v11 = (MissionNaviTransitionBoardItem_o *)(wallData + 40);
  v12 = (System_Delegate_o *)*((_QWORD *)wallData + 5);
  v13 = (WarBoardTaskBase_TaskCallback_o *)sub_21FFEBC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(v13, (Il2CppObject *)this, Method_WarBoardWallComponent__OnDead_b__22_0__, 0);
  v14 = System_Delegate__Combine(v12, (System_Delegate_o *)v13, 0);
  v21 = (int)v14;
  if ( !v14 )
    goto LABEL_11;
  v22 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v14->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (v11->klass = (MissionNaviTransitionBoardItem_c *)v14, (WarBoardTaskBase_TaskCallback_c *)v14->klass != v22) )
  {
    sub_220024C(v14, v22, v15, v16);
LABEL_11:
    v11->klass = 0;
  }
  sub_21FFBF4(v11, v21, v15, v16, v17, v18, v19, v20);
  wallData = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !wallData )
    goto LABEL_24;
  *((_QWORD *)wallData + 127) = v10;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(wallData + 1016), (int32_t)v10, v23, v24, v25, v26, v27, v28);
  if ( !taskList )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    wallData = (char *)sub_21FFD10(WarBoardTaskBase___TypeInfo, 1);
    if ( wallData )
    {
      v40 = wallData;
      v41 = sub_21FFDA4(v10, *(_QWORD *)(*(_QWORD *)wallData + 64LL));
      if ( !v41 )
      {
        v49 = sub_21FFEF0(0, v42);
        sub_21FFD90(v49, 0);
      }
      if ( !*((_DWORD *)v40 + 6) )
        sub_21FFED4(v41);
      *((_QWORD *)v40 + 4) = v10;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v40 + 32), (int32_t)v10, v43, v44, v45, v46, v47, v48);
      if ( Instance )
      {
        WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v40, 0);
        return;
      }
    }
LABEL_24:
    sub_21FFECC(wallData, taskList);
  }
  items = taskList->fields._items;
  v36 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++taskList->fields._version;
  if ( !items )
    goto LABEL_24;
  size = taskList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)taskList,
      v10,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = &items->obj.klass + size;
    taskList->fields._size = size + 1;
    v38[4] = (Il2CppClass *)v10;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v38 + 4), (int32_t)v10, v29, v30, v31, v32, v33, v34);
  }
}


void WarBoardWallComponent__OnLongClick(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *v2; // x19
  UnityEngine_Component_c *klass; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  Il2CppObject *Instance; // x0
  WarBoardWallData_o *v8; // x20
  WarBoardManager_o *v9; // x21
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  v2 = (UnityEngine_Component_o *)this;
  if ( (byte_5935F00 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardWallComponent_o *)sub_21FFC50(&Method_WarBoardWallComponent_OnLongClick__);
    byte_5935F00 = 1;
  }
  klass = v2[3].klass;
  if ( !klass )
    goto LABEL_12;
  if ( LOBYTE(klass->_1.byval_arg.data) )
    return;
  v4 = Method_WarBoardWallComponent_OnLongClick__;
  if ( (*((_BYTE *)Method_WarBoardWallComponent_OnLongClick__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_21FFC68(Method_WarBoardWallComponent_OnLongClick__);
  v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
  this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this
    || (m_CancellationTokenSource = this[3].fields.m_CancellationTokenSource) == 0
    || (OverwriteAssetSoundName__PlaySe(v5, *(System_String_o **)&m_CancellationTokenSource->fields._disposed, 0, 0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        v8 = (WarBoardWallData_o *)v2[3].klass,
        v9 = (WarBoardManager_o *)Instance,
        (this = (WarBoardWallComponent_o *)UnityEngine_Component__get_transform(v2, 0)) == 0)
    || (position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0), !v9) )
  {
LABEL_12:
    sub_21FFECC(this, method);
  }
  WarBoardManager__ShowWallSimplePopup(v9, v8, position, 0);
}


void WarBoardWallComponent__OnShowDamagePopup(
        WarBoardWallComponent_o *this,
        System_String_o *popText,
        int32_t popTextColor,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  WarBoardManager_o *gameObject; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x23
  const MethodInfo *v12; // x5

  if ( (byte_5935F04 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&StringLiteral_19652/*"ef_dm_base"*/);
    byte_5935F04 = 1;
  }
  gameObject = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_12;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0) )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    if ( !System_String__IsNullOrEmpty(popText, 0) )
      WarBoardWallComponent__CreateEffectText(
        this,
        (System_String_o *)StringLiteral_19652/*"ef_dm_base"*/,
        popText,
        popTextColor,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)v11,
        v12);
    if ( taskList )
    {
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v11,
        (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      return;
    }
    gameObject = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( gameObject )
    {
      WarBoardManager__AddTask_44947516(gameObject, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v11, 0);
      return;
    }
LABEL_12:
    sub_21FFECC(gameObject, v10);
  }
}


void WarBoardWallComponent__Selectable(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  struct WarBoardWallData_o *wallData; // x8

  wallData = this->fields.wallData;
  if ( !wallData )
    sub_21FFECC(this, method);
  if ( !wallData->fields._isDestroy_k__BackingField )
    this->fields.isSelectable = 1;
}


void WarBoardWallComponent__SetButtonTweenTarget(
        WarBoardWallComponent_o *this,
        UnityEngine_Transform_array *parents,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x21
  UnityEngine_Component_o *ComponentsInChildren_object; // x0
  __int64 v6; // x1
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v8; // x28
  __int64 v9; // x2
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v11; // x22
  unsigned __int64 v12; // x29
  UnityEngine_Object_o *v13; // x23
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  UnityEngine_Component_o *v23; // x1
  Il2CppClass **v24; // x0
  struct UICommonButton_o *button; // x19
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_5935EFC & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____91505760);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935EFC = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length_low = LODWORD(parents->max_length);
    if ( (int)max_length_low >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= max_length_low )
          goto LABEL_28;
        ComponentsInChildren_object = (UnityEngine_Component_o *)parents->m_Items[v8];
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                   ComponentsInChildren_object,
                                                                   1,
                                                                   (const MethodInfo_37EE304 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____91505760);
        if ( ComponentsInChildren_object )
        {
          klass = ComponentsInChildren_object[1].klass;
          v11 = ComponentsInChildren_object;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_23:
        max_length_low = LODWORD(parents->max_length);
        if ( (int)++v8 >= (int)max_length_low )
          goto LABEL_24;
      }
      v12 = 0;
      while ( v12 < (unsigned int)klass )
      {
        v13 = (UnityEngine_Object_o *)*((_QWORD *)&v11[1].monitor + v12);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v9);
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v13, 0, 0);
        if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
        {
          if ( !v13 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)v13,
                                                                     0);
          if ( !v4 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___Contains(
                                                                     v4,
                                                                     (Il2CppObject *)ComponentsInChildren_object,
                                                                     (const MethodInfo_444FEC8 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)v13,
                                                                       0);
            items = v4->fields._items;
            v21 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v4->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v4->fields._size;
            v23 = ComponentsInChildren_object;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v4,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              v4->fields._size = size + 1;
              v24[4] = (Il2CppClass *)v23;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v23, v14, v15, v16, v17, v18, v19);
            }
          }
        }
        LODWORD(klass) = v11[1].klass;
        if ( (__int64)++v12 >= (int)klass )
          goto LABEL_23;
      }
LABEL_28:
      sub_21FFED4(ComponentsInChildren_object);
    }
  }
LABEL_24:
  if ( !v4
    || (button = this->fields.button,
        ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                                   v4,
                                                                   (const MethodInfo_445164C *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_21FFECC(ComponentsInChildren_object, v6);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&button->fields.tweenTargets,
    (int32_t)ComponentsInChildren_object,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardWallComponent__SetColliderEnable(WarBoardWallComponent_o *this, bool enable, const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0
  bool v8; // w1

  if ( (byte_5935EFE & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935EFE = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enable, method);
  if ( !UnityEngine_Object__op_Equality(button, 0, 0) )
  {
    v7 = this->fields.button;
    if ( enable )
    {
      if ( v7 )
      {
        v8 = 1;
LABEL_12:
        UICommonButton__SetButtonEnableAndKeepState(v7, v8, 0, 0);
        return;
      }
LABEL_14:
      sub_21FFECC(v7, v6);
    }
    if ( !v7 )
      goto LABEL_14;
    if ( v7->fields.mState )
    {
      v8 = 0;
      goto LABEL_12;
    }
    UICommonButton__SetColliderEnable(v7, 0, 1, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardWallComponent__SetTouchEnable(WarBoardWallComponent_o *this, bool enable, const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  UICommonButton_o *v7; // x0

  if ( (byte_5935EFD & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935EFD = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enable, method);
  if ( UnityEngine_Object__op_Inequality(button, 0, 0) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_21FFECC(0, v6);
    UICommonButton__SetButtonEnableAndKeepState(v7, enable, 0, 0);
  }
}


void WarBoardWallComponent__Unselectable(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  struct WarBoardWallData_o *wallData; // x8

  wallData = this->fields.wallData;
  if ( !wallData )
    sub_21FFECC(this, method);
  if ( !wallData->fields._isDestroy_k__BackingField )
    this->fields.isSelectable = 0;
}


void WarBoardWallComponent___OnDead_b__22_0(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}