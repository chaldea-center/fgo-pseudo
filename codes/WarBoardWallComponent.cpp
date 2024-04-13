void __fastcall WarBoardWallComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v15; // x1
  struct WarBoardWallComponent_StaticFields *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42E9364 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardWallComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_20003/*"img_wall_{0}"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_2921/*"BreakWall_{0:00}"*/, v11, v12, v13);
    byte_42E9364 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardWallComponent_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_20003/*"img_wall_{0}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_20003/*"img_wall_{0}"*/;
  sub_B5D560(static_fields, v15, v2, v3, v4, v5, v6, v7);
  v16 = WarBoardWallComponent_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_2921/*"BreakWall_{0:00}"*/;
  v16->BREAK_ANIMATION_NAME = (struct System_String_o *)StringLiteral_2921/*"BreakWall_{0:00}"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v16->BREAK_ANIMATION_NAME, v17, v18, v19, v20, v21, v22, v23);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x22
  WebViewManager_o *Instance; // x0
  __int64 v37; // x1
  Il2CppObject *CommonEffectAsset_object; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *effectDisplayTransform; // x23
  UnityEngine_Object_o *v41; // x25
  UnityEngine_GameObject_o *v42; // x24
  WarBoardPopTextEffectPerformance_o *v43; // x0
  WarBoardPopTextEffectPerformance_o *v44; // x23
  System_Nullable_Vector3__o v45; // 0:x3.16
  System_Nullable_Vector3__o v46; // 0:x5.16

  if ( (byte_42E9362 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__,
      (_DWORD)effectName,
      (_DWORD)popText,
      *(_QWORD *)&popTextColor);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v26, v27, v28);
    sub_B5D5C4(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v29, v30, v31);
    sub_B5D5C4(&WarBoardPopTextEffectPerformance_TypeInfo, v32, v33, v34);
    byte_42E9362 = 1;
  }
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v35,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               effectName,
                               (const MethodInfo_2E68600 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    effectDisplayTransform = (UnityEngine_Object_o *)this->fields.effectDisplayTransform;
    v41 = (UnityEngine_Object_o *)transform;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(effectDisplayTransform, 0LL, 0LL) )
      effectDisplayTransform = v41;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v42 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                        (UILabel_o *)CommonEffectAsset_object,
                                        (UnityEngine_Transform_o *)effectDisplayTransform,
                                        (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
    v43 = (WarBoardPopTextEffectPerformance_o *)sub_B5D694(WarBoardPopTextEffectPerformance_TypeInfo);
    *(_QWORD *)&v45.fields.value.fields.x = 0LL;
    *(_QWORD *)&v45.fields.value.fields.z = 0LL;
    *(_QWORD *)&v46.fields.value.fields.x = 0LL;
    *(_QWORD *)&v46.fields.value.fields.z = 0LL;
    v44 = v43;
    WarBoardPopTextEffectPerformance___ctor(v43, 0LL, v42, v45, v46, (System_Nullable_Vector3__o)0, 0, 1, 0LL);
    if ( v44 )
    {
      WarBoardPopTextEffectPerformance__SetPopText(v44, popText, popTextColor, 0LL);
      if ( v35 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v35,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v44,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        if ( taskList )
        {
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
            (System_Collections_Generic_IEnumerable_T__o *)v35,
            (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
          return;
        }
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Instance )
        {
          WarBoardManager__AddTask_18807556(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v35,
            0LL);
          return;
        }
      }
    }
LABEL_22:
    sub_B5D69C(Instance, v37);
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall WarBoardWallComponent__GetIconPosition(
        WarBoardWallComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *iconSp; // x0
  float v3; // s0
  float v4; // s1
  float v5; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  iconSp = (UnityEngine_Component_o *)this->fields.iconSp;
  if ( !iconSp || (iconSp = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSp, 0LL)) == 0LL )
    sub_B5D69C(iconSp, method);
  *(UnityEngine_Vector3_o *)&v3 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)iconSp, 0LL);
  result.fields.z = v5;
  result.fields.y = v4;
  result.fields.x = v3;
  return result;
}


WarBoardSimpleAnimationPerformance_o *__fastcall WarBoardWallComponent__GetSimpleAnimationPerformance(
        WarBoardWallComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SimpleAnimation_o *simpleAnimation; // x20
  WarBoardSimpleAnimationPerformance_o *v7; // x21

  if ( (byte_42E9360 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardSimpleAnimationPerformance_TypeInfo, (_DWORD)animationName, (_DWORD)method, v3);
    byte_42E9360 = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  v7 = (WarBoardSimpleAnimationPerformance_o *)sub_B5D694(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(v7, simpleAnimation, animationName, 0LL);
  return v7;
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  struct WarBoardWallData_o **p_wallData; // x20
  __int64 v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  WarBoardBreakPointComponent_o *wallData; // x0
  struct SimpleAnimation_o *Component_srcLineSprite; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  UISprite_o *iconSp; // x21
  struct WarBoardStageWallEntity_o *wallEntity; // x8
  System_String_o *v53; // x22
  Il2CppObject *v54; // x0
  UnityEngine_Transform_o *transform; // x21
  struct WarBoardWallData_o *v56; // x8
  int v57; // s0
  int breakPointMax_k__BackingField; // w21
  struct WarBoardBreakPointComponent_array *v61; // x0
  struct WarBoardBreakPointComponent_array **p_breakPoints; // x22
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  int32_t v69; // w28
  float v70; // s8
  float v71; // s9
  struct UnityEngine_GameObject_o *breakPointPrefab; // x23
  UnityEngine_Transform_o *v73; // x24
  UnityEngine_GameObject_o *v74; // x24
  WarBoardBreakPointComponent_o *v75; // x23
  struct UIWidget_o *breakPointParent; // x8
  struct WarBoardBreakPointComponent_array *v77; // x25
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  int32_t v84; // w24
  Il2CppClass **v85; // x0
  struct WarBoardBreakPointComponent_array *v86; // x8
  float maxSpacing; // s0
  UnityEngine_Transform_array *v88; // x20
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_Int32_array **v95; // x21
  const MethodInfo *v96; // x2
  struct WarBoardWallData_o *v97; // x8
  __int64 v98; // x0
  __int64 v99; // x0
  int v100; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v101; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E935A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___,
      (_DWORD)data,
      (_DWORD)wallIconAtlas,
      method);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___, v11, v12, v13);
    sub_B5D5C4(&int_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Transform___TypeInfo, v26, v27, v28);
    sub_B5D5C4(&WarBoardBreakPointComponent___TypeInfo, v29, v30, v31);
    sub_B5D5C4(&WarBoardWallComponent_TypeInfo, v32, v33, v34);
    byte_42E935A = 1;
  }
  this->fields.wallData = data;
  p_wallData = &this->fields.wallData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.wallData,
    (System_Int32_array **)data,
    (System_String_array **)wallIconAtlas,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  wallData = (WarBoardBreakPointComponent_o *)this->fields.wallData;
  if ( !wallData )
    goto LABEL_38;
  *(_QWORD *)&wallData->fields.objectColorNumber = this;
  sub_B5D560(
    (BattleServantConfConponent_o *)&wallData->fields.objectColorNumber,
    (System_Int32_array **)this,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  wallData = (WarBoardBreakPointComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
  if ( !wallData )
    goto LABEL_38;
  Component_srcLineSprite = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)wallData,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimation,
    (System_Int32_array **)Component_srcLineSprite,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  wallData = (WarBoardBreakPointComponent_o *)this->fields.iconSp;
  if ( !wallData )
    goto LABEL_38;
  UISprite__set_atlas((UISprite_o *)wallData, wallIconAtlas, 0LL);
  iconSp = this->fields.iconSp;
  wallData = (WarBoardBreakPointComponent_o *)WarBoardWallComponent_TypeInfo;
  if ( (BYTE3(WarBoardWallComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardWallComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardWallComponent_TypeInfo);
    wallData = (WarBoardBreakPointComponent_o *)WarBoardWallComponent_TypeInfo;
  }
  if ( !*p_wallData )
    goto LABEL_38;
  wallEntity = (*p_wallData)->fields.wallEntity;
  v53 = **(System_String_o ***)&wallData[2].fields.objectColorNumber;
  if ( wallEntity )
    LODWORD(wallEntity) = wallEntity->fields.imageId;
  v100 = (int)wallEntity;
  v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v100);
  wallData = (WarBoardBreakPointComponent_o *)System_String__Format(v53, v54, 0LL);
  if ( !iconSp )
    goto LABEL_38;
  UISprite__set_spriteName(iconSp, (System_String_o *)wallData, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  wallData = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v56 = this->fields.wallData;
  if ( !v56 )
    goto LABEL_38;
  if ( !wallData )
    goto LABEL_38;
  *(UnityEngine_Vector3_o *)&v57 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)wallData,
                                     v56->fields._squareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_38;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v57, 0LL);
  if ( !*p_wallData )
    goto LABEL_38;
  breakPointMax_k__BackingField = (*p_wallData)->fields._breakPointMax_k__BackingField;
  v61 = (struct WarBoardBreakPointComponent_array *)sub_B5D5DC(
                                                      WarBoardBreakPointComponent___TypeInfo,
                                                      (unsigned int)breakPointMax_k__BackingField);
  this->fields.breakPoints = v61;
  p_breakPoints = &this->fields.breakPoints;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.breakPoints,
    (System_Int32_array **)v61,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  wallData = (WarBoardBreakPointComponent_o *)this->fields.breakPointParent;
  if ( !wallData )
    goto LABEL_38;
  if ( breakPointMax_k__BackingField >= 1 )
  {
    v69 = 0;
    v70 = 0.0;
    v71 = (float)SLODWORD(wallData[2].fields.deactiveObject) / (float)breakPointMax_k__BackingField;
    do
    {
      breakPointPrefab = this->fields.breakPointPrefab;
      v73 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)wallData, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      wallData = (WarBoardBreakPointComponent_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                    (UILabel_o *)breakPointPrefab,
                                                    v73,
                                                    (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
      if ( !wallData )
        break;
      v74 = (UnityEngine_GameObject_o *)wallData;
      v75 = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               (UnityEngine_GameObject_o *)wallData,
                                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      wallData = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__get_transform(v74, 0LL);
      if ( !wallData )
        break;
      v101.fields.y = 0.0;
      v101.fields.z = 0.0;
      v101.fields.x = v70;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)wallData, v101, 0LL);
      breakPointParent = this->fields.breakPointParent;
      if ( !breakPointParent )
        break;
      if ( !v75 )
        break;
      WarBoardBreakPointComponent__Initialize(
        v75,
        breakPointParent->fields.mDepth + 2 * (~v69 + breakPointMax_k__BackingField),
        v69 + 1,
        0,
        0,
        1,
        0LL);
      v77 = *p_breakPoints;
      if ( !*p_breakPoints )
        break;
      wallData = (WarBoardBreakPointComponent_o *)sub_B5D684(v75, v77->obj.klass->_1.element_class);
      if ( !wallData )
        goto LABEL_47;
      v84 = v69;
      if ( v69 >= v77->max_length )
        goto LABEL_46;
      v85 = &v77->obj.klass + v69;
      v85[4] = (Il2CppClass *)v75;
      sub_B5D560((BattleServantConfConponent_o *)(v85 + 4), (System_Int32_array **)v75, v78, v79, v80, v81, v82, v83);
      v86 = *p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_38;
      if ( v69 >= v86->max_length )
        goto LABEL_46;
      if ( !*p_wallData )
        break;
      wallData = v86->m_Items[v69];
      if ( !wallData )
        break;
      WarBoardBreakPointComponent__SetActive(
        wallData,
        (*p_wallData)->fields._breakPoint_k__BackingField > v69++,
        0,
        0LL);
      if ( breakPointMax_k__BackingField <= v84 + 1 )
        goto LABEL_39;
      maxSpacing = v75->fields.maxSpacing;
      wallData = (WarBoardBreakPointComponent_o *)this->fields.breakPointParent;
      if ( maxSpacing >= v71 )
        maxSpacing = v71;
      v70 = v70 + maxSpacing;
    }
    while ( wallData );
    goto LABEL_38;
  }
LABEL_39:
  v88 = (UnityEngine_Transform_array *)sub_B5D5DC(UnityEngine_Transform___TypeInfo, 1LL);
  wallData = (WarBoardBreakPointComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v88 )
    goto LABEL_38;
  v95 = (System_Int32_array **)wallData;
  if ( wallData )
  {
    wallData = (WarBoardBreakPointComponent_o *)sub_B5D684(wallData, v88->obj.klass->_1.element_class);
    if ( !wallData )
    {
LABEL_47:
      v99 = sub_B5D6BC(wallData);
      sub_B5D668(v99, 0LL);
    }
  }
  if ( !v88->max_length )
  {
LABEL_46:
    v98 = sub_B5D6C8(wallData);
    sub_B5D668(v98, 0LL);
  }
  v88->m_Items[0] = (UnityEngine_Transform_o *)v95;
  sub_B5D560((BattleServantConfConponent_o *)v88->m_Items, v95, v89, v90, v91, v92, v93, v94);
  WarBoardWallComponent__SetButtonTweenTarget(this, v88, v96);
  wallData = (WarBoardBreakPointComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
  v97 = this->fields.wallData;
  if ( !v97 || !wallData )
LABEL_38:
    sub_B5D69C(wallData, v36);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wallData, !v97->fields._isDestroy_k__BackingField, 0LL);
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
  WarBoardWallComponent_o *v7; // x20
  __int64 v9; // x22
  int32_t breakPoint_k__BackingField; // w23
  struct WarBoardBreakPointComponent_array *breakPoints; // x10
  __int64 v12; // x0

  wallData = this->fields.wallData;
  if ( !wallData )
LABEL_13:
    sub_B5D69C(this, *(_QWORD *)&oldBreakPoint);
  v7 = this;
  v9 = 0LL;
  if ( dummyPoint >= 0 )
    breakPoint_k__BackingField = dummyPoint;
  else
    breakPoint_k__BackingField = wallData->fields._breakPoint_k__BackingField;
  while ( (int)v9 < wallData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = v7->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v9 >= breakPoints->max_length )
      {
        v12 = sub_B5D6C8(this);
        sub_B5D668(v12, 0LL);
      }
      this = (WarBoardWallComponent_o *)breakPoints->m_Items[v9];
      if ( this )
      {
        if ( (int)v9 >= oldBreakPoint || breakPoint_k__BackingField > (int)v9 )
          WarBoardBreakPointComponent__SetActive(
            (WarBoardBreakPointComponent_o *)this,
            breakPoint_k__BackingField > (int)v9,
            0,
            0LL);
        else
          WarBoardBreakPointComponent__OnBreak((WarBoardBreakPointComponent_o *)this, taskList, 0LL, 0LL);
        wallData = v7->fields.wallData;
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
  int v2; // w2
  __int64 v3; // x3
  WarBoardWallComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct WarBoardWallData_o *wallData; // x8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x20
  struct UIWidget_o *breakPointParent; // x8
  struct WarBoardWallData_o *v12; // x8
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x20
  struct UIWidget_o *v15; // x8
  WebViewManager_o *Instance; // x0
  WarBoardWallData_o *v17; // x20
  WarBoardManager_o *v18; // x21
  int v19; // s0

  v4 = this;
  if ( (byte_42E935E & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    this = (WarBoardWallComponent_o *)sub_B5D5C4(&Method_WarBoardWallComponent_OnClick__, v5, v6, v7);
    byte_42E935E = 1;
  }
  wallData = v4->fields.wallData;
  if ( !wallData )
    goto LABEL_22;
  if ( wallData->fields._isDestroy_k__BackingField )
    return;
  this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)this, 0LL) && v4->fields.isSelectable )
  {
    v9 = Method_WarBoardWallComponent_OnClick__;
    if ( (*((_BYTE *)Method_WarBoardWallComponent_OnClick__ + 75) & 2) != 0 )
      v9 = (_QWORD *)sub_B5D5CC(Method_WarBoardWallComponent_OnClick__);
    v10 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v9, v9[3]);
    this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( this )
    {
      breakPointParent = this[3].fields.breakPointParent;
      if ( breakPointParent )
      {
        OverwriteAssetSoundName__PlaySe(v10, (System_String_o *)breakPointParent->fields.leftAnchor, 0LL);
        this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        v12 = v4->fields.wallData;
        if ( v12 )
        {
          if ( this )
          {
            WarBoardManager__SelectedPieceAction(
              (WarBoardManager_o *)this,
              v12->fields._squareIndex_k__BackingField,
              0LL);
            return;
          }
        }
      }
    }
LABEL_22:
    sub_B5D69C(this, method);
  }
  v13 = Method_WarBoardWallComponent_OnClick__;
  if ( (*((_BYTE *)Method_WarBoardWallComponent_OnClick__ + 75) & 2) != 0 )
    v13 = (_QWORD *)sub_B5D5CC(Method_WarBoardWallComponent_OnClick__);
  v14 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v13, v13[3]);
  this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  v15 = this[3].fields.breakPointParent;
  if ( !v15 )
    goto LABEL_22;
  OverwriteAssetSoundName__PlaySe(v14, (System_String_o *)v15->fields.bottomAnchor, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v17 = v4->fields.wallData;
  v18 = (WarBoardManager_o *)Instance;
  this = (WarBoardWallComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
  if ( !this )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
  if ( !v18 )
    goto LABEL_22;
  WarBoardManager__ShowWallSimplePopup(v18, v17, *(UnityEngine_Vector3_o *)&v19, 0LL);
}


void __fastcall WarBoardWallComponent__OnDead(
        WarBoardWallComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  char *SimpleAnimationPerformance; // x0
  struct WarBoardWallData_o *wallData; // x8
  struct WarBoardStageWallEntity_o *wallEntity; // x8
  System_String_o *v27; // x21
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  const MethodInfo *v30; // x2
  System_Int32_array **v31; // x21
  BattleServantConfConponent_o *v32; // x22
  System_Delegate_o *v33; // x23
  WarBoardTaskBase_TaskCallback_o *v34; // x24
  System_Int32_array **v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  WebViewManager_o *Instance; // x19
  char *v49; // x20
  __int64 v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x0
  __int64 v58; // x0
  int v59; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E9361 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)taskList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&WarBoardTaskBase_TaskCallback_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&WarBoardTaskBase___TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_WarBoardWallComponent__OnDead_b__22_0__, v18, v19, v20);
    sub_B5D5C4(&WarBoardWallComponent_TypeInfo, v21, v22, v23);
    byte_42E9361 = 1;
  }
  SimpleAnimationPerformance = (char *)WarBoardWallComponent_TypeInfo;
  if ( (BYTE3(WarBoardWallComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardWallComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardWallComponent_TypeInfo);
    SimpleAnimationPerformance = (char *)WarBoardWallComponent_TypeInfo;
  }
  wallData = this->fields.wallData;
  if ( !wallData )
    goto LABEL_20;
  wallEntity = wallData->fields.wallEntity;
  v27 = *(System_String_o **)(*((_QWORD *)SimpleAnimationPerformance + 23) + 8LL);
  if ( wallEntity )
    LODWORD(wallEntity) = wallEntity->fields.destroyEffectId;
  v59 = (int)wallEntity;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59);
  v29 = System_String__Format(v27, v28, 0LL);
  SimpleAnimationPerformance = (char *)WarBoardWallComponent__GetSimpleAnimationPerformance(this, v29, v30);
  if ( !SimpleAnimationPerformance )
    goto LABEL_20;
  v31 = (System_Int32_array **)SimpleAnimationPerformance;
  v32 = (BattleServantConfConponent_o *)(SimpleAnimationPerformance + 40);
  v33 = (System_Delegate_o *)*((_QWORD *)SimpleAnimationPerformance + 5);
  v34 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(v34, (Il2CppObject *)this, Method_WarBoardWallComponent__OnDead_b__22_0__, 0LL);
  v35 = (System_Int32_array **)System_Delegate__Combine(v33, (System_Delegate_o *)v34, 0LL);
  if ( v35 && *v35 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v50 = sub_B5D990(v35);
LABEL_22:
    v57 = sub_B5D6BC(v50);
    sub_B5D668(v57, 0LL);
  }
  v32->klass = (BattleServantConfConponent_c *)v35;
  sub_B5D560(v32, v35, v36, v37, v38, v39, v40, v41);
  SimpleAnimationPerformance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !SimpleAnimationPerformance )
    goto LABEL_20;
  *((_QWORD *)SimpleAnimationPerformance + 128) = v31;
  sub_B5D560((BattleServantConfConponent_o *)(SimpleAnimationPerformance + 1024), v31, v42, v43, v44, v45, v46, v47);
  if ( taskList )
  {
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    return;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  SimpleAnimationPerformance = (char *)sub_B5D5DC(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !SimpleAnimationPerformance )
LABEL_20:
    sub_B5D69C(SimpleAnimationPerformance, taskList);
  v49 = SimpleAnimationPerformance;
  v50 = sub_B5D684(v31, *(_QWORD *)(*(_QWORD *)SimpleAnimationPerformance + 64LL));
  if ( !v50 )
    goto LABEL_22;
  if ( !*((_DWORD *)v49 + 6) )
  {
    v58 = sub_B5D6C8(v50);
    sub_B5D668(v58, 0LL);
  }
  *((_QWORD *)v49 + 4) = v31;
  sub_B5D560((BattleServantConfConponent_o *)(v49 + 32), v31, v51, v52, v53, v54, v55, v56);
  if ( !Instance )
    goto LABEL_20;
  WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v49, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardWallComponent__OnLongClick(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardWallComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct WarBoardWallData_o *wallData; // x8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x20
  struct UIWidget_o *breakPointParent; // x8
  WebViewManager_o *Instance; // x0
  WarBoardWallData_o *v13; // x20
  WarBoardManager_o *v14; // x21
  int v15; // s0

  v4 = this;
  if ( (byte_42E935F & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    this = (WarBoardWallComponent_o *)sub_B5D5C4(&Method_WarBoardWallComponent_OnLongClick__, v5, v6, v7);
    byte_42E935F = 1;
  }
  wallData = v4->fields.wallData;
  if ( !wallData )
    goto LABEL_12;
  if ( wallData->fields._isDestroy_k__BackingField )
    return;
  v9 = Method_WarBoardWallComponent_OnLongClick__;
  if ( (*((_BYTE *)Method_WarBoardWallComponent_OnLongClick__ + 75) & 2) != 0 )
    v9 = (_QWORD *)sub_B5D5CC(Method_WarBoardWallComponent_OnLongClick__);
  v10 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v9, v9[3]);
  this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this
    || (breakPointParent = this[3].fields.breakPointParent) == 0LL
    || (OverwriteAssetSoundName__PlaySe(v10, (System_String_o *)breakPointParent->fields.bottomAnchor, 0LL),
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        v13 = v4->fields.wallData,
        v14 = (WarBoardManager_o *)Instance,
        (this = (WarBoardWallComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL), !v14) )
  {
LABEL_12:
    sub_B5D69C(this, method);
  }
  WarBoardManager__ShowWallSimplePopup(v14, v13, *(UnityEngine_Vector3_o *)&v15, 0LL);
}


void __fastcall WarBoardWallComponent__OnShowDamagePopup(
        WarBoardWallComponent_o *this,
        System_String_o *popText,
        int32_t popTextColor,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  WarBoardManager_o *gameObject; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x23
  const MethodInfo *v24; // x5

  if ( (byte_42E9363 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__,
      (_DWORD)popText,
      popTextColor,
      taskList);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_18409/*"ef_dm_base"*/, v18, v19, v20);
    byte_42E9363 = 1;
  }
  gameObject = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
  {
    v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v23,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    if ( !System_String__IsNullOrEmpty(popText, 0LL) )
      WarBoardWallComponent__CreateEffectText(
        this,
        (System_String_o *)StringLiteral_18409/*"ef_dm_base"*/,
        popText,
        popTextColor,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)v23,
        v24);
    if ( taskList )
    {
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v23,
        (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      return;
    }
    gameObject = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( gameObject )
    {
      WarBoardManager__AddTask_18807556(gameObject, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v23, 0LL);
      return;
    }
LABEL_12:
    sub_B5D69C(gameObject, v22);
  }
}


void __fastcall WarBoardWallComponent__Selectable(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  struct WarBoardWallData_o *wallData; // x8

  wallData = this->fields.wallData;
  if ( !wallData )
    sub_B5D69C(this, method);
  if ( !wallData->fields._isDestroy_k__BackingField )
    this->fields.isSelectable = 1;
}


void __fastcall WarBoardWallComponent__SetButtonTweenTarget(
        WarBoardWallComponent_o *this,
        UnityEngine_Transform_array *parents,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x21
  UnityEngine_Component_o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v25; // x1
  signed int max_length; // w8
  unsigned int v27; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v29; // x22
  unsigned __int64 v30; // x19
  UnityEngine_Object_o *v31; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  struct UICommonButton_o *button; // x19
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x0

  if ( (byte_42E935B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68825880,
      (_DWORD)parents,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Contains__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42E935B = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v27 = 0;
      while ( 1 )
      {
        if ( v27 >= max_length )
          goto LABEL_25;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)parents->m_Items[v27];
        if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
          goto LABEL_26;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                               ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                                                                               1,
                                                                                               (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68825880);
        if ( ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
        {
          klass = ComponentsInChildren_WarBoardControlPlayTalkUiComponent[1].klass;
          v29 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_21:
        max_length = parents->max_length;
        if ( (int)++v27 >= max_length )
          goto LABEL_22;
      }
      v30 = 0LL;
      while ( v30 < (unsigned int)klass )
      {
        v31 = (UnityEngine_Object_o *)*((_QWORD *)&v29[1].monitor + v30);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                                                               v31,
                                                                                               0LL,
                                                                                               0LL);
        if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0 )
        {
          if ( !v31 )
            goto LABEL_26;
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                                 (UnityEngine_Component_o *)v31,
                                                                                                 0LL);
          if ( !v23 )
            goto LABEL_26;
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                                                                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v23,
                                                                                                 (WarBoardManager_TaskList_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                                                                                 (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) == 0 )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v31, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v23,
              (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          }
        }
        LODWORD(klass) = v29[1].klass;
        if ( (__int64)++v30 >= (int)klass )
          goto LABEL_21;
      }
LABEL_25:
      v40 = sub_B5D6C8(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
      sub_B5D668(v40, 0LL);
    }
  }
LABEL_22:
  if ( !v23
    || (button = this->fields.button,
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                                                                                               (const MethodInfo_305910C *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_26:
    sub_B5D69C(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v25);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  sub_B5D560(
    (BattleServantConfConponent_o *)&button->fields.tweenTargets,
    (System_Int32_array **)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
}


void __fastcall WarBoardWallComponent__SetColliderEnable(
        WarBoardWallComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *button; // x21
  __int64 v7; // x1
  struct UICommonButton_o *v8; // x0
  bool v9; // w1

  if ( (byte_42E935D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, enable, (_DWORD)method, v3);
    byte_42E935D = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v8 = this->fields.button;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    if ( enable )
    {
      v9 = 1;
LABEL_12:
      UICommonButton__SetButtonEnableAndKeepState(v8, v9, 0, 0LL);
      return;
    }
    if ( v8->fields.mState )
    {
      v9 = 0;
      goto LABEL_12;
    }
    UICommonButton__SetColliderEnable(v8, 0, 1, 0LL);
  }
}


void __fastcall WarBoardWallComponent__SetTouchEnable(
        WarBoardWallComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *button; // x21
  __int64 v7; // x1
  UICommonButton_o *v8; // x0

  if ( (byte_42E935C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, enable, (_DWORD)method, v3);
    byte_42E935C = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v8 = this->fields.button;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    UICommonButton__SetButtonEnableAndKeepState(v8, enable, 0, 0LL);
  }
}


void __fastcall WarBoardWallComponent__Unselectable(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  struct WarBoardWallData_o *wallData; // x8

  wallData = this->fields.wallData;
  if ( !wallData )
    sub_B5D69C(this, method);
  if ( !wallData->fields._isDestroy_k__BackingField )
    this->fields.isSelectable = 0;
}


void __fastcall WarBoardWallComponent___OnDead_b__22_0(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}