void WarBoardWallComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct WarBoardWallComponent_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C24C36 & 1) == 0 )
  {
    sub_1C2D490(&WarBoardWallComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_20716/*"img_wall_{0}"*/);
    sub_1C2D490(&StringLiteral_3219/*"BreakWall_{0:00}"*/);
    byte_4C24C36 = 1;
  }
  WarBoardWallComponent_TypeInfo->static_fields->WALL_ICON_NAME = (struct System_String_o *)StringLiteral_20716/*"img_wall_{0}"*/;
  sub_1C2D434((CGThumbnailListItem_o *)WarBoardWallComponent_TypeInfo->static_fields, StringLiteral_20716/*"img_wall_{0}"*/, v1, v2);
  v3 = StringLiteral_3219/*"BreakWall_{0:00}"*/;
  static_fields = WarBoardWallComponent_TypeInfo->static_fields;
  static_fields->BREAK_ANIMATION_NAME = (struct System_String_o *)StringLiteral_3219/*"BreakWall_{0:00}"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->BREAK_ANIMATION_NAME, v3, v5, v6);
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
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Nullable_Vector3__o v27; // 0:x3.16
  System_Nullable_Vector3__o v28; // 0:x5.16

  if ( (byte_4C24C34 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    sub_1C2D490(&WarBoardPopTextEffectPerformance_TypeInfo);
    byte_4C24C34 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               effectName,
                               (const MethodInfo_31B3A34 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
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
    v18 = UnityEngine_Object__Instantiate_object__51752420(
            CommonEffectAsset_object,
            (UnityEngine_Transform_o *)effectDisplayTransform,
            (const MethodInfo_315ADE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    v19 = (WarBoardPopTextEffectPerformance_o *)sub_1C2D6DC(WarBoardPopTextEffectPerformance_TypeInfo);
    *(_QWORD *)&v27.fields.hasValue = 0;
    *(_QWORD *)&v27.fields.value.fields.y = 0;
    *(_QWORD *)&v28.fields.hasValue = 0;
    *(_QWORD *)&v28.fields.value.fields.y = 0;
    v20 = v19;
    WarBoardPopTextEffectPerformance___ctor(
      v19,
      0,
      (UnityEngine_GameObject_o *)v18,
      v27,
      v28,
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
        v24 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
        ++v11->fields._version;
        if ( items )
        {
          size = v11->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)v20,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            if ( taskList )
              goto LABEL_18;
          }
          else
          {
            v26 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v26[4] = (Il2CppClass *)v20;
            sub_1C2D434((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v20, v21, v22);
            if ( taskList )
            {
LABEL_18:
              System_Collections_Generic_List_object___AddRange(
                (System_Collections_Generic_List_object__o *)taskList,
                (System_Collections_Generic_IEnumerable_T__o *)v11,
                (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
              return;
            }
          }
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( Instance )
          {
            WarBoardManager__AddTask_37855764(
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
    sub_1C2D6EC(Instance, v13);
  }
}


UnityEngine_Vector3_o WarBoardWallComponent__GetIconPosition(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *iconSp; // x0

  iconSp = (UnityEngine_Component_o *)this->fields.iconSp;
  if ( !iconSp || (iconSp = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconSp, 0)) == 0 )
    sub_1C2D6EC(iconSp, method);
  return UnityEngine_Transform__get_position((UnityEngine_Transform_o *)iconSp, 0);
}


WarBoardSimpleAnimationPerformance_o *WarBoardWallComponent__GetSimpleAnimationPerformance(
        WarBoardWallComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x20
  WarBoardSimpleAnimationPerformance_o *v6; // x21

  if ( (byte_4C24C32 & 1) == 0 )
  {
    sub_1C2D490(&WarBoardSimpleAnimationPerformance_TypeInfo);
    byte_4C24C32 = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  v6 = (WarBoardSimpleAnimationPerformance_o *)sub_1C2D6DC(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(v6, simpleAnimation, animationName, 0);
  return v6;
}


void WarBoardWallComponent__Initialize(
        WarBoardWallComponent_o *this,
        WarBoardWallData_o *data,
        UIAtlas_o *wallIconAtlas,
        const MethodInfo *method)
{
  struct WarBoardWallData_o **p_wallData; // x20
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  char *wallData; // x0
  Il2CppObject *Component_object; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UISprite_o *iconSp; // x21
  System_String_o *WALL_ICON_NAME; // x22
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x0
  UnityEngine_Transform_o *transform; // x21
  struct WarBoardWallData_o *v22; // x8
  __int64 breakPointMax_k__BackingField; // x21
  struct WarBoardBreakPointComponent_array *v24; // x0
  struct WarBoardBreakPointComponent_array **p_breakPoints; // x22
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  unsigned __int64 v28; // x26
  float v29; // s8
  __int64 v30; // x23
  int v31; // w27
  float v32; // s9
  __int64 v33; // x28
  Il2CppObject *breakPointPrefab; // x24
  UnityEngine_Transform_o *v35; // x25
  UnityEngine_GameObject_o *v36; // x25
  WarBoardBreakPointComponent_o *v37; // x24
  struct UIWidget_o *breakPointParent; // x8
  unsigned int *v39; // x25
  __int64 v40; // x2
  const MethodInfo *v41; // x3
  struct WarBoardBreakPointComponent_array *v42; // x8
  float maxSpacing; // s0
  UnityEngine_Transform_array *v44; // x20
  const MethodInfo *v45; // x3
  UnityEngine_Transform_o *v46; // x21
  const MethodInfo *v47; // x2
  struct WarBoardWallData_o *v48; // x8
  __int64 v49; // x0
  int32_t wallImageId; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C24C2C & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&UnityEngine_Transform___TypeInfo);
    sub_1C2D490(&WarBoardBreakPointComponent___TypeInfo);
    sub_1C2D490(&WarBoardWallComponent_TypeInfo);
    byte_4C24C2C = 1;
  }
  this->fields.wallData = data;
  p_wallData = &this->fields.wallData;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.wallData, (int32_t)data, (int32_t)wallIconAtlas, method);
  wallData = (char *)this->fields.wallData;
  if ( !wallData )
    goto LABEL_34;
  *((_QWORD *)wallData + 7) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(wallData + 56), (int32_t)this, v9, v10);
  wallData = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !wallData )
    goto LABEL_34;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)wallData,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)Component_object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.simpleAnimation, (int32_t)Component_object, v13, v14);
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
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &wallImageId, v17, v18, v19);
  wallData = (char *)System_String__Format(WALL_ICON_NAME, v20, 0);
  if ( !iconSp )
    goto LABEL_34;
  UISprite__set_spriteName(iconSp, (System_String_o *)wallData, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  wallData = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v22 = this->fields.wallData;
  if ( !v22 )
    goto LABEL_34;
  if ( !wallData )
    goto LABEL_34;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)wallData,
                     v22->fields._squareIndex_k__BackingField,
                     0);
  if ( !transform )
    goto LABEL_34;
  UnityEngine_Transform__set_localPosition(transform, SquarePosition, 0);
  if ( !*p_wallData )
    goto LABEL_34;
  breakPointMax_k__BackingField = (unsigned int)(*p_wallData)->fields._breakPointMax_k__BackingField;
  v24 = (struct WarBoardBreakPointComponent_array *)sub_1C2D538(
                                                      WarBoardBreakPointComponent___TypeInfo,
                                                      (unsigned int)breakPointMax_k__BackingField);
  this->fields.breakPoints = v24;
  p_breakPoints = &this->fields.breakPoints;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.breakPoints, (int32_t)v24, v26, v27);
  wallData = (char *)this->fields.breakPointParent;
  if ( !wallData )
    goto LABEL_34;
  if ( (int)breakPointMax_k__BackingField >= 1 )
  {
    v28 = 0;
    v29 = 0.0;
    v30 = 1;
    v31 = 2 * breakPointMax_k__BackingField - 2;
    v32 = (float)*((int *)wallData + 42) / (float)(int)breakPointMax_k__BackingField;
    v33 = 8;
    do
    {
      breakPointPrefab = (Il2CppObject *)this->fields.breakPointPrefab;
      v35 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)wallData, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      wallData = (char *)UnityEngine_Object__Instantiate_object__51752420(
                           breakPointPrefab,
                           v35,
                           (const MethodInfo_315ADE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78081576);
      if ( !wallData )
        break;
      v36 = (UnityEngine_GameObject_o *)wallData;
      v37 = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)wallData,
                                               (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      wallData = (char *)UnityEngine_GameObject__get_transform(v36, 0);
      if ( !wallData )
        break;
      v52.fields.y = 0.0;
      v52.fields.z = 0.0;
      v52.fields.x = v29;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)wallData, v52, 0);
      breakPointParent = this->fields.breakPointParent;
      if ( !breakPointParent )
        break;
      if ( !v37 )
        break;
      WarBoardBreakPointComponent__Initialize(v37, v31 + breakPointParent->fields.mDepth, v30, 0, 0, 1, 0);
      v39 = (unsigned int *)*p_breakPoints;
      if ( !*p_breakPoints )
        break;
      wallData = (char *)sub_1C2D5CC(v37, *(_QWORD *)(*(_QWORD *)v39 + 64LL));
      if ( !wallData )
        goto LABEL_43;
      if ( v28 >= v39[6] )
        goto LABEL_42;
      *(_QWORD *)&v39[v33] = v37;
      sub_1C2D434((CGThumbnailListItem_o *)&v39[v33], (int32_t)v37, v40, v41);
      v42 = *p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_34;
      if ( v28 >= LODWORD(v42->max_length) )
        goto LABEL_42;
      if ( !*p_wallData )
        break;
      wallData = *(char **)((char *)&v42->obj.klass + v33 * 4);
      if ( !wallData )
        break;
      WarBoardBreakPointComponent__SetActive(
        (WarBoardBreakPointComponent_o *)wallData,
        (__int64)v28 < (*p_wallData)->fields._breakPoint_k__BackingField,
        0,
        0);
      if ( breakPointMax_k__BackingField == v30 )
        goto LABEL_35;
      maxSpacing = v37->fields.maxSpacing;
      wallData = (char *)this->fields.breakPointParent;
      ++v28;
      v31 -= 2;
      if ( maxSpacing >= v32 )
        maxSpacing = v32;
      ++v30;
      v29 = v29 + maxSpacing;
      v33 += 2;
    }
    while ( wallData );
    goto LABEL_34;
  }
LABEL_35:
  v44 = (UnityEngine_Transform_array *)sub_1C2D538(UnityEngine_Transform___TypeInfo, 1);
  wallData = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !v44 )
    goto LABEL_34;
  v46 = (UnityEngine_Transform_o *)wallData;
  if ( wallData )
  {
    wallData = (char *)sub_1C2D5CC(wallData, v44->obj.klass->_1.element_class);
    if ( !wallData )
    {
LABEL_43:
      v49 = sub_1C2D710();
      sub_1C2D5B8(v49, 0);
    }
  }
  if ( !LODWORD(v44->max_length) )
LABEL_42:
    sub_1C2D6F4(wallData, v8, v40);
  v44->m_Items[0] = v46;
  sub_1C2D434((CGThumbnailListItem_o *)v44->m_Items, (int32_t)v46, v40, v45);
  WarBoardWallComponent__SetButtonTweenTarget(this, v44, v47);
  wallData = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v48 = this->fields.wallData;
  if ( !v48 || !wallData )
LABEL_34:
    sub_1C2D6EC(wallData, v8);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wallData, !v48->fields._isDestroy_k__BackingField, 0);
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
    sub_1C2D6EC(this, *(_QWORD *)&oldBreakPoint);
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
        sub_1C2D6F4(this, *(_QWORD *)&oldBreakPoint, taskList);
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
  if ( (byte_4C24C30 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardWallComponent_o *)sub_1C2D490(&Method_WarBoardWallComponent_OnClick__);
    byte_4C24C30 = 1;
  }
  wallData = v2->fields.wallData;
  if ( !wallData )
    goto LABEL_22;
  if ( wallData->fields._isDestroy_k__BackingField )
    return;
  this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)this, 0) && v2->fields.isSelectable )
  {
    v4 = Method_WarBoardWallComponent_OnClick__;
    if ( (*((_BYTE *)Method_WarBoardWallComponent_OnClick__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C2D4A8(Method_WarBoardWallComponent_OnClick__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
    this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1C2D6EC(this, method);
  }
  v8 = Method_WarBoardWallComponent_OnClick__;
  if ( (*((_BYTE *)Method_WarBoardWallComponent_OnClick__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1C2D4A8(Method_WarBoardWallComponent_OnClick__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C2D474(v8, v8[4]);
  this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  v10 = this[3].fields.m_CancellationTokenSource;
  if ( !v10 )
    goto LABEL_22;
  OverwriteAssetSoundName__PlaySe(v9, *(System_String_o **)&v10->fields._disposed, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  const MethodInfo *v12; // x2
  Il2CppObject *v13; // x20
  CGThumbnailListItem_o *v14; // x22
  System_Delegate_o *v15; // x23
  WarBoardTaskBase_TaskCallback_o *v16; // x24
  System_Delegate_o *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Delegate_o *v20; // x8
  WarBoardTaskBase_TaskCallback_c *v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  Il2CppObject *Instance; // x19
  char *v31; // x21
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  const MethodInfo *v35; // x3
  __int64 v36; // x0
  int32_t wallDestroyEffectId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C24C33 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C2D490(&WarBoardTaskBase___TypeInfo);
    sub_1C2D490(&Method_WarBoardWallComponent__OnDead_b__22_0__);
    sub_1C2D490(&WarBoardWallComponent_TypeInfo);
    byte_4C24C33 = 1;
  }
  if ( !WarBoardWallComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardWallComponent_TypeInfo);
  wallData = (char *)this->fields.wallData;
  if ( !wallData )
    goto LABEL_24;
  BREAK_ANIMATION_NAME = WarBoardWallComponent_TypeInfo->static_fields->BREAK_ANIMATION_NAME;
  wallDestroyEffectId = WarBoardWallData__get_wallDestroyEffectId((WarBoardWallData_o *)wallData, 0);
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &wallDestroyEffectId, v7, v8, v9);
  v11 = System_String__Format(BREAK_ANIMATION_NAME, v10, 0);
  wallData = (char *)WarBoardWallComponent__GetSimpleAnimationPerformance(this, v11, v12);
  if ( !wallData )
    goto LABEL_24;
  v13 = (Il2CppObject *)wallData;
  v14 = (CGThumbnailListItem_o *)(wallData + 40);
  v15 = (System_Delegate_o *)*((_QWORD *)wallData + 5);
  v16 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2D6DC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(v16, (Il2CppObject *)this, Method_WarBoardWallComponent__OnDead_b__22_0__, 0);
  v17 = System_Delegate__Combine(v15, (System_Delegate_o *)v16, 0);
  v20 = v17;
  if ( !v17 )
    goto LABEL_11;
  v21 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v17->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (v14->klass = (CGThumbnailListItem_c *)v17, (WarBoardTaskBase_TaskCallback_c *)v17->klass != v21) )
  {
    sub_1C2D9AC(v17);
LABEL_11:
    v14->klass = (CGThumbnailListItem_c *)v20;
  }
  sub_1C2D434(v14, (int32_t)v20, v18, v19);
  wallData = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !wallData )
    goto LABEL_24;
  *((_QWORD *)wallData + 127) = v13;
  sub_1C2D434((CGThumbnailListItem_o *)(wallData + 1016), (int32_t)v13, v22, v23);
  if ( !taskList )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    wallData = (char *)sub_1C2D538(WarBoardTaskBase___TypeInfo, 1);
    if ( wallData )
    {
      v31 = wallData;
      v32 = sub_1C2D5CC(v13, *(_QWORD *)(*(_QWORD *)wallData + 64LL));
      if ( !v32 )
      {
        v36 = sub_1C2D710();
        sub_1C2D5B8(v36, 0);
      }
      if ( !*((_DWORD *)v31 + 6) )
        sub_1C2D6F4(v32, v33, v34);
      *((_QWORD *)v31 + 4) = v13;
      sub_1C2D434((CGThumbnailListItem_o *)(v31 + 32), (int32_t)v13, v34, v35);
      if ( Instance )
      {
        WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v31, 0);
        return;
      }
    }
LABEL_24:
    sub_1C2D6EC(wallData, taskList);
  }
  items = taskList->fields._items;
  v27 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++taskList->fields._version;
  if ( !items )
    goto LABEL_24;
  size = taskList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)taskList,
      v13,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &items->obj.klass + size;
    taskList->fields._size = size + 1;
    v29[4] = (Il2CppClass *)v13;
    sub_1C2D434((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v13, v24, v25);
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
  if ( (byte_4C24C31 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardWallComponent_o *)sub_1C2D490(&Method_WarBoardWallComponent_OnLongClick__);
    byte_4C24C31 = 1;
  }
  klass = v2[3].klass;
  if ( !klass )
    goto LABEL_12;
  if ( LOBYTE(klass->_1.byval_arg.data) )
    return;
  v4 = Method_WarBoardWallComponent_OnLongClick__;
  if ( (*((_BYTE *)Method_WarBoardWallComponent_OnLongClick__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C2D4A8(Method_WarBoardWallComponent_OnLongClick__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
  this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this
    || (m_CancellationTokenSource = this[3].fields.m_CancellationTokenSource) == 0
    || (OverwriteAssetSoundName__PlaySe(v5, *(System_String_o **)&m_CancellationTokenSource->fields._disposed, 0, 0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        v8 = (WarBoardWallData_o *)v2[3].klass,
        v9 = (WarBoardManager_o *)Instance,
        (this = (WarBoardWallComponent_o *)UnityEngine_Component__get_transform(v2, 0)) == 0)
    || (position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0), !v9) )
  {
LABEL_12:
    sub_1C2D6EC(this, method);
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

  if ( (byte_4C24C35 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&StringLiteral_18817/*"ef_dm_base"*/);
    byte_4C24C35 = 1;
  }
  gameObject = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_12;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0) )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    if ( !System_String__IsNullOrEmpty(popText, 0) )
      WarBoardWallComponent__CreateEffectText(
        this,
        (System_String_o *)StringLiteral_18817/*"ef_dm_base"*/,
        popText,
        popTextColor,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)v11,
        v12);
    if ( taskList )
    {
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v11,
        (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      return;
    }
    gameObject = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( gameObject )
    {
      WarBoardManager__AddTask_37855764(gameObject, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v11, 0);
      return;
    }
LABEL_12:
    sub_1C2D6EC(gameObject, v10);
  }
}


void WarBoardWallComponent__Selectable(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  struct WarBoardWallData_o *wallData; // x8

  wallData = this->fields.wallData;
  if ( !wallData )
    sub_1C2D6EC(this, method);
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
  __int64 v7; // x2
  int max_length; // w8
  unsigned int v9; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v11; // x22
  unsigned __int64 v12; // x29
  UnityEngine_Object_o *v13; // x23
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  UnityEngine_Component_o *v19; // x1
  Il2CppClass **v20; // x0
  struct UICommonButton_o *button; // x19
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4C24C2D & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78016632);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24C2D = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= max_length )
          goto LABEL_28;
        ComponentsInChildren_object = (UnityEngine_Component_o *)parents->m_Items[v9];
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                   ComponentsInChildren_object,
                                                                   1,
                                                                   (const MethodInfo_30C5E44 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78016632);
        if ( ComponentsInChildren_object )
        {
          klass = ComponentsInChildren_object[1].klass;
          v11 = ComponentsInChildren_object;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_23:
        max_length = parents->max_length;
        if ( (int)++v9 >= max_length )
          goto LABEL_24;
      }
      v12 = 0;
      while ( v12 < (unsigned int)klass )
      {
        v13 = (UnityEngine_Object_o *)*((_QWORD *)&v11[1].monitor + v12);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                                                                     (const MethodInfo_3789F14 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)v13,
                                                                       0);
            items = v4->fields._items;
            v17 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v4->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v4->fields._size;
            v19 = ComponentsInChildren_object;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v4,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &items->obj.klass + size;
              v4->fields._size = size + 1;
              v20[4] = (Il2CppClass *)v19;
              sub_1C2D434((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
            }
          }
        }
        LODWORD(klass) = v11[1].klass;
        if ( (__int64)++v12 >= (int)klass )
          goto LABEL_23;
      }
LABEL_28:
      sub_1C2D6F4(ComponentsInChildren_object, v6, v7);
    }
  }
LABEL_24:
  if ( !v4
    || (button = this->fields.button,
        ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                                   v4,
                                                                   (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1C2D6EC(ComponentsInChildren_object, v6);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1C2D434((CGThumbnailListItem_o *)&button->fields.tweenTargets, (int32_t)ComponentsInChildren_object, v22, v23);
}


void WarBoardWallComponent__SetColliderEnable(WarBoardWallComponent_o *this, bool enable, const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0
  bool v8; // w1

  if ( (byte_4C24C2F & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24C2F = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(button, 0, 0) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1C2D6EC(0, v6);
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

  if ( (byte_4C24C2E & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24C2E = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0, 0) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1C2D6EC(0, v6);
    UICommonButton__SetButtonEnableAndKeepState(v7, enable, 0, 0);
  }
}


void WarBoardWallComponent__Unselectable(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  struct WarBoardWallData_o *wallData; // x8

  wallData = this->fields.wallData;
  if ( !wallData )
    sub_1C2D6EC(this, method);
  if ( !wallData->fields._isDestroy_k__BackingField )
    this->fields.isSelectable = 0;
}


void WarBoardWallComponent___OnDead_b__22_0(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}