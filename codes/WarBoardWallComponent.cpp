void __fastcall WarBoardWallComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  struct WarBoardWallComponent_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40FA92A & 1) == 0 )
  {
    sub_B16FFC(&WarBoardWallComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_19680, v8);
    sub_B16FFC(&StringLiteral_2854, v9);
    byte_40FA92A = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardWallComponent_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_19680;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19680;
  sub_B16F98(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = WarBoardWallComponent_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_2854;
  v12->BREAK_ANIMATION_NAME = (struct System_String_o *)StringLiteral_2854;
  sub_B16F98((BattleServantConfConponent_o *)&v12->BREAK_ANIMATION_NAME, v13, v14, v15, v16, v17, v18, v19);
}


void __fastcall WarBoardWallComponent___ctor(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardWallComponent__CreateEffectText(
        WarBoardWallComponent_o *this,
        System_String_o *effectName,
        System_String_o *popText,
        int32_t popTextColor,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x22
  WebViewManager_o *Instance; // x0
  Il2CppObject *CommonEffectAsset_object; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *effectDisplayTransform; // x23
  UnityEngine_Object_o *v24; // x25
  UnityEngine_GameObject_o *v25; // x24
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  WarBoardPopTextEffectPerformance_o *v30; // x0
  WarBoardPopTextEffectPerformance_o *v31; // x23
  WebViewManager_o *v32; // x0
  System_Nullable_Vector3__o v33; // 0:x3.16
  System_Nullable_Vector3__o v34; // 0:x5.16

  if ( (byte_40FA928 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, effectName);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v13);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v14);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v16);
    sub_B16FFC(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v17);
    sub_B16FFC(&WarBoardPopTextEffectPerformance_TypeInfo, v18);
    byte_40FA928 = 1;
  }
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  effectName,
                                                                                                  popText,
                                                                                                  *(_QWORD *)&popTextColor,
                                                                                                  taskList);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               effectName,
                               (const MethodInfo_2266354 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    effectDisplayTransform = (UnityEngine_Object_o *)this->fields.effectDisplayTransform;
    v24 = (UnityEngine_Object_o *)transform;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(effectDisplayTransform, 0LL, 0LL) )
      effectDisplayTransform = v24;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v25 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                        (UILabel_o *)CommonEffectAsset_object,
                                        (UnityEngine_Transform_o *)effectDisplayTransform,
                                        (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
    v30 = (WarBoardPopTextEffectPerformance_o *)sub_B170CC(
                                                  WarBoardPopTextEffectPerformance_TypeInfo,
                                                  v26,
                                                  v27,
                                                  v28,
                                                  v29);
    *(_QWORD *)&v33.fields.value.fields.x = 0LL;
    *(_QWORD *)&v33.fields.value.fields.z = 0LL;
    *(_QWORD *)&v34.fields.value.fields.x = 0LL;
    *(_QWORD *)&v34.fields.value.fields.z = 0LL;
    v31 = v30;
    WarBoardPopTextEffectPerformance___ctor(v30, 0LL, v25, v33, v34, (System_Nullable_Vector3__o)0, 0, 1, 0LL);
    if ( v31 )
    {
      WarBoardPopTextEffectPerformance__SetPopText(v31, popText, popTextColor, 0LL);
      if ( v19 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v19,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        if ( taskList )
        {
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
            (System_Collections_Generic_IEnumerable_T__o *)v19,
            (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
          return;
        }
        v32 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( v32 )
        {
          WarBoardManager__AddTask_18098600(
            (WarBoardManager_o *)v32,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v19,
            0LL);
          return;
        }
      }
    }
LABEL_22:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall WarBoardWallComponent__GetIconPosition(
        WarBoardWallComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *iconSp; // x0
  UnityEngine_Transform_o *transform; // x0
  float v4; // s0
  float v5; // s1
  float v6; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  iconSp = (UnityEngine_Component_o *)this->fields.iconSp;
  if ( !iconSp || (transform = UnityEngine_Component__get_transform(iconSp, 0LL)) == 0LL )
    sub_B170D4();
  *(UnityEngine_Vector3_o *)&v4 = UnityEngine_Transform__get_position(transform, 0LL);
  result.fields.z = v6;
  result.fields.y = v5;
  result.fields.x = v4;
  return result;
}


WarBoardSimpleAnimationPerformance_o *__fastcall WarBoardWallComponent__GetSimpleAnimationPerformance(
        WarBoardWallComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  SimpleAnimation_o *simpleAnimation; // x20
  WarBoardSimpleAnimationPerformance_o *v8; // x21

  if ( (byte_40FA926 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardSimpleAnimationPerformance_TypeInfo, animationName);
    byte_40FA926 = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  v8 = (WarBoardSimpleAnimationPerformance_o *)sub_B170CC(
                                                 WarBoardSimpleAnimationPerformance_TypeInfo,
                                                 animationName,
                                                 method,
                                                 v3,
                                                 v4);
  WarBoardSimpleAnimationPerformance___ctor(v8, simpleAnimation, animationName, 0LL);
  return v8;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardWallComponent__Initialize(
        WarBoardWallComponent_o *this,
        WarBoardWallData_o *data,
        UIAtlas_o *wallIconAtlas,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  struct WarBoardWallData_o **p_wallData; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct WarBoardWallData_o *wallData; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct SimpleAnimation_o *Component_srcLineSprite; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UISprite_o *iconSp; // x0
  UISprite_o *v36; // x21
  WarBoardWallComponent_c *v37; // x0
  struct WarBoardStageWallEntity_o *wallEntity; // x8
  System_String_o *WALL_ICON_NAME; // x22
  Il2CppObject *v40; // x0
  System_String_o *v41; // x0
  UnityEngine_Transform_o *transform; // x21
  WebViewManager_o *Instance; // x0
  struct WarBoardWallData_o *v44; // x8
  int v45; // s0
  __int64 v48; // x2
  int breakPointMax_k__BackingField; // w21
  struct WarBoardBreakPointComponent_array *v50; // x0
  struct WarBoardBreakPointComponent_array **p_breakPoints; // x22
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 v58; // x2
  UnityEngine_Component_o *breakPointParent; // x0
  int32_t v60; // w28
  float v61; // s8
  float v62; // s9
  struct UnityEngine_GameObject_o *breakPointPrefab; // x23
  UnityEngine_Transform_o *v64; // x24
  UnityEngine_GameObject_o *v65; // x0
  UnityEngine_GameObject_o *v66; // x24
  WarBoardBreakPointComponent_o *v67; // x23
  UnityEngine_Transform_o *v68; // x0
  struct UIWidget_o *v69; // x8
  struct WarBoardBreakPointComponent_array *v70; // x25
  UnityEngine_Transform_o *v71; // x0
  __int64 v72; // x1
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  int32_t v79; // w24
  Il2CppClass **v80; // x0
  struct WarBoardBreakPointComponent_array *v81; // x8
  WarBoardBreakPointComponent_o *v82; // x0
  float maxSpacing; // s0
  UnityEngine_Transform_array *v84; // x20
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x21
  const MethodInfo *v91; // x2
  UnityEngine_GameObject_o *v92; // x0
  struct WarBoardWallData_o *v93; // x8
  int v94; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FA920 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, data);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___, v11);
    sub_B16FFC(&int_TypeInfo, v12);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v15);
    sub_B16FFC(&UnityEngine_Transform___TypeInfo, v16);
    sub_B16FFC(&WarBoardBreakPointComponent___TypeInfo, v17);
    sub_B16FFC(&WarBoardWallComponent_TypeInfo, v18);
    byte_40FA920 = 1;
  }
  this->fields.wallData = data;
  p_wallData = &this->fields.wallData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.wallData,
    (System_Int32_array **)data,
    (System_String_array **)wallIconAtlas,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  wallData = this->fields.wallData;
  if ( !wallData )
    goto LABEL_38;
  wallData->fields.component = this;
  sub_B16F98(
    (BattleServantConfConponent_o *)&wallData->fields.component,
    (System_Int32_array **)this,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_38;
  Component_srcLineSprite = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          gameObject,
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = Component_srcLineSprite;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimation,
    (System_Int32_array **)Component_srcLineSprite,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  iconSp = this->fields.iconSp;
  if ( !iconSp )
    goto LABEL_38;
  UISprite__set_atlas(iconSp, wallIconAtlas, 0LL);
  v36 = this->fields.iconSp;
  v37 = WarBoardWallComponent_TypeInfo;
  if ( (BYTE3(WarBoardWallComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardWallComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardWallComponent_TypeInfo);
    v37 = WarBoardWallComponent_TypeInfo;
  }
  if ( !*p_wallData )
    goto LABEL_38;
  wallEntity = (*p_wallData)->fields.wallEntity;
  WALL_ICON_NAME = v37->static_fields->WALL_ICON_NAME;
  if ( wallEntity )
    LODWORD(wallEntity) = wallEntity->fields.imageId;
  v94 = (int)wallEntity;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v94);
  v41 = System_String__Format(WALL_ICON_NAME, v40, 0LL);
  if ( !v36 )
    goto LABEL_38;
  UISprite__set_spriteName(v36, v41, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v44 = this->fields.wallData;
  if ( !v44 )
    goto LABEL_38;
  if ( !Instance )
    goto LABEL_38;
  *(UnityEngine_Vector3_o *)&v45 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)Instance,
                                     v44->fields._squareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_38;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v45, 0LL);
  if ( !*p_wallData )
    goto LABEL_38;
  breakPointMax_k__BackingField = (*p_wallData)->fields._breakPointMax_k__BackingField;
  v50 = (struct WarBoardBreakPointComponent_array *)sub_B17014(
                                                      WarBoardBreakPointComponent___TypeInfo,
                                                      (unsigned int)breakPointMax_k__BackingField,
                                                      v48);
  this->fields.breakPoints = v50;
  p_breakPoints = &this->fields.breakPoints;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.breakPoints,
    (System_Int32_array **)v50,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  breakPointParent = (UnityEngine_Component_o *)this->fields.breakPointParent;
  if ( !breakPointParent )
    goto LABEL_38;
  if ( breakPointMax_k__BackingField >= 1 )
  {
    v60 = 0;
    v61 = 0.0;
    v62 = (float)breakPointParent[6].fields.m_CachedPtr / (float)breakPointMax_k__BackingField;
    do
    {
      breakPointPrefab = this->fields.breakPointPrefab;
      v64 = UnityEngine_Component__get_transform(breakPointParent, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v65 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                          (UILabel_o *)breakPointPrefab,
                                          v64,
                                          (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
      if ( !v65 )
        break;
      v66 = v65;
      v67 = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               v65,
                                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      v68 = UnityEngine_GameObject__get_transform(v66, 0LL);
      if ( !v68 )
        break;
      v95.fields.y = 0.0;
      v95.fields.z = 0.0;
      v95.fields.x = v61;
      UnityEngine_Transform__set_localPosition(v68, v95, 0LL);
      v69 = this->fields.breakPointParent;
      if ( !v69 )
        break;
      if ( !v67 )
        break;
      WarBoardBreakPointComponent__Initialize(
        v67,
        v69->fields.mDepth + 2 * (~v60 + breakPointMax_k__BackingField),
        v60 + 1,
        0,
        0,
        1,
        0LL);
      v70 = *p_breakPoints;
      if ( !*p_breakPoints )
        break;
      v71 = (UnityEngine_Transform_o *)sub_B170BC(v67, v70->obj.klass->_1.element_class);
      if ( !v71 )
        goto LABEL_47;
      v79 = v60;
      if ( v60 >= v70->max_length )
        goto LABEL_46;
      v80 = &v70->obj.klass + v60;
      v80[4] = (Il2CppClass *)v67;
      sub_B16F98((BattleServantConfConponent_o *)(v80 + 4), (System_Int32_array **)v67, v73, v74, v75, v76, v77, v78);
      v81 = *p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_38;
      if ( v60 >= v81->max_length )
        goto LABEL_46;
      if ( !*p_wallData )
        break;
      v82 = v81->m_Items[v60];
      if ( !v82 )
        break;
      WarBoardBreakPointComponent__SetActive(v82, (*p_wallData)->fields._breakPoint_k__BackingField > v60++, 0, 0LL);
      if ( breakPointMax_k__BackingField <= v79 + 1 )
        goto LABEL_39;
      maxSpacing = v67->fields.maxSpacing;
      breakPointParent = (UnityEngine_Component_o *)this->fields.breakPointParent;
      if ( maxSpacing >= v62 )
        maxSpacing = v62;
      v61 = v61 + maxSpacing;
    }
    while ( breakPointParent );
    goto LABEL_38;
  }
LABEL_39:
  v84 = (UnityEngine_Transform_array *)sub_B17014(UnityEngine_Transform___TypeInfo, 1LL, v58);
  v71 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v84 )
    goto LABEL_38;
  v90 = (System_Int32_array **)v71;
  if ( v71 )
  {
    v71 = (UnityEngine_Transform_o *)sub_B170BC(v71, v84->obj.klass->_1.element_class);
    if ( !v71 )
    {
LABEL_47:
      sub_B170F4(v71);
      sub_B170A0();
    }
  }
  if ( !v84->max_length )
  {
LABEL_46:
    sub_B17100(v71, v72, v73);
    sub_B170A0();
  }
  v84->m_Items[0] = (UnityEngine_Transform_o *)v90;
  sub_B16F98((BattleServantConfConponent_o *)v84->m_Items, v90, v73, v85, v86, v87, v88, v89);
  WarBoardWallComponent__SetButtonTweenTarget(this, v84, v91);
  v92 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v93 = this->fields.wallData;
  if ( !v93 || !v92 )
LABEL_38:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(v92, !v93->fields._isDestroy_k__BackingField, 0LL);
  this->fields.isSelectable = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardWallComponent__OnBreak(
        WarBoardWallComponent_o *this,
        int32_t oldBreakPoint,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        int32_t dummyPoint,
        const MethodInfo *method)
{
  struct WarBoardWallData_o *wallData; // x8
  __int64 v9; // x22
  int32_t breakPoint_k__BackingField; // w23
  struct WarBoardBreakPointComponent_array *breakPoints; // x10
  WarBoardBreakPointComponent_o *v12; // x0

  wallData = this->fields.wallData;
  if ( !wallData )
LABEL_13:
    sub_B170D4();
  v9 = 0LL;
  if ( dummyPoint >= 0 )
    breakPoint_k__BackingField = dummyPoint;
  else
    breakPoint_k__BackingField = wallData->fields._breakPoint_k__BackingField;
  while ( (int)v9 < wallData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = this->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v9 >= breakPoints->max_length )
      {
        sub_B17100(this, *(_QWORD *)&oldBreakPoint, taskList);
        sub_B170A0();
      }
      v12 = breakPoints->m_Items[v9];
      if ( v12 )
      {
        if ( (int)v9 >= oldBreakPoint || breakPoint_k__BackingField > (int)v9 )
          WarBoardBreakPointComponent__SetActive(v12, breakPoint_k__BackingField > (int)v9, 0, 0LL);
        else
          WarBoardBreakPointComponent__OnBreak(v12, taskList, 0LL, 0LL);
        wallData = this->fields.wallData;
        ++v9;
        if ( wallData )
          continue;
      }
    }
    goto LABEL_13;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardWallComponent__OnClick(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct WarBoardWallData_o *wallData; // x8
  WebViewManager_o *Instance; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x20
  WebViewManager_o *v8; // x0
  System_String_o **monitor; // x8
  WebViewManager_o *v10; // x0
  struct WarBoardWallData_o *v11; // x8
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x20
  WebViewManager_o *v14; // x0
  System_String_o **v15; // x8
  WebViewManager_o *v16; // x0
  WarBoardWallData_o *v17; // x20
  WarBoardManager_o *v18; // x21
  UnityEngine_Transform_o *transform; // x0
  int v20; // s0

  if ( (byte_40FA924 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_B16FFC(&Method_WarBoardWallComponent_OnClick__, v3);
    byte_40FA924 = 1;
  }
  wallData = this->fields.wallData;
  if ( !wallData )
    goto LABEL_22;
  if ( wallData->fields._isDestroy_k__BackingField )
    return;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)Instance, 0LL) && this->fields.isSelectable )
  {
    v6 = Method_WarBoardWallComponent_OnClick__;
    if ( (*((_BYTE *)Method_WarBoardWallComponent_OnClick__ + 75) & 2) != 0 )
      v6 = (_QWORD *)sub_B17004(Method_WarBoardWallComponent_OnClick__);
    v7 = (System_Reflection_MethodBase_o *)sub_B16FE0(v6, v6[3]);
    v8 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( v8 )
    {
      monitor = (System_String_o **)v8[3].monitor;
      if ( monitor )
      {
        OverwriteAssetSoundName__PlaySe(v7, monitor[3], 0LL);
        v10 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        v11 = this->fields.wallData;
        if ( v11 )
        {
          if ( v10 )
          {
            WarBoardManager__SelectedPieceAction(
              (WarBoardManager_o *)v10,
              v11->fields._squareIndex_k__BackingField,
              0LL);
            return;
          }
        }
      }
    }
LABEL_22:
    sub_B170D4();
  }
  v12 = Method_WarBoardWallComponent_OnClick__;
  if ( (*((_BYTE *)Method_WarBoardWallComponent_OnClick__ + 75) & 2) != 0 )
    v12 = (_QWORD *)sub_B17004(Method_WarBoardWallComponent_OnClick__);
  v13 = (System_Reflection_MethodBase_o *)sub_B16FE0(v12, v12[3]);
  v14 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v14 )
    goto LABEL_22;
  v15 = (System_String_o **)v14[3].monitor;
  if ( !v15 )
    goto LABEL_22;
  OverwriteAssetSoundName__PlaySe(v13, v15[5], 0LL);
  v16 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v17 = this->fields.wallData;
  v18 = (WarBoardManager_o *)v16;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__get_position(transform, 0LL);
  if ( !v18 )
    goto LABEL_22;
  WarBoardManager__ShowWallSimplePopup(v18, v17, *(UnityEngine_Vector3_o *)&v20, 0LL);
}


void __fastcall WarBoardWallComponent__OnDead(
        WarBoardWallComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarBoardWallComponent_c *v11; // x0
  struct WarBoardWallData_o *wallData; // x8
  struct WarBoardStageWallEntity_o *wallEntity; // x8
  System_String_o *BREAK_ANIMATION_NAME; // x21
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  const MethodInfo *v17; // x2
  WarBoardSimpleAnimationPerformance_o *SimpleAnimationPerformance; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Int32_array **v23; // x21
  BattleServantConfConponent_o *p_EndCallback; // x22
  System_Delegate_o *EndCallback; // x23
  WarBoardTaskBase_TaskCallback_o *v26; // x24
  System_Int32_array **v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  WebViewManager_o *Instance; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  WebViewManager_o *v41; // x19
  __int64 v42; // x2
  __int64 v43; // x0
  __int64 v44; // x20
  __int64 v45; // x0
  __int64 v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  int v53; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FA927 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, taskList);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_B16FFC(&WarBoardTaskBase_TaskCallback_TypeInfo, v7);
    sub_B16FFC(&WarBoardTaskBase___TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardWallComponent__OnDead_b__22_0__, v9);
    sub_B16FFC(&WarBoardWallComponent_TypeInfo, v10);
    byte_40FA927 = 1;
  }
  v11 = WarBoardWallComponent_TypeInfo;
  if ( (BYTE3(WarBoardWallComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardWallComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardWallComponent_TypeInfo);
    v11 = WarBoardWallComponent_TypeInfo;
  }
  wallData = this->fields.wallData;
  if ( !wallData )
    goto LABEL_20;
  wallEntity = wallData->fields.wallEntity;
  BREAK_ANIMATION_NAME = v11->static_fields->BREAK_ANIMATION_NAME;
  if ( wallEntity )
    LODWORD(wallEntity) = wallEntity->fields.destroyEffectId;
  v53 = (int)wallEntity;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
  v16 = System_String__Format(BREAK_ANIMATION_NAME, v15, 0LL);
  SimpleAnimationPerformance = WarBoardWallComponent__GetSimpleAnimationPerformance(this, v16, v17);
  if ( !SimpleAnimationPerformance )
    goto LABEL_20;
  v23 = (System_Int32_array **)SimpleAnimationPerformance;
  p_EndCallback = (BattleServantConfConponent_o *)&SimpleAnimationPerformance->fields.EndCallback;
  EndCallback = (System_Delegate_o *)SimpleAnimationPerformance->fields.EndCallback;
  v26 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(WarBoardTaskBase_TaskCallback_TypeInfo, v19, v20, v21, v22);
  WarBoardTaskBase_TaskCallback___ctor(v26, (Il2CppObject *)this, Method_WarBoardWallComponent__OnDead_b__22_0__, 0LL);
  v27 = (System_Int32_array **)System_Delegate__Combine(EndCallback, (System_Delegate_o *)v26, 0LL);
  if ( v27 && *v27 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v45 = sub_B173C8(v27);
LABEL_22:
    sub_B170F4(v45);
    sub_B170A0();
  }
  p_EndCallback->klass = (BattleServantConfConponent_c *)v27;
  sub_B16F98(p_EndCallback, v27, v28, v29, v30, v31, v32, v33);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  *(_QWORD *)&Instance[9].fields.isButtonEnable = v23;
  sub_B16F98((BattleServantConfConponent_o *)&Instance[9].fields.isButtonEnable, v23, v35, v36, v37, v38, v39, v40);
  if ( taskList )
  {
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    return;
  }
  v41 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v43 = sub_B17014(WarBoardTaskBase___TypeInfo, 1LL, v42);
  if ( !v43 )
LABEL_20:
    sub_B170D4();
  v44 = v43;
  v45 = sub_B170BC(v23, *(_QWORD *)(*(_QWORD *)v43 + 64LL));
  if ( !v45 )
    goto LABEL_22;
  if ( !*(_DWORD *)(v44 + 24) )
  {
    sub_B17100(v45, v46, v47);
    sub_B170A0();
  }
  *(_QWORD *)(v44 + 32) = v23;
  sub_B16F98((BattleServantConfConponent_o *)(v44 + 32), v23, v47, v48, v49, v50, v51, v52);
  if ( !v41 )
    goto LABEL_20;
  WarBoardManager__InsertTask((WarBoardManager_o *)v41, 0, (WarBoardTaskBase_array *)v44, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardWallComponent__OnLongClick(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct WarBoardWallData_o *wallData; // x8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x20
  WebViewManager_o *Instance; // x0
  System_String_o **monitor; // x8
  WebViewManager_o *v9; // x0
  WarBoardWallData_o *v10; // x20
  WarBoardManager_o *v11; // x21
  UnityEngine_Transform_o *transform; // x0
  int v13; // s0

  if ( (byte_40FA925 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_B16FFC(&Method_WarBoardWallComponent_OnLongClick__, v3);
    byte_40FA925 = 1;
  }
  wallData = this->fields.wallData;
  if ( !wallData )
    goto LABEL_12;
  if ( wallData->fields._isDestroy_k__BackingField )
    return;
  v5 = Method_WarBoardWallComponent_OnLongClick__;
  if ( (*((_BYTE *)Method_WarBoardWallComponent_OnLongClick__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B17004(Method_WarBoardWallComponent_OnLongClick__);
  v6 = (System_Reflection_MethodBase_o *)sub_B16FE0(v5, v5[3]);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (monitor = (System_String_o **)Instance[3].monitor) == 0LL
    || (OverwriteAssetSoundName__PlaySe(v6, monitor[5], 0LL),
        v9 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        v10 = this->fields.wallData,
        v11 = (WarBoardManager_o *)v9,
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_position(transform, 0LL), !v11) )
  {
LABEL_12:
    sub_B170D4();
  }
  WarBoardManager__ShowWallSimplePopup(v11, v10, *(UnityEngine_Vector3_o *)&v13, 0LL);
}


void __fastcall WarBoardWallComponent__OnShowDamagePopup(
        WarBoardWallComponent_o *this,
        System_String_o *popText,
        int32_t popTextColor,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x23
  const MethodInfo *v19; // x5
  WebViewManager_o *Instance; // x0

  if ( (byte_40FA929 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, popText);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_B16FFC(&StringLiteral_18113, v12);
    byte_40FA929 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
  {
    v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                    v14,
                                                                                                    v15,
                                                                                                    v16,
                                                                                                    v17);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v18,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    if ( !System_String__IsNullOrEmpty(popText, 0LL) )
      WarBoardWallComponent__CreateEffectText(
        this,
        (System_String_o *)StringLiteral_18113,
        popText,
        popTextColor,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)v18,
        v19);
    if ( taskList )
    {
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v18,
        (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      return;
    }
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      WarBoardManager__AddTask_18098600(
        (WarBoardManager_o *)Instance,
        0,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)v18,
        0LL);
      return;
    }
LABEL_12:
    sub_B170D4();
  }
}


void __fastcall WarBoardWallComponent__Selectable(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  struct WarBoardWallData_o *wallData; // x8

  wallData = this->fields.wallData;
  if ( !wallData )
    sub_B170D4();
  if ( !wallData->fields._isDestroy_k__BackingField )
    this->fields.isSelectable = 1;
}


void __fastcall WarBoardWallComponent__SetButtonTweenTarget(
        WarBoardWallComponent_o *this,
        UnityEngine_Transform_array *parents,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  signed int max_length; // w8
  unsigned int v17; // w24
  UnityEngine_Component_o *v18; // x0
  __int64 v19; // x8
  WarBoardControlPlayTalkUiComponent_array *v20; // x22
  unsigned __int64 v21; // x19
  UnityEngine_Object_o *v22; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v24; // x0
  struct UICommonButton_o *button; // x19
  System_Int32_array **v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_40FA921 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____66819968, parents);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Contains__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40FA921 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  parents,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v17 = 0;
      while ( 1 )
      {
        if ( v17 >= max_length )
          goto LABEL_25;
        v18 = (UnityEngine_Component_o *)parents->m_Items[v17];
        if ( !v18 )
          goto LABEL_26;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                    v18,
                                                                    1,
                                                                    (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____66819968);
        if ( ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
        {
          v19 = *(_QWORD *)&ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
          v20 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
          if ( (int)v19 >= 1 )
            break;
        }
LABEL_21:
        max_length = parents->max_length;
        if ( (int)++v17 >= max_length )
          goto LABEL_22;
      }
      v21 = 0LL;
      while ( v21 < (unsigned int)v19 )
      {
        v22 = (UnityEngine_Object_o *)v20->m_Items[v21];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (WarBoardControlPlayTalkUiComponent_array *)UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
        if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0 )
        {
          if ( !v22 )
            goto LABEL_26;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0LL);
          if ( !v12 )
            goto LABEL_26;
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (WarBoardControlPlayTalkUiComponent_array *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains((System_Collections_Generic_List_WarBoardManager_TaskList__o *)v12, (WarBoardManager_TaskList_o *)gameObject, (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) == 0 )
          {
            v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v12,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          }
        }
        LODWORD(v19) = v20->max_length;
        if ( (__int64)++v21 >= (int)v19 )
          goto LABEL_21;
      }
LABEL_25:
      sub_B17100(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v14, v15);
      sub_B170A0();
    }
  }
LABEL_22:
  if ( !v12
    || (button = this->fields.button,
        v26 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                       (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_26:
    sub_B170D4();
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)v26;
  sub_B16F98((BattleServantConfConponent_o *)&button->fields.tweenTargets, v26, v27, v28, v29, v30, v31, v32);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardWallComponent__SetColliderEnable(
        WarBoardWallComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  struct UICommonButton_o *v6; // x0
  bool v7; // w1

  if ( (byte_40FA923 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, enable);
    byte_40FA923 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v6 = this->fields.button;
    if ( !v6 )
      sub_B170D4();
    if ( enable )
    {
      v7 = 1;
LABEL_12:
      UICommonButton__SetButtonEnableAndKeepState(v6, v7, 0, 0LL);
      return;
    }
    if ( v6->fields.mState )
    {
      v7 = 0;
      goto LABEL_12;
    }
    UICommonButton__SetColliderEnable(v6, 0, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardWallComponent__SetTouchEnable(
        WarBoardWallComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  UICommonButton_o *v6; // x0

  if ( (byte_40FA922 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, enable);
    byte_40FA922 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v6 = this->fields.button;
    if ( !v6 )
      sub_B170D4();
    UICommonButton__SetButtonEnableAndKeepState(v6, enable, 0, 0LL);
  }
}


void __fastcall WarBoardWallComponent__Unselectable(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  struct WarBoardWallData_o *wallData; // x8

  wallData = this->fields.wallData;
  if ( !wallData )
    sub_B170D4();
  if ( !wallData->fields._isDestroy_k__BackingField )
    this->fields.isSelectable = 0;
}


void __fastcall WarBoardWallComponent___OnDead_b__22_0(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}