void FriendPointNoticeDialogComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C398CE & 1) == 0 )
  {
    sub_1C32C20(&FriendPointNoticeDialogComponent_TypeInfo);
    byte_4C398CE = 1;
  }
  *FriendPointNoticeDialogComponent_TypeInfo->static_fields = (struct FriendPointNoticeDialogComponent_StaticFields)vdup_n_s32(0x442F0000u).n64_u64[0];
}


void FriendPointNoticeDialogComponent___ctor(FriendPointNoticeDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C398CD & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C398CD = 1;
  }
  this->fields.addedPointLabelCenterPosY = 165.0;
  *(_QWORD *)&this->fields.servantNameLabelMaxWidth = 0x25843900000LL;
  *(_QWORD *)&this->fields.topPartsPosYMaxFp = 0xC31E000042200000LL;
  this->fields.buttonPosYMaxFp = -219.0;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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

  FriendPointNoticeDialogComponent__Close_44662984(this, 0, v2);
}


void FriendPointNoticeDialogComponent__Close_44662984(
        FriendPointNoticeDialogComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  FriendPointNoticeDialogComponent_o *v11; // x0
  const MethodInfo *v12; // x3
  FriendPointNoticeDialogComponent_o *v13; // x0
  const MethodInfo *v14; // x3
  FriendPointNoticeDialogComponent_o *v15; // x0
  const MethodInfo *v16; // x3
  FriendPointNoticeDialogComponent_o *v17; // x0
  const MethodInfo *v18; // x3
  System_Action_o *v19; // x21

  if ( (byte_4C398C5 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_FriendPointNoticeDialogComponent___c__DisplayClass56_0__Close_b__0__);
    sub_1C32C20(&FriendPointNoticeDialogComponent___c__DisplayClass56_0_TypeInfo);
    byte_4C398C5 = 1;
  }
  v5 = sub_1C32E6C(FriendPointNoticeDialogComponent___c__DisplayClass56_0_TypeInfo);
  FriendPointNoticeDialogComponent___c__DisplayClass56_0___ctor(
    (FriendPointNoticeDialogComponent___c__DisplayClass56_0_o *)v5,
    0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v9, v10);
  FriendPointNoticeDialogComponent__SetEnableButton(v11, this->fields.decideButtonObject, 0, v12);
  FriendPointNoticeDialogComponent__SetEnableButton(v13, this->fields.friendSupportButtonObject, 0, v14);
  FriendPointNoticeDialogComponent__SetEnableButton(v15, this->fields.recommendedSupportButtonObject, 0, v16);
  FriendPointNoticeDialogComponent__SetEnableButton(v17, this->fields.closeButtonObject, 0, v18);
  AndroidBackKeyManager__RemoveBackBtn(this->fields.closeButtonObject, 0);
  v19 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v5,
    Method_FriendPointNoticeDialogComponent___c__DisplayClass56_0__Close_b__0__,
    0);
  BaseDialog__Close((BaseDialog_o *)this, v19, 0);
}


void FriendPointNoticeDialogComponent__Display1TypeInfo(
        FriendPointNoticeDialogComponent_o *this,
        int32_t infoType,
        System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__o *infoList,
        const MethodInfo *method)
{
  FriendPointNoticeDialogComponent_o *v6; // x20
  struct FriendPointNoticeDialogComponent_PositionYData_array *layoutYPositionList; // x8
  unsigned int max_length; // w9
  FriendPointNoticeDialogComponent_PositionYData_o **m_Items; // x8
  FriendPointNoticeDialogComponent_PositionYData_o *v10; // x22
  unsigned int localPosition; // s0
  float v12; // s8
  int m_CancellationTokenSource; // w24
  int32_t v14; // w21
  float Item; // s0
  __int64 v16; // x8
  float v17; // s8
  float v18; // s9
  Il2CppObject *v19; // x0
  const MethodInfo *v20; // x2
  UnityEngine_Vector2_o v21; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v22; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v23; // 0:s0.4,4:s1.4

  v6 = this;
  if ( (byte_4C398C3 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_float__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
    this = (FriendPointNoticeDialogComponent_o *)sub_1C32C20(&Method_System_Collections_Generic_List_float__get_Item__);
    byte_4C398C3 = 1;
  }
  if ( !infoList )
    goto LABEL_30;
  layoutYPositionList = v6->fields.layoutYPositionList;
  if ( !layoutYPositionList )
    goto LABEL_30;
  max_length = layoutYPositionList->max_length;
  if ( infoList->fields._size <= 2 )
  {
    if ( max_length )
    {
      m_Items = layoutYPositionList->m_Items;
      goto LABEL_10;
    }
LABEL_32:
    sub_1C32E84(this);
  }
  if ( max_length <= 1 )
    goto LABEL_32;
  m_Items = &layoutYPositionList->m_Items[1];
LABEL_10:
  this = (FriendPointNoticeDialogComponent_o *)v6->fields.usedRecommendedServantTitleLabel;
  if ( !this )
    goto LABEL_30;
  v10 = *m_Items;
  this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_30;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (FriendPointNoticeDialogComponent_o *)v6->fields.mostUsedServantTitleLabel;
  if ( !this )
    goto LABEL_30;
  v12 = *(float *)&localPosition;
  this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( infoType )
  {
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (FriendPointNoticeDialogComponent_o *)v6->fields.usedRecommendedServantTitleLabel;
      if ( this )
      {
        this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
        if ( v10 )
        {
          v21.fields.y = v10->fields.upperLabel;
          v21.fields.x = v12;
          GameObjectExtensions__SetLocalPosition_36036656((UnityEngine_GameObject_o *)this, v21, 0);
          goto LABEL_22;
        }
      }
    }
LABEL_30:
    sub_1C32E7C(this);
  }
  if ( !v10 )
    goto LABEL_30;
  v22.fields.y = v10->fields.upperLabel;
  v22.fields.x = v12;
  GameObjectExtensions__SetLocalPosition_36036656((UnityEngine_GameObject_o *)this, v22, 0);
  this = (FriendPointNoticeDialogComponent_o *)v6->fields.usedRecommendedServantTitleLabel;
  if ( !this )
    goto LABEL_30;
  this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
LABEL_22:
  this = (FriendPointNoticeDialogComponent_o *)v6->fields.layoutXPositionList;
  if ( !this )
    goto LABEL_30;
  if ( infoList->fields._size >= 1 )
  {
    m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
    v14 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_float___get_Item(
               (System_Collections_Generic_List_float__o *)this,
               v14 % m_CancellationTokenSource,
               (const MethodInfo_37BE040 *)Method_System_Collections_Generic_List_float__get_Item__);
      v16 = v14 / m_CancellationTokenSource ? 24LL : 20LL;
      v17 = *(float *)((char *)&v10->klass + v16);
      v18 = Item;
      v19 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)infoList,
              v14,
              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
      v23.fields.x = v18;
      v23.fields.y = v17;
      FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
        v6,
        (FriendPointNoticeDialogSvtInfo_o *)v19,
        v23,
        v20);
      if ( ++v14 >= infoList->fields._size )
        break;
      this = (FriendPointNoticeDialogComponent_o *)v6->fields.layoutXPositionList;
      if ( !this )
        goto LABEL_30;
    }
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
  float v9; // s8
  float v10; // s9
  float v11; // s9
  unsigned int v12; // w9
  signed int v13; // w22
  float v14; // s9
  float v15; // s8
  unsigned int v16; // w8
  struct FriendPointNoticeDialogComponent_PositionYData_array *layoutYPositionList; // x9
  FriendPointNoticeDialogComponent_PositionYData_o **v18; // x9
  struct FriendPointNoticeDialogComponent_PositionYData_array *v19; // x9
  FriendPointNoticeDialogComponent_PositionYData_o *v20; // x24
  unsigned int localPosition; // s0
  float v22; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v24; // w22
  float Item; // s0
  __int64 v26; // x8
  float v27; // s8
  float v28; // s9
  Il2CppObject *v29; // x0
  const MethodInfo *v30; // x2
  int32_t v31; // w21
  float v32; // s0
  __int64 v33; // x8
  float v34; // s8
  float v35; // s9
  Il2CppObject *v36; // x0
  const MethodInfo *v37; // x2
  struct FriendPointNoticeDialogComponent_PositionYData_array *v38; // x9
  UnityEngine_Vector2_o v39; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v40; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v41; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v42; // 0:s0.4,4:s1.4

  v6 = this;
  if ( (byte_4C398C4 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_float__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
    this = (FriendPointNoticeDialogComponent_o *)sub_1C32C20(&Method_System_Collections_Generic_List_float__get_Item__);
    byte_4C398C4 = 1;
  }
  layoutXPositionList = v6->fields.layoutXPositionList;
  if ( !layoutXPositionList || !recommendedInfoList )
    goto LABEL_58;
  size = layoutXPositionList->fields._size;
  v9 = (float)size;
  v10 = (float)recommendedInfoList->fields._size;
  if ( !byte_4C31A98 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C31A98 = 1;
  }
  v11 = v10 / v9;
  this = (FriendPointNoticeDialogComponent_o *)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v12 = vcvtps_s32_f32(v11);
  v13 = ceilf(v11) == INFINITY ? 0x80000000 : v12;
  if ( !mostUsedInfoList )
    goto LABEL_58;
  v14 = (float)mostUsedInfoList->fields._size;
  if ( !byte_4C31A98 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C31A98 = 1;
  }
  this = (FriendPointNoticeDialogComponent_o *)System_Math_TypeInfo;
  v15 = v14 / v9;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v16 = vcvtps_s32_f32(v15);
  if ( ceilf(v15) == INFINITY )
    v16 = 0x80000000;
  if ( v13 < 1 )
    goto LABEL_27;
  if ( v13 != 2 )
  {
    if ( v13 == 1 && v16 == 1 )
    {
      layoutYPositionList = v6->fields.layoutYPositionList;
      if ( !layoutYPositionList )
        goto LABEL_58;
      if ( LODWORD(layoutYPositionList->max_length) > 2 )
      {
        v18 = &layoutYPositionList->m_Items[2];
        goto LABEL_30;
      }
LABEL_59:
      sub_1C32E84(this);
    }
    goto LABEL_27;
  }
  if ( v16 != 1 )
  {
LABEL_27:
    v19 = v6->fields.layoutYPositionList;
    if ( !v19 )
      goto LABEL_58;
    if ( LODWORD(v19->max_length) <= 4 )
      goto LABEL_59;
    v18 = &v19->m_Items[4];
    goto LABEL_30;
  }
  v38 = v6->fields.layoutYPositionList;
  if ( !v38 )
    goto LABEL_58;
  if ( LODWORD(v38->max_length) <= 3 )
    goto LABEL_59;
  v18 = &v38->m_Items[3];
LABEL_30:
  v20 = *v18;
  if ( (int)(v16 + v13) >= 4 )
  {
    this = (FriendPointNoticeDialogComponent_o *)v6->fields.servantInfoScrollView;
    if ( !this )
      goto LABEL_58;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
    this = (FriendPointNoticeDialogComponent_o *)v6->fields.servantInfoScrollBar;
    if ( !this )
      goto LABEL_58;
    this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
    if ( !this )
      goto LABEL_58;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  }
  this = (FriendPointNoticeDialogComponent_o *)v6->fields.usedRecommendedServantTitleLabel;
  if ( !this )
    goto LABEL_58;
  this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_58;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (FriendPointNoticeDialogComponent_o *)v6->fields.usedRecommendedServantTitleLabel;
  if ( !this )
    goto LABEL_58;
  v22 = *(float *)&localPosition;
  this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !v20 )
    goto LABEL_58;
  v39.fields.y = v20->fields.lowerLabel;
  v39.fields.x = v22;
  GameObjectExtensions__SetLocalPosition_36036656((UnityEngine_GameObject_o *)this, v39, 0);
  this = (FriendPointNoticeDialogComponent_o *)v6->fields.mostUsedServantTitleLabel;
  if ( !this )
    goto LABEL_58;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v40.fields.y = v20->fields.upperLabel;
  v40.fields.x = v22;
  GameObjectExtensions__SetLocalPosition_36036656(gameObject, v40, 0);
  if ( recommendedInfoList->fields._size >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      this = (FriendPointNoticeDialogComponent_o *)v6->fields.layoutXPositionList;
      if ( !this )
        break;
      Item = System_Collections_Generic_List_float___get_Item(
               (System_Collections_Generic_List_float__o *)this,
               v24 % size,
               (const MethodInfo_37BE040 *)Method_System_Collections_Generic_List_float__get_Item__);
      if ( v24 / size )
        v26 = 36;
      else
        v26 = 32;
      v27 = *(float *)((char *)&v20->klass + v26);
      v28 = Item;
      v29 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)recommendedInfoList,
              v24,
              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
      v41.fields.x = v28;
      v41.fields.y = v27;
      FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
        v6,
        (FriendPointNoticeDialogSvtInfo_o *)v29,
        v41,
        v30);
      if ( ++v24 >= recommendedInfoList->fields._size )
        goto LABEL_47;
    }
LABEL_58:
    sub_1C32E7C(this);
  }
LABEL_47:
  if ( mostUsedInfoList->fields._size >= 1 )
  {
    v31 = 0;
    while ( 1 )
    {
      this = (FriendPointNoticeDialogComponent_o *)v6->fields.layoutXPositionList;
      if ( !this )
        break;
      v32 = System_Collections_Generic_List_float___get_Item(
              (System_Collections_Generic_List_float__o *)this,
              v31 % SLODWORD(this->fields.m_CancellationTokenSource),
              (const MethodInfo_37BE040 *)Method_System_Collections_Generic_List_float__get_Item__);
      if ( v31 / size )
        v33 = 24;
      else
        v33 = 20;
      v34 = *(float *)((char *)&v20->klass + v33);
      v35 = v32;
      v36 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)mostUsedInfoList,
              v31,
              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
      v42.fields.x = v35;
      v42.fields.y = v34;
      FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
        v6,
        (FriendPointNoticeDialogSvtInfo_o *)v36,
        v42,
        v37);
      if ( ++v31 >= mostUsedInfoList->fields._size )
        return;
    }
    goto LABEL_58;
  }
}


void FriendPointNoticeDialogComponent__ExecClickedFunc(
        FriendPointNoticeDialogComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct FriendPointNoticeDialogComponent_CallbackFunc_o *clickedFunc; // x8
  CGThumbnailListItem_o *p_clickedFunc; // x19

  clickedFunc = this->fields.clickedFunc;
  p_clickedFunc = (CGThumbnailListItem_o *)&this->fields.clickedFunc;
  if ( clickedFunc )
    ((void (__fastcall *)(intptr_t, int32_t, intptr_t))clickedFunc->fields.invoke_impl)(
      clickedFunc->fields.method_code,
      result,
      clickedFunc->fields.method);
  p_clickedFunc->klass = 0;
  sub_1C32BC4(p_clickedFunc, 0, (int32_t)method, v3);
}


void FriendPointNoticeDialogComponent__Init(FriendPointNoticeDialogComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4C398BF & 1) == 0 )
  {
    sub_1C32C20(&string_TypeInfo);
    byte_4C398BF = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C32E7C(titleLabel);
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

  if ( (byte_4C398CC & 1) == 0 )
  {
    sub_1C32C20(&Method_FriendPointNoticeDialogComponent_OnClickCancel__);
    byte_4C398CC = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickCancel__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_FriendPointNoticeDialogComponent_OnClickCancel__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  FriendPointNoticeDialogComponent__ExecClickedFunc(this, 3, v5);
}


void FriendPointNoticeDialogComponent__OnClickRecommendedSupportDisableMask(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4C398C8 & 1) == 0 )
  {
    sub_1C32C20(&Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__);
    byte_4C398C8 = 1;
  }
  v2 = Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C32C38(Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C32C04(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 1, 0, 0);
}


void FriendPointNoticeDialogComponent__OnClickToFriedPointSummon(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C398C9 & 1) == 0 )
  {
    sub_1C32C20(&Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__);
    byte_4C398C9 = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
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

  if ( (byte_4C398CB & 1) == 0 )
  {
    sub_1C32C20(&Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__);
    byte_4C398CB = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
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

  if ( (byte_4C398CA & 1) == 0 )
  {
    sub_1C32C20(&Method_FriendPointNoticeDialogComponent_OnClickToSupport__);
    byte_4C398CA = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickToSupport__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickToSupport__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_FriendPointNoticeDialogComponent_OnClickToSupport__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UILabel_o *titleLabel; // x21
  int32_t addFriendPoint; // w8
  _BOOL4 v12; // w20
  struct UILabel_o *addedPointLabel; // x21
  System_String_o *mText; // x22
  System_String_o *v15; // x23
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  struct UILabel_o *v25; // x21
  System_String_o *v26; // x0
  struct UILabel_o *v27; // x21
  System_String_o *v28; // x22
  System_String_o *v29; // x23
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x5
  __int64 v34; // x6
  __int64 v35; // x7
  Il2CppObject *v36; // x0
  System_String_o *v37; // x0
  System_String_o *v38; // x0
  UILabel_o *v39; // x21
  UILabel_o *addedRecommendedPointLabel; // x21
  System_String_o *v41; // x22
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  __int64 v45; // x5
  __int64 v46; // x6
  __int64 v47; // x7
  Il2CppObject *v48; // x0
  UILabel_o *v49; // x21
  UnityEngine_GameObject_o *v50; // x0
  System_Collections_Generic_List_object__o *v51; // x21
  System_Collections_Generic_List_object__o *v52; // x25
  UILabel_o *usedRecommendedServantTitleLabel; // x23
  struct CommonUI_LoginResultRecommendSupportFriendPointSvtData_array *addRecommendSupportFriendPointSvtList; // x29
  struct FriendPointNoticeDialogSvtInfo_array *recommendedSupportServantInfoList; // x28
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v57; // x23
  unsigned int v58; // w26
  unsigned __int64 v59; // x27
  unsigned int v60; // w8
  CommonUI_LoginResultRecommendSupportFriendPointSvtData_o *v61; // x24
  System_String_o *monitor; // x25
  const MethodInfo *v63; // x5
  struct FriendPointNoticeDialogSvtInfo_array *v64; // x8
  struct FriendPointNoticeDialogSvtInfo_array *v65; // x8
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  struct FriendPointNoticeDialogSvtInfo_array *v68; // x8
  Il2CppObject *v69; // x1
  struct System_Object_array *items; // x8
  _QWORD *v71; // x9
  __int64 size; // x10
  Il2CppClass **v73; // x0
  System_Collections_Generic_IEnumerable_T__o *v74; // x23
  FriendPointNoticeDialogComponent___c_c *v75; // x0
  System_Action_object__o *_9__49_1; // x24
  Il2CppObject *v77; // x25
  struct FriendPointNoticeDialogComponent___c_StaticFields *static_fields; // x0
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  UILabel_o *mostUsedServantTitleLabel; // x23
  CommonUI_LoginResultFriendPointSvtData_o *topAddFriendPointSvt; // x23
  FriendPointNoticeDialogSvtInfo_o *normalSupportServantInfo; // x24
  const MethodInfo *v84; // x5
  struct CommonUI_LoginResultFriendPointSvtData_o *v85; // x8
  CommonUI_LoginResultFriendPointSvtData_o *topAddFriendPointSvtEQ; // x23
  FriendPointNoticeDialogSvtInfo_o *eventSupportServantInfo; // x24
  const MethodInfo *v88; // x5
  struct CommonUI_LoginResultFriendPointSvtData_o *v89; // x8
  CommonUI_LoginResultFriendPointSvtData_o *topAddFriendPointSvtGrand; // x23
  FriendPointNoticeDialogSvtInfo_o *grandSupportServantInfo; // x24
  const MethodInfo *v92; // x5
  struct CommonUI_LoginResultFriendPointSvtData_o *v93; // x8
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  Il2CppObject *v96; // x1
  struct System_Object_array *v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  Il2CppClass **v100; // x0
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  Il2CppObject *v103; // x1
  struct System_Object_array *v104; // x8
  _QWORD *v105; // x9
  __int64 v106; // x10
  Il2CppClass **v107; // x0
  int32_t v108; // w2
  const MethodInfo *v109; // x3
  Il2CppObject *v110; // x1
  struct System_Object_array *v111; // x8
  _QWORD *v112; // x9
  __int64 v113; // x10
  Il2CppClass **v114; // x0
  const MethodInfo *v115; // x3
  int v116; // w8
  FriendPointNoticeDialogComponent_o *v117; // x0
  int32_t v118; // w1
  System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__o *v119; // x2
  UILabel_o *noDataLabel; // x20
  Il2CppObject *Master_object; // x20
  FriendPointNoticeDialogSvtInfo_o *v122; // x20
  int32_t m_CancellationTokenSource; // w21
  BalanceConfig_c *v124; // x0
  UILabel_o *friendPointMaxLabel; // x21
  UnityEngine_GameObject_o *v126; // x0
  UILabel_o *currentFriendPointLabel; // x21
  System_String_o *v128; // x22
  __int64 v129; // x2
  __int64 v130; // x3
  __int64 v131; // x4
  __int64 v132; // x5
  __int64 v133; // x6
  __int64 v134; // x7
  Il2CppObject *v135; // x0
  UILabel_o *v136; // x20
  UILabel_o *closeButtonLabel; // x20
  UILabel_o *friendSupportButtonLabel; // x20
  const MethodInfo *v139; // x1
  UILabel_o *decideButtonLabel; // x20
  System_Action_o *v141; // x20
  System_Collections_Generic_List_object__o *v142; // [xsp+0h] [xbp-80h]
  CommonUI_LoginResultData_o *v143; // [xsp+8h] [xbp-78h]
  int32_t addFollowFriendPoint; // [xsp+14h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C398C0 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_FriendPointNoticeDialogSvtInfo__TypeInfo);
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_FriendPointNoticeDialogSvtInfo___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_TblUserMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_FriendPointNoticeDialogComponent__Open_b__49_0__);
    sub_1C32C20(&FriendPointNoticeDialogComponent_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Count__);
    sub_1C32C20(&System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_FriendPointNoticeDialogComponent___c__Open_b__49_1__);
    sub_1C32C20(&FriendPointNoticeDialogComponent___c_TypeInfo);
    sub_1C32C20(&StringLiteral_6947/*"GET_FRIEND_POINT_FP_RECOMMENDED"*/);
    sub_1C32C20(&StringLiteral_6954/*"GET_FRIEND_POINT_SERVANT_TITLE"*/);
    sub_1C32C20(&StringLiteral_6950/*"GET_FRIEND_POINT_NO_DATA"*/);
    sub_1C32C20(&StringLiteral_6949/*"GET_FRIEND_POINT_NOW_POINT"*/);
    sub_1C32C20(&StringLiteral_6956/*"GET_FRIEND_POINT_SUPPORT_BTN"*/);
    sub_1C32C20(&StringLiteral_114/*"  "*/);
    sub_1C32C20(&StringLiteral_6946/*"GET_FRIEND_POINT_FP_NORMAL"*/);
    sub_1C32C20(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C32C20(&StringLiteral_6945/*"GET_FRIEND_POINT_FP_FOLLOW"*/);
    sub_1C32C20(&StringLiteral_6942/*"GET_FRIEND_POINT_CAPTION_GRAND"*/);
    sub_1C32C20(&StringLiteral_6955/*"GET_FRIEND_POINT_SERVANT_USED_RECOMMENDED_TITLE"*/);
    sub_1C32C20(&StringLiteral_6941/*"GET_FRIEND_POINT_CAPTION_EVENT"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_6948/*"GET_FRIEND_POINT_GACHA_BTN"*/);
    sub_1C32C20(&StringLiteral_6957/*"GET_FRIEND_POINT_TITLE"*/);
    sub_1C32C20(&StringLiteral_6940/*"GET_FRIEND_POINT_AT_LIMIT"*/);
    sub_1C32C20(&StringLiteral_6943/*"GET_FRIEND_POINT_CAPTION_NORMAL"*/);
    byte_4C398C0 = 1;
  }
  entity = 0;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
  if ( !gameObject )
    goto LABEL_188;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  this->fields.clickedFunc = clickedAction;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.clickedFunc, (int32_t)clickedAction, v8, v9);
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
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6957/*"GET_FRIEND_POINT_TITLE"*/, 0);
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
  v12 = addFriendPoint < 1;
  if ( addFriendPoint >= 1 )
  {
    addedPointLabel = this->fields.addedPointLabel;
    if ( !addedPointLabel )
      goto LABEL_188;
    mText = addedPointLabel->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_6946/*"GET_FRIEND_POINT_FP_NORMAL"*/, 0);
    addFollowFriendPoint = loginResultData->fields.addFriendPoint;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint, v16, v17, v18, v19, v20, v21);
    v23 = System_String__Format(v15, v22, 0);
    v24 = System_String__Concat_63518544(mText, v23, 0);
    UILabel__set_text(addedPointLabel, v24, 0);
  }
  if ( loginResultData->fields.addFollowFriendPoint >= 1 )
  {
    if ( loginResultData->fields.addFriendPoint >= 1 )
    {
      v25 = this->fields.addedPointLabel;
      if ( !v25 )
        goto LABEL_188;
      v26 = System_String__Concat_63518544(v25->fields.mText, (System_String_o *)StringLiteral_114/*"  "*/, 0);
      UILabel__set_text(v25, v26, 0);
    }
    v27 = this->fields.addedPointLabel;
    if ( !v27 )
      goto LABEL_188;
    v28 = v27->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_6945/*"GET_FRIEND_POINT_FP_FOLLOW"*/, 0);
    addFollowFriendPoint = loginResultData->fields.addFollowFriendPoint;
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint, v30, v31, v32, v33, v34, v35);
    v37 = System_String__Format(v29, v36, 0);
    v38 = System_String__Concat_63518544(v28, v37, 0);
    UILabel__set_text(v27, v38, 0);
    v12 = 0;
  }
  v39 = this->fields.addedPointLabel;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)FriendPointNoticeDialogComponent_TypeInfo;
  if ( !FriendPointNoticeDialogComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent_TypeInfo);
  if ( !v39 )
    goto LABEL_188;
  UILabel__SetCondensedScale_49482884(
    v39,
    FriendPointNoticeDialogComponent_TypeInfo->static_fields->ADD_POINT_LABEL_MAX_WIDTH,
    0.0,
    0);
  if ( loginResultData->fields.addRecommendSupportFriendPoint < 1 )
  {
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.addedPointLabel;
    if ( !gameObject )
      goto LABEL_188;
LABEL_38:
    v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionY(v50, this->fields.addedPointLabelCenterPosY, 0);
    goto LABEL_39;
  }
  addedRecommendedPointLabel = this->fields.addedRecommendedPointLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_6947/*"GET_FRIEND_POINT_FP_RECOMMENDED"*/, 0);
  addFollowFriendPoint = loginResultData->fields.addRecommendSupportFriendPoint;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint, v42, v43, v44, v45, v46, v47);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_String__Format(v41, v48, 0);
  if ( !addedRecommendedPointLabel )
    goto LABEL_188;
  UILabel__set_text(addedRecommendedPointLabel, (System_String_o *)gameObject, 0);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)FriendPointNoticeDialogComponent_TypeInfo;
  v49 = this->fields.addedRecommendedPointLabel;
  if ( !FriendPointNoticeDialogComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent_TypeInfo);
  if ( !v49 )
    goto LABEL_188;
  UILabel__SetCondensedScale_49482884(
    v49,
    FriendPointNoticeDialogComponent_TypeInfo->static_fields->ADD_POINT_LABEL_MAX_WIDTH,
    0.0,
    0);
  if ( v12 )
  {
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.addedRecommendedPointLabel;
    if ( !gameObject )
      goto LABEL_188;
    goto LABEL_38;
  }
LABEL_39:
  v51 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v51,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo___ctor__);
  v52 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo___ctor__);
  usedRecommendedServantTitleLabel = this->fields.usedRecommendedServantTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6955/*"GET_FRIEND_POINT_SERVANT_USED_RECOMMENDED_TITLE"*/, 0);
  if ( !usedRecommendedServantTitleLabel )
    goto LABEL_188;
  UILabel__set_text(usedRecommendedServantTitleLabel, (System_String_o *)gameObject, 0);
  addRecommendSupportFriendPointSvtList = loginResultData->fields.addRecommendSupportFriendPointSvtList;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestMaster___);
  v142 = v52;
  v143 = loginResultData;
  if ( addRecommendSupportFriendPointSvtList && addRecommendSupportFriendPointSvtList->max_length )
  {
    recommendedSupportServantInfoList = this->fields.recommendedSupportServantInfoList;
    if ( !recommendedSupportServantInfoList )
      goto LABEL_188;
    max_length = recommendedSupportServantInfoList->max_length;
    if ( (int)max_length >= 1 )
    {
      v57 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
      v58 = 0;
      v59 = 0;
      while ( v59 < (unsigned int)max_length )
      {
        v60 = addRecommendSupportFriendPointSvtList->max_length;
        if ( (int)v58 >= (int)v60 )
        {
          gameObject = recommendedSupportServantInfoList->m_Items[v59];
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
          if ( v58 >= v60 )
            break;
          v61 = addRecommendSupportFriendPointSvtList->m_Items[v58];
          if ( !v61 || !v57 )
            goto LABEL_188;
          monitor = (System_String_o *)StringLiteral_1/*""*/;
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                             v57,
                                                             &entity,
                                                             v61->fields.questId,
                                                             (const MethodInfo_3396884 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_188;
            monitor = (System_String_o *)entity[1].monitor;
          }
          v64 = this->fields.recommendedSupportServantInfoList;
          if ( !v64 )
            goto LABEL_188;
          if ( v58 >= LODWORD(v64->max_length) )
            break;
          FriendPointNoticeDialogComponent__SetupServantInfo_44660020(
            (FriendPointNoticeDialogComponent_o *)gameObject,
            v64->m_Items[v58],
            v61,
            monitor,
            v61->fields.friendPoint,
            v63);
          v65 = this->fields.recommendedSupportServantInfoList;
          if ( !v65 )
            goto LABEL_188;
          if ( v58 >= LODWORD(v65->max_length) )
            break;
          gameObject = v65->m_Items[v58];
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
            v68 = this->fields.recommendedSupportServantInfoList;
            if ( !v68 )
              goto LABEL_188;
            if ( v58 >= LODWORD(v68->max_length) )
              break;
            if ( !v51 )
              goto LABEL_188;
            v69 = (Il2CppObject *)v68->m_Items[v58];
            items = v51->fields._items;
            v71 = Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__;
            ++v51->fields._version;
            if ( !items )
              goto LABEL_188;
            size = v51->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v51,
                v69,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
            }
            else
            {
              v73 = &items->obj.klass + size;
              v51->fields._size = size + 1;
              v73[4] = (Il2CppClass *)v69;
              sub_1C32BC4((CGThumbnailListItem_o *)(v73 + 4), (int32_t)v69, v66, v67);
            }
          }
          ++v58;
        }
        LODWORD(max_length) = recommendedSupportServantInfoList->max_length;
        if ( (__int64)++v59 >= (int)max_length )
          goto LABEL_84;
      }
      sub_1C32E84(gameObject);
    }
  }
  else
  {
    v74 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.recommendedSupportServantInfoList;
    v75 = FriendPointNoticeDialogComponent___c_TypeInfo;
    if ( !FriendPointNoticeDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent___c_TypeInfo);
      v75 = FriendPointNoticeDialogComponent___c_TypeInfo;
    }
    _9__49_1 = (System_Action_object__o *)v75->static_fields->__9__49_1;
    if ( !_9__49_1 )
    {
      if ( !v75->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v75);
        v75 = FriendPointNoticeDialogComponent___c_TypeInfo;
      }
      v77 = (Il2CppObject *)v75->static_fields->__9;
      _9__49_1 = (System_Action_object__o *)sub_1C32E6C(System_Action_FriendPointNoticeDialogSvtInfo__TypeInfo);
      System_Action_object____ctor(_9__49_1, v77, Method_FriendPointNoticeDialogComponent___c__Open_b__49_1__, 0);
      static_fields = FriendPointNoticeDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__49_1 = (struct System_Action_FriendPointNoticeDialogSvtInfo__o *)_9__49_1;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__49_1, (int32_t)_9__49_1, v79, v80);
    }
    BasicHelper__ForEach_object_(
      v74,
      (System_Action_T__o *)_9__49_1,
      (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_FriendPointNoticeDialogSvtInfo___);
  }
LABEL_84:
  mostUsedServantTitleLabel = this->fields.mostUsedServantTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6954/*"GET_FRIEND_POINT_SERVANT_TITLE"*/, 0);
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
  topAddFriendPointSvt = v143->fields.topAddFriendPointSvt;
  if ( topAddFriendPointSvt )
  {
    normalSupportServantInfo = this->fields.normalSupportServantInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6943/*"GET_FRIEND_POINT_CAPTION_NORMAL"*/, 0);
    v85 = v143->fields.topAddFriendPointSvt;
    if ( !v85 )
      goto LABEL_188;
    FriendPointNoticeDialogComponent__SetupServantInfo(
      (FriendPointNoticeDialogComponent_o *)gameObject,
      normalSupportServantInfo,
      topAddFriendPointSvt,
      (System_String_o *)gameObject,
      v85->fields.friendPoint,
      v84);
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
  topAddFriendPointSvtEQ = v143->fields.topAddFriendPointSvtEQ;
  if ( topAddFriendPointSvtEQ )
  {
    eventSupportServantInfo = this->fields.eventSupportServantInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6941/*"GET_FRIEND_POINT_CAPTION_EVENT"*/, 0);
    v89 = v143->fields.topAddFriendPointSvtEQ;
    if ( !v89 )
      goto LABEL_188;
    FriendPointNoticeDialogComponent__SetupServantInfo(
      (FriendPointNoticeDialogComponent_o *)gameObject,
      eventSupportServantInfo,
      topAddFriendPointSvtEQ,
      (System_String_o *)gameObject,
      v89->fields.friendPoint,
      v88);
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
  topAddFriendPointSvtGrand = v143->fields.topAddFriendPointSvtGrand;
  if ( topAddFriendPointSvtGrand )
  {
    grandSupportServantInfo = this->fields.grandSupportServantInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6942/*"GET_FRIEND_POINT_CAPTION_GRAND"*/, 0);
    v93 = v143->fields.topAddFriendPointSvtGrand;
    if ( !v93 )
      goto LABEL_188;
    FriendPointNoticeDialogComponent__SetupServantInfo(
      (FriendPointNoticeDialogComponent_o *)gameObject,
      grandSupportServantInfo,
      topAddFriendPointSvtGrand,
      (System_String_o *)gameObject,
      v93->fields.friendPoint,
      v92);
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
    if ( !v142 )
      goto LABEL_188;
    v96 = (Il2CppObject *)this->fields.normalSupportServantInfo;
    v97 = v142->fields._items;
    v98 = Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__;
    ++v142->fields._version;
    if ( !v97 )
      goto LABEL_188;
    v99 = v142->fields._size;
    if ( (unsigned int)v99 >= LODWORD(v97->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v142,
        v96,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
    }
    else
    {
      v100 = &v97->obj.klass + v99;
      v142->fields._size = v99 + 1;
      v100[4] = (Il2CppClass *)v96;
      sub_1C32BC4((CGThumbnailListItem_o *)(v100 + 4), (int32_t)v96, v94, v95);
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
    if ( !v142 )
      goto LABEL_188;
    v103 = (Il2CppObject *)this->fields.eventSupportServantInfo;
    v104 = v142->fields._items;
    v105 = Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__;
    ++v142->fields._version;
    if ( !v104 )
      goto LABEL_188;
    v106 = v142->fields._size;
    if ( (unsigned int)v106 >= LODWORD(v104->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v142,
        v103,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
    }
    else
    {
      v107 = &v104->obj.klass + v106;
      v142->fields._size = v106 + 1;
      v107[4] = (Il2CppClass *)v103;
      sub_1C32BC4((CGThumbnailListItem_o *)(v107 + 4), (int32_t)v103, v101, v102);
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
    if ( !v142 )
      goto LABEL_188;
    v110 = (Il2CppObject *)this->fields.grandSupportServantInfo;
    v111 = v142->fields._items;
    v112 = Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__;
    ++v142->fields._version;
    if ( !v111 )
      goto LABEL_188;
    v113 = v142->fields._size;
    if ( (unsigned int)v113 >= LODWORD(v111->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v142,
        v110,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
    }
    else
    {
      v114 = &v111->obj.klass + v113;
      v142->fields._size = v113 + 1;
      v114[4] = (Il2CppClass *)v110;
      sub_1C32BC4((CGThumbnailListItem_o *)(v114 + 4), (int32_t)v110, v108, v109);
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
  if ( !v51 || !v142 )
    goto LABEL_188;
  v116 = v142->fields._size;
  if ( v51->fields._size >= 1 )
  {
    if ( v116 > 0 )
    {
      FriendPointNoticeDialogComponent__Display2TypeInfo(
        this,
        (System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__o *)v51,
        (System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__o *)v142,
        v115);
      goto LABEL_157;
    }
    v118 = 1;
    v117 = this;
    v119 = (System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__o *)v51;
    goto LABEL_143;
  }
  if ( v116 > 0 )
  {
    v117 = this;
    v118 = 0;
    v119 = (System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__o *)v142;
LABEL_143:
    FriendPointNoticeDialogComponent__Display1TypeInfo(v117, v118, v119, v115);
    goto LABEL_157;
  }
  if ( v143->fields.addFriendPoint > 0
    || v143->fields.addFollowFriendPoint > 0
    || v143->fields.addRecommendSupportFriendPoint >= 1 )
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
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6950/*"GET_FRIEND_POINT_NO_DATA"*/, 0);
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
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_TblUserMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
  v122 = gameObject;
  m_CancellationTokenSource = (int32_t)gameObject->fields.m_CancellationTokenSource;
  v124 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v124 = BalanceConfig_TypeInfo;
  }
  if ( m_CancellationTokenSource >= v124->static_fields->FriendPointMax )
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
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_6940/*"GET_FRIEND_POINT_AT_LIMIT"*/,
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
              v126 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
              GameObjectExtensions__SetLocalPositionY(v126, this->fields.currentFpLabelYMaxFp, 0);
              GameObjectExtensions__SetLocalPositionY(this->fields.buttonParentObject, this->fields.buttonPosYMaxFp, 0);
              goto LABEL_178;
            }
          }
        }
      }
    }
LABEL_188:
    sub_1C32E7C(gameObject);
  }
LABEL_178:
  currentFriendPointLabel = this->fields.currentFriendPointLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v128 = LocalizationManager__Get((System_String_o *)StringLiteral_6949/*"GET_FRIEND_POINT_NOW_POINT"*/, 0);
  addFollowFriendPoint = (int32_t)v122->fields.m_CancellationTokenSource;
  v135 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint, v129, v130, v131, v132, v133, v134);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_String__Format(v128, v135, 0);
  if ( !currentFriendPointLabel )
    goto LABEL_188;
  UILabel__set_text(currentFriendPointLabel, (System_String_o *)gameObject, 0);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)FriendPointNoticeDialogComponent_TypeInfo;
  v136 = this->fields.currentFriendPointLabel;
  if ( !FriendPointNoticeDialogComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent_TypeInfo);
  if ( !v136 )
    goto LABEL_188;
  UILabel__SetCondensedScale_49482884(
    v136,
    FriendPointNoticeDialogComponent_TypeInfo->static_fields->CURRENT_FRIEND_POINT_LABEL_MAX_WIDTH,
    0.0,
    0);
  closeButtonLabel = this->fields.closeButtonLabel;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeButtonLabel )
    goto LABEL_188;
  UILabel__set_text(closeButtonLabel, (System_String_o *)gameObject, 0);
  friendSupportButtonLabel = this->fields.friendSupportButtonLabel;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6956/*"GET_FRIEND_POINT_SUPPORT_BTN"*/, 0);
  if ( !friendSupportButtonLabel )
    goto LABEL_188;
  UILabel__set_text(friendSupportButtonLabel, (System_String_o *)gameObject, 0);
  FriendPointNoticeDialogComponent__SetRecommendedSupportButton(this, v139);
  decideButtonLabel = this->fields.decideButtonLabel;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6948/*"GET_FRIEND_POINT_GACHA_BTN"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_188;
  UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0);
  AndroidBackKeyManager__AddBackBtn(this->fields.closeButtonObject, 0);
  v141 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v141, (Il2CppObject *)this, Method_FriendPointNoticeDialogComponent__Open_b__49_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v141, 0, 0, 0);
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
  Il2CppObject *Component_object; // x20

  if ( (byte_4C398C6 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    this = (FriendPointNoticeDialogComponent_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C398C6 = 1;
  }
  if ( !buttonObj )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       buttonObj,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C32E7C(this);
  }
}


void FriendPointNoticeDialogComponent__SetRecommendedSupportButton(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *recommendedSupportButtonLabel; // x20
  System_String_o *Master_object; // x0
  RecommendSupportQuestEntity_array *List; // x0
  FriendPointNoticeDialogComponent___c_c *v6; // x8
  System_Object_array *v7; // x20
  System_Func_object__bool__o *_9__58_0; // x21
  Il2CppObject *v9; // x22
  struct FriendPointNoticeDialogComponent___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  bool v13; // w0
  UILabel_o *recommendedSupportButtonLabelForMask; // x21
  bool v15; // w20
  FriendPointNoticeDialogComponent_o *v16; // x0
  const MethodInfo *v17; // x3

  if ( (byte_4C398C7 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_RecommendSupportQuestEntity___);
    sub_1C32C20(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&System_Func_RecommendSupportQuestEntity__bool__TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_FriendPointNoticeDialogComponent___c__SetRecommendedSupportButton_b__58_0__);
    sub_1C32C20(&FriendPointNoticeDialogComponent___c_TypeInfo);
    sub_1C32C20(&StringLiteral_6951/*"GET_FRIEND_POINT_RECOMMENDED_BTN"*/);
    byte_4C398C7 = 1;
  }
  recommendedSupportButtonLabel = this->fields.recommendedSupportButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_6951/*"GET_FRIEND_POINT_RECOMMENDED_BTN"*/, 0);
  if ( !recommendedSupportButtonLabel )
    goto LABEL_20;
  UILabel__set_text(recommendedSupportButtonLabel, Master_object, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
  if ( !Master_object )
    goto LABEL_20;
  List = RecommendSupportQuestMaster__GetList((RecommendSupportQuestMaster_o *)Master_object, 0);
  v6 = FriendPointNoticeDialogComponent___c_TypeInfo;
  v7 = (System_Object_array *)List;
  if ( !FriendPointNoticeDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent___c_TypeInfo);
    v6 = FriendPointNoticeDialogComponent___c_TypeInfo;
  }
  _9__58_0 = (System_Func_object__bool__o *)v6->static_fields->__9__58_0;
  if ( !_9__58_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = FriendPointNoticeDialogComponent___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__58_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_RecommendSupportQuestEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__58_0,
      v9,
      Method_FriendPointNoticeDialogComponent___c__SetRecommendedSupportButton_b__58_0__,
      0);
    static_fields = FriendPointNoticeDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__58_0 = (struct System_Func_RecommendSupportQuestEntity__bool__o *)_9__58_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__58_0, (int32_t)_9__58_0, v11, v12);
  }
  v13 = BasicHelper__Any_object__51144764(
          v7,
          (System_Func_T__bool__o *)_9__58_0,
          (const MethodInfo_30C683C *)Method_BasicHelper_Any_RecommendSupportQuestEntity___);
  recommendedSupportButtonLabelForMask = this->fields.recommendedSupportButtonLabelForMask;
  v15 = v13;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_6951/*"GET_FRIEND_POINT_RECOMMENDED_BTN"*/, 0);
  if ( !recommendedSupportButtonLabelForMask
    || (UILabel__set_text(recommendedSupportButtonLabelForMask, Master_object, 0),
        FriendPointNoticeDialogComponent__SetEnableButton(v16, this->fields.recommendedSupportButtonObject, v15, v17),
        (Master_object = (System_String_o *)this->fields.recommendedSupportButtonMaskTextObject) == 0) )
  {
LABEL_20:
    sub_1C32E7C(Master_object);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, !v15, 0);
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
  bool v11; // w0
  Il2CppObject *object; // x20
  Il2CppObject *Component_object; // x20

  if ( (byte_4C398C1 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIFont___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Resources_Load_GameObject___);
    this = (FriendPointNoticeDialogComponent_o *)sub_1C32C20(&StringLiteral_6806/*"Fonts/TextAtlas3"*/);
    byte_4C398C1 = 1;
  }
  if ( !servantInfo )
    goto LABEL_16;
  this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)servantInfo,
                                                 0);
  if ( !this )
    goto LABEL_16;
  v10 = this;
  if ( !pointData )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v11 = FriendPointNoticeDialogSvtInfo__Set(
          servantInfo,
          pointData->fields.svtId,
          pointData->fields.userSvtId,
          questName,
          friendPoint,
          0);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v10, v11, 0);
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_6806/*"Fonts/TextAtlas3"*/,
             (const MethodInfo_31799A8 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)object, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( object )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)object,
                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
        FriendPointNoticeDialogSvtInfo__SetLabelsBitmapFont(servantInfo, (UIFont_o *)Component_object, 0);
      return;
    }
LABEL_16:
    sub_1C32E7C(this);
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
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_Vector2_o v10; // 0:s0.4,4:s1.4

  if ( !servantInfo )
    sub_1C32E7C(this);
  y = position.fields.y;
  x = position.fields.x;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantInfo, 0);
  v10.fields.x = x;
  v10.fields.y = y;
  GameObjectExtensions__SetLocalPosition_36036656(gameObject, v10, 0);
  FriendPointNoticeDialogSvtInfo__SetLabelsCondensedScale(servantInfo, this->fields.servantNameLabelMaxWidth, 0);
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantInfo, 0);
  GameObjectExtensions__ResetLocalScale(v9, 0);
}


void FriendPointNoticeDialogComponent__SetupServantInfo_44660020(
        FriendPointNoticeDialogComponent_o *this,
        FriendPointNoticeDialogSvtInfo_o *servantInfo,
        CommonUI_LoginResultRecommendSupportFriendPointSvtData_o *pointData,
        System_String_o *questName,
        int32_t friendPoint,
        const MethodInfo *method)
{
  FriendPointNoticeDialogComponent_o *v10; // x23
  bool v11; // w0
  Il2CppObject *object; // x20
  Il2CppObject *Component_object; // x20

  if ( (byte_4C398C2 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIFont___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Resources_Load_GameObject___);
    this = (FriendPointNoticeDialogComponent_o *)sub_1C32C20(&StringLiteral_6806/*"Fonts/TextAtlas3"*/);
    byte_4C398C2 = 1;
  }
  if ( !servantInfo )
    goto LABEL_16;
  this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)servantInfo,
                                                 0);
  if ( !this )
    goto LABEL_16;
  v10 = this;
  if ( !pointData )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v11 = FriendPointNoticeDialogSvtInfo__Set(
          servantInfo,
          pointData->fields.svtId,
          pointData->fields.userSvtId,
          questName,
          friendPoint,
          0);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v10, v11, 0);
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_6806/*"Fonts/TextAtlas3"*/,
             (const MethodInfo_31799A8 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)object, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( object )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)object,
                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
        FriendPointNoticeDialogSvtInfo__SetLabelsBitmapFont(servantInfo, (UIFont_o *)Component_object, 0);
      return;
    }
LABEL_16:
    sub_1C32E7C(this);
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
  struct FriendPointNoticeDialogComponent_CallbackFunc_o **p_clickedFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  FriendPointNoticeDialogComponent_o *v10; // x0
  FriendPointNoticeDialogComponent_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C398BD & 1) == 0 )
  {
    sub_1C32C20(&FriendPointNoticeDialogComponent_CallbackFunc_TypeInfo);
    byte_4C398BD = 1;
  }
  clickedFunc = (System_Delegate_o *)this->fields.clickedFunc;
  p_clickedFunc = &this->fields.clickedFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(clickedFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (FriendPointNoticeDialogComponent_CallbackFunc_c *)v7->klass != FriendPointNoticeDialogComponent_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C6CE78(p_clickedFunc, v7, clickedFunc);
    v9 = clickedFunc == (System_Delegate_o *)v8;
    clickedFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3313C(v7);
  FriendPointNoticeDialogComponent__remove_clickedFunc(v10, v11, v12);
}


void FriendPointNoticeDialogComponent__remove_clickedFunc(
        FriendPointNoticeDialogComponent_o *this,
        FriendPointNoticeDialogComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *clickedFunc; // x21
  struct FriendPointNoticeDialogComponent_CallbackFunc_o **p_clickedFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  FriendPointNoticeDialogComponent_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C398BE & 1) == 0 )
  {
    sub_1C32C20(&FriendPointNoticeDialogComponent_CallbackFunc_TypeInfo);
    byte_4C398BE = 1;
  }
  clickedFunc = (System_Delegate_o *)this->fields.clickedFunc;
  p_clickedFunc = &this->fields.clickedFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(clickedFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (FriendPointNoticeDialogComponent_CallbackFunc_c *)v7->klass != FriendPointNoticeDialogComponent_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C6CE78(p_clickedFunc, v7, clickedFunc);
    v9 = clickedFunc == (System_Delegate_o *)v8;
    clickedFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3313C(v7);
  FriendPointNoticeDialogComponent__CheckSerializeFieldAssertion(v10, v11);
}


void FriendPointNoticeDialogComponent_CallbackFunc___ctor(
        FriendPointNoticeDialogComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A79954;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7990C;
}


System_IAsyncResult_o *FriendPointNoticeDialogComponent_CallbackFunc__BeginInvoke(
        FriendPointNoticeDialogComponent_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-34h] BYREF

  v13 = result;
  if ( (byte_4C3A2EB & 1) == 0 )
  {
    sub_1C32C20(&FriendPointNoticeDialogComponent_ResultClicked_TypeInfo);
    byte_4C3A2EB = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(
             FriendPointNoticeDialogComponent_ResultClicked_TypeInfo,
             &v13,
             callback,
             object,
             method,
             v5,
             v6,
             v7);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v12, callback, object);
}


void FriendPointNoticeDialogComponent_CallbackFunc__EndInvoke(
        FriendPointNoticeDialogComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3A2EC & 1) == 0 )
  {
    sub_1C32C20(&FriendPointNoticeDialogComponent___c_TypeInfo);
    byte_4C3A2EC = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(FriendPointNoticeDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FriendPointNoticeDialogComponent___c_TypeInfo->static_fields->__9 = (struct FriendPointNoticeDialogComponent___c_o *)v1;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)FriendPointNoticeDialogComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1C32E7C(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


bool FriendPointNoticeDialogComponent___c___SetRecommendedSupportButton_b__58_0(
        FriendPointNoticeDialogComponent___c_o *this,
        RecommendSupportQuestEntity_o *entity,
        const MethodInfo *method)
{
  int32_t questId; // w19

  if ( (byte_4C3A2ED & 1) == 0 )
  {
    this = (FriendPointNoticeDialogComponent___c_o *)sub_1C32C20(&CondType_TypeInfo);
    byte_4C3A2ED = 1;
  }
  if ( !entity )
    sub_1C32E7C(this);
  questId = entity->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_40225464(questId, -1, 0, 0);
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
    || (FriendPointNoticeDialogComponent__Init(_4__this, 0), (_4__this = this->fields.__4__this) == 0)
    || (_4__this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)_4__this,
                                                           0)) == 0 )
  {
    sub_1C32E7C(_4__this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}