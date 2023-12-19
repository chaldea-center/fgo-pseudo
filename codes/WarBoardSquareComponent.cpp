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

  if ( (byte_40FBADD & 1) == 0 )
  {
    sub_B16FFC(&WarBoardSquareComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_12544, v8);
    byte_40FBADD = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardSquareComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_12544;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_12544;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall WarBoardSquareComponent___ctor(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FBADC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo, v6);
    byte_40FBADC = 1;
  }
  this->fields.costAnimFadeTime = 0.3;
  *(_OWORD *)&this->fields.costLabelPos.fields.x = xmmword_3137730;
  *(_OWORD *)&this->fields.costLabelMovePos.fields.y = xmmword_3137740;
  v7 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                       System_Collections_Generic_Dictionary_string__GameObject__TypeInfo,
                                                                                       method,
                                                                                       v2,
                                                                                       v3,
                                                                                       v4);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v7,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
  this->fields.dicEffect = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dicEffect,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardSquareComponent__ActiveEditPointArrow(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *selectMarkerArrow; // x20
  UnityEngine_Behaviour_o *v4; // x0

  if ( (byte_40FBACA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FBACA = 1;
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
      sub_B170D4();
    UnityEngine_Behaviour__set_enabled(v4, 1, 0LL);
  }
}


void __fastcall WarBoardSquareComponent__DeactiveEditPointArrow(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *selectMarkerArrow; // x20
  UnityEngine_Behaviour_o *v4; // x0

  if ( (byte_40FBACB & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FBACB = 1;
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
      sub_B170D4();
    UnityEngine_Behaviour__set_enabled(v4, 0, 0LL);
  }
}


void __fastcall WarBoardSquareComponent__DisableEditPosition(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *selectMarker; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  struct CommonEffectComponent_o *selectMarkerCommonEffect; // x20
  System_Action_o *v10; // x21

  if ( (byte_40FBAC9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_WarBoardSquareComponent__DisableEditPosition_b__40_0__, v3);
    byte_40FBAC9 = 1;
  }
  selectMarker = this->fields.selectMarker;
  if ( !selectMarker )
    goto LABEL_8;
  if ( UnityEngine_GameObject__get_activeSelf(selectMarker, 0LL) )
  {
    selectMarkerCommonEffect = this->fields.selectMarkerCommonEffect;
    v10 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v5, v6, v7, v8);
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
    sub_B170D4();
  }
}


void __fastcall WarBoardSquareComponent__DispBattleRange(
        WarBoardSquareComponent_o *this,
        bool isPlayerForce,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *battleTargetPlayer; // x0
  struct CommonEffectComponent_o *battleTargetPlayerCommonEffect; // x0
  UnityEngine_GameObject_o *battleTargetEnemy; // x0

  if ( isPlayerForce )
  {
    battleTargetPlayer = this->fields.battleTargetPlayer;
    if ( !battleTargetPlayer )
      goto LABEL_8;
    UnityEngine_GameObject__SetActive(battleTargetPlayer, 1, 0LL);
    battleTargetPlayerCommonEffect = this->fields.battleTargetPlayerCommonEffect;
    if ( !battleTargetPlayerCommonEffect )
      goto LABEL_8;
  }
  else
  {
    battleTargetEnemy = this->fields.battleTargetEnemy;
    if ( !battleTargetEnemy
      || (UnityEngine_GameObject__SetActive(battleTargetEnemy, 1, 0LL),
          (battleTargetPlayerCommonEffect = this->fields.battleTargetEnemyCommonEffect) == 0LL) )
    {
LABEL_8:
      sub_B170D4();
    }
  }
  ((void (__fastcall *)(struct CommonEffectComponent_o *, __int64, _QWORD, Il2CppMethodPointer))battleTargetPlayerCommonEffect->klass->vtable._6_ForceStart.method)(
    battleTargetPlayerCommonEffect,
    1LL,
    0LL,
    battleTargetPlayerCommonEffect->klass->vtable._7_ForceLoop.methodPtr);
}


void __fastcall WarBoardSquareComponent__EnableEditPosition(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectMarker; // x0
  struct CommonEffectComponent_o *selectMarkerCommonEffect; // x0

  selectMarker = this->fields.selectMarker;
  if ( !selectMarker
    || (UnityEngine_GameObject__SetActive(selectMarker, 1, 0LL),
        (selectMarkerCommonEffect = this->fields.selectMarkerCommonEffect) == 0LL) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct CommonEffectComponent_o *, __int64, _QWORD, Il2CppMethodPointer))selectMarkerCommonEffect->klass->vtable._6_ForceStart.method)(
    selectMarkerCommonEffect,
    1LL,
    0LL,
    selectMarkerCommonEffect->klass->vtable._7_ForceLoop.methodPtr);
}


void __fastcall WarBoardSquareComponent__FinishUnDispCostAnim(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *costLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v5; // x0
  UnityEngine_GameObject_o *v6; // x0
  float v7; // s4
  float v8; // s5
  float v9; // s6
  float v10; // s7
  UIWidget_o *v11; // x20
  UnityEngine_GameObject_o *movePoint; // x0
  UnityEngine_Color_o v13; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  costLabel = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_6;
  gameObject = UnityEngine_Component__get_gameObject(costLabel, 0LL);
  GameObjectExtensions__ResetLocalScale(gameObject, 0LL);
  v5 = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !v5 )
    goto LABEL_6;
  v6 = UnityEngine_Component__get_gameObject(v5, 0LL);
  GameObjectExtensions__SetLocalPosition(v6, this->fields.costLabelPos, 0LL);
  v11 = (UIWidget_o *)this->fields.costLabel;
  if ( !v11 )
    goto LABEL_6;
  v14.fields.r = v11->fields.mColor.fields.r;
  v14.fields.g = v11->fields.mColor.fields.g;
  v14.fields.b = v11->fields.mColor.fields.b;
  v14.fields.a = 0.0;
  *(_QWORD *)&v13.fields.r = 0LL;
  *(_QWORD *)&v13.fields.b = 0LL;
  UnityEngine_Color___ctor(v14, v7, v8, v9, v10, (const MethodInfo *)&v13);
  UIWidget__set_color(v11, v13, 0LL);
  movePoint = this->fields.movePoint;
  if ( !movePoint )
LABEL_6:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(movePoint, 0, 0LL);
}


bool __fastcall WarBoardSquareComponent__GetButtonIsEnable(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  struct UIButton_o *button; // x0

  button = this->fields.button;
  if ( !button )
    sub_B170D4();
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

  if ( (byte_40FBAD3 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FBAD3 = 1;
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
    UnityEngine_Object__Destroy_34809464(v4, 0LL);
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
    UnityEngine_Object__Destroy_34809464(v6, 0LL);
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
    UnityEngine_Object__Destroy_34809464(v8, 0LL);
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
  struct System_Collections_Generic_Dictionary_string__GameObject__o *dicEffect; // x0
  struct WarBoardSquareData_o **p_squareData; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UISprite_o *squareImage; // x0
  UISprite_o *v21; // x0
  UISprite_o *squareSubImage; // x0
  UISprite_o *v23; // x0
  UnityEngine_Transform_o *transform; // x22
  WebViewManager_o *Instance; // x0
  int v26; // s0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct WarBoardSquareData_o *v35; // x0
  UILabel_o *costLabel; // x20
  WebViewManager_o *v37; // x0
  UnityEngine_Component_o *v38; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_Component_o *v42; // x0
  UnityEngine_GameObject_o *v43; // x0
  float v44; // s4
  float v45; // s5
  float v46; // s6
  float v47; // s7
  UIWidget_o *v48; // x20
  UnityEngine_GameObject_o *v49; // x0
  struct SimpleAnimation_o *Component_srcLineSprite; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  UnityEngine_GameObject_o *selectMarker; // x0
  UnityEngine_GameObject_o *v58; // x0
  struct CommonEffectComponent_o *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  UnityEngine_GameObject_o *selectCircle; // x0
  UnityEngine_GameObject_o *v67; // x0
  struct CommonEffectComponent_o *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  UnityEngine_GameObject_o *battleTargetPlayer; // x0
  UnityEngine_GameObject_o *v76; // x0
  struct CommonEffectComponent_o *v77; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  UnityEngine_GameObject_o *battleTargetEnemy; // x0
  UnityEngine_GameObject_o *v85; // x0
  struct CommonEffectComponent_o *v86; // x0
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  const MethodInfo *v93; // x2
  const MethodInfo *v94; // x1
  struct UISprite_o *v95; // x0
  UIWidget_o *v96; // x0
  struct UISprite_o *v97; // x0
  UIWidget_o *v98; // x0
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v100; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v101; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FBAC7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__, imageSetAtlas);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_B16FFC(&StringLiteral_22153, v10);
    sub_B16FFC(&StringLiteral_22154, v11);
    byte_40FBAC7 = 1;
  }
  dicEffect = this->fields.dicEffect;
  if ( !dicEffect )
    goto LABEL_33;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dicEffect,
    (const MethodInfo_2DA3DF4 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
  this->fields.squareData = data;
  p_squareData = &this->fields.squareData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.squareData,
    (System_Int32_array **)data,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  squareImage = this->fields.squareImage;
  if ( !squareImage )
    goto LABEL_33;
  UISprite__set_atlas(squareImage, imageSetAtlas, 0LL);
  v21 = this->fields.squareImage;
  if ( !v21 )
    goto LABEL_33;
  UISprite__set_spriteName(v21, (System_String_o *)StringLiteral_22153, 0LL);
  squareSubImage = this->fields.squareSubImage;
  if ( !squareSubImage )
    goto LABEL_33;
  UISprite__set_atlas(squareSubImage, imageSetAtlas, 0LL);
  v23 = this->fields.squareSubImage;
  if ( !v23 )
    goto LABEL_33;
  UISprite__set_spriteName(v23, (System_String_o *)StringLiteral_22154, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !data )
    goto LABEL_33;
  if ( !Instance )
    goto LABEL_33;
  *(UnityEngine_Vector3_o *)&v26 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)Instance,
                                     data->fields._squareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_33;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v26, 0LL);
  v35 = *p_squareData;
  if ( !*p_squareData )
    goto LABEL_33;
  v35->fields.squareComponent = this;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v35->fields.squareComponent,
    (System_Int32_array **)this,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  costLabel = this->fields.costLabel;
  v37 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v37 )
    goto LABEL_33;
  if ( !costLabel )
    goto LABEL_33;
  UILabel__set_bitmapFont(costLabel, (UIFont_o *)v37[2].fields.commonCamera, 0LL);
  v38 = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !v38 )
    goto LABEL_33;
  gameObject = UnityEngine_Component__get_gameObject(v38, 0LL);
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v40 = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !v40 )
    goto LABEL_33;
  v41 = UnityEngine_Component__get_gameObject(v40, 0LL);
  GameObjectExtensions__SetLocalPosition(v41, this->fields.costLabelPos, 0LL);
  v42 = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !v42 )
    goto LABEL_33;
  v43 = UnityEngine_Component__get_gameObject(v42, 0LL);
  GameObjectExtensions__ResetLocalScale(v43, 0LL);
  v48 = (UIWidget_o *)this->fields.costLabel;
  if ( !v48 )
    goto LABEL_33;
  v100.fields.r = v48->fields.mColor.fields.r;
  v100.fields.g = v48->fields.mColor.fields.g;
  v100.fields.b = v48->fields.mColor.fields.b;
  v100.fields.a = 0.0;
  var40.methodPointer = 0LL;
  var40.invoker_method = 0LL;
  UnityEngine_Color___ctor(v100, v44, v45, v46, v47, &var40);
  *(_QWORD *)&v101.fields.r = var40.methodPointer;
  *(_QWORD *)&v101.fields.b = var40.invoker_method;
  UIWidget__set_color(v48, v101, 0LL);
  v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v49 )
    goto LABEL_33;
  Component_srcLineSprite = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          v49,
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = Component_srcLineSprite;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimation,
    (System_Int32_array **)Component_srcLineSprite,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  selectMarker = this->fields.selectMarker;
  if ( !selectMarker )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(selectMarker, 0, 0LL);
  v58 = this->fields.selectMarker;
  if ( !v58 )
    goto LABEL_33;
  v59 = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v58,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.selectMarkerCommonEffect = v59;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.selectMarkerCommonEffect,
    (System_Int32_array **)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  selectCircle = this->fields.selectCircle;
  if ( !selectCircle )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(selectCircle, 0, 0LL);
  v67 = this->fields.selectCircle;
  if ( !v67 )
    goto LABEL_33;
  v68 = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v67,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.selectCircleCommonEffect = v68;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.selectCircleCommonEffect,
    (System_Int32_array **)v68,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  battleTargetPlayer = this->fields.battleTargetPlayer;
  if ( !battleTargetPlayer )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(battleTargetPlayer, 0, 0LL);
  v76 = this->fields.battleTargetPlayer;
  if ( !v76 )
    goto LABEL_33;
  v77 = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v76,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.battleTargetPlayerCommonEffect = v77;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.battleTargetPlayerCommonEffect,
    (System_Int32_array **)v77,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  battleTargetEnemy = this->fields.battleTargetEnemy;
  if ( !battleTargetEnemy )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(battleTargetEnemy, 0, 0LL);
  v85 = this->fields.battleTargetEnemy;
  if ( !v85 )
    goto LABEL_33;
  v86 = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v85,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.battleTargetEnemyCommonEffect = v86;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.battleTargetEnemyCommonEffect,
    (System_Int32_array **)v86,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  WarBoardSquareComponent__SetMovePoint(this, 1, v93);
  this->fields.isSelectable = 0;
  WarBoardSquareComponent__SetSprite(this, v94);
  v95 = this->fields.squareImage;
  if ( !v95
    || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v95->klass->vtable._33_MakePixelPerfect.method)(
          v95,
          v95->klass->vtable._34_get_minWidth.methodPtr),
        (v96 = (UIWidget_o *)this->fields.squareImage) == 0LL)
    || (UIWidget__ResizeCollider(v96, 0LL), (v97 = this->fields.squareSubImage) == 0LL)
    || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v97->klass->vtable._33_MakePixelPerfect.method)(
          v97,
          v97->klass->vtable._34_get_minWidth.methodPtr),
        (v98 = (UIWidget_o *)this->fields.squareSubImage) == 0LL) )
  {
LABEL_33:
    sub_B170D4();
  }
  UIWidget__ResizeCollider(v98, 0LL);
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
  __int64 v10; // x3
  __int64 v11; // x4
  struct CommonEffectComponent_o *battleTargetPlayerCommonEffect; // x20
  System_Action_o *v13; // x0
  __int64 *v14; // x8
  UnityEngine_GameObject_o *battleTargetEnemy; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Action_o *v20; // x21

  if ( (byte_40FBAD4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isPlayerForce);
    sub_B16FFC(&Method_WarBoardSquareComponent__NondispBattleRange_b__57_0__, v5);
    sub_B16FFC(&Method_WarBoardSquareComponent__NondispBattleRange_b__57_1__, v6);
    byte_40FBAD4 = 1;
  }
  if ( isPlayerForce )
  {
    battleTargetPlayer = this->fields.battleTargetPlayer;
    if ( !battleTargetPlayer )
      goto LABEL_13;
    if ( UnityEngine_GameObject__get_activeSelf(battleTargetPlayer, 0LL) )
    {
      battleTargetPlayerCommonEffect = this->fields.battleTargetPlayerCommonEffect;
      v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
      v14 = &Method_WarBoardSquareComponent__NondispBattleRange_b__57_0__;
      goto LABEL_10;
    }
  }
  else
  {
    battleTargetEnemy = this->fields.battleTargetEnemy;
    if ( !battleTargetEnemy )
      goto LABEL_13;
    if ( UnityEngine_GameObject__get_activeSelf(battleTargetEnemy, 0LL) )
    {
      battleTargetPlayerCommonEffect = this->fields.battleTargetEnemyCommonEffect;
      v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
      v14 = &Method_WarBoardSquareComponent__NondispBattleRange_b__57_1__;
LABEL_10:
      v20 = v13;
      System_Action___ctor(v13, (Il2CppObject *)this, *v14, 0LL);
      if ( battleTargetPlayerCommonEffect )
      {
        ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))battleTargetPlayerCommonEffect->klass->vtable._8_Stop.method)(
          battleTargetPlayerCommonEffect,
          0LL,
          v20,
          battleTargetPlayerCommonEffect->klass->vtable._9_ForceStop.methodPtr);
        return;
      }
LABEL_13:
      sub_B170D4();
    }
  }
}


void __fastcall WarBoardSquareComponent__OnClickSquare(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  struct WarBoardSquareData_o *squareData; // x8
  WarBoardManager_o *v6; // x19
  WarBoardData_o *monitor; // x0
  WarBoardPieceData_o *Piece_22604968; // x0
  struct WarBoardSquareData_o *v9; // x8
  WarBoardPieceData_o *v10; // x21
  WarBoardData_o *warBoardData_k__BackingField; // x0
  WarBoardItemData_o *Item; // x0
  struct WarBoardSquareData_o *v13; // x8
  WarBoardItemData_o *v14; // x22
  WarBoardData_o *v15; // x0
  WarBoardEffectData_o *Effect; // x23
  WebViewManager_o *v17; // x0
  void *v18; // x8
  System_String_o *v19; // x21
  struct WarBoardSquareData_o *v20; // x8
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0
  WarBoardEffectComponent_o *v22; // x0
  WarBoardItemComponent_o *component; // x0

  if ( (byte_40FBAD5 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FBAD5 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_32;
  v6 = (WarBoardManager_o *)Instance;
  monitor = (WarBoardData_o *)Instance[4].monitor;
  if ( !monitor )
    goto LABEL_32;
  Piece_22604968 = WarBoardData__GetPiece_22604968(monitor, squareData->fields._squareIndex_k__BackingField, 0LL);
  v9 = this->fields.squareData;
  if ( !v9 )
    goto LABEL_32;
  v10 = Piece_22604968;
  warBoardData_k__BackingField = v6->fields._warBoardData_k__BackingField;
  if ( !warBoardData_k__BackingField )
    goto LABEL_32;
  Item = WarBoardData__GetItem(warBoardData_k__BackingField, v9->fields._squareIndex_k__BackingField, 0LL);
  v13 = this->fields.squareData;
  if ( !v13 )
    goto LABEL_32;
  v14 = Item;
  v15 = v6->fields._warBoardData_k__BackingField;
  if ( !v15 )
    goto LABEL_32;
  Effect = WarBoardData__GetEffect(v15, v13->fields._squareIndex_k__BackingField, 0LL);
  if ( WarBoardManager__get_isSelectedPiece(v6, 0LL) && this->fields.isSelectable )
  {
    if ( !v10 || !WarBoardManager__IsSelectedPieceSame(v6, v10, 0LL) )
    {
      v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( v17 )
      {
        v18 = v17[3].monitor;
        if ( v18 )
        {
          v19 = (System_String_o *)*((_QWORD *)v18 + 3);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSe(v19, 0LL);
          v20 = this->fields.squareData;
          if ( v20 )
          {
            WarBoardManager__SelectedPieceAction(v6, v20->fields._squareIndex_k__BackingField, 0LL);
            return;
          }
        }
      }
LABEL_32:
      sub_B170D4();
    }
    goto LABEL_22;
  }
  if ( v10 )
  {
LABEL_22:
    pieceComponent = v10->fields.pieceComponent;
    if ( !pieceComponent )
      goto LABEL_32;
    ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._6_ClickIcon.method)(
      pieceComponent,
      pieceComponent->klass->vtable._7_LongTapIcon.methodPtr);
    return;
  }
  if ( v14 && !WarBoardItemData__get_Acquired(v14, 0LL) )
  {
    component = v14->fields.component;
    if ( !component )
      goto LABEL_32;
    WarBoardItemComponent__OnClick(component, 0LL);
  }
  else if ( Effect )
  {
    v22 = Effect->fields.component;
    if ( !v22 )
      goto LABEL_32;
    WarBoardEffectComponent__OnClick(v22, 0LL);
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
  __int64 v7; // x3
  __int64 v8; // x4
  struct CommonEffectComponent_o *selectCircleCommonEffect; // x20
  System_Action_o *v10; // x21

  if ( (byte_40FBAD0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_WarBoardSquareComponent__OnDeselect_b__49_0__, v3);
    byte_40FBAD0 = 1;
  }
  selectCircle = this->fields.selectCircle;
  if ( !selectCircle )
    goto LABEL_8;
  if ( UnityEngine_GameObject__get_activeSelf(selectCircle, 0LL) )
  {
    selectCircleCommonEffect = this->fields.selectCircleCommonEffect;
    v10 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v5, v6, v7, v8);
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
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareComponent__OnEffectDisp(
        WarBoardSquareComponent_o *this,
        int32_t effectId,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Delegate_o *v30; // x23
  WarBoardTaskBase_TaskCallback_o *v31; // x24
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  WebViewManager_o *Instance; // x19
  __int64 v40; // x2
  __int64 v41; // x0
  __int64 v42; // x21
  __int64 v43; // x0
  __int64 v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7

  if ( (byte_40FBAD7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, *(_QWORD *)&effectId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_B16FFC(&WarBoardTaskBase_TaskCallback_TypeInfo, v9);
    sub_B16FFC(&Method_WarBoardSquareComponent___c__DisplayClass60_0__OnEffectDisp_b__0__, v10);
    sub_B16FFC(&WarBoardSquareComponent___c__DisplayClass60_0_TypeInfo, v11);
    sub_B16FFC(&WarBoardCallbackTask_TypeInfo, v12);
    sub_B16FFC(&WarBoardTaskBase___TypeInfo, v13);
    byte_40FBAD7 = 1;
  }
  v14 = sub_B170CC(WarBoardSquareComponent___c__DisplayClass60_0_TypeInfo, *(_QWORD *)&effectId, taskList, method, v4);
  WarBoardSquareComponent___c__DisplayClass60_0___ctor((WarBoardSquareComponent___c__DisplayClass60_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_14;
  *(_QWORD *)(v14 + 24) = this;
  *(_DWORD *)(v14 + 16) = effectId;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 24), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  v25 = sub_B170CC(WarBoardCallbackTask_TypeInfo, v21, v22, v23, v24);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v25, 0LL, 0LL);
  if ( !v25 )
    goto LABEL_14;
  v30 = *(System_Delegate_o **)(v25 + 32);
  v31 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(WarBoardTaskBase_TaskCallback_TypeInfo, v26, v27, v28, v29);
  WarBoardTaskBase_TaskCallback___ctor(
    v31,
    (Il2CppObject *)v14,
    Method_WarBoardSquareComponent___c__DisplayClass60_0__OnEffectDisp_b__0__,
    0LL);
  v32 = (System_Int32_array **)System_Delegate__Combine(v30, (System_Delegate_o *)v31, 0LL);
  if ( v32 && *v32 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v43 = sub_B173C8(v32);
LABEL_16:
    sub_B170F4(v43);
    sub_B170A0();
  }
  *(_QWORD *)(v25 + 32) = v32;
  sub_B16F98((BattleServantConfConponent_o *)(v25 + 32), v32, v33, v34, v35, v36, v37, v38);
  if ( taskList )
  {
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    return;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v41 = sub_B17014(WarBoardTaskBase___TypeInfo, 1LL, v40);
  if ( !v41 )
LABEL_14:
    sub_B170D4();
  v42 = v41;
  v43 = sub_B170BC(v25, *(_QWORD *)(*(_QWORD *)v41 + 64LL));
  if ( !v43 )
    goto LABEL_16;
  if ( !*(_DWORD *)(v42 + 24) )
  {
    sub_B17100(v43, v44, v45);
    sub_B170A0();
  }
  *(_QWORD *)(v42 + 32) = v25;
  sub_B16F98((BattleServantConfConponent_o *)(v42 + 32), (System_Int32_array **)v25, v45, v46, v47, v48, v49, v50);
  if ( !Instance )
    goto LABEL_14;
  WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v42, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareComponent__OnEffectHide(
        WarBoardSquareComponent_o *this,
        int32_t effectId,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
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
  __int64 v27; // x2
  __int64 v28; // x0
  __int64 v29; // x21
  __int64 v30; // x0
  __int64 v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_40FBAD8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, *(_QWORD *)&effectId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    sub_B16FFC(&WarBoardTaskBase_TaskCallback_TypeInfo, v8);
    sub_B16FFC(&WarBoardCallbackTask_TypeInfo, v9);
    sub_B16FFC(&Method_WarBoardSquareComponent__OnEffectHide_b__61_0__, v10);
    sub_B16FFC(&WarBoardTaskBase___TypeInfo, v11);
    byte_40FBAD8 = 1;
  }
  v12 = sub_B170CC(WarBoardCallbackTask_TypeInfo, *(_QWORD *)&effectId, taskList, method, v4);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v12, 0LL, 0LL);
  if ( !v12 )
    goto LABEL_13;
  v17 = *(System_Delegate_o **)(v12 + 32);
  v18 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(WarBoardTaskBase_TaskCallback_TypeInfo, v13, v14, v15, v16);
  WarBoardTaskBase_TaskCallback___ctor(
    v18,
    (Il2CppObject *)this,
    Method_WarBoardSquareComponent__OnEffectHide_b__61_0__,
    0LL);
  v19 = (System_Int32_array **)System_Delegate__Combine(v17, (System_Delegate_o *)v18, 0LL);
  if ( v19 && *v19 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v30 = sub_B173C8(v19);
LABEL_15:
    sub_B170F4(v30);
    sub_B170A0();
  }
  *(_QWORD *)(v12 + 32) = v19;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 32), v19, v20, v21, v22, v23, v24, v25);
  if ( taskList )
  {
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    return;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v28 = sub_B17014(WarBoardTaskBase___TypeInfo, 1LL, v27);
  if ( !v28 )
LABEL_13:
    sub_B170D4();
  v29 = v28;
  v30 = sub_B170BC(v12, *(_QWORD *)(*(_QWORD *)v28 + 64LL));
  if ( !v30 )
    goto LABEL_15;
  if ( !*(_DWORD *)(v29 + 24) )
  {
    sub_B17100(v30, v31, v32);
    sub_B170A0();
  }
  *(_QWORD *)(v29 + 32) = v12;
  sub_B16F98((BattleServantConfConponent_o *)(v29 + 32), (System_Int32_array **)v12, v32, v33, v34, v35, v36, v37);
  if ( !Instance )
    goto LABEL_13;
  WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v29, 0LL);
}


void __fastcall WarBoardSquareComponent__OnLongClickSquare(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  struct WarBoardSquareData_o *squareData; // x8
  WarBoardManager_o *v5; // x19
  WarBoardData_o *monitor; // x0
  WarBoardPieceData_o *Piece_22604968; // x0
  struct WarBoardSquareData_o *v8; // x8
  WarBoardPieceData_o *v9; // x21
  WarBoardData_o *warBoardData_k__BackingField; // x0
  WarBoardItemData_o *Item; // x0
  struct WarBoardSquareData_o *v12; // x8
  WarBoardItemData_o *v13; // x20
  WarBoardData_o *v14; // x0
  WarBoardEffectData_o *Effect; // x0
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0
  WarBoardEffectData_o *v17; // x22
  WarBoardEffectComponent_o *v18; // x0
  WarBoardItemComponent_o *component; // x0

  if ( (byte_40FBAD6 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40FBAD6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_21;
  v5 = (WarBoardManager_o *)Instance;
  monitor = (WarBoardData_o *)Instance[4].monitor;
  if ( !monitor )
    goto LABEL_21;
  Piece_22604968 = WarBoardData__GetPiece_22604968(monitor, squareData->fields._squareIndex_k__BackingField, 0LL);
  v8 = this->fields.squareData;
  if ( !v8 )
    goto LABEL_21;
  v9 = Piece_22604968;
  warBoardData_k__BackingField = v5->fields._warBoardData_k__BackingField;
  if ( !warBoardData_k__BackingField )
    goto LABEL_21;
  Item = WarBoardData__GetItem(warBoardData_k__BackingField, v8->fields._squareIndex_k__BackingField, 0LL);
  v12 = this->fields.squareData;
  if ( !v12 )
    goto LABEL_21;
  v13 = Item;
  v14 = v5->fields._warBoardData_k__BackingField;
  if ( !v14 )
    goto LABEL_21;
  Effect = WarBoardData__GetEffect(v14, v12->fields._squareIndex_k__BackingField, 0LL);
  if ( v9 )
  {
    pieceComponent = v9->fields.pieceComponent;
    if ( pieceComponent )
    {
      ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._7_LongTapIcon.method)(
        pieceComponent,
        pieceComponent->klass->vtable._8_ShowActionCount.methodPtr);
      return;
    }
LABEL_21:
    sub_B170D4();
  }
  v17 = Effect;
  if ( v13 && !WarBoardItemData__get_Acquired(v13, 0LL) )
  {
    component = v13->fields.component;
    if ( !component )
      goto LABEL_21;
    WarBoardItemComponent__OnLongClick(component, 0LL);
  }
  else if ( v17 )
  {
    v18 = v17->fields.component;
    if ( !v18 )
      goto LABEL_21;
    WarBoardEffectComponent__OnLongClick(v18, 0LL);
  }
  else
  {
    WarBoardManager__HideSimplePopup(v5, 0LL, 0LL);
  }
}


void __fastcall WarBoardSquareComponent__OnSelect(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectCircle; // x0
  struct CommonEffectComponent_o *selectCircleCommonEffect; // x0

  selectCircle = this->fields.selectCircle;
  if ( !selectCircle
    || (UnityEngine_GameObject__SetActive(selectCircle, 1, 0LL),
        (selectCircleCommonEffect = this->fields.selectCircleCommonEffect) == 0LL) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct CommonEffectComponent_o *, __int64, _QWORD, Il2CppMethodPointer))selectCircleCommonEffect->klass->vtable._6_ForceStart.method)(
    selectCircleCommonEffect,
    1LL,
    0LL,
    selectCircleCommonEffect->klass->vtable._7_ForceLoop.methodPtr);
}


bool __fastcall WarBoardSquareComponent__PlayEffect(
        WarBoardSquareComponent_o *this,
        System_String_o *effectKey,
        System_String_o *prefix,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x20
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
  WebViewManager_o *Instance; // x0
  System_Int32_array **CommonEffectAsset_object; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UnityEngine_Object_o *v48; // x21
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  System_Action_o *v54; // x21
  UnityEngine_Object_o *uiDataComp; // x20
  WarBoardControlUiDataComponent_o *v56; // x0
  unsigned int v57; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FBAD9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, effectKey);
    sub_B16FFC(&Method_System_Array_Empty_object___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_B16FFC(&Method_WarBoardSquareComponent___c__DisplayClass62_0__PlayEffect_b__0__, v11);
    sub_B16FFC(&WarBoardSquareComponent___c__DisplayClass62_0_TypeInfo, v12);
    sub_B16FFC(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v13);
    byte_40FBAD9 = 1;
  }
  v57 = 0;
  v14 = sub_B170CC(WarBoardSquareComponent___c__DisplayClass62_0_TypeInfo, effectKey, prefix, method, v4);
  WarBoardSquareComponent___c__DisplayClass62_0___ctor((WarBoardSquareComponent___c__DisplayClass62_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_34;
  *(_QWORD *)(v14 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 24), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  v21 = (System_Int32_array **)System_String__Concat_43743732(prefix, effectKey, 0LL);
  *(_QWORD *)(v14 + 32) = v21;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 32), v21, v22, v23, v24, v25, v26, v27);
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_34;
  imageId_k__BackingField = squareData->fields._imageId_k__BackingField;
  if ( imageId_k__BackingField >= 0 )
    v30 = imageId_k__BackingField;
  else
    v30 = imageId_k__BackingField + 1;
  v57 = imageId_k__BackingField - (v30 & 0xFFFFFFFE);
  v31 = System_Int32__ToString((int32_t)&v57, 0LL);
  v32 = System_String__Concat_43743732(effectKey, v31, 0LL);
  v33 = (_QWORD **)Method_System_Array_Empty_object___;
  v34 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
  v35 = *(_WORD *)(v34 + 306);
  if ( (v35 & 1) == 0 )
  {
    sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
    v35 = *(_WORD *)(v34 + 306);
  }
  if ( (v35 & 0x400) != 0 )
  {
    v36 = *v33[6];
    if ( (*(_BYTE *)(v36 + 306) & 1) == 0 )
      sub_AAFCFC(*v33[6]);
    if ( !*(_DWORD *)(v36 + 224) )
    {
      v37 = *v33[6];
      if ( (*(_BYTE *)(v37 + 306) & 1) == 0 )
        sub_AAFCFC(*v33[6]);
      j_il2cpp_runtime_class_init_0(v37);
    }
  }
  v38 = *v33[6];
  if ( (*(_BYTE *)(v38 + 306) & 1) == 0 )
    sub_AAFCFC(*v33[6]);
  v39 = System_String__Format_43822456(v32, **(System_Object_array ***)(v38 + 184), 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  CommonEffectAsset_object = (System_Int32_array **)WarBoardManager__GetCommonEffectAsset_object_(
                                                      (WarBoardManager_o *)Instance,
                                                      v39,
                                                      (const MethodInfo_2266354 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  *(_QWORD *)(v14 + 16) = CommonEffectAsset_object;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), CommonEffectAsset_object, v42, v43, v44, v45, v46, v47);
  v48 = *(UnityEngine_Object_o **)(v14 + 16);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v48, 0LL, 0LL) )
    return 0;
  v54 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v49, v50, v51, v52);
  System_Action___ctor(
    v54,
    (Il2CppObject *)v14,
    Method_WarBoardSquareComponent___c__DisplayClass62_0__PlayEffect_b__0__,
    0LL);
  uiDataComp = (UnityEngine_Object_o *)this->fields.uiDataComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(uiDataComp, 0LL, 0LL) )
  {
    if ( v54 )
    {
      System_Action__Invoke(v54, 0LL);
      return 1;
    }
LABEL_34:
    sub_B170D4();
  }
  v56 = this->fields.uiDataComp;
  if ( !v56 )
    goto LABEL_34;
  WarBoardControlUiDataComponent__SyncAnimation(v56, v54, 0LL);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareComponent__PlayUnDispCostAnim(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *costLabel; // x0
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
  System_Int32_array **v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct TweenScale_o *v34; // x0
  System_Int32_array **v35; // x1

  if ( (byte_40FBAD1 & 1) == 0 )
  {
    sub_B16FFC(&Method_UITweener_Begin_TweenScale___, method);
    sub_B16FFC(&StringLiteral_10660, v3);
    byte_40FBAD1 = 1;
  }
  costLabel = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_10;
  gameObject = UnityEngine_Component__get_gameObject(costLabel, 0LL);
  v6 = (struct TweenScale_o *)UITweener__Begin_TweenWidth_(
                                gameObject,
                                this->fields.costAnimScaleTime,
                                (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenScale___);
  p_tweenScale = &this->fields.tweenScale;
  this->fields.tweenScale = v6;
  sub_B16F98(
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
        v21 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        !v20)
    || (v20->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v21,
        sub_B16F98((BattleServantConfConponent_o *)&v20->fields.eventReceiver, v21, v22, v23, v24, v25, v26, v27),
        (v34 = *p_tweenScale) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  v35 = (System_Int32_array **)StringLiteral_10660;
  v34->fields.callWhenFinished = (struct System_String_o *)StringLiteral_10660;
  sub_B16F98((BattleServantConfConponent_o *)&v34->fields.callWhenFinished, v35, v28, v29, v30, v31, v32, v33);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareComponent__PlayUnDispCostAnim2(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Component_o *costLabel; // x0
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
  System_Int32_array **v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_Component_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  struct TweenScale_o *v30; // x0
  struct TweenScale_o **p_tweenScale; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct TweenScale_o *tweenScale; // x8
  float costAnimScale; // w9
  struct TweenScale_o *v40; // x21
  float v41; // s0
  float v42; // s1
  float v43; // s2
  struct TweenScale_o *v44; // x20
  System_Int32_array **v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  UnityEngine_Component_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x0
  struct TweenAlpha_o *v54; // x0
  struct TweenAlpha_o **p_tweenAlpha; // x20
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct TweenAlpha_o *tweenAlpha; // x8
  struct TweenAlpha_o *v63; // x21
  System_Int32_array **v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  struct TweenAlpha_o *v77; // x0
  System_Int32_array **v78; // x1

  if ( (byte_40FBAD2 & 1) == 0 )
  {
    sub_B16FFC(&Method_UITweener_Begin_TweenAlpha___, method);
    sub_B16FFC(&Method_UITweener_Begin_TweenPosition___, v3);
    sub_B16FFC(&Method_UITweener_Begin_TweenScale___, v4);
    sub_B16FFC(&StringLiteral_6655, v5);
    byte_40FBAD2 = 1;
  }
  costLabel = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_20;
  gameObject = UnityEngine_Component__get_gameObject(costLabel, 0LL);
  v8 = (struct TweenPosition_o *)UITweener__Begin_TweenWidth_(
                                   gameObject,
                                   this->fields.costAnimFadeTime,
                                   (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenPosition___);
  this->fields.tweenPosition = v8;
  sub_B16F98(
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
  v21 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v20 )
    goto LABEL_20;
  v20->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v21;
  sub_B16F98((BattleServantConfConponent_o *)&v20->fields.eventReceiver, v21, v22, v23, v24, v25, v26, v27);
  v28 = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !v28 )
    goto LABEL_20;
  v29 = UnityEngine_Component__get_gameObject(v28, 0LL);
  v30 = (struct TweenScale_o *)UITweener__Begin_TweenWidth_(
                                 v29,
                                 this->fields.costAnimFadeTime,
                                 (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenScale___);
  p_tweenScale = &this->fields.tweenScale;
  this->fields.tweenScale = v30;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tweenScale,
    (System_Int32_array **)v30,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  tweenScale = this->fields.tweenScale;
  if ( !tweenScale )
    goto LABEL_20;
  costAnimScale = this->fields.costAnimScale;
  tweenScale->fields.from.fields.x = costAnimScale;
  tweenScale->fields.from.fields.y = costAnimScale;
  tweenScale->fields.from.fields.z = costAnimScale;
  v40 = *p_tweenScale;
  *(UnityEngine_Vector3_o *)&v41 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v40 )
    goto LABEL_20;
  v40->fields.to.fields.x = v41;
  v40->fields.to.fields.y = v42;
  v40->fields.to.fields.z = v43;
  if ( !*p_tweenScale )
    goto LABEL_20;
  (*p_tweenScale)->fields.style = 0;
  v44 = this->fields.tweenScale;
  v45 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v44 )
    goto LABEL_20;
  v44->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v45;
  sub_B16F98((BattleServantConfConponent_o *)&v44->fields.eventReceiver, v45, v46, v47, v48, v49, v50, v51);
  v52 = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !v52 )
    goto LABEL_20;
  v53 = UnityEngine_Component__get_gameObject(v52, 0LL);
  v54 = (struct TweenAlpha_o *)UITweener__Begin_TweenWidth_(
                                 v53,
                                 this->fields.costAnimFadeTime,
                                 (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenAlpha___);
  p_tweenAlpha = &this->fields.tweenAlpha;
  this->fields.tweenAlpha = v54;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tweenAlpha,
    (System_Int32_array **)v54,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  tweenAlpha = this->fields.tweenAlpha;
  if ( !tweenAlpha )
    goto LABEL_20;
  tweenAlpha->fields.from = 1.0;
  if ( !*p_tweenAlpha
    || ((*p_tweenAlpha)->fields.to = 0.0, !*p_tweenAlpha)
    || ((*p_tweenAlpha)->fields.style = 0,
        v63 = this->fields.tweenAlpha,
        v64 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        !v63)
    || (v63->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v64,
        sub_B16F98((BattleServantConfConponent_o *)&v63->fields.eventReceiver, v64, v65, v66, v67, v68, v69, v70),
        (v77 = *p_tweenAlpha) == 0LL) )
  {
LABEL_20:
    sub_B170D4();
  }
  v78 = (System_Int32_array **)StringLiteral_6655;
  v77->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6655;
  sub_B16F98((BattleServantConfConponent_o *)&v77->fields.callWhenFinished, v78, v71, v72, v73, v74, v75, v76);
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
  UIWidget_o *costLabel; // x21
  UnityEngine_Component_o *v10; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_GameObject_o *movePoint; // x0
  struct CommonEffectComponent_o *movePointCommonEffect; // x0
  UnityEngine_Color_o v16; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !isOnActionPiece )
  {
    costLabel = (UIWidget_o *)this->fields.costLabel;
    if ( !costLabel )
      goto LABEL_9;
    v17.fields.r = costLabel->fields.mColor.fields.r;
    v17.fields.g = costLabel->fields.mColor.fields.g;
    v17.fields.b = costLabel->fields.mColor.fields.b;
    v17.fields.a = 1.0;
    *(_QWORD *)&v16.fields.r = 0LL;
    *(_QWORD *)&v16.fields.b = 0LL;
    UnityEngine_Color___ctor(v17, v3, v4, v5, v6, (const MethodInfo *)&v16);
    UIWidget__set_color(costLabel, v16, 0LL);
  }
  v10 = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !v10 )
    goto LABEL_9;
  gameObject = UnityEngine_Component__get_gameObject(v10, 0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.costLabelPos, 0LL);
  v12 = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !v12
    || (v13 = UnityEngine_Component__get_gameObject(v12, 0LL),
        GameObjectExtensions__ResetLocalScale(v13, 0LL),
        movePoint = this->fields.movePoint,
        this->fields.isSelectable = !isOnActionPiece,
        !movePoint)
    || (UnityEngine_GameObject__SetActive(movePoint, 1, 0LL),
        (movePointCommonEffect = this->fields.movePointCommonEffect) == 0LL) )
  {
LABEL_9:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct CommonEffectComponent_o *, __int64, _QWORD, Il2CppMethodPointer))movePointCommonEffect->klass->vtable._6_ForceStart.method)(
    movePointCommonEffect,
    1LL,
    0LL,
    movePointCommonEffect->klass->vtable._7_ForceLoop.methodPtr);
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
  struct UIButton_o *v8; // x0
  UIButton_c *klass; // x8
  int32_t mState; // w20
  struct UIButton_o *v11; // x0
  struct UIButton_o *v12; // x0
  struct UIButton_o *v13; // x0
  struct UIButton_o *v14; // x0

  if ( (byte_40FBACF & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, enable);
    byte_40FBACF = 1;
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
          mState = v7->fields.mState;
          ((void (__fastcall *)(struct UIButton_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._5_set_isEnabled.method)(
            v7,
            0LL,
            v7->klass->vtable._6_OnInit.methodPtr);
          if ( mState )
          {
            v11 = this->fields.subButton;
            if ( v11 )
            {
              klass = v11->klass;
              goto LABEL_19;
            }
          }
          else
          {
            v12 = this->fields.button;
            if ( v12 )
            {
              ((void (__fastcall *)(struct UIButton_o *, _QWORD, __int64, Il2CppMethodPointer))v12->klass->vtable._14_SetState.method)(
                v12,
                0LL,
                1LL,
                v12->klass->vtable._15_OnClick.methodPtr);
              v13 = this->fields.subButton;
              if ( v13 )
              {
                ((void (__fastcall *)(struct UIButton_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._5_set_isEnabled.method)(
                  v13,
                  0LL,
                  v13->klass->vtable._6_OnInit.methodPtr);
                v14 = this->fields.subButton;
                if ( v14 )
                {
                  ((void (__fastcall *)(struct UIButton_o *, _QWORD, __int64, Il2CppMethodPointer))v14->klass->vtable._14_SetState.method)(
                    v14,
                    0LL,
                    1LL,
                    v14->klass->vtable._15_OnClick.methodPtr);
                  return;
                }
              }
            }
          }
        }
      }
      sub_B170D4();
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
  UnityEngine_Component_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x0
  float v21; // s4
  float v22; // s5
  float v23; // s6
  float v24; // s7
  UIWidget_o *v25; // x21
  UILabel_o *v26; // x0
  UILabel_o *v27; // x0
  UILabel_o *v28; // x0
  UILabel_o *v29; // x20
  System_String_o *v30; // x21
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  MethodInfo v33; // [xsp+0h] [xbp-70h] BYREF
  int32_t v34; // [xsp+5Ch] [xbp-14h] BYREF
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = gradientBottom.fields.a;
  b = gradientBottom.fields.b;
  g = gradientBottom.fields.g;
  r = gradientBottom.fields.r;
  v9 = gradientTop.fields.a;
  v10 = gradientTop.fields.b;
  v11 = gradientTop.fields.g;
  v12 = gradientTop.fields.r;
  if ( (byte_40FBACD & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&cost);
    sub_B16FFC(&LocalizationManager_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_15228, v16);
    byte_40FBACD = 1;
  }
  WarBoardSquareComponent__InitCostAnim(this, *(const MethodInfo **)&cost);
  costLabel = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject(costLabel, 0LL);
  GameObjectExtensions__ResetLocalScale(gameObject, 0LL);
  v19 = (UnityEngine_Component_o *)this->fields.costLabel;
  if ( !v19 )
    goto LABEL_14;
  v20 = UnityEngine_Component__get_gameObject(v19, 0LL);
  GameObjectExtensions__SetLocalPosition(v20, this->fields.costLabelPos, 0LL);
  v25 = (UIWidget_o *)this->fields.costLabel;
  if ( !v25 )
    goto LABEL_14;
  v35.fields.r = v25->fields.mColor.fields.r;
  v35.fields.g = v25->fields.mColor.fields.g;
  v35.fields.b = v25->fields.mColor.fields.b;
  v35.fields.a = 1.0;
  v33.methodPointer = 0LL;
  v33.invoker_method = 0LL;
  UnityEngine_Color___ctor(v35, v21, v22, v23, v24, &v33);
  *(_QWORD *)&v36.fields.r = v33.methodPointer;
  *(_QWORD *)&v36.fields.b = v33.invoker_method;
  UIWidget__set_color(v25, v36, 0LL);
  v26 = this->fields.costLabel;
  if ( !v26 )
    goto LABEL_14;
  UILabel__set_applyGradient(v26, 1, 0LL);
  v27 = this->fields.costLabel;
  if ( !v27 )
    goto LABEL_14;
  v37.fields.r = v12;
  v37.fields.g = v11;
  v37.fields.b = v10;
  v37.fields.a = v9;
  UILabel__set_gradientTop(v27, v37, 0LL);
  v28 = this->fields.costLabel;
  if ( !v28 )
    goto LABEL_14;
  v38.fields.r = r;
  v38.fields.g = g;
  v38.fields.b = b;
  v38.fields.a = a;
  UILabel__set_gradientBottom(v28, v38, 0LL);
  v29 = this->fields.costLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_15228, 0LL);
  v34 = cost;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
  v32 = System_String__Format(v30, v31, 0LL);
  if ( !v29 )
LABEL_14:
    sub_B170D4();
  UILabel__set_text(v29, v32, 0LL);
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
  UnityEngine_GameObject_o **p_movePoint; // x20
  UnityEngine_Object_o *movePoint; // x22
  UnityEngine_GameObject_o *v14; // x22
  struct WarBoardSquareData_o *squareData; // x8
  int imageId_k__BackingField; // w8
  Il2CppObject *v17; // x0
  System_String_o *v18; // x21
  WebViewManager_o *Instance; // x0
  Il2CppObject *CommonEffectAsset_object; // x21
  WebViewManager_o *v21; // x0
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

  if ( (byte_40FBAC8 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, isDefault);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_B16FFC(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v9);
    sub_B16FFC(&StringLiteral_9177, v10);
    sub_B16FFC(&StringLiteral_9178, v11);
    byte_40FBAC8 = 1;
  }
  p_movePoint = &this->fields.movePoint;
  movePoint = (UnityEngine_Object_o *)this->fields.movePoint;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(movePoint, 0LL, 0LL) )
  {
    if ( !*p_movePoint )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive(*p_movePoint, 0, 0LL);
    v14 = *p_movePoint;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)v14, 0LL);
  }
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_28;
  imageId_k__BackingField = squareData->fields._imageId_k__BackingField;
  if ( !isDefault )
    imageId_k__BackingField += 2;
  v37 = imageId_k__BackingField;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
  v18 = System_String__Format((System_String_o *)StringLiteral_9178, v17, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               v18,
                               (const MethodInfo_2266354 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    v21 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v21 )
      goto LABEL_28;
    CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                                 (WarBoardManager_o *)v21,
                                 (System_String_o *)StringLiteral_9177,
                                 (const MethodInfo_2266354 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
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
                                 (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
  *p_movePoint = (UnityEngine_GameObject_o *)v23;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.movePoint, v23, v24, v25, v26, v27, v28, v29);
  if ( !*p_movePoint || (UnityEngine_GameObject__SetActive(*p_movePoint, 0, 0LL), !*p_movePoint) )
LABEL_28:
    sub_B170D4();
  Component_srcLineSprite = (struct CommonEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                *p_movePoint,
                                                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.movePointCommonEffect = Component_srcLineSprite;
  sub_B16F98(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct WarBoardSquareData_o *squareData; // x8
  int imageId_k__BackingField; // w8
  Il2CppObject *v8; // x0
  System_String_o *v9; // x20
  UISprite_o *squareImage; // x0
  UIButton_o *button; // x0
  UIWidget_o *v12; // x0
  UISprite_o *squareSubImage; // x21
  System_String_o *v14; // x0
  UIButton_o *subButton; // x21
  System_String_o *v16; // x0
  UIWidget_o *v17; // x0
  int v18; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FBACC & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16114, v3);
    sub_B16FFC(&StringLiteral_22155, v4);
    sub_B16FFC(&StringLiteral_22153, v5);
    byte_40FBACC = 1;
  }
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_14;
  imageId_k__BackingField = squareData->fields._imageId_k__BackingField;
  if ( imageId_k__BackingField < 1 )
  {
    v9 = (System_String_o *)StringLiteral_22153;
  }
  else
  {
    v18 = imageId_k__BackingField;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
    v9 = System_String__Format((System_String_o *)StringLiteral_22155, v8, 0LL);
  }
  squareImage = this->fields.squareImage;
  if ( !squareImage )
    goto LABEL_14;
  UISprite__set_spriteName(squareImage, v9, 0LL);
  button = this->fields.button;
  if ( !button )
    goto LABEL_14;
  UIButton__set_normalSprite(button, v9, 0LL);
  v12 = (UIWidget_o *)this->fields.squareImage;
  if ( !v12 )
    goto LABEL_14;
  UIWidget__SetDirty(v12, 0LL);
  squareSubImage = this->fields.squareSubImage;
  v14 = System_String__Concat_43743732(v9, (System_String_o *)StringLiteral_16114, 0LL);
  if ( !squareSubImage
    || (UISprite__set_spriteName(squareSubImage, v14, 0LL),
        subButton = this->fields.subButton,
        v16 = System_String__Concat_43743732(v9, (System_String_o *)StringLiteral_16114, 0LL),
        !subButton)
    || (UIButton__set_normalSprite(subButton, v16, 0LL), (v17 = (UIWidget_o *)this->fields.squareSubImage) == 0LL) )
  {
LABEL_14:
    sub_B170D4();
  }
  UIWidget__SetDirty(v17, 0LL);
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
  struct UIButton_o *v8; // x0

  if ( (byte_40FBACE & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, enable);
    byte_40FBACE = 1;
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
    sub_B170D4();
  }
}


bool __fastcall WarBoardSquareComponent__StopEffect(
        WarBoardSquareComponent_o *this,
        System_String_o *effectKey,
        System_String_o *prefix,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *v8; // x0
  System_Xml_XmlQualifiedName_o *v9; // x20
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x2
  System_Collections_IEnumerator_o *v12; // x0
  struct System_Collections_Generic_Dictionary_string__GameObject__o *dicEffect; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FBADA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__GameObject__Remove__, effectKey);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__, v7);
    byte_40FBADA = 1;
  }
  value = 0LL;
  v8 = System_String__Concat_43743732(prefix, effectKey, 0LL);
  if ( !this->fields.dicEffect )
    goto LABEL_9;
  v9 = (System_Xml_XmlQualifiedName_o *)v8;
  v10 = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.dicEffect,
          (System_Xml_XmlQualifiedName_o *)v8,
          &value,
          (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__);
  if ( v10 )
  {
    v12 = WarBoardSquareComponent__StopEffectEndLoop(
            (WarBoardSquareComponent_o *)v10,
            (UnityEngine_GameObject_o *)value,
            v11);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
    dicEffect = this->fields.dicEffect;
    if ( dicEffect )
    {
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dicEffect,
        v9,
        (const MethodInfo_2DA5684 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Remove__);
      return 1;
    }
LABEL_9:
    sub_B170D4();
  }
  return 0;
}


System_Collections_IEnumerator_o *__fastcall WarBoardSquareComponent__StopEffectEndLoop(
        WarBoardSquareComponent_o *this,
        UnityEngine_GameObject_o *effect,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FBADB & 1) == 0 )
  {
    sub_B16FFC(&WarBoardSquareComponent__StopEffectEndLoop_d__64_TypeInfo, effect);
    byte_40FBADB = 1;
  }
  v6 = sub_B170CC(WarBoardSquareComponent__StopEffectEndLoop_d__64_TypeInfo, effect, method, v3, v4);
  WarBoardSquareComponent__StopEffectEndLoop_d__64___ctor(
    (WarBoardSquareComponent__StopEffectEndLoop_d__64_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = effect;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)effect, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
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
  UIWidget_o *costLabel; // x21
  UnityEngine_GameObject_o *movePoint; // x0
  UnityEngine_Color_o v11; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  this->fields.isSelectable = 0;
  if ( !isDispCostLabel )
  {
    costLabel = (UIWidget_o *)this->fields.costLabel;
    if ( !costLabel )
      goto LABEL_6;
    v12.fields.r = costLabel->fields.mColor.fields.r;
    v12.fields.g = costLabel->fields.mColor.fields.g;
    v12.fields.b = costLabel->fields.mColor.fields.b;
    v12.fields.a = 0.0;
    *(_QWORD *)&v11.fields.r = 0LL;
    *(_QWORD *)&v11.fields.b = 0LL;
    UnityEngine_Color___ctor(v12, v3, v4, v5, v6, (const MethodInfo *)&v11);
    UIWidget__set_color(costLabel, v11, 0LL);
  }
  movePoint = this->fields.movePoint;
  if ( !movePoint )
LABEL_6:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(movePoint, isDispCostLabel, 0LL);
}


void __fastcall WarBoardSquareComponent___DisableEditPosition_b__40_0(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectMarker; // x0

  selectMarker = this->fields.selectMarker;
  if ( !selectMarker )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(selectMarker, 0, 0LL);
}


void __fastcall WarBoardSquareComponent___NondispBattleRange_b__57_0(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *battleTargetPlayer; // x0
  CommonEffectComponent_o *battleTargetPlayerCommonEffect; // x0

  battleTargetPlayer = this->fields.battleTargetPlayer;
  if ( !battleTargetPlayer
    || (UnityEngine_GameObject__SetActive(battleTargetPlayer, 0, 0LL),
        (battleTargetPlayerCommonEffect = this->fields.battleTargetPlayerCommonEffect) == 0LL) )
  {
    sub_B170D4();
  }
  CommonEffectComponent__Rewind(battleTargetPlayerCommonEffect, 0LL);
}


void __fastcall WarBoardSquareComponent___NondispBattleRange_b__57_1(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *battleTargetEnemy; // x0
  CommonEffectComponent_o *battleTargetEnemyCommonEffect; // x0

  battleTargetEnemy = this->fields.battleTargetEnemy;
  if ( !battleTargetEnemy
    || (UnityEngine_GameObject__SetActive(battleTargetEnemy, 0, 0LL),
        (battleTargetEnemyCommonEffect = this->fields.battleTargetEnemyCommonEffect) == 0LL) )
  {
    sub_B170D4();
  }
  CommonEffectComponent__Rewind(battleTargetEnemyCommonEffect, 0LL);
}


void __fastcall WarBoardSquareComponent___OnDeselect_b__49_0(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectCircle; // x0
  CommonEffectComponent_o *selectCircleCommonEffect; // x0

  selectCircle = this->fields.selectCircle;
  if ( !selectCircle
    || (UnityEngine_GameObject__SetActive(selectCircle, 0, 0LL),
        (selectCircleCommonEffect = this->fields.selectCircleCommonEffect) == 0LL) )
  {
    sub_B170D4();
  }
  CommonEffectComponent__Rewind(selectCircleCommonEffect, 0LL);
}


void __fastcall WarBoardSquareComponent___OnEffectHide_b__61_0(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effectPrefab; // x20
  UnityEngine_GameObject_o *v4; // x0
  UnityEngine_Object_o *v5; // x19

  if ( (byte_40FBADE & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FBADE = 1;
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
      sub_B170D4();
    UnityEngine_GameObject__SetActive(v4, 0, 0LL);
    v5 = (UnityEngine_Object_o *)this->fields.effectPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v5, 0LL);
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
  UnityEngine_GameObject_o *v6; // x0
  changeVColor_array *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  int max_length; // w8
  changeVColor_array *v13; // x20
  unsigned int v14; // w21
  float constantMax; // s8
  UnityEngine_ParticleSystem_o *v16; // x0
  UnityEngine_GameObject_o *effect; // x0
  UnityEngine_Object_o *v18; // x19
  bool result; // w0
  UnityEngine_WaitForSeconds_o *v20; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_ParticleSystem_MinMaxCurve_o v28; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v29; // [xsp+20h] [xbp-50h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-28h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v31; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v32; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v33; // 0:x0.8

  if ( (byte_40F7879 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v4);
    byte_40F7879 = 1;
  }
  m_ParticleSystem = 0LL;
  memset(&v29, 0, sizeof(v29));
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    effect = this->fields.effect;
    this->fields.__1__state = -1;
    if ( !effect )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(effect, 0, 0LL);
    v18 = (UnityEngine_Object_o *)this->fields.effect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v18, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  v6 = this->fields.effect;
  this->fields.__1__state = -1;
  if ( !v6 )
    goto LABEL_23;
  v7 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
         v6,
         (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
  if ( !v7 )
    goto LABEL_23;
  max_length = v7->max_length;
  v13 = v7;
  if ( max_length >= 1 )
  {
    v14 = 0;
    constantMax = 0.0;
    while ( 1 )
    {
      if ( v14 >= max_length )
      {
        sub_B17100(v7, v8, v9);
        sub_B170A0();
      }
      v16 = (UnityEngine_ParticleSystem_o *)v13->m_Items[v14];
      if ( !v16 )
        break;
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v16, 0LL).fields.m_ParticleSystem;
      v31.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__get_startLifetime(&v28, v31, 0LL);
      v29 = v28;
      if ( constantMax < UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v29, 0LL) )
      {
        v32.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
        UnityEngine_ParticleSystem_MainModule__get_startLifetime(&v28, v32, 0LL);
        v29 = v28;
        constantMax = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v29, 0LL);
      }
      v33.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__set_loop(v33, 0, 0LL);
      max_length = v13->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_22;
    }
LABEL_23:
    sub_B170D4();
  }
  constantMax = 0.0;
LABEL_22:
  v20 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, v8, v9, v10, v11);
  UnityEngine_WaitForSeconds___ctor(v20, constantMax * 1.2, 0LL);
  this->fields.__2__current = (Il2CppObject *)v20;
  p__2__current = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v20, v22, v23, v24, v25, v26, v27);
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_WarBoardSquareComponent__StopEffectEndLoop_d__64_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v8; // x0
  __int64 v9; // x20
  System_String_o *v10; // x21
  System_String_o *v11; // x20
  WebViewManager_o *Instance; // x0
  Il2CppObject *CommonEffectAsset_object; // x20
  bool v14; // w0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UnityEngine_Component_o *_4__this; // x19
  UnityEngine_Transform_o *transform; // x21
  UILabel_o *v23; // x0
  System_Int32_array **v24; // x1
  BattleServantConfConponent_o *v25; // x0
  int32_t effectId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F7877 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_B16FFC(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v5);
    sub_B16FFC(&WarBoardManager_WarBoardSqEfType_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_18143, v7);
    byte_40F7877 = 1;
  }
  effectId = this->fields.effectId;
  v8 = j_il2cpp_value_box_0(WarBoardManager_WarBoardSqEfType_TypeInfo, &effectId);
  if ( !v8 )
    goto LABEL_17;
  v9 = v8;
  v10 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 360LL))(
                             v8,
                             *(_QWORD *)(*(_QWORD *)v8 + 368LL));
  effectId = *(_DWORD *)j_il2cpp_object_unbox_0(v9);
  v11 = System_String__Concat_43743732((System_String_o *)StringLiteral_18143, v10, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               v11,
                               (const MethodInfo_2266354 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v14 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL);
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !v14 )
  {
    if ( _4__this )
    {
      _4__this[10].klass = 0LL;
      v25 = (BattleServantConfConponent_o *)&_4__this[10];
      v24 = 0LL;
      goto LABEL_16;
    }
LABEL_17:
    sub_B170D4();
  }
  if ( !_4__this )
    goto LABEL_17;
  transform = UnityEngine_Component__get_transform(_4__this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v23 = UnityEngine_Object__Instantiate_UILabel_(
          (UILabel_o *)CommonEffectAsset_object,
          transform,
          (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
  _4__this[10].klass = (UnityEngine_Component_c *)v23;
  v24 = (System_Int32_array **)v23;
  v25 = (BattleServantConfConponent_o *)&_4__this[10];
LABEL_16:
  sub_B16F98(v25, v24, v15, v16, v17, v18, v19, v20);
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
  UILabel_o *v8; // x0
  struct WarBoardSquareComponent_o *v9; // x8
  System_Xml_Schema_XmlSchemaObject_o *v10; // x2
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *dicEffect; // x0

  if ( (byte_40F7878 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__GameObject__set_Item__, method);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40F7878 = 1;
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
  v8 = UnityEngine_Object__Instantiate_UILabel_(
         (UILabel_o *)asset,
         transform,
         (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
  v9 = this->fields.__4__this;
  if ( !v9
    || (v10 = (System_Xml_Schema_XmlSchemaObject_o *)v8,
        (dicEffect = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v9->fields.dicEffect) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    dicEffect,
    (System_Xml_XmlQualifiedName_o *)this->fields.key,
    v10,
    (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__GameObject__set_Item__);
}