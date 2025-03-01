void __fastcall WarBoardSquareComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1

  if ( (byte_4BFB12C & 1) == 0 )
  {
    sub_1C2E12C(&WarBoardSquareComponent_TypeInfo, v1);
    sub_1C2E12C(&StringLiteral_12762/*"ScaleSquare_start"*/, v8);
    byte_4BFB12C = 1;
  }
  WarBoardSquareComponent_TypeInfo->static_fields->UNLOCK_ANIMATION_NAME = (struct System_String_o *)StringLiteral_12762/*"ScaleSquare_start"*/;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)WarBoardSquareComponent_TypeInfo->static_fields,
    StringLiteral_12762/*"ScaleSquare_start"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardSquareComponent___ctor(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_object__object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BFB12B & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__, method);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo, v3);
    byte_4BFB12B = 1;
  }
  this->fields.costAnimFadeTime = 0.3;
  *(_OWORD *)&this->fields.costLabelPos.fields.x = xmmword_C06AB0;
  *(_OWORD *)&this->fields.costLabelMovePos.fields.y = xmmword_C07660;
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2E378(System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v4,
    (const MethodInfo_33351C4 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
  this->fields.dicEffect = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v4;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.dicEffect, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardSquareComponent__ActiveEditPointArrow(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *selectMarkerArrow; // x20
  __int64 v4; // x1
  UnityEngine_Behaviour_o *v5; // x0

  if ( (byte_4BFB119 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFB119 = 1;
  }
  selectMarkerArrow = (UnityEngine_Object_o *)this->fields.selectMarkerArrow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectMarkerArrow, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields.selectMarkerArrow;
    if ( !v5 )
      sub_1C2E388(0LL, v4);
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

  if ( (byte_4BFB11A & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFB11A = 1;
  }
  selectMarkerArrow = (UnityEngine_Object_o *)this->fields.selectMarkerArrow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectMarkerArrow, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields.selectMarkerArrow;
    if ( !v5 )
      sub_1C2E388(0LL, v4);
    UnityEngine_Behaviour__set_enabled(v5, 0, 0LL);
  }
}


void __fastcall WarBoardSquareComponent__DisableEditPosition(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *selectMarker; // x0
  struct CommonEffectComponent_o *selectMarkerCommonEffect; // x20
  System_Action_o *v6; // x21

  if ( (byte_4BFB118 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_WarBoardSquareComponent__DisableEditPosition_b__40_0__, v3);
    byte_4BFB118 = 1;
  }
  selectMarker = this->fields.selectMarker;
  if ( !selectMarker )
    goto LABEL_8;
  if ( UnityEngine_GameObject__get_activeSelf(selectMarker, 0LL) )
  {
    selectMarkerCommonEffect = this->fields.selectMarkerCommonEffect;
    v6 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
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
    sub_1C2E388(selectMarker, method);
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
      sub_1C2E388(battleTargetPlayer, isPlayerForce);
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
    sub_1C2E388(selectMarker, method);
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
    sub_1C2E388(costLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costLabel, 0, 0LL);
}


bool __fastcall WarBoardSquareComponent__GetButtonIsEnable(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  struct UIButton_o *button; // x0

  button = this->fields.button;
  if ( !button )
    sub_1C2E388(0LL, method);
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

  if ( (byte_4BFB122 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFB122 = 1;
  }
  tweenScale = (UnityEngine_Object_o *)this->fields.tweenScale;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tweenScale, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.tweenScale;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70989720(v4, 0LL);
  }
  tweenPosition = (UnityEngine_Object_o *)this->fields.tweenPosition;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tweenPosition, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Object_o *)this->fields.tweenPosition;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70989720(v6, 0LL);
  }
  tweenAlpha = (UnityEngine_Object_o *)this->fields.tweenAlpha;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tweenAlpha, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Object_o *)this->fields.tweenAlpha;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70989720(v8, 0LL);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  UnityEngine_Transform_o *transform; // x22
  int v21; // s0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  UILabel_o *costLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v32; // x0
  Il2CppObject *Component_object; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  Il2CppObject *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  Il2CppObject *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  Il2CppObject *v54; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  Il2CppObject *v61; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  const MethodInfo *v68; // x2
  const MethodInfo *v69; // x1
  UnityEngine_Color_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BFB116 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__, imageSetAtlas);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v7);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v8);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_1C2E12C(&StringLiteral_23909/*"squares"*/, v10);
    sub_1C2E12C(&StringLiteral_23910/*"squares_target"*/, v11);
    byte_4BFB116 = 1;
  }
  dicEffect = (char *)this->fields.dicEffect;
  if ( !dicEffect )
    goto LABEL_33;
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)dicEffect,
    (const MethodInfo_3335CFC *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
  this->fields.squareData = data;
  p_squareData = &this->fields.squareData;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.squareData, (int64_t)data, v14, v15, v16, v17, v18, v19);
  dicEffect = (char *)this->fields.squareImage;
  if ( !dicEffect )
    goto LABEL_33;
  UISprite__set_atlas((UISprite_o *)dicEffect, imageSetAtlas, 0LL);
  dicEffect = (char *)this->fields.squareImage;
  if ( !dicEffect )
    goto LABEL_33;
  UISprite__set_spriteName((UISprite_o *)dicEffect, (System_String_o *)StringLiteral_23909/*"squares"*/, 0LL);
  dicEffect = (char *)this->fields.squareSubImage;
  if ( !dicEffect )
    goto LABEL_33;
  UISprite__set_atlas((UISprite_o *)dicEffect, imageSetAtlas, 0LL);
  dicEffect = (char *)this->fields.squareSubImage;
  if ( !dicEffect )
    goto LABEL_33;
  UISprite__set_spriteName((UISprite_o *)dicEffect, (System_String_o *)StringLiteral_23910/*"squares_target"*/, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  dicEffect = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  sub_1C2E0D0((PartyOrganizationUtility_o *)(dicEffect + 48), (int64_t)this, v24, v25, v26, v27, v28, v29);
  costLabel = this->fields.costLabel;
  dicEffect = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dicEffect, 0LL);
  GameObjectExtensions__ResetLocalScale(v32, 0LL);
  dicEffect = (char *)this->fields.costLabel;
  if ( !dicEffect )
    goto LABEL_33;
  v70.fields.r = *((float *)dicEffect + 37);
  v70.fields.g = *((float *)dicEffect + 38);
  v70.fields.b = *((float *)dicEffect + 39);
  v70.fields.a = 0.0;
  UIWidget__set_color((UIWidget_o *)dicEffect, v70, 0LL);
  dicEffect = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !dicEffect )
    goto LABEL_33;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)dicEffect,
                       (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)Component_object;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.simpleAnimation,
    (int64_t)Component_object,
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
  v40 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)dicEffect,
          (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.selectMarkerCommonEffect = (struct CommonEffectComponent_o *)v40;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.selectMarkerCommonEffect,
    (int64_t)v40,
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
  v47 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)dicEffect,
          (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.selectCircleCommonEffect = (struct CommonEffectComponent_o *)v47;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.selectCircleCommonEffect,
    (int64_t)v47,
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
  v54 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)dicEffect,
          (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.battleTargetPlayerCommonEffect = (struct CommonEffectComponent_o *)v54;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.battleTargetPlayerCommonEffect,
    (int64_t)v54,
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
  v61 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)dicEffect,
          (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.battleTargetEnemyCommonEffect = (struct CommonEffectComponent_o *)v61;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.battleTargetEnemyCommonEffect,
    (int64_t)v61,
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
    sub_1C2E388(dicEffect, imageSetAtlas);
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

  if ( (byte_4BFB123 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, isPlayerForce);
    sub_1C2E12C(&Method_WarBoardSquareComponent__NondispBattleRange_b__57_0__, v5);
    sub_1C2E12C(&Method_WarBoardSquareComponent__NondispBattleRange_b__57_1__, v6);
    byte_4BFB123 = 1;
  }
  if ( isPlayerForce )
  {
    battleTargetPlayer = this->fields.battleTargetPlayer;
    if ( !battleTargetPlayer )
      goto LABEL_13;
    if ( UnityEngine_GameObject__get_activeSelf(battleTargetPlayer, 0LL) )
    {
      battleTargetPlayerCommonEffect = this->fields.battleTargetPlayerCommonEffect;
      v9 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
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
      v9 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
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
      sub_1C2E388(battleTargetPlayer, isPlayerForce);
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
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x21
  struct WarBoardWallData_array *walls; // x8
  struct WarBoardSquareData_o *v16; // x8

  if ( (byte_4BFB124 & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_1C2E12C(&Method_WarBoardSquareComponent_OnClickSquare__, v3);
    byte_4BFB124 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_31;
  v7 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_31;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_36546836(
                                 Instance,
                                 squareData->fields._squareIndex_k__BackingField,
                                 0LL);
  v8 = this->fields.squareData;
  if ( !v8 )
    goto LABEL_31;
  v9 = (WarBoardPieceData_o *)Instance;
  Instance = v7->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_31;
  Instance = (WarBoardData_o *)WarBoardData__GetItem(Instance, v8->fields._squareIndex_k__BackingField, 0LL);
  v10 = this->fields.squareData;
  if ( !v10 )
    goto LABEL_31;
  v11 = (WarBoardItemData_o *)Instance;
  Instance = v7->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_31;
  Effect = WarBoardData__GetEffect(Instance, v10->fields._squareIndex_k__BackingField, 0LL);
  if ( WarBoardManager__get_isSelectedPiece(v7, 0LL) && this->fields.isSelectable )
  {
    if ( !v9 || !WarBoardManager__IsSelectedPieceSame(v7, v9, 0LL) )
    {
      v13 = Method_WarBoardSquareComponent_OnClickSquare__;
      if ( (*((_BYTE *)Method_WarBoardSquareComponent_OnClickSquare__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_1C2E144(Method_WarBoardSquareComponent_OnClickSquare__);
      v14 = (System_Reflection_MethodBase_o *)sub_1C2E110(v13, v13[4]);
      Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        walls = Instance[1].fields.walls;
        if ( walls )
        {
          Instance = (WarBoardData_o *)OverwriteAssetSoundName__PlaySe(
                                         v14,
                                         *(System_String_o **)&walls->max_length,
                                         0,
                                         0LL);
          v16 = this->fields.squareData;
          if ( v16 )
          {
            WarBoardManager__SelectedPieceAction(v7, v16->fields._squareIndex_k__BackingField, 0LL);
            return;
          }
        }
      }
LABEL_31:
      sub_1C2E388(Instance, v5);
    }
    goto LABEL_21;
  }
  if ( v9 )
  {
LABEL_21:
    Instance = (WarBoardData_o *)v9->fields.pieceComponent;
    if ( !Instance )
      goto LABEL_31;
    (*(void (__fastcall **)(WarBoardData_o *, void *))&Instance->klass[1]._1.byval_arg.bits)(
      Instance,
      Instance->klass[1]._1.this_arg.data);
    return;
  }
  if ( v11 && !WarBoardItemData__get_Acquired(v11, 0LL) )
  {
    Instance = (WarBoardData_o *)v11->fields.component;
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
    WarBoardManager__HideSimplePopup(v7, 0LL, 0LL);
  }
}


void __fastcall WarBoardSquareComponent__OnDeselect(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *selectCircle; // x0
  struct CommonEffectComponent_o *selectCircleCommonEffect; // x20
  System_Action_o *v6; // x21

  if ( (byte_4BFB11F & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_WarBoardSquareComponent__OnDeselect_b__49_0__, v3);
    byte_4BFB11F = 1;
  }
  selectCircle = this->fields.selectCircle;
  if ( !selectCircle )
    goto LABEL_8;
  if ( UnityEngine_GameObject__get_activeSelf(selectCircle, 0LL) )
  {
    selectCircleCommonEffect = this->fields.selectCircleCommonEffect;
    v6 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
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
    sub_1C2E388(selectCircle, method);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x20
  _QWORD *v23; // x21
  System_Delegate_o *v24; // x23
  WarBoardTaskBase_TaskCallback_o *v25; // x24
  System_Delegate_o *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x8
  WarBoardTaskBase_TaskCallback_c *v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  Il2CppObject *Instance; // x19
  __int64 v46; // x21
  __int64 v47; // x0
  __int64 v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  __int64 v55; // x0

  if ( (byte_4BFB126 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, *(_QWORD *)&effectId);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    sub_1C2E12C(&WarBoardTaskBase_TaskCallback_TypeInfo, v8);
    sub_1C2E12C(&Method_WarBoardSquareComponent___c__DisplayClass60_0__OnEffectDisp_b__0__, v9);
    sub_1C2E12C(&WarBoardSquareComponent___c__DisplayClass60_0_TypeInfo, v10);
    sub_1C2E12C(&WarBoardCallbackTask_TypeInfo, v11);
    sub_1C2E12C(&WarBoardTaskBase___TypeInfo, v12);
    byte_4BFB126 = 1;
  }
  v13 = sub_1C2E378(WarBoardSquareComponent___c__DisplayClass60_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_20;
  *(_QWORD *)(v13 + 24) = this;
  *(_DWORD *)(v13 + 16) = effectId;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)this, v16, v17, v18, v19, v20, v21);
  v22 = sub_1C2E378(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v22, 0LL, 0LL);
  if ( !v22 )
    goto LABEL_20;
  v23 = (_QWORD *)(v22 + 32);
  v24 = *(System_Delegate_o **)(v22 + 32);
  v25 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2E378(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v25,
    (Il2CppObject *)v13,
    Method_WarBoardSquareComponent___c__DisplayClass60_0__OnEffectDisp_b__0__,
    0LL);
  v26 = System_Delegate__Combine(v24, (System_Delegate_o *)v25, 0LL);
  v33 = (int64_t)v26;
  if ( !v26 )
    goto LABEL_9;
  v34 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v26->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v23 = v26, (WarBoardTaskBase_TaskCallback_c *)v26->klass != v34) )
  {
    sub_1C2E648(v26);
LABEL_9:
    *v23 = v33;
  }
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v22 + 32), v33, v27, v28, v29, v30, v31, v32);
  if ( !taskList )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v14 = sub_1C2E1D4(WarBoardTaskBase___TypeInfo, 1LL);
    if ( v14 )
    {
      v46 = v14;
      v47 = sub_1C2E268(v22, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
      if ( !v47 )
      {
        v55 = sub_1C2E3AC();
        sub_1C2E254(v55, 0LL);
      }
      if ( !*(_DWORD *)(v46 + 24) )
        sub_1C2E390(v47, v48);
      *(_QWORD *)(v46 + 32) = v22;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v46 + 32), v22, v49, v50, v51, v52, v53, v54);
      if ( Instance )
      {
        WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v46, 0LL);
        return;
      }
    }
LABEL_20:
    sub_1C2E388(v14, v15);
  }
  items = taskList->fields._items;
  v42 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++taskList->fields._version;
  if ( !items )
    goto LABEL_20;
  size = taskList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)taskList,
      (Il2CppObject *)v22,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
  }
  else
  {
    v44 = &items->obj.klass + size;
    taskList->fields._size = size + 1;
    v44[4] = (Il2CppClass *)v22;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v44 + 4), v22, v35, v36, v37, v38, v39, v40);
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
  int64_t v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  _QWORD *v14; // x22
  System_Delegate_o *v15; // x23
  WarBoardTaskBase_TaskCallback_o *v16; // x24
  System_Delegate_o *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x8
  WarBoardTaskBase_TaskCallback_c *v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  Il2CppObject *Instance; // x19
  __int64 v37; // x21
  __int64 v38; // x0
  __int64 v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x0

  if ( (byte_4BFB127 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, *(_QWORD *)&effectId);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_1C2E12C(&WarBoardTaskBase_TaskCallback_TypeInfo, v7);
    sub_1C2E12C(&WarBoardCallbackTask_TypeInfo, v8);
    sub_1C2E12C(&Method_WarBoardSquareComponent__OnEffectHide_b__61_0__, v9);
    sub_1C2E12C(&WarBoardTaskBase___TypeInfo, v10);
    byte_4BFB127 = 1;
  }
  v11 = sub_1C2E378(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v11, 0LL, 0LL);
  if ( !v11 )
    goto LABEL_19;
  v14 = (_QWORD *)(v11 + 32);
  v15 = *(System_Delegate_o **)(v11 + 32);
  v16 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2E378(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v16,
    (Il2CppObject *)this,
    Method_WarBoardSquareComponent__OnEffectHide_b__61_0__,
    0LL);
  v17 = System_Delegate__Combine(v15, (System_Delegate_o *)v16, 0LL);
  v24 = (int64_t)v17;
  if ( !v17 )
    goto LABEL_8;
  v25 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v17->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v14 = v17, (WarBoardTaskBase_TaskCallback_c *)v17->klass != v25) )
  {
    sub_1C2E648(v17);
LABEL_8:
    *v14 = v24;
  }
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v11 + 32), v24, v18, v19, v20, v21, v22, v23);
  if ( !taskList )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v12 = sub_1C2E1D4(WarBoardTaskBase___TypeInfo, 1LL);
    if ( v12 )
    {
      v37 = v12;
      v38 = sub_1C2E268(v11, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
      if ( !v38 )
      {
        v46 = sub_1C2E3AC();
        sub_1C2E254(v46, 0LL);
      }
      if ( !*(_DWORD *)(v37 + 24) )
        sub_1C2E390(v38, v39);
      *(_QWORD *)(v37 + 32) = v11;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v37 + 32), v11, v40, v41, v42, v43, v44, v45);
      if ( Instance )
      {
        WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v37, 0LL);
        return;
      }
    }
LABEL_19:
    sub_1C2E388(v12, v13);
  }
  items = taskList->fields._items;
  v33 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++taskList->fields._version;
  if ( !items )
    goto LABEL_19;
  size = taskList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)taskList,
      (Il2CppObject *)v11,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = &items->obj.klass + size;
    taskList->fields._size = size + 1;
    v35[4] = (Il2CppClass *)v11;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v35 + 4), v11, v26, v27, v28, v29, v30, v31);
  }
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

  if ( (byte_4BFB125 & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4BFB125 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_21;
  v6 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_21;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_36546836(
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
    Instance = (WarBoardData_o *)v8[1].fields.stageNpcMaster;
    if ( Instance )
    {
      (*(void (__fastcall **)(WarBoardData_o *, Il2CppClass *))&Instance->klass[1]._1.this_arg.bits)(
        Instance,
        Instance->klass[1]._1.element_class);
      return;
    }
LABEL_21:
    sub_1C2E388(Instance, v4);
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
    sub_1C2E388(selectCircle, method);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_String_o *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct WarBoardSquareData_o *squareData; // x8
  int imageId_k__BackingField; // w8
  int v31; // w9
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  long double inited; // q0
  _QWORD *v35; // x22
  System_String_o *v36; // x21
  __int64 v37; // x8
  __int64 v38; // x0
  __int64 v39; // x0
  System_String_o *v40; // x21
  Il2CppObject *CommonEffectAsset_object; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  UnityEngine_Object_o *v48; // x21
  __int64 v50; // x21
  UnityEngine_Object_o *uiDataComp; // x20
  unsigned int v52; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BFB128 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, effectKey);
    sub_1C2E12C(&Method_System_Array_Empty_object___, v7);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v8);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_1C2E12C(&Method_WarBoardSquareComponent___c__DisplayClass62_0__PlayEffect_b__0__, v10);
    sub_1C2E12C(&WarBoardSquareComponent___c__DisplayClass62_0_TypeInfo, v11);
    sub_1C2E12C(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v12);
    byte_4BFB128 = 1;
  }
  v13 = sub_1C2E378(WarBoardSquareComponent___c__DisplayClass62_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_30;
  *(_QWORD *)(v13 + 24) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)this, v16, v17, v18, v19, v20, v21);
  v22 = System_String__Concat_63235584(prefix, effectKey, 0LL);
  *(_QWORD *)(v13 + 32) = v22;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v13 + 32), (int64_t)v22, v23, v24, v25, v26, v27, v28);
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_30;
  imageId_k__BackingField = squareData->fields._imageId_k__BackingField;
  if ( imageId_k__BackingField >= 0 )
    v31 = imageId_k__BackingField;
  else
    v31 = imageId_k__BackingField + 1;
  v52 = imageId_k__BackingField - (v31 & 0xFFFFFFFE);
  v32 = System_Int32__ToString((int32_t)&v52, 0LL);
  v33 = System_String__Concat_63235584(effectKey, v32, 0LL);
  v35 = Method_System_Array_Empty_object___;
  v36 = v33;
  v37 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v37 )
  {
    sub_1C80064(Method_System_Array_Empty_object___);
    v37 = v35[7];
  }
  v38 = *(_QWORD *)(v37 + 16);
  if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
    v38 = sub_1C80008(inited);
  if ( !*(_DWORD *)(v38 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v38);
  v39 = *(_QWORD *)(v35[7] + 16LL);
  if ( (*(_BYTE *)(v39 + 309) & 1) == 0 )
    v39 = sub_1C80008(inited);
  v40 = System_String__Format_63250092(v36, **(System_Object_array ***)(v39 + 184), 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               Instance,
                               v40,
                               (const MethodInfo_30B1398 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  *(_QWORD *)(v13 + 16) = CommonEffectAsset_object;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)CommonEffectAsset_object, v42, v43, v44, v45, v46, v47);
  v48 = *(UnityEngine_Object_o **)(v13 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v48, 0LL, 0LL) )
    return 0;
  v50 = sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(
    (System_Action_o *)v50,
    (Il2CppObject *)v13,
    Method_WarBoardSquareComponent___c__DisplayClass62_0__PlayEffect_b__0__,
    0LL);
  uiDataComp = (UnityEngine_Object_o *)this->fields.uiDataComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (WarBoardManager_o *)UnityEngine_Object__op_Inequality(uiDataComp, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( v50 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(v50 + 24))(*(_QWORD *)(v50 + 64), *(_QWORD *)(v50 + 40));
      return 1;
    }
LABEL_30:
    sub_1C2E388(Instance, v15);
  }
  Instance = (WarBoardManager_o *)this->fields.uiDataComp;
  if ( !Instance )
    goto LABEL_30;
  WarBoardControlUiDataComponent__SyncAnimation(
    (WarBoardControlUiDataComponent_o *)Instance,
    (System_Action_o *)v50,
    0LL);
  return 1;
}


void __fastcall WarBoardSquareComponent__PlayUnDispCostAnim(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 costLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v6; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct TweenScale_o *tweenScale; // x21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  struct TweenScale_o *v16; // x8
  float costAnimScale; // s0
  struct TweenScale_o *v18; // x20
  UnityEngine_GameObject_o *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x1

  if ( (byte_4BFB120 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UITweener_Begin_TweenScale___, method);
    sub_1C2E12C(&StringLiteral_10870/*"PlayUnDispCostAnim2"*/, v3);
    byte_4BFB120 = 1;
  }
  costLabel = (__int64)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_11;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL);
  v6 = UITweener__Begin_object_(
         gameObject,
         this->fields.costAnimScaleTime,
         (const MethodInfo_3086DBC *)Method_UITweener_Begin_TweenScale___);
  this->fields.tweenScale = (struct TweenScale_o *)v6;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.tweenScale, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  tweenScale = this->fields.tweenScale;
  if ( !byte_4BF7D96 )
  {
    costLabel = sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, method);
    byte_4BF7D96 = 1;
  }
  if ( !tweenScale )
    goto LABEL_11;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->oneVector.fields.z;
  *(_QWORD *)&tweenScale->fields.from.fields.x = *(_QWORD *)&static_fields->oneVector.fields.x;
  tweenScale->fields.from.fields.z = z;
  v16 = this->fields.tweenScale;
  if ( !v16 )
    goto LABEL_11;
  costAnimScale = this->fields.costAnimScale;
  v16->fields.to.fields.x = costAnimScale;
  v16->fields.to.fields.y = costAnimScale;
  v16->fields.to.fields.z = costAnimScale;
  v18 = this->fields.tweenScale;
  if ( !v18
    || (v18->fields.method = 6,
        v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        v18->fields.eventReceiver = v19,
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&v18->fields.eventReceiver,
          (int64_t)v19,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25),
        (costLabel = (__int64)this->fields.tweenScale) == 0) )
  {
LABEL_11:
    sub_1C2E388(costLabel, method);
  }
  v32 = StringLiteral_10870/*"PlayUnDispCostAnim2"*/;
  *(_QWORD *)(costLabel + 88) = StringLiteral_10870/*"PlayUnDispCostAnim2"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(costLabel + 88), v32, v26, v27, v28, v29, v30, v31);
}


void __fastcall WarBoardSquareComponent__PlayUnDispCostAnim2(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 costLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct TweenPosition_o *tweenPosition; // x8
  struct TweenPosition_o *v16; // x8
  struct TweenPosition_o *v17; // x20
  UnityEngine_GameObject_o *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  UnityEngine_GameObject_o *v25; // x0
  Il2CppObject *v26; // x0
  struct TweenScale_o **p_tweenScale; // x20
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct TweenScale_o *tweenScale; // x8
  float costAnimScale; // s0
  struct TweenScale_o *v36; // x21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  struct TweenScale_o *v39; // x20
  UnityEngine_GameObject_o *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  UnityEngine_GameObject_o *v47; // x0
  Il2CppObject *v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct TweenAlpha_o *tweenAlpha; // x20
  UnityEngine_GameObject_o *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x1
  __int64 v70; // [xsp+0h] [xbp-50h]
  __int64 v71; // [xsp+10h] [xbp-40h]

  if ( (byte_4BFB121 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UITweener_Begin_TweenAlpha___, method);
    sub_1C2E12C(&Method_UITweener_Begin_TweenPosition___, v3);
    sub_1C2E12C(&Method_UITweener_Begin_TweenScale___, v4);
    sub_1C2E12C(&StringLiteral_6858/*"FinishUnDispCostAnim"*/, v5);
    byte_4BFB121 = 1;
  }
  costLabel = (__int64)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL);
  v8 = UITweener__Begin_object_(
         gameObject,
         this->fields.costAnimFadeTime,
         (const MethodInfo_3086DBC *)Method_UITweener_Begin_TweenPosition___);
  this->fields.tweenPosition = (struct TweenPosition_o *)v8;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.tweenPosition, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  tweenPosition = this->fields.tweenPosition;
  v71 = *(_QWORD *)&this->fields.costLabelPos.fields.x;
  if ( !tweenPosition )
    goto LABEL_17;
  tweenPosition->fields.from.fields.z = this->fields.costLabelPos.fields.z;
  *(_QWORD *)&tweenPosition->fields.from.fields.x = v71;
  v16 = this->fields.tweenPosition;
  v70 = *(_QWORD *)&this->fields.costLabelMovePos.fields.x;
  if ( !v16 )
    goto LABEL_17;
  v16->fields.to.fields.z = this->fields.costLabelMovePos.fields.z;
  *(_QWORD *)&v16->fields.to.fields.x = v70;
  v17 = this->fields.tweenPosition;
  if ( !v17 )
    goto LABEL_17;
  v17->fields.method = 0;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v17->fields.eventReceiver = v18;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v17->fields.eventReceiver, (int64_t)v18, v19, v20, v21, v22, v23, v24);
  costLabel = (__int64)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_17;
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL);
  v26 = UITweener__Begin_object_(
          v25,
          this->fields.costAnimFadeTime,
          (const MethodInfo_3086DBC *)Method_UITweener_Begin_TweenScale___);
  this->fields.tweenScale = (struct TweenScale_o *)v26;
  p_tweenScale = &this->fields.tweenScale;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.tweenScale, (int64_t)v26, v28, v29, v30, v31, v32, v33);
  tweenScale = this->fields.tweenScale;
  if ( !tweenScale )
    goto LABEL_17;
  costAnimScale = this->fields.costAnimScale;
  tweenScale->fields.from.fields.x = costAnimScale;
  tweenScale->fields.from.fields.y = costAnimScale;
  tweenScale->fields.from.fields.z = costAnimScale;
  v36 = *p_tweenScale;
  if ( !byte_4BF7D91 )
  {
    costLabel = sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, method);
    byte_4BF7D91 = 1;
  }
  if ( !v36 )
    goto LABEL_17;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&v36->fields.to.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v36->fields.to.fields.z = z;
  v39 = *p_tweenScale;
  if ( !v39 )
    goto LABEL_17;
  v39->fields.method = 0;
  v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v39->fields.eventReceiver = v40;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v39->fields.eventReceiver, (int64_t)v40, v41, v42, v43, v44, v45, v46);
  costLabel = (__int64)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_17;
  v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL);
  v48 = UITweener__Begin_object_(
          v47,
          this->fields.costAnimFadeTime,
          (const MethodInfo_3086DBC *)Method_UITweener_Begin_TweenAlpha___);
  this->fields.tweenAlpha = (struct TweenAlpha_o *)v48;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.tweenAlpha, (int64_t)v48, v49, v50, v51, v52, v53, v54);
  tweenAlpha = this->fields.tweenAlpha;
  if ( !tweenAlpha
    || (tweenAlpha->fields.method = 0,
        *(_QWORD *)&tweenAlpha->fields.from = 1065353216LL,
        v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        tweenAlpha->fields.eventReceiver = v56,
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&tweenAlpha->fields.eventReceiver,
          (int64_t)v56,
          v57,
          v58,
          v59,
          v60,
          v61,
          v62),
        (costLabel = (__int64)this->fields.tweenAlpha) == 0) )
  {
LABEL_17:
    sub_1C2E388(costLabel, method);
  }
  v69 = StringLiteral_6858/*"FinishUnDispCostAnim"*/;
  *(_QWORD *)(costLabel + 88) = StringLiteral_6858/*"FinishUnDispCostAnim"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(costLabel + 88), v69, v63, v64, v65, v66, v67, v68);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1C2E388(costLabel, isOnActionPiece);
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
  __int64 v7; // x1
  struct UIButton_o *v8; // x0
  UIButton_c *klass; // x8
  int32_t mState; // w20

  if ( (byte_4BFB11E & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, enable);
    byte_4BFB11E = 1;
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
LABEL_17:
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
              goto LABEL_17;
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
      sub_1C2E388(v8, v7);
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
  void *costLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v20; // x0
  UILabel_o *v21; // x20
  System_String_o *v22; // x21
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x0
  int32_t v27; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = gradientBottom.fields.a;
  b = gradientBottom.fields.b;
  g = gradientBottom.fields.g;
  r = gradientBottom.fields.r;
  v9 = gradientTop.fields.a;
  v10 = gradientTop.fields.b;
  v11 = gradientTop.fields.g;
  v12 = gradientTop.fields.r;
  if ( (byte_4BFB11C & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, *(_QWORD *)&cost);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v15);
    sub_1C2E12C(&StringLiteral_15718/*"WARBOARD_SQUARE_COST"*/, v16);
    byte_4BFB11C = 1;
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
  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL);
  GameObjectExtensions__SetLocalPosition(v20, this->fields.costLabelPos, 0LL);
  costLabel = this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_13;
  v28.fields.r = *((float *)costLabel + 37);
  v28.fields.g = *((float *)costLabel + 38);
  v28.fields.b = *((float *)costLabel + 39);
  v28.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)costLabel, v28, 0LL);
  costLabel = this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_13;
  UILabel__set_applyGradient((UILabel_o *)costLabel, 1, 0LL);
  costLabel = this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_13;
  v29.fields.r = v12;
  v29.fields.g = v11;
  v29.fields.b = v10;
  v29.fields.a = v9;
  UILabel__set_gradientTop((UILabel_o *)costLabel, v29, 0LL);
  costLabel = this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_13;
  v30.fields.r = r;
  v30.fields.g = g;
  v30.fields.b = b;
  v30.fields.a = a;
  UILabel__set_gradientBottom((UILabel_o *)costLabel, v30, 0LL);
  v21 = this->fields.costLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_15718/*"WARBOARD_SQUARE_COST"*/, 0LL);
  v27 = cost;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v23, v24, v25);
  costLabel = System_String__Format(v22, v26, 0LL);
  if ( !v21 )
LABEL_13:
    sub_1C2E388(costLabel, v17);
  UILabel__set_text(v21, (System_String_o *)costLabel, 0LL);
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
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  UnityEngine_Object_o *v19; // x22
  struct WarBoardSquareData_o *squareData; // x8
  int imageId_k__BackingField; // w8
  Il2CppObject *v22; // x0
  System_String_o *v23; // x21
  Il2CppObject *CommonEffectAsset_object; // x21
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  Il2CppObject *Component_object; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int v40; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BFB117 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, isDefault);
    sub_1C2E12C(&int_TypeInfo, v5);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_GameObject____77847040, v6);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v7);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_1C2E12C(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v9);
    sub_1C2E12C(&StringLiteral_9330/*"Move_Point_0"*/, v10);
    sub_1C2E12C(&StringLiteral_9331/*"Move_Point_{0}"*/, v11);
    byte_4BFB117 = 1;
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
    v19 = (UnityEngine_Object_o *)*p_movePoint;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70989720(v19, 0LL);
  }
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_24;
  imageId_k__BackingField = squareData->fields._imageId_k__BackingField;
  if ( !isDefault )
    imageId_k__BackingField += 2;
  v40 = imageId_k__BackingField;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40, v16, v17, v18);
  v23 = System_String__Format((System_String_o *)StringLiteral_9331/*"Move_Point_{0}"*/, v22, 0LL);
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               v23,
                               (const MethodInfo_30B1398 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                                 (WarBoardManager_o *)Instance,
                                 (System_String_o *)StringLiteral_9330/*"Move_Point_0"*/,
                                 (const MethodInfo_30B1398 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v26 = UnityEngine_Object__Instantiate_object__50692032(
          CommonEffectAsset_object,
          transform,
          (const MethodInfo_3057FC0 *)Method_UnityEngine_Object_Instantiate_GameObject____77847040);
  *p_movePoint = (struct UnityEngine_GameObject_o *)v26;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.movePoint, (int64_t)v26, v27, v28, v29, v30, v31, v32);
  Instance = *p_movePoint;
  if ( !*p_movePoint || (UnityEngine_GameObject__SetActive(Instance, 0, 0LL), (Instance = *p_movePoint) == 0LL) )
LABEL_24:
    sub_1C2E388(Instance, v15);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       Instance,
                       (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.movePointCommonEffect = (struct CommonEffectComponent_o *)Component_object;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.movePointCommonEffect,
    (int64_t)Component_object,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
}


void __fastcall WarBoardSquareComponent__SetSprite(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  WarBoardSquareComponent_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct WarBoardSquareData_o *squareData; // x8
  int imageId_k__BackingField; // w8
  Il2CppObject *v11; // x0
  System_String_o *v12; // x20
  UISprite_o *squareSubImage; // x21
  UIButton_o *subButton; // x21
  int v15; // [xsp+Ch] [xbp-24h] BYREF

  v5 = this;
  if ( (byte_4BFB11B & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, method);
    sub_1C2E12C(&StringLiteral_16866/*"_target"*/, v6);
    sub_1C2E12C(&StringLiteral_23911/*"square{0:D3}"*/, v7);
    this = (WarBoardSquareComponent_o *)sub_1C2E12C(&StringLiteral_23909/*"squares"*/, v8);
    byte_4BFB11B = 1;
  }
  squareData = v5->fields.squareData;
  if ( !squareData )
    goto LABEL_14;
  imageId_k__BackingField = squareData->fields._imageId_k__BackingField;
  if ( imageId_k__BackingField < 1 )
  {
    v12 = (System_String_o *)StringLiteral_23909/*"squares"*/;
  }
  else
  {
    v15 = imageId_k__BackingField;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v2, v3, v4);
    v12 = System_String__Format((System_String_o *)StringLiteral_23911/*"square{0:D3}"*/, v11, 0LL);
  }
  this = (WarBoardSquareComponent_o *)v5->fields.squareImage;
  if ( !this )
    goto LABEL_14;
  UISprite__set_spriteName((UISprite_o *)this, v12, 0LL);
  this = (WarBoardSquareComponent_o *)v5->fields.button;
  if ( !this )
    goto LABEL_14;
  UIButton__set_normalSprite((UIButton_o *)this, v12, 0LL);
  this = (WarBoardSquareComponent_o *)v5->fields.squareImage;
  if ( !this )
    goto LABEL_14;
  UIWidget__SetDirty((UIWidget_o *)this, 0LL);
  squareSubImage = v5->fields.squareSubImage;
  this = (WarBoardSquareComponent_o *)System_String__Concat_63235584(v12, (System_String_o *)StringLiteral_16866/*"_target"*/, 0LL);
  if ( !squareSubImage
    || (UISprite__set_spriteName(squareSubImage, (System_String_o *)this, 0LL),
        subButton = v5->fields.subButton,
        this = (WarBoardSquareComponent_o *)System_String__Concat_63235584(
                                              v12,
                                              (System_String_o *)StringLiteral_16866/*"_target"*/,
                                              0LL),
        !subButton)
    || (UIButton__set_normalSprite(subButton, (System_String_o *)this, 0LL),
        (this = (WarBoardSquareComponent_o *)v5->fields.squareSubImage) == 0LL) )
  {
LABEL_14:
    sub_1C2E388(this, method);
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

  if ( (byte_4BFB11D & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, enable);
    byte_4BFB11D = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      goto LABEL_14;
    ((void (__fastcall *)(struct UIButton_o *, bool, Il2CppMethodPointer))v7->klass->vtable._5_set_isEnabled.method)(
      v7,
      enable,
      v7->klass->vtable._6_OnInit.methodPtr);
  }
  subButton = (UnityEngine_Object_o *)this->fields.subButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_14:
    sub_1C2E388(v7, v6);
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
  __int64 v9; // x1
  Il2CppObject *v10; // x20
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x2
  bool v13; // w21
  System_Collections_IEnumerator_o *v14; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BFB129 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__GameObject__Remove__, effectKey);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__, v7);
    byte_4BFB129 = 1;
  }
  value = 0LL;
  dicEffect = (Il2CppObject *)System_String__Concat_63235584(prefix, effectKey, 0LL);
  if ( !this->fields.dicEffect )
    goto LABEL_8;
  v10 = dicEffect;
  v11 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)this->fields.dicEffect,
          dicEffect,
          &value,
          (const MethodInfo_3337380 *)Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__);
  v13 = v11;
  if ( v11 )
  {
    v14 = WarBoardSquareComponent__StopEffectEndLoop(
            (WarBoardSquareComponent_o *)v11,
            (UnityEngine_GameObject_o *)value,
            v12);
    UnityEngine_MonoBehaviour__StartCoroutine_70974992((UnityEngine_MonoBehaviour_o *)this, v14, 0LL);
    dicEffect = (Il2CppObject *)this->fields.dicEffect;
    if ( dicEffect )
    {
      System_Collections_Generic_Dictionary_object__object___Remove(
        (System_Collections_Generic_Dictionary_object__object__o *)dicEffect,
        v10,
        (const MethodInfo_3337070 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Remove__);
      return v13;
    }
LABEL_8:
    sub_1C2E388(dicEffect, v9);
  }
  return v13;
}


System_Collections_IEnumerator_o *__fastcall WarBoardSquareComponent__StopEffectEndLoop(
        WarBoardSquareComponent_o *this,
        UnityEngine_GameObject_o *effect,
        const MethodInfo *method)
{
  __int64 v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BFB12A & 1) == 0 )
  {
    sub_1C2E12C(&WarBoardSquareComponent__StopEffectEndLoop_d__64_TypeInfo, effect);
    byte_4BFB12A = 1;
  }
  v4 = sub_1C2E378(WarBoardSquareComponent__StopEffectEndLoop_d__64_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = effect;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v4 + 32), (int64_t)effect, v5, v6, v7, v8, v9, v10);
  return (System_Collections_IEnumerator_o *)v4;
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1C2E388(costLabel, isDispCostLabel);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costLabel, isDispCostLabel, 0LL);
}


void __fastcall WarBoardSquareComponent___DisableEditPosition_b__40_0(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectMarker; // x0

  selectMarker = this->fields.selectMarker;
  if ( !selectMarker )
    sub_1C2E388(0LL, method);
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
    sub_1C2E388(battleTargetPlayer, method);
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
    sub_1C2E388(battleTargetEnemy, method);
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
    sub_1C2E388(selectCircle, method);
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

  if ( (byte_4BFB12D & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFB12D = 1;
  }
  effectPrefab = (UnityEngine_Object_o *)this->fields.effectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(effectPrefab, 0LL) )
  {
    v5 = this->fields.effectPrefab;
    if ( !v5 )
      sub_1C2E388(0LL, v4);
    UnityEngine_GameObject__SetActive(v5, 0, 0LL);
    v6 = (UnityEngine_Object_o *)this->fields.effectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70989720(v6, 0LL);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  UnityEngine_ParticleSystem_MinMaxCurve_o v21; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v22; // [xsp+20h] [xbp-50h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-28h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v24; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v25; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v26; // 0:x0.8

  if ( (byte_4BFB130 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___, method);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v3);
    sub_1C2E12C(&UnityEngine_WaitForSeconds_TypeInfo, v4);
    byte_4BFB130 = 1;
  }
  m_ParticleSystem = 0LL;
  memset(&v22, 0, sizeof(v22));
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    effect = this->fields.effect;
    this->fields.__1__state = -1;
    if ( !effect )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effect, 0, 0LL);
    v11 = (UnityEngine_Object_o *)this->fields.effect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70989720(v11, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  effect = this->fields.effect;
  this->fields.__1__state = -1;
  if ( !effect )
    goto LABEL_22;
  effect = UnityEngine_GameObject__GetComponentsInChildren_object__50476848(
             (UnityEngine_GameObject_o *)effect,
             (const MethodInfo_3023730 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
  if ( !effect )
    goto LABEL_22;
  v7 = *((_DWORD *)effect + 6);
  v8 = effect;
  if ( v7 >= 1 )
  {
    v9 = 0;
    constantMax = 0.0;
    while ( 1 )
    {
      if ( v9 >= v7 )
        sub_1C2E390(effect, method);
      effect = (void *)*((_QWORD *)v8 + (int)v9 + 4);
      if ( !effect )
        break;
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)effect, 0LL).fields.m_ParticleSystem;
      v24.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__get_startLifetime(&v21, v24, 0LL);
      v22 = v21;
      if ( constantMax < UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v22, 0LL) )
      {
        v25.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
        UnityEngine_ParticleSystem_MainModule__get_startLifetime(&v21, v25, 0LL);
        v22 = v21;
        constantMax = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v22, 0LL);
      }
      v26.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__set_loop(v26, 0, 0LL);
      v7 = *((_DWORD *)v8 + 6);
      if ( (int)++v9 >= v7 )
        goto LABEL_21;
    }
LABEL_22:
    sub_1C2E388(effect, method);
  }
  constantMax = 0.0;
LABEL_21:
  v13 = (UnityEngine_WaitForSeconds_o *)sub_1C2E378(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v13, constantMax * 1.2, 0LL);
  this->fields.__2__current = (Il2CppObject *)v13;
  p__2__current = &this->fields.__2__current;
  sub_1C2E0D0((PartyOrganizationUtility_o *)p__2__current, (int64_t)v13, v15, v16, v17, v18, v19, v20);
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

  v2 = sub_1C2E140(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2E378(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C2E140(&Method_WarBoardSquareComponent__StopEffectEndLoop_d__64_System_Collections_IEnumerator_Reset__);
  sub_1C2E254(v3, v4);
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
  __int64 v12; // x1
  Il2CppObject *CommonEffectAsset_object; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  UnityEngine_Component_o *_4__this; // x19
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v22; // x0
  int64_t v23; // x1
  PartyOrganizationUtility_o *p_monitor; // x0
  System_Enum_o v25; // [xsp+8h] [xbp-48h] BYREF
  int32_t v26; // [xsp+18h] [xbp-38h]

  if ( (byte_4BFB12E & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_GameObject____77847040, method);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v3);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_1C2E12C(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v5);
    sub_1C2E12C(&WarBoardManager_WarBoardSqEfType_TypeInfo, v6);
    sub_1C2E12C(&StringLiteral_19192/*"ef_sq_"*/, v7);
    byte_4BFB12E = 1;
  }
  effectId = this->fields.effectId;
  v25.klass = (System_Enum_c *)WarBoardManager_WarBoardSqEfType_TypeInfo;
  v25.monitor = (void *)-1LL;
  v26 = effectId;
  v9 = System_Enum__ToString(&v25, 0LL);
  v10 = System_String__Concat_63235584((System_String_o *)StringLiteral_19192/*"ef_sq_"*/, v9, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               v10,
                               (const MethodInfo_30B1398 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (Il2CppObject *)UnityEngine_Object__op_Inequality(
                               (UnityEngine_Object_o *)CommonEffectAsset_object,
                               0LL,
                               0LL);
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this )
LABEL_13:
    sub_1C2E388(Instance, v12);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    transform = UnityEngine_Component__get_transform(_4__this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v22 = UnityEngine_Object__Instantiate_object__50692032(
            CommonEffectAsset_object,
            transform,
            (const MethodInfo_3057FC0 *)Method_UnityEngine_Object_Instantiate_GameObject____77847040);
    _4__this[10].monitor = v22;
    v23 = (int64_t)v22;
    p_monitor = (PartyOrganizationUtility_o *)&_4__this[10].monitor;
  }
  else
  {
    _4__this[10].monitor = 0LL;
    p_monitor = (PartyOrganizationUtility_o *)&_4__this[10].monitor;
    v23 = 0LL;
  }
  sub_1C2E0D0(p_monitor, v23, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_4BFB12F & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__GameObject__set_Item__, method);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_GameObject____77847040, v3);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v4);
    byte_4BFB12F = 1;
  }
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  asset = (Il2CppObject *)this->fields.asset;
  transform = UnityEngine_Component__get_transform(_4__this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  _4__this = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__50692032(
                                          asset,
                                          transform,
                                          (const MethodInfo_3057FC0 *)Method_UnityEngine_Object_Instantiate_GameObject____77847040);
  v8 = this->fields.__4__this;
  if ( !v8 || (v9 = (Il2CppObject *)_4__this, (_4__this = (UnityEngine_Component_o *)v8->fields.dicEffect) == 0LL) )
LABEL_9:
    sub_1C2E388(_4__this, method);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)_4__this,
    (Il2CppObject *)this->fields.key,
    v9,
    (const MethodInfo_3335B60 *)Method_System_Collections_Generic_Dictionary_string__GameObject__set_Item__);
}