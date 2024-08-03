void __fastcall WarBoardSquareComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49F9FCF & 1) == 0 )
  {
    sub_1B640C8(&WarBoardSquareComponent_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_12453/*"ScaleSquare_start"*/, v4);
    byte_49F9FCF = 1;
  }
  WarBoardSquareComponent_TypeInfo->static_fields->UNLOCK_ANIMATION_NAME = (struct System_String_o *)StringLiteral_12453/*"ScaleSquare_start"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)WarBoardSquareComponent_TypeInfo->static_fields,
    StringLiteral_12453/*"ScaleSquare_start"*/,
    v2,
    v3);
}


void __fastcall WarBoardSquareComponent___ctor(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49F9FCE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo, v4);
    byte_49F9FCE = 1;
  }
  this->fields.costAnimFadeTime = 0.3;
  *(_OWORD *)&this->fields.costLabelPos.fields.x = xmmword_BA3730;
  *(_OWORD *)&this->fields.costLabelMovePos.fields.y = xmmword_BA4260;
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                    System_Collections_Generic_Dictionary_string__GameObject__TypeInfo,
                                                                    method,
                                                                    v2);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
  this->fields.dicEffect = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dicEffect, (int32_t)v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardSquareComponent__ActiveEditPointArrow(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *selectMarkerArrow; // x20
  UnityEngine_Behaviour_o *v4; // x0

  if ( (byte_49F9FBC & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F9FBC = 1;
  }
  selectMarkerArrow = (UnityEngine_Object_o *)this->fields.selectMarkerArrow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectMarkerArrow, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Behaviour_o *)this->fields.selectMarkerArrow;
    if ( !v4 )
      sub_1B64324(0LL);
    UnityEngine_Behaviour__set_enabled(v4, 1, 0LL);
  }
}


void __fastcall WarBoardSquareComponent__DeactiveEditPointArrow(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *selectMarkerArrow; // x20
  UnityEngine_Behaviour_o *v4; // x0

  if ( (byte_49F9FBD & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F9FBD = 1;
  }
  selectMarkerArrow = (UnityEngine_Object_o *)this->fields.selectMarkerArrow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectMarkerArrow, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Behaviour_o *)this->fields.selectMarkerArrow;
    if ( !v4 )
      sub_1B64324(0LL);
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

  if ( (byte_49F9FBB & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_WarBoardSquareComponent__DisableEditPosition_b__40_0__, v3);
    byte_49F9FBB = 1;
  }
  selectMarker = this->fields.selectMarker;
  if ( !selectMarker )
    goto LABEL_8;
  if ( UnityEngine_GameObject__get_activeSelf(selectMarker, 0LL) )
  {
    selectMarkerCommonEffect = this->fields.selectMarkerCommonEffect;
    v8 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v5, v6);
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
    sub_1B64324(selectMarker);
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
      sub_1B64324(battleTargetPlayer);
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
    sub_1B64324(selectMarker);
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
  void *costLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v5; // x0
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  costLabel = this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_6;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL);
  GameObjectExtensions__ResetLocalScale(gameObject, 0LL);
  costLabel = this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_6;
  v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL);
  GameObjectExtensions__SetLocalPosition(v5, this->fields.costLabelPos, 0LL);
  costLabel = this->fields.costLabel;
  if ( !costLabel
    || (v6.fields.r = *((float *)costLabel + 37),
        v6.fields.g = *((float *)costLabel + 38),
        v6.fields.b = *((float *)costLabel + 39),
        v6.fields.a = 0.0,
        UIWidget__set_color((UIWidget_o *)costLabel, v6, 0LL),
        (costLabel = this->fields.movePoint) == 0LL) )
  {
LABEL_6:
    sub_1B64324(costLabel);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costLabel, 0, 0LL);
}


bool __fastcall WarBoardSquareComponent__GetButtonIsEnable(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  struct UIButton_o *button; // x0

  button = this->fields.button;
  if ( !button )
    sub_1B64324(0LL);
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

  if ( (byte_49F9FC5 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F9FC5 = 1;
  }
  tweenScale = (UnityEngine_Object_o *)this->fields.tweenScale;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tweenScale, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.tweenScale;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v4, 0LL);
  }
  tweenPosition = (UnityEngine_Object_o *)this->fields.tweenPosition;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tweenPosition, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Object_o *)this->fields.tweenPosition;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v6, 0LL);
  }
  tweenAlpha = (UnityEngine_Object_o *)this->fields.tweenAlpha;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tweenAlpha, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Object_o *)this->fields.tweenAlpha;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v8, 0LL);
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
  int32_t v14; // w2
  int32_t v15; // w3
  UnityEngine_Transform_o *transform; // x22
  int v17; // s0
  int32_t v20; // w2
  int32_t v21; // w3
  UILabel_o *costLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v24; // x0
  Il2CppObject *Component_object; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  Il2CppObject *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  Il2CppObject *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  Il2CppObject *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  Il2CppObject *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x1
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F9FB9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__, imageSetAtlas);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v7);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_1B640C8(&StringLiteral_23361/*"squares"*/, v10);
    sub_1B640C8(&StringLiteral_23362/*"squares_target"*/, v11);
    byte_49F9FB9 = 1;
  }
  dicEffect = (char *)this->fields.dicEffect;
  if ( !dicEffect )
    goto LABEL_33;
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)dicEffect,
    (const MethodInfo_3179580 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
  this->fields.squareData = data;
  p_squareData = &this->fields.squareData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.squareData, (int32_t)data, v14, v15);
  dicEffect = (char *)this->fields.squareImage;
  if ( !dicEffect )
    goto LABEL_33;
  UISprite__set_atlas((UISprite_o *)dicEffect, imageSetAtlas, 0LL);
  dicEffect = (char *)this->fields.squareImage;
  if ( !dicEffect )
    goto LABEL_33;
  UISprite__set_spriteName((UISprite_o *)dicEffect, (System_String_o *)StringLiteral_23361/*"squares"*/, 0LL);
  dicEffect = (char *)this->fields.squareSubImage;
  if ( !dicEffect )
    goto LABEL_33;
  UISprite__set_atlas((UISprite_o *)dicEffect, imageSetAtlas, 0LL);
  dicEffect = (char *)this->fields.squareSubImage;
  if ( !dicEffect )
    goto LABEL_33;
  UISprite__set_spriteName((UISprite_o *)dicEffect, (System_String_o *)StringLiteral_23362/*"squares_target"*/, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  dicEffect = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !data )
    goto LABEL_33;
  if ( !dicEffect )
    goto LABEL_33;
  *(UnityEngine_Vector3_o *)&v17 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)dicEffect,
                                     data->fields._squareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_33;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v17, 0LL);
  dicEffect = (char *)*p_squareData;
  if ( !*p_squareData )
    goto LABEL_33;
  *((_QWORD *)dicEffect + 6) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(dicEffect + 48), (int32_t)this, v20, v21);
  costLabel = this->fields.costLabel;
  dicEffect = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !dicEffect )
    goto LABEL_33;
  if ( !costLabel )
    goto LABEL_33;
  UILabel__set_bitmapFont(costLabel, *((UIFont_o **)dicEffect + 34), 0LL);
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
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dicEffect, 0LL);
  GameObjectExtensions__ResetLocalScale(v24, 0LL);
  dicEffect = (char *)this->fields.costLabel;
  if ( !dicEffect )
    goto LABEL_33;
  v42.fields.r = *((float *)dicEffect + 37);
  v42.fields.g = *((float *)dicEffect + 38);
  v42.fields.b = *((float *)dicEffect + 39);
  v42.fields.a = 0.0;
  UIWidget__set_color((UIWidget_o *)dicEffect, v42, 0LL);
  dicEffect = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !dicEffect )
    goto LABEL_33;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)dicEffect,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.simpleAnimation, (int32_t)Component_object, v26, v27);
  dicEffect = (char *)this->fields.selectMarker;
  if ( !dicEffect )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dicEffect, 0, 0LL);
  dicEffect = (char *)this->fields.selectMarker;
  if ( !dicEffect )
    goto LABEL_33;
  v28 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)dicEffect,
          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.selectMarkerCommonEffect = (struct CommonEffectComponent_o *)v28;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectMarkerCommonEffect, (int32_t)v28, v29, v30);
  dicEffect = (char *)this->fields.selectCircle;
  if ( !dicEffect )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dicEffect, 0, 0LL);
  dicEffect = (char *)this->fields.selectCircle;
  if ( !dicEffect )
    goto LABEL_33;
  v31 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)dicEffect,
          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.selectCircleCommonEffect = (struct CommonEffectComponent_o *)v31;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectCircleCommonEffect, (int32_t)v31, v32, v33);
  dicEffect = (char *)this->fields.battleTargetPlayer;
  if ( !dicEffect )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dicEffect, 0, 0LL);
  dicEffect = (char *)this->fields.battleTargetPlayer;
  if ( !dicEffect )
    goto LABEL_33;
  v34 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)dicEffect,
          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.battleTargetPlayerCommonEffect = (struct CommonEffectComponent_o *)v34;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.battleTargetPlayerCommonEffect, (int32_t)v34, v35, v36);
  dicEffect = (char *)this->fields.battleTargetEnemy;
  if ( !dicEffect )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dicEffect, 0, 0LL);
  dicEffect = (char *)this->fields.battleTargetEnemy;
  if ( !dicEffect )
    goto LABEL_33;
  v37 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)dicEffect,
          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.battleTargetEnemyCommonEffect = (struct CommonEffectComponent_o *)v37;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.battleTargetEnemyCommonEffect, (int32_t)v37, v38, v39);
  WarBoardSquareComponent__SetMovePoint(this, 1, v40);
  this->fields.isSelectable = 0;
  WarBoardSquareComponent__SetSprite(this, v41);
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
    sub_1B64324(dicEffect);
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

  if ( (byte_49F9FC6 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isPlayerForce);
    sub_1B640C8(&Method_WarBoardSquareComponent__NondispBattleRange_b__57_0__, v5);
    sub_1B640C8(&Method_WarBoardSquareComponent__NondispBattleRange_b__57_1__, v6);
    byte_49F9FC6 = 1;
  }
  if ( isPlayerForce )
  {
    battleTargetPlayer = this->fields.battleTargetPlayer;
    if ( !battleTargetPlayer )
      goto LABEL_13;
    if ( UnityEngine_GameObject__get_activeSelf(battleTargetPlayer, 0LL) )
    {
      battleTargetPlayerCommonEffect = this->fields.battleTargetPlayerCommonEffect;
      v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
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
      v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v13, v14);
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
      sub_1B64324(battleTargetPlayer);
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
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x21
  struct WarBoardWallData_array *walls; // x8
  struct WarBoardSquareData_o *v15; // x8

  if ( (byte_49F9FC7 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_1B640C8(&Method_WarBoardSquareComponent_OnClickSquare__, v3);
    byte_49F9FC7 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_31;
  v6 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_31;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_35061152(
                                 Instance,
                                 squareData->fields._squareIndex_k__BackingField,
                                 0LL);
  v7 = this->fields.squareData;
  if ( !v7 )
    goto LABEL_31;
  v8 = (WarBoardPieceData_o *)Instance;
  Instance = v6->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_31;
  Instance = (WarBoardData_o *)WarBoardData__GetItem(Instance, v7->fields._squareIndex_k__BackingField, 0LL);
  v9 = this->fields.squareData;
  if ( !v9 )
    goto LABEL_31;
  v10 = (WarBoardItemData_o *)Instance;
  Instance = v6->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_31;
  Effect = WarBoardData__GetEffect(Instance, v9->fields._squareIndex_k__BackingField, 0LL);
  if ( WarBoardManager__get_isSelectedPiece(v6, 0LL) && this->fields.isSelectable )
  {
    if ( !v8 || !WarBoardManager__IsSelectedPieceSame(v6, v8, 0LL) )
    {
      v12 = Method_WarBoardSquareComponent_OnClickSquare__;
      if ( (*((_BYTE *)Method_WarBoardSquareComponent_OnClickSquare__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1B640E0(Method_WarBoardSquareComponent_OnClickSquare__);
      v13 = (System_Reflection_MethodBase_o *)sub_1B640AC(v12, v12[4]);
      Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        walls = Instance[1].fields.walls;
        if ( walls )
        {
          Instance = (WarBoardData_o *)OverwriteAssetSoundName__PlaySe(
                                         v13,
                                         *(System_String_o **)&walls->max_length,
                                         0LL);
          v15 = this->fields.squareData;
          if ( v15 )
          {
            WarBoardManager__SelectedPieceAction(v6, v15->fields._squareIndex_k__BackingField, 0LL);
            return;
          }
        }
      }
LABEL_31:
      sub_1B64324(Instance);
    }
    goto LABEL_21;
  }
  if ( v8 )
  {
LABEL_21:
    Instance = (WarBoardData_o *)v8->fields.pieceComponent;
    if ( !Instance )
      goto LABEL_31;
    (*(void (__fastcall **)(WarBoardData_o *, void *))&Instance->klass[1]._1.byval_arg.bits)(
      Instance,
      Instance->klass[1]._1.this_arg.data);
    return;
  }
  if ( v10 && !WarBoardItemData__get_Acquired(v10, 0LL) )
  {
    Instance = (WarBoardData_o *)v10->fields.component;
    if ( !Instance )
      goto LABEL_31;
    WarBoardItemComponent__OnClick((WarBoardItemComponent_o *)Instance, 0LL);
  }
  else if ( Effect )
  {
    Instance = (WarBoardData_o *)Effect->fields.component;
    if ( !Instance )
      goto LABEL_31;
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

  if ( (byte_49F9FC2 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_WarBoardSquareComponent__OnDeselect_b__49_0__, v3);
    byte_49F9FC2 = 1;
  }
  selectCircle = this->fields.selectCircle;
  if ( !selectCircle )
    goto LABEL_8;
  if ( UnityEngine_GameObject__get_activeSelf(selectCircle, 0LL) )
  {
    selectCircleCommonEffect = this->fields.selectCircleCommonEffect;
    v8 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v5, v6);
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
    sub_1B64324(selectCircle);
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
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  System_Delegate_o **v22; // x21
  System_Delegate_o *v23; // x23
  WarBoardTaskBase_TaskCallback_o *v24; // x24
  System_Delegate_o *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_Delegate_o *v28; // x8
  WarBoardTaskBase_TaskCallback_c *v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  Il2CppObject *Instance; // x19
  __int64 v37; // x21
  __int64 v38; // x0
  __int64 v39; // x1
  int32_t v40; // w2
  int32_t v41; // w3
  __int64 v42; // x0

  if ( (byte_49F9FC9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, *(_QWORD *)&effectId);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    sub_1B640C8(&WarBoardTaskBase_TaskCallback_TypeInfo, v8);
    sub_1B640C8(&Method_WarBoardSquareComponent___c__DisplayClass60_0__OnEffectDisp_b__0__, v9);
    sub_1B640C8(&WarBoardSquareComponent___c__DisplayClass60_0_TypeInfo, v10);
    sub_1B640C8(&WarBoardCallbackTask_TypeInfo, v11);
    sub_1B640C8(&WarBoardTaskBase___TypeInfo, v12);
    byte_49F9FC9 = 1;
  }
  v13 = sub_1B64314(WarBoardSquareComponent___c__DisplayClass60_0_TypeInfo, *(_QWORD *)&effectId, taskList);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_20;
  *(_QWORD *)(v13 + 24) = this;
  *(_DWORD *)(v13 + 16) = effectId;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 24), (int32_t)this, v15, v16);
  v19 = sub_1B64314(WarBoardCallbackTask_TypeInfo, v17, v18);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v19, 0LL, 0LL);
  if ( !v19 )
    goto LABEL_20;
  v22 = (System_Delegate_o **)(v19 + 32);
  v23 = *(System_Delegate_o **)(v19 + 32);
  v24 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v20, v21);
  WarBoardTaskBase_TaskCallback___ctor(
    v24,
    (Il2CppObject *)v13,
    Method_WarBoardSquareComponent___c__DisplayClass60_0__OnEffectDisp_b__0__,
    0LL);
  v25 = System_Delegate__Combine(v23, (System_Delegate_o *)v24, 0LL);
  v28 = v25;
  if ( !v25 )
    goto LABEL_9;
  v29 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v25->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v22 = v25, (WarBoardTaskBase_TaskCallback_c *)v25->klass != v29) )
  {
    sub_1B645E4(v25);
LABEL_9:
    *v22 = v28;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 32), (int32_t)v28, v26, v27);
  if ( !taskList )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v14 = sub_1B64170(WarBoardTaskBase___TypeInfo, 1LL);
    if ( v14 )
    {
      v37 = v14;
      v38 = sub_1B64204(v19, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
      if ( !v38 )
      {
        v42 = sub_1B64348(0LL);
        sub_1B641F0(v42, 0LL);
      }
      if ( !*(_DWORD *)(v37 + 24) )
        sub_1B6432C(v38, v39);
      *(_QWORD *)(v37 + 32) = v19;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 32), v19, v40, v41);
      if ( Instance )
      {
        WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v37, 0LL);
        return;
      }
    }
LABEL_20:
    sub_1B64324(v14);
  }
  items = taskList->fields._items;
  v33 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++taskList->fields._version;
  if ( !items )
    goto LABEL_20;
  size = taskList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)taskList,
      (Il2CppObject *)v19,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = &items->obj.klass + size;
    taskList->fields._size = size + 1;
    v35[4] = (Il2CppClass *)v19;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 4), v19, v30, v31);
  }
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
  System_Delegate_o **v15; // x22
  System_Delegate_o *v16; // x23
  WarBoardTaskBase_TaskCallback_o *v17; // x24
  System_Delegate_o *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_Delegate_o *v21; // x8
  WarBoardTaskBase_TaskCallback_c *v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  Il2CppObject *Instance; // x19
  __int64 v30; // x21
  __int64 v31; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  __int64 v35; // x0

  if ( (byte_49F9FCA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, *(_QWORD *)&effectId);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_1B640C8(&WarBoardTaskBase_TaskCallback_TypeInfo, v7);
    sub_1B640C8(&WarBoardCallbackTask_TypeInfo, v8);
    sub_1B640C8(&Method_WarBoardSquareComponent__OnEffectHide_b__61_0__, v9);
    sub_1B640C8(&WarBoardTaskBase___TypeInfo, v10);
    byte_49F9FCA = 1;
  }
  v11 = sub_1B64314(WarBoardCallbackTask_TypeInfo, *(_QWORD *)&effectId, taskList);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v11, 0LL, 0LL);
  if ( !v11 )
    goto LABEL_19;
  v15 = (System_Delegate_o **)(v11 + 32);
  v16 = *(System_Delegate_o **)(v11 + 32);
  v17 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v13, v14);
  WarBoardTaskBase_TaskCallback___ctor(
    v17,
    (Il2CppObject *)this,
    Method_WarBoardSquareComponent__OnEffectHide_b__61_0__,
    0LL);
  v18 = System_Delegate__Combine(v16, (System_Delegate_o *)v17, 0LL);
  v21 = v18;
  if ( !v18 )
    goto LABEL_8;
  v22 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v18->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v15 = v18, (WarBoardTaskBase_TaskCallback_c *)v18->klass != v22) )
  {
    sub_1B645E4(v18);
LABEL_8:
    *v15 = v21;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 32), (int32_t)v21, v19, v20);
  if ( !taskList )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v12 = sub_1B64170(WarBoardTaskBase___TypeInfo, 1LL);
    if ( v12 )
    {
      v30 = v12;
      v31 = sub_1B64204(v11, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
      if ( !v31 )
      {
        v35 = sub_1B64348(0LL);
        sub_1B641F0(v35, 0LL);
      }
      if ( !*(_DWORD *)(v30 + 24) )
        sub_1B6432C(v31, v32);
      *(_QWORD *)(v30 + 32) = v11;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 32), v11, v33, v34);
      if ( Instance )
      {
        WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v30, 0LL);
        return;
      }
    }
LABEL_19:
    sub_1B64324(v12);
  }
  items = taskList->fields._items;
  v26 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++taskList->fields._version;
  if ( !items )
    goto LABEL_19;
  size = taskList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)taskList,
      (Il2CppObject *)v11,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &items->obj.klass + size;
    taskList->fields._size = size + 1;
    v28[4] = (Il2CppClass *)v11;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 4), v11, v23, v24);
  }
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

  if ( (byte_49F9FC8 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49F9FC8 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_21;
  v5 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_21;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_35061152(
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
    Instance = (WarBoardData_o *)v7[1].fields.stageNpcMaster;
    if ( Instance )
    {
      (*(void (__fastcall **)(WarBoardData_o *, Il2CppClass *))&Instance->klass[1]._1.this_arg.bits)(
        Instance,
        Instance->klass[1]._1.element_class);
      return;
    }
LABEL_21:
    sub_1B64324(Instance);
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
    sub_1B64324(selectCircle);
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
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  struct WarBoardSquareData_o *squareData; // x8
  int imageId_k__BackingField; // w8
  int v22; // w9
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  _QWORD *v25; // x22
  System_String_o *v26; // x21
  __int64 v27; // x8
  __int64 v28; // x0
  __int64 v29; // x0
  System_String_o *v30; // x21
  Il2CppObject *CommonEffectAsset_object; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  UnityEngine_Object_o *v34; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v38; // x21
  UnityEngine_Object_o *uiDataComp; // x20
  unsigned int v40; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49F9FCB & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, effectKey);
    sub_1B640C8(&Method_System_Array_Empty_object___, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_1B640C8(&Method_WarBoardSquareComponent___c__DisplayClass62_0__PlayEffect_b__0__, v10);
    sub_1B640C8(&WarBoardSquareComponent___c__DisplayClass62_0_TypeInfo, v11);
    sub_1B640C8(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v12);
    byte_49F9FCB = 1;
  }
  v13 = sub_1B64314(WarBoardSquareComponent___c__DisplayClass62_0_TypeInfo, effectKey, prefix);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_30;
  *(_QWORD *)(v13 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 24), (int32_t)this, v15, v16);
  v17 = System_String__Concat_61375396(prefix, effectKey, 0LL);
  *(_QWORD *)(v13 + 32) = v17;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 32), (int32_t)v17, v18, v19);
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_30;
  imageId_k__BackingField = squareData->fields._imageId_k__BackingField;
  if ( imageId_k__BackingField >= 0 )
    v22 = imageId_k__BackingField;
  else
    v22 = imageId_k__BackingField + 1;
  v40 = imageId_k__BackingField - (v22 & 0xFFFFFFFE);
  v23 = System_Int32__ToString((int32_t)&v40, 0LL);
  v24 = System_String__Concat_61375396(effectKey, v23, 0LL);
  v25 = Method_System_Array_Empty_object___;
  v26 = v24;
  v27 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v27 )
  {
    sub_1BB6000(Method_System_Array_Empty_object___);
    v27 = v25[7];
  }
  v28 = *(_QWORD *)(v27 + 16);
  if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
    v28 = sub_1BB5FA4(v28);
  if ( !*(_DWORD *)(v28 + 224) )
    j_il2cpp_runtime_class_init_0(v28);
  v29 = *(_QWORD *)(v25[7] + 16LL);
  if ( (*(_BYTE *)(v29 + 309) & 1) == 0 )
    v29 = sub_1BB5FA4(v29);
  v30 = System_String__Format_61389904(v26, **(System_Object_array ***)(v29 + 184), 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               Instance,
                               v30,
                               (const MethodInfo_2F15D90 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  *(_QWORD *)(v13 + 16) = CommonEffectAsset_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)CommonEffectAsset_object, v32, v33);
  v34 = *(UnityEngine_Object_o **)(v13 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v34, 0LL, 0LL) )
    return 0;
  v38 = sub_1B64314(System_Action_TypeInfo, v35, v36);
  System_Action___ctor(
    (System_Action_o *)v38,
    (Il2CppObject *)v13,
    Method_WarBoardSquareComponent___c__DisplayClass62_0__PlayEffect_b__0__,
    0LL);
  uiDataComp = (UnityEngine_Object_o *)this->fields.uiDataComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (WarBoardManager_o *)UnityEngine_Object__op_Inequality(uiDataComp, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( v38 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(v38 + 24))(*(_QWORD *)(v38 + 64), *(_QWORD *)(v38 + 40));
      return 1;
    }
LABEL_30:
    sub_1B64324(Instance);
  }
  Instance = (WarBoardManager_o *)this->fields.uiDataComp;
  if ( !Instance )
    goto LABEL_30;
  WarBoardControlUiDataComponent__SyncAnimation(
    (WarBoardControlUiDataComponent_o *)Instance,
    (System_Action_o *)v38,
    0LL);
  return 1;
}


void __fastcall WarBoardSquareComponent__PlayUnDispCostAnim(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 costLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x1
  struct TweenScale_o *tweenScale; // x21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  struct TweenScale_o *v13; // x8
  float costAnimScale; // s0
  struct TweenScale_o *v15; // x20
  UnityEngine_GameObject_o *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1

  if ( (byte_49F9FC3 & 1) == 0 )
  {
    sub_1B640C8(&Method_UITweener_Begin_TweenScale___, method);
    sub_1B640C8(&StringLiteral_10617/*"PlayUnDispCostAnim2"*/, v3);
    byte_49F9FC3 = 1;
  }
  costLabel = (__int64)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_11;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL);
  v6 = UITweener__Begin_object_(
         gameObject,
         this->fields.costAnimScaleTime,
         (const MethodInfo_2EEADCC *)Method_UITweener_Begin_TweenScale___);
  this->fields.tweenScale = (struct TweenScale_o *)v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tweenScale, (int32_t)v6, v7, v8);
  tweenScale = this->fields.tweenScale;
  if ( !byte_49F7116 )
  {
    costLabel = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v9);
    byte_49F7116 = 1;
  }
  if ( !tweenScale )
    goto LABEL_11;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->oneVector.fields.z;
  *(_QWORD *)&tweenScale->fields.from.fields.x = *(_QWORD *)&static_fields->oneVector.fields.x;
  tweenScale->fields.from.fields.z = z;
  v13 = this->fields.tweenScale;
  if ( !v13 )
    goto LABEL_11;
  costAnimScale = this->fields.costAnimScale;
  v13->fields.to.fields.x = costAnimScale;
  v13->fields.to.fields.y = costAnimScale;
  v13->fields.to.fields.z = costAnimScale;
  v15 = this->fields.tweenScale;
  if ( !v15
    || (v15->fields.method = 6,
        v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        v15->fields.eventReceiver = v16,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v15->fields.eventReceiver, (int32_t)v16, v17, v18),
        (costLabel = (__int64)this->fields.tweenScale) == 0) )
  {
LABEL_11:
    sub_1B64324(costLabel);
  }
  v21 = StringLiteral_10617/*"PlayUnDispCostAnim2"*/;
  *(_QWORD *)(costLabel + 88) = StringLiteral_10617/*"PlayUnDispCostAnim2"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(costLabel + 88), v21, v19, v20);
}


void __fastcall WarBoardSquareComponent__PlayUnDispCostAnim2(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 costLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  struct TweenPosition_o *tweenPosition; // x8
  struct TweenPosition_o *v12; // x8
  struct TweenPosition_o *v13; // x20
  UnityEngine_GameObject_o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  UnityEngine_GameObject_o *v17; // x0
  Il2CppObject *v18; // x0
  struct TweenScale_o **p_tweenScale; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x1
  struct TweenScale_o *tweenScale; // x8
  float costAnimScale; // s0
  struct TweenScale_o *v25; // x21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  struct TweenScale_o *v28; // x20
  UnityEngine_GameObject_o *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  UnityEngine_GameObject_o *v32; // x0
  Il2CppObject *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  struct TweenAlpha_o *tweenAlpha; // x20
  UnityEngine_GameObject_o *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w1
  __int64 v43; // [xsp+0h] [xbp-50h]
  __int64 v44; // [xsp+10h] [xbp-40h]

  if ( (byte_49F9FC4 & 1) == 0 )
  {
    sub_1B640C8(&Method_UITweener_Begin_TweenAlpha___, method);
    sub_1B640C8(&Method_UITweener_Begin_TweenPosition___, v3);
    sub_1B640C8(&Method_UITweener_Begin_TweenScale___, v4);
    sub_1B640C8(&StringLiteral_6669/*"FinishUnDispCostAnim"*/, v5);
    byte_49F9FC4 = 1;
  }
  costLabel = (__int64)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL);
  v8 = UITweener__Begin_object_(
         gameObject,
         this->fields.costAnimFadeTime,
         (const MethodInfo_2EEADCC *)Method_UITweener_Begin_TweenPosition___);
  this->fields.tweenPosition = (struct TweenPosition_o *)v8;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tweenPosition, (int32_t)v8, v9, v10);
  tweenPosition = this->fields.tweenPosition;
  v44 = *(_QWORD *)&this->fields.costLabelPos.fields.x;
  if ( !tweenPosition )
    goto LABEL_17;
  tweenPosition->fields.from.fields.z = this->fields.costLabelPos.fields.z;
  *(_QWORD *)&tweenPosition->fields.from.fields.x = v44;
  v12 = this->fields.tweenPosition;
  v43 = *(_QWORD *)&this->fields.costLabelMovePos.fields.x;
  if ( !v12 )
    goto LABEL_17;
  v12->fields.to.fields.z = this->fields.costLabelMovePos.fields.z;
  *(_QWORD *)&v12->fields.to.fields.x = v43;
  v13 = this->fields.tweenPosition;
  if ( !v13 )
    goto LABEL_17;
  v13->fields.method = 0;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v13->fields.eventReceiver = v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v13->fields.eventReceiver, (int32_t)v14, v15, v16);
  costLabel = (__int64)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_17;
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL);
  v18 = UITweener__Begin_object_(
          v17,
          this->fields.costAnimFadeTime,
          (const MethodInfo_2EEADCC *)Method_UITweener_Begin_TweenScale___);
  this->fields.tweenScale = (struct TweenScale_o *)v18;
  p_tweenScale = &this->fields.tweenScale;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tweenScale, (int32_t)v18, v20, v21);
  tweenScale = this->fields.tweenScale;
  if ( !tweenScale )
    goto LABEL_17;
  costAnimScale = this->fields.costAnimScale;
  tweenScale->fields.from.fields.x = costAnimScale;
  tweenScale->fields.from.fields.y = costAnimScale;
  tweenScale->fields.from.fields.z = costAnimScale;
  v25 = *p_tweenScale;
  if ( !byte_49F7111 )
  {
    costLabel = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v22);
    byte_49F7111 = 1;
  }
  if ( !v25 )
    goto LABEL_17;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&v25->fields.to.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v25->fields.to.fields.z = z;
  v28 = *p_tweenScale;
  if ( !v28 )
    goto LABEL_17;
  v28->fields.method = 0;
  v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v28->fields.eventReceiver = v29;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v28->fields.eventReceiver, (int32_t)v29, v30, v31);
  costLabel = (__int64)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_17;
  v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL);
  v33 = UITweener__Begin_object_(
          v32,
          this->fields.costAnimFadeTime,
          (const MethodInfo_2EEADCC *)Method_UITweener_Begin_TweenAlpha___);
  this->fields.tweenAlpha = (struct TweenAlpha_o *)v33;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tweenAlpha, (int32_t)v33, v34, v35);
  tweenAlpha = this->fields.tweenAlpha;
  if ( !tweenAlpha
    || (tweenAlpha->fields.method = 0,
        *(_QWORD *)&tweenAlpha->fields.from = 1065353216LL,
        v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        tweenAlpha->fields.eventReceiver = v37,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&tweenAlpha->fields.eventReceiver, (int32_t)v37, v38, v39),
        (costLabel = (__int64)this->fields.tweenAlpha) == 0) )
  {
LABEL_17:
    sub_1B64324(costLabel);
  }
  v42 = StringLiteral_6669/*"FinishUnDispCostAnim"*/;
  *(_QWORD *)(costLabel + 88) = StringLiteral_6669/*"FinishUnDispCostAnim"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(costLabel + 88), v42, v40, v41);
}


void __fastcall WarBoardSquareComponent__Selectable(
        WarBoardSquareComponent_o *this,
        bool isOnActionPiece,
        const MethodInfo *method)
{
  UIWidget_o *costLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !isOnActionPiece )
  {
    costLabel = (UIWidget_o *)this->fields.costLabel;
    if ( !costLabel )
      goto LABEL_9;
    v8.fields.r = costLabel->fields.mColor.fields.r;
    v8.fields.g = costLabel->fields.mColor.fields.g;
    v8.fields.b = costLabel->fields.mColor.fields.b;
    v8.fields.a = 1.0;
    UIWidget__set_color(costLabel, v8, 0LL);
  }
  costLabel = (UIWidget_o *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_9;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.costLabelPos, 0LL);
  costLabel = (UIWidget_o *)this->fields.costLabel;
  if ( !costLabel
    || (v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL),
        GameObjectExtensions__ResetLocalScale(v7, 0LL),
        costLabel = (UIWidget_o *)this->fields.movePoint,
        this->fields.isSelectable = !isOnActionPiece,
        !costLabel)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costLabel, 1, 0LL),
        (costLabel = (UIWidget_o *)this->fields.movePointCommonEffect) == 0LL) )
  {
LABEL_9:
    sub_1B64324(costLabel);
  }
  ((void (__fastcall *)(UIWidget_o *, __int64, _QWORD, Il2CppMethodPointer))costLabel->klass->vtable._6_get_canBeAnchored.method)(
    costLabel,
    1LL,
    0LL,
    costLabel->klass->vtable._7_get_alpha.methodPtr);
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

  if ( (byte_49F9FC1 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, enable);
    byte_49F9FC1 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    subButton = (UnityEngine_Object_o *)this->fields.subButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_17:
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
              goto LABEL_17;
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
      sub_1B64324(v7);
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
  void *costLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v19; // x0
  UILabel_o *v20; // x20
  System_String_o *v21; // x21
  Il2CppObject *v22; // x0
  int32_t v23; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = gradientBottom.fields.a;
  b = gradientBottom.fields.b;
  g = gradientBottom.fields.g;
  r = gradientBottom.fields.r;
  v9 = gradientTop.fields.a;
  v10 = gradientTop.fields.b;
  v11 = gradientTop.fields.g;
  v12 = gradientTop.fields.r;
  if ( (byte_49F9FBF & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&cost);
    sub_1B640C8(&LocalizationManager_TypeInfo, v15);
    sub_1B640C8(&StringLiteral_15372/*"WARBOARD_SQUARE_COST"*/, v16);
    byte_49F9FBF = 1;
  }
  WarBoardSquareComponent__InitCostAnim(this, *(const MethodInfo **)&cost);
  costLabel = this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL);
  GameObjectExtensions__ResetLocalScale(gameObject, 0LL);
  costLabel = this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_13;
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL);
  GameObjectExtensions__SetLocalPosition(v19, this->fields.costLabelPos, 0LL);
  costLabel = this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_13;
  v24.fields.r = *((float *)costLabel + 37);
  v24.fields.g = *((float *)costLabel + 38);
  v24.fields.b = *((float *)costLabel + 39);
  v24.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)costLabel, v24, 0LL);
  costLabel = this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_13;
  UILabel__set_applyGradient((UILabel_o *)costLabel, 1, 0LL);
  costLabel = this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_13;
  v25.fields.r = v12;
  v25.fields.g = v11;
  v25.fields.b = v10;
  v25.fields.a = v9;
  UILabel__set_gradientTop((UILabel_o *)costLabel, v25, 0LL);
  costLabel = this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_13;
  v26.fields.r = r;
  v26.fields.g = g;
  v26.fields.b = b;
  v26.fields.a = a;
  UILabel__set_gradientBottom((UILabel_o *)costLabel, v26, 0LL);
  v20 = this->fields.costLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_15372/*"WARBOARD_SQUARE_COST"*/, 0LL);
  v23 = cost;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  costLabel = System_String__Format(v21, v22, 0LL);
  if ( !v20 )
LABEL_13:
    sub_1B64324(costLabel);
  UILabel__set_text(v20, (System_String_o *)costLabel, 0LL);
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
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *Component_object; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  int v28; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49F9FBA & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, isDefault);
    sub_1B640C8(&int_TypeInfo, v5);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_1B640C8(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v9);
    sub_1B640C8(&StringLiteral_9103/*"Move_Point_0"*/, v10);
    sub_1B640C8(&StringLiteral_9104/*"Move_Point_{0}"*/, v11);
    byte_49F9FBA = 1;
  }
  p_movePoint = &this->fields.movePoint;
  movePoint = (UnityEngine_Object_o *)this->fields.movePoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(movePoint, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = *p_movePoint;
    if ( !*p_movePoint )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(Instance, 0, 0LL);
    v15 = (UnityEngine_Object_o *)*p_movePoint;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v15, 0LL);
  }
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_24;
  imageId_k__BackingField = squareData->fields._imageId_k__BackingField;
  if ( !isDefault )
    imageId_k__BackingField += 2;
  v28 = imageId_k__BackingField;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
  v19 = System_String__Format((System_String_o *)StringLiteral_9104/*"Move_Point_{0}"*/, v18, 0LL);
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               v19,
                               (const MethodInfo_2F15D90 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                                 (WarBoardManager_o *)Instance,
                                 (System_String_o *)StringLiteral_9103/*"Move_Point_0"*/,
                                 (const MethodInfo_2F15D90 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v22 = UnityEngine_Object__Instantiate_object__49003980(
          CommonEffectAsset_object,
          transform,
          (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
  *p_movePoint = (struct UnityEngine_GameObject_o *)v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.movePoint, (int32_t)v22, v23, v24);
  Instance = *p_movePoint;
  if ( !*p_movePoint || (UnityEngine_GameObject__SetActive(Instance, 0, 0LL), (Instance = *p_movePoint) == 0LL) )
LABEL_24:
    sub_1B64324(Instance);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       Instance,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.movePointCommonEffect = (struct CommonEffectComponent_o *)Component_object;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.movePointCommonEffect,
    (int32_t)Component_object,
    v26,
    v27);
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
  if ( (byte_49F9FBE & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&StringLiteral_16506/*"_target"*/, v3);
    sub_1B640C8(&StringLiteral_23363/*"square{0:D3}"*/, v4);
    this = (WarBoardSquareComponent_o *)sub_1B640C8(&StringLiteral_23361/*"squares"*/, v5);
    byte_49F9FBE = 1;
  }
  squareData = v2->fields.squareData;
  if ( !squareData )
    goto LABEL_14;
  imageId_k__BackingField = squareData->fields._imageId_k__BackingField;
  if ( imageId_k__BackingField < 1 )
  {
    v9 = (System_String_o *)StringLiteral_23361/*"squares"*/;
  }
  else
  {
    v12 = imageId_k__BackingField;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
    v9 = System_String__Format((System_String_o *)StringLiteral_23363/*"square{0:D3}"*/, v8, 0LL);
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
  this = (WarBoardSquareComponent_o *)System_String__Concat_61375396(v9, (System_String_o *)StringLiteral_16506/*"_target"*/, 0LL);
  if ( !squareSubImage
    || (UISprite__set_spriteName(squareSubImage, (System_String_o *)this, 0LL),
        subButton = v2->fields.subButton,
        this = (WarBoardSquareComponent_o *)System_String__Concat_61375396(
                                              v9,
                                              (System_String_o *)StringLiteral_16506/*"_target"*/,
                                              0LL),
        !subButton)
    || (UIButton__set_normalSprite(subButton, (System_String_o *)this, 0LL),
        (this = (WarBoardSquareComponent_o *)v2->fields.squareSubImage) == 0LL) )
  {
LABEL_14:
    sub_1B64324(this);
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

  if ( (byte_49F9FC0 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, enable);
    byte_49F9FC0 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v6 = this->fields.button;
    if ( !v6 )
      goto LABEL_14;
    ((void (__fastcall *)(struct UIButton_o *, bool, Il2CppMethodPointer))v6->klass->vtable._5_set_isEnabled.method)(
      v6,
      enable,
      v6->klass->vtable._6_OnInit.methodPtr);
  }
  subButton = (UnityEngine_Object_o *)this->fields.subButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_14:
    sub_1B64324(v6);
  }
}


bool __fastcall WarBoardSquareComponent__StopEffect(
        WarBoardSquareComponent_o *this,
        System_String_o *effectKey,
        System_String_o *prefix,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *dicEffect; // x0
  Il2CppObject *v9; // x20
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x2
  bool v12; // w21
  System_Collections_IEnumerator_o *v13; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49F9FCC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__GameObject__Remove__, effectKey);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__, v7);
    byte_49F9FCC = 1;
  }
  value = 0LL;
  dicEffect = (Il2CppObject *)System_String__Concat_61375396(prefix, effectKey, 0LL);
  if ( !this->fields.dicEffect )
    goto LABEL_8;
  v9 = dicEffect;
  v10 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)this->fields.dicEffect,
          dicEffect,
          &value,
          (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__);
  v12 = v10;
  if ( v10 )
  {
    v13 = WarBoardSquareComponent__StopEffectEndLoop(
            (WarBoardSquareComponent_o *)v10,
            (UnityEngine_GameObject_o *)value,
            v11);
    UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v13, 0LL);
    dicEffect = (Il2CppObject *)this->fields.dicEffect;
    if ( dicEffect )
    {
      System_Collections_Generic_Dictionary_object__object___Remove(
        (System_Collections_Generic_Dictionary_object__object__o *)dicEffect,
        v9,
        (const MethodInfo_317A8F4 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Remove__);
      return v12;
    }
LABEL_8:
    sub_1B64324(dicEffect);
  }
  return v12;
}


System_Collections_IEnumerator_o *__fastcall WarBoardSquareComponent__StopEffectEndLoop(
        WarBoardSquareComponent_o *this,
        UnityEngine_GameObject_o *effect,
        const MethodInfo *method)
{
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49F9FCD & 1) == 0 )
  {
    sub_1B640C8(&WarBoardSquareComponent__StopEffectEndLoop_d__64_TypeInfo, effect);
    byte_49F9FCD = 1;
  }
  v4 = sub_1B64314(WarBoardSquareComponent__StopEffectEndLoop_d__64_TypeInfo, effect, method);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = effect;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)effect, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall WarBoardSquareComponent__Unselectable(
        WarBoardSquareComponent_o *this,
        bool isDispCostLabel,
        const MethodInfo *method)
{
  UIWidget_o *costLabel; // x0
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  this->fields.isSelectable = 0;
  if ( !isDispCostLabel )
  {
    costLabel = (UIWidget_o *)this->fields.costLabel;
    if ( !costLabel )
      goto LABEL_6;
    v6.fields.r = costLabel->fields.mColor.fields.r;
    v6.fields.g = costLabel->fields.mColor.fields.g;
    v6.fields.b = costLabel->fields.mColor.fields.b;
    v6.fields.a = 0.0;
    UIWidget__set_color(costLabel, v6, 0LL);
  }
  costLabel = (UIWidget_o *)this->fields.movePoint;
  if ( !costLabel )
LABEL_6:
    sub_1B64324(costLabel);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costLabel, isDispCostLabel, 0LL);
}


void __fastcall WarBoardSquareComponent___DisableEditPosition_b__40_0(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectMarker; // x0

  selectMarker = this->fields.selectMarker;
  if ( !selectMarker )
    sub_1B64324(0LL);
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
    sub_1B64324(battleTargetPlayer);
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
    sub_1B64324(battleTargetEnemy);
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
    sub_1B64324(selectCircle);
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

  if ( (byte_49F9FD0 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F9FD0 = 1;
  }
  effectPrefab = (UnityEngine_Object_o *)this->fields.effectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(effectPrefab, 0LL) )
  {
    v4 = this->fields.effectPrefab;
    if ( !v4 )
      sub_1B64324(0LL);
    UnityEngine_GameObject__SetActive(v4, 0, 0LL);
    v5 = (UnityEngine_Object_o *)this->fields.effectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v5, 0LL);
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
  int32_t v17; // w2
  int32_t v18; // w3
  UnityEngine_ParticleSystem_MinMaxCurve_o v19; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v20; // [xsp+20h] [xbp-50h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-28h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v22; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v23; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v24; // 0:x0.8

  if ( (byte_49F9FD3 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&UnityEngine_WaitForSeconds_TypeInfo, v4);
    byte_49F9FD3 = 1;
  }
  m_ParticleSystem = 0LL;
  memset(&v20, 0, sizeof(v20));
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    effect = this->fields.effect;
    this->fields.__1__state = -1;
    if ( !effect )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effect, 0, 0LL);
    v13 = (UnityEngine_Object_o *)this->fields.effect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v13, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  effect = this->fields.effect;
  this->fields.__1__state = -1;
  if ( !effect )
    goto LABEL_22;
  effect = UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
             (UnityEngine_GameObject_o *)effect,
             (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
  if ( !effect )
    goto LABEL_22;
  v9 = *((_DWORD *)effect + 6);
  v10 = effect;
  if ( v9 >= 1 )
  {
    v11 = 0;
    constantMax = 0.0;
    while ( 1 )
    {
      if ( v11 >= v9 )
        sub_1B6432C(effect, v7);
      effect = (void *)*((_QWORD *)v10 + (int)v11 + 4);
      if ( !effect )
        break;
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)effect, 0LL).fields.m_ParticleSystem;
      v22.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__get_startLifetime(&v19, v22, 0LL);
      v20 = v19;
      if ( constantMax < UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v20, 0LL) )
      {
        v23.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
        UnityEngine_ParticleSystem_MainModule__get_startLifetime(&v19, v23, 0LL);
        v20 = v19;
        constantMax = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v20, 0LL);
      }
      v24.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__set_loop(v24, 0, 0LL);
      v9 = *((_DWORD *)v10 + 6);
      if ( (int)++v11 >= v9 )
        goto LABEL_21;
    }
LABEL_22:
    sub_1B64324(effect);
  }
  constantMax = 0.0;
LABEL_21:
  v15 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v7, v8);
  UnityEngine_WaitForSeconds___ctor(v15, constantMax * 1.2, 0LL);
  this->fields.__2__current = (Il2CppObject *)v15;
  p__2__current = &this->fields.__2__current;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v15, v17, v18);
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

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_WarBoardSquareComponent__StopEffectEndLoop_d__64_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  int32_t effectId; // w9
  System_String_o *v9; // x0
  System_String_o *v10; // x20
  Il2CppObject *Instance; // x0
  Il2CppObject *CommonEffectAsset_object; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  UnityEngine_Component_o *_4__this; // x19
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v17; // x0
  int32_t v18; // w1
  ServantStatusBattleListViewItem_o *p_monitor; // x0
  System_Enum_o v20; // [xsp+8h] [xbp-48h] BYREF
  int32_t v21; // [xsp+18h] [xbp-38h]

  if ( (byte_49F9FD1 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_1B640C8(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v5);
    sub_1B640C8(&WarBoardManager_WarBoardSqEfType_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_18785/*"ef_sq_"*/, v7);
    byte_49F9FD1 = 1;
  }
  effectId = this->fields.effectId;
  v20.klass = (System_Enum_c *)WarBoardManager_WarBoardSqEfType_TypeInfo;
  v20.monitor = (void *)-1LL;
  v21 = effectId;
  v9 = System_Enum__ToString(&v20, 0LL);
  v10 = System_String__Concat_61375396((System_String_o *)StringLiteral_18785/*"ef_sq_"*/, v9, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               v10,
                               (const MethodInfo_2F15D90 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (Il2CppObject *)UnityEngine_Object__op_Inequality(
                               (UnityEngine_Object_o *)CommonEffectAsset_object,
                               0LL,
                               0LL);
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this )
LABEL_13:
    sub_1B64324(Instance);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    transform = UnityEngine_Component__get_transform(_4__this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v17 = UnityEngine_Object__Instantiate_object__49003980(
            CommonEffectAsset_object,
            transform,
            (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
    _4__this[10].monitor = v17;
    v18 = (int)v17;
    p_monitor = (ServantStatusBattleListViewItem_o *)&_4__this[10].monitor;
  }
  else
  {
    _4__this[10].monitor = 0LL;
    p_monitor = (ServantStatusBattleListViewItem_o *)&_4__this[10].monitor;
    v18 = 0;
  }
  sub_1B6406C(p_monitor, v18, v13, v14);
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
  Il2CppObject *asset; // x20
  UnityEngine_Transform_o *transform; // x21
  struct WarBoardSquareComponent_o *v8; // x8
  Il2CppObject *v9; // x2

  if ( (byte_49F9FD2 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__GameObject__set_Item__, method);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_49F9FD2 = 1;
  }
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  asset = (Il2CppObject *)this->fields.asset;
  transform = UnityEngine_Component__get_transform(_4__this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  _4__this = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__49003980(
                                          asset,
                                          transform,
                                          (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
  v8 = this->fields.__4__this;
  if ( !v8 || (v9 = (Il2CppObject *)_4__this, (_4__this = (UnityEngine_Component_o *)v8->fields.dicEffect) == 0LL) )
LABEL_9:
    sub_1B64324(_4__this);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)_4__this,
    (Il2CppObject *)this->fields.key,
    v9,
    (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__GameObject__set_Item__);
}