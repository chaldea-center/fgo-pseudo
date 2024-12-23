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
  __int64 v9; // x1
  int64_t v10; // x1
  struct WarBoardWallComponent_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B645EE & 1) == 0 )
  {
    sub_1BE4ACC(&WarBoardWallComponent_TypeInfo, v1);
    sub_1BE4ACC(&StringLiteral_20891/*"img_wall_{0}"*/, v8);
    sub_1BE4ACC(&StringLiteral_3370/*"BreakWall_{0:00}"*/, v9);
    byte_4B645EE = 1;
  }
  WarBoardWallComponent_TypeInfo->static_fields->WALL_ICON_NAME = (struct System_String_o *)StringLiteral_20891/*"img_wall_{0}"*/;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)WarBoardWallComponent_TypeInfo->static_fields,
    StringLiteral_20891/*"img_wall_{0}"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = StringLiteral_3370/*"BreakWall_{0:00}"*/;
  static_fields = WarBoardWallComponent_TypeInfo->static_fields;
  static_fields->BREAK_ANIMATION_NAME = (struct System_String_o *)StringLiteral_3370/*"BreakWall_{0:00}"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->BREAK_ANIMATION_NAME, v10, v12, v13, v14, v15, v16, v17);
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
  System_Collections_Generic_List_object__o *v19; // x20
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  Il2CppObject *CommonEffectAsset_object; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *effectDisplayTransform; // x23
  UnityEngine_Object_o *v25; // x25
  Il2CppObject *v26; // x24
  WarBoardPopTextEffectPerformance_o *v27; // x0
  WarBoardPopTextEffectPerformance_o *v28; // x23
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Nullable_Vector3__o v39; // 0:x3.16
  System_Nullable_Vector3__o v40; // 0:x5.16

  if ( (byte_4B645EC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, effectName);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v13);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject____77247160, v14);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v15);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v16);
    sub_1BE4ACC(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v17);
    sub_1BE4ACC(&WarBoardPopTextEffectPerformance_TypeInfo, v18);
    byte_4B645EC = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               effectName,
                               (const MethodInfo_3037F14 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    effectDisplayTransform = (UnityEngine_Object_o *)this->fields.effectDisplayTransform;
    v25 = (UnityEngine_Object_o *)transform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(effectDisplayTransform, 0LL, 0LL) )
      effectDisplayTransform = v25;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v26 = UnityEngine_Object__Instantiate_object__50195216(
            CommonEffectAsset_object,
            (UnityEngine_Transform_o *)effectDisplayTransform,
            (const MethodInfo_2FDEB10 *)Method_UnityEngine_Object_Instantiate_GameObject____77247160);
    v27 = (WarBoardPopTextEffectPerformance_o *)sub_1BE4D18(WarBoardPopTextEffectPerformance_TypeInfo);
    *(_QWORD *)&v39.fields.hasValue = 0LL;
    *(_QWORD *)&v39.fields.value.fields.y = 0LL;
    *(_QWORD *)&v40.fields.hasValue = 0LL;
    *(_QWORD *)&v40.fields.value.fields.y = 0LL;
    v28 = v27;
    WarBoardPopTextEffectPerformance___ctor(
      v27,
      0LL,
      (UnityEngine_GameObject_o *)v26,
      v39,
      v40,
      (System_Nullable_Vector3__o)0,
      0,
      1,
      0LL);
    if ( v28 )
    {
      WarBoardPopTextEffectPerformance__SetPopText(v28, popText, popTextColor, 0LL);
      if ( v19 )
      {
        items = v19->fields._items;
        v36 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
        ++v19->fields._version;
        if ( items )
        {
          size = v19->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v19,
              (Il2CppObject *)v28,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
            if ( taskList )
              goto LABEL_18;
          }
          else
          {
            v38 = &items->obj.klass + size;
            v19->fields._size = size + 1;
            v38[4] = (Il2CppClass *)v28;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v38 + 4), (int64_t)v28, v29, v30, v31, v32, v33, v34);
            if ( taskList )
            {
LABEL_18:
              System_Collections_Generic_List_object___AddRange(
                (System_Collections_Generic_List_object__o *)taskList,
                (System_Collections_Generic_IEnumerable_T__o *)v19,
                (const MethodInfo_35EC430 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
              return;
            }
          }
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( Instance )
          {
            WarBoardManager__AddTask_36356260(
              (WarBoardManager_o *)Instance,
              0,
              (System_Collections_Generic_List_WarBoardTaskBase__o *)v19,
              0LL);
            return;
          }
        }
      }
    }
LABEL_22:
    sub_1BE4D28(Instance, v21);
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
    sub_1BE4D28(iconSp, method);
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

  if ( (byte_4B645EA & 1) == 0 )
  {
    sub_1BE4ACC(&WarBoardSimpleAnimationPerformance_TypeInfo, animationName);
    byte_4B645EA = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  v6 = (WarBoardSimpleAnimationPerformance_o *)sub_1BE4D18(WarBoardSimpleAnimationPerformance_TypeInfo);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  struct WarBoardWallData_o **p_wallData; // x20
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  char *wallData; // x0
  Il2CppObject *Component_object; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  UISprite_o *iconSp; // x21
  System_String_o *WALL_ICON_NAME; // x22
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  Il2CppObject *v40; // x0
  UnityEngine_Transform_o *transform; // x21
  struct WarBoardWallData_o *v42; // x8
  int v43; // s0
  __int64 breakPointMax_k__BackingField; // x21
  struct WarBoardBreakPointComponent_array *v47; // x0
  struct WarBoardBreakPointComponent_array **p_breakPoints; // x22
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  unsigned __int64 v55; // x26
  float v56; // s8
  __int64 v57; // x23
  int v58; // w27
  float v59; // s9
  __int64 v60; // x28
  Il2CppObject *breakPointPrefab; // x24
  UnityEngine_Transform_o *v62; // x25
  UnityEngine_GameObject_o *v63; // x25
  WarBoardBreakPointComponent_o *v64; // x24
  struct UIWidget_o *breakPointParent; // x8
  unsigned int *v66; // x25
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  struct WarBoardBreakPointComponent_array *v73; // x8
  float maxSpacing; // s0
  UnityEngine_Transform_array *v75; // x20
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  int64_t v82; // x21
  const MethodInfo *v83; // x2
  struct WarBoardWallData_o *v84; // x8
  __int64 v85; // x0
  int32_t wallImageId; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B645E4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, data);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___, v11);
    sub_1BE4ACC(&int_TypeInfo, v12);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject____77247160, v13);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v14);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v15);
    sub_1BE4ACC(&UnityEngine_Transform___TypeInfo, v16);
    sub_1BE4ACC(&WarBoardBreakPointComponent___TypeInfo, v17);
    sub_1BE4ACC(&WarBoardWallComponent_TypeInfo, v18);
    byte_4B645E4 = 1;
  }
  this->fields.wallData = data;
  p_wallData = &this->fields.wallData;
  sub_1BE4A70(
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
  sub_1BE4A70((PartyOrganizationUtility_o *)(wallData + 56), (int64_t)this, v21, v22, v23, v24, v25, v26);
  wallData = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !wallData )
    goto LABEL_34;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)wallData,
                       (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)Component_object;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.simpleAnimation,
    (int64_t)Component_object,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  wallData = (char *)this->fields.iconSp;
  if ( !wallData )
    goto LABEL_34;
  UISprite__set_atlas((UISprite_o *)wallData, wallIconAtlas, 0LL);
  iconSp = this->fields.iconSp;
  if ( !WarBoardWallComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardWallComponent_TypeInfo);
  wallData = (char *)*p_wallData;
  if ( !*p_wallData )
    goto LABEL_34;
  WALL_ICON_NAME = WarBoardWallComponent_TypeInfo->static_fields->WALL_ICON_NAME;
  wallImageId = WarBoardWallData__get_wallImageId((WarBoardWallData_o *)wallData, 0LL);
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &wallImageId, v37, v38, v39);
  wallData = (char *)System_String__Format(WALL_ICON_NAME, v40, 0LL);
  if ( !iconSp )
    goto LABEL_34;
  UISprite__set_spriteName(iconSp, (System_String_o *)wallData, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  wallData = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v42 = this->fields.wallData;
  if ( !v42 )
    goto LABEL_34;
  if ( !wallData )
    goto LABEL_34;
  *(UnityEngine_Vector3_o *)&v43 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)wallData,
                                     v42->fields._squareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_34;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v43, 0LL);
  if ( !*p_wallData )
    goto LABEL_34;
  breakPointMax_k__BackingField = (unsigned int)(*p_wallData)->fields._breakPointMax_k__BackingField;
  v47 = (struct WarBoardBreakPointComponent_array *)sub_1BE4B74(
                                                      WarBoardBreakPointComponent___TypeInfo,
                                                      (unsigned int)breakPointMax_k__BackingField);
  this->fields.breakPoints = v47;
  p_breakPoints = &this->fields.breakPoints;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.breakPoints, (int64_t)v47, v49, v50, v51, v52, v53, v54);
  wallData = (char *)this->fields.breakPointParent;
  if ( !wallData )
    goto LABEL_34;
  if ( (int)breakPointMax_k__BackingField >= 1 )
  {
    v55 = 0LL;
    v56 = 0.0;
    v57 = 1LL;
    v58 = 2 * breakPointMax_k__BackingField - 2;
    v59 = (float)*((int *)wallData + 42) / (float)(int)breakPointMax_k__BackingField;
    v60 = 8LL;
    do
    {
      breakPointPrefab = (Il2CppObject *)this->fields.breakPointPrefab;
      v62 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)wallData, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      wallData = (char *)UnityEngine_Object__Instantiate_object__50195216(
                           breakPointPrefab,
                           v62,
                           (const MethodInfo_2FDEB10 *)Method_UnityEngine_Object_Instantiate_GameObject____77247160);
      if ( !wallData )
        break;
      v63 = (UnityEngine_GameObject_o *)wallData;
      v64 = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)wallData,
                                               (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      wallData = (char *)UnityEngine_GameObject__get_transform(v63, 0LL);
      if ( !wallData )
        break;
      v87.fields.y = 0.0;
      v87.fields.z = 0.0;
      v87.fields.x = v56;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)wallData, v87, 0LL);
      breakPointParent = this->fields.breakPointParent;
      if ( !breakPointParent )
        break;
      if ( !v64 )
        break;
      WarBoardBreakPointComponent__Initialize(v64, v58 + breakPointParent->fields.mDepth, v57, 0, 0, 1, 0LL);
      v66 = (unsigned int *)*p_breakPoints;
      if ( !*p_breakPoints )
        break;
      wallData = (char *)sub_1BE4C08(v64, *(_QWORD *)(*(_QWORD *)v66 + 64LL));
      if ( !wallData )
        goto LABEL_43;
      if ( v55 >= v66[6] )
        goto LABEL_42;
      *(_QWORD *)&v66[v60] = v64;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v66[v60], (int64_t)v64, v67, v68, v69, v70, v71, v72);
      v73 = *p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_34;
      if ( v55 >= v73->max_length )
        goto LABEL_42;
      if ( !*p_wallData )
        break;
      wallData = *(char **)((char *)&v73->obj.klass + v60 * 4);
      if ( !wallData )
        break;
      WarBoardBreakPointComponent__SetActive(
        (WarBoardBreakPointComponent_o *)wallData,
        (__int64)v55 < (*p_wallData)->fields._breakPoint_k__BackingField,
        0,
        0LL);
      if ( breakPointMax_k__BackingField == v57 )
        goto LABEL_35;
      maxSpacing = v64->fields.maxSpacing;
      wallData = (char *)this->fields.breakPointParent;
      ++v55;
      v58 -= 2;
      if ( maxSpacing >= v59 )
        maxSpacing = v59;
      ++v57;
      v56 = v56 + maxSpacing;
      v60 += 2LL;
    }
    while ( wallData );
    goto LABEL_34;
  }
LABEL_35:
  v75 = (UnityEngine_Transform_array *)sub_1BE4B74(UnityEngine_Transform___TypeInfo, 1LL);
  wallData = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v75 )
    goto LABEL_34;
  v82 = (int64_t)wallData;
  if ( wallData )
  {
    wallData = (char *)sub_1BE4C08(wallData, v75->obj.klass->_1.element_class);
    if ( !wallData )
    {
LABEL_43:
      v85 = sub_1BE4D4C();
      sub_1BE4BF4(v85, 0LL);
    }
  }
  if ( !v75->max_length )
LABEL_42:
    sub_1BE4D30(wallData, v20);
  v75->m_Items[0] = (UnityEngine_Transform_o *)v82;
  sub_1BE4A70((PartyOrganizationUtility_o *)v75->m_Items, v82, v76, v77, v78, v79, v80, v81);
  WarBoardWallComponent__SetButtonTweenTarget(this, v75, v83);
  wallData = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v84 = this->fields.wallData;
  if ( !v84 || !wallData )
LABEL_34:
    sub_1BE4D28(wallData, v20);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wallData, !v84->fields._isDestroy_k__BackingField, 0LL);
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
    sub_1BE4D28(this, *(_QWORD *)&oldBreakPoint);
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
        sub_1BE4D30(this, *(_QWORD *)&oldBreakPoint);
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
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  struct WarBoardWallData_o *v8; // x8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x20
  struct System_Threading_CancellationTokenSource_o *v11; // x8
  Il2CppObject *Instance; // x0
  WarBoardWallData_o *v13; // x20
  WarBoardManager_o *v14; // x21
  int v15; // s0

  v2 = this;
  if ( (byte_4B645E8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    this = (WarBoardWallComponent_o *)sub_1BE4ACC(&Method_WarBoardWallComponent_OnClick__, v3);
    byte_4B645E8 = 1;
  }
  wallData = v2->fields.wallData;
  if ( !wallData )
    goto LABEL_22;
  if ( wallData->fields._isDestroy_k__BackingField )
    return;
  this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)this, 0LL) && v2->fields.isSelectable )
  {
    v5 = Method_WarBoardWallComponent_OnClick__;
    if ( (*((_BYTE *)Method_WarBoardWallComponent_OnClick__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BE4AE4(Method_WarBoardWallComponent_OnClick__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
    this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( this )
    {
      m_CancellationTokenSource = this[3].fields.m_CancellationTokenSource;
      if ( m_CancellationTokenSource )
      {
        OverwriteAssetSoundName__PlaySe(
          v6,
          (System_String_o *)m_CancellationTokenSource->fields._registeredCallbacksLists,
          0LL);
        this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1BE4D28(this, method);
  }
  v9 = Method_WarBoardWallComponent_OnClick__;
  if ( (*((_BYTE *)Method_WarBoardWallComponent_OnClick__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1BE4AE4(Method_WarBoardWallComponent_OnClick__);
  v10 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v9, v9[4]);
  this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  v11 = this[3].fields.m_CancellationTokenSource;
  if ( !v11 )
    goto LABEL_22;
  OverwriteAssetSoundName__PlaySe(v10, *(System_String_o **)&v11->fields._disposed, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  char *wallData; // x0
  System_String_o *BREAK_ANIMATION_NAME; // x20
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  const MethodInfo *v18; // x2
  Il2CppObject *v19; // x20
  PartyOrganizationUtility_o *v20; // x22
  System_Delegate_o *v21; // x23
  WarBoardTaskBase_TaskCallback_o *v22; // x24
  System_Delegate_o *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x8
  WarBoardTaskBase_TaskCallback_c *v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  Il2CppObject *Instance; // x19
  char *v49; // x21
  __int64 v50; // x0
  __int64 v51; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  __int64 v58; // x0
  int32_t wallDestroyEffectId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B645EB & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, taskList);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_1BE4ACC(&WarBoardTaskBase_TaskCallback_TypeInfo, v7);
    sub_1BE4ACC(&WarBoardTaskBase___TypeInfo, v8);
    sub_1BE4ACC(&Method_WarBoardWallComponent__OnDead_b__22_0__, v9);
    sub_1BE4ACC(&WarBoardWallComponent_TypeInfo, v10);
    byte_4B645EB = 1;
  }
  if ( !WarBoardWallComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardWallComponent_TypeInfo);
  wallData = (char *)this->fields.wallData;
  if ( !wallData )
    goto LABEL_24;
  BREAK_ANIMATION_NAME = WarBoardWallComponent_TypeInfo->static_fields->BREAK_ANIMATION_NAME;
  wallDestroyEffectId = WarBoardWallData__get_wallDestroyEffectId((WarBoardWallData_o *)wallData, 0LL);
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &wallDestroyEffectId, v13, v14, v15);
  v17 = System_String__Format(BREAK_ANIMATION_NAME, v16, 0LL);
  wallData = (char *)WarBoardWallComponent__GetSimpleAnimationPerformance(this, v17, v18);
  if ( !wallData )
    goto LABEL_24;
  v19 = (Il2CppObject *)wallData;
  v20 = (PartyOrganizationUtility_o *)(wallData + 40);
  v21 = (System_Delegate_o *)*((_QWORD *)wallData + 5);
  v22 = (WarBoardTaskBase_TaskCallback_o *)sub_1BE4D18(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(v22, (Il2CppObject *)this, Method_WarBoardWallComponent__OnDead_b__22_0__, 0LL);
  v23 = System_Delegate__Combine(v21, (System_Delegate_o *)v22, 0LL);
  v30 = (int64_t)v23;
  if ( !v23 )
    goto LABEL_11;
  v31 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v23->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (v20->klass = (PartyOrganizationUtility_c *)v23, (WarBoardTaskBase_TaskCallback_c *)v23->klass != v31) )
  {
    sub_1BE4FE8(v23);
LABEL_11:
    v20->klass = (PartyOrganizationUtility_c *)v30;
  }
  sub_1BE4A70(v20, v30, v24, v25, v26, v27, v28, v29);
  wallData = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !wallData )
    goto LABEL_24;
  *((_QWORD *)wallData + 127) = v19;
  sub_1BE4A70((PartyOrganizationUtility_o *)(wallData + 1016), (int64_t)v19, v32, v33, v34, v35, v36, v37);
  if ( !taskList )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    wallData = (char *)sub_1BE4B74(WarBoardTaskBase___TypeInfo, 1LL);
    if ( wallData )
    {
      v49 = wallData;
      v50 = sub_1BE4C08(v19, *(_QWORD *)(*(_QWORD *)wallData + 64LL));
      if ( !v50 )
      {
        v58 = sub_1BE4D4C();
        sub_1BE4BF4(v58, 0LL);
      }
      if ( !*((_DWORD *)v49 + 6) )
        sub_1BE4D30(v50, v51);
      *((_QWORD *)v49 + 4) = v19;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v49 + 32), (int64_t)v19, v52, v53, v54, v55, v56, v57);
      if ( Instance )
      {
        WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v49, 0LL);
        return;
      }
    }
LABEL_24:
    sub_1BE4D28(wallData, taskList);
  }
  items = taskList->fields._items;
  v45 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++taskList->fields._version;
  if ( !items )
    goto LABEL_24;
  size = taskList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)taskList,
      v19,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
  }
  else
  {
    v47 = &items->obj.klass + size;
    taskList->fields._size = size + 1;
    v47[4] = (Il2CppClass *)v19;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v47 + 4), (int64_t)v19, v38, v39, v40, v41, v42, v43);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardWallComponent__OnLongClick(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *v2; // x19
  __int64 v3; // x1
  UnityEngine_Component_c *klass; // x8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  Il2CppObject *Instance; // x0
  WarBoardWallData_o *v9; // x20
  WarBoardManager_o *v10; // x21
  int v11; // s0

  v2 = (UnityEngine_Component_o *)this;
  if ( (byte_4B645E9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    this = (WarBoardWallComponent_o *)sub_1BE4ACC(&Method_WarBoardWallComponent_OnLongClick__, v3);
    byte_4B645E9 = 1;
  }
  klass = v2[3].klass;
  if ( !klass )
    goto LABEL_12;
  if ( LOBYTE(klass->_1.byval_arg.data) )
    return;
  v5 = Method_WarBoardWallComponent_OnLongClick__;
  if ( (*((_BYTE *)Method_WarBoardWallComponent_OnLongClick__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BE4AE4(Method_WarBoardWallComponent_OnLongClick__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
  this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this
    || (m_CancellationTokenSource = this[3].fields.m_CancellationTokenSource) == 0LL
    || (OverwriteAssetSoundName__PlaySe(v6, *(System_String_o **)&m_CancellationTokenSource->fields._disposed, 0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        v9 = (WarBoardWallData_o *)v2[3].klass,
        v10 = (WarBoardManager_o *)Instance,
        (this = (WarBoardWallComponent_o *)UnityEngine_Component__get_transform(v2, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL), !v10) )
  {
LABEL_12:
    sub_1BE4D28(this, method);
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
  System_Collections_Generic_List_object__o *v15; // x23
  const MethodInfo *v16; // x5

  if ( (byte_4B645ED & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, popText);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v10);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_1BE4ACC(&StringLiteral_19078/*"ef_dm_base"*/, v12);
    byte_4B645ED = 1;
  }
  gameObject = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
  {
    v15 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v15,
      (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    if ( !System_String__IsNullOrEmpty(popText, 0LL) )
      WarBoardWallComponent__CreateEffectText(
        this,
        (System_String_o *)StringLiteral_19078/*"ef_dm_base"*/,
        popText,
        popTextColor,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)v15,
        v16);
    if ( taskList )
    {
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v15,
        (const MethodInfo_35EC430 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      return;
    }
    gameObject = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( gameObject )
    {
      WarBoardManager__AddTask_36356260(gameObject, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v15, 0LL);
      return;
    }
LABEL_12:
    sub_1BE4D28(gameObject, v14);
  }
}


void __fastcall WarBoardWallComponent__Selectable(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  struct WarBoardWallData_o *wallData; // x8

  wallData = this->fields.wallData;
  if ( !wallData )
    sub_1BE4D28(this, method);
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
  System_Collections_Generic_List_object__o *v10; // x21
  int64_t ComponentsInChildren_object; // x0
  __int64 v12; // x1
  signed int max_length; // w8
  unsigned int v14; // w24
  UnityEngine_Component_c *v15; // x8
  int64_t v16; // x22
  unsigned __int64 v17; // x29
  UnityEngine_Object_o *v18; // x23
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  int64_t v28; // x1
  Il2CppClass **v29; // x0
  struct UICommonButton_o *button; // x19
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  if ( (byte_4B645E5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____77181096, parents);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__Contains__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__ToArray__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject___ctor__, v7);
    sub_1BE4ACC(&System_Collections_Generic_List_GameObject__TypeInfo, v8);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v9);
    byte_4B645E5 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= max_length )
          goto LABEL_28;
        ComponentsInChildren_object = (int64_t)parents->m_Items[v14];
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        ComponentsInChildren_object = (int64_t)UnityEngine_Component__GetComponentsInChildren_object_(
                                                 (UnityEngine_Component_o *)ComponentsInChildren_object,
                                                 1,
                                                 (const MethodInfo_2F506A0 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____77181096);
        if ( ComponentsInChildren_object )
        {
          v15 = *(UnityEngine_Component_c **)(ComponentsInChildren_object + 24);
          v16 = ComponentsInChildren_object;
          if ( (int)v15 >= 1 )
            break;
        }
LABEL_23:
        max_length = parents->max_length;
        if ( (int)++v14 >= max_length )
          goto LABEL_24;
      }
      v17 = 0LL;
      while ( v17 < (unsigned int)v15 )
      {
        v18 = *(UnityEngine_Object_o **)(v16 + 32 + 8 * v17);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ComponentsInChildren_object = UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
        if ( (ComponentsInChildren_object & 1) != 0 )
        {
          if ( !v18 )
            goto LABEL_27;
          ComponentsInChildren_object = (int64_t)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v18,
                                                   0LL);
          if ( !v10 )
            goto LABEL_27;
          ComponentsInChildren_object = System_Collections_Generic_List_object___Contains(
                                          v10,
                                          (Il2CppObject *)ComponentsInChildren_object,
                                          (const MethodInfo_35EC5B4 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( (ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (int64_t)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v18,
                                                     0LL);
            items = v10->fields._items;
            v26 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v10->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v10->fields._size;
            v28 = ComponentsInChildren_object;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
            }
            else
            {
              v29 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v29[4] = (Il2CppClass *)v28;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v29 + 4), v28, v19, v20, v21, v22, v23, v24);
            }
          }
        }
        LODWORD(v15) = *(_DWORD *)(v16 + 24);
        if ( (__int64)++v17 >= (int)v15 )
          goto LABEL_23;
      }
LABEL_28:
      sub_1BE4D30(ComponentsInChildren_object, v12);
    }
  }
LABEL_24:
  if ( !v10
    || (button = this->fields.button,
        ComponentsInChildren_object = (int64_t)System_Collections_Generic_List_object___ToArray(
                                                 v10,
                                                 (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1BE4D28(ComponentsInChildren_object, v12);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&button->fields.tweenTargets,
    ComponentsInChildren_object,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
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

  if ( (byte_4B645E7 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, enable);
    byte_4B645E7 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1BE4D28(0LL, v6);
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

  if ( (byte_4B645E6 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, enable);
    byte_4B645E6 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1BE4D28(0LL, v6);
    UICommonButton__SetButtonEnableAndKeepState(v7, enable, 0, 0LL);
  }
}


void __fastcall WarBoardWallComponent__Unselectable(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  struct WarBoardWallData_o *wallData; // x8

  wallData = this->fields.wallData;
  if ( !wallData )
    sub_1BE4D28(this, method);
  if ( !wallData->fields._isDestroy_k__BackingField )
    this->fields.isSelectable = 0;
}


void __fastcall WarBoardWallComponent___OnDead_b__22_0(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BE4D28(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}