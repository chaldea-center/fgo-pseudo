void __fastcall WarBoardWallComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct WarBoardWallComponent_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A58CFF & 1) == 0 )
  {
    sub_1B885B0(&WarBoardWallComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_20598/*"img_wall_{0}"*/);
    sub_1B885B0(&StringLiteral_3337/*"BreakWall_{0:00}"*/);
    byte_4A58CFF = 1;
  }
  WarBoardWallComponent_TypeInfo->static_fields->WALL_ICON_NAME = (struct System_String_o *)StringLiteral_20598/*"img_wall_{0}"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)WarBoardWallComponent_TypeInfo->static_fields,
    StringLiteral_20598/*"img_wall_{0}"*/,
    v1,
    v2);
  v3 = StringLiteral_3337/*"BreakWall_{0:00}"*/;
  static_fields = WarBoardWallComponent_TypeInfo->static_fields;
  static_fields->BREAK_ANIMATION_NAME = (struct System_String_o *)StringLiteral_3337/*"BreakWall_{0:00}"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->BREAK_ANIMATION_NAME, v3, v5, v6);
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
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Nullable_Vector3__o v27; // 0:x3.16
  System_Nullable_Vector3__o v28; // 0:x5.16

  if ( (byte_4A58CFD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    sub_1B885B0(&WarBoardPopTextEffectPerformance_TypeInfo);
    byte_4A58CFD = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               effectName,
                               (const MethodInfo_2F5C554 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    effectDisplayTransform = (UnityEngine_Object_o *)this->fields.effectDisplayTransform;
    v17 = (UnityEngine_Object_o *)transform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(effectDisplayTransform, 0LL, 0LL) )
      effectDisplayTransform = v17;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v18 = UnityEngine_Object__Instantiate_object__49297800(
            CommonEffectAsset_object,
            (UnityEngine_Transform_o *)effectDisplayTransform,
            (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    v19 = (WarBoardPopTextEffectPerformance_o *)sub_1B887FC(WarBoardPopTextEffectPerformance_TypeInfo);
    *(_QWORD *)&v27.fields.hasValue = 0LL;
    *(_QWORD *)&v27.fields.value.fields.y = 0LL;
    *(_QWORD *)&v28.fields.hasValue = 0LL;
    *(_QWORD *)&v28.fields.value.fields.y = 0LL;
    v20 = v19;
    WarBoardPopTextEffectPerformance___ctor(
      v19,
      0LL,
      (UnityEngine_GameObject_o *)v18,
      v27,
      v28,
      (System_Nullable_Vector3__o)0,
      0,
      1,
      0LL);
    if ( v20 )
    {
      WarBoardPopTextEffectPerformance__SetPopText(v20, popText, popTextColor, 0LL);
      if ( v11 )
      {
        items = v11->fields._items;
        v24 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
        ++v11->fields._version;
        if ( items )
        {
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)v20,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            if ( taskList )
              goto LABEL_18;
          }
          else
          {
            v26 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v26[4] = (Il2CppClass *)v20;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v20, v21, v22);
            if ( taskList )
            {
LABEL_18:
              System_Collections_Generic_List_object___AddRange(
                (System_Collections_Generic_List_object__o *)taskList,
                (System_Collections_Generic_IEnumerable_T__o *)v11,
                (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
              return;
            }
          }
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( Instance )
          {
            WarBoardManager__AddTask_35486828(
              (WarBoardManager_o *)Instance,
              0,
              (System_Collections_Generic_List_WarBoardTaskBase__o *)v11,
              0LL);
            return;
          }
        }
      }
    }
LABEL_22:
    sub_1B8880C(Instance, v13);
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
    sub_1B8880C(iconSp, method);
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

  if ( (byte_4A58CFB & 1) == 0 )
  {
    sub_1B885B0(&WarBoardSimpleAnimationPerformance_TypeInfo);
    byte_4A58CFB = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  v6 = (WarBoardSimpleAnimationPerformance_o *)sub_1B887FC(WarBoardSimpleAnimationPerformance_TypeInfo);
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
  struct WarBoardWallData_o **p_wallData; // x20
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  char *wallData; // x0
  Il2CppObject *Component_object; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  UISprite_o *iconSp; // x21
  System_String_o *WALL_ICON_NAME; // x22
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x0
  UnityEngine_Transform_o *transform; // x21
  struct WarBoardWallData_o *v22; // x8
  int v23; // s0
  __int64 breakPointMax_k__BackingField; // x21
  struct WarBoardBreakPointComponent_array *v27; // x0
  struct WarBoardBreakPointComponent_array **p_breakPoints; // x22
  int32_t v29; // w2
  int32_t v30; // w3
  unsigned __int64 v31; // x26
  float v32; // s8
  __int64 v33; // x23
  int v34; // w27
  float v35; // s9
  __int64 v36; // x28
  Il2CppObject *breakPointPrefab; // x24
  UnityEngine_Transform_o *v38; // x25
  UnityEngine_GameObject_o *v39; // x25
  WarBoardBreakPointComponent_o *v40; // x24
  struct UIWidget_o *breakPointParent; // x8
  unsigned int *v42; // x25
  int32_t v43; // w2
  int32_t v44; // w3
  struct WarBoardBreakPointComponent_array *v45; // x8
  float maxSpacing; // s0
  UnityEngine_Transform_array *v47; // x20
  int32_t v48; // w2
  int32_t v49; // w3
  UnityEngine_Transform_o *v50; // x21
  const MethodInfo *v51; // x2
  struct WarBoardWallData_o *v52; // x8
  __int64 v53; // x0
  int32_t wallImageId; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A58CF5 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&UnityEngine_Transform___TypeInfo);
    sub_1B885B0(&WarBoardBreakPointComponent___TypeInfo);
    sub_1B885B0(&WarBoardWallComponent_TypeInfo);
    byte_4A58CF5 = 1;
  }
  this->fields.wallData = data;
  p_wallData = &this->fields.wallData;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.wallData,
    (int32_t)data,
    (int32_t)wallIconAtlas,
    (int32_t)method);
  wallData = (char *)this->fields.wallData;
  if ( !wallData )
    goto LABEL_34;
  *((_QWORD *)wallData + 7) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(wallData + 56), (int32_t)this, v9, v10);
  wallData = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !wallData )
    goto LABEL_34;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)wallData,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.simpleAnimation, (int32_t)Component_object, v13, v14);
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
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &wallImageId, v17, v18, v19);
  wallData = (char *)System_String__Format(WALL_ICON_NAME, v20, 0LL);
  if ( !iconSp )
    goto LABEL_34;
  UISprite__set_spriteName(iconSp, (System_String_o *)wallData, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  wallData = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v22 = this->fields.wallData;
  if ( !v22 )
    goto LABEL_34;
  if ( !wallData )
    goto LABEL_34;
  *(UnityEngine_Vector3_o *)&v23 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)wallData,
                                     v22->fields._squareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_34;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v23, 0LL);
  if ( !*p_wallData )
    goto LABEL_34;
  breakPointMax_k__BackingField = (unsigned int)(*p_wallData)->fields._breakPointMax_k__BackingField;
  v27 = (struct WarBoardBreakPointComponent_array *)sub_1B88658(
                                                      WarBoardBreakPointComponent___TypeInfo,
                                                      (unsigned int)breakPointMax_k__BackingField);
  this->fields.breakPoints = v27;
  p_breakPoints = &this->fields.breakPoints;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.breakPoints, (int32_t)v27, v29, v30);
  wallData = (char *)this->fields.breakPointParent;
  if ( !wallData )
    goto LABEL_34;
  if ( (int)breakPointMax_k__BackingField >= 1 )
  {
    v31 = 0LL;
    v32 = 0.0;
    v33 = 1LL;
    v34 = 2 * breakPointMax_k__BackingField - 2;
    v35 = (float)*((int *)wallData + 42) / (float)(int)breakPointMax_k__BackingField;
    v36 = 8LL;
    do
    {
      breakPointPrefab = (Il2CppObject *)this->fields.breakPointPrefab;
      v38 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)wallData, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      wallData = (char *)UnityEngine_Object__Instantiate_object__49297800(
                           breakPointPrefab,
                           v38,
                           (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
      if ( !wallData )
        break;
      v39 = (UnityEngine_GameObject_o *)wallData;
      v40 = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)wallData,
                                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      wallData = (char *)UnityEngine_GameObject__get_transform(v39, 0LL);
      if ( !wallData )
        break;
      v55.fields.y = 0.0;
      v55.fields.z = 0.0;
      v55.fields.x = v32;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)wallData, v55, 0LL);
      breakPointParent = this->fields.breakPointParent;
      if ( !breakPointParent )
        break;
      if ( !v40 )
        break;
      WarBoardBreakPointComponent__Initialize(v40, v34 + breakPointParent->fields.mDepth, v33, 0, 0, 1, 0LL);
      v42 = (unsigned int *)*p_breakPoints;
      if ( !*p_breakPoints )
        break;
      wallData = (char *)sub_1B886EC(v40, *(_QWORD *)(*(_QWORD *)v42 + 64LL));
      if ( !wallData )
        goto LABEL_43;
      if ( v31 >= v42[6] )
        goto LABEL_42;
      *(_QWORD *)&v42[v36] = v40;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v42[v36], (int32_t)v40, v43, v44);
      v45 = *p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_34;
      if ( v31 >= v45->max_length )
        goto LABEL_42;
      if ( !*p_wallData )
        break;
      wallData = *(char **)((char *)&v45->obj.klass + v36 * 4);
      if ( !wallData )
        break;
      WarBoardBreakPointComponent__SetActive(
        (WarBoardBreakPointComponent_o *)wallData,
        (__int64)v31 < (*p_wallData)->fields._breakPoint_k__BackingField,
        0,
        0LL);
      if ( breakPointMax_k__BackingField == v33 )
        goto LABEL_35;
      maxSpacing = v40->fields.maxSpacing;
      wallData = (char *)this->fields.breakPointParent;
      ++v31;
      v34 -= 2;
      if ( maxSpacing >= v35 )
        maxSpacing = v35;
      ++v33;
      v32 = v32 + maxSpacing;
      v36 += 2LL;
    }
    while ( wallData );
    goto LABEL_34;
  }
LABEL_35:
  v47 = (UnityEngine_Transform_array *)sub_1B88658(UnityEngine_Transform___TypeInfo, 1LL);
  wallData = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v47 )
    goto LABEL_34;
  v50 = (UnityEngine_Transform_o *)wallData;
  if ( wallData )
  {
    wallData = (char *)sub_1B886EC(wallData, v47->obj.klass->_1.element_class);
    if ( !wallData )
    {
LABEL_43:
      v53 = sub_1B88830(wallData);
      sub_1B886D8(v53, 0LL);
    }
  }
  if ( !v47->max_length )
LABEL_42:
    sub_1B88814(wallData, v8);
  v47->m_Items[0] = v50;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v47->m_Items, (int32_t)v50, v48, v49);
  WarBoardWallComponent__SetButtonTweenTarget(this, v47, v51);
  wallData = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v52 = this->fields.wallData;
  if ( !v52 || !wallData )
LABEL_34:
    sub_1B8880C(wallData, v8);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wallData, !v52->fields._isDestroy_k__BackingField, 0LL);
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
    sub_1B8880C(this, *(_QWORD *)&oldBreakPoint);
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
        sub_1B88814(this, *(_QWORD *)&oldBreakPoint);
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
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  struct WarBoardWallData_o *v7; // x8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x20
  struct System_Threading_CancellationTokenSource_o *v10; // x8
  Il2CppObject *Instance; // x0
  WarBoardWallData_o *v12; // x20
  WarBoardManager_o *v13; // x21
  int v14; // s0

  v2 = this;
  if ( (byte_4A58CF9 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardWallComponent_o *)sub_1B885B0(&Method_WarBoardWallComponent_OnClick__);
    byte_4A58CF9 = 1;
  }
  wallData = v2->fields.wallData;
  if ( !wallData )
    goto LABEL_22;
  if ( wallData->fields._isDestroy_k__BackingField )
    return;
  this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)this, 0LL) && v2->fields.isSelectable )
  {
    v4 = Method_WarBoardWallComponent_OnClick__;
    if ( (*((_BYTE *)Method_WarBoardWallComponent_OnClick__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B885C8(Method_WarBoardWallComponent_OnClick__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
    this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( this )
    {
      m_CancellationTokenSource = this[3].fields.m_CancellationTokenSource;
      if ( m_CancellationTokenSource )
      {
        OverwriteAssetSoundName__PlaySe(
          v5,
          (System_String_o *)m_CancellationTokenSource->fields._registeredCallbacksLists,
          0LL);
        this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1B8880C(this, method);
  }
  v8 = Method_WarBoardWallComponent_OnClick__;
  if ( (*((_BYTE *)Method_WarBoardWallComponent_OnClick__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1B885C8(Method_WarBoardWallComponent_OnClick__);
  v9 = (System_Reflection_MethodBase_o *)sub_1B88594(v8, v8[4]);
  this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  v10 = this[3].fields.m_CancellationTokenSource;
  if ( !v10 )
    goto LABEL_22;
  OverwriteAssetSoundName__PlaySe(v9, *(System_String_o **)&v10->fields._disposed, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  char *wallData; // x0
  System_String_o *BREAK_ANIMATION_NAME; // x20
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  const MethodInfo *v12; // x2
  Il2CppObject *v13; // x20
  ServantStatusBattleListViewItem_o *v14; // x22
  System_Delegate_o *v15; // x23
  WarBoardTaskBase_TaskCallback_o *v16; // x24
  System_Delegate_o *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_Delegate_o *v20; // x8
  WarBoardTaskBase_TaskCallback_c *v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  Il2CppObject *Instance; // x19
  char *v31; // x21
  __int64 v32; // x0
  __int64 v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x0
  int32_t wallDestroyEffectId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A58CFC & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1B885B0(&WarBoardTaskBase___TypeInfo);
    sub_1B885B0(&Method_WarBoardWallComponent__OnDead_b__22_0__);
    sub_1B885B0(&WarBoardWallComponent_TypeInfo);
    byte_4A58CFC = 1;
  }
  if ( !WarBoardWallComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardWallComponent_TypeInfo);
  wallData = (char *)this->fields.wallData;
  if ( !wallData )
    goto LABEL_24;
  BREAK_ANIMATION_NAME = WarBoardWallComponent_TypeInfo->static_fields->BREAK_ANIMATION_NAME;
  wallDestroyEffectId = WarBoardWallData__get_wallDestroyEffectId((WarBoardWallData_o *)wallData, 0LL);
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &wallDestroyEffectId, v7, v8, v9);
  v11 = System_String__Format(BREAK_ANIMATION_NAME, v10, 0LL);
  wallData = (char *)WarBoardWallComponent__GetSimpleAnimationPerformance(this, v11, v12);
  if ( !wallData )
    goto LABEL_24;
  v13 = (Il2CppObject *)wallData;
  v14 = (ServantStatusBattleListViewItem_o *)(wallData + 40);
  v15 = (System_Delegate_o *)*((_QWORD *)wallData + 5);
  v16 = (WarBoardTaskBase_TaskCallback_o *)sub_1B887FC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(v16, (Il2CppObject *)this, Method_WarBoardWallComponent__OnDead_b__22_0__, 0LL);
  v17 = System_Delegate__Combine(v15, (System_Delegate_o *)v16, 0LL);
  v20 = v17;
  if ( !v17 )
    goto LABEL_11;
  v21 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v17->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (v14->klass = (ServantStatusBattleListViewItem_c *)v17, (WarBoardTaskBase_TaskCallback_c *)v17->klass != v21) )
  {
    sub_1B88ACC(v17);
LABEL_11:
    v14->klass = (ServantStatusBattleListViewItem_c *)v20;
  }
  sub_1B88554(v14, (int32_t)v20, v18, v19);
  wallData = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !wallData )
    goto LABEL_24;
  *((_QWORD *)wallData + 128) = v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(wallData + 1024), (int32_t)v13, v22, v23);
  if ( !taskList )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    wallData = (char *)sub_1B88658(WarBoardTaskBase___TypeInfo, 1LL);
    if ( wallData )
    {
      v31 = wallData;
      v32 = sub_1B886EC(v13, *(_QWORD *)(*(_QWORD *)wallData + 64LL));
      if ( !v32 )
      {
        v36 = sub_1B88830(0LL);
        sub_1B886D8(v36, 0LL);
      }
      if ( !*((_DWORD *)v31 + 6) )
        sub_1B88814(v32, v33);
      *((_QWORD *)v31 + 4) = v13;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 32), (int32_t)v13, v34, v35);
      if ( Instance )
      {
        WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v31, 0LL);
        return;
      }
    }
LABEL_24:
    sub_1B8880C(wallData, taskList);
  }
  items = taskList->fields._items;
  v27 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++taskList->fields._version;
  if ( !items )
    goto LABEL_24;
  size = taskList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)taskList,
      v13,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &items->obj.klass + size;
    taskList->fields._size = size + 1;
    v29[4] = (Il2CppClass *)v13;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v13, v24, v25);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardWallComponent__OnLongClick(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *v2; // x19
  UnityEngine_Component_c *klass; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  Il2CppObject *Instance; // x0
  WarBoardWallData_o *v8; // x20
  WarBoardManager_o *v9; // x21
  int v10; // s0

  v2 = (UnityEngine_Component_o *)this;
  if ( (byte_4A58CFA & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardWallComponent_o *)sub_1B885B0(&Method_WarBoardWallComponent_OnLongClick__);
    byte_4A58CFA = 1;
  }
  klass = v2[3].klass;
  if ( !klass )
    goto LABEL_12;
  if ( LOBYTE(klass->_1.byval_arg.data) )
    return;
  v4 = Method_WarBoardWallComponent_OnLongClick__;
  if ( (*((_BYTE *)Method_WarBoardWallComponent_OnLongClick__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B885C8(Method_WarBoardWallComponent_OnLongClick__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
  this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this
    || (m_CancellationTokenSource = this[3].fields.m_CancellationTokenSource) == 0LL
    || (OverwriteAssetSoundName__PlaySe(v5, *(System_String_o **)&m_CancellationTokenSource->fields._disposed, 0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        v8 = (WarBoardWallData_o *)v2[3].klass,
        v9 = (WarBoardManager_o *)Instance,
        (this = (WarBoardWallComponent_o *)UnityEngine_Component__get_transform(v2, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL), !v9) )
  {
LABEL_12:
    sub_1B8880C(this, method);
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
  System_Collections_Generic_List_object__o *v11; // x23
  const MethodInfo *v12; // x5

  if ( (byte_4A58CFE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&StringLiteral_18827/*"ef_dm_base"*/);
    byte_4A58CFE = 1;
  }
  gameObject = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    if ( !System_String__IsNullOrEmpty(popText, 0LL) )
      WarBoardWallComponent__CreateEffectText(
        this,
        (System_String_o *)StringLiteral_18827/*"ef_dm_base"*/,
        popText,
        popTextColor,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)v11,
        v12);
    if ( taskList )
    {
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v11,
        (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      return;
    }
    gameObject = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( gameObject )
    {
      WarBoardManager__AddTask_35486828(gameObject, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v11, 0LL);
      return;
    }
LABEL_12:
    sub_1B8880C(gameObject, v10);
  }
}


void __fastcall WarBoardWallComponent__Selectable(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  struct WarBoardWallData_o *wallData; // x8

  wallData = this->fields.wallData;
  if ( !wallData )
    sub_1B8880C(this, method);
  if ( !wallData->fields._isDestroy_k__BackingField )
    this->fields.isSelectable = 1;
}


void __fastcall WarBoardWallComponent__SetButtonTweenTarget(
        WarBoardWallComponent_o *this,
        UnityEngine_Transform_array *parents,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x21
  UnityEngine_Component_o *ComponentsInChildren_object; // x0
  __int64 v6; // x1
  signed int max_length; // w8
  unsigned int v8; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v10; // x22
  unsigned __int64 v11; // x29
  UnityEngine_Object_o *v12; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  UnityEngine_Component_o *v18; // x1
  Il2CppClass **v19; // x0
  struct UICommonButton_o *button; // x19
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_4A58CF6 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76107672);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58CF6 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
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
                                                                   (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76107672);
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
      v11 = 0LL;
      while ( v11 < (unsigned int)klass )
      {
        v12 = (UnityEngine_Object_o *)*((_QWORD *)&v10[1].monitor + v11);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
        {
          if ( !v12 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)v12,
                                                                     0LL);
          if ( !v4 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___Contains(
                                                                     v4,
                                                                     (Il2CppObject *)ComponentsInChildren_object,
                                                                     (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)v12,
                                                                       0LL);
            items = v4->fields._items;
            v16 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v4->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v4->fields._size;
            v18 = ComponentsInChildren_object;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v4,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
            }
            else
            {
              v19 = &items->obj.klass + size;
              v4->fields._size = size + 1;
              v19[4] = (Il2CppClass *)v18;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v18, v13, v14);
            }
          }
        }
        LODWORD(klass) = v10[1].klass;
        if ( (__int64)++v11 >= (int)klass )
          goto LABEL_23;
      }
LABEL_28:
      sub_1B88814(ComponentsInChildren_object, v6);
    }
  }
LABEL_24:
  if ( !v4
    || (button = this->fields.button,
        ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                                   v4,
                                                                   (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1B8880C(ComponentsInChildren_object, v6);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&button->fields.tweenTargets,
    (int32_t)ComponentsInChildren_object,
    v21,
    v22);
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

  if ( (byte_4A58CF8 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58CF8 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
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


void __fastcall WarBoardWallComponent__SetTouchEnable(
        WarBoardWallComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  UICommonButton_o *v7; // x0

  if ( (byte_4A58CF7 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58CF7 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
    UICommonButton__SetButtonEnableAndKeepState(v7, enable, 0, 0LL);
  }
}


void __fastcall WarBoardWallComponent__Unselectable(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  struct WarBoardWallData_o *wallData; // x8

  wallData = this->fields.wallData;
  if ( !wallData )
    sub_1B8880C(this, method);
  if ( !wallData->fields._isDestroy_k__BackingField )
    this->fields.isSelectable = 0;
}


void __fastcall WarBoardWallComponent___OnDead_b__22_0(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}