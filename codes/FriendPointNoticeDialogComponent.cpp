void FriendPointNoticeDialogComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4D2EFED & 1) == 0 )
  {
    sub_1C94098(&FriendPointNoticeDialogComponent_TypeInfo);
    byte_4D2EFED = 1;
  }
  *FriendPointNoticeDialogComponent_TypeInfo->static_fields = (struct FriendPointNoticeDialogComponent_StaticFields)vdup_n_s32(0x442F0000u).n64_u64[0];
}


void FriendPointNoticeDialogComponent___ctor(FriendPointNoticeDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4D2EFEC & 1) == 0 )
  {
    sub_1C94098(&BaseDialog_TypeInfo);
    byte_4D2EFEC = 1;
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

  FriendPointNoticeDialogComponent__Close_46497448(this, 0, v2);
}


void FriendPointNoticeDialogComponent__Close_46497448(
        FriendPointNoticeDialogComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  FriendPointNoticeDialogComponent_o *v20; // x0
  const MethodInfo *v21; // x3
  FriendPointNoticeDialogComponent_o *v22; // x0
  const MethodInfo *v23; // x3
  FriendPointNoticeDialogComponent_o *v24; // x0
  const MethodInfo *v25; // x3
  FriendPointNoticeDialogComponent_o *v26; // x0
  const MethodInfo *v27; // x3
  System_Action_o *v28; // x21

  if ( (byte_4D2EFE4 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_FriendPointNoticeDialogComponent___c__DisplayClass56_0__Close_b__0__);
    sub_1C94098(&FriendPointNoticeDialogComponent___c__DisplayClass56_0_TypeInfo);
    byte_4D2EFE4 = 1;
  }
  v5 = sub_1C942E4(FriendPointNoticeDialogComponent___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  FriendPointNoticeDialogComponent__SetEnableButton(v20, this->fields.decideButtonObject, 0, v21);
  FriendPointNoticeDialogComponent__SetEnableButton(v22, this->fields.friendSupportButtonObject, 0, v23);
  FriendPointNoticeDialogComponent__SetEnableButton(v24, this->fields.recommendedSupportButtonObject, 0, v25);
  FriendPointNoticeDialogComponent__SetEnableButton(v26, this->fields.closeButtonObject, 0, v27);
  AndroidBackKeyManager__RemoveBackBtn(this->fields.closeButtonObject, 0);
  v28 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
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
  if ( (byte_4D2EFE2 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_float__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
    this = (FriendPointNoticeDialogComponent_o *)sub_1C94098(&Method_System_Collections_Generic_List_float__get_Item__);
    byte_4D2EFE2 = 1;
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
    sub_1C942F8(this);
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
          GameObjectExtensions__SetLocalPosition_36798708((UnityEngine_GameObject_o *)this, v21, 0);
          goto LABEL_22;
        }
      }
    }
LABEL_30:
    sub_1C942F0(this, *(_QWORD *)&infoType);
  }
  if ( !v10 )
    goto LABEL_30;
  v22.fields.y = v10->fields.upperLabel;
  v22.fields.x = v12;
  GameObjectExtensions__SetLocalPosition_36798708((UnityEngine_GameObject_o *)this, v22, 0);
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
               (const MethodInfo_38906B8 *)Method_System_Collections_Generic_List_float__get_Item__);
      v16 = v14 / m_CancellationTokenSource ? 24LL : 20LL;
      v17 = *(float *)((char *)&v10->klass + v16);
      v18 = Item;
      v19 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)infoList,
              v14,
              (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
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
  if ( (byte_4D2EFE3 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_float__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
    this = (FriendPointNoticeDialogComponent_o *)sub_1C94098(&Method_System_Collections_Generic_List_float__get_Item__);
    byte_4D2EFE3 = 1;
  }
  layoutXPositionList = v6->fields.layoutXPositionList;
  if ( !layoutXPositionList || !recommendedInfoList )
    goto LABEL_58;
  size = layoutXPositionList->fields._size;
  v9 = (float)size;
  v10 = (float)recommendedInfoList->fields._size;
  if ( !byte_4D265B8 )
  {
    sub_1C94098(&System_Math_TypeInfo);
    byte_4D265B8 = 1;
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
  if ( !byte_4D265B8 )
  {
    sub_1C94098(&System_Math_TypeInfo);
    byte_4D265B8 = 1;
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
      sub_1C942F8(this);
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
  GameObjectExtensions__SetLocalPosition_36798708((UnityEngine_GameObject_o *)this, v39, 0);
  this = (FriendPointNoticeDialogComponent_o *)v6->fields.mostUsedServantTitleLabel;
  if ( !this )
    goto LABEL_58;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v40.fields.y = v20->fields.upperLabel;
  v40.fields.x = v22;
  GameObjectExtensions__SetLocalPosition_36798708(gameObject, v40, 0);
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
               (const MethodInfo_38906B8 *)Method_System_Collections_Generic_List_float__get_Item__);
      if ( v24 / size )
        v26 = 36;
      else
        v26 = 32;
      v27 = *(float *)((char *)&v20->klass + v26);
      v28 = Item;
      v29 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)recommendedInfoList,
              v24,
              (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
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
    sub_1C942F0(this, recommendedInfoList);
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
              (const MethodInfo_38906B8 *)Method_System_Collections_Generic_List_float__get_Item__);
      if ( v31 / size )
        v33 = 24;
      else
        v33 = 20;
      v34 = *(float *)((char *)&v20->klass + v33);
      v35 = v32;
      v36 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)mostUsedInfoList,
              v31,
              (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct FriendPointNoticeDialogComponent_CallbackFunc_o *clickedFunc; // x8
  GrandQuestFolderBoardItem_o *p_clickedFunc; // x19

  clickedFunc = this->fields.clickedFunc;
  p_clickedFunc = (GrandQuestFolderBoardItem_o *)&this->fields.clickedFunc;
  if ( clickedFunc )
    ((void (__fastcall *)(intptr_t, int32_t, intptr_t))clickedFunc->fields.invoke_impl)(
      clickedFunc->fields.method_code,
      result,
      clickedFunc->fields.method);
  p_clickedFunc->klass = 0;
  sub_1C9403C(p_clickedFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
}


void FriendPointNoticeDialogComponent__Init(FriendPointNoticeDialogComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4D2EFDE & 1) == 0 )
  {
    sub_1C94098(&string_TypeInfo);
    byte_4D2EFDE = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C942F0(titleLabel, method);
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

  if ( (byte_4D2EFEB & 1) == 0 )
  {
    sub_1C94098(&Method_FriendPointNoticeDialogComponent_OnClickCancel__);
    byte_4D2EFEB = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickCancel__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C940B0(Method_FriendPointNoticeDialogComponent_OnClickCancel__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  FriendPointNoticeDialogComponent__ExecClickedFunc(this, 3, v5);
}


void FriendPointNoticeDialogComponent__OnClickRecommendedSupportDisableMask(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4D2EFE7 & 1) == 0 )
  {
    sub_1C94098(&Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__);
    byte_4D2EFE7 = 1;
  }
  v2 = Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C940B0(Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C9407C(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 1, 0, 0);
}


void FriendPointNoticeDialogComponent__OnClickToFriedPointSummon(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4D2EFE8 & 1) == 0 )
  {
    sub_1C94098(&Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__);
    byte_4D2EFE8 = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C940B0(Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
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

  if ( (byte_4D2EFEA & 1) == 0 )
  {
    sub_1C94098(&Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__);
    byte_4D2EFEA = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C940B0(Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
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

  if ( (byte_4D2EFE9 & 1) == 0 )
  {
    sub_1C94098(&Method_FriendPointNoticeDialogComponent_OnClickToSupport__);
    byte_4D2EFE9 = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickToSupport__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickToSupport__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C940B0(Method_FriendPointNoticeDialogComponent_OnClickToSupport__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  UILabel_o *titleLabel; // x21
  int32_t addFriendPoint; // w8
  _BOOL4 v17; // w20
  struct UILabel_o *addedPointLabel; // x21
  System_String_o *mText; // x22
  System_String_o *v20; // x23
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  struct UILabel_o *v24; // x21
  System_String_o *v25; // x0
  struct UILabel_o *v26; // x21
  System_String_o *v27; // x22
  System_String_o *v28; // x23
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  UILabel_o *v32; // x21
  UILabel_o *addedRecommendedPointLabel; // x21
  System_String_o *v34; // x22
  Il2CppObject *v35; // x0
  UILabel_o *v36; // x21
  UnityEngine_GameObject_o *v37; // x0
  System_Collections_Generic_List_object__o *v38; // x21
  System_Collections_Generic_List_object__o *v39; // x25
  UILabel_o *usedRecommendedServantTitleLabel; // x23
  struct CommonUI_LoginResultRecommendSupportFriendPointSvtData_array *addRecommendSupportFriendPointSvtList; // x29
  struct FriendPointNoticeDialogSvtInfo_array *recommendedSupportServantInfoList; // x28
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v44; // x23
  unsigned int v45; // w26
  unsigned __int64 v46; // x27
  unsigned int v47; // w8
  CommonUI_LoginResultRecommendSupportFriendPointSvtData_o *v48; // x24
  System_String_o *monitor; // x25
  const MethodInfo *v50; // x5
  struct FriendPointNoticeDialogSvtInfo_array *v51; // x8
  struct FriendPointNoticeDialogSvtInfo_array *v52; // x8
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  struct FriendPointNoticeDialogSvtInfo_array *v59; // x8
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  Il2CppClass **v63; // x0
  System_Collections_Generic_IEnumerable_T__o *v64; // x23
  FriendPointNoticeDialogComponent___c_c *v65; // x0
  System_Action_object__o *_9__49_1; // x24
  Il2CppObject *v67; // x25
  struct FriendPointNoticeDialogComponent___c_StaticFields *static_fields; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  UILabel_o *mostUsedServantTitleLabel; // x23
  CommonUI_LoginResultFriendPointSvtData_o *topAddFriendPointSvt; // x23
  FriendPointNoticeDialogSvtInfo_o *normalSupportServantInfo; // x24
  const MethodInfo *v78; // x5
  struct CommonUI_LoginResultFriendPointSvtData_o *v79; // x8
  CommonUI_LoginResultFriendPointSvtData_o *topAddFriendPointSvtEQ; // x23
  FriendPointNoticeDialogSvtInfo_o *eventSupportServantInfo; // x24
  const MethodInfo *v82; // x5
  struct CommonUI_LoginResultFriendPointSvtData_o *v83; // x8
  CommonUI_LoginResultFriendPointSvtData_o *topAddFriendPointSvtGrand; // x23
  FriendPointNoticeDialogSvtInfo_o *grandSupportServantInfo; // x24
  const MethodInfo *v86; // x5
  struct CommonUI_LoginResultFriendPointSvtData_o *v87; // x8
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7
  struct System_Object_array *v94; // x8
  _QWORD *v95; // x9
  __int64 v96; // x10
  Il2CppClass **v97; // x0
  int32_t v98; // w2
  int32_t v99; // w3
  System_String_o *v100; // x4
  int32_t v101; // w5
  int64_t v102; // x6
  System_String_o *v103; // x7
  struct System_Object_array *v104; // x8
  _QWORD *v105; // x9
  __int64 v106; // x10
  Il2CppClass **v107; // x0
  int32_t v108; // w2
  int32_t v109; // w3
  System_String_o *v110; // x4
  int32_t v111; // w5
  int64_t v112; // x6
  System_String_o *v113; // x7
  struct System_Object_array *v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  Il2CppClass **v117; // x0
  const MethodInfo *v118; // x3
  int v119; // w8
  FriendPointNoticeDialogComponent_o *v120; // x0
  int32_t v121; // w1
  System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__o *v122; // x2
  UILabel_o *noDataLabel; // x20
  Il2CppObject *Master_object; // x20
  FriendPointNoticeDialogSvtInfo_o *v125; // x20
  int32_t m_CancellationTokenSource; // w21
  BalanceConfig_c *v127; // x0
  UILabel_o *friendPointMaxLabel; // x21
  UnityEngine_GameObject_o *v129; // x0
  UILabel_o *currentFriendPointLabel; // x21
  System_String_o *v131; // x22
  Il2CppObject *v132; // x0
  UILabel_o *v133; // x20
  UILabel_o *closeButtonLabel; // x20
  UILabel_o *friendSupportButtonLabel; // x20
  const MethodInfo *v136; // x1
  UILabel_o *decideButtonLabel; // x20
  System_Action_o *v138; // x20
  System_Collections_Generic_List_object__o *v139; // [xsp+0h] [xbp-80h]
  CommonUI_LoginResultData_o *v140; // [xsp+8h] [xbp-78h]
  int32_t addFollowFriendPoint; // [xsp+14h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4D2EFDF & 1) == 0 )
  {
    sub_1C94098(&System_Action_FriendPointNoticeDialogSvtInfo__TypeInfo);
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_BasicHelper_ForEach_FriendPointNoticeDialogSvtInfo___);
    sub_1C94098(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_TblUserMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C94098(&Method_FriendPointNoticeDialogComponent__Open_b__49_0__);
    sub_1C94098(&FriendPointNoticeDialogComponent_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Count__);
    sub_1C94098(&System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_FriendPointNoticeDialogComponent___c__Open_b__49_1__);
    sub_1C94098(&FriendPointNoticeDialogComponent___c_TypeInfo);
    sub_1C94098(&StringLiteral_6958/*"GET_FRIEND_POINT_FP_RECOMMENDED"*/);
    sub_1C94098(&StringLiteral_6965/*"GET_FRIEND_POINT_SERVANT_TITLE"*/);
    sub_1C94098(&StringLiteral_6961/*"GET_FRIEND_POINT_NO_DATA"*/);
    sub_1C94098(&StringLiteral_6960/*"GET_FRIEND_POINT_NOW_POINT"*/);
    sub_1C94098(&StringLiteral_6967/*"GET_FRIEND_POINT_SUPPORT_BTN"*/);
    sub_1C94098(&StringLiteral_114/*"  "*/);
    sub_1C94098(&StringLiteral_6957/*"GET_FRIEND_POINT_FP_NORMAL"*/);
    sub_1C94098(&StringLiteral_3690/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C94098(&StringLiteral_6956/*"GET_FRIEND_POINT_FP_FOLLOW"*/);
    sub_1C94098(&StringLiteral_6953/*"GET_FRIEND_POINT_CAPTION_GRAND"*/);
    sub_1C94098(&StringLiteral_6966/*"GET_FRIEND_POINT_SERVANT_USED_RECOMMENDED_TITLE"*/);
    sub_1C94098(&StringLiteral_6952/*"GET_FRIEND_POINT_CAPTION_EVENT"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_6959/*"GET_FRIEND_POINT_GACHA_BTN"*/);
    sub_1C94098(&StringLiteral_6968/*"GET_FRIEND_POINT_TITLE"*/);
    sub_1C94098(&StringLiteral_6951/*"GET_FRIEND_POINT_AT_LIMIT"*/);
    sub_1C94098(&StringLiteral_6954/*"GET_FRIEND_POINT_CAPTION_NORMAL"*/);
    byte_4D2EFDF = 1;
  }
  entity = 0;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
  if ( !gameObject )
    goto LABEL_188;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  this->fields.clickedFunc = clickedAction;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.clickedFunc,
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
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6968/*"GET_FRIEND_POINT_TITLE"*/, 0);
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
  v17 = addFriendPoint < 1;
  if ( addFriendPoint >= 1 )
  {
    addedPointLabel = this->fields.addedPointLabel;
    if ( !addedPointLabel )
      goto LABEL_188;
    mText = addedPointLabel->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_6957/*"GET_FRIEND_POINT_FP_NORMAL"*/, 0);
    addFollowFriendPoint = loginResultData->fields.addFriendPoint;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint);
    v22 = System_String__Format(v20, v21, 0);
    v23 = System_String__Concat_64417744(mText, v22, 0);
    UILabel__set_text(addedPointLabel, v23, 0);
  }
  if ( loginResultData->fields.addFollowFriendPoint >= 1 )
  {
    if ( loginResultData->fields.addFriendPoint >= 1 )
    {
      v24 = this->fields.addedPointLabel;
      if ( !v24 )
        goto LABEL_188;
      v25 = System_String__Concat_64417744(v24->fields.mText, (System_String_o *)StringLiteral_114/*"  "*/, 0);
      UILabel__set_text(v24, v25, 0);
    }
    v26 = this->fields.addedPointLabel;
    if ( !v26 )
      goto LABEL_188;
    v27 = v26->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_6956/*"GET_FRIEND_POINT_FP_FOLLOW"*/, 0);
    addFollowFriendPoint = loginResultData->fields.addFollowFriendPoint;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint);
    v30 = System_String__Format(v28, v29, 0);
    v31 = System_String__Concat_64417744(v27, v30, 0);
    UILabel__set_text(v26, v31, 0);
    v17 = 0;
  }
  v32 = this->fields.addedPointLabel;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)FriendPointNoticeDialogComponent_TypeInfo;
  if ( !FriendPointNoticeDialogComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent_TypeInfo);
  if ( !v32 )
    goto LABEL_188;
  UILabel__SetCondensedScale_50219732(
    v32,
    FriendPointNoticeDialogComponent_TypeInfo->static_fields->ADD_POINT_LABEL_MAX_WIDTH,
    0.0,
    0);
  if ( loginResultData->fields.addRecommendSupportFriendPoint < 1 )
  {
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.addedPointLabel;
    if ( !gameObject )
      goto LABEL_188;
LABEL_38:
    v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionY(v37, this->fields.addedPointLabelCenterPosY, 0);
    goto LABEL_39;
  }
  addedRecommendedPointLabel = this->fields.addedRecommendedPointLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_6958/*"GET_FRIEND_POINT_FP_RECOMMENDED"*/, 0);
  addFollowFriendPoint = loginResultData->fields.addRecommendSupportFriendPoint;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_String__Format(v34, v35, 0);
  if ( !addedRecommendedPointLabel )
    goto LABEL_188;
  UILabel__set_text(addedRecommendedPointLabel, (System_String_o *)gameObject, 0);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)FriendPointNoticeDialogComponent_TypeInfo;
  v36 = this->fields.addedRecommendedPointLabel;
  if ( !FriendPointNoticeDialogComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent_TypeInfo);
  if ( !v36 )
    goto LABEL_188;
  UILabel__SetCondensedScale_50219732(
    v36,
    FriendPointNoticeDialogComponent_TypeInfo->static_fields->ADD_POINT_LABEL_MAX_WIDTH,
    0.0,
    0);
  if ( v17 )
  {
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.addedRecommendedPointLabel;
    if ( !gameObject )
      goto LABEL_188;
    goto LABEL_38;
  }
LABEL_39:
  v38 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo___ctor__);
  v39 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo___ctor__);
  usedRecommendedServantTitleLabel = this->fields.usedRecommendedServantTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6966/*"GET_FRIEND_POINT_SERVANT_USED_RECOMMENDED_TITLE"*/, 0);
  if ( !usedRecommendedServantTitleLabel )
    goto LABEL_188;
  UILabel__set_text(usedRecommendedServantTitleLabel, (System_String_o *)gameObject, 0);
  addRecommendSupportFriendPointSvtList = loginResultData->fields.addRecommendSupportFriendPointSvtList;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_QuestMaster___);
  v139 = v39;
  v140 = loginResultData;
  if ( addRecommendSupportFriendPointSvtList && addRecommendSupportFriendPointSvtList->max_length )
  {
    recommendedSupportServantInfoList = this->fields.recommendedSupportServantInfoList;
    if ( !recommendedSupportServantInfoList )
      goto LABEL_188;
    max_length = recommendedSupportServantInfoList->max_length;
    if ( (int)max_length >= 1 )
    {
      v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
      v45 = 0;
      v46 = 0;
      while ( v46 < (unsigned int)max_length )
      {
        v47 = addRecommendSupportFriendPointSvtList->max_length;
        if ( (int)v45 >= (int)v47 )
        {
          gameObject = recommendedSupportServantInfoList->m_Items[v46];
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
          if ( v45 >= v47 )
            break;
          v48 = addRecommendSupportFriendPointSvtList->m_Items[v45];
          if ( !v48 || !v44 )
            goto LABEL_188;
          monitor = (System_String_o *)StringLiteral_1/*""*/;
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                             v44,
                                                             &entity,
                                                             v48->fields.questId,
                                                             (const MethodInfo_345B50C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_188;
            monitor = (System_String_o *)entity[1].monitor;
          }
          v51 = this->fields.recommendedSupportServantInfoList;
          if ( !v51 )
            goto LABEL_188;
          if ( v45 >= LODWORD(v51->max_length) )
            break;
          FriendPointNoticeDialogComponent__SetupServantInfo_46492464(
            (FriendPointNoticeDialogComponent_o *)gameObject,
            v51->m_Items[v45],
            v48,
            monitor,
            v48->fields.friendPoint,
            v50);
          v52 = this->fields.recommendedSupportServantInfoList;
          if ( !v52 )
            goto LABEL_188;
          if ( v45 >= LODWORD(v52->max_length) )
            break;
          gameObject = v52->m_Items[v45];
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
            v59 = this->fields.recommendedSupportServantInfoList;
            if ( !v59 )
              goto LABEL_188;
            if ( v45 >= LODWORD(v59->max_length) )
              break;
            if ( !v38 )
              goto LABEL_188;
            v8 = (Il2CppObject *)v59->m_Items[v45];
            items = v38->fields._items;
            v61 = Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__;
            ++v38->fields._version;
            if ( !items )
              goto LABEL_188;
            size = v38->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v38,
                v8,
                *(const MethodInfo_386AE34 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
            }
            else
            {
              v63 = &items->obj.klass + size;
              v38->fields._size = size + 1;
              v63[4] = (Il2CppClass *)v8;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v63 + 4), (int32_t)v8, v53, v54, v55, v56, v57, v58);
            }
          }
          ++v45;
        }
        LODWORD(max_length) = recommendedSupportServantInfoList->max_length;
        if ( (__int64)++v46 >= (int)max_length )
          goto LABEL_84;
      }
      sub_1C942F8(gameObject);
    }
  }
  else
  {
    v64 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.recommendedSupportServantInfoList;
    v65 = FriendPointNoticeDialogComponent___c_TypeInfo;
    if ( !FriendPointNoticeDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent___c_TypeInfo);
      v65 = FriendPointNoticeDialogComponent___c_TypeInfo;
    }
    _9__49_1 = (System_Action_object__o *)v65->static_fields->__9__49_1;
    if ( !_9__49_1 )
    {
      if ( !v65->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v65);
        v65 = FriendPointNoticeDialogComponent___c_TypeInfo;
      }
      v67 = (Il2CppObject *)v65->static_fields->__9;
      _9__49_1 = (System_Action_object__o *)sub_1C942E4(System_Action_FriendPointNoticeDialogSvtInfo__TypeInfo);
      System_Action_object____ctor(_9__49_1, v67, Method_FriendPointNoticeDialogComponent___c__Open_b__49_1__, 0);
      static_fields = FriendPointNoticeDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__49_1 = (struct System_Action_FriendPointNoticeDialogSvtInfo__o *)_9__49_1;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__49_1,
        (int32_t)_9__49_1,
        v69,
        v70,
        v71,
        v72,
        v73,
        v74);
    }
    BasicHelper__ForEach_object_(
      v64,
      (System_Action_T__o *)_9__49_1,
      (const MethodInfo_3188088 *)Method_BasicHelper_ForEach_FriendPointNoticeDialogSvtInfo___);
  }
LABEL_84:
  mostUsedServantTitleLabel = this->fields.mostUsedServantTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6965/*"GET_FRIEND_POINT_SERVANT_TITLE"*/, 0);
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
  topAddFriendPointSvt = v140->fields.topAddFriendPointSvt;
  if ( topAddFriendPointSvt )
  {
    normalSupportServantInfo = this->fields.normalSupportServantInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6954/*"GET_FRIEND_POINT_CAPTION_NORMAL"*/, 0);
    v79 = v140->fields.topAddFriendPointSvt;
    if ( !v79 )
      goto LABEL_188;
    FriendPointNoticeDialogComponent__SetupServantInfo(
      (FriendPointNoticeDialogComponent_o *)gameObject,
      normalSupportServantInfo,
      topAddFriendPointSvt,
      (System_String_o *)gameObject,
      v79->fields.friendPoint,
      v78);
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
  topAddFriendPointSvtEQ = v140->fields.topAddFriendPointSvtEQ;
  if ( topAddFriendPointSvtEQ )
  {
    eventSupportServantInfo = this->fields.eventSupportServantInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6952/*"GET_FRIEND_POINT_CAPTION_EVENT"*/, 0);
    v83 = v140->fields.topAddFriendPointSvtEQ;
    if ( !v83 )
      goto LABEL_188;
    FriendPointNoticeDialogComponent__SetupServantInfo(
      (FriendPointNoticeDialogComponent_o *)gameObject,
      eventSupportServantInfo,
      topAddFriendPointSvtEQ,
      (System_String_o *)gameObject,
      v83->fields.friendPoint,
      v82);
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
  topAddFriendPointSvtGrand = v140->fields.topAddFriendPointSvtGrand;
  if ( topAddFriendPointSvtGrand )
  {
    grandSupportServantInfo = this->fields.grandSupportServantInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6953/*"GET_FRIEND_POINT_CAPTION_GRAND"*/, 0);
    v87 = v140->fields.topAddFriendPointSvtGrand;
    if ( !v87 )
      goto LABEL_188;
    FriendPointNoticeDialogComponent__SetupServantInfo(
      (FriendPointNoticeDialogComponent_o *)gameObject,
      grandSupportServantInfo,
      topAddFriendPointSvtGrand,
      (System_String_o *)gameObject,
      v87->fields.friendPoint,
      v86);
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
    if ( !v139 )
      goto LABEL_188;
    v8 = (Il2CppObject *)this->fields.normalSupportServantInfo;
    v94 = v139->fields._items;
    v95 = Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__;
    ++v139->fields._version;
    if ( !v94 )
      goto LABEL_188;
    v96 = v139->fields._size;
    if ( (unsigned int)v96 >= LODWORD(v94->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v139,
        v8,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
    }
    else
    {
      v97 = &v94->obj.klass + v96;
      v139->fields._size = v96 + 1;
      v97[4] = (Il2CppClass *)v8;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v97 + 4), (int32_t)v8, v88, v89, v90, v91, v92, v93);
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
    if ( !v139 )
      goto LABEL_188;
    v8 = (Il2CppObject *)this->fields.eventSupportServantInfo;
    v104 = v139->fields._items;
    v105 = Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__;
    ++v139->fields._version;
    if ( !v104 )
      goto LABEL_188;
    v106 = v139->fields._size;
    if ( (unsigned int)v106 >= LODWORD(v104->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v139,
        v8,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
    }
    else
    {
      v107 = &v104->obj.klass + v106;
      v139->fields._size = v106 + 1;
      v107[4] = (Il2CppClass *)v8;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v107 + 4), (int32_t)v8, v98, v99, v100, v101, v102, v103);
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
    if ( !v139 )
      goto LABEL_188;
    v8 = (Il2CppObject *)this->fields.grandSupportServantInfo;
    v114 = v139->fields._items;
    v115 = Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__;
    ++v139->fields._version;
    if ( !v114 )
      goto LABEL_188;
    v116 = v139->fields._size;
    if ( (unsigned int)v116 >= LODWORD(v114->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v139,
        v8,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
    }
    else
    {
      v117 = &v114->obj.klass + v116;
      v139->fields._size = v116 + 1;
      v117[4] = (Il2CppClass *)v8;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v117 + 4), (int32_t)v8, v108, v109, v110, v111, v112, v113);
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
  if ( !v38 || !v139 )
    goto LABEL_188;
  v119 = v139->fields._size;
  if ( v38->fields._size >= 1 )
  {
    if ( v119 > 0 )
    {
      FriendPointNoticeDialogComponent__Display2TypeInfo(
        this,
        (System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__o *)v38,
        (System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__o *)v139,
        v118);
      goto LABEL_157;
    }
    v121 = 1;
    v120 = this;
    v122 = (System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__o *)v38;
    goto LABEL_143;
  }
  if ( v119 > 0 )
  {
    v120 = this;
    v121 = 0;
    v122 = (System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__o *)v139;
LABEL_143:
    FriendPointNoticeDialogComponent__Display1TypeInfo(v120, v121, v122, v118);
    goto LABEL_157;
  }
  if ( v140->fields.addFriendPoint > 0
    || v140->fields.addFollowFriendPoint > 0
    || v140->fields.addRecommendSupportFriendPoint >= 1 )
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
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6961/*"GET_FRIEND_POINT_NO_DATA"*/, 0);
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_TblUserMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2633A )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2633A = 1;
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
  v125 = gameObject;
  m_CancellationTokenSource = (int32_t)gameObject->fields.m_CancellationTokenSource;
  v127 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v127 = BalanceConfig_TypeInfo;
  }
  if ( m_CancellationTokenSource >= v127->static_fields->FriendPointMax )
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
                                                           (System_String_o *)StringLiteral_6951/*"GET_FRIEND_POINT_AT_LIMIT"*/,
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
              v129 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
              GameObjectExtensions__SetLocalPositionY(v129, this->fields.currentFpLabelYMaxFp, 0);
              GameObjectExtensions__SetLocalPositionY(this->fields.buttonParentObject, this->fields.buttonPosYMaxFp, 0);
              goto LABEL_178;
            }
          }
        }
      }
    }
LABEL_188:
    sub_1C942F0(gameObject, v8);
  }
LABEL_178:
  currentFriendPointLabel = this->fields.currentFriendPointLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v131 = LocalizationManager__Get((System_String_o *)StringLiteral_6960/*"GET_FRIEND_POINT_NOW_POINT"*/, 0);
  addFollowFriendPoint = (int32_t)v125->fields.m_CancellationTokenSource;
  v132 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_String__Format(v131, v132, 0);
  if ( !currentFriendPointLabel )
    goto LABEL_188;
  UILabel__set_text(currentFriendPointLabel, (System_String_o *)gameObject, 0);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)FriendPointNoticeDialogComponent_TypeInfo;
  v133 = this->fields.currentFriendPointLabel;
  if ( !FriendPointNoticeDialogComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent_TypeInfo);
  if ( !v133 )
    goto LABEL_188;
  UILabel__SetCondensedScale_50219732(
    v133,
    FriendPointNoticeDialogComponent_TypeInfo->static_fields->CURRENT_FRIEND_POINT_LABEL_MAX_WIDTH,
    0.0,
    0);
  closeButtonLabel = this->fields.closeButtonLabel;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeButtonLabel )
    goto LABEL_188;
  UILabel__set_text(closeButtonLabel, (System_String_o *)gameObject, 0);
  friendSupportButtonLabel = this->fields.friendSupportButtonLabel;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6967/*"GET_FRIEND_POINT_SUPPORT_BTN"*/, 0);
  if ( !friendSupportButtonLabel )
    goto LABEL_188;
  UILabel__set_text(friendSupportButtonLabel, (System_String_o *)gameObject, 0);
  FriendPointNoticeDialogComponent__SetRecommendedSupportButton(this, v136);
  decideButtonLabel = this->fields.decideButtonLabel;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6959/*"GET_FRIEND_POINT_GACHA_BTN"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_188;
  UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0);
  AndroidBackKeyManager__AddBackBtn(this->fields.closeButtonObject, 0);
  v138 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v138, (Il2CppObject *)this, Method_FriendPointNoticeDialogComponent__Open_b__49_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v138, 0, 0, 0);
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

  if ( (byte_4D2EFE5 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    this = (FriendPointNoticeDialogComponent_o *)sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2EFE5 = 1;
  }
  if ( !buttonObj )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       buttonObj,
                       (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
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
    sub_1C942F0(this, buttonObj);
  }
}


void FriendPointNoticeDialogComponent__SetRecommendedSupportButton(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *recommendedSupportButtonLabel; // x20
  System_String_o *Master_object; // x0
  __int64 v5; // x1
  RecommendSupportQuestEntity_array *List; // x0
  FriendPointNoticeDialogComponent___c_c *v7; // x8
  System_Object_array *v8; // x20
  System_Func_object__bool__o *_9__58_0; // x21
  Il2CppObject *v10; // x22
  struct FriendPointNoticeDialogComponent___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  bool v18; // w0
  UILabel_o *recommendedSupportButtonLabelForMask; // x21
  bool v20; // w20
  FriendPointNoticeDialogComponent_o *v21; // x0
  const MethodInfo *v22; // x3

  if ( (byte_4D2EFE6 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_RecommendSupportQuestEntity___);
    sub_1C94098(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&System_Func_RecommendSupportQuestEntity__bool__TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_FriendPointNoticeDialogComponent___c__SetRecommendedSupportButton_b__58_0__);
    sub_1C94098(&FriendPointNoticeDialogComponent___c_TypeInfo);
    sub_1C94098(&StringLiteral_6962/*"GET_FRIEND_POINT_RECOMMENDED_BTN"*/);
    byte_4D2EFE6 = 1;
  }
  recommendedSupportButtonLabel = this->fields.recommendedSupportButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_6962/*"GET_FRIEND_POINT_RECOMMENDED_BTN"*/, 0);
  if ( !recommendedSupportButtonLabel )
    goto LABEL_20;
  UILabel__set_text(recommendedSupportButtonLabel, Master_object, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
  if ( !Master_object )
    goto LABEL_20;
  List = RecommendSupportQuestMaster__GetList((RecommendSupportQuestMaster_o *)Master_object, 0);
  v7 = FriendPointNoticeDialogComponent___c_TypeInfo;
  v8 = (System_Object_array *)List;
  if ( !FriendPointNoticeDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent___c_TypeInfo);
    v7 = FriendPointNoticeDialogComponent___c_TypeInfo;
  }
  _9__58_0 = (System_Func_object__bool__o *)v7->static_fields->__9__58_0;
  if ( !_9__58_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = FriendPointNoticeDialogComponent___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__58_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_RecommendSupportQuestEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__58_0,
      v10,
      Method_FriendPointNoticeDialogComponent___c__SetRecommendedSupportButton_b__58_0__,
      0);
    static_fields = FriendPointNoticeDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__58_0 = (struct System_Func_RecommendSupportQuestEntity__bool__o *)_9__58_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__58_0,
      (int32_t)_9__58_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = BasicHelper__Any_object__51926292(
          v8,
          (System_Func_T__bool__o *)_9__58_0,
          (const MethodInfo_3185514 *)Method_BasicHelper_Any_RecommendSupportQuestEntity___);
  recommendedSupportButtonLabelForMask = this->fields.recommendedSupportButtonLabelForMask;
  v20 = v18;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_6962/*"GET_FRIEND_POINT_RECOMMENDED_BTN"*/, 0);
  if ( !recommendedSupportButtonLabelForMask
    || (UILabel__set_text(recommendedSupportButtonLabelForMask, Master_object, 0),
        FriendPointNoticeDialogComponent__SetEnableButton(v21, this->fields.recommendedSupportButtonObject, v20, v22),
        (Master_object = (System_String_o *)this->fields.recommendedSupportButtonMaskTextObject) == 0) )
  {
LABEL_20:
    sub_1C942F0(Master_object, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, !v20, 0);
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
  Il2CppObject *object; // x20
  Il2CppObject *Component_object; // x20
  const MethodInfo *v15; // x2

  if ( (byte_4D2EFE0 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UIFont___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Resources_Load_GameObject___);
    this = (FriendPointNoticeDialogComponent_o *)sub_1C94098(&StringLiteral_6815/*"Fonts/TextAtlas3"*/);
    byte_4D2EFE0 = 1;
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
  v12 = FriendPointNoticeDialogSvtInfo__Set(
          servantInfo,
          pointData->fields.svtId,
          pointData->fields.userSvtId,
          questName,
          friendPoint,
          v11);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v10, v12, 0);
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_6815/*"Fonts/TextAtlas3"*/,
             (const MethodInfo_3239828 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)object, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( object )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)object,
                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
        FriendPointNoticeDialogSvtInfo__SetLabelsBitmapFont(servantInfo, (UIFont_o *)Component_object, v15);
      return;
    }
LABEL_16:
    sub_1C942F0(this, servantInfo);
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
    sub_1C942F0(this, 0);
  y = position.fields.y;
  x = position.fields.x;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantInfo, 0);
  v11.fields.x = x;
  v11.fields.y = y;
  GameObjectExtensions__SetLocalPosition_36798708(gameObject, v11, 0);
  FriendPointNoticeDialogSvtInfo__SetLabelsCondensedScale(servantInfo, this->fields.servantNameLabelMaxWidth, v9);
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantInfo, 0);
  GameObjectExtensions__ResetLocalScale(v10, 0);
}


void FriendPointNoticeDialogComponent__SetupServantInfo_46492464(
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
  Il2CppObject *object; // x20
  Il2CppObject *Component_object; // x20
  const MethodInfo *v15; // x2

  if ( (byte_4D2EFE1 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UIFont___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Resources_Load_GameObject___);
    this = (FriendPointNoticeDialogComponent_o *)sub_1C94098(&StringLiteral_6815/*"Fonts/TextAtlas3"*/);
    byte_4D2EFE1 = 1;
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
  v12 = FriendPointNoticeDialogSvtInfo__Set(
          servantInfo,
          pointData->fields.svtId,
          pointData->fields.userSvtId,
          questName,
          friendPoint,
          v11);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v10, v12, 0);
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_6815/*"Fonts/TextAtlas3"*/,
             (const MethodInfo_3239828 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)object, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( object )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)object,
                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UIFont___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
        FriendPointNoticeDialogSvtInfo__SetLabelsBitmapFont(servantInfo, (UIFont_o *)Component_object, v15);
      return;
    }
LABEL_16:
    sub_1C942F0(this, servantInfo);
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

  if ( (byte_4D2EFDC & 1) == 0 )
  {
    sub_1C94098(&FriendPointNoticeDialogComponent_CallbackFunc_TypeInfo);
    byte_4D2EFDC = 1;
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
    v8 = sub_1CEFE6C(p_clickedFunc, v7, clickedFunc);
    v9 = clickedFunc == (System_Delegate_o *)v8;
    clickedFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C9468C(v7);
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

  if ( (byte_4D2EFDD & 1) == 0 )
  {
    sub_1C94098(&FriendPointNoticeDialogComponent_CallbackFunc_TypeInfo);
    byte_4D2EFDD = 1;
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
    v8 = sub_1CEFE6C(p_clickedFunc, v7, clickedFunc);
    v9 = clickedFunc == (System_Delegate_o *)v8;
    clickedFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C9468C(v7);
  FriendPointNoticeDialogComponent__CheckSerializeFieldAssertion(v10, v11);
}


void FriendPointNoticeDialogComponent_CallbackFunc___ctor(
        FriendPointNoticeDialogComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1ACADF0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1ACADA8;
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
  if ( (byte_4D2EFEE & 1) == 0 )
  {
    sub_1C94098(&FriendPointNoticeDialogComponent_ResultClicked_TypeInfo);
    byte_4D2EFEE = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(FriendPointNoticeDialogComponent_ResultClicked_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v9, callback, object);
}


void FriendPointNoticeDialogComponent_CallbackFunc__EndInvoke(
        FriendPointNoticeDialogComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2EFEF & 1) == 0 )
  {
    sub_1C94098(&FriendPointNoticeDialogComponent___c_TypeInfo);
    byte_4D2EFEF = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(FriendPointNoticeDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FriendPointNoticeDialogComponent___c_TypeInfo->static_fields->__9 = (struct FriendPointNoticeDialogComponent___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)FriendPointNoticeDialogComponent___c_TypeInfo->static_fields,
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
    sub_1C942F0(this, x);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


bool FriendPointNoticeDialogComponent___c___SetRecommendedSupportButton_b__58_0(
        FriendPointNoticeDialogComponent___c_o *this,
        RecommendSupportQuestEntity_o *entity,
        const MethodInfo *method)
{
  int32_t questId; // w19

  if ( (byte_4D2EFF0 & 1) == 0 )
  {
    this = (FriendPointNoticeDialogComponent___c_o *)sub_1C94098(&CondType_TypeInfo);
    byte_4D2EFF0 = 1;
  }
  if ( !entity )
    sub_1C942F0(this, entity);
  questId = entity->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_41072884(questId, -1, 0, 0);
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
    sub_1C942F0(_4__this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}