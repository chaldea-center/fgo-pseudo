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
    sub_B2C434(backSkinSprite, method);
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
  CommonUI_o *v18; // x20
  FormationRootComponent___c_c *v19; // x8
  struct FormationRootComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__28_0; // x21
  Il2CppObject *v22; // x22
  struct FormationRootComponent___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Vector2_o TutorialBackArrowPos; // kr00_8
  float v31; // s10
  float v32; // s0
  float v33; // s4
  WebViewManager_o *v34; // x0
  Il2CppMethodPointer methodPointer; // kr08_8
  void *invoker_method; // kr10_8
  CommonUI_o *v37; // x21
  System_Action_o *v38; // x20
  float x; // s14
  float OffsetX; // s9
  float v41; // s0
  float v42; // s4
  CommonUI_o *Instance; // x20
  const char *name; // kr18_8
  Il2CppClass *klass; // kr20_8
  float v46; // s8
  float v47; // s15
  System_String_o *v48; // x21
  FormationRootComponent___c_c *v49; // x8
  struct FormationRootComponent___c_StaticFields *v50; // x9
  System_Action_o *_9__28_1; // x22
  Il2CppObject *v52; // x23
  struct FormationRootComponent___c_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct UserServantEntity_array *UserServantListFromDeckReaveHeroine; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Action_o *v68; // x20
  const MethodInfo *v69; // x2
  MethodInfo methoda; // [xsp+10h] [xbp-A0h] BYREF
  float y; // [xsp+7Ch] [xbp-34h]
  UnityEngine_Vector2_o v72; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v73; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v77; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v78; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4
  UnityEngine_Rect_o v79; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_418AA93 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserDeckMaster___, v3);
    sub_B2C35C(&FSUtility_TypeInfo, v4);
    sub_B2C35C(&Method_FormationRootComponent__Init_b__28_2__, v5);
    sub_B2C35C(&Method_FormationRootComponent__Init_b__28_3__, v6);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B2C35C(&TutorialFlag_TypeInfo, v11);
    sub_B2C35C(&Method_FormationRootComponent___c__Init_b__28_0__, v12);
    sub_B2C35C(&Method_FormationRootComponent___c__Init_b__28_1__, v13);
    sub_B2C35C(&FormationRootComponent___c_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_13514/*"TUTORIAL_MESSAGE_FORMATION1"*/, v15);
    byte_418AA93 = 1;
  }
  memset(&methoda, 0, 32);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_81;
  TitleInfoControl__changeTitleInfo_19533564(titleInfo, 1, 18, 0, 0LL);
  FormationRootComponent__setMainActive(this, 0, v17);
  titleInfo = this->fields.titleInfo;
  *(_WORD *)&this->fields.isTutorial1 = 0;
  if ( !titleInfo )
    goto LABEL_81;
  TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0LL);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28617756(102, 0LL) )
  {
    if ( (WORD1(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_28617756(109, 0LL) )
    {
      titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v18 = (CommonUI_o *)titleInfo;
      v19 = FormationRootComponent___c_TypeInfo;
      if ( (BYTE3(FormationRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FormationRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo);
        v19 = FormationRootComponent___c_TypeInfo;
      }
      static_fields = v19->static_fields;
      _9__28_0 = static_fields->__9__28_0;
      if ( !_9__28_0 )
      {
        if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v19);
          static_fields = FormationRootComponent___c_TypeInfo->static_fields;
        }
        v22 = (Il2CppObject *)static_fields->__9;
        _9__28_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(_9__28_0, v22, Method_FormationRootComponent___c__Init_b__28_0__, 0LL);
        v23 = FormationRootComponent___c_TypeInfo->static_fields;
        v23->__9__28_0 = _9__28_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v23->__9__28_0,
          (System_Int32_array **)_9__28_0,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
      }
      if ( v18 )
      {
        CommonUI__OpenTutorialImageDialog_17996800(v18, 3, 109, _9__28_0, 0LL, 0LL, 0LL);
        goto LABEL_72;
      }
LABEL_81:
      sub_B2C434(titleInfo, method);
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
      if ( TutorialFlag__Get_28617756(101, 0LL) )
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
                                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
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
                                v76.fields.m_XMin = *(float *)&methoda.name;
                                v41 = UnityEngine_Rect__get_x(v76, (const MethodInfo *)&methoda.name);
                                v77.fields.m_XMin = v41 + FSUtility__GetOffsetX(68.0, 0, 0LL);
                                UnityEngine_Rect__set_x(v77, v42, (const MethodInfo *)&methoda.name);
                                Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                titleInfo = (TitleInfoControl_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_13514/*"TUTORIAL_MESSAGE_FORMATION1"*/,
                                                                    0LL);
                                name = methoda.name;
                                klass = methoda.klass;
                                v47 = this->fields.TUTORIAL_FORMATION_MESSAGE_POS.fields.x;
                                v46 = this->fields.TUTORIAL_FORMATION_MESSAGE_POS.fields.y;
                                v48 = (System_String_o *)titleInfo;
                                v49 = FormationRootComponent___c_TypeInfo;
                                if ( (BYTE3(FormationRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !FormationRootComponent___c_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo);
                                  v49 = FormationRootComponent___c_TypeInfo;
                                }
                                v50 = v49->static_fields;
                                _9__28_1 = v50->__9__28_1;
                                if ( !_9__28_1 )
                                {
                                  if ( (BYTE3(v49->vtable._0_Equals.methodPtr) & 4) != 0 && !v49->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(v49);
                                    v50 = FormationRootComponent___c_TypeInfo->static_fields;
                                  }
                                  v52 = (Il2CppObject *)v50->__9;
                                  _9__28_1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                                  System_Action___ctor(
                                    _9__28_1,
                                    v52,
                                    Method_FormationRootComponent___c__Init_b__28_1__,
                                    0LL);
                                  v53 = FormationRootComponent___c_TypeInfo->static_fields;
                                  v53->__9__28_1 = _9__28_1;
                                  sub_B2C2F8(
                                    (BattleServantConfConponent_o *)&v53->__9__28_1,
                                    (System_Int32_array **)_9__28_1,
                                    v54,
                                    v55,
                                    v56,
                                    v57,
                                    v58,
                                    v59);
                                }
                                if ( Instance )
                                {
                                  v73.fields.y = y;
                                  v73.fields.x = x + OffsetX;
                                  *(_QWORD *)&v78.fields.m_XMin = name;
                                  *(_QWORD *)&v78.fields.m_Width = klass;
                                  CommonUI__OpenTutorialNotificationDialogArrow(
                                    Instance,
                                    v48,
                                    v73,
                                    v78,
                                    90.0,
                                    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(v46), LODWORD(v47)),
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
          titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( titleInfo )
          {
            TutorialBackArrowPos = CommonUI__GetTutorialBackArrowPos((CommonUI_o *)titleInfo, 0LL);
            if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !FSUtility_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
            }
            v31 = FSUtility__GetOffsetX(68.0, 0, 0LL);
            *(struct UnityEngine_Rect_o *)&methoda.methodPointer = this->fields.TUTORIAL_BACK_ARROW_RECT;
            v74.fields.m_XMin = *(float *)&methoda.methodPointer;
            v32 = UnityEngine_Rect__get_x(v74, &methoda);
            v75.fields.m_XMin = v32 - FSUtility__GetOffsetX(68.0, 0, 0LL);
            UnityEngine_Rect__set_x(v75, v33, &methoda);
            v34 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            methodPointer = methoda.methodPointer;
            invoker_method = methoda.invoker_method;
            v37 = (CommonUI_o *)v34;
            v38 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            System_Action___ctor(v38, (Il2CppObject *)this, Method_FormationRootComponent__Init_b__28_2__, 0LL);
            if ( v37 )
            {
              v72.fields.x = TutorialBackArrowPos.fields.x - v31;
              v72.fields.y = TutorialBackArrowPos.fields.y;
              *(_QWORD *)&v79.fields.m_XMin = methodPointer;
              *(_QWORD *)&v79.fields.m_Width = invoker_method;
              CommonUI__OpenTutorialArrowMark(v37, v72, 180.0, v79, v38, 0LL);
              goto LABEL_72;
            }
          }
          goto LABEL_81;
        }
      }
    }
  }
LABEL_72:
  titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !titleInfo )
    goto LABEL_81;
  MasterData_WarQuestSelectionMaster = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)titleInfo,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  titleInfo = (TitleInfoControl_o *)TutorialFlag__Get_28617756(126, 0LL);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mStandSvtDatas,
    (System_Int32_array **)UserServantListFromDeckReaveHeroine,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  this->fields.mStandSvtIdx = -1;
  v68 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v68, (Il2CppObject *)this, Method_FormationRootComponent__Init_b__28_3__, 0LL);
  FormationRootComponent__SetupStandServant(this, v68, v69);
}


void __fastcall FormationRootComponent__OnClickBack(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  System_String_o **v5; // x8

  if ( (byte_418AA97 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3043/*"CLICK_BACK"*/, method);
    sub_B2C35C(&StringLiteral_3084/*"CLICK_TERMINAL"*/, v3);
    byte_418AA97 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B2C434(0LL, method);
  if ( this->fields.type == 1 )
    v5 = (System_String_o **)&StringLiteral_3043/*"CLICK_BACK"*/;
  else
    v5 = (System_String_o **)&StringLiteral_3084/*"CLICK_TERMINAL"*/;
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
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct UserServantEntity_array *mStandSvtDatas; // x8
  int v24; // w9
  int32_t mStandSvtIdx; // w10
  int32_t v26; // w11
  __int64 v27; // x10
  UserServantEntity_o *v28; // x21
  StandFigureSlideComponent_o *mStandServant; // x22
  System_Action_o *v30; // x23
  struct StandFigureSlideComponent_o *v31; // x19
  System_Action_o *v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x0

  if ( (byte_418AA94 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, end_act);
    sub_B2C35C(&Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__0__, v5);
    sub_B2C35C(&Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__1__, v6);
    sub_B2C35C(&FormationRootComponent___c__DisplayClass29_0_TypeInfo, v7);
    byte_418AA94 = 1;
  }
  v8 = sub_B2C42C(FormationRootComponent___c__DisplayClass29_0_TypeInfo);
  FormationRootComponent___c__DisplayClass29_0___ctor((FormationRootComponent___c__DisplayClass29_0_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_18;
  *(_QWORD *)(v8 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 24) = end_act;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)end_act, v17, v18, v19, v20, v21, v22);
  mStandSvtDatas = this->fields.mStandSvtDatas;
  if ( !mStandSvtDatas )
    goto LABEL_18;
  if ( (int)mStandSvtDatas->max_length < 1 )
  {
LABEL_13:
    v28 = 0LL;
  }
  else
  {
    v24 = 0;
    while ( 1 )
    {
      mStandSvtIdx = this->fields.mStandSvtIdx;
      this->fields.mStandSvtIdx = mStandSvtIdx + 1;
      v26 = mStandSvtIdx + 1 < (signed int)mStandSvtDatas->max_length ? mStandSvtIdx + 1 : 0;
      this->fields.mStandSvtIdx = v26;
      v27 = *(_QWORD *)&mStandSvtDatas->max_length;
      if ( v26 >= (unsigned int)v27 )
      {
        v39 = sub_B2C460(v9);
        sub_B2C400(v39, 0LL);
      }
      v28 = mStandSvtDatas->m_Items[v26];
      if ( v28 )
        break;
      if ( ++v24 >= (int)v27 )
        goto LABEL_13;
    }
  }
  mStandServant = this->fields.mStandServant;
  v30 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v8,
    Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__0__,
    0LL);
  if ( !mStandServant
    || (StandFigureSlideComponent__Setup(mStandServant, v28, 0, v30, 0LL),
        v31 = this->fields.mStandServant,
        v32 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v32,
          (Il2CppObject *)v8,
          Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__1__,
          0LL),
        !v31) )
  {
LABEL_18:
    sub_B2C434(v9, v10);
  }
  v31->fields.mBtnAct = v32;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v31->fields.mBtnAct,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
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
    sub_B2C434(titleInfo, method);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)titleInfo, 0, 0LL);
}


void __fastcall FormationRootComponent___Init_b__28_3(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  PlayMakerFSM_o *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20

  if ( (byte_418AA98 & 1) == 0 )
  {
    sub_B2C35C(&AvalonSceneManager_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&StringLiteral_6892/*"GO_NEXT"*/, v4);
    byte_418AA98 = 1;
  }
  Instance = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v7
    || (CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL),
        (Instance = this->fields.myFSM) == 0LL) )
  {
    sub_B2C434(Instance, v6);
  }
  PlayMakerFSM__SendEvent(Instance, (System_String_o *)StringLiteral_6892/*"GO_NEXT"*/, 0LL);
}


void __fastcall FormationRootComponent__beginFinish(FormationRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *backSkinSprite; // x0

  if ( (byte_418AA92 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, method);
    byte_418AA92 = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 0, 0LL),
        (backSkinSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
    sub_B2C434(backSkinSprite, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)backSkinSprite, 2, 0, 0LL);
}


void __fastcall FormationRootComponent__beginInitialize(FormationRootComponent_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_418AA90 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_418AA90 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 3, 30, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall FormationRootComponent__beginStartUp(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *MainBgmName; // x20
  __int64 v8; // x1
  TitleInfoControl_o *titleInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_o *v11; // x20

  if ( (byte_418AA91 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AtlasManager_TypeInfo, v3);
    sub_B2C35C(&BgmManager_TypeInfo, v4);
    sub_B2C35C(&Method_FormationRootComponent_EndLoadCommonBg__, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    byte_418AA91 = 1;
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
    sub_B2C434(titleInfo, v8);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_FormationRootComponent_EndLoadCommonBg__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v11, 2, 1, 0LL);
}


void __fastcall FormationRootComponent__closeArrowMark(FormationRootComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_418AA95 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_418AA95 = 1;
  }
  if ( this->fields.isTutorial1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_10;
    CommonUI__CloseTutorialNotificationDialogArrow(Instance, 0LL);
  }
  if ( this->fields.isTutorial2 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseTutorialArrowMark(Instance, 0LL, 0LL);
      return;
    }
LABEL_10:
    sub_B2C434(Instance, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FormationRootComponent__setMainActive(
        FormationRootComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *topDispRootObj; // x0

  if ( (byte_418AA96 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_UIScrollView___, *(_QWORD *)&type);
    byte_418AA96 = 1;
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
                                                         (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_UIScrollView___);
          if ( topDispRootObj )
          {
            UIScrollView__ResetPosition((UIScrollView_o *)topDispRootObj, 0LL);
            return;
          }
        }
      }
    }
LABEL_13:
    sub_B2C434(topDispRootObj, v5);
  }
}


void __fastcall FormationRootComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct FormationRootComponent___c_StaticFields *static_fields; // x0

  if ( (byte_41841D5 & 1) == 0 )
  {
    sub_B2C35C(&FormationRootComponent___c_TypeInfo, v1);
    byte_41841D5 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(FormationRootComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = FormationRootComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct FormationRootComponent___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, method);
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
  StandFigureSlideComponent_o *_28617756; // x0
  __int64 v7; // x1
  struct FormationRootComponent_o *_4__this; // x8
  struct FormationRootComponent_o *v9; // x8
  StandFigureSlideComponent_o *mStandServant; // x20
  System_Action_o *_9__2; // x21

  if ( (byte_41841D6 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    sub_B2C35C(&TutorialFlag_TypeInfo, v4);
    sub_B2C35C(&Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__2__, v5);
    byte_41841D6 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _28617756 = (StandFigureSlideComponent_o *)TutorialFlag__Get_28617756(102, 0LL);
  if ( ((unsigned __int8)_28617756 & 1) != 0 )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      _28617756 = _4__this->fields.mStandServant;
      if ( _28617756 )
      {
        if ( _28617756->fields.mIsLoading || StandFigureSlideComponent__IsMoving(_28617756, 0LL) )
          return;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        v9 = this->fields.__4__this;
        if ( v9 )
        {
          mStandServant = v9->fields.mStandServant;
          _9__2 = this->fields.__9__2;
          if ( !_9__2 )
          {
            _9__2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            System_Action___ctor(
              _9__2,
              (Il2CppObject *)this,
              Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__2__,
              0LL);
            this->fields.__9__2 = _9__2;
            sub_B2C2F8(&this->fields.__9__2, _9__2);
          }
          if ( mStandServant )
          {
            StandFigureSlideComponent__SlideOut(mStandServant, _9__2, 0, 0LL);
            return;
          }
        }
      }
    }
    sub_B2C434(_28617756, v7);
  }
}


void __fastcall FormationRootComponent___c__DisplayClass29_0___SetupStandServant_b__2(
        FormationRootComponent___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  FormationRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  FormationRootComponent__SetupStandServant(_4__this, 0LL, 0LL);
}