void __fastcall FormationRootComponent___ctor(FormationRootComponent_o *this, const MethodInfo *method)
{
  float v2; // s4
  float v3; // s5
  float v4; // s6
  float v5; // s7
  float v7; // s4
  float v8; // s5
  float v9; // s6
  float v10; // s7
  struct UnityEngine_Rect_o v11; // [xsp+0h] [xbp-30h] BYREF
  struct UnityEngine_Rect_o v12; // [xsp+10h] [xbp-20h] BYREF
  UnityEngine_Rect_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v13.fields.m_YMin = 90.0;
  v13.fields.m_Width = 460.0;
  v13.fields.m_Height = 120.0;
  this->fields.TUTORIAL_FORMATION_ARROW_POS = (struct UnityEngine_Vector2_o)0x4316000042280000LL;
  v13.fields.m_XMin = 23.0;
  *(_QWORD *)&v12.fields.m_XMin = 0LL;
  UnityEngine_Rect___ctor(v13, v2, v3, v4, v5, (const MethodInfo *)&v12);
  v14.fields.m_YMin = 225.0;
  this->fields.TUTORIAL_FORMATION_ARROW_RECT = v12;
  this->fields.TUTORIAL_FORMATION_MESSAGE_POS = (struct UnityEngine_Vector2_o)0xC220000000000000LL;
  v14.fields.m_XMin = -510.0;
  v14.fields.m_Width = 160.0;
  v14.fields.m_Height = 60.0;
  v11 = (struct UnityEngine_Rect_o)0LL;
  UnityEngine_Rect___ctor(v14, v7, v8, v9, v10, (const MethodInfo *)&v11);
  this->fields.TUTORIAL_BACK_ARROW_RECT = v11;
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FormationRootComponent__EndLoadCommonBg(FormationRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *backSkinSprite; // x0

  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL )
  {
    sub_B0D97C(backSkinSprite);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FormationRootComponent__Init(FormationRootComponent_o *this, const MethodInfo *method)
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  CommonUI_o *v20; // x20
  FormationRootComponent___c_c *v21; // x8
  struct FormationRootComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__28_0; // x21
  Il2CppObject *v24; // x22
  struct FormationRootComponent___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_Vector2_o TutorialBackArrowPos; // kr00_8
  float v33; // s10
  float v34; // s0
  float v35; // s4
  WebViewManager_o *v36; // x0
  Il2CppMethodPointer methodPointer; // kr08_8
  void *invoker_method; // kr10_8
  CommonUI_o *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  System_Action_o *v42; // x20
  float x; // s14
  float OffsetX; // s9
  float v45; // s0
  float v46; // s4
  CommonUI_o *Instance; // x20
  __int64 v48; // x1
  __int64 v49; // x2
  const char *name; // kr18_8
  Il2CppClass *klass; // kr20_8
  float v52; // s8
  float v53; // s15
  System_String_o *v54; // x21
  FormationRootComponent___c_c *v55; // x8
  struct FormationRootComponent___c_StaticFields *v56; // x9
  System_Action_o *_9__28_1; // x22
  Il2CppObject *v58; // x23
  struct FormationRootComponent___c_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct UserServantEntity_array *UserServantListFromDeckReaveHeroine; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  __int64 v74; // x1
  __int64 v75; // x2
  System_Action_o *v76; // x20
  const MethodInfo *v77; // x2
  MethodInfo methoda; // [xsp+10h] [xbp-A0h] BYREF
  float y; // [xsp+7Ch] [xbp-34h]
  UnityEngine_Vector2_o v80; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v81; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v82; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v83; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v84; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v86; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4
  UnityEngine_Rect_o v87; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_42175D2 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserDeckMaster___, v3);
    sub_B0D8A4(&FSUtility_TypeInfo, v4);
    sub_B0D8A4(&Method_FormationRootComponent__Init_b__28_2__, v5);
    sub_B0D8A4(&Method_FormationRootComponent__Init_b__28_3__, v6);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___, v7);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v11);
    sub_B0D8A4(&Method_FormationRootComponent___c__Init_b__28_0__, v12);
    sub_B0D8A4(&Method_FormationRootComponent___c__Init_b__28_1__, v13);
    sub_B0D8A4(&FormationRootComponent___c_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_13558/*"TUTORIAL_MESSAGE_FORMATION1"*/, v15);
    byte_42175D2 = 1;
  }
  memset(&methoda, 0, 32);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_81;
  TitleInfoControl__changeTitleInfo_17425792(titleInfo, 1, 18, 0, 0LL);
  FormationRootComponent__setMainActive(this, 0, v17);
  titleInfo = this->fields.titleInfo;
  *(_WORD *)&this->fields.isTutorial1 = 0;
  if ( !titleInfo )
    goto LABEL_81;
  TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0LL);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28088484(102, 0LL) )
  {
    if ( (WORD1(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_28088484(109, 0LL) )
    {
      titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v20 = (CommonUI_o *)titleInfo;
      v21 = FormationRootComponent___c_TypeInfo;
      if ( (BYTE3(FormationRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FormationRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo);
        v21 = FormationRootComponent___c_TypeInfo;
      }
      static_fields = v21->static_fields;
      _9__28_0 = static_fields->__9__28_0;
      if ( !_9__28_0 )
      {
        if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v21);
          static_fields = FormationRootComponent___c_TypeInfo->static_fields;
        }
        v24 = (Il2CppObject *)static_fields->__9;
        _9__28_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v18, v19);
        System_Action___ctor(_9__28_0, v24, Method_FormationRootComponent___c__Init_b__28_0__, 0LL);
        v25 = FormationRootComponent___c_TypeInfo->static_fields;
        v25->__9__28_0 = _9__28_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v25->__9__28_0,
          (System_Int32_array **)_9__28_0,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
      }
      if ( v20 )
      {
        CommonUI__OpenTutorialImageDialog_17042492(v20, 3, 109, _9__28_0, 0LL, 0LL, 0LL);
        goto LABEL_72;
      }
LABEL_81:
      sub_B0D97C(titleInfo);
    }
  }
  else
  {
    if ( (WORD1(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( TutorialFlag__IsProgressDone(2, 0LL) )
    {
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      if ( TutorialFlag__Get_28088484(101, 0LL) )
      {
        if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TutorialFlag_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        }
        if ( !TutorialFlag__IsProgressDone(3, 0LL) )
        {
          titleInfo = this->fields.titleInfo;
          this->fields.isTutorial1 = 1;
          if ( titleInfo )
          {
            TitleInfoControl__setBackBtnColliderEnable(titleInfo, 0, 0LL);
            titleInfo = this->fields.titleInfo;
            if ( titleInfo )
            {
              TitleInfoControl__SetHelpBtnColliderEnable(titleInfo, 0, 0LL);
              MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
              titleInfo = (TitleInfoControl_o *)this->fields.svtListBtn;
              if ( titleInfo )
              {
                ((void (__fastcall *)(TitleInfoControl_o *, _QWORD, void *))titleInfo->klass[1]._1.namespaze)(
                  titleInfo,
                  0LL,
                  titleInfo->klass[1]._1.byval_arg.data);
                titleInfo = (TitleInfoControl_o *)this->fields.supportSelectBtn;
                if ( titleInfo )
                {
                  ((void (__fastcall *)(TitleInfoControl_o *, _QWORD, void *))titleInfo->klass[1]._1.namespaze)(
                    titleInfo,
                    0LL,
                    titleInfo->klass[1]._1.byval_arg.data);
                  titleInfo = (TitleInfoControl_o *)this->fields.warehouseBtn;
                  if ( titleInfo )
                  {
                    ((void (__fastcall *)(TitleInfoControl_o *, _QWORD, void *))titleInfo->klass[1]._1.namespaze)(
                      titleInfo,
                      0LL,
                      titleInfo->klass[1]._1.byval_arg.data);
                    titleInfo = (TitleInfoControl_o *)this->fields.dummyBtn;
                    if ( titleInfo )
                    {
                      ((void (__fastcall *)(TitleInfoControl_o *, _QWORD, void *))titleInfo->klass[1]._1.namespaze)(
                        titleInfo,
                        0LL,
                        titleInfo->klass[1]._1.byval_arg.data);
                      titleInfo = (TitleInfoControl_o *)this->fields.scrollBarCollider;
                      if ( titleInfo )
                      {
                        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)titleInfo, 0, 0LL);
                        titleInfo = (TitleInfoControl_o *)this->fields.scrollBar2Collider;
                        if ( titleInfo )
                        {
                          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)titleInfo, 0, 0LL);
                          titleInfo = (TitleInfoControl_o *)this->fields.svtFormationBtn;
                          if ( titleInfo )
                          {
                            titleInfo = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)titleInfo,
                                                                0LL);
                            if ( titleInfo )
                            {
                              titleInfo = (TitleInfoControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  (UnityEngine_GameObject_o *)titleInfo,
                                                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
                              if ( titleInfo )
                              {
                                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)titleInfo, 0, 0LL);
                                x = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.x;
                                y = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y;
                                if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !FSUtility_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
                                }
                                OffsetX = FSUtility__GetOffsetX(68.0, 0, 0LL);
                                *(struct UnityEngine_Rect_o *)&methoda.name = this->fields.TUTORIAL_FORMATION_ARROW_RECT;
                                v84.fields.m_XMin = *(float *)&methoda.name;
                                v45 = UnityEngine_Rect__get_x(v84, (const MethodInfo *)&methoda.name);
                                v85.fields.m_XMin = v45 + FSUtility__GetOffsetX(68.0, 0, 0LL);
                                UnityEngine_Rect__set_x(v85, v46, (const MethodInfo *)&methoda.name);
                                Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                titleInfo = (TitleInfoControl_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_13558/*"TUTORIAL_MESSAGE_FORMATION1"*/,
                                                                    0LL);
                                name = methoda.name;
                                klass = methoda.klass;
                                v53 = this->fields.TUTORIAL_FORMATION_MESSAGE_POS.fields.x;
                                v52 = this->fields.TUTORIAL_FORMATION_MESSAGE_POS.fields.y;
                                v54 = (System_String_o *)titleInfo;
                                v55 = FormationRootComponent___c_TypeInfo;
                                if ( (BYTE3(FormationRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !FormationRootComponent___c_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo);
                                  v55 = FormationRootComponent___c_TypeInfo;
                                }
                                v56 = v55->static_fields;
                                _9__28_1 = v56->__9__28_1;
                                if ( !_9__28_1 )
                                {
                                  if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(v55);
                                    v56 = FormationRootComponent___c_TypeInfo->static_fields;
                                  }
                                  v58 = (Il2CppObject *)v56->__9;
                                  _9__28_1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v48, v49);
                                  System_Action___ctor(
                                    _9__28_1,
                                    v58,
                                    Method_FormationRootComponent___c__Init_b__28_1__,
                                    0LL);
                                  v59 = FormationRootComponent___c_TypeInfo->static_fields;
                                  v59->__9__28_1 = _9__28_1;
                                  sub_B0D840(
                                    (BattleServantConfConponent_o *)&v59->__9__28_1,
                                    (System_Int32_array **)_9__28_1,
                                    v60,
                                    v61,
                                    v62,
                                    v63,
                                    v64,
                                    v65);
                                }
                                if ( Instance )
                                {
                                  v81.fields.y = y;
                                  v81.fields.x = x + OffsetX;
                                  *(_QWORD *)&v86.fields.m_XMin = name;
                                  *(_QWORD *)&v86.fields.m_Width = klass;
                                  CommonUI__OpenTutorialNotificationDialogArrow(
                                    Instance,
                                    v54,
                                    v81,
                                    v86,
                                    90.0,
                                    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(v52), LODWORD(v53)),
                                    -1,
                                    _9__28_1,
                                    0LL);
                                  goto LABEL_72;
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
          goto LABEL_81;
        }
        if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TutorialFlag_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        }
        if ( TutorialFlag__IsProgressDone(3, 0LL) )
        {
          this->fields.isTutorial2 = 1;
          titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( titleInfo )
          {
            TutorialBackArrowPos = CommonUI__GetTutorialBackArrowPos((CommonUI_o *)titleInfo, 0LL);
            if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !FSUtility_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
            }
            v33 = FSUtility__GetOffsetX(68.0, 0, 0LL);
            *(struct UnityEngine_Rect_o *)&methoda.methodPointer = this->fields.TUTORIAL_BACK_ARROW_RECT;
            v82.fields.m_XMin = *(float *)&methoda.methodPointer;
            v34 = UnityEngine_Rect__get_x(v82, &methoda);
            v83.fields.m_XMin = v34 - FSUtility__GetOffsetX(68.0, 0, 0LL);
            UnityEngine_Rect__set_x(v83, v35, &methoda);
            v36 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            methodPointer = methoda.methodPointer;
            invoker_method = methoda.invoker_method;
            v39 = (CommonUI_o *)v36;
            v42 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v40, v41);
            System_Action___ctor(v42, (Il2CppObject *)this, Method_FormationRootComponent__Init_b__28_2__, 0LL);
            if ( v39 )
            {
              v80.fields.x = TutorialBackArrowPos.fields.x - v33;
              v80.fields.y = TutorialBackArrowPos.fields.y;
              *(_QWORD *)&v87.fields.m_XMin = methodPointer;
              *(_QWORD *)&v87.fields.m_Width = invoker_method;
              CommonUI__OpenTutorialArrowMark(v39, v80, 180.0, v87, v42, 0LL);
              goto LABEL_72;
            }
          }
          goto LABEL_81;
        }
      }
    }
  }
LABEL_72:
  titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !titleInfo )
    goto LABEL_81;
  MasterData_WarQuestSelectionMaster = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)titleInfo,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  titleInfo = (TitleInfoControl_o *)TutorialFlag__Get_28088484(126, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_81;
  if ( ((unsigned __int8)titleInfo & 1) != 0 )
    UserServantListFromDeckReaveHeroine = UserDeckMaster__GetUserServantListFromDeckReaveHeroine(
                                            MasterData_WarQuestSelectionMaster,
                                            0LL);
  else
    UserServantListFromDeckReaveHeroine = UserDeckMaster__GetUserServantListFromDeck(
                                            MasterData_WarQuestSelectionMaster,
                                            0LL);
  this->fields.mStandSvtDatas = UserServantListFromDeckReaveHeroine;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mStandSvtDatas,
    (System_Int32_array **)UserServantListFromDeckReaveHeroine,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  this->fields.mStandSvtIdx = -1;
  v76 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v74, v75);
  System_Action___ctor(v76, (Il2CppObject *)this, Method_FormationRootComponent__Init_b__28_3__, 0LL);
  FormationRootComponent__SetupStandServant(this, v76, v77);
}


void __fastcall FormationRootComponent__OnClickBack(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  System_String_o **v5; // x8

  if ( (byte_42175D6 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3055/*"CLICK_BACK"*/, method);
    sub_B0D8A4(&StringLiteral_3096/*"CLICK_TERMINAL"*/, v3);
    byte_42175D6 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B0D97C(0LL);
  if ( this->fields.type == 1 )
    v5 = (System_String_o **)&StringLiteral_3055/*"CLICK_BACK"*/;
  else
    v5 = (System_String_o **)&StringLiteral_3096/*"CLICK_TERMINAL"*/;
  TitleInfoControl__sendEvent(titleInfo, *v5, 0LL);
}


void __fastcall FormationRootComponent__SetupStandServant(
        FormationRootComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  struct UserServantEntity_array *mStandSvtDatas; // x8
  int v25; // w9
  int32_t mStandSvtIdx; // w10
  int32_t v27; // w11
  __int64 v28; // x10
  UserServantEntity_o *v29; // x21
  StandFigureSlideComponent_o *mStandServant; // x22
  System_Action_o *v31; // x23
  struct StandFigureSlideComponent_o *v32; // x19
  __int64 v33; // x1
  __int64 v34; // x2
  System_Action_o *v35; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x0

  if ( (byte_42175D3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, end_act);
    sub_B0D8A4(&Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__0__, v5);
    sub_B0D8A4(&Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__1__, v6);
    sub_B0D8A4(&FormationRootComponent___c__DisplayClass29_0_TypeInfo, v7);
    byte_42175D3 = 1;
  }
  v8 = sub_B0D974(FormationRootComponent___c__DisplayClass29_0_TypeInfo, end_act, method);
  FormationRootComponent___c__DisplayClass29_0___ctor((FormationRootComponent___c__DisplayClass29_0_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_18;
  *(_QWORD *)(v8 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v8 + 24) = end_act;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)end_act, v16, v17, v18, v19, v20, v21);
  mStandSvtDatas = this->fields.mStandSvtDatas;
  if ( !mStandSvtDatas )
    goto LABEL_18;
  if ( (int)mStandSvtDatas->max_length < 1 )
  {
LABEL_13:
    v29 = 0LL;
  }
  else
  {
    v25 = 0;
    while ( 1 )
    {
      mStandSvtIdx = this->fields.mStandSvtIdx;
      this->fields.mStandSvtIdx = mStandSvtIdx + 1;
      v27 = mStandSvtIdx + 1 < (signed int)mStandSvtDatas->max_length ? mStandSvtIdx + 1 : 0;
      this->fields.mStandSvtIdx = v27;
      v28 = *(_QWORD *)&mStandSvtDatas->max_length;
      if ( v27 >= (unsigned int)v28 )
      {
        v42 = sub_B0D9A8(v9);
        sub_B0D948(v42, 0LL);
      }
      v29 = mStandSvtDatas->m_Items[v27];
      if ( v29 )
        break;
      if ( ++v25 >= (int)v28 )
        goto LABEL_13;
    }
  }
  mStandServant = this->fields.mStandServant;
  v31 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v22, v23);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v8,
    Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__0__,
    0LL);
  if ( !mStandServant
    || (StandFigureSlideComponent__Setup(mStandServant, v29, 0, v31, 0LL),
        v32 = this->fields.mStandServant,
        v35 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v33, v34),
        System_Action___ctor(
          v35,
          (Il2CppObject *)v8,
          Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__1__,
          0LL),
        !v32) )
  {
LABEL_18:
    sub_B0D97C(v9);
  }
  v32->fields.mBtnAct = v35;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v32->fields.mBtnAct,
    (System_Int32_array **)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
}


void __fastcall FormationRootComponent___Init_b__28_2(FormationRootComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_10;
  TitleInfoControl__SetHelpBtnColliderEnable(titleInfo, 0, 0LL);
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  titleInfo = (TitleInfoControl_o *)this->fields.svtFormationBtn;
  if ( !titleInfo )
    goto LABEL_10;
  ((void (__fastcall *)(TitleInfoControl_o *, _QWORD, void *))titleInfo->klass[1]._1.namespaze)(
    titleInfo,
    0LL,
    titleInfo->klass[1]._1.byval_arg.data);
  titleInfo = (TitleInfoControl_o *)this->fields.svtListBtn;
  if ( !titleInfo )
    goto LABEL_10;
  ((void (__fastcall *)(TitleInfoControl_o *, _QWORD, void *))titleInfo->klass[1]._1.namespaze)(
    titleInfo,
    0LL,
    titleInfo->klass[1]._1.byval_arg.data);
  titleInfo = (TitleInfoControl_o *)this->fields.supportSelectBtn;
  if ( !titleInfo )
    goto LABEL_10;
  ((void (__fastcall *)(TitleInfoControl_o *, _QWORD, void *))titleInfo->klass[1]._1.namespaze)(
    titleInfo,
    0LL,
    titleInfo->klass[1]._1.byval_arg.data);
  titleInfo = (TitleInfoControl_o *)this->fields.warehouseBtn;
  if ( !titleInfo
    || (((void (__fastcall *)(TitleInfoControl_o *, _QWORD, void *))titleInfo->klass[1]._1.namespaze)(
          titleInfo,
          0LL,
          titleInfo->klass[1]._1.byval_arg.data),
        (titleInfo = (TitleInfoControl_o *)this->fields.dummyBtn) == 0LL)
    || (((void (__fastcall *)(TitleInfoControl_o *, _QWORD, void *))titleInfo->klass[1]._1.namespaze)(
          titleInfo,
          0LL,
          titleInfo->klass[1]._1.byval_arg.data),
        (titleInfo = (TitleInfoControl_o *)this->fields.scrollBarCollider) == 0LL)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)titleInfo, 0, 0LL),
        (titleInfo = (TitleInfoControl_o *)this->fields.scrollBar2Collider) == 0LL) )
  {
LABEL_10:
    sub_B0D97C(titleInfo);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)titleInfo, 0, 0LL);
}


void __fastcall FormationRootComponent___Init_b__28_3(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  PartyOrganizationUtility_o *Instance; // x0
  CommonUI_o *v9; // x20

  if ( (byte_42175D7 & 1) == 0 )
  {
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v5);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_6912/*"GO_NEXT"*/, v7);
    byte_42175D7 = 1;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  if ( !PartyOrganizationUtility__ExistsTemporaryPartyInfo(Instance, 0LL) )
  {
    Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (CommonUI_o *)Instance;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    }
    if ( v9 )
    {
      CommonUI__maskFadein(v9, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
      goto LABEL_15;
    }
LABEL_17:
    sub_B0D97C(Instance);
  }
  Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 40, 1, 0LL, 0LL);
LABEL_15:
  Instance = (PartyOrganizationUtility_o *)this->fields.myFSM;
  if ( !Instance )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6912/*"GO_NEXT"*/, 0LL);
}


void __fastcall FormationRootComponent__beginFinish(FormationRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *backSkinSprite; // x0

  if ( (byte_42175D1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, method);
    byte_42175D1 = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 0, 0LL),
        (backSkinSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
    sub_B0D97C(backSkinSprite);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)backSkinSprite, 2, 0, 0LL);
}


void __fastcall FormationRootComponent__beginInitialize(FormationRootComponent_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_42175CF & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_42175CF = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 3, 30, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall FormationRootComponent__beginStartUp(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *MainBgmName; // x20
  TitleInfoControl_o *titleInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x20

  if ( (byte_42175D0 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AtlasManager_TypeInfo, v3);
    sub_B0D8A4(&BgmManager_TypeInfo, v4);
    sub_B0D8A4(&Method_FormationRootComponent_EndLoadCommonBg__, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    byte_42175D0 = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_19;
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0LL, 18, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_19;
  TitleInfoControl__setBackBtnDepth(titleInfo, 29, 0LL);
  titleInfo = (TitleInfoControl_o *)this->fields.bgTxtSprite;
  if ( !titleInfo
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfo, 0LL),
        titleInfo = (TitleInfoControl_o *)BgTxtManager__IsActiveBgTxt(0LL),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)titleInfo & 1, 0LL),
        MainMenuBar__setMenuActive(1, 0LL, 0LL),
        (titleInfo = (TitleInfoControl_o *)this->fields.backSkinSprite) == 0LL)
    || (titleInfo = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)titleInfo,
                                            0LL)) == 0LL )
  {
LABEL_19:
    sub_B0D97C(titleInfo);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_FormationRootComponent_EndLoadCommonBg__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v12, 2, 1, 0LL);
}


void __fastcall FormationRootComponent__closeArrowMark(FormationRootComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_42175D4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_42175D4 = 1;
  }
  if ( this->fields.isTutorial1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_10;
    CommonUI__CloseTutorialNotificationDialogArrow(Instance, 0LL);
  }
  if ( this->fields.isTutorial2 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseTutorialArrowMark(Instance, 0LL, 0LL);
      return;
    }
LABEL_10:
    sub_B0D97C(Instance);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FormationRootComponent__setMainActive(
        FormationRootComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *topDispRootObj; // x0

  if ( (byte_42175D5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_UIScrollView___, *(_QWORD *)&type);
    byte_42175D5 = 1;
  }
  if ( type == 1 )
  {
    MainMenuBar__setMenuActive(0, 0LL, 0LL);
    topDispRootObj = this->fields.topDispRootObj;
    if ( !topDispRootObj )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive(topDispRootObj, 0, 0LL);
  }
  else if ( !type )
  {
    MainMenuBar__setMenuActive(1, 0LL, 0LL);
    topDispRootObj = this->fields.topDispRootObj;
    if ( topDispRootObj )
    {
      UnityEngine_GameObject__SetActive(topDispRootObj, 1, 0LL);
      topDispRootObj = this->fields.topDispRootObj;
      if ( topDispRootObj )
      {
        topDispRootObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(topDispRootObj, 0LL);
        if ( topDispRootObj )
        {
          topDispRootObj = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                         (UnityEngine_Component_o *)topDispRootObj,
                                                         (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_UIScrollView___);
          if ( topDispRootObj )
          {
            UIScrollView__ResetPosition((UIScrollView_o *)topDispRootObj, 0LL);
            return;
          }
        }
      }
    }
LABEL_13:
    sub_B0D97C(topDispRootObj);
  }
}


void __fastcall FormationRootComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct FormationRootComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4210F54 & 1) == 0 )
  {
    sub_B0D8A4(&FormationRootComponent___c_TypeInfo, v1);
    byte_4210F54 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(FormationRootComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = FormationRootComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct FormationRootComponent___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall FormationRootComponent___c___ctor(FormationRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FormationRootComponent___c___Init_b__28_0(FormationRootComponent___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall FormationRootComponent___c___Init_b__28_1(FormationRootComponent___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall FormationRootComponent___c__DisplayClass29_0___ctor(
        FormationRootComponent___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FormationRootComponent___c__DisplayClass29_0___SetupStandServant_b__0(
        FormationRootComponent___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  struct FormationRootComponent_o *_4__this; // x8
  FormationRootComponent___c__DisplayClass29_0_o *v3; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (FormationRootComponent___c__DisplayClass29_0_o *)_4__this->fields.mStandServant) == 0LL) )
  {
    sub_B0D97C(this);
  }
  StandFigureSlideComponent__SlideIn((StandFigureSlideComponent_o *)this, 0LL, 0LL);
  ActionExtensions__Call(v3->fields.end_act, 0LL);
}


void __fastcall FormationRootComponent___c__DisplayClass29_0___SetupStandServant_b__1(
        FormationRootComponent___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  StandFigureSlideComponent_o *_28088484; // x0
  struct FormationRootComponent_o *_4__this; // x8
  __int64 v8; // x1
  __int64 v9; // x2
  struct FormationRootComponent_o *v10; // x8
  StandFigureSlideComponent_o *mStandServant; // x20
  System_Action_o *_9__2; // x21

  if ( (byte_4210F55 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v4);
    sub_B0D8A4(&Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__2__, v5);
    byte_4210F55 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _28088484 = (StandFigureSlideComponent_o *)TutorialFlag__Get_28088484(102, 0LL);
  if ( ((unsigned __int8)_28088484 & 1) != 0 )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      _28088484 = _4__this->fields.mStandServant;
      if ( _28088484 )
      {
        if ( _28088484->fields.mIsLoading || StandFigureSlideComponent__IsMoving(_28088484, 0LL) )
          return;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        v10 = this->fields.__4__this;
        if ( v10 )
        {
          mStandServant = v10->fields.mStandServant;
          _9__2 = this->fields.__9__2;
          if ( !_9__2 )
          {
            _9__2 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
            System_Action___ctor(
              _9__2,
              (Il2CppObject *)this,
              Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__2__,
              0LL);
            this->fields.__9__2 = _9__2;
            sub_B0D840(&this->fields.__9__2, _9__2);
          }
          if ( mStandServant )
          {
            StandFigureSlideComponent__SlideOut(mStandServant, _9__2, 0, 0LL);
            return;
          }
        }
      }
    }
    sub_B0D97C(_28088484);
  }
}


void __fastcall FormationRootComponent___c__DisplayClass29_0___SetupStandServant_b__2(
        FormationRootComponent___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  FormationRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  FormationRootComponent__SetupStandServant(_4__this, 0LL, 0LL);
}