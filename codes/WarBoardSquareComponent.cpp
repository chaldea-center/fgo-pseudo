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

  if ( (byte_41892CA & 1) == 0 )
  {
    sub_B2C35C(&WarBoardSquareComponent_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_12600/*"ScaleSquare_start"*/, v8);
    byte_41892CA = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardSquareComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_12600/*"ScaleSquare_start"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_12600/*"ScaleSquare_start"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall WarBoardSquareComponent___ctor(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_41892C9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo, v3);
    byte_41892C9 = 1;
  }
  this->fields.costAnimFadeTime = 0.3;
  *(_OWORD *)&this->fields.costLabelPos.fields.x = xmmword_31A3A10;
  *(_OWORD *)&this->fields.costLabelMovePos.fields.y = xmmword_31A3A20;
  v4 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v4,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
  this->fields.dicEffect = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.dicEffect,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardSquareComponent__ActiveEditPointArrow(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *selectMarkerArrow; // x20
  __int64 v4; // x1
  UnityEngine_Behaviour_o *v5; // x0

  if ( (byte_41892B7 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41892B7 = 1;
  }
  selectMarkerArrow = (UnityEngine_Object_o *)this->fields.selectMarkerArrow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(selectMarkerArrow, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields.selectMarkerArrow;
    if ( !v5 )
      sub_B2C434(0LL, v4);
    UnityEngine_Behaviour__set_enabled(v5, 1, 0LL);
  }
}


void __fastcall WarBoardSquareComponent__DeactiveEditPointArrow(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *selectMarkerArrow; // x20
  __int64 v4; // x1
  UnityEngine_Behaviour_o *v5; // x0

  if ( (byte_41892B8 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41892B8 = 1;
  }
  selectMarkerArrow = (UnityEngine_Object_o *)this->fields.selectMarkerArrow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(selectMarkerArrow, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields.selectMarkerArrow;
    if ( !v5 )
      sub_B2C434(0LL, v4);
    UnityEngine_Behaviour__set_enabled(v5, 0, 0LL);
  }
}


void __fastcall WarBoardSquareComponent__DisableEditPosition(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *selectMarker; // x0
  struct CommonEffectComponent_o *selectMarkerCommonEffect; // x20
  System_Action_o *v6; // x21

  if ( (byte_41892B6 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_WarBoardSquareComponent__DisableEditPosition_b__40_0__, v3);
    byte_41892B6 = 1;
  }
  selectMarker = this->fields.selectMarker;
  if ( !selectMarker )
    goto LABEL_8;
  if ( UnityEngine_GameObject__get_activeSelf(selectMarker, 0LL) )
  {
    selectMarkerCommonEffect = this->fields.selectMarkerCommonEffect;
    v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_WarBoardSquareComponent__DisableEditPosition_b__40_0__, 0LL);
    if ( selectMarkerCommonEffect )
    {
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))selectMarkerCommonEffect->klass->vtable._8_Stop.method)(
        selectMarkerCommonEffect,
        0LL,
        v6,
        selectMarkerCommonEffect->klass->vtable._9_ForceStop.methodPtr);
      return;
    }
LABEL_8:
    sub_B2C434(selectMarker, method);
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
      sub_B2C434(battleTargetPlayer, isPlayerForce);
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
    sub_B2C434(selectMarker, method);
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
    sub_B2C434(costLabel, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costLabel, 0, 0LL);
}


bool __fastcall WarBoardSquareComponent__GetButtonIsEnable(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  struct UIButton_o *button; // x0

  button = this->fields.button;
  if ( !button )
    sub_B2C434(0LL, method);
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

  if ( (byte_41892C0 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41892C0 = 1;
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
    UnityEngine_Object__Destroy_35314896(v4, 0LL);
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
    UnityEngine_Object__Destroy_35314896(v6, 0LL);
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
    UnityEngine_Object__Destroy_35314896(v8, 0LL);
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

  if ( (byte_41892B4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__, imageSetAtlas);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v7);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_B2C35C(&StringLiteral_22245/*"squares"*/, v10);
    sub_B2C35C(&StringLiteral_22246/*"squares_target"*/, v11);
    byte_41892B4 = 1;
  }
  dicEffect = (char *)this->fields.dicEffect;
  if ( !dicEffect )
    goto LABEL_33;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dicEffect,
    (const MethodInfo_2DB1E9C *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
  this->fields.squareData = data;
  p_squareData = &this->fields.squareData;
  sub_B2C2F8(
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
  UISprite__set_spriteName((UISprite_o *)dicEffect, (System_String_o *)StringLiteral_22245/*"squares"*/, 0LL);
  dicEffect = (char *)this->fields.squareSubImage;
  if ( !dicEffect )
    goto LABEL_33;
  UISprite__set_atlas((UISprite_o *)dicEffect, imageSetAtlas, 0LL);
  dicEffect = (char *)this->fields.squareSubImage;
  if ( !dicEffect )
    goto LABEL_33;
  UISprite__set_spriteName((UISprite_o *)dicEffect, (System_String_o *)StringLiteral_22246/*"squares_target"*/, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  dicEffect = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(dicEffect + 48),
    (System_Int32_array **)this,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  costLabel = this->fields.costLabel;
  dicEffect = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = Component_srcLineSprite;
  sub_B2C2F8(
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
                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.selectMarkerCommonEffect = v45;
  sub_B2C2F8(
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
                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.selectCircleCommonEffect = v52;
  sub_B2C2F8(
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
                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.battleTargetPlayerCommonEffect = v59;
  sub_B2C2F8(
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
                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.battleTargetEnemyCommonEffect = v66;
  sub_B2C2F8(
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
    sub_B2C434(dicEffect, imageSetAtlas);
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
  struct CommonEffectComponent_o *battleTargetPlayerCommonEffect; // x20
  System_Action_o *v9; // x0
  __int64 *v10; // x8
  System_Action_o *v11; // x21

  if ( (byte_41892C1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isPlayerForce);
    sub_B2C35C(&Method_WarBoardSquareComponent__NondispBattleRange_b__57_0__, v5);
    sub_B2C35C(&Method_WarBoardSquareComponent__NondispBattleRange_b__57_1__, v6);
    byte_41892C1 = 1;
  }
  if ( isPlayerForce )
  {
    battleTargetPlayer = this->fields.battleTargetPlayer;
    if ( !battleTargetPlayer )
      goto LABEL_13;
    if ( UnityEngine_GameObject__get_activeSelf(battleTargetPlayer, 0LL) )
    {
      battleTargetPlayerCommonEffect = this->fields.battleTargetPlayerCommonEffect;
      v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      v10 = &Method_WarBoardSquareComponent__NondispBattleRange_b__57_0__;
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
      v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      v10 = &Method_WarBoardSquareComponent__NondispBattleRange_b__57_1__;
LABEL_10:
      v11 = v9;
      System_Action___ctor(v9, (Il2CppObject *)this, *v10, 0LL);
      if ( battleTargetPlayerCommonEffect )
      {
        ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))battleTargetPlayerCommonEffect->klass->vtable._8_Stop.method)(
          battleTargetPlayerCommonEffect,
          0LL,
          v11,
          battleTargetPlayerCommonEffect->klass->vtable._9_ForceStop.methodPtr);
        return;
      }
LABEL_13:
      sub_B2C434(battleTargetPlayer, isPlayerForce);
    }
  }
}


void __fastcall WarBoardSquareComponent__OnClickSquare(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WarBoardData_o *Instance; // x0
  __int64 v5; // x1
  struct WarBoardSquareData_o *squareData; // x8
  WarBoardManager_o *v7; // x19
  struct WarBoardSquareData_o *v8; // x8
  WarBoardPieceData_o *v9; // x21
  struct WarBoardSquareData_o *v10; // x8
  WarBoardItemData_o *v11; // x22
  WarBoardEffectData_o *Effect; // x23
  struct WarBoardTreasureData_array *treasures; // x8
  System_String_o *v14; // x21
  struct WarBoardSquareData_o *v15; // x8

  if ( (byte_41892C2 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_41892C2 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_32;
  v7 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_32;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_22512764(
                                 Instance,
                                 squareData->fields._squareIndex_k__BackingField,
                                 0LL);
  v8 = this->fields.squareData;
  if ( !v8 )
    goto LABEL_32;
  v9 = (WarBoardPieceData_o *)Instance;
  Instance = v7->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_32;
  Instance = (WarBoardData_o *)WarBoardData__GetItem(Instance, v8->fields._squareIndex_k__BackingField, 0LL);
  v10 = this->fields.squareData;
  if ( !v10 )
    goto LABEL_32;
  v11 = (WarBoardItemData_o *)Instance;
  Instance = v7->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_32;
  Effect = WarBoardData__GetEffect(Instance, v10->fields._squareIndex_k__BackingField, 0LL);
  if ( WarBoardManager__get_isSelectedPiece(v7, 0LL) && this->fields.isSelectable )
  {
    if ( !v9 || !WarBoardManager__IsSelectedPieceSame(v7, v9, 0LL) )
    {
      Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        treasures = Instance[1].fields.treasures;
        if ( treasures )
        {
          v14 = *(System_String_o **)&treasures->max_length;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          Instance = (WarBoardData_o *)SoundManager__playSe(v14, 0LL);
          v15 = this->fields.squareData;
          if ( v15 )
          {
            WarBoardManager__SelectedPieceAction(v7, v15->fields._squareIndex_k__BackingField, 0LL);
            return;
          }
        }
      }
LABEL_32:
      sub_B2C434(Instance, v5);
    }
    goto LABEL_22;
  }
  if ( v9 )
  {
LABEL_22:
    Instance = (WarBoardData_o *)v9->fields.pieceComponent;
    if ( !Instance )
      goto LABEL_32;
    (*(void (__fastcall **)(WarBoardData_o *, void *))&Instance->klass[1]._1.byval_arg.bits)(
      Instance,
      Instance->klass[1]._1.this_arg.data);
    return;
  }
  if ( v11 && !WarBoardItemData__get_Acquired(v11, 0LL) )
  {
    Instance = (WarBoardData_o *)v11->fields.component;
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
    WarBoardManager__HideSimplePopup(v7, 0LL, 0LL);
  }
}


void __fastcall WarBoardSquareComponent__OnDeselect(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *selectCircle; // x0
  struct CommonEffectComponent_o *selectCircleCommonEffect; // x20
  System_Action_o *v6; // x21

  if ( (byte_41892BD & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_WarBoardSquareComponent__OnDeselect_b__49_0__, v3);
    byte_41892BD = 1;
  }
  selectCircle = this->fields.selectCircle;
  if ( !selectCircle )
    goto LABEL_8;
  if ( UnityEngine_GameObject__get_activeSelf(selectCircle, 0LL) )
  {
    selectCircleCommonEffect = this->fields.selectCircleCommonEffect;
    v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_WarBoardSquareComponent__OnDeselect_b__49_0__, 0LL);
    if ( selectCircleCommonEffect )
    {
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))selectCircleCommonEffect->klass->vtable._8_Stop.method)(
        selectCircleCommonEffect,
        0LL,
        v6,
        selectCircleCommonEffect->klass->vtable._9_ForceStop.methodPtr);
      return;
    }
LABEL_8:
    sub_B2C434(selectCircle, method);
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
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x20
  System_Delegate_o *v23; // x23
  WarBoardTaskBase_TaskCallback_o *v24; // x24
  System_Int32_array **v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  WebViewManager_o *Instance; // x19
  __int64 v33; // x21
  __int64 v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x0
  __int64 v42; // x0

  if ( (byte_41892C4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, *(_QWORD *)&effectId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    sub_B2C35C(&WarBoardTaskBase_TaskCallback_TypeInfo, v8);
    sub_B2C35C(&Method_WarBoardSquareComponent___c__DisplayClass60_0__OnEffectDisp_b__0__, v9);
    sub_B2C35C(&WarBoardSquareComponent___c__DisplayClass60_0_TypeInfo, v10);
    sub_B2C35C(&WarBoardCallbackTask_TypeInfo, v11);
    sub_B2C35C(&WarBoardTaskBase___TypeInfo, v12);
    byte_41892C4 = 1;
  }
  v13 = sub_B2C42C(WarBoardSquareComponent___c__DisplayClass60_0_TypeInfo);
  WarBoardSquareComponent___c__DisplayClass60_0___ctor((WarBoardSquareComponent___c__DisplayClass60_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_14;
  *(_QWORD *)(v13 + 24) = this;
  *(_DWORD *)(v13 + 16) = effectId;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  v22 = sub_B2C42C(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v22, 0LL, 0LL);
  if ( !v22 )
    goto LABEL_14;
  v23 = *(System_Delegate_o **)(v22 + 32);
  v24 = (WarBoardTaskBase_TaskCallback_o *)sub_B2C42C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v24,
    (Il2CppObject *)v13,
    Method_WarBoardSquareComponent___c__DisplayClass60_0__OnEffectDisp_b__0__,
    0LL);
  v25 = (System_Int32_array **)System_Delegate__Combine(v23, (System_Delegate_o *)v24, 0LL);
  if ( v25 && *v25 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v34 = sub_B2C728(v25);
LABEL_16:
    v41 = sub_B2C454(v34);
    sub_B2C400(v41, 0LL);
  }
  *(_QWORD *)(v22 + 32) = v25;
  sub_B2C2F8((BattleServantConfConponent_o *)(v22 + 32), v25, v26, v27, v28, v29, v30, v31);
  if ( taskList )
  {
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    return;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v14 = sub_B2C374(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !v14 )
LABEL_14:
    sub_B2C434(v14, v15);
  v33 = v14;
  v34 = sub_B2C41C(v22, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
  if ( !v34 )
    goto LABEL_16;
  if ( !*(_DWORD *)(v33 + 24) )
  {
    v42 = sub_B2C460(v34);
    sub_B2C400(v42, 0LL);
  }
  *(_QWORD *)(v33 + 32) = v22;
  sub_B2C2F8((BattleServantConfConponent_o *)(v33 + 32), (System_Int32_array **)v22, v35, v36, v37, v38, v39, v40);
  if ( !Instance )
    goto LABEL_14;
  WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v33, 0LL);
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
  System_Delegate_o *v14; // x23
  WarBoardTaskBase_TaskCallback_o *v15; // x24
  System_Int32_array **v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  WebViewManager_o *Instance; // x19
  __int64 v24; // x21
  __int64 v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x0
  __int64 v33; // x0

  if ( (byte_41892C5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, *(_QWORD *)&effectId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_B2C35C(&WarBoardTaskBase_TaskCallback_TypeInfo, v7);
    sub_B2C35C(&WarBoardCallbackTask_TypeInfo, v8);
    sub_B2C35C(&Method_WarBoardSquareComponent__OnEffectHide_b__61_0__, v9);
    sub_B2C35C(&WarBoardTaskBase___TypeInfo, v10);
    byte_41892C5 = 1;
  }
  v11 = sub_B2C42C(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v11, 0LL, 0LL);
  if ( !v11 )
    goto LABEL_13;
  v14 = *(System_Delegate_o **)(v11 + 32);
  v15 = (WarBoardTaskBase_TaskCallback_o *)sub_B2C42C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v15,
    (Il2CppObject *)this,
    Method_WarBoardSquareComponent__OnEffectHide_b__61_0__,
    0LL);
  v16 = (System_Int32_array **)System_Delegate__Combine(v14, (System_Delegate_o *)v15, 0LL);
  if ( v16 && *v16 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v25 = sub_B2C728(v16);
LABEL_15:
    v32 = sub_B2C454(v25);
    sub_B2C400(v32, 0LL);
  }
  *(_QWORD *)(v11 + 32) = v16;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 32), v16, v17, v18, v19, v20, v21, v22);
  if ( taskList )
  {
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    return;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v12 = sub_B2C374(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !v12 )
LABEL_13:
    sub_B2C434(v12, v13);
  v24 = v12;
  v25 = sub_B2C41C(v11, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
  if ( !v25 )
    goto LABEL_15;
  if ( !*(_DWORD *)(v24 + 24) )
  {
    v33 = sub_B2C460(v25);
    sub_B2C400(v33, 0LL);
  }
  *(_QWORD *)(v24 + 32) = v11;
  sub_B2C2F8((BattleServantConfConponent_o *)(v24 + 32), (System_Int32_array **)v11, v26, v27, v28, v29, v30, v31);
  if ( !Instance )
    goto LABEL_13;
  WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v24, 0LL);
}


void __fastcall WarBoardSquareComponent__OnLongClickSquare(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v4; // x1
  struct WarBoardSquareData_o *squareData; // x8
  WarBoardManager_o *v6; // x19
  struct WarBoardSquareData_o *v7; // x8
  WarBoardData_o *v8; // x21
  struct WarBoardSquareData_o *v9; // x8
  WarBoardItemData_o *v10; // x20
  WarBoardEffectData_o *Effect; // x0
  WarBoardEffectData_o *v12; // x22

  if ( (byte_41892C3 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_41892C3 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_21;
  v6 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_21;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_22512764(
                                 Instance,
                                 squareData->fields._squareIndex_k__BackingField,
                                 0LL);
  v7 = this->fields.squareData;
  if ( !v7 )
    goto LABEL_21;
  v8 = Instance;
  Instance = v6->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_21;
  Instance = (WarBoardData_o *)WarBoardData__GetItem(Instance, v7->fields._squareIndex_k__BackingField, 0LL);
  v9 = this->fields.squareData;
  if ( !v9 )
    goto LABEL_21;
  v10 = (WarBoardItemData_o *)Instance;
  Instance = v6->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_21;
  Effect = WarBoardData__GetEffect(Instance, v9->fields._squareIndex_k__BackingField, 0LL);
  if ( v8 )
  {
    Instance = (WarBoardData_o *)v8[1].fields.stageEntity;
    if ( Instance )
    {
      (*(void (__fastcall **)(WarBoardData_o *, Il2CppClass *))&Instance->klass[1]._1.this_arg.bits)(
        Instance,
        Instance->klass[1]._1.element_class);
      return;
    }
LABEL_21:
    sub_B2C434(Instance, v4);
  }
  v12 = Effect;
  if ( v10 && !WarBoardItemData__get_Acquired(v10, 0LL) )
  {
    Instance = (WarBoardData_o *)v10->fields.component;
    if ( !Instance )
      goto LABEL_21;
    WarBoardItemComponent__OnLongClick((WarBoardItemComponent_o *)Instance, 0LL);
  }
  else if ( v12 )
  {
    Instance = (WarBoardData_o *)v12->fields.component;
    if ( !Instance )
      goto LABEL_21;
    WarBoardEffectComponent__OnLongClick((WarBoardEffectComponent_o *)Instance, 0LL);
  }
  else
  {
    WarBoardManager__HideSimplePopup(v6, 0LL, 0LL);
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
    sub_B2C434(selectCircle, method);
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
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct WarBoardSquareData_o *squareData; // x8
  int imageId_k__BackingField; // w8
  int v31; // w9
  System_String_o *v32; // x0
  System_String_o *v33; // x21
  _QWORD **v34; // x23
  __int64 v35; // x22
  __int16 v36; // w8
  __int64 v37; // x22
  __int64 v38; // x22
  __int64 v39; // x22
  System_String_o *v40; // x21
  System_Int32_array **CommonEffectAsset_object; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UnityEngine_Object_o *v48; // x21
  System_Action_o *v50; // x21
  UnityEngine_Object_o *uiDataComp; // x20
  unsigned int v52; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_41892C6 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, effectKey);
    sub_B2C35C(&Method_System_Array_Empty_object___, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_B2C35C(&Method_WarBoardSquareComponent___c__DisplayClass62_0__PlayEffect_b__0__, v10);
    sub_B2C35C(&WarBoardSquareComponent___c__DisplayClass62_0_TypeInfo, v11);
    sub_B2C35C(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v12);
    byte_41892C6 = 1;
  }
  v52 = 0;
  v13 = sub_B2C42C(WarBoardSquareComponent___c__DisplayClass62_0_TypeInfo);
  WarBoardSquareComponent___c__DisplayClass62_0___ctor((WarBoardSquareComponent___c__DisplayClass62_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_34;
  *(_QWORD *)(v13 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  v22 = (System_Int32_array **)System_String__Concat_44305532(prefix, effectKey, 0LL);
  *(_QWORD *)(v13 + 32) = v22;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 32), v22, v23, v24, v25, v26, v27, v28);
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_34;
  imageId_k__BackingField = squareData->fields._imageId_k__BackingField;
  if ( imageId_k__BackingField >= 0 )
    v31 = imageId_k__BackingField;
  else
    v31 = imageId_k__BackingField + 1;
  v52 = imageId_k__BackingField - (v31 & 0xFFFFFFFE);
  v32 = System_Int32__ToString((int32_t)&v52, 0LL);
  v33 = System_String__Concat_44305532(effectKey, v32, 0LL);
  v34 = (_QWORD **)Method_System_Array_Empty_object___;
  v35 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
  v36 = *(_WORD *)(v35 + 306);
  if ( (v36 & 1) == 0 )
  {
    sub_AC505C(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
    v36 = *(_WORD *)(v35 + 306);
  }
  if ( (v36 & 0x400) != 0 )
  {
    v37 = *v34[6];
    if ( (*(_BYTE *)(v37 + 306) & 1) == 0 )
      sub_AC505C(*v34[6]);
    if ( !*(_DWORD *)(v37 + 224) )
    {
      v38 = *v34[6];
      if ( (*(_BYTE *)(v38 + 306) & 1) == 0 )
        sub_AC505C(*v34[6]);
      j_il2cpp_runtime_class_init_0(v38);
    }
  }
  v39 = *v34[6];
  if ( (*(_BYTE *)(v39 + 306) & 1) == 0 )
    sub_AC505C(*v34[6]);
  v40 = System_String__Format_44384256(v33, **(System_Object_array ***)(v39 + 184), 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  CommonEffectAsset_object = (System_Int32_array **)WarBoardManager__GetCommonEffectAsset_object_(
                                                      Instance,
                                                      v40,
                                                      (const MethodInfo_20B3104 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  *(_QWORD *)(v13 + 16) = CommonEffectAsset_object;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 16), CommonEffectAsset_object, v42, v43, v44, v45, v46, v47);
  v48 = *(UnityEngine_Object_o **)(v13 + 16);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v48, 0LL, 0LL) )
    return 0;
  v50 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v50,
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
    if ( v50 )
    {
      System_Action__Invoke(v50, 0LL);
      return 1;
    }
LABEL_34:
    sub_B2C434(Instance, v15);
  }
  Instance = (WarBoardManager_o *)this->fields.uiDataComp;
  if ( !Instance )
    goto LABEL_34;
  WarBoardControlUiDataComponent__SyncAnimation((WarBoardControlUiDataComponent_o *)Instance, v50, 0LL);
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

  if ( (byte_41892BE & 1) == 0 )
  {
    sub_B2C35C(&Method_UITweener_Begin_TweenScale___, method);
    sub_B2C35C(&StringLiteral_10694/*"PlayUnDispCostAnim2"*/, v3);
    byte_41892BE = 1;
  }
  costLabel = (char *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_10;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL);
  v6 = (struct TweenScale_o *)UITweener__Begin_TweenWidth_(
                                gameObject,
                                this->fields.costAnimScaleTime,
                                (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenScale___);
  p_tweenScale = &this->fields.tweenScale;
  this->fields.tweenScale = v6;
  sub_B2C2F8(
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
        sub_B2C2F8(
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
    sub_B2C434(costLabel, method);
  }
  v33 = (System_Int32_array **)StringLiteral_10694/*"PlayUnDispCostAnim2"*/;
  *((_QWORD *)costLabel + 10) = StringLiteral_10694/*"PlayUnDispCostAnim2"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)(costLabel + 80), v33, v27, v28, v29, v30, v31, v32);
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

  if ( (byte_41892BF & 1) == 0 )
  {
    sub_B2C35C(&Method_UITweener_Begin_TweenAlpha___, method);
    sub_B2C35C(&Method_UITweener_Begin_TweenPosition___, v3);
    sub_B2C35C(&Method_UITweener_Begin_TweenScale___, v4);
    sub_B2C35C(&StringLiteral_6679/*"FinishUnDispCostAnim"*/, v5);
    byte_41892BF = 1;
  }
  costLabel = (char *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_20;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL);
  v8 = (struct TweenPosition_o *)UITweener__Begin_TweenWidth_(
                                   gameObject,
                                   this->fields.costAnimFadeTime,
                                   (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenPosition___);
  this->fields.tweenPosition = v8;
  sub_B2C2F8(
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
  sub_B2C2F8(
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
                                 (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenScale___);
  p_tweenScale = &this->fields.tweenScale;
  this->fields.tweenScale = v28;
  sub_B2C2F8(
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
  sub_B2C2F8(
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
                                 (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenAlpha___);
  p_tweenAlpha = &this->fields.tweenAlpha;
  this->fields.tweenAlpha = v50;
  sub_B2C2F8(
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
        sub_B2C2F8(
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
    sub_B2C434(costLabel, method);
  }
  v72 = (System_Int32_array **)StringLiteral_6679/*"FinishUnDispCostAnim"*/;
  *((_QWORD *)costLabel + 10) = StringLiteral_6679/*"FinishUnDispCostAnim"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)(costLabel + 80), v72, v66, v67, v68, v69, v70, v71);
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
    sub_B2C434(this, isOnActionPiece);
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
  __int64 v7; // x1
  struct UIButton_o *v8; // x0
  UIButton_c *klass; // x8
  int32_t mState; // w20

  if ( (byte_41892BC & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, enable);
    byte_41892BC = 1;
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
      v8 = this->fields.button;
      if ( v8 )
      {
        if ( enable )
        {
          ((void (__fastcall *)(struct UIButton_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._5_set_isEnabled.method)(
            v8,
            1LL,
            v8->klass->vtable._6_OnInit.methodPtr);
          v8 = this->fields.subButton;
          if ( v8 )
          {
            klass = v8->klass;
LABEL_19:
            ((void (*)(void))klass->vtable._5_set_isEnabled.method)();
            return;
          }
        }
        else
        {
          mState = v8->fields.mState;
          ((void (__fastcall *)(struct UIButton_o *, _QWORD, Il2CppMethodPointer))v8->klass->vtable._5_set_isEnabled.method)(
            v8,
            0LL,
            v8->klass->vtable._6_OnInit.methodPtr);
          if ( mState )
          {
            v8 = this->fields.subButton;
            if ( v8 )
            {
              klass = v8->klass;
              goto LABEL_19;
            }
          }
          else
          {
            v8 = this->fields.button;
            if ( v8 )
            {
              ((void (__fastcall *)(struct UIButton_o *, _QWORD, __int64, Il2CppMethodPointer))v8->klass->vtable._14_SetState.method)(
                v8,
                0LL,
                1LL,
                v8->klass->vtable._15_OnClick.methodPtr);
              v8 = this->fields.subButton;
              if ( v8 )
              {
                ((void (__fastcall *)(struct UIButton_o *, _QWORD, Il2CppMethodPointer))v8->klass->vtable._5_set_isEnabled.method)(
                  v8,
                  0LL,
                  v8->klass->vtable._6_OnInit.methodPtr);
                v8 = this->fields.subButton;
                if ( v8 )
                {
                  ((void (__fastcall *)(struct UIButton_o *, _QWORD, __int64, Il2CppMethodPointer))v8->klass->vtable._14_SetState.method)(
                    v8,
                    0LL,
                    1LL,
                    v8->klass->vtable._15_OnClick.methodPtr);
                  return;
                }
              }
            }
          }
        }
      }
      sub_B2C434(v8, v7);
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
  __int64 v17; // x1
  UnityEngine_Component_o *costLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v20; // x0
  float v21; // s4
  float v22; // s5
  float v23; // s6
  float v24; // s7
  UIWidget_o *v25; // x21
  UILabel_o *v26; // x20
  System_String_o *v27; // x21
  Il2CppObject *v28; // x0
  MethodInfo v29; // [xsp+0h] [xbp-70h] BYREF
  int32_t v30; // [xsp+5Ch] [xbp-14h] BYREF
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = gradientBottom.fields.a;
  b = gradientBottom.fields.b;
  g = gradientBottom.fields.g;
  r = gradientBottom.fields.r;
  v9 = gradientTop.fields.a;
  v10 = gradientTop.fields.b;
  v11 = gradientTop.fields.g;
  v12 = gradientTop.fields.r;
  if ( (byte_41892BA & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&cost);
    sub_B2C35C(&LocalizationManager_TypeInfo, v15);
    sub_B2C35C(&StringLiteral_15288/*"WARBOARD_SQUARE_COST"*/, v16);
    byte_41892BA = 1;
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
  v20 = UnityEngine_Component__get_gameObject(costLabel, 0LL);
  GameObjectExtensions__SetLocalPosition(v20, this->fields.costLabelPos, 0LL);
  v25 = (UIWidget_o *)this->fields.costLabel;
  if ( !v25 )
    goto LABEL_14;
  v31.fields.r = v25->fields.mColor.fields.r;
  v31.fields.g = v25->fields.mColor.fields.g;
  v31.fields.b = v25->fields.mColor.fields.b;
  v31.fields.a = 1.0;
  v29.methodPointer = 0LL;
  v29.invoker_method = 0LL;
  UnityEngine_Color___ctor(v31, v21, v22, v23, v24, &v29);
  *(_QWORD *)&v32.fields.r = v29.methodPointer;
  *(_QWORD *)&v32.fields.b = v29.invoker_method;
  UIWidget__set_color(v25, v32, 0LL);
  costLabel = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_14;
  UILabel__set_applyGradient((UILabel_o *)costLabel, 1, 0LL);
  costLabel = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_14;
  v33.fields.r = v12;
  v33.fields.g = v11;
  v33.fields.b = v10;
  v33.fields.a = v9;
  UILabel__set_gradientTop((UILabel_o *)costLabel, v33, 0LL);
  costLabel = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_14;
  v34.fields.r = r;
  v34.fields.g = g;
  v34.fields.b = b;
  v34.fields.a = a;
  UILabel__set_gradientBottom((UILabel_o *)costLabel, v34, 0LL);
  v26 = this->fields.costLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_15288/*"WARBOARD_SQUARE_COST"*/, 0LL);
  v30 = cost;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
  costLabel = (UnityEngine_Component_o *)System_String__Format(v27, v28, 0LL);
  if ( !v26 )
LABEL_14:
    sub_B2C434(costLabel, v17);
  UILabel__set_text(v26, (System_String_o *)costLabel, 0LL);
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
  __int64 v15; // x1
  UnityEngine_Object_o *v16; // x22
  struct WarBoardSquareData_o *squareData; // x8
  int imageId_k__BackingField; // w8
  Il2CppObject *v19; // x0
  System_String_o *v20; // x21
  Il2CppObject *CommonEffectAsset_object; // x21
  UnityEngine_Transform_o *transform; // x22
  System_Int32_array **v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct CommonEffectComponent_o *Component_srcLineSprite; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  int v37; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_41892B5 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, isDefault);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_B2C35C(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v9);
    sub_B2C35C(&StringLiteral_9207/*"Move_Point_0"*/, v10);
    sub_B2C35C(&StringLiteral_9208/*"Move_Point_{0}"*/, v11);
    byte_41892B5 = 1;
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
    v16 = (UnityEngine_Object_o *)*p_movePoint;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v16, 0LL);
  }
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_28;
  imageId_k__BackingField = squareData->fields._imageId_k__BackingField;
  if ( !isDefault )
    imageId_k__BackingField += 2;
  v37 = imageId_k__BackingField;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
  v20 = System_String__Format((System_String_o *)StringLiteral_9208/*"Move_Point_{0}"*/, v19, 0LL);
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               v20,
                               (const MethodInfo_20B3104 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                                 (WarBoardManager_o *)Instance,
                                 (System_String_o *)StringLiteral_9207/*"Move_Point_0"*/,
                                 (const MethodInfo_20B3104 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v23 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                 (UILabel_o *)CommonEffectAsset_object,
                                 transform,
                                 (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
  *p_movePoint = (struct UnityEngine_GameObject_o *)v23;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.movePoint, v23, v24, v25, v26, v27, v28, v29);
  Instance = *p_movePoint;
  if ( !*p_movePoint || (UnityEngine_GameObject__SetActive(Instance, 0, 0LL), (Instance = *p_movePoint) == 0LL) )
LABEL_28:
    sub_B2C434(Instance, v15);
  Component_srcLineSprite = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                Instance,
                                                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.movePointCommonEffect = Component_srcLineSprite;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.movePointCommonEffect,
    (System_Int32_array **)Component_srcLineSprite,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
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
  if ( (byte_41892B9 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&StringLiteral_16179/*"_target"*/, v3);
    sub_B2C35C(&StringLiteral_22247/*"square{0:D3}"*/, v4);
    this = (WarBoardSquareComponent_o *)sub_B2C35C(&StringLiteral_22245/*"squares"*/, v5);
    byte_41892B9 = 1;
  }
  squareData = v2->fields.squareData;
  if ( !squareData )
    goto LABEL_14;
  imageId_k__BackingField = squareData->fields._imageId_k__BackingField;
  if ( imageId_k__BackingField < 1 )
  {
    v9 = (System_String_o *)StringLiteral_22245/*"squares"*/;
  }
  else
  {
    v12 = imageId_k__BackingField;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
    v9 = System_String__Format((System_String_o *)StringLiteral_22247/*"square{0:D3}"*/, v8, 0LL);
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
  this = (WarBoardSquareComponent_o *)System_String__Concat_44305532(v9, (System_String_o *)StringLiteral_16179/*"_target"*/, 0LL);
  if ( !squareSubImage
    || (UISprite__set_spriteName(squareSubImage, (System_String_o *)this, 0LL),
        subButton = v2->fields.subButton,
        this = (WarBoardSquareComponent_o *)System_String__Concat_44305532(
                                              v9,
                                              (System_String_o *)StringLiteral_16179/*"_target"*/,
                                              0LL),
        !subButton)
    || (UIButton__set_normalSprite(subButton, (System_String_o *)this, 0LL),
        (this = (WarBoardSquareComponent_o *)v2->fields.squareSubImage) == 0LL) )
  {
LABEL_14:
    sub_B2C434(this, method);
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
  __int64 v6; // x1
  struct UIButton_o *v7; // x0
  UnityEngine_Object_o *subButton; // x21

  if ( (byte_41892BB & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, enable);
    byte_41892BB = 1;
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
      goto LABEL_16;
    ((void (__fastcall *)(struct UIButton_o *, bool, Il2CppMethodPointer))v7->klass->vtable._5_set_isEnabled.method)(
      v7,
      enable,
      v7->klass->vtable._6_OnInit.methodPtr);
  }
  subButton = (UnityEngine_Object_o *)this->fields.subButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(subButton, 0LL, 0LL) )
  {
    v7 = this->fields.subButton;
    if ( v7 )
    {
      ((void (__fastcall *)(struct UIButton_o *, bool, Il2CppMethodPointer))v7->klass->vtable._5_set_isEnabled.method)(
        v7,
        enable,
        v7->klass->vtable._6_OnInit.methodPtr);
      return;
    }
LABEL_16:
    sub_B2C434(v7, v6);
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
  __int64 v9; // x1
  System_Xml_XmlQualifiedName_o *v10; // x20
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x2
  System_Collections_IEnumerator_o *v13; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_41892C7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__GameObject__Remove__, effectKey);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__, v7);
    byte_41892C7 = 1;
  }
  value = 0LL;
  dicEffect = (System_Xml_XmlQualifiedName_o *)System_String__Concat_44305532(prefix, effectKey, 0LL);
  if ( !this->fields.dicEffect )
    goto LABEL_9;
  v10 = dicEffect;
  v11 = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.dicEffect,
          dicEffect,
          &value,
          (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__);
  if ( v11 )
  {
    v13 = WarBoardSquareComponent__StopEffectEndLoop(
            (WarBoardSquareComponent_o *)v11,
            (UnityEngine_GameObject_o *)value,
            v12);
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v13, 0LL);
    dicEffect = (System_Xml_XmlQualifiedName_o *)this->fields.dicEffect;
    if ( dicEffect )
    {
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dicEffect,
        v10,
        (const MethodInfo_2DB372C *)Method_System_Collections_Generic_Dictionary_string__GameObject__Remove__);
      return 1;
    }
LABEL_9:
    sub_B2C434(dicEffect, v9);
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
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_41892C8 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardSquareComponent__StopEffectEndLoop_d__64_TypeInfo, effect);
    byte_41892C8 = 1;
  }
  v4 = sub_B2C42C(WarBoardSquareComponent__StopEffectEndLoop_d__64_TypeInfo);
  WarBoardSquareComponent__StopEffectEndLoop_d__64___ctor(
    (WarBoardSquareComponent__StopEffectEndLoop_d__64_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_B2C434(v5, v6);
  *(_QWORD *)(v4 + 32) = effect;
  sub_B2C2F8((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)effect, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v4;
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
    sub_B2C434(this, isDispCostLabel);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isDispCostLabel, 0LL);
}


void __fastcall WarBoardSquareComponent___DisableEditPosition_b__40_0(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectMarker; // x0

  selectMarker = this->fields.selectMarker;
  if ( !selectMarker )
    sub_B2C434(0LL, method);
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
    sub_B2C434(battleTargetPlayer, method);
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
    sub_B2C434(battleTargetEnemy, method);
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
    sub_B2C434(selectCircle, method);
  }
  CommonEffectComponent__Rewind((CommonEffectComponent_o *)selectCircle, 0LL);
}


void __fastcall WarBoardSquareComponent___OnEffectHide_b__61_0(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effectPrefab; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0
  UnityEngine_Object_o *v6; // x19

  if ( (byte_41892CB & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41892CB = 1;
  }
  effectPrefab = (UnityEngine_Object_o *)this->fields.effectPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Implicit(effectPrefab, 0LL) )
  {
    v5 = this->fields.effectPrefab;
    if ( !v5 )
      sub_B2C434(0LL, v4);
    UnityEngine_GameObject__SetActive(v5, 0, 0LL);
    v6 = (UnityEngine_Object_o *)this->fields.effectPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v6, 0LL);
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
  int v7; // w8
  void *v8; // x20
  unsigned int v9; // w21
  float constantMax; // s8
  UnityEngine_Object_o *v11; // x19
  bool result; // w0
  UnityEngine_WaitForSeconds_o *v13; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x0
  UnityEngine_ParticleSystem_MinMaxCurve_o v22; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v23; // [xsp+20h] [xbp-50h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-28h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v25; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v26; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v27; // 0:x0.8

  if ( (byte_4186725 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&UnityEngine_WaitForSeconds_TypeInfo, v4);
    byte_4186725 = 1;
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
    v11 = (UnityEngine_Object_o *)this->fields.effect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v11, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  effect = this->fields.effect;
  this->fields.__1__state = -1;
  if ( !effect )
    goto LABEL_23;
  effect = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
             (UnityEngine_GameObject_o *)effect,
             (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
  if ( !effect )
    goto LABEL_23;
  v7 = *((_DWORD *)effect + 6);
  v8 = effect;
  if ( v7 >= 1 )
  {
    v9 = 0;
    constantMax = 0.0;
    while ( 1 )
    {
      if ( v9 >= v7 )
      {
        v21 = sub_B2C460(effect);
        sub_B2C400(v21, 0LL);
      }
      effect = (void *)*((_QWORD *)v8 + (int)v9 + 4);
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
      v7 = *((_DWORD *)v8 + 6);
      if ( (int)++v9 >= v7 )
        goto LABEL_22;
    }
LABEL_23:
    sub_B2C434(effect, method);
  }
  constantMax = 0.0;
LABEL_22:
  v13 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v13, constantMax * 1.2, 0LL);
  this->fields.__2__current = (Il2CppObject *)v13;
  p__2__current = &this->fields.__2__current;
  sub_B2C2F8((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v13, v15, v16, v17, v18, v19, v20);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_WarBoardSquareComponent__StopEffectEndLoop_d__64_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  __int64 v9; // x1
  WebViewManager_o *v10; // x20
  System_String_o *v11; // x21
  System_String_o *v12; // x20
  Il2CppObject *CommonEffectAsset_object; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_Component_o *_4__this; // x19
  UnityEngine_Transform_o *transform; // x21
  UILabel_o *v22; // x0
  System_Int32_array **v23; // x1
  BattleServantConfConponent_o *v24; // x0
  int32_t effectId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4186723 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_B2C35C(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v5);
    sub_B2C35C(&WarBoardManager_WarBoardSqEfType_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_18211/*"ef_sq_"*/, v7);
    byte_4186723 = 1;
  }
  effectId = this->fields.effectId;
  Instance = (WebViewManager_o *)j_il2cpp_value_box_0(WarBoardManager_WarBoardSqEfType_TypeInfo, &effectId);
  if ( !Instance )
    goto LABEL_17;
  v10 = Instance;
  v11 = (System_String_o *)((__int64 (__fastcall *)(WebViewManager_o *, void *))Instance->klass->vtable._3_ToString.method)(
                             Instance,
                             Instance->klass[1]._1.image);
  effectId = *(_DWORD *)j_il2cpp_object_unbox_0(v10);
  v12 = System_String__Concat_44305532((System_String_o *)StringLiteral_18211/*"ef_sq_"*/, v11, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               v12,
                               (const MethodInfo_20B3104 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
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
      v24 = (BattleServantConfConponent_o *)&_4__this[10];
      v23 = 0LL;
      goto LABEL_16;
    }
LABEL_17:
    sub_B2C434(Instance, v9);
  }
  if ( !_4__this )
    goto LABEL_17;
  transform = UnityEngine_Component__get_transform(_4__this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v22 = UnityEngine_Object__Instantiate_UILabel_(
          (UILabel_o *)CommonEffectAsset_object,
          transform,
          (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
  _4__this[10].klass = (UnityEngine_Component_c *)v22;
  v23 = (System_Int32_array **)v22;
  v24 = (BattleServantConfConponent_o *)&_4__this[10];
LABEL_16:
  sub_B2C2F8(v24, v23, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_4186724 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__GameObject__set_Item__, method);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_4186724 = 1;
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
                                          (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
  v8 = this->fields.__4__this;
  if ( !v8
    || (v9 = (System_Xml_Schema_XmlSchemaObject_o *)_4__this,
        (_4__this = (UnityEngine_Component_o *)v8->fields.dicEffect) == 0LL) )
  {
LABEL_10:
    sub_B2C434(_4__this, method);
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)_4__this,
    (System_Xml_XmlQualifiedName_o *)this->fields.key,
    v9,
    (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__GameObject__set_Item__);
}