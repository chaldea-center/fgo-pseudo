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

  if ( (byte_4215673 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardWallComponent_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_19816/*"img_wall_{0}"*/, v8);
    sub_B0D8A4(&StringLiteral_2877/*"BreakWall_{0:00}"*/, v9);
    byte_4215673 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardWallComponent_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_19816/*"img_wall_{0}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19816/*"img_wall_{0}"*/;
  sub_B0D840(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = WarBoardWallComponent_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_2877/*"BreakWall_{0:00}"*/;
  v12->BREAK_ANIMATION_NAME = (struct System_String_o *)StringLiteral_2877/*"BreakWall_{0:00}"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v12->BREAK_ANIMATION_NAME, v13, v14, v15, v16, v17, v18, v19);
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
  WarBoardPopTextEffectPerformance_o *v28; // x0
  WarBoardPopTextEffectPerformance_o *v29; // x23
  System_Nullable_Vector3__o v30; // 0:x3.16
  System_Nullable_Vector3__o v31; // 0:x5.16

  if ( (byte_4215671 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, effectName);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v13);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025336, v14);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v16);
    sub_B0D8A4(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v17);
    sub_B0D8A4(&WarBoardPopTextEffectPerformance_TypeInfo, v18);
    byte_4215671 = 1;
  }
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  effectName,
                                                                                                  popText);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               effectName,
                               (const MethodInfo_2FC9D88 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
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
                                        (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
    v28 = (WarBoardPopTextEffectPerformance_o *)sub_B0D974(WarBoardPopTextEffectPerformance_TypeInfo, v26, v27);
    *(_QWORD *)&v30.fields.value.fields.x = 0LL;
    *(_QWORD *)&v30.fields.value.fields.z = 0LL;
    *(_QWORD *)&v31.fields.value.fields.x = 0LL;
    *(_QWORD *)&v31.fields.value.fields.z = 0LL;
    v29 = v28;
    WarBoardPopTextEffectPerformance___ctor(v28, 0LL, v25, v30, v31, (System_Nullable_Vector3__o)0, 0, 1, 0LL);
    if ( v29 )
    {
      WarBoardPopTextEffectPerformance__SetPopText(v29, popText, popTextColor, 0LL);
      if ( v19 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v19,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        if ( taskList )
        {
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
            (System_Collections_Generic_IEnumerable_T__o *)v19,
            (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
          return;
        }
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Instance )
        {
          WarBoardManager__AddTask_17750248(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v19,
            0LL);
          return;
        }
      }
    }
LABEL_22:
    sub_B0D97C(Instance);
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
    sub_B0D97C(iconSp);
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

  if ( (byte_421566F & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardSimpleAnimationPerformance_TypeInfo, animationName);
    byte_421566F = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  v6 = (WarBoardSimpleAnimationPerformance_o *)sub_B0D974(
                                                 WarBoardSimpleAnimationPerformance_TypeInfo,
                                                 animationName,
                                                 method);
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
  WarBoardBreakPointComponent_o *wallData; // x0
  struct SimpleAnimation_o *Component_srcLineSprite; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UISprite_o *iconSp; // x21
  struct WarBoardStageWallEntity_o *wallEntity; // x8
  System_String_o *v36; // x22
  Il2CppObject *v37; // x0
  UnityEngine_Transform_o *transform; // x21
  struct WarBoardWallData_o *v39; // x8
  int v40; // s0
  int breakPointMax_k__BackingField; // w21
  struct WarBoardBreakPointComponent_array *v44; // x0
  struct WarBoardBreakPointComponent_array **p_breakPoints; // x22
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  int32_t v52; // w28
  float v53; // s8
  float v54; // s9
  struct UnityEngine_GameObject_o *breakPointPrefab; // x23
  UnityEngine_Transform_o *v56; // x24
  UnityEngine_GameObject_o *v57; // x24
  WarBoardBreakPointComponent_o *v58; // x23
  struct UIWidget_o *breakPointParent; // x8
  struct WarBoardBreakPointComponent_array *v60; // x25
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  int32_t v67; // w24
  Il2CppClass **v68; // x0
  struct WarBoardBreakPointComponent_array *v69; // x8
  float maxSpacing; // s0
  UnityEngine_Transform_array *v71; // x20
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Int32_array **v78; // x21
  const MethodInfo *v79; // x2
  struct WarBoardWallData_o *v80; // x8
  __int64 v81; // x0
  __int64 v82; // x0
  int v83; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4215669 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, data);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___, v11);
    sub_B0D8A4(&int_TypeInfo, v12);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025336, v13);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v15);
    sub_B0D8A4(&UnityEngine_Transform___TypeInfo, v16);
    sub_B0D8A4(&WarBoardBreakPointComponent___TypeInfo, v17);
    sub_B0D8A4(&WarBoardWallComponent_TypeInfo, v18);
    byte_4215669 = 1;
  }
  this->fields.wallData = data;
  p_wallData = &this->fields.wallData;
  sub_B0D840(
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&wallData->fields.objectColorNumber,
    (System_Int32_array **)this,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  wallData = (WarBoardBreakPointComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
  if ( !wallData )
    goto LABEL_38;
  Component_srcLineSprite = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)wallData,
                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = Component_srcLineSprite;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimation,
    (System_Int32_array **)Component_srcLineSprite,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
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
  v36 = **(System_String_o ***)&wallData[2].fields.objectColorNumber;
  if ( wallEntity )
    LODWORD(wallEntity) = wallEntity->fields.imageId;
  v83 = (int)wallEntity;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83);
  wallData = (WarBoardBreakPointComponent_o *)System_String__Format(v36, v37, 0LL);
  if ( !iconSp )
    goto LABEL_38;
  UISprite__set_spriteName(iconSp, (System_String_o *)wallData, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  wallData = (WarBoardBreakPointComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v39 = this->fields.wallData;
  if ( !v39 )
    goto LABEL_38;
  if ( !wallData )
    goto LABEL_38;
  *(UnityEngine_Vector3_o *)&v40 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)wallData,
                                     v39->fields._squareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_38;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v40, 0LL);
  if ( !*p_wallData )
    goto LABEL_38;
  breakPointMax_k__BackingField = (*p_wallData)->fields._breakPointMax_k__BackingField;
  v44 = (struct WarBoardBreakPointComponent_array *)sub_B0D8BC(
                                                      WarBoardBreakPointComponent___TypeInfo,
                                                      (unsigned int)breakPointMax_k__BackingField);
  this->fields.breakPoints = v44;
  p_breakPoints = &this->fields.breakPoints;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.breakPoints,
    (System_Int32_array **)v44,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  wallData = (WarBoardBreakPointComponent_o *)this->fields.breakPointParent;
  if ( !wallData )
    goto LABEL_38;
  if ( breakPointMax_k__BackingField >= 1 )
  {
    v52 = 0;
    v53 = 0.0;
    v54 = (float)SLODWORD(wallData[2].fields.deactiveObject) / (float)breakPointMax_k__BackingField;
    do
    {
      breakPointPrefab = this->fields.breakPointPrefab;
      v56 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)wallData, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      wallData = (WarBoardBreakPointComponent_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                    (UILabel_o *)breakPointPrefab,
                                                    v56,
                                                    (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
      if ( !wallData )
        break;
      v57 = (UnityEngine_GameObject_o *)wallData;
      v58 = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               (UnityEngine_GameObject_o *)wallData,
                                               (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      wallData = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__get_transform(v57, 0LL);
      if ( !wallData )
        break;
      v84.fields.y = 0.0;
      v84.fields.z = 0.0;
      v84.fields.x = v53;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)wallData, v84, 0LL);
      breakPointParent = this->fields.breakPointParent;
      if ( !breakPointParent )
        break;
      if ( !v58 )
        break;
      WarBoardBreakPointComponent__Initialize(
        v58,
        breakPointParent->fields.mDepth + 2 * (~v52 + breakPointMax_k__BackingField),
        v52 + 1,
        0,
        0,
        1,
        0LL);
      v60 = *p_breakPoints;
      if ( !*p_breakPoints )
        break;
      wallData = (WarBoardBreakPointComponent_o *)sub_B0D964(v58, v60->obj.klass->_1.element_class);
      if ( !wallData )
        goto LABEL_47;
      v67 = v52;
      if ( v52 >= v60->max_length )
        goto LABEL_46;
      v68 = &v60->obj.klass + v52;
      v68[4] = (Il2CppClass *)v58;
      sub_B0D840((BattleServantConfConponent_o *)(v68 + 4), (System_Int32_array **)v58, v61, v62, v63, v64, v65, v66);
      v69 = *p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_38;
      if ( v52 >= v69->max_length )
        goto LABEL_46;
      if ( !*p_wallData )
        break;
      wallData = v69->m_Items[v52];
      if ( !wallData )
        break;
      WarBoardBreakPointComponent__SetActive(
        wallData,
        (*p_wallData)->fields._breakPoint_k__BackingField > v52++,
        0,
        0LL);
      if ( breakPointMax_k__BackingField <= v67 + 1 )
        goto LABEL_39;
      maxSpacing = v58->fields.maxSpacing;
      wallData = (WarBoardBreakPointComponent_o *)this->fields.breakPointParent;
      if ( maxSpacing >= v54 )
        maxSpacing = v54;
      v53 = v53 + maxSpacing;
    }
    while ( wallData );
    goto LABEL_38;
  }
LABEL_39:
  v71 = (UnityEngine_Transform_array *)sub_B0D8BC(UnityEngine_Transform___TypeInfo, 1LL);
  wallData = (WarBoardBreakPointComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v71 )
    goto LABEL_38;
  v78 = (System_Int32_array **)wallData;
  if ( wallData )
  {
    wallData = (WarBoardBreakPointComponent_o *)sub_B0D964(wallData, v71->obj.klass->_1.element_class);
    if ( !wallData )
    {
LABEL_47:
      v82 = sub_B0D99C(wallData);
      sub_B0D948(v82, 0LL);
    }
  }
  if ( !v71->max_length )
  {
LABEL_46:
    v81 = sub_B0D9A8(wallData);
    sub_B0D948(v81, 0LL);
  }
  v71->m_Items[0] = (UnityEngine_Transform_o *)v78;
  sub_B0D840((BattleServantConfConponent_o *)v71->m_Items, v78, v72, v73, v74, v75, v76, v77);
  WarBoardWallComponent__SetButtonTweenTarget(this, v71, v79);
  wallData = (WarBoardBreakPointComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
  v80 = this->fields.wallData;
  if ( !v80 || !wallData )
LABEL_38:
    sub_B0D97C(wallData);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wallData, !v80->fields._isDestroy_k__BackingField, 0LL);
  this->fields.isSelectable = 0;
}


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
    sub_B0D97C(this);
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
        v12 = sub_B0D9A8(this);
        sub_B0D948(v12, 0LL);
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
  __int64 v3; // x1
  struct WarBoardWallData_o *wallData; // x8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x20
  struct UIWidget_o *breakPointParent; // x8
  struct WarBoardWallData_o *v8; // x8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x20
  struct UIWidget_o *v11; // x8
  WebViewManager_o *Instance; // x0
  WarBoardWallData_o *v13; // x20
  WarBoardManager_o *v14; // x21
  int v15; // s0

  v2 = this;
  if ( (byte_421566D & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    this = (WarBoardWallComponent_o *)sub_B0D8A4(&Method_WarBoardWallComponent_OnClick__, v3);
    byte_421566D = 1;
  }
  wallData = v2->fields.wallData;
  if ( !wallData )
    goto LABEL_22;
  if ( wallData->fields._isDestroy_k__BackingField )
    return;
  this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)this, 0LL) && v2->fields.isSelectable )
  {
    v5 = Method_WarBoardWallComponent_OnClick__;
    if ( (*((_BYTE *)Method_WarBoardWallComponent_OnClick__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B0D8AC(Method_WarBoardWallComponent_OnClick__);
    v6 = (System_Reflection_MethodBase_o *)sub_B0D888(v5, v5[3]);
    this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( this )
    {
      breakPointParent = this[3].fields.breakPointParent;
      if ( breakPointParent )
      {
        OverwriteAssetSoundName__PlaySe(v6, (System_String_o *)breakPointParent->fields.leftAnchor, 0LL);
        this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        v8 = v2->fields.wallData;
        if ( v8 )
        {
          if ( this )
          {
            WarBoardManager__SelectedPieceAction(
              (WarBoardManager_o *)this,
              v8->fields._squareIndex_k__BackingField,
              0LL);
            return;
          }
        }
      }
    }
LABEL_22:
    sub_B0D97C(this);
  }
  v9 = Method_WarBoardWallComponent_OnClick__;
  if ( (*((_BYTE *)Method_WarBoardWallComponent_OnClick__ + 75) & 2) != 0 )
    v9 = (_QWORD *)sub_B0D8AC(Method_WarBoardWallComponent_OnClick__);
  v10 = (System_Reflection_MethodBase_o *)sub_B0D888(v9, v9[3]);
  this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  v11 = this[3].fields.breakPointParent;
  if ( !v11 )
    goto LABEL_22;
  OverwriteAssetSoundName__PlaySe(v10, (System_String_o *)v11->fields.bottomAnchor, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v13 = v2->fields.wallData;
  v14 = (WarBoardManager_o *)Instance;
  this = (WarBoardWallComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
  if ( !this )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
  if ( !v14 )
    goto LABEL_22;
  WarBoardManager__ShowWallSimplePopup(v14, v13, *(UnityEngine_Vector3_o *)&v15, 0LL);
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
  char *SimpleAnimationPerformance; // x0
  struct WarBoardWallData_o *wallData; // x8
  struct WarBoardStageWallEntity_o *wallEntity; // x8
  System_String_o *v14; // x21
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  const MethodInfo *v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_Int32_array **v20; // x21
  BattleServantConfConponent_o *v21; // x22
  System_Delegate_o *v22; // x23
  WarBoardTaskBase_TaskCallback_o *v23; // x24
  System_Int32_array **v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  WebViewManager_o *Instance; // x19
  char *v38; // x20
  __int64 v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x0
  __int64 v47; // x0
  int v48; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4215670 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, taskList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_B0D8A4(&WarBoardTaskBase_TaskCallback_TypeInfo, v7);
    sub_B0D8A4(&WarBoardTaskBase___TypeInfo, v8);
    sub_B0D8A4(&Method_WarBoardWallComponent__OnDead_b__22_0__, v9);
    sub_B0D8A4(&WarBoardWallComponent_TypeInfo, v10);
    byte_4215670 = 1;
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
  v14 = *(System_String_o **)(*((_QWORD *)SimpleAnimationPerformance + 23) + 8LL);
  if ( wallEntity )
    LODWORD(wallEntity) = wallEntity->fields.destroyEffectId;
  v48 = (int)wallEntity;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
  v16 = System_String__Format(v14, v15, 0LL);
  SimpleAnimationPerformance = (char *)WarBoardWallComponent__GetSimpleAnimationPerformance(this, v16, v17);
  if ( !SimpleAnimationPerformance )
    goto LABEL_20;
  v20 = (System_Int32_array **)SimpleAnimationPerformance;
  v21 = (BattleServantConfConponent_o *)(SimpleAnimationPerformance + 40);
  v22 = (System_Delegate_o *)*((_QWORD *)SimpleAnimationPerformance + 5);
  v23 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v18, v19);
  WarBoardTaskBase_TaskCallback___ctor(v23, (Il2CppObject *)this, Method_WarBoardWallComponent__OnDead_b__22_0__, 0LL);
  v24 = (System_Int32_array **)System_Delegate__Combine(v22, (System_Delegate_o *)v23, 0LL);
  if ( v24 && *v24 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v39 = sub_B0DC70(v24);
LABEL_22:
    v46 = sub_B0D99C(v39);
    sub_B0D948(v46, 0LL);
  }
  v21->klass = (BattleServantConfConponent_c *)v24;
  sub_B0D840(v21, v24, v25, v26, v27, v28, v29, v30);
  SimpleAnimationPerformance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !SimpleAnimationPerformance )
    goto LABEL_20;
  *((_QWORD *)SimpleAnimationPerformance + 128) = v20;
  sub_B0D840((BattleServantConfConponent_o *)(SimpleAnimationPerformance + 1024), v20, v31, v32, v33, v34, v35, v36);
  if ( taskList )
  {
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    return;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  SimpleAnimationPerformance = (char *)sub_B0D8BC(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !SimpleAnimationPerformance )
LABEL_20:
    sub_B0D97C(SimpleAnimationPerformance);
  v38 = SimpleAnimationPerformance;
  v39 = sub_B0D964(v20, *(_QWORD *)(*(_QWORD *)SimpleAnimationPerformance + 64LL));
  if ( !v39 )
    goto LABEL_22;
  if ( !*((_DWORD *)v38 + 6) )
  {
    v47 = sub_B0D9A8(v39);
    sub_B0D948(v47, 0LL);
  }
  *((_QWORD *)v38 + 4) = v20;
  sub_B0D840((BattleServantConfConponent_o *)(v38 + 32), v20, v40, v41, v42, v43, v44, v45);
  if ( !Instance )
    goto LABEL_20;
  WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v38, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardWallComponent__OnLongClick(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  WarBoardWallComponent_o *v2; // x19
  __int64 v3; // x1
  struct WarBoardWallData_o *wallData; // x8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x20
  struct UIWidget_o *breakPointParent; // x8
  WebViewManager_o *Instance; // x0
  WarBoardWallData_o *v9; // x20
  WarBoardManager_o *v10; // x21
  int v11; // s0

  v2 = this;
  if ( (byte_421566E & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    this = (WarBoardWallComponent_o *)sub_B0D8A4(&Method_WarBoardWallComponent_OnLongClick__, v3);
    byte_421566E = 1;
  }
  wallData = v2->fields.wallData;
  if ( !wallData )
    goto LABEL_12;
  if ( wallData->fields._isDestroy_k__BackingField )
    return;
  v5 = Method_WarBoardWallComponent_OnLongClick__;
  if ( (*((_BYTE *)Method_WarBoardWallComponent_OnLongClick__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B0D8AC(Method_WarBoardWallComponent_OnLongClick__);
  v6 = (System_Reflection_MethodBase_o *)sub_B0D888(v5, v5[3]);
  this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this
    || (breakPointParent = this[3].fields.breakPointParent) == 0LL
    || (OverwriteAssetSoundName__PlaySe(v6, (System_String_o *)breakPointParent->fields.bottomAnchor, 0LL),
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        v9 = v2->fields.wallData,
        v10 = (WarBoardManager_o *)Instance,
        (this = (WarBoardWallComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL), !v10) )
  {
LABEL_12:
    sub_B0D97C(this);
  }
  WarBoardManager__ShowWallSimplePopup(v10, v9, *(UnityEngine_Vector3_o *)&v11, 0LL);
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
  WarBoardManager_o *gameObject; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x23
  const MethodInfo *v17; // x5

  if ( (byte_4215672 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, popText);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_B0D8A4(&StringLiteral_18237/*"ef_dm_base"*/, v12);
    byte_4215672 = 1;
  }
  gameObject = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
  {
    v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                    v14,
                                                                                                    v15);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v16,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    if ( !System_String__IsNullOrEmpty(popText, 0LL) )
      WarBoardWallComponent__CreateEffectText(
        this,
        (System_String_o *)StringLiteral_18237/*"ef_dm_base"*/,
        popText,
        popTextColor,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)v16,
        v17);
    if ( taskList )
    {
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v16,
        (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      return;
    }
    gameObject = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( gameObject )
    {
      WarBoardManager__AddTask_17750248(gameObject, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v16, 0LL);
      return;
    }
LABEL_12:
    sub_B0D97C(gameObject);
  }
}


void __fastcall WarBoardWallComponent__Selectable(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  struct WarBoardWallData_o *wallData; // x8

  wallData = this->fields.wallData;
  if ( !wallData )
    sub_B0D97C(this);
  if ( !wallData->fields._isDestroy_k__BackingField )
    this->fields.isSelectable = 1;
}


void __fastcall WarBoardWallComponent__SetButtonTweenTarget(
        WarBoardWallComponent_o *this,
        UnityEngine_Transform_array *parents,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  UnityEngine_Component_o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  signed int max_length; // w8
  unsigned int v13; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v15; // x22
  unsigned __int64 v16; // x19
  UnityEngine_Object_o *v17; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  struct UICommonButton_o *button; // x19
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x0

  if ( (byte_421566A & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67969408, parents);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Contains__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_421566A = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  parents,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= max_length )
          goto LABEL_25;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)parents->m_Items[v13];
        if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
          goto LABEL_26;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                               ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                                                                               1,
                                                                                               (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67969408);
        if ( ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
        {
          klass = ComponentsInChildren_WarBoardControlPlayTalkUiComponent[1].klass;
          v15 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_21:
        max_length = parents->max_length;
        if ( (int)++v13 >= max_length )
          goto LABEL_22;
      }
      v16 = 0LL;
      while ( v16 < (unsigned int)klass )
      {
        v17 = (UnityEngine_Object_o *)*((_QWORD *)&v15[1].monitor + v16);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                                                               v17,
                                                                                               0LL,
                                                                                               0LL);
        if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0 )
        {
          if ( !v17 )
            goto LABEL_26;
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                                 (UnityEngine_Component_o *)v17,
                                                                                                 0LL);
          if ( !v10 )
            goto LABEL_26;
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                                                                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v10,
                                                                                                 (WarBoardManager_TaskList_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                                                                                 (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) == 0 )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v17, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v10,
              (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          }
        }
        LODWORD(klass) = v15[1].klass;
        if ( (__int64)++v16 >= (int)klass )
          goto LABEL_21;
      }
LABEL_25:
      v26 = sub_B0D9A8(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
      sub_B0D948(v26, 0LL);
    }
  }
LABEL_22:
  if ( !v10
    || (button = this->fields.button,
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                                                                               (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_26:
    sub_B0D97C(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  sub_B0D840(
    (BattleServantConfConponent_o *)&button->fields.tweenTargets,
    (System_Int32_array **)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
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

  if ( (byte_421566C & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, enable);
    byte_421566C = 1;
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
      sub_B0D97C(0LL);
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

  if ( (byte_421566B & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, enable);
    byte_421566B = 1;
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
      sub_B0D97C(0LL);
    UICommonButton__SetButtonEnableAndKeepState(v6, enable, 0, 0LL);
  }
}


void __fastcall WarBoardWallComponent__Unselectable(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  struct WarBoardWallData_o *wallData; // x8

  wallData = this->fields.wallData;
  if ( !wallData )
    sub_B0D97C(this);
  if ( !wallData->fields._isDestroy_k__BackingField )
    this->fields.isSelectable = 0;
}


void __fastcall WarBoardWallComponent___OnDead_b__22_0(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}