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
  __int64 v9; // x2

  if ( (byte_4B13C42 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardSquareComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_12664/*"ScaleSquare_start"*/, v8, v9);
    byte_4B13C42 = 1;
  }
  WarBoardSquareComponent_TypeInfo->static_fields->UNLOCK_ANIMATION_NAME = (struct System_String_o *)StringLiteral_12664/*"ScaleSquare_start"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardSquareComponent_TypeInfo->static_fields,
    StringLiteral_12664/*"ScaleSquare_start"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardSquareComponent___ctor(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_Dictionary_object__object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B13C41 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo, v5, v6);
    byte_4B13C41 = 1;
  }
  this->fields.costAnimFadeTime = 0.3;
  *(_OWORD *)&this->fields.costLabelPos.fields.x = xmmword_BD30E0;
  *(_OWORD *)&this->fields.costLabelMovePos.fields.y = xmmword_BD3C90;
  v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                    System_Collections_Generic_Dictionary_string__GameObject__TypeInfo,
                                                                    method,
                                                                    v2,
                                                                    v3);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v7,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
  this->fields.dicEffect = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dicEffect, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardSquareComponent__ActiveEditPointArrow(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *selectMarkerArrow; // x20
  __int64 v5; // x1
  UnityEngine_Behaviour_o *v6; // x0

  if ( (byte_4B13C2F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B13C2F = 1;
  }
  selectMarkerArrow = (UnityEngine_Object_o *)this->fields.selectMarkerArrow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(selectMarkerArrow, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Behaviour_o *)this->fields.selectMarkerArrow;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    UnityEngine_Behaviour__set_enabled(v6, 1, 0LL);
  }
}


void __fastcall WarBoardSquareComponent__DeactiveEditPointArrow(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *selectMarkerArrow; // x20
  __int64 v5; // x1
  UnityEngine_Behaviour_o *v6; // x0

  if ( (byte_4B13C30 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B13C30 = 1;
  }
  selectMarkerArrow = (UnityEngine_Object_o *)this->fields.selectMarkerArrow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(selectMarkerArrow, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Behaviour_o *)this->fields.selectMarkerArrow;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    UnityEngine_Behaviour__set_enabled(v6, 0, 0LL);
  }
}


void __fastcall WarBoardSquareComponent__DisableEditPosition(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *selectMarker; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  struct CommonEffectComponent_o *selectMarkerCommonEffect; // x20
  System_Action_o *v11; // x21

  if ( (byte_4B13C2E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WarBoardSquareComponent__DisableEditPosition_b__40_0__, v4, v5);
    byte_4B13C2E = 1;
  }
  selectMarker = this->fields.selectMarker;
  if ( !selectMarker )
    goto LABEL_8;
  if ( UnityEngine_GameObject__get_activeSelf(selectMarker, 0LL) )
  {
    selectMarkerCommonEffect = this->fields.selectMarkerCommonEffect;
    v11 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_WarBoardSquareComponent__DisableEditPosition_b__40_0__, 0LL);
    if ( selectMarkerCommonEffect )
    {
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))selectMarkerCommonEffect->klass->vtable._8_Stop.method)(
        selectMarkerCommonEffect,
        0LL,
        v11,
        selectMarkerCommonEffect->klass->vtable._9_ForceStop.methodPtr);
      return;
    }
LABEL_8:
    sub_1BCAA3C(selectMarker, method);
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
      sub_1BCAA3C(battleTargetPlayer, isPlayerForce);
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
    sub_1BCAA3C(selectMarker, method);
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
    sub_1BCAA3C(costLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costLabel, 0, 0LL);
}


bool __fastcall WarBoardSquareComponent__GetButtonIsEnable(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  struct UIButton_o *button; // x0

  button = this->fields.button;
  if ( !button )
    sub_1BCAA3C(0LL, method);
  return ((__int64 (__fastcall *)(struct UIButton_o *, Il2CppMethodPointer))button->klass->vtable._4_get_isEnabled.method)(
           button,
           button->klass->vtable._5_set_isEnabled.methodPtr);
}


void __fastcall WarBoardSquareComponent__InitCostAnim(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *tweenScale; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Object_o *tweenPosition; // x20
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x20
  UnityEngine_Object_o *tweenAlpha; // x20
  __int64 v11; // x1
  UnityEngine_Object_o *v12; // x19

  if ( (byte_4B13C38 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B13C38 = 1;
  }
  tweenScale = (UnityEngine_Object_o *)this->fields.tweenScale;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(tweenScale, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Object_o *)this->fields.tweenScale;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    UnityEngine_Object__Destroy_70154244(v6, 0LL);
  }
  tweenPosition = (UnityEngine_Object_o *)this->fields.tweenPosition;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(tweenPosition, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Object_o *)this->fields.tweenPosition;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    UnityEngine_Object__Destroy_70154244(v9, 0LL);
  }
  tweenAlpha = (UnityEngine_Object_o *)this->fields.tweenAlpha;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(tweenAlpha, 0LL, 0LL) )
  {
    v12 = (UnityEngine_Object_o *)this->fields.tweenAlpha;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    UnityEngine_Object__Destroy_70154244(v12, 0LL);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  char *dicEffect; // x0
  struct WarBoardSquareData_o **p_squareData; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  UnityEngine_Transform_o *transform; // x22
  int v26; // s0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  UILabel_o *costLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v37; // x0
  Il2CppObject *Component_object; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  Il2CppObject *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  Il2CppObject *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  Il2CppObject *v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  Il2CppObject *v66; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  const MethodInfo *v73; // x2
  const MethodInfo *v74; // x1
  UnityEngine_Color_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B13C2C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__, imageSetAtlas, data);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&StringLiteral_23707/*"squares"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_23708/*"squares_target"*/, v15, v16);
    byte_4B13C2C = 1;
  }
  dicEffect = (char *)this->fields.dicEffect;
  if ( !dicEffect )
    goto LABEL_33;
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)dicEffect,
    (const MethodInfo_32653E8 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
  this->fields.squareData = data;
  p_squareData = &this->fields.squareData;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.squareData, (int64_t)data, v19, v20, v21, v22, v23, v24);
  dicEffect = (char *)this->fields.squareImage;
  if ( !dicEffect )
    goto LABEL_33;
  UISprite__set_atlas((UISprite_o *)dicEffect, imageSetAtlas, 0LL);
  dicEffect = (char *)this->fields.squareImage;
  if ( !dicEffect )
    goto LABEL_33;
  UISprite__set_spriteName((UISprite_o *)dicEffect, (System_String_o *)StringLiteral_23707/*"squares"*/, 0LL);
  dicEffect = (char *)this->fields.squareSubImage;
  if ( !dicEffect )
    goto LABEL_33;
  UISprite__set_atlas((UISprite_o *)dicEffect, imageSetAtlas, 0LL);
  dicEffect = (char *)this->fields.squareSubImage;
  if ( !dicEffect )
    goto LABEL_33;
  UISprite__set_spriteName((UISprite_o *)dicEffect, (System_String_o *)StringLiteral_23708/*"squares_target"*/, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  dicEffect = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !data )
    goto LABEL_33;
  if ( !dicEffect )
    goto LABEL_33;
  *(UnityEngine_Vector3_o *)&v26 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)dicEffect,
                                     data->fields._squareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_33;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v26, 0LL);
  dicEffect = (char *)*p_squareData;
  if ( !*p_squareData )
    goto LABEL_33;
  *((_QWORD *)dicEffect + 6) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(dicEffect + 48), (int64_t)this, v29, v30, v31, v32, v33, v34);
  costLabel = this->fields.costLabel;
  dicEffect = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dicEffect, 0LL);
  GameObjectExtensions__ResetLocalScale(v37, 0LL);
  dicEffect = (char *)this->fields.costLabel;
  if ( !dicEffect )
    goto LABEL_33;
  v75.fields.r = *((float *)dicEffect + 37);
  v75.fields.g = *((float *)dicEffect + 38);
  v75.fields.b = *((float *)dicEffect + 39);
  v75.fields.a = 0.0;
  UIWidget__set_color((UIWidget_o *)dicEffect, v75, 0LL);
  dicEffect = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !dicEffect )
    goto LABEL_33;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)dicEffect,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.simpleAnimation,
    (int64_t)Component_object,
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
  v45 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)dicEffect,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.selectMarkerCommonEffect = (struct CommonEffectComponent_o *)v45;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.selectMarkerCommonEffect,
    (int64_t)v45,
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
  v52 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)dicEffect,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.selectCircleCommonEffect = (struct CommonEffectComponent_o *)v52;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.selectCircleCommonEffect,
    (int64_t)v52,
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
  v59 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)dicEffect,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.battleTargetPlayerCommonEffect = (struct CommonEffectComponent_o *)v59;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.battleTargetPlayerCommonEffect,
    (int64_t)v59,
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
  v66 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)dicEffect,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.battleTargetEnemyCommonEffect = (struct CommonEffectComponent_o *)v66;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.battleTargetEnemyCommonEffect,
    (int64_t)v66,
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
    sub_1BCAA3C(dicEffect, imageSetAtlas);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_GameObject_o *battleTargetPlayer; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  struct CommonEffectComponent_o *battleTargetPlayerCommonEffect; // x20
  System_Action_o *v14; // x0
  __int64 *v15; // x8
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Action_o *v19; // x21

  if ( (byte_4B13C39 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isPlayerForce, method);
    sub_1BCA7E0(&Method_WarBoardSquareComponent__NondispBattleRange_b__57_0__, v5, v6);
    sub_1BCA7E0(&Method_WarBoardSquareComponent__NondispBattleRange_b__57_1__, v7, v8);
    byte_4B13C39 = 1;
  }
  if ( isPlayerForce )
  {
    battleTargetPlayer = this->fields.battleTargetPlayer;
    if ( !battleTargetPlayer )
      goto LABEL_13;
    if ( UnityEngine_GameObject__get_activeSelf(battleTargetPlayer, 0LL) )
    {
      battleTargetPlayerCommonEffect = this->fields.battleTargetPlayerCommonEffect;
      v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
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
      v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v16, v17, v18);
      v15 = &Method_WarBoardSquareComponent__NondispBattleRange_b__57_1__;
LABEL_10:
      v19 = v14;
      System_Action___ctor(v14, (Il2CppObject *)this, *v15, 0LL);
      if ( battleTargetPlayerCommonEffect )
      {
        ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))battleTargetPlayerCommonEffect->klass->vtable._8_Stop.method)(
          battleTargetPlayerCommonEffect,
          0LL,
          v19,
          battleTargetPlayerCommonEffect->klass->vtable._9_ForceStop.methodPtr);
        return;
      }
LABEL_13:
      sub_1BCAA3C(battleTargetPlayer, isPlayerForce);
    }
  }
}


void __fastcall WarBoardSquareComponent__OnClickSquare(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  WarBoardData_o *Instance; // x0
  __int64 v7; // x1
  struct WarBoardSquareData_o *squareData; // x8
  WarBoardManager_o *v9; // x19
  struct WarBoardSquareData_o *v10; // x8
  WarBoardPieceData_o *v11; // x21
  struct WarBoardSquareData_o *v12; // x8
  WarBoardItemData_o *v13; // x22
  WarBoardEffectData_o *Effect; // x23
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x21
  struct WarBoardWallData_array *walls; // x8
  struct WarBoardSquareData_o *v18; // x8

  if ( (byte_4B13C3A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    sub_1BCA7E0(&Method_WarBoardSquareComponent_OnClickSquare__, v4, v5);
    byte_4B13C3A = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_31;
  v9 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_31;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_36054544(
                                 Instance,
                                 squareData->fields._squareIndex_k__BackingField,
                                 0LL);
  v10 = this->fields.squareData;
  if ( !v10 )
    goto LABEL_31;
  v11 = (WarBoardPieceData_o *)Instance;
  Instance = v9->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_31;
  Instance = (WarBoardData_o *)WarBoardData__GetItem(Instance, v10->fields._squareIndex_k__BackingField, 0LL);
  v12 = this->fields.squareData;
  if ( !v12 )
    goto LABEL_31;
  v13 = (WarBoardItemData_o *)Instance;
  Instance = v9->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_31;
  Effect = WarBoardData__GetEffect(Instance, v12->fields._squareIndex_k__BackingField, 0LL);
  if ( WarBoardManager__get_isSelectedPiece(v9, 0LL) && this->fields.isSelectable )
  {
    if ( !v11 || !WarBoardManager__IsSelectedPieceSame(v9, v11, 0LL) )
    {
      v15 = Method_WarBoardSquareComponent_OnClickSquare__;
      if ( (*((_BYTE *)Method_WarBoardSquareComponent_OnClickSquare__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_1BCA7F8(Method_WarBoardSquareComponent_OnClickSquare__);
      v16 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v15, v15[4]);
      Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        walls = Instance[1].fields.walls;
        if ( walls )
        {
          Instance = (WarBoardData_o *)OverwriteAssetSoundName__PlaySe(
                                         v16,
                                         *(System_String_o **)&walls->max_length,
                                         0LL);
          v18 = this->fields.squareData;
          if ( v18 )
          {
            WarBoardManager__SelectedPieceAction(v9, v18->fields._squareIndex_k__BackingField, 0LL);
            return;
          }
        }
      }
LABEL_31:
      sub_1BCAA3C(Instance, v7);
    }
    goto LABEL_21;
  }
  if ( v11 )
  {
LABEL_21:
    Instance = (WarBoardData_o *)v11->fields.pieceComponent;
    if ( !Instance )
      goto LABEL_31;
    (*(void (__fastcall **)(WarBoardData_o *, void *))&Instance->klass[1]._1.byval_arg.bits)(
      Instance,
      Instance->klass[1]._1.this_arg.data);
    return;
  }
  if ( v13 && !WarBoardItemData__get_Acquired(v13, 0LL) )
  {
    Instance = (WarBoardData_o *)v13->fields.component;
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
    WarBoardManager__HideSimplePopup(v9, 0LL, 0LL);
  }
}


void __fastcall WarBoardSquareComponent__OnDeselect(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *selectCircle; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  struct CommonEffectComponent_o *selectCircleCommonEffect; // x20
  System_Action_o *v11; // x21

  if ( (byte_4B13C35 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WarBoardSquareComponent__OnDeselect_b__49_0__, v4, v5);
    byte_4B13C35 = 1;
  }
  selectCircle = this->fields.selectCircle;
  if ( !selectCircle )
    goto LABEL_8;
  if ( UnityEngine_GameObject__get_activeSelf(selectCircle, 0LL) )
  {
    selectCircleCommonEffect = this->fields.selectCircleCommonEffect;
    v11 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_WarBoardSquareComponent__OnDeselect_b__49_0__, 0LL);
    if ( selectCircleCommonEffect )
    {
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))selectCircleCommonEffect->klass->vtable._8_Stop.method)(
        selectCircleCommonEffect,
        0LL,
        v11,
        selectCircleCommonEffect->klass->vtable._9_ForceStop.methodPtr);
      return;
    }
LABEL_8:
    sub_1BCAA3C(selectCircle, method);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  int64_t v31; // x20
  __int64 v32; // x2
  __int64 v33; // x3
  _QWORD *v34; // x21
  System_Delegate_o *v35; // x23
  WarBoardTaskBase_TaskCallback_o *v36; // x24
  System_Delegate_o *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x8
  WarBoardTaskBase_TaskCallback_c *v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x0
  Il2CppObject *Instance; // x19
  __int64 v57; // x21
  __int64 v58; // x0
  __int64 v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  __int64 v66; // x0

  if ( (byte_4B13C3C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, *(_QWORD *)&effectId, taskList);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&WarBoardTaskBase_TaskCallback_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_WarBoardSquareComponent___c__DisplayClass60_0__OnEffectDisp_b__0__, v11, v12);
    sub_1BCA7E0(&WarBoardSquareComponent___c__DisplayClass60_0_TypeInfo, v13, v14);
    sub_1BCA7E0(&WarBoardCallbackTask_TypeInfo, v15, v16);
    sub_1BCA7E0(&WarBoardTaskBase___TypeInfo, v17, v18);
    byte_4B13C3C = 1;
  }
  v19 = sub_1BCAA2C(WarBoardSquareComponent___c__DisplayClass60_0_TypeInfo, *(_QWORD *)&effectId, taskList, method);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_20;
  *(_QWORD *)(v19 + 24) = this;
  *(_DWORD *)(v19 + 16) = effectId;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 24), (int64_t)this, v22, v23, v24, v25, v26, v27);
  v31 = sub_1BCAA2C(WarBoardCallbackTask_TypeInfo, v28, v29, v30);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v31, 0LL, 0LL);
  if ( !v31 )
    goto LABEL_20;
  v34 = (_QWORD *)(v31 + 32);
  v35 = *(System_Delegate_o **)(v31 + 32);
  v36 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, v21, v32, v33);
  WarBoardTaskBase_TaskCallback___ctor(
    v36,
    (Il2CppObject *)v19,
    Method_WarBoardSquareComponent___c__DisplayClass60_0__OnEffectDisp_b__0__,
    0LL);
  v37 = System_Delegate__Combine(v35, (System_Delegate_o *)v36, 0LL);
  v44 = (int64_t)v37;
  if ( !v37 )
    goto LABEL_9;
  v45 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v37->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v34 = v37, (WarBoardTaskBase_TaskCallback_c *)v37->klass != v45) )
  {
    sub_1BCACFC(v37);
LABEL_9:
    *v34 = v44;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 32), v44, v38, v39, v40, v41, v42, v43);
  if ( !taskList )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v20 = sub_1BCA888(WarBoardTaskBase___TypeInfo, 1LL);
    if ( v20 )
    {
      v57 = v20;
      v58 = sub_1BCA91C(v31, *(_QWORD *)(*(_QWORD *)v20 + 64LL));
      if ( !v58 )
      {
        v66 = sub_1BCAA60();
        sub_1BCA908(v66, 0LL);
      }
      if ( !*(_DWORD *)(v57 + 24) )
        sub_1BCAA44(v58, v59);
      *(_QWORD *)(v57 + 32) = v31;
      sub_1BCA784((PartyOrganizationUtility_o *)(v57 + 32), v31, v60, v61, v62, v63, v64, v65);
      if ( Instance )
      {
        WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v57, 0LL);
        return;
      }
    }
LABEL_20:
    sub_1BCAA3C(v20, v21);
  }
  items = taskList->fields._items;
  v53 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++taskList->fields._version;
  if ( !items )
    goto LABEL_20;
  size = taskList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)taskList,
      (Il2CppObject *)v31,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
  }
  else
  {
    v55 = &items->obj.klass + size;
    taskList->fields._size = size + 1;
    v55[4] = (Il2CppClass *)v31;
    sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 4), v31, v46, v47, v48, v49, v50, v51);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int64_t v16; // x20
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  _QWORD *v21; // x22
  System_Delegate_o *v22; // x23
  WarBoardTaskBase_TaskCallback_o *v23; // x24
  System_Delegate_o *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x8
  WarBoardTaskBase_TaskCallback_c *v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  Il2CppObject *Instance; // x19
  __int64 v44; // x21
  __int64 v45; // x0
  __int64 v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  __int64 v53; // x0

  if ( (byte_4B13C3D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, *(_QWORD *)&effectId, taskList);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&WarBoardTaskBase_TaskCallback_TypeInfo, v8, v9);
    sub_1BCA7E0(&WarBoardCallbackTask_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_WarBoardSquareComponent__OnEffectHide_b__61_0__, v12, v13);
    sub_1BCA7E0(&WarBoardTaskBase___TypeInfo, v14, v15);
    byte_4B13C3D = 1;
  }
  v16 = sub_1BCAA2C(WarBoardCallbackTask_TypeInfo, *(_QWORD *)&effectId, taskList, method);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v16, 0LL, 0LL);
  if ( !v16 )
    goto LABEL_19;
  v21 = (_QWORD *)(v16 + 32);
  v22 = *(System_Delegate_o **)(v16 + 32);
  v23 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, v18, v19, v20);
  WarBoardTaskBase_TaskCallback___ctor(
    v23,
    (Il2CppObject *)this,
    Method_WarBoardSquareComponent__OnEffectHide_b__61_0__,
    0LL);
  v24 = System_Delegate__Combine(v22, (System_Delegate_o *)v23, 0LL);
  v31 = (int64_t)v24;
  if ( !v24 )
    goto LABEL_8;
  v32 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v24->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v21 = v24, (WarBoardTaskBase_TaskCallback_c *)v24->klass != v32) )
  {
    sub_1BCACFC(v24);
LABEL_8:
    *v21 = v31;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 32), v31, v25, v26, v27, v28, v29, v30);
  if ( !taskList )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v17 = sub_1BCA888(WarBoardTaskBase___TypeInfo, 1LL);
    if ( v17 )
    {
      v44 = v17;
      v45 = sub_1BCA91C(v16, *(_QWORD *)(*(_QWORD *)v17 + 64LL));
      if ( !v45 )
      {
        v53 = sub_1BCAA60();
        sub_1BCA908(v53, 0LL);
      }
      if ( !*(_DWORD *)(v44 + 24) )
        sub_1BCAA44(v45, v46);
      *(_QWORD *)(v44 + 32) = v16;
      sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 32), v16, v47, v48, v49, v50, v51, v52);
      if ( Instance )
      {
        WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v44, 0LL);
        return;
      }
    }
LABEL_19:
    sub_1BCAA3C(v17, v18);
  }
  items = taskList->fields._items;
  v40 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++taskList->fields._version;
  if ( !items )
    goto LABEL_19;
  size = taskList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)taskList,
      (Il2CppObject *)v16,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v42 = &items->obj.klass + size;
    taskList->fields._size = size + 1;
    v42[4] = (Il2CppClass *)v16;
    sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 4), v16, v33, v34, v35, v36, v37, v38);
  }
}


void __fastcall WarBoardSquareComponent__OnLongClickSquare(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardData_o *Instance; // x0
  __int64 v5; // x1
  struct WarBoardSquareData_o *squareData; // x8
  WarBoardManager_o *v7; // x19
  struct WarBoardSquareData_o *v8; // x8
  WarBoardData_o *v9; // x21
  struct WarBoardSquareData_o *v10; // x8
  WarBoardItemData_o *v11; // x20
  WarBoardEffectData_o *Effect; // x0
  WarBoardEffectData_o *v13; // x22

  if ( (byte_4B13C3B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    byte_4B13C3B = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_21;
  v7 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_21;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_36054544(
                                 Instance,
                                 squareData->fields._squareIndex_k__BackingField,
                                 0LL);
  v8 = this->fields.squareData;
  if ( !v8 )
    goto LABEL_21;
  v9 = Instance;
  Instance = v7->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_21;
  Instance = (WarBoardData_o *)WarBoardData__GetItem(Instance, v8->fields._squareIndex_k__BackingField, 0LL);
  v10 = this->fields.squareData;
  if ( !v10 )
    goto LABEL_21;
  v11 = (WarBoardItemData_o *)Instance;
  Instance = v7->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_21;
  Effect = WarBoardData__GetEffect(Instance, v10->fields._squareIndex_k__BackingField, 0LL);
  if ( v9 )
  {
    Instance = (WarBoardData_o *)v9[1].fields.stageNpcMaster;
    if ( Instance )
    {
      (*(void (__fastcall **)(WarBoardData_o *, Il2CppClass *))&Instance->klass[1]._1.this_arg.bits)(
        Instance,
        Instance->klass[1]._1.element_class);
      return;
    }
LABEL_21:
    sub_1BCAA3C(Instance, v5);
  }
  v13 = Effect;
  if ( v11 && !WarBoardItemData__get_Acquired(v11, 0LL) )
  {
    Instance = (WarBoardData_o *)v11->fields.component;
    if ( !Instance )
      goto LABEL_21;
    WarBoardItemComponent__OnLongClick((WarBoardItemComponent_o *)Instance, 0LL);
  }
  else if ( v13 )
  {
    Instance = (WarBoardData_o *)v13->fields.component;
    if ( !Instance )
      goto LABEL_21;
    WarBoardEffectComponent__OnLongClick((WarBoardEffectComponent_o *)Instance, 0LL);
  }
  else
  {
    WarBoardManager__HideSimplePopup(v7, 0LL, 0LL);
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
    sub_1BCAA3C(selectCircle, method);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x20
  WarBoardManager_o *Instance; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_String_o *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct WarBoardSquareData_o *squareData; // x8
  int imageId_k__BackingField; // w8
  int v37; // w9
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  __int64 v40; // x1
  long double inited; // q0
  _QWORD *v42; // x22
  System_String_o *v43; // x21
  __int64 v44; // x8
  __int64 v45; // x0
  __int64 v46; // x0
  System_String_o *v47; // x21
  Il2CppObject *CommonEffectAsset_object; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  __int64 v55; // x1
  UnityEngine_Object_o *v56; // x21
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v61; // x21
  __int64 v62; // x1
  UnityEngine_Object_o *uiDataComp; // x20
  unsigned int v64; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B13C3E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, effectKey, prefix);
    sub_1BCA7E0(&Method_System_Array_Empty_object___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_WarBoardSquareComponent___c__DisplayClass62_0__PlayEffect_b__0__, v13, v14);
    sub_1BCA7E0(&WarBoardSquareComponent___c__DisplayClass62_0_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v17, v18);
    byte_4B13C3E = 1;
  }
  v19 = sub_1BCAA2C(WarBoardSquareComponent___c__DisplayClass62_0_TypeInfo, effectKey, prefix, method);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_30;
  *(_QWORD *)(v19 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 24), (int64_t)this, v22, v23, v24, v25, v26, v27);
  v28 = System_String__Concat_62401220(prefix, effectKey, 0LL);
  *(_QWORD *)(v19 + 32) = v28;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 32), (int64_t)v28, v29, v30, v31, v32, v33, v34);
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_30;
  imageId_k__BackingField = squareData->fields._imageId_k__BackingField;
  if ( imageId_k__BackingField >= 0 )
    v37 = imageId_k__BackingField;
  else
    v37 = imageId_k__BackingField + 1;
  v64 = imageId_k__BackingField - (v37 & 0xFFFFFFFE);
  v38 = System_Int32__ToString((int32_t)&v64, 0LL);
  v39 = System_String__Concat_62401220(effectKey, v38, 0LL);
  v42 = Method_System_Array_Empty_object___;
  v43 = v39;
  v44 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v44 )
  {
    sub_1C1C718(Method_System_Array_Empty_object___, v40);
    v44 = v42[7];
  }
  v45 = *(_QWORD *)(v44 + 16);
  if ( (*(_BYTE *)(v45 + 309) & 1) == 0 )
    v45 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v45 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v45, v40);
  v46 = *(_QWORD *)(v42[7] + 16LL);
  if ( (*(_BYTE *)(v46 + 309) & 1) == 0 )
    v46 = sub_1C1C6BC(inited);
  v47 = System_String__Format_62415728(v43, **(System_Object_array ***)(v46 + 184), 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               Instance,
                               v47,
                               (const MethodInfo_2FF0B1C *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  *(_QWORD *)(v19 + 16) = CommonEffectAsset_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)CommonEffectAsset_object, v49, v50, v51, v52, v53, v54);
  v56 = *(UnityEngine_Object_o **)(v19 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v55);
  if ( UnityEngine_Object__op_Equality(v56, 0LL, 0LL) )
    return 0;
  v61 = sub_1BCAA2C(System_Action_TypeInfo, v57, v58, v59);
  System_Action___ctor(
    (System_Action_o *)v61,
    (Il2CppObject *)v19,
    Method_WarBoardSquareComponent___c__DisplayClass62_0__PlayEffect_b__0__,
    0LL);
  uiDataComp = (UnityEngine_Object_o *)this->fields.uiDataComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v62);
  Instance = (WarBoardManager_o *)UnityEngine_Object__op_Inequality(uiDataComp, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( v61 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(v61 + 24))(*(_QWORD *)(v61 + 64), *(_QWORD *)(v61 + 40));
      return 1;
    }
LABEL_30:
    sub_1BCAA3C(Instance, v21);
  }
  Instance = (WarBoardManager_o *)this->fields.uiDataComp;
  if ( !Instance )
    goto LABEL_30;
  WarBoardControlUiDataComponent__SyncAnimation(
    (WarBoardControlUiDataComponent_o *)Instance,
    (System_Action_o *)v61,
    0LL);
  return 1;
}


void __fastcall WarBoardSquareComponent__PlayUnDispCostAnim(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 costLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x2
  struct TweenScale_o *tweenScale; // x21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  struct TweenScale_o *v19; // x8
  float costAnimScale; // s0
  struct TweenScale_o *v21; // x20
  UnityEngine_GameObject_o *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1

  if ( (byte_4B13C36 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UITweener_Begin_TweenScale___, method, v2);
    sub_1BCA7E0(&StringLiteral_10804/*"PlayUnDispCostAnim2"*/, v4, v5);
    byte_4B13C36 = 1;
  }
  costLabel = (__int64)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_11;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL);
  v8 = UITweener__Begin_object_(
         gameObject,
         this->fields.costAnimScaleTime,
         (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenScale___);
  this->fields.tweenScale = (struct TweenScale_o *)v8;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tweenScale, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  tweenScale = this->fields.tweenScale;
  if ( !byte_4B109C6 )
  {
    costLabel = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v15);
    byte_4B109C6 = 1;
  }
  if ( !tweenScale )
    goto LABEL_11;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->oneVector.fields.z;
  *(_QWORD *)&tweenScale->fields.from.fields.x = *(_QWORD *)&static_fields->oneVector.fields.x;
  tweenScale->fields.from.fields.z = z;
  v19 = this->fields.tweenScale;
  if ( !v19 )
    goto LABEL_11;
  costAnimScale = this->fields.costAnimScale;
  v19->fields.to.fields.x = costAnimScale;
  v19->fields.to.fields.y = costAnimScale;
  v19->fields.to.fields.z = costAnimScale;
  v21 = this->fields.tweenScale;
  if ( !v21
    || (v21->fields.method = 6,
        v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        v21->fields.eventReceiver = v22,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v21->fields.eventReceiver,
          (int64_t)v22,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28),
        (costLabel = (__int64)this->fields.tweenScale) == 0) )
  {
LABEL_11:
    sub_1BCAA3C(costLabel, method);
  }
  v35 = StringLiteral_10804/*"PlayUnDispCostAnim2"*/;
  *(_QWORD *)(costLabel + 88) = StringLiteral_10804/*"PlayUnDispCostAnim2"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(costLabel + 88), v35, v29, v30, v31, v32, v33, v34);
}


void __fastcall WarBoardSquareComponent__PlayUnDispCostAnim2(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 costLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v12; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct TweenPosition_o *tweenPosition; // x8
  struct TweenPosition_o *v20; // x8
  struct TweenPosition_o *v21; // x20
  UnityEngine_GameObject_o *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  UnityEngine_GameObject_o *v29; // x0
  Il2CppObject *v30; // x0
  struct TweenScale_o **p_tweenScale; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 v38; // x2
  struct TweenScale_o *tweenScale; // x8
  float costAnimScale; // s0
  struct TweenScale_o *v41; // x21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  struct TweenScale_o *v44; // x20
  UnityEngine_GameObject_o *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  UnityEngine_GameObject_o *v52; // x0
  Il2CppObject *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  struct TweenAlpha_o *tweenAlpha; // x20
  UnityEngine_GameObject_o *v61; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int64_t v74; // x1
  __int64 v75; // [xsp+0h] [xbp-50h]
  __int64 v76; // [xsp+10h] [xbp-40h]

  if ( (byte_4B13C37 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UITweener_Begin_TweenAlpha___, method, v2);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenPosition___, v4, v5);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenScale___, v6, v7);
    sub_1BCA7E0(&StringLiteral_6817/*"FinishUnDispCostAnim"*/, v8, v9);
    byte_4B13C37 = 1;
  }
  costLabel = (__int64)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL);
  v12 = UITweener__Begin_object_(
          gameObject,
          this->fields.costAnimFadeTime,
          (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenPosition___);
  this->fields.tweenPosition = (struct TweenPosition_o *)v12;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tweenPosition, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  tweenPosition = this->fields.tweenPosition;
  v76 = *(_QWORD *)&this->fields.costLabelPos.fields.x;
  if ( !tweenPosition )
    goto LABEL_17;
  tweenPosition->fields.from.fields.z = this->fields.costLabelPos.fields.z;
  *(_QWORD *)&tweenPosition->fields.from.fields.x = v76;
  v20 = this->fields.tweenPosition;
  v75 = *(_QWORD *)&this->fields.costLabelMovePos.fields.x;
  if ( !v20 )
    goto LABEL_17;
  v20->fields.to.fields.z = this->fields.costLabelMovePos.fields.z;
  *(_QWORD *)&v20->fields.to.fields.x = v75;
  v21 = this->fields.tweenPosition;
  if ( !v21 )
    goto LABEL_17;
  v21->fields.method = 0;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v21->fields.eventReceiver = v22;
  sub_1BCA784((PartyOrganizationUtility_o *)&v21->fields.eventReceiver, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  costLabel = (__int64)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_17;
  v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL);
  v30 = UITweener__Begin_object_(
          v29,
          this->fields.costAnimFadeTime,
          (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenScale___);
  this->fields.tweenScale = (struct TweenScale_o *)v30;
  p_tweenScale = &this->fields.tweenScale;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tweenScale, (int64_t)v30, v32, v33, v34, v35, v36, v37);
  tweenScale = this->fields.tweenScale;
  if ( !tweenScale )
    goto LABEL_17;
  costAnimScale = this->fields.costAnimScale;
  tweenScale->fields.from.fields.x = costAnimScale;
  tweenScale->fields.from.fields.y = costAnimScale;
  tweenScale->fields.from.fields.z = costAnimScale;
  v41 = *p_tweenScale;
  if ( !byte_4B109C1 )
  {
    costLabel = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v38);
    byte_4B109C1 = 1;
  }
  if ( !v41 )
    goto LABEL_17;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&v41->fields.to.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v41->fields.to.fields.z = z;
  v44 = *p_tweenScale;
  if ( !v44 )
    goto LABEL_17;
  v44->fields.method = 0;
  v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v44->fields.eventReceiver = v45;
  sub_1BCA784((PartyOrganizationUtility_o *)&v44->fields.eventReceiver, (int64_t)v45, v46, v47, v48, v49, v50, v51);
  costLabel = (__int64)this->fields.costLabel;
  if ( !costLabel )
    goto LABEL_17;
  v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL);
  v53 = UITweener__Begin_object_(
          v52,
          this->fields.costAnimFadeTime,
          (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenAlpha___);
  this->fields.tweenAlpha = (struct TweenAlpha_o *)v53;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tweenAlpha, (int64_t)v53, v54, v55, v56, v57, v58, v59);
  tweenAlpha = this->fields.tweenAlpha;
  if ( !tweenAlpha
    || (tweenAlpha->fields.method = 0,
        *(_QWORD *)&tweenAlpha->fields.from = 1065353216LL,
        v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        tweenAlpha->fields.eventReceiver = v61,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&tweenAlpha->fields.eventReceiver,
          (int64_t)v61,
          v62,
          v63,
          v64,
          v65,
          v66,
          v67),
        (costLabel = (__int64)this->fields.tweenAlpha) == 0) )
  {
LABEL_17:
    sub_1BCAA3C(costLabel, method);
  }
  v74 = StringLiteral_6817/*"FinishUnDispCostAnim"*/;
  *(_QWORD *)(costLabel + 88) = StringLiteral_6817/*"FinishUnDispCostAnim"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(costLabel + 88), v74, v68, v69, v70, v71, v72, v73);
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
    sub_1BCAA3C(costLabel, isOnActionPiece);
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
  __int64 v6; // x1
  UnityEngine_Object_o *subButton; // x21
  __int64 v8; // x1
  struct UIButton_o *v9; // x0
  UIButton_c *klass; // x8
  int32_t mState; // w20

  if ( (byte_4B13C34 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, enable, method);
    byte_4B13C34 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enable);
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    subButton = (UnityEngine_Object_o *)this->fields.subButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
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
LABEL_17:
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
              goto LABEL_17;
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
      sub_1BCAA3C(v9, v8);
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  void *costLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v22; // x0
  __int64 v23; // x1
  UILabel_o *v24; // x20
  System_String_o *v25; // x21
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
  if ( (byte_4B13C32 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&cost, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_15607/*"WARBOARD_SQUARE_COST"*/, v17, v18);
    byte_4B13C32 = 1;
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
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)costLabel, 0LL);
  GameObjectExtensions__SetLocalPosition(v22, this->fields.costLabelPos, 0LL);
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
  v24 = this->fields.costLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_15607/*"WARBOARD_SQUARE_COST"*/, 0LL);
  v27 = cost;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
  costLabel = System_String__Format(v25, v26, 0LL);
  if ( !v24 )
LABEL_13:
    sub_1BCAA3C(costLabel, v19);
  UILabel__set_text(v24, (System_String_o *)costLabel, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSquareComponent__SetMovePoint(
        WarBoardSquareComponent_o *this,
        bool isDefault,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  struct UnityEngine_GameObject_o **p_movePoint; // x20
  UnityEngine_Object_o *movePoint; // x22
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  UnityEngine_Object_o *v24; // x22
  struct WarBoardSquareData_o *squareData; // x8
  int imageId_k__BackingField; // w8
  Il2CppObject *v27; // x0
  System_String_o *v28; // x21
  __int64 v29; // x1
  Il2CppObject *CommonEffectAsset_object; // x21
  __int64 v31; // x1
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  Il2CppObject *Component_object; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int v47; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B13C2D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, isDefault, method);
    sub_1BCA7E0(&int_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v13, v14);
    sub_1BCA7E0(&StringLiteral_9275/*"Move_Point_0"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_9276/*"Move_Point_{0}"*/, v17, v18);
    byte_4B13C2D = 1;
  }
  p_movePoint = &this->fields.movePoint;
  movePoint = (UnityEngine_Object_o *)this->fields.movePoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDefault);
  Instance = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(movePoint, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = *p_movePoint;
    if ( !*p_movePoint )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(Instance, 0, 0LL);
    v24 = (UnityEngine_Object_o *)*p_movePoint;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
    UnityEngine_Object__Destroy_70154244(v24, 0LL);
  }
  squareData = this->fields.squareData;
  if ( !squareData )
    goto LABEL_24;
  imageId_k__BackingField = squareData->fields._imageId_k__BackingField;
  if ( !isDefault )
    imageId_k__BackingField += 2;
  v47 = imageId_k__BackingField;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
  v28 = System_String__Format((System_String_o *)StringLiteral_9276/*"Move_Point_{0}"*/, v27, 0LL);
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               v28,
                               (const MethodInfo_2FF0B1C *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                                 (WarBoardManager_o *)Instance,
                                 (System_String_o *)StringLiteral_9275/*"Move_Point_0"*/,
                                 (const MethodInfo_2FF0B1C *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
  v33 = UnityEngine_Object__Instantiate_object__49903816(
          CommonEffectAsset_object,
          transform,
          (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
  *p_movePoint = (struct UnityEngine_GameObject_o *)v33;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.movePoint, (int64_t)v33, v34, v35, v36, v37, v38, v39);
  Instance = *p_movePoint;
  if ( !*p_movePoint || (UnityEngine_GameObject__SetActive(Instance, 0, 0LL), (Instance = *p_movePoint) == 0LL) )
LABEL_24:
    sub_1BCAA3C(Instance, v22);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       Instance,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  this->fields.movePointCommonEffect = (struct CommonEffectComponent_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.movePointCommonEffect,
    (int64_t)Component_object,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
}


void __fastcall WarBoardSquareComponent__SetSprite(WarBoardSquareComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardSquareComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct WarBoardSquareData_o *squareData; // x8
  int imageId_k__BackingField; // w8
  Il2CppObject *v12; // x0
  System_String_o *v13; // x20
  UISprite_o *squareSubImage; // x21
  UIButton_o *subButton; // x21
  int v16; // [xsp+Ch] [xbp-24h] BYREF

  v3 = this;
  if ( (byte_4B13C31 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_16744/*"_target"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_23709/*"square{0:D3}"*/, v6, v7);
    this = (WarBoardSquareComponent_o *)sub_1BCA7E0(&StringLiteral_23707/*"squares"*/, v8, v9);
    byte_4B13C31 = 1;
  }
  squareData = v3->fields.squareData;
  if ( !squareData )
    goto LABEL_14;
  imageId_k__BackingField = squareData->fields._imageId_k__BackingField;
  if ( imageId_k__BackingField < 1 )
  {
    v13 = (System_String_o *)StringLiteral_23707/*"squares"*/;
  }
  else
  {
    v16 = imageId_k__BackingField;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
    v13 = System_String__Format((System_String_o *)StringLiteral_23709/*"square{0:D3}"*/, v12, 0LL);
  }
  this = (WarBoardSquareComponent_o *)v3->fields.squareImage;
  if ( !this )
    goto LABEL_14;
  UISprite__set_spriteName((UISprite_o *)this, v13, 0LL);
  this = (WarBoardSquareComponent_o *)v3->fields.button;
  if ( !this )
    goto LABEL_14;
  UIButton__set_normalSprite((UIButton_o *)this, v13, 0LL);
  this = (WarBoardSquareComponent_o *)v3->fields.squareImage;
  if ( !this )
    goto LABEL_14;
  UIWidget__SetDirty((UIWidget_o *)this, 0LL);
  squareSubImage = v3->fields.squareSubImage;
  this = (WarBoardSquareComponent_o *)System_String__Concat_62401220(v13, (System_String_o *)StringLiteral_16744/*"_target"*/, 0LL);
  if ( !squareSubImage
    || (UISprite__set_spriteName(squareSubImage, (System_String_o *)this, 0LL),
        subButton = v3->fields.subButton,
        this = (WarBoardSquareComponent_o *)System_String__Concat_62401220(
                                              v13,
                                              (System_String_o *)StringLiteral_16744/*"_target"*/,
                                              0LL),
        !subButton)
    || (UIButton__set_normalSprite(subButton, (System_String_o *)this, 0LL),
        (this = (WarBoardSquareComponent_o *)v3->fields.squareSubImage) == 0LL) )
  {
LABEL_14:
    sub_1BCAA3C(this, method);
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

  if ( (byte_4B13C33 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, enable, method);
    byte_4B13C33 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enable);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
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
    sub_1BCAA3C(v7, v6);
  }
}


bool __fastcall WarBoardSquareComponent__StopEffect(
        WarBoardSquareComponent_o *this,
        System_String_o *effectKey,
        System_String_o *prefix,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *dicEffect; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x20
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x2
  bool v14; // w21
  System_Collections_IEnumerator_o *v15; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B13C3F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__GameObject__Remove__, effectKey, prefix);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__, v7, v8);
    byte_4B13C3F = 1;
  }
  value = 0LL;
  dicEffect = (Il2CppObject *)System_String__Concat_62401220(prefix, effectKey, 0LL);
  if ( !this->fields.dicEffect )
    goto LABEL_8;
  v11 = dicEffect;
  v12 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)this->fields.dicEffect,
          dicEffect,
          &value,
          (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__GameObject__TryGetValue__);
  v14 = v12;
  if ( v12 )
  {
    v15 = WarBoardSquareComponent__StopEffectEndLoop(
            (WarBoardSquareComponent_o *)v12,
            (UnityEngine_GameObject_o *)value,
            v13);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v15, 0LL);
    dicEffect = (Il2CppObject *)this->fields.dicEffect;
    if ( dicEffect )
    {
      System_Collections_Generic_Dictionary_object__object___Remove(
        (System_Collections_Generic_Dictionary_object__object__o *)dicEffect,
        v11,
        (const MethodInfo_326675C *)Method_System_Collections_Generic_Dictionary_string__GameObject__Remove__);
      return v14;
    }
LABEL_8:
    sub_1BCAA3C(dicEffect, v10);
  }
  return v14;
}


System_Collections_IEnumerator_o *__fastcall WarBoardSquareComponent__StopEffectEndLoop(
        WarBoardSquareComponent_o *this,
        UnityEngine_GameObject_o *effect,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B13C40 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardSquareComponent__StopEffectEndLoop_d__64_TypeInfo, effect, method);
    byte_4B13C40 = 1;
  }
  v5 = sub_1BCAA2C(WarBoardSquareComponent__StopEffectEndLoop_d__64_TypeInfo, effect, method, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = effect;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)effect, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
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
    sub_1BCAA3C(costLabel, isDispCostLabel);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costLabel, isDispCostLabel, 0LL);
}


void __fastcall WarBoardSquareComponent___DisableEditPosition_b__40_0(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectMarker; // x0

  selectMarker = this->fields.selectMarker;
  if ( !selectMarker )
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(battleTargetPlayer, method);
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
    sub_1BCAA3C(battleTargetEnemy, method);
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
    sub_1BCAA3C(selectCircle, method);
  }
  CommonEffectComponent__Rewind((CommonEffectComponent_o *)selectCircle, 0LL);
}


void __fastcall WarBoardSquareComponent___OnEffectHide_b__61_0(
        WarBoardSquareComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *effectPrefab; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x19

  if ( (byte_4B13C43 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B13C43 = 1;
  }
  effectPrefab = (UnityEngine_Object_o *)this->fields.effectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Implicit(effectPrefab, 0LL) )
  {
    v6 = this->fields.effectPrefab;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    UnityEngine_GameObject__SetActive(v6, 0, 0LL);
    v8 = (UnityEngine_Object_o *)this->fields.effectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    UnityEngine_Object__Destroy_70154244(v8, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t _1__state; // w8
  void *effect; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  int v12; // w8
  void *v13; // x20
  unsigned int v14; // w21
  float constantMax; // s8
  __int64 v16; // x1
  UnityEngine_Object_o *v17; // x19
  bool result; // w0
  UnityEngine_WaitForSeconds_o *v19; // x20
  Il2CppObject **p__2__current; // x19
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  UnityEngine_ParticleSystem_MinMaxCurve_o v27; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v28; // [xsp+20h] [xbp-50h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+48h] [xbp-28h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v30; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v31; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v32; // 0:x0.8

  if ( (byte_4B13C46 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, v6, v7);
    byte_4B13C46 = 1;
  }
  m_ParticleSystem = 0LL;
  memset(&v28, 0, sizeof(v28));
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    effect = this->fields.effect;
    this->fields.__1__state = -1;
    if ( !effect )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effect, 0, 0LL);
    v17 = (UnityEngine_Object_o *)this->fields.effect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    UnityEngine_Object__Destroy_70154244(v17, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  effect = this->fields.effect;
  this->fields.__1__state = -1;
  if ( !effect )
    goto LABEL_22;
  effect = UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
             (UnityEngine_GameObject_o *)effect,
             (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
  if ( !effect )
    goto LABEL_22;
  v12 = *((_DWORD *)effect + 6);
  v13 = effect;
  if ( v12 >= 1 )
  {
    v14 = 0;
    constantMax = 0.0;
    while ( 1 )
    {
      if ( v14 >= v12 )
        sub_1BCAA44(effect, method);
      effect = (void *)*((_QWORD *)v13 + (int)v14 + 4);
      if ( !effect )
        break;
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)effect, 0LL).fields.m_ParticleSystem;
      v30.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__get_startLifetime(&v27, v30, 0LL);
      v28 = v27;
      if ( constantMax < UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v28, 0LL) )
      {
        v31.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
        UnityEngine_ParticleSystem_MainModule__get_startLifetime(&v27, v31, 0LL);
        v28 = v27;
        constantMax = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&v28, 0LL);
      }
      v32.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__set_loop(v32, 0, 0LL);
      v12 = *((_DWORD *)v13 + 6);
      if ( (int)++v14 >= v12 )
        goto LABEL_21;
    }
LABEL_22:
    sub_1BCAA3C(effect, method);
  }
  constantMax = 0.0;
LABEL_21:
  v19 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v10, v11);
  UnityEngine_WaitForSeconds___ctor(v19, constantMax * 1.2, 0LL);
  this->fields.__2__current = (Il2CppObject *)v19;
  p__2__current = &this->fields.__2__current;
  sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)v19, v21, v22, v23, v24, v25, v26);
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
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_WarBoardSquareComponent__StopEffectEndLoop_d__64_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t effectId; // w9
  System_String_o *v15; // x0
  System_String_o *v16; // x20
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  Il2CppObject *CommonEffectAsset_object; // x20
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  UnityEngine_Component_o *_4__this; // x19
  __int64 v28; // x1
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v30; // x0
  int64_t v31; // x1
  PartyOrganizationUtility_o *p_monitor; // x0
  System_Enum_o v33; // [xsp+8h] [xbp-48h] BYREF
  int32_t v34; // [xsp+18h] [xbp-38h]

  if ( (byte_4B13C44 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v8, v9);
    sub_1BCA7E0(&WarBoardManager_WarBoardSqEfType_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_19052/*"ef_sq_"*/, v12, v13);
    byte_4B13C44 = 1;
  }
  effectId = this->fields.effectId;
  v33.klass = (System_Enum_c *)WarBoardManager_WarBoardSqEfType_TypeInfo;
  v33.monitor = (void *)-1LL;
  v34 = effectId;
  v15 = System_Enum__ToString(&v33, 0LL);
  v16 = System_String__Concat_62401220((System_String_o *)StringLiteral_19052/*"ef_sq_"*/, v15, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               v16,
                               (const MethodInfo_2FF0B1C *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  Instance = (Il2CppObject *)UnityEngine_Object__op_Inequality(
                               (UnityEngine_Object_o *)CommonEffectAsset_object,
                               0LL,
                               0LL);
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this )
LABEL_13:
    sub_1BCAA3C(Instance, v18);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    transform = UnityEngine_Component__get_transform(_4__this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
    v30 = UnityEngine_Object__Instantiate_object__49903816(
            CommonEffectAsset_object,
            transform,
            (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
    _4__this[10].monitor = v30;
    v31 = (int64_t)v30;
    p_monitor = (PartyOrganizationUtility_o *)&_4__this[10].monitor;
  }
  else
  {
    _4__this[10].monitor = 0LL;
    p_monitor = (PartyOrganizationUtility_o *)&_4__this[10].monitor;
    v31 = 0LL;
  }
  sub_1BCA784(p_monitor, v31, v21, v22, v23, v24, v25, v26);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Component_o *_4__this; // x0
  Il2CppObject *asset; // x20
  __int64 v10; // x1
  UnityEngine_Transform_o *transform; // x21
  struct WarBoardSquareComponent_o *v12; // x8
  Il2CppObject *v13; // x2

  if ( (byte_4B13C45 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__GameObject__set_Item__, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B13C45 = 1;
  }
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  asset = (Il2CppObject *)this->fields.asset;
  transform = UnityEngine_Component__get_transform(_4__this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  _4__this = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__49903816(
                                          asset,
                                          transform,
                                          (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
  v12 = this->fields.__4__this;
  if ( !v12 || (v13 = (Il2CppObject *)_4__this, (_4__this = (UnityEngine_Component_o *)v12->fields.dicEffect) == 0LL) )
LABEL_9:
    sub_1BCAA3C(_4__this, method);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)_4__this,
    (Il2CppObject *)this->fields.key,
    v13,
    (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__GameObject__set_Item__);
}