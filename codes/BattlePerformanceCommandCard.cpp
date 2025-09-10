void BattlePerformanceCommandCard___cctor(const MethodInfo *method)
{
  if ( (byte_4C2940C & 1) == 0 )
  {
    sub_1C2D490(&BattlePerformanceCommandCard_TypeInfo);
    byte_4C2940C = 1;
  }
  BattlePerformanceCommandCard_TypeInfo->static_fields->cardsize_w = 200;
}


void BattlePerformanceCommandCard___ctor(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x0
  System_RuntimeFieldHandle_o v4; // x1
  struct System_Single_array *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  const MethodInfo *v14; // x3
  unsigned int v15; // w8
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  unsigned int v18; // w8
  const MethodInfo *v19; // x3
  int v20; // w8
  const MethodInfo *v21; // x3
  unsigned int v22; // w8
  const MethodInfo *v23; // x3
  int v24; // w8
  struct BattleLogic_TutorialStringData_array *v25; // x20
  BattleLogic_TutorialStringData_o *v26; // x0
  BattleLogic_TutorialStringData_o *v27; // x21
  const MethodInfo *v28; // x3
  BattleLogic_TutorialStringData_o *v29; // x0
  BattleLogic_TutorialStringData_o *v30; // x21
  const MethodInfo *v31; // x3
  BattleLogic_TutorialStringData_o *v32; // x0
  BattleLogic_TutorialStringData_o *v33; // x21
  const MethodInfo *v34; // x3
  BattleLogic_TutorialStringData_o *v35; // x0
  BattleLogic_TutorialStringData_o *v36; // x21
  const MethodInfo *v37; // x3
  BattleLogic_TutorialStringData_o *v38; // x0
  BattleLogic_TutorialStringData_o *v39; // x21
  const MethodInfo *v40; // x3
  BattleLogic_TutorialStringData_o *v41; // x0
  BattleLogic_TutorialStringData_o *v42; // x21
  const MethodInfo *v43; // x3
  BattleLogic_TutorialStringData_o *v44; // x0
  BattleLogic_TutorialStringData_o *v45; // x21
  const MethodInfo *v46; // x3
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  __int64 v49; // x0
  UnityEngine_Vector2_o v50; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v51; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v52; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v53; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v54; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v55; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v56; // 0:s1.4,4:s2.4

  if ( (byte_4C2940B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Rect___TypeInfo);
    sub_1C2D490(&float___TypeInfo);
    sub_1C2D490(&BattleLogic_TutorialStringData___TypeInfo);
    sub_1C2D490(&BattleLogic_TutorialStringData_TypeInfo);
    sub_1C2D490(&Field__PrivateImplementationDetails__799E0516C1E7B26C4E41AED488FCA1AA362E0A983FFBF28FFFB7A165E9BB2096);
    sub_1C2D490(&UnityEngine_Vector2___TypeInfo);
    byte_4C2940B = 1;
  }
  v3 = (System_Array_o *)sub_1C2D538(float___TypeInfo, 5);
  v4.fields.value = Field__PrivateImplementationDetails__799E0516C1E7B26C4E41AED488FCA1AA362E0A983FFBF28FFFB7A165E9BB2096;
  v5 = (struct System_Single_array *)v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64158640(v3, v4, 0);
  this->fields.COMMAND_STAMP_POS_X = v5;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.COMMAND_STAMP_POS_X, (int32_t)v5, v6, v7);
  this->fields.COMMAND_STAMP_POS_Y = -121.0;
  this->fields.firstBonusAnimationMaxTime = 3;
  *(_QWORD *)&this->fields.CARD_ROOT_BASE_X = 0xC353000043CD0000LL;
  this->fields.npGaugeEaseType = 15;
  *(_OWORD *)&this->fields.npGaugeEffectMoveDelayTime = xmmword_C0A020;
  *(int32x2_t *)&this->fields.miniScale.fields.x = vdup_n_s32(0x3E99999Au);
  this->fields.miniScale.fields.z = 1.0;
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.aubelist = (struct System_Collections_Generic_List_GameObject__o *)v8;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.aubelist, (int32_t)v8, v9, v10);
  v11 = sub_1C2D538(UnityEngine_Vector2___TypeInfo, 3);
  if ( !v11 )
    goto LABEL_47;
  v15 = *(_DWORD *)(v11 + 24);
  v12 = v11;
  if ( !v15 )
    goto LABEL_46;
  *(_QWORD *)(v11 + 32) = 0;
  if ( v15 == 1 )
    goto LABEL_46;
  *(_QWORD *)(v11 + 40) = 3276275712LL;
  if ( v15 <= 2 )
    goto LABEL_46;
  *(_QWORD *)(v11 + 48) = 3284664320LL;
  this->fields.TutorialArrow01 = (struct UnityEngine_Vector2_array *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.TutorialArrow01, v11, v13, v14);
  v11 = sub_1C2D538(UnityEngine_Rect___TypeInfo, 1);
  if ( !v11 )
    goto LABEL_47;
  v12 = v11;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_46;
  *(_OWORD *)(v11 + 32) = xmmword_C097C0;
  this->fields.TutorialSquare01 = (struct UnityEngine_Rect_array *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.TutorialSquare01, v11, v13, v16);
  v11 = sub_1C2D538(UnityEngine_Vector2___TypeInfo, 3);
  if ( !v11 )
    goto LABEL_47;
  v18 = *(_DWORD *)(v11 + 24);
  v12 = v11;
  if ( !v18 )
    goto LABEL_46;
  *(_QWORD *)(v11 + 32) = 0x43160000C3270000LL;
  if ( v18 == 1 )
    goto LABEL_46;
  *(_QWORD *)(v11 + 40) = 0xC2A00000C3480000LL;
  if ( v18 <= 2 )
    goto LABEL_46;
  *(_QWORD *)(v11 + 48) = 0xC2A00000C3C80000LL;
  this->fields.TutorialArrow05 = (struct UnityEngine_Vector2_array *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.TutorialArrow05, v11, v13, v17);
  v11 = sub_1C2D538(UnityEngine_Rect___TypeInfo, 2);
  if ( !v11 )
    goto LABEL_47;
  v20 = *(_DWORD *)(v11 + 24);
  v12 = v11;
  if ( !v20 )
    goto LABEL_46;
  *(_OWORD *)(v11 + 32) = xmmword_C094B0;
  if ( v20 == 1 )
    goto LABEL_46;
  *(_OWORD *)(v11 + 48) = xmmword_C0A1E0;
  this->fields.TutorialSquare05 = (struct UnityEngine_Rect_array *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.TutorialSquare05, v11, v13, v19);
  this->fields.TutorialArrow22 = (struct UnityEngine_Vector2_o)0x4348000043C58000LL;
  this->fields.TutorialSquare22 = (struct UnityEngine_Rect_o)xmmword_C09680;
  v11 = sub_1C2D538(UnityEngine_Vector2___TypeInfo, 3);
  if ( !v11 )
    goto LABEL_47;
  v22 = *(_DWORD *)(v11 + 24);
  v12 = v11;
  if ( !v22 )
    goto LABEL_46;
  *(_QWORD *)(v11 + 32) = 0xC248000000000000LL;
  if ( v22 == 1 )
    goto LABEL_46;
  *(_QWORD *)(v11 + 40) = 0xC2480000C3480000LL;
  if ( v22 <= 2 )
    goto LABEL_46;
  *(_QWORD *)(v11 + 48) = 0xC2480000C3C80000LL;
  this->fields.TutorialArrow31 = (struct UnityEngine_Vector2_array *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.TutorialArrow31, v11, v13, v21);
  v11 = sub_1C2D538(UnityEngine_Rect___TypeInfo, 2);
  if ( !v11 )
    goto LABEL_47;
  v24 = *(_DWORD *)(v11 + 24);
  v12 = v11;
  if ( !v24 )
    goto LABEL_46;
  *(_OWORD *)(v11 + 32) = xmmword_C097C0;
  if ( v24 == 1 )
    goto LABEL_46;
  *(_OWORD *)(v11 + 48) = xmmword_C093E0;
  this->fields.TutorialSquare32 = (struct UnityEngine_Rect_array *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.TutorialSquare32, v11, v13, v23);
  v25 = (struct BattleLogic_TutorialStringData_array *)sub_1C2D538(BattleLogic_TutorialStringData___TypeInfo, 7);
  v26 = (BattleLogic_TutorialStringData_o *)sub_1C2D6DC(BattleLogic_TutorialStringData_TypeInfo);
  v50.fields.x = 0.0;
  v50.fields.y = 160.0;
  v27 = v26;
  BattleLogic_TutorialStringData___ctor(v26, 0.0, v50, 26, 0);
  if ( !v25 )
LABEL_47:
    sub_1C2D6EC(v11, v12);
  if ( v27 )
  {
    v11 = sub_1C2D5CC(v27, v25->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_48;
  }
  if ( !LODWORD(v25->max_length) )
    goto LABEL_46;
  v25->m_Items[0] = v27;
  sub_1C2D434((CGThumbnailListItem_o *)v25->m_Items, (int32_t)v27, v13, v28);
  v29 = (BattleLogic_TutorialStringData_o *)sub_1C2D6DC(BattleLogic_TutorialStringData_TypeInfo);
  v51.fields.x = 0.0;
  v51.fields.y = 160.0;
  v30 = v29;
  BattleLogic_TutorialStringData___ctor(v29, 0.0, v51, 26, 0);
  if ( v30 )
  {
    v11 = sub_1C2D5CC(v30, v25->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_48;
  }
  if ( LODWORD(v25->max_length) <= 1 )
    goto LABEL_46;
  v25->m_Items[1] = v30;
  sub_1C2D434((CGThumbnailListItem_o *)&v25->m_Items[1], (int32_t)v30, v13, v31);
  v32 = (BattleLogic_TutorialStringData_o *)sub_1C2D6DC(BattleLogic_TutorialStringData_TypeInfo);
  v52.fields.x = 0.0;
  v52.fields.y = 160.0;
  v33 = v32;
  BattleLogic_TutorialStringData___ctor(v32, 0.0, v52, 26, 0);
  if ( v33 )
  {
    v11 = sub_1C2D5CC(v33, v25->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_48;
  }
  if ( LODWORD(v25->max_length) <= 2 )
    goto LABEL_46;
  v25->m_Items[2] = v33;
  sub_1C2D434((CGThumbnailListItem_o *)&v25->m_Items[2], (int32_t)v33, v13, v34);
  v35 = (BattleLogic_TutorialStringData_o *)sub_1C2D6DC(BattleLogic_TutorialStringData_TypeInfo);
  v53.fields.x = 200.0;
  v53.fields.y = 60.0;
  v36 = v35;
  BattleLogic_TutorialStringData___ctor(v35, 0.0, v53, 28, 0);
  if ( v36 )
  {
    v11 = sub_1C2D5CC(v36, v25->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_48;
  }
  if ( LODWORD(v25->max_length) <= 3 )
    goto LABEL_46;
  v25->m_Items[3] = v36;
  sub_1C2D434((CGThumbnailListItem_o *)&v25->m_Items[3], (int32_t)v36, v13, v37);
  v38 = (BattleLogic_TutorialStringData_o *)sub_1C2D6DC(BattleLogic_TutorialStringData_TypeInfo);
  v54.fields.y = -30.0;
  v54.fields.x = 310.0;
  v39 = v38;
  BattleLogic_TutorialStringData___ctor(v38, 180.0, v54, 26, 0);
  if ( v39 )
  {
    v11 = sub_1C2D5CC(v39, v25->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_48;
  }
  if ( LODWORD(v25->max_length) <= 4 )
    goto LABEL_46;
  v25->m_Items[4] = v39;
  sub_1C2D434((CGThumbnailListItem_o *)&v25->m_Items[4], (int32_t)v39, v13, v40);
  v41 = (BattleLogic_TutorialStringData_o *)sub_1C2D6DC(BattleLogic_TutorialStringData_TypeInfo);
  v55.fields.x = 0.0;
  v55.fields.y = 140.0;
  v42 = v41;
  BattleLogic_TutorialStringData___ctor(v41, 0.0, v55, 22, 0);
  if ( v42 )
  {
    v11 = sub_1C2D5CC(v42, v25->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_48;
  }
  if ( LODWORD(v25->max_length) <= 5 )
    goto LABEL_46;
  v25->m_Items[5] = v42;
  sub_1C2D434((CGThumbnailListItem_o *)&v25->m_Items[5], (int32_t)v42, v13, v43);
  v44 = (BattleLogic_TutorialStringData_o *)sub_1C2D6DC(BattleLogic_TutorialStringData_TypeInfo);
  v56.fields.x = 0.0;
  v56.fields.y = 130.0;
  v45 = v44;
  BattleLogic_TutorialStringData___ctor(v44, 0.0, v56, 26, 0);
  if ( v45 )
  {
    v11 = sub_1C2D5CC(v45, v25->obj.klass->_1.element_class);
    if ( !v11 )
    {
LABEL_48:
      v49 = sub_1C2D710(v11);
      sub_1C2D5B8(v49, 0);
    }
  }
  if ( LODWORD(v25->max_length) <= 6 )
LABEL_46:
    sub_1C2D6F4(v11, v12, v13);
  v25->m_Items[6] = v45;
  sub_1C2D434((CGThumbnailListItem_o *)&v25->m_Items[6], (int32_t)v45, v13, v46);
  this->fields.TSD = v25;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.TSD, (int32_t)v25, v47, v48);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattlePerformanceCommandCard__ActivateFirstBonusObject(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *firstBonusSimpleAnimation; // x20
  const MethodInfo *v4; // x1
  UnityEngine_Behaviour_o *v5; // x0
  UnityEngine_Object_o *firstBonusAnimation; // x20
  UnityEngine_GameObject_o *firstBonusObject; // x20
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Transform_o *v9; // x20
  float x; // s8
  float y; // s10
  float z; // s9
  UnityEngine_Object_o *v13; // x20
  UnityEngine_Object_o *v14; // x20
  System_Collections_IEnumerator_o *BonusAnimationPlay; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C293C8 & 1) == 0 )
  {
    sub_1C2D490(&FSUtility_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C293C8 = 1;
  }
  firstBonusSimpleAnimation = (UnityEngine_Object_o *)this->fields.firstBonusSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(firstBonusSimpleAnimation, 0, 0) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields.firstBonusSimpleAnimation;
    if ( !v5 )
      goto LABEL_36;
    goto LABEL_12;
  }
  firstBonusAnimation = (UnityEngine_Object_o *)this->fields.firstBonusAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(firstBonusAnimation, 0, 0) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields.firstBonusAnimation;
    if ( !v5 )
      goto LABEL_36;
LABEL_12:
    UnityEngine_Behaviour__set_enabled(v5, 0, 0);
  }
  firstBonusObject = this->fields.firstBonusObject;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetParent(firstBonusObject, transform, 0);
  v5 = (UnityEngine_Behaviour_o *)this->fields.firstBonusObject;
  if ( !v5 )
    goto LABEL_36;
  v5 = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v5, 0);
  v9 = (UnityEngine_Transform_o *)v5;
  if ( !byte_4C20DA6 )
  {
    v5 = (UnityEngine_Behaviour_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA6 = 1;
  }
  if ( !v9 )
    goto LABEL_36;
  UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( !FSUtility__IsUnderVista(0) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields.firstBonusObject;
    if ( v5 )
    {
      v5 = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v5, 0);
      if ( v5 )
      {
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v5, 0);
        v5 = (UnityEngine_Behaviour_o *)this->fields.firstBonusObject;
        if ( v5 )
        {
          x = localPosition.fields.x;
          y = localPosition.fields.y;
          z = localPosition.fields.z;
          v5 = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v5, 0);
          if ( v5 )
          {
            v17.fields.y = y + 17.0;
            v17.fields.x = x;
            v17.fields.z = z;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v5, v17, 0);
            goto LABEL_25;
          }
        }
      }
    }
LABEL_36:
    sub_1C2D6EC(v5, v4);
  }
LABEL_25:
  v5 = (UnityEngine_Behaviour_o *)this->fields.firstBonusObject;
  if ( !v5 )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v5, 0, 0);
  v5 = (UnityEngine_Behaviour_o *)this->fields.firstBonusObject;
  if ( !v5 )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v5, 1, 0);
  v13 = (UnityEngine_Object_o *)this->fields.firstBonusSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v13, 0, 0) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields.firstBonusSimpleAnimation;
    if ( !v5 )
      goto LABEL_36;
LABEL_31:
    UnityEngine_Behaviour__set_enabled(v5, 1, 0);
    goto LABEL_37;
  }
  v14 = (UnityEngine_Object_o *)this->fields.firstBonusAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v14, 0, 0) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields.firstBonusAnimation;
    if ( !v5 )
      goto LABEL_36;
    goto LABEL_31;
  }
LABEL_37:
  BonusAnimationPlay = BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay(this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, BonusAnimationPlay, 0);
}


void BattlePerformanceCommandCard__AddExtraCard(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformanceCommandCard_o *v3; // x19
  struct BattleCommandComponent_array *selectedcomponents; // x8
  BattleCommandComponent_o *v5; // x8
  BattleCommandData_o *data; // x21
  BattleCommandData_o *v7; // x20
  struct BattleCommandComponent_array *v8; // x8
  BattlePerformanceCommandCard_o *v9; // x21
  BattlePerformanceCommandCard_o *v10; // x22
  struct BattleCommandComponent_array *v11; // x8
  BattlePerformanceCommandCard_o *v12; // x22
  struct BattleCommandComponent_array *v13; // x8
  struct BattleCommandComponent_array *v14; // x8
  struct BattleCommandComponent_array *v15; // x8
  struct BattleCommandComponent_array *v16; // x8
  struct BattleCommandComponent_array *v17; // x8
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_4C293D8 & 1) == 0 )
  {
    sub_1C2D490(&BattleCommandData_TypeInfo);
    sub_1C2D490(&Method_BattlePerformanceCommandCard_AddExtraCard__);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&StringLiteral_18820/*"ef_excard02"*/);
    byte_4C293D8 = 1;
  }
  selectedcomponents = v3->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_44;
  if ( !LODWORD(selectedcomponents->max_length) )
    goto LABEL_45;
  v5 = selectedcomponents->m_Items[0];
  if ( !v5 )
    goto LABEL_44;
  data = v5->fields.data;
  v7 = (BattleCommandData_o *)sub_1C2D6DC(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_46333724(v7, data, 0);
  if ( !v7 )
    goto LABEL_44;
  BattleCommandData__ResetNotRelatedParamsOnExtraAttack(v7, 0);
  BattleCommandData__setTypeAddAttack(v7, 0);
  this = (BattlePerformanceCommandCard_o *)v3->fields.Bdata;
  if ( !this )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)BattleData__getServantData((BattleData_o *)this, v7->fields.uniqueId, 0);
  v8 = v3->fields.selectedcomponents;
  if ( !v8 )
    goto LABEL_44;
  if ( LODWORD(v8->max_length) <= 3 )
    goto LABEL_45;
  v9 = this;
  this = (BattlePerformanceCommandCard_o *)v8->m_Items[3];
  if ( !this )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v10 = this;
  if ( !byte_4C20DA6 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA6 = 1;
  }
  if ( !v10 )
    goto LABEL_44;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v10,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  v11 = v3->fields.selectedcomponents;
  if ( !v11 )
    goto LABEL_44;
  if ( LODWORD(v11->max_length) <= 3 )
    goto LABEL_45;
  this = (BattlePerformanceCommandCard_o *)v11->m_Items[3];
  if ( !this )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !v3->fields.extraPos )
    goto LABEL_44;
  v12 = this;
  position = UnityEngine_Transform__get_position(v3->fields.extraPos, 0);
  if ( !v12 )
    goto LABEL_44;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)v12, position, 0);
  v13 = v3->fields.selectedcomponents;
  if ( !v13 )
    goto LABEL_44;
  if ( LODWORD(v13->max_length) <= 3 )
    goto LABEL_45;
  this = (BattlePerformanceCommandCard_o *)v13->m_Items[3];
  if ( !this )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v14 = v3->fields.selectedcomponents;
  if ( !v14 )
    goto LABEL_44;
  if ( LODWORD(v14->max_length) <= 3 )
    goto LABEL_45;
  this = (BattlePerformanceCommandCard_o *)v14->m_Items[3];
  if ( !this )
    goto LABEL_44;
  BattleCommandComponent__setData((BattleCommandComponent_o *)this, v7, (BattleServantData_o *)v9, 0, 1, 0, 1, 0);
  v15 = v3->fields.selectedcomponents;
  if ( !v15 )
    goto LABEL_44;
  if ( LODWORD(v15->max_length) <= 3 )
    goto LABEL_45;
  this = (BattlePerformanceCommandCard_o *)v15->m_Items[3];
  if ( !this )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this )
    goto LABEL_44;
  v21.fields.r = 1.0;
  v21.fields.g = 1.0;
  v21.fields.b = 1.0;
  v21.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)this, v21, 0);
  v16 = v3->fields.selectedcomponents;
  if ( !v16 )
    goto LABEL_44;
  if ( LODWORD(v16->max_length) <= 3 )
    goto LABEL_45;
  this = (BattlePerformanceCommandCard_o *)v16->m_Items[3];
  if ( !this )
    goto LABEL_44;
  BattleCommandComponent__attachEffect((BattleCommandComponent_o *)this, (System_String_o *)StringLiteral_18820/*"ef_excard02"*/, 4, 0);
  this = (BattlePerformanceCommandCard_o *)v3->fields.Bdata;
  if ( !this )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)BattleData__getServantData(
                                             (BattleData_o *)this,
                                             (int32_t)this->fields.highSpeedArrowOn,
                                             0);
  if ( !this )
    goto LABEL_41;
  v17 = v3->fields.selectedcomponents;
  if ( !v17 )
LABEL_44:
    sub_1C2D6EC(this, method);
  if ( LODWORD(v17->max_length) <= 3 )
LABEL_45:
    sub_1C2D6F4(this, method, v2);
  method = (const MethodInfo *)this;
  this = (BattlePerformanceCommandCard_o *)v17->m_Items[3];
  if ( !this )
    goto LABEL_44;
  BattleCommandComponent__updateClassMag((BattleCommandComponent_o *)this, (BattleServantData_o *)method, 0);
LABEL_41:
  v18 = Method_BattlePerformanceCommandCard_AddExtraCard__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_AddExtraCard__ + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_1C2D4A8(Method_BattlePerformanceCommandCard_AddExtraCard__);
  v19 = (System_Reflection_MethodBase_o *)sub_1C2D474(v18, v18[4]);
  OverwriteAssetSoundName__PlayCommonSe(v19, 13, 0, 0);
}


System_Collections_IEnumerator_o *BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C293C9 & 1) == 0 )
  {
    sub_1C2D490(&BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_TypeInfo);
    byte_4C293C9 = 1;
  }
  v3 = sub_1C2D6DC(BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_TypeInfo);
  BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122___ctor(
    (BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *)v3,
    0,
    0);
  if ( !v3 )
    sub_1C2D6EC(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


void BattlePerformanceCommandCard__DistributeCriticalPoint(
        BattlePerformanceCommandCard_o *this,
        int32_t criticalPercentageToAdd,
        bool applyOnlyToSelectedCards,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  BattlePerformanceCommandCard___c_c *v12; // x0
  System_Collections_Generic_IEnumerable_TSource__o *commandCompArray; // x21
  System_Func_object__bool__o *_9__120_0; // x22
  Il2CppObject *v15; // x23
  struct BattlePerformanceCommandCard___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x21
  System_Func_object__bool__o *v20; // x19
  System_Action_object__o *v21; // x19

  if ( (byte_4C293C7 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_BattleCommandComponent__TypeInfo);
    sub_1C2D490(&Method_BasicHelper_ForEach_BattleCommandComponent___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_BattleCommandComponent___);
    sub_1C2D490(&System_Func_BattleCommandComponent__bool__TypeInfo);
    sub_1C2D490(&Method_BattlePerformanceCommandCard___c__DistributeCriticalPoint_b__120_0__);
    sub_1C2D490(&Method_BattlePerformanceCommandCard___c__DisplayClass120_0__DistributeCriticalPoint_b__1__);
    sub_1C2D490(&Method_BattlePerformanceCommandCard___c__DisplayClass120_0__DistributeCriticalPoint_b__2__);
    sub_1C2D490(&BattlePerformanceCommandCard___c__DisplayClass120_0_TypeInfo);
    sub_1C2D490(&BattlePerformanceCommandCard___c_TypeInfo);
    byte_4C293C7 = 1;
  }
  v7 = sub_1C2D6DC(BattlePerformanceCommandCard___c__DisplayClass120_0_TypeInfo);
  BattlePerformanceCommandCard___c__DisplayClass120_0___ctor(
    (BattlePerformanceCommandCard___c__DisplayClass120_0_o *)v7,
    0);
  if ( !v7 )
    sub_1C2D6EC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_DWORD *)(v7 + 24) = criticalPercentageToAdd;
  v12 = BattlePerformanceCommandCard___c_TypeInfo;
  commandCompArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.commandCompArray;
  if ( !BattlePerformanceCommandCard___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceCommandCard___c_TypeInfo);
    v12 = BattlePerformanceCommandCard___c_TypeInfo;
  }
  _9__120_0 = (System_Func_object__bool__o *)v12->static_fields->__9__120_0;
  if ( !_9__120_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = BattlePerformanceCommandCard___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__120_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleCommandComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__120_0,
      v15,
      Method_BattlePerformanceCommandCard___c__DistributeCriticalPoint_b__120_0__,
      0);
    static_fields = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
    static_fields->__9__120_0 = (struct System_Func_BattleCommandComponent__bool__o *)_9__120_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__120_0, (int32_t)_9__120_0, v17, v18);
  }
  v19 = System_Linq_Enumerable__Where_object_(
          commandCompArray,
          (System_Func_TSource__bool__o *)_9__120_0,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_BattleCommandComponent___);
  if ( applyOnlyToSelectedCards )
  {
    v20 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleCommandComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v20,
      (Il2CppObject *)v7,
      Method_BattlePerformanceCommandCard___c__DisplayClass120_0__DistributeCriticalPoint_b__1__,
      0);
    v19 = System_Linq_Enumerable__Where_object_(
            v19,
            (System_Func_TSource__bool__o *)v20,
            (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_BattleCommandComponent___);
  }
  v21 = (System_Action_object__o *)sub_1C2D6DC(System_Action_BattleCommandComponent__TypeInfo);
  System_Action_object____ctor(
    v21,
    (Il2CppObject *)v7,
    Method_BattlePerformanceCommandCard___c__DisplayClass120_0__DistributeCriticalPoint_b__2__,
    0);
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)v19,
    (System_Action_T__o *)v21,
    (const MethodInfo_30BA910 *)Method_BasicHelper_ForEach_BattleCommandComponent___);
}


float BattlePerformanceCommandCard__FSCardRootOffsetY(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  bool IsUnderVista; // w0
  float result; // s0

  if ( (byte_4C293F8 & 1) == 0 )
  {
    sub_1C2D490(&FSUtility_TypeInfo);
    byte_4C293F8 = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  IsUnderVista = FSUtility__IsUnderVista(0);
  result = 17.0;
  if ( IsUnderVista )
    return 0.0;
  return result;
}


UnityEngine_Vector2_array *BattlePerformanceCommandCard__FSTutorialArrowCard(
        BattlePerformanceCommandCard_o *this,
        UnityEngine_Vector2_array *arrow,
        const MethodInfo *method)
{
  __int64 v4; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattlePerformanceCommandCard_o *v6; // x20
  unsigned __int64 v7; // x21
  float *v8; // x22
  float *p_y; // x23
  float v10; // s8

  if ( (byte_4C293F9 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&UnityEngine_Vector2___TypeInfo);
    byte_4C293F9 = 1;
  }
  if ( !arrow
    || (this = (BattlePerformanceCommandCard_o *)sub_1C2D538(UnityEngine_Vector2___TypeInfo, LODWORD(arrow->max_length))) == 0 )
  {
    sub_1C2D6EC(this, arrow);
  }
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v6 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v7 = 0;
    v8 = (float *)&this->fields.COMMAND_STAMP_POS_X + 1;
    p_y = &arrow->m_Items[0].fields.y;
    do
    {
      if ( v7 >= LODWORD(arrow->max_length) || v7 >= (unsigned int)m_CancellationTokenSource )
        sub_1C2D6F4(this, arrow, v4);
      v10 = *p_y;
      *(v8 - 1) = *(p_y - 1);
      *v8 = v10;
      *v8 = v10 + BattlePerformanceCommandCard__FSCardRootOffsetY(this, (const MethodInfo *)arrow);
      v8 += 2;
      LODWORD(m_CancellationTokenSource) = v6->fields.m_CancellationTokenSource;
      ++v7;
      p_y += 2;
    }
    while ( (__int64)v7 < (int)m_CancellationTokenSource );
  }
  return (UnityEngine_Vector2_array *)v6;
}


UnityEngine_Rect_array *BattlePerformanceCommandCard__FSTutorialSquareCard(
        BattlePerformanceCommandCard_o *this,
        UnityEngine_Rect_array *square,
        const MethodInfo *method)
{
  __int64 v4; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattlePerformanceCommandCard_o *v6; // x20
  unsigned __int64 v7; // x21
  float *v8; // x22
  UnityEngine_Rect_o v10; // [xsp+0h] [xbp-40h]

  if ( (byte_4C293FA & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&UnityEngine_Rect___TypeInfo);
    byte_4C293FA = 1;
  }
  if ( !square
    || (this = (BattlePerformanceCommandCard_o *)sub_1C2D538(UnityEngine_Rect___TypeInfo, LODWORD(square->max_length))) == 0 )
  {
    sub_1C2D6EC(this, square);
  }
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v6 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v7 = 0;
    v8 = (float *)&this->fields.COMMAND_STAMP_POS_X + 1;
    do
    {
      if ( v7 >= LODWORD(square->max_length) || v7 >= (unsigned int)m_CancellationTokenSource )
        sub_1C2D6F4(this, square, v4);
      v10 = square->m_Items[v7];
      *(UnityEngine_Rect_o *)(v8 - 1) = v10;
      ++v7;
      *v8 = v10.fields.m_YMin + BattlePerformanceCommandCard__FSCardRootOffsetY(this, (const MethodInfo *)square);
      v8 += 4;
      LODWORD(m_CancellationTokenSource) = v6->fields.m_CancellationTokenSource;
    }
    while ( (__int64)v7 < (int)m_CancellationTokenSource );
  }
  return (UnityEngine_Rect_array *)v6;
}


BattleCommandData_array *BattlePerformanceCommandCard__GetBaseCommandCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *baseCommandList; // x0
  struct BattleLogic_o *logic; // x8
  struct BattleData_o *data; // x8
  System_Collections_Generic_IEnumerable_T__o *draw_commandlist; // x20
  CGThumbnailListItem_o *p_baseCommandList; // x19
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C293BD & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleCommandData__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleCommandData___ctor___77931952);
    sub_1C2D490(&System_Collections_Generic_List_BattleCommandData__TypeInfo);
    byte_4C293BD = 1;
  }
  baseCommandList = (System_Collections_Generic_List_object__o *)this->fields.baseCommandList;
  if ( !baseCommandList )
  {
    logic = this->fields.logic;
    if ( !logic )
      goto LABEL_8;
    data = logic->fields.data;
    if ( !data
      || (draw_commandlist = (System_Collections_Generic_IEnumerable_T__o *)data->fields.draw_commandlist,
          p_baseCommandList = (CGThumbnailListItem_o *)&this->fields.baseCommandList,
          v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleCommandData__TypeInfo),
          System_Collections_Generic_List_object____ctor_58233976(
            v8,
            draw_commandlist,
            (const MethodInfo_3789478 *)Method_System_Collections_Generic_List_BattleCommandData___ctor___77931952),
          p_baseCommandList->klass = (CGThumbnailListItem_c *)v8,
          sub_1C2D434(p_baseCommandList, (int32_t)v8, v9, v10),
          (baseCommandList = (System_Collections_Generic_List_object__o *)p_baseCommandList->klass) == 0) )
    {
LABEL_8:
      sub_1C2D6EC(baseCommandList, method);
    }
  }
  return (BattleCommandData_array *)System_Collections_Generic_List_object___ToArray(
                                      baseCommandList,
                                      (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleCommandData__ToArray__);
}


System_String_o *BattlePerformanceCommandCard__GetSealedWindowMessageLocalizationKey(
        BattlePerformanceCommandCard_o *this,
        int32_t status,
        const MethodInfo *method)
{
  System_String_o **v4; // x8

  if ( (byte_4C293EB & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_2705/*"BATTLE_COMMANDDIALOG_DONTACT"*/);
    sub_1C2D490(&StringLiteral_2706/*"BATTLE_COMMANDDIALOG_DONTACTTYPE"*/);
    sub_1C2D490(&StringLiteral_2708/*"BATTLE_COMMANDDIALOG_DONTTD_COND"*/);
    sub_1C2D490(&StringLiteral_2711/*"BATTLE_COMMANDDIALOG_NOFUNC"*/);
    sub_1C2D490(&StringLiteral_2709/*"BATTLE_COMMANDDIALOG_DONTTD_SHORTAGE_CRITICAL_STAR"*/);
    sub_1C2D490(&StringLiteral_2710/*"BATTLE_COMMANDDIALOG_DONTUSE"*/);
    sub_1C2D490(&StringLiteral_2707/*"BATTLE_COMMANDDIALOG_DONTTD"*/);
    byte_4C293EB = 1;
  }
  if ( (unsigned int)(status - 3) > 6 )
    v4 = (System_String_o **)&StringLiteral_2705/*"BATTLE_COMMANDDIALOG_DONTACT"*/;
  else
    v4 = (System_String_o **)*(&off_46516E0 + status - 3);
  return *v4;
}


int32_t BattlePerformanceCommandCard__GetServantNumber(
        BattlePerformanceCommandCard_o *this,
        BattleCommandData_o *commandData,
        const MethodInfo *method)
{
  struct BattleServantParamComponent_array *servantStatusObjArray; // x8
  int max_length; // w9
  unsigned int v5; // w10
  BattleServantParamComponent_o *v6; // x11

  servantStatusObjArray = this->fields.servantStatusObjArray;
  if ( !servantStatusObjArray )
    goto LABEL_13;
  max_length = servantStatusObjArray->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    this = (BattlePerformanceCommandCard_o *)0xFFFFFFFFLL;
    while ( 1 )
    {
      if ( v5 >= max_length )
        sub_1C2D6F4(this, commandData, method);
      v6 = servantStatusObjArray->m_Items[v5];
      if ( !v6 || !commandData )
        break;
      if ( v6->fields.uniqueID == commandData->fields.uniqueId )
        this = (BattlePerformanceCommandCard_o *)v5;
      else
        this = (BattlePerformanceCommandCard_o *)(unsigned int)this;
      if ( (int)++v5 >= max_length )
        return (int)this;
    }
LABEL_13:
    sub_1C2D6EC(this, commandData);
  }
  LODWORD(this) = -1;
  return (int)this;
}


BattleServantParamComponent_o *BattlePerformanceCommandCard__GetStatusUiObj(
        BattlePerformanceCommandCard_o *this,
        BattleCommandData_o *commandData,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v4; // x20
  struct BattleServantParamComponent_array *servantStatusObjArray; // x8
  int max_length; // w9
  signed int v7; // w10
  UnityEngine_Object_o *v8; // x20
  BattleServantParamComponent_o *v9; // x11
  struct BattleServantData_o *data; // x12

  v4 = this;
  if ( (byte_4C293E8 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C293E8 = 1;
  }
  servantStatusObjArray = v4->fields.servantStatusObjArray;
  if ( !servantStatusObjArray )
    goto LABEL_18;
  max_length = servantStatusObjArray->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1C2D6F4(this, commandData, method);
      v9 = servantStatusObjArray->m_Items[v7];
      if ( !v9 )
        break;
      data = v9->fields.data;
      if ( data )
      {
        if ( !commandData )
          break;
        if ( data->fields.uniqueId == commandData->fields.uniqueId )
          v8 = (UnityEngine_Object_o *)servantStatusObjArray->m_Items[v7];
      }
      if ( ++v7 >= max_length )
        goto LABEL_15;
    }
LABEL_18:
    sub_1C2D6EC(this, commandData);
  }
  v8 = 0;
LABEL_15:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__op_Equality(v8, 0, 0);
  return (BattleServantParamComponent_o *)v8;
}


void BattlePerformanceCommandCard__InitResult(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_Transform_array *npcardTr; // x8
  BattlePerformanceCommandCard_o *v4; // x19
  __int64 v5; // x20
  int max_length; // w9

  npcardTr = this->fields.npcardTr;
  if ( !npcardTr )
LABEL_8:
    sub_1C2D6EC(this, method);
  v4 = this;
  v5 = 0;
  while ( 1 )
  {
    max_length = npcardTr->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C2D6F4(this, method, v2);
    this = (BattlePerformanceCommandCard_o *)npcardTr->m_Items[v5];
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        npcardTr = v4->fields.npcardTr;
        ++v5;
        if ( npcardTr )
          continue;
      }
    }
    goto LABEL_8;
  }
}


void BattlePerformanceCommandCard__Initialize(
        BattlePerformanceCommandCard_o *this,
        BattlePerformance_o *inperf,
        BattleData_o *data,
        BattleLogic_o *inlogic,
        const MethodInfo *method)
{
  struct BattlePerformance_o **p_perf; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x1
  BattleWindowComponent_o *sealedWindow; // x0
  BattleWindowOuterClickManagerComponent_o *v16; // x21
  BattleWindowOuterClickComponent_OuterClickCall_o *v17; // x22
  BattleWindowOuterClickManagerComponent_o *tdConfWindow; // x21
  BattleWindowOuterClickComponent_OuterClickCall_o *v19; // x22
  UnityEngine_Component_o *v20; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v21; // x20
  Il2CppObject *Instance; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4C293B3 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattlePerformanceCommandCard_OnCloseSealedWindow__);
    sub_1C2D490(&Method_BattlePerformanceCommandCard_OnCloseTdConfWindow__);
    sub_1C2D490(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_Spawner__get_Instance__);
    sub_1C2D490(&StringLiteral_10595/*"Performance"*/);
    byte_4C293B3 = 1;
  }
  p_perf = &this->fields.perf;
  this->fields.perf = inperf;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.perf, (int32_t)inperf, (int32_t)data, (const MethodInfo *)inlogic);
  this->fields.Bdata = data;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.Bdata, (int32_t)data, v10, v11);
  this->fields.logic = inlogic;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.logic, (int32_t)inlogic, v12, v13);
  sealedWindow = (BattleWindowComponent_o *)this->fields.sealedWindow;
  if ( !sealedWindow )
    goto LABEL_16;
  ((void (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))sealedWindow->klass->vtable._9_setClose.methodPtr)(
    sealedWindow,
    sealedWindow->klass->vtable._9_setClose.method);
  v16 = (BattleWindowOuterClickManagerComponent_o *)this->fields.sealedWindow;
  v17 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1C2D6DC(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v17,
    (Il2CppObject *)this,
    (intptr_t)Method_BattlePerformanceCommandCard_OnCloseSealedWindow__,
    0);
  if ( !v16 )
    goto LABEL_16;
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack(v16, v17, 0);
  sealedWindow = (BattleWindowComponent_o *)this->fields.tdConfWindow;
  if ( !sealedWindow )
    goto LABEL_16;
  BattleWindowComponent__setInitData(sealedWindow, 2, 0.15, 0, 0);
  sealedWindow = (BattleWindowComponent_o *)this->fields.tdConfWindow;
  if ( !sealedWindow )
    goto LABEL_16;
  ((void (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))sealedWindow->klass->vtable._9_setClose.methodPtr)(
    sealedWindow,
    sealedWindow->klass->vtable._9_setClose.method);
  tdConfWindow = (BattleWindowOuterClickManagerComponent_o *)this->fields.tdConfWindow;
  v19 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1C2D6DC(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v19,
    (Il2CppObject *)this,
    (intptr_t)Method_BattlePerformanceCommandCard_OnCloseTdConfWindow__,
    0);
  if ( !tdConfWindow )
    goto LABEL_16;
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack(tdConfWindow, v19, 0);
  sealedWindow = (BattleWindowComponent_o *)this->fields.commandAssistDetailWindow;
  if ( !sealedWindow )
    goto LABEL_16;
  BattleWindowComponent__setInitData(sealedWindow, 2, 0.15, 0, 0);
  sealedWindow = (BattleWindowComponent_o *)this->fields.commandAssistDetailWindow;
  if ( !sealedWindow )
    goto LABEL_16;
  ((void (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))sealedWindow->klass->vtable._9_setClose.methodPtr)(
    sealedWindow,
    sealedWindow->klass->vtable._9_setClose.method);
  sealedWindow = (BattleWindowComponent_o *)this->fields.commandfsm;
  if ( !sealedWindow )
    goto LABEL_16;
  sealedWindow = (BattleWindowComponent_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)sealedWindow, 0);
  if ( !sealedWindow )
    goto LABEL_16;
  sealedWindow = (BattleWindowComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                              (HutongGames_PlayMaker_FsmVariables_o *)sealedWindow,
                                              (System_String_o *)StringLiteral_10595/*"Performance"*/,
                                              0);
  v20 = (UnityEngine_Component_o *)*p_perf;
  if ( !*p_perf
    || (v21 = (HutongGames_PlayMaker_FsmGameObject_o *)sealedWindow,
        sealedWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_gameObject(v20, 0),
        !v21)
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(v21, (UnityEngine_GameObject_o *)sealedWindow, 0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_Spawner__get_Instance__),
        this->fields.spawner = (struct Spawner_o *)Instance,
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.spawner, (int32_t)Instance, v23, v24),
        (sealedWindow = (BattleWindowComponent_o *)this->fields.spawner) == 0) )
  {
LABEL_16:
    sub_1C2D6EC(sealedWindow, v14);
  }
  Spawner__Precache_40498768((Spawner_o *)sealedWindow, (UnityEngine_Object_o *)this->fields.selectCommandPrefab, 3, 0);
  this->fields.firstBonusAnimationWaitTime = 0;
  *(_WORD *)&this->fields.isTouchBegan = 0;
  this->fields.isTouchCanceled = 0;
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__LongPress(
        BattlePerformanceCommandCard_o *this,
        int32_t markindex,
        const MethodInfo *method)
{
  intptr_t Bdata; // x0
  __int64 v6; // x2
  struct BattleCommandComponent_array *commandCompArray; // x8
  unsigned __int64 v8; // x22
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v10; // x21
  System_String_o *v11; // x1

  if ( (byte_4C293C2 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_8324/*"LONG_PRESS_COMMAND_ASSIST"*/);
    sub_1C2D490(&StringLiteral_8323/*"LONG_PRESS"*/);
    sub_1C2D490(&StringLiteral_21414/*"markindex"*/);
    byte_4C293C2 = 1;
  }
  Bdata = (intptr_t)this->fields.Bdata;
  if ( !Bdata )
    goto LABEL_28;
  Bdata = BattleData__isTutorial((BattleData_o *)Bdata, 0);
  if ( (Bdata & 1) == 0 )
  {
    commandCompArray = this->fields.commandCompArray;
    if ( commandCompArray )
    {
      v8 = 0;
      do
      {
        max_length_low = LODWORD(commandCompArray->max_length);
        if ( (__int64)v8 >= (int)max_length_low )
          return;
        if ( v8 >= max_length_low )
          sub_1C2D6F4(Bdata, *(_QWORD *)&markindex, v6);
        v10 = (UnityEngine_Object_o *)commandCompArray->m_Items[v8];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Bdata = UnityEngine_Object__op_Equality(v10, 0, 0);
        if ( (Bdata & 1) == 0 )
        {
          if ( !v10 )
            break;
          Bdata = BattleCommandComponent__checkMark((BattleCommandComponent_o *)v10, markindex, 0);
          if ( (Bdata & 1) != 0 )
          {
            Bdata = (intptr_t)this->fields.commandfsm;
            if ( !Bdata )
              break;
            Bdata = (intptr_t)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)Bdata, 0);
            if ( !Bdata )
              break;
            Bdata = *(_QWORD *)(Bdata + 88);
            if ( !Bdata )
              break;
            Bdata = (intptr_t)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                (HutongGames_PlayMaker_FsmVariables_o *)Bdata,
                                (System_String_o *)StringLiteral_21414/*"markindex"*/,
                                0);
            if ( !Bdata )
              break;
            *(_DWORD *)(Bdata + 56) = markindex;
            if ( BattleCommandComponent__isTreasureDvc((BattleCommandComponent_o *)v10, 0) )
            {
              Bdata = (intptr_t)this->fields.commandfsm;
              if ( !Bdata )
                break;
              v11 = (System_String_o *)StringLiteral_8323/*"LONG_PRESS"*/;
            }
            else
            {
              Bdata = v10[15].fields.m_CachedPtr;
              if ( !Bdata )
                break;
              Bdata = BattleCommandData__IsEnableCommandAssist((BattleCommandData_o *)Bdata, 0);
              if ( (Bdata & 1) == 0 )
                goto LABEL_27;
              Bdata = (intptr_t)this->fields.commandfsm;
              if ( !Bdata )
                break;
              v11 = (System_String_o *)StringLiteral_8324/*"LONG_PRESS_COMMAND_ASSIST"*/;
            }
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Bdata, v11, 0);
          }
        }
LABEL_27:
        commandCompArray = this->fields.commandCompArray;
        ++v8;
      }
      while ( commandCompArray );
    }
LABEL_28:
    sub_1C2D6EC(Bdata, *(_QWORD *)&markindex);
  }
}


void BattlePerformanceCommandCard__MoveExtraCard(
        BattlePerformanceCommandCard_o *this,
        float moveTime,
        const MethodInfo *method)
{
  __int64 v3; // x2
  BattlePerformanceCommandCard_o *v5; // x21
  struct BattleCommandComponent_array *selectedcomponents; // x8
  UnityEngine_GameObject_o *gameObject; // x19
  const MethodInfo *v8; // x3
  BattlePerformanceCommandCard_o *v9; // x20
  struct BattleCommandComponent_array *v10; // x8
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  const MethodInfo *v14; // x3
  BattlePerformanceCommandCard_o *v15; // x21
  const MethodInfo *v16; // x3
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  const MethodInfo *v20; // x3
  BattlePerformanceCommandCard_o *v21; // x21
  const MethodInfo *v22; // x3
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  const MethodInfo *v26; // x3
  BattlePerformanceCommandCard_o *v27; // x21
  const MethodInfo *v28; // x3
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  const MethodInfo *v32; // x3
  BattlePerformanceCommandCard_o *v33; // x21
  System_Collections_Hashtable_o *v34; // x0
  __int64 v35; // x0
  char v36[4]; // [xsp+8h] [xbp-48h] BYREF
  int v37; // [xsp+Ch] [xbp-44h] BYREF
  float v38; // [xsp+18h] [xbp-38h] BYREF
  float v39; // [xsp+1Ch] [xbp-34h] BYREF

  v5 = this;
  if ( (byte_4C293D9 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&iTween_EaseType_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_24841/*"x"*/);
    sub_1C2D490(&StringLiteral_18742/*"easetype"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_20959/*"islocal"*/);
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&iTween_TypeInfo);
    byte_4C293D9 = 1;
  }
  selectedcomponents = v5->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_48;
  if ( LODWORD(selectedcomponents->max_length) <= 3 )
    goto LABEL_47;
  this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[3];
  if ( !this )
    goto LABEL_48;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this = (BattlePerformanceCommandCard_o *)sub_1C2D538(object___TypeInfo, 8);
  if ( !this )
    goto LABEL_48;
  v9 = this;
  this = (BattlePerformanceCommandCard_o *)StringLiteral_24841/*"x"*/;
  if ( StringLiteral_24841/*"x"*/ )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(StringLiteral_24841/*"x"*/, v9->klass->_1.element_class);
    if ( !this )
      goto LABEL_49;
    method = (const MethodInfo *)StringLiteral_24841/*"x"*/;
  }
  else
  {
    method = 0;
  }
  if ( !LODWORD(v9->fields.m_CancellationTokenSource) )
    goto LABEL_47;
  v9->fields.COMMAND_STAMP_POS_X = (struct System_Single_array *)method;
  sub_1C2D434((CGThumbnailListItem_o *)&v9->fields.COMMAND_STAMP_POS_X, (int32_t)method, v3, v8);
  v10 = v5->fields.selectedcomponents;
  if ( !v10 )
    goto LABEL_48;
  if ( LODWORD(v10->max_length) <= 3 )
    goto LABEL_47;
  this = (BattlePerformanceCommandCard_o *)v10->m_Items[3];
  if ( !this
    || (this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0)) == 0
    || (this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0)) == 0 )
  {
LABEL_48:
    sub_1C2D6EC(this, method);
  }
  v39 = COERCE_FLOAT(UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0)) + 250.0;
  this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v39, v11, v12, v13);
  v15 = this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(this, v9->klass->_1.element_class);
    if ( !this )
      goto LABEL_49;
  }
  if ( LODWORD(v9->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_47;
  *(_QWORD *)&v9->fields.COMMAND_STAMP_POS_Y = v15;
  sub_1C2D434((CGThumbnailListItem_o *)&v9->fields.COMMAND_STAMP_POS_Y, (int32_t)v15, v3, v14);
  this = (BattlePerformanceCommandCard_o *)StringLiteral_24049/*"time"*/;
  if ( StringLiteral_24049/*"time"*/ )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(StringLiteral_24049/*"time"*/, v9->klass->_1.element_class);
    if ( !this )
      goto LABEL_49;
    method = (const MethodInfo *)StringLiteral_24049/*"time"*/;
  }
  else
  {
    method = 0;
  }
  if ( LODWORD(v9->fields.m_CancellationTokenSource) <= 2 )
    goto LABEL_47;
  *(_QWORD *)&v9->fields.CARD_ROOT_BASE_X = method;
  sub_1C2D434((CGThumbnailListItem_o *)&v9->fields.CARD_ROOT_BASE_X, (int32_t)method, v3, v16);
  v38 = moveTime;
  this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v38, v17, v18, v19);
  v21 = this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(this, v9->klass->_1.element_class);
    if ( !this )
      goto LABEL_49;
  }
  if ( LODWORD(v9->fields.m_CancellationTokenSource) <= 3 )
    goto LABEL_47;
  v9->fields.commandfsm = (struct PlayMakerFSM_o *)v21;
  sub_1C2D434((CGThumbnailListItem_o *)&v9->fields.commandfsm, (int32_t)v21, v3, v20);
  this = (BattlePerformanceCommandCard_o *)StringLiteral_18742/*"easetype"*/;
  if ( StringLiteral_18742/*"easetype"*/ )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(StringLiteral_18742/*"easetype"*/, v9->klass->_1.element_class);
    if ( !this )
      goto LABEL_49;
    method = (const MethodInfo *)StringLiteral_18742/*"easetype"*/;
  }
  else
  {
    method = 0;
  }
  if ( LODWORD(v9->fields.m_CancellationTokenSource) <= 4 )
    goto LABEL_47;
  v9->fields.commandprefab = (struct UnityEngine_GameObject_o *)method;
  sub_1C2D434((CGThumbnailListItem_o *)&v9->fields.commandprefab, (int32_t)method, v3, v22);
  v37 = 16;
  this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v37, v23, v24, v25);
  v27 = this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(this, v9->klass->_1.element_class);
    if ( !this )
      goto LABEL_49;
  }
  if ( LODWORD(v9->fields.m_CancellationTokenSource) <= 5 )
    goto LABEL_47;
  v9->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v27;
  sub_1C2D434((CGThumbnailListItem_o *)&v9->fields.selectCommandPrefab, (int32_t)v27, v3, v26);
  this = (BattlePerformanceCommandCard_o *)StringLiteral_20959/*"islocal"*/;
  if ( StringLiteral_20959/*"islocal"*/ )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(StringLiteral_20959/*"islocal"*/, v9->klass->_1.element_class);
    if ( !this )
      goto LABEL_49;
    method = (const MethodInfo *)StringLiteral_20959/*"islocal"*/;
  }
  else
  {
    method = 0;
  }
  if ( LODWORD(v9->fields.m_CancellationTokenSource) <= 6 )
    goto LABEL_47;
  v9->fields.commandrootTransform = (struct UnityEngine_Transform_o *)method;
  sub_1C2D434((CGThumbnailListItem_o *)&v9->fields.commandrootTransform, (int32_t)method, v3, v28);
  v36[0] = 1;
  this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(bool_TypeInfo, v36, v29, v30, v31);
  v33 = this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(this, v9->klass->_1.element_class);
    if ( !this )
    {
LABEL_49:
      v35 = sub_1C2D710(this);
      sub_1C2D5B8(v35, 0);
    }
  }
  if ( LODWORD(v9->fields.m_CancellationTokenSource) <= 7 )
LABEL_47:
    sub_1C2D6F4(this, method, v3);
  v9->fields.selectinfo_sprite = (struct UISprite_o *)v33;
  sub_1C2D434((CGThumbnailListItem_o *)&v9->fields.selectinfo_sprite, (int32_t)v33, v3, v32);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v34 = iTween__Hash((System_Object_array *)v9, 0);
  iTween__MoveFrom_63096900(gameObject, v34, 0);
}


void BattlePerformanceCommandCard__MoveNotTween(
        BattlePerformanceCommandCard_o *this,
        UnityEngine_Transform_o *target,
        System_Action_GameObject__o *callback,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  BattlePerformance_o *v8; // x21
  UnityEngine_Component_o *criticalpointTr; // x8
  UnityEngine_Transform_o *v10; // x22
  int32_t layer; // w0
  float x; // s8
  float y; // s9
  float z; // s10
  float v15; // s11
  float v16; // s7
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4C293E2 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleMoveObject___);
    byte_4C293E2 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_11;
  perf = (BattlePerformance_o *)BattlePerformance__getEffectInstantiate(perf, 9, this->fields.criticalpointTr, 0);
  if ( !perf )
    goto LABEL_11;
  perf = (BattlePerformance_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)perf,
                                  (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleMoveObject___);
  if ( !perf )
    goto LABEL_11;
  v8 = perf;
  perf = (BattlePerformance_o *)BattleMoveObject__GetTransform((BattleMoveObject_o *)perf, 0);
  criticalpointTr = (UnityEngine_Component_o *)this->fields.criticalpointTr;
  if ( !criticalpointTr )
    goto LABEL_11;
  v10 = (UnityEngine_Transform_o *)perf;
  perf = (BattlePerformance_o *)UnityEngine_Component__get_gameObject(criticalpointTr, 0);
  if ( !perf
    || (layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)perf, 0),
        perf = (BattlePerformance_o *)TransformHelper__ChangeChildsLayer(v10, layer, 0),
        !v10)
    || (v19.fields.x = 0.0,
        v19.fields.y = 0.0,
        v19.fields.z = 0.0,
        UnityEngine_Transform__set_localPosition(v10, v19, 0),
        BattleMoveObject__SetRigidbodyGravity((BattleMoveObject_o *)v8, 0, 0),
        !target) )
  {
LABEL_11:
    sub_1C2D6EC(perf, target);
  }
  localPosition = UnityEngine_Transform__get_localPosition(target, 0);
  localPosition.fields.x = localPosition.fields.x + 0.0;
  localPosition.fields.y = localPosition.fields.y + 70.0;
  localPosition.fields.z = localPosition.fields.z + 0.0;
  v21 = UnityEngine_Transform__TransformPoint(target, localPosition, 0);
  v22 = UnityEngine_Transform__InverseTransformPoint(v10, v21, 0);
  x = v22.fields.x;
  y = v22.fields.y;
  z = v22.fields.z;
  v15 = UnityEngine_Random__Range(0.3, 0.5, 0);
  v16 = UnityEngine_Random__Range(0.0, 0.2, 0);
  v23.fields.x = 0.0;
  v23.fields.y = 0.0;
  v23.fields.z = 0.0;
  v24.fields.x = x;
  v24.fields.y = y;
  v24.fields.z = z;
  BattleMoveObject__StartNotTweenMove((BattleMoveObject_o *)v8, v23, v24, v15, v16, callback, 0);
  v8->fields.perf = (struct BattlePerformance_o *)target;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.perf, (int32_t)target, v17, v18);
}


void BattlePerformanceCommandCard__MoveNotTween2back(
        BattlePerformanceCommandCard_o *this,
        UnityEngine_Transform_o *from,
        System_Action_GameObject__o *callback,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  BattlePerformance_o *v8; // x21
  UnityEngine_Component_o *criticalpointTr; // x8
  UnityEngine_Transform_o *v10; // x22
  int32_t layer; // w0
  float x; // s8
  float y; // s9
  float z; // s10
  float v15; // s11
  float v16; // s7
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4C293E3 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleMoveObject___);
    byte_4C293E3 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_11;
  perf = (BattlePerformance_o *)BattlePerformance__getEffectInstantiate(perf, 9, this->fields.criticalpointTr, 0);
  if ( !perf )
    goto LABEL_11;
  perf = (BattlePerformance_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)perf,
                                  (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleMoveObject___);
  if ( !perf )
    goto LABEL_11;
  v8 = perf;
  perf = (BattlePerformance_o *)BattleMoveObject__GetTransform((BattleMoveObject_o *)perf, 0);
  criticalpointTr = (UnityEngine_Component_o *)this->fields.criticalpointTr;
  if ( !criticalpointTr
    || (v10 = (UnityEngine_Transform_o *)perf,
        (perf = (BattlePerformance_o *)UnityEngine_Component__get_gameObject(criticalpointTr, 0)) == 0)
    || (layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)perf, 0),
        perf = (BattlePerformance_o *)TransformHelper__ChangeChildsLayer(v10, layer, 0),
        !from)
    || (position = UnityEngine_Transform__get_position(from, 0), !v10) )
  {
LABEL_11:
    sub_1C2D6EC(perf, from);
  }
  UnityEngine_Transform__set_position(v10, position, 0);
  BattleMoveObject__SetRigidbodyGravity((BattleMoveObject_o *)v8, 0, 0);
  localPosition = UnityEngine_Transform__get_localPosition(v10, 0);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  v15 = UnityEngine_Random__Range(0.3, 0.5, 0);
  v16 = UnityEngine_Random__Range(0.0, 0.2, 0);
  v22.fields.x = 0.0;
  v22.fields.y = 0.0;
  v22.fields.z = 0.0;
  v21.fields.x = x;
  v21.fields.y = y;
  v21.fields.z = z;
  BattleMoveObject__StartNotTweenMove((BattleMoveObject_o *)v8, v21, v22, v15, v16, callback, 0);
  v8->fields.perf = (struct BattlePerformance_o *)from;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.perf, (int32_t)from, v17, v18);
}


void BattlePerformanceCommandCard__MoveSelectedCard(
        BattlePerformanceCommandCard_o *this,
        float moveTime,
        const MethodInfo *method)
{
  __int64 v3; // x2
  BattlePerformanceCommandCard_o *v5; // x19
  unsigned __int64 i; // x23
  struct BattleCommandComponent_array *selectedcomponents; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v9; // x3
  BattlePerformanceCommandCard_o *v10; // x21
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  const MethodInfo *v14; // x3
  BattlePerformanceCommandCard_o *v15; // x22
  const MethodInfo *v16; // x3
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  const MethodInfo *v20; // x3
  BattlePerformanceCommandCard_o *v21; // x22
  const MethodInfo *v22; // x3
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  const MethodInfo *v26; // x3
  BattlePerformanceCommandCard_o *v27; // x22
  const MethodInfo *v28; // x3
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  const MethodInfo *v32; // x3
  BattlePerformanceCommandCard_o *v33; // x22
  System_Collections_Hashtable_o *v34; // x0
  __int64 v35; // x0
  char v36[4]; // [xsp+8h] [xbp-78h] BYREF
  int v37; // [xsp+Ch] [xbp-74h] BYREF
  float v38; // [xsp+18h] [xbp-68h] BYREF
  int v39; // [xsp+1Ch] [xbp-64h] BYREF

  v5 = this;
  if ( (byte_4C293D7 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&iTween_EaseType_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_24841/*"x"*/);
    sub_1C2D490(&StringLiteral_18742/*"easetype"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_20959/*"islocal"*/);
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&iTween_TypeInfo);
    byte_4C293D7 = 1;
  }
  for ( i = 0; i != 3; ++i )
  {
    selectedcomponents = v5->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_46;
    if ( i >= LODWORD(selectedcomponents->max_length) )
      goto LABEL_44;
    this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[i];
    if ( !this
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
          (this = (BattlePerformanceCommandCard_o *)sub_1C2D538(object___TypeInfo, 8)) == 0) )
    {
LABEL_46:
      sub_1C2D6EC(this, method);
    }
    v10 = this;
    this = (BattlePerformanceCommandCard_o *)StringLiteral_24841/*"x"*/;
    if ( StringLiteral_24841/*"x"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(StringLiteral_24841/*"x"*/, v10->klass->_1.element_class);
      if ( !this )
        goto LABEL_45;
      method = (const MethodInfo *)StringLiteral_24841/*"x"*/;
    }
    else
    {
      method = 0;
    }
    if ( !LODWORD(v10->fields.m_CancellationTokenSource) )
      goto LABEL_44;
    v10->fields.COMMAND_STAMP_POS_X = (struct System_Single_array *)method;
    sub_1C2D434((CGThumbnailListItem_o *)&v10->fields.COMMAND_STAMP_POS_X, (int32_t)method, v3, v9);
    v39 = -1081291571;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v39, v11, v12, v13);
    v15 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(this, v10->klass->_1.element_class);
      if ( !this )
      {
LABEL_45:
        v35 = sub_1C2D710(this);
        sub_1C2D5B8(v35, 0);
      }
    }
    if ( LODWORD(v10->fields.m_CancellationTokenSource) <= 1 )
      goto LABEL_44;
    *(_QWORD *)&v10->fields.COMMAND_STAMP_POS_Y = v15;
    sub_1C2D434((CGThumbnailListItem_o *)&v10->fields.COMMAND_STAMP_POS_Y, (int32_t)v15, v3, v14);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_24049/*"time"*/;
    if ( StringLiteral_24049/*"time"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(StringLiteral_24049/*"time"*/, v10->klass->_1.element_class);
      if ( !this )
        goto LABEL_45;
      method = (const MethodInfo *)StringLiteral_24049/*"time"*/;
    }
    else
    {
      method = 0;
    }
    if ( LODWORD(v10->fields.m_CancellationTokenSource) <= 2 )
      goto LABEL_44;
    *(_QWORD *)&v10->fields.CARD_ROOT_BASE_X = method;
    sub_1C2D434((CGThumbnailListItem_o *)&v10->fields.CARD_ROOT_BASE_X, (int32_t)method, v3, v16);
    v38 = moveTime;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v38, v17, v18, v19);
    v21 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(this, v10->klass->_1.element_class);
      if ( !this )
        goto LABEL_45;
    }
    if ( LODWORD(v10->fields.m_CancellationTokenSource) <= 3 )
      goto LABEL_44;
    v10->fields.commandfsm = (struct PlayMakerFSM_o *)v21;
    sub_1C2D434((CGThumbnailListItem_o *)&v10->fields.commandfsm, (int32_t)v21, v3, v20);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_18742/*"easetype"*/;
    if ( StringLiteral_18742/*"easetype"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(StringLiteral_18742/*"easetype"*/, v10->klass->_1.element_class);
      if ( !this )
        goto LABEL_45;
      method = (const MethodInfo *)StringLiteral_18742/*"easetype"*/;
    }
    else
    {
      method = 0;
    }
    if ( LODWORD(v10->fields.m_CancellationTokenSource) <= 4 )
      goto LABEL_44;
    v10->fields.commandprefab = (struct UnityEngine_GameObject_o *)method;
    sub_1C2D434((CGThumbnailListItem_o *)&v10->fields.commandprefab, (int32_t)method, v3, v22);
    v37 = 1;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v37, v23, v24, v25);
    v27 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(this, v10->klass->_1.element_class);
      if ( !this )
        goto LABEL_45;
    }
    if ( LODWORD(v10->fields.m_CancellationTokenSource) <= 5 )
      goto LABEL_44;
    v10->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v27;
    sub_1C2D434((CGThumbnailListItem_o *)&v10->fields.selectCommandPrefab, (int32_t)v27, v3, v26);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_20959/*"islocal"*/;
    if ( StringLiteral_20959/*"islocal"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(StringLiteral_20959/*"islocal"*/, v10->klass->_1.element_class);
      if ( !this )
        goto LABEL_45;
      method = (const MethodInfo *)StringLiteral_20959/*"islocal"*/;
    }
    else
    {
      method = 0;
    }
    if ( LODWORD(v10->fields.m_CancellationTokenSource) <= 6 )
LABEL_44:
      sub_1C2D6F4(this, method, v3);
    v10->fields.commandrootTransform = (struct UnityEngine_Transform_o *)method;
    sub_1C2D434((CGThumbnailListItem_o *)&v10->fields.commandrootTransform, (int32_t)method, v3, v28);
    v36[0] = 1;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(bool_TypeInfo, v36, v29, v30, v31);
    v33 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(this, v10->klass->_1.element_class);
      if ( !this )
        goto LABEL_45;
    }
    if ( LODWORD(v10->fields.m_CancellationTokenSource) <= 7 )
      goto LABEL_44;
    v10->fields.selectinfo_sprite = (struct UISprite_o *)v33;
    sub_1C2D434((CGThumbnailListItem_o *)&v10->fields.selectinfo_sprite, (int32_t)v33, v3, v32);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    v34 = iTween__Hash((System_Object_array *)v10, 0);
    iTween__MoveAdd_63099900(gameObject, v34, 0);
  }
}


void BattlePerformanceCommandCard__OnApplicationPause(
        BattlePerformanceCommandCard_o *this,
        bool pauseStatus,
        const MethodInfo *method)
{
  this->fields.firstBonusAnimationWaitTime = this->fields.firstBonusAnimationMaxTime;
  if ( pauseStatus && this->fields.isTouchBegan && !this->fields.isTouchEnded )
    this->fields.isTouchCanceled = 1;
}


void BattlePerformanceCommandCard__OnCloseCommandAssistDetailWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattleWindowComponent_o *commandAssistDetailWindow; // x0
  struct BattleCommandAssistDetailWindowComponent_o *v4; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_4C293F2 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattlePerformanceCommandCard_OnCloseCommandAssistDetailWindow__);
    sub_1C2D490(&Method_BattlePerformanceCommandCard_endCloseCommandAssistDetailWindow__);
    sub_1C2D490(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C2D490(&StringLiteral_16983/*"ba21"*/);
    byte_4C293F2 = 1;
  }
  commandAssistDetailWindow = (BattleWindowComponent_o *)this->fields.commandAssistDetailWindow;
  if ( !commandAssistDetailWindow )
    goto LABEL_10;
  if ( !BattleWindowComponent__isOpen(commandAssistDetailWindow, 0) )
    return;
  v4 = this->fields.commandAssistDetailWindow;
  v5 = (BattleWindowComponent_EndCall_o *)sub_1C2D6DC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattlePerformanceCommandCard_endCloseCommandAssistDetailWindow__,
    0);
  if ( !v4 )
LABEL_10:
    sub_1C2D6EC(commandAssistDetailWindow, method);
  ((void (__fastcall *)(struct BattleCommandAssistDetailWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))v4->klass->vtable._12_Close.methodPtr)(
    v4,
    v5,
    v4->klass->vtable._12_Close.method);
  v6 = Method_BattlePerformanceCommandCard_OnCloseCommandAssistDetailWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_OnCloseCommandAssistDetailWindow__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C2D4A8(Method_BattlePerformanceCommandCard_OnCloseCommandAssistDetailWindow__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C2D474(v6, v6[4]);
  OverwriteAssetSoundName__PlaySe(v7, (System_String_o *)StringLiteral_16983/*"ba21"*/, 0, 0);
}


void BattlePerformanceCommandCard__OnCloseSealedWindow(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct BattleSealedCommandWindowComponent_o *sealedWindow; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4C293EC & 1) == 0 )
  {
    sub_1C2D490(&Method_BattlePerformanceCommandCard_OnCloseSealedWindow__);
    sub_1C2D490(&Method_BattlePerformanceCommandCard_endCloseSealedWindow__);
    sub_1C2D490(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4C293EC = 1;
  }
  v3 = Method_BattlePerformanceCommandCard_OnCloseSealedWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_OnCloseSealedWindow__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_BattlePerformanceCommandCard_OnCloseSealedWindow__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  sealedWindow = this->fields.sealedWindow;
  v6 = (BattleWindowComponent_EndCall_o *)sub_1C2D6DC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattlePerformanceCommandCard_endCloseSealedWindow__,
    0);
  if ( !sealedWindow )
    sub_1C2D6EC(v7, v8);
  ((void (__fastcall *)(struct BattleSealedCommandWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))sealedWindow->klass->vtable._12_Close.methodPtr)(
    sealedWindow,
    v6,
    sealedWindow->klass->vtable._12_Close.method);
}


void BattlePerformanceCommandCard__OnCloseTdConfWindow(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *tdConfWindow; // x0
  struct BattleTDConfWIndowComponent_o *v4; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_4C293EF & 1) == 0 )
  {
    sub_1C2D490(&Method_BattlePerformanceCommandCard_OnCloseTdConfWindow__);
    sub_1C2D490(&Method_BattlePerformanceCommandCard_endCloseTdConfWindow__);
    sub_1C2D490(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4C293EF = 1;
  }
  tdConfWindow = (BattleWindowComponent_o *)this->fields.tdConfWindow;
  if ( !tdConfWindow )
    goto LABEL_10;
  if ( !BattleWindowComponent__isOpen(tdConfWindow, 0) )
    return;
  v4 = this->fields.tdConfWindow;
  v5 = (BattleWindowComponent_EndCall_o *)sub_1C2D6DC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattlePerformanceCommandCard_endCloseTdConfWindow__,
    0);
  if ( !v4 )
LABEL_10:
    sub_1C2D6EC(tdConfWindow, method);
  ((void (__fastcall *)(struct BattleTDConfWIndowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))v4->klass->vtable._12_Close.methodPtr)(
    v4,
    v5,
    v4->klass->vtable._12_Close.method);
  v6 = Method_BattlePerformanceCommandCard_OnCloseTdConfWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_OnCloseTdConfWindow__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C2D4A8(Method_BattlePerformanceCommandCard_OnCloseTdConfWindow__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C2D474(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__OpenCommandAssistDetailWIndow(
        BattlePerformanceCommandCard_o *this,
        int32_t markIndex,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v4; // x19
  struct BattleCommandComponent_array *commandCompArray; // x22
  int max_length; // w8
  unsigned int v7; // w23
  Il2CppClass **v8; // x8
  Il2CppClass *v9; // x21
  BattleCommandData_o *methodPtr; // x20
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0

  v4 = this;
  if ( (byte_4C293F1 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattlePerformanceCommandCard_OpenCommandAssistDetailWIndow__);
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&StringLiteral_16982/*"ba20"*/);
    byte_4C293F1 = 1;
  }
  commandCompArray = v4->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_19;
  max_length = commandCompArray->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1C2D6F4(this, *(_QWORD *)&markIndex, method);
      v8 = &commandCompArray->obj.klass + (int)v7;
      v9 = v8[4];
      if ( !v9 )
        goto LABEL_19;
      this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkMark(
                                                 (BattleCommandComponent_o *)v8[4],
                                                 markIndex,
                                                 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      max_length = commandCompArray->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
    methodPtr = (BattleCommandData_o *)v9->vtable[4].methodPtr;
    if ( !methodPtr )
      goto LABEL_19;
    if ( BattleCommandData__IsEnableCommandAssist((BattleCommandData_o *)v9->vtable[4].methodPtr, 0) )
    {
      this = (BattlePerformanceCommandCard_o *)v4->fields.commandAssistDetailWindow;
      if ( this )
      {
        BattleCommandAssistDetailWindowComponent__SetCommandAssistInfo(
          (BattleCommandAssistDetailWindowComponent_o *)this,
          methodPtr,
          0);
        v11 = Method_BattlePerformanceCommandCard_OpenCommandAssistDetailWIndow__;
        if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_OpenCommandAssistDetailWIndow__ + 83) & 2) != 0 )
          v11 = (_QWORD *)sub_1C2D4A8(Method_BattlePerformanceCommandCard_OpenCommandAssistDetailWIndow__);
        v12 = (System_Reflection_MethodBase_o *)sub_1C2D474(v11, v11[4]);
        OverwriteAssetSoundName__PlaySe(v12, (System_String_o *)StringLiteral_16982/*"ba20"*/, 0, 0);
        this = (BattlePerformanceCommandCard_o *)v4->fields.commandAssistDetailWindow;
        if ( this )
        {
          ((void (__fastcall *)(BattlePerformanceCommandCard_o *, _QWORD, void *))this->klass[1]._1.generic_class)(
            this,
            0,
            this->klass[1]._1.typeMetadataHandle);
          return;
        }
      }
LABEL_19:
      sub_1C2D6EC(this, *(_QWORD *)&markIndex);
    }
  }
}


void BattlePerformanceCommandCard__OpenInitiarize(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_7;
  if ( BattleLogic__getTutorialId(logic, 0) != 1 )
    goto LABEL_6;
  logic = this->fields.logic;
  if ( !logic )
LABEL_7:
    sub_1C2D6EC(logic, method);
  if ( BattleLogic__getTurn(logic, 0) == 4 )
    this->fields.isTouchNgInTutorial = 1;
LABEL_6:
  this->fields.isPlayingMoveCard = 1;
}


void BattlePerformanceCommandCard__OpenSealedWindow(
        BattlePerformanceCommandCard_o *this,
        int32_t markIndex,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  BattleCommandSealStatus_o *SealStatus; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v11; // x22
  int max_length; // w9
  Il2CppClass **v13; // x8
  BattleCommandComponent_o *v14; // x21
  BattlePerformanceCommandCard_o *PrioredStatus; // x0
  int v16; // w22
  const MethodInfo *v17; // x2
  System_String_o *SealedWindowMessageLocalizationKey; // x21
  __int64 v19; // x20
  System_Nullable_int__o v20; // x0
  const MethodInfo_38B3EC8 *v21; // x2
  BattleSealedCommandWindowComponent_o *sealedWindow; // x22
  __int128 v23; // [xsp+0h] [xbp-40h] BYREF
  __int64 v24; // [xsp+18h] [xbp-28h] BYREF
  System_Nullable_Vector3__o v25; // 0:x0.16
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C293EA & 1) == 0 )
  {
    sub_1C2D490(&Method_BattlePerformanceCommandCard_OpenSealedWindow__);
    sub_1C2D490(&BattleSealedCommandWindowComponent_LabelAdjustArgs_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_System_Nullable_int___ctor__);
    sub_1C2D490(&Method_System_Nullable_Vector3___ctor__);
    byte_4C293EA = 1;
  }
  v5 = Method_BattlePerformanceCommandCard_OpenSealedWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_OpenSealedWindow__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C2D4A8(Method_BattlePerformanceCommandCard_OpenSealedWindow__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_12;
  v11 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v11 >= max_length )
      goto LABEL_21;
    if ( (unsigned int)v11 >= max_length )
      sub_1C2D6F4(SealStatus, v8, v9);
    v13 = &commandCompArray->obj.klass + v11;
    v14 = (BattleCommandComponent_o *)v13[4];
    if ( !v14 )
      goto LABEL_12;
    SealStatus = (BattleCommandSealStatus_o *)BattleCommandComponent__checkMark(
                                                (BattleCommandComponent_o *)v13[4],
                                                markIndex,
                                                0);
    if ( ((unsigned __int8)SealStatus & 1) != 0 )
      break;
    commandCompArray = this->fields.commandCompArray;
    ++v11;
    if ( !commandCompArray )
      goto LABEL_12;
  }
  SealStatus = BattleCommandComponent__get_SealStatus(v14, 0);
  if ( !SealStatus )
    goto LABEL_12;
  PrioredStatus = (BattlePerformanceCommandCard_o *)BattleCommandSealStatus__get_PrioredStatus(SealStatus, 0);
  v16 = (int)PrioredStatus;
  SealedWindowMessageLocalizationKey = BattlePerformanceCommandCard__GetSealedWindowMessageLocalizationKey(
                                         PrioredStatus,
                                         (int32_t)PrioredStatus,
                                         v17);
  v19 = sub_1C2D6DC(BattleSealedCommandWindowComponent_LabelAdjustArgs_TypeInfo);
  BattleSealedCommandWindowComponent_LabelAdjustArgs___ctor(
    (BattleSealedCommandWindowComponent_LabelAdjustArgs_o *)v19,
    0);
  if ( v16 == 6 )
  {
    v20 = (System_Nullable_int__o)&v24;
    v24 = 0;
    System_Nullable_int____ctor(v20, 26, (const MethodInfo_38AF304 *)Method_System_Nullable_int___ctor__);
    if ( !v19 )
      goto LABEL_12;
    *(_QWORD *)&v25.fields.hasValue = &v23;
    v26.fields.x = 0.0;
    v26.fields.y = 15.0;
    *(_QWORD *)(v19 + 16) = v24;
    v26.fields.z = 0.0;
    v23 = 0u;
    *(_QWORD *)&v25.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v25, v26, v21);
    *(_OWORD *)(v19 + 24) = v23;
  }
  sealedWindow = this->fields.sealedWindow;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SealStatus = (BattleCommandSealStatus_o *)LocalizationManager__Get(SealedWindowMessageLocalizationKey, 0);
  if ( !sealedWindow )
    goto LABEL_12;
  BattleSealedCommandWindowComponent__setLabel(
    sealedWindow,
    (System_String_o *)SealStatus,
    (BattleSealedCommandWindowComponent_LabelAdjustArgs_o *)v19,
    0);
LABEL_21:
  SealStatus = (BattleCommandSealStatus_o *)this->fields.sealedWindow;
  if ( !SealStatus )
LABEL_12:
    sub_1C2D6EC(SealStatus, v8);
  ((void (__fastcall *)(BattleCommandSealStatus_o *, _QWORD, void *))SealStatus->klass[1]._1.generic_class)(
    SealStatus,
    0,
    SealStatus->klass[1]._1.typeMetadataHandle);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__OpenTdConfWindow(
        BattlePerformanceCommandCard_o *this,
        int32_t markIndex,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v4; // x19
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v6; // x29
  int max_length; // w9
  Il2CppClass **v8; // x8
  BattleCommandComponent_o *v9; // x21
  BattleData_o *Bdata; // x22
  BattleServantData_o *v11; // x21
  ServantLimitAddEntity_o *svtlimitaddent; // x24
  bool IsNameTrueFromBattleSvt; // w0
  System_String_o *OverwriteTDRuby; // x22
  System_String_o *OverwriteTDName; // x23
  bool IsNpDetailActive; // w0
  BattleTDConfWIndowComponent_o *tdConfWindow; // x24
  bool v18; // w25
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  struct BattleTDConfWIndowComponent_o *v21; // x20
  BattleWindowComponent_EndCall_o *v22; // x21

  v4 = this;
  if ( (byte_4C293EE & 1) == 0 )
  {
    sub_1C2D490(&Method_BattlePerformanceCommandCard_OpenTdConfWindow__);
    sub_1C2D490(&Method_BattlePerformanceCommandCard_endOpenTdConf__);
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4C293EE = 1;
  }
  commandCompArray = v4->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_19;
  v6 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1C2D6F4(this, *(_QWORD *)&markIndex, method);
    v8 = &commandCompArray->obj.klass + v6;
    v9 = (BattleCommandComponent_o *)v8[4];
    if ( !v9 )
      goto LABEL_19;
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkMark(
                                               (BattleCommandComponent_o *)v8[4],
                                               markIndex,
                                               0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      Bdata = v4->fields.Bdata;
      this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__getUniqueID(v9, 0);
      if ( !Bdata )
        goto LABEL_19;
      this = (BattlePerformanceCommandCard_o *)BattleData__getServantData(Bdata, (int32_t)this, 0);
      if ( !this )
        goto LABEL_19;
      v11 = (BattleServantData_o *)this;
      this = (BattlePerformanceCommandCard_o *)this->fields.cutin_grand_b;
      if ( !this )
        goto LABEL_19;
      svtlimitaddent = v11->fields.svtlimitaddent;
      IsNameTrueFromBattleSvt = ServantEntity__IsNameTrueFromBattleSvt((ServantEntity_o *)this, 0);
      OverwriteTDRuby = 0;
      OverwriteTDName = 0;
      if ( svtlimitaddent && IsNameTrueFromBattleSvt )
      {
        OverwriteTDName = ServantLimitAddEntity__GetOverwriteTDName(svtlimitaddent, 0);
        OverwriteTDRuby = ServantLimitAddEntity__GetOverwriteTDRuby(svtlimitaddent, 0);
      }
      this = (BattlePerformanceCommandCard_o *)v4->fields.Bdata;
      if ( !this )
        goto LABEL_19;
      IsNpDetailActive = BattleData__IsNpDetailActive((BattleData_o *)this, v11, 1, 0);
      tdConfWindow = v4->fields.tdConfWindow;
      v18 = IsNpDetailActive;
      this = (BattlePerformanceCommandCard_o *)BattleServantData__getTreasureDvcId(v11, 1, 0, 0);
      if ( !tdConfWindow )
        goto LABEL_19;
      BattleTDConfWIndowComponent__setData(
        tdConfWindow,
        (int32_t)this,
        v11->fields.treasuredvcLevel,
        OverwriteTDName,
        OverwriteTDRuby,
        v18,
        0);
    }
    commandCompArray = v4->fields.commandCompArray;
    ++v6;
    if ( !commandCompArray )
      goto LABEL_19;
  }
  v19 = Method_BattlePerformanceCommandCard_OpenTdConfWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_OpenTdConfWindow__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_1C2D4A8(Method_BattlePerformanceCommandCard_OpenTdConfWindow__);
  v20 = (System_Reflection_MethodBase_o *)sub_1C2D474(v19, v19[4]);
  OverwriteAssetSoundName__PlayCommonSe(v20, 9, 0, 0);
  v21 = v4->fields.tdConfWindow;
  v22 = (BattleWindowComponent_EndCall_o *)sub_1C2D6DC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v22, (Il2CppObject *)v4, Method_BattlePerformanceCommandCard_endOpenTdConf__, 0);
  if ( !v21 )
LABEL_19:
    sub_1C2D6EC(this, *(_QWORD *)&markIndex);
  ((void (__fastcall *)(struct BattleTDConfWIndowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))v21->klass->vtable._10_Open.methodPtr)(
    v21,
    v22,
    v21->klass->vtable._10_Open.method);
}


void BattlePerformanceCommandCard__PlayBackStar(
        BattlePerformanceCommandCard_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  struct System_Collections_Generic_List_GameObject__o *aubelist; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x1
  BattlePerformance_o *perf; // x0
  struct System_Collections_Generic_List_GameObject__o *v14; // x8
  __int64 size; // x2
  int v16; // w9
  unsigned int j; // w29
  struct BattleCommandComponent_array *commandCompArray; // x8
  Il2CppClass **v19; // x8
  BattleCommandComponent_o *v20; // x21
  int32_t CriticalCount; // w22
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v23; // x23
  System_Action_object__o *v24; // x24
  const MethodInfo *v25; // x3
  System_Action_o *v26; // x21
  const MethodInfo *v27; // x2
  System_Collections_IEnumerator_o *v28; // x0
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C293E7 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_GameObject__TypeInfo);
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattleCommandComponent_addCriticalBuff__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_BattlePerformanceCommandCard___c__DisplayClass173_0__PlayBackStar_b__0__);
    sub_1C2D490(&BattlePerformanceCommandCard___c__DisplayClass173_0_TypeInfo);
    byte_4C293E7 = 1;
  }
  memset(&i, 0, sizeof(i));
  v5 = sub_1C2D6DC(BattlePerformanceCommandCard___c__DisplayClass173_0_TypeInfo);
  BattlePerformanceCommandCard___c__DisplayClass173_0___ctor(
    (BattlePerformanceCommandCard___c__DisplayClass173_0_o *)v5,
    0);
  if ( !v5 )
    goto LABEL_22;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v10, v11);
  aubelist = this->fields.aubelist;
  if ( !aubelist )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)aubelist,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  for ( i = v29;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        BattlePerformance__destroyInstantiate(perf, (UnityEngine_GameObject_o *)i.fields._current, 0) )
  {
    perf = this->fields.perf;
    if ( !perf )
      sub_1C2D6EC(0, v12);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v14 = this->fields.aubelist;
  if ( !v14 )
    goto LABEL_22;
  size = (unsigned int)v14->fields._size;
  v16 = v14->fields._version + 1;
  v14->fields._size = 0;
  v14->fields._version = v16;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)v14->fields._items, 0, size, 0);
  for ( j = 0; j != 5; ++j )
  {
    commandCompArray = this->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_22;
    if ( j >= LODWORD(commandCompArray->max_length) )
LABEL_23:
      sub_1C2D6F4(aubelist, v7, size);
    v19 = &commandCompArray->obj.klass + (int)j;
    v20 = (BattleCommandComponent_o *)v19[4];
    if ( !v20 )
      goto LABEL_22;
    CriticalCount = BattleCommandComponent__getCriticalCount((BattleCommandComponent_o *)v19[4], 0);
    BattleCommandComponent__setCriticalObject(v20, 0, 0);
    if ( CriticalCount >= 1 )
    {
      while ( 1 )
      {
        commandTransformArray = this->fields.commandTransformArray;
        if ( !commandTransformArray )
          break;
        if ( j >= LODWORD(commandTransformArray->max_length) )
          goto LABEL_23;
        v23 = commandTransformArray->m_Items[j];
        v24 = (System_Action_object__o *)sub_1C2D6DC(System_Action_GameObject__TypeInfo);
        System_Action_object____ctor(v24, (Il2CppObject *)v20, Method_BattleCommandComponent_addCriticalBuff__, 0);
        BattlePerformanceCommandCard__MoveNotTween2back(this, v23, (System_Action_GameObject__o *)v24, v25);
        if ( !--CriticalCount )
          goto LABEL_20;
      }
LABEL_22:
      sub_1C2D6EC(aubelist, v7);
    }
LABEL_20:
    ;
  }
  this->fields._IsPlayingBackStar_k__BackingField = 1;
  v26 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v5,
    Method_BattlePerformanceCommandCard___c__DisplayClass173_0__PlayBackStar_b__0__,
    0);
  v28 = BattlePerformanceCommandCard__waitFunc(this, 0.5, v26, v27);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v28, 0);
}


void BattlePerformanceCommandCard__PlayFallStar(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *aubelist; // x0
  __int64 v4; // x1
  BattlePerformance_o *perf; // x0
  struct System_Collections_Generic_List_GameObject__o *v6; // x8
  __int64 size; // x2
  int v8; // w9
  unsigned int j; // w26
  struct BattleCommandComponent_array *commandCompArray; // x8
  Il2CppClass **v11; // x8
  BattleCommandComponent_o *v12; // x20
  int v13; // w21
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v15; // x22
  System_Action_object__o *v16; // x23
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C293E5 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_GameObject__TypeInfo);
    sub_1C2D490(&Method_BattleCommandComponent_addCriticalBuff__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    byte_4C293E5 = 1;
  }
  memset(&i, 0, sizeof(i));
  aubelist = this->fields.aubelist;
  if ( !aubelist )
    goto LABEL_25;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)aubelist,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  for ( i = v18;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        BattlePerformance__destroyInstantiate(perf, (UnityEngine_GameObject_o *)i.fields._current, 0) )
  {
    perf = this->fields.perf;
    if ( !perf )
      sub_1C2D6EC(0, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v6 = this->fields.aubelist;
  if ( !v6 )
    goto LABEL_25;
  size = (unsigned int)v6->fields._size;
  v8 = v6->fields._version + 1;
  v6->fields._size = 0;
  v6->fields._version = v8;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0);
  for ( j = 0; j != 5; ++j )
  {
    commandCompArray = this->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_25;
    if ( j >= LODWORD(commandCompArray->max_length) )
LABEL_26:
      sub_1C2D6F4(aubelist, method, size);
    v11 = &commandCompArray->obj.klass + (int)j;
    v12 = (BattleCommandComponent_o *)v11[4];
    if ( !v12 )
      goto LABEL_25;
    aubelist = (struct System_Collections_Generic_List_GameObject__o *)BattleCommandComponent__IsMaxViewCritical(
                                                                         (BattleCommandComponent_o *)v11[4],
                                                                         0);
    if ( ((unsigned __int8)aubelist & 1) == 0 )
    {
      aubelist = (struct System_Collections_Generic_List_GameObject__o *)BattleCommandComponent__GetPassStarCount(
                                                                           v12,
                                                                           0);
      if ( (int)aubelist >= 1 )
      {
        v13 = (int)aubelist;
        while ( 1 )
        {
          commandTransformArray = this->fields.commandTransformArray;
          if ( !commandTransformArray )
            break;
          if ( j >= LODWORD(commandTransformArray->max_length) )
            goto LABEL_26;
          v15 = commandTransformArray->m_Items[j];
          v16 = (System_Action_object__o *)sub_1C2D6DC(System_Action_GameObject__TypeInfo);
          System_Action_object____ctor(v16, (Il2CppObject *)v12, Method_BattleCommandComponent_addCriticalBuff__, 0);
          BattlePerformanceCommandCard__MoveNotTween(this, v15, (System_Action_GameObject__o *)v16, v17);
          if ( !--v13 )
            goto LABEL_21;
        }
LABEL_25:
        sub_1C2D6EC(aubelist, method);
      }
LABEL_21:
      BattleCommandComponent__ResetPassStarCount(v12, 0);
      if ( v12->fields.selectflg )
        BattleCommandComponent__updateSelectedEffect(v12, 0);
    }
  }
  BattlePerformanceCommandCard__updateBuffIcon(this, method);
}


void BattlePerformanceCommandCard__PlayFlash(
        BattlePerformanceCommandCard_o *this,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *selectedcomponents; // x8
  BattlePerformanceCommandCard_o *v4; // x20
  struct BattleCommandComponent_array *v6; // x8
  struct BattleCommandComponent_array *v7; // x8

  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_11;
  if ( !LODWORD(selectedcomponents->max_length) )
    goto LABEL_12;
  v4 = this;
  this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[0];
  if ( !this )
    goto LABEL_11;
  BattleCommandComponent__flashComboType((BattleCommandComponent_o *)this, 0, combo, 0);
  v6 = v4->fields.selectedcomponents;
  if ( !v6 )
    goto LABEL_11;
  if ( LODWORD(v6->max_length) <= 1 )
    goto LABEL_12;
  this = (BattlePerformanceCommandCard_o *)v6->m_Items[1];
  if ( !this
    || (BattleCommandComponent__flashComboType((BattleCommandComponent_o *)this, 1, combo, 0),
        (v7 = v4->fields.selectedcomponents) == 0) )
  {
LABEL_11:
    sub_1C2D6EC(this, combo);
  }
  if ( LODWORD(v7->max_length) <= 2 )
LABEL_12:
    sub_1C2D6F4(this, combo, method);
  this = (BattlePerformanceCommandCard_o *)v7->m_Items[2];
  if ( !this )
    goto LABEL_11;
  BattleCommandComponent__flashComboType((BattleCommandComponent_o *)this, 2, combo, 0);
}


void BattlePerformanceCommandCard__PlayFlashComboSvt(
        BattlePerformanceCommandCard_o *this,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *selectedcomponents; // x8
  BattlePerformanceCommandCard_o *v4; // x20
  struct BattleCommandComponent_array *v6; // x8
  struct BattleCommandComponent_array *v7; // x8

  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_11;
  if ( !LODWORD(selectedcomponents->max_length) )
    goto LABEL_12;
  v4 = this;
  this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[0];
  if ( !this )
    goto LABEL_11;
  BattleCommandComponent__flashComboSvt((BattleCommandComponent_o *)this, 0, combo, 0);
  v6 = v4->fields.selectedcomponents;
  if ( !v6 )
    goto LABEL_11;
  if ( LODWORD(v6->max_length) <= 1 )
    goto LABEL_12;
  this = (BattlePerformanceCommandCard_o *)v6->m_Items[1];
  if ( !this
    || (BattleCommandComponent__flashComboSvt((BattleCommandComponent_o *)this, 1, combo, 0),
        (v7 = v4->fields.selectedcomponents) == 0) )
  {
LABEL_11:
    sub_1C2D6EC(this, combo);
  }
  if ( LODWORD(v7->max_length) <= 2 )
LABEL_12:
    sub_1C2D6F4(this, combo, method);
  this = (BattlePerformanceCommandCard_o *)v7->m_Items[2];
  if ( !this )
    goto LABEL_11;
  BattleCommandComponent__flashComboSvt((BattleCommandComponent_o *)this, 2, combo, 0);
}


void BattlePerformanceCommandCard__PlayFlashExtra(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformanceCommandCard_o *v3; // x19
  struct BattleCommandComponent_array *selectedcomponents; // x8

  v3 = this;
  if ( (byte_4C293DA & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&StringLiteral_18819/*"ef_excard01"*/);
    byte_4C293DA = 1;
  }
  selectedcomponents = v3->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_7;
  if ( LODWORD(selectedcomponents->max_length) <= 3 )
    sub_1C2D6F4(this, method, v2);
  this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[3];
  if ( !this )
LABEL_7:
    sub_1C2D6EC(this, method);
  BattleCommandComponent__attachEffect((BattleCommandComponent_o *)this, (System_String_o *)StringLiteral_18819/*"ef_excard01"*/, 5, 0);
}


void BattlePerformanceCommandCard__ReflectSelectCommandDataToUi(
        BattlePerformanceCommandCard_o *this,
        BattleData_o *data,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v6; // x21
  struct BattleCommandComponent_array *selectedcomponents; // x8
  unsigned __int64 v8; // x22
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v10; // x23
  BattlePerformanceCommandCard_o *v11; // x25
  float COMMAND_STAMP_POS_Y; // w1
  System_Nullable_int__o v13; // x0
  __int64 v14; // x8
  struct BattleCommandComponent_array *v15; // x8
  BattlePerformanceCommandCard_o *v16; // x23
  bool activeSelf; // w24
  struct BattleCommandComponent_array *v18; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  struct BattleCommandComponent_array *v22; // x8
  struct BattleCommandComponent_array *v23; // x8
  struct BattleCommandComponent_array *v24; // x8
  struct BattleCommandComponent_array *v25; // x8
  struct BattleCommandComponent_array *v26; // x8
  __int64 v27; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4C293E1 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_IndexValue_BattleCommandData___);
    sub_1C2D490(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C2D490(&Method_System_Nullable_int___ctor__);
    sub_1C2D490(&Method_System_Nullable_int__get_HasValue__);
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C293E1 = 1;
  }
  selectedcomponents = v6->fields.selectedcomponents;
  if ( selectedcomponents )
  {
    v8 = 0;
    while ( 1 )
    {
      max_length_low = LODWORD(selectedcomponents->max_length);
      if ( (__int64)v8 >= (int)max_length_low )
        break;
      if ( v8 >= max_length_low )
        goto LABEL_46;
      v10 = (UnityEngine_Object_o *)selectedcomponents->m_Items[v8];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Equality(v10, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !data )
          goto LABEL_44;
        this = (BattlePerformanceCommandCard_o *)BasicHelper__IndexValue_object_(
                                                   (System_Object_array *)data->fields.selectcommandlist,
                                                   v8,
                                                   0,
                                                   (const MethodInfo_30BCEF0 *)Method_BasicHelper_IndexValue_BattleCommandData___);
        v11 = this;
        if ( this )
        {
          COMMAND_STAMP_POS_Y = this->fields.COMMAND_STAMP_POS_Y;
          v13 = (System_Nullable_int__o)&v27;
          v27 = 0;
          System_Nullable_int____ctor(
            v13,
            SLODWORD(COMMAND_STAMP_POS_Y),
            (const MethodInfo_38AF304 *)Method_System_Nullable_int___ctor__);
          v14 = v27;
          if ( !svtData )
            goto LABEL_44;
        }
        else
        {
          v14 = 0;
          if ( !svtData )
            goto LABEL_44;
        }
        if ( (_BYTE)v14 && svtData->fields.uniqueId == HIDWORD(v14) )
        {
          v15 = v6->fields.selectedcomponents;
          if ( !v15 )
            goto LABEL_44;
          if ( v8 >= LODWORD(v15->max_length) )
            goto LABEL_46;
          this = (BattlePerformanceCommandCard_o *)v15->m_Items[v8];
          if ( !this )
            goto LABEL_44;
          this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
          if ( !this )
            goto LABEL_44;
          v16 = this;
          activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
          this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)v16,
                                                     0);
          if ( !this )
            goto LABEL_44;
          localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0);
          v18 = v6->fields.selectedcomponents;
          if ( !v18 )
            goto LABEL_44;
          if ( v8 >= LODWORD(v18->max_length) )
            goto LABEL_46;
          this = (BattlePerformanceCommandCard_o *)v18->m_Items[v8];
          if ( !this )
            goto LABEL_44;
          x = localScale.fields.x;
          y = localScale.fields.y;
          z = localScale.fields.z;
          BattleCommandComponent__UpdateSealStatus((BattleCommandComponent_o *)this, 0);
          v22 = v6->fields.selectedcomponents;
          if ( !v22 )
            goto LABEL_44;
          if ( v8 >= LODWORD(v22->max_length) )
            goto LABEL_46;
          this = (BattlePerformanceCommandCard_o *)v22->m_Items[v8];
          if ( !this )
            goto LABEL_44;
          BattleCommandComponent__setData(
            (BattleCommandComponent_o *)this,
            (BattleCommandData_o *)v11,
            svtData,
            0,
            1,
            0,
            0,
            0);
          v23 = v6->fields.selectedcomponents;
          if ( !v23 )
            goto LABEL_44;
          if ( v8 >= LODWORD(v23->max_length) )
            goto LABEL_46;
          this = (BattlePerformanceCommandCard_o *)v23->m_Items[v8];
          if ( !this )
            goto LABEL_44;
          BattleCommandComponent__SetPowerUpCardValue((BattleCommandComponent_o *)this, 0, 0);
          v24 = v6->fields.selectedcomponents;
          if ( !v24 )
            goto LABEL_44;
          if ( v8 >= LODWORD(v24->max_length) )
            goto LABEL_46;
          this = (BattlePerformanceCommandCard_o *)v24->m_Items[v8];
          if ( !this )
            goto LABEL_44;
          BattleCommandComponent__UpdateCommandUpDetailLabel((BattleCommandComponent_o *)this, v8, 0);
          v25 = v6->fields.selectedcomponents;
          if ( !v25 )
            goto LABEL_44;
          if ( v8 >= LODWORD(v25->max_length) )
            goto LABEL_46;
          this = (BattlePerformanceCommandCard_o *)v25->m_Items[v8];
          if ( !this )
LABEL_44:
            sub_1C2D6EC(this, data);
          this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__getCriticalCount(
                                                     (BattleCommandComponent_o *)this,
                                                     0);
          if ( (int)this >= 1 )
          {
            v26 = v6->fields.selectedcomponents;
            if ( !v26 )
              goto LABEL_44;
            if ( v8 >= LODWORD(v26->max_length) )
LABEL_46:
              sub_1C2D6F4(this, data, svtData);
            this = (BattlePerformanceCommandCard_o *)v26->m_Items[v8];
            if ( !this )
              goto LABEL_44;
            BattleCommandComponent__setCriticalObject((BattleCommandComponent_o *)this, 1, 0);
          }
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v16, activeSelf, 0);
          v29.fields.x = x;
          v29.fields.y = y;
          v29.fields.z = z;
          GameObjectExtensions__SetLocalScale((UnityEngine_GameObject_o *)v16, v29, 0);
        }
      }
      selectedcomponents = v6->fields.selectedcomponents;
      ++v8;
      if ( !selectedcomponents )
        goto LABEL_44;
    }
  }
}


void BattlePerformanceCommandCard__ResetAllCards(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformanceCommandCard_o *v3; // x19
  struct BattleCommandComponent_array *commandCompArray; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v6; // x21
  UnityEngine_Object_o *v7; // x19

  v3 = this;
  if ( (byte_4C2940A & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2940A = 1;
  }
  commandCompArray = v3->fields.commandCompArray;
  if ( commandCompArray )
  {
    max_length = commandCompArray->max_length;
    if ( (int)max_length >= 1 )
    {
      v6 = 0;
      do
      {
        if ( v6 >= (unsigned int)max_length )
          sub_1C2D6F4(this, method, v2);
        v7 = (UnityEngine_Object_o *)commandCompArray->m_Items[v6];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v7, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v7 )
            sub_1C2D6EC(this, method);
          BattleCommandComponent__setData((BattleCommandComponent_o *)v7, 0, 0, 0, 1, 0, 1, 0);
        }
        LODWORD(max_length) = commandCompArray->max_length;
        ++v6;
      }
      while ( (__int64)v6 < (int)max_length );
    }
  }
}


void BattlePerformanceCommandCard__ResetCardCriticalLabel(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v4; // x19
  __int64 v5; // x20
  int max_length; // w9

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_7:
    sub_1C2D6EC(this, method);
  v4 = this;
  v5 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C2D6F4(this, method, v2);
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[v5];
    if ( this )
    {
      BattleCommandComponent__resetCriticalLabel((BattleCommandComponent_o *)this, 0);
      commandCompArray = v4->fields.commandCompArray;
      ++v5;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_7;
  }
}


void BattlePerformanceCommandCard__ResetCommandCardPassData(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformanceCommandCard_o *v3; // x19
  unsigned __int64 i; // x20
  struct BattleCommandComponent_array *commandCompArray; // x8

  v3 = this;
  for ( i = 0; i != 5; ++i )
  {
    commandCompArray = v3->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_7;
    if ( i >= LODWORD(commandCompArray->max_length) )
      sub_1C2D6F4(this, method, v2);
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[i];
    if ( !this )
LABEL_7:
      sub_1C2D6EC(this, method);
    BattleCommandComponent__ResetPassStarCount((BattleCommandComponent_o *)this, 0);
  }
}


void BattlePerformanceCommandCard__ResetNoblePhantasmCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformanceCommandCard_o *v3; // x19
  __int64 i; // x22
  struct BattleCommandComponent_array *commandCompArray; // x8
  UnityEngine_Object_o *v6; // x20

  v3 = this;
  if ( (byte_4C29409 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C29409 = 1;
  }
  for ( i = 9; i != 12; ++i )
  {
    commandCompArray = v3->fields.commandCompArray;
    if ( !commandCompArray )
LABEL_13:
      sub_1C2D6EC(this, method);
    if ( i - 4 >= (unsigned __int64)LODWORD(commandCompArray->max_length) )
      sub_1C2D6F4(this, method, v2);
    v6 = (UnityEngine_Object_o *)*((_QWORD *)&commandCompArray->obj.klass + i);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v6, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v6 )
        goto LABEL_13;
      BattleCommandComponent__setData((BattleCommandComponent_o *)v6, 0, 0, 0, 1, 0, 1, 0);
    }
  }
}


void BattlePerformanceCommandCard__SetBackTacticalButton(
        BattlePerformanceCommandCard_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Component_o *backTacticalButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x1

  backTacticalButton = (UnityEngine_Component_o *)this->fields.backTacticalButton;
  if ( !backTacticalButton )
    sub_1C2D6EC(0, active);
  gameObject = UnityEngine_Component__get_gameObject(backTacticalButton, 0);
  if ( active )
    AndroidBackKeyManager__AddBackBtn(gameObject, v6);
  else
    AndroidBackKeyManager__RemoveBackBtn(gameObject, v6);
}


void BattlePerformanceCommandCard__SetBaseCommandCard(
        BattlePerformanceCommandCard_o *this,
        System_Collections_Generic_List_BattleCommandData__o *baselist,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.baseCommandList = baselist;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.baseCommandList, (int32_t)baselist, (int32_t)method, v3);
}


void BattlePerformanceCommandCard__SetCommandCardEffect(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v4; // x19
  __int64 v5; // x20
  int max_length; // w9

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_7:
    sub_1C2D6EC(this, method);
  v4 = this;
  v5 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C2D6F4(this, method, v2);
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[v5];
    if ( this )
    {
      BattleCommandComponent__UpdateCommandCardEffect((BattleCommandComponent_o *)this, 0);
      commandCompArray = v4->fields.commandCompArray;
      ++v5;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_7;
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__SetCommandCardEffectActive(
        BattlePerformanceCommandCard_o *this,
        bool value,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v4; // x19
  __int64 v6; // x21
  int max_length; // w9
  unsigned int v8; // w22
  __int64 v9; // x8
  float v10; // s0
  struct BattleCommandComponent_array *v11; // x8

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_11:
    sub_1C2D6EC(this, value);
  v4 = this;
  v6 = 4;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    v8 = v6 - 4;
    if ( (int)v6 - 4 >= max_length )
      break;
    if ( v8 >= max_length )
      goto LABEL_13;
    v9 = *((_QWORD *)&commandCompArray->obj.klass + v6);
    if ( v9 )
    {
      this = *(BattlePerformanceCommandCard_o **)(v9 + 360);
      if ( this )
      {
        this = (BattlePerformanceCommandCard_o *)((__int64 (__fastcall *)(BattlePerformanceCommandCard_o *, _QWORD, const MethodInfo *))this->klass[1]._1.this_arg.data)(
                                                   this,
                                                   *(_QWORD *)&this->klass[1]._1.this_arg.bits,
                                                   method);
        v11 = v4->fields.commandCompArray;
        if ( v11 )
        {
          if ( v8 >= LODWORD(v11->max_length) )
LABEL_13:
            sub_1C2D6F4(this, value, method);
          this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&v11->obj.klass + v6);
          if ( this )
          {
            BattleCommandComponent__CardEffectSetActive((BattleCommandComponent_o *)this, v10 > 0.0 && value, 0);
            commandCompArray = v4->fields.commandCompArray;
            ++v6;
            if ( commandCompArray )
              continue;
          }
        }
      }
    }
    goto LABEL_11;
  }
}


void BattlePerformanceCommandCard__SetCommandCardTypeChangeBuff(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v4; // x19
  __int64 v5; // x22
  int max_length; // w9
  unsigned int v7; // w23
  __int64 v8; // x8
  BattleCommandData_o *v9; // x20
  int32_t firstaura_b_high; // w3
  BattlePerformanceCommandCard_o *v11; // x21
  int m_CachedPtr_high; // w8
  int v13; // w8
  struct BattleCommandComponent_array *v14; // x8
  BattleCommandComponent_o *v15; // x8

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_19:
    sub_1C2D6EC(this, method);
  v4 = this;
  v5 = 4;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    v7 = v5 - 4;
    if ( (int)v5 - 4 >= max_length )
      break;
    if ( v7 >= max_length )
      goto LABEL_21;
    v8 = *((_QWORD *)&commandCompArray->obj.klass + v5);
    if ( v8 )
    {
      v9 = *(BattleCommandData_o **)(v8 + 376);
      if ( v9 && !BattleCommandData__isTreasureDvc(*(BattleCommandData_o **)(v8 + 376), 0) )
      {
        this = (BattlePerformanceCommandCard_o *)BattleCommandData__GetCommandCardTypeChangeBuff(v9, 0);
        if ( this )
        {
          v11 = this;
          this = (BattlePerformanceCommandCard_o *)BattleCommandData__IsCommandCardTypeChanged(v9, 0);
          m_CachedPtr_high = HIDWORD(v11->fields.m_CachedPtr);
          firstaura_b_high = HIDWORD(v11->fields.firstaura_b);
          v13 = m_CachedPtr_high + 1 >= 0 ? m_CachedPtr_high + 1 : m_CachedPtr_high + 2;
          v2 = (unsigned int)(v13 >> 1);
        }
        else
        {
          firstaura_b_high = 0;
          v2 = 0;
        }
      }
      else
      {
        firstaura_b_high = 0;
        v2 = 0;
        this = 0;
      }
      v14 = v4->fields.commandCompArray;
      if ( v14 )
      {
        if ( v7 >= LODWORD(v14->max_length) )
LABEL_21:
          sub_1C2D6F4(this, method, v2);
        v15 = (BattleCommandComponent_o *)*((_QWORD *)&v14->obj.klass + v5);
        if ( v15 )
        {
          BattleCommandComponent__SetCommandCardTypeChange(v15, (unsigned __int8)this & 1, v2, firstaura_b_high, 0);
          commandCompArray = v4->fields.commandCompArray;
          ++v5;
          if ( commandCompArray )
            continue;
        }
      }
    }
    goto LABEL_19;
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__SetCommandPhaseButtonActive(
        BattlePerformanceCommandCard_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *highSpeedButton; // x0
  bool v6; // w20
  const MethodInfo *v7; // x2

  highSpeedButton = this->fields.highSpeedButton;
  if ( !highSpeedButton
    || (UnityEngine_GameObject__SetActive(highSpeedButton, active, 0),
        (highSpeedButton = (UnityEngine_GameObject_o *)this->fields.backTacticalButton) == 0)
    || (highSpeedButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)highSpeedButton, 0)) == 0 )
  {
    sub_1C2D6EC(highSpeedButton, active);
  }
  v6 = active;
  UnityEngine_GameObject__SetActive(highSpeedButton, v6, 0);
  BattlePerformanceCommandCard__SetBackTacticalButton(this, v6, v7);
}


void BattlePerformanceCommandCard__SetDownloadEventSprite(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformanceCommandCard_o *v3; // x19
  struct BattleCommandComponent_array *commandCompArray; // x8
  unsigned __int64 v5; // x21
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v7; // x20

  v3 = this;
  if ( (byte_4C29407 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C29407 = 1;
  }
  commandCompArray = v3->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_13:
    sub_1C2D6EC(this, method);
  v5 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(commandCompArray->max_length);
    if ( (__int64)v5 >= (int)max_length_low )
      break;
    if ( v5 >= max_length_low )
      sub_1C2D6F4(this, method, v2);
    v7 = (UnityEngine_Object_o *)commandCompArray->m_Items[v5];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v7, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v7 )
        goto LABEL_13;
      BattleCommandComponent__SetDownloadEventSprite((BattleCommandComponent_o *)v7, 0);
    }
    commandCompArray = v3->fields.commandCompArray;
    ++v5;
    if ( !commandCompArray )
      goto LABEL_13;
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__SetLabelActive(
        BattlePerformanceCommandCard_o *this,
        bool active,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v4; // x19
  struct BattleCommandComponent_array *commandCompArray; // x8
  unsigned __int64 v6; // x22
  bool v7; // w20
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v9; // x21

  v4 = this;
  if ( (byte_4C29405 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C29405 = 1;
  }
  commandCompArray = v4->fields.commandCompArray;
  if ( commandCompArray )
  {
    v6 = 0;
    v7 = active;
    while ( 1 )
    {
      max_length_low = LODWORD(commandCompArray->max_length);
      if ( (__int64)v6 >= (int)max_length_low )
        break;
      if ( v6 >= max_length_low )
        sub_1C2D6F4(this, active, method);
      v9 = (UnityEngine_Object_o *)commandCompArray->m_Items[v6];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v9, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v9 )
          goto LABEL_13;
        BattleCommandComponent__SetLabelActive((BattleCommandComponent_o *)v9, v7, 0);
        BattleCommandComponent__SetLabelAssistActive((BattleCommandComponent_o *)v9, v7, 0);
      }
      commandCompArray = v4->fields.commandCompArray;
      ++v6;
      if ( !commandCompArray )
LABEL_13:
        sub_1C2D6EC(this, active);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__SetSelectStamp(
        BattlePerformanceCommandCard_o *this,
        int32_t targetindex,
        UnityEngine_Vector3_o pos,
        BattleCommandComponent_o *bc,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  BattlePerformanceCommandCard_o *v10; // x21
  Spawner_o *spawner; // x22
  UnityEngine_Object_o *selectCommandPrefab; // x23
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v14; // s12
  float v15; // s13
  float v16; // s11
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_Component_o *commandrootTransform; // x1
  UnityEngine_GameObject_o *v19; // x21
  BattlePerformanceCommandCard_o *v20; // x22
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  v10 = this;
  if ( (byte_4C293C5 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleSelectCommandComponent___);
    byte_4C293C5 = 1;
  }
  spawner = v10->fields.spawner;
  selectCommandPrefab = (UnityEngine_Object_o *)v10->fields.selectCommandPrefab;
  if ( !byte_4C20DA1 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v15 = static_fields->zeroVector.fields.x;
  v14 = static_fields->zeroVector.fields.y;
  v16 = static_fields->zeroVector.fields.z;
  if ( !byte_4C20DA7 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&UnityEngine_Quaternion_TypeInfo);
    byte_4C20DA7 = 1;
  }
  if ( !spawner )
    goto LABEL_16;
  v21.fields.x = v15;
  v21.fields.y = v14;
  v21.fields.z = v16;
  v17 = Spawner__Spawn_40500736(
          spawner,
          selectCommandPrefab,
          v21,
          UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
          0);
  commandrootTransform = (UnityEngine_Component_o *)v10->fields.commandrootTransform;
  v19 = v17;
  GameObjectExtensions__SetParent(v17, commandrootTransform, 0);
  if ( !v19 )
    goto LABEL_16;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform(v19, 0);
  v20 = this;
  if ( !byte_4C20DA6 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA6 = 1;
  }
  if ( !v20
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v20,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0),
        (this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    v19,
                                                    (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleSelectCommandComponent___)) == 0)
    || (BattleSelectCommandComponent__setIndex((BattleSelectCommandComponent_o *)this, targetindex, 0), !bc)
    || (BattleCommandComponent__setSelectStamp(bc, v19, 0),
        (this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform(v19, 0)) == 0) )
  {
LABEL_16:
    sub_1C2D6EC(this, *(_QWORD *)&targetindex);
  }
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v22, 0);
  UnityEngine_GameObject__SetActive(v19, 0, 0);
  UnityEngine_GameObject__SetActive(v19, 1, 0);
}


void BattlePerformanceCommandCard__SetSpecialCommandCardBuff(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  BattlePerformanceCommandCard__updateCardFix(this, method);
  BattlePerformanceCommandCard__SetCommandCardTypeChangeBuff(this, v3);
}


void BattlePerformanceCommandCard__SetStatusObjArray(
        BattlePerformanceCommandCard_o *this,
        BattleServantParamComponent_array *statusObjArray,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.servantStatusObjArray = statusObjArray;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.servantStatusObjArray,
    (int32_t)statusObjArray,
    (int32_t)method,
    v3);
}


void BattlePerformanceCommandCard__SetupCommandCardCommonPrefabs(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattleDataDefine_c *v3; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v6; // x1
  AssetData_o *v7; // x20
  Il2CppObject *Object_object__51051712; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_4C29408 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&BattleDataDefine_TypeInfo);
    sub_1C2D490(&StringLiteral_17161/*"bit_1stbonus_q"*/);
    sub_1C2D490(&StringLiteral_17160/*"bit_1stbonus_b"*/);
    sub_1C2D490(&StringLiteral_17181/*"bit_com_grand_m"*/);
    sub_1C2D490(&StringLiteral_17182/*"bit_com_trinity_m"*/);
    sub_1C2D490(&StringLiteral_17159/*"bit_1stbonus_a"*/);
    byte_4C29408 = 1;
  }
  v3 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v3 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v3->static_fields->ASSET_BATTLE_COMMON;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0);
  if ( !AssetStorage )
    goto LABEL_12;
  v7 = AssetStorage;
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              AssetStorage,
                              (System_String_o *)StringLiteral_17181/*"bit_com_grand_m"*/,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  this->fields.cutin_grand_m = (struct UnityEngine_GameObject_o *)Object_object__51051712;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.cutin_grand_m, (int32_t)Object_object__51051712, v9, v10);
  v11 = AssetData__GetObject_object__51051712(
          v7,
          (System_String_o *)StringLiteral_17182/*"bit_com_trinity_m"*/,
          (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  this->fields.cutin_trinity_m = (struct UnityEngine_GameObject_o *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.cutin_trinity_m, (int32_t)v11, v12, v13);
  v14 = AssetData__GetObject_object__51051712(
          v7,
          (System_String_o *)StringLiteral_17161/*"bit_1stbonus_q"*/,
          (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  this->fields.firstbonus_q = (struct UnityEngine_GameObject_o *)v14;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.firstbonus_q, (int32_t)v14, v15, v16);
  v17 = AssetData__GetObject_object__51051712(
          v7,
          (System_String_o *)StringLiteral_17159/*"bit_1stbonus_a"*/,
          (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  this->fields.firstbonus_a = (struct UnityEngine_GameObject_o *)v17;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.firstbonus_a, (int32_t)v17, v18, v19);
  v20 = AssetData__GetObject_object__51051712(
          v7,
          (System_String_o *)StringLiteral_17160/*"bit_1stbonus_b"*/,
          (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  this->fields.firstbonus_b = (struct UnityEngine_GameObject_o *)v20;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.firstbonus_b, (int32_t)v20, v21, v22);
  AssetStorage = (AssetData_o *)this->fields.spawner;
  if ( !AssetStorage
    || (Spawner__Precache_40498768((Spawner_o *)AssetStorage, (UnityEngine_Object_o *)this->fields.firstbonus_q, 1, 0),
        (AssetStorage = (AssetData_o *)this->fields.spawner) == 0)
    || (Spawner__Precache_40498768((Spawner_o *)AssetStorage, (UnityEngine_Object_o *)this->fields.firstbonus_a, 1, 0),
        (AssetStorage = (AssetData_o *)this->fields.spawner) == 0) )
  {
LABEL_12:
    sub_1C2D6EC(AssetStorage, v6);
  }
  Spawner__Precache_40498768((Spawner_o *)AssetStorage, (UnityEngine_Object_o *)this->fields.firstbonus_b, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__StartCountupCommandStar(
        BattlePerformanceCommandCard_o *this,
        bool isZeroStart,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v4; // x19
  __int64 v6; // x22
  int max_length; // w9
  Il2CppClass **v8; // x8
  BattleCommandComponent_o *v9; // x21

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_12:
    sub_1C2D6EC(this, isZeroStart);
  v4 = this;
  v6 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1C2D6F4(this, isZeroStart, method);
    v8 = &commandCompArray->obj.klass + v6;
    v9 = (BattleCommandComponent_o *)v8[4];
    if ( v9 )
    {
      this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__IsMaxViewCritical(
                                                 (BattleCommandComponent_o *)v8[4],
                                                 0);
      if ( ((unsigned __int8)this & 1) == 0 && v9->fields.data )
      {
        if ( isZeroStart )
          BattleCommandComponent__startCountUp(v9, 0);
        else
          BattleCommandComponent__updateCount(v9, 0, 0);
      }
      commandCompArray = v4->fields.commandCompArray;
      ++v6;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_12;
  }
}


void BattlePerformanceCommandCard__Update(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  int32_t firstBonusAnimationWaitTime; // w8
  bool v4; // vf
  int32_t v5; // w8
  char v6; // w22
  UnityEngine_Animation_o *touches; // x0
  const MethodInfo *v8; // x1
  __int64 v9; // x2
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_Animation_o *v11; // x20
  unsigned __int64 v12; // x23
  void **p_monitor; // x21
  UnityEngine_Animation_c *v14; // x8
  UnityEngine_Animation_o *v15; // x20
  unsigned __int64 v16; // x22
  void **v17; // x21
  UnityEngine_Touch_o v18; // [xsp+0h] [xbp-E0h] BYREF
  UnityEngine_Touch_o dest; // [xsp+50h] [xbp-90h] BYREF

  memset(&dest, 0, sizeof(dest));
  memset(&v18, 0, sizeof(v18));
  firstBonusAnimationWaitTime = this->fields.firstBonusAnimationWaitTime;
  v4 = __OFSUB__(firstBonusAnimationWaitTime, 1);
  v5 = firstBonusAnimationWaitTime - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.firstBonusAnimationWaitTime = v5;
    v6 = !v5 && this->fields.drawcount == 1 && this->fields.isTouchCanceled;
    touches = (UnityEngine_Animation_o *)UnityEngine_Input__get_touches(0);
    if ( !touches )
      goto LABEL_29;
    klass = touches[1].klass;
    v11 = touches;
    if ( (int)klass >= 1 )
    {
      v12 = 0;
      p_monitor = &touches[1].monitor;
      while ( v12 < (unsigned int)klass )
      {
        memmove(&dest, p_monitor, 0x44u);
        touches = (UnityEngine_Animation_o *)UnityEngine_Touch__get_phase(&dest, 0);
        if ( !(_DWORD)touches && this->fields.isTouchCanceled )
          v6 |= this->fields.drawcount == 1;
        LODWORD(klass) = v11[1].klass;
        ++v12;
        p_monitor = (void **)((char *)p_monitor + 68);
        if ( (__int64)v12 >= (int)klass )
          goto LABEL_14;
      }
LABEL_28:
      sub_1C2D6F4(touches, v8, v9);
    }
LABEL_14:
    if ( (v6 & 1) != 0 )
    {
      touches = this->fields.firstBonusAnimation;
      if ( touches )
      {
        UnityEngine_Animation__Stop(touches, 0);
        touches = this->fields.firstBonusAnimation;
        if ( touches )
        {
          UnityEngine_Animation__Play(touches, 0);
          this->fields.isTouchCanceled = 0;
          goto LABEL_18;
        }
      }
LABEL_29:
      sub_1C2D6EC(touches, v8);
    }
  }
LABEL_18:
  touches = (UnityEngine_Animation_o *)UnityEngine_Input__get_touches(0);
  if ( !touches )
    goto LABEL_29;
  v14 = touches[1].klass;
  v15 = touches;
  if ( (int)v14 >= 1 )
  {
    v16 = 0;
    v17 = &touches[1].monitor;
    while ( v16 < (unsigned int)v14 )
    {
      memmove(&v18, v17, 0x44u);
      if ( !UnityEngine_Touch__get_phase(&v18, 0) )
      {
        *(_WORD *)&this->fields.isTouchBegan = 1;
        this->fields.isTouchCanceled = 0;
      }
      touches = (UnityEngine_Animation_o *)UnityEngine_Touch__get_phase(&v18, 0);
      if ( (_DWORD)touches == 3 )
        *(_WORD *)&this->fields.isTouchBegan = 256;
      LODWORD(v14) = v15[1].klass;
      ++v16;
      v17 = (void **)((char *)v17 + 68);
      if ( (__int64)v16 >= (int)v14 )
        goto LABEL_27;
    }
    goto LABEL_28;
  }
LABEL_27:
  BattlePerformanceCommandCard__UpdateSpecialCommandCardBuffIcon(this, v8);
}


void BattlePerformanceCommandCard__UpdateCommandCriticalCount(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v4; // x19
  __int64 v5; // x20
  int max_length; // w9

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_9:
    sub_1C2D6EC(this, method);
  v4 = this;
  v5 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C2D6F4(this, method, v2);
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[v5];
    if ( this )
    {
      if ( this->fields.commandAssistDetailWindow )
      {
        BattleCommandComponent__updateCount((BattleCommandComponent_o *)this, 0, 0);
        commandCompArray = v4->fields.commandCompArray;
      }
      ++v5;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_9;
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__UpdateRemainingCardBuff(
        BattlePerformanceCommandCard_o *this,
        int32_t nowCardIndex,
        const MethodInfo *method)
{
  __int64 v3; // x20
  struct BattleCommandComponent_array *selectedcomponents; // x0
  int max_length; // w8
  __int64 v7; // x23
  Il2CppObject *v8; // x21
  __int64 v9; // x2
  struct BattleCommandComponent_array *v10; // x8

  LODWORD(v3) = nowCardIndex;
  if ( (byte_4C29406 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_IndexValue_BattleCommandComponent___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C29406 = 1;
  }
  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
LABEL_16:
    sub_1C2D6EC(selectedcomponents, *(_QWORD *)&nowCardIndex);
  max_length = selectedcomponents->max_length;
  if ( max_length > (int)v3 )
  {
    v3 = (int)v3;
    v7 = max_length - 1LL;
    while ( 1 )
    {
      v8 = BasicHelper__IndexValue_object_(
             (System_Object_array *)selectedcomponents,
             v3,
             0,
             (const MethodInfo_30BCEF0 *)Method_BasicHelper_IndexValue_BattleCommandComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      selectedcomponents = (struct BattleCommandComponent_array *)UnityEngine_Object__op_Equality(
                                                                    (UnityEngine_Object_o *)v8,
                                                                    0,
                                                                    0);
      if ( ((unsigned __int8)selectedcomponents & 1) == 0 )
      {
        v10 = this->fields.selectedcomponents;
        if ( !v10 )
          goto LABEL_16;
        if ( (unsigned int)v3 >= LODWORD(v10->max_length) )
          sub_1C2D6F4(selectedcomponents, *(_QWORD *)&nowCardIndex, v9);
        selectedcomponents = (struct BattleCommandComponent_array *)v10->m_Items[v3];
        if ( !selectedcomponents )
          goto LABEL_16;
        BattleCommandComponent__setBuffIconList((BattleCommandComponent_o *)selectedcomponents, 1, 0);
      }
      if ( v7 == v3 )
        return;
      selectedcomponents = this->fields.selectedcomponents;
      ++v3;
    }
  }
}


void BattlePerformanceCommandCard__UpdateSpecialCommandCardBuffIcon(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattleCommandComponent_o *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  float deltaTime; // s0
  struct BattleCommandComponent_array *v8; // x8
  float v9; // s8
  __int64 v10; // x20
  int max_length; // w9

  commandCompArray = this->fields.commandCompArray;
  if ( commandCompArray && commandCompArray->max_length )
  {
    deltaTime = UnityEngine_Time__get_deltaTime(0);
    v8 = this->fields.commandCompArray;
    if ( !v8 )
LABEL_9:
      sub_1C2D6EC(v4, v5);
    v9 = deltaTime;
    v10 = 0;
    while ( 1 )
    {
      max_length = v8->max_length;
      if ( (int)v10 >= max_length )
        break;
      if ( (unsigned int)v10 >= max_length )
        sub_1C2D6F4(v4, v5, v6);
      v4 = v8->m_Items[v10];
      if ( v4 )
      {
        BattleCommandComponent__UpdateSpecialCardBuffIconAlpha(v4, v9, 0);
        v8 = this->fields.commandCompArray;
        ++v10;
        if ( v8 )
          continue;
      }
      goto LABEL_9;
    }
  }
}


void BattlePerformanceCommandCard___selectOK_b__112_0(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_4C2940D & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_11509/*"SELECT"*/);
    byte_4C2940D = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_11509/*"SELECT"*/, 0);
}


void BattlePerformanceCommandCard__back2Tactical(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformanceCommandCard_o *v3; // x19
  struct BattleCommandComponent_array *commandCompArray; // x21
  int max_length; // w8
  unsigned int v6; // w22
  Il2CppClass **v7; // x8
  BattleCommandComponent_o *v8; // x20
  int32_t MarkIndex; // w0
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2

  v3 = this;
  if ( (byte_4C293F7 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3490/*"CLOSE"*/);
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&StringLiteral_16778/*"anim_wait"*/);
    byte_4C293F7 = 1;
  }
  commandCompArray = v3->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_21;
  max_length = commandCompArray->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_1C2D6F4(this, method, v2);
      v7 = &commandCompArray->obj.klass + (int)v6;
      v8 = (BattleCommandComponent_o *)v7[4];
      if ( !v8 )
        break;
      MarkIndex = BattleCommandComponent__getMarkIndex((BattleCommandComponent_o *)v7[4], 0);
      if ( (MarkIndex & 0x80000000) == 0 && v8->fields.selectflg )
        BattlePerformanceCommandCard__unselectCommandCard(v3, v8, MarkIndex, v10);
      if ( BattleCommandComponent__isTreasureDvc(v8, 0) )
      {
        BattleCommandComponent__stopAnimation(v8, 0);
        BattleCommandComponent__ReleaseNobleGaugeEffect(v8, 0);
        this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0);
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      }
      this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkCriticalPointValid(v8, 0);
      if ( ((unsigned __int8)this & 1) != 0 && !v3->fields.isPrevStar )
        v3->fields.isPrevStar = 1;
      max_length = commandCompArray->max_length;
      if ( (int)++v6 >= max_length )
        goto LABEL_18;
    }
LABEL_21:
    sub_1C2D6EC(this, method);
  }
LABEL_18:
  UnityEngine_MonoBehaviour__StopCoroutine_71149896((UnityEngine_MonoBehaviour_o *)v3, v3->fields.openNpCoroutine, 0);
  BattlePerformanceCommandCard__cancelFirstBonus(v3, v11);
  this = (BattlePerformanceCommandCard_o *)v3->fields.perf;
  if ( !this )
    goto LABEL_21;
  BattlePerformance__backTacticalMode((BattlePerformance_o *)this, 0);
  BattlePerformanceCommandCard__playAnimation(v3, (System_String_o *)StringLiteral_16778/*"anim_wait"*/, v12);
  this = (BattlePerformanceCommandCard_o *)v3->fields.commandfsm;
  if ( !this )
    goto LABEL_21;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3490/*"CLOSE"*/, 0);
}


void BattlePerformanceCommandCard__callbackCommandTutorial01(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  UnityEngine_Vector2_array *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  unsigned int max_length; // w8
  UnityEngine_Vector2_array *v7; // x20
  UnityEngine_Rect_o v8; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4C293FF & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&UnityEngine_Vector2___TypeInfo);
    sub_1C2D490(&StringLiteral_5447/*"END_PROC"*/);
    byte_4C293FF = 1;
  }
  Instance = (UnityEngine_Vector2_array *)sub_1C2D538(UnityEngine_Vector2___TypeInfo, 3);
  if ( !Instance )
    goto LABEL_11;
  max_length = Instance->max_length;
  v7 = Instance;
  if ( !max_length
    || (Instance->m_Items[0] = 0, max_length == 1)
    || (Instance->m_Items[1] = (UnityEngine_Vector2_o)3276275712LL, max_length <= 2) )
  {
    sub_1C2D6F4(Instance, v4, v5);
  }
  Instance->m_Items[2] = (UnityEngine_Vector2_o)3284664320LL;
  Instance = (UnityEngine_Vector2_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (v8.fields.m_XMin = -500.0,
        v8.fields.m_YMin = -230.0,
        v8.fields.m_Width = 600.0,
        v8.fields.m_Height = 250.0,
        CommonUI__OpenTutorialArrowMark_31194308((CommonUI_o *)Instance, v7, 0.0, v8, 0, 0),
        (Instance = (UnityEngine_Vector2_array *)this->fields.commandfsm) == 0) )
  {
LABEL_11:
    sub_1C2D6EC(Instance, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5447/*"END_PROC"*/, 0);
}


void BattlePerformanceCommandCard__callbackTutorial50(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_4C29400 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5447/*"END_PROC"*/);
    byte_4C29400 = 1;
  }
  commandfsm = this->fields.commandfsm;
  this->fields.isTouchNgInTutorial = 0;
  if ( !commandfsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_5447/*"END_PROC"*/, 0);
}


void BattlePerformanceCommandCard__callbackTutorialSpeedNext(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  const MethodInfo *v4; // x2
  BattlePerformanceCommandCard_o *v5; // x0
  UnityEngine_Rect_array *TutorialSquare01; // x1
  UnityEngine_Vector2_array *v7; // x19
  const MethodInfo *v8; // x2
  UnityEngine_Rect_array *v9; // x0
  __int64 v10; // x1
  UnityEngine_Vector2_o v11; // 0:s1.4,4:s2.4

  if ( (byte_4C29402 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C29402 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                           (BattlePerformanceCommandCard_o *)Instance,
                                           this->fields.TutorialArrow01,
                                           v4);
  TutorialSquare01 = this->fields.TutorialSquare01;
  v7 = (UnityEngine_Vector2_array *)v5;
  v9 = BattlePerformanceCommandCard__FSTutorialSquareCard(v5, TutorialSquare01, v8);
  if ( !Instance )
    sub_1C2D6EC(v9, v10);
  v11.fields.x = 0.0;
  v11.fields.y = 0.0;
  CommonUI__OpenTutorialNotificationDialogArrow_31192652(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v7,
    v9,
    0.0,
    v11,
    -1,
    0,
    0);
}


void BattlePerformanceCommandCard__cancelFirstBonus(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *firstBonusObject; // x20
  Spawner_o *spawner; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v8; // x21
  int max_length; // w9
  Il2CppClass **v10; // x8
  BattleCommandComponent_o *v11; // x20

  if ( (byte_4C293CB & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C293CB = 1;
  }
  this->fields.firstAuraType = -1;
  firstBonusObject = (UnityEngine_Object_o *)this->fields.firstBonusObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  spawner = (Spawner_o *)UnityEngine_Object__op_Inequality(firstBonusObject, 0, 0);
  if ( ((unsigned __int8)spawner & 1) != 0 )
  {
    spawner = this->fields.spawner;
    if ( !spawner )
      goto LABEL_14;
    Spawner__Despawn(spawner, this->fields.firstBonusObject, 1, 0);
  }
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_14:
    sub_1C2D6EC(spawner, v5);
  v8 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
      sub_1C2D6F4(spawner, v5, v6);
    v10 = &commandCompArray->obj.klass + v8;
    v11 = (BattleCommandComponent_o *)v10[4];
    if ( v11 )
    {
      BattleCommandComponent__stopFirstAura((BattleCommandComponent_o *)v10[4], 0);
      BattleCommandComponent__ResetBoostedCriticalRate(v11, 0);
      commandCompArray = this->fields.commandCompArray;
      ++v8;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_14;
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__changeDirectCommandCardTouch(
        BattlePerformanceCommandCard_o *this,
        bool enable,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v4; // x19
  struct BattleCommandComponent_array *commandCompArray; // x8
  bool v6; // w22
  __int64 v7; // x24
  bool v8; // w20
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v10; // x25
  UnityEngine_Object_o *v11; // x21
  struct BattleCommandComponent_array *v12; // x8
  UnityEngine_Object_o *v13; // x21

  v4 = this;
  if ( (byte_4C29404 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C29404 = 1;
  }
  commandCompArray = v4->fields.commandCompArray;
  if ( commandCompArray )
  {
    v6 = enable;
    v7 = 4;
    v8 = enable;
    while ( 1 )
    {
      max_length_low = LODWORD(commandCompArray->max_length);
      v10 = v7 - 4;
      if ( v7 - 4 >= (int)max_length_low )
        break;
      if ( v10 >= max_length_low )
        goto LABEL_21;
      v11 = (UnityEngine_Object_o *)*((_QWORD *)&commandCompArray->obj.klass + v7);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v11, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v12 = v4->fields.commandCompArray;
        if ( !v12 )
          goto LABEL_18;
        if ( v10 >= LODWORD(v12->max_length) )
LABEL_21:
          sub_1C2D6F4(this, enable, method);
        v13 = (UnityEngine_Object_o *)*((_QWORD *)&v12->obj.klass + v7);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v13, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v13 )
            goto LABEL_18;
          BattleCommandComponent__setTouchFlg((BattleCommandComponent_o *)v13, v8, 0);
        }
      }
      commandCompArray = v4->fields.commandCompArray;
      ++v7;
      if ( !commandCompArray )
LABEL_18:
        sub_1C2D6EC(this, enable);
    }
    v4->fields.directCommandCardTouchEnable = v6;
  }
}


void BattlePerformanceCommandCard__changeNoSelectCards(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Coroutine_o *openNpCoroutine; // x1
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v6; // x21
  unsigned int max_length; // w9
  unsigned int v8; // w22
  BattleCommandComponent_o *v9; // x20
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  UnityEngine_Color_o v11; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  openNpCoroutine = this->fields.openNpCoroutine;
  if ( openNpCoroutine )
    UnityEngine_MonoBehaviour__StopCoroutine_71149896((UnityEngine_MonoBehaviour_o *)this, openNpCoroutine, 0);
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_13:
    sub_1C2D6EC(this, openNpCoroutine);
  v6 = 4;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    v8 = v6 - 4;
    if ( (int)v6 - 4 >= (int)(max_length - 1) )
      break;
    if ( v8 >= max_length )
      goto LABEL_15;
    v9 = (BattleCommandComponent_o *)*((_QWORD *)&commandCompArray->obj.klass + v6);
    if ( v9 )
    {
      BattleCommandComponent__stopAnimation(*((BattleCommandComponent_o **)&commandCompArray->obj.klass + v6), 0);
      if ( !v9->fields.selectflg )
      {
        p_commandlist = this->fields.p_commandlist;
        if ( !p_commandlist )
          goto LABEL_13;
        if ( v8 >= LODWORD(p_commandlist->max_length) )
LABEL_15:
          sub_1C2D6F4(this, openNpCoroutine, v2);
        v11.fields.r = 0.0;
        v11.fields.g = 0.0;
        v11.fields.b = 0.0;
        v11.fields.a = 0.0;
        TweenColor__Begin(*((UnityEngine_GameObject_o **)&p_commandlist->obj.klass + v6), 0.2, v11, 0);
        BattleCommandComponent__stopFirstAura(v9, 0);
        BattleCommandComponent__HideAndCancelCountUpFinishEffect(v9, 0);
        BattleCommandComponent__ClearCardEffect(v9, 0);
      }
      commandCompArray = this->fields.commandCompArray;
      ++v6;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_13;
  }
}


void BattlePerformanceCommandCard__checkAutoBattle(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_4C293F4 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9260/*"NG"*/);
    byte_4C293F4 = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_9260/*"NG"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__checkChainBonus(
        BattlePerformanceCommandCard_o *this,
        int32_t targetIndex,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v3; // x19
  char v4; // w22
  int v5; // w24
  __int64 i; // x23
  _QWORD *monitor; // x8
  UnityEngine_Object_o *v8; // x20
  _QWORD *v9; // x8
  UnityEngine_Object_o *m_CachedPtr; // x21
  UnityEngine_GameObject_o *v11; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  CGThumbnailListItem_o *p_fields; // x0

  v3 = (UnityEngine_Component_o *)this;
  if ( (byte_4C293CD & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C293CD = 1;
  }
  v4 = 0;
  v5 = 0;
  for ( i = 4; i != 7; ++i )
  {
    monitor = v3[18].monitor;
    if ( !monitor )
      goto LABEL_26;
    if ( i - 4 >= (unsigned __int64)*((unsigned int *)monitor + 6) )
      goto LABEL_27;
    v8 = (UnityEngine_Object_o *)monitor[i];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v8, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_15;
    v9 = v3[18].monitor;
    if ( !v9 )
      goto LABEL_26;
    if ( i - 4 >= (unsigned __int64)*((unsigned int *)v9 + 6) )
LABEL_27:
      sub_1C2D6F4(this, *(_QWORD *)&targetIndex, method);
    this = (BattlePerformanceCommandCard_o *)v9[i];
    if ( !this )
      goto LABEL_26;
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__isTreasureDvc((BattleCommandComponent_o *)this, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( ++v5 > 1 )
        v4 = 1;
    }
    else
    {
LABEL_15:
      v5 = 0;
    }
  }
  m_CachedPtr = (UnityEngine_Object_o *)v3[24].fields.m_CachedPtr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( (v4 & 1) == 0 )
  {
    UnityEngine_Object__Destroy_71163704(m_CachedPtr, 0);
    p_fields = (CGThumbnailListItem_o *)&v3[24].fields;
    v16 = 0;
    v3[24].fields.m_CachedPtr = 0;
LABEL_24:
    sub_1C2D434(p_fields, v16, v14, v15);
    return;
  }
  if ( UnityEngine_Object__op_Equality(m_CachedPtr, 0, 0) )
  {
    v11 = (UnityEngine_GameObject_o *)v3[7].fields.m_CachedPtr;
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject(v3, 0);
    if ( !this )
LABEL_26:
      sub_1C2D6EC(this, *(_QWORD *)&targetIndex);
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)v3, v11, transform, 0, 0);
    v16 = (int)Object;
    v3[24].fields.m_CachedPtr = (intptr_t)Object;
    p_fields = (CGThumbnailListItem_o *)&v3[24].fields;
    goto LABEL_24;
  }
}


void BattlePerformanceCommandCard__checkDrawCount(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_4C293CF & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_11520/*"SELECT_EXE"*/);
    byte_4C293CF = 1;
  }
  if ( this->fields.maxdrawcount <= this->fields.drawcount )
  {
    commandfsm = this->fields.commandfsm;
    if ( !commandfsm )
      sub_1C2D6EC(0, method);
    PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_11520/*"SELECT_EXE"*/, 0);
  }
}


void BattlePerformanceCommandCard__checkMaskEnemy(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformanceCommandCard_o *v3; // x19
  unsigned __int64 v4; // x22
  struct BattleCommandComponent_array *selectedcomponents; // x8
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Object_o *maskSprite; // x20
  int32_t v8; // w1
  UnityEngine_Object_o *v9; // x20

  v3 = this;
  if ( (byte_4C293CE & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C293CE = 1;
  }
  v4 = 0;
  while ( 1 )
  {
    selectedcomponents = v3->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_23;
    if ( v4 >= LODWORD(selectedcomponents->max_length) )
      sub_1C2D6F4(this, method, v2);
    v6 = (UnityEngine_Object_o *)selectedcomponents->m_Items[v4];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v6, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( ++v4 == 3 )
    {
      maskSprite = (UnityEngine_Object_o *)v3->fields.maskSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(maskSprite, 0, 0) )
      {
        this = (BattlePerformanceCommandCard_o *)v3->fields.maskSprite;
        if ( this )
        {
          v8 = -31;
          goto LABEL_20;
        }
LABEL_23:
        sub_1C2D6EC(this, method);
      }
      return;
    }
  }
  v9 = (UnityEngine_Object_o *)v3->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v9, 0, 0) )
  {
    this = (BattlePerformanceCommandCard_o *)v3->fields.maskSprite;
    if ( !this )
      goto LABEL_23;
    v8 = 0;
LABEL_20:
    UIWidget__set_depth((UIWidget_o *)this, v8, 0);
  }
}


bool BattlePerformanceCommandCard__checkPrevStars(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  return this->fields.isPrevStar;
}


bool BattlePerformanceCommandCard__checkSpeedButtonTutorial(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattleData_o *Bdata; // x0
  struct BattleData_o *v4; // x8
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21

  if ( (byte_4C29401 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattlePerformanceCommandCard_callbackTutorialSpeedNext__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C29401 = 1;
  }
  Bdata = this->fields.Bdata;
  if ( !Bdata )
    goto LABEL_19;
  if ( !BattleData__isTutorial(Bdata, 0) )
    return 0;
  Bdata = (BattleData_o *)this->fields.logic;
  if ( !Bdata )
    goto LABEL_19;
  if ( BattleLogic__getTutorialId((BattleLogic_o *)Bdata, 0) != 2 )
    goto LABEL_13;
  Bdata = (BattleData_o *)this->fields.logic;
  if ( !Bdata )
    goto LABEL_19;
  Bdata = (BattleData_o *)BattleLogic__getTurn((BattleLogic_o *)Bdata, 0);
  if ( (_DWORD)Bdata != 2 )
    goto LABEL_13;
  v4 = this->fields.Bdata;
  if ( !v4 )
    goto LABEL_19;
  if ( v4->fields.tutorialState != 10 )
    return 1;
  v4->fields.tutorialState = 20;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_BattlePerformanceCommandCard_callbackTutorialSpeedNext__, 0);
  if ( !Instance )
LABEL_19:
    sub_1C2D6EC(Bdata, method);
  CommonUI__CloseTutorialNotificationDialogArrow_31193232((CommonUI_o *)Instance, v6, 0);
LABEL_13:
  Bdata = (BattleData_o *)this->fields.logic;
  if ( !Bdata )
    goto LABEL_19;
  if ( BattleLogic__getTutorialId((BattleLogic_o *)Bdata, 0) != 2 )
    return 0;
  Bdata = (BattleData_o *)this->fields.logic;
  if ( !Bdata )
    goto LABEL_19;
  return BattleLogic__getTurn((BattleLogic_o *)Bdata, 0) > 2;
}


void BattlePerformanceCommandCard__checkTutorial(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  BattleLogic_o *logic; // x0
  int v4; // w20
  int v5; // w21
  int32_t Turn; // w0
  const MethodInfo *v7; // x2
  Il2CppObject *Instance; // x20
  BattlePerformanceCommandCard_o *v9; // x21
  const MethodInfo *v10; // x2
  BattlePerformanceCommandCard_o *v11; // x22
  const MethodInfo *v12; // x2
  __int64 v13; // x2
  struct BattleLogic_TutorialStringData_array *TSD; // x8
  BattleLogic_TutorialStringData_o *v15; // x8
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  struct BattleLogic_TutorialStringData_array *v18; // x8
  const MethodInfo *v19; // x2
  struct BattlePerformance_o *perf; // x8
  Il2CppObject *v21; // x20
  System_String_o *v22; // x21
  const MethodInfo *v23; // x1
  UnityEngine_Vector2_o FSTutorialArrow22; // kr00_8
  const MethodInfo *v25; // x1
  struct BattleLogic_TutorialStringData_array *v26; // x8
  BattleLogic_TutorialStringData_o *v27; // x8
  float m_Width; // s16
  float m_Height; // s7
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x1
  struct BattleLogic_TutorialStringData_array *v32; // x8
  const MethodInfo *v33; // x2
  struct BattlePerformance_o *v34; // x8
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x2
  struct BattleLogic_TutorialStringData_array *v37; // x8
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x2
  struct BattleLogic_TutorialStringData_array *v40; // x8
  Il2CppObject *v41; // x20
  System_String_o *v42; // x21
  System_Action_o *v43; // x22
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x2
  struct BattleLogic_TutorialStringData_array *v46; // x8
  UnityEngine_Rect_o FSTutorialSquare22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v48; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4C293FE & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattlePerformanceCommandCard_callbackTutorial50__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_13565/*"TUTORIAL_MESSAGE_BATTLE_131"*/);
    sub_1C2D490(&StringLiteral_13561/*"TUTORIAL_MESSAGE_BATTLE_111"*/);
    sub_1C2D490(&StringLiteral_13569/*"TUTORIAL_MESSAGE_BATTLE_153"*/);
    sub_1C2D490(&StringLiteral_13567/*"TUTORIAL_MESSAGE_BATTLE_141"*/);
    sub_1C2D490(&StringLiteral_5447/*"END_PROC"*/);
    sub_1C2D490(&StringLiteral_13574/*"TUTORIAL_MESSAGE_BATTLE_230"*/);
    sub_1C2D490(&StringLiteral_13563/*"TUTORIAL_MESSAGE_BATTLE_122"*/);
    sub_1C2D490(&StringLiteral_13576/*"TUTORIAL_MESSAGE_BATTLE_321"*/);
    sub_1C2D490(&StringLiteral_13573/*"TUTORIAL_MESSAGE_BATTLE_223"*/);
    byte_4C293FE = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_72;
  logic = (BattleLogic_o *)BattleLogic__getTutorialId(logic, 0);
  if ( !this->fields.logic )
    goto LABEL_72;
  v4 = (int)logic;
  logic = (BattleLogic_o *)BattleLogic__getWave(this->fields.logic, 0);
  if ( !this->fields.logic )
    goto LABEL_72;
  v5 = (int)logic;
  Turn = BattleLogic__getTurn(this->fields.logic, 0);
  if ( v4 != 3 )
  {
    if ( v4 != 2 )
    {
      if ( v4 == 1 )
      {
        switch ( Turn )
        {
          case 1:
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v9 = (BattlePerformanceCommandCard_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13561/*"TUTORIAL_MESSAGE_BATTLE_111"*/, 0);
            v11 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                                      v9,
                                                      this->fields.TutorialArrow01,
                                                      v10);
            logic = (BattleLogic_o *)BattlePerformanceCommandCard__FSTutorialSquareCard(
                                       v11,
                                       this->fields.TutorialSquare01,
                                       v12);
            TSD = this->fields.TSD;
            if ( !TSD )
              goto LABEL_72;
            if ( !LODWORD(TSD->max_length) )
              goto LABEL_73;
            v15 = TSD->m_Items[0];
            if ( !v15 )
              goto LABEL_72;
            goto LABEL_68;
          case 2:
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v9 = (BattlePerformanceCommandCard_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13563/*"TUTORIAL_MESSAGE_BATTLE_122"*/, 0);
            v11 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                                      v9,
                                                      this->fields.TutorialArrow01,
                                                      v35);
            logic = (BattleLogic_o *)BattlePerformanceCommandCard__FSTutorialSquareCard(
                                       v11,
                                       this->fields.TutorialSquare01,
                                       v36);
            v37 = this->fields.TSD;
            if ( !v37 )
              goto LABEL_72;
            if ( LODWORD(v37->max_length) <= 1 )
              goto LABEL_73;
            v15 = v37->m_Items[1];
            if ( !v15 )
              goto LABEL_72;
            goto LABEL_68;
          case 3:
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v9 = (BattlePerformanceCommandCard_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13565/*"TUTORIAL_MESSAGE_BATTLE_131"*/, 0);
            v11 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                                      v9,
                                                      this->fields.TutorialArrow01,
                                                      v38);
            logic = (BattleLogic_o *)BattlePerformanceCommandCard__FSTutorialSquareCard(
                                       v11,
                                       this->fields.TutorialSquare01,
                                       v39);
            v40 = this->fields.TSD;
            if ( !v40 )
              goto LABEL_72;
            if ( LODWORD(v40->max_length) <= 2 )
              goto LABEL_73;
            v15 = v40->m_Items[2];
            if ( !v15 )
              goto LABEL_72;
            goto LABEL_68;
          case 4:
            v41 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v42 = LocalizationManager__Get((System_String_o *)StringLiteral_13567/*"TUTORIAL_MESSAGE_BATTLE_141"*/, 0);
            v43 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
            System_Action___ctor(v43, (Il2CppObject *)this, Method_BattlePerformanceCommandCard_callbackTutorial50__, 0);
            if ( !v41 )
              goto LABEL_72;
            CommonUI__OpenTutorialNotificationDialog((CommonUI_o *)v41, v42, -1, v43, 0);
            goto LABEL_70;
          case 5:
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v9 = (BattlePerformanceCommandCard_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13569/*"TUTORIAL_MESSAGE_BATTLE_153"*/, 0);
            v11 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                                      v9,
                                                      this->fields.TutorialArrow05,
                                                      v44);
            logic = (BattleLogic_o *)BattlePerformanceCommandCard__FSTutorialSquareCard(
                                       v11,
                                       this->fields.TutorialSquare05,
                                       v45);
            v46 = this->fields.TSD;
            if ( !v46 )
              goto LABEL_72;
            if ( LODWORD(v46->max_length) <= 3 )
              goto LABEL_73;
            v15 = v46->m_Items[3];
            if ( v15 )
              goto LABEL_68;
            goto LABEL_72;
          default:
            goto LABEL_70;
        }
      }
      goto LABEL_70;
    }
    if ( Turn == 2 )
    {
      BattlePerformanceCommandCard__SetCommandPhaseButtonActive(this, 1, v7);
      perf = this->fields.perf;
      if ( !perf || !perf->fields.data )
        goto LABEL_72;
      BattlePerformanceCommandCard__updateHighSpeedObject(this, (int32_t)method, v19);
      v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_13573/*"TUTORIAL_MESSAGE_BATTLE_223"*/, 0);
      FSTutorialArrow22 = BattlePerformanceCommandCard__get_FSTutorialArrow22(this, v23);
      FSTutorialSquare22 = BattlePerformanceCommandCard__get_FSTutorialSquare22(this, v25);
      v26 = this->fields.TSD;
      if ( !v26 )
        goto LABEL_72;
      if ( LODWORD(v26->max_length) > 4 )
      {
        v27 = v26->m_Items[4];
        if ( v27 && v21 )
        {
          m_Width = FSTutorialSquare22.fields.m_Width;
          m_Height = FSTutorialSquare22.fields.m_Height;
          v48.fields.m_XMin = FSTutorialSquare22.fields.m_XMin;
          v48.fields.m_YMin = FSTutorialSquare22.fields.m_YMin;
          v48.fields.m_Width = m_Width;
          v48.fields.m_Height = m_Height;
          CommonUI__OpenTutorialNotificationDialogArrow(
            (CommonUI_o *)v21,
            v22,
            FSTutorialArrow22,
            v48,
            v27->fields.way,
            v27->fields.pos,
            v27->fields.size,
            0,
            0);
          goto LABEL_70;
        }
LABEL_72:
        sub_1C2D6EC(logic, method);
      }
LABEL_73:
      sub_1C2D6F4(logic, method, v13);
    }
    if ( Turn >= 3 )
    {
      BattlePerformanceCommandCard__SetCommandPhaseButtonActive(this, 1, v7);
      v34 = this->fields.perf;
      if ( !v34 || !v34->fields.data )
        goto LABEL_72;
      BattlePerformanceCommandCard__updateHighSpeedObject(this, (int32_t)method, v33);
    }
LABEL_46:
    BattlePerformanceCommandCard__callbackCommandTutorial01(this, method);
    goto LABEL_70;
  }
  if ( v5 || Turn != 1 )
  {
    if ( v5 != 1 || Turn != 1 )
      goto LABEL_46;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = (BattlePerformanceCommandCard_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13576/*"TUTORIAL_MESSAGE_BATTLE_321"*/, 0);
    v11 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                              v9,
                                              this->fields.TutorialArrow31,
                                              v30);
    logic = (BattleLogic_o *)BattlePerformanceCommandCard__get_FSTutorialSquare32(this, v31);
    v32 = this->fields.TSD;
    if ( !v32 )
      goto LABEL_72;
    if ( LODWORD(v32->max_length) <= 6 )
      goto LABEL_73;
    v15 = v32->m_Items[6];
    if ( !v15 )
      goto LABEL_72;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = (BattlePerformanceCommandCard_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13574/*"TUTORIAL_MESSAGE_BATTLE_230"*/, 0);
    v11 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                              v9,
                                              this->fields.TutorialArrow31,
                                              v16);
    logic = (BattleLogic_o *)BattlePerformanceCommandCard__FSTutorialSquareCard(v11, this->fields.TutorialSquare01, v17);
    v18 = this->fields.TSD;
    if ( !v18 )
      goto LABEL_72;
    if ( LODWORD(v18->max_length) <= 5 )
      goto LABEL_73;
    v15 = v18->m_Items[5];
    if ( !v15 )
      goto LABEL_72;
  }
LABEL_68:
  if ( !Instance )
    goto LABEL_72;
  CommonUI__OpenTutorialNotificationDialogArrow_31192652(
    (CommonUI_o *)Instance,
    (System_String_o *)v9,
    (UnityEngine_Vector2_array *)v11,
    (UnityEngine_Rect_array *)logic,
    v15->fields.way,
    v15->fields.pos,
    v15->fields.size,
    0,
    0);
LABEL_70:
  logic = (BattleLogic_o *)this->fields.commandfsm;
  if ( !logic )
    goto LABEL_72;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)logic, (System_String_o *)StringLiteral_5447/*"END_PROC"*/, 0);
}


void BattlePerformanceCommandCard__clickBackButton(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  struct BattlePerformance_o *perf; // x8

  v2 = this;
  if ( (byte_4C293F6 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&StringLiteral_3519/*"CLOSE_WINDOW"*/);
    byte_4C293F6 = 1;
  }
  perf = v2->fields.perf;
  if ( !perf )
    goto LABEL_8;
  this = (BattlePerformanceCommandCard_o *)perf->fields.data;
  if ( !this )
    goto LABEL_8;
  if ( BattleData__isTutorialCard((BattleData_o *)this, 0) )
    return;
  this = (BattlePerformanceCommandCard_o *)v2->fields.commandfsm;
  if ( !this )
LABEL_8:
    sub_1C2D6EC(this, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3519/*"CLOSE_WINDOW"*/, 0);
}


void BattlePerformanceCommandCard__closeWindow(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  ;
}


System_Collections_IEnumerator_o *BattlePerformanceCommandCard__coStartFirstBonus(
        BattlePerformanceCommandCard_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C293C6 & 1) == 0 )
  {
    sub_1C2D490(&BattlePerformanceCommandCard__coStartFirstBonus_d__119_TypeInfo);
    byte_4C293C6 = 1;
  }
  v5 = sub_1C2D6DC(BattlePerformanceCommandCard__coStartFirstBonus_d__119_TypeInfo);
  BattlePerformanceCommandCard__coStartFirstBonus_d__119___ctor(
    (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v5 + 40) = type;
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *BattlePerformanceCommandCard__colOpenNpCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C293E9 & 1) == 0 )
  {
    sub_1C2D490(&BattlePerformanceCommandCard__colOpenNpCard_d__180_TypeInfo);
    byte_4C293E9 = 1;
  }
  v3 = sub_1C2D6DC(BattlePerformanceCommandCard__colOpenNpCard_d__180_TypeInfo);
  BattlePerformanceCommandCard__colOpenNpCard_d__180___ctor(
    (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)v3,
    0,
    0);
  if ( !v3 )
    sub_1C2D6EC(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


void BattlePerformanceCommandCard__comboExecute(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  BattleLogic_o *logic; // x0
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformance_o *v5; // x8
  struct BattleData_o *data; // x8
  const MethodInfo *v7; // x2
  UnityEngine_Object_o *firstBonusObject; // x20
  __int64 v9; // x2
  __int64 v10; // x22
  struct System_Int32_array *selectcommand; // x9
  struct BattleCommandData_array *commandlist; // x8
  __int64 v13; // x9
  struct BattlePerformance_o *v14; // x10
  BattleCommandData_o *v15; // x20
  BattleServantData_o *ServantData; // x21
  System_Collections_Generic_List_object__o *v17; // x20
  const MethodInfo *v18; // x3
  struct System_Int32_array *v19; // x9
  struct BattleCommandData_array *v20; // x8
  __int64 v21; // x9
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  const MethodInfo *v26; // x3
  struct System_Int32_array *v27; // x8
  struct BattleCommandData_array *v28; // x9
  __int64 v29; // x8
  struct System_Object_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  Il2CppClass **v33; // x0
  const MethodInfo *v34; // x3
  struct System_Int32_array *v35; // x8
  struct BattleCommandData_array *v36; // x9
  __int64 v37; // x8
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0
  BattleData_o *Bdata; // x21
  struct BattlePerformance_o *v43; // x8
  struct BattleData_o *v44; // x9
  struct BattleActionLogManagerInterface_o *actionLogManager; // x21
  BattleActionLogManagerInterface_c *klass; // x8
  unsigned int globaltargetId; // w22
  __int64 v48; // x9
  BattleActionLogManagerInterface_c **p_offset; // x10
  __int64 v50; // x0
  struct BattlePerformance_o *v51; // x8
  struct BattleData_o *v52; // x8
  struct System_Int32_array *v53; // x9
  struct BattleActionLogManagerInterface_o *v54; // x21
  BattleActionLogManagerInterface_c *v55; // x8
  unsigned int v56; // w23
  unsigned int v57; // w24
  unsigned int v58; // w22
  __int64 v59; // x9
  BattleActionLogManagerInterface_c **v60; // x10
  __int64 v61; // x0
  struct BattleData_o *v62; // x8
  struct System_Int32_array *v63; // x8
  struct BattleCommandData_array *v64; // x9
  __int64 v65; // x8
  BattleCommandData_o *v66; // x22
  BattleCommandData_o *v67; // x21
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  struct BattleData_o *v70; // x8
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  Il2CppClass **v74; // x0
  BattleData_o *v75; // x22
  struct BattlePerformance_o *v76; // x8
  unsigned __int64 i; // x20
  struct BattleCommandComponent_array *selectedcomponents; // x8
  const MethodInfo *v79; // x3
  struct BattlePerformance_o *v80; // x8
  struct BattleData_o *v81; // x8
  struct BattlePerformance_o *v82; // x8
  struct BattlePerformance_o *v83; // x8
  _QWORD *v84; // x0
  System_Reflection_MethodBase_o *v85; // x0

  if ( (byte_4C293D0 & 1) == 0 )
  {
    sub_1C2D490(&BattleActionLogManagerInterface_TypeInfo);
    sub_1C2D490(&BattleCommandData_TypeInfo);
    sub_1C2D490(&Method_BattlePerformanceCommandCard_comboExecute__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleCommandData__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleCommandData__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleCommandData___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleCommandData__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C293D0 = 1;
  }
  if ( this->fields.maxdrawcount > this->fields.drawcount )
    return;
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_114;
  BattleLogic__SetTimeAccelerationCheckDelayReset(logic, 0, 0);
  logic = (BattleLogic_o *)this->fields.perf;
  if ( !logic )
    goto LABEL_114;
  BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)logic, 0);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_114;
  logic = (BattleLogic_o *)perf->fields.statusPerf;
  if ( !logic )
    goto LABEL_114;
  BattlePerformanceStatus__SetActiveTotalCriticalStar((BattlePerformanceStatus_o *)logic, 0, 0);
  v5 = this->fields.perf;
  if ( !v5 )
    goto LABEL_114;
  data = v5->fields.data;
  if ( !data )
    goto LABEL_114;
  data->fields.isCalcCritical = 1;
  logic = (BattleLogic_o *)this->fields.backTacticalButton;
  if ( !logic )
    goto LABEL_114;
  logic = (BattleLogic_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)logic, 0);
  if ( !logic )
    goto LABEL_114;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)logic, 0, 0);
  BattlePerformanceCommandCard__SetBackTacticalButton(this, 0, v7);
  logic = (BattleLogic_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !logic )
    goto LABEL_114;
  CommonUI__CloseTutorialNotificationDialogArrow((CommonUI_o *)logic, 0);
  firstBonusObject = (UnityEngine_Object_o *)this->fields.firstBonusObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  logic = (BattleLogic_o *)UnityEngine_Object__op_Inequality(firstBonusObject, 0, 0);
  if ( ((unsigned __int8)logic & 1) != 0 )
  {
    logic = (BattleLogic_o *)this->fields.spawner;
    if ( !logic )
      goto LABEL_114;
    Spawner__Despawn((Spawner_o *)logic, this->fields.firstBonusObject, 1, 0);
  }
  if ( this->fields.maxdrawcount >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      selectcommand = this->fields.selectcommand;
      if ( !selectcommand )
        break;
      if ( (unsigned int)v10 >= LODWORD(selectcommand->max_length) )
        goto LABEL_115;
      commandlist = this->fields.commandlist;
      if ( !commandlist )
        break;
      v13 = selectcommand->m_Items[v10];
      if ( (unsigned int)v13 >= LODWORD(commandlist->max_length) )
        goto LABEL_115;
      v14 = this->fields.perf;
      if ( !v14 )
        break;
      v15 = commandlist->m_Items[v13];
      if ( !v15 )
        break;
      logic = (BattleLogic_o *)v14->fields.data;
      if ( !logic )
        break;
      ServantData = BattleData__getServantData((BattleData_o *)logic, v15->fields.uniqueId, 0);
      logic = (BattleLogic_o *)BattleCommandData__isTreasureDvc(v15, 0);
      if ( ((unsigned __int8)logic & 1) != 0 )
      {
        if ( ServantData )
          BattleServantData__SetSelectedTreasureDevice(ServantData, 0);
      }
      else
      {
        BattleCommandData__SetSelectedType(v15, 0);
        if ( ServantData )
          BattleServantData__SetOverwriteSvtCardType(ServantData, v15, 0);
      }
      if ( (int)++v10 >= this->fields.maxdrawcount )
        goto LABEL_33;
    }
LABEL_114:
    sub_1C2D6EC(logic, method);
  }
LABEL_33:
  v17 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleCommandData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleCommandData___ctor__);
  v19 = this->fields.selectcommand;
  if ( !v19 )
    goto LABEL_114;
  if ( !LODWORD(v19->max_length) )
    goto LABEL_115;
  v20 = this->fields.commandlist;
  if ( !v20 )
    goto LABEL_114;
  v21 = v19->m_Items[0];
  if ( (unsigned int)v21 >= LODWORD(v20->max_length) )
    goto LABEL_115;
  if ( !v17 )
    goto LABEL_114;
  method = (const MethodInfo *)v20->m_Items[v21];
  items = v17->fields._items;
  v23 = Method_System_Collections_Generic_List_BattleCommandData__Add__;
  ++v17->fields._version;
  if ( !items )
    goto LABEL_114;
  size = v17->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      (Il2CppObject *)method,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    v17->fields._size = size + 1;
    v25[4] = (Il2CppClass *)method;
    sub_1C2D434((CGThumbnailListItem_o *)(v25 + 4), (int32_t)method, v9, v18);
  }
  v27 = this->fields.selectcommand;
  if ( !v27 )
    goto LABEL_114;
  if ( LODWORD(v27->max_length) <= 1 )
    goto LABEL_115;
  v28 = this->fields.commandlist;
  if ( !v28 )
    goto LABEL_114;
  v29 = v27->m_Items[1];
  if ( (unsigned int)v29 >= LODWORD(v28->max_length) )
    goto LABEL_115;
  method = (const MethodInfo *)v28->m_Items[v29];
  v30 = v17->fields._items;
  v31 = Method_System_Collections_Generic_List_BattleCommandData__Add__;
  ++v17->fields._version;
  if ( !v30 )
    goto LABEL_114;
  v32 = v17->fields._size;
  if ( (unsigned int)v32 >= LODWORD(v30->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      (Il2CppObject *)method,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &v30->obj.klass + v32;
    v17->fields._size = v32 + 1;
    v33[4] = (Il2CppClass *)method;
    sub_1C2D434((CGThumbnailListItem_o *)(v33 + 4), (int32_t)method, v9, v26);
  }
  v35 = this->fields.selectcommand;
  if ( !v35 )
    goto LABEL_114;
  if ( LODWORD(v35->max_length) <= 2 )
    goto LABEL_115;
  v36 = this->fields.commandlist;
  if ( !v36 )
    goto LABEL_114;
  v37 = v35->m_Items[2];
  if ( (unsigned int)v37 >= LODWORD(v36->max_length) )
    goto LABEL_115;
  method = (const MethodInfo *)v36->m_Items[v37];
  v38 = v17->fields._items;
  v39 = Method_System_Collections_Generic_List_BattleCommandData__Add__;
  ++v17->fields._version;
  if ( !v38 )
    goto LABEL_114;
  v40 = v17->fields._size;
  if ( (unsigned int)v40 >= LODWORD(v38->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      (Il2CppObject *)method,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
  }
  else
  {
    v41 = &v38->obj.klass + v40;
    v17->fields._size = v40 + 1;
    v41[4] = (Il2CppClass *)method;
    sub_1C2D434((CGThumbnailListItem_o *)(v41 + 4), (int32_t)method, v9, v34);
  }
  Bdata = this->fields.Bdata;
  logic = (BattleLogic_o *)System_Collections_Generic_List_object___ToArray(
                             v17,
                             (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleCommandData__ToArray__);
  if ( !Bdata )
    goto LABEL_114;
  BattleData__setCommandData(Bdata, (BattleCommandData_array *)logic, 0);
  v43 = this->fields.perf;
  if ( !v43 )
    goto LABEL_114;
  v44 = v43->fields.data;
  if ( !v44 )
    goto LABEL_114;
  actionLogManager = v44->fields.actionLogManager;
  if ( !actionLogManager )
    goto LABEL_114;
  klass = actionLogManager->klass;
  globaltargetId = v44->fields.globaltargetId;
  v48 = *(unsigned __int16 *)&actionLogManager->klass->_2.rank;
  if ( *(_WORD *)&actionLogManager->klass->_2.rank )
  {
    p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      --v48;
      p_offset += 2;
      if ( !v48 )
        goto LABEL_66;
    }
    v50 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 7];
  }
  else
  {
LABEL_66:
    v50 = sub_1C7DCA8(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 7);
  }
  logic = (BattleLogic_o *)(*(__int64 (__fastcall **)(struct BattleActionLogManagerInterface_o *, _QWORD, _QWORD))v50)(
                             actionLogManager,
                             globaltargetId,
                             *(_QWORD *)(v50 + 8));
  v51 = this->fields.perf;
  if ( !v51 )
    goto LABEL_114;
  v52 = v51->fields.data;
  if ( !v52 )
    goto LABEL_114;
  v53 = this->fields.selectcommand;
  if ( !v53 )
    goto LABEL_114;
  if ( LODWORD(v53->max_length) <= 2 )
    goto LABEL_115;
  v54 = v52->fields.actionLogManager;
  if ( !v54 )
    goto LABEL_114;
  v55 = v54->klass;
  v57 = v53->m_Items[0];
  v56 = v53->m_Items[1];
  v58 = v53->m_Items[2];
  v59 = *(unsigned __int16 *)&v54->klass->_2.rank;
  if ( *(_WORD *)&v54->klass->_2.rank )
  {
    v60 = (BattleActionLogManagerInterface_c **)&v55->_1.interfaceOffsets->offset;
    while ( *(v60 - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      --v59;
      v60 += 2;
      if ( !v59 )
        goto LABEL_77;
    }
    v61 = (__int64)&v55->vtable[*(_DWORD *)v60 + 8];
  }
  else
  {
LABEL_77:
    v61 = sub_1C7DCA8(v54, BattleActionLogManagerInterface_TypeInfo, 8);
  }
  (*(void (__fastcall **)(struct BattleActionLogManagerInterface_o *, _QWORD, _QWORD, _QWORD, _QWORD))v61)(
    v54,
    v57,
    v56,
    v58,
    *(_QWORD *)(v61 + 8));
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_114;
  BattleLogic__endSelectCommand(logic, 0);
  v62 = this->fields.Bdata;
  if ( !v62 )
    goto LABEL_114;
  logic = (BattleLogic_o *)v62->fields.combodata;
  if ( !logic )
    goto LABEL_114;
  logic = (BattleLogic_o *)BattleComboData__isExtraAttack((BattleComboData_o *)logic, 0);
  if ( ((unsigned __int8)logic & 1) == 0 )
    goto LABEL_100;
  v63 = this->fields.selectcommand;
  if ( !v63 )
    goto LABEL_114;
  if ( LODWORD(v63->max_length) <= 2 )
    goto LABEL_115;
  v64 = this->fields.commandlist;
  if ( !v64 )
    goto LABEL_114;
  v65 = v63->m_Items[2];
  if ( (unsigned int)v65 >= LODWORD(v64->max_length) )
LABEL_115:
    sub_1C2D6F4(logic, method, v9);
  v66 = v64->m_Items[v65];
  v67 = (BattleCommandData_o *)sub_1C2D6DC(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_46333724(v67, v66, 0);
  if ( !v67 )
    goto LABEL_114;
  BattleCommandData__ResetServantCardIdsIndex(v67, 0);
  BattleCommandData__setTypeAddAttack(v67, 0);
  v70 = this->fields.Bdata;
  if ( !v70 )
    goto LABEL_114;
  method = (const MethodInfo *)v70->fields.combodata;
  if ( method )
    BattleCommandData__setCombo(v67, (BattleComboData_o *)method, 2, 0);
  v71 = v17->fields._items;
  v72 = Method_System_Collections_Generic_List_BattleCommandData__Add__;
  ++v17->fields._version;
  if ( !v71 )
    goto LABEL_114;
  v73 = v17->fields._size;
  if ( (unsigned int)v73 >= LODWORD(v71->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      (Il2CppObject *)v67,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
  }
  else
  {
    v74 = &v71->obj.klass + v73;
    v17->fields._size = v73 + 1;
    v74[4] = (Il2CppClass *)v67;
    sub_1C2D434((CGThumbnailListItem_o *)(v74 + 4), (int32_t)v67, v68, v69);
  }
  v75 = this->fields.Bdata;
  logic = (BattleLogic_o *)System_Collections_Generic_List_object___ToArray(
                             v17,
                             (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleCommandData__ToArray__);
  if ( !v75 )
    goto LABEL_114;
  BattleData__setCommandData(v75, (BattleCommandData_array *)logic, 0);
  v76 = this->fields.perf;
  if ( !v76 )
    goto LABEL_114;
  logic = (BattleLogic_o *)v76->fields.data;
  if ( !logic )
    goto LABEL_114;
  logic = (BattleLogic_o *)BattleData__getServantData((BattleData_o *)logic, v67->fields.uniqueId, 0);
  if ( logic )
    BattleServantData__SetOverwriteSvtCardType((BattleServantData_o *)logic, v67, 0);
LABEL_100:
  for ( i = 0; i != 3; ++i )
  {
    selectedcomponents = this->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_114;
    if ( i >= LODWORD(selectedcomponents->max_length) )
      goto LABEL_115;
    logic = (BattleLogic_o *)selectedcomponents->m_Items[i];
    if ( !logic )
      goto LABEL_114;
    BattleCommandComponent__startComboCard((BattleCommandComponent_o *)logic, 0);
  }
  v80 = this->fields.perf;
  if ( !v80 )
    goto LABEL_114;
  v81 = v80->fields.data;
  if ( !v81 )
    goto LABEL_114;
  v81->fields.commandCriticalArray = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v81->fields.commandCriticalArray, 0, v9, v79);
  v82 = this->fields.perf;
  if ( !v82 )
    goto LABEL_114;
  logic = (BattleLogic_o *)v82->fields.data;
  if ( !logic )
    goto LABEL_114;
  BattleData__ResetAllCriticalInfo((BattleData_o *)logic, 0);
  v83 = this->fields.perf;
  if ( !v83 )
    goto LABEL_114;
  logic = (BattleLogic_o *)v83->fields.statusPerf;
  if ( !logic )
    goto LABEL_114;
  BattlePerformanceStatus__updateCriticalPoint((BattlePerformanceStatus_o *)logic, -1, 0, 0);
  v84 = Method_BattlePerformanceCommandCard_comboExecute__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_comboExecute__ + 83) & 2) != 0 )
    v84 = (_QWORD *)sub_1C2D4A8(Method_BattlePerformanceCommandCard_comboExecute__);
  v85 = (System_Reflection_MethodBase_o *)sub_1C2D474(v84, v84[4]);
  OverwriteAssetSoundName__PlayCommonSe(v85, 6, 0, 0);
}


void BattlePerformanceCommandCard__countupStarPoint(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  ;
}


void BattlePerformanceCommandCard__createCommandCard(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformanceCommandCard_o *v3; // x19
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  struct UnityEngine_GameObject_array **p_p_commandlist; // x20
  unsigned __int64 v6; // x22
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v8; // x21
  __int64 v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x0
  struct BattleCommandComponent_array **p_commandCompArray; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x0
  struct UnityEngine_Transform_array **p_commandTransformArray; // x22
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct UnityEngine_GameObject_array *v20; // x26
  unsigned int v21; // w29
  int32_t v22; // w23
  __int64 v23; // x28
  const MethodInfo *v24; // x3
  BattlePerformanceCommandCard_o *v25; // x1
  Il2CppClass **v26; // x0
  struct UnityEngine_GameObject_array *v27; // x8
  const MethodInfo *v28; // x3
  struct BattleCommandComponent_array *v29; // x25
  BattlePerformanceCommandCard_o *v30; // x26
  Il2CppClass **v31; // x0
  struct UnityEngine_GameObject_array *v32; // x8
  struct UnityEngine_Transform_array *v33; // x25
  const MethodInfo *v34; // x3
  BattlePerformanceCommandCard_o *v35; // x27
  Il2CppClass **v36; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct BattlePerformance_o *perf; // x1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct UnityEngine_Transform_array *v43; // x8
  struct UnityEngine_Transform_array *excardTr; // x8
  UnityEngine_Transform_o *v45; // x1
  struct UnityEngine_Transform_array *v46; // x8
  struct UnityEngine_Transform_array *cardTr; // x9
  struct UnityEngine_Transform_array *v48; // x8
  UnityEngine_Transform_o *v49; // x27
  struct UnityEngine_Transform_array *v50; // x8
  UnityEngine_Transform_o *v51; // x27
  struct UnityEngine_Transform_array *npcardTr; // x8
  struct UnityEngine_Transform_array *v53; // x8
  UnityEngine_Transform_o *v54; // x27
  struct UnityEngine_Transform_array *v55; // x8
  UnityEngine_Transform_o *v56; // x27
  struct UnityEngine_GameObject_array *v57; // x8
  __int64 v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  struct UnityEngine_GameObject_array *v61; // x8
  struct BattleCommandComponent_array *selectedcomponents; // x20
  const MethodInfo *v63; // x3
  BattlePerformanceCommandCard_o *v64; // x21
  __int64 v65; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  __int64 v68; // x0
  UnityEngine_Color_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_4C293B4 & 1) == 0 )
  {
    sub_1C2D490(&BattleCommandComponent___TypeInfo);
    sub_1C2D490(&UnityEngine_GameObject___TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&UnityEngine_Transform___TypeInfo);
    sub_1C2D490(&StringLiteral_18845/*"ef_resistarrow"*/);
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&StringLiteral_18860/*"ef_weakarrow"*/);
    byte_4C293B4 = 1;
  }
  p_p_commandlist = &v3->fields.p_commandlist;
  p_commandlist = v3->fields.p_commandlist;
  if ( p_commandlist )
  {
    v6 = 0;
    while ( 1 )
    {
      max_length_low = LODWORD(p_commandlist->max_length);
      if ( (__int64)v6 >= (int)max_length_low )
        break;
      if ( v6 >= max_length_low )
        goto LABEL_83;
      v8 = (UnityEngine_Object_o *)p_commandlist->m_Items[v6];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71163704(v8, 0);
      p_commandlist = *p_p_commandlist;
      ++v6;
      if ( !*p_p_commandlist )
        goto LABEL_74;
    }
  }
  v9 = sub_1C2D538(UnityEngine_GameObject___TypeInfo, 9);
  v3->fields.p_commandlist = (struct UnityEngine_GameObject_array *)v9;
  sub_1C2D434((CGThumbnailListItem_o *)&v3->fields.p_commandlist, v9, v10, v11);
  v12 = sub_1C2D538(BattleCommandComponent___TypeInfo, 9);
  p_commandCompArray = &v3->fields.commandCompArray;
  v3->fields.commandCompArray = (struct BattleCommandComponent_array *)v12;
  sub_1C2D434((CGThumbnailListItem_o *)&v3->fields.commandCompArray, v12, v14, v15);
  v16 = sub_1C2D538(UnityEngine_Transform___TypeInfo, 9);
  p_commandTransformArray = &v3->fields.commandTransformArray;
  v3->fields.commandTransformArray = (struct UnityEngine_Transform_array *)v16;
  sub_1C2D434((CGThumbnailListItem_o *)&v3->fields.commandTransformArray, v16, v18, v19);
  v20 = v3->fields.p_commandlist;
  if ( !v20 )
    goto LABEL_74;
  v21 = 0;
  v22 = 30;
  v23 = -32;
  while ( (signed int)v21 < SLODWORD(v20->max_length) )
  {
    this = (BattlePerformanceCommandCard_o *)BaseMonoBehaviour__createObject(
                                               (BaseMonoBehaviour_o *)v3,
                                               v3->fields.commandprefab,
                                               v3->fields.commandrootTransform,
                                               0,
                                               0);
    if ( v21 >= LODWORD(v20->max_length) )
      goto LABEL_83;
    v25 = this;
    v26 = &v20->obj.klass + (int)v21;
    v26[4] = (Il2CppClass *)v25;
    sub_1C2D434((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v25, v2, v24);
    v27 = *p_p_commandlist;
    if ( !*p_p_commandlist )
      goto LABEL_74;
    if ( v21 >= LODWORD(v27->max_length) )
      goto LABEL_83;
    this = (BattlePerformanceCommandCard_o *)v27->m_Items[v21];
    if ( !this )
      goto LABEL_74;
    this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    v29 = *p_commandCompArray;
    if ( !*p_commandCompArray )
      goto LABEL_74;
    v30 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(this, v29->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_84;
    }
    if ( v21 >= LODWORD(v29->max_length) )
      goto LABEL_83;
    v31 = &v29->obj.klass + (int)v21;
    v31[4] = (Il2CppClass *)v30;
    sub_1C2D434((CGThumbnailListItem_o *)(v31 + 4), (int32_t)v30, v2, v28);
    v32 = *p_p_commandlist;
    if ( !*p_p_commandlist )
      goto LABEL_74;
    if ( v21 >= LODWORD(v32->max_length) )
      goto LABEL_83;
    this = (BattlePerformanceCommandCard_o *)v32->m_Items[v21];
    if ( !this )
      goto LABEL_74;
    v33 = *p_commandTransformArray;
    this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !v33 )
      goto LABEL_74;
    v35 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(this, v33->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_84;
    }
    if ( v21 >= LODWORD(v33->max_length) )
      goto LABEL_83;
    v36 = &v33->obj.klass + (int)v21;
    v36[4] = (Il2CppClass *)v35;
    sub_1C2D434((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v35, v2, v34);
    if ( !v30 )
      goto LABEL_74;
    BattleCommandComponent__Initialize((BattleCommandComponent_o *)v30, 0);
    LOWORD(v30->fields.cutin_trinity_m) = 256;
    BattleCommandComponent__setData((BattleCommandComponent_o *)v30, 0, 0, 0, 1, 0, 1, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0);
    v30->fields.selectcommand = (struct System_Int32_array *)gameObject;
    sub_1C2D434((CGThumbnailListItem_o *)&v30->fields.selectcommand, (int32_t)gameObject, v38, v39);
    BattleCommandComponent__setDepth((BattleCommandComponent_o *)v30, v22, 0);
    perf = v3->fields.perf;
    v30->fields.tdConfWindow = (struct BattleTDConfWIndowComponent_o *)perf;
    sub_1C2D434((CGThumbnailListItem_o *)&v30->fields.tdConfWindow, (int32_t)perf, v41, v42);
    if ( v21 <= 4 )
    {
      v46 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_74;
      if ( v21 >= LODWORD(v46->max_length) )
        goto LABEL_83;
      cardTr = v3->fields.cardTr;
      if ( !cardTr )
        goto LABEL_74;
      if ( v21 >= LODWORD(cardTr->max_length) )
        goto LABEL_83;
      this = (BattlePerformanceCommandCard_o *)v46->m_Items[v21];
      if ( !this )
        goto LABEL_74;
      UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, cardTr->m_Items[v21], 0);
      v48 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_74;
      if ( v21 >= LODWORD(v48->max_length) )
        goto LABEL_83;
      v49 = v48->m_Items[v21];
      if ( !byte_4C20DA1 )
      {
        this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA1 = 1;
      }
      if ( !v49 )
        goto LABEL_74;
      UnityEngine_Transform__set_localPosition(v49, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      v50 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_74;
      if ( v21 >= LODWORD(v50->max_length) )
        goto LABEL_83;
      v51 = v50->m_Items[v21];
      if ( !byte_4C20DA7 )
      {
        this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&UnityEngine_Quaternion_TypeInfo);
        byte_4C20DA7 = 1;
      }
      if ( !v51 )
        goto LABEL_74;
      UnityEngine_Transform__set_localRotation(
        v51,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0);
    }
    else
    {
      v43 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_74;
      if ( v21 >= LODWORD(v43->max_length) )
        goto LABEL_83;
      this = (BattlePerformanceCommandCard_o *)v43->m_Items[v21];
      if ( v21 <= 7 )
      {
        npcardTr = v3->fields.npcardTr;
        if ( !npcardTr )
          goto LABEL_74;
        if ( v21 - 5 >= LODWORD(npcardTr->max_length) )
          goto LABEL_83;
        if ( !this )
          goto LABEL_74;
        v45 = npcardTr->m_Items[v21 - 5];
      }
      else
      {
        excardTr = v3->fields.excardTr;
        if ( !excardTr )
          goto LABEL_74;
        if ( v21 - 8 >= LODWORD(excardTr->max_length) )
          goto LABEL_83;
        if ( !this )
          goto LABEL_74;
        v45 = *(UnityEngine_Transform_o **)((char *)&excardTr->obj.klass + v23);
      }
      UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v45, 0);
      v53 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_74;
      if ( v21 >= LODWORD(v53->max_length) )
        goto LABEL_83;
      v54 = v53->m_Items[v21];
      if ( !byte_4C20DA1 )
      {
        this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA1 = 1;
      }
      if ( !v54 )
        goto LABEL_74;
      UnityEngine_Transform__set_localPosition(v54, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      v55 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_74;
      if ( v21 >= LODWORD(v55->max_length) )
        goto LABEL_83;
      v56 = v55->m_Items[v21];
      if ( !byte_4C20DA7 )
      {
        this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&UnityEngine_Quaternion_TypeInfo);
        byte_4C20DA7 = 1;
      }
      if ( !v56 )
        goto LABEL_74;
      UnityEngine_Transform__set_localRotation(
        v56,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0);
      v57 = *p_p_commandlist;
      if ( !*p_p_commandlist )
        goto LABEL_74;
      if ( v21 >= LODWORD(v57->max_length) )
        goto LABEL_83;
      this = (BattlePerformanceCommandCard_o *)v57->m_Items[v21];
      if ( !this )
        goto LABEL_74;
      this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      if ( !this )
        goto LABEL_74;
      v69.fields.r = 0.0;
      v69.fields.g = 0.0;
      v69.fields.b = 0.0;
      v69.fields.a = 0.0;
      UIWidget__set_color((UIWidget_o *)this, v69, 0);
    }
    BattleCommandComponent__addObject((BattleCommandComponent_o *)v30, (System_String_o *)StringLiteral_18845/*"ef_resistarrow"*/, 0, 0);
    BattleCommandComponent__addObject((BattleCommandComponent_o *)v30, (System_String_o *)StringLiteral_18860/*"ef_weakarrow"*/, 1, 0);
    v20 = *p_p_commandlist;
    ++v21;
    v22 += 20;
    v23 += 8;
    if ( !*p_p_commandlist )
      goto LABEL_74;
  }
  v58 = sub_1C2D538(BattleCommandComponent___TypeInfo, 4);
  v3->fields.selectedcomponents = (struct BattleCommandComponent_array *)v58;
  sub_1C2D434((CGThumbnailListItem_o *)&v3->fields.selectedcomponents, v58, v59, v60);
  v61 = v3->fields.p_commandlist;
  if ( !v61 )
    goto LABEL_74;
  if ( LODWORD(v61->max_length) <= 8 )
    goto LABEL_83;
  this = (BattlePerformanceCommandCard_o *)v61->m_Items[8];
  if ( !this
    || (selectedcomponents = v3->fields.selectedcomponents,
        this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)this,
                                                   (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___),
        !selectedcomponents) )
  {
LABEL_74:
    sub_1C2D6EC(this, method);
  }
  v64 = this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(this, selectedcomponents->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_84:
      v68 = sub_1C2D710(this);
      sub_1C2D5B8(v68, 0);
    }
  }
  if ( LODWORD(selectedcomponents->max_length) <= 3 )
LABEL_83:
    sub_1C2D6F4(this, method, v2);
  selectedcomponents->m_Items[3] = (BattleCommandComponent_o *)v64;
  sub_1C2D434((CGThumbnailListItem_o *)&selectedcomponents->m_Items[3], (int32_t)v64, v2, v63);
  v65 = sub_1C2D538(int___TypeInfo, 9);
  v3->fields.selectcommand = (struct System_Int32_array *)v65;
  sub_1C2D434((CGThumbnailListItem_o *)&v3->fields.selectcommand, v65, v66, v67);
  v3->fields.drawcount = 0;
}


void BattlePerformanceCommandCard__endCloseCommandAssistDetailWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_4C293F3 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3519/*"CLOSE_WINDOW"*/);
    byte_4C293F3 = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_3519/*"CLOSE_WINDOW"*/, 0);
}


void BattlePerformanceCommandCard__endCloseSealedWindow(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_4C293ED & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3519/*"CLOSE_WINDOW"*/);
    byte_4C293ED = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_3519/*"CLOSE_WINDOW"*/, 0);
}


void BattlePerformanceCommandCard__endCloseTdConfWindow(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_4C293F0 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3519/*"CLOSE_WINDOW"*/);
    byte_4C293F0 = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_3519/*"CLOSE_WINDOW"*/, 0);
}


void BattlePerformanceCommandCard__endComboEffect(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_4C293DB & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5447/*"END_PROC"*/);
    byte_4C293DB = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_1C2D6EC(0, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_5447/*"END_PROC"*/, 0);
}


void BattlePerformanceCommandCard__endMoveCard(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v4; // x19
  unsigned __int64 v5; // x20
  unsigned __int64 max_length_low; // x9
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformance_o *v8; // x8
  struct BattleCommandComponent_array *v9; // x8
  __int64 v10; // x20
  int max_length; // w9
  unsigned int v12; // w21
  struct BattleCommandComponent_array *v13; // x8
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1

  commandCompArray = this->fields.commandCompArray;
  this->fields.isPlayingMoveCard = 0;
  if ( !commandCompArray )
    goto LABEL_25;
  v4 = this;
  v5 = 0;
  while ( v5 <= 4 )
  {
    max_length_low = LODWORD(commandCompArray->max_length);
    if ( (__int64)v5 >= (int)max_length_low )
      break;
    if ( v5 >= max_length_low )
LABEL_27:
      sub_1C2D6F4(this, method, v2);
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[v5];
    if ( this )
    {
      if ( LOBYTE(this->fields.maxdrawcount) )
        BattleCommandComponent__updateSelectedEffect((BattleCommandComponent_o *)this, 0);
      else
        BattleCommandComponent__startMoveFloat((BattleCommandComponent_o *)this, 0);
      commandCompArray = v4->fields.commandCompArray;
      ++v5;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_25;
  }
  perf = v4->fields.perf;
  if ( !perf
    || (this = (BattlePerformanceCommandCard_o *)perf->fields.statusPerf) == 0
    || (BattlePerformanceStatus__updateCriticalPoint((BattlePerformanceStatus_o *)this, -1, 0, 0),
        (v8 = v4->fields.perf) == 0)
    || (this = (BattlePerformanceCommandCard_o *)v8->fields.statusPerf) == 0
    || (BattlePerformanceStatus__SetActiveTotalCriticalStar((BattlePerformanceStatus_o *)this, 1, 0),
        (v9 = v4->fields.commandCompArray) == 0) )
  {
LABEL_25:
    sub_1C2D6EC(this, method);
  }
  v10 = 4;
  while ( 1 )
  {
    max_length = v9->max_length;
    v12 = v10 - 4;
    if ( (int)v10 - 4 >= max_length )
      break;
    if ( v12 >= max_length )
      goto LABEL_27;
    this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&v9->obj.klass + v10);
    if ( this )
    {
      BattleCommandComponent__setTouchFlg((BattleCommandComponent_o *)this, 1, 0);
      v13 = v4->fields.commandCompArray;
      if ( v13 )
      {
        if ( v12 >= LODWORD(v13->max_length) )
          goto LABEL_27;
        this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&v13->obj.klass + v10);
        if ( this )
        {
          BattleCommandComponent__ResetCardBuffIconAlphaAnim((BattleCommandComponent_o *)this, 0);
          v9 = v4->fields.commandCompArray;
          ++v10;
          if ( v9 )
            continue;
        }
      }
    }
    goto LABEL_25;
  }
  BattlePerformanceCommandCard__updateCardFix(v4, method);
  BattlePerformanceCommandCard__SetCommandCardTypeChangeBuff(v4, v14);
  BattlePerformanceCommandCard__updateTDTypeChange(v4, v15);
}


void BattlePerformanceCommandCard__endOpenCommandCard(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_4C293BC & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C293BC = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_12;
  transform = UnityEngine_Transform__get_parent(transform, 0);
  if ( !transform )
    goto LABEL_12;
  transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)transform,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0,
                                           0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( Component_object )
    {
      ((void (__fastcall *)(Il2CppObject *, __int64, const MethodInfo *))Component_object->klass->vtable[12].methodPtr)(
        Component_object,
        1,
        Component_object->klass->vtable[12].method);
      return;
    }
LABEL_12:
    sub_1C2D6EC(transform, v4);
  }
}


void BattlePerformanceCommandCard__endOpenTdConf(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  ;
}


void BattlePerformanceCommandCard__fadeOutAllCard(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v4; // x19
  __int64 v5; // x20
  int max_length; // w9

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_7:
    sub_1C2D6EC(this, method);
  v4 = this;
  v5 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C2D6F4(this, method, v2);
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[v5];
    if ( this )
    {
      BattleCommandComponent__hideOutCard((BattleCommandComponent_o *)this, 0);
      commandCompArray = v4->fields.commandCompArray;
      ++v5;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_7;
  }
}


bool BattlePerformanceCommandCard__fallStar(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *aubelist; // x0
  __int64 v4; // x1
  BattlePerformance_o *perf; // x0
  struct System_Collections_Generic_List_GameObject__o *v6; // x8
  __int64 size; // x2
  int v8; // w9
  char v9; // w22
  unsigned int j; // w26
  struct BattleCommandComponent_array *commandCompArray; // x8
  Il2CppClass **v12; // x8
  Il2CppClass *v13; // x20
  int v14; // w21
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v16; // x22
  System_Action_object__o *v17; // x23
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C293E4 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_GameObject__TypeInfo);
    sub_1C2D490(&Method_BattleCommandComponent_addCriticalBuff__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    byte_4C293E4 = 1;
  }
  memset(&i, 0, sizeof(i));
  aubelist = this->fields.aubelist;
  if ( !aubelist )
    goto LABEL_25;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)aubelist,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  for ( i = v20;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        BattlePerformance__destroyInstantiate(perf, (UnityEngine_GameObject_o *)i.fields._current, 0) )
  {
    perf = this->fields.perf;
    if ( !perf )
      sub_1C2D6EC(0, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v6 = this->fields.aubelist;
  if ( !v6 )
LABEL_25:
    sub_1C2D6EC(aubelist, method);
  size = (unsigned int)v6->fields._size;
  v8 = v6->fields._version + 1;
  v6->fields._size = 0;
  v6->fields._version = v8;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0);
  v9 = 0;
  for ( j = 0; j != 5; ++j )
  {
    commandCompArray = this->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_25;
    if ( j >= LODWORD(commandCompArray->max_length) )
LABEL_26:
      sub_1C2D6F4(aubelist, method, size);
    v12 = &commandCompArray->obj.klass + (int)j;
    v13 = v12[4];
    if ( !v13 )
      goto LABEL_25;
    aubelist = (struct System_Collections_Generic_List_GameObject__o *)BattleCommandComponent__GetPassStarCount(
                                                                         (BattleCommandComponent_o *)v12[4],
                                                                         0);
    if ( (int)aubelist >= 1 )
    {
      v14 = (int)aubelist;
      do
      {
        commandTransformArray = this->fields.commandTransformArray;
        if ( !commandTransformArray )
          goto LABEL_25;
        if ( j >= LODWORD(commandTransformArray->max_length) )
          goto LABEL_26;
        v16 = commandTransformArray->m_Items[j];
        v17 = (System_Action_object__o *)sub_1C2D6DC(System_Action_GameObject__TypeInfo);
        System_Action_object____ctor(v17, (Il2CppObject *)v13, Method_BattleCommandComponent_addCriticalBuff__, 0);
        BattlePerformanceCommandCard__MoveNotTween(this, v16, (System_Action_GameObject__o *)v17, v18);
        --v14;
      }
      while ( v14 );
      v9 = 1;
    }
    BattleCommandComponent__ResetPassStarCount((BattleCommandComponent_o *)v13, 0);
    if ( BYTE4(v13->vtable[5].method) )
      BattleCommandComponent__updateSelectedEffect((BattleCommandComponent_o *)v13, 0);
  }
  BattlePerformanceCommandCard__updateBuffIcon(this, method);
  return v9 & 1;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *BattlePerformanceCommandCard__getBattleCommandCardObject(
        BattlePerformanceCommandCard_o *this,
        int32_t actionIndex,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *selectedcomponents; // x8
  int32_t max_length; // w9

  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_9;
  if ( (actionIndex & 0x80000000) == 0 )
  {
    max_length = selectedcomponents->max_length;
    if ( max_length > actionIndex )
    {
      if ( max_length <= (unsigned int)actionIndex )
        sub_1C2D6F4(this, *(_QWORD *)&actionIndex, method);
      this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[actionIndex];
      if ( this )
        return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
LABEL_9:
      sub_1C2D6EC(this, actionIndex);
    }
  }
  return 0;
}


UnityEngine_Transform_o *BattlePerformanceCommandCard__getCollectCriticalTransform(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  return this->fields.criticalpointTr;
}


System_String_o *BattlePerformanceCommandCard__getComboCutIn(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *data; // x8
  struct BattleComboData_o *combodata; // x8
  _BOOL4 flash; // w9
  int32_t samecount; // w8
  System_String_o **v8; // x8

  v2 = this;
  if ( (byte_4C293DC & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18868/*"effect/BitEffect/bit_cut_2a"*/);
    sub_1C2D490(&StringLiteral_18871/*"effect/BitEffect/bit_cut_u3"*/);
    sub_1C2D490(&StringLiteral_18870/*"effect/BitEffect/bit_cut_u2"*/);
    sub_1C2D490(&StringLiteral_18872/*"effect/BitEffect/bit_cut_ua"*/);
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&StringLiteral_18869/*"effect/BitEffect/bit_cut_3a"*/);
    byte_4C293DC = 1;
  }
  perf = v2->fields.perf;
  if ( !perf || (data = perf->fields.data) == 0 || (combodata = data->fields.combodata) == 0 )
    sub_1C2D6EC(this, method);
  flash = combodata->fields.flash;
  samecount = combodata->fields.samecount;
  if ( flash )
  {
    if ( samecount == 2 )
    {
      v8 = (System_String_o **)&StringLiteral_18870/*"effect/BitEffect/bit_cut_u2"*/;
    }
    else if ( samecount == 3 )
    {
      v8 = (System_String_o **)&StringLiteral_18871/*"effect/BitEffect/bit_cut_u3"*/;
    }
    else
    {
      v8 = (System_String_o **)&StringLiteral_18872/*"effect/BitEffect/bit_cut_ua"*/;
    }
    return *v8;
  }
  if ( samecount == 2 )
  {
    v8 = (System_String_o **)&StringLiteral_18868/*"effect/BitEffect/bit_cut_2a"*/;
    return *v8;
  }
  if ( samecount == 3 )
    return (System_String_o *)StringLiteral_18869/*"effect/BitEffect/bit_cut_3a"*/;
  else
    return 0;
}


UnityEngine_Vector2_array *BattlePerformanceCommandCard__get_FSTutorialArrow01(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattlePerformanceCommandCard__FSTutorialArrowCard(this, this->fields.TutorialArrow01, v2);
}


UnityEngine_Vector2_array *BattlePerformanceCommandCard__get_FSTutorialArrow05(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattlePerformanceCommandCard__FSTutorialArrowCard(this, this->fields.TutorialArrow05, v2);
}


UnityEngine_Vector2_o BattlePerformanceCommandCard__get_FSTutorialArrow22(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  float x; // s9
  float y; // s8
  float v5; // s0
  float v6; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C293FC & 1) == 0 )
  {
    sub_1C2D490(&FSUtility_TypeInfo);
    byte_4C293FC = 1;
  }
  x = this->fields.TutorialArrow22.fields.x;
  y = this->fields.TutorialArrow22.fields.y;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v5 = x + FSUtility__GetOffsetX(40.0, 0, 0);
  v6 = y;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}


UnityEngine_Vector2_array *BattlePerformanceCommandCard__get_FSTutorialArrow31(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattlePerformanceCommandCard__FSTutorialArrowCard(this, this->fields.TutorialArrow31, v2);
}


UnityEngine_Rect_array *BattlePerformanceCommandCard__get_FSTutorialSquare01(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattlePerformanceCommandCard__FSTutorialSquareCard(this, this->fields.TutorialSquare01, v2);
}


UnityEngine_Rect_array *BattlePerformanceCommandCard__get_FSTutorialSquare05(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattlePerformanceCommandCard__FSTutorialSquareCard(this, this->fields.TutorialSquare05, v2);
}


UnityEngine_Rect_o BattlePerformanceCommandCard__get_FSTutorialSquare22(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  float m_XMin; // s11
  float m_YMin; // s10
  float m_Width; // s8
  float m_Height; // s9
  float OffsetX; // s0
  float v8; // s2
  float v9; // s3
  float v10; // s0
  float v11; // s1
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C293FD & 1) == 0 )
  {
    sub_1C2D490(&FSUtility_TypeInfo);
    byte_4C293FD = 1;
  }
  m_XMin = this->fields.TutorialSquare22.fields.m_XMin;
  m_YMin = this->fields.TutorialSquare22.fields.m_YMin;
  m_Width = this->fields.TutorialSquare22.fields.m_Width;
  m_Height = this->fields.TutorialSquare22.fields.m_Height;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  OffsetX = FSUtility__GetOffsetX(40.0, 0, 0);
  v8 = m_Width;
  v9 = m_Height;
  v10 = m_XMin + OffsetX;
  v11 = m_YMin;
  result.fields.m_Height = v9;
  result.fields.m_Width = v8;
  result.fields.m_YMin = v11;
  result.fields.m_XMin = v10;
  return result;
}


UnityEngine_Rect_array *BattlePerformanceCommandCard__get_FSTutorialSquare32(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattlePerformanceCommandCard_o *v3; // x19
  UnityEngine_Rect_array *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Rect_array *v7; // x19
  float m_XMin; // s8

  v3 = this;
  if ( (byte_4C293FB & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&FSUtility_TypeInfo);
    byte_4C293FB = 1;
  }
  v4 = BattlePerformanceCommandCard__FSTutorialSquareCard(this, v3->fields.TutorialSquare32, v2);
  if ( !v4 )
    sub_1C2D6EC(0, v5);
  v7 = v4;
  if ( LODWORD(v4->max_length) <= 1 )
    sub_1C2D6F4(v4, v5, v6);
  m_XMin = v4->m_Items[1].fields.m_XMin;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v7->m_Items[1].fields.m_XMin = m_XMin + FSUtility__GetOffsetX(88.0, 1, 0);
  return v7;
}


bool BattlePerformanceCommandCard__get_IsPlayingBackStar(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  return this->fields._IsPlayingBackStar_k__BackingField;
}


void BattlePerformanceCommandCard__giveoutCard(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_GameObject_o *transform; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  __int64 v8; // x22
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v10; // x23
  UnityEngine_Object_o *v11; // x20
  struct UnityEngine_GameObject_array *v12; // x8

  if ( (byte_4C293BF & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_16777/*"anim_giveout"*/);
    byte_4C293BF = 1;
  }
  BattlePerformanceCommandCard__playAnimation(this, (System_String_o *)StringLiteral_16777/*"anim_giveout"*/, v2);
  p_commandlist = this->fields.p_commandlist;
  if ( p_commandlist )
  {
    v8 = 4;
    while ( 1 )
    {
      max_length_low = LODWORD(p_commandlist->max_length);
      v10 = v8 - 4;
      if ( v8 - 4 >= (int)max_length_low )
        break;
      if ( v10 >= max_length_low )
        goto LABEL_20;
      v11 = (UnityEngine_Object_o *)*((_QWORD *)&p_commandlist->obj.klass + v8);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v11, 0, 0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        v12 = this->fields.p_commandlist;
        if ( !v12 )
          goto LABEL_18;
        if ( v10 >= LODWORD(v12->max_length) )
LABEL_20:
          sub_1C2D6F4(transform, v5, v6);
        transform = (UnityEngine_GameObject_o *)*((_QWORD *)&v12->obj.klass + v8);
        if ( !transform
          || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0)) == 0
          || (transform = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                        (UnityEngine_Transform_o *)transform,
                                                        0)) == 0
          || (transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0)) == 0 )
        {
LABEL_18:
          sub_1C2D6EC(transform, v5);
        }
        UnityEngine_GameObject__SetActive(transform, 1, 0);
      }
      p_commandlist = this->fields.p_commandlist;
      ++v8;
      if ( !p_commandlist )
        goto LABEL_18;
    }
  }
}


void BattlePerformanceCommandCard__giveoutNobleCard(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformanceCommandCard_o *v3; // x19
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  __int64 v5; // x24
  unsigned int max_length; // w9
  unsigned int v7; // w25
  Il2CppObject *Component_object; // x20
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattleCommandComponent_o *v10; // x20
  struct UnityEngine_GameObject_array *v11; // x8
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_4C293C0 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C293C0 = 1;
  }
  p_commandlist = v3->fields.p_commandlist;
  if ( !p_commandlist )
LABEL_25:
    sub_1C2D6EC(this, method);
  v5 = 9;
  while ( 1 )
  {
    max_length = p_commandlist->max_length;
    v7 = v5 - 4;
    if ( (int)v5 - 4 >= (int)(max_length - 1) )
      break;
    if ( v7 >= max_length )
      goto LABEL_27;
    this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&p_commandlist->obj.klass + v5);
    if ( !this )
      goto LABEL_25;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0,
                                               0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71163892((UnityEngine_Object_o *)Component_object, 0);
    }
    commandCompArray = v3->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_25;
    if ( v7 >= LODWORD(commandCompArray->max_length) )
      goto LABEL_27;
    v10 = (BattleCommandComponent_o *)*((_QWORD *)&commandCompArray->obj.klass + v5);
    if ( !v10 )
      goto LABEL_25;
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkObject(
                                               *((BattleCommandComponent_o **)&commandCompArray->obj.klass + v5),
                                               0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v11 = v3->fields.p_commandlist;
      if ( !v11 )
        goto LABEL_25;
      if ( v7 >= LODWORD(v11->max_length) )
LABEL_27:
        sub_1C2D6F4(this, method, v2);
      this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&v11->obj.klass + v5);
      if ( !this )
        goto LABEL_25;
      this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      if ( !this )
        goto LABEL_25;
      v12.fields.r = 1.0;
      v12.fields.g = 1.0;
      v12.fields.b = 1.0;
      v12.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)this, v12, 0);
      if ( !v10->fields.selectflg )
        BattleCommandComponent__startMoveFloat(v10, 0);
    }
    p_commandlist = v3->fields.p_commandlist;
    ++v5;
    if ( !p_commandlist )
      goto LABEL_25;
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__hideCommandCard(
        BattlePerformanceCommandCard_o *this,
        bool flg,
        BaseMotionSkip_o *motionSkip,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v5; // x20
  __int64 v6; // x2
  float v7; // s8
  float v8; // s9
  __int64 v9; // x21
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  struct BattleCommandComponent_array *commandCompArray; // x8
  UnityEngine_Color_o v12; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( !motionSkip )
LABEL_13:
    sub_1C2D6EC(this, flg);
  v5 = this;
  LODWORD(v7) = COERCE_UNSIGNED_INT128(
                  ((long double (__fastcall *)(BaseMotionSkip_o *, const MethodInfo *, float))motionSkip->klass->vtable._11_ConvertSkipDuration.methodPtr)(
                    motionSkip,
                    motionSkip->klass->vtable._11_ConvertSkipDuration.method,
                    0.3));
  if ( flg )
    v8 = 1.0;
  else
    v8 = 0.0;
  v9 = 4;
  do
  {
    p_commandlist = v5->fields.p_commandlist;
    if ( !p_commandlist )
      goto LABEL_13;
    if ( (unsigned int)(v9 - 4) >= LODWORD(p_commandlist->max_length) )
      goto LABEL_14;
    v12.fields.r = v8;
    v12.fields.g = v8;
    v12.fields.b = v8;
    v12.fields.a = v8;
    this = (BattlePerformanceCommandCard_o *)TweenColor__Begin(
                                               *((UnityEngine_GameObject_o **)&p_commandlist->obj.klass + v9),
                                               v7,
                                               v12,
                                               0);
    commandCompArray = v5->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_13;
    if ( (unsigned int)(v9 - 4) >= LODWORD(commandCompArray->max_length) )
LABEL_14:
      sub_1C2D6F4(this, flg, v6);
    this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&commandCompArray->obj.klass + v9);
    if ( !this )
      goto LABEL_13;
    BattleCommandComponent__CardEffectSetActive((BattleCommandComponent_o *)this, flg, 0);
    ++v9;
  }
  while ( (_DWORD)v9 != 9 );
}


void BattlePerformanceCommandCard__initHighSpeedMode(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  const MethodInfo *v4; // x2
  int32_t v5; // w1
  const MethodInfo *v6; // x2

  perf = this->fields.perf;
  if ( !perf || (v3 = this, (this = (BattlePerformanceCommandCard_o *)perf->fields.data) == 0) )
    sub_1C2D6EC(this, method);
  if ( BattleData__isTutorial((BattleData_o *)this, 0) )
  {
    BattlePerformanceCommandCard__SetCommandPhaseButtonActive(v3, 0, v4);
  }
  else
  {
    BattlePerformanceCommandCard__SetCommandPhaseButtonActive(v3, 1, v4);
    BattlePerformanceCommandCard__updateHighSpeedObject(v3, v5, v6);
  }
}


void BattlePerformanceCommandCard__initOpen(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_4C293B5 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_7459/*"INIT_OPEN"*/);
    byte_4C293B5 = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_7459/*"INIT_OPEN"*/, 0);
}


// attributes: thunk
void BattlePerformanceCommandCard__initQuest(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  BattlePerformanceCommandCard__initHighSpeedMode(this, method);
}


void BattlePerformanceCommandCard__moveupStars(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  struct System_Collections_Generic_List_GameObject__o *aubelist; // x8
  int32_t size; // w2
  int v5; // w9
  struct BattleData_o *Bdata; // x8
  int criticalstars; // w8
  unsigned int v8; // w29
  BattlePerformanceCommandCard_o *v9; // x21
  BattlePerformanceCommandCard_o *v10; // x22
  int32_t layer; // w0
  BattlePerformanceCommandCard_o *v12; // x22
  __int64 v13; // x2
  const MethodInfo *v14; // x3
  BattlePerformanceCommandCard_o *v15; // x22
  struct PlayMakerFSM_o *v16; // x0
  struct System_Single_array *v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  const MethodInfo *v21; // x3
  struct PlayMakerFSM_o *v22; // x23
  const MethodInfo *v23; // x3
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  const MethodInfo *v27; // x3
  struct PlayMakerFSM_o *v28; // x23
  const MethodInfo *v29; // x3
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  const MethodInfo *v33; // x3
  struct UnityEngine_GameObject_o *v34; // x23
  const MethodInfo *v35; // x3
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  const MethodInfo *v39; // x3
  struct UISprite_o *v40; // x23
  const MethodInfo *v41; // x3
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  const MethodInfo *v45; // x3
  struct UnityEngine_GameObject_o *v46; // x23
  const MethodInfo *v47; // x3
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  const MethodInfo *v51; // x3
  struct UnityEngine_GameObject_o *v52; // x23
  System_Collections_Hashtable_o *v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v57; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v59; // x8
  struct BattlePerformance_o *perf; // x8
  __int64 v61; // x0
  char v62[4]; // [xsp+0h] [xbp-80h] BYREF
  int v63; // [xsp+4h] [xbp-7Ch] BYREF
  int v64; // [xsp+8h] [xbp-78h] BYREF
  float v65; // [xsp+Ch] [xbp-74h] BYREF
  int v66; // [xsp+18h] [xbp-68h] BYREF
  int32_t v67; // [xsp+1Ch] [xbp-64h] BYREF

  v2 = this;
  if ( (byte_4C293E0 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&iTween_EaseType_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_Rigidbody___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_24841/*"x"*/);
    sub_1C2D490(&StringLiteral_18742/*"easetype"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_18545/*"delay"*/);
    sub_1C2D490(&StringLiteral_24943/*"y"*/);
    sub_1C2D490(&StringLiteral_20959/*"islocal"*/);
    sub_1C2D490(&StringLiteral_18889/*"effect/ef_critlaunch"*/);
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&iTween_TypeInfo);
    byte_4C293E0 = 1;
  }
  aubelist = v2->fields.aubelist;
  if ( !aubelist )
    goto LABEL_80;
  size = aubelist->fields._size;
  v5 = aubelist->fields._version + 1;
  aubelist->fields._size = 0;
  aubelist->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)aubelist->fields._items, 0, size, 0);
  Bdata = v2->fields.Bdata;
  if ( !Bdata )
    goto LABEL_80;
  criticalstars = Bdata->fields.criticalstars;
  if ( criticalstars < 1 )
    return;
  v8 = criticalstars / 5u + 1;
  do
  {
    this = (BattlePerformanceCommandCard_o *)v2->fields.perf;
    if ( !this )
      goto LABEL_80;
    this = (BattlePerformanceCommandCard_o *)BattlePerformance__getEffectInstantiate(
                                               (BattlePerformance_o *)this,
                                               4,
                                               v2->fields.criticalpointTr,
                                               0);
    if ( !this )
      goto LABEL_80;
    v9 = this;
    this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !v2->fields.criticalpointTr )
      goto LABEL_80;
    v10 = this;
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v2->fields.criticalpointTr,
                                               0);
    if ( !this )
      goto LABEL_80;
    layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0);
    TransformHelper__ChangeChildsLayer((UnityEngine_Transform_o *)v10, layer, 0);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9, 0);
    if ( !this )
      goto LABEL_80;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v2->fields.criticalpointTr, 0);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9, 0);
    v12 = this;
    if ( !byte_4C20DA1 )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA1 = 1;
    }
    if ( !v12 )
      goto LABEL_80;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)v12,
      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
      0);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)v9,
                                               (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Rigidbody___);
    if ( !this )
      goto LABEL_80;
    UnityEngine_Rigidbody__set_useGravity((UnityEngine_Rigidbody_o *)this, 0, 0);
    this = (BattlePerformanceCommandCard_o *)sub_1C2D538(object___TypeInfo, 12);
    if ( !this )
      goto LABEL_80;
    v15 = this;
    v16 = (struct PlayMakerFSM_o *)StringLiteral_24841/*"x"*/;
    if ( StringLiteral_24841/*"x"*/ )
    {
      v16 = (struct PlayMakerFSM_o *)sub_1C2D5CC(StringLiteral_24841/*"x"*/, v15->klass->_1.element_class);
      if ( !v16 )
        goto LABEL_81;
      v17 = (struct System_Single_array *)StringLiteral_24841/*"x"*/;
    }
    else
    {
      v17 = 0;
    }
    if ( !LODWORD(v15->fields.m_CancellationTokenSource) )
      goto LABEL_79;
    v15->fields.COMMAND_STAMP_POS_X = v17;
    sub_1C2D434((CGThumbnailListItem_o *)&v15->fields.COMMAND_STAMP_POS_X, (int32_t)v17, v13, v14);
    v67 = UnityEngine_Random__Range_71123924(-780, 110, 0);
    v16 = (struct PlayMakerFSM_o *)j_il2cpp_value_box_0(int_TypeInfo, &v67, v18, v19, v20);
    v22 = v16;
    if ( v16 )
    {
      v16 = (struct PlayMakerFSM_o *)sub_1C2D5CC(v16, v15->klass->_1.element_class);
      if ( !v16 )
      {
LABEL_81:
        v61 = sub_1C2D710(v16);
        sub_1C2D5B8(v61, 0);
      }
    }
    if ( LODWORD(v15->fields.m_CancellationTokenSource) <= 1 )
      goto LABEL_79;
    *(_QWORD *)&v15->fields.COMMAND_STAMP_POS_Y = v22;
    sub_1C2D434((CGThumbnailListItem_o *)&v15->fields.COMMAND_STAMP_POS_Y, (int32_t)v22, v13, v21);
    v16 = (struct PlayMakerFSM_o *)StringLiteral_24943/*"y"*/;
    if ( StringLiteral_24943/*"y"*/ )
    {
      v16 = (struct PlayMakerFSM_o *)sub_1C2D5CC(StringLiteral_24943/*"y"*/, v15->klass->_1.element_class);
      if ( !v16 )
        goto LABEL_81;
      v17 = (struct System_Single_array *)StringLiteral_24943/*"y"*/;
    }
    else
    {
      v17 = 0;
    }
    if ( LODWORD(v15->fields.m_CancellationTokenSource) <= 2 )
      goto LABEL_79;
    *(_QWORD *)&v15->fields.CARD_ROOT_BASE_X = v17;
    sub_1C2D434((CGThumbnailListItem_o *)&v15->fields.CARD_ROOT_BASE_X, (int32_t)v17, v13, v23);
    v66 = 500;
    v16 = (struct PlayMakerFSM_o *)j_il2cpp_value_box_0(int_TypeInfo, &v66, v24, v25, v26);
    v28 = v16;
    if ( v16 )
    {
      v16 = (struct PlayMakerFSM_o *)sub_1C2D5CC(v16, v15->klass->_1.element_class);
      if ( !v16 )
        goto LABEL_81;
    }
    if ( LODWORD(v15->fields.m_CancellationTokenSource) <= 3 )
      goto LABEL_79;
    v15->fields.commandfsm = v28;
    sub_1C2D434((CGThumbnailListItem_o *)&v15->fields.commandfsm, (int32_t)v28, v13, v27);
    v16 = (struct PlayMakerFSM_o *)StringLiteral_18545/*"delay"*/;
    if ( StringLiteral_18545/*"delay"*/ )
    {
      v16 = (struct PlayMakerFSM_o *)sub_1C2D5CC(StringLiteral_18545/*"delay"*/, v15->klass->_1.element_class);
      if ( !v16 )
        goto LABEL_81;
      v17 = (struct System_Single_array *)StringLiteral_18545/*"delay"*/;
    }
    else
    {
      v17 = 0;
    }
    if ( LODWORD(v15->fields.m_CancellationTokenSource) <= 4 )
      goto LABEL_79;
    v15->fields.commandprefab = (struct UnityEngine_GameObject_o *)v17;
    sub_1C2D434((CGThumbnailListItem_o *)&v15->fields.commandprefab, (int32_t)v17, v13, v29);
    v65 = UnityEngine_Random__Range(0.0, 0.3, 0);
    v16 = (struct PlayMakerFSM_o *)j_il2cpp_value_box_0(float_TypeInfo, &v65, v30, v31, v32);
    v34 = (struct UnityEngine_GameObject_o *)v16;
    if ( v16 )
    {
      v16 = (struct PlayMakerFSM_o *)sub_1C2D5CC(v16, v15->klass->_1.element_class);
      if ( !v16 )
        goto LABEL_81;
    }
    if ( LODWORD(v15->fields.m_CancellationTokenSource) <= 5 )
      goto LABEL_79;
    v15->fields.selectCommandPrefab = v34;
    sub_1C2D434((CGThumbnailListItem_o *)&v15->fields.selectCommandPrefab, (int32_t)v34, v13, v33);
    v16 = (struct PlayMakerFSM_o *)StringLiteral_24049/*"time"*/;
    if ( StringLiteral_24049/*"time"*/ )
    {
      v16 = (struct PlayMakerFSM_o *)sub_1C2D5CC(StringLiteral_24049/*"time"*/, v15->klass->_1.element_class);
      if ( !v16 )
        goto LABEL_81;
      v17 = (struct System_Single_array *)StringLiteral_24049/*"time"*/;
    }
    else
    {
      v17 = 0;
    }
    if ( LODWORD(v15->fields.m_CancellationTokenSource) <= 6 )
      goto LABEL_79;
    v15->fields.commandrootTransform = (struct UnityEngine_Transform_o *)v17;
    sub_1C2D434((CGThumbnailListItem_o *)&v15->fields.commandrootTransform, (int32_t)v17, v13, v35);
    v64 = 1050253722;
    v16 = (struct PlayMakerFSM_o *)j_il2cpp_value_box_0(float_TypeInfo, &v64, v36, v37, v38);
    v40 = (struct UISprite_o *)v16;
    if ( v16 )
    {
      v16 = (struct PlayMakerFSM_o *)sub_1C2D5CC(v16, v15->klass->_1.element_class);
      if ( !v16 )
        goto LABEL_81;
    }
    if ( LODWORD(v15->fields.m_CancellationTokenSource) <= 7 )
      goto LABEL_79;
    v15->fields.selectinfo_sprite = v40;
    sub_1C2D434((CGThumbnailListItem_o *)&v15->fields.selectinfo_sprite, (int32_t)v40, v13, v39);
    v16 = (struct PlayMakerFSM_o *)StringLiteral_18742/*"easetype"*/;
    if ( StringLiteral_18742/*"easetype"*/ )
    {
      v16 = (struct PlayMakerFSM_o *)sub_1C2D5CC(StringLiteral_18742/*"easetype"*/, v15->klass->_1.element_class);
      if ( !v16 )
        goto LABEL_81;
      v17 = (struct System_Single_array *)StringLiteral_18742/*"easetype"*/;
    }
    else
    {
      v17 = 0;
    }
    if ( LODWORD(v15->fields.m_CancellationTokenSource) <= 8 )
      goto LABEL_79;
    v15->fields.firstbonus_q = (struct UnityEngine_GameObject_o *)v17;
    sub_1C2D434((CGThumbnailListItem_o *)&v15->fields.firstbonus_q, (int32_t)v17, v13, v41);
    v63 = 1;
    v16 = (struct PlayMakerFSM_o *)j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v63, v42, v43, v44);
    v46 = (struct UnityEngine_GameObject_o *)v16;
    if ( v16 )
    {
      v16 = (struct PlayMakerFSM_o *)sub_1C2D5CC(v16, v15->klass->_1.element_class);
      if ( !v16 )
        goto LABEL_81;
    }
    if ( LODWORD(v15->fields.m_CancellationTokenSource) <= 9 )
      goto LABEL_79;
    v15->fields.firstbonus_a = v46;
    sub_1C2D434((CGThumbnailListItem_o *)&v15->fields.firstbonus_a, (int32_t)v46, v13, v45);
    v16 = (struct PlayMakerFSM_o *)StringLiteral_20959/*"islocal"*/;
    if ( StringLiteral_20959/*"islocal"*/ )
    {
      v16 = (struct PlayMakerFSM_o *)sub_1C2D5CC(StringLiteral_20959/*"islocal"*/, v15->klass->_1.element_class);
      if ( !v16 )
        goto LABEL_81;
      v17 = (struct System_Single_array *)StringLiteral_20959/*"islocal"*/;
    }
    else
    {
      v17 = 0;
    }
    if ( LODWORD(v15->fields.m_CancellationTokenSource) <= 0xA )
LABEL_79:
      sub_1C2D6F4(v16, v17, v13);
    v15->fields.firstbonus_b = (struct UnityEngine_GameObject_o *)v17;
    sub_1C2D434((CGThumbnailListItem_o *)&v15->fields.firstbonus_b, (int32_t)v17, v13, v47);
    v62[0] = 1;
    v16 = (struct PlayMakerFSM_o *)j_il2cpp_value_box_0(bool_TypeInfo, v62, v48, v49, v50);
    v52 = (struct UnityEngine_GameObject_o *)v16;
    if ( v16 )
    {
      v16 = (struct PlayMakerFSM_o *)sub_1C2D5CC(v16, v15->klass->_1.element_class);
      if ( !v16 )
        goto LABEL_81;
    }
    if ( LODWORD(v15->fields.m_CancellationTokenSource) <= 0xB )
      goto LABEL_79;
    v15->fields.firstaura_q = v52;
    sub_1C2D434((CGThumbnailListItem_o *)&v15->fields.firstaura_q, (int32_t)v52, v13, v51);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    v53 = iTween__Hash((System_Object_array *)v15, 0);
    iTween__MoveTo_63095428((UnityEngine_GameObject_o *)v9, v53, 0);
    this = (BattlePerformanceCommandCard_o *)v2->fields.aubelist;
    if ( !this )
      goto LABEL_80;
    m_CachedPtr = this->fields.m_CachedPtr;
    v57 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++HIDWORD(this->fields.m_CancellationTokenSource);
    if ( !m_CachedPtr )
      goto LABEL_80;
    m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v9,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    }
    else
    {
      v59 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
      LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v59 + 32) = v9;
      sub_1C2D434((CGThumbnailListItem_o *)(v59 + 32), (int32_t)v9, v54, v55);
    }
    --v8;
  }
  while ( v8 );
  this = (BattlePerformanceCommandCard_o *)BaseMonoBehaviour__createObject_40963840(
                                             (BaseMonoBehaviour_o *)v2,
                                             (System_String_o *)StringLiteral_18889/*"effect/ef_critlaunch"*/,
                                             v2->fields.criticalpointTr,
                                             0,
                                             0);
  perf = v2->fields.perf;
  if ( !perf || (this = (BattlePerformanceCommandCard_o *)perf->fields.statusPerf) == 0 )
LABEL_80:
    sub_1C2D6EC(this, method);
  BattlePerformanceStatus__updateCriticalPoint((BattlePerformanceStatus_o *)this, -1, 0, 0);
}


void BattlePerformanceCommandCard__openCommandCard(
        BattlePerformanceCommandCard_o *this,
        bool isStatTac,
        const MethodInfo *method)
{
  UnityEngine_Object_o *maskSprite; // x21
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  UIWidget_o *backTacticalButton; // x0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  System_Collections_IEnumerator_o *v11; // x0
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x2
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v16; // x20
  int max_length; // w9
  unsigned int v18; // w21
  struct BattleCommandComponent_array *v19; // x8
  struct BattleCommandComponent_array *v20; // x8

  if ( (byte_4C293BB & 1) == 0 )
  {
    sub_1C2D490(&Method_BattlePerformanceCommandCard_openCommandCard__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_16775/*"anim_draw"*/);
    byte_4C293BB = 1;
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0, 0) )
  {
    backTacticalButton = (UIWidget_o *)this->fields.maskSprite;
    if ( !backTacticalButton )
      goto LABEL_26;
    UIWidget__set_depth(backTacticalButton, -31, 0);
  }
  BattlePerformanceCommandCard__playAnimation(this, (System_String_o *)StringLiteral_16775/*"anim_draw"*/, v7);
  backTacticalButton = (UIWidget_o *)this->fields.backTacticalButton;
  if ( !backTacticalButton )
    goto LABEL_26;
  backTacticalButton = (UIWidget_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)backTacticalButton,
                                       0);
  if ( !backTacticalButton )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backTacticalButton, 1, 0);
  BattlePerformanceCommandCard__SetBackTacticalButton(this, 1, v9);
  if ( isStatTac )
  {
    v11 = BattlePerformanceCommandCard__waitFallStar(this, v10);
    UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v11, 0);
  }
  v12 = Method_BattlePerformanceCommandCard_openCommandCard__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_openCommandCard__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1C2D4A8(Method_BattlePerformanceCommandCard_openCommandCard__);
  v13 = (System_Reflection_MethodBase_o *)sub_1C2D474(v12, v12[4]);
  OverwriteAssetSoundName__PlayCommonSe(v13, 4, 0, 0);
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_26:
    sub_1C2D6EC(backTacticalButton, v6);
  v16 = 4;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    v18 = v16 - 4;
    if ( (int)v16 - 4 >= max_length )
      break;
    if ( v18 >= max_length )
      goto LABEL_28;
    backTacticalButton = (UIWidget_o *)*((_QWORD *)&commandCompArray->obj.klass + v16);
    if ( backTacticalButton )
    {
      BattleCommandComponent__setTouchFlg((BattleCommandComponent_o *)backTacticalButton, 0, 0);
      v19 = this->fields.commandCompArray;
      if ( v19 )
      {
        if ( v18 >= LODWORD(v19->max_length) )
          goto LABEL_28;
        backTacticalButton = (UIWidget_o *)*((_QWORD *)&v19->obj.klass + v16);
        if ( backTacticalButton )
        {
          BattleCommandComponent__SetCardBuffAlphaAnimFlag((BattleCommandComponent_o *)backTacticalButton, 0, 0);
          v20 = this->fields.commandCompArray;
          if ( v20 )
          {
            if ( v18 >= LODWORD(v20->max_length) )
LABEL_28:
              sub_1C2D6F4(backTacticalButton, v6, v14);
            backTacticalButton = (UIWidget_o *)*((_QWORD *)&v20->obj.klass + v16);
            if ( backTacticalButton )
            {
              BattleCommandComponent__SetTreasureDeviceTypeChange(
                (BattleCommandComponent_o *)backTacticalButton,
                0,
                0,
                0);
              commandCompArray = this->fields.commandCompArray;
              ++v16;
              if ( commandCompArray )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_26;
  }
  BattlePerformanceCommandCard__updateCardMag(this, v6);
}


void BattlePerformanceCommandCard__playAnimation(
        BattlePerformanceCommandCard_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cardRoot; // x21
  float v6; // s8
  float OffsetX; // s9
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x1
  UnityEngine_Transform_o *Item; // x0
  Il2CppObject *Component_object; // x21
  Il2CppObject *v12; // x20
  UnityEngine_Transform_c *klass; // x8
  UnityEngine_Transform_o *v14; // x20
  __int64 v15; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v17; // x0
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C293B6 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1C2D490(&FSUtility_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SimpleAnimation_State_TypeInfo);
    sub_1C2D490(&StringLiteral_16777/*"anim_giveout"*/);
    byte_4C293B6 = 1;
  }
  cardRoot = (UnityEngine_Object_o *)this->fields.cardRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cardRoot, 0, 0) )
  {
    v6 = 0.0;
    OffsetX = 0.0;
    if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_16777/*"anim_giveout"*/, 0) )
    {
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      OffsetX = FSUtility__GetOffsetX(68.0, 0, 0);
    }
    v8 = System_String__op_Equality(name, (System_String_o *)StringLiteral_16777/*"anim_giveout"*/, 0);
    if ( v8 )
      v6 = BattlePerformanceCommandCard__FSCardRootOffsetY((BattlePerformanceCommandCard_o *)v8, v9);
    Item = this->fields.cardRoot;
    if ( !Item )
      goto LABEL_33;
    v18.fields.y = v6 + this->fields.CARD_ROOT_BASE_Y;
    v18.fields.x = OffsetX + this->fields.CARD_ROOT_BASE_X;
    v18.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(Item, v18, 0);
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v12 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Item = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)Item & 1) == 0 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Item = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0, 0);
    if ( ((unsigned __int8)Item & 1) == 0 )
      return;
    if ( v12 )
    {
      Item = (UnityEngine_Transform_o *)UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v12, name, 0);
      if ( Item )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)Item, 0.0, 0);
        UnityEngine_Animation__Play_70908988((UnityEngine_Animation_o *)v12, name, 0);
        return;
      }
    }
LABEL_33:
    sub_1C2D6EC(Item, v9);
  }
  if ( !Component_object )
    goto LABEL_33;
  Item = (UnityEngine_Transform_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)Component_object, name, 0);
  if ( !Item )
    goto LABEL_33;
  klass = Item->klass;
  v14 = Item;
  v15 = *(unsigned __int16 *)&Item->klass->_2.rank;
  if ( *(_WORD *)&Item->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v15;
      p_offset += 2;
      if ( !v15 )
        goto LABEL_23;
    }
    v17 = (__int64)(&klass->vtable._4_GetEnumerator + *(_DWORD *)p_offset);
  }
  else
  {
LABEL_23:
    v17 = sub_1C7DCA8(Item, SimpleAnimation_State_TypeInfo, 4);
  }
  (*(void (__fastcall **)(UnityEngine_Transform_o *, _QWORD, float))v17)(v14, *(_QWORD *)(v17 + 8), 0.0);
  SimpleAnimation__Play_66404364((SimpleAnimation_o *)Component_object, name, 0);
}


void BattlePerformanceCommandCard__playComboEffect(
        BattlePerformanceCommandCard_o *this,
        UnityEngine_GameObject_o *prefab,
        int32_t seName,
        const MethodInfo *method)
{
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  UnityEngine_Transform_o *transform; // x2

  if ( (byte_4C293D6 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattlePerformanceCommandCard_playComboEffect__);
    byte_4C293D6 = 1;
  }
  if ( (seName & 0x80000000) == 0 )
  {
    v7 = Method_BattlePerformanceCommandCard_playComboEffect__;
    if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_playComboEffect__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C2D4A8(Method_BattlePerformanceCommandCard_playComboEffect__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C2D474(v7, v7[4]);
    OverwriteAssetSoundName__PlayCommonSe(v8, seName, 0, 0);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v10);
  transform = UnityEngine_GameObject__get_transform(gameObject, 0);
  BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, prefab, transform, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__playCommandEffect(
        BattlePerformanceCommandCard_o *this,
        int32_t index,
        bool flg,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *selectedcomponents; // x8
  int32_t max_length; // w9

  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_9;
  if ( (index & 0x80000000) == 0 )
  {
    max_length = selectedcomponents->max_length;
    if ( max_length > index )
    {
      if ( max_length <= (unsigned int)index )
        sub_1C2D6F4(this, *(_QWORD *)&index, flg);
      this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[index];
      if ( this )
      {
        BattleCommandComponent__playAttackEffect((BattleCommandComponent_o *)this, flg, 0);
        return;
      }
LABEL_9:
      sub_1C2D6EC(this, index);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__playNobleCardEffect(
        BattlePerformanceCommandCard_o *this,
        int32_t index,
        const MethodInfo *method)
{
  unsigned int v3; // w19
  BattlePerformanceCommandCard_o *v4; // x20
  struct BattleCommandComponent_array *selectedcomponents; // x8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x2
  struct BattleCommandComponent_array *v9; // x8
  UnityEngine_Object_o *v10; // x21
  struct BattleCommandComponent_array *v11; // x8
  UnityEngine_GameObject_o *gameObject; // x21
  const MethodInfo *v13; // x3
  BattlePerformanceCommandCard_o *v14; // x22
  const MethodInfo *v15; // x3
  struct UnityEngine_Transform_o *npTargetTr; // x23
  const MethodInfo *v17; // x3
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  const MethodInfo *v21; // x3
  BattlePerformanceCommandCard_o *v22; // x23
  System_Collections_Hashtable_o *v23; // x0
  struct BattleCommandComponent_array *v24; // x8
  __int64 v25; // x0
  int v26; // [xsp+Ch] [xbp-34h] BYREF

  v3 = index;
  v4 = this;
  if ( (byte_4C293DD & 1) == 0 )
  {
    sub_1C2D490(&Method_BattlePerformanceCommandCard_playNobleCardEffect__);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_22719/*"position"*/);
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&iTween_TypeInfo);
    byte_4C293DD = 1;
  }
  selectedcomponents = v4->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_40;
  if ( (v3 & 0x80000000) == 0 && SLODWORD(selectedcomponents->max_length) > (signed int)v3 )
  {
    v6 = Method_BattlePerformanceCommandCard_playNobleCardEffect__;
    if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_playNobleCardEffect__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C2D4A8(Method_BattlePerformanceCommandCard_playNobleCardEffect__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C2D474(v6, v6[4]);
    OverwriteAssetSoundName__PlayCommonSe(v7, 14, 0, 0);
    v9 = v4->fields.selectedcomponents;
    if ( !v9 )
      goto LABEL_40;
    if ( LODWORD(v9->max_length) <= v3 )
      goto LABEL_41;
    v10 = (UnityEngine_Object_o *)v9->m_Items[v3];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v10, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v11 = v4->fields.selectedcomponents;
      if ( !v11 )
        goto LABEL_40;
      if ( LODWORD(v11->max_length) <= v3 )
        goto LABEL_41;
      this = (BattlePerformanceCommandCard_o *)v11->m_Items[v3];
      if ( !this )
        goto LABEL_40;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      this = (BattlePerformanceCommandCard_o *)sub_1C2D538(object___TypeInfo, 4);
      if ( !this )
        goto LABEL_40;
      v14 = this;
      this = (BattlePerformanceCommandCard_o *)StringLiteral_22719/*"position"*/;
      if ( StringLiteral_22719/*"position"*/ )
      {
        this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(StringLiteral_22719/*"position"*/, v14->klass->_1.element_class);
        if ( !this )
          goto LABEL_42;
        *(_QWORD *)&index = StringLiteral_22719/*"position"*/;
      }
      else
      {
        *(_QWORD *)&index = 0;
      }
      if ( !LODWORD(v14->fields.m_CancellationTokenSource) )
        goto LABEL_41;
      v14->fields.COMMAND_STAMP_POS_X = *(struct System_Single_array **)&index;
      sub_1C2D434((CGThumbnailListItem_o *)&v14->fields.COMMAND_STAMP_POS_X, index, v8, v13);
      npTargetTr = v4->fields.npTargetTr;
      if ( !npTargetTr
        || (this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(v4->fields.npTargetTr, v14->klass->_1.element_class)) != 0 )
      {
        if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 1 )
          goto LABEL_41;
        *(_QWORD *)&v14->fields.COMMAND_STAMP_POS_Y = npTargetTr;
        sub_1C2D434((CGThumbnailListItem_o *)&v14->fields.COMMAND_STAMP_POS_Y, (int32_t)npTargetTr, v8, v15);
        this = (BattlePerformanceCommandCard_o *)StringLiteral_24049/*"time"*/;
        if ( StringLiteral_24049/*"time"*/ )
        {
          this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(StringLiteral_24049/*"time"*/, v14->klass->_1.element_class);
          if ( !this )
            goto LABEL_42;
          *(_QWORD *)&index = StringLiteral_24049/*"time"*/;
        }
        else
        {
          *(_QWORD *)&index = 0;
        }
        if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 2 )
          goto LABEL_41;
        *(_QWORD *)&v14->fields.CARD_ROOT_BASE_X = *(_QWORD *)&index;
        sub_1C2D434((CGThumbnailListItem_o *)&v14->fields.CARD_ROOT_BASE_X, index, v8, v17);
        v26 = 1056964608;
        this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v26, v18, v19, v20);
        v22 = this;
        if ( !this || (this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(this, v14->klass->_1.element_class)) != 0 )
        {
          if ( LODWORD(v14->fields.m_CancellationTokenSource) > 3 )
          {
            v14->fields.commandfsm = (struct PlayMakerFSM_o *)v22;
            sub_1C2D434((CGThumbnailListItem_o *)&v14->fields.commandfsm, (int32_t)v22, v8, v21);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v23 = iTween__Hash((System_Object_array *)v14, 0);
            iTween__MoveTo_63095428(gameObject, v23, 0);
            v24 = v4->fields.selectedcomponents;
            if ( !v24 )
              goto LABEL_40;
            if ( LODWORD(v24->max_length) > v3 )
            {
              this = (BattlePerformanceCommandCard_o *)v24->m_Items[v3];
              if ( this )
              {
                BattleCommandComponent__playNpAttackEffect((BattleCommandComponent_o *)this, 0.5, 0);
                return;
              }
LABEL_40:
              sub_1C2D6EC(this, *(_QWORD *)&index);
            }
          }
LABEL_41:
          sub_1C2D6F4(this, *(_QWORD *)&index, v8);
        }
      }
LABEL_42:
      v25 = sub_1C2D710(this);
      sub_1C2D5B8(v25, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__playTypeEffect(
        BattlePerformanceCommandCard_o *this,
        bool flg,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *selectedcomponents; // x8
  BattlePerformanceCommandCard_o *v4; // x19
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9

  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
LABEL_7:
    sub_1C2D6EC(this, flg);
  v4 = this;
  v5 = 0;
  v6 = flg;
  while ( 1 )
  {
    max_length = selectedcomponents->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C2D6F4(this, flg, method);
    this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[v5];
    if ( this )
    {
      BattleCommandComponent__flashType((BattleCommandComponent_o *)this, v6, 0);
      selectedcomponents = v4->fields.selectedcomponents;
      ++v5;
      if ( selectedcomponents )
        continue;
    }
    goto LABEL_7;
  }
}


void BattlePerformanceCommandCard__registCommandCard(
        BattlePerformanceCommandCard_o *this,
        BattleCommandData_array *list,
        const MethodInfo *method)
{
  BattleCommandComponent_o *Bdata; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int max_length; // w9
  signed int v9; // w8
  __int64 v10; // x27
  Il2CppClass **v11; // x28
  Il2CppClass *v12; // x8
  BattleCommandData_o **v13; // x28
  Il2CppClass *v14; // t1
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v16; // x23
  BattleServantData_o *v17; // x22
  struct UnityEngine_Transform_array *v18; // x8
  UnityEngine_Transform_o *v19; // x23
  struct BattleCommandComponent_array *commandCompArray; // x8
  struct BattleCommandComponent_array *v21; // x8
  struct BattleCommandComponent_array *v22; // x8
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  struct UnityEngine_GameObject_array *v24; // x8
  __int64 v25; // x23
  il2cpp_array_size_t v26; // x9
  unsigned int v27; // w20
  struct BattleCommandComponent_array *v28; // x8
  struct UnityEngine_GameObject_array *v29; // x8
  Il2CppObject *Component_object; // x20
  UnityEngine_Object_o *v31; // x20
  struct BattleCommandComponent_array *v32; // x8
  UnityEngine_Object_o *v33; // x20
  struct BattleCommandComponent_array *v34; // x8
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C293B7 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UITweener___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_16778/*"anim_wait"*/);
    byte_4C293B7 = 1;
  }
  BattlePerformanceCommandCard__playAnimation(this, (System_String_o *)StringLiteral_16778/*"anim_wait"*/, method);
  if ( !list )
    goto LABEL_67;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( v9 < (unsigned int)max_length )
    {
      v10 = v9;
      v11 = &list->obj.klass + v9;
      Bdata = (BattleCommandComponent_o *)this->fields.Bdata;
      v14 = v11[4];
      v13 = (BattleCommandData_o **)(v11 + 4);
      v12 = v14;
      if ( !v14 )
        goto LABEL_67;
      if ( !Bdata )
        goto LABEL_67;
      Bdata = (BattleCommandComponent_o *)BattleData__getServantData((BattleData_o *)Bdata, v12->_1.byval_arg.bits, 0);
      commandTransformArray = this->fields.commandTransformArray;
      if ( !commandTransformArray )
        goto LABEL_67;
      if ( (unsigned int)v10 >= LODWORD(commandTransformArray->max_length) )
        break;
      v16 = commandTransformArray->m_Items[v10];
      v17 = (BattleServantData_o *)Bdata;
      if ( !byte_4C20DA1 )
      {
        Bdata = (BattleCommandComponent_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA1 = 1;
      }
      if ( !v16 )
        goto LABEL_67;
      UnityEngine_Transform__set_localPosition(v16, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      v18 = this->fields.commandTransformArray;
      if ( !v18 )
        goto LABEL_67;
      if ( (unsigned int)v10 >= LODWORD(v18->max_length) )
        break;
      v19 = v18->m_Items[v10];
      if ( !byte_4C20DA1 )
      {
        Bdata = (BattleCommandComponent_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA1 = 1;
      }
      if ( !v19 )
        goto LABEL_67;
      UnityEngine_Transform__set_localScale(v19, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      commandCompArray = this->fields.commandCompArray;
      if ( !commandCompArray )
        goto LABEL_67;
      if ( (unsigned int)v10 >= LODWORD(commandCompArray->max_length) || (unsigned int)v10 >= LODWORD(list->max_length) )
        break;
      Bdata = commandCompArray->m_Items[v10];
      if ( !Bdata )
        goto LABEL_67;
      BattleCommandComponent__setData(Bdata, *v13, v17, 0, 1, 0, 1, 0);
      v21 = this->fields.commandCompArray;
      if ( !v21 )
        goto LABEL_67;
      if ( (unsigned int)v10 >= LODWORD(v21->max_length) )
        break;
      Bdata = v21->m_Items[v10];
      if ( !Bdata )
        goto LABEL_67;
      BattleCommandComponent__SetPowerUpCardValue(Bdata, 0, 0);
      v22 = this->fields.commandCompArray;
      if ( !v22 )
        goto LABEL_67;
      if ( (unsigned int)v10 >= LODWORD(v22->max_length) || (unsigned int)v10 >= LODWORD(list->max_length) )
        break;
      if ( !*v13 )
        goto LABEL_67;
      Bdata = v22->m_Items[v10];
      if ( !Bdata )
        goto LABEL_67;
      BattleCommandComponent__SetPowerUpCardIcon(Bdata, (*v13)->fields.commandCardParam, 2, 0, 0);
      p_commandlist = this->fields.p_commandlist;
      if ( !p_commandlist )
        goto LABEL_67;
      if ( (unsigned int)v10 >= LODWORD(p_commandlist->max_length) )
        break;
      Bdata = (BattleCommandComponent_o *)p_commandlist->m_Items[v10];
      if ( !Bdata )
        goto LABEL_67;
      Bdata = (BattleCommandComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                            (UnityEngine_GameObject_o *)Bdata,
                                            (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      if ( !Bdata )
        goto LABEL_67;
      v35.fields.r = 1.0;
      v35.fields.g = 1.0;
      v35.fields.b = 1.0;
      v35.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)Bdata, v35, 0);
      max_length = list->max_length;
      v9 = v10 + 1;
      if ( (int)v10 + 1 >= max_length )
        goto LABEL_36;
    }
LABEL_68:
    sub_1C2D6F4(Bdata, v6, v7);
  }
LABEL_36:
  v24 = this->fields.p_commandlist;
  if ( !v24 )
    goto LABEL_67;
  v25 = 4;
  while ( 1 )
  {
    v26 = v24->max_length;
    v27 = v25 - 4;
    if ( (int)v25 - 4 >= (int)v26 )
      break;
    v28 = this->fields.commandCompArray;
    if ( !v28 )
      goto LABEL_67;
    if ( v27 >= LODWORD(v28->max_length) )
      goto LABEL_68;
    Bdata = (BattleCommandComponent_o *)*((_QWORD *)&v28->obj.klass + v25);
    if ( Bdata )
    {
      BattleCommandComponent__setTouchFlg(Bdata, 0, 0);
      v29 = this->fields.p_commandlist;
      if ( v29 )
      {
        if ( v27 >= LODWORD(v29->max_length) )
          goto LABEL_68;
        Bdata = (BattleCommandComponent_o *)*((_QWORD *)&v29->obj.klass + v25);
        if ( Bdata )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)Bdata,
                               (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UITweener___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          Bdata = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(
                                                (UnityEngine_Object_o *)Component_object,
                                                0,
                                                0);
          if ( ((unsigned __int8)Bdata & 1) != 0 )
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)Component_object, 0);
          }
          v24 = this->fields.p_commandlist;
          ++v25;
          if ( v24 )
            continue;
        }
      }
    }
    goto LABEL_67;
  }
  if ( (unsigned int)v26 <= 8 )
    goto LABEL_68;
  v31 = (UnityEngine_Object_o *)v24->m_Items[8];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Bdata = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v31, 0, 0);
  if ( ((unsigned __int8)Bdata & 1) != 0 )
  {
    v32 = this->fields.commandCompArray;
    if ( !v32 )
      goto LABEL_67;
    if ( LODWORD(v32->max_length) <= 8 )
      goto LABEL_68;
    v33 = (UnityEngine_Object_o *)v32->m_Items[8];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Bdata = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v33, 0, 0);
    if ( ((unsigned __int8)Bdata & 1) != 0 )
    {
      v34 = this->fields.commandCompArray;
      if ( v34 )
      {
        if ( LODWORD(v34->max_length) <= 8 )
          goto LABEL_68;
        Bdata = v34->m_Items[8];
        if ( Bdata )
        {
          BattleCommandComponent__setData(Bdata, 0, 0, 0, 1, 0, 1, 0);
          return;
        }
      }
LABEL_67:
      sub_1C2D6EC(Bdata, v6);
    }
  }
}


void BattlePerformanceCommandCard__resetCommandCard(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *Component_object; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  __int64 v8; // x21
  int max_length; // w9
  unsigned int v10; // w22
  struct UnityEngine_GameObject_array *v11; // x8

  if ( (byte_4C293B9 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_1C2D490(&StringLiteral_16778/*"anim_wait"*/);
    byte_4C293B9 = 1;
  }
  BattlePerformanceCommandCard__playAnimation(this, (System_String_o *)StringLiteral_16778/*"anim_wait"*/, v2);
  p_commandlist = this->fields.p_commandlist;
  if ( !p_commandlist )
LABEL_14:
    sub_1C2D6EC(Component_object, v5);
  v8 = 9;
  while ( 1 )
  {
    max_length = p_commandlist->max_length;
    v10 = v8 - 4;
    if ( (int)v8 - 4 >= max_length )
      break;
    if ( v10 >= max_length )
      goto LABEL_16;
    Component_object = (Il2CppObject *)*((_QWORD *)&p_commandlist->obj.klass + v8);
    if ( Component_object )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Component_object,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
      if ( Component_object )
      {
        BattleCommandComponent__setTouchFlg((BattleCommandComponent_o *)Component_object, 0, 0);
        v11 = this->fields.p_commandlist;
        if ( v11 )
        {
          if ( v10 >= LODWORD(v11->max_length) )
LABEL_16:
            sub_1C2D6F4(Component_object, v5, v6);
          Component_object = (Il2CppObject *)*((_QWORD *)&v11->obj.klass + v8);
          if ( Component_object )
          {
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)Component_object,
                                 (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
            if ( Component_object )
            {
              BattleCommandComponent__initView((BattleCommandComponent_o *)Component_object, 0);
              p_commandlist = this->fields.p_commandlist;
              ++v8;
              if ( p_commandlist )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_14;
  }
}


void BattlePerformanceCommandCard__selectAutoCard(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformanceCommandCard_o *v3; // x19
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v5; // x21
  int max_length; // w9
  BattleCommandComponent_o *v7; // x20
  int v8; // w20

  v3 = this;
  if ( (byte_4C293F5 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_21414/*"markindex"*/);
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&StringLiteral_11510/*"SELECTCARD"*/);
    byte_4C293F5 = 1;
  }
  commandCompArray = v3->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_12;
  v5 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v5 >= max_length )
      return;
    if ( (unsigned int)v5 >= max_length )
      sub_1C2D6F4(this, method, v2);
    v7 = commandCompArray->m_Items[v5];
    if ( !v7 )
      goto LABEL_12;
    if ( !v7->fields.selectflg )
      break;
LABEL_11:
    ++v5;
    if ( !commandCompArray )
      goto LABEL_12;
  }
  this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__getMarkIndex(v7, 0);
  if ( ((unsigned int)this & 0x80000000) != 0 )
  {
    commandCompArray = v3->fields.commandCompArray;
    goto LABEL_11;
  }
  this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__getMarkIndex(v7, 0);
  if ( !v3->fields.commandfsm
    || (v8 = (int)this, (this = (BattlePerformanceCommandCard_o *)PlayMakerFSM__get_Fsm(v3->fields.commandfsm, 0)) == 0)
    || (this = (BattlePerformanceCommandCard_o *)this->fields.selectinfo_sprite) == 0
    || (this = (BattlePerformanceCommandCard_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                                   (System_String_o *)StringLiteral_21414/*"markindex"*/,
                                                   0)) == 0
    || (LODWORD(this->fields.commandfsm) = v8, (this = (BattlePerformanceCommandCard_o *)v3->fields.commandfsm) == 0) )
  {
LABEL_12:
    sub_1C2D6EC(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11510/*"SELECTCARD"*/, 0);
}


void BattlePerformanceCommandCard__selectCommandCard(
        BattlePerformanceCommandCard_o *this,
        int32_t atcount,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  struct BattlePerformance_o *perf; // x8

  BattlePerformanceCommandCard__setCountRemaining(this, atcount, method);
  perf = this->fields.perf;
  if ( !perf )
    sub_1C2D6EC(v5, v6);
  perf->fields.istactical = atcount == 3;
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__selectOK(
        BattlePerformanceCommandCard_o *this,
        int32_t markindex,
        const MethodInfo *method)
{
  int32_t v3; // w20
  BattlePerformanceCommandCard_o *v4; // x19
  struct BattleCommandComponent_array *commandCompArray; // x8
  int v6; // w22
  il2cpp_array_size_t max_length; // x9
  Il2CppClass **v8; // x8
  BattleCommandComponent_o *v9; // x21
  const MethodInfo *v10; // x3
  struct System_Int32_array *selectcommand; // x10
  int v12; // w11
  int32_t v13; // w12
  __int64 *v14; // x8
  signed int v15; // w10
  __int64 v16; // x26
  Il2CppClass **v17; // x8
  BattleCommandComponent_o *v18; // x21
  struct BattleCommandComponent_array *selectedcomponents; // x22
  __int64 v20; // x23
  const MethodInfo *v21; // x3
  Il2CppClass **v22; // x0
  struct UISprite_o *selectinfo_sprite; // x22
  System_String_o *v24; // x0
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  struct UnityEngine_GameObject_array *v26; // x8
  UnityEngine_GameObject_o *v27; // x22
  const MethodInfo *v28; // x3
  BattlePerformanceCommandCard_o *v29; // x23
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  const MethodInfo *v33; // x3
  BattlePerformanceCommandCard_o *v34; // x24
  const MethodInfo *v35; // x3
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  const MethodInfo *v39; // x3
  BattlePerformanceCommandCard_o *v40; // x24
  const MethodInfo *v41; // x3
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  const MethodInfo *v45; // x3
  BattlePerformanceCommandCard_o *v46; // x24
  System_Collections_Hashtable_o *v47; // x0
  float v48; // s10
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  const MethodInfo *v50; // x3
  struct System_Single_array *COMMAND_STAMP_POS_X; // x8
  int32_t v52; // w1
  const MethodInfo *v53; // x2
  int32_t CommandType; // w0
  const MethodInfo *v55; // x2
  System_Collections_IEnumerator_o *started; // x0
  const MethodInfo *v57; // x1
  int32_t drawcount; // w9
  int32_t maxdrawcount; // w8
  int32_t v60; // w9
  struct System_Int32_array *v61; // x8
  System_Action_o *v62; // x20
  __int64 v63; // x0
  char v64[4]; // [xsp+8h] [xbp-88h] BYREF
  int v65; // [xsp+Ch] [xbp-84h] BYREF
  int v66; // [xsp+18h] [xbp-78h] BYREF
  int32_t targetIndex; // [xsp+1Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  v3 = markindex;
  v4 = this;
  if ( (byte_4C293C4 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattlePerformanceCommandCard__selectOK_b__112_0__);
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&FSUtility_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_5014/*"DISSELECT"*/);
    sub_1C2D490(&StringLiteral_11509/*"SELECT"*/);
    sub_1C2D490(&StringLiteral_3276/*"CANCEL"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_9645/*"OPEN_SEALED"*/);
    sub_1C2D490(&StringLiteral_24943/*"y"*/);
    sub_1C2D490(&StringLiteral_20959/*"islocal"*/);
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&iTween_TypeInfo);
    byte_4C293C4 = 1;
  }
  commandCompArray = v4->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_11;
  v6 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( v6 >= (int)max_length )
      break;
    if ( v6 >= (unsigned int)max_length )
      goto LABEL_103;
    v8 = &commandCompArray->obj.klass + v6;
    v9 = (BattleCommandComponent_o *)v8[4];
    if ( !v9 )
      goto LABEL_11;
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkMark((BattleCommandComponent_o *)v8[4], v3, 0);
    if ( ((unsigned __int8)this & 1) != 0 && v9->fields.selectflg )
    {
      BattlePerformanceCommandCard__unselectCommandCard(v4, v9, v3, v10);
      this = (BattlePerformanceCommandCard_o *)v4->fields.commandfsm;
      if ( this )
      {
        v14 = &StringLiteral_3276/*"CANCEL"*/;
        goto LABEL_101;
      }
      goto LABEL_11;
    }
    commandCompArray = v4->fields.commandCompArray;
    ++v6;
    if ( !commandCompArray )
      goto LABEL_11;
  }
  if ( v4->fields.maxdrawcount <= v4->fields.drawcount )
  {
    this = (BattlePerformanceCommandCard_o *)v4->fields.commandfsm;
    if ( this )
    {
      v14 = &StringLiteral_5014/*"DISSELECT"*/;
LABEL_101:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v14, 0);
      return;
    }
    goto LABEL_11;
  }
  targetIndex = -1;
  selectcommand = v4->fields.selectcommand;
  if ( !selectcommand )
    goto LABEL_11;
  v12 = selectcommand->max_length;
  if ( v12 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v12 )
        goto LABEL_103;
      if ( selectcommand->m_Items[v13] == -1 )
        break;
      if ( ++v13 >= v12 )
        goto LABEL_25;
    }
    targetIndex = v13;
  }
LABEL_25:
  if ( (int)max_length < 1 )
  {
LABEL_93:
    drawcount = v4->fields.drawcount;
    maxdrawcount = v4->fields.maxdrawcount;
    if ( drawcount < maxdrawcount )
    {
      v60 = drawcount + 1;
      v4->fields.drawcount = v60;
      BattlePerformanceCommandCard__selectCommandCard(v4, maxdrawcount - v60, method);
      v61 = v4->fields.selectcommand;
      if ( !v61 )
        goto LABEL_11;
      if ( (unsigned int)targetIndex >= LODWORD(v61->max_length) )
LABEL_103:
        sub_1C2D6F4(this, *(_QWORD *)&markindex, method);
      v61->m_Items[targetIndex] = v3;
    }
    this = (BattlePerformanceCommandCard_o *)v4->fields.commandfsm;
    if ( this )
    {
      v14 = &StringLiteral_11509/*"SELECT"*/;
      goto LABEL_101;
    }
LABEL_11:
    sub_1C2D6EC(this, *(_QWORD *)&markindex);
  }
  v15 = 0;
  while ( 1 )
  {
    if ( v15 >= (unsigned int)max_length )
      goto LABEL_103;
    v16 = v15;
    v17 = &commandCompArray->obj.klass + v15;
    v18 = (BattleCommandComponent_o *)v17[4];
    if ( !v18 )
      goto LABEL_11;
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkMark(
                                               (BattleCommandComponent_o *)v17[4],
                                               v3,
                                               0);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_91:
    commandCompArray = v4->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_11;
    LODWORD(max_length) = commandCompArray->max_length;
    v15 = v16 + 1;
    if ( (int)v16 + 1 >= (int)max_length )
      goto LABEL_93;
  }
  if ( BattleCommandComponent__get_isSealed(v18, 0)
    || BattleCommandComponent__isTreasureDvc(v18, 0) && BattleCommandComponent__get_isKindOfDontAction(v18, 0) )
  {
    this = (BattlePerformanceCommandCard_o *)v4->fields.commandfsm;
    if ( this )
    {
      v14 = &StringLiteral_9645/*"OPEN_SEALED"*/;
      goto LABEL_101;
    }
    goto LABEL_11;
  }
  this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__isTreasureDvc(v18, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_36;
  this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__get_SealStatus(v18, 0);
  if ( !this )
    goto LABEL_11;
  this = (BattlePerformanceCommandCard_o *)BattleCommandSealStatus__get_IsTreasureDeviceError(
                                             (BattleCommandSealStatus_o *)this,
                                             0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_36:
    v18->fields.selectflg = 1;
    selectedcomponents = v4->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_11;
    v20 = targetIndex;
    this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(v18, selectedcomponents->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_104:
      v63 = sub_1C2D710(this);
      sub_1C2D5B8(v63, 0);
    }
    if ( (unsigned int)v20 >= LODWORD(selectedcomponents->max_length) )
      goto LABEL_103;
    v22 = &selectedcomponents->obj.klass + v20;
    v22[4] = (Il2CppClass *)v18;
    sub_1C2D434((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v18, (int32_t)method, v21);
    this = (BattlePerformanceCommandCard_o *)v4->fields.commandfsm;
    if ( !this )
      goto LABEL_11;
    this = (BattlePerformanceCommandCard_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
    if ( !this )
      goto LABEL_11;
    selectinfo_sprite = this->fields.selectinfo_sprite;
    v24 = System_Int32__ToString((int32_t)&targetIndex, 0);
    this = (BattlePerformanceCommandCard_o *)System_String__Concat_63457864(
                                               (System_String_o *)StringLiteral_11509/*"SELECT"*/,
                                               v24,
                                               0);
    if ( !selectinfo_sprite )
      goto LABEL_11;
    this = (BattlePerformanceCommandCard_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                               (HutongGames_PlayMaker_FsmVariables_o *)selectinfo_sprite,
                                               (System_String_o *)this,
                                               0);
    p_commandlist = v4->fields.p_commandlist;
    if ( !p_commandlist )
      goto LABEL_11;
    if ( (unsigned int)v16 >= LODWORD(p_commandlist->max_length) )
      goto LABEL_103;
    if ( !this )
      goto LABEL_11;
    HutongGames_PlayMaker_FsmGameObject__set_Value(
      (HutongGames_PlayMaker_FsmGameObject_o *)this,
      p_commandlist->m_Items[v16],
      0);
    v26 = v4->fields.p_commandlist;
    if ( !v26 )
      goto LABEL_11;
    if ( (unsigned int)v16 >= LODWORD(v26->max_length) )
      goto LABEL_103;
    v27 = v26->m_Items[v16];
    this = (BattlePerformanceCommandCard_o *)sub_1C2D538(object___TypeInfo, 6);
    if ( !this )
      goto LABEL_11;
    v29 = this;
    this = (BattlePerformanceCommandCard_o *)StringLiteral_24943/*"y"*/;
    if ( StringLiteral_24943/*"y"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(StringLiteral_24943/*"y"*/, v29->klass->_1.element_class);
      if ( !this )
        goto LABEL_104;
      *(_QWORD *)&markindex = StringLiteral_24943/*"y"*/;
    }
    else
    {
      *(_QWORD *)&markindex = 0;
    }
    if ( !LODWORD(v29->fields.m_CancellationTokenSource) )
      goto LABEL_103;
    v29->fields.COMMAND_STAMP_POS_X = *(struct System_Single_array **)&markindex;
    sub_1C2D434((CGThumbnailListItem_o *)&v29->fields.COMMAND_STAMP_POS_X, markindex, (int32_t)method, v28);
    v66 = 20;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(int_TypeInfo, &v66, v30, v31, v32);
    v34 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(this, v29->klass->_1.element_class);
      if ( !this )
        goto LABEL_104;
    }
    if ( LODWORD(v29->fields.m_CancellationTokenSource) <= 1 )
      goto LABEL_103;
    *(_QWORD *)&v29->fields.COMMAND_STAMP_POS_Y = v34;
    sub_1C2D434((CGThumbnailListItem_o *)&v29->fields.COMMAND_STAMP_POS_Y, (int32_t)v34, (int32_t)method, v33);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_24049/*"time"*/;
    if ( StringLiteral_24049/*"time"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(StringLiteral_24049/*"time"*/, v29->klass->_1.element_class);
      if ( !this )
        goto LABEL_104;
      *(_QWORD *)&markindex = StringLiteral_24049/*"time"*/;
    }
    else
    {
      *(_QWORD *)&markindex = 0;
    }
    if ( LODWORD(v29->fields.m_CancellationTokenSource) <= 2 )
      goto LABEL_103;
    *(_QWORD *)&v29->fields.CARD_ROOT_BASE_X = *(_QWORD *)&markindex;
    sub_1C2D434((CGThumbnailListItem_o *)&v29->fields.CARD_ROOT_BASE_X, markindex, (int32_t)method, v35);
    v65 = 1045220557;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v65, v36, v37, v38);
    v40 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(this, v29->klass->_1.element_class);
      if ( !this )
        goto LABEL_104;
    }
    if ( LODWORD(v29->fields.m_CancellationTokenSource) <= 3 )
      goto LABEL_103;
    v29->fields.commandfsm = (struct PlayMakerFSM_o *)v40;
    sub_1C2D434((CGThumbnailListItem_o *)&v29->fields.commandfsm, (int32_t)v40, (int32_t)method, v39);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_20959/*"islocal"*/;
    if ( StringLiteral_20959/*"islocal"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(StringLiteral_20959/*"islocal"*/, v29->klass->_1.element_class);
      if ( !this )
        goto LABEL_104;
      *(_QWORD *)&markindex = StringLiteral_20959/*"islocal"*/;
    }
    else
    {
      *(_QWORD *)&markindex = 0;
    }
    if ( LODWORD(v29->fields.m_CancellationTokenSource) <= 4 )
      goto LABEL_103;
    v29->fields.commandprefab = *(struct UnityEngine_GameObject_o **)&markindex;
    sub_1C2D434((CGThumbnailListItem_o *)&v29->fields.commandprefab, markindex, (int32_t)method, v41);
    v64[0] = 1;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(bool_TypeInfo, v64, v42, v43, v44);
    v46 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(this, v29->klass->_1.element_class);
      if ( !this )
        goto LABEL_104;
    }
    if ( LODWORD(v29->fields.m_CancellationTokenSource) <= 5 )
      goto LABEL_103;
    v29->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v46;
    sub_1C2D434((CGThumbnailListItem_o *)&v29->fields.selectCommandPrefab, (int32_t)v46, (int32_t)method, v45);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    v47 = iTween__Hash((System_Object_array *)v29, 0);
    iTween__MoveTo_63095428(v27, v47, 0);
    BattleCommandComponent__stopAnimation(v18, 0);
    BattleCommandComponent__selectCard(v18, targetIndex, 0);
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    this = (BattlePerformanceCommandCard_o *)FSUtility__IsUnderVista(0);
    if ( ((unsigned __int8)this & 1) != 0 )
      v48 = 0.0;
    else
      v48 = 17.0;
    if ( (unsigned int)v16 <= 4 )
    {
      this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0);
      COMMAND_STAMP_POS_X = v4->fields.COMMAND_STAMP_POS_X;
      if ( !COMMAND_STAMP_POS_X )
        goto LABEL_11;
      if ( (unsigned int)v16 >= LODWORD(COMMAND_STAMP_POS_X->max_length) )
        goto LABEL_103;
      if ( !this )
        goto LABEL_11;
      position = UnityEngine_Transform__TransformPoint_71190304(
                   (UnityEngine_Transform_o *)this,
                   COMMAND_STAMP_POS_X->m_Items[v16],
                   v48 + v4->fields.COMMAND_STAMP_POS_Y,
                   v4->fields.COMMAND_STAMP_POS_Z,
                   0);
    }
    else
    {
      commandTransformArray = v4->fields.commandTransformArray;
      if ( !commandTransformArray )
        goto LABEL_11;
      if ( (unsigned int)v16 >= LODWORD(commandTransformArray->max_length) )
        goto LABEL_103;
      this = (BattlePerformanceCommandCard_o *)commandTransformArray->m_Items[v16];
      if ( !this )
        goto LABEL_11;
      position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
    }
    BattlePerformanceCommandCard__SetSelectStamp(v4, targetIndex, position, v18, v50);
    if ( !targetIndex )
    {
      CommandType = BattleCommandComponent__getCommandType(v18, 0);
      started = BattlePerformanceCommandCard__coStartFirstBonus(v4, CommandType, v55);
      UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)v4, started, 0);
    }
    BattlePerformanceCommandCard__checkChainBonus(v4, v52, v53);
    BattlePerformanceCommandCard__checkMaskEnemy(v4, v57);
    goto LABEL_91;
  }
  v62 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v62, (Il2CppObject *)v4, Method_BattlePerformanceCommandCard__selectOK_b__112_0__, 0);
  BattleCommandComponent__PlayTDErrorAnimation(v18, v62, 0);
}


void BattlePerformanceCommandCard__setAtkButtonFlg(
        BattlePerformanceCommandCard_o *this,
        bool flg,
        const MethodInfo *method)
{
  bool v3; // w1

  v3 = flg;
  this->fields.isPressAtkBtn = v3;
  BattlePerformanceCommandCard__SetBackTacticalButton(this, v3, method);
}


void BattlePerformanceCommandCard__setComboEffectPrefab(
        BattlePerformanceCommandCard_o *this,
        BattleComboData_o *combo,
        UnityEngine_GameObject_o **prefab,
        int32_t *seName,
        const MethodInfo *method)
{
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_GameObject_o *cutin_ordererror; // x1
  int32_t flashtype; // w23
  int32_t samecount; // w8
  int32_t v16; // w23
  int32_t v17; // w8
  int32_t v18; // w23
  int32_t v19; // w8

  if ( (byte_4C293D5 & 1) == 0 )
  {
    sub_1C2D490(&BattleCommand_TypeInfo);
    byte_4C293D5 = 1;
  }
  *seName = -1;
  *prefab = 0;
  sub_1C2D434((CGThumbnailListItem_o *)prefab, 0, (int32_t)prefab, (const MethodInfo *)seName);
  if ( !combo )
    sub_1C2D6EC(v9, v10);
  if ( combo->fields.chainError )
  {
    *seName = 27;
    cutin_ordererror = this->fields.cutin_ordererror;
LABEL_6:
    *prefab = cutin_ordererror;
    sub_1C2D434((CGThumbnailListItem_o *)prefab, (int32_t)cutin_ordererror, v11, v12);
    return;
  }
  if ( combo->fields.flash )
  {
    *seName = 25;
    flashtype = combo->fields.flashtype;
    if ( !BattleCommand_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
    if ( BattleCommand__isARTS(flashtype, 0) )
    {
      samecount = combo->fields.samecount;
      if ( (unsigned int)(samecount - 1) < 2 )
      {
        cutin_ordererror = this->fields.cutin_trinity_a;
        goto LABEL_6;
      }
      if ( samecount == 3 )
      {
        *seName = 26;
        cutin_ordererror = this->fields.cutin_grand_a;
        goto LABEL_6;
      }
    }
    else
    {
      v16 = combo->fields.flashtype;
      if ( !BattleCommand_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
      if ( BattleCommand__isBUSTER(v16, 0) )
      {
        v17 = combo->fields.samecount;
        if ( (unsigned int)(v17 - 1) < 2 )
        {
          cutin_ordererror = this->fields.cutin_trinity_b;
          goto LABEL_6;
        }
        if ( v17 == 3 )
        {
          *seName = 26;
          cutin_ordererror = this->fields.cutin_grand_b;
          goto LABEL_6;
        }
      }
      else
      {
        v18 = combo->fields.flashtype;
        if ( !BattleCommand_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
        if ( BattleCommand__isQUICK(v18, 0) )
        {
          v19 = combo->fields.samecount;
          if ( (unsigned int)(v19 - 1) < 2 )
          {
            cutin_ordererror = this->fields.cutin_trinity_q;
            goto LABEL_6;
          }
          if ( v19 == 3 )
          {
            *seName = 26;
            cutin_ordererror = this->fields.cutin_grand_q;
            goto LABEL_6;
          }
        }
      }
    }
  }
  else
  {
    if ( combo->fields.isMighty )
    {
      if ( BattleComboData__isExtraAttack(combo, 0) )
      {
        *seName = 26;
        cutin_ordererror = this->fields.cutin_grand_m;
      }
      else
      {
        *seName = 25;
        cutin_ordererror = this->fields.cutin_trinity_m;
      }
      goto LABEL_6;
    }
    if ( combo->fields.samecount == 3 )
    {
      *seName = 26;
      cutin_ordererror = this->fields.cutin_single;
      goto LABEL_6;
    }
  }
}


void BattlePerformanceCommandCard__setCommandCard(
        BattlePerformanceCommandCard_o *this,
        BattleCommandData_array *list,
        int32_t maxdrawcount,
        const MethodInfo *method)
{
  struct BattleCommandData_array **p_commandlist; // x21
  __int64 klass; // x0
  BattleCommandData_o *v8; // x1
  const MethodInfo *v9; // x2
  struct BattleCommandData_array *commandlist; // x11
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v12; // x9
  BattleCommandData_o **m_Items; // x11
  BattleCommandData_o *v14; // x12
  struct BattleCommandComponent_array *commandCompArray; // x8
  const MethodInfo *v16; // x3
  struct BattleCommandComponent_array *v17; // x8
  _DWORD *v18; // x22
  unsigned int v19; // w26
  unsigned int max_length; // w9
  BattleCommandComponent_o *v21; // x25
  _DWORD *v22; // x24
  CGThumbnailListItem_o *v23; // x24
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v25; // x25
  struct UnityEngine_Transform_array *v26; // x8
  UnityEngine_Transform_o *v27; // x25
  UnityEngine_GameObject_o *gameObject; // x24
  struct BattleCommandData_array *v29; // x8
  unsigned int v30; // w26
  _UNKNOWN **v31; // x25
  struct UnityEngine_Transform_array *v32; // x8
  UnityEngine_Transform_o *v33; // x24
  struct UnityEngine_Transform_array *v34; // x8
  UnityEngine_Transform_o *v35; // x24
  struct UnityEngine_GameObject_array *v36; // x8
  unsigned int v37; // w19
  const MethodInfo *v38; // x3
  __int64 v39; // x24
  _UNKNOWN **v40; // x21
  _DWORD *v41; // x25
  CGThumbnailListItem_o *v42; // x25
  struct BattleCommandData_array *v43; // x8
  BattleCommandData_o *v44; // x24
  BattleCommandComponent_o *v45; // x25
  struct UnityEngine_GameObject_array *v46; // x8
  struct System_Int32_array *selectcommand; // x11
  unsigned __int64 v48; // x8
  unsigned __int64 v49; // x9
  int32_t *v50; // x11
  struct BattleCommandComponent_array *selectedcomponents; // x8
  unsigned __int64 v52; // x19
  __int64 v53; // x21
  unsigned __int64 v54; // x9
  __int64 v55; // x0
  struct BattleCommandData_array **v57; // [xsp+18h] [xbp-68h]
  UnityEngine_Color_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C293BE & 1) == 0 )
  {
    sub_1C2D490(&BattleCommandComponent___TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C293BE = 1;
  }
  p_commandlist = &this->fields.commandlist;
  this->fields.commandlist = list;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandlist, (int32_t)list, maxdrawcount, method);
  commandlist = this->fields.commandlist;
  if ( !commandlist )
    goto LABEL_84;
  max_length_low = LODWORD(commandlist->max_length);
  if ( (__int64)(max_length_low << 32) >= 1 )
  {
    v12 = 0;
    m_Items = commandlist->m_Items;
    while ( v12 < max_length_low )
    {
      v14 = m_Items[v12];
      if ( v14 )
        v14->fields.markindex = v12;
      if ( (__int64)++v12 >= (int)max_length_low )
        goto LABEL_10;
    }
LABEL_89:
    sub_1C2D6F4(klass, v8, v9);
  }
LABEL_10:
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_84;
  klass = sub_1C2D538(BattleCommandComponent___TypeInfo, LODWORD(commandCompArray->max_length));
  v17 = this->fields.commandCompArray;
  if ( !v17 )
    goto LABEL_84;
  v18 = (_DWORD *)klass;
  v19 = 5;
  while ( 1 )
  {
    max_length = v17->max_length;
    if ( (int)v19 >= (int)max_length )
      break;
    if ( v19 >= max_length )
      goto LABEL_89;
    if ( v18 )
    {
      v21 = v17->m_Items[v19];
      if ( v21 )
      {
        klass = sub_1C2D5CC(v21, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
        if ( !klass )
        {
LABEL_90:
          v55 = sub_1C2D710(klass);
          sub_1C2D5B8(v55, 0);
        }
      }
      if ( v19 >= v18[6] )
        goto LABEL_89;
      v22 = &v18[2 * v19];
      *((_QWORD *)v22 + 4) = v21;
      v23 = (CGThumbnailListItem_o *)(v22 + 8);
      sub_1C2D434(v23, (int32_t)v21, (int32_t)v9, v16);
      if ( v19 >= v18[6] )
        goto LABEL_89;
      klass = (__int64)v23->klass;
      if ( v23->klass )
      {
        BattleCommandComponent__setData((BattleCommandComponent_o *)klass, 0, 0, 0, 1, 0, 1, 0);
        commandTransformArray = this->fields.commandTransformArray;
        if ( commandTransformArray )
        {
          if ( v19 >= LODWORD(commandTransformArray->max_length) )
            goto LABEL_89;
          v25 = commandTransformArray->m_Items[v19];
          if ( !byte_4C20DA1 )
          {
            klass = sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
            byte_4C20DA1 = 1;
          }
          if ( v25 )
          {
            UnityEngine_Transform__set_localPosition(v25, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
            v26 = this->fields.commandTransformArray;
            if ( v26 )
            {
              if ( v19 >= LODWORD(v26->max_length) )
                goto LABEL_89;
              v27 = v26->m_Items[v19];
              if ( !byte_4C20DA1 )
              {
                klass = sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
                byte_4C20DA1 = 1;
              }
              if ( v27 )
              {
                UnityEngine_Transform__set_localScale(v27, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
                if ( v19 >= v18[6] )
                  goto LABEL_89;
                klass = (__int64)v23->klass;
                if ( v23->klass )
                {
                  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0);
                  if ( !iTween_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                  ++v19;
                  iTween__Stop_63205768(gameObject, 0);
                  v17 = this->fields.commandCompArray;
                  if ( v17 )
                    continue;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_84;
  }
  v29 = *p_commandlist;
  if ( !*p_commandlist )
    goto LABEL_84;
  v30 = 0;
  v31 = &off_4C20000;
  v57 = &this->fields.commandlist;
  while ( (signed int)v30 < SLODWORD(v29->max_length) )
  {
    v32 = this->fields.commandTransformArray;
    if ( !v32 )
      goto LABEL_84;
    if ( v30 >= LODWORD(v32->max_length) )
      goto LABEL_89;
    v33 = v32->m_Items[v30];
    if ( !byte_4C20DA1 )
    {
      klass = sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA1 = 1;
    }
    if ( !v33 )
      goto LABEL_84;
    UnityEngine_Transform__set_localPosition(v33, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    v34 = this->fields.commandTransformArray;
    if ( !v34 )
      goto LABEL_84;
    if ( v30 >= LODWORD(v34->max_length) )
      goto LABEL_89;
    v35 = v34->m_Items[v30];
    if ( !*((_BYTE *)v31 + 3494) )
    {
      klass = sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      *((_BYTE *)v31 + 3494) = 1;
    }
    if ( !v35 )
      goto LABEL_84;
    UnityEngine_Transform__set_localScale(v35, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    v29 = *p_commandlist;
    if ( !*p_commandlist )
      goto LABEL_84;
    if ( v30 >= LODWORD(v29->max_length) )
      goto LABEL_89;
    if ( v30 >= 5 )
    {
      v8 = v29->m_Items[v30];
      if ( v8 )
      {
        klass = BattlePerformanceCommandCard__GetServantNumber(this, v8, v9);
        v36 = this->fields.p_commandlist;
        if ( !v36 )
          goto LABEL_84;
        v37 = klass + 5;
        if ( (unsigned int)(klass + 5) >= LODWORD(v36->max_length) )
          goto LABEL_89;
        klass = (__int64)v36->m_Items[v37];
        if ( !klass )
          goto LABEL_84;
        klass = (__int64)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)klass,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
        if ( !v18 )
          goto LABEL_84;
        v39 = klass;
        if ( klass )
        {
          klass = sub_1C2D5CC(klass, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
          if ( !klass )
            goto LABEL_90;
        }
        if ( v37 >= v18[6] )
          goto LABEL_89;
        v40 = v31;
        v41 = &v18[2 * v37];
        *((_QWORD *)v41 + 4) = v39;
        v42 = (CGThumbnailListItem_o *)(v41 + 8);
        sub_1C2D434(v42, v39, (int32_t)v9, v38);
        if ( v37 >= v18[6] )
          goto LABEL_89;
        v43 = *v57;
        if ( !*v57 )
          goto LABEL_84;
        if ( v30 >= LODWORD(v43->max_length) )
          goto LABEL_89;
        v44 = v43->m_Items[v30];
        if ( !v44 )
          goto LABEL_84;
        klass = (__int64)this->fields.Bdata;
        if ( !klass )
          goto LABEL_84;
        v45 = (BattleCommandComponent_o *)v42->klass;
        klass = (__int64)BattleData__getServantData((BattleData_o *)klass, v44->fields.uniqueId, 0);
        if ( !v45 )
          goto LABEL_84;
        BattleCommandComponent__setData(v45, v44, (BattleServantData_o *)klass, 0, 1, 0, 1, 0);
        v46 = this->fields.p_commandlist;
        if ( !v46 )
          goto LABEL_84;
        if ( v37 >= LODWORD(v46->max_length) )
          goto LABEL_89;
        v31 = v40;
        klass = (__int64)v46->m_Items[v37];
        p_commandlist = &this->fields.commandlist;
        if ( !klass )
          goto LABEL_84;
        klass = (__int64)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)klass,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( !klass )
          goto LABEL_84;
        v58.fields.r = 0.0;
        v58.fields.g = 0.0;
        v58.fields.b = 0.0;
        v58.fields.a = 0.01;
        UIWidget__set_color((UIWidget_o *)klass, v58, 0);
        v29 = *v57;
      }
    }
    ++v30;
    if ( !v29 )
      goto LABEL_84;
  }
  selectcommand = this->fields.selectcommand;
  if ( !selectcommand )
    goto LABEL_84;
  v48 = LODWORD(selectcommand->max_length);
  if ( (__int64)(v48 << 32) >= 1 )
  {
    v49 = 0;
    v50 = selectcommand->m_Items;
    while ( v49 < v48 )
    {
      v50[v49++] = -1;
      if ( (__int64)v49 >= (int)v48 )
        goto LABEL_79;
    }
    goto LABEL_89;
  }
LABEL_79:
  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_84;
  v52 = 0;
  v53 = 32;
  while ( 1 )
  {
    v54 = LODWORD(selectedcomponents->max_length);
    if ( v53 == 56 )
      break;
    if ( v52 >= v54 )
      goto LABEL_89;
    *(Il2CppClass **)((char *)&selectedcomponents->obj.klass + v53) = 0;
    sub_1C2D434((CGThumbnailListItem_o *)((char *)selectedcomponents + v53), 0, (int32_t)v9, v16);
    selectedcomponents = this->fields.selectedcomponents;
    ++v52;
    v53 += 8;
    if ( !selectedcomponents )
      goto LABEL_84;
  }
  if ( (unsigned int)v54 <= 3 )
    goto LABEL_89;
  klass = (__int64)selectedcomponents->m_Items[3];
  if ( !klass
    || (klass = (__int64)UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)klass,
                           (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0 )
  {
LABEL_84:
    sub_1C2D6EC(klass, v8);
  }
  v59.fields.r = 0.0;
  v59.fields.g = 0.0;
  v59.fields.b = 0.0;
  v59.fields.a = 0.0;
  UIWidget__set_color((UIWidget_o *)klass, v59, 0);
  this->fields.drawcount = 0;
  this->fields.maxdrawcount = maxdrawcount;
}


void BattlePerformanceCommandCard__setCountRemaining(
        BattlePerformanceCommandCard_o *this,
        int32_t count,
        const MethodInfo *method)
{
  UnityEngine_Object_o *selectinfo_sprite; // x21
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  UISprite_o *v9; // x20
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  __int64 v12; // x1
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C293DE & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_20289/*"img_battle_select{0:0}"*/);
    byte_4C293DE = 1;
  }
  selectinfo_sprite = (UnityEngine_Object_o *)this->fields.selectinfo_sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectinfo_sprite, 0, 0) )
  {
    v9 = this->fields.selectinfo_sprite;
    v13 = count;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v6, v7, v8);
    v11 = System_String__Format((System_String_o *)StringLiteral_20289/*"img_battle_select{0:0}"*/, v10, 0);
    if ( !v9 )
      sub_1C2D6EC(v11, v12);
    UISprite__set_spriteName(v9, v11, 0);
  }
}


void BattlePerformanceCommandCard__setFirstAura(
        BattlePerformanceCommandCard_o *this,
        BattleCommandComponent_o *comp,
        int32_t type,
        const MethodInfo *method)
{
  _BOOL8 isQUICK; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o **p_firstaura_q; // x8

  if ( (byte_4C293CC & 1) == 0 )
  {
    sub_1C2D490(&BattleCommand_TypeInfo);
    byte_4C293CC = 1;
  }
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  isQUICK = BattleCommand__isQUICK(type, 0);
  if ( isQUICK )
  {
    if ( comp )
    {
      p_firstaura_q = &this->fields.firstaura_q;
LABEL_18:
      BattleCommandComponent__addFirstAura(comp, *p_firstaura_q, 0);
      return;
    }
    goto LABEL_20;
  }
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  isQUICK = BattleCommand__isARTS(type, 0);
  if ( isQUICK )
  {
    if ( comp )
    {
      p_firstaura_q = &this->fields.firstaura_a;
      goto LABEL_18;
    }
LABEL_20:
    sub_1C2D6EC(isQUICK, v8);
  }
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  isQUICK = BattleCommand__isBUSTER(type, 0);
  if ( isQUICK )
  {
    if ( comp )
    {
      p_firstaura_q = &this->fields.firstaura_b;
      goto LABEL_18;
    }
    goto LABEL_20;
  }
}


void BattlePerformanceCommandCard__setPrevStarsFlg(
        BattlePerformanceCommandCard_o *this,
        bool flg,
        const MethodInfo *method)
{
  this->fields.isPrevStar = flg;
}


void BattlePerformanceCommandCard__set_IsPlayingBackStar(
        BattlePerformanceCommandCard_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsPlayingBackStar_k__BackingField = value;
}


System_Collections_IEnumerator_o *BattlePerformanceCommandCard__showComboEffect(
        BattlePerformanceCommandCard_o *this,
        BattleComboData_o *combo,
        System_String_o *endproc,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C293D2 & 1) == 0 )
  {
    sub_1C2D490(&BattlePerformanceCommandCard__showComboEffect_d__133_TypeInfo);
    byte_4C293D2 = 1;
  }
  v7 = sub_1C2D6DC(BattlePerformanceCommandCard__showComboEffect_d__133_TypeInfo);
  BattlePerformanceCommandCard__showComboEffect_d__133___ctor(
    (BattlePerformanceCommandCard__showComboEffect_d__133_o *)v7,
    0,
    0);
  if ( !v7 )
    sub_1C2D6EC(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 40) = combo;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 40), (int32_t)combo, v12, v13);
  *(_QWORD *)(v7 + 48) = endproc;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 48), (int32_t)endproc, v14, v15);
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *BattlePerformanceCommandCard__showComboEffectNormal(
        BattlePerformanceCommandCard_o *this,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C293D4 & 1) == 0 )
  {
    sub_1C2D490(&BattlePerformanceCommandCard__showComboEffectNormal_d__135_TypeInfo);
    byte_4C293D4 = 1;
  }
  v5 = sub_1C2D6DC(BattlePerformanceCommandCard__showComboEffectNormal_d__135_TypeInfo);
  BattlePerformanceCommandCard__showComboEffectNormal_d__135___ctor(
    (BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = combo;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 40), (int32_t)combo, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *BattlePerformanceCommandCard__showComboEffectShort(
        BattlePerformanceCommandCard_o *this,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C293D3 & 1) == 0 )
  {
    sub_1C2D490(&BattlePerformanceCommandCard__showComboEffectShort_d__134_TypeInfo);
    byte_4C293D3 = 1;
  }
  v5 = sub_1C2D6DC(BattlePerformanceCommandCard__showComboEffectShort_d__134_TypeInfo);
  BattlePerformanceCommandCard__showComboEffectShort_d__134___ctor(
    (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = combo;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 40), (int32_t)combo, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void BattlePerformanceCommandCard__startComboEffect(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceCommandCard_o *v3; // x19
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *data; // x8
  System_Collections_IEnumerator_o *v6; // x1

  v3 = this;
  if ( (byte_4C293D1 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&StringLiteral_5447/*"END_PROC"*/);
    byte_4C293D1 = 1;
  }
  perf = v3->fields.perf;
  if ( !perf || (data = perf->fields.data) == 0 )
    sub_1C2D6EC(this, method);
  v6 = BattlePerformanceCommandCard__showComboEffect(
         v3,
         data->fields.combodata,
         (System_String_o *)StringLiteral_5447/*"END_PROC"*/,
         v2);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)v3, v6, 0);
}


void BattlePerformanceCommandCard__startFirstBonus(
        BattlePerformanceCommandCard_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x1

  started = BattlePerformanceCommandCard__coStartFirstBonus(this, type, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, started, 0);
}


void BattlePerformanceCommandCard__startMiniCard(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformanceCommandCard_o *v3; // x19
  __int64 v4; // x23
  struct BattleCommandComponent_array *selectedcomponents; // x8
  struct BattleCommandComponent_array *v6; // x8
  struct BattleCommandComponent_array *v7; // x8
  struct BattleCommandComponent_array *v8; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v10; // x3
  BattlePerformanceCommandCard_o *v11; // x21
  struct UnityEngine_Transform_array *miniPos; // x8
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  const MethodInfo *v16; // x3
  BattlePerformanceCommandCard_o *v17; // x22
  const MethodInfo *v18; // x3
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  const MethodInfo *v22; // x3
  BattlePerformanceCommandCard_o *v23; // x22
  const MethodInfo *v24; // x3
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  const MethodInfo *v28; // x3
  BattlePerformanceCommandCard_o *v29; // x22
  System_Collections_Hashtable_o *v30; // x0
  struct BattleCommandComponent_array *v31; // x8
  UnityEngine_GameObject_o *v32; // x20
  const MethodInfo *v33; // x3
  BattlePerformanceCommandCard_o *v34; // x21
  __int64 v35; // x9
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  const MethodInfo *v39; // x3
  BattlePerformanceCommandCard_o *v40; // x22
  const MethodInfo *v41; // x3
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  const MethodInfo *v45; // x3
  BattlePerformanceCommandCard_o *v46; // x22
  const MethodInfo *v47; // x3
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  const MethodInfo *v51; // x3
  BattlePerformanceCommandCard_o *v52; // x22
  System_Collections_Hashtable_o *v53; // x0
  __int64 v54; // x0
  int v55; // [xsp+0h] [xbp-90h] BYREF
  int v56; // [xsp+4h] [xbp-8Ch] BYREF
  __int64 v57; // [xsp+8h] [xbp-88h] BYREF
  float z; // [xsp+10h] [xbp-80h]
  int v59; // [xsp+18h] [xbp-78h] BYREF
  int v60; // [xsp+1Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o position; // [xsp+20h] [xbp-70h] BYREF

  v3 = this;
  if ( (byte_4C293DF & 1) == 0 )
  {
    sub_1C2D490(&iTween_EaseType_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    sub_1C2D490(&StringLiteral_18742/*"easetype"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_22719/*"position"*/);
    sub_1C2D490(&StringLiteral_23173/*"scale"*/);
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&iTween_TypeInfo);
    byte_4C293DF = 1;
  }
  v4 = 0;
  do
  {
    selectedcomponents = v3->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_77;
    if ( (unsigned int)v4 >= LODWORD(selectedcomponents->max_length) )
      goto LABEL_76;
    this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[v4];
    if ( !this )
      goto LABEL_77;
    BattleCommandComponent__setMoveMode((BattleCommandComponent_o *)this, 0);
    v6 = v3->fields.selectedcomponents;
    if ( !v6 )
      goto LABEL_77;
    if ( (unsigned int)v4 >= LODWORD(v6->max_length) )
      goto LABEL_76;
    this = (BattlePerformanceCommandCard_o *)v6->m_Items[v4];
    if ( !this )
      goto LABEL_77;
    BattleCommandComponent__SetCardBuffAlphaAnimFlag((BattleCommandComponent_o *)this, 0, 0);
    v7 = v3->fields.selectedcomponents;
    if ( !v7 )
      goto LABEL_77;
    if ( (unsigned int)v4 >= LODWORD(v7->max_length) )
      goto LABEL_76;
    this = (BattlePerformanceCommandCard_o *)v7->m_Items[v4];
    if ( !this )
      goto LABEL_77;
    BattleCommandComponent__SetTreasureDeviceTypeChange((BattleCommandComponent_o *)this, 0, 0, 0);
    v8 = v3->fields.selectedcomponents;
    if ( !v8 )
      goto LABEL_77;
    if ( (unsigned int)v4 >= LODWORD(v8->max_length) )
      goto LABEL_76;
    this = (BattlePerformanceCommandCard_o *)v8->m_Items[v4];
    if ( !this )
      goto LABEL_77;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    this = (BattlePerformanceCommandCard_o *)sub_1C2D538(object___TypeInfo, 6);
    if ( !this )
      goto LABEL_77;
    v11 = this;
    this = (BattlePerformanceCommandCard_o *)StringLiteral_22719/*"position"*/;
    if ( StringLiteral_22719/*"position"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(StringLiteral_22719/*"position"*/, v11->klass->_1.element_class);
      if ( !this )
        goto LABEL_78;
      method = (const MethodInfo *)StringLiteral_22719/*"position"*/;
    }
    else
    {
      method = 0;
    }
    if ( !LODWORD(v11->fields.m_CancellationTokenSource) )
      goto LABEL_76;
    v11->fields.COMMAND_STAMP_POS_X = (struct System_Single_array *)method;
    sub_1C2D434((CGThumbnailListItem_o *)&v11->fields.COMMAND_STAMP_POS_X, (int32_t)method, v2, v10);
    miniPos = v3->fields.miniPos;
    if ( !miniPos )
      goto LABEL_77;
    if ( (unsigned int)v4 >= LODWORD(miniPos->max_length) )
      goto LABEL_76;
    this = (BattlePerformanceCommandCard_o *)miniPos->m_Items[v4];
    if ( !this )
      goto LABEL_77;
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(
                                               UnityEngine_Vector3_TypeInfo,
                                               &position,
                                               v13,
                                               v14,
                                               v15);
    v17 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(this, v11->klass->_1.element_class);
      if ( !this )
      {
LABEL_78:
        v54 = sub_1C2D710(this);
        sub_1C2D5B8(v54, 0);
      }
    }
    if ( LODWORD(v11->fields.m_CancellationTokenSource) <= 1 )
      goto LABEL_76;
    *(_QWORD *)&v11->fields.COMMAND_STAMP_POS_Y = v17;
    sub_1C2D434((CGThumbnailListItem_o *)&v11->fields.COMMAND_STAMP_POS_Y, (int32_t)v17, v2, v16);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_24049/*"time"*/;
    if ( StringLiteral_24049/*"time"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(StringLiteral_24049/*"time"*/, v11->klass->_1.element_class);
      if ( !this )
        goto LABEL_78;
      method = (const MethodInfo *)StringLiteral_24049/*"time"*/;
    }
    else
    {
      method = 0;
    }
    if ( LODWORD(v11->fields.m_CancellationTokenSource) <= 2 )
      goto LABEL_76;
    *(_QWORD *)&v11->fields.CARD_ROOT_BASE_X = method;
    sub_1C2D434((CGThumbnailListItem_o *)&v11->fields.CARD_ROOT_BASE_X, (int32_t)method, v2, v18);
    v60 = 1045220557;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v60, v19, v20, v21);
    v23 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(this, v11->klass->_1.element_class);
      if ( !this )
        goto LABEL_78;
    }
    if ( LODWORD(v11->fields.m_CancellationTokenSource) <= 3 )
      goto LABEL_76;
    v11->fields.commandfsm = (struct PlayMakerFSM_o *)v23;
    sub_1C2D434((CGThumbnailListItem_o *)&v11->fields.commandfsm, (int32_t)v23, v2, v22);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_18742/*"easetype"*/;
    if ( StringLiteral_18742/*"easetype"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(StringLiteral_18742/*"easetype"*/, v11->klass->_1.element_class);
      if ( !this )
        goto LABEL_78;
      method = (const MethodInfo *)StringLiteral_18742/*"easetype"*/;
    }
    else
    {
      method = 0;
    }
    if ( LODWORD(v11->fields.m_CancellationTokenSource) <= 4 )
LABEL_76:
      sub_1C2D6F4(this, method, v2);
    v11->fields.commandprefab = (struct UnityEngine_GameObject_o *)method;
    sub_1C2D434((CGThumbnailListItem_o *)&v11->fields.commandprefab, (int32_t)method, v2, v24);
    v59 = 21;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v59, v25, v26, v27);
    v29 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(this, v11->klass->_1.element_class);
      if ( !this )
        goto LABEL_78;
    }
    if ( LODWORD(v11->fields.m_CancellationTokenSource) <= 5 )
      goto LABEL_76;
    v11->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v29;
    sub_1C2D434((CGThumbnailListItem_o *)&v11->fields.selectCommandPrefab, (int32_t)v29, v2, v28);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    v30 = iTween__Hash((System_Object_array *)v11, 0);
    iTween__MoveTo_63095428(gameObject, v30, 0);
    v31 = v3->fields.selectedcomponents;
    if ( !v31 )
      goto LABEL_77;
    if ( (unsigned int)v4 >= LODWORD(v31->max_length) )
      goto LABEL_76;
    this = (BattlePerformanceCommandCard_o *)v31->m_Items[v4];
    if ( !this
      || (v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
          (this = (BattlePerformanceCommandCard_o *)sub_1C2D538(object___TypeInfo, 6)) == 0) )
    {
LABEL_77:
      sub_1C2D6EC(this, method);
    }
    v34 = this;
    this = (BattlePerformanceCommandCard_o *)StringLiteral_23173/*"scale"*/;
    if ( StringLiteral_23173/*"scale"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(StringLiteral_23173/*"scale"*/, v34->klass->_1.element_class);
      if ( !this )
        goto LABEL_78;
      method = (const MethodInfo *)StringLiteral_23173/*"scale"*/;
    }
    else
    {
      method = 0;
    }
    if ( !LODWORD(v34->fields.m_CancellationTokenSource) )
      goto LABEL_76;
    v34->fields.COMMAND_STAMP_POS_X = (struct System_Single_array *)method;
    sub_1C2D434((CGThumbnailListItem_o *)&v34->fields.COMMAND_STAMP_POS_X, (int32_t)method, v2, v33);
    v35 = *(_QWORD *)&v3->fields.miniScale.fields.x;
    z = v3->fields.miniScale.fields.z;
    v57 = v35;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v57, v36, v37, v38);
    v40 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(this, v34->klass->_1.element_class);
      if ( !this )
        goto LABEL_78;
    }
    if ( LODWORD(v34->fields.m_CancellationTokenSource) <= 1 )
      goto LABEL_76;
    *(_QWORD *)&v34->fields.COMMAND_STAMP_POS_Y = v40;
    sub_1C2D434((CGThumbnailListItem_o *)&v34->fields.COMMAND_STAMP_POS_Y, (int32_t)v40, v2, v39);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_24049/*"time"*/;
    if ( StringLiteral_24049/*"time"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(StringLiteral_24049/*"time"*/, v34->klass->_1.element_class);
      if ( !this )
        goto LABEL_78;
      method = (const MethodInfo *)StringLiteral_24049/*"time"*/;
    }
    else
    {
      method = 0;
    }
    if ( LODWORD(v34->fields.m_CancellationTokenSource) <= 2 )
      goto LABEL_76;
    *(_QWORD *)&v34->fields.CARD_ROOT_BASE_X = method;
    sub_1C2D434((CGThumbnailListItem_o *)&v34->fields.CARD_ROOT_BASE_X, (int32_t)method, v2, v41);
    v56 = 1045220557;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v56, v42, v43, v44);
    v46 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(this, v34->klass->_1.element_class);
      if ( !this )
        goto LABEL_78;
    }
    if ( LODWORD(v34->fields.m_CancellationTokenSource) <= 3 )
      goto LABEL_76;
    v34->fields.commandfsm = (struct PlayMakerFSM_o *)v46;
    sub_1C2D434((CGThumbnailListItem_o *)&v34->fields.commandfsm, (int32_t)v46, v2, v45);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_18742/*"easetype"*/;
    if ( StringLiteral_18742/*"easetype"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(StringLiteral_18742/*"easetype"*/, v34->klass->_1.element_class);
      if ( !this )
        goto LABEL_78;
      method = (const MethodInfo *)StringLiteral_18742/*"easetype"*/;
    }
    else
    {
      method = 0;
    }
    if ( LODWORD(v34->fields.m_CancellationTokenSource) <= 4 )
      goto LABEL_76;
    v34->fields.commandprefab = (struct UnityEngine_GameObject_o *)method;
    sub_1C2D434((CGThumbnailListItem_o *)&v34->fields.commandprefab, (int32_t)method, v2, v47);
    v55 = 21;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v55, v48, v49, v50);
    v52 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(this, v34->klass->_1.element_class);
      if ( !this )
        goto LABEL_78;
    }
    if ( LODWORD(v34->fields.m_CancellationTokenSource) <= 5 )
      goto LABEL_76;
    v34->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v52;
    sub_1C2D434((CGThumbnailListItem_o *)&v34->fields.selectCommandPrefab, (int32_t)v52, v2, v51);
    v53 = iTween__Hash((System_Object_array *)v34, 0);
    iTween__ScaleTo_63100956(v32, v53, 0);
    ++v4;
  }
  while ( (_DWORD)v4 != 4 );
}


void BattlePerformanceCommandCard__startOpenNpCard(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x0
  struct UnityEngine_Coroutine_o *started; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  v3 = BattlePerformanceCommandCard__colOpenNpCard(this, method);
  started = UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v3, 0);
  this->fields.openNpCoroutine = started;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openNpCoroutine, (int32_t)started, v5, v6);
}


void BattlePerformanceCommandCard__stopFirstBonus(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *firstBonusObject; // x20
  __int64 v4; // x1
  Spawner_o *spawner; // x0

  if ( (byte_4C293CA & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C293CA = 1;
  }
  firstBonusObject = (UnityEngine_Object_o *)this->fields.firstBonusObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(firstBonusObject, 0, 0) )
  {
    spawner = this->fields.spawner;
    if ( !spawner )
      sub_1C2D6EC(0, v4);
    Spawner__Despawn(spawner, this->fields.firstBonusObject, 1, 0);
  }
}


void BattlePerformanceCommandCard__toggleHighSpeedMode(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  __int64 v4; // x1
  struct BattlePerformance_o *perf; // x8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  int32_t v8; // w1
  const MethodInfo *v9; // x2

  if ( (byte_4C29403 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattlePerformanceCommandCard_toggleHighSpeedMode__);
    byte_4C29403 = 1;
  }
  data = (BattleData_o *)BattlePerformanceCommandCard__checkSpeedButtonTutorial(this, method);
  if ( ((unsigned __int8)data & 1) == 0 )
  {
    perf = this->fields.perf;
    if ( !perf || (data = perf->fields.data) == 0 )
      sub_1C2D6EC(data, v4);
    BattleData__toggleHighSpeedMode(data, 0);
    v6 = Method_BattlePerformanceCommandCard_toggleHighSpeedMode__;
    if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_toggleHighSpeedMode__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C2D4A8(Method_BattlePerformanceCommandCard_toggleHighSpeedMode__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C2D474(v6, v6[4]);
    OverwriteAssetSoundName__PlayCommonSe(v7, 9, 0, 0);
    BattlePerformanceCommandCard__updateHighSpeedObject(this, v8, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__touchCommandCard(
        BattlePerformanceCommandCard_o *this,
        int32_t markindex,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0
  int v6; // w21
  const MethodInfo *v7; // x2
  struct BattleData_o *Bdata; // x8
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v10; // x22
  int max_length; // w9
  Il2CppClass **v12; // x8
  Il2CppClass *v13; // x21
  struct BattleData_o *v14; // x8

  if ( (byte_4C293C1 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_21414/*"markindex"*/);
    sub_1C2D490(&StringLiteral_11510/*"SELECTCARD"*/);
    byte_4C293C1 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_30;
  logic = (BattleLogic_o *)BattleLogic__getTutorialId(logic, 0);
  if ( !this->fields.logic )
    goto LABEL_30;
  v6 = (int)logic;
  logic = (BattleLogic_o *)BattleLogic__getTurn(this->fields.logic, 0);
  if ( this->fields.isTouchNgInTutorial )
    return;
  if ( v6 == 1 )
  {
    if ( (unsigned int)((_DWORD)logic - 1) >= 3 )
    {
      if ( (_DWORD)logic == 5 && ((unsigned int)markindex > 5 || ((1 << markindex) & 0x23) == 0) )
        return;
    }
    else if ( (unsigned int)markindex >= 3 )
    {
      return;
    }
  }
  else if ( (v6 & 0xFFFFFFFE) == 2 )
  {
    if ( v6 == 2 && (_DWORD)logic == 2 )
    {
      Bdata = this->fields.Bdata;
      if ( !Bdata )
        goto LABEL_30;
      if ( (unsigned int)markindex > 2 || Bdata->fields.tutorialState == 10 )
        return;
    }
    else if ( (unsigned int)markindex > 2 )
    {
      return;
    }
  }
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_30;
  v10 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v10 >= max_length )
      return;
    if ( (unsigned int)v10 >= max_length )
      sub_1C2D6F4(logic, *(_QWORD *)&markindex, v7);
    v12 = &commandCompArray->obj.klass + v10;
    v13 = v12[4];
    if ( !v13 )
      goto LABEL_30;
    logic = (BattleLogic_o *)BattleCommandComponent__checkMark((BattleCommandComponent_o *)v12[4], markindex, 0);
    if ( ((unsigned __int8)logic & 1) != 0 )
      break;
    commandCompArray = this->fields.commandCompArray;
    ++v10;
    if ( !commandCompArray )
      goto LABEL_30;
  }
  v14 = this->fields.Bdata;
  if ( !v14 )
    goto LABEL_30;
  if ( v14->fields.systemflg_selectcancel || !BYTE4(v13->vtable[5].method) )
  {
    if ( this->fields.directCommandCardTouchEnable )
    {
      BattlePerformanceCommandCard__selectOK(this, markindex, v7);
      return;
    }
    logic = (BattleLogic_o *)this->fields.commandfsm;
    if ( logic )
    {
      logic = (BattleLogic_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)logic, 0);
      if ( logic )
      {
        logic = (BattleLogic_o *)logic->fields.logiclist;
        if ( logic )
        {
          logic = (BattleLogic_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                     (HutongGames_PlayMaker_FsmVariables_o *)logic,
                                     (System_String_o *)StringLiteral_21414/*"markindex"*/,
                                     0);
          if ( logic )
          {
            LODWORD(logic->fields.perf) = markindex;
            logic = (BattleLogic_o *)this->fields.commandfsm;
            if ( logic )
            {
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)logic, (System_String_o *)StringLiteral_11510/*"SELECTCARD"*/, 0);
              return;
            }
          }
        }
      }
    }
LABEL_30:
    sub_1C2D6EC(logic, *(_QWORD *)&markindex);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__unselectCommandCard(
        BattlePerformanceCommandCard_o *this,
        BattleCommandComponent_o *bc,
        int32_t markindex,
        const MethodInfo *method)
{
  BattleCommandComponent_o *v5; // x19
  BattlePerformanceCommandCard_o *v6; // x20
  struct System_Int32_array *selectcommand; // x12
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v9; // x10
  int32_t *m_Items; // x12
  unsigned int v11; // w24
  struct BattleCommandComponent_array *selectedcomponents; // x8
  int v13; // w8
  int32_t v14; // w1
  UnityEngine_GameObject_o *gameObject; // x21
  const MethodInfo *v16; // x3
  BattlePerformanceCommandCard_o *v17; // x22
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  const MethodInfo *v21; // x3
  BattlePerformanceCommandCard_o *v22; // x23
  const MethodInfo *v23; // x3
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  const MethodInfo *v27; // x3
  BattlePerformanceCommandCard_o *v28; // x23
  const MethodInfo *v29; // x3
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  const MethodInfo *v33; // x3
  BattlePerformanceCommandCard_o *v34; // x23
  System_Collections_Hashtable_o *v35; // x0
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x3
  struct BattleCommandComponent_array *v39; // x8
  Il2CppClass **v40; // x0
  int32_t v41; // w1
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x1
  __int64 v44; // x0
  char v45[4]; // [xsp+Ch] [xbp-44h] BYREF
  int v46; // [xsp+18h] [xbp-38h] BYREF
  int v47; // [xsp+1Ch] [xbp-34h] BYREF

  v5 = bc;
  v6 = this;
  if ( (byte_4C293C3 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_24943/*"y"*/);
    sub_1C2D490(&StringLiteral_20959/*"islocal"*/);
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&iTween_TypeInfo);
    byte_4C293C3 = 1;
  }
  selectcommand = v6->fields.selectcommand;
  if ( !selectcommand )
    goto LABEL_51;
  max_length_low = LODWORD(selectcommand->max_length);
  if ( (__int64)(max_length_low << 32) >= 1 )
  {
    v9 = 0;
    m_Items = selectcommand->m_Items;
    v11 = -1;
    do
    {
      if ( v9 >= max_length_low )
        goto LABEL_50;
      if ( m_Items[v9] == markindex )
      {
        v11 = v9;
        m_Items[v9] = -1;
      }
      ++v9;
    }
    while ( (__int64)v9 < (int)max_length_low );
    if ( (v11 & 0x80000000) == 0 )
    {
      selectedcomponents = v6->fields.selectedcomponents;
      if ( !selectedcomponents )
        goto LABEL_51;
      if ( (signed int)v11 >= SLODWORD(selectedcomponents->max_length) )
        return;
      if ( !v5 )
        goto LABEL_51;
      v5->fields.selectflg = 0;
      v13 = v6->fields.drawcount - 1;
      v14 = v6->fields.maxdrawcount - v13;
      v6->fields.drawcount = v13;
      BattlePerformanceCommandCard__selectCommandCard(v6, v14, *(const MethodInfo **)&markindex);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0);
      this = (BattlePerformanceCommandCard_o *)sub_1C2D538(object___TypeInfo, 6);
      if ( !this )
        goto LABEL_51;
      v17 = this;
      this = (BattlePerformanceCommandCard_o *)StringLiteral_24943/*"y"*/;
      if ( StringLiteral_24943/*"y"*/ )
      {
        this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(StringLiteral_24943/*"y"*/, v17->klass->_1.element_class);
        if ( !this )
          goto LABEL_52;
        bc = (BattleCommandComponent_o *)StringLiteral_24943/*"y"*/;
      }
      else
      {
        bc = 0;
      }
      if ( !LODWORD(v17->fields.m_CancellationTokenSource) )
        goto LABEL_50;
      v17->fields.COMMAND_STAMP_POS_X = (struct System_Single_array *)bc;
      sub_1C2D434((CGThumbnailListItem_o *)&v17->fields.COMMAND_STAMP_POS_X, (int32_t)bc, markindex, v16);
      v47 = 0;
      this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v18, v19, v20);
      v22 = this;
      if ( !this || (this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(this, v17->klass->_1.element_class)) != 0 )
      {
        if ( LODWORD(v17->fields.m_CancellationTokenSource) <= 1 )
          goto LABEL_50;
        *(_QWORD *)&v17->fields.COMMAND_STAMP_POS_Y = v22;
        sub_1C2D434((CGThumbnailListItem_o *)&v17->fields.COMMAND_STAMP_POS_Y, (int32_t)v22, markindex, v21);
        this = (BattlePerformanceCommandCard_o *)StringLiteral_24049/*"time"*/;
        if ( StringLiteral_24049/*"time"*/ )
        {
          this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(StringLiteral_24049/*"time"*/, v17->klass->_1.element_class);
          if ( !this )
            goto LABEL_52;
          bc = (BattleCommandComponent_o *)StringLiteral_24049/*"time"*/;
        }
        else
        {
          bc = 0;
        }
        if ( LODWORD(v17->fields.m_CancellationTokenSource) <= 2 )
          goto LABEL_50;
        *(_QWORD *)&v17->fields.CARD_ROOT_BASE_X = bc;
        sub_1C2D434((CGThumbnailListItem_o *)&v17->fields.CARD_ROOT_BASE_X, (int32_t)bc, markindex, v23);
        v46 = 1045220557;
        this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v46, v24, v25, v26);
        v28 = this;
        if ( !this || (this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(this, v17->klass->_1.element_class)) != 0 )
        {
          if ( LODWORD(v17->fields.m_CancellationTokenSource) <= 3 )
            goto LABEL_50;
          v17->fields.commandfsm = (struct PlayMakerFSM_o *)v28;
          sub_1C2D434((CGThumbnailListItem_o *)&v17->fields.commandfsm, (int32_t)v28, markindex, v27);
          this = (BattlePerformanceCommandCard_o *)StringLiteral_20959/*"islocal"*/;
          if ( StringLiteral_20959/*"islocal"*/ )
          {
            this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(StringLiteral_20959/*"islocal"*/, v17->klass->_1.element_class);
            if ( !this )
              goto LABEL_52;
            bc = (BattleCommandComponent_o *)StringLiteral_20959/*"islocal"*/;
          }
          else
          {
            bc = 0;
          }
          if ( LODWORD(v17->fields.m_CancellationTokenSource) <= 4 )
            goto LABEL_50;
          v17->fields.commandprefab = (struct UnityEngine_GameObject_o *)bc;
          sub_1C2D434((CGThumbnailListItem_o *)&v17->fields.commandprefab, (int32_t)bc, markindex, v29);
          v45[0] = 1;
          this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(bool_TypeInfo, v45, v30, v31, v32);
          v34 = this;
          if ( !this || (this = (BattlePerformanceCommandCard_o *)sub_1C2D5CC(this, v17->klass->_1.element_class)) != 0 )
          {
            if ( LODWORD(v17->fields.m_CancellationTokenSource) <= 5 )
              goto LABEL_50;
            v17->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v34;
            sub_1C2D434((CGThumbnailListItem_o *)&v17->fields.selectCommandPrefab, (int32_t)v34, markindex, v33);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v35 = iTween__Hash((System_Object_array *)v17, 0);
            iTween__MoveTo_63095428(gameObject, v35, 0);
            BattleCommandComponent__startMoveFloat(v5, 0);
            if ( v11 )
              BattlePerformanceCommandCard__setFirstAura(v6, v5, v6->fields.firstAuraType, v37);
            else
              BattlePerformanceCommandCard__cancelFirstBonus(v6, v36);
            v39 = v6->fields.selectedcomponents;
            if ( v39 )
            {
              if ( v11 < LODWORD(v39->max_length) )
              {
                v40 = &v39->obj.klass + v11;
                v40[4] = 0;
                sub_1C2D434((CGThumbnailListItem_o *)(v40 + 4), 0, markindex, v38);
                BattlePerformanceCommandCard__checkChainBonus(v6, v41, v42);
                BattlePerformanceCommandCard__checkMaskEnemy(v6, v43);
                BattleCommandComponent__resetSelect(v5, 0);
                return;
              }
LABEL_50:
              sub_1C2D6F4(this, bc, *(_QWORD *)&markindex);
            }
LABEL_51:
            sub_1C2D6EC(this, bc);
          }
        }
      }
LABEL_52:
      v44 = sub_1C2D710(this);
      sub_1C2D5B8(v44, 0);
    }
  }
}


void BattlePerformanceCommandCard__updateBuffIcon(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  BattlePerformanceCommandCard_o *v4; // x19
  __int64 v5; // x21
  struct BattleCommandComponent_array *commandCompArray; // x8
  Il2CppClass **v7; // x8
  BattleCommandComponent_o *v8; // x20

  p_commandlist = this->fields.p_commandlist;
  if ( !p_commandlist )
LABEL_10:
    sub_1C2D6EC(this, method);
  v4 = this;
  v5 = 0;
  while ( (int)v5 < SLODWORD(p_commandlist->max_length) )
  {
    commandCompArray = v4->fields.commandCompArray;
    if ( commandCompArray )
    {
      if ( (unsigned int)v5 >= LODWORD(commandCompArray->max_length) )
        sub_1C2D6F4(this, method, v2);
      v7 = &commandCompArray->obj.klass + v5;
      v8 = (BattleCommandComponent_o *)v7[4];
      if ( v8 )
      {
        this = (BattlePerformanceCommandCard_o *)UnityEngine_Behaviour__get_isActiveAndEnabled(
                                                   (UnityEngine_Behaviour_o *)v7[4],
                                                   0);
        if ( ((unsigned __int8)this & 1) != 0 )
          BattleCommandComponent__setBuffIconList(v8, 1, 0);
        p_commandlist = v4->fields.p_commandlist;
        ++v5;
        if ( p_commandlist )
          continue;
      }
    }
    goto LABEL_10;
  }
}


void BattlePerformanceCommandCard__updateCard(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformanceCommandCard_o *v3; // x19
  __int64 i; // x22
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  UnityEngine_Object_o *v6; // x20
  struct BattleCommandComponent_array *commandCompArray; // x8
  struct BattleCommandComponent_array *v8; // x8
  unsigned __int64 v9; // x22
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v11; // x20

  v3 = this;
  if ( (byte_4C293B8 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C293B8 = 1;
  }
  for ( i = 9; i != 12; ++i )
  {
    p_commandlist = v3->fields.p_commandlist;
    if ( !p_commandlist )
      goto LABEL_28;
    if ( i - 4 >= (unsigned __int64)LODWORD(p_commandlist->max_length) )
      goto LABEL_30;
    v6 = (UnityEngine_Object_o *)*((_QWORD *)&p_commandlist->obj.klass + i);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v6, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      commandCompArray = v3->fields.commandCompArray;
      if ( !commandCompArray )
        goto LABEL_28;
      if ( i - 4 >= (unsigned __int64)LODWORD(commandCompArray->max_length) )
LABEL_30:
        sub_1C2D6F4(this, method, v2);
      this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&commandCompArray->obj.klass + i);
      if ( !this )
        goto LABEL_28;
      BattleCommandComponent__setData((BattleCommandComponent_o *)this, 0, 0, 0, 1, 0, 1, 0);
    }
  }
  v8 = v3->fields.commandCompArray;
  if ( !v8 )
LABEL_28:
    sub_1C2D6EC(this, method);
  v9 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(v8->max_length);
    if ( (__int64)v9 >= (int)max_length_low )
      break;
    if ( v9 >= max_length_low )
      goto LABEL_30;
    v11 = (UnityEngine_Object_o *)v8->m_Items[v9];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v11, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v11 )
        goto LABEL_28;
      BattleCommandComponent__updateView((BattleCommandComponent_o *)v11, 0, 0, 1, 0, 0, 0);
      if ( v11[15].fields.m_CachedPtr
        && BattleCommandComponent__getCriticalCount((BattleCommandComponent_o *)v11, 0) >= 1
        && !v3->fields._IsPlayingBackStar_k__BackingField )
      {
        BattleCommandComponent__setCriticalObject((BattleCommandComponent_o *)v11, 1, 0);
      }
      BattleCommandComponent__UpdateCommandCardEffect((BattleCommandComponent_o *)v11, 0);
    }
    v8 = v3->fields.commandCompArray;
    ++v9;
    if ( !v8 )
      goto LABEL_28;
  }
}


void BattlePerformanceCommandCard__updateCardFix(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  __int64 v4; // x2
  BattlePerformanceCommandCard_o *v5; // x20
  int m_CachedPtr_high; // w8
  int32_t firstaura_b_high; // w21
  int v8; // w8
  int32_t v9; // w22
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v11; // x23
  int max_length; // w9
  unsigned int v13; // w24
  struct BattleCommandComponent_array *v14; // x8
  BattleCommandComponent_o *v15; // x8

  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_18;
  v3 = this;
  this = (BattlePerformanceCommandCard_o *)perf->fields.data;
  if ( !this )
    goto LABEL_18;
  this = (BattlePerformanceCommandCard_o *)BattleData__GetMaximumTurnFixedBuff((BattleData_o *)this, 0);
  v5 = this;
  if ( this )
  {
    m_CachedPtr_high = HIDWORD(this->fields.m_CachedPtr);
    firstaura_b_high = HIDWORD(this->fields.firstaura_b);
    v8 = m_CachedPtr_high + 1 >= 0 ? m_CachedPtr_high + 1 : m_CachedPtr_high + 2;
    v9 = v8 >> 1;
  }
  else
  {
    firstaura_b_high = 0;
    v9 = 0;
  }
  commandCompArray = v3->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_18:
    sub_1C2D6EC(this, method);
  v11 = 4;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    v13 = v11 - 4;
    if ( (int)v11 - 4 >= max_length )
      break;
    if ( v13 >= max_length )
      goto LABEL_20;
    this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&commandCompArray->obj.klass + v11);
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__isTreasureDvc(
                                                 (BattleCommandComponent_o *)this,
                                                 0);
      v14 = v3->fields.commandCompArray;
      if ( v14 )
      {
        if ( v13 >= LODWORD(v14->max_length) )
LABEL_20:
          sub_1C2D6F4(this, method, v4);
        v15 = (BattleCommandComponent_o *)*((_QWORD *)&v14->obj.klass + v11);
        if ( v15 )
        {
          BattleCommandComponent__SetFixedCommandCardBuff(
            v15,
            (v5 != 0) & ((unsigned __int8)this ^ 1),
            v9,
            firstaura_b_high,
            0);
          commandCompArray = v3->fields.commandCompArray;
          ++v11;
          if ( commandCompArray )
            continue;
        }
      }
    }
    goto LABEL_18;
  }
}


void BattlePerformanceCommandCard__updateCardMag(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  BattleData_o *Bdata; // x0
  __int64 v4; // x2
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattleServantData_o *v6; // x20
  __int64 v7; // x21
  int max_length; // w9

  Bdata = this->fields.Bdata;
  if ( !Bdata )
    goto LABEL_10;
  Bdata = (BattleData_o *)BattleData__getServantData(Bdata, Bdata->fields.globaltargetId, 0);
  if ( !Bdata || !this->fields.p_commandlist )
    return;
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_10:
    sub_1C2D6EC(Bdata, method);
  v6 = (BattleServantData_o *)Bdata;
  v7 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1C2D6F4(Bdata, method, v4);
    Bdata = (BattleData_o *)commandCompArray->m_Items[v7];
    if ( Bdata )
    {
      BattleCommandComponent__updateClassMag((BattleCommandComponent_o *)Bdata, v6, 0);
      commandCompArray = this->fields.commandCompArray;
      ++v7;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_10;
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__updateHighSpeedObject(
        BattlePerformanceCommandCard_o *this,
        int32_t speedMode,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0
  struct BattleLogic_o *v5; // x8
  struct BattleData_o *data; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *v8; // x8
  int32_t systemflg_acceleration; // w20
  bool v10; // w1

  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_22;
  logic = (BattleLogic_o *)BattleLogic__isTutorial(logic, 0);
  if ( ((unsigned __int8)logic & 1) != 0 )
  {
    logic = this->fields.logic;
    if ( !logic )
      goto LABEL_22;
    logic = (BattleLogic_o *)BattleLogic__getTutorialId(logic, 0);
    if ( (_DWORD)logic == 2 )
    {
      logic = this->fields.logic;
      if ( !logic )
        goto LABEL_22;
      logic = (BattleLogic_o *)BattleLogic__getTurn(logic, 0);
      if ( (int)logic >= 3 )
      {
        v5 = this->fields.logic;
        if ( !v5 )
          goto LABEL_22;
        data = v5->fields.data;
        if ( !data )
          goto LABEL_22;
        data->fields.systemflg_acceleration = 2;
      }
    }
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_22;
  v8 = perf->fields.data;
  if ( !v8 )
    goto LABEL_22;
  logic = (BattleLogic_o *)this->fields.highSpeedArrowOn;
  if ( !logic )
    goto LABEL_22;
  systemflg_acceleration = v8->fields.systemflg_acceleration;
  logic = (BattleLogic_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)logic, 0);
  if ( !logic )
    goto LABEL_22;
  if ( systemflg_acceleration != 1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)logic, 1, 0);
    logic = (BattleLogic_o *)this->fields.highSpeedArrowOff;
    if ( logic )
    {
      logic = (BattleLogic_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)logic, 0);
      if ( logic )
      {
        v10 = 0;
        goto LABEL_21;
      }
    }
LABEL_22:
    sub_1C2D6EC(logic, *(_QWORD *)&speedMode);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)logic, 0, 0);
  logic = (BattleLogic_o *)this->fields.highSpeedArrowOff;
  if ( !logic )
    goto LABEL_22;
  logic = (BattleLogic_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)logic, 0);
  if ( !logic )
    goto LABEL_22;
  v10 = 1;
LABEL_21:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)logic, v10, 0);
}


void BattlePerformanceCommandCard__updateTDTypeChange(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v4; // x19
  __int64 v5; // x20
  int max_length; // w9

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_7:
    sub_1C2D6EC(this, method);
  v4 = this;
  v5 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C2D6F4(this, method, v2);
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[v5];
    if ( this )
    {
      BattleCommandComponent__UpdateTDTypeChange((BattleCommandComponent_o *)this, 0, 0);
      commandCompArray = v4->fields.commandCompArray;
      ++v5;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_7;
  }
}


System_Collections_IEnumerator_o *BattlePerformanceCommandCard__waitFallStar(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C293BA & 1) == 0 )
  {
    sub_1C2D490(&BattlePerformanceCommandCard__waitFallStar_d__97_TypeInfo);
    byte_4C293BA = 1;
  }
  v3 = sub_1C2D6DC(BattlePerformanceCommandCard__waitFallStar_d__97_TypeInfo);
  BattlePerformanceCommandCard__waitFallStar_d__97___ctor(
    (BattlePerformanceCommandCard__waitFallStar_d__97_o *)v3,
    0,
    0);
  if ( !v3 )
    sub_1C2D6EC(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *BattlePerformanceCommandCard__waitFunc(
        BattlePerformanceCommandCard_o *this,
        float waittime,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C293E6 & 1) == 0 )
  {
    sub_1C2D490(&BattlePerformanceCommandCard__waitFunc_d__169_TypeInfo);
    byte_4C293E6 = 1;
  }
  v7 = sub_1C2D6DC(BattlePerformanceCommandCard__waitFunc_d__169_TypeInfo);
  BattlePerformanceCommandCard__waitFunc_d__169___ctor((BattlePerformanceCommandCard__waitFunc_d__169_o *)v7, 0, 0);
  if ( !v7 )
    sub_1C2D6EC(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v10, v11);
  *(float *)(v7 + 40) = waittime;
  *(_QWORD *)(v7 + 48) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 48), (int32_t)callback, v12, v13);
  return (System_Collections_IEnumerator_o *)v7;
}


void BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122___ctor(
        BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122__MoveNext(
        BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *v4; // x19
  int32_t _1__state; // w8
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  UnityEngine_Object_o *firstBonusSimpleAnimation; // x19
  UnityEngine_Object_o *firstBonusAnimation; // x19

  v4 = this;
  if ( (byte_4C2959C & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2959C = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
    if ( _4__this )
    {
      firstBonusSimpleAnimation = (UnityEngine_Object_o *)_4__this->fields.firstBonusSimpleAnimation;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(firstBonusSimpleAnimation, 0, 0) )
      {
        this = (BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *)_4__this->fields.firstBonusSimpleAnimation;
        if ( this )
        {
          SimpleAnimation__Stop((SimpleAnimation_o *)this, 0);
          this = (BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *)_4__this->fields.firstBonusSimpleAnimation;
          if ( this )
          {
            SimpleAnimation__Play((SimpleAnimation_o *)this, 0);
            return 0;
          }
        }
      }
      else
      {
        firstBonusAnimation = (UnityEngine_Object_o *)_4__this->fields.firstBonusAnimation;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(firstBonusAnimation, 0, 0) )
          return 0;
        this = (BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *)_4__this->fields.firstBonusAnimation;
        if ( this )
        {
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)this, 0);
          this = (BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *)_4__this->fields.firstBonusAnimation;
          if ( this )
          {
            UnityEngine_Animation__Play((UnityEngine_Animation_o *)this, 0);
            return 0;
          }
        }
      }
    }
    sub_1C2D6EC(this, method);
  }
  if ( !_1__state )
  {
    v4->fields.__2__current = 0;
    p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = -1;
    sub_1C2D434(p__2__current, 0, v2, v3);
    result = 1;
    LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122__System_Collections_IEnumerator_Reset(
        BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122__System_Collections_IEnumerator_get_Current(
        BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122__System_IDisposable_Dispose(
        BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePerformanceCommandCard___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2959A & 1) == 0 )
  {
    sub_1C2D490(&BattlePerformanceCommandCard___c_TypeInfo);
    byte_4C2959A = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(BattlePerformanceCommandCard___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattlePerformanceCommandCard___c_TypeInfo->static_fields->__9 = (struct BattlePerformanceCommandCard___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)BattlePerformanceCommandCard___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattlePerformanceCommandCard___c___ctor(BattlePerformanceCommandCard___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattlePerformanceCommandCard___c___DistributeCriticalPoint_b__120_0(
        BattlePerformanceCommandCard___c_o *this,
        BattleCommandComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.data
      && !BattleCommandComponent__isTreasureDvc(x, 0)
      && BattleCommandComponent__getCommandType(x, 0) != 4;
}


bool BattlePerformanceCommandCard___c___coStartFirstBonus_b__119_0(
        BattlePerformanceCommandCard___c_o *this,
        BattleCommandComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.selectflg;
}


bool BattlePerformanceCommandCard___c___showComboEffectShort_b__134_0(
        BattlePerformanceCommandCard___c_o *this,
        BattleCommandComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return BattleCommandComponent__getCommandType(x, 0) == 3;
}


void BattlePerformanceCommandCard___c__DisplayClass120_0___ctor(
        BattlePerformanceCommandCard___c__DisplayClass120_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattlePerformanceCommandCard___c__DisplayClass120_0___DistributeCriticalPoint_b__1(
        BattlePerformanceCommandCard___c__DisplayClass120_0_o *this,
        BattleCommandComponent_o *x,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard___c__DisplayClass120_0_o *v4; // x20
  struct BattlePerformanceCommandCard_o *_4__this; // x8

  v4 = this;
  if ( (byte_4C2959B & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard___c__DisplayClass120_0_o *)sub_1C2D490(&Method_System_Linq_Enumerable_Contains_BattleCommandComponent___);
    byte_4C2959B = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(this, x);
  return System_Linq_Enumerable__Contains_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.selectedcomponents,
           (Il2CppObject *)x,
           (const MethodInfo_30EBBF4 *)Method_System_Linq_Enumerable_Contains_BattleCommandComponent___);
}


void BattlePerformanceCommandCard___c__DisplayClass120_0___DistributeCriticalPoint_b__2(
        BattlePerformanceCommandCard___c__DisplayClass120_0_o *this,
        BattleCommandComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  BattleCommandComponent__AddBoostedCriticalRate(x, this->fields.criticalPercentageToAdd, 0);
}


void BattlePerformanceCommandCard___c__DisplayClass173_0___ctor(
        BattlePerformanceCommandCard___c__DisplayClass173_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattlePerformanceCommandCard___c__DisplayClass173_0___PlayBackStar_b__0(
        BattlePerformanceCommandCard___c__DisplayClass173_0_o *this,
        const MethodInfo *method)
{
  struct BattlePerformanceCommandCard_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(this, method);
  _4__this->fields._IsPlayingBackStar_k__BackingField = 0;
  ActionExtensions__Call(this->fields.callback, 0);
}


void BattlePerformanceCommandCard__coStartFirstBonus_d__119___ctor(
        BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePerformanceCommandCard__coStartFirstBonus_d__119__MoveNext(
        BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *v4; // x20
  int32_t _1__state; // w8
  struct BattlePerformanceCommandCard_o *_4__this; // x19
  UnityEngine_Object_o *firstBonusObject; // x22
  UnityEngine_GameObject_o **p_firstBonusObject; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t type; // w22
  Spawner_o *spawner; // x22
  UnityEngine_Object_o *firstbonus_q; // x23
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  UnityEngine_GameObject_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_GameObject_o *v21; // x22
  Il2CppObject *ComponentInChildren_object__51536504; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  Il2CppObject *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  CGThumbnailListItem_o *p__2__current; // x20
  bool result; // w0
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v31; // x21
  int max_length; // w9
  int32_t v33; // w22
  struct BattlePerformance_o *perf; // x8
  int32_t FirstBonusCriticalRate; // w0
  int32_t v36; // w20
  System_Object_array *v37; // x21
  BattlePerformanceCommandCard___c_c *v38; // x0
  System_Func_object__bool__o *_9__119_0; // x22
  Il2CppObject *v40; // x23
  struct BattlePerformanceCommandCard___c_StaticFields *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  Il2CppObject *object; // x21
  int32_t v45; // w22
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4C2959D & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Find_BattleCommandComponent___);
    sub_1C2D490(&BattleCommand_TypeInfo);
    sub_1C2D490(&System_Func_BattleCommandComponent__bool__TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation____78064608);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation____78064640);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_BattlePerformanceCommandCard___c__coStartFirstBonus_b__119_0__);
    this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)sub_1C2D490(&BattlePerformanceCommandCard___c_TypeInfo);
    byte_4C2959D = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_39;
    goto LABEL_28;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_39;
  firstBonusObject = (UnityEngine_Object_o *)_4__this->fields.firstBonusObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_firstBonusObject = &_4__this->fields.firstBonusObject;
  if ( UnityEngine_Object__op_Inequality(firstBonusObject, 0, 0) )
  {
    this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)_4__this->fields.spawner;
    if ( !this )
      goto LABEL_39;
    Spawner__Despawn((Spawner_o *)this, *p_firstBonusObject, 1, 0);
    *p_firstBonusObject = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.firstBonusObject, 0, v9, v10);
  }
  type = v4->fields.type;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)BattleCommand__isQUICK(type, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    spawner = _4__this->fields.spawner;
    firstbonus_q = (UnityEngine_Object_o *)_4__this->fields.firstbonus_q;
    if ( byte_4C20DA1 )
    {
LABEL_16:
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      x = static_fields->zeroVector.fields.x;
      y = static_fields->zeroVector.fields.y;
      z = static_fields->zeroVector.fields.z;
      if ( !byte_4C20DA7 )
      {
        this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)sub_1C2D490(&UnityEngine_Quaternion_TypeInfo);
        byte_4C20DA7 = 1;
      }
      if ( !spawner )
        goto LABEL_39;
      v46.fields.x = x;
      v46.fields.y = y;
      v46.fields.z = z;
      v18 = Spawner__Spawn_40500736(
              spawner,
              firstbonus_q,
              v46,
              UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
              0);
      *p_firstBonusObject = v18;
      sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.firstBonusObject, (int32_t)v18, v19, v20);
      goto LABEL_20;
    }
LABEL_15:
    this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
    goto LABEL_16;
  }
  v33 = v4->fields.type;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)BattleCommand__isARTS(v33, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    spawner = _4__this->fields.spawner;
    firstbonus_q = (UnityEngine_Object_o *)_4__this->fields.firstbonus_a;
    if ( byte_4C20DA1 )
      goto LABEL_16;
    goto LABEL_15;
  }
  v45 = v4->fields.type;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)BattleCommand__isBUSTER(v45, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    spawner = _4__this->fields.spawner;
    firstbonus_q = (UnityEngine_Object_o *)_4__this->fields.firstbonus_b;
    if ( byte_4C20DA1 )
      goto LABEL_16;
    goto LABEL_15;
  }
LABEL_20:
  v21 = *p_firstBonusObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)UnityEngine_Object__op_Inequality(
                                                                       (UnityEngine_Object_o *)v21,
                                                                       0,
                                                                       0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)*p_firstBonusObject;
    if ( !*p_firstBonusObject )
      goto LABEL_39;
    ComponentInChildren_object__51536504 = UnityEngine_GameObject__GetComponentInChildren_object__51536504(
                                             (UnityEngine_GameObject_o *)this,
                                             1,
                                             (const MethodInfo_3126278 *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation____78064640);
    _4__this->fields.firstBonusSimpleAnimation = (struct SimpleAnimation_o *)ComponentInChildren_object__51536504;
    sub_1C2D434(
      (CGThumbnailListItem_o *)&_4__this->fields.firstBonusSimpleAnimation,
      (int32_t)ComponentInChildren_object__51536504,
      v23,
      v24);
    this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)_4__this->fields.firstBonusObject;
    if ( !this )
      goto LABEL_39;
    v25 = UnityEngine_GameObject__GetComponentInChildren_object__51536504(
            (UnityEngine_GameObject_o *)this,
            1,
            (const MethodInfo_3126278 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation____78064608);
    _4__this->fields.firstBonusAnimation = (struct UnityEngine_Animation_o *)v25;
    sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.firstBonusAnimation, (int32_t)v25, v26, v27);
    BattlePerformanceCommandCard__ActivateFirstBonusObject(_4__this, 0);
  }
  _4__this->fields.firstAuraType = v4->fields.type;
LABEL_28:
  if ( _4__this->fields.isPlayingMoveCard )
  {
    v4->fields.__2__current = 0;
    p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1C2D434(p__2__current, 0, v2, v3);
    result = 1;
    LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
    return result;
  }
  if ( _4__this->fields.firstAuraType != -1 )
  {
    commandCompArray = _4__this->fields.commandCompArray;
    if ( commandCompArray )
    {
      v31 = 0;
      while ( 1 )
      {
        max_length = commandCompArray->max_length;
        if ( (int)v31 >= max_length )
          break;
        if ( (unsigned int)v31 >= max_length )
          sub_1C2D6F4(this, method, v2);
        method = (const MethodInfo *)commandCompArray->m_Items[v31];
        if ( method )
        {
          if ( !BYTE4(method[4].parameters) )
          {
            BattlePerformanceCommandCard__setFirstAura(
              _4__this,
              (BattleCommandComponent_o *)method,
              _4__this->fields.firstAuraType,
              0);
            commandCompArray = _4__this->fields.commandCompArray;
          }
          ++v31;
          if ( commandCompArray )
            continue;
        }
        goto LABEL_39;
      }
      perf = _4__this->fields.perf;
      if ( perf )
      {
        this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)perf->fields.data;
        if ( this )
        {
          FirstBonusCriticalRate = BattleData__GetFirstBonusCriticalRate((BattleData_o *)this, v4->fields.type, 0);
          if ( FirstBonusCriticalRate >= 10 )
          {
            v36 = FirstBonusCriticalRate;
            v37 = (System_Object_array *)_4__this->fields.commandCompArray;
            v38 = BattlePerformanceCommandCard___c_TypeInfo;
            if ( !BattlePerformanceCommandCard___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattlePerformanceCommandCard___c_TypeInfo);
              v38 = BattlePerformanceCommandCard___c_TypeInfo;
            }
            _9__119_0 = (System_Func_object__bool__o *)v38->static_fields->__9__119_0;
            if ( !_9__119_0 )
            {
              if ( !v38->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v38);
                v38 = BattlePerformanceCommandCard___c_TypeInfo;
              }
              v40 = (Il2CppObject *)v38->static_fields->__9;
              _9__119_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleCommandComponent__bool__TypeInfo);
              System_Func_object__bool____ctor(
                _9__119_0,
                v40,
                Method_BattlePerformanceCommandCard___c__coStartFirstBonus_b__119_0__,
                0);
              v41 = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
              v41->__9__119_0 = (struct System_Func_BattleCommandComponent__bool__o *)_9__119_0;
              sub_1C2D434((CGThumbnailListItem_o *)&v41->__9__119_0, (int32_t)_9__119_0, v42, v43);
            }
            object = BasicHelper__Find_object_(
                       v37,
                       (System_Func_T__bool__o *)_9__119_0,
                       (const MethodInfo_30B88BC *)Method_BasicHelper_Find_BattleCommandComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)object, 0, 0) )
              BattlePerformanceCommandCard__DistributeCriticalPoint(_4__this, v36 / 10, 0, 0);
          }
          return 0;
        }
      }
    }
LABEL_39:
    sub_1C2D6EC(this, method);
  }
  return 0;
}


Il2CppObject *BattlePerformanceCommandCard__coStartFirstBonus_d__119__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceCommandCard__coStartFirstBonus_d__119__System_Collections_IEnumerator_Reset(
        BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BattlePerformanceCommandCard__coStartFirstBonus_d__119_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *BattlePerformanceCommandCard__coStartFirstBonus_d__119__System_Collections_IEnumerator_get_Current(
        BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePerformanceCommandCard__coStartFirstBonus_d__119__System_IDisposable_Dispose(
        BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePerformanceCommandCard__colOpenNpCard_d__180___ctor(
        BattlePerformanceCommandCard__colOpenNpCard_d__180_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePerformanceCommandCard__colOpenNpCard_d__180__MoveNext(
        BattlePerformanceCommandCard__colOpenNpCard_d__180_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceCommandCard__colOpenNpCard_d__180_o *v3; // x19
  int32_t _1__state; // w8
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  System_Collections_Generic_List_object__o *v6; // x22
  BattlePerformanceCommandCard__colOpenNpCard_d__180_o **v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *npGaugeLightTargetRoot; // x22
  __int64 v11; // x2
  UnityEngine_Transform_o *v12; // x22
  float CARD_ROOT_BASE_X; // s8
  float CARD_ROOT_BASE_Y; // s9
  float v15; // s0
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  __int64 v17; // x26
  int max_length; // w9
  __int64 v19; // x8
  struct BattleCommandData_array *commandlist; // x9
  unsigned __int64 max_length_low; // x10
  struct BattleCommandComponent_array *commandCompArray; // x8
  unsigned int v23; // w25
  BattleCommandComponent_o **v24; // x8
  BattleCommandComponent_o *v25; // x22
  const MethodInfo *v26; // x3
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 _2__current_low; // x10
  __int64 v30; // x8
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Transform_o *v32; // x0
  UnityEngine_Transform_o *v33; // x0
  UnityEngine_GameObject_o *Object_40963840; // x23
  const MethodInfo *v35; // x3
  BattlePerformanceCommandCard__colOpenNpCard_d__180_o *v36; // x24
  const MethodInfo *v37; // x3
  struct UnityEngine_Transform_array *npGaugeLightTarget; // x8
  struct System_Collections_Generic_List_BattleCommandComponent__o *v39; // x25
  const MethodInfo *v40; // x3
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  const MethodInfo *v44; // x3
  BattlePerformanceCommandCard__colOpenNpCard_d__180_o *v45; // x25
  const MethodInfo *v46; // x3
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  const MethodInfo *v50; // x3
  BattlePerformanceCommandCard__colOpenNpCard_d__180_o *v51; // x25
  const MethodInfo *v52; // x3
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  const MethodInfo *v56; // x3
  BattlePerformanceCommandCard__colOpenNpCard_d__180_o *v57; // x25
  System_Collections_Hashtable_o *v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  _BOOL8 v61; // x0
  __int64 v62; // x1
  struct System_Collections_Generic_List_BattleCommandComponent__o *v63; // x8
  CGThumbnailListItem_o *p_flglist_5__2; // x19
  struct System_Collections_Generic_List_BattleCommandComponent__o *flglist_5__2; // t1
  int32_t size; // w2
  int v67; // w9
  bool result; // w0
  float npCardDispDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v70; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  float npCardEffectDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v75; // x20
  CGThumbnailListItem_o *v76; // x19
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  __int64 v79; // x0
  float npGaugeEffectMoveTime; // [xsp+Ch] [xbp-94h] BYREF
  float npGaugeEffectMoveDelayTime; // [xsp+10h] [xbp-90h] BYREF
  int32_t npGaugeEaseType; // [xsp+14h] [xbp-8Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v83; // [xsp+18h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4C2959E & 1) == 0 )
  {
    sub_1C2D490(&iTween_EaseType_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleCommandComponent__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleCommandComponent__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleCommandComponent__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleCommandComponent___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleCommandComponent__TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C2D490(&StringLiteral_18742/*"easetype"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_18893/*"effect/ef_noblegauge01"*/);
    sub_1C2D490(&StringLiteral_18545/*"delay"*/);
    sub_1C2D490(&StringLiteral_18894/*"effect/ef_noblegauge02"*/);
    sub_1C2D490(&StringLiteral_22719/*"position"*/);
    this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)sub_1C2D490(&iTween_TypeInfo);
    byte_4C2959E = 1;
  }
  memset(&v83, 0, sizeof(v83));
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 2 )
  {
    flglist_5__2 = v3->fields._flglist_5__2;
    p_flglist_5__2 = (CGThumbnailListItem_o *)&v3->fields._flglist_5__2;
    v63 = flglist_5__2;
    p_flglist_5__2[-1].fields._Id_k__BackingField = -1;
    if ( !flglist_5__2 )
      goto LABEL_71;
    size = v63->fields._size;
    v67 = v63->fields._version + 1;
    v63->fields._size = 0;
    v63->fields._version = v67;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v63->fields._items, 0, size, 0);
    p_flglist_5__2->klass = 0;
    sub_1C2D434(p_flglist_5__2, 0, size, v2);
    if ( !_4__this )
      goto LABEL_71;
    BattlePerformanceCommandCard__giveoutNobleCard(_4__this, 0);
    return 0;
  }
  if ( _1__state == 1 )
  {
    this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)v3->fields._flglist_5__2;
    v3->fields.__1__state = -1;
    if ( this )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v83,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_BattleCommandComponent__GetEnumerator__);
      while ( 1 )
      {
        v61 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v83,
                (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__MoveNext__);
        if ( !v61 )
          break;
        if ( !v83.fields._current )
          sub_1C2D6EC(v61, v62);
        if ( !*((_BYTE *)&v83.fields._current->klass + (unsigned __int64)&dword_194) )
          BattleCommandComponent__playOpenNobleCard((BattleCommandComponent_o *)v83.fields._current, 0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v83,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__Dispose__);
      if ( _4__this )
      {
        npCardDispDelayTime = _4__this->fields.npCardDispDelayTime;
        v70 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v70, npCardDispDelayTime, 0);
        v3->fields.__2__current = (Il2CppObject *)v70;
        p__2__current = (CGThumbnailListItem_o *)&v3->fields.__2__current;
        sub_1C2D434(p__2__current, (int32_t)v70, v72, v73);
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
        return 1;
      }
    }
    goto LABEL_71;
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleCommandComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleCommandComponent___ctor__);
  v3->fields._flglist_5__2 = (struct System_Collections_Generic_List_BattleCommandComponent__o *)v6;
  v7 = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o **)&v3->fields._flglist_5__2;
  sub_1C2D434((CGThumbnailListItem_o *)&v3->fields._flglist_5__2, (int32_t)v6, v8, v9);
  if ( !_4__this )
    goto LABEL_71;
  npGaugeLightTargetRoot = (UnityEngine_Object_o *)_4__this->fields.npGaugeLightTargetRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)UnityEngine_Object__op_Inequality(
                                                                   npGaugeLightTargetRoot,
                                                                   0,
                                                                   0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v12 = _4__this->fields.npGaugeLightTargetRoot;
    CARD_ROOT_BASE_X = _4__this->fields.CARD_ROOT_BASE_X;
    CARD_ROOT_BASE_Y = _4__this->fields.CARD_ROOT_BASE_Y;
    v15 = BattlePerformanceCommandCard__FSCardRootOffsetY(_4__this, 0);
    if ( !v12 )
      goto LABEL_71;
    v84.fields.y = CARD_ROOT_BASE_Y + v15;
    v84.fields.z = 0.0;
    v84.fields.x = CARD_ROOT_BASE_X;
    UnityEngine_Transform__set_localPosition(v12, v84, 0);
  }
  p_commandlist = _4__this->fields.p_commandlist;
  if ( !p_commandlist )
LABEL_71:
    sub_1C2D6EC(this, method);
  v17 = 9;
  while ( 1 )
  {
    max_length = p_commandlist->max_length;
    v19 = v17 - 4;
    if ( v17 - 4 >= max_length - 1 )
      break;
    commandlist = _4__this->fields.commandlist;
    if ( !commandlist )
      goto LABEL_71;
    max_length_low = LODWORD(commandlist->max_length);
    if ( v19 < (int)max_length_low )
    {
      if ( v19 >= max_length_low )
        goto LABEL_87;
      method = (const MethodInfo *)*((_QWORD *)&commandlist->obj.klass + v17);
      if ( method )
      {
        this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)BattlePerformanceCommandCard__GetServantNumber(
                                                                         _4__this,
                                                                         (BattleCommandData_o *)method,
                                                                         0);
        commandCompArray = _4__this->fields.commandCompArray;
        if ( !commandCompArray )
          goto LABEL_71;
        v23 = (unsigned int)this;
        if ( (unsigned int)((_DWORD)this + 5) >= LODWORD(commandCompArray->max_length) )
          goto LABEL_87;
        v24 = &commandCompArray->m_Items[(int)this + 1];
        v25 = v24[4];
        if ( !v25 )
          goto LABEL_71;
        this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)BattleCommandComponent__checkObject(v24[4], 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = *v7;
          if ( !*v7 )
            goto LABEL_71;
          v27 = *(_QWORD *)&this->fields.__1__state;
          v28 = Method_System_Collections_Generic_List_BattleCommandComponent__Add__;
          ++HIDWORD(this->fields.__2__current);
          if ( !v27 )
            goto LABEL_71;
          _2__current_low = SLODWORD(this->fields.__2__current);
          if ( (unsigned int)_2__current_low >= *(_DWORD *)(v27 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v25,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = v27 + 8 * _2__current_low;
            LODWORD(this->fields.__2__current) = _2__current_low + 1;
            *(_QWORD *)(v30 + 32) = v25;
            sub_1C2D434((CGThumbnailListItem_o *)(v30 + 32), (int32_t)v25, v11, v26);
          }
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)BattlePerformanceCommandCard__GetStatusUiObj(
                                                                           _4__this,
                                                                           v25->fields.data,
                                                                           0);
          if ( !this )
            goto LABEL_71;
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)this[3].fields.__4__this;
          if ( !this )
            goto LABEL_71;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)_4__this,
                                                                           0);
          if ( !this )
            goto LABEL_71;
          v32 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
          BaseMonoBehaviour__createObject_40963840(
            (BaseMonoBehaviour_o *)_4__this,
            (System_String_o *)StringLiteral_18893/*"effect/ef_noblegauge01"*/,
            v32,
            transform,
            0);
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)_4__this,
                                                                           0);
          if ( !this )
            goto LABEL_71;
          v33 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
          Object_40963840 = BaseMonoBehaviour__createObject_40963840(
                              (BaseMonoBehaviour_o *)_4__this,
                              (System_String_o *)StringLiteral_18894/*"effect/ef_noblegauge02"*/,
                              v33,
                              transform,
                              0);
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)sub_1C2D538(object___TypeInfo, 8);
          if ( !this )
            goto LABEL_71;
          v36 = this;
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)StringLiteral_22719/*"position"*/;
          if ( StringLiteral_22719/*"position"*/ )
          {
            this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)sub_1C2D5CC(
                                                                             StringLiteral_22719/*"position"*/,
                                                                             v36->klass->_1.element_class);
            if ( !this )
              goto LABEL_89;
            method = (const MethodInfo *)StringLiteral_22719/*"position"*/;
          }
          else
          {
            method = 0;
          }
          if ( !LODWORD(v36->fields.__2__current) )
            goto LABEL_87;
          v36->fields.__4__this = (struct BattlePerformanceCommandCard_o *)method;
          sub_1C2D434((CGThumbnailListItem_o *)&v36->fields.__4__this, (int32_t)method, v11, v35);
          npGaugeLightTarget = _4__this->fields.npGaugeLightTarget;
          if ( !npGaugeLightTarget )
            goto LABEL_71;
          if ( v23 >= LODWORD(npGaugeLightTarget->max_length) )
            goto LABEL_87;
          v39 = (struct System_Collections_Generic_List_BattleCommandComponent__o *)npGaugeLightTarget->m_Items[v23];
          if ( v39 )
          {
            this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)sub_1C2D5CC(
                                                                             v39,
                                                                             v36->klass->_1.element_class);
            if ( !this )
            {
LABEL_89:
              v79 = sub_1C2D710(this);
              sub_1C2D5B8(v79, 0);
            }
          }
          if ( LODWORD(v36->fields.__2__current) <= 1 )
            goto LABEL_87;
          v36->fields._flglist_5__2 = v39;
          sub_1C2D434((CGThumbnailListItem_o *)&v36->fields._flglist_5__2, (int32_t)v39, v11, v37);
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)StringLiteral_18742/*"easetype"*/;
          if ( StringLiteral_18742/*"easetype"*/ )
          {
            this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)sub_1C2D5CC(
                                                                             StringLiteral_18742/*"easetype"*/,
                                                                             v36->klass->_1.element_class);
            if ( !this )
              goto LABEL_89;
            method = (const MethodInfo *)StringLiteral_18742/*"easetype"*/;
          }
          else
          {
            method = 0;
          }
          if ( LODWORD(v36->fields.__2__current) <= 2 )
            goto LABEL_87;
          v36[1].klass = (BattlePerformanceCommandCard__colOpenNpCard_d__180_c *)method;
          sub_1C2D434((CGThumbnailListItem_o *)&v36[1], (int32_t)method, v11, v40);
          npGaugeEaseType = _4__this->fields.npGaugeEaseType;
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)j_il2cpp_value_box_0(
                                                                           iTween_EaseType_TypeInfo,
                                                                           &npGaugeEaseType,
                                                                           v41,
                                                                           v42,
                                                                           v43);
          v45 = this;
          if ( this )
          {
            this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)sub_1C2D5CC(
                                                                             this,
                                                                             v36->klass->_1.element_class);
            if ( !this )
              goto LABEL_89;
          }
          if ( LODWORD(v36->fields.__2__current) <= 3 )
            goto LABEL_87;
          v36[1].monitor = v45;
          sub_1C2D434((CGThumbnailListItem_o *)&v36[1].monitor, (int32_t)v45, v11, v44);
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)StringLiteral_18545/*"delay"*/;
          if ( StringLiteral_18545/*"delay"*/ )
          {
            this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)sub_1C2D5CC(
                                                                             StringLiteral_18545/*"delay"*/,
                                                                             v36->klass->_1.element_class);
            if ( !this )
              goto LABEL_89;
            method = (const MethodInfo *)StringLiteral_18545/*"delay"*/;
          }
          else
          {
            method = 0;
          }
          if ( LODWORD(v36->fields.__2__current) <= 4 )
            goto LABEL_87;
          *(_QWORD *)&v36[1].fields.__1__state = method;
          sub_1C2D434((CGThumbnailListItem_o *)&v36[1].fields, (int32_t)method, v11, v46);
          npGaugeEffectMoveDelayTime = _4__this->fields.npGaugeEffectMoveDelayTime;
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)j_il2cpp_value_box_0(
                                                                           float_TypeInfo,
                                                                           &npGaugeEffectMoveDelayTime,
                                                                           v47,
                                                                           v48,
                                                                           v49);
          v51 = this;
          if ( this )
          {
            this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)sub_1C2D5CC(
                                                                             this,
                                                                             v36->klass->_1.element_class);
            if ( !this )
              goto LABEL_89;
          }
          if ( LODWORD(v36->fields.__2__current) <= 5 )
            goto LABEL_87;
          v36[1].fields.__2__current = (Il2CppObject *)v51;
          sub_1C2D434((CGThumbnailListItem_o *)&v36[1].fields.__2__current, (int32_t)v51, v11, v50);
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)StringLiteral_24049/*"time"*/;
          if ( StringLiteral_24049/*"time"*/ )
          {
            this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)sub_1C2D5CC(
                                                                             StringLiteral_24049/*"time"*/,
                                                                             v36->klass->_1.element_class);
            if ( !this )
              goto LABEL_89;
            method = (const MethodInfo *)StringLiteral_24049/*"time"*/;
          }
          else
          {
            method = 0;
          }
          if ( LODWORD(v36->fields.__2__current) <= 6 )
LABEL_87:
            sub_1C2D6F4(this, method, v11);
          v36[1].fields.__4__this = (struct BattlePerformanceCommandCard_o *)method;
          sub_1C2D434((CGThumbnailListItem_o *)&v36[1].fields.__4__this, (int32_t)method, v11, v52);
          npGaugeEffectMoveTime = _4__this->fields.npGaugeEffectMoveTime;
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)j_il2cpp_value_box_0(
                                                                           float_TypeInfo,
                                                                           &npGaugeEffectMoveTime,
                                                                           v53,
                                                                           v54,
                                                                           v55);
          v57 = this;
          if ( this )
          {
            this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)sub_1C2D5CC(
                                                                             this,
                                                                             v36->klass->_1.element_class);
            if ( !this )
              goto LABEL_89;
          }
          if ( LODWORD(v36->fields.__2__current) <= 7 )
            goto LABEL_87;
          v36[1].fields._flglist_5__2 = (struct System_Collections_Generic_List_BattleCommandComponent__o *)v57;
          sub_1C2D434((CGThumbnailListItem_o *)&v36[1].fields._flglist_5__2, (int32_t)v57, v11, v56);
          if ( !iTween_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
          v58 = iTween__Hash((System_Object_array *)v36, 0);
          iTween__MoveTo_63095428(Object_40963840, v58, 0);
          v25->fields.nobleGaugeEffect = Object_40963840;
          sub_1C2D434((CGThumbnailListItem_o *)&v25->fields.nobleGaugeEffect, (int32_t)Object_40963840, v59, v60);
        }
      }
    }
    p_commandlist = _4__this->fields.p_commandlist;
    ++v17;
    if ( !p_commandlist )
      goto LABEL_71;
  }
  npCardEffectDelayTime = _4__this->fields.npCardEffectDelayTime;
  v75 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v75, npCardEffectDelayTime, 0);
  v3->fields.__2__current = (Il2CppObject *)v75;
  v76 = (CGThumbnailListItem_o *)&v3->fields.__2__current;
  sub_1C2D434(v76, (int32_t)v75, v77, v78);
  result = 1;
  LODWORD(v76[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *BattlePerformanceCommandCard__colOpenNpCard_d__180__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceCommandCard__colOpenNpCard_d__180_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceCommandCard__colOpenNpCard_d__180__System_Collections_IEnumerator_Reset(
        BattlePerformanceCommandCard__colOpenNpCard_d__180_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BattlePerformanceCommandCard__colOpenNpCard_d__180_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *BattlePerformanceCommandCard__colOpenNpCard_d__180__System_Collections_IEnumerator_get_Current(
        BattlePerformanceCommandCard__colOpenNpCard_d__180_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePerformanceCommandCard__colOpenNpCard_d__180__System_IDisposable_Dispose(
        BattlePerformanceCommandCard__colOpenNpCard_d__180_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePerformanceCommandCard__showComboEffectNormal_d__135___ctor(
        BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePerformanceCommandCard__showComboEffectNormal_d__135__MoveNext(
        BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *v2; // x19
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  UnityEngine_Object_o *v4; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  DefCoroutine_c *v7; // x0
  Il2CppObject *milliSecNine; // x1
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct BattleComboData_o *combo; // x8
  int32_t samecount; // w20
  DefCoroutine_c *v15; // x0
  struct DefCoroutine_StaticFields *static_fields; // x8
  Il2CppObject *milliSecThree; // x1
  CGThumbnailListItem_o *v18; // x19
  int v19; // w8
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  DefCoroutine_c *v22; // x0
  Il2CppObject *milliSecTwo; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  DefCoroutine_c *v26; // x0
  Il2CppObject *milliSecFour; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  DefCoroutine_c *v30; // x0
  Il2CppObject *v31; // x1
  Il2CppObject *milliSecEleven; // x1
  int32_t seName; // [xsp+4h] [xbp-2Ch] BYREF
  UnityEngine_GameObject_o *prefab; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_4C295A0 & 1) == 0 )
  {
    sub_1C2D490(&DefCoroutine_TypeInfo);
    this = (BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C295A0 = 1;
  }
  prefab = 0;
  seName = 0;
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      prefab = 0;
      seName = -1;
      if ( !_4__this )
        goto LABEL_46;
      BattlePerformanceCommandCard__setComboEffectPrefab(_4__this, v2->fields.combo, &prefab, &seName, 0);
      v4 = (UnityEngine_Object_o *)prefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v4, 0, 0) )
        goto LABEL_18;
      BattlePerformanceCommandCard__playComboEffect(_4__this, prefab, seName, 0);
      v7 = DefCoroutine_TypeInfo;
      if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v7 = DefCoroutine_TypeInfo;
      }
      milliSecNine = (Il2CppObject *)v7->static_fields->milliSecNine;
      v2->fields.__2__current = milliSecNine;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C2D434(p__2__current, (int32_t)milliSecNine, v5, v6);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    case 1:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_46;
      this = (BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_46;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0);
LABEL_18:
      this = (BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *)_4__this->fields.logic;
      if ( !this )
        goto LABEL_46;
      BattleLogic__procComboAct((BattleLogic_o *)this, 0);
      method = (const MethodInfo *)v2->fields.combo;
      if ( !method )
        goto LABEL_46;
      if ( LOBYTE(method->invoker_method) )
      {
        BattlePerformanceCommandCard__PlayFlash(_4__this, (BattleComboData_o *)method, 0);
        combo = v2->fields.combo;
        if ( !combo )
LABEL_46:
          sub_1C2D6EC(this, method);
        samecount = combo->fields.samecount;
        v15 = DefCoroutine_TypeInfo;
        if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
          v15 = DefCoroutine_TypeInfo;
        }
        static_fields = v15->static_fields;
        if ( samecount == 3 )
        {
          milliSecThree = (Il2CppObject *)static_fields->milliSecThree;
          v2->fields.__2__current = milliSecThree;
          v18 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
          sub_1C2D434(v18, (int32_t)milliSecThree, v11, v12);
          v19 = 2;
        }
        else
        {
          milliSecEleven = (Il2CppObject *)static_fields->milliSecEleven;
          v2->fields.__2__current = milliSecEleven;
          v18 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
          sub_1C2D434(v18, (int32_t)milliSecEleven, v11, v12);
          v19 = 3;
        }
      }
      else
      {
LABEL_26:
        if ( HIDWORD(method->invoker_method) != 3 )
          return 0;
        BattlePerformanceCommandCard__PlayFlashComboSvt(_4__this, (BattleComboData_o *)method, 0);
        v22 = DefCoroutine_TypeInfo;
        if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
          v22 = DefCoroutine_TypeInfo;
        }
        milliSecTwo = (Il2CppObject *)v22->static_fields->milliSecTwo;
        v2->fields.__2__current = milliSecTwo;
        v18 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C2D434(v18, (int32_t)milliSecTwo, v20, v21);
        v19 = 4;
      }
LABEL_45:
      LODWORD(v18[-1].fields._ThumbnailSpritePath_k__BackingField) = v19;
      return 1;
    case 2:
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_46;
      this = (BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_46;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0);
      method = (const MethodInfo *)v2->fields.combo;
      if ( !method )
        goto LABEL_46;
      goto LABEL_26;
    case 4:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_46;
      this = (BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_46;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0);
      BattlePerformanceCommandCard__MoveSelectedCard(_4__this, 0.3, 0);
      BattlePerformanceCommandCard__AddExtraCard(_4__this, 0);
      BattlePerformanceCommandCard__MoveExtraCard(_4__this, 0.4, 0);
      v26 = DefCoroutine_TypeInfo;
      if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v26 = DefCoroutine_TypeInfo;
      }
      milliSecFour = (Il2CppObject *)v26->static_fields->milliSecFour;
      v2->fields.__2__current = milliSecFour;
      v18 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C2D434(v18, (int32_t)milliSecFour, v24, v25);
      v19 = 5;
      goto LABEL_45;
    case 5:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_46;
      this = (BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_46;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0);
      BattlePerformanceCommandCard__PlayFlashExtra(_4__this, 0);
      v30 = DefCoroutine_TypeInfo;
      if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v30 = DefCoroutine_TypeInfo;
      }
      v31 = (Il2CppObject *)v30->static_fields->milliSecEleven;
      v2->fields.__2__current = v31;
      v18 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C2D434(v18, (int32_t)v31, v28, v29);
      v19 = 6;
      goto LABEL_45;
    case 6:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_46;
      this = (BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_46;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *BattlePerformanceCommandCard__showComboEffectNormal_d__135__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceCommandCard__showComboEffectNormal_d__135__System_Collections_IEnumerator_Reset(
        BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BattlePerformanceCommandCard__showComboEffectNormal_d__135_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *BattlePerformanceCommandCard__showComboEffectNormal_d__135__System_Collections_IEnumerator_get_Current(
        BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePerformanceCommandCard__showComboEffectNormal_d__135__System_IDisposable_Dispose(
        BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePerformanceCommandCard__showComboEffectShort_d__134___ctor(
        BattlePerformanceCommandCard__showComboEffectShort_d__134_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePerformanceCommandCard__showComboEffectShort_d__134__MoveNext(
        BattlePerformanceCommandCard__showComboEffectShort_d__134_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard__showComboEffectShort_d__134_o *v2; // x19
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct BattleComboData_o *combo; // x8
  int32_t samecount; // w20
  DefCoroutine_c *v8; // x0
  struct DefCoroutine_StaticFields *v9; // x8
  Il2CppObject *milliSecThreeSixSix; // x1
  CGThumbnailListItem_o *p__2__current; // x19
  int v12; // w8
  Il2CppObject *milliSecEightSixSix; // x1
  System_Collections_Generic_IEnumerable_TSource__o *selectedcomponents; // x21
  BattlePerformanceCommandCard___c_c *v15; // x0
  System_Func_object__bool__o *_9__134_0; // x22
  Il2CppObject *v17; // x23
  struct BattlePerformanceCommandCard___c_StaticFields *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x0
  struct BattlePerformance_o *perf; // x8
  int32_t FirstBonusCriticalRate; // w0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  bool isExtraAttack; // w20
  DefCoroutine_c *v27; // x8
  struct DefCoroutine_StaticFields *v28; // x8
  __int64 v29; // x9
  Il2CppObject *v30; // x1
  UnityEngine_Object_o *v31; // x21
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  DefCoroutine_c *v34; // x8
  uint32_t cctor_finished; // w9
  Il2CppObject *v36; // x1
  CGThumbnailListItem_o *v37; // x19
  bool result; // w0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  DefCoroutine_c *v41; // x0
  Il2CppObject *milliSecTwo; // x1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  DefCoroutine_c *v45; // x0
  Il2CppObject *v46; // x1
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct BattleComboData_o *v49; // x8
  _BOOL4 flash; // w20
  DefCoroutine_c *v51; // x0
  struct DefCoroutine_StaticFields *v52; // x8
  Il2CppObject *milliSecFour; // x1
  Il2CppObject *v54; // x1
  DefCoroutine_c *v55; // x0
  Il2CppObject *milliSecNine; // x1
  DefCoroutine_c *v57; // x0
  Il2CppObject *milliSecThreeThreeThree; // x1
  Il2CppObject *v59; // x1
  int v60; // w20
  DefCoroutine_c *v61; // x8
  struct DefCoroutine_StaticFields *static_fields; // x8
  Il2CppObject *milliSecTwoSixSix; // x1
  Il2CppObject *milliSecThree; // x1
  int32_t seName; // [xsp+4h] [xbp-4Ch] BYREF
  UnityEngine_GameObject_o *prefab; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4C295A1 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_IndexOf_BattleCommandComponent___);
    sub_1C2D490(&DefCoroutine_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_BattleCommandComponent___);
    sub_1C2D490(&System_Func_BattleCommandComponent__bool__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_BattlePerformanceCommandCard___c__showComboEffectShort_b__134_0__);
    this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)sub_1C2D490(&BattlePerformanceCommandCard___c_TypeInfo);
    byte_4C295A1 = 1;
  }
  prefab = 0;
  seName = 0;
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      prefab = 0;
      seName = -1;
      if ( !_4__this )
        goto LABEL_90;
      BattlePerformanceCommandCard__setComboEffectPrefab(_4__this, v2->fields.combo, &prefab, &seName, 0);
      v31 = (UnityEngine_Object_o *)prefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v31, 0, 0) )
        goto LABEL_7;
      BattlePerformanceCommandCard__playComboEffect(_4__this, prefab, seName, 0);
      this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)v2->fields.combo;
      if ( !this )
        goto LABEL_90;
      if ( !BattleComboData__AchieveAnyChain((BattleComboData_o *)this, 0) )
      {
        v55 = DefCoroutine_TypeInfo;
        if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
          v55 = DefCoroutine_TypeInfo;
        }
        milliSecNine = (Il2CppObject *)v55->static_fields->milliSecNine;
        v2->fields.__2__current = milliSecNine;
        p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C2D434(p__2__current, (int32_t)milliSecNine, v32, v33);
        v12 = 6;
        goto LABEL_89;
      }
      this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)v2->fields.combo;
      if ( !this )
        goto LABEL_90;
      if ( !LOBYTE(this->fields.__1__state) )
      {
        if ( !BYTE1(this->fields.__1__state) )
          goto LABEL_84;
        if ( BattleComboData__isExtraAttack((BattleComboData_o *)this, 0) )
        {
          v57 = DefCoroutine_TypeInfo;
          if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
            v57 = DefCoroutine_TypeInfo;
          }
          milliSecThreeThreeThree = (Il2CppObject *)v57->static_fields->milliSecThreeThreeThree;
          v2->fields.__2__current = milliSecThreeThreeThree;
          p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
          sub_1C2D434(p__2__current, (int32_t)milliSecThreeThreeThree, v32, v33);
          v12 = 3;
          goto LABEL_89;
        }
        this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)v2->fields.combo;
        if ( this )
        {
LABEL_84:
          v60 = BYTE1(this->fields.__1__state);
          v61 = DefCoroutine_TypeInfo;
          if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
            v61 = DefCoroutine_TypeInfo;
          }
          static_fields = v61->static_fields;
          if ( v60 )
          {
            milliSecTwoSixSix = (Il2CppObject *)static_fields->milliSecTwoSixSix;
            v2->fields.__2__current = milliSecTwoSixSix;
            p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
            sub_1C2D434(p__2__current, (int32_t)milliSecTwoSixSix, v32, v33);
            v12 = 4;
          }
          else
          {
            milliSecThree = (Il2CppObject *)static_fields->milliSecThree;
            v2->fields.__2__current = milliSecThree;
            p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
            sub_1C2D434(p__2__current, (int32_t)milliSecThree, v32, v33);
            v12 = 5;
          }
          goto LABEL_89;
        }
LABEL_90:
        sub_1C2D6EC(this, method);
      }
      v34 = DefCoroutine_TypeInfo;
      cctor_finished = DefCoroutine_TypeInfo->_2.cctor_finished;
      if ( *(&this->fields.__1__state + 1) != 3 )
      {
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
          v34 = DefCoroutine_TypeInfo;
        }
        v59 = (Il2CppObject *)v34->static_fields->milliSecTwoSixSix;
        v2->fields.__2__current = v59;
        p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C2D434(p__2__current, (int32_t)v59, v32, v33);
        v12 = 2;
LABEL_89:
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = v12;
        return 1;
      }
      if ( !cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v34 = DefCoroutine_TypeInfo;
      }
      v36 = (Il2CppObject *)v34->static_fields->milliSecThreeThreeThree;
      v2->fields.__2__current = v36;
      v37 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C2D434(v37, (int32_t)v36, v32, v33);
      result = 1;
      LODWORD(v37[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_90;
      this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_90;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0);
LABEL_7:
      this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)_4__this->fields.logic;
      if ( !this )
        goto LABEL_90;
      BattleLogic__procComboAct((BattleLogic_o *)this, 0);
      method = (const MethodInfo *)v2->fields.combo;
      if ( !method )
        goto LABEL_90;
      if ( LOBYTE(method->invoker_method) )
      {
        BattlePerformanceCommandCard__PlayFlash(_4__this, (BattleComboData_o *)method, 0);
        combo = v2->fields.combo;
        if ( combo )
        {
          samecount = combo->fields.samecount;
          v8 = DefCoroutine_TypeInfo;
          if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
            v8 = DefCoroutine_TypeInfo;
          }
          v9 = v8->static_fields;
          if ( samecount == 3 )
          {
            milliSecThreeSixSix = (Il2CppObject *)v9->milliSecThreeSixSix;
            v2->fields.__2__current = milliSecThreeSixSix;
            p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
            sub_1C2D434(p__2__current, (int32_t)milliSecThreeSixSix, v4, v5);
            v12 = 7;
          }
          else
          {
            milliSecEightSixSix = (Il2CppObject *)v9->milliSecEightSixSix;
            v2->fields.__2__current = milliSecEightSixSix;
            p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
            sub_1C2D434(p__2__current, (int32_t)milliSecEightSixSix, v4, v5);
            v12 = 8;
          }
          goto LABEL_89;
        }
      }
      else
      {
LABEL_19:
        if ( !BYTE1(method->invoker_method) )
        {
LABEL_54:
          if ( HIDWORD(method->invoker_method) != 3 )
            return 0;
          BattlePerformanceCommandCard__PlayFlashComboSvt(_4__this, (BattleComboData_o *)method, 0);
          v41 = DefCoroutine_TypeInfo;
          if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
            v41 = DefCoroutine_TypeInfo;
          }
          milliSecTwo = (Il2CppObject *)v41->static_fields->milliSecTwo;
          v2->fields.__2__current = milliSecTwo;
          p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
          sub_1C2D434(p__2__current, (int32_t)milliSecTwo, v39, v40);
          v12 = 10;
          goto LABEL_89;
        }
        selectedcomponents = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.selectedcomponents;
        v15 = BattlePerformanceCommandCard___c_TypeInfo;
        if ( !BattlePerformanceCommandCard___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattlePerformanceCommandCard___c_TypeInfo);
          v15 = BattlePerformanceCommandCard___c_TypeInfo;
        }
        _9__134_0 = (System_Func_object__bool__o *)v15->static_fields->__9__134_0;
        if ( !_9__134_0 )
        {
          if ( !v15->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v15);
            v15 = BattlePerformanceCommandCard___c_TypeInfo;
          }
          v17 = (Il2CppObject *)v15->static_fields->__9;
          _9__134_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleCommandComponent__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__134_0,
            v17,
            Method_BattlePerformanceCommandCard___c__showComboEffectShort_b__134_0__,
            0);
          v18 = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
          v18->__9__134_0 = (struct System_Func_BattleCommandComponent__bool__o *)_9__134_0;
          sub_1C2D434((CGThumbnailListItem_o *)&v18->__9__134_0, (int32_t)_9__134_0, v19, v20);
        }
        v21 = System_Linq_Enumerable__FirstOrDefault_object__51348472(
                selectedcomponents,
                (System_Func_TSource__bool__o *)_9__134_0,
                (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleCommandComponent___);
        this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)System_Array__IndexOf_object_(
                                                                                (System_Object_array *)_4__this->fields.selectedcomponents,
                                                                                v21,
                                                                                (const MethodInfo_31D5B68 *)Method_System_Array_IndexOf_BattleCommandComponent___);
        if ( (int)this >= 1 )
        {
          perf = _4__this->fields.perf;
          if ( !perf )
            goto LABEL_90;
          this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)perf->fields.data;
          if ( !this )
            goto LABEL_90;
          FirstBonusCriticalRate = BattleData__GetFirstBonusCriticalRate((BattleData_o *)this, 3, 0);
          BattlePerformanceCommandCard__DistributeCriticalPoint(_4__this, FirstBonusCriticalRate / 10, 1, 0);
        }
        this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)v2->fields.combo;
        if ( this )
        {
          isExtraAttack = BattleComboData__isExtraAttack((BattleComboData_o *)this, 0);
          v27 = DefCoroutine_TypeInfo;
          if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
            v27 = DefCoroutine_TypeInfo;
          }
          v28 = v27->static_fields;
          v29 = 12;
          if ( isExtraAttack )
            v29 = 6;
          v30 = (Il2CppObject *)(&v28->milliSecPointOne)[v29];
          v2->fields.__2__current = v30;
          p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
          sub_1C2D434(p__2__current, (int32_t)v30, v24, v25);
          v12 = 9;
          goto LABEL_89;
        }
      }
      goto LABEL_90;
    case 7:
    case 8:
      v2->fields.__1__state = -1;
      if ( _4__this )
      {
        this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)_4__this->fields.perf;
        if ( this )
        {
          BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0);
          method = (const MethodInfo *)v2->fields.combo;
          if ( method )
            goto LABEL_19;
        }
      }
      goto LABEL_90;
    case 9:
      v2->fields.__1__state = -1;
      if ( _4__this )
      {
        this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)_4__this->fields.perf;
        if ( this )
        {
          BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0);
          method = (const MethodInfo *)v2->fields.combo;
          if ( method )
            goto LABEL_54;
        }
      }
      goto LABEL_90;
    case 0xA:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_90;
      this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_90;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0);
      BattlePerformanceCommandCard__MoveSelectedCard(_4__this, 0.3, 0);
      BattlePerformanceCommandCard__AddExtraCard(_4__this, 0);
      BattlePerformanceCommandCard__MoveExtraCard(_4__this, 0.3, 0);
      v45 = DefCoroutine_TypeInfo;
      if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v45 = DefCoroutine_TypeInfo;
      }
      v46 = (Il2CppObject *)v45->static_fields->milliSecTwoSixSix;
      v2->fields.__2__current = v46;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C2D434(p__2__current, (int32_t)v46, v43, v44);
      v12 = 11;
      goto LABEL_89;
    case 0xB:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_90;
      this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_90;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0);
      BattlePerformanceCommandCard__PlayFlashExtra(_4__this, 0);
      v49 = v2->fields.combo;
      if ( !v49 )
        goto LABEL_90;
      flash = v49->fields.flash;
      v51 = DefCoroutine_TypeInfo;
      if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v51 = DefCoroutine_TypeInfo;
      }
      v52 = v51->static_fields;
      if ( flash )
      {
        milliSecFour = (Il2CppObject *)v52->milliSecFour;
        v2->fields.__2__current = milliSecFour;
        p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C2D434(p__2__current, (int32_t)milliSecFour, v47, v48);
        v12 = 13;
      }
      else
      {
        v54 = (Il2CppObject *)v52->milliSecThreeThreeThree;
        v2->fields.__2__current = v54;
        p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C2D434(p__2__current, (int32_t)v54, v47, v48);
        v12 = 12;
      }
      goto LABEL_89;
    case 0xC:
    case 0xD:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_90;
      this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_90;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *BattlePerformanceCommandCard__showComboEffectShort_d__134__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceCommandCard__showComboEffectShort_d__134_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceCommandCard__showComboEffectShort_d__134__System_Collections_IEnumerator_Reset(
        BattlePerformanceCommandCard__showComboEffectShort_d__134_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BattlePerformanceCommandCard__showComboEffectShort_d__134_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *BattlePerformanceCommandCard__showComboEffectShort_d__134__System_Collections_IEnumerator_get_Current(
        BattlePerformanceCommandCard__showComboEffectShort_d__134_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePerformanceCommandCard__showComboEffectShort_d__134__System_IDisposable_Dispose(
        BattlePerformanceCommandCard__showComboEffectShort_d__134_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePerformanceCommandCard__showComboEffect_d__133___ctor(
        BattlePerformanceCommandCard__showComboEffect_d__133_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePerformanceCommandCard__showComboEffect_d__133__MoveNext(
        BattlePerformanceCommandCard__showComboEffect_d__133_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattlePerformanceCommandCard__showComboEffect_d__133_o *v4; // x19
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  DefCoroutine_c *v6; // x0
  Il2CppObject *milliSecOne; // x1
  CGThumbnailListItem_o *p__2__current; // x19
  int v9; // w8
  UnityEngine_Object_o *chainBonusObject; // x21
  __int64 v11; // x2
  UnityEngine_Object_o *v12; // x21
  __int64 v13; // x22
  struct BattleCommandComponent_array *selectedcomponents; // x8
  int32_t CommandType; // w21
  const MethodInfo *v16; // x3
  struct BattleCommandComponent_array *v17; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_IEnumerator_o *v19; // x0
  UnityEngine_Coroutine_o *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_IEnumerator_o *v23; // x0
  UnityEngine_Coroutine_o *started; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  bool result; // w0
  DefCoroutine_c *v28; // x0
  Il2CppObject *milliSecFour; // x1
  CGThumbnailListItem_o *v30; // x19
  UnityEngine_Color_o v31; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v4 = this;
  if ( (byte_4C2959F & 1) == 0 )
  {
    sub_1C2D490(&BattleCommand_TypeInfo);
    sub_1C2D490(&DefCoroutine_TypeInfo);
    this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2959F = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_41;
      chainBonusObject = (UnityEngine_Object_o *)_4__this->fields.chainBonusObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)UnityEngine_Object__op_Inequality(
                                                                         chainBonusObject,
                                                                         0,
                                                                         0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v12 = (UnityEngine_Object_o *)_4__this->fields.chainBonusObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71163704(v12, 0);
      }
      v13 = 4;
      break;
    case 1:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_41;
      v23 = BattlePerformanceCommandCard__showComboEffectNormal(_4__this, v4->fields.combo, 0);
      started = UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)_4__this, v23, 0);
      v4->fields.__2__current = (Il2CppObject *)started;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C2D434(p__2__current, (int32_t)started, v25, v26);
      v9 = 2;
      goto LABEL_32;
    case 2:
    case 3:
      v4->fields.__1__state = -1;
      v6 = DefCoroutine_TypeInfo;
      if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v6 = DefCoroutine_TypeInfo;
      }
      milliSecOne = (Il2CppObject *)v6->static_fields->milliSecOne;
      v4->fields.__2__current = milliSecOne;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C2D434(p__2__current, (int32_t)milliSecOne, v2, v3);
      v9 = 4;
      goto LABEL_32;
    case 4:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_41;
      this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_41;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0);
      this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)_4__this->fields.commandfsm;
      if ( !this )
        goto LABEL_41;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, v4->fields.endproc, 0);
      return 0;
    default:
      return 0;
  }
  do
  {
    selectedcomponents = _4__this->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_41;
    if ( v13 - 4 >= (unsigned __int64)LODWORD(selectedcomponents->max_length) )
      goto LABEL_42;
    this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)*((_QWORD *)&selectedcomponents->obj.klass + v13);
    if ( !this )
      goto LABEL_41;
    CommandType = BattleCommandComponent__getCommandType((BattleCommandComponent_o *)this, 0);
    if ( !BattleCommand_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
    this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)BattleCommand__isBLANK(CommandType, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v17 = _4__this->fields.selectedcomponents;
      if ( !v17 )
        goto LABEL_41;
      if ( v13 - 4 >= (unsigned __int64)LODWORD(v17->max_length) )
LABEL_42:
        sub_1C2D6F4(this, method, v11);
      this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)*((_QWORD *)&v17->obj.klass + v13);
      if ( !this )
        goto LABEL_41;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v31.fields.r = 0.0;
      v31.fields.g = 0.0;
      v31.fields.b = 0.0;
      v31.fields.a = 0.0;
      this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)TweenColor__Begin(gameObject, 0.2, v31, 0);
    }
    ++v13;
  }
  while ( v13 != 7 );
  this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)v4->fields.combo;
  if ( !this )
LABEL_41:
    sub_1C2D6EC(this, method);
  if ( BYTE2(this->fields.__1__state) || !BattleComboData__AchieveAnyChain((BattleComboData_o *)this, 0) )
  {
    v28 = DefCoroutine_TypeInfo;
    if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
      v28 = DefCoroutine_TypeInfo;
    }
    milliSecFour = (Il2CppObject *)v28->static_fields->milliSecFour;
    v4->fields.__2__current = milliSecFour;
    v30 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1C2D434(v30, (int32_t)milliSecFour, v11, v16);
    result = 1;
    LODWORD(v30[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  }
  else
  {
    v19 = BattlePerformanceCommandCard__showComboEffectShort(_4__this, v4->fields.combo, 0);
    v20 = UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)_4__this, v19, 0);
    v4->fields.__2__current = (Il2CppObject *)v20;
    p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1C2D434(p__2__current, (int32_t)v20, v21, v22);
    v9 = 3;
LABEL_32:
    LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = v9;
    return 1;
  }
  return result;
}


Il2CppObject *BattlePerformanceCommandCard__showComboEffect_d__133__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceCommandCard__showComboEffect_d__133_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceCommandCard__showComboEffect_d__133__System_Collections_IEnumerator_Reset(
        BattlePerformanceCommandCard__showComboEffect_d__133_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BattlePerformanceCommandCard__showComboEffect_d__133_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *BattlePerformanceCommandCard__showComboEffect_d__133__System_Collections_IEnumerator_get_Current(
        BattlePerformanceCommandCard__showComboEffect_d__133_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePerformanceCommandCard__showComboEffect_d__133__System_IDisposable_Dispose(
        BattlePerformanceCommandCard__showComboEffect_d__133_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePerformanceCommandCard__waitFallStar_d__97___ctor(
        BattlePerformanceCommandCard__waitFallStar_d__97_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePerformanceCommandCard__waitFallStar_d__97__MoveNext(
        BattlePerformanceCommandCard__waitFallStar_d__97_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  BattlePerformanceCommandCard__waitFallStar_d__97_o *v4; // x19
  int32_t _1__state; // w8
  BattlePerformanceCommandCard_o *_4__this; // x20
  struct BattleCommandComponent_array *commandCompArray; // x8
  unsigned int v8; // w21
  unsigned int max_length; // w9
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  DefCoroutine_c *v12; // x0
  Il2CppObject *milliSecFive; // x1
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  DefCoroutine_c *v16; // x0
  Il2CppObject *milliSecThree; // x1
  CGThumbnailListItem_o *v18; // x19

  v4 = this;
  if ( (byte_4C295A2 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard__waitFallStar_d__97_o *)sub_1C2D490(&DefCoroutine_TypeInfo);
    byte_4C295A2 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_13;
    BattlePerformanceCommandCard__StartCountupCommandStar(_4__this, 1, 0);
    return 0;
  }
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_13;
    if ( BattlePerformanceCommandCard__fallStar(_4__this, 0) )
    {
      v12 = DefCoroutine_TypeInfo;
      if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v12 = DefCoroutine_TypeInfo;
      }
      milliSecFive = (Il2CppObject *)v12->static_fields->milliSecFive;
      v4->fields.__2__current = milliSecFive;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C2D434(p__2__current, (int32_t)milliSecFive, v10, v11);
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
      return 1;
    }
    return 0;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  if ( !_4__this || (commandCompArray = _4__this->fields.commandCompArray) == 0 )
LABEL_13:
    sub_1C2D6EC(this, method);
  v8 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v8 >= (int)max_length )
      break;
    if ( v8 >= max_length )
      sub_1C2D6F4(this, method, v2);
    this = (BattlePerformanceCommandCard__waitFallStar_d__97_o *)commandCompArray->m_Items[v8];
    if ( this )
    {
      BattleCommandComponent__setCriticalObject((BattleCommandComponent_o *)this, 0, 0);
      commandCompArray = _4__this->fields.commandCompArray;
      ++v8;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_13;
  }
  v16 = DefCoroutine_TypeInfo;
  if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
    v16 = DefCoroutine_TypeInfo;
  }
  milliSecThree = (Il2CppObject *)v16->static_fields->milliSecThree;
  v4->fields.__2__current = milliSecThree;
  v18 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1C2D434(v18, (int32_t)milliSecThree, v2, v3);
  result = 1;
  LODWORD(v18[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *BattlePerformanceCommandCard__waitFallStar_d__97__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceCommandCard__waitFallStar_d__97_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceCommandCard__waitFallStar_d__97__System_Collections_IEnumerator_Reset(
        BattlePerformanceCommandCard__waitFallStar_d__97_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BattlePerformanceCommandCard__waitFallStar_d__97_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *BattlePerformanceCommandCard__waitFallStar_d__97__System_Collections_IEnumerator_get_Current(
        BattlePerformanceCommandCard__waitFallStar_d__97_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePerformanceCommandCard__waitFallStar_d__97__System_IDisposable_Dispose(
        BattlePerformanceCommandCard__waitFallStar_d__97_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePerformanceCommandCard__waitFunc_d__169___ctor(
        BattlePerformanceCommandCard__waitFunc_d__169_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePerformanceCommandCard__waitFunc_d__169__MoveNext(
        BattlePerformanceCommandCard__waitFunc_d__169_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  float v7; // s0
  float timer_5__2; // s8
  struct System_Action_o *callback; // x8
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    timer_5__2 = this->fields._timer_5__2;
    this->fields.__1__state = -1;
    v7 = timer_5__2 + UnityEngine_Time__get_deltaTime(0);
    this->fields._timer_5__2 = v7;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    this->fields._timer_5__2 = 0.0;
    if ( !_4__this )
LABEL_14:
      sub_1C2D6EC(this, method);
    BattlePerformanceCommandCard__setAtkButtonFlg(_4__this, 0, 0);
    v7 = this->fields._timer_5__2;
  }
  if ( v7 >= this->fields.waittime )
  {
LABEL_10:
    callback = this->fields.callback;
    if ( callback )
    {
      ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
        callback->fields.method_code,
        callback->fields.method);
      return 0;
    }
    goto LABEL_14;
  }
  if ( !_4__this )
    goto LABEL_14;
  if ( _4__this->fields.isPressAtkBtn )
  {
    BattlePerformanceCommandCard__setAtkButtonFlg(_4__this, 0, 0);
    goto LABEL_10;
  }
  this->fields.__2__current = 0;
  p__2__current = &this->fields.__2__current;
  sub_1C2D434((CGThumbnailListItem_o *)p__2__current, 0, v5, v6);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *BattlePerformanceCommandCard__waitFunc_d__169__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceCommandCard__waitFunc_d__169_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceCommandCard__waitFunc_d__169__System_Collections_IEnumerator_Reset(
        BattlePerformanceCommandCard__waitFunc_d__169_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BattlePerformanceCommandCard__waitFunc_d__169_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *BattlePerformanceCommandCard__waitFunc_d__169__System_Collections_IEnumerator_get_Current(
        BattlePerformanceCommandCard__waitFunc_d__169_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePerformanceCommandCard__waitFunc_d__169__System_IDisposable_Dispose(
        BattlePerformanceCommandCard__waitFunc_d__169_o *this,
        const MethodInfo *method)
{
  ;
}