void __fastcall WarBoardSquareComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_42B224B & 1) == 0 )
  {
    sub_B52984(&WarBoardSquareComponent_TypeInfo);
    sub_B52984(&StringLiteral_12690/*"ScaleSquare_start"*/);
    byte_42B224B = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardSquareComponent_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_12690/*"ScaleSquare_start"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_12690/*"ScaleSquare_start"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall WarBoardSquareComponent___ctor(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B224A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
    byte_42B224A = 1;
  }
  this->fields.costAnimFadeTime = 0.3;
  *(_OWORD *)&this->fields.costLabelPos.fields.x = xmmword_327E090;
  *(_OWORD *)&this->fields.costLabelMovePos.fields.y = xmmword_327E0A0;
  v3 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B52A54(System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v3,
    (const MethodInfo_2F1AC50 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
  this->fields.dicEffect = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v3;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.dicEffect, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardSquareComponent__ActiveEditPointArrow(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *selectMarkerArrow; // x20
  __int64 v4; // x1
  UnityEngine_Behaviour_o *v5; // x0

  if ( (byte_42B2238 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2238 = 1;
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
      sub_B52A5C(0LL, v4);
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

  if ( (byte_42B2239 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2239 = 1;
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
      sub_B52A5C(0LL, v4);
    UnityEngine_Behaviour__set_enabled(v5, 0, 0LL);
  }
}


void __fastcall WarBoardSquareComponent__DisableEditPosition(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectMarker; // x0
  struct CommonEffectComponent_o *selectMarkerCommonEffect; // x20
  System_Action_o *v5; // x21

  if ( (byte_42B2237 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_WarBoardSquareComponent__DisableEditPosition_b__40_0__);
    byte_42B2237 = 1;
  }
  selectMarker = this->fields.selectMarker;
  if ( !selectMarker )
    goto LABEL_8;
  if ( UnityEngine_GameObject__get_activeSelf(selectMarker, 0LL) )
  {
    selectMarkerCommonEffect = this->fields.selectMarkerCommonEffect;
    v5 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_WarBoardSquareComponent__DisableEditPosition_b__40_0__, 0LL);
    if ( selectMarkerCommonEffect )
    {
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))selectMarkerCommonEffect->klass->vtable._8_Stop.method)(
        selectMarkerCommonEffect,
        0LL,
        v5,
        selectMarkerCommonEffect->klass->vtable._9_ForceStop.methodPtr);
      return;
    }
LABEL_8:
    sub_B52A5C(selectMarker, method);
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
      sub_B52A5C(battleTargetPlayer, isPlayerForce);
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
    sub_B52A5C(selectMarker, method);
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
    sub_B52A5C(costLabel, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costLabel, 0, 0LL);
}


bool __fastcall WarBoardSquareComponent__GetButtonIsEnable(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  struct UIButton_o *button; // x0

  button = this->fields.button;
  if ( !button )
    sub_B52A5C(0LL, method);
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

  if ( (byte_42B2241 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2241 = 1;
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
    UnityEngine_Object__Destroy_35616956(v4, 0LL);
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
    UnityEngine_Object__Destroy_35616956(v6, 0LL);
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
    UnityEngine_Object__Destroy_35616956(v8, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareComponent__Initialize(
        WarBoardSquareComponent_o *this,
        UIAtlas_o *imageSetAtlas,
        WarBoardSquareData_o *data,
        const MethodInfo *method)
{
  char *dicEffect; // x0
  struct WarBoardSquareData_o **p_squareData; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_Transform_o *transform; // x22
  int v16; // s0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UILabel_o *costLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v27; // x0
  float v28; // s4
  float v29; // s5
  float v30; // s6
  float v31; // s7
  UIWidget_o *v32; // x20
  struct SimpleAnimation_o *Component_srcLineSprite; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct CommonEffectComponent_o *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct CommonEffectComponent_o *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct CommonEffectComponent_o *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct CommonEffectComponent_o *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  const MethodInfo *v68; // x2
  const MethodInfo *v69; // x1
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B2235 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&StringLiteral_22432/*"squares"*/);
    sub_B52984(&StringLiteral_22433/*"squares_target"*/);
    byte_42B2235 = 1;
  }
  dicEffect = (char *)this->fields.dicEffect;
  if ( !dicEffect )
    goto LABEL_33;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dicEffect,
    (const MethodInfo_2F1B9DC *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
  this->fields.squareData = data;
  p_squareData = &this->fields.squareData;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.squareData,
    (System_Int32_array **)data,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  dicEffect = (char *)this->fields.squareImage;
  if ( !dicEffect )
    goto LABEL_33;
  UISprite__set_atlas((UISprite_o *)dicEffect, imageSetAtlas, 0LL);
  dicEffect = (char *)this->fields.squareImage;
  if ( !dicEffect )
    goto LABEL_33;
  UISprite__set_spriteName((UISprite_o *)dicEffect, (System_String_o *)StringLiteral_22432/*"squares"*/, 0LL);
  dicEffect = (char *)this->fields.squareSubImage;
  if ( !dicEffect )
    goto LABEL_33;
  UISprite__set_atlas((UISprite_o *)dicEffect, imageSetAtlas, 0LL);
  dicEffect = (char *)this->fields.squareSubImage;
  if ( !dicEffect )
    goto LABEL_33;
  UISprite__set_spriteName((UISprite_o *)dicEffect, (System_String_o *)StringLiteral_22433/*"squares_target"*/, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  dicEffect = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !data )
    goto LABEL_33;
  if ( !dicEffect )
    goto LABEL_33;
  *(UnityEngine_Vector3_o *)&v16 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)dicEffect,
                                     data->fields._squareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_33;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v16, 0LL);
  dicEffect = (char *)*p_squareData;
  if ( !*p_squareData )
    goto LABEL_33;
  *((_QWORD *)dicEffect + 6) = this;
  sub_B52920(
    (BattleServantConfConponent_o *)(dicEffect + 48),
    (System_Int32_array **)this,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  costLabel = this->fields.costLabel;
  dicEffect = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dicEffect, 0LL);
  GameObjectExtensions__ResetLocalScale(v27, 0LL);
  v32 = (UIWidget_o *)this->fields.costLabel;
  if ( !v32 )
    goto LABEL_33;
  v71.fields.r = v32->fields.mColor.fields.r;
  v71.fields.g = v32->fields.mColor.fields.g;
  v71.fields.b = v32->fields.mColor.fields.b;
  v71.fields.a = 0.0;
  var40.methodPointer = 0LL;
  var40.invoker_method = 0LL;
  UnityEngine_Color___ctor(v71, v28, v29, v30, v31, &var40);
  *(_QWORD *)&v72.fields.r = var40.methodPointer;
  *(_QWORD *)&v72.fields.b = var40.invoker_method;
  UIWidget__set_color(v32, v72, 0LL);
  dicEffect = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !dicEffect )
    goto LABEL_33;
  Component_srcLineSprite = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)dicEffect,
                                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = Component_srcLineSprite;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimation,
    (System_Int32_array **)Component_srcLineSprite,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  dicEffect = (char *)this->fields.selectMarker;
  if ( !dicEffect )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dicEffect, 0, 0LL);
  dicEffect = (char *)this->fields.selectMarker;
  if ( !dicEffect )
    goto LABEL_33;
  v40 = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            (UnityEngine_GameObject_o *)dicEffect,
                                            (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.selectMarkerCommonEffect = v40;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.selectMarkerCommonEffect,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  dicEffect = (char *)this->fields.selectCircle;
  if ( !dicEffect )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dicEffect, 0, 0LL);
  dicEffect = (char *)this->fields.selectCircle;
  if ( !dicEffect )
    goto LABEL_33;
  v47 = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            (UnityEngine_GameObject_o *)dicEffect,
                                            (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.selectCircleCommonEffect = v47;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.selectCircleCommonEffect,
    (System_Int32_array **)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  dicEffect = (char *)this->fields.battleTargetPlayer;
  if ( !dicEffect )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dicEffect, 0, 0LL);
  dicEffect = (char *)this->fields.battleTargetPlayer;
  if ( !dicEffect )
    goto LABEL_33;
  v54 = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            (UnityEngine_GameObject_o *)dicEffect,
                                            (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.battleTargetPlayerCommonEffect = v54;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.battleTargetPlayerCommonEffect,
    (System_Int32_array **)v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  dicEffect = (char *)this->fields.battleTargetEnemy;
  if ( !dicEffect )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dicEffect, 0, 0LL);
  dicEffect = (char *)this->fields.battleTargetEnemy;
  if ( !dicEffect )
    goto LABEL_33;
  v61 = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            (UnityEngine_GameObject_o *)dicEffect,
                                            (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.battleTargetEnemyCommonEffect = v61;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.battleTargetEnemyCommonEffect,
    (System_Int32_array **)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  WarBoardSquareComponent__SetMovePoint(this, 1, v68);
  this->fields.isSelectable = 0;
  WarBoardSquareComponent__SetSprite(this, v69);
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
    sub_B52A5C(dicEffect, imageSetAtlas);
  }
  UIWidget__ResizeCollider((UIWidget_o *)dicEffect, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareComponent__NondispBattleRange(
        WarBoardSquareComponent_o *this,
        bool isPlayerForce,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *battleTargetPlayer; // x0
  struct CommonEffectComponent_o *battleTargetPlayerCommonEffect; // x20
  System_Action_o *v7; // x0
  __int64 *v8; // x8
  System_Action_o *v9; // x21

  if ( (byte_42B2242 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_WarBoardSquareComponent__NondispBattleRange_b__57_0__);
    sub_B52984(&Method_WarBoardSquareComponent__NondispBattleRange_b__57_1__);
    byte_42B2242 = 1;
  }
  if ( isPlayerForce )
  {
    battleTargetPlayer = this->fields.battleTargetPlayer;
    if ( !battleTargetPlayer )
      goto LABEL_13;
    if ( UnityEngine_GameObject__get_activeSelf(battleTargetPlayer, 0LL) )
    {
      battleTargetPlayerCommonEffect = this->fields.battleTargetPlayerCommonEffect;
      v7 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      v8 = &Method_WarBoardSquareComponent__NondispBattleRange_b__57_0__;
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
      v7 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      v8 = &Method_WarBoardSquareComponent__NondispBattleRange_b__57_1__;
LABEL_10:
      v9 = v7;
      System_Action___ctor(v7, (Il2CppObject *)this, *v8, 0LL);
      if ( battleTargetPlayerCommonEffect )
      {
        ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))battleTargetPlayerCommonEffect->klass->vtable._8_Stop.method)(
          battleTargetPlayerCommonEffect,
          0LL,
          v9,
          battleTargetPlayerCommonEffect->klass->vtable._9_ForceStop.methodPtr);
        return;
      }
LABEL_13:
      sub_B52A5C(battleTargetPlayer, isPlayerForce);
    }
  }
}


void __fastcall WarBoardSquareComponent__OnClickSquare(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v4; // x1
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

  if ( (byte_42B2243 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2243 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_32;
  v6 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_32;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_22803728(
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
      Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
      sub_B52A5C(Instance, v4);
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
  UnityEngine_GameObject_o *selectCircle; // x0
  struct CommonEffectComponent_o *selectCircleCommonEffect; // x20
  System_Action_o *v5; // x21

  if ( (byte_42B223E & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_WarBoardSquareComponent__OnDeselect_b__49_0__);
    byte_42B223E = 1;
  }
  selectCircle = this->fields.selectCircle;
  if ( !selectCircle )
    goto LABEL_8;
  if ( UnityEngine_GameObject__get_activeSelf(selectCircle, 0LL) )
  {
    selectCircleCommonEffect = this->fields.selectCircleCommonEffect;
    v5 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_WarBoardSquareComponent__OnDeselect_b__49_0__, 0LL);
    if ( selectCircleCommonEffect )
    {
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))selectCircleCommonEffect->klass->vtable._8_Stop.method)(
        selectCircleCommonEffect,
        0LL,
        v5,
        selectCircleCommonEffect->klass->vtable._9_ForceStop.methodPtr);
      return;
    }
LABEL_8:
    sub_B52A5C(selectCircle, method);
  }
}


void __fastcall WarBoardSquareComponent__OnEffectDisp(
        WarBoardSquareComponent_o *this,
        int32_t effectId,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x20
  System_Delegate_o *v17; // x23
  WarBoardTaskBase_TaskCallback_o *v18; // x24
  System_Int32_array **v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  WebViewManager_o *Instance; // x19
  __int64 v27; // x21
  __int64 v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x0
  __int64 v36; // x0

  if ( (byte_42B2245 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_B52984(&Method_WarBoardSquareComponent___c__DisplayClass60_0__OnEffectDisp_b__0__);
    sub_B52984(&WarBoardSquareComponent___c__DisplayClass60_0_TypeInfo);
    sub_B52984(&WarBoardCallbackTask_TypeInfo);
    sub_B52984(&WarBoardTaskBase___TypeInfo);
    byte_42B2245 = 1;
  }
  v7 = sub_B52A54(WarBoardSquareComponent___c__DisplayClass60_0_TypeInfo);
  WarBoardSquareComponent___c__DisplayClass60_0___ctor((WarBoardSquareComponent___c__DisplayClass60_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 24) = this;
  *(_DWORD *)(v7 + 16) = effectId;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  v16 = sub_B52A54(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v16, 0LL, 0LL);
  if ( !v16 )
    goto LABEL_14;
  v17 = *(System_Delegate_o **)(v16 + 32);
  v18 = (WarBoardTaskBase_TaskCallback_o *)sub_B52A54(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v18,
    (Il2CppObject *)v7,
    Method_WarBoardSquareComponent___c__DisplayClass60_0__OnEffectDisp_b__0__,
    0LL);
  v19 = (System_Int32_array **)System_Delegate__Combine(v17, (System_Delegate_o *)v18, 0LL);
  if ( v19 && *v19 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    sub_B52D50(v19);
LABEL_16:
    v35 = sub_B52A7C(v28);
    sub_B52A28(v35, 0LL);
  }
  *(_QWORD *)(v16 + 32) = v19;
  sub_B52920((BattleServantConfConponent_o *)(v16 + 32), v19, v20, v21, v22, v23, v24, v25);
  if ( taskList )
  {
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    return;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v8 = sub_B5299C(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !v8 )
LABEL_14:
    sub_B52A5C(v8, v9);
  v27 = v8;
  v28 = sub_B52A44(v16, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
  if ( !v28 )
    goto LABEL_16;
  if ( !*(_DWORD *)(v27 + 24) )
  {
    v36 = sub_B52A88(v28);
    sub_B52A28(v36, 0LL);
  }
  *(_QWORD *)(v27 + 32) = v16;
  sub_B52920((BattleServantConfConponent_o *)(v27 + 32), (System_Int32_array **)v16, v29, v30, v31, v32, v33, v34);
  if ( !Instance )
    goto LABEL_14;
  WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v27, 0LL);
}


void __fastcall WarBoardSquareComponent__OnEffectHide(
        WarBoardSquareComponent_o *this,
        int32_t effectId,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  System_Delegate_o *v9; // x23
  WarBoardTaskBase_TaskCallback_o *v10; // x24
  System_Int32_array **v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  WebViewManager_o *Instance; // x19
  __int64 v19; // x21
  __int64 v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x0
  __int64 v28; // x0

  if ( (byte_42B2246 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_B52984(&WarBoardCallbackTask_TypeInfo);
    sub_B52984(&Method_WarBoardSquareComponent__OnEffectHide_b__61_0__);
    sub_B52984(&WarBoardTaskBase___TypeInfo);
    byte_42B2246 = 1;
  }
  v6 = sub_B52A54(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v6, 0LL, 0LL);
  if ( !v6 )
    goto LABEL_13;
  v9 = *(System_Delegate_o **)(v6 + 32);
  v10 = (WarBoardTaskBase_TaskCallback_o *)sub_B52A54(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v10,
    (Il2CppObject *)this,
    Method_WarBoardSquareComponent__OnEffectHide_b__61_0__,
    0LL);
  v11 = (System_Int32_array **)System_Delegate__Combine(v9, (System_Delegate_o *)v10, 0LL);
  if ( v11 && *v11 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    sub_B52D50(v11);
LABEL_15:
    v27 = sub_B52A7C(v20);
    sub_B52A28(v27, 0LL);
  }
  *(_QWORD *)(v6 + 32) = v11;
  sub_B52920((BattleServantConfConponent_o *)(v6 + 32), v11, v12, v13, v14, v15, v16, v17);
  if ( taskList )
  {
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v6,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    return;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v7 = sub_B5299C(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !v7 )
LABEL_13:
    sub_B52A5C(v7, v8);
  v19 = v7;
  v20 = sub_B52A44(v6, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
  if ( !v20 )
    goto LABEL_15;
  if ( !*(_DWORD *)(v19 + 24) )
  {
    v28 = sub_B52A88(v20);
    sub_B52A28(v28, 0LL);
  }
  *(_QWORD *)(v19 + 32) = v6;
  sub_B52920((BattleServantConfConponent_o *)(v19 + 32), (System_Int32_array **)v6, v21, v22, v23, v24, v25, v26);
  if ( !Instance )
    goto LABEL_13;
  WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v19, 0LL);
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

  if ( (byte_42B2244 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_42B2244 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_21;
  v6 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_21;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_22803728(
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
    sub_B52A5C(Instance, v4);
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
    sub_B52A5C(selectCircle, method);
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
  __int64 v7; // x20
  WarBoardManager_o *Instance; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct WarBoardSquareData_o *squareData; // x8
  int imageId_k__BackingField; // w8
  int v25; // w9
  System_String_o *v26; // x0
  System_String_o *v27; // x21
  _QWORD **v28; // x23
  __int64 v29; // x22
  __int16 v30; // w8
  __int64 v31; // x22
  __int64 v32; // x22
  __int64 v33; // x22
  System_String_o *v34; // x21
  System_Int32_array **CommonEffectAsset_object; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UnityEngine_Object_o *v42; // x21
  System_Action_o *v44; // x21
  UnityEngine_Object_o *uiDataComp; // x20
  unsigned int v46; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42B2247 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Array_Empty_object___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&Method_WarBoardSquareComponent___c__DisplayClass62_0__PlayEffect_b__0__);
    sub_B52984(&WarBoardSquareComponent___c__DisplayClass62_0_TypeInfo);
    sub_B52984(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    byte_42B2247 = 1;
  }
  v46 = 0;
  v7 = sub_B52A54(WarBoardSquareComponent___c__DisplayClass62_0_TypeInfo);
  WarBoardSquareComponent___c__DisplayClass62_0___ctor((WarBoardSquareComponent___c__DisplayClass62_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_34;
  *(_QWORD *)(v7 + 24) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  v16 = (System_Int32_array **)System_String__Concat_44568316(prefix, effectKey, 0LL);
  *(_QWORD *)(v7 + 32) = v16;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 32), v16, v17, v18, v19, v20, v21, v22);
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_34;
  imageId_k__BackingField = squareData->fields._imageId_k__BackingField;
  if ( imageId_k__BackingField >= 0 )
    v25 = imageId_k__BackingField;
  else
    v25 = imageId_k__BackingField + 1;
  v46 = imageId_k__BackingField - (v25 & 0xFFFFFFFE);
  v26 = System_Int32__ToString((int32_t)&v46, 0LL);
  v27 = System_String__Concat_44568316(effectKey, v26, 0LL);
  v28 = (_QWORD **)Method_System_Array_Empty_object___;
  v29 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
  v30 = *(_WORD *)(v29 + 306);
  if ( (v30 & 1) == 0 )
  {
    sub_AEB684(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
    v30 = *(_WORD *)(v29 + 306);
  }
  if ( (v30 & 0x400) != 0 )
  {
    v31 = *v28[6];
    if ( (*(_BYTE *)(v31 + 306) & 1) == 0 )
      sub_AEB684(*v28[6]);
    if ( !*(_DWORD *)(v31 + 224) )
    {
      v32 = *v28[6];
      if ( (*(_BYTE *)(v32 + 306) & 1) == 0 )
        sub_AEB684(*v28[6]);
      j_il2cpp_runtime_class_init_0(v32);
    }
  }
  v33 = *v28[6];
  if ( (*(_BYTE *)(v33 + 306) & 1) == 0 )
    sub_AEB684(*v28[6]);
  v34 = System_String__Format_44647040(v27, **(System_Object_array ***)(v33 + 184), 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  CommonEffectAsset_object = (System_Int32_array **)WarBoardManager__GetCommonEffectAsset_object_(
                                                      Instance,
                                                      v34,
                                                      (const MethodInfo_2E60790 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  *(_QWORD *)(v7 + 16) = CommonEffectAsset_object;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 16), CommonEffectAsset_object, v36, v37, v38, v39, v40, v41);
  v42 = *(UnityEngine_Object_o **)(v7 + 16);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v42, 0LL, 0LL) )
    return 0;
  v44 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v44,
    (Il2CppObject *)v7,
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
    if ( v44 )
    {
      System_Action__Invoke(v44, 0LL);
      return 1;
    }
LABEL_34:
    sub_B52A5C(Instance, v9);
  }
  Instance = (WarBoardManager_o *)this->fields.uiDataComp;
  if ( !Instance )
    goto LABEL_34;
  WarBoardControlUiDataComponent__SyncAnimation((WarBoardControlUiDataComponent_o *)Instance, v44, 0LL);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareComponent__PlayUnDispCostAnim(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  char *costLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct TweenScale_o *v5; // x0
  struct TweenScale_o **p_tweenScale; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct TweenScale_o *tweenScale; // x21
  float v14; // s0
  float v15; // s1
  float v16; // s2
  struct TweenScale_o *v17; // x8
  float costAnimScale; // w9
  struct TweenScale_o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x1

  if ( (byte_42B223F & 1) == 0 )
  {
    sub_B52984(&Method_UITweener_Begin_TweenScale___);
    sub_B52984(&StringLiteral_10774/*"PlayUnDispCostAnim2"*/);
    byte_42B223F = 1;
  }
  costLabel = (char *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_10;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL);
  v5 = (struct TweenScale_o *)UITweener__Begin_TweenWidth_(
                                gameObject,
                                this->fields.costAnimScaleTime,
                                (const MethodInfo_1F7CFF8 *)Method_UITweener_Begin_TweenScale___);
  p_tweenScale = &this->fields.tweenScale;
  this->fields.tweenScale = v5;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.tweenScale,
    (System_Int32_array **)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  tweenScale = this->fields.tweenScale;
  *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_one(0LL);
  if ( !tweenScale )
    goto LABEL_10;
  tweenScale->fields.from.fields.x = v14;
  tweenScale->fields.from.fields.y = v15;
  tweenScale->fields.from.fields.z = v16;
  v17 = this->fields.tweenScale;
  if ( !v17 )
    goto LABEL_10;
  costAnimScale = this->fields.costAnimScale;
  v17->fields.to.fields.x = costAnimScale;
  v17->fields.to.fields.y = costAnimScale;
  v17->fields.to.fields.z = costAnimScale;
  if ( !*p_tweenScale
    || ((*p_tweenScale)->fields.style = 6,
        v19 = this->fields.tweenScale,
        costLabel = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        !v19)
    || (v19->fields.eventReceiver = (struct UnityEngine_GameObject_o *)costLabel,
        sub_B52920(
          (BattleServantConfConponent_o *)&v19->fields.eventReceiver,
          (System_Int32_array **)costLabel,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25),
        (costLabel = (char *)*p_tweenScale) == 0LL) )
  {
LABEL_10:
    sub_B52A5C(costLabel, method);
  }
  v32 = (System_Int32_array **)StringLiteral_10774/*"PlayUnDispCostAnim2"*/;
  *((_QWORD *)costLabel + 10) = StringLiteral_10774/*"PlayUnDispCostAnim2"*/;
  sub_B52920((BattleServantConfConponent_o *)(costLabel + 80), v32, v26, v27, v28, v29, v30, v31);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareComponent__PlayUnDispCostAnim2(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  char *costLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct TweenPosition_o *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct TweenPosition_o *tweenPosition; // x8
  float z; // w10
  struct TweenPosition_o *v14; // x8
  float v15; // w10
  struct TweenPosition_o *v16; // x8
  struct TweenPosition_o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_GameObject_o *v24; // x0
  struct TweenScale_o *v25; // x0
  struct TweenScale_o **p_tweenScale; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct TweenScale_o *tweenScale; // x8
  float costAnimScale; // w9
  struct TweenScale_o *v35; // x21
  float v36; // s0
  float v37; // s1
  float v38; // s2
  struct TweenScale_o *v39; // x20
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UnityEngine_GameObject_o *v46; // x0
  struct TweenAlpha_o *v47; // x0
  struct TweenAlpha_o **p_tweenAlpha; // x20
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  struct TweenAlpha_o *tweenAlpha; // x8
  struct TweenAlpha_o *v56; // x21
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x1

  if ( (byte_42B2240 & 1) == 0 )
  {
    sub_B52984(&Method_UITweener_Begin_TweenAlpha___);
    sub_B52984(&Method_UITweener_Begin_TweenPosition___);
    sub_B52984(&Method_UITweener_Begin_TweenScale___);
    sub_B52984(&StringLiteral_6723/*"FinishUnDispCostAnim"*/);
    byte_42B2240 = 1;
  }
  costLabel = (char *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_20;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL);
  v5 = (struct TweenPosition_o *)UITweener__Begin_TweenWidth_(
                                   gameObject,
                                   this->fields.costAnimFadeTime,
                                   (const MethodInfo_1F7CFF8 *)Method_UITweener_Begin_TweenPosition___);
  this->fields.tweenPosition = v5;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.tweenPosition,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  tweenPosition = this->fields.tweenPosition;
  if ( !tweenPosition )
    goto LABEL_20;
  z = this->fields.costLabelPos.fields.z;
  *(_QWORD *)&tweenPosition->fields.from.fields.x = *(_QWORD *)&this->fields.costLabelPos.fields.x;
  tweenPosition->fields.from.fields.z = z;
  v14 = this->fields.tweenPosition;
  if ( !v14 )
    goto LABEL_20;
  v15 = this->fields.costLabelMovePos.fields.z;
  *(_QWORD *)&v14->fields.to.fields.x = *(_QWORD *)&this->fields.costLabelMovePos.fields.x;
  v14->fields.to.fields.z = v15;
  v16 = this->fields.tweenPosition;
  if ( !v16 )
    goto LABEL_20;
  v16->fields.style = 0;
  v17 = this->fields.tweenPosition;
  costLabel = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v17 )
    goto LABEL_20;
  v17->fields.eventReceiver = (struct UnityEngine_GameObject_o *)costLabel;
  sub_B52920(
    (BattleServantConfConponent_o *)&v17->fields.eventReceiver,
    (System_Int32_array **)costLabel,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  costLabel = (char *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_20;
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL);
  v25 = (struct TweenScale_o *)UITweener__Begin_TweenWidth_(
                                 v24,
                                 this->fields.costAnimFadeTime,
                                 (const MethodInfo_1F7CFF8 *)Method_UITweener_Begin_TweenScale___);
  p_tweenScale = &this->fields.tweenScale;
  this->fields.tweenScale = v25;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.tweenScale,
    (System_Int32_array **)v25,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  tweenScale = this->fields.tweenScale;
  if ( !tweenScale )
    goto LABEL_20;
  costAnimScale = this->fields.costAnimScale;
  tweenScale->fields.from.fields.x = costAnimScale;
  tweenScale->fields.from.fields.y = costAnimScale;
  tweenScale->fields.from.fields.z = costAnimScale;
  v35 = *p_tweenScale;
  *(UnityEngine_Vector3_o *)&v36 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v35 )
    goto LABEL_20;
  v35->fields.to.fields.x = v36;
  v35->fields.to.fields.y = v37;
  v35->fields.to.fields.z = v38;
  if ( !*p_tweenScale )
    goto LABEL_20;
  (*p_tweenScale)->fields.style = 0;
  v39 = this->fields.tweenScale;
  costLabel = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v39 )
    goto LABEL_20;
  v39->fields.eventReceiver = (struct UnityEngine_GameObject_o *)costLabel;
  sub_B52920(
    (BattleServantConfConponent_o *)&v39->fields.eventReceiver,
    (System_Int32_array **)costLabel,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  costLabel = (char *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_20;
  v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL);
  v47 = (struct TweenAlpha_o *)UITweener__Begin_TweenWidth_(
                                 v46,
                                 this->fields.costAnimFadeTime,
                                 (const MethodInfo_1F7CFF8 *)Method_UITweener_Begin_TweenAlpha___);
  p_tweenAlpha = &this->fields.tweenAlpha;
  this->fields.tweenAlpha = v47;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.tweenAlpha,
    (System_Int32_array **)v47,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  tweenAlpha = this->fields.tweenAlpha;
  if ( !tweenAlpha )
    goto LABEL_20;
  tweenAlpha->fields.from = 1.0;
  if ( !*p_tweenAlpha
    || ((*p_tweenAlpha)->fields.to = 0.0, !*p_tweenAlpha)
    || ((*p_tweenAlpha)->fields.style = 0,
        v56 = this->fields.tweenAlpha,
        costLabel = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        !v56)
    || (v56->fields.eventReceiver = (struct UnityEngine_GameObject_o *)costLabel,
        sub_B52920(
          (BattleServantConfConponent_o *)&v56->fields.eventReceiver,
          (System_Int32_array **)costLabel,
          v57,
          v58,
          v59,
          v60,
          v61,
          v62),
        (costLabel = (char *)*p_tweenAlpha) == 0LL) )
  {
LABEL_20:
    sub_B52A5C(costLabel, method);
  }
  v69 = (System_Int32_array **)StringLiteral_6723/*"FinishUnDispCostAnim"*/;
  *((_QWORD *)costLabel + 10) = StringLiteral_6723/*"FinishUnDispCostAnim"*/;
  sub_B52920((BattleServantConfConponent_o *)(costLabel + 80), v69, v63, v64, v65, v66, v67, v68);
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
    sub_B52A5C(this, isOnActionPiece);
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
  UnityEngine_Object_o *button; // x21
  UnityEngine_Object_o *subButton; // x21
  __int64 v7; // x1
  struct UIButton_o *v8; // x0
  UIButton_c *klass; // x8
  int32_t mState; // w20

  if ( (byte_42B223D & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B223D = 1;
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
      sub_B52A5C(v8, v7);
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
  UnityEngine_Component_o *costLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v18; // x0
  float v19; // s4
  float v20; // s5
  float v21; // s6
  float v22; // s7
  UIWidget_o *v23; // x21
  UILabel_o *v24; // x20
  System_String_o *v25; // x21
  Il2CppObject *v26; // x0
  MethodInfo v27; // [xsp+0h] [xbp-70h] BYREF
  int32_t v28; // [xsp+5Ch] [xbp-14h] BYREF
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = gradientBottom.fields.a;
  b = gradientBottom.fields.b;
  g = gradientBottom.fields.g;
  r = gradientBottom.fields.r;
  v9 = gradientTop.fields.a;
  v10 = gradientTop.fields.b;
  v11 = gradientTop.fields.g;
  v12 = gradientTop.fields.r;
  if ( (byte_42B223B & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_15388/*"WARBOARD_SQUARE_COST"*/);
    byte_42B223B = 1;
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
  v18 = UnityEngine_Component__get_gameObject(costLabel, 0LL);
  GameObjectExtensions__SetLocalPosition(v18, this->fields.costLabelPos, 0LL);
  v23 = (UIWidget_o *)this->fields.costLabel;
  if ( !v23 )
    goto LABEL_14;
  v29.fields.r = v23->fields.mColor.fields.r;
  v29.fields.g = v23->fields.mColor.fields.g;
  v29.fields.b = v23->fields.mColor.fields.b;
  v29.fields.a = 1.0;
  v27.methodPointer = 0LL;
  v27.invoker_method = 0LL;
  UnityEngine_Color___ctor(v29, v19, v20, v21, v22, &v27);
  *(_QWORD *)&v30.fields.r = v27.methodPointer;
  *(_QWORD *)&v30.fields.b = v27.invoker_method;
  UIWidget__set_color(v23, v30, 0LL);
  costLabel = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_14;
  UILabel__set_applyGradient((UILabel_o *)costLabel, 1, 0LL);
  costLabel = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_14;
  v31.fields.r = v12;
  v31.fields.g = v11;
  v31.fields.b = v10;
  v31.fields.a = v9;
  UILabel__set_gradientTop((UILabel_o *)costLabel, v31, 0LL);
  costLabel = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_14;
  v32.fields.r = r;
  v32.fields.g = g;
  v32.fields.b = b;
  v32.fields.a = a;
  UILabel__set_gradientBottom((UILabel_o *)costLabel, v32, 0LL);
  v24 = this->fields.costLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_15388/*"WARBOARD_SQUARE_COST"*/, 0LL);
  v28 = cost;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
  costLabel = (UnityEngine_Component_o *)System_String__Format(v25, v26, 0LL);
  if ( !v24 )
LABEL_14:
    sub_B52A5C(costLabel, v15);
  UILabel__set_text(v24, (System_String_o *)costLabel, 0LL);
}


void __fastcall WarBoardSquareComponent__SetMovePoint(
        WarBoardSquareComponent_o *this,
        bool isDefault,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_movePoint; // x20
  UnityEngine_Object_o *movePoint; // x22
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x22
  struct WarBoardSquareData_o *squareData; // x8
  int imageId_k__BackingField; // w8
  Il2CppObject *v12; // x0
  System_String_o *v13; // x21
  Il2CppObject *CommonEffectAsset_object; // x21
  UnityEngine_Transform_o *transform; // x22
  System_Int32_array **v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct CommonEffectComponent_o *Component_srcLineSprite; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int v30; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42B2236 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject____68654656);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    sub_B52984(&StringLiteral_9263/*"Move_Point_0"*/);
    sub_B52984(&StringLiteral_9264/*"Move_Point_{0}"*/);
    byte_42B2236 = 1;
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
    v9 = (UnityEngine_Object_o *)*p_movePoint;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(v9, 0LL);
  }
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_28;
  imageId_k__BackingField = squareData->fields._imageId_k__BackingField;
  if ( !isDefault )
    imageId_k__BackingField += 2;
  v30 = imageId_k__BackingField;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
  v13 = System_String__Format((System_String_o *)StringLiteral_9264/*"Move_Point_{0}"*/, v12, 0LL);
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               v13,
                               (const MethodInfo_2E60790 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                                 (WarBoardManager_o *)Instance,
                                 (System_String_o *)StringLiteral_9263/*"Move_Point_0"*/,
                                 (const MethodInfo_2E60790 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v16 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                 (UILabel_o *)CommonEffectAsset_object,
                                 transform,
                                 (const MethodInfo_1F712F4 *)Method_UnityEngine_Object_Instantiate_GameObject____68654656);
  *p_movePoint = (struct UnityEngine_GameObject_o *)v16;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.movePoint, v16, v17, v18, v19, v20, v21, v22);
  Instance = *p_movePoint;
  if ( !*p_movePoint || (UnityEngine_GameObject__SetActive(Instance, 0, 0LL), (Instance = *p_movePoint) == 0LL) )
LABEL_28:
    sub_B52A5C(Instance, v8);
  Component_srcLineSprite = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                Instance,
                                                                (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.movePointCommonEffect = Component_srcLineSprite;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.movePointCommonEffect,
    (System_Int32_array **)Component_srcLineSprite,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
}


void __fastcall WarBoardSquareComponent__SetSprite(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  WarBoardSquareComponent_o *v2; // x19
  struct WarBoardSquareData_o *squareData; // x8
  int imageId_k__BackingField; // w8
  Il2CppObject *v5; // x0
  System_String_o *v6; // x20
  UISprite_o *squareSubImage; // x21
  UIButton_o *subButton; // x21
  int v9; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_42B223A & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_16287/*"_target"*/);
    sub_B52984(&StringLiteral_22434/*"square{0:D3}"*/);
    this = (WarBoardSquareComponent_o *)sub_B52984(&StringLiteral_22432/*"squares"*/);
    byte_42B223A = 1;
  }
  squareData = v2->fields.squareData;
  if ( !squareData )
    goto LABEL_14;
  imageId_k__BackingField = squareData->fields._imageId_k__BackingField;
  if ( imageId_k__BackingField < 1 )
  {
    v6 = (System_String_o *)StringLiteral_22432/*"squares"*/;
  }
  else
  {
    v9 = imageId_k__BackingField;
    v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
    v6 = System_String__Format((System_String_o *)StringLiteral_22434/*"square{0:D3}"*/, v5, 0LL);
  }
  this = (WarBoardSquareComponent_o *)v2->fields.squareImage;
  if ( !this )
    goto LABEL_14;
  UISprite__set_spriteName((UISprite_o *)this, v6, 0LL);
  this = (WarBoardSquareComponent_o *)v2->fields.button;
  if ( !this )
    goto LABEL_14;
  UIButton__set_normalSprite((UIButton_o *)this, v6, 0LL);
  this = (WarBoardSquareComponent_o *)v2->fields.squareImage;
  if ( !this )
    goto LABEL_14;
  UIWidget__SetDirty((UIWidget_o *)this, 0LL);
  squareSubImage = v2->fields.squareSubImage;
  this = (WarBoardSquareComponent_o *)System_String__Concat_44568316(v6, (System_String_o *)StringLiteral_16287/*"_target"*/, 0LL);
  if ( !squareSubImage
    || (UISprite__set_spriteName(squareSubImage, (System_String_o *)this, 0LL),
        subButton = v2->fields.subButton,
        this = (WarBoardSquareComponent_o *)System_String__Concat_44568316(
                                              v6,
                                              (System_String_o *)StringLiteral_16287/*"_target"*/,
                                              0LL),
        !subButton)
    || (UIButton__set_normalSprite(subButton, (System_String_o *)this, 0LL),
        (this = (WarBoardSquareComponent_o *)v2->fields.squareSubImage) == 0LL) )
  {
LABEL_14:
    sub_B52A5C(this, method);
  }
  UIWidget__SetDirty((UIWidget_o *)this, 0LL);
}


void __fastcall WarBoardSquareComponent__SetTouchEnable(
        WarBoardSquareComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  struct UIButton_o *v7; // x0
  UnityEngine_Object_o *subButton; // x21

  if ( (byte_42B223C & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B223C = 1;
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
    sub_B52A5C(v7, v6);
  }
}


bool __fastcall WarBoardSquareComponent__StopEffect(
        WarBoardSquareComponent_o *this,
        System_String_o *effectKey,
        System_String_o *prefix,
        const MethodInfo *method)
{
  System_Xml_XmlQualifiedName_o *dicEffect; // x0
  __int64 v8; // x1
  System_Xml_XmlQualifiedName_o *v9; // x20
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x2
  System_Collections_IEnumerator_o *v12; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B2248 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__GameObject__Remove__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__);
    byte_42B2248 = 1;
  }
  value = 0LL;
  dicEffect = (System_Xml_XmlQualifiedName_o *)System_String__Concat_44568316(prefix, effectKey, 0LL);
  if ( !this->fields.dicEffect )
    goto LABEL_9;
  v9 = dicEffect;
  v10 = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.dicEffect,
          dicEffect,
          &value,
          (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__);
  if ( v10 )
  {
    v12 = WarBoardSquareComponent__StopEffectEndLoop(
            (WarBoardSquareComponent_o *)v10,
            (UnityEngine_GameObject_o *)value,
            v11);
    UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
    dicEffect = (System_Xml_XmlQualifiedName_o *)this->fields.dicEffect;
    if ( dicEffect )
    {
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dicEffect,
        v9,
        (const MethodInfo_2F1D26C *)Method_System_Collections_Generic_Dictionary_string__GameObject__Remove__);
      return 1;
    }
LABEL_9:
    sub_B52A5C(dicEffect, v8);
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

  if ( (byte_42B2249 & 1) == 0 )
  {
    sub_B52984(&WarBoardSquareComponent__StopEffectEndLoop_d__64_TypeInfo);
    byte_42B2249 = 1;
  }
  v4 = sub_B52A54(WarBoardSquareComponent__StopEffectEndLoop_d__64_TypeInfo);
  WarBoardSquareComponent__StopEffectEndLoop_d__64___ctor(
    (WarBoardSquareComponent__StopEffectEndLoop_d__64_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_B52A5C(v5, v6);
  *(_QWORD *)(v4 + 32) = effect;
  sub_B52920((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)effect, v7, v8, v9, v10, v11, v12);
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
    sub_B52A5C(this, isDispCostLabel);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isDispCostLabel, 0LL);
}


void __fastcall WarBoardSquareComponent___DisableEditPosition_b__40_0(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectMarker; // x0

  selectMarker = this->fields.selectMarker;
  if ( !selectMarker )
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(battleTargetPlayer, method);
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
    sub_B52A5C(battleTargetEnemy, method);
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
    sub_B52A5C(selectCircle, method);
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

  if ( (byte_42B224C & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B224C = 1;
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
      sub_B52A5C(0LL, v4);
    UnityEngine_GameObject__SetActive(v5, 0, 0LL);
    v6 = (UnityEngine_Object_o *)this->fields.effectPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(v6, 0LL);
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
  int32_t _1__state; // w8
  void *effect; // x0
  int v5; // w8
  void *v6; // x20
  unsigned int v7; // w21
  float constantMax; // s8
  UnityEngine_Object_o *v9; // x19
  bool result; // w0
  UnityEngine_WaitForSeconds_o *v11; // x20
  Il2CppObject **p__2__current; // x19
  __int64 v13; // x0
  UnityEngine_ParticleSystem_MinMaxCurve_o v14; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v15; // [xsp+20h] [xbp-50h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-28h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v17; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v18; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v19; // 0:x0.8

  if ( (byte_42AD75B & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_42AD75B = 1;
  }
  m_ParticleSystem = 0LL;
  memset(&v15, 0, sizeof(v15));
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    effect = this->fields.effect;
    this->fields.__1__state = -1;
    if ( !effect )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effect, 0, 0LL);
    v9 = (UnityEngine_Object_o *)this->fields.effect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(v9, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  effect = this->fields.effect;
  this->fields.__1__state = -1;
  if ( !effect )
    goto LABEL_23;
  effect = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28816884(
             (UnityEngine_GameObject_o *)effect,
             (const MethodInfo_1B7B5F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
  if ( !effect )
    goto LABEL_23;
  v5 = *((_DWORD *)effect + 6);
  v6 = effect;
  if ( v5 >= 1 )
  {
    v7 = 0;
    constantMax = 0.0;
    while ( 1 )
    {
      if ( v7 >= v5 )
      {
        v13 = sub_B52A88(effect);
        sub_B52A28(v13, 0LL);
      }
      effect = (void *)*((_QWORD *)v6 + (int)v7 + 4);
      if ( !effect )
        break;
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)effect, 0LL).fields.m_ParticleSystem;
      v17.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__get_startLifetime(&v14, v17, 0LL);
      v15 = v14;
      if ( constantMax < UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v15, 0LL) )
      {
        v18.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
        UnityEngine_ParticleSystem_MainModule__get_startLifetime(&v14, v18, 0LL);
        v15 = v14;
        constantMax = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v15, 0LL);
      }
      v19.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__set_loop(v19, 0, 0LL);
      v5 = *((_DWORD *)v6 + 6);
      if ( (int)++v7 >= v5 )
        goto LABEL_22;
    }
LABEL_23:
    sub_B52A5C(effect, method);
  }
  constantMax = 0.0;
LABEL_22:
  v11 = (UnityEngine_WaitForSeconds_o *)sub_B52A54(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v11, constantMax * 1.2, 0LL);
  this->fields.__2__current = (Il2CppObject *)v11;
  p__2__current = &this->fields.__2__current;
  sub_B52920(p__2__current);
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_WarBoardSquareComponent__StopEffectEndLoop_d__64_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  WebViewManager_o *v5; // x20
  System_String_o *v6; // x21
  System_String_o *v7; // x20
  Il2CppObject *CommonEffectAsset_object; // x20
  UnityEngine_Component_o *_4__this; // x19
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Component_o *v11; // x0
  int32_t effectId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42AD759 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject____68654656);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    sub_B52984(&WarBoardManager_WarBoardSqEfType_TypeInfo);
    sub_B52984(&StringLiteral_18346/*"ef_sq_"*/);
    byte_42AD759 = 1;
  }
  effectId = this->fields.effectId;
  Instance = (WebViewManager_o *)j_il2cpp_value_box_0(WarBoardManager_WarBoardSqEfType_TypeInfo, &effectId);
  if ( !Instance )
    goto LABEL_17;
  v5 = Instance;
  v6 = (System_String_o *)((__int64 (__fastcall *)(WebViewManager_o *, void *))Instance->klass->vtable._3_ToString.method)(
                            Instance,
                            Instance->klass[1]._1.image);
  effectId = *(_DWORD *)j_il2cpp_object_unbox_0(v5);
  v7 = System_String__Concat_44568316((System_String_o *)StringLiteral_18346/*"ef_sq_"*/, v6, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               v7,
                               (const MethodInfo_2E60790 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
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
      v11 = _4__this + 10;
      goto LABEL_16;
    }
LABEL_17:
    sub_B52A5C(Instance, v4);
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
                                                    (const MethodInfo_1F712F4 *)Method_UnityEngine_Object_Instantiate_GameObject____68654656);
  v11 = _4__this + 10;
LABEL_16:
  sub_B52920(v11);
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
  UnityEngine_Component_o *_4__this; // x0
  struct UnityEngine_GameObject_o *asset; // x20
  UnityEngine_Transform_o *transform; // x21
  struct WarBoardSquareComponent_o *v6; // x8
  System_Xml_Schema_XmlSchemaObject_o *v7; // x2

  if ( (byte_42AD75A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__GameObject__set_Item__);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject____68654656);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD75A = 1;
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
                                          (const MethodInfo_1F712F4 *)Method_UnityEngine_Object_Instantiate_GameObject____68654656);
  v6 = this->fields.__4__this;
  if ( !v6
    || (v7 = (System_Xml_Schema_XmlSchemaObject_o *)_4__this,
        (_4__this = (UnityEngine_Component_o *)v6->fields.dicEffect) == 0LL) )
  {
LABEL_10:
    sub_B52A5C(_4__this, method);
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)_4__this,
    (System_Xml_XmlQualifiedName_o *)this->fields.key,
    v7,
    (const MethodInfo_2F1B7D8 *)Method_System_Collections_Generic_Dictionary_string__GameObject__set_Item__);
}