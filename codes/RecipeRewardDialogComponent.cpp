void __fastcall RecipeRewardDialogComponent___ctor(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct UnityEngine_Color_array *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_40F82DD & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Color___TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v5);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    byte_40F82DD = 1;
  }
  this->fields.iconScale = 0.85;
  v7 = (struct UnityEngine_Color_array *)sub_B17014(UnityEngine_Color___TypeInfo, 2LL, v2);
  this->fields.viewChangeButtonLabelEffectColors = v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.viewChangeButtonLabelEffectColors,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.teaEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v18;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.teaEffectObjList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_GameObject__o *teaEffectObjList; // x19
  RecipeRewardDialogComponent___c_c *v11; // x0
  struct RecipeRewardDialogComponent___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__47_0; // x20
  Il2CppObject *v14; // x21
  struct RecipeRewardDialogComponent___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40F82D8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_GameObject___ctor__, method);
    sub_B16FFC(&System_Action_GameObject__TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__ForEach__, v7);
    sub_B16FFC(&Method_RecipeRewardDialogComponent___c__ClickSkip_b__47_0__, v8);
    sub_B16FFC(&RecipeRewardDialogComponent___c_TypeInfo, v9);
    byte_40F82D8 = 1;
  }
  if ( !this->fields.isSkip && this->fields.canSkip )
  {
    this->fields.isSkip = 1;
    teaEffectObjList = this->fields.teaEffectObjList;
    v11 = RecipeRewardDialogComponent___c_TypeInfo;
    if ( (BYTE3(RecipeRewardDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RecipeRewardDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecipeRewardDialogComponent___c_TypeInfo);
      v11 = RecipeRewardDialogComponent___c_TypeInfo;
    }
    static_fields = v11->static_fields;
    _9__47_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__47_0;
    if ( !_9__47_0 )
    {
      if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        static_fields = RecipeRewardDialogComponent___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__47_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                        System_Action_GameObject__TypeInfo,
                                                                                        method,
                                                                                        v2,
                                                                                        v3,
                                                                                        v4);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__47_0,
        v14,
        Method_RecipeRewardDialogComponent___c__ClickSkip_b__47_0__,
        (const MethodInfo_24B7310 *)Method_System_Action_GameObject___ctor__);
      v15 = RecipeRewardDialogComponent___c_TypeInfo->static_fields;
      v15->__9__47_0 = (struct System_Action_GameObject__o *)_9__47_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v15->__9__47_0,
        (System_Int32_array **)_9__47_0,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    if ( !teaEffectObjList )
      sub_B170D4();
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)teaEffectObjList,
      (System_Action_T__o *)_9__47_0,
      (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
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

  if ( (byte_40F82DA & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_bool___, method);
    byte_40F82DA = 1;
  }
  RecipeRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2D39EF8 *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(closeCallbackFunc, 0LL);
  }
}


void __fastcall RecipeRewardDialogComponent__Init(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
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
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  Il2CppObject *current; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Action_o *v17; // x20
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F82D9 & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_bool___, method);
    sub_B16FFC(&System_Action_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_RecipeRewardDialogComponent_EndClose__, v9);
    sub_B16FFC(&SoundManager_TypeInfo, v10);
    byte_40F82D9 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2D39EF8 *)Method_ActionExtensions_Call_bool___);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_B170D4();
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v18,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resultItemObjList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v18,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v18.fields.current;
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
        UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v18,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v17 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_RecipeRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v17, 0LL);
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
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v12; // x8
  UnityEngine_Component_o *v13; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UISprite_o *v15; // x20
  System_String_o *normalSprite; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  UILabel_o *viewChangeButtonLabel; // x0
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x22
  __int64 v27; // x20
  int size; // w8
  UnityEngine_GameObject_o *v29; // x0
  ItemIconComponent_o *Component_srcLineSprite; // x0
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F82DB & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_22700, v8);
    sub_B16FFC(&StringLiteral_22702, v9);
    byte_40F82DB = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_30;
  v12 = isShowPossessionNum ? (System_String_o **)&StringLiteral_22700 : (System_String_o **)&StringLiteral_22702;
  UIButton__set_normalSprite(viewChangeButton, *v12, 0LL);
  v13 = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  if ( !v13 )
    goto LABEL_30;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              v13,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_30;
  v15 = (UISprite_o *)Component_WebViewObject;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(v15, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_30:
    sub_B170D4();
  viewChangeButtonLabel = this->fields.viewChangeButtonLabel;
  max_length = viewChangeButtonLabelEffectColors->max_length;
  if ( !this->fields.isShowPossessionNum )
  {
    if ( max_length )
    {
      p_g = &viewChangeButtonLabelEffectColors->m_Items[0].fields.g;
      p_b = &viewChangeButtonLabelEffectColors->m_Items[0].fields.b;
      p_a = &viewChangeButtonLabelEffectColors->m_Items[0].fields.a;
      p_r = &viewChangeButtonLabelEffectColors->m_Items[1].fields.r;
      if ( !viewChangeButtonLabel )
        goto LABEL_30;
      goto LABEL_22;
    }
LABEL_32:
    sub_B17100(viewChangeButtonLabel, v17, v18);
    sub_B170A0();
  }
  if ( max_length <= 1 )
    goto LABEL_32;
  p_g = &viewChangeButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &viewChangeButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &viewChangeButtonLabelEffectColors->m_Items[1].fields.a;
  p_r = &viewChangeButtonLabelEffectColors->m_Items[2].fields.r;
  if ( !viewChangeButtonLabel )
    goto LABEL_30;
LABEL_22:
  v31.fields.b = *p_a;
  v31.fields.g = *p_b;
  v31.fields.r = *p_g;
  v31.fields.a = *p_r;
  UILabel__set_effectColor(viewChangeButtonLabel, v31, 0LL);
  resultItemObjList = this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_30;
  v27 = 0LL;
  while ( 1 )
  {
    size = resultItemObjList->fields._size;
    if ( (int)v27 >= size )
      break;
    if ( size <= (unsigned int)v27 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v29 = resultItemObjList->fields._items->m_Items[v27];
    if ( v29 )
    {
      Component_srcLineSprite = (ItemIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v29,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( Component_srcLineSprite )
      {
        ItemIconComponent__ShowPossession(Component_srcLineSprite, this->fields.isShowPossessionNum, 0LL);
        resultItemObjList = this->fields.resultItemObjList;
        ++v27;
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
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  UnityEngine_Component_o *viewChangeButton; // x0
  WebViewObject_o *Component_WebViewObject; // x27
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v64; // x26
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v75; // x26
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  struct System_Collections_Generic_List_GameObject__o *teaEffectObjList; // x0
  UnityEngine_Collider_o *skipCollider; // x0
  UnityEngine_GameObject_o *getPointRoot; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *titleLabel; // x26
  System_String_o *v87; // x0
  System_String_o *v88; // x0
  UISprite_o *totalEventPointIcon; // x26
  int32_t eventPointItemId; // w27
  UIButton_o *v91; // x0
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v93; // x1
  __int64 v94; // x2
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  UILabel_o *viewChangeButtonLabel; // x0
  UILabel_o *v97; // x26
  System_String_o *v98; // x0
  UILabel_o *getTitleLabel; // x26
  System_String_o *v100; // x0
  UILabel_o *getNumLabel; // x26
  System_String_o *v102; // x27
  Il2CppObject *v103; // x0
  System_String_o *v104; // x0
  System_String_o *v105; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x25
  __int64 v108; // x26
  System_String_o *v109; // x0
  UILabel_o *totalNumLabel; // x25
  System_String_o *v111; // x27
  Il2CppObject *v112; // x0
  System_String_o *v113; // x0
  __int64 v114; // x1
  __int64 v115; // x2
  __int64 v116; // x3
  __int64 v117; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v118; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v119; // x25
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  __int64 v126; // x1
  __int64 v127; // x2
  __int64 v128; // x3
  __int64 v129; // x4
  GiftEntity_o *v130; // x26
  __int64 v131; // x1
  __int64 v132; // x2
  __int64 v133; // x3
  __int64 v134; // x4
  System_Action_int__o *v135; // x25
  __int64 v136; // x8
  UnityEngine_Component_o *scrollBar; // x0
  WebViewObject_o *v138; // x0
  UnityEngine_Component_o *v139; // x0
  UnityEngine_GameObject_o *v140; // x0
  bool v141; // w21
  UnityEngine_Component_o *closeButton; // x0
  UnityEngine_Component_o *transform; // x0
  UILabel_o *v144; // x22
  __int64 *v145; // x8
  System_String_o *v146; // x0
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  UnityEngine_GameObject_o *v153; // x0
  System_Collections_Generic_List_GiftEntity__o *v154; // x21
  __int64 v155; // x1
  __int64 v156; // x2
  __int64 v157; // x3
  __int64 v158; // x4
  System_Action_o *v159; // x22
  const MethodInfo *v160; // x4
  struct System_Action_o *v162; // [xsp+8h] [xbp-68h]
  __int64 v163; // [xsp+10h] [xbp-60h] BYREF
  int v164; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_40F82D4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, giftIds);
    sub_B16FFC(&System_Action_int__TypeInfo, v14);
    sub_B16FFC(&System_Action_TypeInfo, v15);
    sub_B16FFC(&AtlasManager_TypeInfo, v16);
    sub_B16FFC(&Method_BasicHelper_ForEach_int___, v17);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIScrollBar___, v18);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UISprite___, v19);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____66819928, v20);
    sub_B16FFC(&GiftEntity_TypeInfo, v21);
    sub_B16FFC(&int_TypeInfo, v22);
    sub_B16FFC(&long_TypeInfo, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__Add__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Clear__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v27);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v28);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v29);
    sub_B16FFC(&System_Collections_Generic_List_GiftEntity__TypeInfo, v30);
    sub_B16FFC(&LocalizationManager_TypeInfo, v31);
    sub_B16FFC(&Method_RecipeRewardDialogComponent___c__DisplayClass43_0__Open_b__0__, v32);
    sub_B16FFC(&Method_RecipeRewardDialogComponent___c__DisplayClass43_0__Open_b__1__, v33);
    sub_B16FFC(&RecipeRewardDialogComponent___c__DisplayClass43_0_TypeInfo, v34);
    sub_B16FFC(&StringLiteral_13406, v35);
    sub_B16FFC(&StringLiteral_11007, v36);
    sub_B16FFC(&StringLiteral_11011, v37);
    sub_B16FFC(&StringLiteral_690, v38);
    sub_B16FFC(&StringLiteral_11005, v39);
    sub_B16FFC(&StringLiteral_22700, v40);
    sub_B16FFC(&StringLiteral_13405, v41);
    sub_B16FFC(&StringLiteral_2468, v42);
    sub_B16FFC(&StringLiteral_22706, v43);
    sub_B16FFC(&StringLiteral_11012, v44);
    byte_40F82D4 = 1;
  }
  v45 = sub_B170CC(
          RecipeRewardDialogComponent___c__DisplayClass43_0_TypeInfo,
          giftIds,
          pointRewards,
          eventRecipeEntity,
          eventRecipeGiftEntity);
  RecipeRewardDialogComponent___c__DisplayClass43_0___ctor(
    (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)v45,
    0LL);
  if ( !v45 )
    goto LABEL_58;
  *(_QWORD *)(v45 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v45 + 24), (System_Int32_array **)this, v46, v47, v48, v49, v50, v51);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  this->fields.state = 1;
  if ( !viewChangeButton )
    goto LABEL_58;
  v162 = closeCallback;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              viewChangeButton,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_22700, 0LL);
  this->fields.getEffect = getEffect;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.getEffect,
    (System_Int32_array **)getEffect,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  this->fields.isShowPossessionNum = 0;
  this->fields.playCnt = 0;
  *(_WORD *)&this->fields.isSkip = 0;
  v64 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v60,
                                                                                                  v61,
                                                                                                  v62,
                                                                                                  v63);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v64,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v64;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resultItemObjList,
    (System_Int32_array **)v64,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  v75 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v71,
                                                                                                  v72,
                                                                                                  v73,
                                                                                                  v74);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v75,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultIconHideObjList = (struct System_Collections_Generic_List_GameObject__o *)v75;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resultIconHideObjList,
    (System_Int32_array **)v75,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  teaEffectObjList = this->fields.teaEffectObjList;
  if ( teaEffectObjList )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)teaEffectObjList,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  skipCollider = (UnityEngine_Collider_o *)this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_58;
  UnityEngine_Collider__set_enabled(skipCollider, 1, 0LL);
  if ( !giftIds )
    goto LABEL_58;
  getPointRoot = this->fields.getPointRoot;
  this->fields.maxPlayCnt = *(_QWORD *)&giftIds->max_length;
  if ( !getPointRoot )
    goto LABEL_58;
  gameObject = UnityEngine_GameObject__get_gameObject(getPointRoot, 0LL);
  if ( !gameObject )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v87 = LocalizationManager__Get((System_String_o *)StringLiteral_11007, 0LL);
  if ( !eventRecipeEntity )
    goto LABEL_58;
  v88 = System_String__Format(v87, (Il2CppObject *)eventRecipeEntity->fields.name, 0LL);
  if ( !titleLabel )
    goto LABEL_58;
  UILabel__set_text(titleLabel, v88, 0LL);
  totalEventPointIcon = this->fields.totalEventPointIcon;
  eventPointItemId = eventRecipeEntity->fields.eventPointItemId;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(totalEventPointIcon, eventPointItemId, 0LL);
  AtlasManager__SetItem(this->fields.getEventPointIcon, eventRecipeEntity->fields.eventPointItemId, 0LL);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_22706, 0LL);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_22706, 0LL);
  v91 = this->fields.viewChangeButton;
  if ( !v91 )
    goto LABEL_58;
  UIButton__set_normalSprite(v91, (System_String_o *)StringLiteral_22700, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_58;
  if ( !viewChangeButtonLabelEffectColors->max_length )
    goto LABEL_59;
  viewChangeButtonLabel = this->fields.viewChangeButtonLabel;
  if ( !viewChangeButtonLabel )
    goto LABEL_58;
  UILabel__set_effectColor(
    viewChangeButtonLabel,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  v97 = this->fields.viewChangeButtonLabel;
  v98 = LocalizationManager__Get((System_String_o *)StringLiteral_11012, 0LL);
  if ( !v97 )
    goto LABEL_58;
  UILabel__set_text(v97, v98, 0LL);
  getTitleLabel = this->fields.getTitleLabel;
  v100 = LocalizationManager__Get((System_String_o *)StringLiteral_11005, 0LL);
  if ( !getTitleLabel )
    goto LABEL_58;
  UILabel__set_text(getTitleLabel, v100, 0LL);
  getNumLabel = this->fields.getNumLabel;
  v102 = LocalizationManager__Get((System_String_o *)StringLiteral_2468, 0LL);
  v164 = this->fields.maxPlayCnt * eventRecipeEntity->fields.eventPointNum;
  v103 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v164);
  v104 = System_String__Format(v102, v103, 0LL);
  v105 = System_String__Concat_43743732((System_String_o *)StringLiteral_690, v104, 0LL);
  if ( !getNumLabel )
    goto LABEL_58;
  UILabel__set_text(getNumLabel, v105, 0LL);
  if ( !eventRecipeGiftEntity )
    goto LABEL_58;
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventRecipeGiftEntity->fields.eventId, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v108 = EventPointNoGroup;
  v109 = LocalizationManager__Get((System_String_o *)StringLiteral_11011, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_58;
  UILabel__set_text(totalTitleLabel, v109, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v111 = LocalizationManager__Get((System_String_o *)StringLiteral_2468, 0LL);
  v163 = v108;
  v112 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v163);
  v113 = System_String__Format(v111, v112, 0LL);
  if ( !totalNumLabel )
    goto LABEL_58;
  UILabel__set_text(totalNumLabel, v113, 0LL);
  v118 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                                                                   v114,
                                                                                                   v115,
                                                                                                   v116,
                                                                                                   v117);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v118,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  *(_QWORD *)(v45 + 16) = v118;
  v119 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v45 + 16);
  sub_B16F98(
    (BattleServantConfConponent_o *)(v45 + 16),
    (System_Int32_array **)v118,
    v120,
    v121,
    v122,
    v123,
    v124,
    v125);
  v130 = (GiftEntity_o *)sub_B170CC(GiftEntity_TypeInfo, v126, v127, v128, v129);
  GiftEntity___ctor(v130, 0LL);
  if ( !v130 )
    goto LABEL_58;
  v130->fields.type = 2;
  v130->fields.objectId = eventRecipeEntity->fields.eventPointItemId;
  v130->fields.num = eventRecipeEntity->fields.eventPointNum * giftIds->max_length;
  if ( !*v119 )
    goto LABEL_58;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    *v119,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v130,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
  v135 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v131, v132, v133, v134);
  System_Action_int____ctor(
    v135,
    (Il2CppObject *)v45,
    Method_RecipeRewardDialogComponent___c__DisplayClass43_0__Open_b__0__,
    (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
  BasicHelper__ForEach_int_(
    (System_Collections_Generic_IEnumerable_T__o *)giftIds,
    (System_Action_T__o *)v135,
    (const MethodInfo_18B6CD8 *)Method_BasicHelper_ForEach_int___);
  v136 = *(_QWORD *)(v45 + 16);
  if ( !v136 )
    goto LABEL_58;
  scrollBar = (UnityEngine_Component_o *)this->fields.scrollBar;
  this->fields.maxPlayCnt = *(_DWORD *)(v136 + 24);
  if ( !scrollBar )
    goto LABEL_58;
  v138 = UnityEngine_Component__GetComponent_WebViewObject_(
           scrollBar,
           (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
  if ( !v138 )
    goto LABEL_58;
  UIProgressBar__set_value((UIProgressBar_o *)v138, 0.0, 0LL);
  v139 = (UnityEngine_Component_o *)this->fields.scrollBar;
  if ( !v139 )
    goto LABEL_58;
  v140 = UnityEngine_Component__get_gameObject(v139, 0LL);
  if ( !v140 )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive(v140, this->fields.maxPlayCnt > this->fields.maxItemDrawNum, 0LL);
  v141 = pointRewards && pointRewards->max_length != 0;
  closeButton = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !closeButton )
    goto LABEL_58;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(closeButton, 0LL);
  if ( !transform )
    goto LABEL_58;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                              transform,
                                                              1,
                                                              (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____66819928);
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_58;
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length )
  {
LABEL_59:
    sub_B17100(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v93, v94);
    sub_B170A0();
  }
  v144 = (UILabel_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent->m_Items[0];
  if ( v141 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v145 = &StringLiteral_13406;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v145 = &StringLiteral_13405;
  }
  v146 = LocalizationManager__Get((System_String_o *)*v145, 0LL);
  if ( !v144
    || (UILabel__set_text(v144, v146, 0LL),
        this->fields.closeCallbackFunc = v162,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
          (System_Int32_array **)v162,
          v147,
          v148,
          v149,
          v150,
          v151,
          v152),
        (v153 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_58:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v153, 1, 0LL);
  v154 = *(System_Collections_Generic_List_GiftEntity__o **)(v45 + 16);
  v159 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v155, v156, v157, v158);
  System_Action___ctor(
    v159,
    (Il2CppObject *)v45,
    Method_RecipeRewardDialogComponent___c__DisplayClass43_0__Open_b__1__,
    0LL);
  RecipeRewardDialogComponent__SetResultData(this, v154, eventRecipeEntity, v159, v160);
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
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v32; // x22
  UnityEngine_Component_o *scrollView; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_Component_o *listRoot; // x0
  WebViewObject_o *v36; // x0
  UnityEngine_Component_o *iconListRoot; // x0
  WebViewObject_o *v38; // x0

  if ( (byte_40F82D5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_GiftEntity___ctor__, giftList);
    sub_B16FFC(&System_Action_GiftEntity__TypeInfo, v9);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIGrid___, v10);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIScrollView___, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__ForEach__, v12);
    sub_B16FFC(&Method_RecipeRewardDialogComponent___c__DisplayClass44_0__SetResultData_b__0__, v13);
    sub_B16FFC(&RecipeRewardDialogComponent___c__DisplayClass44_0_TypeInfo, v14);
    byte_40F82D5 = 1;
  }
  v15 = sub_B170CC(
          RecipeRewardDialogComponent___c__DisplayClass44_0_TypeInfo,
          giftList,
          eventRecipeEntity,
          callBack,
          method);
  RecipeRewardDialogComponent___c__DisplayClass44_0___ctor(
    (RecipeRewardDialogComponent___c__DisplayClass44_0_o *)v15,
    0LL);
  if ( !v15 )
    goto LABEL_12;
  *(_QWORD *)(v15 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v15 + 24) = eventRecipeEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v15 + 24),
    (System_Int32_array **)eventRecipeEntity,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v32 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_GiftEntity__TypeInfo,
                                                                               v28,
                                                                               v29,
                                                                               v30,
                                                                               v31);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v32,
    (Il2CppObject *)v15,
    Method_RecipeRewardDialogComponent___c__DisplayClass44_0__SetResultData_b__0__,
    (const MethodInfo_24B7310 *)Method_System_Action_GiftEntity___ctor__);
  if ( !giftList )
    goto LABEL_12;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)giftList,
    (System_Action_T__o *)v32,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_GiftEntity__ForEach__);
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    scrollView,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIScrollView___)) == 0LL
    || (UIScrollView__ResetPosition((UIScrollView_o *)Component_WebViewObject, 0LL),
        (listRoot = (UnityEngine_Component_o *)this->fields.listRoot) == 0LL)
    || (v36 = UnityEngine_Component__GetComponent_WebViewObject_(
                listRoot,
                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL
    || ((*(void (__fastcall **)(WebViewObject_o *, Il2CppClass *))&v36->klass[1]._1.this_arg.bits)(
          v36,
          v36->klass[1]._1.element_class),
        (iconListRoot = (UnityEngine_Component_o *)this->fields.iconListRoot) == 0LL)
    || (v38 = UnityEngine_Component__GetComponent_WebViewObject_(
                iconListRoot,
                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
  {
LABEL_12:
    sub_B170D4();
  }
  (*(void (__fastcall **)(WebViewObject_o *, Il2CppClass *))&v38->klass[1]._1.this_arg.bits)(
    v38,
    v38->klass[1]._1.element_class);
  ActionExtensions__Call(callBack, 0LL);
}


System_Collections_IEnumerator_o *__fastcall RecipeRewardDialogComponent__StartDisp(
        RecipeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F82D6 & 1) == 0 )
  {
    sub_B16FFC(&RecipeRewardDialogComponent__StartDisp_d__45_TypeInfo, method);
    byte_40F82D6 = 1;
  }
  v6 = sub_B170CC(RecipeRewardDialogComponent__StartDisp_d__45_TypeInfo, method, v2, v3, v4);
  RecipeRewardDialogComponent__StartDisp_d__45___ctor((RecipeRewardDialogComponent__StartDisp_d__45_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


System_Collections_IEnumerator_o *__fastcall RecipeRewardDialogComponent__StartRewardAction(
        RecipeRewardDialogComponent_o *this,
        RecipeRewardDialogComponent_RewardAction_o *rewardAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
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

  if ( (byte_40F82D7 & 1) == 0 )
  {
    sub_B16FFC(&RecipeRewardDialogComponent__StartRewardAction_d__46_TypeInfo, rewardAction);
    byte_40F82D7 = 1;
  }
  v7 = sub_B170CC(RecipeRewardDialogComponent__StartRewardAction_d__46_TypeInfo, rewardAction, method, v3, v4);
  RecipeRewardDialogComponent__StartRewardAction_d__46___ctor(
    (RecipeRewardDialogComponent__StartRewardAction_d__46_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = rewardAction;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v7 + 40),
    (System_Int32_array **)rewardAction,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  return (System_Collections_IEnumerator_o *)v7;
}


UnityEngine_GameObject_o *__fastcall RecipeRewardDialogComponent__get_closeBtnObject(
        RecipeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_40F82DC & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F82DC = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_B170D4();
  return UnityEngine_Component__get_gameObject(v5, 0LL);
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
  sub_B16F98(
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
  return (System_IAsyncResult_o *)sub_B16FA0(this, v6, callback, object);
}


UnityEngine_GameObject_o *__fastcall RecipeRewardDialogComponent_GetEffect__EndInvoke(
        RecipeRewardDialogComponent_GetEffect_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  return (UnityEngine_GameObject_o *)sub_B16FA4(result, 0LL, method);
}


UnityEngine_GameObject_o *__fastcall RecipeRewardDialogComponent_GetEffect__Invoke(
        RecipeRewardDialogComponent_GetEffect_o *this,
        UnityEngine_Transform_o *parenTransform,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  RecipeRewardDialogComponent_GetEffect_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w22
  __int64 class_0; // x0
  UnityEngine_Transform_c *v11; // x8
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  UnityEngine_GameObject_o *result; // x0
  unsigned int v17; // w23
  __int64 v18; // x0
  __int64 v19; // x8
  unsigned __int64 v20; // x10
  _DWORD *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 (__fastcall **v25)(UnityEngine_Transform_o *, _QWORD); // x0
  __int64 v26; // x0
  __int64 (__fastcall **v27)(__int64 *, UnityEngine_Transform_o *, _QWORD); // x0
  RecipeRewardDialogComponent_GetEffect_o *v28; // x8
  __int64 v29; // x21
  __int64 *v30; // x22
  __int64 (__fastcall *v31)(UnityEngine_Transform_o *, __int64); // x23
  char v32; // w0
  int v33; // w8
  char v34; // w23
  char v35; // w0
  __int64 v36; // x8
  __int64 v37; // x1
  __int64 v38; // x2
  unsigned __int64 v39; // x10
  _DWORD *v40; // x11
  char v41; // w22
  char v42; // w0
  UnityEngine_Transform_c *klass; // x8
  __int64 v44; // x1
  __int64 v45; // x2
  unsigned __int64 v46; // x10
  int32_t *p_offset; // x11
  RecipeRewardDialogComponent_GetEffect_o *v48; // [xsp+8h] [xbp-48h] BYREF

  v48 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v48;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (RecipeRewardDialogComponent_GetEffect_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v28 = v7[v8];
      v30 = *(__int64 **)&v28->fields.method;
      v29 = *(_QWORD *)&v28->fields.extra_arg;
      v31 = *(__int64 (__fastcall **)(UnityEngine_Transform_o *, __int64))&v28->fields.method_ptr;
      if ( *(__int16 *)(v29 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v28->fields.extra_arg, parenTransform, method);
      v32 = sub_B1702C(v29);
      v33 = *(unsigned __int8 *)(v29 + 74);
      if ( (v32 & 1) != 0 )
      {
        if ( v33 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v33 != 1 )
        {
          if ( *(__int16 *)(v29 + 72) != -1 && this->fields.m_target )
          {
            v41 = sub_B17024(v29);
            v42 = sub_B17428(v29);
            if ( (v41 & 1) != 0 )
            {
              if ( (v42 & 1) != 0 )
              {
                klass = parenTransform->klass;
                v44 = *(_QWORD *)(v29 + 24);
                v45 = *(unsigned __int16 *)(v29 + 72);
                if ( *(_WORD *)&parenTransform->klass->_2.bitflags1 )
                {
                  v46 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v44 )
                  {
                    ++v46;
                    p_offset += 4;
                    if ( v46 >= *(unsigned __int16 *)&parenTransform->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v45);
                }
                else
                {
LABEL_57:
                  v24 = sub_AAFEF8(parenTransform, v44, v45);
                }
                v15 = *(_QWORD *)(v24 + 8);
              }
              else
              {
                v15 = *((_QWORD *)&parenTransform->klass->vtable._1_Finalize.methodPtr
                      + 2 * *(unsigned __int16 *)(v29 + 72));
              }
              v25 = (__int64 (__fastcall **)(UnityEngine_Transform_o *, _QWORD))sub_B170AC(v15, v29);
              result = (UnityEngine_GameObject_o *)(*v25)(parenTransform, v25);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v29 + 72);
              if ( (v42 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v29);
                v11 = parenTransform->klass;
                if ( *(_WORD *)&parenTransform->klass->_2.bitflags1 )
                {
                  v12 = 0LL;
                  v13 = &v11->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v13 - 1) != class_0 )
                  {
                    ++v12;
                    v13 += 4;
                    if ( v12 >= *(unsigned __int16 *)&parenTransform->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v14 = (__int64)(&v11->vtable._0_Equals.method + 2 * (int)(*v13 + v9));
                }
                else
                {
LABEL_11:
                  v14 = sub_AAFEF8(parenTransform, class_0, v9);
                }
                result = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(UnityEngine_Transform_o *, _QWORD))v14)(
                                                       parenTransform,
                                                       *(_QWORD *)(v14 + 8));
              }
              else
              {
                result = (UnityEngine_GameObject_o *)(*((__int64 (__fastcall **)(UnityEngine_Transform_o *, _QWORD))&parenTransform->klass->vtable._0_Equals.method
                                                      + 2 * *(unsigned __int16 *)(v29 + 72)))(
                                                       parenTransform,
                                                       *((_QWORD *)&parenTransform->klass->vtable._1_Finalize.methodPtr
                                                       + 2 * *(unsigned __int16 *)(v29 + 72)));
              }
            }
            goto LABEL_59;
          }
LABEL_58:
          result = (UnityEngine_GameObject_o *)v31(parenTransform, v29);
          goto LABEL_59;
        }
        if ( !v30 )
          goto LABEL_58;
        if ( *(__int16 *)(v29 + 72) != -1 && (*(_BYTE *)(*v30 + 277) & 1) == 0 && this->fields.m_target )
        {
          v34 = sub_B17024(v29);
          v35 = sub_B17428(v29);
          if ( (v34 & 1) != 0 )
          {
            if ( (v35 & 1) != 0 )
            {
              v36 = *v30;
              v37 = *(_QWORD *)(v29 + 24);
              v38 = *(unsigned __int16 *)(v29 + 72);
              if ( *(_WORD *)(*v30 + 298) )
              {
                v39 = 0LL;
                v40 = (_DWORD *)(*(_QWORD *)(v36 + 176) + 8LL);
                while ( *((_QWORD *)v40 - 1) != v37 )
                {
                  ++v39;
                  v40 += 4;
                  if ( v39 >= *(unsigned __int16 *)(*v30 + 298) )
                    goto LABEL_48;
                }
                v26 = v36 + 16LL * (*v40 + (int)v38) + 312;
              }
              else
              {
LABEL_48:
                v26 = sub_AAFEF8(v30, v37, v38);
              }
              v23 = *(_QWORD *)(v26 + 8);
            }
            else
            {
              v23 = *(_QWORD *)(*v30 + 16LL * *(unsigned __int16 *)(v29 + 72) + 320);
            }
            v27 = (__int64 (__fastcall **)(__int64 *, UnityEngine_Transform_o *, _QWORD))sub_B170AC(v23, v29);
            result = (UnityEngine_GameObject_o *)(*v27)(v30, parenTransform, v27);
          }
          else
          {
            v17 = *(unsigned __int16 *)(v29 + 72);
            if ( (v35 & 1) != 0 )
            {
              v18 = j_il2cpp_method_get_class_0(v29);
              v19 = *v30;
              if ( *(_WORD *)(*v30 + 298) )
              {
                v20 = 0LL;
                v21 = (_DWORD *)(*(_QWORD *)(v19 + 176) + 8LL);
                while ( *((_QWORD *)v21 - 1) != v18 )
                {
                  ++v20;
                  v21 += 4;
                  if ( v20 >= *(unsigned __int16 *)(*v30 + 298) )
                    goto LABEL_19;
                }
                v22 = v19 + 16LL * (int)(*v21 + v17) + 312;
              }
              else
              {
LABEL_19:
                v22 = sub_AAFEF8(v30, v18, v17);
              }
              result = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(__int64 *, UnityEngine_Transform_o *, _QWORD))v22)(
                                                     v30,
                                                     parenTransform,
                                                     *(_QWORD *)(v22 + 8));
            }
            else
            {
              result = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(__int64 *, UnityEngine_Transform_o *, _QWORD))(*v30 + 16LL * *(unsigned __int16 *)(v29 + 72) + 312))(
                                                     v30,
                                                     parenTransform,
                                                     *(_QWORD *)(*v30 + 16LL * *(unsigned __int16 *)(v29 + 72) + 320));
            }
          }
          goto LABEL_59;
        }
      }
      result = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(__int64 *, UnityEngine_Transform_o *, __int64))v31)(
                                             v30,
                                             parenTransform,
                                             v29);
LABEL_59:
      if ( ++v8 == v6 )
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
  struct RecipeRewardDialogComponent_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  bool result; // w0
  BattleServantConfConponent_o *p_listRewardAction_5__2; // x21
  struct System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__o *listRewardAction_5__2; // x25
  UnityEngine_Component_o *iconListRoot; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  int onError_high; // w8
  int32_t maxPlayCnt; // w9
  UnityEngine_Component_o *scrollBar; // x0
  int v40; // w21
  WebViewObject_o *v41; // x0
  UIProgressBar_o *v42; // x20
  float value; // s0
  Il2CppObject **p__2__current; // x19
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  int v51; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v52; // x22
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  int v59; // w23
  __int64 v60; // x22
  __int64 v61; // x23
  __int64 v62; // x24
  int size; // w8
  __int64 v64; // x22
  System_Collections_IEnumerator_o *started; // x0
  System_Int32_array **v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  int32_t v73; // w8
  RecipeRewardDialogComponent_RewardAction_o *v74; // x8
  int32_t playCnt; // w8
  BattleServantConfConponent_c *klass; // x22
  __int64 v77; // x19
  int namespaze; // w8
  __int64 v79; // x8
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x21
  __int64 v81; // x19
  int v82; // w8
  UnityEngine_GameObject_o *v83; // x0
  UnityEngine_Component_o *v84; // x0
  WebViewObject_o *v85; // x0
  UnityEngine_Collider_o *skipCollider; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *resultIconHideObjList; // x0
  Il2CppObject *current; // x19
  float scrollWait; // s8
  UnityEngine_WaitForSeconds_o *v90; // x20
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Collections_Generic_List_Enumerator_T__o v97; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_40F7418 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIGrid___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIScrollBar___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction___ctor__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Count__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__, v19);
    sub_B16FFC(&System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__TypeInfo, v20);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v21);
    sub_B16FFC(&RecipeRewardDialogComponent_RewardAction_TypeInfo, v22);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v23);
    byte_40F7418 = 1;
  }
  memset(&v97, 0, sizeof(v97));
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      v25 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3, v4);
      UnityEngine_WaitForSeconds___ctor(v25, 0.3, 0LL);
      this->fields.__2__current = (Il2CppObject *)v25;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__2__current,
        (System_Int32_array **)v25,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      result = 1;
      this->fields.__1__state = 1;
      return result;
    case 1:
      p_listRewardAction_5__2 = (BattleServantConfConponent_o *)&this->fields._listRewardAction_5__2;
      this->fields.__1__state = -1;
      goto LABEL_18;
    case 2:
      p_listRewardAction_5__2 = (BattleServantConfConponent_o *)&this->fields._listRewardAction_5__2;
      listRewardAction_5__2 = this->fields._listRewardAction_5__2;
      this->fields.__1__state = -1;
      if ( !listRewardAction_5__2 )
        goto LABEL_35;
      goto LABEL_36;
    case 3:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_35;
      iconListRoot = (UnityEngine_Component_o *)_4__this->fields.iconListRoot;
      if ( !iconListRoot )
        goto LABEL_35;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  iconListRoot,
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !Component_WebViewObject )
        goto LABEL_35;
      onError_high = HIDWORD(Component_WebViewObject->fields.onError);
      maxPlayCnt = _4__this->fields.maxPlayCnt;
      scrollBar = (UnityEngine_Component_o *)_4__this->fields.scrollBar;
      v40 = maxPlayCnt % onError_high ? maxPlayCnt / onError_high + 1 : maxPlayCnt / onError_high;
      if ( !scrollBar )
        goto LABEL_35;
      v41 = UnityEngine_Component__GetComponent_WebViewObject_(
              scrollBar,
              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
      if ( !v41 )
        goto LABEL_35;
      v42 = (UIProgressBar_o *)v41;
      value = UIProgressBar__get_value((UIProgressBar_o *)v41, 0LL);
      UIProgressBar__set_value(v42, (float)(1.0 / (float)((float)((float)v40 * 0.5) + -1.0)) + value, 0LL);
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v45, v46, v47, v48, v49, v50);
      v51 = 4;
      goto LABEL_84;
    case 4:
      p_listRewardAction_5__2 = (BattleServantConfConponent_o *)&this->fields._listRewardAction_5__2;
      this->fields.__1__state = -1;
      break;
    default:
      return 0;
  }
  while ( 1 )
  {
    p_listRewardAction_5__2->klass = 0LL;
    sub_B16F98(p_listRewardAction_5__2, 0LL, v2, v3, v4, v5, v6, v7);
LABEL_18:
    v52 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__TypeInfo,
                                                                                                    method,
                                                                                                    v2,
                                                                                                    v3,
                                                                                                    v4);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v52,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction___ctor__);
    p_listRewardAction_5__2->klass = (BattleServantConfConponent_c *)v52;
    sub_B16F98(p_listRewardAction_5__2, (System_Int32_array **)v52, v53, v54, v55, v56, v57, v58);
    if ( !_4__this )
      goto LABEL_35;
    if ( _4__this->fields.maxItemDrawNum >= 1 )
    {
      v59 = 0;
      while ( v59 + _4__this->fields.playCnt < _4__this->fields.maxPlayCnt )
      {
        v60 = sub_B170CC(RecipeRewardDialogComponent_RewardAction_TypeInfo, method, v2, v3, v4);
        System_Object___ctor((Il2CppObject *)v60, 0LL);
        if ( !v60 )
          goto LABEL_35;
        *(_DWORD *)(v60 + 16) = v59;
        *(_DWORD *)(v60 + 20) = v59 + _4__this->fields.playCnt;
        if ( !p_listRewardAction_5__2->klass )
          goto LABEL_35;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_listRewardAction_5__2->klass,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v60,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__Add__);
        if ( ++v59 >= _4__this->fields.maxItemDrawNum )
          break;
      }
    }
    if ( !p_listRewardAction_5__2->klass )
      goto LABEL_35;
    _4__this->fields.playCnt += LODWORD(p_listRewardAction_5__2->klass->_1.namespaze);
    listRewardAction_5__2 = (struct System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__o *)p_listRewardAction_5__2->klass;
    if ( !p_listRewardAction_5__2->klass )
      goto LABEL_35;
    v61 = 0LL;
    v62 = 32LL;
    while ( 1 )
    {
      size = listRewardAction_5__2->fields._size;
      if ( (int)v61 >= size )
        break;
      if ( size <= (unsigned int)v61 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v64 = *(__int64 *)((char *)&listRewardAction_5__2->fields._items->obj.klass + v62);
      if ( listRewardAction_5__2->fields._size <= (unsigned int)v61 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      started = RecipeRewardDialogComponent__StartRewardAction(
                  _4__this,
                  listRewardAction_5__2->fields._items->m_Items[v61],
                  0LL);
      v66 = (System_Int32_array **)UnityEngine_MonoBehaviour__StartCoroutine_34804316(
                                     (UnityEngine_MonoBehaviour_o *)_4__this,
                                     started,
                                     0LL);
      if ( v64 )
      {
        *(_QWORD *)(v64 + 32) = v66;
        sub_B16F98((BattleServantConfConponent_o *)(v64 + 32), v66, v67, v68, v69, v70, v71, v72);
        listRewardAction_5__2 = (struct System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__o *)p_listRewardAction_5__2->klass;
        ++v61;
        v62 += 8LL;
        if ( p_listRewardAction_5__2->klass )
          continue;
      }
      goto LABEL_35;
    }
LABEL_36:
    v73 = listRewardAction_5__2->fields._size;
    if ( !v73 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v74 = listRewardAction_5__2->fields._items->m_Items[v73 - 1];
    if ( !v74 )
      goto LABEL_35;
    if ( v74->fields.isEnd )
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
        this->fields.__2__current = 0LL;
        p__2__current = &this->fields.__2__current;
        sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
        v51 = 2;
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
      v90 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3, v4);
      UnityEngine_WaitForSeconds___ctor(v90, scrollWait, 0LL);
      this->fields.__2__current = (Il2CppObject *)v90;
      p__2__current = &this->fields.__2__current;
      sub_B16F98(
        (BattleServantConfConponent_o *)p__2__current,
        (System_Int32_array **)v90,
        v91,
        v92,
        v93,
        v94,
        v95,
        v96);
      v51 = 3;
LABEL_84:
      *((_DWORD *)p__2__current - 2) = v51;
      return (unsigned __int8)&dword_0 + 1;
    }
  }
  klass = p_listRewardAction_5__2->klass;
  if ( !p_listRewardAction_5__2->klass )
    goto LABEL_35;
  v77 = 0LL;
  while ( 1 )
  {
    namespaze = (int)klass->_1.namespaze;
    if ( (int)v77 >= namespaze )
      break;
    if ( namespaze <= (unsigned int)v77 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v79 = *(_QWORD *)&klass->_1.name[8 * v77 + 32];
    if ( v79 )
    {
      UnityEngine_MonoBehaviour__StopCoroutine_34804984(
        (UnityEngine_MonoBehaviour_o *)_4__this,
        *(UnityEngine_Coroutine_o **)(v79 + 32),
        0LL);
      klass = p_listRewardAction_5__2->klass;
      ++v77;
      if ( p_listRewardAction_5__2->klass )
        continue;
    }
    goto LABEL_35;
  }
  resultItemObjList = _4__this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_35;
  v81 = 0LL;
  while ( 1 )
  {
    v82 = resultItemObjList->fields._size;
    if ( (int)v81 >= v82 )
      break;
    if ( v82 <= (unsigned int)v81 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v83 = resultItemObjList->fields._items->m_Items[v81];
    if ( v83 )
    {
      UnityEngine_GameObject__SetActive(v83, 1, 0LL);
      resultItemObjList = _4__this->fields.resultItemObjList;
      ++v81;
      if ( resultItemObjList )
        continue;
    }
    goto LABEL_35;
  }
  v84 = (UnityEngine_Component_o *)_4__this->fields.scrollBar;
  _4__this->fields.playCnt = _4__this->fields.maxPlayCnt;
  if ( !v84 )
    goto LABEL_35;
  v85 = UnityEngine_Component__GetComponent_WebViewObject_(
          v84,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
  if ( !v85 )
    goto LABEL_35;
  UIProgressBar__set_value((UIProgressBar_o *)v85, 1.0, 0LL);
LABEL_68:
  skipCollider = (UnityEngine_Collider_o *)_4__this->fields.skipCollider;
  if ( !skipCollider
    || (UnityEngine_Collider__set_enabled(skipCollider, 0, 0LL),
        (resultIconHideObjList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this->fields.resultIconHideObjList) == 0LL) )
  {
LABEL_35:
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v97,
    resultIconHideObjList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v97,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v97.fields.current;
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
      UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v97,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_RecipeRewardDialogComponent__StartDisp_d__45_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  struct RecipeRewardDialogComponent_o *_4__this; // x22
  int32_t i_5__2; // w8
  struct RecipeRewardDialogComponent_RewardAction_o *rewardAction; // x9
  float itemDispWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v13; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  bool result; // w0
  struct RecipeRewardDialogComponent_RewardAction_o **p_rewardAction; // x19
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x21
  __int64 playCnt; // x23
  RecipeRewardDialogComponent_GetEffect_o *getEffect; // x20
  UnityEngine_Component_o *Parent; // x0
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v28; // x2
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x20
  UnityEngine_Transform_o *v31; // x0
  struct RecipeRewardDialogComponent_RewardAction_o *v32; // x8
  struct System_Collections_Generic_List_GameObject__o *v33; // x23
  __int64 v34; // x24
  UnityEngine_Transform_o *v35; // x21
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Transform_o *v37; // x0
  int v38; // s0
  UnityEngine_Transform_o *v41; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *teaEffectObjList; // x0
  float v43; // s8
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  UnityEngine_WaitForSeconds_o *v48; // x20
  Il2CppObject **v49; // x19
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct System_Collections_Generic_List_GameObject__o *resultIconHideObjList; // x20
  struct RecipeRewardDialogComponent_RewardAction_o *v57; // x8
  struct RecipeRewardDialogComponent_RewardAction_o *v58; // t1
  __int64 v59; // x21
  UnityEngine_GameObject_o *v60; // x0
  struct System_Collections_Generic_List_GameObject__o *v61; // x20
  __int64 v62; // x21
  UnityEngine_GameObject_o *v63; // x0
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F7419 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v7);
    byte_40F7419 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state != 2 )
  {
    if ( _1__state == 1 )
    {
      i_5__2 = this->fields._i_5__2;
      this->fields.__1__state = -1;
      _1__state = i_5__2 + 1;
      this->fields._i_5__2 = _1__state;
    }
    else
    {
      if ( _1__state )
        return 0;
      this->fields.__1__state = -1;
      this->fields._i_5__2 = 0;
    }
    rewardAction = this->fields.rewardAction;
    if ( rewardAction && _4__this )
    {
      if ( _1__state < rewardAction->fields.index )
      {
        itemDispWaitTime = _4__this->fields.itemDispWaitTime;
        v13 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3, v4);
        UnityEngine_WaitForSeconds___ctor(v13, itemDispWaitTime, 0LL);
        this->fields.__2__current = (Il2CppObject *)v13;
        p__2__current = &this->fields.__2__current;
        sub_B16F98(
          (BattleServantConfConponent_o *)p__2__current,
          (System_Int32_array **)v13,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(
                                              resultItemObjList->fields._items->m_Items[playCnt],
                                              0LL);
        if ( Parent )
        {
          transform = UnityEngine_Component__get_transform(Parent, 0LL);
          if ( getEffect )
          {
            v29 = RecipeRewardDialogComponent_GetEffect__Invoke(getEffect, transform, v28);
            if ( v29 )
            {
              v30 = v29;
              v31 = UnityEngine_GameObject__get_transform(v29, 0LL);
              v32 = this->fields.rewardAction;
              if ( v32 )
              {
                v33 = _4__this->fields.resultItemObjList;
                if ( v33 )
                {
                  v34 = v32->fields.playCnt;
                  v35 = v31;
                  if ( v33->fields._size <= (unsigned int)v34 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                  v36 = v33->fields._items->m_Items[v34];
                  if ( v36 )
                  {
                    v37 = UnityEngine_GameObject__get_transform(v36, 0LL);
                    if ( v37 )
                    {
                      *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Transform__get_localPosition(v37, 0LL);
                      if ( v35 )
                      {
                        UnityEngine_Transform__set_localPosition(v35, *(UnityEngine_Vector3_o *)&v38, 0LL);
                        v41 = UnityEngine_GameObject__get_transform(v30, 0LL);
                        if ( v41 )
                        {
                          v64.fields.x = 1.25;
                          v64.fields.y = 1.25;
                          v64.fields.z = 1.25;
                          UnityEngine_Transform__set_localScale(v41, v64, 0LL);
                          teaEffectObjList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.teaEffectObjList;
                          if ( teaEffectObjList )
                          {
                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                              teaEffectObjList,
                              (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
                              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
                            v43 = _4__this->fields.itemDispWaitTime;
                            v48 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(
                                                                    UnityEngine_WaitForSeconds_TypeInfo,
                                                                    v44,
                                                                    v45,
                                                                    v46,
                                                                    v47);
                            UnityEngine_WaitForSeconds___ctor(v48, v43, 0LL);
                            this->fields.__2__current = (Il2CppObject *)v48;
                            v49 = &this->fields.__2__current;
                            sub_B16F98(
                              (BattleServantConfConponent_o *)v49,
                              (System_Int32_array **)v48,
                              v50,
                              v51,
                              v52,
                              v53,
                              v54,
                              v55);
                            *((_DWORD *)v49 - 2) = 2;
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
    sub_B170D4();
  }
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_45;
  if ( _4__this->fields.isSkip )
  {
    p_rewardAction = &this->fields.rewardAction;
  }
  else
  {
    _4__this->fields.canSkip = 1;
    resultIconHideObjList = _4__this->fields.resultIconHideObjList;
    v58 = this->fields.rewardAction;
    p_rewardAction = &this->fields.rewardAction;
    v57 = v58;
    if ( !v58 || !resultIconHideObjList )
      goto LABEL_45;
    v59 = v57->fields.playCnt;
    if ( resultIconHideObjList->fields._size <= (unsigned int)v59 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v60 = resultIconHideObjList->fields._items->m_Items[v59];
    if ( !v60 )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive(v60, 0, 0LL);
  }
  if ( !*p_rewardAction )
    goto LABEL_45;
  v61 = _4__this->fields.resultItemObjList;
  if ( !v61 )
    goto LABEL_45;
  v62 = (*p_rewardAction)->fields.playCnt;
  if ( v61->fields._size <= (unsigned int)v62 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v63 = v61->fields._items->m_Items[v62];
  if ( !v63 )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(v63, 1, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_RecipeRewardDialogComponent__StartRewardAction_d__46_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7412 & 1) == 0 )
  {
    sub_B16FFC(&RecipeRewardDialogComponent___c_TypeInfo, v1);
    byte_40F7412 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(RecipeRewardDialogComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)RecipeRewardDialogComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  if ( (byte_40F7413 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, x);
    byte_40F7413 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)x, 0LL);
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
  WebViewManager_o *Instance; // x0
  GiftMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_IEnumerable_T__o *GiftListById; // x0

  if ( (byte_40F7414 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftMaster___, *(_QWORD *)&id);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40F7414 = 1;
  }
  giftList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.giftList;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___)) == 0LL
    || (GiftListById = (System_Collections_Generic_IEnumerable_T__o *)GiftMaster__GetGiftListById(
                                                                        MasterData_WarQuestSelectionMaster,
                                                                        id,
                                                                        0LL),
        !giftList) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    giftList,
    GiftListById,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
}


void __fastcall RecipeRewardDialogComponent___c__DisplayClass43_0___Open_b__1(
        RecipeRewardDialogComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct RecipeRewardDialogComponent_o *_4__this; // x8
  System_Action_o *_9__2; // x21
  BaseDialog_o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40F7415 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_RecipeRewardDialogComponent___c__DisplayClass43_0__Open_b__2__, v6);
    byte_40F7415 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  _4__this->fields.state = 2;
  _9__2 = this->fields.__9__2;
  v9 = (BaseDialog_o *)this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_RecipeRewardDialogComponent___c__DisplayClass43_0__Open_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !v9 )
LABEL_8:
    sub_B170D4();
  BaseDialog__Open(v9, _9__2, 0, 0LL);
}


void __fastcall RecipeRewardDialogComponent___c__DisplayClass43_0___Open_b__2(
        RecipeRewardDialogComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *_4__this; // x0

  if ( (byte_40F7416 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12986, method);
    byte_40F7416 = 1;
  }
  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  UnityEngine_MonoBehaviour__StartCoroutine(_4__this, (System_String_o *)StringLiteral_12986, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct RecipeRewardDialogComponent_o *_4__this; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *prefabResultItem; // x20
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x20
  UnityEngine_Transform_o *transform; // x0
  struct RecipeRewardDialogComponent_o *v17; // x8
  UnityEngine_Transform_o *v18; // x22
  int v19; // s0
  UnityEngine_Transform_o *v22; // x0
  struct RecipeRewardDialogComponent_o *v23; // x8
  ItemIconComponent_o *Component_srcLineSprite; // x0
  ItemIconComponent_o *v25; // x22
  int32_t v26; // w3
  struct RecipeRewardDialogComponent_o *v27; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *resultItemObjList; // x0
  struct RecipeRewardDialogComponent_o *v29; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *prefabTeaItem; // x21
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x21
  UnityEngine_Transform_o *v33; // x0
  struct RecipeRewardDialogComponent_o *v34; // x8
  UnityEngine_Transform_o *v35; // x22
  UnityEngine_Transform_o *v36; // x0
  int v37; // s0
  UnityEngine_Transform_o *v40; // x0
  struct RecipeRewardDialogComponent_o *v41; // x8
  srcLineSprite_o *v42; // x0
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  int32_t eventId; // w22
  UISprite_o *v45; // x20
  Il2CppObject *v46; // x0
  System_String_o *v47; // x23
  struct RecipeRewardDialogComponent_o *v48; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *resultIconHideObjList; // x0
  int32_t iconId; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F7417 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, gift);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v6);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_19305, v11);
    byte_40F7417 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_38;
  prefabResultItem = (UnityEngine_UI_Dropdown_DropdownItem_o *)_4__this->fields.prefabResultItem;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v14 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      prefabResultItem,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v14 )
    goto LABEL_38;
  v15 = v14;
  transform = UnityEngine_GameObject__get_transform(v14, 0LL);
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_38;
  if ( !transform )
    goto LABEL_38;
  UnityEngine_Transform__set_parent(transform, v17->fields.listRoot, 0LL);
  v18 = UnityEngine_GameObject__get_transform(v15, 0LL);
  *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v18 )
    goto LABEL_38;
  UnityEngine_Transform__set_localPosition(v18, *(UnityEngine_Vector3_o *)&v19, 0LL);
  v22 = UnityEngine_GameObject__get_transform(v15, 0LL);
  v23 = this->fields.__4__this;
  if ( !v23 )
    goto LABEL_38;
  if ( !v22 )
    goto LABEL_38;
  v51.fields.x = v23->fields.iconScale;
  v51.fields.y = v51.fields.x;
  v51.fields.z = v51.fields.x;
  UnityEngine_Transform__set_localScale(v22, v51, 0LL);
  Component_srcLineSprite = (ItemIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v15,
                                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
  if ( !gift )
    goto LABEL_38;
  v25 = Component_srcLineSprite;
  if ( !Component_srcLineSprite )
    goto LABEL_38;
  v26 = gift->fields.num <= 1 ? -1 : gift->fields.num;
  ItemIconComponent__SetGift(Component_srcLineSprite, gift->fields.type, gift->fields.objectId, v26, 0, 0LL);
  ItemIconComponent__CalcSetPossession(v25, gift->fields.type, gift->fields.objectId, 0LL);
  v27 = this->fields.__4__this;
  if ( !v27 )
    goto LABEL_38;
  resultItemObjList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v27->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_38;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    resultItemObjList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
  v29 = this->fields.__4__this;
  if ( !v29 )
    goto LABEL_38;
  prefabTeaItem = (UnityEngine_UI_Dropdown_DropdownItem_o *)v29->fields.prefabTeaItem;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v31 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      prefabTeaItem,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v31 )
    goto LABEL_38;
  v32 = v31;
  v33 = UnityEngine_GameObject__get_transform(v31, 0LL);
  v34 = this->fields.__4__this;
  if ( !v34 )
    goto LABEL_38;
  if ( !v33 )
    goto LABEL_38;
  UnityEngine_Transform__set_parent(v33, v34->fields.iconListRoot, 0LL);
  v35 = UnityEngine_GameObject__get_transform(v32, 0LL);
  v36 = UnityEngine_GameObject__get_transform(v15, 0LL);
  if ( !v36 )
    goto LABEL_38;
  *(UnityEngine_Vector3_o *)&v37 = UnityEngine_Transform__get_localPosition(v36, 0LL);
  if ( !v35 )
    goto LABEL_38;
  UnityEngine_Transform__set_localPosition(v35, *(UnityEngine_Vector3_o *)&v37, 0LL);
  v40 = UnityEngine_GameObject__get_transform(v32, 0LL);
  v41 = this->fields.__4__this;
  if ( !v41 )
    goto LABEL_38;
  if ( !v40 )
    goto LABEL_38;
  v52.fields.x = v41->fields.iconScale;
  v52.fields.y = v52.fields.x;
  v52.fields.z = v52.fields.x;
  UnityEngine_Transform__set_localScale(v40, v52, 0LL);
  v42 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
          v32,
          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  eventRecipeEntity = this->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    goto LABEL_38;
  eventId = eventRecipeEntity->fields.eventId;
  v45 = (UISprite_o *)v42;
  iconId = eventRecipeEntity->fields.iconId;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v47 = System_String__Format((System_String_o *)StringLiteral_19305, v46, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28584872(eventId, v45, v47, 0LL);
  UnityEngine_GameObject__SetActive(v32, 1, 0LL);
  v48 = this->fields.__4__this;
  if ( !v48
    || (resultIconHideObjList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v48->fields.resultIconHideObjList) == 0LL )
  {
LABEL_38:
    sub_B170D4();
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    resultIconHideObjList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
}