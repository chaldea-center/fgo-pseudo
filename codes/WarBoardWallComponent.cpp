void __fastcall WarBoardWallComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct WarBoardWallComponent_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A2BAF1 & 1) == 0 )
  {
    sub_1B761C0(&WarBoardWallComponent_TypeInfo, v1);
    sub_1B761C0(&StringLiteral_20591/*"img_wall_{0}"*/, v4);
    sub_1B761C0(&StringLiteral_3336/*"BreakWall_{0:00}"*/, v5);
    byte_4A2BAF1 = 1;
  }
  WarBoardWallComponent_TypeInfo->static_fields->WALL_ICON_NAME = (struct System_String_o *)StringLiteral_20591/*"img_wall_{0}"*/;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)WarBoardWallComponent_TypeInfo->static_fields,
    StringLiteral_20591/*"img_wall_{0}"*/,
    v2,
    v3);
  v6 = StringLiteral_3336/*"BreakWall_{0:00}"*/;
  static_fields = WarBoardWallComponent_TypeInfo->static_fields;
  static_fields->BREAK_ANIMATION_NAME = (struct System_String_o *)StringLiteral_3336/*"BreakWall_{0:00}"*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->BREAK_ANIMATION_NAME, v6, v8, v9);
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
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Nullable_Vector3__o v35; // 0:x3.16
  System_Nullable_Vector3__o v36; // 0:x5.16

  if ( (byte_4A2BAEF & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, effectName);
    sub_1B761C0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v11);
    sub_1B761C0(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v12);
    sub_1B761C0(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v13);
    sub_1B761C0(&Method_UnityEngine_Object_Instantiate_GameObject____75989608, v14);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v15);
    sub_1B761C0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v16);
    sub_1B761C0(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v17);
    sub_1B761C0(&WarBoardPopTextEffectPerformance_TypeInfo, v18);
    byte_4A2BAEF = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               effectName,
                               (const MethodInfo_2F3F0D8 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
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
    v26 = UnityEngine_Object__Instantiate_object__49174716(
            CommonEffectAsset_object,
            (UnityEngine_Transform_o *)effectDisplayTransform,
            (const MethodInfo_2EE58BC *)Method_UnityEngine_Object_Instantiate_GameObject____75989608);
    v27 = (WarBoardPopTextEffectPerformance_o *)sub_1B7640C(WarBoardPopTextEffectPerformance_TypeInfo);
    *(_QWORD *)&v35.fields.hasValue = 0LL;
    *(_QWORD *)&v35.fields.value.fields.y = 0LL;
    *(_QWORD *)&v36.fields.hasValue = 0LL;
    *(_QWORD *)&v36.fields.value.fields.y = 0LL;
    v28 = v27;
    WarBoardPopTextEffectPerformance___ctor(
      v27,
      0LL,
      (UnityEngine_GameObject_o *)v26,
      v35,
      v36,
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
        v32 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
        ++v19->fields._version;
        if ( items )
        {
          size = v19->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v19,
              (Il2CppObject *)v28,
              *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
            if ( taskList )
              goto LABEL_18;
          }
          else
          {
            v34 = &items->obj.klass + size;
            v19->fields._size = size + 1;
            v34[4] = (Il2CppClass *)v28;
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)v28, v29, v30);
            if ( taskList )
            {
LABEL_18:
              System_Collections_Generic_List_object___AddRange(
                (System_Collections_Generic_List_object__o *)taskList,
                (System_Collections_Generic_IEnumerable_T__o *)v19,
                (const MethodInfo_34D77E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
              return;
            }
          }
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( Instance )
          {
            WarBoardManager__AddTask_35313764(
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
    sub_1B7641C(Instance, v21);
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
    sub_1B7641C(iconSp, method);
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

  if ( (byte_4A2BAED & 1) == 0 )
  {
    sub_1B761C0(&WarBoardSimpleAnimationPerformance_TypeInfo, animationName);
    byte_4A2BAED = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  v6 = (WarBoardSimpleAnimationPerformance_o *)sub_1B7640C(WarBoardSimpleAnimationPerformance_TypeInfo);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct WarBoardWallData_o **p_wallData; // x20
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  char *wallData; // x0
  Il2CppObject *Component_object; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  UISprite_o *iconSp; // x21
  System_String_o *WALL_ICON_NAME; // x22
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  Il2CppObject *v28; // x0
  UnityEngine_Transform_o *transform; // x21
  struct WarBoardWallData_o *v30; // x8
  int v31; // s0
  __int64 breakPointMax_k__BackingField; // x21
  struct WarBoardBreakPointComponent_array *v35; // x0
  struct WarBoardBreakPointComponent_array **p_breakPoints; // x22
  int32_t v37; // w2
  int32_t v38; // w3
  unsigned __int64 v39; // x26
  float v40; // s8
  __int64 v41; // x23
  int v42; // w27
  float v43; // s9
  __int64 v44; // x28
  Il2CppObject *breakPointPrefab; // x24
  UnityEngine_Transform_o *v46; // x25
  UnityEngine_GameObject_o *v47; // x25
  WarBoardBreakPointComponent_o *v48; // x24
  struct UIWidget_o *breakPointParent; // x8
  unsigned int *v50; // x25
  int32_t v51; // w2
  int32_t v52; // w3
  struct WarBoardBreakPointComponent_array *v53; // x8
  float maxSpacing; // s0
  UnityEngine_Transform_array *v55; // x20
  int32_t v56; // w2
  int32_t v57; // w3
  UnityEngine_Transform_o *v58; // x21
  const MethodInfo *v59; // x2
  struct WarBoardWallData_o *v60; // x8
  __int64 v61; // x0
  int32_t wallImageId; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A2BAE7 & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, data);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___, v7);
    sub_1B761C0(&int_TypeInfo, v8);
    sub_1B761C0(&Method_UnityEngine_Object_Instantiate_GameObject____75989608, v9);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v10);
    sub_1B761C0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_1B761C0(&UnityEngine_Transform___TypeInfo, v12);
    sub_1B761C0(&WarBoardBreakPointComponent___TypeInfo, v13);
    sub_1B761C0(&WarBoardWallComponent_TypeInfo, v14);
    byte_4A2BAE7 = 1;
  }
  this->fields.wallData = data;
  p_wallData = &this->fields.wallData;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields.wallData,
    (int32_t)data,
    (int32_t)wallIconAtlas,
    (int32_t)method);
  wallData = (char *)this->fields.wallData;
  if ( !wallData )
    goto LABEL_34;
  *((_QWORD *)wallData + 7) = this;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(wallData + 56), (int32_t)this, v17, v18);
  wallData = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !wallData )
    goto LABEL_34;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)wallData,
                       (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)Component_object;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.simpleAnimation, (int32_t)Component_object, v21, v22);
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
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &wallImageId, v25, v26, v27);
  wallData = (char *)System_String__Format(WALL_ICON_NAME, v28, 0LL);
  if ( !iconSp )
    goto LABEL_34;
  UISprite__set_spriteName(iconSp, (System_String_o *)wallData, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  wallData = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v30 = this->fields.wallData;
  if ( !v30 )
    goto LABEL_34;
  if ( !wallData )
    goto LABEL_34;
  *(UnityEngine_Vector3_o *)&v31 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)wallData,
                                     v30->fields._squareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_34;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v31, 0LL);
  if ( !*p_wallData )
    goto LABEL_34;
  breakPointMax_k__BackingField = (unsigned int)(*p_wallData)->fields._breakPointMax_k__BackingField;
  v35 = (struct WarBoardBreakPointComponent_array *)sub_1B76268(
                                                      WarBoardBreakPointComponent___TypeInfo,
                                                      (unsigned int)breakPointMax_k__BackingField);
  this->fields.breakPoints = v35;
  p_breakPoints = &this->fields.breakPoints;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.breakPoints, (int32_t)v35, v37, v38);
  wallData = (char *)this->fields.breakPointParent;
  if ( !wallData )
    goto LABEL_34;
  if ( (int)breakPointMax_k__BackingField >= 1 )
  {
    v39 = 0LL;
    v40 = 0.0;
    v41 = 1LL;
    v42 = 2 * breakPointMax_k__BackingField - 2;
    v43 = (float)*((int *)wallData + 42) / (float)(int)breakPointMax_k__BackingField;
    v44 = 8LL;
    do
    {
      breakPointPrefab = (Il2CppObject *)this->fields.breakPointPrefab;
      v46 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)wallData, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      wallData = (char *)UnityEngine_Object__Instantiate_object__49174716(
                           breakPointPrefab,
                           v46,
                           (const MethodInfo_2EE58BC *)Method_UnityEngine_Object_Instantiate_GameObject____75989608);
      if ( !wallData )
        break;
      v47 = (UnityEngine_GameObject_o *)wallData;
      v48 = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)wallData,
                                               (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      wallData = (char *)UnityEngine_GameObject__get_transform(v47, 0LL);
      if ( !wallData )
        break;
      v63.fields.y = 0.0;
      v63.fields.z = 0.0;
      v63.fields.x = v40;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)wallData, v63, 0LL);
      breakPointParent = this->fields.breakPointParent;
      if ( !breakPointParent )
        break;
      if ( !v48 )
        break;
      WarBoardBreakPointComponent__Initialize(v48, v42 + breakPointParent->fields.mDepth, v41, 0, 0, 1, 0LL);
      v50 = (unsigned int *)*p_breakPoints;
      if ( !*p_breakPoints )
        break;
      wallData = (char *)sub_1B762FC(v48, *(_QWORD *)(*(_QWORD *)v50 + 64LL));
      if ( !wallData )
        goto LABEL_43;
      if ( v39 >= v50[6] )
        goto LABEL_42;
      *(_QWORD *)&v50[v44] = v48;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&v50[v44], (int32_t)v48, v51, v52);
      v53 = *p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_34;
      if ( v39 >= v53->max_length )
        goto LABEL_42;
      if ( !*p_wallData )
        break;
      wallData = *(char **)((char *)&v53->obj.klass + v44 * 4);
      if ( !wallData )
        break;
      WarBoardBreakPointComponent__SetActive(
        (WarBoardBreakPointComponent_o *)wallData,
        (__int64)v39 < (*p_wallData)->fields._breakPoint_k__BackingField,
        0,
        0LL);
      if ( breakPointMax_k__BackingField == v41 )
        goto LABEL_35;
      maxSpacing = v48->fields.maxSpacing;
      wallData = (char *)this->fields.breakPointParent;
      ++v39;
      v42 -= 2;
      if ( maxSpacing >= v43 )
        maxSpacing = v43;
      ++v41;
      v40 = v40 + maxSpacing;
      v44 += 2LL;
    }
    while ( wallData );
    goto LABEL_34;
  }
LABEL_35:
  v55 = (UnityEngine_Transform_array *)sub_1B76268(UnityEngine_Transform___TypeInfo, 1LL);
  wallData = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v55 )
    goto LABEL_34;
  v58 = (UnityEngine_Transform_o *)wallData;
  if ( wallData )
  {
    wallData = (char *)sub_1B762FC(wallData, v55->obj.klass->_1.element_class);
    if ( !wallData )
    {
LABEL_43:
      v61 = sub_1B76440(wallData);
      sub_1B762E8(v61, 0LL);
    }
  }
  if ( !v55->max_length )
LABEL_42:
    sub_1B76424(wallData, v16);
  v55->m_Items[0] = v58;
  sub_1B76164((ServantStatusBattleListViewItem_o *)v55->m_Items, (int32_t)v58, v56, v57);
  WarBoardWallComponent__SetButtonTweenTarget(this, v55, v59);
  wallData = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v60 = this->fields.wallData;
  if ( !v60 || !wallData )
LABEL_34:
    sub_1B7641C(wallData, v16);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wallData, !v60->fields._isDestroy_k__BackingField, 0LL);
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
    sub_1B7641C(this, *(_QWORD *)&oldBreakPoint);
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
        sub_1B76424(this, *(_QWORD *)&oldBreakPoint);
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
  if ( (byte_4A2BAEB & 1) == 0 )
  {
    sub_1B761C0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    this = (WarBoardWallComponent_o *)sub_1B761C0(&Method_WarBoardWallComponent_OnClick__, v3);
    byte_4A2BAEB = 1;
  }
  wallData = v2->fields.wallData;
  if ( !wallData )
    goto LABEL_22;
  if ( wallData->fields._isDestroy_k__BackingField )
    return;
  this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)this, 0LL) && v2->fields.isSelectable )
  {
    v5 = Method_WarBoardWallComponent_OnClick__;
    if ( (*((_BYTE *)Method_WarBoardWallComponent_OnClick__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B761D8(Method_WarBoardWallComponent_OnClick__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B761A4(v5, v5[4]);
    this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( this )
    {
      m_CancellationTokenSource = this[3].fields.m_CancellationTokenSource;
      if ( m_CancellationTokenSource )
      {
        OverwriteAssetSoundName__PlaySe(
          v6,
          (System_String_o *)m_CancellationTokenSource->fields._registeredCallbacksLists,
          0LL);
        this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1B7641C(this, method);
  }
  v9 = Method_WarBoardWallComponent_OnClick__;
  if ( (*((_BYTE *)Method_WarBoardWallComponent_OnClick__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1B761D8(Method_WarBoardWallComponent_OnClick__);
  v10 = (System_Reflection_MethodBase_o *)sub_1B761A4(v9, v9[4]);
  this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  v11 = this[3].fields.m_CancellationTokenSource;
  if ( !v11 )
    goto LABEL_22;
  OverwriteAssetSoundName__PlaySe(v10, *(System_String_o **)&v11->fields._disposed, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  ServantStatusBattleListViewItem_o *v20; // x22
  System_Delegate_o *v21; // x23
  WarBoardTaskBase_TaskCallback_o *v22; // x24
  System_Delegate_o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_Delegate_o *v26; // x8
  WarBoardTaskBase_TaskCallback_c *v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  Il2CppObject *Instance; // x19
  char *v37; // x21
  __int64 v38; // x0
  __int64 v39; // x1
  int32_t v40; // w2
  int32_t v41; // w3
  __int64 v42; // x0
  int32_t wallDestroyEffectId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A2BAEE & 1) == 0 )
  {
    sub_1B761C0(&int_TypeInfo, taskList);
    sub_1B761C0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_1B761C0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_1B761C0(&WarBoardTaskBase_TaskCallback_TypeInfo, v7);
    sub_1B761C0(&WarBoardTaskBase___TypeInfo, v8);
    sub_1B761C0(&Method_WarBoardWallComponent__OnDead_b__22_0__, v9);
    sub_1B761C0(&WarBoardWallComponent_TypeInfo, v10);
    byte_4A2BAEE = 1;
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
  v20 = (ServantStatusBattleListViewItem_o *)(wallData + 40);
  v21 = (System_Delegate_o *)*((_QWORD *)wallData + 5);
  v22 = (WarBoardTaskBase_TaskCallback_o *)sub_1B7640C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(v22, (Il2CppObject *)this, Method_WarBoardWallComponent__OnDead_b__22_0__, 0LL);
  v23 = System_Delegate__Combine(v21, (System_Delegate_o *)v22, 0LL);
  v26 = v23;
  if ( !v23 )
    goto LABEL_11;
  v27 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v23->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (v20->klass = (ServantStatusBattleListViewItem_c *)v23, (WarBoardTaskBase_TaskCallback_c *)v23->klass != v27) )
  {
    sub_1B766DC(v23);
LABEL_11:
    v20->klass = (ServantStatusBattleListViewItem_c *)v26;
  }
  sub_1B76164(v20, (int32_t)v26, v24, v25);
  wallData = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !wallData )
    goto LABEL_24;
  *((_QWORD *)wallData + 128) = v19;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(wallData + 1024), (int32_t)v19, v28, v29);
  if ( !taskList )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    wallData = (char *)sub_1B76268(WarBoardTaskBase___TypeInfo, 1LL);
    if ( wallData )
    {
      v37 = wallData;
      v38 = sub_1B762FC(v19, *(_QWORD *)(*(_QWORD *)wallData + 64LL));
      if ( !v38 )
      {
        v42 = sub_1B76440(0LL);
        sub_1B762E8(v42, 0LL);
      }
      if ( !*((_DWORD *)v37 + 6) )
        sub_1B76424(v38, v39);
      *((_QWORD *)v37 + 4) = v19;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v37 + 32), (int32_t)v19, v40, v41);
      if ( Instance )
      {
        WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v37, 0LL);
        return;
      }
    }
LABEL_24:
    sub_1B7641C(wallData, taskList);
  }
  items = taskList->fields._items;
  v33 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++taskList->fields._version;
  if ( !items )
    goto LABEL_24;
  size = taskList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)taskList,
      v19,
      *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = &items->obj.klass + size;
    taskList->fields._size = size + 1;
    v35[4] = (Il2CppClass *)v19;
    sub_1B76164((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v19, v30, v31);
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
  if ( (byte_4A2BAEC & 1) == 0 )
  {
    sub_1B761C0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    this = (WarBoardWallComponent_o *)sub_1B761C0(&Method_WarBoardWallComponent_OnLongClick__, v3);
    byte_4A2BAEC = 1;
  }
  klass = v2[3].klass;
  if ( !klass )
    goto LABEL_12;
  if ( LOBYTE(klass->_1.byval_arg.data) )
    return;
  v5 = Method_WarBoardWallComponent_OnLongClick__;
  if ( (*((_BYTE *)Method_WarBoardWallComponent_OnLongClick__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B761D8(Method_WarBoardWallComponent_OnLongClick__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B761A4(v5, v5[4]);
  this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this
    || (m_CancellationTokenSource = this[3].fields.m_CancellationTokenSource) == 0LL
    || (OverwriteAssetSoundName__PlaySe(v6, *(System_String_o **)&m_CancellationTokenSource->fields._disposed, 0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        v9 = (WarBoardWallData_o *)v2[3].klass,
        v10 = (WarBoardManager_o *)Instance,
        (this = (WarBoardWallComponent_o *)UnityEngine_Component__get_transform(v2, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL), !v10) )
  {
LABEL_12:
    sub_1B7641C(this, method);
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

  if ( (byte_4A2BAF0 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, popText);
    sub_1B761C0(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v9);
    sub_1B761C0(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v10);
    sub_1B761C0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_1B761C0(&StringLiteral_18821/*"ef_dm_base"*/, v12);
    byte_4A2BAF0 = 1;
  }
  gameObject = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
  {
    v15 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v15,
      (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    if ( !System_String__IsNullOrEmpty(popText, 0LL) )
      WarBoardWallComponent__CreateEffectText(
        this,
        (System_String_o *)StringLiteral_18821/*"ef_dm_base"*/,
        popText,
        popTextColor,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)v15,
        v16);
    if ( taskList )
    {
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v15,
        (const MethodInfo_34D77E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      return;
    }
    gameObject = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( gameObject )
    {
      WarBoardManager__AddTask_35313764(gameObject, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v15, 0LL);
      return;
    }
LABEL_12:
    sub_1B7641C(gameObject, v14);
  }
}


void __fastcall WarBoardWallComponent__Selectable(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  struct WarBoardWallData_o *wallData; // x8

  wallData = this->fields.wallData;
  if ( !wallData )
    sub_1B7641C(this, method);
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
  UnityEngine_Component_o *ComponentsInChildren_object; // x0
  __int64 v12; // x1
  signed int max_length; // w8
  unsigned int v14; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v16; // x22
  unsigned __int64 v17; // x29
  UnityEngine_Object_o *v18; // x23
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  UnityEngine_Component_o *v24; // x1
  Il2CppClass **v25; // x0
  struct UICommonButton_o *button; // x19
  int32_t v27; // w2
  int32_t v28; // w3

  if ( (byte_4A2BAE8 & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75925464, parents);
    sub_1B761C0(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_1B761C0(&Method_System_Collections_Generic_List_GameObject__Contains__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_GameObject__ToArray__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_GameObject___ctor__, v7);
    sub_1B761C0(&System_Collections_Generic_List_GameObject__TypeInfo, v8);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v9);
    byte_4A2BAE8 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
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
        ComponentsInChildren_object = (UnityEngine_Component_o *)parents->m_Items[v14];
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                   ComponentsInChildren_object,
                                                                   1,
                                                                   (const MethodInfo_2E59998 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75925464);
        if ( ComponentsInChildren_object )
        {
          klass = ComponentsInChildren_object[1].klass;
          v16 = ComponentsInChildren_object;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_23:
        max_length = parents->max_length;
        if ( (int)++v14 >= max_length )
          goto LABEL_24;
      }
      v17 = 0LL;
      while ( v17 < (unsigned int)klass )
      {
        v18 = (UnityEngine_Object_o *)*((_QWORD *)&v16[1].monitor + v17);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
        {
          if ( !v18 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)v18,
                                                                     0LL);
          if ( !v10 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___Contains(
                                                                     v10,
                                                                     (Il2CppObject *)ComponentsInChildren_object,
                                                                     (const MethodInfo_34D7964 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)v18,
                                                                       0LL);
            items = v10->fields._items;
            v22 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v10->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v10->fields._size;
            v24 = ComponentsInChildren_object;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v25 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v25[4] = (Il2CppClass *)v24;
              sub_1B76164((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v24, v19, v20);
            }
          }
        }
        LODWORD(klass) = v16[1].klass;
        if ( (__int64)++v17 >= (int)klass )
          goto LABEL_23;
      }
LABEL_28:
      sub_1B76424(ComponentsInChildren_object, v12);
    }
  }
LABEL_24:
  if ( !v10
    || (button = this->fields.button,
        ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                                   v10,
                                                                   (const MethodInfo_34D912C *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1B7641C(ComponentsInChildren_object, v12);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&button->fields.tweenTargets,
    (int32_t)ComponentsInChildren_object,
    v27,
    v28);
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

  if ( (byte_4A2BAEA & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, enable);
    byte_4A2BAEA = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1B7641C(0LL, v6);
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

  if ( (byte_4A2BAE9 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, enable);
    byte_4A2BAE9 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1B7641C(0LL, v6);
    UICommonButton__SetButtonEnableAndKeepState(v7, enable, 0, 0LL);
  }
}


void __fastcall WarBoardWallComponent__Unselectable(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  struct WarBoardWallData_o *wallData; // x8

  wallData = this->fields.wallData;
  if ( !wallData )
    sub_1B7641C(this, method);
  if ( !wallData->fields._isDestroy_k__BackingField )
    this->fields.isSelectable = 0;
}


void __fastcall WarBoardWallComponent___OnDead_b__22_0(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B7641C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}