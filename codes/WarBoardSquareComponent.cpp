void __fastcall WarBoardSquareComponent___cctor(const MethodInfo *method)
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
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42EABAA & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardSquareComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_12749/*"ScaleSquare_start"*/, v8, v9, v10);
    byte_42EABAA = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardSquareComponent_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_12749/*"ScaleSquare_start"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_12749/*"ScaleSquare_start"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall WarBoardSquareComponent___ctor(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EABA9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo, v5, v6, v7);
    byte_42EABA9 = 1;
  }
  this->fields.costAnimFadeTime = 0.3;
  *(_OWORD *)&this->fields.costLabelPos.fields.x = xmmword_32A51F0;
  *(_OWORD *)&this->fields.costLabelMovePos.fields.y = xmmword_32A5200;
  v8 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v8,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
  this->fields.dicEffect = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dicEffect,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardSquareComponent__ActiveEditPointArrow(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *selectMarkerArrow; // x20
  __int64 v6; // x1
  UnityEngine_Behaviour_o *v7; // x0

  if ( (byte_42EAB97 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAB97 = 1;
  }
  selectMarkerArrow = (UnityEngine_Object_o *)this->fields.selectMarkerArrow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(selectMarkerArrow, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.selectMarkerArrow;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    UnityEngine_Behaviour__set_enabled(v7, 1, 0LL);
  }
}


void __fastcall WarBoardSquareComponent__DeactiveEditPointArrow(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *selectMarkerArrow; // x20
  __int64 v6; // x1
  UnityEngine_Behaviour_o *v7; // x0

  if ( (byte_42EAB98 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAB98 = 1;
  }
  selectMarkerArrow = (UnityEngine_Object_o *)this->fields.selectMarkerArrow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(selectMarkerArrow, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.selectMarkerArrow;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    UnityEngine_Behaviour__set_enabled(v7, 0, 0LL);
  }
}


void __fastcall WarBoardSquareComponent__DisableEditPosition(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *selectMarker; // x0
  struct CommonEffectComponent_o *selectMarkerCommonEffect; // x20
  System_Action_o *v10; // x21

  if ( (byte_42EAB96 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_WarBoardSquareComponent__DisableEditPosition_b__40_0__, v5, v6, v7);
    byte_42EAB96 = 1;
  }
  selectMarker = this->fields.selectMarker;
  if ( !selectMarker )
    goto LABEL_8;
  if ( UnityEngine_GameObject__get_activeSelf(selectMarker, 0LL) )
  {
    selectMarkerCommonEffect = this->fields.selectMarkerCommonEffect;
    v10 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_WarBoardSquareComponent__DisableEditPosition_b__40_0__, 0LL);
    if ( selectMarkerCommonEffect )
    {
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))selectMarkerCommonEffect->klass->vtable._8_Stop.method)(
        selectMarkerCommonEffect,
        0LL,
        v10,
        selectMarkerCommonEffect->klass->vtable._9_ForceStop.methodPtr);
      return;
    }
LABEL_8:
    sub_B5D69C(selectMarker, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareComponent__DispBattleRange(
        WarBoardSquareComponent_o *this,
        bool isPlayerForce,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *battleTargetPlayer; // x0

  if ( isPlayerForce )
  {
    battleTargetPlayer = this->fields.battleTargetPlayer;
    if ( !battleTargetPlayer )
      goto LABEL_8;
    UnityEngine_GameObject__SetActive(battleTargetPlayer, 1, 0LL);
    battleTargetPlayer = (UnityEngine_GameObject_o *)this->fields.battleTargetPlayerCommonEffect;
    if ( !battleTargetPlayer )
      goto LABEL_8;
  }
  else
  {
    battleTargetPlayer = this->fields.battleTargetEnemy;
    if ( !battleTargetPlayer
      || (UnityEngine_GameObject__SetActive(battleTargetPlayer, 1, 0LL),
          (battleTargetPlayer = (UnityEngine_GameObject_o *)this->fields.battleTargetEnemyCommonEffect) == 0LL) )
    {
LABEL_8:
      sub_B5D69C(battleTargetPlayer, isPlayerForce);
    }
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, __int64, _QWORD, void *))&battleTargetPlayer->klass[1]._1.byval_arg.bits)(
    battleTargetPlayer,
    1LL,
    0LL,
    battleTargetPlayer->klass[1]._1.this_arg.data);
}


void __fastcall WarBoardSquareComponent__EnableEditPosition(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectMarker; // x0

  selectMarker = this->fields.selectMarker;
  if ( !selectMarker
    || (UnityEngine_GameObject__SetActive(selectMarker, 1, 0LL),
        (selectMarker = (UnityEngine_GameObject_o *)this->fields.selectMarkerCommonEffect) == 0LL) )
  {
    sub_B5D69C(selectMarker, method);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, __int64, _QWORD, void *))&selectMarker->klass[1]._1.byval_arg.bits)(
    selectMarker,
    1LL,
    0LL,
    selectMarker->klass[1]._1.this_arg.data);
}


void __fastcall WarBoardSquareComponent__FinishUnDispCostAnim(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *costLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v5; // x0
  float v6; // s4
  float v7; // s5
  float v8; // s6
  float v9; // s7
  UIWidget_o *v10; // x20
  UnityEngine_Color_o v11; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  costLabel = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_6;
  gameObject = UnityEngine_Component__get_gameObject(costLabel, 0LL);
  GameObjectExtensions__ResetLocalScale(gameObject, 0LL);
  costLabel = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_6;
  v5 = UnityEngine_Component__get_gameObject(costLabel, 0LL);
  GameObjectExtensions__SetLocalPosition(v5, this->fields.costLabelPos, 0LL);
  v10 = (UIWidget_o *)this->fields.costLabel;
  if ( !v10 )
    goto LABEL_6;
  v12.fields.r = v10->fields.mColor.fields.r;
  v12.fields.g = v10->fields.mColor.fields.g;
  v12.fields.b = v10->fields.mColor.fields.b;
  v12.fields.a = 0.0;
  *(_QWORD *)&v11.fields.r = 0LL;
  *(_QWORD *)&v11.fields.b = 0LL;
  UnityEngine_Color___ctor(v12, v6, v7, v8, v9, (const MethodInfo *)&v11);
  UIWidget__set_color(v10, v11, 0LL);
  costLabel = (UnityEngine_Component_o *)this->fields.movePoint;
  if ( !costLabel )
LABEL_6:
    sub_B5D69C(costLabel, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costLabel, 0, 0LL);
}


bool __fastcall WarBoardSquareComponent__GetButtonIsEnable(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  struct UIButton_o *button; // x0

  button = this->fields.button;
  if ( !button )
    sub_B5D69C(0LL, method);
  return ((__int64 (__fastcall *)(struct UIButton_o *, Il2CppMethodPointer))button->klass->vtable._4_get_isEnabled.method)(
           button,
           button->klass->vtable._5_set_isEnabled.methodPtr);
}


void __fastcall WarBoardSquareComponent__InitCostAnim(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *tweenScale; // x20
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Object_o *tweenPosition; // x20
  UnityEngine_Object_o *v8; // x20
  UnityEngine_Object_o *tweenAlpha; // x20
  UnityEngine_Object_o *v10; // x19

  if ( (byte_42EABA0 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EABA0 = 1;
  }
  tweenScale = (UnityEngine_Object_o *)this->fields.tweenScale;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(tweenScale, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Object_o *)this->fields.tweenScale;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v6, 0LL);
  }
  tweenPosition = (UnityEngine_Object_o *)this->fields.tweenPosition;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(tweenPosition, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Object_o *)this->fields.tweenPosition;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v8, 0LL);
  }
  tweenAlpha = (UnityEngine_Object_o *)this->fields.tweenAlpha;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(tweenAlpha, 0LL, 0LL) )
  {
    v10 = (UnityEngine_Object_o *)this->fields.tweenAlpha;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v10, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareComponent__Initialize(
        WarBoardSquareComponent_o *this,
        UIAtlas_o *imageSetAtlas,
        WarBoardSquareData_o *data,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  char *dicEffect; // x0
  struct WarBoardSquareData_o **p_squareData; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Transform_o *transform; // x22
  int v31; // s0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UILabel_o *costLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v42; // x0
  float v43; // s4
  float v44; // s5
  float v45; // s6
  float v46; // s7
  UIWidget_o *v47; // x20
  struct SimpleAnimation_o *Component_srcLineSprite; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  struct CommonEffectComponent_o *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct CommonEffectComponent_o *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  struct CommonEffectComponent_o *v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  struct CommonEffectComponent_o *v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  const MethodInfo *v83; // x2
  const MethodInfo *v84; // x1
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v86; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v87; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EAB94 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__,
      (_DWORD)imageSetAtlas,
      (_DWORD)data,
      method);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v7, v8, v9);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_22547/*"squares"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_22548/*"squares_target"*/, v19, v20, v21);
    byte_42EAB94 = 1;
  }
  dicEffect = (char *)this->fields.dicEffect;
  if ( !dicEffect )
    goto LABEL_33;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dicEffect,
    (const MethodInfo_2F26D98 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
  this->fields.squareData = data;
  p_squareData = &this->fields.squareData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.squareData,
    (System_Int32_array **)data,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  dicEffect = (char *)this->fields.squareImage;
  if ( !dicEffect )
    goto LABEL_33;
  UISprite__set_atlas((UISprite_o *)dicEffect, imageSetAtlas, 0LL);
  dicEffect = (char *)this->fields.squareImage;
  if ( !dicEffect )
    goto LABEL_33;
  UISprite__set_spriteName((UISprite_o *)dicEffect, (System_String_o *)StringLiteral_22547/*"squares"*/, 0LL);
  dicEffect = (char *)this->fields.squareSubImage;
  if ( !dicEffect )
    goto LABEL_33;
  UISprite__set_atlas((UISprite_o *)dicEffect, imageSetAtlas, 0LL);
  dicEffect = (char *)this->fields.squareSubImage;
  if ( !dicEffect )
    goto LABEL_33;
  UISprite__set_spriteName((UISprite_o *)dicEffect, (System_String_o *)StringLiteral_22548/*"squares_target"*/, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  dicEffect = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !data )
    goto LABEL_33;
  if ( !dicEffect )
    goto LABEL_33;
  *(UnityEngine_Vector3_o *)&v31 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)dicEffect,
                                     data->fields._squareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_33;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v31, 0LL);
  dicEffect = (char *)*p_squareData;
  if ( !*p_squareData )
    goto LABEL_33;
  *((_QWORD *)dicEffect + 6) = this;
  sub_B5D560(
    (BattleServantConfConponent_o *)(dicEffect + 48),
    (System_Int32_array **)this,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  costLabel = this->fields.costLabel;
  dicEffect = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !dicEffect )
    goto LABEL_33;
  if ( !costLabel )
    goto LABEL_33;
  UILabel__set_bitmapFont(costLabel, *((UIFont_o **)dicEffect + 33), 0LL);
  dicEffect = (char *)this->fields.costLabel;
  if ( !dicEffect )
    goto LABEL_33;
  dicEffect = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dicEffect, 0LL);
  if ( !dicEffect )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dicEffect, 1, 0LL);
  dicEffect = (char *)this->fields.costLabel;
  if ( !dicEffect )
    goto LABEL_33;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dicEffect, 0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.costLabelPos, 0LL);
  dicEffect = (char *)this->fields.costLabel;
  if ( !dicEffect )
    goto LABEL_33;
  v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dicEffect, 0LL);
  GameObjectExtensions__ResetLocalScale(v42, 0LL);
  v47 = (UIWidget_o *)this->fields.costLabel;
  if ( !v47 )
    goto LABEL_33;
  v86.fields.r = v47->fields.mColor.fields.r;
  v86.fields.g = v47->fields.mColor.fields.g;
  v86.fields.b = v47->fields.mColor.fields.b;
  v86.fields.a = 0.0;
  var40.methodPointer = 0LL;
  var40.invoker_method = 0LL;
  UnityEngine_Color___ctor(v86, v43, v44, v45, v46, &var40);
  *(_QWORD *)&v87.fields.r = var40.methodPointer;
  *(_QWORD *)&v87.fields.b = var40.invoker_method;
  UIWidget__set_color(v47, v87, 0LL);
  dicEffect = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !dicEffect )
    goto LABEL_33;
  Component_srcLineSprite = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)dicEffect,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimation,
    (System_Int32_array **)Component_srcLineSprite,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  dicEffect = (char *)this->fields.selectMarker;
  if ( !dicEffect )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dicEffect, 0, 0LL);
  dicEffect = (char *)this->fields.selectMarker;
  if ( !dicEffect )
    goto LABEL_33;
  v55 = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            (UnityEngine_GameObject_o *)dicEffect,
                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.selectMarkerCommonEffect = v55;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.selectMarkerCommonEffect,
    (System_Int32_array **)v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  dicEffect = (char *)this->fields.selectCircle;
  if ( !dicEffect )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dicEffect, 0, 0LL);
  dicEffect = (char *)this->fields.selectCircle;
  if ( !dicEffect )
    goto LABEL_33;
  v62 = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            (UnityEngine_GameObject_o *)dicEffect,
                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.selectCircleCommonEffect = v62;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.selectCircleCommonEffect,
    (System_Int32_array **)v62,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  dicEffect = (char *)this->fields.battleTargetPlayer;
  if ( !dicEffect )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dicEffect, 0, 0LL);
  dicEffect = (char *)this->fields.battleTargetPlayer;
  if ( !dicEffect )
    goto LABEL_33;
  v69 = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            (UnityEngine_GameObject_o *)dicEffect,
                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.battleTargetPlayerCommonEffect = v69;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.battleTargetPlayerCommonEffect,
    (System_Int32_array **)v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  dicEffect = (char *)this->fields.battleTargetEnemy;
  if ( !dicEffect )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dicEffect, 0, 0LL);
  dicEffect = (char *)this->fields.battleTargetEnemy;
  if ( !dicEffect )
    goto LABEL_33;
  v76 = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            (UnityEngine_GameObject_o *)dicEffect,
                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.battleTargetEnemyCommonEffect = v76;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.battleTargetEnemyCommonEffect,
    (System_Int32_array **)v76,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  WarBoardSquareComponent__SetMovePoint(this, 1, v83);
  this->fields.isSelectable = 0;
  WarBoardSquareComponent__SetSprite(this, v84);
  dicEffect = (char *)this->fields.squareImage;
  if ( !dicEffect
    || ((*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)dicEffect + 840LL))(
          dicEffect,
          *(_QWORD *)(*(_QWORD *)dicEffect + 848LL)),
        (dicEffect = (char *)this->fields.squareImage) == 0LL)
    || (UIWidget__ResizeCollider((UIWidget_o *)dicEffect, 0LL), (dicEffect = (char *)this->fields.squareSubImage) == 0LL)
    || ((*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)dicEffect + 840LL))(
          dicEffect,
          *(_QWORD *)(*(_QWORD *)dicEffect + 848LL)),
        (dicEffect = (char *)this->fields.squareSubImage) == 0LL) )
  {
LABEL_33:
    sub_B5D69C(dicEffect, imageSetAtlas);
  }
  UIWidget__ResizeCollider((UIWidget_o *)dicEffect, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareComponent__NondispBattleRange(
        WarBoardSquareComponent_o *this,
        bool isPlayerForce,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_GameObject_o *battleTargetPlayer; // x0
  struct CommonEffectComponent_o *battleTargetPlayerCommonEffect; // x20
  System_Action_o *v14; // x0
  __int64 *v15; // x8
  System_Action_o *v16; // x21

  if ( (byte_42EABA1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isPlayerForce, (_DWORD)method, v3);
    sub_B5D5C4(&Method_WarBoardSquareComponent__NondispBattleRange_b__57_0__, v6, v7, v8);
    sub_B5D5C4(&Method_WarBoardSquareComponent__NondispBattleRange_b__57_1__, v9, v10, v11);
    byte_42EABA1 = 1;
  }
  if ( isPlayerForce )
  {
    battleTargetPlayer = this->fields.battleTargetPlayer;
    if ( !battleTargetPlayer )
      goto LABEL_13;
    if ( UnityEngine_GameObject__get_activeSelf(battleTargetPlayer, 0LL) )
    {
      battleTargetPlayerCommonEffect = this->fields.battleTargetPlayerCommonEffect;
      v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      v15 = &Method_WarBoardSquareComponent__NondispBattleRange_b__57_0__;
      goto LABEL_10;
    }
  }
  else
  {
    battleTargetPlayer = this->fields.battleTargetEnemy;
    if ( !battleTargetPlayer )
      goto LABEL_13;
    if ( UnityEngine_GameObject__get_activeSelf(battleTargetPlayer, 0LL) )
    {
      battleTargetPlayerCommonEffect = this->fields.battleTargetEnemyCommonEffect;
      v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      v15 = &Method_WarBoardSquareComponent__NondispBattleRange_b__57_1__;
LABEL_10:
      v16 = v14;
      System_Action___ctor(v14, (Il2CppObject *)this, *v15, 0LL);
      if ( battleTargetPlayerCommonEffect )
      {
        ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))battleTargetPlayerCommonEffect->klass->vtable._8_Stop.method)(
          battleTargetPlayerCommonEffect,
          0LL,
          v16,
          battleTargetPlayerCommonEffect->klass->vtable._9_ForceStop.methodPtr);
        return;
      }
LABEL_13:
      sub_B5D69C(battleTargetPlayer, isPlayerForce);
    }
  }
}


void __fastcall WarBoardSquareComponent__OnClickSquare(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WarBoardData_o *Instance; // x0
  __int64 v9; // x1
  struct WarBoardSquareData_o *squareData; // x8
  WarBoardManager_o *v11; // x19
  struct WarBoardSquareData_o *v12; // x8
  WarBoardPieceData_o *v13; // x21
  struct WarBoardSquareData_o *v14; // x8
  WarBoardItemData_o *v15; // x22
  WarBoardEffectData_o *Effect; // x23
  struct WarBoardTreasureData_array *treasures; // x8
  System_String_o *v18; // x21
  struct WarBoardSquareData_o *v19; // x8

  if ( (byte_42EABA2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42EABA2 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_32;
  v11 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_32;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_23181536(
                                 Instance,
                                 squareData->fields._squareIndex_k__BackingField,
                                 0LL);
  v12 = this->fields.squareData;
  if ( !v12 )
    goto LABEL_32;
  v13 = (WarBoardPieceData_o *)Instance;
  Instance = v11->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_32;
  Instance = (WarBoardData_o *)WarBoardData__GetItem(Instance, v12->fields._squareIndex_k__BackingField, 0LL);
  v14 = this->fields.squareData;
  if ( !v14 )
    goto LABEL_32;
  v15 = (WarBoardItemData_o *)Instance;
  Instance = v11->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_32;
  Effect = WarBoardData__GetEffect(Instance, v14->fields._squareIndex_k__BackingField, 0LL);
  if ( WarBoardManager__get_isSelectedPiece(v11, 0LL) && this->fields.isSelectable )
  {
    if ( !v13 || !WarBoardManager__IsSelectedPieceSame(v11, v13, 0LL) )
    {
      Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        treasures = Instance[1].fields.treasures;
        if ( treasures )
        {
          v18 = *(System_String_o **)&treasures->max_length;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          Instance = (WarBoardData_o *)SoundManager__playSe(v18, 0LL);
          v19 = this->fields.squareData;
          if ( v19 )
          {
            WarBoardManager__SelectedPieceAction(v11, v19->fields._squareIndex_k__BackingField, 0LL);
            return;
          }
        }
      }
LABEL_32:
      sub_B5D69C(Instance, v9);
    }
    goto LABEL_22;
  }
  if ( v13 )
  {
LABEL_22:
    Instance = (WarBoardData_o *)v13->fields.pieceComponent;
    if ( !Instance )
      goto LABEL_32;
    (*(void (__fastcall **)(WarBoardData_o *, void *))&Instance->klass[1]._1.byval_arg.bits)(
      Instance,
      Instance->klass[1]._1.this_arg.data);
    return;
  }
  if ( v15 && !WarBoardItemData__get_Acquired(v15, 0LL) )
  {
    Instance = (WarBoardData_o *)v15->fields.component;
    if ( !Instance )
      goto LABEL_32;
    WarBoardItemComponent__OnClick((WarBoardItemComponent_o *)Instance, 0LL);
  }
  else if ( Effect )
  {
    Instance = (WarBoardData_o *)Effect->fields.component;
    if ( !Instance )
      goto LABEL_32;
    WarBoardEffectComponent__OnClick((WarBoardEffectComponent_o *)Instance, 0LL);
  }
  else
  {
    WarBoardManager__HideSimplePopup(v11, 0LL, 0LL);
  }
}


void __fastcall WarBoardSquareComponent__OnDeselect(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *selectCircle; // x0
  struct CommonEffectComponent_o *selectCircleCommonEffect; // x20
  System_Action_o *v10; // x21

  if ( (byte_42EAB9D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_WarBoardSquareComponent__OnDeselect_b__49_0__, v5, v6, v7);
    byte_42EAB9D = 1;
  }
  selectCircle = this->fields.selectCircle;
  if ( !selectCircle )
    goto LABEL_8;
  if ( UnityEngine_GameObject__get_activeSelf(selectCircle, 0LL) )
  {
    selectCircleCommonEffect = this->fields.selectCircleCommonEffect;
    v10 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_WarBoardSquareComponent__OnDeselect_b__49_0__, 0LL);
    if ( selectCircleCommonEffect )
    {
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))selectCircleCommonEffect->klass->vtable._8_Stop.method)(
        selectCircleCommonEffect,
        0LL,
        v10,
        selectCircleCommonEffect->klass->vtable._9_ForceStop.methodPtr);
      return;
    }
LABEL_8:
    sub_B5D69C(selectCircle, method);
  }
}


void __fastcall WarBoardSquareComponent__OnEffectDisp(
        WarBoardSquareComponent_o *this,
        int32_t effectId,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  __int64 v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x20
  System_Delegate_o *v35; // x23
  WarBoardTaskBase_TaskCallback_o *v36; // x24
  System_Int32_array **v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  WebViewManager_o *Instance; // x19
  __int64 v45; // x21
  __int64 v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x0
  __int64 v54; // x0

  if ( (byte_42EABA4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, effectId, (_DWORD)taskList, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7, v8, v9);
    sub_B5D5C4(&WarBoardTaskBase_TaskCallback_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_WarBoardSquareComponent___c__DisplayClass60_0__OnEffectDisp_b__0__, v13, v14, v15);
    sub_B5D5C4(&WarBoardSquareComponent___c__DisplayClass60_0_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&WarBoardCallbackTask_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&WarBoardTaskBase___TypeInfo, v22, v23, v24);
    byte_42EABA4 = 1;
  }
  v25 = sub_B5D694(WarBoardSquareComponent___c__DisplayClass60_0_TypeInfo);
  WarBoardSquareComponent___c__DisplayClass60_0___ctor((WarBoardSquareComponent___c__DisplayClass60_0_o *)v25, 0LL);
  if ( !v25 )
    goto LABEL_14;
  *(_QWORD *)(v25 + 24) = this;
  *(_DWORD *)(v25 + 16) = effectId;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 24), (System_Int32_array **)this, v28, v29, v30, v31, v32, v33);
  v34 = sub_B5D694(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v34, 0LL, 0LL);
  if ( !v34 )
    goto LABEL_14;
  v35 = *(System_Delegate_o **)(v34 + 32);
  v36 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v36,
    (Il2CppObject *)v25,
    Method_WarBoardSquareComponent___c__DisplayClass60_0__OnEffectDisp_b__0__,
    0LL);
  v37 = (System_Int32_array **)System_Delegate__Combine(v35, (System_Delegate_o *)v36, 0LL);
  if ( v37 && *v37 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    sub_B5D990(v37);
LABEL_16:
    v53 = sub_B5D6BC(v46);
    sub_B5D668(v53, 0LL);
  }
  *(_QWORD *)(v34 + 32) = v37;
  sub_B5D560((BattleServantConfConponent_o *)(v34 + 32), v37, v38, v39, v40, v41, v42, v43);
  if ( taskList )
  {
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    return;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v26 = sub_B5D5DC(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !v26 )
LABEL_14:
    sub_B5D69C(v26, v27);
  v45 = v26;
  v46 = sub_B5D684(v34, *(_QWORD *)(*(_QWORD *)v26 + 64LL));
  if ( !v46 )
    goto LABEL_16;
  if ( !*(_DWORD *)(v45 + 24) )
  {
    v54 = sub_B5D6C8(v46);
    sub_B5D668(v54, 0LL);
  }
  *(_QWORD *)(v45 + 32) = v34;
  sub_B5D560((BattleServantConfConponent_o *)(v45 + 32), (System_Int32_array **)v34, v47, v48, v49, v50, v51, v52);
  if ( !Instance )
    goto LABEL_14;
  WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v45, 0LL);
}


void __fastcall WarBoardSquareComponent__OnEffectHide(
        WarBoardSquareComponent_o *this,
        int32_t effectId,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
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
  __int64 v21; // x20
  __int64 v22; // x0
  __int64 v23; // x1
  System_Delegate_o *v24; // x23
  WarBoardTaskBase_TaskCallback_o *v25; // x24
  System_Int32_array **v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  WebViewManager_o *Instance; // x19
  __int64 v34; // x21
  __int64 v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x0
  __int64 v43; // x0

  if ( (byte_42EABA5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, effectId, (_DWORD)taskList, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&WarBoardTaskBase_TaskCallback_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&WarBoardCallbackTask_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_WarBoardSquareComponent__OnEffectHide_b__61_0__, v15, v16, v17);
    sub_B5D5C4(&WarBoardTaskBase___TypeInfo, v18, v19, v20);
    byte_42EABA5 = 1;
  }
  v21 = sub_B5D694(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v21, 0LL, 0LL);
  if ( !v21 )
    goto LABEL_13;
  v24 = *(System_Delegate_o **)(v21 + 32);
  v25 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v25,
    (Il2CppObject *)this,
    Method_WarBoardSquareComponent__OnEffectHide_b__61_0__,
    0LL);
  v26 = (System_Int32_array **)System_Delegate__Combine(v24, (System_Delegate_o *)v25, 0LL);
  if ( v26 && *v26 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    sub_B5D990(v26);
LABEL_15:
    v42 = sub_B5D6BC(v35);
    sub_B5D668(v42, 0LL);
  }
  *(_QWORD *)(v21 + 32) = v26;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 32), v26, v27, v28, v29, v30, v31, v32);
  if ( taskList )
  {
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    return;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v22 = sub_B5D5DC(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !v22 )
LABEL_13:
    sub_B5D69C(v22, v23);
  v34 = v22;
  v35 = sub_B5D684(v21, *(_QWORD *)(*(_QWORD *)v22 + 64LL));
  if ( !v35 )
    goto LABEL_15;
  if ( !*(_DWORD *)(v34 + 24) )
  {
    v43 = sub_B5D6C8(v35);
    sub_B5D668(v43, 0LL);
  }
  *(_QWORD *)(v34 + 32) = v21;
  sub_B5D560((BattleServantConfConponent_o *)(v34 + 32), (System_Int32_array **)v21, v36, v37, v38, v39, v40, v41);
  if ( !Instance )
    goto LABEL_13;
  WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v34, 0LL);
}


void __fastcall WarBoardSquareComponent__OnLongClickSquare(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardData_o *Instance; // x0
  __int64 v6; // x1
  struct WarBoardSquareData_o *squareData; // x8
  WarBoardManager_o *v8; // x19
  struct WarBoardSquareData_o *v9; // x8
  WarBoardData_o *v10; // x21
  struct WarBoardSquareData_o *v11; // x8
  WarBoardItemData_o *v12; // x20
  WarBoardEffectData_o *Effect; // x0
  WarBoardEffectData_o *v14; // x22

  if ( (byte_42EABA3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42EABA3 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_21;
  v8 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_21;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_23181536(
                                 Instance,
                                 squareData->fields._squareIndex_k__BackingField,
                                 0LL);
  v9 = this->fields.squareData;
  if ( !v9 )
    goto LABEL_21;
  v10 = Instance;
  Instance = v8->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_21;
  Instance = (WarBoardData_o *)WarBoardData__GetItem(Instance, v9->fields._squareIndex_k__BackingField, 0LL);
  v11 = this->fields.squareData;
  if ( !v11 )
    goto LABEL_21;
  v12 = (WarBoardItemData_o *)Instance;
  Instance = v8->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_21;
  Effect = WarBoardData__GetEffect(Instance, v11->fields._squareIndex_k__BackingField, 0LL);
  if ( v10 )
  {
    Instance = (WarBoardData_o *)v10[1].fields.stageEntity;
    if ( Instance )
    {
      (*(void (__fastcall **)(WarBoardData_o *, Il2CppClass *))&Instance->klass[1]._1.this_arg.bits)(
        Instance,
        Instance->klass[1]._1.element_class);
      return;
    }
LABEL_21:
    sub_B5D69C(Instance, v6);
  }
  v14 = Effect;
  if ( v12 && !WarBoardItemData__get_Acquired(v12, 0LL) )
  {
    Instance = (WarBoardData_o *)v12->fields.component;
    if ( !Instance )
      goto LABEL_21;
    WarBoardItemComponent__OnLongClick((WarBoardItemComponent_o *)Instance, 0LL);
  }
  else if ( v14 )
  {
    Instance = (WarBoardData_o *)v14->fields.component;
    if ( !Instance )
      goto LABEL_21;
    WarBoardEffectComponent__OnLongClick((WarBoardEffectComponent_o *)Instance, 0LL);
  }
  else
  {
    WarBoardManager__HideSimplePopup(v8, 0LL, 0LL);
  }
}


void __fastcall WarBoardSquareComponent__OnSelect(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectCircle; // x0

  selectCircle = this->fields.selectCircle;
  if ( !selectCircle
    || (UnityEngine_GameObject__SetActive(selectCircle, 1, 0LL),
        (selectCircle = (UnityEngine_GameObject_o *)this->fields.selectCircleCommonEffect) == 0LL) )
  {
    sub_B5D69C(selectCircle, method);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, __int64, _QWORD, void *))&selectCircle->klass[1]._1.byval_arg.bits)(
    selectCircle,
    1LL,
    0LL,
    selectCircle->klass[1]._1.this_arg.data);
}


bool __fastcall WarBoardSquareComponent__PlayEffect(
        WarBoardSquareComponent_o *this,
        System_String_o *effectKey,
        System_String_o *prefix,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  __int64 v25; // x20
  WarBoardManager_o *Instance; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct WarBoardSquareData_o *squareData; // x8
  int imageId_k__BackingField; // w8
  int v43; // w9
  System_String_o *v44; // x0
  System_String_o *v45; // x21
  _QWORD **v46; // x23
  __int64 v47; // x22
  __int16 v48; // w8
  __int64 v49; // x22
  __int64 v50; // x22
  __int64 v51; // x22
  System_String_o *v52; // x21
  System_Int32_array **CommonEffectAsset_object; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  UnityEngine_Object_o *v60; // x21
  System_Action_o *v62; // x21
  UnityEngine_Object_o *uiDataComp; // x20
  unsigned int v64; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EABA6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)effectKey, (_DWORD)prefix, method);
    sub_B5D5C4(&Method_System_Array_Empty_object___, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13, v14, v15);
    sub_B5D5C4(&Method_WarBoardSquareComponent___c__DisplayClass62_0__PlayEffect_b__0__, v16, v17, v18);
    sub_B5D5C4(&WarBoardSquareComponent___c__DisplayClass62_0_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v22, v23, v24);
    byte_42EABA6 = 1;
  }
  v64 = 0;
  v25 = sub_B5D694(WarBoardSquareComponent___c__DisplayClass62_0_TypeInfo);
  WarBoardSquareComponent___c__DisplayClass62_0___ctor((WarBoardSquareComponent___c__DisplayClass62_0_o *)v25, 0LL);
  if ( !v25 )
    goto LABEL_34;
  *(_QWORD *)(v25 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 24), (System_Int32_array **)this, v28, v29, v30, v31, v32, v33);
  v34 = (System_Int32_array **)System_String__Concat_44577788(prefix, effectKey, 0LL);
  *(_QWORD *)(v25 + 32) = v34;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 32), v34, v35, v36, v37, v38, v39, v40);
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_34;
  imageId_k__BackingField = squareData->fields._imageId_k__BackingField;
  if ( imageId_k__BackingField >= 0 )
    v43 = imageId_k__BackingField;
  else
    v43 = imageId_k__BackingField + 1;
  v64 = imageId_k__BackingField - (v43 & 0xFFFFFFFE);
  v44 = System_Int32__ToString((int32_t)&v64, 0LL);
  v45 = System_String__Concat_44577788(effectKey, v44, 0LL);
  v46 = (_QWORD **)Method_System_Array_Empty_object___;
  v47 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
  v48 = *(_WORD *)(v47 + 306);
  if ( (v48 & 1) == 0 )
  {
    sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
    v48 = *(_WORD *)(v47 + 306);
  }
  if ( (v48 & 0x400) != 0 )
  {
    v49 = *v46[6];
    if ( (*(_BYTE *)(v49 + 306) & 1) == 0 )
      sub_AF52C4(*v46[6]);
    if ( !*(_DWORD *)(v49 + 224) )
    {
      v50 = *v46[6];
      if ( (*(_BYTE *)(v50 + 306) & 1) == 0 )
        sub_AF52C4(*v46[6]);
      j_il2cpp_runtime_class_init_0(v50);
    }
  }
  v51 = *v46[6];
  if ( (*(_BYTE *)(v51 + 306) & 1) == 0 )
    sub_AF52C4(*v46[6]);
  v52 = System_String__Format_44656512(v45, **(System_Object_array ***)(v51 + 184), 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  CommonEffectAsset_object = (System_Int32_array **)WarBoardManager__GetCommonEffectAsset_object_(
                                                      Instance,
                                                      v52,
                                                      (const MethodInfo_2E68600 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  *(_QWORD *)(v25 + 16) = CommonEffectAsset_object;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 16), CommonEffectAsset_object, v54, v55, v56, v57, v58, v59);
  v60 = *(UnityEngine_Object_o **)(v25 + 16);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v60, 0LL, 0LL) )
    return 0;
  v62 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v62,
    (Il2CppObject *)v25,
    Method_WarBoardSquareComponent___c__DisplayClass62_0__PlayEffect_b__0__,
    0LL);
  uiDataComp = (UnityEngine_Object_o *)this->fields.uiDataComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (WarBoardManager_o *)UnityEngine_Object__op_Inequality(uiDataComp, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( v62 )
    {
      System_Action__Invoke(v62, 0LL);
      return 1;
    }
LABEL_34:
    sub_B5D69C(Instance, v27);
  }
  Instance = (WarBoardManager_o *)this->fields.uiDataComp;
  if ( !Instance )
    goto LABEL_34;
  WarBoardControlUiDataComponent__SyncAnimation((WarBoardControlUiDataComponent_o *)Instance, v62, 0LL);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareComponent__PlayUnDispCostAnim(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char *costLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct TweenScale_o *v10; // x0
  struct TweenScale_o **p_tweenScale; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct TweenScale_o *tweenScale; // x21
  float v19; // s0
  float v20; // s1
  float v21; // s2
  struct TweenScale_o *v22; // x8
  float costAnimScale; // w9
  struct TweenScale_o *v24; // x21
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
  System_Int32_array **v37; // x1

  if ( (byte_42EAB9E & 1) == 0 )
  {
    sub_B5D5C4(&Method_UITweener_Begin_TweenScale___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10820/*"PlayUnDispCostAnim2"*/, v5, v6, v7);
    byte_42EAB9E = 1;
  }
  costLabel = (char *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_10;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL);
  v10 = (struct TweenScale_o *)UITweener__Begin_TweenWidth_(
                                 gameObject,
                                 this->fields.costAnimScaleTime,
                                 (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenScale___);
  p_tweenScale = &this->fields.tweenScale;
  this->fields.tweenScale = v10;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tweenScale,
    (System_Int32_array **)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  tweenScale = this->fields.tweenScale;
  *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_one(0LL);
  if ( !tweenScale )
    goto LABEL_10;
  tweenScale->fields.from.fields.x = v19;
  tweenScale->fields.from.fields.y = v20;
  tweenScale->fields.from.fields.z = v21;
  v22 = this->fields.tweenScale;
  if ( !v22 )
    goto LABEL_10;
  costAnimScale = this->fields.costAnimScale;
  v22->fields.to.fields.x = costAnimScale;
  v22->fields.to.fields.y = costAnimScale;
  v22->fields.to.fields.z = costAnimScale;
  if ( !*p_tweenScale
    || ((*p_tweenScale)->fields.style = 6,
        v24 = this->fields.tweenScale,
        costLabel = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        !v24)
    || (v24->fields.eventReceiver = (struct UnityEngine_GameObject_o *)costLabel,
        sub_B5D560(
          (BattleServantConfConponent_o *)&v24->fields.eventReceiver,
          (System_Int32_array **)costLabel,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30),
        (costLabel = (char *)*p_tweenScale) == 0LL) )
  {
LABEL_10:
    sub_B5D69C(costLabel, method);
  }
  v37 = (System_Int32_array **)StringLiteral_10820/*"PlayUnDispCostAnim2"*/;
  *((_QWORD *)costLabel + 10) = StringLiteral_10820/*"PlayUnDispCostAnim2"*/;
  sub_B5D560((BattleServantConfConponent_o *)(costLabel + 80), v37, v31, v32, v33, v34, v35, v36);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareComponent__PlayUnDispCostAnim2(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
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
  char *costLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct TweenPosition_o *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct TweenPosition_o *tweenPosition; // x8
  float z; // w10
  struct TweenPosition_o *v25; // x8
  float v26; // w10
  struct TweenPosition_o *v27; // x8
  struct TweenPosition_o *v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UnityEngine_GameObject_o *v35; // x0
  struct TweenScale_o *v36; // x0
  struct TweenScale_o **p_tweenScale; // x20
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct TweenScale_o *tweenScale; // x8
  float costAnimScale; // w9
  struct TweenScale_o *v46; // x21
  float v47; // s0
  float v48; // s1
  float v49; // s2
  struct TweenScale_o *v50; // x20
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  UnityEngine_GameObject_o *v57; // x0
  struct TweenAlpha_o *v58; // x0
  struct TweenAlpha_o **p_tweenAlpha; // x20
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct TweenAlpha_o *tweenAlpha; // x8
  struct TweenAlpha_o *v67; // x21
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Int32_array **v80; // x1

  if ( (byte_42EAB9F & 1) == 0 )
  {
    sub_B5D5C4(&Method_UITweener_Begin_TweenAlpha___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UITweener_Begin_TweenPosition___, v5, v6, v7);
    sub_B5D5C4(&Method_UITweener_Begin_TweenScale___, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_6759/*"FinishUnDispCostAnim"*/, v11, v12, v13);
    byte_42EAB9F = 1;
  }
  costLabel = (char *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_20;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL);
  v16 = (struct TweenPosition_o *)UITweener__Begin_TweenWidth_(
                                    gameObject,
                                    this->fields.costAnimFadeTime,
                                    (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenPosition___);
  this->fields.tweenPosition = v16;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tweenPosition,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  tweenPosition = this->fields.tweenPosition;
  if ( !tweenPosition )
    goto LABEL_20;
  z = this->fields.costLabelPos.fields.z;
  *(_QWORD *)&tweenPosition->fields.from.fields.x = *(_QWORD *)&this->fields.costLabelPos.fields.x;
  tweenPosition->fields.from.fields.z = z;
  v25 = this->fields.tweenPosition;
  if ( !v25 )
    goto LABEL_20;
  v26 = this->fields.costLabelMovePos.fields.z;
  *(_QWORD *)&v25->fields.to.fields.x = *(_QWORD *)&this->fields.costLabelMovePos.fields.x;
  v25->fields.to.fields.z = v26;
  v27 = this->fields.tweenPosition;
  if ( !v27 )
    goto LABEL_20;
  v27->fields.style = 0;
  v28 = this->fields.tweenPosition;
  costLabel = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v28 )
    goto LABEL_20;
  v28->fields.eventReceiver = (struct UnityEngine_GameObject_o *)costLabel;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v28->fields.eventReceiver,
    (System_Int32_array **)costLabel,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  costLabel = (char *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_20;
  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL);
  v36 = (struct TweenScale_o *)UITweener__Begin_TweenWidth_(
                                 v35,
                                 this->fields.costAnimFadeTime,
                                 (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenScale___);
  p_tweenScale = &this->fields.tweenScale;
  this->fields.tweenScale = v36;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tweenScale,
    (System_Int32_array **)v36,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  tweenScale = this->fields.tweenScale;
  if ( !tweenScale )
    goto LABEL_20;
  costAnimScale = this->fields.costAnimScale;
  tweenScale->fields.from.fields.x = costAnimScale;
  tweenScale->fields.from.fields.y = costAnimScale;
  tweenScale->fields.from.fields.z = costAnimScale;
  v46 = *p_tweenScale;
  *(UnityEngine_Vector3_o *)&v47 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v46 )
    goto LABEL_20;
  v46->fields.to.fields.x = v47;
  v46->fields.to.fields.y = v48;
  v46->fields.to.fields.z = v49;
  if ( !*p_tweenScale )
    goto LABEL_20;
  (*p_tweenScale)->fields.style = 0;
  v50 = this->fields.tweenScale;
  costLabel = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v50 )
    goto LABEL_20;
  v50->fields.eventReceiver = (struct UnityEngine_GameObject_o *)costLabel;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v50->fields.eventReceiver,
    (System_Int32_array **)costLabel,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  costLabel = (char *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_20;
  v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL);
  v58 = (struct TweenAlpha_o *)UITweener__Begin_TweenWidth_(
                                 v57,
                                 this->fields.costAnimFadeTime,
                                 (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenAlpha___);
  p_tweenAlpha = &this->fields.tweenAlpha;
  this->fields.tweenAlpha = v58;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tweenAlpha,
    (System_Int32_array **)v58,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  tweenAlpha = this->fields.tweenAlpha;
  if ( !tweenAlpha )
    goto LABEL_20;
  tweenAlpha->fields.from = 1.0;
  if ( !*p_tweenAlpha
    || ((*p_tweenAlpha)->fields.to = 0.0, !*p_tweenAlpha)
    || ((*p_tweenAlpha)->fields.style = 0,
        v67 = this->fields.tweenAlpha,
        costLabel = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        !v67)
    || (v67->fields.eventReceiver = (struct UnityEngine_GameObject_o *)costLabel,
        sub_B5D560(
          (BattleServantConfConponent_o *)&v67->fields.eventReceiver,
          (System_Int32_array **)costLabel,
          v68,
          v69,
          v70,
          v71,
          v72,
          v73),
        (costLabel = (char *)*p_tweenAlpha) == 0LL) )
  {
LABEL_20:
    sub_B5D69C(costLabel, method);
  }
  v80 = (System_Int32_array **)StringLiteral_6759/*"FinishUnDispCostAnim"*/;
  *((_QWORD *)costLabel + 10) = StringLiteral_6759/*"FinishUnDispCostAnim"*/;
  sub_B5D560((BattleServantConfConponent_o *)(costLabel + 80), v80, v74, v75, v76, v77, v78, v79);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareComponent__Selectable(
        WarBoardSquareComponent_o *this,
        bool isOnActionPiece,
        const MethodInfo *method)
{
  float v3; // s4
  float v4; // s5
  float v5; // s6
  float v6; // s7
  WarBoardSquareComponent_o *v8; // x19
  UIWidget_o *costLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_Color_o v12; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = this;
  if ( !isOnActionPiece )
  {
    costLabel = (UIWidget_o *)this->fields.costLabel;
    if ( !costLabel )
      goto LABEL_9;
    v13.fields.r = costLabel->fields.mColor.fields.r;
    v13.fields.g = costLabel->fields.mColor.fields.g;
    v13.fields.b = costLabel->fields.mColor.fields.b;
    v13.fields.a = 1.0;
    *(_QWORD *)&v12.fields.r = 0LL;
    *(_QWORD *)&v12.fields.b = 0LL;
    UnityEngine_Color___ctor(v13, v3, v4, v5, v6, (const MethodInfo *)&v12);
    UIWidget__set_color(costLabel, v12, 0LL);
  }
  this = (WarBoardSquareComponent_o *)v8->fields.costLabel;
  if ( !this )
    goto LABEL_9;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, v8->fields.costLabelPos, 0LL);
  this = (WarBoardSquareComponent_o *)v8->fields.costLabel;
  if ( !this
    || (v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        GameObjectExtensions__ResetLocalScale(v11, 0LL),
        this = (WarBoardSquareComponent_o *)v8->fields.movePoint,
        v8->fields.isSelectable = !isOnActionPiece,
        !this)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
        (this = (WarBoardSquareComponent_o *)v8->fields.movePointCommonEffect) == 0LL) )
  {
LABEL_9:
    sub_B5D69C(this, isOnActionPiece);
  }
  (*(void (__fastcall **)(WarBoardSquareComponent_o *, __int64, _QWORD, void *))&this->klass[1]._1.byval_arg.bits)(
    this,
    1LL,
    0LL,
    this->klass[1]._1.this_arg.data);
}


void __fastcall WarBoardSquareComponent__SetButtonEnable(
        WarBoardSquareComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *button; // x21
  UnityEngine_Object_o *subButton; // x21
  __int64 v8; // x1
  struct UIButton_o *v9; // x0
  UIButton_c *klass; // x8
  int32_t mState; // w20

  if ( (byte_42EAB9C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, enable, (_DWORD)method, v3);
    byte_42EAB9C = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    subButton = (UnityEngine_Object_o *)this->fields.subButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(subButton, 0LL, 0LL) )
    {
      v9 = this->fields.button;
      if ( v9 )
      {
        if ( enable )
        {
          ((void (__fastcall *)(struct UIButton_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._5_set_isEnabled.method)(
            v9,
            1LL,
            v9->klass->vtable._6_OnInit.methodPtr);
          v9 = this->fields.subButton;
          if ( v9 )
          {
            klass = v9->klass;
LABEL_19:
            ((void (*)(void))klass->vtable._5_set_isEnabled.method)();
            return;
          }
        }
        else
        {
          mState = v9->fields.mState;
          ((void (__fastcall *)(struct UIButton_o *, _QWORD, Il2CppMethodPointer))v9->klass->vtable._5_set_isEnabled.method)(
            v9,
            0LL,
            v9->klass->vtable._6_OnInit.methodPtr);
          if ( mState )
          {
            v9 = this->fields.subButton;
            if ( v9 )
            {
              klass = v9->klass;
              goto LABEL_19;
            }
          }
          else
          {
            v9 = this->fields.button;
            if ( v9 )
            {
              ((void (__fastcall *)(struct UIButton_o *, _QWORD, __int64, Il2CppMethodPointer))v9->klass->vtable._14_SetState.method)(
                v9,
                0LL,
                1LL,
                v9->klass->vtable._15_OnClick.methodPtr);
              v9 = this->fields.subButton;
              if ( v9 )
              {
                ((void (__fastcall *)(struct UIButton_o *, _QWORD, Il2CppMethodPointer))v9->klass->vtable._5_set_isEnabled.method)(
                  v9,
                  0LL,
                  v9->klass->vtable._6_OnInit.methodPtr);
                v9 = this->fields.subButton;
                if ( v9 )
                {
                  ((void (__fastcall *)(struct UIButton_o *, _QWORD, __int64, Il2CppMethodPointer))v9->klass->vtable._14_SetState.method)(
                    v9,
                    0LL,
                    1LL,
                    v9->klass->vtable._15_OnClick.methodPtr);
                  return;
                }
              }
            }
          }
        }
      }
      sub_B5D69C(v9, v8);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareComponent__SetCost(
        WarBoardSquareComponent_o *this,
        int32_t cost,
        UnityEngine_Color_o gradientTop,
        UnityEngine_Color_o gradientBottom,
        const MethodInfo *method)
{
  __int64 v5; // x3
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  float v10; // s12
  float v11; // s13
  float v12; // s14
  float v13; // s15
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  __int64 v22; // x1
  UnityEngine_Component_o *costLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v25; // x0
  float v26; // s4
  float v27; // s5
  float v28; // s6
  float v29; // s7
  UIWidget_o *v30; // x21
  UILabel_o *v31; // x20
  System_String_o *v32; // x21
  Il2CppObject *v33; // x0
  MethodInfo v34; // [xsp+0h] [xbp-70h] BYREF
  int32_t v35; // [xsp+5Ch] [xbp-14h] BYREF
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = gradientBottom.fields.a;
  b = gradientBottom.fields.b;
  g = gradientBottom.fields.g;
  r = gradientBottom.fields.r;
  v10 = gradientTop.fields.a;
  v11 = gradientTop.fields.b;
  v12 = gradientTop.fields.g;
  v13 = gradientTop.fields.r;
  if ( (byte_42EAB9A & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, cost, (_DWORD)method, v5);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_15447/*"WARBOARD_SQUARE_COST"*/, v19, v20, v21);
    byte_42EAB9A = 1;
  }
  WarBoardSquareComponent__InitCostAnim(this, *(const MethodInfo **)&cost);
  costLabel = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject(costLabel, 0LL);
  GameObjectExtensions__ResetLocalScale(gameObject, 0LL);
  costLabel = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_14;
  v25 = UnityEngine_Component__get_gameObject(costLabel, 0LL);
  GameObjectExtensions__SetLocalPosition(v25, this->fields.costLabelPos, 0LL);
  v30 = (UIWidget_o *)this->fields.costLabel;
  if ( !v30 )
    goto LABEL_14;
  v36.fields.r = v30->fields.mColor.fields.r;
  v36.fields.g = v30->fields.mColor.fields.g;
  v36.fields.b = v30->fields.mColor.fields.b;
  v36.fields.a = 1.0;
  v34.methodPointer = 0LL;
  v34.invoker_method = 0LL;
  UnityEngine_Color___ctor(v36, v26, v27, v28, v29, &v34);
  *(_QWORD *)&v37.fields.r = v34.methodPointer;
  *(_QWORD *)&v37.fields.b = v34.invoker_method;
  UIWidget__set_color(v30, v37, 0LL);
  costLabel = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_14;
  UILabel__set_applyGradient((UILabel_o *)costLabel, 1, 0LL);
  costLabel = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_14;
  v38.fields.r = v13;
  v38.fields.g = v12;
  v38.fields.b = v11;
  v38.fields.a = v10;
  UILabel__set_gradientTop((UILabel_o *)costLabel, v38, 0LL);
  costLabel = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_14;
  v39.fields.r = r;
  v39.fields.g = g;
  v39.fields.b = b;
  v39.fields.a = a;
  UILabel__set_gradientBottom((UILabel_o *)costLabel, v39, 0LL);
  v31 = this->fields.costLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_15447/*"WARBOARD_SQUARE_COST"*/, 0LL);
  v35 = cost;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
  costLabel = (UnityEngine_Component_o *)System_String__Format(v32, v33, 0LL);
  if ( !v31 )
LABEL_14:
    sub_B5D69C(costLabel, v22);
  UILabel__set_text(v31, (System_String_o *)costLabel, 0LL);
}


void __fastcall WarBoardSquareComponent__SetMovePoint(
        WarBoardSquareComponent_o *this,
        bool isDefault,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  char v21; // w1
  int v22; // w2
  __int64 v23; // x3
  char v24; // w1
  int v25; // w2
  __int64 v26; // x3
  struct UnityEngine_GameObject_o **p_movePoint; // x20
  UnityEngine_Object_o *movePoint; // x22
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v30; // x1
  UnityEngine_Object_o *v31; // x22
  struct WarBoardSquareData_o *squareData; // x8
  int imageId_k__BackingField; // w8
  Il2CppObject *v34; // x0
  System_String_o *v35; // x21
  Il2CppObject *CommonEffectAsset_object; // x21
  UnityEngine_Transform_o *transform; // x22
  System_Int32_array **v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct CommonEffectComponent_o *Component_srcLineSprite; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  int v52; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42EAB95 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, isDefault, (_DWORD)method, v3);
    sub_B5D5C4(&int_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_9301/*"Move_Point_0"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_9302/*"Move_Point_{0}"*/, v24, v25, v26);
    byte_42EAB95 = 1;
  }
  p_movePoint = &this->fields.movePoint;
  movePoint = (UnityEngine_Object_o *)this->fields.movePoint;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(movePoint, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = *p_movePoint;
    if ( !*p_movePoint )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive(Instance, 0, 0LL);
    v31 = (UnityEngine_Object_o *)*p_movePoint;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v31, 0LL);
  }
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_28;
  imageId_k__BackingField = squareData->fields._imageId_k__BackingField;
  if ( !isDefault )
    imageId_k__BackingField += 2;
  v52 = imageId_k__BackingField;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
  v35 = System_String__Format((System_String_o *)StringLiteral_9302/*"Move_Point_{0}"*/, v34, 0LL);
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               v35,
                               (const MethodInfo_2E68600 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                                 (WarBoardManager_o *)Instance,
                                 (System_String_o *)StringLiteral_9301/*"Move_Point_0"*/,
                                 (const MethodInfo_2E68600 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v38 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                 (UILabel_o *)CommonEffectAsset_object,
                                 transform,
                                 (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
  *p_movePoint = (struct UnityEngine_GameObject_o *)v38;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.movePoint, v38, v39, v40, v41, v42, v43, v44);
  Instance = *p_movePoint;
  if ( !*p_movePoint || (UnityEngine_GameObject__SetActive(Instance, 0, 0LL), (Instance = *p_movePoint) == 0LL) )
LABEL_28:
    sub_B5D69C(Instance, v30);
  Component_srcLineSprite = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                Instance,
                                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.movePointCommonEffect = Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.movePointCommonEffect,
    (System_Int32_array **)Component_srcLineSprite,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
}


void __fastcall WarBoardSquareComponent__SetSprite(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardSquareComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct WarBoardSquareData_o *squareData; // x8
  int imageId_k__BackingField; // w8
  Il2CppObject *v16; // x0
  System_String_o *v17; // x20
  UISprite_o *squareSubImage; // x21
  UIButton_o *subButton; // x21
  int v20; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_42EAB99 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_16372/*"_target"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_22549/*"square{0:D3}"*/, v8, v9, v10);
    this = (WarBoardSquareComponent_o *)sub_B5D5C4(&StringLiteral_22547/*"squares"*/, v11, v12, v13);
    byte_42EAB99 = 1;
  }
  squareData = v4->fields.squareData;
  if ( !squareData )
    goto LABEL_14;
  imageId_k__BackingField = squareData->fields._imageId_k__BackingField;
  if ( imageId_k__BackingField < 1 )
  {
    v17 = (System_String_o *)StringLiteral_22547/*"squares"*/;
  }
  else
  {
    v20 = imageId_k__BackingField;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
    v17 = System_String__Format((System_String_o *)StringLiteral_22549/*"square{0:D3}"*/, v16, 0LL);
  }
  this = (WarBoardSquareComponent_o *)v4->fields.squareImage;
  if ( !this )
    goto LABEL_14;
  UISprite__set_spriteName((UISprite_o *)this, v17, 0LL);
  this = (WarBoardSquareComponent_o *)v4->fields.button;
  if ( !this )
    goto LABEL_14;
  UIButton__set_normalSprite((UIButton_o *)this, v17, 0LL);
  this = (WarBoardSquareComponent_o *)v4->fields.squareImage;
  if ( !this )
    goto LABEL_14;
  UIWidget__SetDirty((UIWidget_o *)this, 0LL);
  squareSubImage = v4->fields.squareSubImage;
  this = (WarBoardSquareComponent_o *)System_String__Concat_44577788(v17, (System_String_o *)StringLiteral_16372/*"_target"*/, 0LL);
  if ( !squareSubImage
    || (UISprite__set_spriteName(squareSubImage, (System_String_o *)this, 0LL),
        subButton = v4->fields.subButton,
        this = (WarBoardSquareComponent_o *)System_String__Concat_44577788(
                                              v17,
                                              (System_String_o *)StringLiteral_16372/*"_target"*/,
                                              0LL),
        !subButton)
    || (UIButton__set_normalSprite(subButton, (System_String_o *)this, 0LL),
        (this = (WarBoardSquareComponent_o *)v4->fields.squareSubImage) == 0LL) )
  {
LABEL_14:
    sub_B5D69C(this, method);
  }
  UIWidget__SetDirty((UIWidget_o *)this, 0LL);
}


void __fastcall WarBoardSquareComponent__SetTouchEnable(
        WarBoardSquareComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *button; // x21
  __int64 v7; // x1
  struct UIButton_o *v8; // x0
  UnityEngine_Object_o *subButton; // x21

  if ( (byte_42EAB9B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, enable, (_DWORD)method, v3);
    byte_42EAB9B = 1;
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
      goto LABEL_16;
    ((void (__fastcall *)(struct UIButton_o *, bool, Il2CppMethodPointer))v8->klass->vtable._5_set_isEnabled.method)(
      v8,
      enable,
      v8->klass->vtable._6_OnInit.methodPtr);
  }
  subButton = (UnityEngine_Object_o *)this->fields.subButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(subButton, 0LL, 0LL) )
  {
    v8 = this->fields.subButton;
    if ( v8 )
    {
      ((void (__fastcall *)(struct UIButton_o *, bool, Il2CppMethodPointer))v8->klass->vtable._5_set_isEnabled.method)(
        v8,
        enable,
        v8->klass->vtable._6_OnInit.methodPtr);
      return;
    }
LABEL_16:
    sub_B5D69C(v8, v7);
  }
}


bool __fastcall WarBoardSquareComponent__StopEffect(
        WarBoardSquareComponent_o *this,
        System_String_o *effectKey,
        System_String_o *prefix,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_Xml_XmlQualifiedName_o *dicEffect; // x0
  __int64 v11; // x1
  System_Xml_XmlQualifiedName_o *v12; // x20
  _BOOL8 v13; // x0
  const MethodInfo *v14; // x2
  System_Collections_IEnumerator_o *v15; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EABA7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__GameObject__Remove__,
      (_DWORD)effectKey,
      (_DWORD)prefix,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__, v7, v8, v9);
    byte_42EABA7 = 1;
  }
  value = 0LL;
  dicEffect = (System_Xml_XmlQualifiedName_o *)System_String__Concat_44577788(prefix, effectKey, 0LL);
  if ( !this->fields.dicEffect )
    goto LABEL_9;
  v12 = dicEffect;
  v13 = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.dicEffect,
          dicEffect,
          &value,
          (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__);
  if ( v13 )
  {
    v15 = WarBoardSquareComponent__StopEffectEndLoop(
            (WarBoardSquareComponent_o *)v13,
            (UnityEngine_GameObject_o *)value,
            v14);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v15, 0LL);
    dicEffect = (System_Xml_XmlQualifiedName_o *)this->fields.dicEffect;
    if ( dicEffect )
    {
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dicEffect,
        v12,
        (const MethodInfo_2F28628 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Remove__);
      return 1;
    }
LABEL_9:
    sub_B5D69C(dicEffect, v11);
  }
  return 0;
}


System_Collections_IEnumerator_o *__fastcall WarBoardSquareComponent__StopEffectEndLoop(
        WarBoardSquareComponent_o *this,
        UnityEngine_GameObject_o *effect,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EABA8 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardSquareComponent__StopEffectEndLoop_d__64_TypeInfo, (_DWORD)effect, (_DWORD)method, v3);
    byte_42EABA8 = 1;
  }
  v5 = sub_B5D694(WarBoardSquareComponent__StopEffectEndLoop_d__64_TypeInfo);
  WarBoardSquareComponent__StopEffectEndLoop_d__64___ctor(
    (WarBoardSquareComponent__StopEffectEndLoop_d__64_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = effect;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)effect, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareComponent__Unselectable(
        WarBoardSquareComponent_o *this,
        bool isDispCostLabel,
        const MethodInfo *method)
{
  float v3; // s4
  float v4; // s5
  float v5; // s6
  float v6; // s7
  WarBoardSquareComponent_o *v8; // x20
  UIWidget_o *costLabel; // x21
  UnityEngine_Color_o v10; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = this;
  this->fields.isSelectable = 0;
  if ( !isDispCostLabel )
  {
    costLabel = (UIWidget_o *)this->fields.costLabel;
    if ( !costLabel )
      goto LABEL_6;
    v11.fields.r = costLabel->fields.mColor.fields.r;
    v11.fields.g = costLabel->fields.mColor.fields.g;
    v11.fields.b = costLabel->fields.mColor.fields.b;
    v11.fields.a = 0.0;
    *(_QWORD *)&v10.fields.r = 0LL;
    *(_QWORD *)&v10.fields.b = 0LL;
    UnityEngine_Color___ctor(v11, v3, v4, v5, v6, (const MethodInfo *)&v10);
    UIWidget__set_color(costLabel, v10, 0LL);
  }
  this = (WarBoardSquareComponent_o *)v8->fields.movePoint;
  if ( !this )
LABEL_6:
    sub_B5D69C(this, isDispCostLabel);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isDispCostLabel, 0LL);
}


void __fastcall WarBoardSquareComponent___DisableEditPosition_b__40_0(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectMarker; // x0

  selectMarker = this->fields.selectMarker;
  if ( !selectMarker )
    sub_B5D69C(0LL, method);
  UnityEngine_GameObject__SetActive(selectMarker, 0, 0LL);
}


void __fastcall WarBoardSquareComponent___NondispBattleRange_b__57_0(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *battleTargetPlayer; // x0

  battleTargetPlayer = this->fields.battleTargetPlayer;
  if ( !battleTargetPlayer
    || (UnityEngine_GameObject__SetActive(battleTargetPlayer, 0, 0LL),
        (battleTargetPlayer = (UnityEngine_GameObject_o *)this->fields.battleTargetPlayerCommonEffect) == 0LL) )
  {
    sub_B5D69C(battleTargetPlayer, method);
  }
  CommonEffectComponent__Rewind((CommonEffectComponent_o *)battleTargetPlayer, 0LL);
}


void __fastcall WarBoardSquareComponent___NondispBattleRange_b__57_1(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *battleTargetEnemy; // x0

  battleTargetEnemy = this->fields.battleTargetEnemy;
  if ( !battleTargetEnemy
    || (UnityEngine_GameObject__SetActive(battleTargetEnemy, 0, 0LL),
        (battleTargetEnemy = (UnityEngine_GameObject_o *)this->fields.battleTargetEnemyCommonEffect) == 0LL) )
  {
    sub_B5D69C(battleTargetEnemy, method);
  }
  CommonEffectComponent__Rewind((CommonEffectComponent_o *)battleTargetEnemy, 0LL);
}


void __fastcall WarBoardSquareComponent___OnDeselect_b__49_0(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectCircle; // x0

  selectCircle = this->fields.selectCircle;
  if ( !selectCircle
    || (UnityEngine_GameObject__SetActive(selectCircle, 0, 0LL),
        (selectCircle = (UnityEngine_GameObject_o *)this->fields.selectCircleCommonEffect) == 0LL) )
  {
    sub_B5D69C(selectCircle, method);
  }
  CommonEffectComponent__Rewind((CommonEffectComponent_o *)selectCircle, 0LL);
}


void __fastcall WarBoardSquareComponent___OnEffectHide_b__61_0(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *effectPrefab; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_Object_o *v8; // x19

  if ( (byte_42EABAB & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EABAB = 1;
  }
  effectPrefab = (UnityEngine_Object_o *)this->fields.effectPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Implicit(effectPrefab, 0LL) )
  {
    v7 = this->fields.effectPrefab;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, 0, 0LL);
    v8 = (UnityEngine_Object_o *)this->fields.effectPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v8, 0LL);
  }
}


SimpleAnimation_o *__fastcall WarBoardSquareComponent__get_SimpleAnimation(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.simpleAnimation;
}


WarBoardSquareData_o *__fastcall WarBoardSquareComponent__get_SquareData(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.squareData;
}


WarBoardControlUiDataComponent_o *__fastcall WarBoardSquareComponent__get_UiDataComp(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.uiDataComp;
}


void __fastcall WarBoardSquareComponent__StopEffectEndLoop_d__64___ctor(
        WarBoardSquareComponent__StopEffectEndLoop_d__64_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardSquareComponent__StopEffectEndLoop_d__64__MoveNext(
        WarBoardSquareComponent__StopEffectEndLoop_d__64_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t _1__state; // w8
  void *effect; // x0
  int v13; // w8
  void *v14; // x20
  unsigned int v15; // w21
  float constantMax; // s8
  UnityEngine_Object_o *v17; // x19
  bool result; // w0
  UnityEngine_WaitForSeconds_o *v19; // x20
  Il2CppObject **p__2__current; // x19
  __int64 v21; // x0
  UnityEngine_ParticleSystem_MinMaxCurve_o v22; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v23; // [xsp+20h] [xbp-50h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-28h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v25; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v26; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v27; // 0:x0.8

  if ( (byte_42E5FD4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_WaitForSeconds_TypeInfo, v8, v9, v10);
    byte_42E5FD4 = 1;
  }
  m_ParticleSystem = 0LL;
  memset(&v23, 0, sizeof(v23));
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    effect = this->fields.effect;
    this->fields.__1__state = -1;
    if ( !effect )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effect, 0, 0LL);
    v17 = (UnityEngine_Object_o *)this->fields.effect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v17, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  effect = this->fields.effect;
  this->fields.__1__state = -1;
  if ( !effect )
    goto LABEL_23;
  effect = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
             (UnityEngine_GameObject_o *)effect,
             (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
  if ( !effect )
    goto LABEL_23;
  v13 = *((_DWORD *)effect + 6);
  v14 = effect;
  if ( v13 >= 1 )
  {
    v15 = 0;
    constantMax = 0.0;
    while ( 1 )
    {
      if ( v15 >= v13 )
      {
        v21 = sub_B5D6C8(effect);
        sub_B5D668(v21, 0LL);
      }
      effect = (void *)*((_QWORD *)v14 + (int)v15 + 4);
      if ( !effect )
        break;
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)effect, 0LL).fields.m_ParticleSystem;
      v25.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__get_startLifetime(&v22, v25, 0LL);
      v23 = v22;
      if ( constantMax < UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v23, 0LL) )
      {
        v26.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
        UnityEngine_ParticleSystem_MainModule__get_startLifetime(&v22, v26, 0LL);
        v23 = v22;
        constantMax = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v23, 0LL);
      }
      v27.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__set_loop(v27, 0, 0LL);
      v13 = *((_DWORD *)v14 + 6);
      if ( (int)++v15 >= v13 )
        goto LABEL_22;
    }
LABEL_23:
    sub_B5D69C(effect, method);
  }
  constantMax = 0.0;
LABEL_22:
  v19 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v19, constantMax * 1.2, 0LL);
  this->fields.__2__current = (Il2CppObject *)v19;
  p__2__current = &this->fields.__2__current;
  sub_B5D560(p__2__current);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall WarBoardSquareComponent__StopEffectEndLoop_d__64__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardSquareComponent__StopEffectEndLoop_d__64_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardSquareComponent__StopEffectEndLoop_d__64__System_Collections_IEnumerator_Reset(
        WarBoardSquareComponent__StopEffectEndLoop_d__64_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_WarBoardSquareComponent__StopEffectEndLoop_d__64_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall WarBoardSquareComponent__StopEffectEndLoop_d__64__System_Collections_IEnumerator_get_Current(
        WarBoardSquareComponent__StopEffectEndLoop_d__64_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardSquareComponent__StopEffectEndLoop_d__64__System_IDisposable_Dispose(
        WarBoardSquareComponent__StopEffectEndLoop_d__64_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardSquareComponent___c__DisplayClass60_0___ctor(
        WarBoardSquareComponent___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardSquareComponent___c__DisplayClass60_0___OnEffectDisp_b__0(
        WarBoardSquareComponent___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
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
  WebViewManager_o *Instance; // x0
  __int64 v21; // x1
  WebViewManager_o *v22; // x20
  System_String_o *v23; // x21
  System_String_o *v24; // x20
  Il2CppObject *CommonEffectAsset_object; // x20
  UnityEngine_Component_o *_4__this; // x19
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Component_o *v28; // x0
  int32_t effectId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E5FD2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v11, v12, v13);
    sub_B5D5C4(&WarBoardManager_WarBoardSqEfType_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_18440/*"ef_sq_"*/, v17, v18, v19);
    byte_42E5FD2 = 1;
  }
  effectId = this->fields.effectId;
  Instance = (WebViewManager_o *)j_il2cpp_value_box_0(WarBoardManager_WarBoardSqEfType_TypeInfo, &effectId);
  if ( !Instance )
    goto LABEL_17;
  v22 = Instance;
  v23 = (System_String_o *)((__int64 (__fastcall *)(WebViewManager_o *, void *))Instance->klass->vtable._3_ToString.method)(
                             Instance,
                             Instance->klass[1]._1.image);
  effectId = *(_DWORD *)j_il2cpp_object_unbox_0(v22);
  v24 = System_String__Concat_44577788((System_String_o *)StringLiteral_18440/*"ef_sq_"*/, v23, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               v24,
                               (const MethodInfo_2E68600 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (WebViewManager_o *)UnityEngine_Object__op_Inequality(
                                   (UnityEngine_Object_o *)CommonEffectAsset_object,
                                   0LL,
                                   0LL);
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( _4__this )
    {
      _4__this[10].klass = 0LL;
      v28 = _4__this + 10;
      goto LABEL_16;
    }
LABEL_17:
    sub_B5D69C(Instance, v21);
  }
  if ( !_4__this )
    goto LABEL_17;
  transform = UnityEngine_Component__get_transform(_4__this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  _4__this[10].klass = (UnityEngine_Component_c *)UnityEngine_Object__Instantiate_UILabel_(
                                                    (UILabel_o *)CommonEffectAsset_object,
                                                    transform,
                                                    (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
  v28 = _4__this + 10;
LABEL_16:
  sub_B5D560(v28);
}


void __fastcall WarBoardSquareComponent___c__DisplayClass62_0___ctor(
        WarBoardSquareComponent___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardSquareComponent___c__DisplayClass62_0___PlayEffect_b__0(
        WarBoardSquareComponent___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Component_o *_4__this; // x0
  struct UnityEngine_GameObject_o *asset; // x20
  UnityEngine_Transform_o *transform; // x21
  struct WarBoardSquareComponent_o *v14; // x8
  System_Xml_Schema_XmlSchemaObject_o *v15; // x2

  if ( (byte_42E5FD3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__GameObject__set_Item__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E5FD3 = 1;
  }
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  asset = this->fields.asset;
  transform = UnityEngine_Component__get_transform(_4__this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  _4__this = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_UILabel_(
                                          (UILabel_o *)asset,
                                          transform,
                                          (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
  v14 = this->fields.__4__this;
  if ( !v14
    || (v15 = (System_Xml_Schema_XmlSchemaObject_o *)_4__this,
        (_4__this = (UnityEngine_Component_o *)v14->fields.dicEffect) == 0LL) )
  {
LABEL_10:
    sub_B5D69C(_4__this, method);
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)_4__this,
    (System_Xml_XmlQualifiedName_o *)this->fields.key,
    v15,
    (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__GameObject__set_Item__);
}