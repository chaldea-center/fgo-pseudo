void __fastcall WarBoardWallComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t v12; // x1
  struct WarBoardWallComponent_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B13C5A & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardWallComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_20821/*"img_wall_{0}"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_3362/*"BreakWall_{0:00}"*/, v10, v11);
    byte_4B13C5A = 1;
  }
  WarBoardWallComponent_TypeInfo->static_fields->WALL_ICON_NAME = (struct System_String_o *)StringLiteral_20821/*"img_wall_{0}"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardWallComponent_TypeInfo->static_fields,
    StringLiteral_20821/*"img_wall_{0}"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = StringLiteral_3362/*"BreakWall_{0:00}"*/;
  static_fields = WarBoardWallComponent_TypeInfo->static_fields;
  static_fields->BREAK_ANIMATION_NAME = (struct System_String_o *)StringLiteral_3362/*"BreakWall_{0:00}"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->BREAK_ANIMATION_NAME, v12, v14, v15, v16, v17, v18, v19);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_object__o *v27; // x20
  Il2CppObject *Instance; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  Il2CppObject *CommonEffectAsset_object; // x24
  UnityEngine_Transform_o *transform; // x0
  __int64 v33; // x1
  UnityEngine_Object_o *effectDisplayTransform; // x23
  UnityEngine_Object_o *v35; // x25
  __int64 v36; // x1
  Il2CppObject *v37; // x24
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  WarBoardPopTextEffectPerformance_o *v41; // x0
  WarBoardPopTextEffectPerformance_o *v42; // x23
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  System_Nullable_Vector3__o v53; // 0:x3.16
  System_Nullable_Vector3__o v54; // 0:x5.16

  if ( (byte_4B13C58 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, effectName, popText);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v21, v22);
    sub_1BCA7E0(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v23, v24);
    sub_1BCA7E0(&WarBoardPopTextEffectPerformance_TypeInfo, v25, v26);
    byte_4B13C58 = 1;
  }
  v27 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       effectName,
                                                       popText,
                                                       *(_QWORD *)&popTextColor);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               effectName,
                               (const MethodInfo_2FF0B1C *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    effectDisplayTransform = (UnityEngine_Object_o *)this->fields.effectDisplayTransform;
    v35 = (UnityEngine_Object_o *)transform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
    if ( !UnityEngine_Object__op_Inequality(effectDisplayTransform, 0LL, 0LL) )
      effectDisplayTransform = v35;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
    v37 = UnityEngine_Object__Instantiate_object__49903816(
            CommonEffectAsset_object,
            (UnityEngine_Transform_o *)effectDisplayTransform,
            (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
    v41 = (WarBoardPopTextEffectPerformance_o *)sub_1BCAA2C(WarBoardPopTextEffectPerformance_TypeInfo, v38, v39, v40);
    *(_QWORD *)&v53.fields.hasValue = 0LL;
    *(_QWORD *)&v53.fields.value.fields.y = 0LL;
    *(_QWORD *)&v54.fields.hasValue = 0LL;
    *(_QWORD *)&v54.fields.value.fields.y = 0LL;
    v42 = v41;
    WarBoardPopTextEffectPerformance___ctor(
      v41,
      0LL,
      (UnityEngine_GameObject_o *)v37,
      v53,
      v54,
      (System_Nullable_Vector3__o)0,
      0,
      1,
      0LL);
    if ( v42 )
    {
      WarBoardPopTextEffectPerformance__SetPopText(v42, popText, popTextColor, 0LL);
      if ( v27 )
      {
        items = v27->fields._items;
        v50 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
        ++v27->fields._version;
        if ( items )
        {
          size = v27->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v27,
              (Il2CppObject *)v42,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
            if ( taskList )
              goto LABEL_18;
          }
          else
          {
            v52 = &items->obj.klass + size;
            v27->fields._size = size + 1;
            v52[4] = (Il2CppClass *)v42;
            sub_1BCA784((PartyOrganizationUtility_o *)(v52 + 4), (int64_t)v42, v43, v44, v45, v46, v47, v48);
            if ( taskList )
            {
LABEL_18:
              System_Collections_Generic_List_object___AddRange(
                (System_Collections_Generic_List_object__o *)taskList,
                (System_Collections_Generic_IEnumerable_T__o *)v27,
                (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
              return;
            }
          }
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( Instance )
          {
            WarBoardManager__AddTask_36181556(
              (WarBoardManager_o *)Instance,
              0,
              (System_Collections_Generic_List_WarBoardTaskBase__o *)v27,
              0LL);
            return;
          }
        }
      }
    }
LABEL_22:
    sub_1BCAA3C(Instance, v29);
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
    sub_1BCAA3C(iconSp, method);
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

  if ( (byte_4B13C56 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardSimpleAnimationPerformance_TypeInfo, animationName, method);
    byte_4B13C56 = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  v7 = (WarBoardSimpleAnimationPerformance_o *)sub_1BCAA2C(
                                                 WarBoardSimpleAnimationPerformance_TypeInfo,
                                                 animationName,
                                                 method,
                                                 v3);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  struct WarBoardWallData_o **p_wallData; // x20
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  char *wallData; // x0
  Il2CppObject *Component_object; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  UISprite_o *iconSp; // x21
  System_String_o *WALL_ICON_NAME; // x22
  Il2CppObject *v45; // x0
  UnityEngine_Transform_o *transform; // x21
  struct WarBoardWallData_o *v47; // x8
  int v48; // s0
  __int64 breakPointMax_k__BackingField; // x21
  struct WarBoardBreakPointComponent_array *v52; // x0
  struct WarBoardBreakPointComponent_array **p_breakPoints; // x22
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  unsigned __int64 v60; // x26
  float v61; // s8
  __int64 v62; // x23
  int v63; // w27
  float v64; // s9
  __int64 v65; // x28
  Il2CppObject *breakPointPrefab; // x24
  __int64 v67; // x1
  UnityEngine_Transform_o *v68; // x25
  UnityEngine_GameObject_o *v69; // x25
  WarBoardBreakPointComponent_o *v70; // x24
  struct UIWidget_o *breakPointParent; // x8
  unsigned int *v72; // x25
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  struct WarBoardBreakPointComponent_array *v79; // x8
  float maxSpacing; // s0
  UnityEngine_Transform_array *v81; // x20
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  int64_t v88; // x21
  const MethodInfo *v89; // x2
  struct WarBoardWallData_o *v90; // x8
  __int64 v91; // x0
  int32_t wallImageId; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B13C50 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, data, wallIconAtlas);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___, v11, v12);
    sub_1BCA7E0(&int_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v19, v20);
    sub_1BCA7E0(&UnityEngine_Transform___TypeInfo, v21, v22);
    sub_1BCA7E0(&WarBoardBreakPointComponent___TypeInfo, v23, v24);
    sub_1BCA7E0(&WarBoardWallComponent_TypeInfo, v25, v26);
    byte_4B13C50 = 1;
  }
  this->fields.wallData = data;
  p_wallData = &this->fields.wallData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.wallData,
    (int64_t)data,
    (int64_t)wallIconAtlas,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  wallData = (char *)this->fields.wallData;
  if ( !wallData )
    goto LABEL_34;
  *((_QWORD *)wallData + 7) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(wallData + 56), (int64_t)this, v29, v30, v31, v32, v33, v34);
  wallData = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !wallData )
    goto LABEL_34;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)wallData,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.simpleAnimation,
    (int64_t)Component_object,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  wallData = (char *)this->fields.iconSp;
  if ( !wallData )
    goto LABEL_34;
  UISprite__set_atlas((UISprite_o *)wallData, wallIconAtlas, 0LL);
  iconSp = this->fields.iconSp;
  if ( !WarBoardWallComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardWallComponent_TypeInfo, v28);
  wallData = (char *)*p_wallData;
  if ( !*p_wallData )
    goto LABEL_34;
  WALL_ICON_NAME = WarBoardWallComponent_TypeInfo->static_fields->WALL_ICON_NAME;
  wallImageId = WarBoardWallData__get_wallImageId((WarBoardWallData_o *)wallData, 0LL);
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &wallImageId);
  wallData = (char *)System_String__Format(WALL_ICON_NAME, v45, 0LL);
  if ( !iconSp )
    goto LABEL_34;
  UISprite__set_spriteName(iconSp, (System_String_o *)wallData, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  wallData = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v47 = this->fields.wallData;
  if ( !v47 )
    goto LABEL_34;
  if ( !wallData )
    goto LABEL_34;
  *(UnityEngine_Vector3_o *)&v48 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)wallData,
                                     v47->fields._squareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_34;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v48, 0LL);
  if ( !*p_wallData )
    goto LABEL_34;
  breakPointMax_k__BackingField = (unsigned int)(*p_wallData)->fields._breakPointMax_k__BackingField;
  v52 = (struct WarBoardBreakPointComponent_array *)sub_1BCA888(
                                                      WarBoardBreakPointComponent___TypeInfo,
                                                      (unsigned int)breakPointMax_k__BackingField);
  this->fields.breakPoints = v52;
  p_breakPoints = &this->fields.breakPoints;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.breakPoints, (int64_t)v52, v54, v55, v56, v57, v58, v59);
  wallData = (char *)this->fields.breakPointParent;
  if ( !wallData )
    goto LABEL_34;
  if ( (int)breakPointMax_k__BackingField >= 1 )
  {
    v60 = 0LL;
    v61 = 0.0;
    v62 = 1LL;
    v63 = 2 * breakPointMax_k__BackingField - 2;
    v64 = (float)*((int *)wallData + 42) / (float)(int)breakPointMax_k__BackingField;
    v65 = 8LL;
    do
    {
      breakPointPrefab = (Il2CppObject *)this->fields.breakPointPrefab;
      v68 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)wallData, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v67);
      wallData = (char *)UnityEngine_Object__Instantiate_object__49903816(
                           breakPointPrefab,
                           v68,
                           (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
      if ( !wallData )
        break;
      v69 = (UnityEngine_GameObject_o *)wallData;
      v70 = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)wallData,
                                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      wallData = (char *)UnityEngine_GameObject__get_transform(v69, 0LL);
      if ( !wallData )
        break;
      v93.fields.y = 0.0;
      v93.fields.z = 0.0;
      v93.fields.x = v61;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)wallData, v93, 0LL);
      breakPointParent = this->fields.breakPointParent;
      if ( !breakPointParent )
        break;
      if ( !v70 )
        break;
      WarBoardBreakPointComponent__Initialize(v70, v63 + breakPointParent->fields.mDepth, v62, 0, 0, 1, 0LL);
      v72 = (unsigned int *)*p_breakPoints;
      if ( !*p_breakPoints )
        break;
      wallData = (char *)sub_1BCA91C(v70, *(_QWORD *)(*(_QWORD *)v72 + 64LL));
      if ( !wallData )
        goto LABEL_43;
      if ( v60 >= v72[6] )
        goto LABEL_42;
      *(_QWORD *)&v72[v65] = v70;
      sub_1BCA784((PartyOrganizationUtility_o *)&v72[v65], (int64_t)v70, v73, v74, v75, v76, v77, v78);
      v79 = *p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_34;
      if ( v60 >= v79->max_length )
        goto LABEL_42;
      if ( !*p_wallData )
        break;
      wallData = *(char **)((char *)&v79->obj.klass + v65 * 4);
      if ( !wallData )
        break;
      WarBoardBreakPointComponent__SetActive(
        (WarBoardBreakPointComponent_o *)wallData,
        (__int64)v60 < (*p_wallData)->fields._breakPoint_k__BackingField,
        0,
        0LL);
      if ( breakPointMax_k__BackingField == v62 )
        goto LABEL_35;
      maxSpacing = v70->fields.maxSpacing;
      wallData = (char *)this->fields.breakPointParent;
      ++v60;
      v63 -= 2;
      if ( maxSpacing >= v64 )
        maxSpacing = v64;
      ++v62;
      v61 = v61 + maxSpacing;
      v65 += 2LL;
    }
    while ( wallData );
    goto LABEL_34;
  }
LABEL_35:
  v81 = (UnityEngine_Transform_array *)sub_1BCA888(UnityEngine_Transform___TypeInfo, 1LL);
  wallData = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v81 )
    goto LABEL_34;
  v88 = (int64_t)wallData;
  if ( wallData )
  {
    wallData = (char *)sub_1BCA91C(wallData, v81->obj.klass->_1.element_class);
    if ( !wallData )
    {
LABEL_43:
      v91 = sub_1BCAA60();
      sub_1BCA908(v91, 0LL);
    }
  }
  if ( !v81->max_length )
LABEL_42:
    sub_1BCAA44(wallData, v28);
  v81->m_Items[0] = (UnityEngine_Transform_o *)v88;
  sub_1BCA784((PartyOrganizationUtility_o *)v81->m_Items, v88, v82, v83, v84, v85, v86, v87);
  WarBoardWallComponent__SetButtonTweenTarget(this, v81, v89);
  wallData = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v90 = this->fields.wallData;
  if ( !v90 || !wallData )
LABEL_34:
    sub_1BCAA3C(wallData, v28);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wallData, !v90->fields._isDestroy_k__BackingField, 0LL);
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

  wallData = this->fields.wallData;
  if ( !wallData )
LABEL_13:
    sub_1BCAA3C(this, *(_QWORD *)&oldBreakPoint);
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
        sub_1BCAA44(this, *(_QWORD *)&oldBreakPoint);
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
  __int64 v2; // x2
  WarBoardWallComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct WarBoardWallData_o *wallData; // x8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  struct WarBoardWallData_o *v10; // x8
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x20
  struct System_Threading_CancellationTokenSource_o *v13; // x8
  Il2CppObject *Instance; // x0
  WarBoardWallData_o *v15; // x20
  WarBoardManager_o *v16; // x21
  int v17; // s0

  v3 = this;
  if ( (byte_4B13C54 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    this = (WarBoardWallComponent_o *)sub_1BCA7E0(&Method_WarBoardWallComponent_OnClick__, v4, v5);
    byte_4B13C54 = 1;
  }
  wallData = v3->fields.wallData;
  if ( !wallData )
    goto LABEL_22;
  if ( wallData->fields._isDestroy_k__BackingField )
    return;
  this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)this, 0LL) && v3->fields.isSelectable )
  {
    v7 = Method_WarBoardWallComponent_OnClick__;
    if ( (*((_BYTE *)Method_WarBoardWallComponent_OnClick__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BCA7F8(Method_WarBoardWallComponent_OnClick__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
    this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( this )
    {
      m_CancellationTokenSource = this[3].fields.m_CancellationTokenSource;
      if ( m_CancellationTokenSource )
      {
        OverwriteAssetSoundName__PlaySe(
          v8,
          (System_String_o *)m_CancellationTokenSource->fields._registeredCallbacksLists,
          0LL);
        this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        v10 = v3->fields.wallData;
        if ( v10 )
        {
          if ( this )
          {
            WarBoardManager__SelectedPieceAction(
              (WarBoardManager_o *)this,
              v10->fields._squareIndex_k__BackingField,
              0LL);
            return;
          }
        }
      }
    }
LABEL_22:
    sub_1BCAA3C(this, method);
  }
  v11 = Method_WarBoardWallComponent_OnClick__;
  if ( (*((_BYTE *)Method_WarBoardWallComponent_OnClick__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1BCA7F8(Method_WarBoardWallComponent_OnClick__);
  v12 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v11, v11[4]);
  this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  v13 = this[3].fields.m_CancellationTokenSource;
  if ( !v13 )
    goto LABEL_22;
  OverwriteAssetSoundName__PlaySe(v12, *(System_String_o **)&v13->fields._disposed, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v15 = v3->fields.wallData;
  v16 = (WarBoardManager_o *)Instance;
  this = (WarBoardWallComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v3, 0LL);
  if ( !this )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
  if ( !v16 )
    goto LABEL_22;
  WarBoardManager__ShowWallSimplePopup(v16, v15, *(UnityEngine_Vector3_o *)&v17, 0LL);
}


void __fastcall WarBoardWallComponent__OnDead(
        WarBoardWallComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  char *wallData; // x0
  System_String_o *BREAK_ANIMATION_NAME; // x20
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  const MethodInfo *v21; // x2
  __int64 v22; // x2
  __int64 v23; // x3
  Il2CppObject *v24; // x20
  PartyOrganizationUtility_o *v25; // x22
  System_Delegate_o *v26; // x23
  WarBoardTaskBase_TaskCallback_o *v27; // x24
  System_Delegate_o *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x8
  WarBoardTaskBase_TaskCallback_c *v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  Il2CppObject *Instance; // x19
  char *v54; // x21
  __int64 v55; // x0
  __int64 v56; // x1
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  __int64 v63; // x0
  int32_t wallDestroyEffectId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B13C57 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, taskList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&WarBoardTaskBase_TaskCallback_TypeInfo, v9, v10);
    sub_1BCA7E0(&WarBoardTaskBase___TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_WarBoardWallComponent__OnDead_b__22_0__, v13, v14);
    sub_1BCA7E0(&WarBoardWallComponent_TypeInfo, v15, v16);
    byte_4B13C57 = 1;
  }
  if ( !WarBoardWallComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardWallComponent_TypeInfo, taskList);
  wallData = (char *)this->fields.wallData;
  if ( !wallData )
    goto LABEL_24;
  BREAK_ANIMATION_NAME = WarBoardWallComponent_TypeInfo->static_fields->BREAK_ANIMATION_NAME;
  wallDestroyEffectId = WarBoardWallData__get_wallDestroyEffectId((WarBoardWallData_o *)wallData, 0LL);
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &wallDestroyEffectId);
  v20 = System_String__Format(BREAK_ANIMATION_NAME, v19, 0LL);
  wallData = (char *)WarBoardWallComponent__GetSimpleAnimationPerformance(this, v20, v21);
  if ( !wallData )
    goto LABEL_24;
  v24 = (Il2CppObject *)wallData;
  v25 = (PartyOrganizationUtility_o *)(wallData + 40);
  v26 = (System_Delegate_o *)*((_QWORD *)wallData + 5);
  v27 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, taskList, v22, v23);
  WarBoardTaskBase_TaskCallback___ctor(v27, (Il2CppObject *)this, Method_WarBoardWallComponent__OnDead_b__22_0__, 0LL);
  v28 = System_Delegate__Combine(v26, (System_Delegate_o *)v27, 0LL);
  v35 = (int64_t)v28;
  if ( !v28 )
    goto LABEL_11;
  v36 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v28->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (v25->klass = (PartyOrganizationUtility_c *)v28, (WarBoardTaskBase_TaskCallback_c *)v28->klass != v36) )
  {
    sub_1BCACFC(v28);
LABEL_11:
    v25->klass = (PartyOrganizationUtility_c *)v35;
  }
  sub_1BCA784(v25, v35, v29, v30, v31, v32, v33, v34);
  wallData = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !wallData )
    goto LABEL_24;
  *((_QWORD *)wallData + 127) = v24;
  sub_1BCA784((PartyOrganizationUtility_o *)(wallData + 1016), (int64_t)v24, v37, v38, v39, v40, v41, v42);
  if ( !taskList )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    wallData = (char *)sub_1BCA888(WarBoardTaskBase___TypeInfo, 1LL);
    if ( wallData )
    {
      v54 = wallData;
      v55 = sub_1BCA91C(v24, *(_QWORD *)(*(_QWORD *)wallData + 64LL));
      if ( !v55 )
      {
        v63 = sub_1BCAA60();
        sub_1BCA908(v63, 0LL);
      }
      if ( !*((_DWORD *)v54 + 6) )
        sub_1BCAA44(v55, v56);
      *((_QWORD *)v54 + 4) = v24;
      sub_1BCA784((PartyOrganizationUtility_o *)(v54 + 32), (int64_t)v24, v57, v58, v59, v60, v61, v62);
      if ( Instance )
      {
        WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v54, 0LL);
        return;
      }
    }
LABEL_24:
    sub_1BCAA3C(wallData, taskList);
  }
  items = taskList->fields._items;
  v50 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++taskList->fields._version;
  if ( !items )
    goto LABEL_24;
  size = taskList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)taskList,
      v24,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
  }
  else
  {
    v52 = &items->obj.klass + size;
    taskList->fields._size = size + 1;
    v52[4] = (Il2CppClass *)v24;
    sub_1BCA784((PartyOrganizationUtility_o *)(v52 + 4), (int64_t)v24, v43, v44, v45, v46, v47, v48);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardWallComponent__OnLongClick(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_c *klass; // x8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  Il2CppObject *Instance; // x0
  WarBoardWallData_o *v11; // x20
  WarBoardManager_o *v12; // x21
  int v13; // s0

  v3 = (UnityEngine_Component_o *)this;
  if ( (byte_4B13C55 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    this = (WarBoardWallComponent_o *)sub_1BCA7E0(&Method_WarBoardWallComponent_OnLongClick__, v4, v5);
    byte_4B13C55 = 1;
  }
  klass = v3[3].klass;
  if ( !klass )
    goto LABEL_12;
  if ( LOBYTE(klass->_1.byval_arg.data) )
    return;
  v7 = Method_WarBoardWallComponent_OnLongClick__;
  if ( (*((_BYTE *)Method_WarBoardWallComponent_OnLongClick__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BCA7F8(Method_WarBoardWallComponent_OnLongClick__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
  this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this
    || (m_CancellationTokenSource = this[3].fields.m_CancellationTokenSource) == 0LL
    || (OverwriteAssetSoundName__PlaySe(v8, *(System_String_o **)&m_CancellationTokenSource->fields._disposed, 0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        v11 = (WarBoardWallData_o *)v3[3].klass,
        v12 = (WarBoardManager_o *)Instance,
        (this = (WarBoardWallComponent_o *)UnityEngine_Component__get_transform(v3, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL), !v12) )
  {
LABEL_12:
    sub_1BCAA3C(this, method);
  }
  WarBoardManager__ShowWallSimplePopup(v12, v11, *(UnityEngine_Vector3_o *)&v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardWallComponent__OnShowDamagePopup(
        WarBoardWallComponent_o *this,
        System_String_o *popText,
        int32_t popTextColor,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  WarBoardManager_o *gameObject; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Collections_Generic_List_object__o *v22; // x23
  const MethodInfo *v23; // x5

  if ( (byte_4B13C59 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, popText, *(_QWORD *)&popTextColor);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&StringLiteral_19021/*"ef_dm_base"*/, v15, v16);
    byte_4B13C59 = 1;
  }
  gameObject = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
  {
    v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                         v19,
                                                         v20,
                                                         v21);
    System_Collections_Generic_List_object____ctor(
      v22,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    if ( !System_String__IsNullOrEmpty(popText, 0LL) )
      WarBoardWallComponent__CreateEffectText(
        this,
        (System_String_o *)StringLiteral_19021/*"ef_dm_base"*/,
        popText,
        popTextColor,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)v22,
        v23);
    if ( taskList )
    {
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v22,
        (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      return;
    }
    gameObject = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( gameObject )
    {
      WarBoardManager__AddTask_36181556(gameObject, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v22, 0LL);
      return;
    }
LABEL_12:
    sub_1BCAA3C(gameObject, v18);
  }
}


void __fastcall WarBoardWallComponent__Selectable(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  struct WarBoardWallData_o *wallData; // x8

  wallData = this->fields.wallData;
  if ( !wallData )
    sub_1BCAA3C(this, method);
  if ( !wallData->fields._isDestroy_k__BackingField )
    this->fields.isSelectable = 1;
}


void __fastcall WarBoardWallComponent__SetButtonTweenTarget(
        WarBoardWallComponent_o *this,
        UnityEngine_Transform_array *parents,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x21
  int64_t ComponentsInChildren_object; // x0
  __int64 v19; // x1
  signed int max_length; // w8
  unsigned int v21; // w24
  UnityEngine_Component_c *v22; // x8
  int64_t v23; // x22
  unsigned __int64 v24; // x29
  UnityEngine_Object_o *v25; // x23
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  int64_t v35; // x1
  Il2CppClass **v36; // x0
  struct UICommonButton_o *button; // x19
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7

  if ( (byte_4B13C51 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76859184, parents, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Contains__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B13C51 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       parents,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v21 = 0;
      while ( 1 )
      {
        if ( v21 >= max_length )
          goto LABEL_28;
        ComponentsInChildren_object = (int64_t)parents->m_Items[v21];
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        ComponentsInChildren_object = (int64_t)UnityEngine_Component__GetComponentsInChildren_object_(
                                                 (UnityEngine_Component_o *)ComponentsInChildren_object,
                                                 1,
                                                 (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76859184);
        if ( ComponentsInChildren_object )
        {
          v22 = *(UnityEngine_Component_c **)(ComponentsInChildren_object + 24);
          v23 = ComponentsInChildren_object;
          if ( (int)v22 >= 1 )
            break;
        }
LABEL_23:
        max_length = parents->max_length;
        if ( (int)++v21 >= max_length )
          goto LABEL_24;
      }
      v24 = 0LL;
      while ( v24 < (unsigned int)v22 )
      {
        v25 = *(UnityEngine_Object_o **)(v23 + 32 + 8 * v24);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
        ComponentsInChildren_object = UnityEngine_Object__op_Inequality(v25, 0LL, 0LL);
        if ( (ComponentsInChildren_object & 1) != 0 )
        {
          if ( !v25 )
            goto LABEL_27;
          ComponentsInChildren_object = (int64_t)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v25,
                                                   0LL);
          if ( !v17 )
            goto LABEL_27;
          ComponentsInChildren_object = System_Collections_Generic_List_object___Contains(
                                          v17,
                                          (Il2CppObject *)ComponentsInChildren_object,
                                          (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( (ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (int64_t)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v25,
                                                     0LL);
            items = v17->fields._items;
            v33 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v17->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v17->fields._size;
            v35 = ComponentsInChildren_object;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v17,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
            }
            else
            {
              v36 = &items->obj.klass + size;
              v17->fields._size = size + 1;
              v36[4] = (Il2CppClass *)v35;
              sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 4), v35, v26, v27, v28, v29, v30, v31);
            }
          }
        }
        LODWORD(v22) = *(_DWORD *)(v23 + 24);
        if ( (__int64)++v24 >= (int)v22 )
          goto LABEL_23;
      }
LABEL_28:
      sub_1BCAA44(ComponentsInChildren_object, v19);
    }
  }
LABEL_24:
  if ( !v17
    || (button = this->fields.button,
        ComponentsInChildren_object = (int64_t)System_Collections_Generic_List_object___ToArray(
                                                 v17,
                                                 (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1BCAA3C(ComponentsInChildren_object, v19);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&button->fields.tweenTargets,
    ComponentsInChildren_object,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardWallComponent__SetColliderEnable(
        WarBoardWallComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0
  bool v8; // w1

  if ( (byte_4B13C53 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, enable, method);
    byte_4B13C53 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enable);
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    if ( enable )
    {
      v8 = 1;
LABEL_11:
      UICommonButton__SetButtonEnableAndKeepState(v7, v8, 0, 0LL);
      return;
    }
    if ( v7->fields.mState )
    {
      v8 = 0;
      goto LABEL_11;
    }
    UICommonButton__SetColliderEnable(v7, 0, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardWallComponent__SetTouchEnable(
        WarBoardWallComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  UICommonButton_o *v7; // x0

  if ( (byte_4B13C52 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, enable, method);
    byte_4B13C52 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enable);
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    UICommonButton__SetButtonEnableAndKeepState(v7, enable, 0, 0LL);
  }
}


void __fastcall WarBoardWallComponent__Unselectable(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  struct WarBoardWallData_o *wallData; // x8

  wallData = this->fields.wallData;
  if ( !wallData )
    sub_1BCAA3C(this, method);
  if ( !wallData->fields._isDestroy_k__BackingField )
    this->fields.isSelectable = 0;
}


void __fastcall WarBoardWallComponent___OnDead_b__22_0(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}