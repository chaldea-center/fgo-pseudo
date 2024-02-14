void __fastcall WarBoardSquareComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_42165B3 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardSquareComponent_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_12638/*"ScaleSquare_start"*/, v8);
    byte_42165B3 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardSquareComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_12638/*"ScaleSquare_start"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_12638/*"ScaleSquare_start"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall WarBoardSquareComponent___ctor(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42165B2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo, v4);
    byte_42165B2 = 1;
  }
  this->fields.costAnimFadeTime = 0.3;
  *(_OWORD *)&this->fields.costLabelPos.fields.x = xmmword_3205880;
  *(_OWORD *)&this->fields.costLabelMovePos.fields.y = xmmword_3205890;
  v5 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                       System_Collections_Generic_Dictionary_string__GameObject__TypeInfo,
                                                                                       method,
                                                                                       v2);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v5,
    (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
  this->fields.dicEffect = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.dicEffect,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardSquareComponent__ActiveEditPointArrow(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *selectMarkerArrow; // x20
  UnityEngine_Behaviour_o *v4; // x0

  if ( (byte_42165A0 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42165A0 = 1;
  }
  selectMarkerArrow = (UnityEngine_Object_o *)this->fields.selectMarkerArrow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(selectMarkerArrow, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Behaviour_o *)this->fields.selectMarkerArrow;
    if ( !v4 )
      sub_B0D97C(0LL);
    UnityEngine_Behaviour__set_enabled(v4, 1, 0LL);
  }
}


void __fastcall WarBoardSquareComponent__DeactiveEditPointArrow(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *selectMarkerArrow; // x20
  UnityEngine_Behaviour_o *v4; // x0

  if ( (byte_42165A1 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42165A1 = 1;
  }
  selectMarkerArrow = (UnityEngine_Object_o *)this->fields.selectMarkerArrow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(selectMarkerArrow, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Behaviour_o *)this->fields.selectMarkerArrow;
    if ( !v4 )
      sub_B0D97C(0LL);
    UnityEngine_Behaviour__set_enabled(v4, 0, 0LL);
  }
}


void __fastcall WarBoardSquareComponent__DisableEditPosition(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *selectMarker; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct CommonEffectComponent_o *selectMarkerCommonEffect; // x20
  System_Action_o *v8; // x21

  if ( (byte_421659F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_WarBoardSquareComponent__DisableEditPosition_b__40_0__, v3);
    byte_421659F = 1;
  }
  selectMarker = this->fields.selectMarker;
  if ( !selectMarker )
    goto LABEL_8;
  if ( UnityEngine_GameObject__get_activeSelf(selectMarker, 0LL) )
  {
    selectMarkerCommonEffect = this->fields.selectMarkerCommonEffect;
    v8 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v5, v6);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_WarBoardSquareComponent__DisableEditPosition_b__40_0__, 0LL);
    if ( selectMarkerCommonEffect )
    {
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))selectMarkerCommonEffect->klass->vtable._8_Stop.method)(
        selectMarkerCommonEffect,
        0LL,
        v8,
        selectMarkerCommonEffect->klass->vtable._9_ForceStop.methodPtr);
      return;
    }
LABEL_8:
    sub_B0D97C(selectMarker);
  }
}


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
      sub_B0D97C(battleTargetPlayer);
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
    sub_B0D97C(selectMarker);
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
    sub_B0D97C(costLabel);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costLabel, 0, 0LL);
}


bool __fastcall WarBoardSquareComponent__GetButtonIsEnable(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  struct UIButton_o *button; // x0

  button = this->fields.button;
  if ( !button )
    sub_B0D97C(0LL);
  return ((__int64 (__fastcall *)(struct UIButton_o *, Il2CppMethodPointer))button->klass->vtable._4_get_isEnabled.method)(
           button,
           button->klass->vtable._5_set_isEnabled.methodPtr);
}


void __fastcall WarBoardSquareComponent__InitCostAnim(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *tweenScale; // x20
  UnityEngine_Object_o *v4; // x20
  UnityEngine_Object_o *tweenPosition; // x20
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Object_o *tweenAlpha; // x20
  UnityEngine_Object_o *v8; // x19

  if ( (byte_42165A9 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42165A9 = 1;
  }
  tweenScale = (UnityEngine_Object_o *)this->fields.tweenScale;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(tweenScale, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.tweenScale;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v4, 0LL);
  }
  tweenPosition = (UnityEngine_Object_o *)this->fields.tweenPosition;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(tweenPosition, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Object_o *)this->fields.tweenPosition;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v6, 0LL);
  }
  tweenAlpha = (UnityEngine_Object_o *)this->fields.tweenAlpha;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(tweenAlpha, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Object_o *)this->fields.tweenAlpha;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v8, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareComponent__Initialize(
        WarBoardSquareComponent_o *this,
        UIAtlas_o *imageSetAtlas,
        WarBoardSquareData_o *data,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  char *dicEffect; // x0
  struct WarBoardSquareData_o **p_squareData; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_Transform_o *transform; // x22
  int v21; // s0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UILabel_o *costLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v32; // x0
  float v33; // s4
  float v34; // s5
  float v35; // s6
  float v36; // s7
  UIWidget_o *v37; // x20
  struct SimpleAnimation_o *Component_srcLineSprite; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct CommonEffectComponent_o *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct CommonEffectComponent_o *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  struct CommonEffectComponent_o *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct CommonEffectComponent_o *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  const MethodInfo *v73; // x2
  const MethodInfo *v74; // x1
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v77; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_421659D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__, imageSetAtlas);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v7);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_B0D8A4(&StringLiteral_22320/*"squares"*/, v10);
    sub_B0D8A4(&StringLiteral_22321/*"squares_target"*/, v11);
    byte_421659D = 1;
  }
  dicEffect = (char *)this->fields.dicEffect;
  if ( !dicEffect )
    goto LABEL_33;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dicEffect,
    (const MethodInfo_2E4AE44 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
  this->fields.squareData = data;
  p_squareData = &this->fields.squareData;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.squareData,
    (System_Int32_array **)data,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  dicEffect = (char *)this->fields.squareImage;
  if ( !dicEffect )
    goto LABEL_33;
  UISprite__set_atlas((UISprite_o *)dicEffect, imageSetAtlas, 0LL);
  dicEffect = (char *)this->fields.squareImage;
  if ( !dicEffect )
    goto LABEL_33;
  UISprite__set_spriteName((UISprite_o *)dicEffect, (System_String_o *)StringLiteral_22320/*"squares"*/, 0LL);
  dicEffect = (char *)this->fields.squareSubImage;
  if ( !dicEffect )
    goto LABEL_33;
  UISprite__set_atlas((UISprite_o *)dicEffect, imageSetAtlas, 0LL);
  dicEffect = (char *)this->fields.squareSubImage;
  if ( !dicEffect )
    goto LABEL_33;
  UISprite__set_spriteName((UISprite_o *)dicEffect, (System_String_o *)StringLiteral_22321/*"squares_target"*/, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  dicEffect = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !data )
    goto LABEL_33;
  if ( !dicEffect )
    goto LABEL_33;
  *(UnityEngine_Vector3_o *)&v21 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)dicEffect,
                                     data->fields._squareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_33;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v21, 0LL);
  dicEffect = (char *)*p_squareData;
  if ( !*p_squareData )
    goto LABEL_33;
  *((_QWORD *)dicEffect + 6) = this;
  sub_B0D840(
    (BattleServantConfConponent_o *)(dicEffect + 48),
    (System_Int32_array **)this,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  costLabel = this->fields.costLabel;
  dicEffect = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dicEffect, 0LL);
  GameObjectExtensions__ResetLocalScale(v32, 0LL);
  v37 = (UIWidget_o *)this->fields.costLabel;
  if ( !v37 )
    goto LABEL_33;
  v76.fields.r = v37->fields.mColor.fields.r;
  v76.fields.g = v37->fields.mColor.fields.g;
  v76.fields.b = v37->fields.mColor.fields.b;
  v76.fields.a = 0.0;
  var40.methodPointer = 0LL;
  var40.invoker_method = 0LL;
  UnityEngine_Color___ctor(v76, v33, v34, v35, v36, &var40);
  *(_QWORD *)&v77.fields.r = var40.methodPointer;
  *(_QWORD *)&v77.fields.b = var40.invoker_method;
  UIWidget__set_color(v37, v77, 0LL);
  dicEffect = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !dicEffect )
    goto LABEL_33;
  Component_srcLineSprite = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)dicEffect,
                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = Component_srcLineSprite;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimation,
    (System_Int32_array **)Component_srcLineSprite,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  dicEffect = (char *)this->fields.selectMarker;
  if ( !dicEffect )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dicEffect, 0, 0LL);
  dicEffect = (char *)this->fields.selectMarker;
  if ( !dicEffect )
    goto LABEL_33;
  v45 = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            (UnityEngine_GameObject_o *)dicEffect,
                                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.selectMarkerCommonEffect = v45;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.selectMarkerCommonEffect,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  dicEffect = (char *)this->fields.selectCircle;
  if ( !dicEffect )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dicEffect, 0, 0LL);
  dicEffect = (char *)this->fields.selectCircle;
  if ( !dicEffect )
    goto LABEL_33;
  v52 = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            (UnityEngine_GameObject_o *)dicEffect,
                                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.selectCircleCommonEffect = v52;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.selectCircleCommonEffect,
    (System_Int32_array **)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  dicEffect = (char *)this->fields.battleTargetPlayer;
  if ( !dicEffect )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dicEffect, 0, 0LL);
  dicEffect = (char *)this->fields.battleTargetPlayer;
  if ( !dicEffect )
    goto LABEL_33;
  v59 = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            (UnityEngine_GameObject_o *)dicEffect,
                                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.battleTargetPlayerCommonEffect = v59;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.battleTargetPlayerCommonEffect,
    (System_Int32_array **)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  dicEffect = (char *)this->fields.battleTargetEnemy;
  if ( !dicEffect )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dicEffect, 0, 0LL);
  dicEffect = (char *)this->fields.battleTargetEnemy;
  if ( !dicEffect )
    goto LABEL_33;
  v66 = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            (UnityEngine_GameObject_o *)dicEffect,
                                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.battleTargetEnemyCommonEffect = v66;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.battleTargetEnemyCommonEffect,
    (System_Int32_array **)v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  WarBoardSquareComponent__SetMovePoint(this, 1, v73);
  this->fields.isSelectable = 0;
  WarBoardSquareComponent__SetSprite(this, v74);
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
    sub_B0D97C(dicEffect);
  }
  UIWidget__ResizeCollider((UIWidget_o *)dicEffect, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareComponent__NondispBattleRange(
        WarBoardSquareComponent_o *this,
        bool isPlayerForce,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *battleTargetPlayer; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct CommonEffectComponent_o *battleTargetPlayerCommonEffect; // x20
  System_Action_o *v11; // x0
  __int64 *v12; // x8
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x21

  if ( (byte_42165AA & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isPlayerForce);
    sub_B0D8A4(&Method_WarBoardSquareComponent__NondispBattleRange_b__57_0__, v5);
    sub_B0D8A4(&Method_WarBoardSquareComponent__NondispBattleRange_b__57_1__, v6);
    byte_42165AA = 1;
  }
  if ( isPlayerForce )
  {
    battleTargetPlayer = this->fields.battleTargetPlayer;
    if ( !battleTargetPlayer )
      goto LABEL_13;
    if ( UnityEngine_GameObject__get_activeSelf(battleTargetPlayer, 0LL) )
    {
      battleTargetPlayerCommonEffect = this->fields.battleTargetPlayerCommonEffect;
      v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
      v12 = &Method_WarBoardSquareComponent__NondispBattleRange_b__57_0__;
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
      v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v13, v14);
      v12 = &Method_WarBoardSquareComponent__NondispBattleRange_b__57_1__;
LABEL_10:
      v15 = v11;
      System_Action___ctor(v11, (Il2CppObject *)this, *v12, 0LL);
      if ( battleTargetPlayerCommonEffect )
      {
        ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))battleTargetPlayerCommonEffect->klass->vtable._8_Stop.method)(
          battleTargetPlayerCommonEffect,
          0LL,
          v15,
          battleTargetPlayerCommonEffect->klass->vtable._9_ForceStop.methodPtr);
        return;
      }
LABEL_13:
      sub_B0D97C(battleTargetPlayer);
    }
  }
}


void __fastcall WarBoardSquareComponent__OnClickSquare(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WarBoardData_o *Instance; // x0
  struct WarBoardSquareData_o *squareData; // x8
  WarBoardManager_o *v6; // x19
  struct WarBoardSquareData_o *v7; // x8
  WarBoardPieceData_o *v8; // x21
  struct WarBoardSquareData_o *v9; // x8
  WarBoardItemData_o *v10; // x22
  WarBoardEffectData_o *Effect; // x23
  struct WarBoardTreasureData_array *treasures; // x8
  System_String_o *v13; // x21
  struct WarBoardSquareData_o *v14; // x8

  if ( (byte_42165AB & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_42165AB = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_32;
  v6 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_32;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_22073600(
                                 Instance,
                                 squareData->fields._squareIndex_k__BackingField,
                                 0LL);
  v7 = this->fields.squareData;
  if ( !v7 )
    goto LABEL_32;
  v8 = (WarBoardPieceData_o *)Instance;
  Instance = v6->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_32;
  Instance = (WarBoardData_o *)WarBoardData__GetItem(Instance, v7->fields._squareIndex_k__BackingField, 0LL);
  v9 = this->fields.squareData;
  if ( !v9 )
    goto LABEL_32;
  v10 = (WarBoardItemData_o *)Instance;
  Instance = v6->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_32;
  Effect = WarBoardData__GetEffect(Instance, v9->fields._squareIndex_k__BackingField, 0LL);
  if ( WarBoardManager__get_isSelectedPiece(v6, 0LL) && this->fields.isSelectable )
  {
    if ( !v8 || !WarBoardManager__IsSelectedPieceSame(v6, v8, 0LL) )
    {
      Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        treasures = Instance[1].fields.treasures;
        if ( treasures )
        {
          v13 = *(System_String_o **)&treasures->max_length;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          Instance = (WarBoardData_o *)SoundManager__playSe(v13, 0LL);
          v14 = this->fields.squareData;
          if ( v14 )
          {
            WarBoardManager__SelectedPieceAction(v6, v14->fields._squareIndex_k__BackingField, 0LL);
            return;
          }
        }
      }
LABEL_32:
      sub_B0D97C(Instance);
    }
    goto LABEL_22;
  }
  if ( v8 )
  {
LABEL_22:
    Instance = (WarBoardData_o *)v8->fields.pieceComponent;
    if ( !Instance )
      goto LABEL_32;
    (*(void (__fastcall **)(WarBoardData_o *, void *))&Instance->klass[1]._1.byval_arg.bits)(
      Instance,
      Instance->klass[1]._1.this_arg.data);
    return;
  }
  if ( v10 && !WarBoardItemData__get_Acquired(v10, 0LL) )
  {
    Instance = (WarBoardData_o *)v10->fields.component;
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
    WarBoardManager__HideSimplePopup(v6, 0LL, 0LL);
  }
}


void __fastcall WarBoardSquareComponent__OnDeselect(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *selectCircle; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct CommonEffectComponent_o *selectCircleCommonEffect; // x20
  System_Action_o *v8; // x21

  if ( (byte_42165A6 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_WarBoardSquareComponent__OnDeselect_b__49_0__, v3);
    byte_42165A6 = 1;
  }
  selectCircle = this->fields.selectCircle;
  if ( !selectCircle )
    goto LABEL_8;
  if ( UnityEngine_GameObject__get_activeSelf(selectCircle, 0LL) )
  {
    selectCircleCommonEffect = this->fields.selectCircleCommonEffect;
    v8 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v5, v6);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_WarBoardSquareComponent__OnDeselect_b__49_0__, 0LL);
    if ( selectCircleCommonEffect )
    {
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))selectCircleCommonEffect->klass->vtable._8_Stop.method)(
        selectCircleCommonEffect,
        0LL,
        v8,
        selectCircleCommonEffect->klass->vtable._9_ForceStop.methodPtr);
      return;
    }
LABEL_8:
    sub_B0D97C(selectCircle);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareComponent__OnEffectDisp(
        WarBoardSquareComponent_o *this,
        int32_t effectId,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x22
  __int64 v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  System_Delegate_o *v26; // x23
  WarBoardTaskBase_TaskCallback_o *v27; // x24
  System_Int32_array **v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  WebViewManager_o *Instance; // x19
  __int64 v36; // x21
  __int64 v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x0
  __int64 v45; // x0

  if ( (byte_42165AD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, *(_QWORD *)&effectId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    sub_B0D8A4(&WarBoardTaskBase_TaskCallback_TypeInfo, v8);
    sub_B0D8A4(&Method_WarBoardSquareComponent___c__DisplayClass60_0__OnEffectDisp_b__0__, v9);
    sub_B0D8A4(&WarBoardSquareComponent___c__DisplayClass60_0_TypeInfo, v10);
    sub_B0D8A4(&WarBoardCallbackTask_TypeInfo, v11);
    sub_B0D8A4(&WarBoardTaskBase___TypeInfo, v12);
    byte_42165AD = 1;
  }
  v13 = sub_B0D974(WarBoardSquareComponent___c__DisplayClass60_0_TypeInfo, *(_QWORD *)&effectId, taskList);
  WarBoardSquareComponent___c__DisplayClass60_0___ctor((WarBoardSquareComponent___c__DisplayClass60_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_14;
  *(_QWORD *)(v13 + 24) = this;
  *(_DWORD *)(v13 + 16) = effectId;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  v23 = sub_B0D974(WarBoardCallbackTask_TypeInfo, v21, v22);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v23, 0LL, 0LL);
  if ( !v23 )
    goto LABEL_14;
  v26 = *(System_Delegate_o **)(v23 + 32);
  v27 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v24, v25);
  WarBoardTaskBase_TaskCallback___ctor(
    v27,
    (Il2CppObject *)v13,
    Method_WarBoardSquareComponent___c__DisplayClass60_0__OnEffectDisp_b__0__,
    0LL);
  v28 = (System_Int32_array **)System_Delegate__Combine(v26, (System_Delegate_o *)v27, 0LL);
  if ( v28 && *v28 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v37 = sub_B0DC70(v28);
LABEL_16:
    v44 = sub_B0D99C(v37);
    sub_B0D948(v44, 0LL);
  }
  *(_QWORD *)(v23 + 32) = v28;
  sub_B0D840((BattleServantConfConponent_o *)(v23 + 32), v28, v29, v30, v31, v32, v33, v34);
  if ( taskList )
  {
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    return;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v14 = sub_B0D8BC(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !v14 )
LABEL_14:
    sub_B0D97C(v14);
  v36 = v14;
  v37 = sub_B0D964(v23, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
  if ( !v37 )
    goto LABEL_16;
  if ( !*(_DWORD *)(v36 + 24) )
  {
    v45 = sub_B0D9A8(v37);
    sub_B0D948(v45, 0LL);
  }
  *(_QWORD *)(v36 + 32) = v23;
  sub_B0D840((BattleServantConfConponent_o *)(v36 + 32), (System_Int32_array **)v23, v38, v39, v40, v41, v42, v43);
  if ( !Instance )
    goto LABEL_14;
  WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v36, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareComponent__OnEffectHide(
        WarBoardSquareComponent_o *this,
        int32_t effectId,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  System_Delegate_o *v15; // x23
  WarBoardTaskBase_TaskCallback_o *v16; // x24
  System_Int32_array **v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  WebViewManager_o *Instance; // x19
  __int64 v25; // x21
  __int64 v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x0
  __int64 v34; // x0

  if ( (byte_42165AE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, *(_QWORD *)&effectId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_B0D8A4(&WarBoardTaskBase_TaskCallback_TypeInfo, v7);
    sub_B0D8A4(&WarBoardCallbackTask_TypeInfo, v8);
    sub_B0D8A4(&Method_WarBoardSquareComponent__OnEffectHide_b__61_0__, v9);
    sub_B0D8A4(&WarBoardTaskBase___TypeInfo, v10);
    byte_42165AE = 1;
  }
  v11 = sub_B0D974(WarBoardCallbackTask_TypeInfo, *(_QWORD *)&effectId, taskList);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v11, 0LL, 0LL);
  if ( !v11 )
    goto LABEL_13;
  v15 = *(System_Delegate_o **)(v11 + 32);
  v16 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v13, v14);
  WarBoardTaskBase_TaskCallback___ctor(
    v16,
    (Il2CppObject *)this,
    Method_WarBoardSquareComponent__OnEffectHide_b__61_0__,
    0LL);
  v17 = (System_Int32_array **)System_Delegate__Combine(v15, (System_Delegate_o *)v16, 0LL);
  if ( v17 && *v17 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v26 = sub_B0DC70(v17);
LABEL_15:
    v33 = sub_B0D99C(v26);
    sub_B0D948(v33, 0LL);
  }
  *(_QWORD *)(v11 + 32) = v17;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 32), v17, v18, v19, v20, v21, v22, v23);
  if ( taskList )
  {
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    return;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v12 = sub_B0D8BC(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !v12 )
LABEL_13:
    sub_B0D97C(v12);
  v25 = v12;
  v26 = sub_B0D964(v11, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
  if ( !v26 )
    goto LABEL_15;
  if ( !*(_DWORD *)(v25 + 24) )
  {
    v34 = sub_B0D9A8(v26);
    sub_B0D948(v34, 0LL);
  }
  *(_QWORD *)(v25 + 32) = v11;
  sub_B0D840((BattleServantConfConponent_o *)(v25 + 32), (System_Int32_array **)v11, v27, v28, v29, v30, v31, v32);
  if ( !Instance )
    goto LABEL_13;
  WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v25, 0LL);
}


void __fastcall WarBoardSquareComponent__OnLongClickSquare(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  struct WarBoardSquareData_o *squareData; // x8
  WarBoardManager_o *v5; // x19
  struct WarBoardSquareData_o *v6; // x8
  WarBoardData_o *v7; // x21
  struct WarBoardSquareData_o *v8; // x8
  WarBoardItemData_o *v9; // x20
  WarBoardEffectData_o *Effect; // x0
  WarBoardEffectData_o *v11; // x22

  if ( (byte_42165AC & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_42165AC = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_21;
  v5 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_21;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_22073600(
                                 Instance,
                                 squareData->fields._squareIndex_k__BackingField,
                                 0LL);
  v6 = this->fields.squareData;
  if ( !v6 )
    goto LABEL_21;
  v7 = Instance;
  Instance = v5->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_21;
  Instance = (WarBoardData_o *)WarBoardData__GetItem(Instance, v6->fields._squareIndex_k__BackingField, 0LL);
  v8 = this->fields.squareData;
  if ( !v8 )
    goto LABEL_21;
  v9 = (WarBoardItemData_o *)Instance;
  Instance = v5->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_21;
  Effect = WarBoardData__GetEffect(Instance, v8->fields._squareIndex_k__BackingField, 0LL);
  if ( v7 )
  {
    Instance = (WarBoardData_o *)v7[1].fields.stageEntity;
    if ( Instance )
    {
      (*(void (__fastcall **)(WarBoardData_o *, Il2CppClass *))&Instance->klass[1]._1.this_arg.bits)(
        Instance,
        Instance->klass[1]._1.element_class);
      return;
    }
LABEL_21:
    sub_B0D97C(Instance);
  }
  v11 = Effect;
  if ( v9 && !WarBoardItemData__get_Acquired(v9, 0LL) )
  {
    Instance = (WarBoardData_o *)v9->fields.component;
    if ( !Instance )
      goto LABEL_21;
    WarBoardItemComponent__OnLongClick((WarBoardItemComponent_o *)Instance, 0LL);
  }
  else if ( v11 )
  {
    Instance = (WarBoardData_o *)v11->fields.component;
    if ( !Instance )
      goto LABEL_21;
    WarBoardEffectComponent__OnLongClick((WarBoardEffectComponent_o *)Instance, 0LL);
  }
  else
  {
    WarBoardManager__HideSimplePopup(v5, 0LL, 0LL);
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
    sub_B0D97C(selectCircle);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  WarBoardManager_o *Instance; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct WarBoardSquareData_o *squareData; // x8
  int imageId_k__BackingField; // w8
  int v30; // w9
  System_String_o *v31; // x0
  System_String_o *v32; // x21
  _QWORD **v33; // x23
  __int64 v34; // x22
  __int16 v35; // w8
  __int64 v36; // x22
  __int64 v37; // x22
  __int64 v38; // x22
  System_String_o *v39; // x21
  System_Int32_array **CommonEffectAsset_object; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  UnityEngine_Object_o *v47; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  System_Action_o *v51; // x21
  UnityEngine_Object_o *uiDataComp; // x20
  unsigned int v53; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42165AF & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, effectKey);
    sub_B0D8A4(&Method_System_Array_Empty_object___, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_B0D8A4(&Method_WarBoardSquareComponent___c__DisplayClass62_0__PlayEffect_b__0__, v10);
    sub_B0D8A4(&WarBoardSquareComponent___c__DisplayClass62_0_TypeInfo, v11);
    sub_B0D8A4(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v12);
    byte_42165AF = 1;
  }
  v53 = 0;
  v13 = sub_B0D974(WarBoardSquareComponent___c__DisplayClass62_0_TypeInfo, effectKey, prefix);
  WarBoardSquareComponent___c__DisplayClass62_0___ctor((WarBoardSquareComponent___c__DisplayClass62_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_34;
  *(_QWORD *)(v13 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  v21 = (System_Int32_array **)System_String__Concat_43849904(prefix, effectKey, 0LL);
  *(_QWORD *)(v13 + 32) = v21;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 32), v21, v22, v23, v24, v25, v26, v27);
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_34;
  imageId_k__BackingField = squareData->fields._imageId_k__BackingField;
  if ( imageId_k__BackingField >= 0 )
    v30 = imageId_k__BackingField;
  else
    v30 = imageId_k__BackingField + 1;
  v53 = imageId_k__BackingField - (v30 & 0xFFFFFFFE);
  v31 = System_Int32__ToString((int32_t)&v53, 0LL);
  v32 = System_String__Concat_43849904(effectKey, v31, 0LL);
  v33 = (_QWORD **)Method_System_Array_Empty_object___;
  v34 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
  v35 = *(_WORD *)(v34 + 306);
  if ( (v35 & 1) == 0 )
  {
    sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
    v35 = *(_WORD *)(v34 + 306);
  }
  if ( (v35 & 0x400) != 0 )
  {
    v36 = *v33[6];
    if ( (*(_BYTE *)(v36 + 306) & 1) == 0 )
      sub_AA65A4(*v33[6]);
    if ( !*(_DWORD *)(v36 + 224) )
    {
      v37 = *v33[6];
      if ( (*(_BYTE *)(v37 + 306) & 1) == 0 )
        sub_AA65A4(*v33[6]);
      j_il2cpp_runtime_class_init_0(v37);
    }
  }
  v38 = *v33[6];
  if ( (*(_BYTE *)(v38 + 306) & 1) == 0 )
    sub_AA65A4(*v33[6]);
  v39 = System_String__Format_43928628(v32, **(System_Object_array ***)(v38 + 184), 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  CommonEffectAsset_object = (System_Int32_array **)WarBoardManager__GetCommonEffectAsset_object_(
                                                      Instance,
                                                      v39,
                                                      (const MethodInfo_2FC9D88 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  *(_QWORD *)(v13 + 16) = CommonEffectAsset_object;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 16), CommonEffectAsset_object, v41, v42, v43, v44, v45, v46);
  v47 = *(UnityEngine_Object_o **)(v13 + 16);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v47, 0LL, 0LL) )
    return 0;
  v51 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v48, v49);
  System_Action___ctor(
    v51,
    (Il2CppObject *)v13,
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
    if ( v51 )
    {
      System_Action__Invoke(v51, 0LL);
      return 1;
    }
LABEL_34:
    sub_B0D97C(Instance);
  }
  Instance = (WarBoardManager_o *)this->fields.uiDataComp;
  if ( !Instance )
    goto LABEL_34;
  WarBoardControlUiDataComponent__SyncAnimation((WarBoardControlUiDataComponent_o *)Instance, v51, 0LL);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareComponent__PlayUnDispCostAnim(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  char *costLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct TweenScale_o *v6; // x0
  struct TweenScale_o **p_tweenScale; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct TweenScale_o *tweenScale; // x21
  float v15; // s0
  float v16; // s1
  float v17; // s2
  struct TweenScale_o *v18; // x8
  float costAnimScale; // w9
  struct TweenScale_o *v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1

  if ( (byte_42165A7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UITweener_Begin_TweenScale___, method);
    sub_B0D8A4(&StringLiteral_10719/*"PlayUnDispCostAnim2"*/, v3);
    byte_42165A7 = 1;
  }
  costLabel = (char *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_10;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL);
  v6 = (struct TweenScale_o *)UITweener__Begin_TweenWidth_(
                                gameObject,
                                this->fields.costAnimScaleTime,
                                (const MethodInfo_205679C *)Method_UITweener_Begin_TweenScale___);
  p_tweenScale = &this->fields.tweenScale;
  this->fields.tweenScale = v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.tweenScale,
    (System_Int32_array **)v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  tweenScale = this->fields.tweenScale;
  *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_one(0LL);
  if ( !tweenScale )
    goto LABEL_10;
  tweenScale->fields.from.fields.x = v15;
  tweenScale->fields.from.fields.y = v16;
  tweenScale->fields.from.fields.z = v17;
  v18 = this->fields.tweenScale;
  if ( !v18 )
    goto LABEL_10;
  costAnimScale = this->fields.costAnimScale;
  v18->fields.to.fields.x = costAnimScale;
  v18->fields.to.fields.y = costAnimScale;
  v18->fields.to.fields.z = costAnimScale;
  if ( !*p_tweenScale
    || ((*p_tweenScale)->fields.style = 6,
        v20 = this->fields.tweenScale,
        costLabel = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        !v20)
    || (v20->fields.eventReceiver = (struct UnityEngine_GameObject_o *)costLabel,
        sub_B0D840(
          (BattleServantConfConponent_o *)&v20->fields.eventReceiver,
          (System_Int32_array **)costLabel,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26),
        (costLabel = (char *)*p_tweenScale) == 0LL) )
  {
LABEL_10:
    sub_B0D97C(costLabel);
  }
  v33 = (System_Int32_array **)StringLiteral_10719/*"PlayUnDispCostAnim2"*/;
  *((_QWORD *)costLabel + 10) = StringLiteral_10719/*"PlayUnDispCostAnim2"*/;
  sub_B0D840((BattleServantConfConponent_o *)(costLabel + 80), v33, v27, v28, v29, v30, v31, v32);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareComponent__PlayUnDispCostAnim2(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  char *costLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct TweenPosition_o *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct TweenPosition_o *tweenPosition; // x8
  float z; // w10
  struct TweenPosition_o *v17; // x8
  float v18; // w10
  struct TweenPosition_o *v19; // x8
  struct TweenPosition_o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_GameObject_o *v27; // x0
  struct TweenScale_o *v28; // x0
  struct TweenScale_o **p_tweenScale; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct TweenScale_o *tweenScale; // x8
  float costAnimScale; // w9
  struct TweenScale_o *v38; // x21
  float v39; // s0
  float v40; // s1
  float v41; // s2
  struct TweenScale_o *v42; // x20
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  UnityEngine_GameObject_o *v49; // x0
  struct TweenAlpha_o *v50; // x0
  struct TweenAlpha_o **p_tweenAlpha; // x20
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct TweenAlpha_o *tweenAlpha; // x8
  struct TweenAlpha_o *v59; // x21
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x1

  if ( (byte_42165A8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UITweener_Begin_TweenAlpha___, method);
    sub_B0D8A4(&Method_UITweener_Begin_TweenPosition___, v3);
    sub_B0D8A4(&Method_UITweener_Begin_TweenScale___, v4);
    sub_B0D8A4(&StringLiteral_6696/*"FinishUnDispCostAnim"*/, v5);
    byte_42165A8 = 1;
  }
  costLabel = (char *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_20;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL);
  v8 = (struct TweenPosition_o *)UITweener__Begin_TweenWidth_(
                                   gameObject,
                                   this->fields.costAnimFadeTime,
                                   (const MethodInfo_205679C *)Method_UITweener_Begin_TweenPosition___);
  this->fields.tweenPosition = v8;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.tweenPosition,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  tweenPosition = this->fields.tweenPosition;
  if ( !tweenPosition )
    goto LABEL_20;
  z = this->fields.costLabelPos.fields.z;
  *(_QWORD *)&tweenPosition->fields.from.fields.x = *(_QWORD *)&this->fields.costLabelPos.fields.x;
  tweenPosition->fields.from.fields.z = z;
  v17 = this->fields.tweenPosition;
  if ( !v17 )
    goto LABEL_20;
  v18 = this->fields.costLabelMovePos.fields.z;
  *(_QWORD *)&v17->fields.to.fields.x = *(_QWORD *)&this->fields.costLabelMovePos.fields.x;
  v17->fields.to.fields.z = v18;
  v19 = this->fields.tweenPosition;
  if ( !v19 )
    goto LABEL_20;
  v19->fields.style = 0;
  v20 = this->fields.tweenPosition;
  costLabel = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v20 )
    goto LABEL_20;
  v20->fields.eventReceiver = (struct UnityEngine_GameObject_o *)costLabel;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v20->fields.eventReceiver,
    (System_Int32_array **)costLabel,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  costLabel = (char *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_20;
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL);
  v28 = (struct TweenScale_o *)UITweener__Begin_TweenWidth_(
                                 v27,
                                 this->fields.costAnimFadeTime,
                                 (const MethodInfo_205679C *)Method_UITweener_Begin_TweenScale___);
  p_tweenScale = &this->fields.tweenScale;
  this->fields.tweenScale = v28;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.tweenScale,
    (System_Int32_array **)v28,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  tweenScale = this->fields.tweenScale;
  if ( !tweenScale )
    goto LABEL_20;
  costAnimScale = this->fields.costAnimScale;
  tweenScale->fields.from.fields.x = costAnimScale;
  tweenScale->fields.from.fields.y = costAnimScale;
  tweenScale->fields.from.fields.z = costAnimScale;
  v38 = *p_tweenScale;
  *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v38 )
    goto LABEL_20;
  v38->fields.to.fields.x = v39;
  v38->fields.to.fields.y = v40;
  v38->fields.to.fields.z = v41;
  if ( !*p_tweenScale )
    goto LABEL_20;
  (*p_tweenScale)->fields.style = 0;
  v42 = this->fields.tweenScale;
  costLabel = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v42 )
    goto LABEL_20;
  v42->fields.eventReceiver = (struct UnityEngine_GameObject_o *)costLabel;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v42->fields.eventReceiver,
    (System_Int32_array **)costLabel,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  costLabel = (char *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_20;
  v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL);
  v50 = (struct TweenAlpha_o *)UITweener__Begin_TweenWidth_(
                                 v49,
                                 this->fields.costAnimFadeTime,
                                 (const MethodInfo_205679C *)Method_UITweener_Begin_TweenAlpha___);
  p_tweenAlpha = &this->fields.tweenAlpha;
  this->fields.tweenAlpha = v50;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.tweenAlpha,
    (System_Int32_array **)v50,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  tweenAlpha = this->fields.tweenAlpha;
  if ( !tweenAlpha )
    goto LABEL_20;
  tweenAlpha->fields.from = 1.0;
  if ( !*p_tweenAlpha
    || ((*p_tweenAlpha)->fields.to = 0.0, !*p_tweenAlpha)
    || ((*p_tweenAlpha)->fields.style = 0,
        v59 = this->fields.tweenAlpha,
        costLabel = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        !v59)
    || (v59->fields.eventReceiver = (struct UnityEngine_GameObject_o *)costLabel,
        sub_B0D840(
          (BattleServantConfConponent_o *)&v59->fields.eventReceiver,
          (System_Int32_array **)costLabel,
          v60,
          v61,
          v62,
          v63,
          v64,
          v65),
        (costLabel = (char *)*p_tweenAlpha) == 0LL) )
  {
LABEL_20:
    sub_B0D97C(costLabel);
  }
  v72 = (System_Int32_array **)StringLiteral_6696/*"FinishUnDispCostAnim"*/;
  *((_QWORD *)costLabel + 10) = StringLiteral_6696/*"FinishUnDispCostAnim"*/;
  sub_B0D840((BattleServantConfConponent_o *)(costLabel + 80), v72, v66, v67, v68, v69, v70, v71);
}


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
    sub_B0D97C(this);
  }
  (*(void (__fastcall **)(WarBoardSquareComponent_o *, __int64, _QWORD, void *))&this->klass[1]._1.byval_arg.bits)(
    this,
    1LL,
    0LL,
    this->klass[1]._1.this_arg.data);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareComponent__SetButtonEnable(
        WarBoardSquareComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  UnityEngine_Object_o *subButton; // x21
  struct UIButton_o *v7; // x0
  UIButton_c *klass; // x8
  int32_t mState; // w20

  if ( (byte_42165A5 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, enable);
    byte_42165A5 = 1;
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
      v7 = this->fields.button;
      if ( v7 )
      {
        if ( enable )
        {
          ((void (__fastcall *)(struct UIButton_o *, __int64, Il2CppMethodPointer))v7->klass->vtable._5_set_isEnabled.method)(
            v7,
            1LL,
            v7->klass->vtable._6_OnInit.methodPtr);
          v7 = this->fields.subButton;
          if ( v7 )
          {
            klass = v7->klass;
LABEL_19:
            ((void (*)(void))klass->vtable._5_set_isEnabled.method)();
            return;
          }
        }
        else
        {
          mState = v7->fields.mState;
          ((void (__fastcall *)(struct UIButton_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._5_set_isEnabled.method)(
            v7,
            0LL,
            v7->klass->vtable._6_OnInit.methodPtr);
          if ( mState )
          {
            v7 = this->fields.subButton;
            if ( v7 )
            {
              klass = v7->klass;
              goto LABEL_19;
            }
          }
          else
          {
            v7 = this->fields.button;
            if ( v7 )
            {
              ((void (__fastcall *)(struct UIButton_o *, _QWORD, __int64, Il2CppMethodPointer))v7->klass->vtable._14_SetState.method)(
                v7,
                0LL,
                1LL,
                v7->klass->vtable._15_OnClick.methodPtr);
              v7 = this->fields.subButton;
              if ( v7 )
              {
                ((void (__fastcall *)(struct UIButton_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._5_set_isEnabled.method)(
                  v7,
                  0LL,
                  v7->klass->vtable._6_OnInit.methodPtr);
                v7 = this->fields.subButton;
                if ( v7 )
                {
                  ((void (__fastcall *)(struct UIButton_o *, _QWORD, __int64, Il2CppMethodPointer))v7->klass->vtable._14_SetState.method)(
                    v7,
                    0LL,
                    1LL,
                    v7->klass->vtable._15_OnClick.methodPtr);
                  return;
                }
              }
            }
          }
        }
      }
      sub_B0D97C(v7);
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
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  float v9; // s12
  float v10; // s13
  float v11; // s14
  float v12; // s15
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_Component_o *costLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v19; // x0
  float v20; // s4
  float v21; // s5
  float v22; // s6
  float v23; // s7
  UIWidget_o *v24; // x21
  UILabel_o *v25; // x20
  System_String_o *v26; // x21
  Il2CppObject *v27; // x0
  MethodInfo v28; // [xsp+0h] [xbp-70h] BYREF
  int32_t v29; // [xsp+5Ch] [xbp-14h] BYREF
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = gradientBottom.fields.a;
  b = gradientBottom.fields.b;
  g = gradientBottom.fields.g;
  r = gradientBottom.fields.r;
  v9 = gradientTop.fields.a;
  v10 = gradientTop.fields.b;
  v11 = gradientTop.fields.g;
  v12 = gradientTop.fields.r;
  if ( (byte_42165A3 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&cost);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v15);
    sub_B0D8A4(&StringLiteral_15335/*"WARBOARD_SQUARE_COST"*/, v16);
    byte_42165A3 = 1;
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
  v19 = UnityEngine_Component__get_gameObject(costLabel, 0LL);
  GameObjectExtensions__SetLocalPosition(v19, this->fields.costLabelPos, 0LL);
  v24 = (UIWidget_o *)this->fields.costLabel;
  if ( !v24 )
    goto LABEL_14;
  v30.fields.r = v24->fields.mColor.fields.r;
  v30.fields.g = v24->fields.mColor.fields.g;
  v30.fields.b = v24->fields.mColor.fields.b;
  v30.fields.a = 1.0;
  v28.methodPointer = 0LL;
  v28.invoker_method = 0LL;
  UnityEngine_Color___ctor(v30, v20, v21, v22, v23, &v28);
  *(_QWORD *)&v31.fields.r = v28.methodPointer;
  *(_QWORD *)&v31.fields.b = v28.invoker_method;
  UIWidget__set_color(v24, v31, 0LL);
  costLabel = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_14;
  UILabel__set_applyGradient((UILabel_o *)costLabel, 1, 0LL);
  costLabel = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_14;
  v32.fields.r = v12;
  v32.fields.g = v11;
  v32.fields.b = v10;
  v32.fields.a = v9;
  UILabel__set_gradientTop((UILabel_o *)costLabel, v32, 0LL);
  costLabel = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_14;
  v33.fields.r = r;
  v33.fields.g = g;
  v33.fields.b = b;
  v33.fields.a = a;
  UILabel__set_gradientBottom((UILabel_o *)costLabel, v33, 0LL);
  v25 = this->fields.costLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_15335/*"WARBOARD_SQUARE_COST"*/, 0LL);
  v29 = cost;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
  costLabel = (UnityEngine_Component_o *)System_String__Format(v26, v27, 0LL);
  if ( !v25 )
LABEL_14:
    sub_B0D97C(costLabel);
  UILabel__set_text(v25, (System_String_o *)costLabel, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareComponent__SetMovePoint(
        WarBoardSquareComponent_o *this,
        bool isDefault,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct UnityEngine_GameObject_o **p_movePoint; // x20
  UnityEngine_Object_o *movePoint; // x22
  UnityEngine_GameObject_o *Instance; // x0
  UnityEngine_Object_o *v15; // x22
  struct WarBoardSquareData_o *squareData; // x8
  int imageId_k__BackingField; // w8
  Il2CppObject *v18; // x0
  System_String_o *v19; // x21
  Il2CppObject *CommonEffectAsset_object; // x21
  UnityEngine_Transform_o *transform; // x22
  System_Int32_array **v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct CommonEffectComponent_o *Component_srcLineSprite; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  int v36; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_421659E & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, isDefault);
    sub_B0D8A4(&int_TypeInfo, v5);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025336, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_B0D8A4(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v9);
    sub_B0D8A4(&StringLiteral_9230/*"Move_Point_0"*/, v10);
    sub_B0D8A4(&StringLiteral_9231/*"Move_Point_{0}"*/, v11);
    byte_421659E = 1;
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
    v15 = (UnityEngine_Object_o *)*p_movePoint;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v15, 0LL);
  }
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_28;
  imageId_k__BackingField = squareData->fields._imageId_k__BackingField;
  if ( !isDefault )
    imageId_k__BackingField += 2;
  v36 = imageId_k__BackingField;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
  v19 = System_String__Format((System_String_o *)StringLiteral_9231/*"Move_Point_{0}"*/, v18, 0LL);
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               v19,
                               (const MethodInfo_2FC9D88 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                                 (WarBoardManager_o *)Instance,
                                 (System_String_o *)StringLiteral_9230/*"Move_Point_0"*/,
                                 (const MethodInfo_2FC9D88 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v22 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                 (UILabel_o *)CommonEffectAsset_object,
                                 transform,
                                 (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
  *p_movePoint = (struct UnityEngine_GameObject_o *)v22;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.movePoint, v22, v23, v24, v25, v26, v27, v28);
  Instance = *p_movePoint;
  if ( !*p_movePoint || (UnityEngine_GameObject__SetActive(Instance, 0, 0LL), (Instance = *p_movePoint) == 0LL) )
LABEL_28:
    sub_B0D97C(Instance);
  Component_srcLineSprite = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                Instance,
                                                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.movePointCommonEffect = Component_srcLineSprite;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.movePointCommonEffect,
    (System_Int32_array **)Component_srcLineSprite,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
}


void __fastcall WarBoardSquareComponent__SetSprite(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct WarBoardSquareData_o *squareData; // x8
  int imageId_k__BackingField; // w8
  Il2CppObject *v8; // x0
  System_String_o *v9; // x20
  UISprite_o *squareSubImage; // x21
  UIButton_o *subButton; // x21
  int v12; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_42165A2 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_16227/*"_target"*/, v3);
    sub_B0D8A4(&StringLiteral_22322/*"square{0:D3}"*/, v4);
    this = (WarBoardSquareComponent_o *)sub_B0D8A4(&StringLiteral_22320/*"squares"*/, v5);
    byte_42165A2 = 1;
  }
  squareData = v2->fields.squareData;
  if ( !squareData )
    goto LABEL_14;
  imageId_k__BackingField = squareData->fields._imageId_k__BackingField;
  if ( imageId_k__BackingField < 1 )
  {
    v9 = (System_String_o *)StringLiteral_22320/*"squares"*/;
  }
  else
  {
    v12 = imageId_k__BackingField;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
    v9 = System_String__Format((System_String_o *)StringLiteral_22322/*"square{0:D3}"*/, v8, 0LL);
  }
  this = (WarBoardSquareComponent_o *)v2->fields.squareImage;
  if ( !this )
    goto LABEL_14;
  UISprite__set_spriteName((UISprite_o *)this, v9, 0LL);
  this = (WarBoardSquareComponent_o *)v2->fields.button;
  if ( !this )
    goto LABEL_14;
  UIButton__set_normalSprite((UIButton_o *)this, v9, 0LL);
  this = (WarBoardSquareComponent_o *)v2->fields.squareImage;
  if ( !this )
    goto LABEL_14;
  UIWidget__SetDirty((UIWidget_o *)this, 0LL);
  squareSubImage = v2->fields.squareSubImage;
  this = (WarBoardSquareComponent_o *)System_String__Concat_43849904(v9, (System_String_o *)StringLiteral_16227/*"_target"*/, 0LL);
  if ( !squareSubImage
    || (UISprite__set_spriteName(squareSubImage, (System_String_o *)this, 0LL),
        subButton = v2->fields.subButton,
        this = (WarBoardSquareComponent_o *)System_String__Concat_43849904(
                                              v9,
                                              (System_String_o *)StringLiteral_16227/*"_target"*/,
                                              0LL),
        !subButton)
    || (UIButton__set_normalSprite(subButton, (System_String_o *)this, 0LL),
        (this = (WarBoardSquareComponent_o *)v2->fields.squareSubImage) == 0LL) )
  {
LABEL_14:
    sub_B0D97C(this);
  }
  UIWidget__SetDirty((UIWidget_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareComponent__SetTouchEnable(
        WarBoardSquareComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  struct UIButton_o *v6; // x0
  UnityEngine_Object_o *subButton; // x21

  if ( (byte_42165A4 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, enable);
    byte_42165A4 = 1;
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
      goto LABEL_16;
    ((void (__fastcall *)(struct UIButton_o *, bool, Il2CppMethodPointer))v6->klass->vtable._5_set_isEnabled.method)(
      v6,
      enable,
      v6->klass->vtable._6_OnInit.methodPtr);
  }
  subButton = (UnityEngine_Object_o *)this->fields.subButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(subButton, 0LL, 0LL) )
  {
    v6 = this->fields.subButton;
    if ( v6 )
    {
      ((void (__fastcall *)(struct UIButton_o *, bool, Il2CppMethodPointer))v6->klass->vtable._5_set_isEnabled.method)(
        v6,
        enable,
        v6->klass->vtable._6_OnInit.methodPtr);
      return;
    }
LABEL_16:
    sub_B0D97C(v6);
  }
}


bool __fastcall WarBoardSquareComponent__StopEffect(
        WarBoardSquareComponent_o *this,
        System_String_o *effectKey,
        System_String_o *prefix,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Xml_XmlQualifiedName_o *dicEffect; // x0
  System_Xml_XmlQualifiedName_o *v9; // x20
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x2
  System_Collections_IEnumerator_o *v12; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42165B0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__GameObject__Remove__, effectKey);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__, v7);
    byte_42165B0 = 1;
  }
  value = 0LL;
  dicEffect = (System_Xml_XmlQualifiedName_o *)System_String__Concat_43849904(prefix, effectKey, 0LL);
  if ( !this->fields.dicEffect )
    goto LABEL_9;
  v9 = dicEffect;
  v10 = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.dicEffect,
          dicEffect,
          &value,
          (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__);
  if ( v10 )
  {
    v12 = WarBoardSquareComponent__StopEffectEndLoop(
            (WarBoardSquareComponent_o *)v10,
            (UnityEngine_GameObject_o *)value,
            v11);
    UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
    dicEffect = (System_Xml_XmlQualifiedName_o *)this->fields.dicEffect;
    if ( dicEffect )
    {
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dicEffect,
        v9,
        (const MethodInfo_2E4C6D4 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Remove__);
      return 1;
    }
LABEL_9:
    sub_B0D97C(dicEffect);
  }
  return 0;
}


System_Collections_IEnumerator_o *__fastcall WarBoardSquareComponent__StopEffectEndLoop(
        WarBoardSquareComponent_o *this,
        UnityEngine_GameObject_o *effect,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42165B1 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardSquareComponent__StopEffectEndLoop_d__64_TypeInfo, effect);
    byte_42165B1 = 1;
  }
  v4 = sub_B0D974(WarBoardSquareComponent__StopEffectEndLoop_d__64_TypeInfo, effect, method);
  WarBoardSquareComponent__StopEffectEndLoop_d__64___ctor(
    (WarBoardSquareComponent__StopEffectEndLoop_d__64_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = effect;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)effect, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
}


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
    sub_B0D97C(this);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isDispCostLabel, 0LL);
}


void __fastcall WarBoardSquareComponent___DisableEditPosition_b__40_0(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectMarker; // x0

  selectMarker = this->fields.selectMarker;
  if ( !selectMarker )
    sub_B0D97C(0LL);
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
    sub_B0D97C(battleTargetPlayer);
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
    sub_B0D97C(battleTargetEnemy);
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
    sub_B0D97C(selectCircle);
  }
  CommonEffectComponent__Rewind((CommonEffectComponent_o *)selectCircle, 0LL);
}


void __fastcall WarBoardSquareComponent___OnEffectHide_b__61_0(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effectPrefab; // x20
  UnityEngine_GameObject_o *v4; // x0
  UnityEngine_Object_o *v5; // x19

  if ( (byte_42165B4 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42165B4 = 1;
  }
  effectPrefab = (UnityEngine_Object_o *)this->fields.effectPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Implicit(effectPrefab, 0LL) )
  {
    v4 = this->fields.effectPrefab;
    if ( !v4 )
      sub_B0D97C(0LL);
    UnityEngine_GameObject__SetActive(v4, 0, 0LL);
    v5 = (UnityEngine_Object_o *)this->fields.effectPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v5, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  void *effect; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  int v9; // w8
  void *v10; // x20
  unsigned int v11; // w21
  float constantMax; // s8
  UnityEngine_Object_o *v13; // x19
  bool result; // w0
  UnityEngine_WaitForSeconds_o *v15; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x0
  UnityEngine_ParticleSystem_MinMaxCurve_o v24; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v25; // [xsp+20h] [xbp-50h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-28h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v27; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v28; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v29; // 0:x0.8

  if ( (byte_42138A0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_WaitForSeconds_TypeInfo, v4);
    byte_42138A0 = 1;
  }
  m_ParticleSystem = 0LL;
  memset(&v25, 0, sizeof(v25));
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    effect = this->fields.effect;
    this->fields.__1__state = -1;
    if ( !effect )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effect, 0, 0LL);
    v13 = (UnityEngine_Object_o *)this->fields.effect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v13, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  effect = this->fields.effect;
  this->fields.__1__state = -1;
  if ( !effect )
    goto LABEL_23;
  effect = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28717028(
             (UnityEngine_GameObject_o *)effect,
             (const MethodInfo_1B62FE4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
  if ( !effect )
    goto LABEL_23;
  v9 = *((_DWORD *)effect + 6);
  v10 = effect;
  if ( v9 >= 1 )
  {
    v11 = 0;
    constantMax = 0.0;
    while ( 1 )
    {
      if ( v11 >= v9 )
      {
        v23 = sub_B0D9A8(effect);
        sub_B0D948(v23, 0LL);
      }
      effect = (void *)*((_QWORD *)v10 + (int)v11 + 4);
      if ( !effect )
        break;
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)effect, 0LL).fields.m_ParticleSystem;
      v27.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__get_startLifetime(&v24, v27, 0LL);
      v25 = v24;
      if ( constantMax < UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v25, 0LL) )
      {
        v28.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
        UnityEngine_ParticleSystem_MainModule__get_startLifetime(&v24, v28, 0LL);
        v25 = v24;
        constantMax = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v25, 0LL);
      }
      v29.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__set_loop(v29, 0, 0LL);
      v9 = *((_DWORD *)v10 + 6);
      if ( (int)++v11 >= v9 )
        goto LABEL_22;
    }
LABEL_23:
    sub_B0D97C(effect);
  }
  constantMax = 0.0;
LABEL_22:
  v15 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, v7, v8);
  UnityEngine_WaitForSeconds___ctor(v15, constantMax * 1.2, 0LL);
  this->fields.__2__current = (Il2CppObject *)v15;
  p__2__current = &this->fields.__2__current;
  sub_B0D840((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v15, v17, v18, v19, v20, v21, v22);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_WarBoardSquareComponent__StopEffectEndLoop_d__64_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v9; // x20
  System_String_o *v10; // x21
  System_String_o *v11; // x20
  Il2CppObject *CommonEffectAsset_object; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_Component_o *_4__this; // x19
  UnityEngine_Transform_o *transform; // x21
  UILabel_o *v21; // x0
  System_Int32_array **v22; // x1
  BattleServantConfConponent_o *v23; // x0
  int32_t effectId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_421389E & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025336, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_B0D8A4(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v5);
    sub_B0D8A4(&WarBoardManager_WarBoardSqEfType_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_18268/*"ef_sq_"*/, v7);
    byte_421389E = 1;
  }
  effectId = this->fields.effectId;
  Instance = (WebViewManager_o *)j_il2cpp_value_box_0(WarBoardManager_WarBoardSqEfType_TypeInfo, &effectId);
  if ( !Instance )
    goto LABEL_17;
  v9 = Instance;
  v10 = (System_String_o *)((__int64 (__fastcall *)(WebViewManager_o *, void *))Instance->klass->vtable._3_ToString.method)(
                             Instance,
                             Instance->klass[1]._1.image);
  effectId = *(_DWORD *)j_il2cpp_object_unbox_0(v9);
  v11 = System_String__Concat_43849904((System_String_o *)StringLiteral_18268/*"ef_sq_"*/, v10, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               v11,
                               (const MethodInfo_2FC9D88 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
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
      v23 = (BattleServantConfConponent_o *)&_4__this[10];
      v22 = 0LL;
      goto LABEL_16;
    }
LABEL_17:
    sub_B0D97C(Instance);
  }
  if ( !_4__this )
    goto LABEL_17;
  transform = UnityEngine_Component__get_transform(_4__this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v21 = UnityEngine_Object__Instantiate_UILabel_(
          (UILabel_o *)CommonEffectAsset_object,
          transform,
          (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
  _4__this[10].klass = (UnityEngine_Component_c *)v21;
  v22 = (System_Int32_array **)v21;
  v23 = (BattleServantConfConponent_o *)&_4__this[10];
LABEL_16:
  sub_B0D840(v23, v22, v13, v14, v15, v16, v17, v18);
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
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *_4__this; // x0
  struct UnityEngine_GameObject_o *asset; // x20
  UnityEngine_Transform_o *transform; // x21
  struct WarBoardSquareComponent_o *v8; // x8
  System_Xml_Schema_XmlSchemaObject_o *v9; // x2

  if ( (byte_421389F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__GameObject__set_Item__, method);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025336, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_421389F = 1;
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
                                          (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
  v8 = this->fields.__4__this;
  if ( !v8
    || (v9 = (System_Xml_Schema_XmlSchemaObject_o *)_4__this,
        (_4__this = (UnityEngine_Component_o *)v8->fields.dicEffect) == 0LL) )
  {
LABEL_10:
    sub_B0D97C(_4__this);
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)_4__this,
    (System_Xml_XmlQualifiedName_o *)this->fields.key,
    v9,
    (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__GameObject__set_Item__);
}