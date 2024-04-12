void __fastcall RecipeRewardDialogComponent___ctor(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Color_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42B39EE & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    sub_B52984(&UnityEngine_Color___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_42B39EE = 1;
  }
  this->fields.iconScale = 0.85;
  v3 = (struct UnityEngine_Color_array *)sub_B5299C(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.viewChangeButtonLabelEffectColors,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.teaEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v10;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.teaEffectObjList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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
  struct System_Collections_Generic_List_GameObject__o *teaEffectObjList; // x19
  RecipeRewardDialogComponent___c_c *v4; // x0
  struct RecipeRewardDialogComponent___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__47_0; // x20
  Il2CppObject *v7; // x21
  struct RecipeRewardDialogComponent___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42B39E9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_GameObject___ctor__);
    sub_B52984(&System_Action_GameObject__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_B52984(&Method_RecipeRewardDialogComponent___c__ClickSkip_b__47_0__);
    sub_B52984(&RecipeRewardDialogComponent___c_TypeInfo);
    byte_42B39E9 = 1;
  }
  if ( !this->fields.isSkip && this->fields.canSkip )
  {
    this->fields.isSkip = 1;
    teaEffectObjList = this->fields.teaEffectObjList;
    v4 = RecipeRewardDialogComponent___c_TypeInfo;
    if ( (BYTE3(RecipeRewardDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RecipeRewardDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecipeRewardDialogComponent___c_TypeInfo);
      v4 = RecipeRewardDialogComponent___c_TypeInfo;
    }
    static_fields = v4->static_fields;
    _9__47_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__47_0;
    if ( !_9__47_0 )
    {
      if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        static_fields = RecipeRewardDialogComponent___c_TypeInfo->static_fields;
      }
      v7 = (Il2CppObject *)static_fields->__9;
      _9__47_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_GameObject__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__47_0,
        v7,
        Method_RecipeRewardDialogComponent___c__ClickSkip_b__47_0__,
        (const MethodInfo_2627780 *)Method_System_Action_GameObject___ctor__);
      v8 = RecipeRewardDialogComponent___c_TypeInfo->static_fields;
      v8->__9__47_0 = (struct System_Action_GameObject__o *)_9__47_0;
      sub_B52920(
        (BattleServantConfConponent_o *)&v8->__9__47_0,
        (System_Int32_array **)_9__47_0,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
    }
    if ( !teaEffectObjList )
      sub_B52A5C(v4, method);
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)teaEffectObjList,
      (System_Action_T__o *)_9__47_0,
      (const MethodInfo_2FF231C *)Method_System_Collections_Generic_List_GameObject__ForEach__);
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

  if ( (byte_42B39EB & 1) == 0 )
  {
    sub_B52984(&Method_ActionExtensions_Call_bool___);
    byte_42B39EB = 1;
  }
  RecipeRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2D61628 *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
    sub_B52A5C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall RecipeRewardDialogComponent__OnClickCloseButton(
        RecipeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  Il2CppObject *current; // x20
  System_Action_o *v6; // x20
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B39EA & 1) == 0 )
  {
    sub_B52984(&Method_ActionExtensions_Call_bool___);
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_RecipeRewardDialogComponent_EndClose__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B39EA = 1;
  }
  memset(&v7, 0, sizeof(v7));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2D61628 *)Method_ActionExtensions_Call_bool___);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_B52A5C(0LL, v3);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v7,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resultItemObjList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v7,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v7.fields.current;
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
        UnityEngine_Object__Destroy_35616956((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v7,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_RecipeRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
  }
}


void __fastcall RecipeRewardDialogComponent__OnClickSwitchShowMode(
        RecipeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v6; // x8
  UISprite_o *v7; // x20
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x22
  __int64 v16; // x20
  int size; // w8
  __int64 v18; // x0
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B39EC & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_22983/*"treasurechest_btn"*/);
    sub_B52984(&StringLiteral_22985/*"treasurechest_btn_on"*/);
    byte_42B39EC = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_30;
  v6 = isShowPossessionNum ? (System_String_o **)&StringLiteral_22983/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_22985/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v6, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_30;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_30;
  v7 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v7, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_30:
    sub_B52A5C(viewChangeButton, v3);
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
    v18 = sub_B52A88(viewChangeButton);
    sub_B52A28(v18, 0LL);
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
  v19.fields.b = *p_a;
  v19.fields.g = *p_b;
  v19.fields.r = *p_g;
  v19.fields.a = *p_r;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v19, 0LL);
  resultItemObjList = this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_30;
  v16 = 0LL;
  while ( 1 )
  {
    size = resultItemObjList->fields._size;
    if ( (int)v16 >= size )
      break;
    if ( size <= (unsigned int)v16 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    viewChangeButton = (UIButton_o *)resultItemObjList->fields._items->m_Items[v16];
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButton,
          this->fields.isShowPossessionNum,
          0LL);
        resultItemObjList = this->fields.resultItemObjList;
        ++v16;
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
  __int64 v14; // x23
  void *viewChangeButton; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  WebViewObject_o *Component_WebViewObject; // x27
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x26
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x26
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct System_Collections_Generic_List_GameObject__o *teaEffectObjList; // x0
  UILabel_o *titleLabel; // x26
  UISprite_o *totalEventPointIcon; // x26
  int32_t eventPointItemId; // w27
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  UILabel_o *viewChangeButtonLabel; // x26
  UILabel_o *getTitleLabel; // x26
  UILabel_o *getNumLabel; // x26
  System_String_o *v52; // x27
  Il2CppObject *v53; // x0
  System_String_o *v54; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x25
  __int64 v57; // x26
  UILabel_o *totalNumLabel; // x25
  System_String_o *v59; // x27
  Il2CppObject *v60; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v61; // x26
  void **v62; // x25
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  GiftEntity_o *v69; // x26
  System_Action_int__o *v70; // x25
  __int64 v71; // x8
  bool v72; // w21
  UILabel_o *v73; // x22
  __int64 *v74; // x8
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Collections_Generic_List_GiftEntity__o *v81; // x21
  System_Action_o *v82; // x22
  const MethodInfo *v83; // x4
  __int64 v84; // x0
  struct System_Action_o *v86; // [xsp+8h] [xbp-68h]
  __int64 v87; // [xsp+10h] [xbp-60h] BYREF
  int v88; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_42B39E5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_int___ctor__);
    sub_B52984(&System_Action_int__TypeInfo);
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_BasicHelper_ForEach_int___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIScrollBar___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_B52984(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____68597944);
    sub_B52984(&GiftEntity_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&long_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_B52984(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_RecipeRewardDialogComponent___c__DisplayClass43_0__Open_b__0__);
    sub_B52984(&Method_RecipeRewardDialogComponent___c__DisplayClass43_0__Open_b__1__);
    sub_B52984(&RecipeRewardDialogComponent___c__DisplayClass43_0_TypeInfo);
    sub_B52984(&StringLiteral_13559/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/);
    sub_B52984(&StringLiteral_11130/*"RECIPE_EVENT_ITEM_GET_DIALOG_TITLE"*/);
    sub_B52984(&StringLiteral_11134/*"RECIPE_EVENT_TOTAL_POINT_NUM"*/);
    sub_B52984(&StringLiteral_701/*"+"*/);
    sub_B52984(&StringLiteral_11128/*"RECIPE_EVENT_GET_POINT_NUM"*/);
    sub_B52984(&StringLiteral_22983/*"treasurechest_btn"*/);
    sub_B52984(&StringLiteral_13558/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/);
    sub_B52984(&StringLiteral_2510/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_B52984(&StringLiteral_22989/*"treasurechest_img_bg_reward"*/);
    sub_B52984(&StringLiteral_11135/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/);
    byte_42B39E5 = 1;
  }
  v14 = sub_B52A54(RecipeRewardDialogComponent___c__DisplayClass43_0_TypeInfo);
  RecipeRewardDialogComponent___c__DisplayClass43_0___ctor(
    (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_58;
  *(_QWORD *)(v14 + 24) = this;
  sub_B52920((BattleServantConfConponent_o *)(v14 + 24), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.state = 1;
  if ( !viewChangeButton )
    goto LABEL_58;
  v86 = closeCallback;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)viewChangeButton,
                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_22983/*"treasurechest_btn"*/, 0LL);
  this->fields.getEffect = getEffect;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.getEffect,
    (System_Int32_array **)getEffect,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.isShowPossessionNum = 0;
  this->fields.playCnt = 0;
  *(_WORD *)&this->fields.isSkip = 0;
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v30;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.resultItemObjList,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v37,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultIconHideObjList = (struct System_Collections_Generic_List_GameObject__o *)v37;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.resultIconHideObjList,
    (System_Int32_array **)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  teaEffectObjList = this->fields.teaEffectObjList;
  if ( teaEffectObjList )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)teaEffectObjList,
      (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_GameObject__Clear__);
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
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_11130/*"RECIPE_EVENT_ITEM_GET_DIALOG_TITLE"*/, 0LL);
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
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_22989/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_22989/*"treasurechest_img_bg_reward"*/, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_58;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_22983/*"treasurechest_btn"*/, 0LL);
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
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_11135/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !viewChangeButtonLabel )
    goto LABEL_58;
  UILabel__set_text(viewChangeButtonLabel, (System_String_o *)viewChangeButton, 0LL);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_11128/*"RECIPE_EVENT_GET_POINT_NUM"*/, 0LL);
  if ( !getTitleLabel )
    goto LABEL_58;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  getNumLabel = this->fields.getNumLabel;
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_2510/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v88 = this->fields.maxPlayCnt * eventRecipeEntity->fields.eventPointNum;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v88);
  v54 = System_String__Format(v52, v53, 0LL);
  viewChangeButton = System_String__Concat_44568316((System_String_o *)StringLiteral_701/*"+"*/, v54, 0LL);
  if ( !getNumLabel )
    goto LABEL_58;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0LL);
  if ( !eventRecipeGiftEntity )
    goto LABEL_58;
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventRecipeGiftEntity->fields.eventId, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v57 = EventPointNoGroup;
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_11134/*"RECIPE_EVENT_TOTAL_POINT_NUM"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_58;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v59 = LocalizationManager__Get((System_String_o *)StringLiteral_2510/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v87 = v57;
  v60 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v87);
  viewChangeButton = System_String__Format(v59, v60, 0LL);
  if ( !totalNumLabel )
    goto LABEL_58;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0LL);
  v61 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v61,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  *(_QWORD *)(v14 + 16) = v61;
  v62 = (void **)(v14 + 16);
  sub_B52920((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)v61, v63, v64, v65, v66, v67, v68);
  v69 = (GiftEntity_o *)sub_B52A54(GiftEntity_TypeInfo);
  GiftEntity___ctor(v69, 0LL);
  if ( !v69 )
    goto LABEL_58;
  v69->fields.type = 2;
  v69->fields.objectId = eventRecipeEntity->fields.eventPointItemId;
  v69->fields.num = eventRecipeEntity->fields.eventPointNum * giftIds->max_length;
  viewChangeButton = *v62;
  if ( !*v62 )
    goto LABEL_58;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)viewChangeButton,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v69,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
  v70 = (System_Action_int__o *)sub_B52A54(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v70,
    (Il2CppObject *)v14,
    Method_RecipeRewardDialogComponent___c__DisplayClass43_0__Open_b__0__,
    (const MethodInfo_26261F0 *)Method_System_Action_int___ctor__);
  BasicHelper__ForEach_int_(
    (System_Collections_Generic_IEnumerable_T__o *)giftIds,
    (System_Action_T__o *)v70,
    (const MethodInfo_1A4297C *)Method_BasicHelper_ForEach_int___);
  v71 = *(_QWORD *)(v14 + 16);
  if ( !v71 )
    goto LABEL_58;
  viewChangeButton = this->fields.scrollBar;
  this->fields.maxPlayCnt = *(_DWORD *)(v71 + 24);
  if ( !viewChangeButton )
    goto LABEL_58;
  viewChangeButton = UnityEngine_Component__GetComponent_WebViewObject_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
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
  v72 = pointRewards && pointRewards->max_length != 0;
  viewChangeButton = this->fields.closeButton;
  if ( !viewChangeButton )
    goto LABEL_58;
  viewChangeButton = UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_58;
  viewChangeButton = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       1,
                       (const MethodInfo_1A49604 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____68597944);
  if ( !viewChangeButton )
    goto LABEL_58;
  if ( !*((_DWORD *)viewChangeButton + 6) )
  {
LABEL_59:
    v84 = sub_B52A88(viewChangeButton);
    sub_B52A28(v84, 0LL);
  }
  v73 = (UILabel_o *)*((_QWORD *)viewChangeButton + 4);
  if ( v72 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v74 = &StringLiteral_13559/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v74 = &StringLiteral_13558/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/;
  }
  viewChangeButton = LocalizationManager__Get((System_String_o *)*v74, 0LL);
  if ( !v73
    || (UILabel__set_text(v73, (System_String_o *)viewChangeButton, 0LL),
        this->fields.closeCallbackFunc = v86,
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
          (System_Int32_array **)v86,
          v75,
          v76,
          v77,
          v78,
          v79,
          v80),
        (viewChangeButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_58:
    sub_B52A5C(viewChangeButton, v16);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  v81 = *(System_Collections_Generic_List_GiftEntity__o **)(v14 + 16);
  v82 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v82,
    (Il2CppObject *)v14,
    Method_RecipeRewardDialogComponent___c__DisplayClass43_0__Open_b__1__,
    0LL);
  RecipeRewardDialogComponent__SetResultData(this, v81, eventRecipeEntity, v82, v83);
}


void __fastcall RecipeRewardDialogComponent__SetResultData(
        RecipeRewardDialogComponent_o *this,
        System_Collections_Generic_List_GiftEntity__o *giftList,
        EventRecipeEntity_o *eventRecipeEntity,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v9; // x23
  UnityEngine_Component_o *scrollView; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v24; // x22

  if ( (byte_42B39E6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_GiftEntity___ctor__);
    sub_B52984(&System_Action_GiftEntity__TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity__ForEach__);
    sub_B52984(&Method_RecipeRewardDialogComponent___c__DisplayClass44_0__SetResultData_b__0__);
    sub_B52984(&RecipeRewardDialogComponent___c__DisplayClass44_0_TypeInfo);
    byte_42B39E6 = 1;
  }
  v9 = sub_B52A54(RecipeRewardDialogComponent___c__DisplayClass44_0_TypeInfo);
  RecipeRewardDialogComponent___c__DisplayClass44_0___ctor(
    (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)v9,
    0LL);
  if ( !v9 )
    goto LABEL_12;
  *(_QWORD *)(v9 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = eventRecipeEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)(v9 + 24),
    (System_Int32_array **)eventRecipeEntity,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_GiftEntity__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v24,
    (Il2CppObject *)v9,
    Method_RecipeRewardDialogComponent___c__DisplayClass44_0__SetResultData_b__0__,
    (const MethodInfo_2627780 *)Method_System_Action_GiftEntity___ctor__);
  if ( !giftList )
    goto LABEL_12;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)giftList,
    (System_Action_T__o *)v24,
    (const MethodInfo_2FF231C *)Method_System_Collections_Generic_List_GiftEntity__ForEach__);
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  scrollView,
                                                  (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIScrollView___)) == 0LL
    || (UIScrollView__ResetPosition((UIScrollView_o *)scrollView, 0LL),
        (scrollView = (UnityEngine_Component_o *)this->fields.listRoot) == 0LL)
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  scrollView,
                                                  (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))scrollView->klass[1]._1.castClass)(
          scrollView,
          scrollView->klass[1]._1.declaringType),
        (scrollView = (UnityEngine_Component_o *)this->fields.iconListRoot) == 0LL)
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  scrollView,
                                                  (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
  {
LABEL_12:
    sub_B52A5C(scrollView, v11);
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

  if ( (byte_42B39E7 & 1) == 0 )
  {
    sub_B52984(&RecipeRewardDialogComponent__StartDisp_d__45_TypeInfo);
    byte_42B39E7 = 1;
  }
  v3 = sub_B52A54(RecipeRewardDialogComponent__StartDisp_d__45_TypeInfo);
  RecipeRewardDialogComponent__StartDisp_d__45___ctor((RecipeRewardDialogComponent__StartDisp_d__45_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_42B39E8 & 1) == 0 )
  {
    sub_B52984(&RecipeRewardDialogComponent__StartRewardAction_d__46_TypeInfo);
    byte_42B39E8 = 1;
  }
  v5 = sub_B52A54(RecipeRewardDialogComponent__StartRewardAction_d__46_TypeInfo);
  RecipeRewardDialogComponent__StartRewardAction_d__46___ctor(
    (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = rewardAction;
  sub_B52920(
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

  if ( (byte_42B39ED & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B39ED = 1;
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
    sub_B52A5C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecipeRewardDialogComponent_GetEffect___ctor(
        RecipeRewardDialogComponent_GetEffect_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B52920(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  return (System_IAsyncResult_o *)sub_B52928(this, v6, callback, object);
}


UnityEngine_GameObject_o *__fastcall RecipeRewardDialogComponent_GetEffect__EndInvoke(
        RecipeRewardDialogComponent_GetEffect_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  return (UnityEngine_GameObject_o *)sub_B5292C(result, 0LL, method);
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
        sub_B52A40(*(_QWORD *)&v31->fields.extra_arg, parenTransform, method, v3);
      v35 = sub_B529B4(v32);
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
            v45 = sub_B529AC(v32);
            v46 = sub_B52DB0(v32);
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
                  v27 = sub_AEB880(parenTransform, v49, v50, v47);
                }
                v17 = *(_QWORD *)(v27 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&parenTransform->klass->vtable._1_Finalize.methodPtr
                      + 2 * *(unsigned __int16 *)(v32 + 72));
              }
              v28 = (__int64 (__fastcall **)(UnityEngine_Transform_o *, _QWORD))sub_B52A34(v17, v32);
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
                  v16 = sub_AEB880(parenTransform, class_0, v10, v12);
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
          v37 = sub_B529AC(v32);
          v38 = sub_B52DB0(v32);
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
                v29 = sub_AEB880(v33, v41, v42, v39);
              }
              v26 = *(_QWORD *)(v29 + 8);
            }
            else
            {
              v26 = *(_QWORD *)(*v33 + 16LL * *(unsigned __int16 *)(v32 + 72) + 320);
            }
            v30 = (__int64 (__fastcall **)(__int64 *, UnityEngine_Transform_o *, _QWORD))sub_B52A34(v26, v32);
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
                v25 = sub_AEB880(v33, v20, v19, v21);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  RecipeRewardDialogComponent__StartDisp_d__45_o *v8; // x19
  struct RecipeRewardDialogComponent_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  bool result; // w0
  BattleServantConfConponent_o *p_listRewardAction_5__2; // x21
  _DWORD *listRewardAction_5__2; // x25
  int _4__this_high; // w8
  int32_t maxPlayCnt; // w9
  int v22; // w21
  UIProgressBar_o *v23; // x20
  float value; // s0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  int v32; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  int v40; // w23
  __int64 v41; // x22
  __int64 v42; // x23
  __int64 v43; // x24
  int v44; // w8
  __int64 v45; // x22
  System_Collections_IEnumerator_o *started; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  int v53; // w8
  __int64 v54; // x8
  int32_t playCnt; // w8
  BattleServantConfConponent_c *klass; // x22
  __int64 v57; // x19
  int namespaze; // w8
  __int64 v59; // x8
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x21
  __int64 v61; // x19
  int size; // w8
  Il2CppObject *current; // x19
  float scrollWait; // s8
  UnityEngine_WaitForSeconds_o *v65; // x20
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Collections_Generic_List_Enumerator_T__o v72; // [xsp+8h] [xbp-68h] BYREF

  v8 = this;
  if ( (byte_42AF29B & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIScrollBar___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__);
    sub_B52984(&System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&RecipeRewardDialogComponent_RewardAction_TypeInfo);
    this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)sub_B52984(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_42AF29B = 1;
  }
  memset(&v72, 0, sizeof(v72));
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v10 = (UnityEngine_WaitForSeconds_o *)sub_B52A54(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v10, 0.3, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v10;
      sub_B52920(
        (BattleServantConfConponent_o *)&v8->fields.__2__current,
        (System_Int32_array **)v10,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      result = 1;
      v8->fields.__1__state = 1;
      return result;
    case 1:
      p_listRewardAction_5__2 = (BattleServantConfConponent_o *)&v8->fields._listRewardAction_5__2;
      v8->fields.__1__state = -1;
      goto LABEL_18;
    case 2:
      p_listRewardAction_5__2 = (BattleServantConfConponent_o *)&v8->fields._listRewardAction_5__2;
      listRewardAction_5__2 = v8->fields._listRewardAction_5__2;
      v8->fields.__1__state = -1;
      if ( !listRewardAction_5__2 )
        goto LABEL_35;
      goto LABEL_36;
    case 3:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_35;
      this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)_4__this->fields.iconListRoot;
      if ( !this )
        goto LABEL_35;
      this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                 (UnityEngine_Component_o *)this,
                                                                 (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !this )
        goto LABEL_35;
      _4__this_high = HIDWORD(this->fields.__4__this);
      maxPlayCnt = _4__this->fields.maxPlayCnt;
      this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)_4__this->fields.scrollBar;
      v22 = maxPlayCnt % _4__this_high ? maxPlayCnt / _4__this_high + 1 : maxPlayCnt / _4__this_high;
      if ( !this )
        goto LABEL_35;
      this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                 (UnityEngine_Component_o *)this,
                                                                 (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
      if ( !this )
        goto LABEL_35;
      v23 = (UIProgressBar_o *)this;
      value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
      UIProgressBar__set_value(v23, (float)(1.0 / (float)((float)((float)v22 * 0.5) + -1.0)) + value, 0LL);
      v8->fields.__2__current = 0LL;
      p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B52920(p__2__current, 0LL, v26, v27, v28, v29, v30, v31);
      v32 = 4;
      goto LABEL_84;
    case 4:
      p_listRewardAction_5__2 = (BattleServantConfConponent_o *)&v8->fields._listRewardAction_5__2;
      v8->fields.__1__state = -1;
      break;
    default:
      return 0;
  }
  while ( 1 )
  {
    p_listRewardAction_5__2->klass = 0LL;
    sub_B52920(p_listRewardAction_5__2, 0LL, v2, v3, v4, v5, v6, v7);
LABEL_18:
    v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v33,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction___ctor__);
    p_listRewardAction_5__2->klass = (BattleServantConfConponent_c *)v33;
    sub_B52920(p_listRewardAction_5__2, (System_Int32_array **)v33, v34, v35, v36, v37, v38, v39);
    if ( !_4__this )
      goto LABEL_35;
    if ( _4__this->fields.maxItemDrawNum >= 1 )
    {
      v40 = 0;
      while ( v40 + _4__this->fields.playCnt < _4__this->fields.maxPlayCnt )
      {
        v41 = sub_B52A54(RecipeRewardDialogComponent_RewardAction_TypeInfo);
        System_Object___ctor((Il2CppObject *)v41, 0LL);
        if ( !v41 )
          goto LABEL_35;
        *(_DWORD *)(v41 + 16) = v40;
        *(_DWORD *)(v41 + 20) = v40 + _4__this->fields.playCnt;
        this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)p_listRewardAction_5__2->klass;
        if ( !p_listRewardAction_5__2->klass )
          goto LABEL_35;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__Add__);
        if ( ++v40 >= _4__this->fields.maxItemDrawNum )
          break;
      }
    }
    if ( !p_listRewardAction_5__2->klass )
      goto LABEL_35;
    _4__this->fields.playCnt += LODWORD(p_listRewardAction_5__2->klass->_1.namespaze);
    listRewardAction_5__2 = p_listRewardAction_5__2->klass;
    if ( !p_listRewardAction_5__2->klass )
      goto LABEL_35;
    v42 = 0LL;
    v43 = 32LL;
    while ( 1 )
    {
      v44 = listRewardAction_5__2[6];
      if ( (int)v42 >= v44 )
        break;
      if ( v44 <= (unsigned int)v42 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v45 = *(_QWORD *)(*((_QWORD *)listRewardAction_5__2 + 2) + v43);
      if ( listRewardAction_5__2[6] <= (unsigned int)v42 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      started = RecipeRewardDialogComponent__StartRewardAction(
                  _4__this,
                  *(RecipeRewardDialogComponent_RewardAction_o **)(*((_QWORD *)listRewardAction_5__2 + 2) + 8 * v42 + 32),
                  0LL);
      this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)UnityEngine_MonoBehaviour__StartCoroutine_35611808(
                                                                 (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                 started,
                                                                 0LL);
      if ( v45 )
      {
        *(_QWORD *)(v45 + 32) = this;
        sub_B52920(
          (BattleServantConfConponent_o *)(v45 + 32),
          (System_Int32_array **)this,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52);
        listRewardAction_5__2 = p_listRewardAction_5__2->klass;
        ++v42;
        v43 += 8LL;
        if ( p_listRewardAction_5__2->klass )
          continue;
      }
      goto LABEL_35;
    }
LABEL_36:
    v53 = listRewardAction_5__2[6];
    if ( !v53 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v54 = *(_QWORD *)(*((_QWORD *)listRewardAction_5__2 + 2) + 8LL * (v53 - 1) + 32);
    if ( !v54 )
      goto LABEL_35;
    if ( *(_BYTE *)(v54 + 24) )
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
        v8->fields.__2__current = 0LL;
        p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B52920(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
        v32 = 2;
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
      v65 = (UnityEngine_WaitForSeconds_o *)sub_B52A54(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v65, scrollWait, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v65;
      p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B52920(p__2__current, (System_Int32_array **)v65, v66, v67, v68, v69, v70, v71);
      v32 = 3;
LABEL_84:
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = v32;
      return (unsigned __int8)&dword_0 + 1;
    }
  }
  klass = p_listRewardAction_5__2->klass;
  if ( !p_listRewardAction_5__2->klass )
    goto LABEL_35;
  v57 = 0LL;
  while ( 1 )
  {
    namespaze = (int)klass->_1.namespaze;
    if ( (int)v57 >= namespaze )
      break;
    if ( namespaze <= (unsigned int)v57 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v59 = *(_QWORD *)&klass->_1.name[8 * v57 + 32];
    if ( v59 )
    {
      UnityEngine_MonoBehaviour__StopCoroutine_35612476(
        (UnityEngine_MonoBehaviour_o *)_4__this,
        *(UnityEngine_Coroutine_o **)(v59 + 32),
        0LL);
      klass = p_listRewardAction_5__2->klass;
      ++v57;
      if ( p_listRewardAction_5__2->klass )
        continue;
    }
    goto LABEL_35;
  }
  resultItemObjList = _4__this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_35;
  v61 = 0LL;
  while ( 1 )
  {
    size = resultItemObjList->fields._size;
    if ( (int)v61 >= size )
      break;
    if ( size <= (unsigned int)v61 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    this = (RecipeRewardDialogComponent__StartDisp_d__45_o *)resultItemObjList->fields._items->m_Items[v61];
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      resultItemObjList = _4__this->fields.resultItemObjList;
      ++v61;
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
                                                             (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
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
    sub_B52A5C(this, method);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v72,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v72,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v72.fields.current;
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
      UnityEngine_Object__Destroy_35616956((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v72,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_RecipeRewardDialogComponent__StartDisp_d__45_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  int32_t _1__state; // w8
  struct RecipeRewardDialogComponent_o *_4__this; // x22
  int32_t i_5__2; // w8
  struct RecipeRewardDialogComponent_RewardAction_o *rewardAction; // x9
  float itemDispWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v8; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  bool result; // w0
  struct RecipeRewardDialogComponent_RewardAction_o **p_rewardAction; // x19
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x21
  __int64 playCnt; // x23
  RecipeRewardDialogComponent_GetEffect_o *getEffect; // x20
  const MethodInfo *v21; // x2
  UnityEngine_GameObject_o *v22; // x20
  struct RecipeRewardDialogComponent_RewardAction_o *v23; // x8
  struct System_Collections_Generic_List_GameObject__o *v24; // x23
  __int64 v25; // x24
  UnityEngine_Transform_o *v26; // x21
  int v27; // s0
  float v30; // s8
  UnityEngine_WaitForSeconds_o *v31; // x20
  BattleServantConfConponent_o *v32; // x19
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct System_Collections_Generic_List_GameObject__o *resultIconHideObjList; // x20
  struct RecipeRewardDialogComponent_RewardAction_o *v40; // x8
  struct RecipeRewardDialogComponent_RewardAction_o *v41; // t1
  __int64 v42; // x21
  struct System_Collections_Generic_List_GameObject__o *v43; // x20
  __int64 v44; // x21
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_42AF29C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)sub_B52984(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_42AF29C = 1;
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
        v8 = (UnityEngine_WaitForSeconds_o *)sub_B52A54(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v8, itemDispWaitTime, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v8;
        p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B52920(p__2__current, (System_Int32_array **)v8, v10, v11, v12, v13, v14, v15);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
        return result;
      }
      resultItemObjList = _4__this->fields.resultItemObjList;
      if ( resultItemObjList )
      {
        playCnt = rewardAction->fields.playCnt;
        getEffect = _4__this->fields.getEffect;
        if ( resultItemObjList->fields._size <= (unsigned int)playCnt )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
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
                                                                               v21);
            if ( this )
            {
              v22 = (UnityEngine_GameObject_o *)this;
              this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)UnityEngine_GameObject__get_transform(
                                                                                 (UnityEngine_GameObject_o *)this,
                                                                                 0LL);
              v23 = v2->fields.rewardAction;
              if ( v23 )
              {
                v24 = _4__this->fields.resultItemObjList;
                if ( v24 )
                {
                  v25 = v23->fields.playCnt;
                  v26 = (UnityEngine_Transform_o *)this;
                  if ( v24->fields._size <= (unsigned int)v25 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
                  this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)v24->fields._items->m_Items[v25];
                  if ( this )
                  {
                    this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)UnityEngine_GameObject__get_transform(
                                                                                       (UnityEngine_GameObject_o *)this,
                                                                                       0LL);
                    if ( this )
                    {
                      *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Transform__get_localPosition(
                                                         (UnityEngine_Transform_o *)this,
                                                         0LL);
                      if ( v26 )
                      {
                        UnityEngine_Transform__set_localPosition(v26, *(UnityEngine_Vector3_o *)&v27, 0LL);
                        this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)UnityEngine_GameObject__get_transform(
                                                                                           v22,
                                                                                           0LL);
                        if ( this )
                        {
                          v45.fields.x = 1.25;
                          v45.fields.y = 1.25;
                          v45.fields.z = 1.25;
                          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v45, 0LL);
                          this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)_4__this->fields.teaEffectObjList;
                          if ( this )
                          {
                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                              (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
                              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__);
                            v30 = _4__this->fields.itemDispWaitTime;
                            v31 = (UnityEngine_WaitForSeconds_o *)sub_B52A54(UnityEngine_WaitForSeconds_TypeInfo);
                            UnityEngine_WaitForSeconds___ctor(v31, v30, 0LL);
                            v2->fields.__2__current = (Il2CppObject *)v31;
                            v32 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
                            sub_B52920(v32, (System_Int32_array **)v31, v33, v34, v35, v36, v37, v38);
                            *(_DWORD *)&v32[-1].fields.isOpenAfter = 2;
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
    sub_B52A5C(this, method);
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
    v41 = v2->fields.rewardAction;
    p_rewardAction = &v2->fields.rewardAction;
    v40 = v41;
    if ( !v41 || !resultIconHideObjList )
      goto LABEL_45;
    v42 = v40->fields.playCnt;
    if ( resultIconHideObjList->fields._size <= (unsigned int)v42 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)resultIconHideObjList->fields._items->m_Items[v42];
    if ( !this )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  if ( !*p_rewardAction )
    goto LABEL_45;
  v43 = _4__this->fields.resultItemObjList;
  if ( !v43 )
    goto LABEL_45;
  v44 = (*p_rewardAction)->fields.playCnt;
  if ( v43->fields._size <= (unsigned int)v44 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  this = (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)v43->fields._items->m_Items[v44];
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_RecipeRewardDialogComponent__StartRewardAction_d__46_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AF295 & 1) == 0 )
  {
    sub_B52984(&RecipeRewardDialogComponent___c_TypeInfo);
    byte_42AF295 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(RecipeRewardDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)RecipeRewardDialogComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
  if ( (byte_42AF296 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AF296 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35616956((UnityEngine_Object_o *)x, 0LL);
}


void __fastcall RecipeRewardDialogComponent___c__DisplayClass43_0___ctor(
        RecipeRewardDialogComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecipeRewardDialogComponent___c__DisplayClass43_0___Open_b__0(
        RecipeRewardDialogComponent___c__DisplayClass43_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *giftList; // x20
  DataManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_42AF297 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF297 = 1;
  }
  giftList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.giftList;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_GiftMaster___)) == 0LL
    || (Instance = (DataManager_o *)GiftMaster__GetGiftListById((GiftMaster_o *)Instance, id, 0LL), !giftList) )
  {
    sub_B52A5C(Instance, v7);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    giftList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
}


void __fastcall RecipeRewardDialogComponent___c__DisplayClass43_0___Open_b__1(
        RecipeRewardDialogComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  RecipeRewardDialogComponent___c__DisplayClass43_0_o *v2; // x19
  struct RecipeRewardDialogComponent_o *_4__this; // x8
  System_Action_o *_9__2; // x21
  BaseDialog_o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  v2 = this;
  if ( (byte_42AF298 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)sub_B52984(&Method_RecipeRewardDialogComponent___c__DisplayClass43_0__Open_b__2__);
    byte_42AF298 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  _4__this->fields.state = 2;
  _9__2 = v2->fields.__9__2;
  v5 = (BaseDialog_o *)v2->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_RecipeRewardDialogComponent___c__DisplayClass43_0__Open_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    sub_B52920(
      (BattleServantConfConponent_o *)&v2->fields.__9__2,
      (System_Int32_array **)_9__2,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  if ( !v5 )
LABEL_8:
    sub_B52A5C(this, method);
  BaseDialog__Open(v5, _9__2, 0, 0LL);
}


void __fastcall RecipeRewardDialogComponent___c__DisplayClass43_0___Open_b__2(
        RecipeRewardDialogComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *_4__this; // x0

  if ( (byte_42AF299 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_13139/*"StartDisp"*/);
    byte_42AF299 = 1;
  }
  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
  UnityEngine_MonoBehaviour__StartCoroutine(_4__this, (System_String_o *)StringLiteral_13139/*"StartDisp"*/, 0LL);
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
  struct RecipeRewardDialogComponent_o *_4__this; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *prefabResultItem; // x20
  UnityEngine_GameObject_o *v7; // x20
  struct RecipeRewardDialogComponent_o *v8; // x8
  UnityEngine_Transform_o *transform; // x22
  int v10; // s0
  struct RecipeRewardDialogComponent_o *v13; // x8
  ItemIconComponent_o *v14; // x22
  int32_t v15; // w3
  struct RecipeRewardDialogComponent_o *v16; // x8
  struct RecipeRewardDialogComponent_o *v17; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *prefabTeaItem; // x21
  UnityEngine_GameObject_o *v19; // x21
  struct RecipeRewardDialogComponent_o *v20; // x8
  UnityEngine_Transform_o *v21; // x22
  int v22; // s0
  struct RecipeRewardDialogComponent_o *v25; // x8
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  int32_t eventId; // w22
  UISprite_o *v28; // x20
  Il2CppObject *v29; // x0
  System_String_o *v30; // x23
  struct RecipeRewardDialogComponent_o *v31; // x8
  int32_t iconId; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42AF29A & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)sub_B52984(&StringLiteral_19525/*"icon_{0}"*/);
    byte_42AF29A = 1;
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
                                                                  (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_38;
  v7 = (UnityEngine_GameObject_o *)this;
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  0LL);
  v8 = v4->fields.__4__this;
  if ( !v8 )
    goto LABEL_38;
  if ( !this )
    goto LABEL_38;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v8->fields.listRoot, 0LL);
  transform = UnityEngine_GameObject__get_transform(v7, 0LL);
  *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_38;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v10, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_GameObject__get_transform(v7, 0LL);
  v13 = v4->fields.__4__this;
  if ( !v13 )
    goto LABEL_38;
  if ( !this )
    goto LABEL_38;
  v33.fields.x = v13->fields.iconScale;
  v33.fields.y = v33.fields.x;
  v33.fields.z = v33.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v33, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v7,
                                                                  (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
  if ( !gift )
    goto LABEL_38;
  v14 = (ItemIconComponent_o *)this;
  if ( !this )
    goto LABEL_38;
  v15 = gift->fields.num <= 1 ? -1 : gift->fields.num;
  ItemIconComponent__SetGift((ItemIconComponent_o *)this, gift->fields.type, gift->fields.objectId, v15, 0, 0LL);
  ItemIconComponent__CalcSetPossession(v14, gift->fields.type, gift->fields.objectId, 0LL);
  v16 = v4->fields.__4__this;
  if ( !v16 )
    goto LABEL_38;
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)v16->fields.resultItemObjList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v7,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__);
  v17 = v4->fields.__4__this;
  if ( !v17 )
    goto LABEL_38;
  prefabTeaItem = (UnityEngine_UI_Dropdown_DropdownItem_o *)v17->fields.prefabTeaItem;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                                  prefabTeaItem,
                                                                  (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_38;
  v19 = (UnityEngine_GameObject_o *)this;
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  0LL);
  v20 = v4->fields.__4__this;
  if ( !v20 )
    goto LABEL_38;
  if ( !this )
    goto LABEL_38;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v20->fields.iconListRoot, 0LL);
  v21 = UnityEngine_GameObject__get_transform(v19, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_GameObject__get_transform(v7, 0LL);
  if ( !this )
    goto LABEL_38;
  *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  if ( !v21 )
    goto LABEL_38;
  UnityEngine_Transform__set_localPosition(v21, *(UnityEngine_Vector3_o *)&v22, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_GameObject__get_transform(v19, 0LL);
  v25 = v4->fields.__4__this;
  if ( !v25 )
    goto LABEL_38;
  if ( !this )
    goto LABEL_38;
  v34.fields.x = v25->fields.iconScale;
  v34.fields.y = v34.fields.x;
  v34.fields.z = v34.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v34, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v19,
                                                                  (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  eventRecipeEntity = v4->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    goto LABEL_38;
  eventId = eventRecipeEntity->fields.eventId;
  v28 = (UISprite_o *)this;
  iconId = eventRecipeEntity->fields.iconId;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v30 = System_String__Format((System_String_o *)StringLiteral_19525/*"icon_{0}"*/, v29, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28377220(eventId, v28, v30, 0LL);
  UnityEngine_GameObject__SetActive(v19, 1, 0LL);
  v31 = v4->fields.__4__this;
  if ( !v31 || (this = (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)v31->fields.resultIconHideObjList) == 0LL )
LABEL_38:
    sub_B52A5C(this, gift);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__);
}