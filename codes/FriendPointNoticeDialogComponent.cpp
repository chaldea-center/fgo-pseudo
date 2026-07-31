void FriendPointNoticeDialogComponent___cctor(const MethodInfo *method)
{
  if ( (byte_593ADE6 & 1) == 0 )
  {
    sub_21FFC50(&FriendPointNoticeDialogComponent_TypeInfo);
    byte_593ADE6 = 1;
  }
  *FriendPointNoticeDialogComponent_TypeInfo->static_fields = (struct FriendPointNoticeDialogComponent_StaticFields)vdup_n_s32(0x442F0000u).n64_u64[0];
}


void FriendPointNoticeDialogComponent___ctor(FriendPointNoticeDialogComponent_o *this, const MethodInfo *method)
{
  BaseDialog_c *v3; // x0
  int v4; // w8

  if ( (byte_593ADE5 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_593ADE5 = 1;
  }
  v3 = BaseDialog_TypeInfo;
  *(_QWORD *)&this->fields.servantNameLabelMaxWidth = 0x25843900000LL;
  v4 = *(&v3->_2.cctor_finished + 1);
  this->fields.addedPointLabelCenterPosY = 165.0;
  *(_QWORD *)&this->fields.topPartsPosYMaxFp = 0xC31E000042200000LL;
  this->fields.buttonPosYMaxFp = -219.0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(v3, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void FriendPointNoticeDialogComponent__Awake(FriendPointNoticeDialogComponent_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void FriendPointNoticeDialogComponent__CheckSerializeFieldAssertion(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void FriendPointNoticeDialogComponent__Close(FriendPointNoticeDialogComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendPointNoticeDialogComponent__Close_52592108(this, 0, v2);
}


void FriendPointNoticeDialogComponent__Close_52592108(
        FriendPointNoticeDialogComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  FriendPointNoticeDialogComponent_o *v20; // x0
  const MethodInfo *v21; // x3
  FriendPointNoticeDialogComponent_o *v22; // x0
  const MethodInfo *v23; // x3
  FriendPointNoticeDialogComponent_o *v24; // x0
  const MethodInfo *v25; // x3
  FriendPointNoticeDialogComponent_o *v26; // x0
  const MethodInfo *v27; // x3
  System_Action_o *v28; // x21

  if ( (byte_593ADDD & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_FriendPointNoticeDialogComponent___c__DisplayClass56_0__Close_b__0__);
    sub_21FFC50(&FriendPointNoticeDialogComponent___c__DisplayClass56_0_TypeInfo);
    byte_593ADDD = 1;
  }
  v5 = sub_21FFEBC(FriendPointNoticeDialogComponent___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  FriendPointNoticeDialogComponent__SetEnableButton(v20, this->fields.decideButtonObject, 0, v21);
  FriendPointNoticeDialogComponent__SetEnableButton(v22, this->fields.friendSupportButtonObject, 0, v23);
  FriendPointNoticeDialogComponent__SetEnableButton(v24, this->fields.recommendedSupportButtonObject, 0, v25);
  FriendPointNoticeDialogComponent__SetEnableButton(v26, this->fields.closeButtonObject, 0, v27);
  AndroidBackKeyManager__RemoveBackBtn(this->fields.closeButtonObject, 0);
  v28 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v5,
    Method_FriendPointNoticeDialogComponent___c__DisplayClass56_0__Close_b__0__,
    0);
  BaseDialog__Close((BaseDialog_o *)this, v28, 0);
}


// local variable allocation has failed, the output may be wrong!
void FriendPointNoticeDialogComponent__Display1TypeInfo(
        FriendPointNoticeDialogComponent_o *this,
        int32_t infoType,
        System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__o *infoList,
        const MethodInfo *method)
{
  FriendPointNoticeDialogComponent_o *v6; // x20
  struct FriendPointNoticeDialogComponent_PositionYData_array *layoutYPositionList; // x8
  FriendPointNoticeDialogComponent_PositionYData_o **m_Items; // x8
  FriendPointNoticeDialogComponent_PositionYData_o *v9; // x22
  float v10; // s8
  struct System_Collections_Generic_List_float__o *layoutXPositionList; // x8
  int32_t v12; // w21
  int32_t size; // w25
  float Item; // s0
  __int64 v15; // x8
  float v16; // s9
  float v17; // s8
  Il2CppObject *v18; // x0
  const MethodInfo *v19; // x2
  UnityEngine_Vector2_o v20; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v21; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v22; // 0:s0.4,4:s1.4

  v6 = this;
  if ( (byte_593ADDB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_float__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
    this = (FriendPointNoticeDialogComponent_o *)sub_21FFC50(&Method_System_Collections_Generic_List_float__get_Item__);
    byte_593ADDB = 1;
  }
  if ( !infoList )
    goto LABEL_33;
  layoutYPositionList = v6->fields.layoutYPositionList;
  if ( infoList->fields._size <= 2 )
  {
    if ( !layoutYPositionList )
      goto LABEL_33;
    if ( LODWORD(layoutYPositionList->max_length) )
    {
      m_Items = layoutYPositionList->m_Items;
      goto LABEL_11;
    }
LABEL_34:
    sub_21FFED4(this);
  }
  if ( !layoutYPositionList )
    goto LABEL_33;
  if ( (layoutYPositionList->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_34;
  m_Items = &layoutYPositionList->m_Items[1];
LABEL_11:
  this = (FriendPointNoticeDialogComponent_o *)v6->fields.usedRecommendedServantTitleLabel;
  if ( !this )
    goto LABEL_33;
  v9 = *m_Items;
  this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_33;
  LODWORD(v10) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (FriendPointNoticeDialogComponent_o *)v6->fields.mostUsedServantTitleLabel;
  if ( infoType )
  {
    if ( !this )
      goto LABEL_33;
    this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
    if ( !this )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (FriendPointNoticeDialogComponent_o *)v6->fields.usedRecommendedServantTitleLabel;
    if ( !this )
      goto LABEL_33;
    this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
    if ( !v9 )
      goto LABEL_33;
    v20.fields.x = v10;
    v20.fields.y = v9->fields.upperLabel;
    GameObjectExtensions__SetLocalPosition_42876016((UnityEngine_GameObject_o *)this, v20, 0);
  }
  else
  {
    if ( !this )
      goto LABEL_33;
    this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
    if ( !v9 )
      goto LABEL_33;
    v21.fields.x = v10;
    v21.fields.y = v9->fields.upperLabel;
    GameObjectExtensions__SetLocalPosition_42876016((UnityEngine_GameObject_o *)this, v21, 0);
    this = (FriendPointNoticeDialogComponent_o *)v6->fields.usedRecommendedServantTitleLabel;
    if ( !this )
      goto LABEL_33;
    this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
    if ( !this )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  layoutXPositionList = v6->fields.layoutXPositionList;
  if ( !layoutXPositionList )
    goto LABEL_33;
  if ( infoList->fields._size >= 1 )
  {
    v12 = 0;
    size = layoutXPositionList->fields._size;
    while ( 1 )
    {
      this = (FriendPointNoticeDialogComponent_o *)v6->fields.layoutXPositionList;
      if ( !this )
        break;
      Item = System_Collections_Generic_List_float___get_Item(
               (System_Collections_Generic_List_float__o *)this,
               v12 % size,
               (const MethodInfo_447A6C0 *)Method_System_Collections_Generic_List_float__get_Item__);
      if ( v12 / size )
        v15 = 24;
      else
        v15 = 20;
      v16 = Item;
      v17 = *(float *)((char *)&v9->klass + v15);
      v18 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)infoList,
              v12,
              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
      v22.fields.x = v16;
      v22.fields.y = v17;
      FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
        v6,
        (FriendPointNoticeDialogSvtInfo_o *)v18,
        v22,
        v19);
      if ( ++v12 >= infoList->fields._size )
        return;
    }
LABEL_33:
    sub_21FFECC(this, *(_QWORD *)&infoType);
  }
}


void FriendPointNoticeDialogComponent__Display2TypeInfo(
        FriendPointNoticeDialogComponent_o *this,
        System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__o *recommendedInfoList,
        System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__o *mostUsedInfoList,
        const MethodInfo *method)
{
  FriendPointNoticeDialogComponent_o *v6; // x20
  struct System_Collections_Generic_List_float__o *layoutXPositionList; // x8
  int size; // w23
  float v9; // s9
  float v10; // s8
  float v11; // s9
  unsigned int v12; // w9
  signed int v13; // w22
  float v14; // s9
  float v15; // s8
  unsigned int v16; // w9
  unsigned int v17; // w8
  struct FriendPointNoticeDialogComponent_PositionYData_array *layoutYPositionList; // x9
  FriendPointNoticeDialogComponent_PositionYData_o **v19; // x9
  struct FriendPointNoticeDialogComponent_PositionYData_array *v20; // x9
  FriendPointNoticeDialogComponent_PositionYData_o *v21; // x24
  unsigned int localPosition; // s0
  float v23; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v25; // w22
  float Item; // s0
  __int64 v27; // x8
  float v28; // s9
  float v29; // s8
  Il2CppObject *v30; // x0
  const MethodInfo *v31; // x2
  int32_t v32; // w21
  float v33; // s9
  __int64 v34; // x8
  float v35; // s8
  Il2CppObject *v36; // x0
  const MethodInfo *v37; // x2
  struct FriendPointNoticeDialogComponent_PositionYData_array *v38; // x9
  UnityEngine_Vector2_o v39; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v40; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v41; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v42; // 0:s0.4,4:s1.4

  v6 = this;
  if ( (byte_593ADDC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_float__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
    this = (FriendPointNoticeDialogComponent_o *)sub_21FFC50(&Method_System_Collections_Generic_List_float__get_Item__);
    byte_593ADDC = 1;
  }
  layoutXPositionList = v6->fields.layoutXPositionList;
  if ( !layoutXPositionList || !recommendedInfoList )
    goto LABEL_59;
  size = layoutXPositionList->fields._size;
  v9 = (float)recommendedInfoList->fields._size;
  v10 = (float)size;
  if ( !byte_5931FBB )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5931FBB = 1;
  }
  v11 = v9 / v10;
  this = (FriendPointNoticeDialogComponent_o *)System_Math_TypeInfo;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, recommendedInfoList);
  v12 = vcvtps_s32_f32(v11);
  v13 = ceilf(v11) == INFINITY ? 0x80000000 : v12;
  if ( !mostUsedInfoList )
    goto LABEL_59;
  v14 = (float)mostUsedInfoList->fields._size;
  if ( !byte_5931FBB )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5931FBB = 1;
  }
  v15 = v14 / v10;
  this = (FriendPointNoticeDialogComponent_o *)System_Math_TypeInfo;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, recommendedInfoList);
  v16 = vcvtps_s32_f32(v15);
  if ( ceilf(v15) == INFINITY )
    v17 = 0x80000000;
  else
    v17 = v16;
  if ( v13 < 1 )
    goto LABEL_28;
  if ( v13 != 2 )
  {
    if ( v13 == 1 && v17 == 1 )
    {
      layoutYPositionList = v6->fields.layoutYPositionList;
      if ( !layoutYPositionList )
        goto LABEL_59;
      if ( LODWORD(layoutYPositionList->max_length) > 2 )
      {
        v19 = &layoutYPositionList->m_Items[2];
        goto LABEL_31;
      }
LABEL_60:
      sub_21FFED4(this);
    }
    goto LABEL_28;
  }
  if ( v17 != 1 )
  {
LABEL_28:
    v20 = v6->fields.layoutYPositionList;
    if ( !v20 )
      goto LABEL_59;
    if ( LODWORD(v20->max_length) <= 4 )
      goto LABEL_60;
    v19 = &v20->m_Items[4];
    goto LABEL_31;
  }
  v38 = v6->fields.layoutYPositionList;
  if ( !v38 )
    goto LABEL_59;
  if ( (v38->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_60;
  v19 = &v38->m_Items[3];
LABEL_31:
  v21 = *v19;
  if ( (int)(v17 + v13) >= 4 )
  {
    this = (FriendPointNoticeDialogComponent_o *)v6->fields.servantInfoScrollView;
    if ( !this )
      goto LABEL_59;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
    this = (FriendPointNoticeDialogComponent_o *)v6->fields.servantInfoScrollBar;
    if ( !this )
      goto LABEL_59;
    this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
    if ( !this )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  }
  this = (FriendPointNoticeDialogComponent_o *)v6->fields.usedRecommendedServantTitleLabel;
  if ( !this )
    goto LABEL_59;
  this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_59;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (FriendPointNoticeDialogComponent_o *)v6->fields.usedRecommendedServantTitleLabel;
  if ( !this )
    goto LABEL_59;
  v23 = *(float *)&localPosition;
  this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !v21 )
    goto LABEL_59;
  v39.fields.x = v23;
  v39.fields.y = v21->fields.lowerLabel;
  GameObjectExtensions__SetLocalPosition_42876016((UnityEngine_GameObject_o *)this, v39, 0);
  this = (FriendPointNoticeDialogComponent_o *)v6->fields.mostUsedServantTitleLabel;
  if ( !this )
    goto LABEL_59;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v40.fields.x = v23;
  v40.fields.y = v21->fields.upperLabel;
  GameObjectExtensions__SetLocalPosition_42876016(gameObject, v40, 0);
  if ( recommendedInfoList->fields._size >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      this = (FriendPointNoticeDialogComponent_o *)v6->fields.layoutXPositionList;
      if ( !this )
        break;
      Item = System_Collections_Generic_List_float___get_Item(
               (System_Collections_Generic_List_float__o *)this,
               v25 % size,
               (const MethodInfo_447A6C0 *)Method_System_Collections_Generic_List_float__get_Item__);
      if ( v25 / size )
        v27 = 36;
      else
        v27 = 32;
      v28 = Item;
      v29 = *(float *)((char *)&v21->klass + v27);
      v30 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)recommendedInfoList,
              v25,
              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
      v41.fields.x = v28;
      v41.fields.y = v29;
      FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
        v6,
        (FriendPointNoticeDialogSvtInfo_o *)v30,
        v41,
        v31);
      if ( ++v25 >= recommendedInfoList->fields._size )
        goto LABEL_48;
    }
LABEL_59:
    sub_21FFECC(this, recommendedInfoList);
  }
LABEL_48:
  if ( mostUsedInfoList->fields._size >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      this = (FriendPointNoticeDialogComponent_o *)v6->fields.layoutXPositionList;
      if ( !this )
        break;
      v33 = System_Collections_Generic_List_float___get_Item(
              (System_Collections_Generic_List_float__o *)this,
              v32 % SLODWORD(this->fields.m_CancellationTokenSource),
              (const MethodInfo_447A6C0 *)Method_System_Collections_Generic_List_float__get_Item__);
      if ( v32 / size )
        v34 = 24;
      else
        v34 = 20;
      v35 = *(float *)((char *)&v21->klass + v34);
      v36 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)mostUsedInfoList,
              v32,
              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
      v42.fields.x = v33;
      v42.fields.y = v35;
      FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
        v6,
        (FriendPointNoticeDialogSvtInfo_o *)v36,
        v42,
        v37);
      if ( ++v32 >= mostUsedInfoList->fields._size )
        return;
    }
    goto LABEL_59;
  }
}


void FriendPointNoticeDialogComponent__ExecClickedFunc(
        FriendPointNoticeDialogComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct FriendPointNoticeDialogComponent_CallbackFunc_o *clickedFunc; // x8

  clickedFunc = this->fields.clickedFunc;
  if ( clickedFunc )
    ((void (__fastcall *)(intptr_t, int32_t, intptr_t))clickedFunc->fields.invoke_impl)(
      clickedFunc->fields.method_code,
      result,
      clickedFunc->fields.method);
  this->fields.clickedFunc = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickedFunc,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void FriendPointNoticeDialogComponent__Init(FriendPointNoticeDialogComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, **(System_String_o ***)(qword_594C0B8 + 184), 0),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_21FFECC(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void FriendPointNoticeDialogComponent__OnClickCancel(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_593ADE4 & 1) == 0 )
  {
    sub_21FFC50(&Method_FriendPointNoticeDialogComponent_OnClickCancel__);
    byte_593ADE4 = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickCancel__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_FriendPointNoticeDialogComponent_OnClickCancel__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  FriendPointNoticeDialogComponent__ExecClickedFunc(this, 3, v5);
}


void FriendPointNoticeDialogComponent__OnClickRecommendedSupportDisableMask(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_593ADE0 & 1) == 0 )
  {
    sub_21FFC50(&Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__);
    byte_593ADE0 = 1;
  }
  v2 = Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_21FFC68(Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__);
  v3 = (System_Reflection_MethodBase_o *)sub_21FFC34(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 1, 0, 0);
}


void FriendPointNoticeDialogComponent__OnClickToFriedPointSummon(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_593ADE1 & 1) == 0 )
  {
    sub_21FFC50(&Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__);
    byte_593ADE1 = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
  FriendPointNoticeDialogComponent__ExecClickedFunc(this, 0, v5);
}


void FriendPointNoticeDialogComponent__OnClickToRecommendedSupport(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_593ADE3 & 1) == 0 )
  {
    sub_21FFC50(&Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__);
    byte_593ADE3 = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
  FriendPointNoticeDialogComponent__ExecClickedFunc(this, 2, v5);
}


void FriendPointNoticeDialogComponent__OnClickToSupport(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_593ADE2 & 1) == 0 )
  {
    sub_21FFC50(&Method_FriendPointNoticeDialogComponent_OnClickToSupport__);
    byte_593ADE2 = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickToSupport__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickToSupport__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_FriendPointNoticeDialogComponent_OnClickToSupport__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
  FriendPointNoticeDialogComponent__ExecClickedFunc(this, 1, v5);
}


void FriendPointNoticeDialogComponent__Open(
        FriendPointNoticeDialogComponent_o *this,
        CommonUI_LoginResultData_o *loginResultData,
        FriendPointNoticeDialogComponent_CallbackFunc_o *clickedAction,
        const MethodInfo *method)
{
  FriendPointNoticeDialogSvtInfo_o *gameObject; // x0
  Il2CppObject *v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  UILabel_o *titleLabel; // x21
  int32_t addFriendPoint; // w8
  _BOOL4 v18; // w20
  struct UILabel_o *addedPointLabel; // x21
  System_String_o *mText; // x22
  System_String_o *v21; // x23
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  struct UILabel_o *v25; // x21
  System_String_o *v26; // x0
  struct UILabel_o *v27; // x21
  System_String_o *v28; // x22
  System_String_o *v29; // x23
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  UILabel_o *v33; // x21
  UILabel_o *addedRecommendedPointLabel; // x21
  System_String_o *v35; // x22
  Il2CppObject *v36; // x0
  UILabel_o *v37; // x21
  UnityEngine_GameObject_o *v38; // x0
  System_Collections_Generic_List_object__o *v39; // x21
  System_Collections_Generic_List_object__o *v40; // x25
  __int64 v41; // x1
  UILabel_o *usedRecommendedServantTitleLabel; // x23
  __int64 v43; // x1
  struct CommonUI_LoginResultRecommendSupportFriendPointSvtData_array *addRecommendSupportFriendPointSvtList; // x29
  struct FriendPointNoticeDialogSvtInfo_array *recommendedSupportServantInfoList; // x28
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v47; // x23
  unsigned int v48; // w26
  unsigned __int64 v49; // x27
  unsigned int v50; // w8
  CommonUI_LoginResultRecommendSupportFriendPointSvtData_o *v51; // x24
  System_String_o *monitor; // x25
  const MethodInfo *v53; // x5
  struct FriendPointNoticeDialogSvtInfo_array *v54; // x8
  struct FriendPointNoticeDialogSvtInfo_array *v55; // x8
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  struct FriendPointNoticeDialogSvtInfo_array *v62; // x8
  Il2CppClass **v63; // x9
  struct System_Object_array *items; // x8
  __int64 size; // x10
  Il2CppClass **v66; // x0
  System_Collections_Generic_IEnumerable_T__o *v67; // x23
  FriendPointNoticeDialogComponent___c_c *v68; // x0
  struct FriendPointNoticeDialogComponent___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__49_1; // x24
  Il2CppObject *v71; // x25
  struct FriendPointNoticeDialogComponent___c_StaticFields *v72; // x0
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  UILabel_o *mostUsedServantTitleLabel; // x23
  CommonUI_LoginResultFriendPointSvtData_o *topAddFriendPointSvt; // x23
  FriendPointNoticeDialogSvtInfo_o *normalSupportServantInfo; // x24
  const MethodInfo *v82; // x5
  struct CommonUI_LoginResultFriendPointSvtData_o *v83; // x8
  CommonUI_LoginResultFriendPointSvtData_o *topAddFriendPointSvtEQ; // x23
  FriendPointNoticeDialogSvtInfo_o *eventSupportServantInfo; // x24
  const MethodInfo *v86; // x5
  struct CommonUI_LoginResultFriendPointSvtData_o *v87; // x8
  CommonUI_LoginResultFriendPointSvtData_o *topAddFriendPointSvtGrand; // x23
  FriendPointNoticeDialogSvtInfo_o *grandSupportServantInfo; // x24
  const MethodInfo *v90; // x5
  struct CommonUI_LoginResultFriendPointSvtData_o *v91; // x8
  System_String_o *v92; // x2
  System_String_o *v93; // x3
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  struct System_Object_array *v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  Il2CppClass **v101; // x0
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  struct System_Object_array *v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  Il2CppClass **v111; // x0
  System_String_o *v112; // x2
  System_String_o *v113; // x3
  int32_t v114; // w4
  int32_t v115; // w5
  bool v116; // w6
  bool v117; // w7
  struct System_Object_array *v118; // x8
  _QWORD *v119; // x9
  __int64 v120; // x10
  Il2CppClass **v121; // x0
  const MethodInfo *v122; // x3
  int v123; // w8
  FriendPointNoticeDialogComponent_o *v124; // x0
  int32_t v125; // w1
  System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__o *v126; // x2
  __int64 v127; // x1
  UILabel_o *noDataLabel; // x20
  Il2CppObject *Master_object; // x20
  FriendPointNoticeDialogSvtInfo_o *v130; // x20
  int32_t m_CancellationTokenSource; // w21
  BalanceConfig_c *v132; // x0
  __int64 v133; // x1
  UILabel_o *friendPointMaxLabel; // x21
  UnityEngine_GameObject_o *v135; // x0
  UILabel_o *currentFriendPointLabel; // x21
  System_String_o *v137; // x22
  Il2CppObject *v138; // x0
  UILabel_o *v139; // x20
  UILabel_o *closeButtonLabel; // x20
  UILabel_o *friendSupportButtonLabel; // x20
  const MethodInfo *v142; // x1
  UILabel_o *decideButtonLabel; // x20
  System_Action_o *v144; // x20
  System_Collections_Generic_List_object__o *v145; // [xsp+0h] [xbp-80h]
  CommonUI_LoginResultData_o *v146; // [xsp+8h] [xbp-78h]
  int32_t addFollowFriendPoint; // [xsp+14h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_593ADD8 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_FriendPointNoticeDialogSvtInfo__TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_FriendPointNoticeDialogSvtInfo___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_TblUserMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_FriendPointNoticeDialogComponent__Open_b__49_0__);
    sub_21FFC50(&FriendPointNoticeDialogComponent_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_FriendPointNoticeDialogComponent___c__Open_b__49_1__);
    sub_21FFC50(&FriendPointNoticeDialogComponent___c_TypeInfo);
    sub_21FFC50(&StringLiteral_7229/*"GET_FRIEND_POINT_FP_RECOMMENDED"*/);
    sub_21FFC50(&StringLiteral_7236/*"GET_FRIEND_POINT_SERVANT_TITLE"*/);
    sub_21FFC50(&StringLiteral_7232/*"GET_FRIEND_POINT_NO_DATA"*/);
    sub_21FFC50(&StringLiteral_7231/*"GET_FRIEND_POINT_NOW_POINT"*/);
    sub_21FFC50(&StringLiteral_7238/*"GET_FRIEND_POINT_SUPPORT_BTN"*/);
    sub_21FFC50(&StringLiteral_114/*"  "*/);
    sub_21FFC50(&StringLiteral_7228/*"GET_FRIEND_POINT_FP_NORMAL"*/);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    sub_21FFC50(&StringLiteral_7227/*"GET_FRIEND_POINT_FP_FOLLOW"*/);
    sub_21FFC50(&StringLiteral_7224/*"GET_FRIEND_POINT_CAPTION_GRAND"*/);
    sub_21FFC50(&StringLiteral_7237/*"GET_FRIEND_POINT_SERVANT_USED_RECOMMENDED_TITLE"*/);
    sub_21FFC50(&StringLiteral_7223/*"GET_FRIEND_POINT_CAPTION_EVENT"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_7230/*"GET_FRIEND_POINT_GACHA_BTN"*/);
    sub_21FFC50(&StringLiteral_7239/*"GET_FRIEND_POINT_TITLE"*/);
    sub_21FFC50(&StringLiteral_7222/*"GET_FRIEND_POINT_AT_LIMIT"*/);
    sub_21FFC50(&StringLiteral_7225/*"GET_FRIEND_POINT_CAPTION_NORMAL"*/);
    byte_593ADD8 = 1;
  }
  entity = 0;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
  if ( !gameObject )
    goto LABEL_188;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  this->fields.clickedFunc = clickedAction;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickedFunc,
    (int32_t)clickedAction,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.noDataLabel;
  this->fields.state = 1;
  if ( !gameObject )
    goto LABEL_188;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0);
  if ( !gameObject )
    goto LABEL_188;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7239/*"GET_FRIEND_POINT_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_188;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.addedPointLabel;
  if ( !gameObject )
    goto LABEL_188;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !loginResultData )
    goto LABEL_188;
  addFriendPoint = loginResultData->fields.addFriendPoint;
  v18 = addFriendPoint < 1;
  if ( addFriendPoint >= 1 )
  {
    addedPointLabel = this->fields.addedPointLabel;
    if ( !addedPointLabel )
      goto LABEL_188;
    mText = addedPointLabel->fields.mText;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_7228/*"GET_FRIEND_POINT_FP_NORMAL"*/, 0);
    addFollowFriendPoint = loginResultData->fields.addFriendPoint;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &addFollowFriendPoint);
    v23 = System_String__Format(v21, v22, 0);
    v24 = System_String__Concat_75438412(mText, v23, 0);
    UILabel__set_text(addedPointLabel, v24, 0);
  }
  if ( loginResultData->fields.addFollowFriendPoint >= 1 )
  {
    if ( loginResultData->fields.addFriendPoint >= 1 )
    {
      v25 = this->fields.addedPointLabel;
      if ( !v25 )
        goto LABEL_188;
      v26 = System_String__Concat_75438412(v25->fields.mText, (System_String_o *)StringLiteral_114/*"  "*/, 0);
      UILabel__set_text(v25, v26, 0);
    }
    v27 = this->fields.addedPointLabel;
    if ( !v27 )
      goto LABEL_188;
    v28 = v27->fields.mText;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_7227/*"GET_FRIEND_POINT_FP_FOLLOW"*/, 0);
    addFollowFriendPoint = loginResultData->fields.addFollowFriendPoint;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &addFollowFriendPoint);
    v31 = System_String__Format(v29, v30, 0);
    v32 = System_String__Concat_75438412(v28, v31, 0);
    UILabel__set_text(v27, v32, 0);
    v18 = 0;
  }
  v33 = this->fields.addedPointLabel;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)FriendPointNoticeDialogComponent_TypeInfo;
  if ( !*(&FriendPointNoticeDialogComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent_TypeInfo, v8);
  if ( !v33 )
    goto LABEL_188;
  UILabel__SetCondensedScale_56386440(
    v33,
    FriendPointNoticeDialogComponent_TypeInfo->static_fields->ADD_POINT_LABEL_MAX_WIDTH,
    0.0,
    0);
  if ( loginResultData->fields.addRecommendSupportFriendPoint < 1 )
  {
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.addedPointLabel;
    if ( !gameObject )
      goto LABEL_188;
LABEL_38:
    v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionY(v38, this->fields.addedPointLabelCenterPosY, 0);
    goto LABEL_39;
  }
  addedRecommendedPointLabel = this->fields.addedRecommendedPointLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_7229/*"GET_FRIEND_POINT_FP_RECOMMENDED"*/, 0);
  addFollowFriendPoint = loginResultData->fields.addRecommendSupportFriendPoint;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &addFollowFriendPoint);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_String__Format(v35, v36, 0);
  if ( !addedRecommendedPointLabel )
    goto LABEL_188;
  UILabel__set_text(addedRecommendedPointLabel, (System_String_o *)gameObject, 0);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)FriendPointNoticeDialogComponent_TypeInfo;
  v37 = this->fields.addedRecommendedPointLabel;
  if ( !*(&FriendPointNoticeDialogComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent_TypeInfo, v8);
  if ( !v37 )
    goto LABEL_188;
  UILabel__SetCondensedScale_56386440(
    v37,
    FriendPointNoticeDialogComponent_TypeInfo->static_fields->ADD_POINT_LABEL_MAX_WIDTH,
    0.0,
    0);
  if ( v18 )
  {
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.addedRecommendedPointLabel;
    if ( !gameObject )
      goto LABEL_188;
    goto LABEL_38;
  }
LABEL_39:
  v39 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo___ctor__);
  v40 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo___ctor__);
  usedRecommendedServantTitleLabel = this->fields.usedRecommendedServantTitleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7237/*"GET_FRIEND_POINT_SERVANT_USED_RECOMMENDED_TITLE"*/, 0);
  if ( !usedRecommendedServantTitleLabel )
    goto LABEL_188;
  UILabel__set_text(usedRecommendedServantTitleLabel, (System_String_o *)gameObject, 0);
  addRecommendSupportFriendPointSvtList = loginResultData->fields.addRecommendSupportFriendPointSvtList;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v43);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestMaster___);
  v145 = v40;
  v146 = loginResultData;
  if ( addRecommendSupportFriendPointSvtList && addRecommendSupportFriendPointSvtList->max_length )
  {
    recommendedSupportServantInfoList = this->fields.recommendedSupportServantInfoList;
    if ( !recommendedSupportServantInfoList )
      goto LABEL_188;
    max_length = recommendedSupportServantInfoList->max_length;
    if ( (int)max_length >= 1 )
    {
      v47 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
      v48 = 0;
      v49 = 0;
      while ( v49 < (unsigned int)max_length )
      {
        v50 = addRecommendSupportFriendPointSvtList->max_length;
        if ( (int)v48 >= (int)v50 )
        {
          gameObject = recommendedSupportServantInfoList->m_Items[v49];
          if ( !gameObject )
            goto LABEL_188;
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)gameObject,
                                                             0);
          if ( !gameObject )
            goto LABEL_188;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        }
        else
        {
          if ( v48 >= v50 )
            break;
          v51 = addRecommendSupportFriendPointSvtList->m_Items[v48];
          if ( !v51 || !v47 )
            goto LABEL_188;
          monitor = (System_String_o *)StringLiteral_1/*""*/;
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                             v47,
                                                             &entity,
                                                             v51->fields.questId,
                                                             (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_188;
            monitor = (System_String_o *)entity[1].monitor;
          }
          v54 = this->fields.recommendedSupportServantInfoList;
          if ( !v54 )
            goto LABEL_188;
          if ( v48 >= LODWORD(v54->max_length) )
            break;
          FriendPointNoticeDialogComponent__SetupServantInfo_52586996(
            (FriendPointNoticeDialogComponent_o *)gameObject,
            v54->m_Items[v48],
            v51,
            monitor,
            v51->fields.friendPoint,
            v53);
          v55 = this->fields.recommendedSupportServantInfoList;
          if ( !v55 )
            goto LABEL_188;
          if ( v48 >= LODWORD(v55->max_length) )
            break;
          gameObject = v55->m_Items[v48];
          if ( !gameObject )
            goto LABEL_188;
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)gameObject,
                                                             0);
          if ( !gameObject )
            goto LABEL_188;
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_GameObject__get_activeSelf(
                                                             (UnityEngine_GameObject_o *)gameObject,
                                                             0);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            v62 = this->fields.recommendedSupportServantInfoList;
            if ( !v62 )
              goto LABEL_188;
            if ( v48 >= LODWORD(v62->max_length) )
              break;
            if ( !v39 )
              goto LABEL_188;
            v63 = &v62->obj.klass + (int)v48;
            items = v39->fields._items;
            v8 = (Il2CppObject *)v63[4];
            ++v39->fields._version;
            if ( !items )
              goto LABEL_188;
            size = v39->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v39,
                v8,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(*((_QWORD *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__
                                                           + 4)
                                                         + 192LL)
                                             + 112LL));
            }
            else
            {
              v66 = &items->obj.klass + size;
              v39->fields._size = size + 1;
              v66[4] = (Il2CppClass *)v8;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v66 + 4), (int32_t)v8, v56, v57, v58, v59, v60, v61);
            }
          }
          ++v48;
        }
        LODWORD(max_length) = recommendedSupportServantInfoList->max_length;
        if ( (__int64)++v49 >= (int)max_length )
          goto LABEL_84;
      }
      sub_21FFED4(gameObject);
    }
  }
  else
  {
    v67 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.recommendedSupportServantInfoList;
    v68 = FriendPointNoticeDialogComponent___c_TypeInfo;
    if ( !*(&FriendPointNoticeDialogComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent___c_TypeInfo, v8);
      v68 = FriendPointNoticeDialogComponent___c_TypeInfo;
    }
    static_fields = v68->static_fields;
    _9__49_1 = (System_Action_object__o *)static_fields->__9__49_1;
    if ( !_9__49_1 )
    {
      if ( !*(&v68->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v68, v8);
        static_fields = FriendPointNoticeDialogComponent___c_TypeInfo->static_fields;
      }
      v71 = (Il2CppObject *)static_fields->__9;
      _9__49_1 = (System_Action_object__o *)sub_21FFEBC(System_Action_FriendPointNoticeDialogSvtInfo__TypeInfo);
      System_Action_object____ctor(_9__49_1, v71, Method_FriendPointNoticeDialogComponent___c__Open_b__49_1__, 0);
      v72 = FriendPointNoticeDialogComponent___c_TypeInfo->static_fields;
      v72->__9__49_1 = (struct System_Action_FriendPointNoticeDialogSvtInfo__o *)_9__49_1;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v72->__9__49_1, (int32_t)_9__49_1, v73, v74, v75, v76, v77, v78);
    }
    BasicHelper__ForEach_object_(
      v67,
      (System_Action_T__o *)_9__49_1,
      (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_FriendPointNoticeDialogSvtInfo___);
  }
LABEL_84:
  mostUsedServantTitleLabel = this->fields.mostUsedServantTitleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7236/*"GET_FRIEND_POINT_SERVANT_TITLE"*/, 0);
  if ( !mostUsedServantTitleLabel )
    goto LABEL_188;
  UILabel__set_text(mostUsedServantTitleLabel, (System_String_o *)gameObject, 0);
  gameObject = this->fields.normalSupportServantInfo;
  if ( !gameObject )
    goto LABEL_188;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0);
  if ( !gameObject )
    goto LABEL_188;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  topAddFriendPointSvt = v146->fields.topAddFriendPointSvt;
  if ( topAddFriendPointSvt )
  {
    normalSupportServantInfo = this->fields.normalSupportServantInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7225/*"GET_FRIEND_POINT_CAPTION_NORMAL"*/, 0);
    v83 = v146->fields.topAddFriendPointSvt;
    if ( !v83 )
      goto LABEL_188;
    FriendPointNoticeDialogComponent__SetupServantInfo(
      (FriendPointNoticeDialogComponent_o *)gameObject,
      normalSupportServantInfo,
      topAddFriendPointSvt,
      (System_String_o *)gameObject,
      v83->fields.friendPoint,
      v82);
  }
  gameObject = this->fields.eventSupportServantInfo;
  if ( !gameObject )
    goto LABEL_188;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0);
  if ( !gameObject )
    goto LABEL_188;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  topAddFriendPointSvtEQ = v146->fields.topAddFriendPointSvtEQ;
  if ( topAddFriendPointSvtEQ )
  {
    eventSupportServantInfo = this->fields.eventSupportServantInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7223/*"GET_FRIEND_POINT_CAPTION_EVENT"*/, 0);
    v87 = v146->fields.topAddFriendPointSvtEQ;
    if ( !v87 )
      goto LABEL_188;
    FriendPointNoticeDialogComponent__SetupServantInfo(
      (FriendPointNoticeDialogComponent_o *)gameObject,
      eventSupportServantInfo,
      topAddFriendPointSvtEQ,
      (System_String_o *)gameObject,
      v87->fields.friendPoint,
      v86);
  }
  gameObject = this->fields.grandSupportServantInfo;
  if ( !gameObject )
    goto LABEL_188;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0);
  if ( !gameObject )
    goto LABEL_188;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  topAddFriendPointSvtGrand = v146->fields.topAddFriendPointSvtGrand;
  if ( topAddFriendPointSvtGrand )
  {
    grandSupportServantInfo = this->fields.grandSupportServantInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7224/*"GET_FRIEND_POINT_CAPTION_GRAND"*/, 0);
    v91 = v146->fields.topAddFriendPointSvtGrand;
    if ( !v91 )
      goto LABEL_188;
    FriendPointNoticeDialogComponent__SetupServantInfo(
      (FriendPointNoticeDialogComponent_o *)gameObject,
      grandSupportServantInfo,
      topAddFriendPointSvtGrand,
      (System_String_o *)gameObject,
      v91->fields.friendPoint,
      v90);
  }
  gameObject = this->fields.normalSupportServantInfo;
  if ( !gameObject )
    goto LABEL_188;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0);
  if ( !gameObject )
    goto LABEL_188;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_GameObject__get_activeSelf(
                                                     (UnityEngine_GameObject_o *)gameObject,
                                                     0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v145 )
      goto LABEL_188;
    v98 = v145->fields._items;
    v8 = (Il2CppObject *)this->fields.normalSupportServantInfo;
    v99 = Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__;
    ++v145->fields._version;
    if ( !v98 )
      goto LABEL_188;
    v100 = v145->fields._size;
    if ( (unsigned int)v100 >= LODWORD(v98->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v145,
        v8,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
    }
    else
    {
      v101 = &v98->obj.klass + v100;
      v145->fields._size = v100 + 1;
      v101[4] = (Il2CppClass *)v8;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v101 + 4), (int32_t)v8, v92, v93, v94, v95, v96, v97);
    }
  }
  gameObject = this->fields.eventSupportServantInfo;
  if ( !gameObject )
    goto LABEL_188;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0);
  if ( !gameObject )
    goto LABEL_188;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_GameObject__get_activeSelf(
                                                     (UnityEngine_GameObject_o *)gameObject,
                                                     0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v145 )
      goto LABEL_188;
    v108 = v145->fields._items;
    v8 = (Il2CppObject *)this->fields.eventSupportServantInfo;
    v109 = Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__;
    ++v145->fields._version;
    if ( !v108 )
      goto LABEL_188;
    v110 = v145->fields._size;
    if ( (unsigned int)v110 >= LODWORD(v108->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v145,
        v8,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
    }
    else
    {
      v111 = &v108->obj.klass + v110;
      v145->fields._size = v110 + 1;
      v111[4] = (Il2CppClass *)v8;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v111 + 4), (int32_t)v8, v102, v103, v104, v105, v106, v107);
    }
  }
  gameObject = this->fields.grandSupportServantInfo;
  if ( !gameObject )
    goto LABEL_188;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0);
  if ( !gameObject )
    goto LABEL_188;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_GameObject__get_activeSelf(
                                                     (UnityEngine_GameObject_o *)gameObject,
                                                     0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v145 )
      goto LABEL_188;
    v118 = v145->fields._items;
    v8 = (Il2CppObject *)this->fields.grandSupportServantInfo;
    v119 = Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__;
    ++v145->fields._version;
    if ( !v118 )
      goto LABEL_188;
    v120 = v145->fields._size;
    if ( (unsigned int)v120 >= LODWORD(v118->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v145,
        v8,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
    }
    else
    {
      v121 = &v118->obj.klass + v120;
      v145->fields._size = v120 + 1;
      v121[4] = (Il2CppClass *)v8;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v121 + 4), (int32_t)v8, v112, v113, v114, v115, v116, v117);
    }
  }
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.servantInfoScrollView;
  if ( !gameObject )
    goto LABEL_188;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.servantInfoScrollBar;
  if ( !gameObject )
    goto LABEL_188;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0);
  if ( !gameObject )
    goto LABEL_188;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  if ( !v39 || !v145 )
    goto LABEL_188;
  v123 = v145->fields._size;
  if ( v39->fields._size >= 1 )
  {
    v124 = this;
    if ( v123 > 0 )
    {
      FriendPointNoticeDialogComponent__Display2TypeInfo(
        this,
        (System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__o *)v39,
        (System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__o *)v145,
        v122);
      goto LABEL_157;
    }
    v125 = 1;
    v126 = (System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__o *)v39;
    goto LABEL_143;
  }
  if ( v123 > 0 )
  {
    v124 = this;
    v125 = 0;
    v126 = (System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__o *)v145;
LABEL_143:
    FriendPointNoticeDialogComponent__Display1TypeInfo(v124, v125, v126, v122);
    goto LABEL_157;
  }
  if ( v146->fields.addFriendPoint > 0
    || v146->fields.addFollowFriendPoint > 0
    || v146->fields.addRecommendSupportFriendPoint >= 1 )
  {
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.noDataLabel;
    if ( !gameObject )
      goto LABEL_188;
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)gameObject,
                                                       0);
    if ( !gameObject )
      goto LABEL_188;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    noDataLabel = this->fields.noDataLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v127);
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7232/*"GET_FRIEND_POINT_NO_DATA"*/, 0);
    if ( !noDataLabel )
      goto LABEL_188;
    UILabel__set_text(noDataLabel, (System_String_o *)gameObject, 0);
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.mostUsedServantTitleLabel;
    if ( !gameObject )
      goto LABEL_188;
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)gameObject,
                                                       0);
    if ( !gameObject )
      goto LABEL_188;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.usedRecommendedServantTitleLabel;
    if ( !gameObject )
      goto LABEL_188;
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)gameObject,
                                                       0);
    if ( !gameObject )
      goto LABEL_188;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
LABEL_157:
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_TblUserMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_188;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)TblUserMaster__getUserData(
                                                     (TblUserMaster_o *)Master_object,
                                                     *(_QWORD *)&gameObject[2].fields.friendPointLabel->fields.updateAnchors,
                                                     0);
  if ( !gameObject )
    goto LABEL_188;
  v130 = gameObject;
  m_CancellationTokenSource = (int32_t)gameObject->fields.m_CancellationTokenSource;
  v132 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v8);
    v132 = BalanceConfig_TypeInfo;
  }
  if ( m_CancellationTokenSource >= v132->static_fields->FriendPointMax )
  {
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.friendPointMaxLabel;
    if ( gameObject )
    {
      gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)gameObject,
                                                         0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        friendPointMaxLabel = this->fields.friendPointMaxLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v133);
        gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_7222/*"GET_FRIEND_POINT_AT_LIMIT"*/,
                                                           0);
        if ( friendPointMaxLabel )
        {
          UILabel__set_text(friendPointMaxLabel, (System_String_o *)gameObject, 0);
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.basePanelSprite;
          if ( gameObject )
          {
            UIWidget__set_height((UIWidget_o *)gameObject, this->fields.confirmWindowHeightMaxFp, 0);
            GameObjectExtensions__SetLocalPositionY(this->fields.topParts, this->fields.topPartsPosYMaxFp, 0);
            gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.currentFriendPointLabel;
            if ( gameObject )
            {
              v135 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
              GameObjectExtensions__SetLocalPositionY(v135, this->fields.currentFpLabelYMaxFp, 0);
              GameObjectExtensions__SetLocalPositionY(this->fields.buttonParentObject, this->fields.buttonPosYMaxFp, 0);
              goto LABEL_178;
            }
          }
        }
      }
    }
LABEL_188:
    sub_21FFECC(gameObject, v8);
  }
LABEL_178:
  currentFriendPointLabel = this->fields.currentFriendPointLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
  v137 = LocalizationManager__Get((System_String_o *)StringLiteral_7231/*"GET_FRIEND_POINT_NOW_POINT"*/, 0);
  addFollowFriendPoint = (int32_t)v130->fields.m_CancellationTokenSource;
  v138 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &addFollowFriendPoint);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_String__Format(v137, v138, 0);
  if ( !currentFriendPointLabel )
    goto LABEL_188;
  UILabel__set_text(currentFriendPointLabel, (System_String_o *)gameObject, 0);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)FriendPointNoticeDialogComponent_TypeInfo;
  v139 = this->fields.currentFriendPointLabel;
  if ( !*(&FriendPointNoticeDialogComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent_TypeInfo, v8);
  if ( !v139 )
    goto LABEL_188;
  UILabel__SetCondensedScale_56386440(
    v139,
    FriendPointNoticeDialogComponent_TypeInfo->static_fields->CURRENT_FRIEND_POINT_LABEL_MAX_WIDTH,
    0.0,
    0);
  closeButtonLabel = this->fields.closeButtonLabel;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeButtonLabel )
    goto LABEL_188;
  UILabel__set_text(closeButtonLabel, (System_String_o *)gameObject, 0);
  friendSupportButtonLabel = this->fields.friendSupportButtonLabel;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7238/*"GET_FRIEND_POINT_SUPPORT_BTN"*/, 0);
  if ( !friendSupportButtonLabel )
    goto LABEL_188;
  UILabel__set_text(friendSupportButtonLabel, (System_String_o *)gameObject, 0);
  FriendPointNoticeDialogComponent__SetRecommendedSupportButton(this, v142);
  decideButtonLabel = this->fields.decideButtonLabel;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7230/*"GET_FRIEND_POINT_GACHA_BTN"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_188;
  UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0);
  AndroidBackKeyManager__AddBackBtn(this->fields.closeButtonObject, 0);
  v144 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v144, (Il2CppObject *)this, Method_FriendPointNoticeDialogComponent__Open_b__49_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v144, 0, 0, 0);
}


void FriendPointNoticeDialogComponent__SetBackKeyForAndroid(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  AndroidBackKeyManager__AddBackBtn(this->fields.closeButtonObject, 0);
}


void FriendPointNoticeDialogComponent__SetEnableButton(
        FriendPointNoticeDialogComponent_o *this,
        UnityEngine_GameObject_o *buttonObj,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_593ADDE & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    this = (FriendPointNoticeDialogComponent_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593ADDE = 1;
  }
  if ( !buttonObj )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       buttonObj,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0,
                                                 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( Component_object )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)Component_object, isEnable, 0);
      return;
    }
LABEL_10:
    sub_21FFECC(this, buttonObj);
  }
}


void FriendPointNoticeDialogComponent__SetRecommendedSupportButton(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *recommendedSupportButtonLabel; // x20
  System_String_o *Master_object; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  RecommendSupportQuestEntity_array *List; // x0
  __int64 v8; // x1
  FriendPointNoticeDialogComponent___c_c *v9; // x8
  System_Object_array *v10; // x20
  struct FriendPointNoticeDialogComponent___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__58_0; // x21
  Il2CppObject *v13; // x22
  struct FriendPointNoticeDialogComponent___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  bool v21; // w0
  __int64 v22; // x1
  UILabel_o *recommendedSupportButtonLabelForMask; // x21
  bool v24; // w20
  FriendPointNoticeDialogComponent_o *v25; // x0
  const MethodInfo *v26; // x3

  if ( (byte_593ADDF & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_RecommendSupportQuestEntity___);
    sub_21FFC50(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_Func_RecommendSupportQuestEntity__bool__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_FriendPointNoticeDialogComponent___c__SetRecommendedSupportButton_b__58_0__);
    sub_21FFC50(&FriendPointNoticeDialogComponent___c_TypeInfo);
    sub_21FFC50(&StringLiteral_7233/*"GET_FRIEND_POINT_RECOMMENDED_BTN"*/);
    byte_593ADDF = 1;
  }
  recommendedSupportButtonLabel = this->fields.recommendedSupportButtonLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_7233/*"GET_FRIEND_POINT_RECOMMENDED_BTN"*/, 0);
  if ( !recommendedSupportButtonLabel )
    goto LABEL_20;
  UILabel__set_text(recommendedSupportButtonLabel, Master_object, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
  if ( !Master_object )
    goto LABEL_20;
  List = RecommendSupportQuestMaster__GetList((RecommendSupportQuestMaster_o *)Master_object, 0);
  v9 = FriendPointNoticeDialogComponent___c_TypeInfo;
  v10 = (System_Object_array *)List;
  if ( !*(&FriendPointNoticeDialogComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent___c_TypeInfo, v8);
    v9 = FriendPointNoticeDialogComponent___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__58_0 = (System_Func_object__bool__o *)static_fields->__9__58_0;
  if ( !_9__58_0 )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, v8);
      static_fields = FriendPointNoticeDialogComponent___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__58_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_RecommendSupportQuestEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__58_0,
      v13,
      Method_FriendPointNoticeDialogComponent___c__SetRecommendedSupportButton_b__58_0__,
      0);
    v14 = FriendPointNoticeDialogComponent___c_TypeInfo->static_fields;
    v14->__9__58_0 = (struct System_Func_RecommendSupportQuestEntity__bool__o *)_9__58_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->__9__58_0, (int32_t)_9__58_0, v15, v16, v17, v18, v19, v20);
  }
  v21 = BasicHelper__Any_object__58575580(
          v10,
          (System_Func_T__bool__o *)_9__58_0,
          (const MethodInfo_37DCADC *)Method_BasicHelper_Any_RecommendSupportQuestEntity___);
  recommendedSupportButtonLabelForMask = this->fields.recommendedSupportButtonLabelForMask;
  v24 = v21;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_7233/*"GET_FRIEND_POINT_RECOMMENDED_BTN"*/, 0);
  if ( !recommendedSupportButtonLabelForMask
    || (UILabel__set_text(recommendedSupportButtonLabelForMask, Master_object, 0),
        FriendPointNoticeDialogComponent__SetEnableButton(v25, this->fields.recommendedSupportButtonObject, v24, v26),
        (Master_object = (System_String_o *)this->fields.recommendedSupportButtonMaskTextObject) == 0) )
  {
LABEL_20:
    sub_21FFECC(Master_object, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, !v24, 0);
}


void FriendPointNoticeDialogComponent__SetupServantInfo(
        FriendPointNoticeDialogComponent_o *this,
        FriendPointNoticeDialogSvtInfo_o *servantInfo,
        CommonUI_LoginResultFriendPointSvtData_o *pointData,
        System_String_o *questName,
        int32_t friendPoint,
        const MethodInfo *method)
{
  FriendPointNoticeDialogComponent_o *v10; // x23
  const MethodInfo *v11; // x5
  bool v12; // w0
  __int64 v13; // x1
  Il2CppObject *object; // x20
  __int64 v15; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v17; // x2

  if ( (byte_593ADD9 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIFont___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_GameObject___);
    this = (FriendPointNoticeDialogComponent_o *)sub_21FFC50(&StringLiteral_7080/*"Fonts/TextAtlas3"*/);
    byte_593ADD9 = 1;
  }
  if ( !servantInfo )
    goto LABEL_17;
  this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)servantInfo,
                                                 0);
  v10 = this;
  if ( !pointData )
  {
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      return;
    }
    goto LABEL_17;
  }
  if ( !this )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v12 = FriendPointNoticeDialogSvtInfo__Set(
          servantInfo,
          pointData->fields.svtId,
          pointData->fields.userSvtId,
          questName,
          friendPoint,
          v11);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v10, v12, 0);
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_7080/*"Fonts/TextAtlas3"*/,
             (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)object, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( object )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)object,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
        FriendPointNoticeDialogSvtInfo__SetLabelsBitmapFont(servantInfo, (UIFont_o *)Component_object, v17);
      return;
    }
LABEL_17:
    sub_21FFECC(this, servantInfo);
  }
}


void FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
        FriendPointNoticeDialogComponent_o *this,
        FriendPointNoticeDialogSvtInfo_o *servantInfo,
        UnityEngine_Vector2_o position,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v9; // x1
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Vector2_o v11; // 0:s0.4,4:s1.4

  if ( !servantInfo )
    sub_21FFECC(this, 0);
  y = position.fields.y;
  x = position.fields.x;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantInfo, 0);
  v11.fields.x = x;
  v11.fields.y = y;
  GameObjectExtensions__SetLocalPosition_42876016(gameObject, v11, 0);
  FriendPointNoticeDialogSvtInfo__SetLabelsCondensedScale(servantInfo, this->fields.servantNameLabelMaxWidth, v9);
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantInfo, 0);
  GameObjectExtensions__ResetLocalScale(v10, 0);
}


void FriendPointNoticeDialogComponent__SetupServantInfo_52586996(
        FriendPointNoticeDialogComponent_o *this,
        FriendPointNoticeDialogSvtInfo_o *servantInfo,
        CommonUI_LoginResultRecommendSupportFriendPointSvtData_o *pointData,
        System_String_o *questName,
        int32_t friendPoint,
        const MethodInfo *method)
{
  FriendPointNoticeDialogComponent_o *v10; // x23
  const MethodInfo *v11; // x5
  bool v12; // w0
  __int64 v13; // x1
  Il2CppObject *object; // x20
  __int64 v15; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v17; // x2

  if ( (byte_593ADDA & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIFont___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_GameObject___);
    this = (FriendPointNoticeDialogComponent_o *)sub_21FFC50(&StringLiteral_7080/*"Fonts/TextAtlas3"*/);
    byte_593ADDA = 1;
  }
  if ( !servantInfo )
    goto LABEL_17;
  this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)servantInfo,
                                                 0);
  v10 = this;
  if ( !pointData )
  {
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      return;
    }
    goto LABEL_17;
  }
  if ( !this )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v12 = FriendPointNoticeDialogSvtInfo__Set(
          servantInfo,
          pointData->fields.svtId,
          pointData->fields.userSvtId,
          questName,
          friendPoint,
          v11);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v10, v12, 0);
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_7080/*"Fonts/TextAtlas3"*/,
             (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)object, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( object )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)object,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
        FriendPointNoticeDialogSvtInfo__SetLabelsBitmapFont(servantInfo, (UIFont_o *)Component_object, v17);
      return;
    }
LABEL_17:
    sub_21FFECC(this, servantInfo);
  }
}


void FriendPointNoticeDialogComponent___Open_b__49_0(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( this->fields.state == 1 )
    this->fields.state = 0;
}


void FriendPointNoticeDialogComponent__add_clickedFunc(
        FriendPointNoticeDialogComponent_o *this,
        FriendPointNoticeDialogComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *clickedFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x0
  bool v9; // zf
  FriendPointNoticeDialogComponent_o *v10; // x0
  FriendPointNoticeDialogComponent_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_593ADD6 & 1) == 0 )
  {
    sub_21FFC50(&FriendPointNoticeDialogComponent_CallbackFunc_TypeInfo);
    byte_593ADD6 = 1;
  }
  clickedFunc = (System_Delegate_o *)this->fields.clickedFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(clickedFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (FriendPointNoticeDialogComponent_CallbackFunc_c *)v6->klass != FriendPointNoticeDialogComponent_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_223767C(&this->fields.clickedFunc, v6, clickedFunc);
    v9 = v8 == (_QWORD)clickedFunc;
    clickedFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_220024C(v6, FriendPointNoticeDialogComponent_CallbackFunc_TypeInfo, v7);
  FriendPointNoticeDialogComponent__remove_clickedFunc(v10, v11, v12);
}


void FriendPointNoticeDialogComponent__remove_clickedFunc(
        FriendPointNoticeDialogComponent_o *this,
        FriendPointNoticeDialogComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *clickedFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x0
  bool v9; // zf
  FriendPointNoticeDialogComponent_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_593ADD7 & 1) == 0 )
  {
    sub_21FFC50(&FriendPointNoticeDialogComponent_CallbackFunc_TypeInfo);
    byte_593ADD7 = 1;
  }
  clickedFunc = (System_Delegate_o *)this->fields.clickedFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(clickedFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (FriendPointNoticeDialogComponent_CallbackFunc_c *)v6->klass != FriendPointNoticeDialogComponent_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_223767C(&this->fields.clickedFunc, v6, clickedFunc);
    v9 = v8 == (_QWORD)clickedFunc;
    clickedFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_220024C(v6, FriendPointNoticeDialogComponent_CallbackFunc_TypeInfo, v7);
  FriendPointNoticeDialogComponent__CheckSerializeFieldAssertion(v10, v11);
}


void FriendPointNoticeDialogComponent_CallbackFunc___ctor(
        FriendPointNoticeDialogComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FFDD10;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FFDCC8;
}


System_IAsyncResult_o *FriendPointNoticeDialogComponent_CallbackFunc__BeginInvoke(
        FriendPointNoticeDialogComponent_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_593ADE7 & 1) == 0 )
  {
    sub_21FFC50(&FriendPointNoticeDialogComponent_ResultClicked_TypeInfo);
    byte_593ADE7 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(FriendPointNoticeDialogComponent_ResultClicked_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void FriendPointNoticeDialogComponent_CallbackFunc__EndInvoke(
        FriendPointNoticeDialogComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void FriendPointNoticeDialogComponent_CallbackFunc__Invoke(
        FriendPointNoticeDialogComponent_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void FriendPointNoticeDialogComponent_PositionYData___ctor(
        FriendPointNoticeDialogComponent_PositionYData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FriendPointNoticeDialogComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593ADE8 & 1) == 0 )
  {
    sub_21FFC50(&FriendPointNoticeDialogComponent___c_TypeInfo);
    byte_593ADE8 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(FriendPointNoticeDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FriendPointNoticeDialogComponent___c_TypeInfo->static_fields->__9 = (struct FriendPointNoticeDialogComponent___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)FriendPointNoticeDialogComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void FriendPointNoticeDialogComponent___c___ctor(
        FriendPointNoticeDialogComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FriendPointNoticeDialogComponent___c___Open_b__49_1(
        FriendPointNoticeDialogComponent___c_o *this,
        FriendPointNoticeDialogSvtInfo_o *x,
        const MethodInfo *method)
{
  if ( !x
    || (this = (FriendPointNoticeDialogComponent___c_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)x,
                                                           0)) == 0 )
  {
    sub_21FFECC(this, x);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


bool FriendPointNoticeDialogComponent___c___SetRecommendedSupportButton_b__58_0(
        FriendPointNoticeDialogComponent___c_o *this,
        RecommendSupportQuestEntity_o *entity,
        const MethodInfo *method)
{
  int32_t questId; // w19

  if ( (byte_593ADE9 & 1) == 0 )
  {
    this = (FriendPointNoticeDialogComponent___c_o *)sub_21FFC50(&CondType_TypeInfo);
    byte_593ADE9 = 1;
  }
  if ( !entity )
    sub_21FFECC(this, entity);
  questId = entity->fields.questId;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, entity);
  return CondType__IsQuestClear_47254560(questId, -1, 0, 0);
}


void FriendPointNoticeDialogComponent___c__DisplayClass56_0___ctor(
        FriendPointNoticeDialogComponent___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FriendPointNoticeDialogComponent___c__DisplayClass56_0___Close_b__0(
        FriendPointNoticeDialogComponent___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  FriendPointNoticeDialogComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (FriendPointNoticeDialogComponent__Init(_4__this, method), (_4__this = this->fields.__4__this) == 0)
    || (_4__this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)_4__this,
                                                           0)) == 0 )
  {
    sub_21FFECC(_4__this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}