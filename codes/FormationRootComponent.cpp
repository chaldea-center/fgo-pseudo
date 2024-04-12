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
    sub_B52A5C(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FormationRootComponent__Init(FormationRootComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x2
  CommonUI_o *v5; // x20
  FormationRootComponent___c_c *v6; // x8
  struct FormationRootComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__28_0; // x21
  Il2CppObject *v9; // x22
  struct FormationRootComponent___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_Vector2_o TutorialBackArrowPos; // kr00_8
  float v18; // s10
  float v19; // s0
  float v20; // s4
  WebViewManager_o *v21; // x0
  Il2CppMethodPointer methodPointer; // kr08_8
  void *invoker_method; // kr10_8
  CommonUI_o *v24; // x21
  System_Action_o *v25; // x20
  float x; // s14
  float OffsetX; // s9
  float v28; // s0
  float v29; // s4
  CommonUI_o *Instance; // x20
  const char *name; // kr18_8
  Il2CppClass *klass; // kr20_8
  float v33; // s8
  float v34; // s15
  System_String_o *v35; // x21
  FormationRootComponent___c_c *v36; // x8
  struct FormationRootComponent___c_StaticFields *v37; // x9
  System_Action_o *_9__28_1; // x22
  Il2CppObject *v39; // x23
  struct FormationRootComponent___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct UserServantEntity_array *UserServantListFromDeckReaveHeroine; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Action_o *v55; // x20
  const MethodInfo *v56; // x2
  MethodInfo methoda; // [xsp+10h] [xbp-A0h] BYREF
  float y; // [xsp+7Ch] [xbp-34h]
  UnityEngine_Vector2_o v59; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v60; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v65; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4
  UnityEngine_Rect_o v66; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_42B3170 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_B52984(&FSUtility_TypeInfo);
    sub_B52984(&Method_FormationRootComponent__Init_b__28_2__);
    sub_B52984(&Method_FormationRootComponent__Init_b__28_3__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&TutorialFlag_TypeInfo);
    sub_B52984(&Method_FormationRootComponent___c__Init_b__28_0__);
    sub_B52984(&Method_FormationRootComponent___c__Init_b__28_1__);
    sub_B52984(&FormationRootComponent___c_TypeInfo);
    sub_B52984(&StringLiteral_13611/*"TUTORIAL_MESSAGE_FORMATION1"*/);
    byte_42B3170 = 1;
  }
  memset(&methoda, 0, 32);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_81;
  TitleInfoControl__changeTitleInfo_18255196(titleInfo, 1, 18, 0, 0LL);
  FormationRootComponent__setMainActive(this, 0, v4);
  titleInfo = this->fields.titleInfo;
  *(_WORD *)&this->fields.isTutorial1 = 0;
  if ( !titleInfo )
    goto LABEL_81;
  TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0LL);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_29217932(102, 0LL) )
  {
    if ( (WORD1(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_29217932(109, 0LL) )
    {
      titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v5 = (CommonUI_o *)titleInfo;
      v6 = FormationRootComponent___c_TypeInfo;
      if ( (BYTE3(FormationRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FormationRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo);
        v6 = FormationRootComponent___c_TypeInfo;
      }
      static_fields = v6->static_fields;
      _9__28_0 = static_fields->__9__28_0;
      if ( !_9__28_0 )
      {
        if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v6);
          static_fields = FormationRootComponent___c_TypeInfo->static_fields;
        }
        v9 = (Il2CppObject *)static_fields->__9;
        _9__28_0 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(_9__28_0, v9, Method_FormationRootComponent___c__Init_b__28_0__, 0LL);
        v10 = FormationRootComponent___c_TypeInfo->static_fields;
        v10->__9__28_0 = _9__28_0;
        sub_B52920(
          (BattleServantConfConponent_o *)&v10->__9__28_0,
          (System_Int32_array **)_9__28_0,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
      }
      if ( v5 )
      {
        CommonUI__OpenTutorialImageDialog_18183744(v5, 3, 109, _9__28_0, 0LL, 0LL, 0LL);
        goto LABEL_72;
      }
LABEL_81:
      sub_B52A5C(titleInfo, method);
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
      if ( TutorialFlag__Get_29217932(101, 0LL) )
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
                                                                  (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
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
                                v63.fields.m_XMin = *(float *)&methoda.name;
                                v28 = UnityEngine_Rect__get_x(v63, (const MethodInfo *)&methoda.name);
                                v64.fields.m_XMin = v28 + FSUtility__GetOffsetX(68.0, 0, 0LL);
                                UnityEngine_Rect__set_x(v64, v29, (const MethodInfo *)&methoda.name);
                                Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                titleInfo = (TitleInfoControl_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_13611/*"TUTORIAL_MESSAGE_FORMATION1"*/,
                                                                    0LL);
                                name = methoda.name;
                                klass = methoda.klass;
                                v34 = this->fields.TUTORIAL_FORMATION_MESSAGE_POS.fields.x;
                                v33 = this->fields.TUTORIAL_FORMATION_MESSAGE_POS.fields.y;
                                v35 = (System_String_o *)titleInfo;
                                v36 = FormationRootComponent___c_TypeInfo;
                                if ( (BYTE3(FormationRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !FormationRootComponent___c_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo);
                                  v36 = FormationRootComponent___c_TypeInfo;
                                }
                                v37 = v36->static_fields;
                                _9__28_1 = v37->__9__28_1;
                                if ( !_9__28_1 )
                                {
                                  if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(v36);
                                    v37 = FormationRootComponent___c_TypeInfo->static_fields;
                                  }
                                  v39 = (Il2CppObject *)v37->__9;
                                  _9__28_1 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                                  System_Action___ctor(
                                    _9__28_1,
                                    v39,
                                    Method_FormationRootComponent___c__Init_b__28_1__,
                                    0LL);
                                  v40 = FormationRootComponent___c_TypeInfo->static_fields;
                                  v40->__9__28_1 = _9__28_1;
                                  sub_B52920(
                                    (BattleServantConfConponent_o *)&v40->__9__28_1,
                                    (System_Int32_array **)_9__28_1,
                                    v41,
                                    v42,
                                    v43,
                                    v44,
                                    v45,
                                    v46);
                                }
                                if ( Instance )
                                {
                                  v60.fields.y = y;
                                  v60.fields.x = x + OffsetX;
                                  *(_QWORD *)&v65.fields.m_XMin = name;
                                  *(_QWORD *)&v65.fields.m_Width = klass;
                                  CommonUI__OpenTutorialNotificationDialogArrow(
                                    Instance,
                                    v35,
                                    v60,
                                    v65,
                                    90.0,
                                    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(v33), LODWORD(v34)),
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
          titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( titleInfo )
          {
            TutorialBackArrowPos = CommonUI__GetTutorialBackArrowPos((CommonUI_o *)titleInfo, 0LL);
            if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !FSUtility_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
            }
            v18 = FSUtility__GetOffsetX(68.0, 0, 0LL);
            *(struct UnityEngine_Rect_o *)&methoda.methodPointer = this->fields.TUTORIAL_BACK_ARROW_RECT;
            v61.fields.m_XMin = *(float *)&methoda.methodPointer;
            v19 = UnityEngine_Rect__get_x(v61, &methoda);
            v62.fields.m_XMin = v19 - FSUtility__GetOffsetX(68.0, 0, 0LL);
            UnityEngine_Rect__set_x(v62, v20, &methoda);
            v21 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            methodPointer = methoda.methodPointer;
            invoker_method = methoda.invoker_method;
            v24 = (CommonUI_o *)v21;
            v25 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
            System_Action___ctor(v25, (Il2CppObject *)this, Method_FormationRootComponent__Init_b__28_2__, 0LL);
            if ( v24 )
            {
              v59.fields.x = TutorialBackArrowPos.fields.x - v18;
              v59.fields.y = TutorialBackArrowPos.fields.y;
              *(_QWORD *)&v66.fields.m_XMin = methodPointer;
              *(_QWORD *)&v66.fields.m_Width = invoker_method;
              CommonUI__OpenTutorialArrowMark(v24, v59, 180.0, v66, v25, 0LL);
              goto LABEL_72;
            }
          }
          goto LABEL_81;
        }
      }
    }
  }
LABEL_72:
  titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !titleInfo )
    goto LABEL_81;
  MasterData_WarQuestSelectionMaster = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)titleInfo,
                                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  titleInfo = (TitleInfoControl_o *)TutorialFlag__Get_29217932(126, 0LL);
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.mStandSvtDatas,
    (System_Int32_array **)UserServantListFromDeckReaveHeroine,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  this->fields.mStandSvtIdx = -1;
  v55 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v55, (Il2CppObject *)this, Method_FormationRootComponent__Init_b__28_3__, 0LL);
  FormationRootComponent__SetupStandServant(this, v55, v56);
}


void __fastcall FormationRootComponent__OnClickBack(FormationRootComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  System_String_o **v4; // x8

  if ( (byte_42B3174 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_3075/*"CLICK_BACK"*/);
    sub_B52984(&StringLiteral_3116/*"CLICK_TERMINAL"*/);
    byte_42B3174 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B52A5C(0LL, method);
  if ( this->fields.type == 1 )
    v4 = (System_String_o **)&StringLiteral_3075/*"CLICK_BACK"*/;
  else
    v4 = (System_String_o **)&StringLiteral_3116/*"CLICK_TERMINAL"*/;
  TitleInfoControl__sendEvent(titleInfo, *v4, 0LL);
}


void __fastcall FormationRootComponent__SetupStandServant(
        FormationRootComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v5; // x20
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
  struct UserServantEntity_array *mStandSvtDatas; // x8
  int v21; // w9
  int32_t mStandSvtIdx; // w10
  int32_t v23; // w11
  __int64 v24; // x10
  UserServantEntity_o *v25; // x21
  StandFigureSlideComponent_o *mStandServant; // x22
  System_Action_o *v27; // x23
  struct StandFigureSlideComponent_o *v28; // x19
  System_Action_o *v29; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x0

  if ( (byte_42B3171 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__0__);
    sub_B52984(&Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__1__);
    sub_B52984(&FormationRootComponent___c__DisplayClass29_0_TypeInfo);
    byte_42B3171 = 1;
  }
  v5 = sub_B52A54(FormationRootComponent___c__DisplayClass29_0_TypeInfo);
  FormationRootComponent___c__DisplayClass29_0___ctor((FormationRootComponent___c__DisplayClass29_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = end_act;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)end_act, v14, v15, v16, v17, v18, v19);
  mStandSvtDatas = this->fields.mStandSvtDatas;
  if ( !mStandSvtDatas )
    goto LABEL_18;
  if ( (int)mStandSvtDatas->max_length < 1 )
  {
LABEL_13:
    v25 = 0LL;
  }
  else
  {
    v21 = 0;
    while ( 1 )
    {
      mStandSvtIdx = this->fields.mStandSvtIdx;
      this->fields.mStandSvtIdx = mStandSvtIdx + 1;
      v23 = mStandSvtIdx + 1 < (signed int)mStandSvtDatas->max_length ? mStandSvtIdx + 1 : 0;
      this->fields.mStandSvtIdx = v23;
      v24 = *(_QWORD *)&mStandSvtDatas->max_length;
      if ( v23 >= (unsigned int)v24 )
      {
        v36 = sub_B52A88(v6);
        sub_B52A28(v36, 0LL);
      }
      v25 = mStandSvtDatas->m_Items[v23];
      if ( v25 )
        break;
      if ( ++v21 >= (int)v24 )
        goto LABEL_13;
    }
  }
  mStandServant = this->fields.mStandServant;
  v27 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v5,
    Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__0__,
    0LL);
  if ( !mStandServant
    || (StandFigureSlideComponent__Setup(mStandServant, v25, 0, v27, 0LL),
        v28 = this->fields.mStandServant,
        v29 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(
          v29,
          (Il2CppObject *)v5,
          Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__1__,
          0LL),
        !v28) )
  {
LABEL_18:
    sub_B52A5C(v6, v7);
  }
  v28->fields.mBtnAct = v29;
  sub_B52920(
    (BattleServantConfConponent_o *)&v28->fields.mBtnAct,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
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
    sub_B52A5C(titleInfo, method);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)titleInfo, 0, 0LL);
}


void __fastcall FormationRootComponent___Init_b__28_3(FormationRootComponent_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20

  if ( (byte_42B3175 & 1) == 0 )
  {
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B52984(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B52984(&StringLiteral_6939/*"GO_NEXT"*/);
    byte_42B3175 = 1;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  if ( !PartyOrganizationUtility__ExistsTemporaryPartyInfo(Instance, 0LL) )
  {
    Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v5 = (CommonUI_o *)Instance;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    }
    if ( v5 )
    {
      CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
      goto LABEL_15;
    }
LABEL_17:
    sub_B52A5C(Instance, v4);
  }
  Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 40, 1, 0LL, 0LL);
LABEL_15:
  Instance = (PartyOrganizationUtility_o *)this->fields.myFSM;
  if ( !Instance )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6939/*"GO_NEXT"*/, 0LL);
}


void __fastcall FormationRootComponent__beginFinish(FormationRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *backSkinSprite; // x0

  if ( (byte_42B316F & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_42B316F = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 0, 0LL),
        (backSkinSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
    sub_B52A5C(backSkinSprite, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)backSkinSprite, 2, 0, 0LL);
}


void __fastcall FormationRootComponent__beginInitialize(FormationRootComponent_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42B316D & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_42B316D = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 3, 30, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall FormationRootComponent__beginStartUp(FormationRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *MainBgmName; // x20
  __int64 v4; // x1
  TitleInfoControl_o *titleInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_o *v7; // x20

  if ( (byte_42B316E & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&BgmManager_TypeInfo);
    sub_B52984(&Method_FormationRootComponent_EndLoadCommonBg__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B316E = 1;
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
    sub_B52A5C(titleInfo, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  v7 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_FormationRootComponent_EndLoadCommonBg__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v7, 2, 1, 0LL);
}


void __fastcall FormationRootComponent__closeArrowMark(FormationRootComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42B3172 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B3172 = 1;
  }
  if ( this->fields.isTutorial1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_10;
    CommonUI__CloseTutorialNotificationDialogArrow(Instance, 0LL);
  }
  if ( this->fields.isTutorial2 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseTutorialArrowMark(Instance, 0LL, 0LL);
      return;
    }
LABEL_10:
    sub_B52A5C(Instance, v4);
  }
}


void __fastcall FormationRootComponent__setMainActive(
        FormationRootComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *topDispRootObj; // x0

  if ( (byte_42B3173 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponentInChildren_UIScrollView___);
    byte_42B3173 = 1;
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
                                                         (const MethodInfo_1A49284 *)Method_UnityEngine_Component_GetComponentInChildren_UIScrollView___);
          if ( topDispRootObj )
          {
            UIScrollView__ResetPosition((UIScrollView_o *)topDispRootObj, 0LL);
            return;
          }
        }
      }
    }
LABEL_13:
    sub_B52A5C(topDispRootObj, v5);
  }
}


void __fastcall FormationRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct FormationRootComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42ACE20 & 1) == 0 )
  {
    sub_B52984(&FormationRootComponent___c_TypeInfo);
    byte_42ACE20 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(FormationRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = FormationRootComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct FormationRootComponent___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, method);
  }
  StandFigureSlideComponent__SlideIn((StandFigureSlideComponent_o *)this, 0LL, 0LL);
  ActionExtensions__Call(v3->fields.end_act, 0LL);
}


void __fastcall FormationRootComponent___c__DisplayClass29_0___SetupStandServant_b__1(
        FormationRootComponent___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  StandFigureSlideComponent_o *_29217932; // x0
  __int64 v4; // x1
  struct FormationRootComponent_o *_4__this; // x8
  struct FormationRootComponent_o *v6; // x8
  StandFigureSlideComponent_o *mStandServant; // x20
  System_Action_o *_9__2; // x21

  if ( (byte_42ACE21 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&TutorialFlag_TypeInfo);
    sub_B52984(&Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__2__);
    byte_42ACE21 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _29217932 = (StandFigureSlideComponent_o *)TutorialFlag__Get_29217932(102, 0LL);
  if ( ((unsigned __int8)_29217932 & 1) != 0 )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      _29217932 = _4__this->fields.mStandServant;
      if ( _29217932 )
      {
        if ( _29217932->fields.mIsLoading || StandFigureSlideComponent__IsMoving(_29217932, 0LL) )
          return;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        v6 = this->fields.__4__this;
        if ( v6 )
        {
          mStandServant = v6->fields.mStandServant;
          _9__2 = this->fields.__9__2;
          if ( !_9__2 )
          {
            _9__2 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
            System_Action___ctor(
              _9__2,
              (Il2CppObject *)this,
              Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__2__,
              0LL);
            this->fields.__9__2 = _9__2;
            sub_B52920(&this->fields.__9__2);
          }
          if ( mStandServant )
          {
            StandFigureSlideComponent__SlideOut(mStandServant, _9__2, 0, 0LL);
            return;
          }
        }
      }
    }
    sub_B52A5C(_29217932, v4);
  }
}


void __fastcall FormationRootComponent___c__DisplayClass29_0___SetupStandServant_b__2(
        FormationRootComponent___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  FormationRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
  FormationRootComponent__SetupStandServant(_4__this, 0LL, 0LL);
}