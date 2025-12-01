void WarBoardSquareComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4CC4CE4 & 1) == 0 )
  {
    sub_1C713B0(&WarBoardSquareComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_12622/*"ScaleSquare_start"*/);
    byte_4CC4CE4 = 1;
  }
  WarBoardSquareComponent_TypeInfo->static_fields->UNLOCK_ANIMATION_NAME = (struct System_String_o *)StringLiteral_12622/*"ScaleSquare_start"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)WarBoardSquareComponent_TypeInfo->static_fields,
    StringLiteral_12622/*"ScaleSquare_start"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void WarBoardSquareComponent___ctor(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CC4CE3 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
    byte_4CC4CE3 = 1;
  }
  this->fields.costAnimFadeTime = 0.3;
  *(_OWORD *)&this->fields.costLabelPos.fields.x = xmmword_CEF8A0;
  *(_OWORD *)&this->fields.costLabelMovePos.fields.y = xmmword_CF04F0;
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C715FC(System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_34CAD30 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
  this->fields.dicEffect = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.dicEffect, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardSquareComponent__ActiveEditPointArrow(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *selectMarkerArrow; // x20
  __int64 v4; // x1
  UnityEngine_Behaviour_o *v5; // x0

  if ( (byte_4CC4CD1 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC4CD1 = 1;
  }
  selectMarkerArrow = (UnityEngine_Object_o *)this->fields.selectMarkerArrow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectMarkerArrow, 0, 0) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields.selectMarkerArrow;
    if ( !v5 )
      sub_1C71608(0, v4);
    UnityEngine_Behaviour__set_enabled(v5, 1, 0);
  }
}


void WarBoardSquareComponent__DeactiveEditPointArrow(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *selectMarkerArrow; // x20
  __int64 v4; // x1
  UnityEngine_Behaviour_o *v5; // x0

  if ( (byte_4CC4CD2 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC4CD2 = 1;
  }
  selectMarkerArrow = (UnityEngine_Object_o *)this->fields.selectMarkerArrow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectMarkerArrow, 0, 0) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields.selectMarkerArrow;
    if ( !v5 )
      sub_1C71608(0, v4);
    UnityEngine_Behaviour__set_enabled(v5, 0, 0);
  }
}


void WarBoardSquareComponent__DisableEditPosition(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectMarker; // x0
  struct CommonEffectComponent_o *selectMarkerCommonEffect; // x20
  System_Action_o *v5; // x21

  if ( (byte_4CC4CD0 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_WarBoardSquareComponent__DisableEditPosition_b__40_0__);
    byte_4CC4CD0 = 1;
  }
  selectMarker = this->fields.selectMarker;
  if ( !selectMarker )
    goto LABEL_8;
  if ( UnityEngine_GameObject__get_activeSelf(selectMarker, 0) )
  {
    selectMarkerCommonEffect = this->fields.selectMarkerCommonEffect;
    v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_WarBoardSquareComponent__DisableEditPosition_b__40_0__, 0);
    if ( selectMarkerCommonEffect )
    {
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, const MethodInfo *))selectMarkerCommonEffect->klass->vtable._8_Stop.methodPtr)(
        selectMarkerCommonEffect,
        0,
        v5,
        selectMarkerCommonEffect->klass->vtable._8_Stop.method);
      return;
    }
LABEL_8:
    sub_1C71608(selectMarker, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardSquareComponent__DispBattleRange(
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
    UnityEngine_GameObject__SetActive(battleTargetPlayer, 1, 0);
    battleTargetPlayer = (UnityEngine_GameObject_o *)this->fields.battleTargetPlayerCommonEffect;
    if ( !battleTargetPlayer )
      goto LABEL_8;
  }
  else
  {
    battleTargetPlayer = this->fields.battleTargetEnemy;
    if ( !battleTargetPlayer
      || (UnityEngine_GameObject__SetActive(battleTargetPlayer, 1, 0),
          (battleTargetPlayer = (UnityEngine_GameObject_o *)this->fields.battleTargetEnemyCommonEffect) == 0) )
    {
LABEL_8:
      sub_1C71608(battleTargetPlayer, isPlayerForce);
    }
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, _QWORD, _QWORD))battleTargetPlayer->klass[1]._1.byval_arg.data)(
    battleTargetPlayer,
    1,
    0,
    *(_QWORD *)&battleTargetPlayer->klass[1]._1.byval_arg.bits);
}


void WarBoardSquareComponent__EnableEditPosition(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectMarker; // x0

  selectMarker = this->fields.selectMarker;
  if ( !selectMarker
    || (UnityEngine_GameObject__SetActive(selectMarker, 1, 0),
        (selectMarker = (UnityEngine_GameObject_o *)this->fields.selectMarkerCommonEffect) == 0) )
  {
    sub_1C71608(selectMarker, method);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, _QWORD, _QWORD))selectMarker->klass[1]._1.byval_arg.data)(
    selectMarker,
    1,
    0,
    *(_QWORD *)&selectMarker->klass[1]._1.byval_arg.bits);
}


void WarBoardSquareComponent__FinishUnDispCostAnim(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  void *costLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v5; // x0
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  costLabel = this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_6;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0);
  GameObjectExtensions__ResetLocalScale(gameObject, 0);
  costLabel = this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_6;
  v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0);
  GameObjectExtensions__SetLocalPosition(v5, this->fields.costLabelPos, 0);
  costLabel = this->fields.costLabel;
  if ( !costLabel
    || (v6.fields.r = *((float *)costLabel + 37),
        v6.fields.g = *((float *)costLabel + 38),
        v6.fields.b = *((float *)costLabel + 39),
        v6.fields.a = 0.0,
        UIWidget__set_color((UIWidget_o *)costLabel, v6, 0),
        (costLabel = this->fields.movePoint) == 0) )
  {
LABEL_6:
    sub_1C71608(costLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costLabel, 0, 0);
}


bool WarBoardSquareComponent__GetButtonIsEnable(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  struct UIButton_o *button; // x0

  button = this->fields.button;
  if ( !button )
    sub_1C71608(0, method);
  return ((__int64 (__fastcall *)(struct UIButton_o *, const MethodInfo *))button->klass->vtable._4_get_isEnabled.methodPtr)(
           button,
           button->klass->vtable._4_get_isEnabled.method);
}


void WarBoardSquareComponent__InitCostAnim(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *tweenScale; // x20
  UnityEngine_Object_o *v4; // x20
  UnityEngine_Object_o *tweenPosition; // x20
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Object_o *tweenAlpha; // x20
  UnityEngine_Object_o *v8; // x19

  if ( (byte_4CC4CDA & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC4CDA = 1;
  }
  tweenScale = (UnityEngine_Object_o *)this->fields.tweenScale;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tweenScale, 0, 0) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.tweenScale;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(v4, 0);
  }
  tweenPosition = (UnityEngine_Object_o *)this->fields.tweenPosition;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tweenPosition, 0, 0) )
  {
    v6 = (UnityEngine_Object_o *)this->fields.tweenPosition;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(v6, 0);
  }
  tweenAlpha = (UnityEngine_Object_o *)this->fields.tweenAlpha;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tweenAlpha, 0, 0) )
  {
    v8 = (UnityEngine_Object_o *)this->fields.tweenAlpha;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(v8, 0);
  }
}


void WarBoardSquareComponent__Initialize(
        WarBoardSquareComponent_o *this,
        UIAtlas_o *imageSetAtlas,
        WarBoardSquareData_o *data,
        const MethodInfo *method)
{
  char *dicEffect; // x0
  struct WarBoardSquareData_o **p_squareData; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  UnityEngine_Transform_o *transform; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  UILabel_o *costLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v24; // x0
  Il2CppObject *Component_object; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  Il2CppObject *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  Il2CppObject *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  Il2CppObject *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  Il2CppObject *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  const MethodInfo *v60; // x2
  const MethodInfo *v61; // x1
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CC4CCE & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C713B0(&StringLiteral_23745/*"squares"*/);
    sub_1C713B0(&StringLiteral_23746/*"squares_target"*/);
    byte_4CC4CCE = 1;
  }
  dicEffect = (char *)this->fields.dicEffect;
  if ( !dicEffect )
    goto LABEL_33;
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)dicEffect,
    (const MethodInfo_34CB868 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
  this->fields.squareData = data;
  p_squareData = &this->fields.squareData;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.squareData, (int32_t)data, v9, v10, v11, v12, v13, v14);
  dicEffect = (char *)this->fields.squareImage;
  if ( !dicEffect )
    goto LABEL_33;
  UISprite__set_atlas((UISprite_o *)dicEffect, imageSetAtlas, 0);
  dicEffect = (char *)this->fields.squareImage;
  if ( !dicEffect )
    goto LABEL_33;
  UISprite__set_spriteName((UISprite_o *)dicEffect, (System_String_o *)StringLiteral_23745/*"squares"*/, 0);
  dicEffect = (char *)this->fields.squareSubImage;
  if ( !dicEffect )
    goto LABEL_33;
  UISprite__set_atlas((UISprite_o *)dicEffect, imageSetAtlas, 0);
  dicEffect = (char *)this->fields.squareSubImage;
  if ( !dicEffect )
    goto LABEL_33;
  UISprite__set_spriteName((UISprite_o *)dicEffect, (System_String_o *)StringLiteral_23746/*"squares_target"*/, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  dicEffect = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !data )
    goto LABEL_33;
  if ( !dicEffect )
    goto LABEL_33;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)dicEffect,
                     data->fields._squareIndex_k__BackingField,
                     0);
  if ( !transform )
    goto LABEL_33;
  UnityEngine_Transform__set_localPosition(transform, SquarePosition, 0);
  dicEffect = (char *)*p_squareData;
  if ( !*p_squareData )
    goto LABEL_33;
  *((_QWORD *)dicEffect + 6) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(dicEffect + 48), (int32_t)this, v16, v17, v18, v19, v20, v21);
  costLabel = this->fields.costLabel;
  dicEffect = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !dicEffect )
    goto LABEL_33;
  if ( !costLabel )
    goto LABEL_33;
  UILabel__set_bitmapFont(costLabel, *((UIFont_o **)dicEffect + 34), 0);
  dicEffect = (char *)this->fields.costLabel;
  if ( !dicEffect )
    goto LABEL_33;
  dicEffect = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dicEffect, 0);
  if ( !dicEffect )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dicEffect, 1, 0);
  dicEffect = (char *)this->fields.costLabel;
  if ( !dicEffect )
    goto LABEL_33;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dicEffect, 0);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.costLabelPos, 0);
  dicEffect = (char *)this->fields.costLabel;
  if ( !dicEffect )
    goto LABEL_33;
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dicEffect, 0);
  GameObjectExtensions__ResetLocalScale(v24, 0);
  dicEffect = (char *)this->fields.costLabel;
  if ( !dicEffect )
    goto LABEL_33;
  v63.fields.r = *((float *)dicEffect + 37);
  v63.fields.g = *((float *)dicEffect + 38);
  v63.fields.b = *((float *)dicEffect + 39);
  v63.fields.a = 0.0;
  UIWidget__set_color((UIWidget_o *)dicEffect, v63, 0);
  dicEffect = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !dicEffect )
    goto LABEL_33;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)dicEffect,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)Component_object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.simpleAnimation,
    (int32_t)Component_object,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  dicEffect = (char *)this->fields.selectMarker;
  if ( !dicEffect )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dicEffect, 0, 0);
  dicEffect = (char *)this->fields.selectMarker;
  if ( !dicEffect )
    goto LABEL_33;
  v32 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)dicEffect,
          (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.selectMarkerCommonEffect = (struct CommonEffectComponent_o *)v32;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.selectMarkerCommonEffect,
    (int32_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  dicEffect = (char *)this->fields.selectCircle;
  if ( !dicEffect )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dicEffect, 0, 0);
  dicEffect = (char *)this->fields.selectCircle;
  if ( !dicEffect )
    goto LABEL_33;
  v39 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)dicEffect,
          (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.selectCircleCommonEffect = (struct CommonEffectComponent_o *)v39;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.selectCircleCommonEffect,
    (int32_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  dicEffect = (char *)this->fields.battleTargetPlayer;
  if ( !dicEffect )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dicEffect, 0, 0);
  dicEffect = (char *)this->fields.battleTargetPlayer;
  if ( !dicEffect )
    goto LABEL_33;
  v46 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)dicEffect,
          (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.battleTargetPlayerCommonEffect = (struct CommonEffectComponent_o *)v46;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.battleTargetPlayerCommonEffect,
    (int32_t)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  dicEffect = (char *)this->fields.battleTargetEnemy;
  if ( !dicEffect )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dicEffect, 0, 0);
  dicEffect = (char *)this->fields.battleTargetEnemy;
  if ( !dicEffect )
    goto LABEL_33;
  v53 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)dicEffect,
          (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.battleTargetEnemyCommonEffect = (struct CommonEffectComponent_o *)v53;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.battleTargetEnemyCommonEffect,
    (int32_t)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  WarBoardSquareComponent__SetMovePoint(this, 1, v60);
  this->fields.isSelectable = 0;
  WarBoardSquareComponent__SetSprite(this, v61);
  dicEffect = (char *)this->fields.squareImage;
  if ( !dicEffect
    || ((*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)dicEffect + 840LL))(
          dicEffect,
          *(_QWORD *)(*(_QWORD *)dicEffect + 848LL)),
        (dicEffect = (char *)this->fields.squareImage) == 0)
    || (UIWidget__ResizeCollider((UIWidget_o *)dicEffect, 0), (dicEffect = (char *)this->fields.squareSubImage) == 0)
    || ((*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)dicEffect + 840LL))(
          dicEffect,
          *(_QWORD *)(*(_QWORD *)dicEffect + 848LL)),
        (dicEffect = (char *)this->fields.squareSubImage) == 0) )
  {
LABEL_33:
    sub_1C71608(dicEffect, imageSetAtlas);
  }
  UIWidget__ResizeCollider((UIWidget_o *)dicEffect, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardSquareComponent__NondispBattleRange(
        WarBoardSquareComponent_o *this,
        bool isPlayerForce,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *battleTargetPlayer; // x0
  struct CommonEffectComponent_o *battleTargetPlayerCommonEffect; // x20
  System_Action_o *v7; // x0
  intptr_t *v8; // x8
  System_Action_o *v9; // x21

  if ( (byte_4CC4CDB & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_WarBoardSquareComponent__NondispBattleRange_b__57_0__);
    sub_1C713B0(&Method_WarBoardSquareComponent__NondispBattleRange_b__57_1__);
    byte_4CC4CDB = 1;
  }
  if ( isPlayerForce )
  {
    battleTargetPlayer = this->fields.battleTargetPlayer;
    if ( !battleTargetPlayer )
      goto LABEL_13;
    if ( UnityEngine_GameObject__get_activeSelf(battleTargetPlayer, 0) )
    {
      battleTargetPlayerCommonEffect = this->fields.battleTargetPlayerCommonEffect;
      v7 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      v8 = &Method_WarBoardSquareComponent__NondispBattleRange_b__57_0__;
      goto LABEL_10;
    }
  }
  else
  {
    battleTargetPlayer = this->fields.battleTargetEnemy;
    if ( !battleTargetPlayer )
      goto LABEL_13;
    if ( UnityEngine_GameObject__get_activeSelf(battleTargetPlayer, 0) )
    {
      battleTargetPlayerCommonEffect = this->fields.battleTargetEnemyCommonEffect;
      v7 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      v8 = &Method_WarBoardSquareComponent__NondispBattleRange_b__57_1__;
LABEL_10:
      v9 = v7;
      System_Action___ctor(v7, (Il2CppObject *)this, *v8, 0);
      if ( battleTargetPlayerCommonEffect )
      {
        ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, const MethodInfo *))battleTargetPlayerCommonEffect->klass->vtable._8_Stop.methodPtr)(
          battleTargetPlayerCommonEffect,
          0,
          v9,
          battleTargetPlayerCommonEffect->klass->vtable._8_Stop.method);
        return;
      }
LABEL_13:
      sub_1C71608(battleTargetPlayer, isPlayerForce);
    }
  }
}


void WarBoardSquareComponent__OnClickSquare(WarBoardSquareComponent_o *this, const MethodInfo *method)
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
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x21
  struct WarBoardWallData_array *walls; // x8
  struct WarBoardSquareData_o *v15; // x8

  if ( (byte_4CC4CDC & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C713B0(&Method_WarBoardSquareComponent_OnClickSquare__);
    byte_4CC4CDC = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_31;
  v6 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_31;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_38148676(
                                 Instance,
                                 squareData->fields._squareIndex_k__BackingField,
                                 0);
  v7 = this->fields.squareData;
  if ( !v7 )
    goto LABEL_31;
  v8 = (WarBoardPieceData_o *)Instance;
  Instance = v6->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_31;
  Instance = (WarBoardData_o *)WarBoardData__GetItem(Instance, v7->fields._squareIndex_k__BackingField, 0);
  v9 = this->fields.squareData;
  if ( !v9 )
    goto LABEL_31;
  v10 = (WarBoardItemData_o *)Instance;
  Instance = v6->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_31;
  Effect = WarBoardData__GetEffect(Instance, v9->fields._squareIndex_k__BackingField, 0);
  if ( WarBoardManager__get_isSelectedPiece(v6, 0) && this->fields.isSelectable )
  {
    if ( !v8 || !WarBoardManager__IsSelectedPieceSame(v6, v8, 0) )
    {
      v12 = Method_WarBoardSquareComponent_OnClickSquare__;
      if ( (*((_BYTE *)Method_WarBoardSquareComponent_OnClickSquare__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1C713C8(Method_WarBoardSquareComponent_OnClickSquare__);
      v13 = (System_Reflection_MethodBase_o *)sub_1C71394(v12, v12[4]);
      Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        walls = Instance[1].fields.walls;
        if ( walls )
        {
          Instance = (WarBoardData_o *)OverwriteAssetSoundName__PlaySe(v13, (System_String_o *)walls->max_length, 0, 0);
          v15 = this->fields.squareData;
          if ( v15 )
          {
            WarBoardManager__SelectedPieceAction(v6, v15->fields._squareIndex_k__BackingField, 0);
            return;
          }
        }
      }
LABEL_31:
      sub_1C71608(Instance, v4);
    }
    goto LABEL_21;
  }
  if ( v8 )
  {
LABEL_21:
    Instance = (WarBoardData_o *)v8->fields.pieceComponent;
    if ( !Instance )
      goto LABEL_31;
    ((void (__fastcall *)(WarBoardData_o *, _QWORD))Instance->klass[1]._1.byval_arg.data)(
      Instance,
      *(_QWORD *)&Instance->klass[1]._1.byval_arg.bits);
    return;
  }
  if ( v10 && !WarBoardItemData__get_Acquired(v10, 0) )
  {
    Instance = (WarBoardData_o *)v10->fields.component;
    if ( !Instance )
      goto LABEL_31;
    WarBoardItemComponent__OnClick((WarBoardItemComponent_o *)Instance, 0);
  }
  else if ( Effect )
  {
    Instance = (WarBoardData_o *)Effect->fields.component;
    if ( !Instance )
      goto LABEL_31;
    WarBoardEffectComponent__OnClick((WarBoardEffectComponent_o *)Instance, 0);
  }
  else
  {
    WarBoardManager__HideSimplePopup(v6, 0, 0);
  }
}


void WarBoardSquareComponent__OnDeselect(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectCircle; // x0
  struct CommonEffectComponent_o *selectCircleCommonEffect; // x20
  System_Action_o *v5; // x21

  if ( (byte_4CC4CD7 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_WarBoardSquareComponent__OnDeselect_b__49_0__);
    byte_4CC4CD7 = 1;
  }
  selectCircle = this->fields.selectCircle;
  if ( !selectCircle )
    goto LABEL_8;
  if ( UnityEngine_GameObject__get_activeSelf(selectCircle, 0) )
  {
    selectCircleCommonEffect = this->fields.selectCircleCommonEffect;
    v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_WarBoardSquareComponent__OnDeselect_b__49_0__, 0);
    if ( selectCircleCommonEffect )
    {
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, const MethodInfo *))selectCircleCommonEffect->klass->vtable._8_Stop.methodPtr)(
        selectCircleCommonEffect,
        0,
        v5,
        selectCircleCommonEffect->klass->vtable._8_Stop.method);
      return;
    }
LABEL_8:
    sub_1C71608(selectCircle, method);
  }
}


void WarBoardSquareComponent__OnEffectDisp(
        WarBoardSquareComponent_o *this,
        int32_t effectId,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x20
  System_Delegate_o **v17; // x21
  System_Delegate_o *v18; // x23
  WarBoardTaskBase_TaskCallback_o *v19; // x24
  System_Delegate_o *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_Delegate_o *v27; // x8
  WarBoardTaskBase_TaskCallback_c *v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  Il2CppObject *Instance; // x19
  __int64 v40; // x21
  __int64 v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  __int64 v48; // x0

  if ( (byte_4CC4CDE & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C713B0(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C713B0(&Method_WarBoardSquareComponent___c__DisplayClass60_0__OnEffectDisp_b__0__);
    sub_1C713B0(&WarBoardSquareComponent___c__DisplayClass60_0_TypeInfo);
    sub_1C713B0(&WarBoardCallbackTask_TypeInfo);
    sub_1C713B0(&WarBoardTaskBase___TypeInfo);
    byte_4CC4CDE = 1;
  }
  v7 = sub_1C715FC(WarBoardSquareComponent___c__DisplayClass60_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_20;
  *(_QWORD *)(v7 + 24) = this;
  *(_DWORD *)(v7 + 16) = effectId;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)this, v10, v11, v12, v13, v14, v15);
  v16 = sub_1C715FC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v16, 0, 0);
  if ( !v16 )
    goto LABEL_20;
  v17 = (System_Delegate_o **)(v16 + 32);
  v18 = *(System_Delegate_o **)(v16 + 32);
  v19 = (WarBoardTaskBase_TaskCallback_o *)sub_1C715FC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v19,
    (Il2CppObject *)v7,
    Method_WarBoardSquareComponent___c__DisplayClass60_0__OnEffectDisp_b__0__,
    0);
  v20 = System_Delegate__Combine(v18, (System_Delegate_o *)v19, 0);
  v27 = v20;
  if ( !v20 )
    goto LABEL_9;
  v28 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v20->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v17 = v20, (WarBoardTaskBase_TaskCallback_c *)v20->klass != v28) )
  {
    sub_1C719A4(v20);
LABEL_9:
    *v17 = v27;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v16 + 32), (int32_t)v27, v21, v22, v23, v24, v25, v26);
  if ( !taskList )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v8 = sub_1C71458(WarBoardTaskBase___TypeInfo, 1);
    if ( v8 )
    {
      v40 = v8;
      v41 = sub_1C714EC(v16, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
      if ( !v41 )
      {
        v48 = sub_1C7162C();
        sub_1C714D8(v48, 0);
      }
      if ( !*(_DWORD *)(v40 + 24) )
        sub_1C71610(v41);
      *(_QWORD *)(v40 + 32) = v16;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v40 + 32), v16, v42, v43, v44, v45, v46, v47);
      if ( Instance )
      {
        WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v40, 0);
        return;
      }
    }
LABEL_20:
    sub_1C71608(v8, v9);
  }
  items = taskList->fields._items;
  v36 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++taskList->fields._version;
  if ( !items )
    goto LABEL_20;
  size = taskList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)taskList,
      (Il2CppObject *)v16,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = &items->obj.klass + size;
    taskList->fields._size = size + 1;
    v38[4] = (Il2CppClass *)v16;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v38 + 4), v16, v29, v30, v31, v32, v33, v34);
  }
}


void WarBoardSquareComponent__OnEffectHide(
        WarBoardSquareComponent_o *this,
        int32_t effectId,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  System_Delegate_o **v9; // x22
  System_Delegate_o *v10; // x23
  WarBoardTaskBase_TaskCallback_o *v11; // x24
  System_Delegate_o *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Delegate_o *v19; // x8
  WarBoardTaskBase_TaskCallback_c *v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  Il2CppObject *Instance; // x19
  __int64 v32; // x21
  __int64 v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  __int64 v40; // x0

  if ( (byte_4CC4CDF & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C713B0(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C713B0(&WarBoardCallbackTask_TypeInfo);
    sub_1C713B0(&Method_WarBoardSquareComponent__OnEffectHide_b__61_0__);
    sub_1C713B0(&WarBoardTaskBase___TypeInfo);
    byte_4CC4CDF = 1;
  }
  v6 = sub_1C715FC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v6, 0, 0);
  if ( !v6 )
    goto LABEL_19;
  v9 = (System_Delegate_o **)(v6 + 32);
  v10 = *(System_Delegate_o **)(v6 + 32);
  v11 = (WarBoardTaskBase_TaskCallback_o *)sub_1C715FC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v11,
    (Il2CppObject *)this,
    Method_WarBoardSquareComponent__OnEffectHide_b__61_0__,
    0);
  v12 = System_Delegate__Combine(v10, (System_Delegate_o *)v11, 0);
  v19 = v12;
  if ( !v12 )
    goto LABEL_8;
  v20 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v12->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v9 = v12, (WarBoardTaskBase_TaskCallback_c *)v12->klass != v20) )
  {
    sub_1C719A4(v12);
LABEL_8:
    *v9 = v19;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v6 + 32), (int32_t)v19, v13, v14, v15, v16, v17, v18);
  if ( !taskList )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v7 = sub_1C71458(WarBoardTaskBase___TypeInfo, 1);
    if ( v7 )
    {
      v32 = v7;
      v33 = sub_1C714EC(v6, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
      if ( !v33 )
      {
        v40 = sub_1C7162C();
        sub_1C714D8(v40, 0);
      }
      if ( !*(_DWORD *)(v32 + 24) )
        sub_1C71610(v33);
      *(_QWORD *)(v32 + 32) = v6;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v32 + 32), v6, v34, v35, v36, v37, v38, v39);
      if ( Instance )
      {
        WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v32, 0);
        return;
      }
    }
LABEL_19:
    sub_1C71608(v7, v8);
  }
  items = taskList->fields._items;
  v28 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++taskList->fields._version;
  if ( !items )
    goto LABEL_19;
  size = taskList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)taskList,
      (Il2CppObject *)v6,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &items->obj.klass + size;
    taskList->fields._size = size + 1;
    v30[4] = (Il2CppClass *)v6;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v30 + 4), v6, v21, v22, v23, v24, v25, v26);
  }
}


void WarBoardSquareComponent__OnLongClickSquare(WarBoardSquareComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4CC4CDD & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4CC4CDD = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_21;
  v6 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_21;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_38148676(
                                 Instance,
                                 squareData->fields._squareIndex_k__BackingField,
                                 0);
  v7 = this->fields.squareData;
  if ( !v7 )
    goto LABEL_21;
  v8 = Instance;
  Instance = v6->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_21;
  Instance = (WarBoardData_o *)WarBoardData__GetItem(Instance, v7->fields._squareIndex_k__BackingField, 0);
  v9 = this->fields.squareData;
  if ( !v9 )
    goto LABEL_21;
  v10 = (WarBoardItemData_o *)Instance;
  Instance = v6->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_21;
  Effect = WarBoardData__GetEffect(Instance, v9->fields._squareIndex_k__BackingField, 0);
  if ( v8 )
  {
    Instance = (WarBoardData_o *)v8[1].fields.stageNpcMaster;
    if ( Instance )
    {
      ((void (__fastcall *)(WarBoardData_o *, _QWORD))Instance->klass[1]._1.this_arg.data)(
        Instance,
        *(_QWORD *)&Instance->klass[1]._1.this_arg.bits);
      return;
    }
LABEL_21:
    sub_1C71608(Instance, v4);
  }
  v12 = Effect;
  if ( v10 && !WarBoardItemData__get_Acquired(v10, 0) )
  {
    Instance = (WarBoardData_o *)v10->fields.component;
    if ( !Instance )
      goto LABEL_21;
    WarBoardItemComponent__OnLongClick((WarBoardItemComponent_o *)Instance, 0);
  }
  else if ( v12 )
  {
    Instance = (WarBoardData_o *)v12->fields.component;
    if ( !Instance )
      goto LABEL_21;
    WarBoardEffectComponent__OnLongClick((WarBoardEffectComponent_o *)Instance, 0);
  }
  else
  {
    WarBoardManager__HideSimplePopup(v6, 0, 0);
  }
}


void WarBoardSquareComponent__OnSelect(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectCircle; // x0

  selectCircle = this->fields.selectCircle;
  if ( !selectCircle
    || (UnityEngine_GameObject__SetActive(selectCircle, 1, 0),
        (selectCircle = (UnityEngine_GameObject_o *)this->fields.selectCircleCommonEffect) == 0) )
  {
    sub_1C71608(selectCircle, method);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, _QWORD, _QWORD))selectCircle->klass[1]._1.byval_arg.data)(
    selectCircle,
    1,
    0,
    *(_QWORD *)&selectCircle->klass[1]._1.byval_arg.bits);
}


bool WarBoardSquareComponent__PlayEffect(
        WarBoardSquareComponent_o *this,
        System_String_o *effectKey,
        System_String_o *prefix,
        const MethodInfo *method)
{
  __int64 v7; // x20
  WarBoardManager_o *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_String_o *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct WarBoardSquareData_o *squareData; // x8
  int imageId_k__BackingField; // w8
  int v25; // w9
  System_String_o *v26; // x0
  System_String_o *v27; // x0
  long double inited; // q0
  _QWORD *v29; // x22
  System_String_o *v30; // x21
  __int64 v31; // x8
  __int64 v32; // x0
  __int64 v33; // x0
  System_String_o *v34; // x21
  Il2CppObject *CommonEffectAsset_object; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  UnityEngine_Object_o *v42; // x21
  __int64 v44; // x21
  UnityEngine_Object_o *uiDataComp; // x20
  unsigned int v46; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CC4CE0 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_System_Array_Empty_object___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C713B0(&Method_WarBoardSquareComponent___c__DisplayClass62_0__PlayEffect_b__0__);
    sub_1C713B0(&WarBoardSquareComponent___c__DisplayClass62_0_TypeInfo);
    sub_1C713B0(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    byte_4CC4CE0 = 1;
  }
  v7 = sub_1C715FC(WarBoardSquareComponent___c__DisplayClass62_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_30;
  *(_QWORD *)(v7 + 24) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)this, v10, v11, v12, v13, v14, v15);
  v16 = System_String__Concat_64031724(prefix, effectKey, 0);
  *(_QWORD *)(v7 + 32) = v16;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)v16, v17, v18, v19, v20, v21, v22);
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_30;
  imageId_k__BackingField = squareData->fields._imageId_k__BackingField;
  if ( imageId_k__BackingField >= 0 )
    v25 = imageId_k__BackingField;
  else
    v25 = imageId_k__BackingField + 1;
  v46 = imageId_k__BackingField - (v25 & 0xFFFFFFFE);
  v26 = System_Int32__ToString((int32_t)&v46, 0);
  v27 = System_String__Concat_64031724(effectKey, v26, 0);
  v29 = Method_System_Array_Empty_object___;
  v30 = v27;
  v31 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v31 )
  {
    sub_1C474A0(Method_System_Array_Empty_object___);
    v31 = v29[7];
  }
  v32 = *(_QWORD *)(v31 + 16);
  if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
    v32 = sub_1C47444(inited);
  if ( !*(_DWORD *)(v32 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v32);
  v33 = *(_QWORD *)(v29[7] + 16LL);
  if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
    v33 = sub_1C47444(inited);
  v34 = System_String__Format_64073168(v30, **(System_Object_array ***)(v33 + 184), 0);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               Instance,
                               v34,
                               (const MethodInfo_3230D98 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  *(_QWORD *)(v7 + 16) = CommonEffectAsset_object;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)CommonEffectAsset_object, v36, v37, v38, v39, v40, v41);
  v42 = *(UnityEngine_Object_o **)(v7 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v42, 0, 0) )
    return 0;
  v44 = sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    (System_Action_o *)v44,
    (Il2CppObject *)v7,
    Method_WarBoardSquareComponent___c__DisplayClass62_0__PlayEffect_b__0__,
    0);
  uiDataComp = (UnityEngine_Object_o *)this->fields.uiDataComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (WarBoardManager_o *)UnityEngine_Object__op_Inequality(uiDataComp, 0, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( v44 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(v44 + 24))(*(_QWORD *)(v44 + 64), *(_QWORD *)(v44 + 40));
      return 1;
    }
LABEL_30:
    sub_1C71608(Instance, v9);
  }
  Instance = (WarBoardManager_o *)this->fields.uiDataComp;
  if ( !Instance )
    goto LABEL_30;
  WarBoardControlUiDataComponent__SyncAnimation((WarBoardControlUiDataComponent_o *)Instance, (System_Action_o *)v44, 0);
  return 1;
}


void WarBoardSquareComponent__PlayUnDispCostAnim(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 costLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct TweenScale_o *tweenScale; // x21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  struct TweenScale_o *v15; // x8
  float costAnimScale; // s0
  struct TweenScale_o *v17; // x20
  UnityEngine_GameObject_o *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1

  if ( (byte_4CC4CD8 & 1) == 0 )
  {
    sub_1C713B0(&Method_UITweener_Begin_TweenScale___);
    sub_1C713B0(&StringLiteral_10679/*"PlayUnDispCostAnim2"*/);
    byte_4CC4CD8 = 1;
  }
  costLabel = (__int64)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_11;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0);
  v5 = UITweener__Begin_object_(
         gameObject,
         this->fields.costAnimScaleTime,
         (const MethodInfo_32209B8 *)Method_UITweener_Begin_TweenScale___);
  this->fields.tweenScale = (struct TweenScale_o *)v5;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.tweenScale, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  tweenScale = this->fields.tweenScale;
  if ( !byte_4CC0D0E )
  {
    costLabel = sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D0E = 1;
  }
  if ( !tweenScale )
    goto LABEL_11;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->oneVector.fields.z;
  *(_QWORD *)&tweenScale->fields.from.fields.x = *(_QWORD *)&static_fields->oneVector.fields.x;
  tweenScale->fields.from.fields.z = z;
  v15 = this->fields.tweenScale;
  if ( !v15 )
    goto LABEL_11;
  costAnimScale = this->fields.costAnimScale;
  v15->fields.to.fields.x = costAnimScale;
  v15->fields.to.fields.y = costAnimScale;
  v15->fields.to.fields.z = costAnimScale;
  v17 = this->fields.tweenScale;
  if ( !v17
    || (v17->fields.method = 6,
        v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        v17->fields.eventReceiver = v18,
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&v17->fields.eventReceiver,
          (int32_t)v18,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24),
        (costLabel = (__int64)this->fields.tweenScale) == 0) )
  {
LABEL_11:
    sub_1C71608(costLabel, method);
  }
  v31 = StringLiteral_10679/*"PlayUnDispCostAnim2"*/;
  *(_QWORD *)(costLabel + 88) = StringLiteral_10679/*"PlayUnDispCostAnim2"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(costLabel + 88), v31, v25, v26, v27, v28, v29, v30);
}


void WarBoardSquareComponent__PlayUnDispCostAnim2(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 costLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct TweenPosition_o *tweenPosition; // x8
  struct TweenPosition_o *v13; // x8
  struct TweenPosition_o *v14; // x20
  UnityEngine_GameObject_o *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  UnityEngine_GameObject_o *v22; // x0
  Il2CppObject *v23; // x0
  struct TweenScale_o **p_tweenScale; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct TweenScale_o *tweenScale; // x8
  float costAnimScale; // s0
  struct TweenScale_o *v33; // x21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  struct TweenScale_o *v36; // x20
  UnityEngine_GameObject_o *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  UnityEngine_GameObject_o *v44; // x0
  Il2CppObject *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  struct TweenAlpha_o *tweenAlpha; // x20
  UnityEngine_GameObject_o *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  int32_t v66; // w1
  __int64 v67; // [xsp+0h] [xbp-50h]
  __int64 v68; // [xsp+10h] [xbp-40h]

  if ( (byte_4CC4CD9 & 1) == 0 )
  {
    sub_1C713B0(&Method_UITweener_Begin_TweenAlpha___);
    sub_1C713B0(&Method_UITweener_Begin_TweenPosition___);
    sub_1C713B0(&Method_UITweener_Begin_TweenScale___);
    sub_1C713B0(&StringLiteral_6726/*"FinishUnDispCostAnim"*/);
    byte_4CC4CD9 = 1;
  }
  costLabel = (__int64)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0);
  v5 = UITweener__Begin_object_(
         gameObject,
         this->fields.costAnimFadeTime,
         (const MethodInfo_32209B8 *)Method_UITweener_Begin_TweenPosition___);
  this->fields.tweenPosition = (struct TweenPosition_o *)v5;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.tweenPosition, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  tweenPosition = this->fields.tweenPosition;
  v68 = *(_QWORD *)&this->fields.costLabelPos.fields.x;
  if ( !tweenPosition )
    goto LABEL_17;
  tweenPosition->fields.from.fields.z = this->fields.costLabelPos.fields.z;
  *(_QWORD *)&tweenPosition->fields.from.fields.x = v68;
  v13 = this->fields.tweenPosition;
  v67 = *(_QWORD *)&this->fields.costLabelMovePos.fields.x;
  if ( !v13 )
    goto LABEL_17;
  v13->fields.to.fields.z = this->fields.costLabelMovePos.fields.z;
  *(_QWORD *)&v13->fields.to.fields.x = v67;
  v14 = this->fields.tweenPosition;
  if ( !v14 )
    goto LABEL_17;
  v14->fields.method = 0;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v14->fields.eventReceiver = v15;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v14->fields.eventReceiver, (int32_t)v15, v16, v17, v18, v19, v20, v21);
  costLabel = (__int64)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_17;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0);
  v23 = UITweener__Begin_object_(
          v22,
          this->fields.costAnimFadeTime,
          (const MethodInfo_32209B8 *)Method_UITweener_Begin_TweenScale___);
  this->fields.tweenScale = (struct TweenScale_o *)v23;
  p_tweenScale = &this->fields.tweenScale;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.tweenScale, (int32_t)v23, v25, v26, v27, v28, v29, v30);
  tweenScale = this->fields.tweenScale;
  if ( !tweenScale )
    goto LABEL_17;
  costAnimScale = this->fields.costAnimScale;
  tweenScale->fields.from.fields.x = costAnimScale;
  tweenScale->fields.from.fields.y = costAnimScale;
  tweenScale->fields.from.fields.z = costAnimScale;
  v33 = *p_tweenScale;
  if ( !byte_4CC0D09 )
  {
    costLabel = sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  if ( !v33 )
    goto LABEL_17;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&v33->fields.to.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v33->fields.to.fields.z = z;
  v36 = *p_tweenScale;
  if ( !v36 )
    goto LABEL_17;
  v36->fields.method = 0;
  v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v36->fields.eventReceiver = v37;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v36->fields.eventReceiver, (int32_t)v37, v38, v39, v40, v41, v42, v43);
  costLabel = (__int64)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_17;
  v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0);
  v45 = UITweener__Begin_object_(
          v44,
          this->fields.costAnimFadeTime,
          (const MethodInfo_32209B8 *)Method_UITweener_Begin_TweenAlpha___);
  this->fields.tweenAlpha = (struct TweenAlpha_o *)v45;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.tweenAlpha, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  tweenAlpha = this->fields.tweenAlpha;
  if ( !tweenAlpha
    || (tweenAlpha->fields.method = 0,
        *(_QWORD *)&tweenAlpha->fields.from = 1065353216,
        v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        tweenAlpha->fields.eventReceiver = v53,
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&tweenAlpha->fields.eventReceiver,
          (int32_t)v53,
          v54,
          v55,
          v56,
          v57,
          v58,
          v59),
        (costLabel = (__int64)this->fields.tweenAlpha) == 0) )
  {
LABEL_17:
    sub_1C71608(costLabel, method);
  }
  v66 = StringLiteral_6726/*"FinishUnDispCostAnim"*/;
  *(_QWORD *)(costLabel + 88) = StringLiteral_6726/*"FinishUnDispCostAnim"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(costLabel + 88), v66, v60, v61, v62, v63, v64, v65);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardSquareComponent__Selectable(
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
    UIWidget__set_color(costLabel, v8, 0);
  }
  costLabel = (UIWidget_o *)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_9;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.costLabelPos, 0);
  costLabel = (UIWidget_o *)this->fields.costLabel;
  if ( !costLabel
    || (v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0),
        GameObjectExtensions__ResetLocalScale(v7, 0),
        costLabel = (UIWidget_o *)this->fields.movePoint,
        this->fields.isSelectable = !isOnActionPiece,
        !costLabel)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costLabel, 1, 0),
        (costLabel = (UIWidget_o *)this->fields.movePointCommonEffect) == 0) )
  {
LABEL_9:
    sub_1C71608(costLabel, isOnActionPiece);
  }
  ((void (__fastcall *)(UIWidget_o *, __int64, _QWORD, const MethodInfo *))costLabel->klass->vtable._6_get_canBeAnchored.methodPtr)(
    costLabel,
    1,
    0,
    costLabel->klass->vtable._6_get_canBeAnchored.method);
}


void WarBoardSquareComponent__SetButtonEnable(WarBoardSquareComponent_o *this, bool enable, const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  UnityEngine_Object_o *subButton; // x21
  __int64 v7; // x1
  struct UIButton_o *v8; // x0
  UIButton_c *klass; // x8
  int32_t mState; // w20

  if ( (byte_4CC4CD6 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC4CD6 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(button, 0, 0) )
  {
    subButton = (UnityEngine_Object_o *)this->fields.subButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(subButton, 0, 0) )
    {
      v8 = this->fields.button;
      if ( v8 )
      {
        if ( enable )
        {
          ((void (__fastcall *)(struct UIButton_o *, __int64, const MethodInfo *))v8->klass->vtable._5_set_isEnabled.methodPtr)(
            v8,
            1,
            v8->klass->vtable._5_set_isEnabled.method);
          v8 = this->fields.subButton;
          if ( v8 )
          {
            klass = v8->klass;
LABEL_17:
            klass->vtable._5_set_isEnabled.methodPtr();
            return;
          }
        }
        else
        {
          mState = v8->fields.mState;
          ((void (__fastcall *)(struct UIButton_o *, _QWORD, const MethodInfo *))v8->klass->vtable._5_set_isEnabled.methodPtr)(
            v8,
            0,
            v8->klass->vtable._5_set_isEnabled.method);
          if ( mState )
          {
            v8 = this->fields.subButton;
            if ( v8 )
            {
              klass = v8->klass;
              goto LABEL_17;
            }
          }
          else
          {
            v8 = this->fields.button;
            if ( v8 )
            {
              ((void (__fastcall *)(struct UIButton_o *, _QWORD, __int64, const MethodInfo *))v8->klass->vtable._14_SetState.methodPtr)(
                v8,
                0,
                1,
                v8->klass->vtable._14_SetState.method);
              v8 = this->fields.subButton;
              if ( v8 )
              {
                ((void (__fastcall *)(struct UIButton_o *, _QWORD, const MethodInfo *))v8->klass->vtable._5_set_isEnabled.methodPtr)(
                  v8,
                  0,
                  v8->klass->vtable._5_set_isEnabled.method);
                v8 = this->fields.subButton;
                if ( v8 )
                {
                  ((void (__fastcall *)(struct UIButton_o *, _QWORD, __int64, const MethodInfo *))v8->klass->vtable._14_SetState.methodPtr)(
                    v8,
                    0,
                    1,
                    v8->klass->vtable._14_SetState.method);
                  return;
                }
              }
            }
          }
        }
      }
      sub_1C71608(v8, v7);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardSquareComponent__SetCost(
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
  void *costLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v18; // x0
  UILabel_o *v19; // x20
  System_String_o *v20; // x21
  Il2CppObject *v21; // x0
  int32_t v22; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = gradientBottom.fields.a;
  b = gradientBottom.fields.b;
  g = gradientBottom.fields.g;
  r = gradientBottom.fields.r;
  v9 = gradientTop.fields.a;
  v10 = gradientTop.fields.b;
  v11 = gradientTop.fields.g;
  v12 = gradientTop.fields.r;
  if ( (byte_4CC4CD4 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_15431/*"WARBOARD_SQUARE_COST"*/);
    byte_4CC4CD4 = 1;
  }
  WarBoardSquareComponent__InitCostAnim(this, *(const MethodInfo **)&cost);
  costLabel = this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0);
  GameObjectExtensions__ResetLocalScale(gameObject, 0);
  costLabel = this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_13;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0);
  GameObjectExtensions__SetLocalPosition(v18, this->fields.costLabelPos, 0);
  costLabel = this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_13;
  v23.fields.r = *((float *)costLabel + 37);
  v23.fields.g = *((float *)costLabel + 38);
  v23.fields.b = *((float *)costLabel + 39);
  v23.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)costLabel, v23, 0);
  costLabel = this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_13;
  UILabel__set_applyGradient((UILabel_o *)costLabel, 1, 0);
  costLabel = this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_13;
  v24.fields.r = v12;
  v24.fields.g = v11;
  v24.fields.b = v10;
  v24.fields.a = v9;
  UILabel__set_gradientTop((UILabel_o *)costLabel, v24, 0);
  costLabel = this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_13;
  v25.fields.r = r;
  v25.fields.g = g;
  v25.fields.b = b;
  v25.fields.a = a;
  UILabel__set_gradientBottom((UILabel_o *)costLabel, v25, 0);
  v19 = this->fields.costLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_15431/*"WARBOARD_SQUARE_COST"*/, 0);
  v22 = cost;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
  costLabel = System_String__Format(v20, v21, 0);
  if ( !v19 )
LABEL_13:
    sub_1C71608(costLabel, v15);
  UILabel__set_text(v19, (System_String_o *)costLabel, 0);
}


void WarBoardSquareComponent__SetMovePoint(WarBoardSquareComponent_o *this, bool isDefault, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_movePoint; // x20
  UnityEngine_Object_o *movePoint; // x22
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x22
  struct WarBoardSquareData_o *squareData; // x8
  int32_t imageId_k__BackingField; // w8
  Il2CppObject *v12; // x0
  System_String_o *v13; // x21
  Il2CppObject *CommonEffectAsset_object; // x21
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  Il2CppObject *Component_object; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CC4CCF & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject____78725064);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C713B0(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    sub_1C713B0(&StringLiteral_9176/*"Move_Point_0"*/);
    sub_1C713B0(&StringLiteral_9177/*"Move_Point_{0}"*/);
    byte_4CC4CCF = 1;
  }
  p_movePoint = &this->fields.movePoint;
  movePoint = (UnityEngine_Object_o *)this->fields.movePoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(movePoint, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = *p_movePoint;
    if ( !*p_movePoint )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(Instance, 0, 0);
    v9 = (UnityEngine_Object_o *)*p_movePoint;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(v9, 0);
  }
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_24;
  imageId_k__BackingField = squareData->fields._imageId_k__BackingField;
  if ( !isDefault )
    imageId_k__BackingField += 2;
  v30 = imageId_k__BackingField;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
  v13 = System_String__Format((System_String_o *)StringLiteral_9177/*"Move_Point_{0}"*/, v12, 0);
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               v13,
                               (const MethodInfo_3230D98 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0, 0) )
  {
    Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                                 (WarBoardManager_o *)Instance,
                                 (System_String_o *)StringLiteral_9176/*"Move_Point_0"*/,
                                 (const MethodInfo_3230D98 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = UnityEngine_Object__Instantiate_object__52264420(
          CommonEffectAsset_object,
          transform,
          (const MethodInfo_31D7DE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78725064);
  *p_movePoint = (struct UnityEngine_GameObject_o *)v16;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.movePoint, (int32_t)v16, v17, v18, v19, v20, v21, v22);
  Instance = *p_movePoint;
  if ( !*p_movePoint || (UnityEngine_GameObject__SetActive(Instance, 0, 0), (Instance = *p_movePoint) == 0) )
LABEL_24:
    sub_1C71608(Instance, v8);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       Instance,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.movePointCommonEffect = (struct CommonEffectComponent_o *)Component_object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.movePointCommonEffect,
    (int32_t)Component_object,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
}


void WarBoardSquareComponent__SetSprite(WarBoardSquareComponent_o *this, const MethodInfo *method)
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
  if ( (byte_4CC4CD3 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&StringLiteral_16586/*"_target"*/);
    sub_1C713B0(&StringLiteral_23747/*"square{0:D3}"*/);
    this = (WarBoardSquareComponent_o *)sub_1C713B0(&StringLiteral_23745/*"squares"*/);
    byte_4CC4CD3 = 1;
  }
  squareData = v2->fields.squareData;
  if ( !squareData )
    goto LABEL_14;
  imageId_k__BackingField = squareData->fields._imageId_k__BackingField;
  if ( imageId_k__BackingField < 1 )
  {
    v6 = (System_String_o *)StringLiteral_23745/*"squares"*/;
  }
  else
  {
    v9 = imageId_k__BackingField;
    v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
    v6 = System_String__Format((System_String_o *)StringLiteral_23747/*"square{0:D3}"*/, v5, 0);
  }
  this = (WarBoardSquareComponent_o *)v2->fields.squareImage;
  if ( !this )
    goto LABEL_14;
  UISprite__set_spriteName((UISprite_o *)this, v6, 0);
  this = (WarBoardSquareComponent_o *)v2->fields.button;
  if ( !this )
    goto LABEL_14;
  UIButton__set_normalSprite((UIButton_o *)this, v6, 0);
  this = (WarBoardSquareComponent_o *)v2->fields.squareImage;
  if ( !this )
    goto LABEL_14;
  UIWidget__SetDirty((UIWidget_o *)this, 0);
  squareSubImage = v2->fields.squareSubImage;
  this = (WarBoardSquareComponent_o *)System_String__Concat_64031724(v6, (System_String_o *)StringLiteral_16586/*"_target"*/, 0);
  if ( !squareSubImage
    || (UISprite__set_spriteName(squareSubImage, (System_String_o *)this, 0),
        subButton = v2->fields.subButton,
        this = (WarBoardSquareComponent_o *)System_String__Concat_64031724(
                                              v6,
                                              (System_String_o *)StringLiteral_16586/*"_target"*/,
                                              0),
        !subButton)
    || (UIButton__set_normalSprite(subButton, (System_String_o *)this, 0),
        (this = (WarBoardSquareComponent_o *)v2->fields.squareSubImage) == 0) )
  {
LABEL_14:
    sub_1C71608(this, method);
  }
  UIWidget__SetDirty((UIWidget_o *)this, 0);
}


void WarBoardSquareComponent__SetTouchEnable(WarBoardSquareComponent_o *this, bool enable, const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  struct UIButton_o *v7; // x0
  UnityEngine_Object_o *subButton; // x21

  if ( (byte_4CC4CD5 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC4CD5 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0, 0) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      goto LABEL_14;
    ((void (__fastcall *)(struct UIButton_o *, bool, const MethodInfo *))v7->klass->vtable._5_set_isEnabled.methodPtr)(
      v7,
      enable,
      v7->klass->vtable._5_set_isEnabled.method);
  }
  subButton = (UnityEngine_Object_o *)this->fields.subButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(subButton, 0, 0) )
  {
    v7 = this->fields.subButton;
    if ( v7 )
    {
      ((void (__fastcall *)(struct UIButton_o *, bool, const MethodInfo *))v7->klass->vtable._5_set_isEnabled.methodPtr)(
        v7,
        enable,
        v7->klass->vtable._5_set_isEnabled.method);
      return;
    }
LABEL_14:
    sub_1C71608(v7, v6);
  }
}


bool WarBoardSquareComponent__StopEffect(
        WarBoardSquareComponent_o *this,
        System_String_o *effectKey,
        System_String_o *prefix,
        const MethodInfo *method)
{
  Il2CppObject *dicEffect; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x20
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x2
  bool v12; // w21
  System_Collections_IEnumerator_o *v13; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC4CE1 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__GameObject__Remove__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__);
    byte_4CC4CE1 = 1;
  }
  value = 0;
  dicEffect = (Il2CppObject *)System_String__Concat_64031724(prefix, effectKey, 0);
  if ( !this->fields.dicEffect )
    goto LABEL_8;
  v9 = dicEffect;
  v10 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)this->fields.dicEffect,
          dicEffect,
          &value,
          (const MethodInfo_34CCEEC *)Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__);
  v12 = v10;
  if ( v10 )
  {
    v13 = WarBoardSquareComponent__StopEffectEndLoop(
            (WarBoardSquareComponent_o *)v10,
            (UnityEngine_GameObject_o *)value,
            v11);
    UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v13, 0);
    dicEffect = (Il2CppObject *)this->fields.dicEffect;
    if ( dicEffect )
    {
      System_Collections_Generic_Dictionary_object__object___Remove(
        (System_Collections_Generic_Dictionary_object__object__o *)dicEffect,
        v9,
        (const MethodInfo_34CCBDC *)Method_System_Collections_Generic_Dictionary_string__GameObject__Remove__);
      return v12;
    }
LABEL_8:
    sub_1C71608(dicEffect, v8);
  }
  return v12;
}


System_Collections_IEnumerator_o *WarBoardSquareComponent__StopEffectEndLoop(
        WarBoardSquareComponent_o *this,
        UnityEngine_GameObject_o *effect,
        const MethodInfo *method)
{
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4CC4CE2 & 1) == 0 )
  {
    sub_1C713B0(&WarBoardSquareComponent__StopEffectEndLoop_d__64_TypeInfo);
    byte_4CC4CE2 = 1;
  }
  v4 = sub_1C715FC(WarBoardSquareComponent__StopEffectEndLoop_d__64_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = effect;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v4 + 32), (int32_t)effect, v5, v6, v7, v8, v9, v10);
  return (System_Collections_IEnumerator_o *)v4;
}


// local variable allocation has failed, the output may be wrong!
void WarBoardSquareComponent__Unselectable(
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
    UIWidget__set_color(costLabel, v6, 0);
  }
  costLabel = (UIWidget_o *)this->fields.movePoint;
  if ( !costLabel )
LABEL_6:
    sub_1C71608(costLabel, isDispCostLabel);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costLabel, isDispCostLabel, 0);
}


void WarBoardSquareComponent___DisableEditPosition_b__40_0(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectMarker; // x0

  selectMarker = this->fields.selectMarker;
  if ( !selectMarker )
    sub_1C71608(0, method);
  UnityEngine_GameObject__SetActive(selectMarker, 0, 0);
}


void WarBoardSquareComponent___NondispBattleRange_b__57_0(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *battleTargetPlayer; // x0

  battleTargetPlayer = this->fields.battleTargetPlayer;
  if ( !battleTargetPlayer
    || (UnityEngine_GameObject__SetActive(battleTargetPlayer, 0, 0),
        (battleTargetPlayer = (UnityEngine_GameObject_o *)this->fields.battleTargetPlayerCommonEffect) == 0) )
  {
    sub_1C71608(battleTargetPlayer, method);
  }
  CommonEffectComponent__Rewind((CommonEffectComponent_o *)battleTargetPlayer, 0);
}


void WarBoardSquareComponent___NondispBattleRange_b__57_1(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *battleTargetEnemy; // x0

  battleTargetEnemy = this->fields.battleTargetEnemy;
  if ( !battleTargetEnemy
    || (UnityEngine_GameObject__SetActive(battleTargetEnemy, 0, 0),
        (battleTargetEnemy = (UnityEngine_GameObject_o *)this->fields.battleTargetEnemyCommonEffect) == 0) )
  {
    sub_1C71608(battleTargetEnemy, method);
  }
  CommonEffectComponent__Rewind((CommonEffectComponent_o *)battleTargetEnemy, 0);
}


void WarBoardSquareComponent___OnDeselect_b__49_0(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectCircle; // x0

  selectCircle = this->fields.selectCircle;
  if ( !selectCircle
    || (UnityEngine_GameObject__SetActive(selectCircle, 0, 0),
        (selectCircle = (UnityEngine_GameObject_o *)this->fields.selectCircleCommonEffect) == 0) )
  {
    sub_1C71608(selectCircle, method);
  }
  CommonEffectComponent__Rewind((CommonEffectComponent_o *)selectCircle, 0);
}


void WarBoardSquareComponent___OnEffectHide_b__61_0(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effectPrefab; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0
  UnityEngine_Object_o *v6; // x19

  if ( (byte_4CC4CE5 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC4CE5 = 1;
  }
  effectPrefab = (UnityEngine_Object_o *)this->fields.effectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(effectPrefab, 0) )
  {
    v5 = this->fields.effectPrefab;
    if ( !v5 )
      sub_1C71608(0, v4);
    UnityEngine_GameObject__SetActive(v5, 0, 0);
    v6 = (UnityEngine_Object_o *)this->fields.effectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(v6, 0);
  }
}


SimpleAnimation_o *WarBoardSquareComponent__get_SimpleAnimation(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.simpleAnimation;
}


WarBoardSquareData_o *WarBoardSquareComponent__get_SquareData(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.squareData;
}


WarBoardControlUiDataComponent_o *WarBoardSquareComponent__get_UiDataComp(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.uiDataComp;
}


void WarBoardSquareComponent__StopEffectEndLoop_d__64___ctor(
        WarBoardSquareComponent__StopEffectEndLoop_d__64_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool WarBoardSquareComponent__StopEffectEndLoop_d__64__MoveNext(
        WarBoardSquareComponent__StopEffectEndLoop_d__64_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  void *effect; // x0
  int v5; // w8
  void *v6; // x20
  unsigned int v7; // w21
  float constantMax; // s8
  UnityEngine_ParticleSystem_MainModule_o v9; // x0
  UnityEngine_ParticleSystem_MainModule_o v10; // x0
  UnityEngine_ParticleSystem_MainModule_o v11; // x0
  UnityEngine_Object_o *v12; // x19
  bool result; // w0
  UnityEngine_WaitForSeconds_o *v14; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  UnityEngine_ParticleSystem_MinMaxCurve_o v22; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v23; // [xsp+20h] [xbp-50h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_4CC4CE8 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4CC4CE8 = 1;
  }
  m_ParticleSystem = 0;
  memset(&v23, 0, sizeof(v23));
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    effect = this->fields.effect;
    this->fields.__1__state = -1;
    if ( !effect )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effect, 0, 0);
    v12 = (UnityEngine_Object_o *)this->fields.effect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(v12, 0);
    return 0;
  }
  if ( _1__state )
    return 0;
  effect = this->fields.effect;
  this->fields.__1__state = -1;
  if ( !effect )
    goto LABEL_22;
  effect = UnityEngine_GameObject__GetComponentsInChildren_object__52050676(
             (UnityEngine_GameObject_o *)effect,
             (const MethodInfo_31A3AF4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
  if ( !effect )
    goto LABEL_22;
  v5 = *((_DWORD *)effect + 6);
  v6 = effect;
  if ( v5 >= 1 )
  {
    v7 = 0;
    constantMax = 0.0;
    while ( 1 )
    {
      if ( v7 >= v5 )
        sub_1C71610(effect);
      effect = (void *)*((_QWORD *)v6 + (int)v7 + 4);
      if ( !effect )
        break;
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)effect, 0).fields.m_ParticleSystem;
      v9.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__get_startLifetime(&v22, v9, 0);
      v23 = v22;
      if ( constantMax < UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v23, 0) )
      {
        v10.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
        UnityEngine_ParticleSystem_MainModule__get_startLifetime(&v22, v10, 0);
        v23 = v22;
        constantMax = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v23, 0);
      }
      v11.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__set_loop(v11, 0, 0);
      v5 = *((_DWORD *)v6 + 6);
      if ( (int)++v7 >= v5 )
        goto LABEL_21;
    }
LABEL_22:
    sub_1C71608(effect, method);
  }
  constantMax = 0.0;
LABEL_21:
  v14 = (UnityEngine_WaitForSeconds_o *)sub_1C715FC(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v14, constantMax * 1.2, 0);
  this->fields.__2__current = (Il2CppObject *)v14;
  p__2__current = &this->fields.__2__current;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)v14, v16, v17, v18, v19, v20, v21);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *WarBoardSquareComponent__StopEffectEndLoop_d__64__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardSquareComponent__StopEffectEndLoop_d__64_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardSquareComponent__StopEffectEndLoop_d__64__System_Collections_IEnumerator_Reset(
        WarBoardSquareComponent__StopEffectEndLoop_d__64_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_WarBoardSquareComponent__StopEffectEndLoop_d__64_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *WarBoardSquareComponent__StopEffectEndLoop_d__64__System_Collections_IEnumerator_get_Current(
        WarBoardSquareComponent__StopEffectEndLoop_d__64_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void WarBoardSquareComponent__StopEffectEndLoop_d__64__System_IDisposable_Dispose(
        WarBoardSquareComponent__StopEffectEndLoop_d__64_o *this,
        const MethodInfo *method)
{
  ;
}


void WarBoardSquareComponent___c__DisplayClass60_0___ctor(
        WarBoardSquareComponent___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardSquareComponent___c__DisplayClass60_0___OnEffectDisp_b__0(
        WarBoardSquareComponent___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  int32_t effectId; // w9
  System_String_o *v4; // x0
  System_String_o *v5; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *CommonEffectAsset_object; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  UnityEngine_Component_o *_4__this; // x19
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v17; // x0
  int32_t v18; // w1
  GrandQuestFolderBoardItem_o *p_monitor; // x0
  System_Enum_o v20; // [xsp+8h] [xbp-48h] BYREF
  int32_t v21; // [xsp+18h] [xbp-38h]

  if ( (byte_4CC4CE6 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject____78725064);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C713B0(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    sub_1C713B0(&WarBoardManager_WarBoardSqEfType_TypeInfo);
    sub_1C713B0(&StringLiteral_18910/*"ef_sq_"*/);
    byte_4CC4CE6 = 1;
  }
  effectId = this->fields.effectId;
  v20.klass = (System_Enum_c *)WarBoardManager_WarBoardSqEfType_TypeInfo;
  v20.monitor = (void *)-1LL;
  v21 = effectId;
  v4 = System_Enum__ToString(&v20, 0);
  v5 = System_String__Concat_64031724((System_String_o *)StringLiteral_18910/*"ef_sq_"*/, v4, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               v5,
                               (const MethodInfo_3230D98 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)CommonEffectAsset_object, 0, 0);
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this )
LABEL_13:
    sub_1C71608(Instance, v7);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    transform = UnityEngine_Component__get_transform(_4__this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v17 = UnityEngine_Object__Instantiate_object__52264420(
            CommonEffectAsset_object,
            transform,
            (const MethodInfo_31D7DE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78725064);
    _4__this[10].monitor = v17;
    v18 = (int)v17;
    p_monitor = (GrandQuestFolderBoardItem_o *)&_4__this[10].monitor;
  }
  else
  {
    _4__this[10].monitor = 0;
    p_monitor = (GrandQuestFolderBoardItem_o *)&_4__this[10].monitor;
    v18 = 0;
  }
  sub_1C71354(p_monitor, v18, v9, v10, v11, v12, v13, v14);
}


void WarBoardSquareComponent___c__DisplayClass62_0___ctor(
        WarBoardSquareComponent___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardSquareComponent___c__DisplayClass62_0___PlayEffect_b__0(
        WarBoardSquareComponent___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *_4__this; // x0
  Il2CppObject *asset; // x20
  UnityEngine_Transform_o *transform; // x21
  struct WarBoardSquareComponent_o *v6; // x8
  Il2CppObject *v7; // x2

  if ( (byte_4CC4CE7 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__GameObject__set_Item__);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject____78725064);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC4CE7 = 1;
  }
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  asset = (Il2CppObject *)this->fields.asset;
  transform = UnityEngine_Component__get_transform(_4__this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  _4__this = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__52264420(
                                          asset,
                                          transform,
                                          (const MethodInfo_31D7DE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78725064);
  v6 = this->fields.__4__this;
  if ( !v6 || (v7 = (Il2CppObject *)_4__this, (_4__this = (UnityEngine_Component_o *)v6->fields.dicEffect) == 0) )
LABEL_9:
    sub_1C71608(_4__this, method);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)_4__this,
    (Il2CppObject *)this->fields.key,
    v7,
    (const MethodInfo_34CB6CC *)Method_System_Collections_Generic_Dictionary_string__GameObject__set_Item__);
}