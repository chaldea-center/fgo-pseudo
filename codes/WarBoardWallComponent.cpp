void __fastcall WarBoardWallComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct WarBoardWallComponent_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_435268B & 1) == 0 )
  {
    sub_B70694(&WarBoardWallComponent_TypeInfo);
    sub_B70694(&StringLiteral_20062/*"img_wall_{0}"*/);
    sub_B70694(&StringLiteral_2930/*"BreakWall_{0:00}"*/);
    byte_435268B = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardWallComponent_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_20062/*"img_wall_{0}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_20062/*"img_wall_{0}"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = WarBoardWallComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_2930/*"BreakWall_{0:00}"*/;
  v9->BREAK_ANIMATION_NAME = (struct System_String_o *)StringLiteral_2930/*"BreakWall_{0:00}"*/;
  sub_B70630((BattleServantConfConponent_o *)&v9->BREAK_ANIMATION_NAME, v10, v11, v12, v13, v14, v15, v16);
}


void __fastcall WarBoardWallComponent___ctor(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardWallComponent__CreateEffectText(
        WarBoardWallComponent_o *this,
        System_String_o *effectName,
        System_String_o *popText,
        int32_t popTextColor,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x22
  WebViewManager_o *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *CommonEffectAsset_object; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *effectDisplayTransform; // x23
  UnityEngine_Object_o *v17; // x25
  UnityEngine_GameObject_o *v18; // x24
  WarBoardPopTextEffectPerformance_o *v19; // x0
  WarBoardPopTextEffectPerformance_o *v20; // x23
  System_Nullable_Vector3__o v21; // 0:x3.16
  System_Nullable_Vector3__o v22; // 0:x5.16

  if ( (byte_4352689 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_B70694(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject____69308712);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B70694(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    sub_B70694(&WarBoardPopTextEffectPerformance_TypeInfo);
    byte_4352689 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               effectName,
                               (const MethodInfo_2DF6D1C *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    effectDisplayTransform = (UnityEngine_Object_o *)this->fields.effectDisplayTransform;
    v17 = (UnityEngine_Object_o *)transform;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(effectDisplayTransform, 0LL, 0LL) )
      effectDisplayTransform = v17;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v18 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                        (UILabel_o *)CommonEffectAsset_object,
                                        (UnityEngine_Transform_o *)effectDisplayTransform,
                                        (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_GameObject____69308712);
    v19 = (WarBoardPopTextEffectPerformance_o *)sub_B70764(WarBoardPopTextEffectPerformance_TypeInfo);
    *(_QWORD *)&v21.fields.value.fields.x = 0LL;
    *(_QWORD *)&v21.fields.value.fields.z = 0LL;
    *(_QWORD *)&v22.fields.value.fields.x = 0LL;
    *(_QWORD *)&v22.fields.value.fields.z = 0LL;
    v20 = v19;
    WarBoardPopTextEffectPerformance___ctor(v19, 0LL, v18, v21, v22, (System_Nullable_Vector3__o)0, 0, 1, 0LL);
    if ( v20 )
    {
      WarBoardPopTextEffectPerformance__SetPopText(v20, popText, popTextColor, 0LL);
      if ( v11 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        if ( taskList )
        {
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
            (System_Collections_Generic_IEnumerable_T__o *)v11,
            (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
          return;
        }
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Instance )
        {
          WarBoardManager__AddTask_18846680(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v11,
            0LL);
          return;
        }
      }
    }
LABEL_22:
    sub_B7076C(Instance, v13);
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
    sub_B7076C(iconSp, method);
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
  SimpleAnimation_o *simpleAnimation; // x20
  WarBoardSimpleAnimationPerformance_o *v6; // x21

  if ( (byte_4352687 & 1) == 0 )
  {
    sub_B70694(&WarBoardSimpleAnimationPerformance_TypeInfo);
    byte_4352687 = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  v6 = (WarBoardSimpleAnimationPerformance_o *)sub_B70764(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(v6, simpleAnimation, animationName, 0LL);
  return v6;
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
  struct WarBoardWallData_o **p_wallData; // x20
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  WarBoardBreakPointComponent_o *wallData; // x0
  struct SimpleAnimation_o *Component_srcLineSprite; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x2
  UISprite_o *iconSp; // x21
  struct WarBoardStageWallEntity_o *wallEntity; // x8
  System_String_o *v30; // x22
  Il2CppObject *v31; // x0
  UnityEngine_Transform_o *transform; // x21
  struct WarBoardWallData_o *v33; // x8
  int v34; // s0
  int breakPointMax_k__BackingField; // w21
  struct WarBoardBreakPointComponent_array *v38; // x0
  struct WarBoardBreakPointComponent_array **p_breakPoints; // x22
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  int32_t v46; // w28
  float v47; // s8
  float v48; // s9
  struct UnityEngine_GameObject_o *breakPointPrefab; // x23
  UnityEngine_Transform_o *v50; // x24
  UnityEngine_GameObject_o *v51; // x24
  WarBoardBreakPointComponent_o *v52; // x23
  struct UIWidget_o *breakPointParent; // x8
  struct WarBoardBreakPointComponent_array *v54; // x25
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  int32_t v61; // w24
  Il2CppClass **v62; // x0
  struct WarBoardBreakPointComponent_array *v63; // x8
  float maxSpacing; // s0
  UnityEngine_Transform_array *v65; // x20
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x21
  const MethodInfo *v73; // x2
  struct WarBoardWallData_o *v74; // x8
  __int64 v75; // x0
  __int64 v76; // x0
  int v77; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4352681 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject____69308712);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B70694(&UnityEngine_Transform___TypeInfo);
    sub_B70694(&WarBoardBreakPointComponent___TypeInfo);
    sub_B70694(&WarBoardWallComponent_TypeInfo);
    byte_4352681 = 1;
  }
  this->fields.wallData = data;
  p_wallData = &this->fields.wallData;
  sub_B70630(
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
  sub_B70630(
    (BattleServantConfConponent_o *)&wallData->fields.objectColorNumber,
    (System_Int32_array **)this,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  wallData = (WarBoardBreakPointComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
  if ( !wallData )
    goto LABEL_38;
  Component_srcLineSprite = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)wallData,
                                                          (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = Component_srcLineSprite;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimation,
    (System_Int32_array **)Component_srcLineSprite,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
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
  v30 = **(System_String_o ***)&wallData[2].fields.objectColorNumber;
  if ( wallEntity )
    LODWORD(wallEntity) = wallEntity->fields.imageId;
  v77 = (int)wallEntity;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v77, v27);
  wallData = (WarBoardBreakPointComponent_o *)System_String__Format(v30, v31, 0LL);
  if ( !iconSp )
    goto LABEL_38;
  UISprite__set_spriteName(iconSp, (System_String_o *)wallData, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  wallData = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v33 = this->fields.wallData;
  if ( !v33 )
    goto LABEL_38;
  if ( !wallData )
    goto LABEL_38;
  *(UnityEngine_Vector3_o *)&v34 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)wallData,
                                     v33->fields._squareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_38;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v34, 0LL);
  if ( !*p_wallData )
    goto LABEL_38;
  breakPointMax_k__BackingField = (*p_wallData)->fields._breakPointMax_k__BackingField;
  v38 = (struct WarBoardBreakPointComponent_array *)sub_B706AC(
                                                      WarBoardBreakPointComponent___TypeInfo,
                                                      (unsigned int)breakPointMax_k__BackingField);
  this->fields.breakPoints = v38;
  p_breakPoints = &this->fields.breakPoints;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.breakPoints,
    (System_Int32_array **)v38,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  wallData = (WarBoardBreakPointComponent_o *)this->fields.breakPointParent;
  if ( !wallData )
    goto LABEL_38;
  if ( breakPointMax_k__BackingField >= 1 )
  {
    v46 = 0;
    v47 = 0.0;
    v48 = (float)SLODWORD(wallData[2].fields.deactiveObject) / (float)breakPointMax_k__BackingField;
    do
    {
      breakPointPrefab = this->fields.breakPointPrefab;
      v50 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)wallData, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      wallData = (WarBoardBreakPointComponent_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                    (UILabel_o *)breakPointPrefab,
                                                    v50,
                                                    (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_GameObject____69308712);
      if ( !wallData )
        break;
      v51 = (UnityEngine_GameObject_o *)wallData;
      v52 = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               (UnityEngine_GameObject_o *)wallData,
                                               (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      wallData = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__get_transform(v51, 0LL);
      if ( !wallData )
        break;
      v78.fields.y = 0.0;
      v78.fields.z = 0.0;
      v78.fields.x = v47;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)wallData, v78, 0LL);
      breakPointParent = this->fields.breakPointParent;
      if ( !breakPointParent )
        break;
      if ( !v52 )
        break;
      WarBoardBreakPointComponent__Initialize(
        v52,
        breakPointParent->fields.mDepth + 2 * (~v46 + breakPointMax_k__BackingField),
        v46 + 1,
        0,
        0,
        1,
        0LL);
      v54 = *p_breakPoints;
      if ( !*p_breakPoints )
        break;
      wallData = (WarBoardBreakPointComponent_o *)sub_B70754(v52, v54->obj.klass->_1.element_class);
      if ( !wallData )
        goto LABEL_47;
      v61 = v46;
      if ( v46 >= v54->max_length )
        goto LABEL_46;
      v62 = &v54->obj.klass + v46;
      v62[4] = (Il2CppClass *)v52;
      sub_B70630((BattleServantConfConponent_o *)(v62 + 4), (System_Int32_array **)v52, v55, v56, v57, v58, v59, v60);
      v63 = *p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_38;
      if ( v46 >= v63->max_length )
        goto LABEL_46;
      if ( !*p_wallData )
        break;
      wallData = v63->m_Items[v46];
      if ( !wallData )
        break;
      WarBoardBreakPointComponent__SetActive(
        wallData,
        (*p_wallData)->fields._breakPoint_k__BackingField > v46++,
        0,
        0LL);
      if ( breakPointMax_k__BackingField <= v61 + 1 )
        goto LABEL_39;
      maxSpacing = v52->fields.maxSpacing;
      wallData = (WarBoardBreakPointComponent_o *)this->fields.breakPointParent;
      if ( maxSpacing >= v48 )
        maxSpacing = v48;
      v47 = v47 + maxSpacing;
    }
    while ( wallData );
    goto LABEL_38;
  }
LABEL_39:
  v65 = (UnityEngine_Transform_array *)sub_B706AC(UnityEngine_Transform___TypeInfo, 1LL);
  wallData = (WarBoardBreakPointComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v65 )
    goto LABEL_38;
  v72 = (System_Int32_array **)wallData;
  if ( wallData )
  {
    wallData = (WarBoardBreakPointComponent_o *)sub_B70754(wallData, v65->obj.klass->_1.element_class);
    if ( !wallData )
    {
LABEL_47:
      v76 = sub_B7078C(wallData);
      sub_B70738(v76, 0LL);
    }
  }
  if ( !v65->max_length )
  {
LABEL_46:
    v75 = sub_B70798(wallData);
    sub_B70738(v75, 0LL);
  }
  v65->m_Items[0] = (UnityEngine_Transform_o *)v72;
  sub_B70630((BattleServantConfConponent_o *)v65->m_Items, v72, v66, v67, v68, v69, v70, v71);
  WarBoardWallComponent__SetButtonTweenTarget(this, v65, v73);
  wallData = (WarBoardBreakPointComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
  v74 = this->fields.wallData;
  if ( !v74 || !wallData )
LABEL_38:
    sub_B7076C(wallData, v12);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wallData, !v74->fields._isDestroy_k__BackingField, 0LL);
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
    sub_B7076C(this, *(_QWORD *)&oldBreakPoint);
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
        v12 = sub_B70798(this);
        sub_B70738(v12, 0LL);
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
  WarBoardWallComponent_o *v2; // x19
  struct WarBoardWallData_o *wallData; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x20
  struct UIWidget_o *breakPointParent; // x8
  struct WarBoardWallData_o *v7; // x8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x20
  struct UIWidget_o *v10; // x8
  WebViewManager_o *Instance; // x0
  WarBoardWallData_o *v12; // x20
  WarBoardManager_o *v13; // x21
  int v14; // s0

  v2 = this;
  if ( (byte_4352685 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardWallComponent_o *)sub_B70694(&Method_WarBoardWallComponent_OnClick__);
    byte_4352685 = 1;
  }
  wallData = v2->fields.wallData;
  if ( !wallData )
    goto LABEL_22;
  if ( wallData->fields._isDestroy_k__BackingField )
    return;
  this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)this, 0LL) && v2->fields.isSelectable )
  {
    v4 = Method_WarBoardWallComponent_OnClick__;
    if ( (*((_BYTE *)Method_WarBoardWallComponent_OnClick__ + 75) & 2) != 0 )
      v4 = (_QWORD *)sub_B7069C(Method_WarBoardWallComponent_OnClick__);
    v5 = (System_Reflection_MethodBase_o *)sub_B70678(v4, v4[3]);
    this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( this )
    {
      breakPointParent = this[3].fields.breakPointParent;
      if ( breakPointParent )
      {
        OverwriteAssetSoundName__PlaySe(v5, (System_String_o *)breakPointParent->fields.leftAnchor, 0LL);
        this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        v7 = v2->fields.wallData;
        if ( v7 )
        {
          if ( this )
          {
            WarBoardManager__SelectedPieceAction(
              (WarBoardManager_o *)this,
              v7->fields._squareIndex_k__BackingField,
              0LL);
            return;
          }
        }
      }
    }
LABEL_22:
    sub_B7076C(this, method);
  }
  v8 = Method_WarBoardWallComponent_OnClick__;
  if ( (*((_BYTE *)Method_WarBoardWallComponent_OnClick__ + 75) & 2) != 0 )
    v8 = (_QWORD *)sub_B7069C(Method_WarBoardWallComponent_OnClick__);
  v9 = (System_Reflection_MethodBase_o *)sub_B70678(v8, v8[3]);
  this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  v10 = this[3].fields.breakPointParent;
  if ( !v10 )
    goto LABEL_22;
  OverwriteAssetSoundName__PlaySe(v9, (System_String_o *)v10->fields.bottomAnchor, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v12 = v2->fields.wallData;
  v13 = (WarBoardManager_o *)Instance;
  this = (WarBoardWallComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
  if ( !this )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
  if ( !v13 )
    goto LABEL_22;
  WarBoardManager__ShowWallSimplePopup(v13, v12, *(UnityEngine_Vector3_o *)&v14, 0LL);
}


void __fastcall WarBoardWallComponent__OnDead(
        WarBoardWallComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  char *SimpleAnimationPerformance; // x0
  struct WarBoardWallData_o *wallData; // x8
  struct WarBoardStageWallEntity_o *wallEntity; // x8
  System_String_o *v8; // x21
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  const MethodInfo *v11; // x2
  System_Int32_array **v12; // x21
  BattleServantConfConponent_o *v13; // x22
  System_Delegate_o *v14; // x23
  WarBoardTaskBase_TaskCallback_o *v15; // x24
  System_Int32_array **v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  WebViewManager_o *Instance; // x19
  char *v30; // x20
  __int64 v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x0
  __int64 v39; // x0
  int v40; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4352688 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B70694(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_B70694(&WarBoardTaskBase___TypeInfo);
    sub_B70694(&Method_WarBoardWallComponent__OnDead_b__22_0__);
    sub_B70694(&WarBoardWallComponent_TypeInfo);
    byte_4352688 = 1;
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
  v8 = *(System_String_o **)(*((_QWORD *)SimpleAnimationPerformance + 23) + 8LL);
  if ( wallEntity )
    LODWORD(wallEntity) = wallEntity->fields.destroyEffectId;
  v40 = (int)wallEntity;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40, method);
  v10 = System_String__Format(v8, v9, 0LL);
  SimpleAnimationPerformance = (char *)WarBoardWallComponent__GetSimpleAnimationPerformance(this, v10, v11);
  if ( !SimpleAnimationPerformance )
    goto LABEL_20;
  v12 = (System_Int32_array **)SimpleAnimationPerformance;
  v13 = (BattleServantConfConponent_o *)(SimpleAnimationPerformance + 40);
  v14 = (System_Delegate_o *)*((_QWORD *)SimpleAnimationPerformance + 5);
  v15 = (WarBoardTaskBase_TaskCallback_o *)sub_B70764(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(v15, (Il2CppObject *)this, Method_WarBoardWallComponent__OnDead_b__22_0__, 0LL);
  v16 = (System_Int32_array **)System_Delegate__Combine(v14, (System_Delegate_o *)v15, 0LL);
  if ( v16 && *v16 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v31 = sub_B70A60(v16);
LABEL_22:
    v38 = sub_B7078C(v31);
    sub_B70738(v38, 0LL);
  }
  v13->klass = (BattleServantConfConponent_c *)v16;
  sub_B70630(v13, v16, v17, v18, v19, v20, v21, v22);
  SimpleAnimationPerformance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !SimpleAnimationPerformance )
    goto LABEL_20;
  *((_QWORD *)SimpleAnimationPerformance + 128) = v12;
  sub_B70630((BattleServantConfConponent_o *)(SimpleAnimationPerformance + 1024), v12, v23, v24, v25, v26, v27, v28);
  if ( taskList )
  {
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    return;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  SimpleAnimationPerformance = (char *)sub_B706AC(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !SimpleAnimationPerformance )
LABEL_20:
    sub_B7076C(SimpleAnimationPerformance, taskList);
  v30 = SimpleAnimationPerformance;
  v31 = sub_B70754(v12, *(_QWORD *)(*(_QWORD *)SimpleAnimationPerformance + 64LL));
  if ( !v31 )
    goto LABEL_22;
  if ( !*((_DWORD *)v30 + 6) )
  {
    v39 = sub_B70798(v31);
    sub_B70738(v39, 0LL);
  }
  *((_QWORD *)v30 + 4) = v12;
  sub_B70630((BattleServantConfConponent_o *)(v30 + 32), v12, v32, v33, v34, v35, v36, v37);
  if ( !Instance )
    goto LABEL_20;
  WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v30, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardWallComponent__OnLongClick(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  WarBoardWallComponent_o *v2; // x19
  struct WarBoardWallData_o *wallData; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x20
  struct UIWidget_o *breakPointParent; // x8
  WebViewManager_o *Instance; // x0
  WarBoardWallData_o *v8; // x20
  WarBoardManager_o *v9; // x21
  int v10; // s0

  v2 = this;
  if ( (byte_4352686 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardWallComponent_o *)sub_B70694(&Method_WarBoardWallComponent_OnLongClick__);
    byte_4352686 = 1;
  }
  wallData = v2->fields.wallData;
  if ( !wallData )
    goto LABEL_12;
  if ( wallData->fields._isDestroy_k__BackingField )
    return;
  v4 = Method_WarBoardWallComponent_OnLongClick__;
  if ( (*((_BYTE *)Method_WarBoardWallComponent_OnLongClick__ + 75) & 2) != 0 )
    v4 = (_QWORD *)sub_B7069C(Method_WarBoardWallComponent_OnLongClick__);
  v5 = (System_Reflection_MethodBase_o *)sub_B70678(v4, v4[3]);
  this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this
    || (breakPointParent = this[3].fields.breakPointParent) == 0LL
    || (OverwriteAssetSoundName__PlaySe(v5, (System_String_o *)breakPointParent->fields.bottomAnchor, 0LL),
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        v8 = v2->fields.wallData,
        v9 = (WarBoardManager_o *)Instance,
        (this = (WarBoardWallComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL), !v9) )
  {
LABEL_12:
    sub_B7076C(this, method);
  }
  WarBoardManager__ShowWallSimplePopup(v9, v8, *(UnityEngine_Vector3_o *)&v10, 0LL);
}


void __fastcall WarBoardWallComponent__OnShowDamagePopup(
        WarBoardWallComponent_o *this,
        System_String_o *popText,
        int32_t popTextColor,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  WarBoardManager_o *gameObject; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x23
  const MethodInfo *v12; // x5

  if ( (byte_435268A & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_B70694(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B70694(&StringLiteral_18458/*"ef_dm_base"*/);
    byte_435268A = 1;
  }
  gameObject = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
  {
    v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v11,
      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    if ( !System_String__IsNullOrEmpty(popText, 0LL) )
      WarBoardWallComponent__CreateEffectText(
        this,
        (System_String_o *)StringLiteral_18458/*"ef_dm_base"*/,
        popText,
        popTextColor,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)v11,
        v12);
    if ( taskList )
    {
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v11,
        (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      return;
    }
    gameObject = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( gameObject )
    {
      WarBoardManager__AddTask_18846680(gameObject, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v11, 0LL);
      return;
    }
LABEL_12:
    sub_B7076C(gameObject, v10);
  }
}


void __fastcall WarBoardWallComponent__Selectable(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  struct WarBoardWallData_o *wallData; // x8

  wallData = this->fields.wallData;
  if ( !wallData )
    sub_B7076C(this, method);
  if ( !wallData->fields._isDestroy_k__BackingField )
    this->fields.isSelectable = 1;
}


void __fastcall WarBoardWallComponent__SetButtonTweenTarget(
        WarBoardWallComponent_o *this,
        UnityEngine_Transform_array *parents,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x21
  UnityEngine_Component_o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v6; // x1
  signed int max_length; // w8
  unsigned int v8; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v10; // x22
  unsigned __int64 v11; // x19
  UnityEngine_Object_o *v12; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  struct UICommonButton_o *button; // x19
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x0

  if ( (byte_4352682 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____69251280);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352682 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= max_length )
          goto LABEL_25;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)parents->m_Items[v8];
        if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
          goto LABEL_26;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                               ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                                                                               1,
                                                                                               (const MethodInfo_1BE4420 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____69251280);
        if ( ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
        {
          klass = ComponentsInChildren_WarBoardControlPlayTalkUiComponent[1].klass;
          v10 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_21:
        max_length = parents->max_length;
        if ( (int)++v8 >= max_length )
          goto LABEL_22;
      }
      v11 = 0LL;
      while ( v11 < (unsigned int)klass )
      {
        v12 = (UnityEngine_Object_o *)*((_QWORD *)&v10[1].monitor + v11);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                                                               v12,
                                                                                               0LL,
                                                                                               0LL);
        if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0 )
        {
          if ( !v12 )
            goto LABEL_26;
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                                 (UnityEngine_Component_o *)v12,
                                                                                                 0LL);
          if ( !v4 )
            goto LABEL_26;
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                                                                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v4,
                                                                                                 (WarBoardManager_TaskList_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                                                                                 (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) == 0 )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v4,
              (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
          }
        }
        LODWORD(klass) = v10[1].klass;
        if ( (__int64)++v11 >= (int)klass )
          goto LABEL_21;
      }
LABEL_25:
      v21 = sub_B70798(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
      sub_B70738(v21, 0LL);
    }
  }
LABEL_22:
  if ( !v4
    || (button = this->fields.button,
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v4,
                                                                                               (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_26:
    sub_B7076C(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v6);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  sub_B70630(
    (BattleServantConfConponent_o *)&button->fields.tweenTargets,
    (System_Int32_array **)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


void __fastcall WarBoardWallComponent__SetColliderEnable(
        WarBoardWallComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0
  bool v8; // w1

  if ( (byte_4352684 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352684 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_B7076C(0LL, v6);
    if ( enable )
    {
      v8 = 1;
LABEL_12:
      UICommonButton__SetButtonEnableAndKeepState(v7, v8, 0, 0LL);
      return;
    }
    if ( v7->fields.mState )
    {
      v8 = 0;
      goto LABEL_12;
    }
    UICommonButton__SetColliderEnable(v7, 0, 1, 0LL);
  }
}


void __fastcall WarBoardWallComponent__SetTouchEnable(
        WarBoardWallComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  UICommonButton_o *v7; // x0

  if ( (byte_4352683 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352683 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_B7076C(0LL, v6);
    UICommonButton__SetButtonEnableAndKeepState(v7, enable, 0, 0LL);
  }
}


void __fastcall WarBoardWallComponent__Unselectable(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  struct WarBoardWallData_o *wallData; // x8

  wallData = this->fields.wallData;
  if ( !wallData )
    sub_B7076C(this, method);
  if ( !wallData->fields._isDestroy_k__BackingField )
    this->fields.isSelectable = 0;
}


void __fastcall WarBoardWallComponent___OnDead_b__22_0(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7076C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}