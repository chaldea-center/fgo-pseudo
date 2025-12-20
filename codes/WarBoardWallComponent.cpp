void WarBoardWallComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct WarBoardWallComponent_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D2A0AA & 1) == 0 )
  {
    sub_1C94098(&WarBoardWallComponent_TypeInfo);
    sub_1C94098(&StringLiteral_20908/*"img_wall_{0}"*/);
    sub_1C94098(&StringLiteral_3225/*"BreakWall_{0:00}"*/);
    byte_4D2A0AA = 1;
  }
  WarBoardWallComponent_TypeInfo->static_fields->WALL_ICON_NAME = (struct System_String_o *)StringLiteral_20908/*"img_wall_{0}"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)WarBoardWallComponent_TypeInfo->static_fields,
    StringLiteral_20908/*"img_wall_{0}"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_3225/*"BreakWall_{0:00}"*/;
  static_fields = WarBoardWallComponent_TypeInfo->static_fields;
  static_fields->BREAK_ANIMATION_NAME = (struct System_String_o *)StringLiteral_3225/*"BreakWall_{0:00}"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->BREAK_ANIMATION_NAME, v7, v9, v10, v11, v12, v13, v14);
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
  Il2CppObject *CommonEffectAsset_object; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *effectDisplayTransform; // x23
  UnityEngine_Object_o *v17; // x25
  Il2CppObject *v18; // x24
  WarBoardPopTextEffectPerformance_o *v19; // x0
  WarBoardPopTextEffectPerformance_o *v20; // x23
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Nullable_Vector3__o v31; // 0:x3.16
  System_Nullable_Vector3__o v32; // 0:x5.16

  if ( (byte_4D2A0A8 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C94098(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject____79133288);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C94098(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    sub_1C94098(&WarBoardPopTextEffectPerformance_TypeInfo);
    byte_4D2A0A8 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               effectName,
                               (const MethodInfo_3285CB0 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    effectDisplayTransform = (UnityEngine_Object_o *)this->fields.effectDisplayTransform;
    v17 = (UnityEngine_Object_o *)transform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(effectDisplayTransform, 0, 0) )
      effectDisplayTransform = v17;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v18 = UnityEngine_Object__Instantiate_object__52598436(
            CommonEffectAsset_object,
            (UnityEngine_Transform_o *)effectDisplayTransform,
            (const MethodInfo_32296A4 *)Method_UnityEngine_Object_Instantiate_GameObject____79133288);
    v19 = (WarBoardPopTextEffectPerformance_o *)sub_1C942E4(WarBoardPopTextEffectPerformance_TypeInfo);
    *(_QWORD *)&v31.fields.hasValue = 0;
    *(_QWORD *)&v31.fields.value.fields.y = 0;
    *(_QWORD *)&v32.fields.hasValue = 0;
    *(_QWORD *)&v32.fields.value.fields.y = 0;
    v20 = v19;
    WarBoardPopTextEffectPerformance___ctor(
      v19,
      0,
      (UnityEngine_GameObject_o *)v18,
      v31,
      v32,
      (System_Nullable_Vector3__o)0,
      0,
      1,
      0);
    if ( v20 )
    {
      WarBoardPopTextEffectPerformance__SetPopText(v20, popText, popTextColor, 0);
      if ( v11 )
      {
        items = v11->fields._items;
        v28 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
        ++v11->fields._version;
        if ( items )
        {
          size = v11->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)v20,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            if ( taskList )
              goto LABEL_18;
          }
          else
          {
            v30 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v30[4] = (Il2CppClass *)v20;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v30 + 4), (int32_t)v20, v21, v22, v23, v24, v25, v26);
            if ( taskList )
            {
LABEL_18:
              System_Collections_Generic_List_object___AddRange(
                (System_Collections_Generic_List_object__o *)taskList,
                (System_Collections_Generic_IEnumerable_T__o *)v11,
                (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
              return;
            }
          }
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( Instance )
          {
            WarBoardManager__AddTask_38721084(
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
    sub_1C942F0(Instance, v13);
  }
}


UnityEngine_Vector3_o WarBoardWallComponent__GetIconPosition(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *iconSp; // x0

  iconSp = (UnityEngine_Component_o *)this->fields.iconSp;
  if ( !iconSp || (iconSp = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSp, 0)) == 0 )
    sub_1C942F0(iconSp, method);
  return UnityEngine_Transform__get_position((UnityEngine_Transform_o *)iconSp, 0);
}


WarBoardSimpleAnimationPerformance_o *WarBoardWallComponent__GetSimpleAnimationPerformance(
        WarBoardWallComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x20
  WarBoardSimpleAnimationPerformance_o *v6; // x21

  if ( (byte_4D2A0A6 & 1) == 0 )
  {
    sub_1C94098(&WarBoardSimpleAnimationPerformance_TypeInfo);
    byte_4D2A0A6 = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  v6 = (WarBoardSimpleAnimationPerformance_o *)sub_1C942E4(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(v6, simpleAnimation, animationName, 0);
  return v6;
}


void WarBoardWallComponent__Initialize(
        WarBoardWallComponent_o *this,
        WarBoardWallData_o *data,
        UIAtlas_o *wallIconAtlas,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct WarBoardWallData_o **p_wallData; // x20
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  char *wallData; // x0
  Il2CppObject *Component_object; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  UISprite_o *iconSp; // x21
  System_String_o *WALL_ICON_NAME; // x22
  Il2CppObject *v29; // x0
  UnityEngine_Transform_o *transform; // x21
  struct WarBoardWallData_o *v31; // x8
  __int64 breakPointMax_k__BackingField; // x21
  struct WarBoardBreakPointComponent_array *v33; // x0
  struct WarBoardBreakPointComponent_array **p_breakPoints; // x22
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  unsigned __int64 v41; // x26
  float v42; // s8
  __int64 v43; // x23
  int v44; // w27
  float v45; // s9
  __int64 v46; // x28
  Il2CppObject *breakPointPrefab; // x24
  UnityEngine_Transform_o *v48; // x25
  UnityEngine_GameObject_o *v49; // x25
  WarBoardBreakPointComponent_o *v50; // x24
  struct UIWidget_o *breakPointParent; // x8
  unsigned int *v52; // x25
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  struct WarBoardBreakPointComponent_array *v59; // x8
  float maxSpacing; // s0
  UnityEngine_Transform_array *v61; // x20
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  UnityEngine_Transform_o *v68; // x21
  const MethodInfo *v69; // x2
  struct WarBoardWallData_o *v70; // x8
  __int64 v71; // x0
  int32_t wallImageId; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2A0A0 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject____79133288);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C94098(&UnityEngine_Transform___TypeInfo);
    sub_1C94098(&WarBoardBreakPointComponent___TypeInfo);
    sub_1C94098(&WarBoardWallComponent_TypeInfo);
    byte_4D2A0A0 = 1;
  }
  this->fields.wallData = data;
  p_wallData = &this->fields.wallData;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.wallData,
    (int32_t)data,
    (int32_t)wallIconAtlas,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  wallData = (char *)this->fields.wallData;
  if ( !wallData )
    goto LABEL_34;
  *((_QWORD *)wallData + 7) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(wallData + 56), (int32_t)this, v13, v14, v15, v16, v17, v18);
  wallData = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !wallData )
    goto LABEL_34;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)wallData,
                       (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)Component_object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.simpleAnimation,
    (int32_t)Component_object,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  wallData = (char *)this->fields.iconSp;
  if ( !wallData )
    goto LABEL_34;
  UISprite__set_atlas((UISprite_o *)wallData, wallIconAtlas, 0);
  iconSp = this->fields.iconSp;
  if ( !WarBoardWallComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardWallComponent_TypeInfo);
  wallData = (char *)*p_wallData;
  if ( !*p_wallData )
    goto LABEL_34;
  WALL_ICON_NAME = WarBoardWallComponent_TypeInfo->static_fields->WALL_ICON_NAME;
  wallImageId = WarBoardWallData__get_wallImageId((WarBoardWallData_o *)wallData, 0);
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &wallImageId);
  wallData = (char *)System_String__Format(WALL_ICON_NAME, v29, 0);
  if ( !iconSp )
    goto LABEL_34;
  UISprite__set_spriteName(iconSp, (System_String_o *)wallData, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  wallData = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v31 = this->fields.wallData;
  if ( !v31 )
    goto LABEL_34;
  if ( !wallData )
    goto LABEL_34;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)wallData,
                     v31->fields._squareIndex_k__BackingField,
                     0);
  if ( !transform )
    goto LABEL_34;
  UnityEngine_Transform__set_localPosition(transform, SquarePosition, 0);
  if ( !*p_wallData )
    goto LABEL_34;
  breakPointMax_k__BackingField = (unsigned int)(*p_wallData)->fields._breakPointMax_k__BackingField;
  v33 = (struct WarBoardBreakPointComponent_array *)sub_1C94140(
                                                      WarBoardBreakPointComponent___TypeInfo,
                                                      (unsigned int)breakPointMax_k__BackingField);
  this->fields.breakPoints = v33;
  p_breakPoints = &this->fields.breakPoints;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.breakPoints, (int32_t)v33, v35, v36, v37, v38, v39, v40);
  wallData = (char *)this->fields.breakPointParent;
  if ( !wallData )
    goto LABEL_34;
  if ( (int)breakPointMax_k__BackingField >= 1 )
  {
    v41 = 0;
    v42 = 0.0;
    v43 = 1;
    v44 = 2 * breakPointMax_k__BackingField - 2;
    v45 = (float)*((int *)wallData + 42) / (float)(int)breakPointMax_k__BackingField;
    v46 = 8;
    do
    {
      breakPointPrefab = (Il2CppObject *)this->fields.breakPointPrefab;
      v48 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)wallData, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      wallData = (char *)UnityEngine_Object__Instantiate_object__52598436(
                           breakPointPrefab,
                           v48,
                           (const MethodInfo_32296A4 *)Method_UnityEngine_Object_Instantiate_GameObject____79133288);
      if ( !wallData )
        break;
      v49 = (UnityEngine_GameObject_o *)wallData;
      v50 = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)wallData,
                                               (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      wallData = (char *)UnityEngine_GameObject__get_transform(v49, 0);
      if ( !wallData )
        break;
      v74.fields.y = 0.0;
      v74.fields.z = 0.0;
      v74.fields.x = v42;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)wallData, v74, 0);
      breakPointParent = this->fields.breakPointParent;
      if ( !breakPointParent )
        break;
      if ( !v50 )
        break;
      WarBoardBreakPointComponent__Initialize(v50, v44 + breakPointParent->fields.mDepth, v43, 0, 0, 1, 0);
      v52 = (unsigned int *)*p_breakPoints;
      if ( !*p_breakPoints )
        break;
      wallData = (char *)sub_1C941D4(v50, *(_QWORD *)(*(_QWORD *)v52 + 64LL));
      if ( !wallData )
        goto LABEL_43;
      if ( v41 >= v52[6] )
        goto LABEL_42;
      *(_QWORD *)&v52[v46] = v50;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v52[v46], (int32_t)v50, v53, v54, v55, v56, v57, v58);
      v59 = *p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_34;
      if ( v41 >= LODWORD(v59->max_length) )
        goto LABEL_42;
      if ( !*p_wallData )
        break;
      wallData = *(char **)((char *)&v59->obj.klass + v46 * 4);
      if ( !wallData )
        break;
      WarBoardBreakPointComponent__SetActive(
        (WarBoardBreakPointComponent_o *)wallData,
        (__int64)v41 < (*p_wallData)->fields._breakPoint_k__BackingField,
        0,
        0);
      if ( breakPointMax_k__BackingField == v43 )
        goto LABEL_35;
      maxSpacing = v50->fields.maxSpacing;
      wallData = (char *)this->fields.breakPointParent;
      ++v41;
      v44 -= 2;
      if ( maxSpacing >= v45 )
        maxSpacing = v45;
      ++v43;
      v42 = v42 + maxSpacing;
      v46 += 2;
    }
    while ( wallData );
    goto LABEL_34;
  }
LABEL_35:
  v61 = (UnityEngine_Transform_array *)sub_1C94140(UnityEngine_Transform___TypeInfo, 1);
  wallData = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !v61 )
    goto LABEL_34;
  v68 = (UnityEngine_Transform_o *)wallData;
  if ( wallData )
  {
    wallData = (char *)sub_1C941D4(wallData, v61->obj.klass->_1.element_class);
    if ( !wallData )
    {
LABEL_43:
      v71 = sub_1C94314();
      sub_1C941C0(v71, 0);
    }
  }
  if ( !LODWORD(v61->max_length) )
LABEL_42:
    sub_1C942F8(wallData);
  v61->m_Items[0] = v68;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v61->m_Items, (int32_t)v68, v62, v63, v64, v65, v66, v67);
  WarBoardWallComponent__SetButtonTweenTarget(this, v61, v69);
  wallData = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v70 = this->fields.wallData;
  if ( !v70 || !wallData )
LABEL_34:
    sub_1C942F0(wallData, v12);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wallData, !v70->fields._isDestroy_k__BackingField, 0);
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
  WarBoardWallComponent_o *v7; // x20
  __int64 v9; // x22
  int32_t breakPoint_k__BackingField; // w23
  struct WarBoardBreakPointComponent_array *breakPoints; // x10

  wallData = this->fields.wallData;
  if ( !wallData )
LABEL_13:
    sub_1C942F0(this, *(_QWORD *)&oldBreakPoint);
  v7 = this;
  v9 = 0;
  if ( dummyPoint >= 0 )
    breakPoint_k__BackingField = dummyPoint;
  else
    breakPoint_k__BackingField = wallData->fields._breakPoint_k__BackingField;
  while ( (int)v9 < wallData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = v7->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v9 >= LODWORD(breakPoints->max_length) )
        sub_1C942F8(this);
      this = (WarBoardWallComponent_o *)breakPoints->m_Items[v9];
      if ( this )
      {
        if ( (int)v9 >= oldBreakPoint || breakPoint_k__BackingField > (int)v9 )
          WarBoardBreakPointComponent__SetActive(
            (WarBoardBreakPointComponent_o *)this,
            breakPoint_k__BackingField > (int)v9,
            0,
            0);
        else
          WarBoardBreakPointComponent__OnBreak((WarBoardBreakPointComponent_o *)this, taskList, 0, 0);
        wallData = v7->fields.wallData;
        ++v9;
        if ( wallData )
          continue;
      }
    }
    goto LABEL_13;
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
  if ( (byte_4D2A0A4 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardWallComponent_o *)sub_1C94098(&Method_WarBoardWallComponent_OnClick__);
    byte_4D2A0A4 = 1;
  }
  wallData = v2->fields.wallData;
  if ( !wallData )
    goto LABEL_22;
  if ( wallData->fields._isDestroy_k__BackingField )
    return;
  this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)this, 0) && v2->fields.isSelectable )
  {
    v4 = Method_WarBoardWallComponent_OnClick__;
    if ( (*((_BYTE *)Method_WarBoardWallComponent_OnClick__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C940B0(Method_WarBoardWallComponent_OnClick__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C9407C(v4, v4[4]);
    this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1C942F0(this, method);
  }
  v8 = Method_WarBoardWallComponent_OnClick__;
  if ( (*((_BYTE *)Method_WarBoardWallComponent_OnClick__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1C940B0(Method_WarBoardWallComponent_OnClick__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C9407C(v8, v8[4]);
  this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  v10 = this[3].fields.m_CancellationTokenSource;
  if ( !v10 )
    goto LABEL_22;
  OverwriteAssetSoundName__PlaySe(v9, *(System_String_o **)&v10->fields._disposed, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  GrandQuestFolderBoardItem_o *v11; // x22
  System_Delegate_o *v12; // x23
  WarBoardTaskBase_TaskCallback_o *v13; // x24
  System_Delegate_o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_Delegate_o *v21; // x8
  WarBoardTaskBase_TaskCallback_c *v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  Il2CppObject *Instance; // x19
  char *v40; // x21
  __int64 v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  __int64 v48; // x0
  int32_t wallDestroyEffectId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2A0A7 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C94098(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C94098(&WarBoardTaskBase___TypeInfo);
    sub_1C94098(&Method_WarBoardWallComponent__OnDead_b__22_0__);
    sub_1C94098(&WarBoardWallComponent_TypeInfo);
    byte_4D2A0A7 = 1;
  }
  if ( !WarBoardWallComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardWallComponent_TypeInfo);
  wallData = (char *)this->fields.wallData;
  if ( !wallData )
    goto LABEL_24;
  BREAK_ANIMATION_NAME = WarBoardWallComponent_TypeInfo->static_fields->BREAK_ANIMATION_NAME;
  wallDestroyEffectId = WarBoardWallData__get_wallDestroyEffectId((WarBoardWallData_o *)wallData, 0);
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &wallDestroyEffectId);
  v8 = System_String__Format(BREAK_ANIMATION_NAME, v7, 0);
  wallData = (char *)WarBoardWallComponent__GetSimpleAnimationPerformance(this, v8, v9);
  if ( !wallData )
    goto LABEL_24;
  v10 = (Il2CppObject *)wallData;
  v11 = (GrandQuestFolderBoardItem_o *)(wallData + 40);
  v12 = (System_Delegate_o *)*((_QWORD *)wallData + 5);
  v13 = (WarBoardTaskBase_TaskCallback_o *)sub_1C942E4(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(v13, (Il2CppObject *)this, Method_WarBoardWallComponent__OnDead_b__22_0__, 0);
  v14 = System_Delegate__Combine(v12, (System_Delegate_o *)v13, 0);
  v21 = v14;
  if ( !v14 )
    goto LABEL_11;
  v22 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v14->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (v11->klass = (GrandQuestFolderBoardItem_c *)v14, (WarBoardTaskBase_TaskCallback_c *)v14->klass != v22) )
  {
    sub_1C9468C(v14);
LABEL_11:
    v11->klass = (GrandQuestFolderBoardItem_c *)v21;
  }
  sub_1C9403C(v11, (int32_t)v21, v15, v16, v17, v18, v19, v20);
  wallData = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !wallData )
    goto LABEL_24;
  *((_QWORD *)wallData + 127) = v10;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(wallData + 1016), (int32_t)v10, v23, v24, v25, v26, v27, v28);
  if ( !taskList )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    wallData = (char *)sub_1C94140(WarBoardTaskBase___TypeInfo, 1);
    if ( wallData )
    {
      v40 = wallData;
      v41 = sub_1C941D4(v10, *(_QWORD *)(*(_QWORD *)wallData + 64LL));
      if ( !v41 )
      {
        v48 = sub_1C94314();
        sub_1C941C0(v48, 0);
      }
      if ( !*((_DWORD *)v40 + 6) )
        sub_1C942F8(v41);
      *((_QWORD *)v40 + 4) = v10;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v40 + 32), (int32_t)v10, v42, v43, v44, v45, v46, v47);
      if ( Instance )
      {
        WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v40, 0);
        return;
      }
    }
LABEL_24:
    sub_1C942F0(wallData, taskList);
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
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = &items->obj.klass + size;
    taskList->fields._size = size + 1;
    v38[4] = (Il2CppClass *)v10;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v38 + 4), (int32_t)v10, v29, v30, v31, v32, v33, v34);
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
  if ( (byte_4D2A0A5 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardWallComponent_o *)sub_1C94098(&Method_WarBoardWallComponent_OnLongClick__);
    byte_4D2A0A5 = 1;
  }
  klass = v2[3].klass;
  if ( !klass )
    goto LABEL_12;
  if ( LOBYTE(klass->_1.byval_arg.data) )
    return;
  v4 = Method_WarBoardWallComponent_OnLongClick__;
  if ( (*((_BYTE *)Method_WarBoardWallComponent_OnLongClick__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C940B0(Method_WarBoardWallComponent_OnLongClick__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C9407C(v4, v4[4]);
  this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this
    || (m_CancellationTokenSource = this[3].fields.m_CancellationTokenSource) == 0
    || (OverwriteAssetSoundName__PlaySe(v5, *(System_String_o **)&m_CancellationTokenSource->fields._disposed, 0, 0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        v8 = (WarBoardWallData_o *)v2[3].klass,
        v9 = (WarBoardManager_o *)Instance,
        (this = (WarBoardWallComponent_o *)UnityEngine_Component__get_transform(v2, 0)) == 0)
    || (position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0), !v9) )
  {
LABEL_12:
    sub_1C942F0(this, method);
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

  if ( (byte_4D2A0A9 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C94098(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C94098(&StringLiteral_18952/*"ef_dm_base"*/);
    byte_4D2A0A9 = 1;
  }
  gameObject = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_12;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0) )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    if ( !System_String__IsNullOrEmpty(popText, 0) )
      WarBoardWallComponent__CreateEffectText(
        this,
        (System_String_o *)StringLiteral_18952/*"ef_dm_base"*/,
        popText,
        popTextColor,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)v11,
        v12);
    if ( taskList )
    {
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v11,
        (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      return;
    }
    gameObject = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( gameObject )
    {
      WarBoardManager__AddTask_38721084(gameObject, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v11, 0);
      return;
    }
LABEL_12:
    sub_1C942F0(gameObject, v10);
  }
}


void WarBoardWallComponent__Selectable(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  struct WarBoardWallData_o *wallData; // x8

  wallData = this->fields.wallData;
  if ( !wallData )
    sub_1C942F0(this, method);
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
  int max_length; // w8
  unsigned int v8; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v10; // x22
  unsigned __int64 v11; // x29
  UnityEngine_Object_o *v12; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  UnityEngine_Component_o *v22; // x1
  Il2CppClass **v23; // x0
  struct UICommonButton_o *button; // x19
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4D2A0A1 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____79067792);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C94098(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2A0A1 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= max_length )
          goto LABEL_28;
        ComponentsInChildren_object = (UnityEngine_Component_o *)parents->m_Items[v8];
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                   ComponentsInChildren_object,
                                                                   1,
                                                                   (const MethodInfo_3193628 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____79067792);
        if ( ComponentsInChildren_object )
        {
          klass = ComponentsInChildren_object[1].klass;
          v10 = ComponentsInChildren_object;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_23:
        max_length = parents->max_length;
        if ( (int)++v8 >= max_length )
          goto LABEL_24;
      }
      v11 = 0;
      while ( v11 < (unsigned int)klass )
      {
        v12 = (UnityEngine_Object_o *)*((_QWORD *)&v10[1].monitor + v11);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v12, 0, 0);
        if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
        {
          if ( !v12 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)v12,
                                                                     0);
          if ( !v4 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___Contains(
                                                                     v4,
                                                                     (Il2CppObject *)ComponentsInChildren_object,
                                                                     (const MethodInfo_386B1C4 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)v12,
                                                                       0);
            items = v4->fields._items;
            v20 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v4->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v4->fields._size;
            v22 = ComponentsInChildren_object;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v4,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_386AE34 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v4->fields._size = size + 1;
              v23[4] = (Il2CppClass *)v22;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v22, v13, v14, v15, v16, v17, v18);
            }
          }
        }
        LODWORD(klass) = v10[1].klass;
        if ( (__int64)++v11 >= (int)klass )
          goto LABEL_23;
      }
LABEL_28:
      sub_1C942F8(ComponentsInChildren_object);
    }
  }
LABEL_24:
  if ( !v4
    || (button = this->fields.button,
        ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                                   v4,
                                                                   (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1C942F0(ComponentsInChildren_object, v6);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&button->fields.tweenTargets,
    (int32_t)ComponentsInChildren_object,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
}


void WarBoardWallComponent__SetColliderEnable(WarBoardWallComponent_o *this, bool enable, const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0
  bool v8; // w1

  if ( (byte_4D2A0A3 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2A0A3 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(button, 0, 0) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1C942F0(0, v6);
    if ( enable )
    {
      v8 = 1;
LABEL_11:
      UICommonButton__SetButtonEnableAndKeepState(v7, v8, 0, 0);
      return;
    }
    if ( v7->fields.mState )
    {
      v8 = 0;
      goto LABEL_11;
    }
    UICommonButton__SetColliderEnable(v7, 0, 1, 0);
  }
}


void WarBoardWallComponent__SetTouchEnable(WarBoardWallComponent_o *this, bool enable, const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  UICommonButton_o *v7; // x0

  if ( (byte_4D2A0A2 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2A0A2 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0, 0) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1C942F0(0, v6);
    UICommonButton__SetButtonEnableAndKeepState(v7, enable, 0, 0);
  }
}


void WarBoardWallComponent__Unselectable(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  struct WarBoardWallData_o *wallData; // x8

  wallData = this->fields.wallData;
  if ( !wallData )
    sub_1C942F0(this, method);
  if ( !wallData->fields._isDestroy_k__BackingField )
    this->fields.isSelectable = 0;
}


void WarBoardWallComponent___OnDead_b__22_0(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C942F0(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}