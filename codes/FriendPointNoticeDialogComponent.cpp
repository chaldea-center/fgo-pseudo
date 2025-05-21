void __fastcall FriendPointNoticeDialogComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B46A74 & 1) == 0 )
  {
    sub_1BDB878(&FriendPointNoticeDialogComponent_TypeInfo, v1);
    byte_4B46A74 = 1;
  }
  *FriendPointNoticeDialogComponent_TypeInfo->static_fields = (struct FriendPointNoticeDialogComponent_StaticFields)vdup_n_s32(0x442F0000u).n64_u64[0];
}


void __fastcall FriendPointNoticeDialogComponent___ctor(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B46A73 & 1) == 0 )
  {
    sub_1BDB878(&BaseDialog_TypeInfo, method);
    byte_4B46A73 = 1;
  }
  this->fields.addedPointLabelCenterPosY = 165.0;
  *(_QWORD *)&this->fields.servantNameLabelMaxWidth = 0x25843900000LL;
  *(_QWORD *)&this->fields.topPartsPosYMaxFp = 0xC31E000042200000LL;
  this->fields.buttonPosYMaxFp = -219.0;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent__Awake(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent__CheckSerializeFieldAssertion(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall FriendPointNoticeDialogComponent__Close(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendPointNoticeDialogComponent__Close_43838852(this, 0LL, v2);
}


void __fastcall FriendPointNoticeDialogComponent__Close_43838852(
        FriendPointNoticeDialogComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  FriendPointNoticeDialogComponent_o *v14; // x0
  const MethodInfo *v15; // x3
  FriendPointNoticeDialogComponent_o *v16; // x0
  const MethodInfo *v17; // x3
  FriendPointNoticeDialogComponent_o *v18; // x0
  const MethodInfo *v19; // x3
  FriendPointNoticeDialogComponent_o *v20; // x0
  const MethodInfo *v21; // x3
  System_Action_o *v22; // x21

  if ( (byte_4B46A6B & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, callback);
    sub_1BDB878(&Method_FriendPointNoticeDialogComponent___c__DisplayClass56_0__Close_b__0__, v5);
    sub_1BDB878(&FriendPointNoticeDialogComponent___c__DisplayClass56_0_TypeInfo, v6);
    byte_4B46A6B = 1;
  }
  v7 = sub_1BDBAC4(FriendPointNoticeDialogComponent___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1BDBAD4(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)(v7 + 24), (int32_t)callback, v12, v13);
  FriendPointNoticeDialogComponent__SetEnableButton(v14, this->fields.decideButtonObject, 0, v15);
  FriendPointNoticeDialogComponent__SetEnableButton(v16, this->fields.friendSupportButtonObject, 0, v17);
  FriendPointNoticeDialogComponent__SetEnableButton(v18, this->fields.recommendedSupportButtonObject, 0, v19);
  FriendPointNoticeDialogComponent__SetEnableButton(v20, this->fields.closeButtonObject, 0, v21);
  AndroidBackKeyManager__RemoveBackBtn(this->fields.closeButtonObject, 0LL);
  v22 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v7,
    Method_FriendPointNoticeDialogComponent___c__DisplayClass56_0__Close_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v22, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendPointNoticeDialogComponent__Display1TypeInfo(
        FriendPointNoticeDialogComponent_o *this,
        int32_t infoType,
        System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__o *infoList,
        const MethodInfo *method)
{
  FriendPointNoticeDialogComponent_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct FriendPointNoticeDialogComponent_PositionYData_array *layoutYPositionList; // x8
  unsigned int max_length; // w9
  FriendPointNoticeDialogComponent_PositionYData_o **m_Items; // x8
  FriendPointNoticeDialogComponent_PositionYData_o *v13; // x22
  unsigned int localPosition; // s0
  float v15; // s8
  int m_CancellationTokenSource; // w24
  int32_t v17; // w21
  float Item; // s0
  __int64 v19; // x8
  float v20; // s8
  float v21; // s9
  Il2CppObject *v22; // x0
  const MethodInfo *v23; // x2
  UnityEngine_Vector2_o v24; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v25; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v26; // 0:s0.4,4:s1.4

  v6 = this;
  if ( (byte_4B46A69 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Count__,
      *(_QWORD *)&infoType);
    sub_1BDB878(&Method_System_Collections_Generic_List_float__get_Count__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__, v8);
    this = (FriendPointNoticeDialogComponent_o *)sub_1BDB878(
                                                   &Method_System_Collections_Generic_List_float__get_Item__,
                                                   v9);
    byte_4B46A69 = 1;
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
    sub_1BDBADC(this, *(_QWORD *)&infoType, infoList);
  }
  if ( max_length <= 1 )
    goto LABEL_32;
  m_Items = &layoutYPositionList->m_Items[1];
LABEL_10:
  this = (FriendPointNoticeDialogComponent_o *)v6->fields.usedRecommendedServantTitleLabel;
  if ( !this )
    goto LABEL_30;
  v13 = *m_Items;
  this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
  if ( !this )
    goto LABEL_30;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (FriendPointNoticeDialogComponent_o *)v6->fields.mostUsedServantTitleLabel;
  if ( !this )
    goto LABEL_30;
  v15 = *(float *)&localPosition;
  this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
  if ( infoType )
  {
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (FriendPointNoticeDialogComponent_o *)v6->fields.usedRecommendedServantTitleLabel;
      if ( this )
      {
        this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
        if ( v13 )
        {
          v24.fields.y = v13->fields.upperLabel;
          v24.fields.x = v15;
          GameObjectExtensions__SetLocalPosition_35211000((UnityEngine_GameObject_o *)this, v24, 0LL);
          goto LABEL_22;
        }
      }
    }
LABEL_30:
    sub_1BDBAD4(this, *(_QWORD *)&infoType);
  }
  if ( !v13 )
    goto LABEL_30;
  v25.fields.y = v13->fields.upperLabel;
  v25.fields.x = v15;
  GameObjectExtensions__SetLocalPosition_35211000((UnityEngine_GameObject_o *)this, v25, 0LL);
  this = (FriendPointNoticeDialogComponent_o *)v6->fields.usedRecommendedServantTitleLabel;
  if ( !this )
    goto LABEL_30;
  this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
  if ( !this )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
LABEL_22:
  this = (FriendPointNoticeDialogComponent_o *)v6->fields.layoutXPositionList;
  if ( !this )
    goto LABEL_30;
  if ( infoList->fields._size >= 1 )
  {
    m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
    v17 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_float___get_Item(
               (System_Collections_Generic_List_float__o *)this,
               v17 % m_CancellationTokenSource,
               (const MethodInfo_36F6248 *)Method_System_Collections_Generic_List_float__get_Item__);
      v19 = v17 / m_CancellationTokenSource ? 24LL : 20LL;
      v20 = *(float *)((char *)&v13->klass + v19);
      v21 = Item;
      v22 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)infoList,
              v17,
              (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
      v26.fields.x = v21;
      v26.fields.y = v20;
      FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
        v6,
        (FriendPointNoticeDialogSvtInfo_o *)v22,
        v26,
        v23);
      if ( ++v17 >= infoList->fields._size )
        break;
      this = (FriendPointNoticeDialogComponent_o *)v6->fields.layoutXPositionList;
      if ( !this )
        goto LABEL_30;
    }
  }
}


void __fastcall FriendPointNoticeDialogComponent__Display2TypeInfo(
        FriendPointNoticeDialogComponent_o *this,
        System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__o *recommendedInfoList,
        System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__o *mostUsedInfoList,
        const MethodInfo *method)
{
  FriendPointNoticeDialogComponent_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_float__o *layoutXPositionList; // x8
  int size; // w23
  float v12; // s8
  float v13; // s9
  float v14; // s9
  unsigned int v15; // w9
  signed int v16; // w22
  float v17; // s9
  float v18; // s8
  unsigned int v19; // w8
  struct FriendPointNoticeDialogComponent_PositionYData_array *layoutYPositionList; // x9
  FriendPointNoticeDialogComponent_PositionYData_o **v21; // x9
  struct FriendPointNoticeDialogComponent_PositionYData_array *v22; // x9
  FriendPointNoticeDialogComponent_PositionYData_o *v23; // x24
  unsigned int localPosition; // s0
  float v25; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v27; // w22
  float Item; // s0
  __int64 v29; // x8
  float v30; // s8
  float v31; // s9
  Il2CppObject *v32; // x0
  const MethodInfo *v33; // x2
  int32_t v34; // w21
  float v35; // s0
  __int64 v36; // x8
  float v37; // s8
  float v38; // s9
  Il2CppObject *v39; // x0
  const MethodInfo *v40; // x2
  struct FriendPointNoticeDialogComponent_PositionYData_array *v41; // x9
  UnityEngine_Vector2_o v42; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v43; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v44; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v45; // 0:s0.4,4:s1.4

  v6 = this;
  if ( (byte_4B46A6A & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Count__,
      recommendedInfoList);
    sub_1BDB878(&Method_System_Collections_Generic_List_float__get_Count__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__, v8);
    this = (FriendPointNoticeDialogComponent_o *)sub_1BDB878(
                                                   &Method_System_Collections_Generic_List_float__get_Item__,
                                                   v9);
    byte_4B46A6A = 1;
  }
  layoutXPositionList = v6->fields.layoutXPositionList;
  if ( !layoutXPositionList || !recommendedInfoList )
    goto LABEL_58;
  size = layoutXPositionList->fields._size;
  v12 = (float)size;
  v13 = (float)recommendedInfoList->fields._size;
  if ( !byte_4B3EFD1 )
  {
    sub_1BDB878(&System_Math_TypeInfo, recommendedInfoList);
    byte_4B3EFD1 = 1;
  }
  v14 = v13 / v12;
  this = (FriendPointNoticeDialogComponent_o *)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v15 = vcvtps_s32_f32(v14);
  v16 = ceilf(v14) == INFINITY ? 0x80000000 : v15;
  if ( !mostUsedInfoList )
    goto LABEL_58;
  v17 = (float)mostUsedInfoList->fields._size;
  if ( !byte_4B3EFD1 )
  {
    sub_1BDB878(&System_Math_TypeInfo, recommendedInfoList);
    byte_4B3EFD1 = 1;
  }
  this = (FriendPointNoticeDialogComponent_o *)System_Math_TypeInfo;
  v18 = v17 / v12;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v19 = vcvtps_s32_f32(v18);
  if ( ceilf(v18) == INFINITY )
    v19 = 0x80000000;
  if ( v16 < 1 )
    goto LABEL_27;
  if ( v16 != 2 )
  {
    if ( v16 == 1 && v19 == 1 )
    {
      layoutYPositionList = v6->fields.layoutYPositionList;
      if ( !layoutYPositionList )
        goto LABEL_58;
      if ( layoutYPositionList->max_length > 2 )
      {
        v21 = &layoutYPositionList->m_Items[2];
        goto LABEL_30;
      }
LABEL_59:
      sub_1BDBADC(this, recommendedInfoList, mostUsedInfoList);
    }
    goto LABEL_27;
  }
  if ( v19 != 1 )
  {
LABEL_27:
    v22 = v6->fields.layoutYPositionList;
    if ( !v22 )
      goto LABEL_58;
    if ( v22->max_length <= 4 )
      goto LABEL_59;
    v21 = &v22->m_Items[4];
    goto LABEL_30;
  }
  v41 = v6->fields.layoutYPositionList;
  if ( !v41 )
    goto LABEL_58;
  if ( v41->max_length <= 3 )
    goto LABEL_59;
  v21 = &v41->m_Items[3];
LABEL_30:
  v23 = *v21;
  if ( (int)(v19 + v16) >= 4 )
  {
    this = (FriendPointNoticeDialogComponent_o *)v6->fields.servantInfoScrollView;
    if ( !this )
      goto LABEL_58;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
    this = (FriendPointNoticeDialogComponent_o *)v6->fields.servantInfoScrollBar;
    if ( !this )
      goto LABEL_58;
    this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
    if ( !this )
      goto LABEL_58;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  }
  this = (FriendPointNoticeDialogComponent_o *)v6->fields.usedRecommendedServantTitleLabel;
  if ( !this )
    goto LABEL_58;
  this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
  if ( !this )
    goto LABEL_58;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (FriendPointNoticeDialogComponent_o *)v6->fields.usedRecommendedServantTitleLabel;
  if ( !this )
    goto LABEL_58;
  v25 = *(float *)&localPosition;
  this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
  if ( !v23 )
    goto LABEL_58;
  v42.fields.y = v23->fields.lowerLabel;
  v42.fields.x = v25;
  GameObjectExtensions__SetLocalPosition_35211000((UnityEngine_GameObject_o *)this, v42, 0LL);
  this = (FriendPointNoticeDialogComponent_o *)v6->fields.mostUsedServantTitleLabel;
  if ( !this )
    goto LABEL_58;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v43.fields.y = v23->fields.upperLabel;
  v43.fields.x = v25;
  GameObjectExtensions__SetLocalPosition_35211000(gameObject, v43, 0LL);
  if ( recommendedInfoList->fields._size >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      this = (FriendPointNoticeDialogComponent_o *)v6->fields.layoutXPositionList;
      if ( !this )
        break;
      Item = System_Collections_Generic_List_float___get_Item(
               (System_Collections_Generic_List_float__o *)this,
               v27 % size,
               (const MethodInfo_36F6248 *)Method_System_Collections_Generic_List_float__get_Item__);
      if ( v27 / size )
        v29 = 36LL;
      else
        v29 = 32LL;
      v30 = *(float *)((char *)&v23->klass + v29);
      v31 = Item;
      v32 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)recommendedInfoList,
              v27,
              (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
      v44.fields.x = v31;
      v44.fields.y = v30;
      FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
        v6,
        (FriendPointNoticeDialogSvtInfo_o *)v32,
        v44,
        v33);
      if ( ++v27 >= recommendedInfoList->fields._size )
        goto LABEL_47;
    }
LABEL_58:
    sub_1BDBAD4(this, recommendedInfoList);
  }
LABEL_47:
  if ( mostUsedInfoList->fields._size >= 1 )
  {
    v34 = 0;
    while ( 1 )
    {
      this = (FriendPointNoticeDialogComponent_o *)v6->fields.layoutXPositionList;
      if ( !this )
        break;
      v35 = System_Collections_Generic_List_float___get_Item(
              (System_Collections_Generic_List_float__o *)this,
              v34 % SLODWORD(this->fields.m_CancellationTokenSource),
              (const MethodInfo_36F6248 *)Method_System_Collections_Generic_List_float__get_Item__);
      if ( v34 / size )
        v36 = 24LL;
      else
        v36 = 20LL;
      v37 = *(float *)((char *)&v23->klass + v36);
      v38 = v35;
      v39 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)mostUsedInfoList,
              v34,
              (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
      v45.fields.x = v38;
      v45.fields.y = v37;
      FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
        v6,
        (FriendPointNoticeDialogSvtInfo_o *)v39,
        v45,
        v40);
      if ( ++v34 >= mostUsedInfoList->fields._size )
        return;
    }
    goto LABEL_58;
  }
}


void __fastcall FriendPointNoticeDialogComponent__ExecClickedFunc(
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
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))clickedFunc->fields.m_target)(
      clickedFunc->fields.original_method_info,
      result,
      *(_QWORD *)&clickedFunc->fields.extra_arg);
  p_clickedFunc->klass = 0LL;
  sub_1BDB81C(p_clickedFunc, 0, (int32_t)method, v3);
}


void __fastcall FriendPointNoticeDialogComponent__Init(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4B46A65 & 1) == 0 )
  {
    sub_1BDB878(&string_TypeInfo, method);
    byte_4B46A65 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BDBAD4(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent__OnClickCancel(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B46A72 & 1) == 0 )
  {
    sub_1BDB878(&Method_FriendPointNoticeDialogComponent_OnClickCancel__, method);
    byte_4B46A72 = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickCancel__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BDB890(Method_FriendPointNoticeDialogComponent_OnClickCancel__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
  FriendPointNoticeDialogComponent__ExecClickedFunc(this, 3, v5);
}


void __fastcall FriendPointNoticeDialogComponent__OnClickRecommendedSupportDisableMask(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4B46A6E & 1) == 0 )
  {
    sub_1BDB878(&Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__, method);
    byte_4B46A6E = 1;
  }
  v2 = Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1BDB890(Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__);
  v3 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 1, 0, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent__OnClickToFriedPointSummon(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B46A6F & 1) == 0 )
  {
    sub_1BDB878(&Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__, method);
    byte_4B46A6F = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BDB890(Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
  FriendPointNoticeDialogComponent__ExecClickedFunc(this, 0, v5);
}


void __fastcall FriendPointNoticeDialogComponent__OnClickToRecommendedSupport(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B46A71 & 1) == 0 )
  {
    sub_1BDB878(&Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__, method);
    byte_4B46A71 = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BDB890(Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
  FriendPointNoticeDialogComponent__ExecClickedFunc(this, 2, v5);
}


void __fastcall FriendPointNoticeDialogComponent__OnClickToSupport(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B46A70 & 1) == 0 )
  {
    sub_1BDB878(&Method_FriendPointNoticeDialogComponent_OnClickToSupport__, method);
    byte_4B46A70 = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickToSupport__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickToSupport__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BDB890(Method_FriendPointNoticeDialogComponent_OnClickToSupport__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
  FriendPointNoticeDialogComponent__ExecClickedFunc(this, 1, v5);
}


void __fastcall FriendPointNoticeDialogComponent__Open(
        FriendPointNoticeDialogComponent_o *this,
        CommonUI_LoginResultData_o *loginResultData,
        FriendPointNoticeDialogComponent_CallbackFunc_o *clickedAction,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  FriendPointNoticeDialogSvtInfo_o *gameObject; // x0
  Il2CppObject *v43; // x1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  UILabel_o *titleLabel; // x21
  int32_t addFriendPoint; // w8
  _BOOL4 v48; // w20
  struct UILabel_o *addedPointLabel; // x21
  System_String_o *mText; // x22
  System_String_o *v51; // x23
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  Il2CppObject *v55; // x0
  System_String_o *v56; // x0
  System_String_o *v57; // x0
  struct UILabel_o *v58; // x21
  System_String_o *v59; // x0
  struct UILabel_o *v60; // x21
  System_String_o *v61; // x22
  System_String_o *v62; // x23
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  Il2CppObject *v66; // x0
  System_String_o *v67; // x0
  System_String_o *v68; // x0
  UILabel_o *v69; // x21
  UILabel_o *addedRecommendedPointLabel; // x21
  System_String_o *v71; // x22
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  Il2CppObject *v75; // x0
  UILabel_o *v76; // x21
  UnityEngine_GameObject_o *v77; // x0
  System_Collections_Generic_List_object__o *v78; // x21
  System_Collections_Generic_List_object__o *v79; // x25
  UILabel_o *usedRecommendedServantTitleLabel; // x23
  struct CommonUI_LoginResultRecommendSupportFriendPointSvtData_array *addRecommendSupportFriendPointSvtList; // x29
  __int64 v82; // x2
  struct FriendPointNoticeDialogSvtInfo_array *recommendedSupportServantInfoList; // x28
  __int64 v84; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v85; // x23
  il2cpp_array_size_t v86; // w26
  unsigned __int64 v87; // x27
  il2cpp_array_size_t max_length; // w8
  CommonUI_LoginResultRecommendSupportFriendPointSvtData_o *v89; // x24
  System_String_o *monitor; // x25
  const MethodInfo *v91; // x5
  struct FriendPointNoticeDialogSvtInfo_array *v92; // x8
  struct FriendPointNoticeDialogSvtInfo_array *v93; // x8
  const MethodInfo *v94; // x3
  struct FriendPointNoticeDialogSvtInfo_array *v95; // x8
  struct System_Object_array *items; // x8
  _QWORD *v97; // x9
  __int64 size; // x10
  Il2CppClass **v99; // x0
  System_Collections_Generic_IEnumerable_T__o *v100; // x23
  FriendPointNoticeDialogComponent___c_c *v101; // x0
  System_Action_object__o *_9__49_1; // x24
  Il2CppObject *v103; // x25
  struct FriendPointNoticeDialogComponent___c_StaticFields *static_fields; // x0
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  UILabel_o *mostUsedServantTitleLabel; // x23
  CommonUI_LoginResultFriendPointSvtData_o *topAddFriendPointSvt; // x23
  FriendPointNoticeDialogSvtInfo_o *normalSupportServantInfo; // x24
  const MethodInfo *v110; // x5
  struct CommonUI_LoginResultFriendPointSvtData_o *v111; // x8
  CommonUI_LoginResultFriendPointSvtData_o *topAddFriendPointSvtEQ; // x23
  FriendPointNoticeDialogSvtInfo_o *eventSupportServantInfo; // x24
  const MethodInfo *v114; // x5
  struct CommonUI_LoginResultFriendPointSvtData_o *v115; // x8
  CommonUI_LoginResultFriendPointSvtData_o *topAddFriendPointSvtGrand; // x23
  FriendPointNoticeDialogSvtInfo_o *grandSupportServantInfo; // x24
  const MethodInfo *v118; // x5
  struct CommonUI_LoginResultFriendPointSvtData_o *v119; // x8
  int32_t v120; // w2
  const MethodInfo *v121; // x3
  struct System_Object_array *v122; // x8
  _QWORD *v123; // x9
  __int64 v124; // x10
  Il2CppClass **v125; // x0
  int32_t v126; // w2
  const MethodInfo *v127; // x3
  struct System_Object_array *v128; // x8
  _QWORD *v129; // x9
  __int64 v130; // x10
  Il2CppClass **v131; // x0
  int32_t v132; // w2
  const MethodInfo *v133; // x3
  struct System_Object_array *v134; // x8
  _QWORD *v135; // x9
  __int64 v136; // x10
  Il2CppClass **v137; // x0
  const MethodInfo *v138; // x3
  int v139; // w8
  FriendPointNoticeDialogComponent_o *v140; // x0
  int32_t v141; // w1
  System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__o *v142; // x2
  UILabel_o *noDataLabel; // x20
  Il2CppObject *Master_object; // x20
  FriendPointNoticeDialogSvtInfo_o *v145; // x20
  int32_t m_CancellationTokenSource; // w21
  BalanceConfig_c *v147; // x0
  UILabel_o *friendPointMaxLabel; // x21
  UnityEngine_GameObject_o *v149; // x0
  UILabel_o *currentFriendPointLabel; // x21
  System_String_o *v151; // x22
  __int64 v152; // x2
  __int64 v153; // x3
  __int64 v154; // x4
  Il2CppObject *v155; // x0
  UILabel_o *v156; // x20
  UILabel_o *closeButtonLabel; // x20
  UILabel_o *friendSupportButtonLabel; // x20
  const MethodInfo *v159; // x1
  UILabel_o *decideButtonLabel; // x20
  System_Action_o *v161; // x20
  System_Collections_Generic_List_object__o *v162; // [xsp+0h] [xbp-80h]
  CommonUI_LoginResultData_o *v163; // [xsp+8h] [xbp-78h]
  int32_t addFollowFriendPoint; // [xsp+14h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B46A66 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_FriendPointNoticeDialogSvtInfo__TypeInfo, loginResultData);
    sub_1BDB878(&System_Action_TypeInfo, v7);
    sub_1BDB878(&BalanceConfig_TypeInfo, v8);
    sub_1BDB878(&Method_BasicHelper_ForEach_FriendPointNoticeDialogSvtInfo___, v9);
    sub_1BDB878(&Method_DataManager_GetMaster_QuestMaster___, v10);
    sub_1BDB878(&Method_DataManager_GetMaster_TblUserMaster___, v11);
    sub_1BDB878(&DataManager_TypeInfo, v12);
    sub_1BDB878(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v13);
    sub_1BDB878(&Method_FriendPointNoticeDialogComponent__Open_b__49_0__, v14);
    sub_1BDB878(&FriendPointNoticeDialogComponent_TypeInfo, v15);
    sub_1BDB878(&int_TypeInfo, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__, v17);
    sub_1BDB878(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo___ctor__, v18);
    sub_1BDB878(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Count__, v19);
    sub_1BDB878(&System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__TypeInfo, v20);
    sub_1BDB878(&LocalizationManager_TypeInfo, v21);
    sub_1BDB878(&NetworkManager_TypeInfo, v22);
    sub_1BDB878(&Method_FriendPointNoticeDialogComponent___c__Open_b__49_1__, v23);
    sub_1BDB878(&FriendPointNoticeDialogComponent___c_TypeInfo, v24);
    sub_1BDB878(&StringLiteral_6958/*"GET_FRIEND_POINT_FP_RECOMMENDED"*/, v25);
    sub_1BDB878(&StringLiteral_6965/*"GET_FRIEND_POINT_SERVANT_TITLE"*/, v26);
    sub_1BDB878(&StringLiteral_6961/*"GET_FRIEND_POINT_NO_DATA"*/, v27);
    sub_1BDB878(&StringLiteral_6960/*"GET_FRIEND_POINT_NOW_POINT"*/, v28);
    sub_1BDB878(&StringLiteral_6967/*"GET_FRIEND_POINT_SUPPORT_BTN"*/, v29);
    sub_1BDB878(&StringLiteral_116/*"  "*/, v30);
    sub_1BDB878(&StringLiteral_6957/*"GET_FRIEND_POINT_FP_NORMAL"*/, v31);
    sub_1BDB878(&StringLiteral_3717/*"COMMON_CONFIRM_CLOSE"*/, v32);
    sub_1BDB878(&StringLiteral_6956/*"GET_FRIEND_POINT_FP_FOLLOW"*/, v33);
    sub_1BDB878(&StringLiteral_6953/*"GET_FRIEND_POINT_CAPTION_GRAND"*/, v34);
    sub_1BDB878(&StringLiteral_6966/*"GET_FRIEND_POINT_SERVANT_USED_RECOMMENDED_TITLE"*/, v35);
    sub_1BDB878(&StringLiteral_6952/*"GET_FRIEND_POINT_CAPTION_EVENT"*/, v36);
    sub_1BDB878(&StringLiteral_1/*""*/, v37);
    sub_1BDB878(&StringLiteral_6959/*"GET_FRIEND_POINT_GACHA_BTN"*/, v38);
    sub_1BDB878(&StringLiteral_6968/*"GET_FRIEND_POINT_TITLE"*/, v39);
    sub_1BDB878(&StringLiteral_6951/*"GET_FRIEND_POINT_AT_LIMIT"*/, v40);
    sub_1BDB878(&StringLiteral_6954/*"GET_FRIEND_POINT_CAPTION_NORMAL"*/, v41);
    byte_4B46A66 = 1;
  }
  entity = 0LL;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !gameObject )
    goto LABEL_188;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.clickedFunc = clickedAction;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.clickedFunc, (int32_t)clickedAction, v44, v45);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.noDataLabel;
  this->fields.state = 1;
  if ( !gameObject )
    goto LABEL_188;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0LL);
  if ( !gameObject )
    goto LABEL_188;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6968/*"GET_FRIEND_POINT_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_188;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.addedPointLabel;
  if ( !gameObject )
    goto LABEL_188;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !loginResultData )
    goto LABEL_188;
  addFriendPoint = loginResultData->fields.addFriendPoint;
  v48 = addFriendPoint < 1;
  if ( addFriendPoint >= 1 )
  {
    addedPointLabel = this->fields.addedPointLabel;
    if ( !addedPointLabel )
      goto LABEL_188;
    mText = addedPointLabel->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v51 = LocalizationManager__Get((System_String_o *)StringLiteral_6957/*"GET_FRIEND_POINT_FP_NORMAL"*/, 0LL);
    addFollowFriendPoint = loginResultData->fields.addFriendPoint;
    v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint, v52, v53, v54);
    v56 = System_String__Format(v51, v55, 0LL);
    v57 = System_String__Concat_62572260(mText, v56, 0LL);
    UILabel__set_text(addedPointLabel, v57, 0LL);
  }
  if ( loginResultData->fields.addFollowFriendPoint >= 1 )
  {
    if ( loginResultData->fields.addFriendPoint >= 1 )
    {
      v58 = this->fields.addedPointLabel;
      if ( !v58 )
        goto LABEL_188;
      v59 = System_String__Concat_62572260(v58->fields.mText, (System_String_o *)StringLiteral_116/*"  "*/, 0LL);
      UILabel__set_text(v58, v59, 0LL);
    }
    v60 = this->fields.addedPointLabel;
    if ( !v60 )
      goto LABEL_188;
    v61 = v60->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v62 = LocalizationManager__Get((System_String_o *)StringLiteral_6956/*"GET_FRIEND_POINT_FP_FOLLOW"*/, 0LL);
    addFollowFriendPoint = loginResultData->fields.addFollowFriendPoint;
    v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint, v63, v64, v65);
    v67 = System_String__Format(v62, v66, 0LL);
    v68 = System_String__Concat_62572260(v61, v67, 0LL);
    UILabel__set_text(v60, v68, 0LL);
    v48 = 0;
  }
  v69 = this->fields.addedPointLabel;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)FriendPointNoticeDialogComponent_TypeInfo;
  if ( !FriendPointNoticeDialogComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent_TypeInfo);
  if ( !v69 )
    goto LABEL_188;
  UILabel__SetCondensedScale_48820552(
    v69,
    FriendPointNoticeDialogComponent_TypeInfo->static_fields->ADD_POINT_LABEL_MAX_WIDTH,
    0.0,
    0LL);
  if ( loginResultData->fields.addRecommendSupportFriendPoint < 1 )
  {
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.addedPointLabel;
    if ( !gameObject )
      goto LABEL_188;
LABEL_38:
    v77 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v77, this->fields.addedPointLabelCenterPosY, 0LL);
    goto LABEL_39;
  }
  addedRecommendedPointLabel = this->fields.addedRecommendedPointLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v71 = LocalizationManager__Get((System_String_o *)StringLiteral_6958/*"GET_FRIEND_POINT_FP_RECOMMENDED"*/, 0LL);
  addFollowFriendPoint = loginResultData->fields.addRecommendSupportFriendPoint;
  v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint, v72, v73, v74);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_String__Format(v71, v75, 0LL);
  if ( !addedRecommendedPointLabel )
    goto LABEL_188;
  UILabel__set_text(addedRecommendedPointLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)FriendPointNoticeDialogComponent_TypeInfo;
  v76 = this->fields.addedRecommendedPointLabel;
  if ( !FriendPointNoticeDialogComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent_TypeInfo);
  if ( !v76 )
    goto LABEL_188;
  UILabel__SetCondensedScale_48820552(
    v76,
    FriendPointNoticeDialogComponent_TypeInfo->static_fields->ADD_POINT_LABEL_MAX_WIDTH,
    0.0,
    0LL);
  if ( v48 )
  {
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.addedRecommendedPointLabel;
    if ( !gameObject )
      goto LABEL_188;
    goto LABEL_38;
  }
LABEL_39:
  v78 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v78,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo___ctor__);
  v79 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v79,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo___ctor__);
  usedRecommendedServantTitleLabel = this->fields.usedRecommendedServantTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6966/*"GET_FRIEND_POINT_SERVANT_USED_RECOMMENDED_TITLE"*/, 0LL);
  if ( !usedRecommendedServantTitleLabel )
    goto LABEL_188;
  UILabel__set_text(usedRecommendedServantTitleLabel, (System_String_o *)gameObject, 0LL);
  addRecommendSupportFriendPointSvtList = loginResultData->fields.addRecommendSupportFriendPointSvtList;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestMaster___);
  v162 = v79;
  v163 = loginResultData;
  if ( addRecommendSupportFriendPointSvtList && *(_QWORD *)&addRecommendSupportFriendPointSvtList->max_length )
  {
    recommendedSupportServantInfoList = this->fields.recommendedSupportServantInfoList;
    if ( !recommendedSupportServantInfoList )
      goto LABEL_188;
    v84 = *(_QWORD *)&recommendedSupportServantInfoList->max_length;
    if ( (int)v84 >= 1 )
    {
      v85 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
      v86 = 0;
      v87 = 0LL;
      while ( v87 < (unsigned int)v84 )
      {
        max_length = addRecommendSupportFriendPointSvtList->max_length;
        if ( (int)v86 >= (int)max_length )
        {
          gameObject = recommendedSupportServantInfoList->m_Items[v87];
          if ( !gameObject )
            goto LABEL_188;
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)gameObject,
                                                             0LL);
          if ( !gameObject )
            goto LABEL_188;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        else
        {
          if ( v86 >= max_length )
            break;
          v89 = addRecommendSupportFriendPointSvtList->m_Items[v86];
          if ( !v89 || !v85 )
            goto LABEL_188;
          monitor = (System_String_o *)StringLiteral_1/*""*/;
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                             v85,
                                                             &entity,
                                                             v89->fields.questId,
                                                             (const MethodInfo_32E1E88 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_188;
            monitor = (System_String_o *)entity[1].monitor;
          }
          v92 = this->fields.recommendedSupportServantInfoList;
          if ( !v92 )
            goto LABEL_188;
          if ( v86 >= v92->max_length )
            break;
          FriendPointNoticeDialogComponent__SetupServantInfo_43833868(
            (FriendPointNoticeDialogComponent_o *)gameObject,
            v92->m_Items[v86],
            v89,
            monitor,
            v89->fields.friendPoint,
            v91);
          v93 = this->fields.recommendedSupportServantInfoList;
          if ( !v93 )
            goto LABEL_188;
          if ( v86 >= v93->max_length )
            break;
          gameObject = v93->m_Items[v86];
          if ( !gameObject )
            goto LABEL_188;
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)gameObject,
                                                             0LL);
          if ( !gameObject )
            goto LABEL_188;
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_GameObject__get_activeSelf(
                                                             (UnityEngine_GameObject_o *)gameObject,
                                                             0LL);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            v95 = this->fields.recommendedSupportServantInfoList;
            if ( !v95 )
              goto LABEL_188;
            if ( v86 >= v95->max_length )
              break;
            if ( !v78 )
              goto LABEL_188;
            v43 = (Il2CppObject *)v95->m_Items[v86];
            items = v78->fields._items;
            v97 = Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__;
            ++v78->fields._version;
            if ( !items )
              goto LABEL_188;
            size = v78->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v78,
                v43,
                *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
            }
            else
            {
              v99 = &items->obj.klass + size;
              v78->fields._size = size + 1;
              v99[4] = (Il2CppClass *)v43;
              sub_1BDB81C((CGThumbnailListItem_o *)(v99 + 4), (int32_t)v43, v82, v94);
            }
          }
          ++v86;
        }
        LODWORD(v84) = recommendedSupportServantInfoList->max_length;
        if ( (__int64)++v87 >= (int)v84 )
          goto LABEL_84;
      }
      sub_1BDBADC(gameObject, v43, v82);
    }
  }
  else
  {
    v100 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.recommendedSupportServantInfoList;
    v101 = FriendPointNoticeDialogComponent___c_TypeInfo;
    if ( !FriendPointNoticeDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent___c_TypeInfo);
      v101 = FriendPointNoticeDialogComponent___c_TypeInfo;
    }
    _9__49_1 = (System_Action_object__o *)v101->static_fields->__9__49_1;
    if ( !_9__49_1 )
    {
      if ( !v101->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v101);
        v101 = FriendPointNoticeDialogComponent___c_TypeInfo;
      }
      v103 = (Il2CppObject *)v101->static_fields->__9;
      _9__49_1 = (System_Action_object__o *)sub_1BDBAC4(System_Action_FriendPointNoticeDialogSvtInfo__TypeInfo);
      System_Action_object____ctor(_9__49_1, v103, Method_FriendPointNoticeDialogComponent___c__Open_b__49_1__, 0LL);
      static_fields = FriendPointNoticeDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__49_1 = (struct System_Action_FriendPointNoticeDialogSvtInfo__o *)_9__49_1;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__49_1, (int32_t)_9__49_1, v105, v106);
    }
    BasicHelper__ForEach_object_(
      v100,
      (System_Action_T__o *)_9__49_1,
      (const MethodInfo_301FA1C *)Method_BasicHelper_ForEach_FriendPointNoticeDialogSvtInfo___);
  }
LABEL_84:
  mostUsedServantTitleLabel = this->fields.mostUsedServantTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6965/*"GET_FRIEND_POINT_SERVANT_TITLE"*/, 0LL);
  if ( !mostUsedServantTitleLabel )
    goto LABEL_188;
  UILabel__set_text(mostUsedServantTitleLabel, (System_String_o *)gameObject, 0LL);
  gameObject = this->fields.normalSupportServantInfo;
  if ( !gameObject )
    goto LABEL_188;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0LL);
  if ( !gameObject )
    goto LABEL_188;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  topAddFriendPointSvt = v163->fields.topAddFriendPointSvt;
  if ( topAddFriendPointSvt )
  {
    normalSupportServantInfo = this->fields.normalSupportServantInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6954/*"GET_FRIEND_POINT_CAPTION_NORMAL"*/,
                                                       0LL);
    v111 = v163->fields.topAddFriendPointSvt;
    if ( !v111 )
      goto LABEL_188;
    FriendPointNoticeDialogComponent__SetupServantInfo(
      (FriendPointNoticeDialogComponent_o *)gameObject,
      normalSupportServantInfo,
      topAddFriendPointSvt,
      (System_String_o *)gameObject,
      v111->fields.friendPoint,
      v110);
  }
  gameObject = this->fields.eventSupportServantInfo;
  if ( !gameObject )
    goto LABEL_188;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0LL);
  if ( !gameObject )
    goto LABEL_188;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  topAddFriendPointSvtEQ = v163->fields.topAddFriendPointSvtEQ;
  if ( topAddFriendPointSvtEQ )
  {
    eventSupportServantInfo = this->fields.eventSupportServantInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6952/*"GET_FRIEND_POINT_CAPTION_EVENT"*/,
                                                       0LL);
    v115 = v163->fields.topAddFriendPointSvtEQ;
    if ( !v115 )
      goto LABEL_188;
    FriendPointNoticeDialogComponent__SetupServantInfo(
      (FriendPointNoticeDialogComponent_o *)gameObject,
      eventSupportServantInfo,
      topAddFriendPointSvtEQ,
      (System_String_o *)gameObject,
      v115->fields.friendPoint,
      v114);
  }
  gameObject = this->fields.grandSupportServantInfo;
  if ( !gameObject )
    goto LABEL_188;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0LL);
  if ( !gameObject )
    goto LABEL_188;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  topAddFriendPointSvtGrand = v163->fields.topAddFriendPointSvtGrand;
  if ( topAddFriendPointSvtGrand )
  {
    grandSupportServantInfo = this->fields.grandSupportServantInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6953/*"GET_FRIEND_POINT_CAPTION_GRAND"*/,
                                                       0LL);
    v119 = v163->fields.topAddFriendPointSvtGrand;
    if ( !v119 )
      goto LABEL_188;
    FriendPointNoticeDialogComponent__SetupServantInfo(
      (FriendPointNoticeDialogComponent_o *)gameObject,
      grandSupportServantInfo,
      topAddFriendPointSvtGrand,
      (System_String_o *)gameObject,
      v119->fields.friendPoint,
      v118);
  }
  gameObject = this->fields.normalSupportServantInfo;
  if ( !gameObject )
    goto LABEL_188;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0LL);
  if ( !gameObject )
    goto LABEL_188;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_GameObject__get_activeSelf(
                                                     (UnityEngine_GameObject_o *)gameObject,
                                                     0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v162 )
      goto LABEL_188;
    v43 = (Il2CppObject *)this->fields.normalSupportServantInfo;
    v122 = v162->fields._items;
    v123 = Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__;
    ++v162->fields._version;
    if ( !v122 )
      goto LABEL_188;
    v124 = v162->fields._size;
    if ( (unsigned int)v124 >= v122->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v162,
        v43,
        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
    }
    else
    {
      v125 = &v122->obj.klass + v124;
      v162->fields._size = v124 + 1;
      v125[4] = (Il2CppClass *)v43;
      sub_1BDB81C((CGThumbnailListItem_o *)(v125 + 4), (int32_t)v43, v120, v121);
    }
  }
  gameObject = this->fields.eventSupportServantInfo;
  if ( !gameObject )
    goto LABEL_188;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0LL);
  if ( !gameObject )
    goto LABEL_188;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_GameObject__get_activeSelf(
                                                     (UnityEngine_GameObject_o *)gameObject,
                                                     0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v162 )
      goto LABEL_188;
    v43 = (Il2CppObject *)this->fields.eventSupportServantInfo;
    v128 = v162->fields._items;
    v129 = Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__;
    ++v162->fields._version;
    if ( !v128 )
      goto LABEL_188;
    v130 = v162->fields._size;
    if ( (unsigned int)v130 >= v128->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v162,
        v43,
        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
    }
    else
    {
      v131 = &v128->obj.klass + v130;
      v162->fields._size = v130 + 1;
      v131[4] = (Il2CppClass *)v43;
      sub_1BDB81C((CGThumbnailListItem_o *)(v131 + 4), (int32_t)v43, v126, v127);
    }
  }
  gameObject = this->fields.grandSupportServantInfo;
  if ( !gameObject )
    goto LABEL_188;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0LL);
  if ( !gameObject )
    goto LABEL_188;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_GameObject__get_activeSelf(
                                                     (UnityEngine_GameObject_o *)gameObject,
                                                     0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v162 )
      goto LABEL_188;
    v43 = (Il2CppObject *)this->fields.grandSupportServantInfo;
    v134 = v162->fields._items;
    v135 = Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__;
    ++v162->fields._version;
    if ( !v134 )
      goto LABEL_188;
    v136 = v162->fields._size;
    if ( (unsigned int)v136 >= v134->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v162,
        v43,
        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v135[4] + 192LL) + 112LL));
    }
    else
    {
      v137 = &v134->obj.klass + v136;
      v162->fields._size = v136 + 1;
      v137[4] = (Il2CppClass *)v43;
      sub_1BDB81C((CGThumbnailListItem_o *)(v137 + 4), (int32_t)v43, v132, v133);
    }
  }
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.servantInfoScrollView;
  if ( !gameObject )
    goto LABEL_188;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0LL);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.servantInfoScrollBar;
  if ( !gameObject )
    goto LABEL_188;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0LL);
  if ( !gameObject )
    goto LABEL_188;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  if ( !v78 || !v162 )
    goto LABEL_188;
  v139 = v162->fields._size;
  if ( v78->fields._size >= 1 )
  {
    if ( v139 > 0 )
    {
      FriendPointNoticeDialogComponent__Display2TypeInfo(
        this,
        (System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__o *)v78,
        (System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__o *)v162,
        v138);
      goto LABEL_157;
    }
    v141 = 1;
    v140 = this;
    v142 = (System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__o *)v78;
    goto LABEL_143;
  }
  if ( v139 > 0 )
  {
    v140 = this;
    v141 = 0;
    v142 = (System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__o *)v162;
LABEL_143:
    FriendPointNoticeDialogComponent__Display1TypeInfo(v140, v141, v142, v138);
    goto LABEL_157;
  }
  if ( v163->fields.addFriendPoint > 0
    || v163->fields.addFollowFriendPoint > 0
    || v163->fields.addRecommendSupportFriendPoint >= 1 )
  {
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.noDataLabel;
    if ( !gameObject )
      goto LABEL_188;
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)gameObject,
                                                       0LL);
    if ( !gameObject )
      goto LABEL_188;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    noDataLabel = this->fields.noDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6961/*"GET_FRIEND_POINT_NO_DATA"*/,
                                                       0LL);
    if ( !noDataLabel )
      goto LABEL_188;
    UILabel__set_text(noDataLabel, (System_String_o *)gameObject, 0LL);
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.mostUsedServantTitleLabel;
    if ( !gameObject )
      goto LABEL_188;
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)gameObject,
                                                       0LL);
    if ( !gameObject )
      goto LABEL_188;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.usedRecommendedServantTitleLabel;
    if ( !gameObject )
      goto LABEL_188;
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)gameObject,
                                                       0LL);
    if ( !gameObject )
      goto LABEL_188;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
LABEL_157:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_TblUserMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, v43);
    byte_4B3ED56 = 1;
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
                                                     0LL);
  if ( !gameObject )
    goto LABEL_188;
  v145 = gameObject;
  m_CancellationTokenSource = (int32_t)gameObject->fields.m_CancellationTokenSource;
  v147 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v147 = BalanceConfig_TypeInfo;
  }
  if ( m_CancellationTokenSource >= v147->static_fields->FriendPointMax )
  {
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.friendPointMaxLabel;
    if ( gameObject )
    {
      gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)gameObject,
                                                         0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        friendPointMaxLabel = this->fields.friendPointMaxLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_6951/*"GET_FRIEND_POINT_AT_LIMIT"*/,
                                                           0LL);
        if ( friendPointMaxLabel )
        {
          UILabel__set_text(friendPointMaxLabel, (System_String_o *)gameObject, 0LL);
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.basePanelSprite;
          if ( gameObject )
          {
            UIWidget__set_height((UIWidget_o *)gameObject, this->fields.confirmWindowHeightMaxFp, 0LL);
            GameObjectExtensions__SetLocalPositionY(this->fields.topParts, this->fields.topPartsPosYMaxFp, 0LL);
            gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.currentFriendPointLabel;
            if ( gameObject )
            {
              v149 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              GameObjectExtensions__SetLocalPositionY(v149, this->fields.currentFpLabelYMaxFp, 0LL);
              GameObjectExtensions__SetLocalPositionY(
                this->fields.buttonParentObject,
                this->fields.buttonPosYMaxFp,
                0LL);
              goto LABEL_178;
            }
          }
        }
      }
    }
LABEL_188:
    sub_1BDBAD4(gameObject, v43);
  }
LABEL_178:
  currentFriendPointLabel = this->fields.currentFriendPointLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v151 = LocalizationManager__Get((System_String_o *)StringLiteral_6960/*"GET_FRIEND_POINT_NOW_POINT"*/, 0LL);
  addFollowFriendPoint = (int32_t)v145->fields.m_CancellationTokenSource;
  v155 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint, v152, v153, v154);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_String__Format(v151, v155, 0LL);
  if ( !currentFriendPointLabel )
    goto LABEL_188;
  UILabel__set_text(currentFriendPointLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)FriendPointNoticeDialogComponent_TypeInfo;
  v156 = this->fields.currentFriendPointLabel;
  if ( !FriendPointNoticeDialogComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent_TypeInfo);
  if ( !v156 )
    goto LABEL_188;
  UILabel__SetCondensedScale_48820552(
    v156,
    FriendPointNoticeDialogComponent_TypeInfo->static_fields->CURRENT_FRIEND_POINT_LABEL_MAX_WIDTH,
    0.0,
    0LL);
  closeButtonLabel = this->fields.closeButtonLabel;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3717/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeButtonLabel )
    goto LABEL_188;
  UILabel__set_text(closeButtonLabel, (System_String_o *)gameObject, 0LL);
  friendSupportButtonLabel = this->fields.friendSupportButtonLabel;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6967/*"GET_FRIEND_POINT_SUPPORT_BTN"*/, 0LL);
  if ( !friendSupportButtonLabel )
    goto LABEL_188;
  UILabel__set_text(friendSupportButtonLabel, (System_String_o *)gameObject, 0LL);
  FriendPointNoticeDialogComponent__SetRecommendedSupportButton(this, v159);
  decideButtonLabel = this->fields.decideButtonLabel;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6959/*"GET_FRIEND_POINT_GACHA_BTN"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_188;
  UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  AndroidBackKeyManager__AddBackBtn(this->fields.closeButtonObject, 0LL);
  v161 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v161, (Il2CppObject *)this, Method_FriendPointNoticeDialogComponent__Open_b__49_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v161, 0, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent__SetBackKeyForAndroid(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  AndroidBackKeyManager__AddBackBtn(this->fields.closeButtonObject, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent__SetEnableButton(
        FriendPointNoticeDialogComponent_o *this,
        UnityEngine_GameObject_o *buttonObj,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4B46A6C & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, buttonObj);
    this = (FriendPointNoticeDialogComponent_o *)sub_1BDB878(&UnityEngine_Object_TypeInfo, v6);
    byte_4B46A6C = 1;
  }
  if ( !buttonObj )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       buttonObj,
                       (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0LL,
                                                 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( Component_object )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)Component_object, isEnable, 0LL);
      return;
    }
LABEL_10:
    sub_1BDBAD4(this, buttonObj);
  }
}


void __fastcall FriendPointNoticeDialogComponent__SetRecommendedSupportButton(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UILabel_o *recommendedSupportButtonLabel; // x20
  System_String_o *Master_object; // x0
  __int64 v12; // x1
  RecommendSupportQuestEntity_array *List; // x0
  FriendPointNoticeDialogComponent___c_c *v14; // x8
  System_Object_array *v15; // x20
  System_Func_object__bool__o *_9__58_0; // x21
  Il2CppObject *v17; // x22
  struct FriendPointNoticeDialogComponent___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  bool v21; // w0
  UILabel_o *recommendedSupportButtonLabelForMask; // x21
  bool v23; // w20
  FriendPointNoticeDialogComponent_o *v24; // x0
  const MethodInfo *v25; // x3

  if ( (byte_4B46A6D & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_Any_RecommendSupportQuestEntity___, method);
    sub_1BDB878(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___, v3);
    sub_1BDB878(&DataManager_TypeInfo, v4);
    sub_1BDB878(&System_Func_RecommendSupportQuestEntity__bool__TypeInfo, v5);
    sub_1BDB878(&LocalizationManager_TypeInfo, v6);
    sub_1BDB878(&Method_FriendPointNoticeDialogComponent___c__SetRecommendedSupportButton_b__58_0__, v7);
    sub_1BDB878(&FriendPointNoticeDialogComponent___c_TypeInfo, v8);
    sub_1BDB878(&StringLiteral_6962/*"GET_FRIEND_POINT_RECOMMENDED_BTN"*/, v9);
    byte_4B46A6D = 1;
  }
  recommendedSupportButtonLabel = this->fields.recommendedSupportButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_6962/*"GET_FRIEND_POINT_RECOMMENDED_BTN"*/, 0LL);
  if ( !recommendedSupportButtonLabel )
    goto LABEL_20;
  UILabel__set_text(recommendedSupportButtonLabel, Master_object, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
  if ( !Master_object )
    goto LABEL_20;
  List = RecommendSupportQuestMaster__GetList((RecommendSupportQuestMaster_o *)Master_object, 0LL);
  v14 = FriendPointNoticeDialogComponent___c_TypeInfo;
  v15 = (System_Object_array *)List;
  if ( !FriendPointNoticeDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent___c_TypeInfo);
    v14 = FriendPointNoticeDialogComponent___c_TypeInfo;
  }
  _9__58_0 = (System_Func_object__bool__o *)v14->static_fields->__9__58_0;
  if ( !_9__58_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = FriendPointNoticeDialogComponent___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__58_0 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_RecommendSupportQuestEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__58_0,
      v17,
      Method_FriendPointNoticeDialogComponent___c__SetRecommendedSupportButton_b__58_0__,
      0LL);
    static_fields = FriendPointNoticeDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__58_0 = (struct System_Func_RecommendSupportQuestEntity__bool__o *)_9__58_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__58_0, (int32_t)_9__58_0, v19, v20);
  }
  v21 = BasicHelper__Any_object__50450088(
          v15,
          (System_Func_T__bool__o *)_9__58_0,
          (const MethodInfo_301CEA8 *)Method_BasicHelper_Any_RecommendSupportQuestEntity___);
  recommendedSupportButtonLabelForMask = this->fields.recommendedSupportButtonLabelForMask;
  v23 = v21;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_6962/*"GET_FRIEND_POINT_RECOMMENDED_BTN"*/, 0LL);
  if ( !recommendedSupportButtonLabelForMask
    || (UILabel__set_text(recommendedSupportButtonLabelForMask, Master_object, 0LL),
        FriendPointNoticeDialogComponent__SetEnableButton(v24, this->fields.recommendedSupportButtonObject, v23, v25),
        (Master_object = (System_String_o *)this->fields.recommendedSupportButtonMaskTextObject) == 0LL) )
  {
LABEL_20:
    sub_1BDBAD4(Master_object, v12);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, !v23, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent__SetupServantInfo(
        FriendPointNoticeDialogComponent_o *this,
        FriendPointNoticeDialogSvtInfo_o *servantInfo,
        CommonUI_LoginResultFriendPointSvtData_o *pointData,
        System_String_o *questName,
        int32_t friendPoint,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  FriendPointNoticeDialogComponent_o *v13; // x23
  const MethodInfo *v14; // x5
  bool v15; // w0
  Il2CppObject *object; // x20
  Il2CppObject *Component_object; // x20
  const MethodInfo *v18; // x2

  if ( (byte_4B46A67 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_UIFont___, servantInfo);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v10);
    sub_1BDB878(&Method_UnityEngine_Resources_Load_GameObject___, v11);
    this = (FriendPointNoticeDialogComponent_o *)sub_1BDB878(&StringLiteral_6816/*"Fonts/TextAtlas3"*/, v12);
    byte_4B46A67 = 1;
  }
  if ( !servantInfo )
    goto LABEL_16;
  this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)servantInfo,
                                                 0LL);
  if ( !this )
    goto LABEL_16;
  v13 = this;
  if ( !pointData )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v15 = FriendPointNoticeDialogSvtInfo__Set(
          servantInfo,
          pointData->fields.svtId,
          pointData->fields.userSvtId,
          questName,
          friendPoint,
          v14);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v13, v15, 0LL);
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_6816/*"Fonts/TextAtlas3"*/,
             (const MethodInfo_30CD6D0 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)object, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( object )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)object,
                           (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        FriendPointNoticeDialogSvtInfo__SetLabelsBitmapFont(servantInfo, (UIFont_o *)Component_object, v18);
      return;
    }
LABEL_16:
    sub_1BDBAD4(this, servantInfo);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
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
    sub_1BDBAD4(this, 0LL);
  y = position.fields.y;
  x = position.fields.x;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantInfo, 0LL);
  v11.fields.x = x;
  v11.fields.y = y;
  GameObjectExtensions__SetLocalPosition_35211000(gameObject, v11, 0LL);
  FriendPointNoticeDialogSvtInfo__SetLabelsCondensedScale(servantInfo, this->fields.servantNameLabelMaxWidth, v9);
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantInfo, 0LL);
  GameObjectExtensions__ResetLocalScale(v10, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent__SetupServantInfo_43833868(
        FriendPointNoticeDialogComponent_o *this,
        FriendPointNoticeDialogSvtInfo_o *servantInfo,
        CommonUI_LoginResultRecommendSupportFriendPointSvtData_o *pointData,
        System_String_o *questName,
        int32_t friendPoint,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  FriendPointNoticeDialogComponent_o *v13; // x23
  const MethodInfo *v14; // x5
  bool v15; // w0
  Il2CppObject *object; // x20
  Il2CppObject *Component_object; // x20
  const MethodInfo *v18; // x2

  if ( (byte_4B46A68 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_UIFont___, servantInfo);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v10);
    sub_1BDB878(&Method_UnityEngine_Resources_Load_GameObject___, v11);
    this = (FriendPointNoticeDialogComponent_o *)sub_1BDB878(&StringLiteral_6816/*"Fonts/TextAtlas3"*/, v12);
    byte_4B46A68 = 1;
  }
  if ( !servantInfo )
    goto LABEL_16;
  this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)servantInfo,
                                                 0LL);
  if ( !this )
    goto LABEL_16;
  v13 = this;
  if ( !pointData )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v15 = FriendPointNoticeDialogSvtInfo__Set(
          servantInfo,
          pointData->fields.svtId,
          pointData->fields.userSvtId,
          questName,
          friendPoint,
          v14);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v13, v15, 0LL);
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_6816/*"Fonts/TextAtlas3"*/,
             (const MethodInfo_30CD6D0 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)object, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( object )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)object,
                           (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        FriendPointNoticeDialogSvtInfo__SetLabelsBitmapFont(servantInfo, (UIFont_o *)Component_object, v18);
      return;
    }
LABEL_16:
    sub_1BDBAD4(this, servantInfo);
  }
}


void __fastcall FriendPointNoticeDialogComponent___Open_b__49_0(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( this->fields.state == 1 )
    this->fields.state = 0;
}


void __fastcall FriendPointNoticeDialogComponent__add_clickedFunc(
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

  if ( (byte_4B46A63 & 1) == 0 )
  {
    sub_1BDB878(&FriendPointNoticeDialogComponent_CallbackFunc_TypeInfo, value);
    byte_4B46A63 = 1;
  }
  clickedFunc = (System_Delegate_o *)this->fields.clickedFunc;
  p_clickedFunc = &this->fields.clickedFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(clickedFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (FriendPointNoticeDialogComponent_CallbackFunc_c *)v7->klass != FriendPointNoticeDialogComponent_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C15B34(p_clickedFunc, v7, clickedFunc);
    v9 = clickedFunc == (System_Delegate_o *)v8;
    clickedFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BDBD94(v7);
  FriendPointNoticeDialogComponent__remove_clickedFunc(v10, v11, v12);
}


void __fastcall FriendPointNoticeDialogComponent__remove_clickedFunc(
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

  if ( (byte_4B46A64 & 1) == 0 )
  {
    sub_1BDB878(&FriendPointNoticeDialogComponent_CallbackFunc_TypeInfo, value);
    byte_4B46A64 = 1;
  }
  clickedFunc = (System_Delegate_o *)this->fields.clickedFunc;
  p_clickedFunc = &this->fields.clickedFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(clickedFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (FriendPointNoticeDialogComponent_CallbackFunc_c *)v7->klass != FriendPointNoticeDialogComponent_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C15B34(p_clickedFunc, v7, clickedFunc);
    v9 = clickedFunc == (System_Delegate_o *)v8;
    clickedFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BDBD94(v7);
  FriendPointNoticeDialogComponent__CheckSerializeFieldAssertion(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendPointNoticeDialogComponent_CallbackFunc___ctor(
        FriendPointNoticeDialogComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BDB938(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BDBAF0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BDB9A0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A2711C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A270D4;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall FriendPointNoticeDialogComponent_CallbackFunc__BeginInvoke(
        FriendPointNoticeDialogComponent_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4B46A75 & 1) == 0 )
  {
    sub_1BDB878(&FriendPointNoticeDialogComponent_ResultClicked_TypeInfo, *(_QWORD *)&result);
    byte_4B46A75 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(FriendPointNoticeDialogComponent_ResultClicked_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BDB82C(this, v9, callback, object);
}


void __fastcall FriendPointNoticeDialogComponent_CallbackFunc__EndInvoke(
        FriendPointNoticeDialogComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BDB830(result, 0LL, method);
}


void __fastcall FriendPointNoticeDialogComponent_CallbackFunc__Invoke(
        FriendPointNoticeDialogComponent_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall FriendPointNoticeDialogComponent_PositionYData___ctor(
        FriendPointNoticeDialogComponent_PositionYData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B46A76 & 1) == 0 )
  {
    sub_1BDB878(&FriendPointNoticeDialogComponent___c_TypeInfo, v1);
    byte_4B46A76 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(FriendPointNoticeDialogComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FriendPointNoticeDialogComponent___c_TypeInfo->static_fields->__9 = (struct FriendPointNoticeDialogComponent___c_o *)v2;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)FriendPointNoticeDialogComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall FriendPointNoticeDialogComponent___c___ctor(
        FriendPointNoticeDialogComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent___c___Open_b__49_1(
        FriendPointNoticeDialogComponent___c_o *this,
        FriendPointNoticeDialogSvtInfo_o *x,
        const MethodInfo *method)
{
  if ( !x
    || (this = (FriendPointNoticeDialogComponent___c_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)x,
                                                           0LL)) == 0LL )
  {
    sub_1BDBAD4(this, x);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


bool __fastcall FriendPointNoticeDialogComponent___c___SetRecommendedSupportButton_b__58_0(
        FriendPointNoticeDialogComponent___c_o *this,
        RecommendSupportQuestEntity_o *entity,
        const MethodInfo *method)
{
  int32_t questId; // w19

  if ( (byte_4B46A77 & 1) == 0 )
  {
    this = (FriendPointNoticeDialogComponent___c_o *)sub_1BDB878(&CondType_TypeInfo, entity);
    byte_4B46A77 = 1;
  }
  if ( !entity )
    sub_1BDBAD4(this, entity);
  questId = entity->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_39349364(questId, -1, 0, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent___c__DisplayClass56_0___ctor(
        FriendPointNoticeDialogComponent___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent___c__DisplayClass56_0___Close_b__0(
        FriendPointNoticeDialogComponent___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  FriendPointNoticeDialogComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (FriendPointNoticeDialogComponent__Init(_4__this, method), (_4__this = this->fields.__4__this) == 0LL)
    || (_4__this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)_4__this,
                                                           0LL)) == 0LL )
  {
    sub_1BDBAD4(_4__this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}