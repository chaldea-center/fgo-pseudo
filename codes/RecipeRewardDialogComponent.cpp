void __fastcall RecipeRewardDialogComponent___ctor(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct UnityEngine_Color_array *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4186134 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Color___TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    byte_4186134 = 1;
  }
  this->fields.iconScale = 0.85;
  v6 = (struct UnityEngine_Color_array *)sub_B2C374(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.viewChangeButtonLabelEffectColors,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.teaEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.teaEffectObjList,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  *(_QWORD *)&this->fields.itemDispTime = 0xC3A83126FLL;
  *(_QWORD *)&this->fields.scrollWait = 0x3D8F5C293EB33333LL;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall RecipeRewardDialogComponent__CheckIsSerializeFieldNotNull(
        RecipeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecipeRewardDialogComponent__ClickSkip(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_GameObject__o *teaEffectObjList; // x19
  RecipeRewardDialogComponent___c_c *v8; // x0
  struct RecipeRewardDialogComponent___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__47_0; // x20
  Il2CppObject *v11; // x21
  struct RecipeRewardDialogComponent___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_418612F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_GameObject___ctor__, method);
    sub_B2C35C(&System_Action_GameObject__TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__ForEach__, v4);
    sub_B2C35C(&Method_RecipeRewardDialogComponent___c__ClickSkip_b__47_0__, v5);
    sub_B2C35C(&RecipeRewardDialogComponent___c_TypeInfo, v6);
    byte_418612F = 1;
  }
  if ( !this->fields.isSkip && this->fields.canSkip )
  {
    this->fields.isSkip = 1;
    teaEffectObjList = this->fields.teaEffectObjList;
    v8 = RecipeRewardDialogComponent___c_TypeInfo;
    if ( (BYTE3(RecipeRewardDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RecipeRewardDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecipeRewardDialogComponent___c_TypeInfo);
      v8 = RecipeRewardDialogComponent___c_TypeInfo;
    }
    static_fields = v8->static_fields;
    _9__47_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__47_0;
    if ( !_9__47_0 )
    {
      if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        static_fields = RecipeRewardDialogComponent___c_TypeInfo->static_fields;
      }
      v11 = (Il2CppObject *)static_fields->__9;
      _9__47_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_GameObject__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__47_0,
        v11,
        Method_RecipeRewardDialogComponent___c__ClickSkip_b__47_0__,
        (const MethodInfo_24BBAD8 *)Method_System_Action_GameObject___ctor__);
      v12 = RecipeRewardDialogComponent___c_TypeInfo->static_fields;
      v12->__9__47_0 = (struct System_Action_GameObject__o *)_9__47_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v12->__9__47_0,
        (System_Int32_array **)_9__47_0,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
    }
    if ( !teaEffectObjList )
      sub_B2C434(v8, method);
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)teaEffectObjList,
      (System_Action_T__o *)_9__47_0,
      (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
  }
}


void __fastcall RecipeRewardDialogComponent__EndClose(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Action_o *closeCallbackFunc; // x20

  if ( (byte_4186131 & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_bool___, method);
    byte_4186131 = 1;
  }
  RecipeRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2D65ADC *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(closeCallbackFunc, 0LL);
  }
}


void __fastcall RecipeRewardDialogComponent__Init(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall RecipeRewardDialogComponent__OnClickCloseButton(
        RecipeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  Il2CppObject *current; // x20
  System_Action_o *v14; // x20
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4186130 & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_bool___, method);
    sub_B2C35C(&System_Action_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&Method_RecipeRewardDialogComponent_EndClose__, v9);
    sub_B2C35C(&SoundManager_TypeInfo, v10);
    byte_4186130 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2D65ADC *)Method_ActionExtensions_Call_bool___);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_B2C434(0LL, v11);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resultItemObjList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v15.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v14 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_RecipeRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v14, 0LL);
  }
}


void __fastcall RecipeRewardDialogComponent__OnClickSwitchShowMode(
        RecipeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v13; // x8
  UISprite_o *v14; // x20
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x22
  __int64 v23; // x20
  int size; // w8
  __int64 v25; // x0
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4186132 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B2C35C(&SoundManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_22793/*"treasurechest_btn"*/, v8);
    sub_B2C35C(&StringLiteral_22795/*"treasurechest_btn_on"*/, v9);
    byte_4186132 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_30;
  v13 = isShowPossessionNum ? (System_String_o **)&StringLiteral_22793/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_22795/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v13, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_30;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_30;
  v14 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v14, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_30:
    sub_B2C434(viewChangeButton, v10);
  viewChangeButton = (UIButton_o *)this->fields.viewChangeButtonLabel;
  max_length = viewChangeButtonLabelEffectColors->max_length;
  if ( !this->fields.isShowPossessionNum )
  {
    if ( max_length )
    {
      p_g = &viewChangeButtonLabelEffectColors->m_Items[0].fields.g;
      p_b = &viewChangeButtonLabelEffectColors->m_Items[0].fields.b;
      p_a = &viewChangeButtonLabelEffectColors->m_Items[0].fields.a;
      p_r = &viewChangeButtonLabelEffectColors->m_Items[1].fields.r;
      if ( !viewChangeButton )
        goto LABEL_30;
      goto LABEL_22;
    }
LABEL_32:
    v25 = sub_B2C460(viewChangeButton);
    sub_B2C400(v25, 0LL);
  }
  if ( max_length <= 1 )
    goto LABEL_32;
  p_g = &viewChangeButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &viewChangeButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &viewChangeButtonLabelEffectColors->m_Items[1].fields.a;
  p_r = &viewChangeButtonLabelEffectColors->m_Items[2].fields.r;
  if ( !viewChangeButton )
    goto LABEL_30;
LABEL_22:
  v26.fields.b = *p_a;
  v26.fields.g = *p_b;
  v26.fields.r = *p_g;
  v26.fields.a = *p_r;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v26, 0LL);
  resultItemObjList = this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_30;
  v23 = 0LL;
  while ( 1 )
  {
    size = resultItemObjList->fields._size;
    if ( (int)v23 >= size )
      break;
    if ( size <= (unsigned int)v23 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    viewChangeButton = (UIButton_o *)resultItemObjList->fields._items->m_Items[v23];
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButton,
          this->fields.isShowPossessionNum,
          0LL);
        resultItemObjList = this->fields.resultItemObjList;
        ++v23;
        if ( resultItemObjList )
          continue;
      }
    }
    goto LABEL_30;
  }
}


void __fastcall RecipeRewardDialogComponent__Open(
        RecipeRewardDialogComponent_o *this,
        System_Int32_array *giftIds,
        BattleDropItem_array *pointRewards,
        EventRecipeEntity_o *eventRecipeEntity,
        EventRecipeGiftEntity_o *eventRecipeGiftEntity,
        System_Action_o *closeCallback,
        RecipeRewardDialogComponent_GetEffect_o *getEffect,
        const MethodInfo *method)
{
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
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x23
  void *viewChangeButton; // x0
  __int64 v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  WebViewObject_o *Component_WebViewObject; // x27
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v61; // x26
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v68; // x26
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  struct System_Collections_Generic_List_GameObject__o *teaEffectObjList; // x0
  UILabel_o *titleLabel; // x26
  UISprite_o *totalEventPointIcon; // x26
  int32_t eventPointItemId; // w27
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  UILabel_o *viewChangeButtonLabel; // x26
  UILabel_o *getTitleLabel; // x26
  UILabel_o *getNumLabel; // x26
  System_String_o *v83; // x27
  Il2CppObject *v84; // x0
  System_String_o *v85; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x25
  __int64 v88; // x26
  UILabel_o *totalNumLabel; // x25
  System_String_o *v90; // x27
  Il2CppObject *v91; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v92; // x26
  void **v93; // x25
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  GiftEntity_o *v100; // x26
  System_Action_int__o *v101; // x25
  __int64 v102; // x8
  bool v103; // w21
  UILabel_o *v104; // x22
  __int64 *v105; // x8
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  System_Collections_Generic_List_GiftEntity__o *v112; // x21
  System_Action_o *v113; // x22
  const MethodInfo *v114; // x4
  __int64 v115; // x0
  struct System_Action_o *v117; // [xsp+8h] [xbp-68h]
  __int64 v118; // [xsp+10h] [xbp-60h] BYREF
  int v119; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_418612B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, giftIds);
    sub_B2C35C(&System_Action_int__TypeInfo, v14);
    sub_B2C35C(&System_Action_TypeInfo, v15);
    sub_B2C35C(&AtlasManager_TypeInfo, v16);
    sub_B2C35C(&Method_BasicHelper_ForEach_int___, v17);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIScrollBar___, v18);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UISprite___, v19);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____67395032, v20);
    sub_B2C35C(&GiftEntity_TypeInfo, v21);
    sub_B2C35C(&int_TypeInfo, v22);
    sub_B2C35C(&long_TypeInfo, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__Add__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Clear__, v25);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v26);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v27);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v28);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v29);
    sub_B2C35C(&System_Collections_Generic_List_GiftEntity__TypeInfo, v30);
    sub_B2C35C(&LocalizationManager_TypeInfo, v31);
    sub_B2C35C(&Method_RecipeRewardDialogComponent___c__DisplayClass43_0__Open_b__0__, v32);
    sub_B2C35C(&Method_RecipeRewardDialogComponent___c__DisplayClass43_0__Open_b__1__, v33);
    sub_B2C35C(&RecipeRewardDialogComponent___c__DisplayClass43_0_TypeInfo, v34);
    sub_B2C35C(&StringLiteral_13462/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v35);
    sub_B2C35C(&StringLiteral_11043/*"RECIPE_EVENT_ITEM_GET_DIALOG_TITLE"*/, v36);
    sub_B2C35C(&StringLiteral_11047/*"RECIPE_EVENT_TOTAL_POINT_NUM"*/, v37);
    sub_B2C35C(&StringLiteral_691/*"+"*/, v38);
    sub_B2C35C(&StringLiteral_11041/*"RECIPE_EVENT_GET_POINT_NUM"*/, v39);
    sub_B2C35C(&StringLiteral_22793/*"treasurechest_btn"*/, v40);
    sub_B2C35C(&StringLiteral_13461/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/, v41);
    sub_B2C35C(&StringLiteral_2478/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v42);
    sub_B2C35C(&StringLiteral_22799/*"treasurechest_img_bg_reward"*/, v43);
    sub_B2C35C(&StringLiteral_11048/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/, v44);
    byte_418612B = 1;
  }
  v45 = sub_B2C42C(RecipeRewardDialogComponent___c__DisplayClass43_0_TypeInfo);
  RecipeRewardDialogComponent___c__DisplayClass43_0___ctor(
    (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)v45,
    0LL);
  if ( !v45 )
    goto LABEL_58;
  *(_QWORD *)(v45 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v45 + 24), (System_Int32_array **)this, v48, v49, v50, v51, v52, v53);
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.state = 1;
  if ( !viewChangeButton )
    goto LABEL_58;
  v117 = closeCallback;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)viewChangeButton,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_22793/*"treasurechest_btn"*/, 0LL);
  this->fields.getEffect = getEffect;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.getEffect,
    (System_Int32_array **)getEffect,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  this->fields.isShowPossessionNum = 0;
  this->fields.playCnt = 0;
  *(_WORD *)&this->fields.isSkip = 0;
  v61 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v61,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v61;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.resultItemObjList,
    (System_Int32_array **)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  v68 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v68,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultIconHideObjList = (struct System_Collections_Generic_List_GameObject__o *)v68;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.resultIconHideObjList,
    (System_Int32_array **)v68,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  teaEffectObjList = this->fields.teaEffectObjList;
  if ( teaEffectObjList )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)teaEffectObjList,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  viewChangeButton = this->fields.skipCollider;
  if ( !viewChangeButton )
    goto LABEL_58;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)viewChangeButton, 1, 0LL);
  if ( !giftIds )
    goto LABEL_58;
  viewChangeButton = this->fields.getPointRoot;
  this->fields.maxPlayCnt = *(_QWORD *)&giftIds->max_length;
  if ( !viewChangeButton )
    goto LABEL_58;
  viewChangeButton = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_11043/*"RECIPE_EVENT_ITEM_GET_DIALOG_TITLE"*/, 0LL);
  if ( !eventRecipeEntity )
    goto LABEL_58;
  viewChangeButton = System_String__Format(
                       (System_String_o *)viewChangeButton,
                       (Il2CppObject *)eventRecipeEntity->fields.name,
                       0LL);
  if ( !titleLabel )
    goto LABEL_58;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalEventPointIcon = this->fields.totalEventPointIcon;
  eventPointItemId = eventRecipeEntity->fields.eventPointItemId;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(totalEventPointIcon, eventPointItemId, 0LL);
  AtlasManager__SetItem(this->fields.getEventPointIcon, eventRecipeEntity->fields.eventPointItemId, 0LL);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_22799/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_22799/*"treasurechest_img_bg_reward"*/, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_58;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_22793/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_58;
  if ( !viewChangeButtonLabelEffectColors->max_length )
    goto LABEL_59;
  viewChangeButton = this->fields.viewChangeButtonLabel;
  if ( !viewChangeButton )
    goto LABEL_58;
  UILabel__set_effectColor(
    (UILabel_o *)viewChangeButton,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  viewChangeButtonLabel = this->fields.viewChangeButtonLabel;
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_11048/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !viewChangeButtonLabel )
    goto LABEL_58;
  UILabel__set_text(viewChangeButtonLabel, (System_String_o *)viewChangeButton, 0LL);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_11041/*"RECIPE_EVENT_GET_POINT_NUM"*/, 0LL);
  if ( !getTitleLabel )
    goto LABEL_58;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  getNumLabel = this->fields.getNumLabel;
  v83 = LocalizationManager__Get((System_String_o *)StringLiteral_2478/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v119 = this->fields.maxPlayCnt * eventRecipeEntity->fields.eventPointNum;
  v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v119);
  v85 = System_String__Format(v83, v84, 0LL);
  viewChangeButton = System_String__Concat_44305532((System_String_o *)StringLiteral_691/*"+"*/, v85, 0LL);
  if ( !getNumLabel )
    goto LABEL_58;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0LL);
  if ( !eventRecipeGiftEntity )
    goto LABEL_58;
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventRecipeGiftEntity->fields.eventId, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v88 = EventPointNoGroup;
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_11047/*"RECIPE_EVENT_TOTAL_POINT_NUM"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_58;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v90 = LocalizationManager__Get((System_String_o *)StringLiteral_2478/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v118 = v88;
  v91 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v118);
  viewChangeButton = System_String__Format(v90, v91, 0LL);
  if ( !totalNumLabel )
    goto LABEL_58;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0LL);
  v92 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v92,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  *(_QWORD *)(v45 + 16) = v92;
  v93 = (void **)(v45 + 16);
  sub_B2C2F8((BattleServantConfConponent_o *)(v45 + 16), (System_Int32_array **)v92, v94, v95, v96, v97, v98, v99);
  v100 = (GiftEntity_o *)sub_B2C42C(GiftEntity_TypeInfo);
  GiftEntity___ctor(v100, 0LL);
  if ( !v100 )
    goto LABEL_58;
  v100->fields.type = 2;
  v100->fields.objectId = eventRecipeEntity->fields.eventPointItemId;
  v100->fields.num = eventRecipeEntity->fields.eventPointNum * giftIds->max_length;
  viewChangeButton = *v93;
  if ( !*v93 )
    goto LABEL_58;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)viewChangeButton,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v100,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
  v101 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v101,
    (Il2CppObject *)v45,
    Method_RecipeRewardDialogComponent___c__DisplayClass43_0__Open_b__0__,
    (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
  BasicHelper__ForEach_int_(
    (System_Collections_Generic_IEnumerable_T__o *)giftIds,
    (System_Action_T__o *)v101,
    (const MethodInfo_17273BC *)Method_BasicHelper_ForEach_int___);
  v102 = *(_QWORD *)(v45 + 16);
  if ( !v102 )
    goto LABEL_58;
  viewChangeButton = this->fields.scrollBar;
  this->fields.maxPlayCnt = *(_DWORD *)(v102 + 24);
  if ( !viewChangeButton )
    goto LABEL_58;
  viewChangeButton = UnityEngine_Component__GetComponent_WebViewObject_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
  if ( !viewChangeButton )
    goto LABEL_58;
  UIProgressBar__set_value((UIProgressBar_o *)viewChangeButton, 0.0, 0LL);
  viewChangeButton = this->fields.scrollBar;
  if ( !viewChangeButton )
    goto LABEL_58;
  viewChangeButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)viewChangeButton,
    this->fields.maxPlayCnt > this->fields.maxItemDrawNum,
    0LL);
  v103 = pointRewards && pointRewards->max_length != 0;
  viewChangeButton = this->fields.closeButton;
  if ( !viewChangeButton )
    goto LABEL_58;
  viewChangeButton = UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_58;
  viewChangeButton = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       1,
                       (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____67395032);
  if ( !viewChangeButton )
    goto LABEL_58;
  if ( !*((_DWORD *)viewChangeButton + 6) )
  {
LABEL_59:
    v115 = sub_B2C460(viewChangeButton);
    sub_B2C400(v115, 0LL);
  }
  v104 = (UILabel_o *)*((_QWORD *)viewChangeButton + 4);
  if ( v103 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v105 = &StringLiteral_13462/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v105 = &StringLiteral_13461/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/;
  }
  viewChangeButton = LocalizationManager__Get((System_String_o *)*v105, 0LL);
  if ( !v104
    || (UILabel__set_text(v104, (System_String_o *)viewChangeButton, 0LL),
        this->fields.closeCallbackFunc = v117,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
          (System_Int32_array **)v117,
          v106,
          v107,
          v108,
          v109,
          v110,
          v111),
        (viewChangeButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_58:
    sub_B2C434(viewChangeButton, v47);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  v112 = *(System_Collections_Generic_List_GiftEntity__o **)(v45 + 16);
  v113 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v113,
    (Il2CppObject *)v45,
    Method_RecipeRewardDialogComponent___c__DisplayClass43_0__Open_b__1__,
    0LL);
  RecipeRewardDialogComponent__SetResultData(this, v112, eventRecipeEntity, v113, v114);
}


void __fastcall RecipeRewardDialogComponent__SetResultData(
        RecipeRewardDialogComponent_o *this,
        System_Collections_Generic_List_GiftEntity__o *giftList,
        EventRecipeEntity_o *eventRecipeEntity,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x23
  UnityEngine_Component_o *scrollView; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v30; // x22

  if ( (byte_418612C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_GiftEntity___ctor__, giftList);
    sub_B2C35C(&System_Action_GiftEntity__TypeInfo, v9);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIGrid___, v10);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIScrollView___, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__ForEach__, v12);
    sub_B2C35C(&Method_RecipeRewardDialogComponent___c__DisplayClass44_0__SetResultData_b__0__, v13);
    sub_B2C35C(&RecipeRewardDialogComponent___c__DisplayClass44_0_TypeInfo, v14);
    byte_418612C = 1;
  }
  v15 = sub_B2C42C(RecipeRewardDialogComponent___c__DisplayClass44_0_TypeInfo);
  RecipeRewardDialogComponent___c__DisplayClass44_0___ctor(
    (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)v15,
    0LL);
  if ( !v15 )
    goto LABEL_12;
  *(_QWORD *)(v15 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = eventRecipeEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v15 + 24),
    (System_Int32_array **)eventRecipeEntity,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_GiftEntity__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v30,
    (Il2CppObject *)v15,
    Method_RecipeRewardDialogComponent___c__DisplayClass44_0__SetResultData_b__0__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_GiftEntity___ctor__);
  if ( !giftList )
    goto LABEL_12;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)giftList,
    (System_Action_T__o *)v30,
    (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_GiftEntity__ForEach__);
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  scrollView,
                                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIScrollView___)) == 0LL
    || (UIScrollView__ResetPosition((UIScrollView_o *)scrollView, 0LL),
        (scrollView = (UnityEngine_Component_o *)this->fields.listRoot) == 0LL)
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  scrollView,
                                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))scrollView->klass[1]._1.castClass)(
          scrollView,
          scrollView->klass[1]._1.declaringType),
        (scrollView = (UnityEngine_Component_o *)this->fields.iconListRoot) == 0LL)
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  scrollView,
                                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
  {
LABEL_12:
    sub_B2C434(scrollView, v17);
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))scrollView->klass[1]._1.castClass)(
    scrollView,
    scrollView->klass[1]._1.declaringType);
  ActionExtensions__Call(callBack, 0LL);
}


System_Collections_IEnumerator_o *__fastcall RecipeRewardDialogComponent__StartDisp(
        RecipeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418612D & 1) == 0 )
  {
    sub_B2C35C(&RecipeRewardDialogComponent__StartDisp_d__45_TypeInfo, method);
    byte_418612D = 1;
  }
  v3 = sub_B2C42C(RecipeRewardDialogComponent__StartDisp_d__45_TypeInfo);
  RecipeRewardDialogComponent__StartDisp_d__45___ctor((RecipeRewardDialogComponent__StartDisp_d__45_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall RecipeRewardDialogComponent__StartRewardAction(
        RecipeRewardDialogComponent_o *this,
        RecipeRewardDialogComponent_RewardAction_o *rewardAction,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_418612E & 1) == 0 )
  {
    sub_B2C35C(&RecipeRewardDialogComponent__StartRewardAction_d__46_TypeInfo, rewardAction);
    byte_418612E = 1;
  }
  v5 = sub_B2C42C(RecipeRewardDialogComponent__StartRewardAction_d__46_TypeInfo);
  RecipeRewardDialogComponent__StartRewardAction_d__46___ctor(
    (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = rewardAction;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v5 + 40),
    (System_Int32_array **)rewardAction,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  return (System_Collections_IEnumerator_o *)v5;
}


UnityEngine_GameObject_o *__fastcall RecipeRewardDialogComponent__get_closeBtnObject(
        RecipeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4186133 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4186133 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_B2C434(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecipeRewardDialogComponent_GetEffect___ctor(
        RecipeRewardDialogComponent_GetEffect_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


System_IAsyncResult_o *__fastcall RecipeRewardDialogComponent_GetEffect__BeginInvoke(
        RecipeRewardDialogComponent_GetEffect_o *this,
        UnityEngine_Transform_o *parenTransform,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6[2]; // [xsp+0h] [xbp-10h] BYREF

  v6[0] = (__int64)parenTransform;
  v6[1] = 0LL;
  return (System_IAsyncResult_o *)sub_B2C300(this, v6, callback, object);
}


UnityEngine_GameObject_o *__fastcall RecipeRewardDialogComponent_GetEffect__EndInvoke(
        RecipeRewardDialogComponent_GetEffect_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  return (UnityEngine_GameObject_o *)sub_B2C304(result, 0LL, method);
}


UnityEngine_GameObject_o *__fastcall RecipeRewardDialogComponent_GetEffect__Invoke(
        RecipeRewardDialogComponent_GetEffect_o *this,
        UnityEngine_Transform_o *parenTransform,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  RecipeRewardDialogComponent_GetEffect_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w22
  __int64 class_0; // x0
  __int64 v12; // x3
  UnityEngine_Transform_c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  UnityEngine_GameObject_o *result; // x0
  unsigned int v19; // w23
  __int64 v20; // x0
  __int64 v21; // x3
  __int64 v22; // x8
  unsigned __int64 v23; // x10
  _DWORD *v24; // x11
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 (__fastcall **v28)(UnityEngine_Transform_o *, _QWORD); // x0
  __int64 v29; // x0
  __int64 (__fastcall **v30)(__int64 *, UnityEngine_Transform_o *, _QWORD); // x0
  RecipeRewardDialogComponent_GetEffect_o *v31; // x8
  __int64 v32; // x21
  __int64 *v33; // x22
  __int64 (__fastcall *v34)(UnityEngine_Transform_o *, __int64); // x23
  char v35; // w0
  int v36; // w8
  char v37; // w23
  char v38; // w0
  __int64 v39; // x3
  __int64 v40; // x8
  __int64 v41; // x1
  __int64 v42; // x2
  unsigned __int64 v43; // x10
  _DWORD *v44; // x11
  char v45; // w22
  char v46; // w0
  __int64 v47; // x3
  UnityEngine_Transform_c *klass; // x8
  __int64 v49; // x1
  __int64 v50; // x2
  unsigned __int64 v51; // x10
  int32_t *p_offset; // x11
  RecipeRewardDialogComponent_GetEffect_o *v53; // [xsp+8h] [xbp-48h] BYREF

  v53 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v53;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (RecipeRewardDialogComponent_GetEffect_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v31 = v8[v9];
      v33 = *(__int64 **)&v31->fields.method;
      v32 = *(_QWORD *)&v31->fields.extra_arg;
      v34 = *(__int64 (__fastcall **)(UnityEngine_Transform_o *, __int64))&v31->fields.method_ptr;
      if ( *(__int16 *)(v32 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v31->fields.extra_arg, parenTransform, method, v3);
      v35 = sub_B2C38C(v32);
      v36 = *(unsigned __int8 *)(v32 + 74);
      if ( (v35 & 1) != 0 )
      {
        if ( v36 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v36 != 1 )
        {
          if ( *(__int16 *)(v32 + 72) != -1 && this->fields.m_target )
          {
            v45 = sub_B2C384(v32);
            v46 = sub_B2C788(v32);
            if ( (v45 & 1) != 0 )
            {
              if ( (v46 & 1) != 0 )
              {
                klass = parenTransform->klass;
                v49 = *(_QWORD *)(v32 + 24);
                v50 = *(unsigned __int16 *)(v32 + 72);
                if ( *(_WORD *)&parenTransform->klass->_2.bitflags1 )
                {
                  v51 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v49 )
                  {
                    ++v51;
                    p_offset += 4;
                    if ( v51 >= *(unsigned __int16 *)&parenTransform->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v27 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v50);
                }
                else
                {
LABEL_57:
                  v27 = sub_AC5258(parenTransform, v49, v50, v47);
                }
                v17 = *(_QWORD *)(v27 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&parenTransform->klass->vtable._1_Finalize.methodPtr
                      + 2 * *(unsigned __int16 *)(v32 + 72));
              }
              v28 = (__int64 (__fastcall **)(UnityEngine_Transform_o *, _QWORD))sub_B2C40C(v17, v32);
              result = (UnityEngine_GameObject_o *)(*v28)(parenTransform, v28);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v32 + 72);
              if ( (v46 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v32);
                v13 = parenTransform->klass;
                if ( *(_WORD *)&parenTransform->klass->_2.bitflags1 )
                {
                  v14 = 0LL;
                  v15 = &v13->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v15 - 1) != class_0 )
                  {
                    ++v14;
                    v15 += 4;
                    if ( v14 >= *(unsigned __int16 *)&parenTransform->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v16 = (__int64)(&v13->vtable._0_Equals.method + 2 * (int)(*v15 + v10));
                }
                else
                {
LABEL_11:
                  v16 = sub_AC5258(parenTransform, class_0, v10, v12);
                }
                result = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(UnityEngine_Transform_o *, _QWORD))v16)(
                                                       parenTransform,
                                                       *(_QWORD *)(v16 + 8));
              }
              else
              {
                result = (UnityEngine_GameObject_o *)(*((__int64 (__fastcall **)(UnityEngine_Transform_o *, _QWORD))&parenTransform->klass->vtable._0_Equals.method
                                                      + 2 * *(unsigned __int16 *)(v32 + 72)))(
                                                       parenTransform,
                                                       *((_QWORD *)&parenTransform->klass->vtable._1_Finalize.methodPtr
                                                       + 2 * *(unsigned __int16 *)(v32 + 72)));
              }
            }
            goto LABEL_59;
          }
LABEL_58:
          result = (UnityEngine_GameObject_o *)v34(parenTransform, v32);
          goto LABEL_59;
        }
        if ( !v33 )
          goto LABEL_58;
        if ( *(__int16 *)(v32 + 72) != -1 && (*(_BYTE *)(*v33 + 277) & 1) == 0 && this->fields.m_target )
        {
          v37 = sub_B2C384(v32);
          v38 = sub_B2C788(v32);
          if ( (v37 & 1) != 0 )
          {
            if ( (v38 & 1) != 0 )
            {
              v40 = *v33;
              v41 = *(_QWORD *)(v32 + 24);
              v42 = *(unsigned __int16 *)(v32 + 72);
              if ( *(_WORD *)(*v33 + 298) )
              {
                v43 = 0LL;
                v44 = (_DWORD *)(*(_QWORD *)(v40 + 176) + 8LL);
                while ( *((_QWORD *)v44 - 1) != v41 )
                {
                  ++v43;
                  v44 += 4;
                  if ( v43 >= *(unsigned __int16 *)(*v33 + 298) )
                    goto LABEL_48;
                }
                v29 = v40 + 16LL * (*v44 + (int)v42) + 312;
              }
              else
              {
LABEL_48:
                v29 = sub_AC5258(v33, v41, v42, v39);
              }
              v26 = *(_QWORD *)(v29 + 8);
            }
            else
            {
              v26 = *(_QWORD *)(*v33 + 16LL * *(unsigned __int16 *)(v32 + 72) + 320);
            }
            v30 = (__int64 (__fastcall **)(__int64 *, UnityEngine_Transform_o *, _QWORD))sub_B2C40C(v26, v32);
            result = (UnityEngine_GameObject_o *)(*v30)(v33, parenTransform, v30);
          }
          else
          {
            v19 = *(unsigned __int16 *)(v32 + 72);
            if ( (v38 & 1) != 0 )
            {
              v20 = j_il2cpp_method_get_class_0(v32);
              v22 = *v33;
              if ( *(_WORD *)(*v33 + 298) )
              {
                v23 = 0LL;
                v24 = (_DWORD *)(*(_QWORD *)(v22 + 176) + 8LL);
                while ( *((_QWORD *)v24 - 1) != v20 )
                {
                  ++v23;
                  v24 += 4;
                  if ( v23 >= *(unsigned __int16 *)(*v33 + 298) )
                    goto LABEL_19;
                }
                v25 = v22 + 16LL * (int)(*v24 + v19) + 312;
              }
              else
              {
LABEL_19:
                v25 = sub_AC5258(v33, v20, v19, v21);
              }
              result = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(__int64 *, UnityEngine_Transform_o *, _QWORD))v25)(
                                                     v33,
                                                     parenTransform,
                                                     *(_QWORD *)(v25 + 8));
            }
            else
            {
              result = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(__int64 *, UnityEngine_Transform_o *, _QWORD))(*v33 + 16LL * *(unsigned __int16 *)(v32 + 72) + 312))(
                                                     v33,
                                                     parenTransform,
                                                     *(_QWORD *)(*v33 + 16LL * *(unsigned __int16 *)(v32 + 72) + 320));
            }
          }
          goto LABEL_59;
        }
      }
      result = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(__int64 *, UnityEngine_Transform_o *, __int64))v34)(
                                             v33,
                                             parenTransform,
                                             v32);
LABEL_59:
      if ( ++v9 == v7 )
        return result;
    }
  }
  return 0LL;
}


void __fastcall RecipeRewardDialogComponent_RewardAction___ctor(
        RecipeRewardDialogComponent_RewardAction_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecipeRewardDialogComponent__StartDisp_d__45___ctor(
        RecipeRewardDialogComponent__StartDisp_d__45_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall RecipeRewardDialogComponent__StartDisp_d__45__MoveNext(
        RecipeRewardDialogComponent__StartDisp_d__45_o *this,
        const MethodInfo *method)
{
  RecipeRewardDialogComponent__StartDisp_d__45_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
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
  struct RecipeRewardDialogComponent_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v19; // x20
  bool result; // w0
  RecipeRewardDialogComponent__StartDisp_d__45_o **p_listRewardAction_5__2; // x21
  RecipeRewardDialogComponent__StartDisp_d__45_o *listRewardAction_5__2; // x25
  int _4__this_high; // w8
  int32_t maxPlayCnt; // w9
  int v25; // w21
  UIProgressBar_o *v26; // x20
  float value; // s0
  Il2CppObject **p__2__current; // x19
  int v29; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x22
  int v31; // w23
  __int64 v32; // x22
  __int64 v33; // x23
  __int64 v34; // x24
  int _2__current; // w8
  __int64 v36; // x22
  System_Collections_IEnumerator_o *started; // x0
  int v38; // w8
  __int64 v39; // x8
  int32_t playCnt; // w8
  RecipeRewardDialogComponent__StartDisp_d__45_o *v41; // x22
  __int64 v42; // x19
  int v43; // w8
  __int64 v44; // x8
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x21
  __int64 v46; // x19
  int size; // w8
  Il2CppObject *current; // x19
  float scrollWait; // s8
  UnityEngine_WaitForSeconds_o *v50; // x20
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+8h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_418564A & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIGrid___, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIScrollBar___, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction___ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__, v13);
    sub_B2C35C(&System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__TypeInfo, v14);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v15);
    sub_B2C35C(&RecipeRewardDialogComponent_RewardAction_TypeInfo, v16);
    this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)sub_B2C35C(&UnityEngine_WaitForSeconds_TypeInfo, v17);
    byte_418564A = 1;
  }
  memset(&v51, 0, sizeof(v51));
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      v19 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v19, 0.3, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v19;
      sub_B2C2F8(&v2->fields.__2__current, v19);
      result = 1;
      v2->fields.__1__state = 1;
      return result;
    case 1:
      p_listRewardAction_5__2 = (RecipeRewardDialogComponent__StartDisp_d__45_o **)&v2->fields._listRewardAction_5__2;
      v2->fields.__1__state = -1;
      goto LABEL_18;
    case 2:
      p_listRewardAction_5__2 = (RecipeRewardDialogComponent__StartDisp_d__45_o **)&v2->fields._listRewardAction_5__2;
      listRewardAction_5__2 = (RecipeRewardDialogComponent__StartDisp_d__45_o *)v2->fields._listRewardAction_5__2;
      v2->fields.__1__state = -1;
      if ( !listRewardAction_5__2 )
        goto LABEL_35;
      goto LABEL_36;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_35;
      this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)_4__this->fields.iconListRoot;
      if ( !this )
        goto LABEL_35;
      this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                 (UnityEngine_Component_o *)this,
                                                                 (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !this )
        goto LABEL_35;
      _4__this_high = HIDWORD(this->fields.__4__this);
      maxPlayCnt = _4__this->fields.maxPlayCnt;
      this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)_4__this->fields.scrollBar;
      v25 = maxPlayCnt % _4__this_high ? maxPlayCnt / _4__this_high + 1 : maxPlayCnt / _4__this_high;
      if ( !this )
        goto LABEL_35;
      this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                 (UnityEngine_Component_o *)this,
                                                                 (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
      if ( !this )
        goto LABEL_35;
      v26 = (UIProgressBar_o *)this;
      value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
      UIProgressBar__set_value(v26, (float)(1.0 / (float)((float)((float)v25 * 0.5) + -1.0)) + value, 0LL);
      v2->fields.__2__current = 0LL;
      p__2__current = &v2->fields.__2__current;
      sub_B2C2F8(p__2__current, 0LL);
      v29 = 4;
      goto LABEL_84;
    case 4:
      p_listRewardAction_5__2 = (RecipeRewardDialogComponent__StartDisp_d__45_o **)&v2->fields._listRewardAction_5__2;
      v2->fields.__1__state = -1;
      break;
    default:
      return 0;
  }
  while ( 1 )
  {
    *p_listRewardAction_5__2 = 0LL;
    sub_B2C2F8(p_listRewardAction_5__2, 0LL);
LABEL_18:
    v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v30,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction___ctor__);
    *p_listRewardAction_5__2 = (RecipeRewardDialogComponent__StartDisp_d__45_o *)v30;
    sub_B2C2F8(p_listRewardAction_5__2, v30);
    if ( !_4__this )
      goto LABEL_35;
    if ( _4__this->fields.maxItemDrawNum >= 1 )
    {
      v31 = 0;
      while ( v31 + _4__this->fields.playCnt < _4__this->fields.maxPlayCnt )
      {
        v32 = sub_B2C42C(RecipeRewardDialogComponent_RewardAction_TypeInfo);
        System_Object___ctor((Il2CppObject *)v32, 0LL);
        if ( !v32 )
          goto LABEL_35;
        *(_DWORD *)(v32 + 16) = v31;
        *(_DWORD *)(v32 + 20) = v31 + _4__this->fields.playCnt;
        this = *p_listRewardAction_5__2;
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_35;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__Add__);
        if ( ++v31 >= _4__this->fields.maxItemDrawNum )
          break;
      }
    }
    if ( !*p_listRewardAction_5__2 )
      goto LABEL_35;
    _4__this->fields.playCnt += LODWORD((*p_listRewardAction_5__2)->fields.__2__current);
    listRewardAction_5__2 = *p_listRewardAction_5__2;
    if ( !*p_listRewardAction_5__2 )
      goto LABEL_35;
    v33 = 0LL;
    v34 = 32LL;
    while ( 1 )
    {
      _2__current = (int)listRewardAction_5__2->fields.__2__current;
      if ( (int)v33 >= _2__current )
        break;
      if ( _2__current <= (unsigned int)v33 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v36 = *(_QWORD *)(*(_QWORD *)&listRewardAction_5__2->fields.__1__state + v34);
      if ( LODWORD(listRewardAction_5__2->fields.__2__current) <= (unsigned int)v33 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      started = RecipeRewardDialogComponent__StartRewardAction(
                  _4__this,
                  *(RecipeRewardDialogComponent_RewardAction_o **)(*(_QWORD *)&listRewardAction_5__2->fields.__1__state
                                                                 + 8 * v33
                                                                 + 32),
                  0LL);
      this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)UnityEngine_MonoBehaviour__StartCoroutine_35309748(
                                                                 (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                 started,
                                                                 0LL);
      if ( v36 )
      {
        *(_QWORD *)(v36 + 32) = this;
        sub_B2C2F8(v36 + 32, this);
        listRewardAction_5__2 = *p_listRewardAction_5__2;
        ++v33;
        v34 += 8LL;
        if ( *p_listRewardAction_5__2 )
          continue;
      }
      goto LABEL_35;
    }
LABEL_36:
    v38 = (int)listRewardAction_5__2->fields.__2__current;
    if ( !v38 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v39 = *(_QWORD *)(*(_QWORD *)&listRewardAction_5__2->fields.__1__state + 8LL * (v38 - 1) + 32);
    if ( !v39 )
      goto LABEL_35;
    if ( *(_BYTE *)(v39 + 24) )
    {
      if ( !_4__this )
        goto LABEL_35;
    }
    else
    {
      if ( !_4__this )
        goto LABEL_35;
      if ( !_4__this->fields.isSkip )
      {
        v2->fields.__2__current = 0LL;
        p__2__current = &v2->fields.__2__current;
        sub_B2C2F8(p__2__current, 0LL);
        v29 = 2;
        goto LABEL_84;
      }
    }
    if ( _4__this->fields.isSkip )
      break;
    playCnt = _4__this->fields.playCnt;
    if ( playCnt >= _4__this->fields.maxPlayCnt )
      goto LABEL_68;
    if ( playCnt != 1 && !(playCnt % _4__this->fields.maxItemDrawNum) )
    {
      scrollWait = _4__this->fields.scrollWait;
      v50 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v50, scrollWait, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v50;
      p__2__current = &v2->fields.__2__current;
      sub_B2C2F8(p__2__current, v50);
      v29 = 3;
LABEL_84:
      *((_DWORD *)p__2__current - 2) = v29;
      return (unsigned __int8)&dword_0 + 1;
    }
  }
  v41 = *p_listRewardAction_5__2;
  if ( !*p_listRewardAction_5__2 )
    goto LABEL_35;
  v42 = 0LL;
  while ( 1 )
  {
    v43 = (int)v41->fields.__2__current;
    if ( (int)v42 >= v43 )
      break;
    if ( v43 <= (unsigned int)v42 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v44 = *(_QWORD *)(*(_QWORD *)&v41->fields.__1__state + 8 * v42 + 32);
    if ( v44 )
    {
      UnityEngine_MonoBehaviour__StopCoroutine_35310416(
        (UnityEngine_MonoBehaviour_o *)_4__this,
        *(UnityEngine_Coroutine_o **)(v44 + 32),
        0LL);
      v41 = *p_listRewardAction_5__2;
      ++v42;
      if ( *p_listRewardAction_5__2 )
        continue;
    }
    goto LABEL_35;
  }
  resultItemObjList = _4__this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_35;
  v46 = 0LL;
  while ( 1 )
  {
    size = resultItemObjList->fields._size;
    if ( (int)v46 >= size )
      break;
    if ( size <= (unsigned int)v46 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)resultItemObjList->fields._items->m_Items[v46];
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      resultItemObjList = _4__this->fields.resultItemObjList;
      ++v46;
      if ( resultItemObjList )
        continue;
    }
    goto LABEL_35;
  }
  this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)_4__this->fields.scrollBar;
  _4__this->fields.playCnt = _4__this->fields.maxPlayCnt;
  if ( !this )
    goto LABEL_35;
  this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                             (UnityEngine_Component_o *)this,
                                                             (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
  if ( !this )
    goto LABEL_35;
  UIProgressBar__set_value((UIProgressBar_o *)this, 1.0, 0LL);
LABEL_68:
  this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)_4__this->fields.skipCollider;
  if ( !this
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL),
        (this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)_4__this->fields.resultIconHideObjList) == 0LL) )
  {
LABEL_35:
    sub_B2C434(this, method);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v51,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v51,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v51.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v51,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return 0;
}


Il2CppObject *__fastcall RecipeRewardDialogComponent__StartDisp_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        RecipeRewardDialogComponent__StartDisp_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn RecipeRewardDialogComponent__StartDisp_d__45__System_Collections_IEnumerator_Reset(
        RecipeRewardDialogComponent__StartDisp_d__45_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_RecipeRewardDialogComponent__StartDisp_d__45_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall RecipeRewardDialogComponent__StartDisp_d__45__System_Collections_IEnumerator_get_Current(
        RecipeRewardDialogComponent__StartDisp_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall RecipeRewardDialogComponent__StartDisp_d__45__System_IDisposable_Dispose(
        RecipeRewardDialogComponent__StartDisp_d__45_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecipeRewardDialogComponent__StartRewardAction_d__46___ctor(
        RecipeRewardDialogComponent__StartRewardAction_d__46_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RecipeRewardDialogComponent__StartRewardAction_d__46__MoveNext(
        RecipeRewardDialogComponent__StartRewardAction_d__46_o *this,
        const MethodInfo *method)
{
  RecipeRewardDialogComponent__StartRewardAction_d__46_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  struct RecipeRewardDialogComponent_o *_4__this; // x22
  int32_t i_5__2; // w8
  struct RecipeRewardDialogComponent_RewardAction_o *rewardAction; // x9
  float itemDispWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v10; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct RecipeRewardDialogComponent_RewardAction_o **p_rewardAction; // x19
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x21
  __int64 playCnt; // x23
  RecipeRewardDialogComponent_GetEffect_o *getEffect; // x20
  const MethodInfo *v17; // x2
  UnityEngine_GameObject_o *v18; // x20
  struct RecipeRewardDialogComponent_RewardAction_o *v19; // x8
  struct System_Collections_Generic_List_GameObject__o *v20; // x23
  __int64 v21; // x24
  UnityEngine_Transform_o *v22; // x21
  int v23; // s0
  float v26; // s8
  UnityEngine_WaitForSeconds_o *v27; // x20
  Il2CppObject **v28; // x19
  struct System_Collections_Generic_List_GameObject__o *resultIconHideObjList; // x20
  struct RecipeRewardDialogComponent_RewardAction_o *v30; // x8
  struct RecipeRewardDialogComponent_RewardAction_o *v31; // t1
  __int64 v32; // x21
  struct System_Collections_Generic_List_GameObject__o *v33; // x20
  __int64 v34; // x21
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_418564B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v3);
    this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)sub_B2C35C(
                                                                       &UnityEngine_WaitForSeconds_TypeInfo,
                                                                       v4);
    byte_418564B = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 2 )
  {
    if ( _1__state == 1 )
    {
      i_5__2 = v2->fields._i_5__2;
      v2->fields.__1__state = -1;
      _1__state = i_5__2 + 1;
      v2->fields._i_5__2 = _1__state;
    }
    else
    {
      if ( _1__state )
        return 0;
      v2->fields.__1__state = -1;
      v2->fields._i_5__2 = 0;
    }
    rewardAction = v2->fields.rewardAction;
    if ( rewardAction && _4__this )
    {
      if ( _1__state < rewardAction->fields.index )
      {
        itemDispWaitTime = _4__this->fields.itemDispWaitTime;
        v10 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v10, itemDispWaitTime, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v10;
        p__2__current = &v2->fields.__2__current;
        sub_B2C2F8(p__2__current, v10);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
      resultItemObjList = _4__this->fields.resultItemObjList;
      if ( resultItemObjList )
      {
        playCnt = rewardAction->fields.playCnt;
        getEffect = _4__this->fields.getEffect;
        if ( resultItemObjList->fields._size <= (unsigned int)playCnt )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)GameObjectExtensions__GetParent(
                                                                           resultItemObjList->fields._items->m_Items[playCnt],
                                                                           0LL);
        if ( this )
        {
          this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)UnityEngine_Component__get_transform(
                                                                             (UnityEngine_Component_o *)this,
                                                                             0LL);
          if ( getEffect )
          {
            this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)RecipeRewardDialogComponent_GetEffect__Invoke(
                                                                               getEffect,
                                                                               (UnityEngine_Transform_o *)this,
                                                                               v17);
            if ( this )
            {
              v18 = (UnityEngine_GameObject_o *)this;
              this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)UnityEngine_GameObject__get_transform(
                                                                                 (UnityEngine_GameObject_o *)this,
                                                                                 0LL);
              v19 = v2->fields.rewardAction;
              if ( v19 )
              {
                v20 = _4__this->fields.resultItemObjList;
                if ( v20 )
                {
                  v21 = v19->fields.playCnt;
                  v22 = (UnityEngine_Transform_o *)this;
                  if ( v20->fields._size <= (unsigned int)v21 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                  this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)v20->fields._items->m_Items[v21];
                  if ( this )
                  {
                    this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)UnityEngine_GameObject__get_transform(
                                                                                       (UnityEngine_GameObject_o *)this,
                                                                                       0LL);
                    if ( this )
                    {
                      *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Transform__get_localPosition(
                                                         (UnityEngine_Transform_o *)this,
                                                         0LL);
                      if ( v22 )
                      {
                        UnityEngine_Transform__set_localPosition(v22, *(UnityEngine_Vector3_o *)&v23, 0LL);
                        this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)UnityEngine_GameObject__get_transform(
                                                                                           v18,
                                                                                           0LL);
                        if ( this )
                        {
                          v35.fields.x = 1.25;
                          v35.fields.y = 1.25;
                          v35.fields.z = 1.25;
                          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v35, 0LL);
                          this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)_4__this->fields.teaEffectObjList;
                          if ( this )
                          {
                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                              (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
                              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
                            v26 = _4__this->fields.itemDispWaitTime;
                            v27 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
                            UnityEngine_WaitForSeconds___ctor(v27, v26, 0LL);
                            v2->fields.__2__current = (Il2CppObject *)v27;
                            v28 = &v2->fields.__2__current;
                            sub_B2C2F8(v28, v27);
                            *((_DWORD *)v28 - 2) = 2;
                            return 1;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_45:
    sub_B2C434(this, method);
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_45;
  if ( _4__this->fields.isSkip )
  {
    p_rewardAction = &v2->fields.rewardAction;
  }
  else
  {
    _4__this->fields.canSkip = 1;
    resultIconHideObjList = _4__this->fields.resultIconHideObjList;
    v31 = v2->fields.rewardAction;
    p_rewardAction = &v2->fields.rewardAction;
    v30 = v31;
    if ( !v31 || !resultIconHideObjList )
      goto LABEL_45;
    v32 = v30->fields.playCnt;
    if ( resultIconHideObjList->fields._size <= (unsigned int)v32 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)resultIconHideObjList->fields._items->m_Items[v32];
    if ( !this )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  if ( !*p_rewardAction )
    goto LABEL_45;
  v33 = _4__this->fields.resultItemObjList;
  if ( !v33 )
    goto LABEL_45;
  v34 = (*p_rewardAction)->fields.playCnt;
  if ( v33->fields._size <= (unsigned int)v34 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)v33->fields._items->m_Items[v34];
  if ( !this )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  if ( !*p_rewardAction )
    goto LABEL_45;
  result = 0;
  (*p_rewardAction)->fields.isEnd = 1;
  return result;
}


Il2CppObject *__fastcall RecipeRewardDialogComponent__StartRewardAction_d__46__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        RecipeRewardDialogComponent__StartRewardAction_d__46_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn RecipeRewardDialogComponent__StartRewardAction_d__46__System_Collections_IEnumerator_Reset(
        RecipeRewardDialogComponent__StartRewardAction_d__46_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_RecipeRewardDialogComponent__StartRewardAction_d__46_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall RecipeRewardDialogComponent__StartRewardAction_d__46__System_Collections_IEnumerator_get_Current(
        RecipeRewardDialogComponent__StartRewardAction_d__46_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall RecipeRewardDialogComponent__StartRewardAction_d__46__System_IDisposable_Dispose(
        RecipeRewardDialogComponent__StartRewardAction_d__46_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecipeRewardDialogComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct RecipeRewardDialogComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4185644 & 1) == 0 )
  {
    sub_B2C35C(&RecipeRewardDialogComponent___c_TypeInfo, v1);
    byte_4185644 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(RecipeRewardDialogComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = RecipeRewardDialogComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct RecipeRewardDialogComponent___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall RecipeRewardDialogComponent___c___ctor(
        RecipeRewardDialogComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecipeRewardDialogComponent___c___ClickSkip_b__47_0(
        RecipeRewardDialogComponent___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( (byte_4185645 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, x);
    byte_4185645 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)x, 0LL);
}


void __fastcall RecipeRewardDialogComponent___c__DisplayClass43_0___ctor(
        RecipeRewardDialogComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecipeRewardDialogComponent___c__DisplayClass43_0___Open_b__0(
        RecipeRewardDialogComponent___c__DisplayClass43_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *giftList; // x20
  DataManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4185646 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftMaster___, *(_QWORD *)&id);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4185646 = 1;
  }
  giftList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.giftList;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___)) == 0LL
    || (Instance = (DataManager_o *)GiftMaster__GetGiftListById((GiftMaster_o *)Instance, id, 0LL), !giftList) )
  {
    sub_B2C434(Instance, v9);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    giftList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
}


void __fastcall RecipeRewardDialogComponent___c__DisplayClass43_0___Open_b__1(
        RecipeRewardDialogComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  _DWORD *monitor; // x8
  System_Action_o *klass; // x21
  BaseDialog_o *v6; // x20

  v2 = (Il2CppObject *)this;
  if ( (byte_4185647 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)sub_B2C35C(
                                                                    &Method_RecipeRewardDialogComponent___c__DisplayClass43_0__Open_b__2__,
                                                                    v3);
    byte_4185647 = 1;
  }
  monitor = v2[1].monitor;
  if ( !monitor )
    goto LABEL_8;
  monitor[85] = 2;
  klass = (System_Action_o *)v2[2].klass;
  v6 = (BaseDialog_o *)v2[1].monitor;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(klass, v2, Method_RecipeRewardDialogComponent___c__DisplayClass43_0__Open_b__2__, 0LL);
    v2[2].klass = (Il2CppClass *)klass;
    sub_B2C2F8(&v2[2], klass);
  }
  if ( !v6 )
LABEL_8:
    sub_B2C434(this, method);
  BaseDialog__Open(v6, klass, 0, 0LL);
}


void __fastcall RecipeRewardDialogComponent___c__DisplayClass43_0___Open_b__2(
        RecipeRewardDialogComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *_4__this; // x0

  if ( (byte_4185648 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_13042/*"StartDisp"*/, method);
    byte_4185648 = 1;
  }
  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  UnityEngine_MonoBehaviour__StartCoroutine(_4__this, (System_String_o *)StringLiteral_13042/*"StartDisp"*/, 0LL);
}


void __fastcall RecipeRewardDialogComponent___c__DisplayClass44_0___ctor(
        RecipeRewardDialogComponent___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecipeRewardDialogComponent___c__DisplayClass44_0___SetResultData_b__0(
        RecipeRewardDialogComponent___c__DisplayClass44_0_o *this,
        GiftEntity_o *gift,
        const MethodInfo *method)
{
  RecipeRewardDialogComponent___c__DisplayClass44_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct RecipeRewardDialogComponent_o *_4__this; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *prefabResultItem; // x20
  UnityEngine_GameObject_o *v14; // x20
  struct RecipeRewardDialogComponent_o *v15; // x8
  UnityEngine_Transform_o *transform; // x22
  int v17; // s0
  struct RecipeRewardDialogComponent_o *v20; // x8
  ItemIconComponent_o *v21; // x22
  int32_t v22; // w3
  struct RecipeRewardDialogComponent_o *v23; // x8
  struct RecipeRewardDialogComponent_o *v24; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *prefabTeaItem; // x21
  UnityEngine_GameObject_o *v26; // x21
  struct RecipeRewardDialogComponent_o *v27; // x8
  UnityEngine_Transform_o *v28; // x22
  int v29; // s0
  struct RecipeRewardDialogComponent_o *v32; // x8
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  int32_t eventId; // w22
  UISprite_o *v35; // x20
  Il2CppObject *v36; // x0
  System_String_o *v37; // x23
  struct RecipeRewardDialogComponent_o *v38; // x8
  int32_t iconId; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4185649 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, gift);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v6);
    sub_B2C35C(&int_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)sub_B2C35C(&StringLiteral_19379/*"icon_{0}"*/, v11);
    byte_4185649 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_38;
  prefabResultItem = (UnityEngine_UI_Dropdown_DropdownItem_o *)_4__this->fields.prefabResultItem;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                                  prefabResultItem,
                                                                  (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_38;
  v14 = (UnityEngine_GameObject_o *)this;
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  0LL);
  v15 = v4->fields.__4__this;
  if ( !v15 )
    goto LABEL_38;
  if ( !this )
    goto LABEL_38;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v15->fields.listRoot, 0LL);
  transform = UnityEngine_GameObject__get_transform(v14, 0LL);
  *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_38;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v17, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_GameObject__get_transform(v14, 0LL);
  v20 = v4->fields.__4__this;
  if ( !v20 )
    goto LABEL_38;
  if ( !this )
    goto LABEL_38;
  v40.fields.x = v20->fields.iconScale;
  v40.fields.y = v40.fields.x;
  v40.fields.z = v40.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v40, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v14,
                                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
  if ( !gift )
    goto LABEL_38;
  v21 = (ItemIconComponent_o *)this;
  if ( !this )
    goto LABEL_38;
  v22 = gift->fields.num <= 1 ? -1 : gift->fields.num;
  ItemIconComponent__SetGift((ItemIconComponent_o *)this, gift->fields.type, gift->fields.objectId, v22, 0, 0LL);
  ItemIconComponent__CalcSetPossession(v21, gift->fields.type, gift->fields.objectId, 0LL);
  v23 = v4->fields.__4__this;
  if ( !v23 )
    goto LABEL_38;
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)v23->fields.resultItemObjList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
  v24 = v4->fields.__4__this;
  if ( !v24 )
    goto LABEL_38;
  prefabTeaItem = (UnityEngine_UI_Dropdown_DropdownItem_o *)v24->fields.prefabTeaItem;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                                  prefabTeaItem,
                                                                  (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_38;
  v26 = (UnityEngine_GameObject_o *)this;
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  0LL);
  v27 = v4->fields.__4__this;
  if ( !v27 )
    goto LABEL_38;
  if ( !this )
    goto LABEL_38;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v27->fields.iconListRoot, 0LL);
  v28 = UnityEngine_GameObject__get_transform(v26, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_GameObject__get_transform(v14, 0LL);
  if ( !this )
    goto LABEL_38;
  *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  if ( !v28 )
    goto LABEL_38;
  UnityEngine_Transform__set_localPosition(v28, *(UnityEngine_Vector3_o *)&v29, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_GameObject__get_transform(v26, 0LL);
  v32 = v4->fields.__4__this;
  if ( !v32 )
    goto LABEL_38;
  if ( !this )
    goto LABEL_38;
  v41.fields.x = v32->fields.iconScale;
  v41.fields.y = v41.fields.x;
  v41.fields.z = v41.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v41, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v26,
                                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  eventRecipeEntity = v4->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    goto LABEL_38;
  eventId = eventRecipeEntity->fields.eventId;
  v35 = (UISprite_o *)this;
  iconId = eventRecipeEntity->fields.iconId;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v37 = System_String__Format((System_String_o *)StringLiteral_19379/*"icon_{0}"*/, v36, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28451336(eventId, v35, v37, 0LL);
  UnityEngine_GameObject__SetActive(v26, 1, 0LL);
  v38 = v4->fields.__4__this;
  if ( !v38 || (this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)v38->fields.resultIconHideObjList) == 0LL )
LABEL_38:
    sub_B2C434(this, gift);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
}