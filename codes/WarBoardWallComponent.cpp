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

  if ( (byte_49F9FE7 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardWallComponent_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_20517/*"img_wall_{0}"*/, v4);
    sub_1B640C8(&StringLiteral_3316/*"BreakWall_{0:00}"*/, v5);
    byte_49F9FE7 = 1;
  }
  WarBoardWallComponent_TypeInfo->static_fields->WALL_ICON_NAME = (struct System_String_o *)StringLiteral_20517/*"img_wall_{0}"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)WarBoardWallComponent_TypeInfo->static_fields,
    StringLiteral_20517/*"img_wall_{0}"*/,
    v2,
    v3);
  v6 = StringLiteral_3316/*"BreakWall_{0:00}"*/;
  static_fields = WarBoardWallComponent_TypeInfo->static_fields;
  static_fields->BREAK_ANIMATION_NAME = (struct System_String_o *)StringLiteral_3316/*"BreakWall_{0:00}"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->BREAK_ANIMATION_NAME, v6, v8, v9);
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
  Il2CppObject *CommonEffectAsset_object; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *effectDisplayTransform; // x23
  UnityEngine_Object_o *v24; // x25
  Il2CppObject *v25; // x24
  __int64 v26; // x1
  __int64 v27; // x2
  WarBoardPopTextEffectPerformance_o *v28; // x0
  WarBoardPopTextEffectPerformance_o *v29; // x23
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  System_Nullable_Vector3__o v36; // 0:x3.16
  System_Nullable_Vector3__o v37; // 0:x5.16

  if ( (byte_49F9FE5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, effectName);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v13);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v14);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v16);
    sub_1B640C8(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v17);
    sub_1B640C8(&WarBoardPopTextEffectPerformance_TypeInfo, v18);
    byte_49F9FE5 = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       effectName,
                                                       popText);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               effectName,
                               (const MethodInfo_2F15D90 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    effectDisplayTransform = (UnityEngine_Object_o *)this->fields.effectDisplayTransform;
    v24 = (UnityEngine_Object_o *)transform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(effectDisplayTransform, 0LL, 0LL) )
      effectDisplayTransform = v24;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v25 = UnityEngine_Object__Instantiate_object__49003980(
            CommonEffectAsset_object,
            (UnityEngine_Transform_o *)effectDisplayTransform,
            (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
    v28 = (WarBoardPopTextEffectPerformance_o *)sub_1B64314(WarBoardPopTextEffectPerformance_TypeInfo, v26, v27);
    *(_QWORD *)&v36.fields.hasValue = 0LL;
    *(_QWORD *)&v36.fields.value.fields.y = 0LL;
    *(_QWORD *)&v37.fields.hasValue = 0LL;
    *(_QWORD *)&v37.fields.value.fields.y = 0LL;
    v29 = v28;
    WarBoardPopTextEffectPerformance___ctor(
      v28,
      0LL,
      (UnityEngine_GameObject_o *)v25,
      v36,
      v37,
      (System_Nullable_Vector3__o)0,
      0,
      1,
      0LL);
    if ( v29 )
    {
      WarBoardPopTextEffectPerformance__SetPopText(v29, popText, popTextColor, 0LL);
      if ( v19 )
      {
        items = v19->fields._items;
        v33 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
        ++v19->fields._version;
        if ( items )
        {
          size = v19->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v19,
              (Il2CppObject *)v29,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
            if ( taskList )
              goto LABEL_18;
          }
          else
          {
            v35 = &items->obj.klass + size;
            v19->fields._size = size + 1;
            v35[4] = (Il2CppClass *)v29;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v29, v30, v31);
            if ( taskList )
            {
LABEL_18:
              System_Collections_Generic_List_object___AddRange(
                (System_Collections_Generic_List_object__o *)taskList,
                (System_Collections_Generic_IEnumerable_T__o *)v19,
                (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
              return;
            }
          }
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( Instance )
          {
            WarBoardManager__AddTask_35188000(
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
    sub_1B64324(Instance);
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
    sub_1B64324(iconSp);
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

  if ( (byte_49F9FE3 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardSimpleAnimationPerformance_TypeInfo, animationName);
    byte_49F9FE3 = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  v6 = (WarBoardSimpleAnimationPerformance_o *)sub_1B64314(
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct WarBoardWallData_o **p_wallData; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  char *wallData; // x0
  Il2CppObject *Component_object; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  UISprite_o *iconSp; // x21
  System_String_o *WALL_ICON_NAME; // x22
  Il2CppObject *v24; // x0
  UnityEngine_Transform_o *transform; // x21
  struct WarBoardWallData_o *v26; // x8
  int v27; // s0
  __int64 breakPointMax_k__BackingField; // x21
  struct WarBoardBreakPointComponent_array *v31; // x0
  struct WarBoardBreakPointComponent_array **p_breakPoints; // x22
  int32_t v33; // w2
  int32_t v34; // w3
  unsigned __int64 v35; // x26
  float v36; // s8
  __int64 v37; // x23
  int v38; // w27
  float v39; // s9
  __int64 v40; // x28
  Il2CppObject *breakPointPrefab; // x24
  UnityEngine_Transform_o *v42; // x25
  UnityEngine_GameObject_o *v43; // x25
  WarBoardBreakPointComponent_o *v44; // x24
  struct UIWidget_o *breakPointParent; // x8
  unsigned int *v46; // x25
  __int64 v47; // x1
  int32_t v48; // w2
  int32_t v49; // w3
  struct WarBoardBreakPointComponent_array *v50; // x8
  float maxSpacing; // s0
  UnityEngine_Transform_array *v52; // x20
  int32_t v53; // w2
  int32_t v54; // w3
  UnityEngine_Transform_o *v55; // x21
  const MethodInfo *v56; // x2
  struct WarBoardWallData_o *v57; // x8
  __int64 v58; // x0
  int32_t wallImageId; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F9FDD & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, data);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___, v7);
    sub_1B640C8(&int_TypeInfo, v8);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_1B640C8(&UnityEngine_Transform___TypeInfo, v12);
    sub_1B640C8(&WarBoardBreakPointComponent___TypeInfo, v13);
    sub_1B640C8(&WarBoardWallComponent_TypeInfo, v14);
    byte_49F9FDD = 1;
  }
  this->fields.wallData = data;
  p_wallData = &this->fields.wallData;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.wallData,
    (int32_t)data,
    (int32_t)wallIconAtlas,
    (int32_t)method);
  wallData = (char *)this->fields.wallData;
  if ( !wallData )
    goto LABEL_34;
  *((_QWORD *)wallData + 7) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(wallData + 56), (int32_t)this, v16, v17);
  wallData = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !wallData )
    goto LABEL_34;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)wallData,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.simpleAnimation, (int32_t)Component_object, v20, v21);
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
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &wallImageId);
  wallData = (char *)System_String__Format(WALL_ICON_NAME, v24, 0LL);
  if ( !iconSp )
    goto LABEL_34;
  UISprite__set_spriteName(iconSp, (System_String_o *)wallData, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  wallData = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v26 = this->fields.wallData;
  if ( !v26 )
    goto LABEL_34;
  if ( !wallData )
    goto LABEL_34;
  *(UnityEngine_Vector3_o *)&v27 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)wallData,
                                     v26->fields._squareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_34;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v27, 0LL);
  if ( !*p_wallData )
    goto LABEL_34;
  breakPointMax_k__BackingField = (unsigned int)(*p_wallData)->fields._breakPointMax_k__BackingField;
  v31 = (struct WarBoardBreakPointComponent_array *)sub_1B64170(
                                                      WarBoardBreakPointComponent___TypeInfo,
                                                      (unsigned int)breakPointMax_k__BackingField);
  this->fields.breakPoints = v31;
  p_breakPoints = &this->fields.breakPoints;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.breakPoints, (int32_t)v31, v33, v34);
  wallData = (char *)this->fields.breakPointParent;
  if ( !wallData )
    goto LABEL_34;
  if ( (int)breakPointMax_k__BackingField >= 1 )
  {
    v35 = 0LL;
    v36 = 0.0;
    v37 = 1LL;
    v38 = 2 * breakPointMax_k__BackingField - 2;
    v39 = (float)*((int *)wallData + 42) / (float)(int)breakPointMax_k__BackingField;
    v40 = 8LL;
    do
    {
      breakPointPrefab = (Il2CppObject *)this->fields.breakPointPrefab;
      v42 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)wallData, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      wallData = (char *)UnityEngine_Object__Instantiate_object__49003980(
                           breakPointPrefab,
                           v42,
                           (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
      if ( !wallData )
        break;
      v43 = (UnityEngine_GameObject_o *)wallData;
      v44 = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)wallData,
                                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      wallData = (char *)UnityEngine_GameObject__get_transform(v43, 0LL);
      if ( !wallData )
        break;
      v60.fields.y = 0.0;
      v60.fields.z = 0.0;
      v60.fields.x = v36;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)wallData, v60, 0LL);
      breakPointParent = this->fields.breakPointParent;
      if ( !breakPointParent )
        break;
      if ( !v44 )
        break;
      WarBoardBreakPointComponent__Initialize(v44, v38 + breakPointParent->fields.mDepth, v37, 0, 0, 1, 0LL);
      v46 = (unsigned int *)*p_breakPoints;
      if ( !*p_breakPoints )
        break;
      wallData = (char *)sub_1B64204(v44, *(_QWORD *)(*(_QWORD *)v46 + 64LL));
      if ( !wallData )
        goto LABEL_43;
      if ( v35 >= v46[6] )
        goto LABEL_42;
      *(_QWORD *)&v46[v40] = v44;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v46[v40], (int32_t)v44, v48, v49);
      v50 = *p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_34;
      if ( v35 >= v50->max_length )
        goto LABEL_42;
      if ( !*p_wallData )
        break;
      wallData = *(char **)((char *)&v50->obj.klass + v40 * 4);
      if ( !wallData )
        break;
      WarBoardBreakPointComponent__SetActive(
        (WarBoardBreakPointComponent_o *)wallData,
        (__int64)v35 < (*p_wallData)->fields._breakPoint_k__BackingField,
        0,
        0LL);
      if ( breakPointMax_k__BackingField == v37 )
        goto LABEL_35;
      maxSpacing = v44->fields.maxSpacing;
      wallData = (char *)this->fields.breakPointParent;
      ++v35;
      v38 -= 2;
      if ( maxSpacing >= v39 )
        maxSpacing = v39;
      ++v37;
      v36 = v36 + maxSpacing;
      v40 += 2LL;
    }
    while ( wallData );
    goto LABEL_34;
  }
LABEL_35:
  v52 = (UnityEngine_Transform_array *)sub_1B64170(UnityEngine_Transform___TypeInfo, 1LL);
  wallData = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v52 )
    goto LABEL_34;
  v55 = (UnityEngine_Transform_o *)wallData;
  if ( wallData )
  {
    wallData = (char *)sub_1B64204(wallData, v52->obj.klass->_1.element_class);
    if ( !wallData )
    {
LABEL_43:
      v58 = sub_1B64348(wallData);
      sub_1B641F0(v58, 0LL);
    }
  }
  if ( !v52->max_length )
LABEL_42:
    sub_1B6432C(wallData, v47);
  v52->m_Items[0] = v55;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v52->m_Items, (int32_t)v55, v53, v54);
  WarBoardWallComponent__SetButtonTweenTarget(this, v52, v56);
  wallData = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v57 = this->fields.wallData;
  if ( !v57 || !wallData )
LABEL_34:
    sub_1B64324(wallData);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wallData, !v57->fields._isDestroy_k__BackingField, 0LL);
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
    sub_1B64324(this);
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
        sub_1B6432C(this, *(_QWORD *)&oldBreakPoint);
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
  if ( (byte_49F9FE1 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    this = (WarBoardWallComponent_o *)sub_1B640C8(&Method_WarBoardWallComponent_OnClick__, v3);
    byte_49F9FE1 = 1;
  }
  wallData = v2->fields.wallData;
  if ( !wallData )
    goto LABEL_22;
  if ( wallData->fields._isDestroy_k__BackingField )
    return;
  this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)this, 0LL) && v2->fields.isSelectable )
  {
    v5 = Method_WarBoardWallComponent_OnClick__;
    if ( (*((_BYTE *)Method_WarBoardWallComponent_OnClick__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_WarBoardWallComponent_OnClick__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( this )
    {
      m_CancellationTokenSource = this[3].fields.m_CancellationTokenSource;
      if ( m_CancellationTokenSource )
      {
        OverwriteAssetSoundName__PlaySe(
          v6,
          (System_String_o *)m_CancellationTokenSource->fields._registeredCallbacksLists,
          0LL);
        this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1B64324(this);
  }
  v9 = Method_WarBoardWallComponent_OnClick__;
  if ( (*((_BYTE *)Method_WarBoardWallComponent_OnClick__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1B640E0(Method_WarBoardWallComponent_OnClick__);
  v10 = (System_Reflection_MethodBase_o *)sub_1B640AC(v9, v9[4]);
  this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_22;
  v11 = this[3].fields.m_CancellationTokenSource;
  if ( !v11 )
    goto LABEL_22;
  OverwriteAssetSoundName__PlaySe(v10, *(System_String_o **)&v11->fields._disposed, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  const MethodInfo *v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *v18; // x20
  ServantStatusBattleListViewItem_o *v19; // x22
  System_Delegate_o *v20; // x23
  WarBoardTaskBase_TaskCallback_o *v21; // x24
  System_Delegate_o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_Delegate_o *v25; // x8
  WarBoardTaskBase_TaskCallback_c *v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  Il2CppObject *Instance; // x19
  char *v36; // x21
  __int64 v37; // x0
  __int64 v38; // x1
  int32_t v39; // w2
  int32_t v40; // w3
  __int64 v41; // x0
  int32_t wallDestroyEffectId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49F9FE4 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, taskList);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_1B640C8(&WarBoardTaskBase_TaskCallback_TypeInfo, v7);
    sub_1B640C8(&WarBoardTaskBase___TypeInfo, v8);
    sub_1B640C8(&Method_WarBoardWallComponent__OnDead_b__22_0__, v9);
    sub_1B640C8(&WarBoardWallComponent_TypeInfo, v10);
    byte_49F9FE4 = 1;
  }
  if ( !WarBoardWallComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardWallComponent_TypeInfo);
  wallData = (char *)this->fields.wallData;
  if ( !wallData )
    goto LABEL_24;
  BREAK_ANIMATION_NAME = WarBoardWallComponent_TypeInfo->static_fields->BREAK_ANIMATION_NAME;
  wallDestroyEffectId = WarBoardWallData__get_wallDestroyEffectId((WarBoardWallData_o *)wallData, 0LL);
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &wallDestroyEffectId);
  v14 = System_String__Format(BREAK_ANIMATION_NAME, v13, 0LL);
  wallData = (char *)WarBoardWallComponent__GetSimpleAnimationPerformance(this, v14, v15);
  if ( !wallData )
    goto LABEL_24;
  v18 = (Il2CppObject *)wallData;
  v19 = (ServantStatusBattleListViewItem_o *)(wallData + 40);
  v20 = (System_Delegate_o *)*((_QWORD *)wallData + 5);
  v21 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v16, v17);
  WarBoardTaskBase_TaskCallback___ctor(v21, (Il2CppObject *)this, Method_WarBoardWallComponent__OnDead_b__22_0__, 0LL);
  v22 = System_Delegate__Combine(v20, (System_Delegate_o *)v21, 0LL);
  v25 = v22;
  if ( !v22 )
    goto LABEL_11;
  v26 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v22->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (v19->klass = (ServantStatusBattleListViewItem_c *)v22, (WarBoardTaskBase_TaskCallback_c *)v22->klass != v26) )
  {
    sub_1B645E4(v22);
LABEL_11:
    v19->klass = (ServantStatusBattleListViewItem_c *)v25;
  }
  sub_1B6406C(v19, (int32_t)v25, v23, v24);
  wallData = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !wallData )
    goto LABEL_24;
  *((_QWORD *)wallData + 128) = v18;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(wallData + 1024), (int32_t)v18, v27, v28);
  if ( !taskList )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    wallData = (char *)sub_1B64170(WarBoardTaskBase___TypeInfo, 1LL);
    if ( wallData )
    {
      v36 = wallData;
      v37 = sub_1B64204(v18, *(_QWORD *)(*(_QWORD *)wallData + 64LL));
      if ( !v37 )
      {
        v41 = sub_1B64348(0LL);
        sub_1B641F0(v41, 0LL);
      }
      if ( !*((_DWORD *)v36 + 6) )
        sub_1B6432C(v37, v38);
      *((_QWORD *)v36 + 4) = v18;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 32), (int32_t)v18, v39, v40);
      if ( Instance )
      {
        WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v36, 0LL);
        return;
      }
    }
LABEL_24:
    sub_1B64324(wallData);
  }
  items = taskList->fields._items;
  v32 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++taskList->fields._version;
  if ( !items )
    goto LABEL_24;
  size = taskList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)taskList,
      v18,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &items->obj.klass + size;
    taskList->fields._size = size + 1;
    v34[4] = (Il2CppClass *)v18;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)v18, v29, v30);
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
  if ( (byte_49F9FE2 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    this = (WarBoardWallComponent_o *)sub_1B640C8(&Method_WarBoardWallComponent_OnLongClick__, v3);
    byte_49F9FE2 = 1;
  }
  klass = v2[3].klass;
  if ( !klass )
    goto LABEL_12;
  if ( LOBYTE(klass->_1.byval_arg.data) )
    return;
  v5 = Method_WarBoardWallComponent_OnLongClick__;
  if ( (*((_BYTE *)Method_WarBoardWallComponent_OnLongClick__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_WarBoardWallComponent_OnLongClick__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  this = (WarBoardWallComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this
    || (m_CancellationTokenSource = this[3].fields.m_CancellationTokenSource) == 0LL
    || (OverwriteAssetSoundName__PlaySe(v6, *(System_String_o **)&m_CancellationTokenSource->fields._disposed, 0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        v9 = (WarBoardWallData_o *)v2[3].klass,
        v10 = (WarBoardManager_o *)Instance,
        (this = (WarBoardWallComponent_o *)UnityEngine_Component__get_transform(v2, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL), !v10) )
  {
LABEL_12:
    sub_1B64324(this);
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
  System_Collections_Generic_List_object__o *v16; // x23
  const MethodInfo *v17; // x5

  if ( (byte_49F9FE6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, popText);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_1B640C8(&StringLiteral_18754/*"ef_dm_base"*/, v12);
    byte_49F9FE6 = 1;
  }
  gameObject = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
  {
    v16 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                         v14,
                                                         v15);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    if ( !System_String__IsNullOrEmpty(popText, 0LL) )
      WarBoardWallComponent__CreateEffectText(
        this,
        (System_String_o *)StringLiteral_18754/*"ef_dm_base"*/,
        popText,
        popTextColor,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)v16,
        v17);
    if ( taskList )
    {
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v16,
        (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      return;
    }
    gameObject = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( gameObject )
    {
      WarBoardManager__AddTask_35188000(gameObject, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v16, 0LL);
      return;
    }
LABEL_12:
    sub_1B64324(gameObject);
  }
}


void __fastcall WarBoardWallComponent__Selectable(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  struct WarBoardWallData_o *wallData; // x8

  wallData = this->fields.wallData;
  if ( !wallData )
    sub_1B64324(this);
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

  if ( (byte_49F9FDE & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75728176, parents);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Contains__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_49F9FDE = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       parents,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
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
                                                                   (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75728176);
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
                                                                     (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_GameObject__Contains__);
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
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v25 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v25[4] = (Il2CppClass *)v24;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v24, v19, v20);
            }
          }
        }
        LODWORD(klass) = v16[1].klass;
        if ( (__int64)++v17 >= (int)klass )
          goto LABEL_23;
      }
LABEL_28:
      sub_1B6432C(ComponentsInChildren_object, v12);
    }
  }
LABEL_24:
  if ( !v10
    || (button = this->fields.button,
        ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                                   v10,
                                                                   (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1B64324(ComponentsInChildren_object);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1B6406C(
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
  struct UICommonButton_o *v6; // x0
  bool v7; // w1

  if ( (byte_49F9FE0 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, enable);
    byte_49F9FE0 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v6 = this->fields.button;
    if ( !v6 )
      sub_1B64324(0LL);
    if ( enable )
    {
      v7 = 1;
LABEL_11:
      UICommonButton__SetButtonEnableAndKeepState(v6, v7, 0, 0LL);
      return;
    }
    if ( v6->fields.mState )
    {
      v7 = 0;
      goto LABEL_11;
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

  if ( (byte_49F9FDF & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, enable);
    byte_49F9FDF = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v6 = this->fields.button;
    if ( !v6 )
      sub_1B64324(0LL);
    UICommonButton__SetButtonEnableAndKeepState(v6, enable, 0, 0LL);
  }
}


void __fastcall WarBoardWallComponent__Unselectable(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  struct WarBoardWallData_o *wallData; // x8

  wallData = this->fields.wallData;
  if ( !wallData )
    sub_1B64324(this);
  if ( !wallData->fields._isDestroy_k__BackingField )
    this->fields.isSelectable = 0;
}


void __fastcall WarBoardWallComponent___OnDead_b__22_0(WarBoardWallComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}