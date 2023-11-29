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
  UnityEngine_GameObject_o *gameObject; // x0

  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite || (gameObject = UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
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
  TitleInfoControl_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  CommonUI_o *Instance; // x20
  FormationRootComponent___c_c *v24; // x8
  struct FormationRootComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__28_0; // x21
  Il2CppObject *v27; // x22
  struct FormationRootComponent___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  CommonUI_o *v35; // x0
  UnityEngine_Vector2_o TutorialBackArrowPos; // kr00_8
  float v37; // s10
  float v38; // s0
  float v39; // s4
  WebViewManager_o *v40; // x0
  Il2CppMethodPointer methodPointer; // kr08_8
  void *invoker_method; // kr10_8
  CommonUI_o *v43; // x21
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  System_Action_o *v48; // x20
  TitleInfoControl_o *v49; // x0
  TitleInfoControl_o *v50; // x0
  struct UIButton_o *svtListBtn; // x0
  struct UIButton_o *supportSelectBtn; // x0
  struct UIButton_o *warehouseBtn; // x0
  struct UIButton_o *dummyBtn; // x0
  UnityEngine_Collider_o *scrollBarCollider; // x0
  UnityEngine_Collider_o *scrollBar2Collider; // x0
  UnityEngine_Component_o *svtFormationBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Behaviour_o *Component_srcLineSprite; // x0
  float x; // s14
  float OffsetX; // s9
  float v62; // s0
  float v63; // s4
  CommonUI_o *v64; // x20
  System_String_o *v65; // x0
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  const char *name; // kr18_8
  Il2CppClass *klass; // kr20_8
  float v72; // s8
  float v73; // s15
  System_String_o *v74; // x21
  FormationRootComponent___c_c *v75; // x8
  struct FormationRootComponent___c_StaticFields *v76; // x9
  System_Action_o *_9__28_1; // x22
  Il2CppObject *v78; // x23
  struct FormationRootComponent___c_StaticFields *v79; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  WebViewManager_o *v86; // x0
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // x20
  bool _28023340; // w0
  struct UserServantEntity_array *UserServantListFromDeckReaveHeroine; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x3
  __int64 v99; // x4
  System_Action_o *v100; // x20
  const MethodInfo *v101; // x2
  MethodInfo methoda; // [xsp+10h] [xbp-A0h] BYREF
  float y; // [xsp+7Ch] [xbp-34h]
  UnityEngine_Vector2_o v104; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v105; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v106; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v107; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v108; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v109; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v110; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4
  UnityEngine_Rect_o v111; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_40FA754 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserDeckMaster___, v3);
    sub_B16FFC(&FSUtility_TypeInfo, v4);
    sub_B16FFC(&Method_FormationRootComponent__Init_b__28_2__, v5);
    sub_B16FFC(&Method_FormationRootComponent__Init_b__28_3__, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B16FFC(&TutorialFlag_TypeInfo, v11);
    sub_B16FFC(&Method_FormationRootComponent___c__Init_b__28_0__, v12);
    sub_B16FFC(&Method_FormationRootComponent___c__Init_b__28_1__, v13);
    sub_B16FFC(&FormationRootComponent___c_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_13458, v15);
    byte_40FA754 = 1;
  }
  memset(&methoda, 0, 32);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_81;
  TitleInfoControl__changeTitleInfo_19612684(titleInfo, 1, 18, 0, 0LL);
  FormationRootComponent__setMainActive(this, 0, v17);
  v18 = this->fields.titleInfo;
  *(_WORD *)&this->fields.isTutorial1 = 0;
  if ( !v18 )
    goto LABEL_81;
  TitleInfoControl__setBackBtnColliderEnable(v18, 1, 0LL);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28023340(102, 0LL) )
  {
    if ( (WORD1(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_28023340(109, 0LL) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v24 = FormationRootComponent___c_TypeInfo;
      if ( (BYTE3(FormationRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FormationRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo);
        v24 = FormationRootComponent___c_TypeInfo;
      }
      static_fields = v24->static_fields;
      _9__28_0 = static_fields->__9__28_0;
      if ( !_9__28_0 )
      {
        if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v24);
          static_fields = FormationRootComponent___c_TypeInfo->static_fields;
        }
        v27 = (Il2CppObject *)static_fields->__9;
        _9__28_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v19, v20, v21, v22);
        System_Action___ctor(_9__28_0, v27, Method_FormationRootComponent___c__Init_b__28_0__, 0LL);
        v28 = FormationRootComponent___c_TypeInfo->static_fields;
        v28->__9__28_0 = _9__28_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v28->__9__28_0,
          (System_Int32_array **)_9__28_0,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
      }
      if ( Instance )
      {
        CommonUI__OpenTutorialImageDialog_18263036(Instance, 3, 109, _9__28_0, 0LL, 0LL, 0LL);
        goto LABEL_72;
      }
LABEL_81:
      sub_B170D4();
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
      if ( TutorialFlag__Get_28023340(101, 0LL) )
      {
        if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TutorialFlag_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        }
        if ( !TutorialFlag__IsProgressDone(3, 0LL) )
        {
          v49 = this->fields.titleInfo;
          this->fields.isTutorial1 = 1;
          if ( v49 )
          {
            TitleInfoControl__setBackBtnColliderEnable(v49, 0, 0LL);
            v50 = this->fields.titleInfo;
            if ( v50 )
            {
              TitleInfoControl__SetHelpBtnColliderEnable(v50, 0, 0LL);
              MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
              svtListBtn = this->fields.svtListBtn;
              if ( svtListBtn )
              {
                ((void (__fastcall *)(struct UIButton_o *, _QWORD, Il2CppMethodPointer))svtListBtn->klass->vtable._5_set_isEnabled.method)(
                  svtListBtn,
                  0LL,
                  svtListBtn->klass->vtable._6_OnInit.methodPtr);
                supportSelectBtn = this->fields.supportSelectBtn;
                if ( supportSelectBtn )
                {
                  ((void (__fastcall *)(struct UIButton_o *, _QWORD, Il2CppMethodPointer))supportSelectBtn->klass->vtable._5_set_isEnabled.method)(
                    supportSelectBtn,
                    0LL,
                    supportSelectBtn->klass->vtable._6_OnInit.methodPtr);
                  warehouseBtn = this->fields.warehouseBtn;
                  if ( warehouseBtn )
                  {
                    ((void (__fastcall *)(struct UIButton_o *, _QWORD, Il2CppMethodPointer))warehouseBtn->klass->vtable._5_set_isEnabled.method)(
                      warehouseBtn,
                      0LL,
                      warehouseBtn->klass->vtable._6_OnInit.methodPtr);
                    dummyBtn = this->fields.dummyBtn;
                    if ( dummyBtn )
                    {
                      ((void (__fastcall *)(struct UIButton_o *, _QWORD, Il2CppMethodPointer))dummyBtn->klass->vtable._5_set_isEnabled.method)(
                        dummyBtn,
                        0LL,
                        dummyBtn->klass->vtable._6_OnInit.methodPtr);
                      scrollBarCollider = (UnityEngine_Collider_o *)this->fields.scrollBarCollider;
                      if ( scrollBarCollider )
                      {
                        UnityEngine_Collider__set_enabled(scrollBarCollider, 0, 0LL);
                        scrollBar2Collider = (UnityEngine_Collider_o *)this->fields.scrollBar2Collider;
                        if ( scrollBar2Collider )
                        {
                          UnityEngine_Collider__set_enabled(scrollBar2Collider, 0, 0LL);
                          svtFormationBtn = (UnityEngine_Component_o *)this->fields.svtFormationBtn;
                          if ( svtFormationBtn )
                          {
                            gameObject = UnityEngine_Component__get_gameObject(svtFormationBtn, 0LL);
                            if ( gameObject )
                            {
                              Component_srcLineSprite = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                     gameObject,
                                                                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
                              if ( Component_srcLineSprite )
                              {
                                UnityEngine_Behaviour__set_enabled(Component_srcLineSprite, 0, 0LL);
                                x = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.x;
                                y = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y;
                                if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !FSUtility_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
                                }
                                OffsetX = FSUtility__GetOffsetX(68.0, 0, 0LL);
                                *(struct UnityEngine_Rect_o *)&methoda.name = this->fields.TUTORIAL_FORMATION_ARROW_RECT;
                                v108.fields.m_XMin = *(float *)&methoda.name;
                                v62 = UnityEngine_Rect__get_x(v108, (const MethodInfo *)&methoda.name);
                                v109.fields.m_XMin = v62 + FSUtility__GetOffsetX(68.0, 0, 0LL);
                                UnityEngine_Rect__set_x(v109, v63, (const MethodInfo *)&methoda.name);
                                v64 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v65 = LocalizationManager__Get((System_String_o *)StringLiteral_13458, 0LL);
                                name = methoda.name;
                                klass = methoda.klass;
                                v73 = this->fields.TUTORIAL_FORMATION_MESSAGE_POS.fields.x;
                                v72 = this->fields.TUTORIAL_FORMATION_MESSAGE_POS.fields.y;
                                v74 = v65;
                                v75 = FormationRootComponent___c_TypeInfo;
                                if ( (BYTE3(FormationRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !FormationRootComponent___c_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo);
                                  v75 = FormationRootComponent___c_TypeInfo;
                                }
                                v76 = v75->static_fields;
                                _9__28_1 = v76->__9__28_1;
                                if ( !_9__28_1 )
                                {
                                  if ( (BYTE3(v75->vtable._0_Equals.methodPtr) & 4) != 0 && !v75->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(v75);
                                    v76 = FormationRootComponent___c_TypeInfo->static_fields;
                                  }
                                  v78 = (Il2CppObject *)v76->__9;
                                  _9__28_1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v66, v67, v68, v69);
                                  System_Action___ctor(
                                    _9__28_1,
                                    v78,
                                    Method_FormationRootComponent___c__Init_b__28_1__,
                                    0LL);
                                  v79 = FormationRootComponent___c_TypeInfo->static_fields;
                                  v79->__9__28_1 = _9__28_1;
                                  sub_B16F98(
                                    (BattleServantConfConponent_o *)&v79->__9__28_1,
                                    (System_Int32_array **)_9__28_1,
                                    v80,
                                    v81,
                                    v82,
                                    v83,
                                    v84,
                                    v85);
                                }
                                if ( v64 )
                                {
                                  v105.fields.y = y;
                                  v105.fields.x = x + OffsetX;
                                  *(_QWORD *)&v110.fields.m_XMin = name;
                                  *(_QWORD *)&v110.fields.m_Width = klass;
                                  CommonUI__OpenTutorialNotificationDialogArrow(
                                    v64,
                                    v74,
                                    v105,
                                    v110,
                                    90.0,
                                    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(v72), LODWORD(v73)),
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
          v35 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( v35 )
          {
            TutorialBackArrowPos = CommonUI__GetTutorialBackArrowPos(v35, 0LL);
            if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !FSUtility_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
            }
            v37 = FSUtility__GetOffsetX(68.0, 0, 0LL);
            *(struct UnityEngine_Rect_o *)&methoda.methodPointer = this->fields.TUTORIAL_BACK_ARROW_RECT;
            v106.fields.m_XMin = *(float *)&methoda.methodPointer;
            v38 = UnityEngine_Rect__get_x(v106, &methoda);
            v107.fields.m_XMin = v38 - FSUtility__GetOffsetX(68.0, 0, 0LL);
            UnityEngine_Rect__set_x(v107, v39, &methoda);
            v40 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            methodPointer = methoda.methodPointer;
            invoker_method = methoda.invoker_method;
            v43 = (CommonUI_o *)v40;
            v48 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v44, v45, v46, v47);
            System_Action___ctor(v48, (Il2CppObject *)this, Method_FormationRootComponent__Init_b__28_2__, 0LL);
            if ( v43 )
            {
              v104.fields.x = TutorialBackArrowPos.fields.x - v37;
              v104.fields.y = TutorialBackArrowPos.fields.y;
              *(_QWORD *)&v111.fields.m_XMin = methodPointer;
              *(_QWORD *)&v111.fields.m_Width = invoker_method;
              CommonUI__OpenTutorialArrowMark(v43, v104, 180.0, v111, v48, 0LL);
              goto LABEL_72;
            }
          }
          goto LABEL_81;
        }
      }
    }
  }
LABEL_72:
  v86 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v86 )
    goto LABEL_81;
  MasterData_WarQuestSelectionMaster = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)v86,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _28023340 = TutorialFlag__Get_28023340(126, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_81;
  if ( _28023340 )
    UserServantListFromDeckReaveHeroine = UserDeckMaster__GetUserServantListFromDeckReaveHeroine(
                                            MasterData_WarQuestSelectionMaster,
                                            0LL);
  else
    UserServantListFromDeckReaveHeroine = UserDeckMaster__GetUserServantListFromDeck(
                                            MasterData_WarQuestSelectionMaster,
                                            0LL);
  this->fields.mStandSvtDatas = UserServantListFromDeckReaveHeroine;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mStandSvtDatas,
    (System_Int32_array **)UserServantListFromDeckReaveHeroine,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  this->fields.mStandSvtIdx = -1;
  v100 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v96, v97, v98, v99);
  System_Action___ctor(v100, (Il2CppObject *)this, Method_FormationRootComponent__Init_b__28_3__, 0LL);
  FormationRootComponent__SetupStandServant(this, v100, v101);
}


void __fastcall FormationRootComponent__OnClickBack(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  System_String_o **v5; // x8

  if ( (byte_40FA758 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3034, method);
    sub_B16FFC(&StringLiteral_3075, v3);
    byte_40FA758 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B170D4();
  if ( this->fields.type == 1 )
    v5 = (System_String_o **)&StringLiteral_3034;
  else
    v5 = (System_String_o **)&StringLiteral_3075;
  TitleInfoControl__sendEvent(titleInfo, *v5, 0LL);
}


void __fastcall FormationRootComponent__SetupStandServant(
        FormationRootComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
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
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  struct UserServantEntity_array *mStandSvtDatas; // x8
  int v29; // w9
  int32_t mStandSvtIdx; // w10
  int32_t v31; // w11
  __int64 v32; // x10
  UserServantEntity_o *v33; // x21
  StandFigureSlideComponent_o *mStandServant; // x22
  System_Action_o *v35; // x23
  struct StandFigureSlideComponent_o *v36; // x19
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Action_o *v41; // x21
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7

  if ( (byte_40FA755 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, end_act);
    sub_B16FFC(&Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__0__, v7);
    sub_B16FFC(&Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__1__, v8);
    sub_B16FFC(&FormationRootComponent___c__DisplayClass29_0_TypeInfo, v9);
    byte_40FA755 = 1;
  }
  v10 = sub_B170CC(FormationRootComponent___c__DisplayClass29_0_TypeInfo, end_act, method, v3, v4);
  FormationRootComponent___c__DisplayClass29_0___ctor((FormationRootComponent___c__DisplayClass29_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_18;
  *(_QWORD *)(v10 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v10 + 24) = end_act;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)end_act, v17, v18, v19, v20, v21, v22);
  mStandSvtDatas = this->fields.mStandSvtDatas;
  if ( !mStandSvtDatas )
    goto LABEL_18;
  if ( (int)mStandSvtDatas->max_length < 1 )
  {
LABEL_13:
    v33 = 0LL;
  }
  else
  {
    v29 = 0;
    while ( 1 )
    {
      mStandSvtIdx = this->fields.mStandSvtIdx;
      this->fields.mStandSvtIdx = mStandSvtIdx + 1;
      v31 = mStandSvtIdx + 1 < (signed int)mStandSvtDatas->max_length ? mStandSvtIdx + 1 : 0;
      this->fields.mStandSvtIdx = v31;
      v32 = *(_QWORD *)&mStandSvtDatas->max_length;
      if ( v31 >= (unsigned int)v32 )
      {
        sub_B17100(v23, v24, v25);
        sub_B170A0();
      }
      v33 = mStandSvtDatas->m_Items[v31];
      if ( v33 )
        break;
      if ( ++v29 >= (int)v32 )
        goto LABEL_13;
    }
  }
  mStandServant = this->fields.mStandServant;
  v35 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v24, v25, v26, v27);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v10,
    Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__0__,
    0LL);
  if ( !mStandServant
    || (StandFigureSlideComponent__Setup(mStandServant, v33, 0, v35, 0LL),
        v36 = this->fields.mStandServant,
        v41 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v37, v38, v39, v40),
        System_Action___ctor(
          v41,
          (Il2CppObject *)v10,
          Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__1__,
          0LL),
        !v36) )
  {
LABEL_18:
    sub_B170D4();
  }
  v36->fields.mBtnAct = v41;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v36->fields.mBtnAct,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
}


void __fastcall FormationRootComponent___Init_b__28_2(FormationRootComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  struct UIButton_o *svtFormationBtn; // x0
  struct UIButton_o *svtListBtn; // x0
  struct UIButton_o *supportSelectBtn; // x0
  struct UIButton_o *warehouseBtn; // x0
  struct UIButton_o *dummyBtn; // x0
  UnityEngine_Collider_o *scrollBarCollider; // x0
  UnityEngine_Collider_o *scrollBar2Collider; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_10;
  TitleInfoControl__SetHelpBtnColliderEnable(titleInfo, 0, 0LL);
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  svtFormationBtn = this->fields.svtFormationBtn;
  if ( !svtFormationBtn )
    goto LABEL_10;
  ((void (__fastcall *)(struct UIButton_o *, _QWORD, Il2CppMethodPointer))svtFormationBtn->klass->vtable._5_set_isEnabled.method)(
    svtFormationBtn,
    0LL,
    svtFormationBtn->klass->vtable._6_OnInit.methodPtr);
  svtListBtn = this->fields.svtListBtn;
  if ( !svtListBtn )
    goto LABEL_10;
  ((void (__fastcall *)(struct UIButton_o *, _QWORD, Il2CppMethodPointer))svtListBtn->klass->vtable._5_set_isEnabled.method)(
    svtListBtn,
    0LL,
    svtListBtn->klass->vtable._6_OnInit.methodPtr);
  supportSelectBtn = this->fields.supportSelectBtn;
  if ( !supportSelectBtn )
    goto LABEL_10;
  ((void (__fastcall *)(struct UIButton_o *, _QWORD, Il2CppMethodPointer))supportSelectBtn->klass->vtable._5_set_isEnabled.method)(
    supportSelectBtn,
    0LL,
    supportSelectBtn->klass->vtable._6_OnInit.methodPtr);
  warehouseBtn = this->fields.warehouseBtn;
  if ( !warehouseBtn
    || (((void (__fastcall *)(struct UIButton_o *, _QWORD, Il2CppMethodPointer))warehouseBtn->klass->vtable._5_set_isEnabled.method)(
          warehouseBtn,
          0LL,
          warehouseBtn->klass->vtable._6_OnInit.methodPtr),
        (dummyBtn = this->fields.dummyBtn) == 0LL)
    || (((void (__fastcall *)(struct UIButton_o *, _QWORD, Il2CppMethodPointer))dummyBtn->klass->vtable._5_set_isEnabled.method)(
          dummyBtn,
          0LL,
          dummyBtn->klass->vtable._6_OnInit.methodPtr),
        (scrollBarCollider = (UnityEngine_Collider_o *)this->fields.scrollBarCollider) == 0LL)
    || (UnityEngine_Collider__set_enabled(scrollBarCollider, 0, 0LL),
        (scrollBar2Collider = (UnityEngine_Collider_o *)this->fields.scrollBar2Collider) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  UnityEngine_Collider__set_enabled(scrollBar2Collider, 0, 0LL);
}


void __fastcall FormationRootComponent___Init_b__28_3(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CommonUI_o *Instance; // x20
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40FA759 & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&StringLiteral_6864, v4);
    byte_40FA759 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !Instance
    || (CommonUI__maskFadein(Instance, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL),
        (myFSM = this->fields.myFSM) == 0LL) )
  {
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_6864, 0LL);
}


void __fastcall FormationRootComponent__beginFinish(FormationRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *backSkinSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  AtlasManager_o *Instance; // x0

  if ( (byte_40FA753 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, method);
    byte_40FA753 = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (gameObject = UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (Instance = (AtlasManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  AtlasManager__ReleaseUISkin(Instance, 2, 0, 0LL);
}


void __fastcall FormationRootComponent__beginInitialize(FormationRootComponent_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40FA751 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_40FA751 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 3, 30, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  TitleInfoControl_o *v9; // x0
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  bool IsActiveBgTxt; // w0
  UnityEngine_Component_o *backSkinSprite; // x0
  UnityEngine_GameObject_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Action_o *v19; // x20

  if ( (byte_40FA752 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AtlasManager_TypeInfo, v3);
    sub_B16FFC(&BgmManager_TypeInfo, v4);
    sub_B16FFC(&Method_FormationRootComponent_EndLoadCommonBg__, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    byte_40FA752 = 1;
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
  v9 = this->fields.titleInfo;
  if ( !v9 )
    goto LABEL_19;
  TitleInfoControl__setBackBtnDepth(v9, 29, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite
    || (gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL),
        IsActiveBgTxt = BgTxtManager__IsActiveBgTxt(0LL),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, IsActiveBgTxt, 0LL),
        MainMenuBar__setMenuActive(1, 0LL, 0LL),
        (backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite) == 0LL)
    || (v14 = UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL )
  {
LABEL_19:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v14, 0, 0LL);
  v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v15, v16, v17, v18);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_FormationRootComponent_EndLoadCommonBg__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v19, 2, 1, 0LL);
}


void __fastcall FormationRootComponent__closeArrowMark(FormationRootComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  CommonUI_o *v4; // x0

  if ( (byte_40FA756 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40FA756 = 1;
  }
  if ( this->fields.isTutorial1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_10;
    CommonUI__CloseTutorialNotificationDialogArrow(Instance, 0LL);
  }
  if ( this->fields.isTutorial2 )
  {
    v4 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( v4 )
    {
      CommonUI__CloseTutorialArrowMark(v4, 0LL, 0LL);
      return;
    }
LABEL_10:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FormationRootComponent__setMainActive(
        FormationRootComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v5; // x0
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_Component_o *transform; // x0
  UIWidget_o *ComponentInChildren_UIWidget; // x0
  UnityEngine_GameObject_o *topDispRootObj; // x0

  if ( (byte_40FA757 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_UIScrollView___, *(_QWORD *)&type);
    byte_40FA757 = 1;
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
    v5 = this->fields.topDispRootObj;
    if ( v5 )
    {
      UnityEngine_GameObject__SetActive(v5, 1, 0LL);
      v6 = this->fields.topDispRootObj;
      if ( v6 )
      {
        transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v6, 0LL);
        if ( transform )
        {
          ComponentInChildren_UIWidget = UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                           transform,
                                           (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_UIScrollView___);
          if ( ComponentInChildren_UIWidget )
          {
            UIScrollView__ResetPosition((UIScrollView_o *)ComponentInChildren_UIWidget, 0LL);
            return;
          }
        }
      }
    }
LABEL_13:
    sub_B170D4();
  }
}


void __fastcall FormationRootComponent___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F68C2 & 1) == 0 )
  {
    sub_B16FFC(&FormationRootComponent___c_TypeInfo, v1);
    byte_40F68C2 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(FormationRootComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)FormationRootComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  StandFigureSlideComponent_o *mStandServant; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this || (mStandServant = _4__this->fields.mStandServant) == 0LL )
    sub_B170D4();
  StandFigureSlideComponent__SlideIn(mStandServant, 0LL, 0LL);
  ActionExtensions__Call(this->fields.end_act, 0LL);
}


void __fastcall FormationRootComponent___c__DisplayClass29_0___SetupStandServant_b__1(
        FormationRootComponent___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct FormationRootComponent_o *_4__this; // x8
  StandFigureSlideComponent_o *mStandServant; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  struct FormationRootComponent_o *v12; // x8
  StandFigureSlideComponent_o *v13; // x20
  System_Action_o *_9__2; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_40F68C3 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&TutorialFlag_TypeInfo, v4);
    sub_B16FFC(&Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__2__, v5);
    byte_40F68C3 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28023340(102, 0LL) )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      mStandServant = _4__this->fields.mStandServant;
      if ( mStandServant )
      {
        if ( mStandServant->fields.mIsLoading || StandFigureSlideComponent__IsMoving(mStandServant, 0LL) )
          return;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        v12 = this->fields.__4__this;
        if ( v12 )
        {
          v13 = v12->fields.mStandServant;
          _9__2 = this->fields.__9__2;
          if ( !_9__2 )
          {
            _9__2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
            System_Action___ctor(
              _9__2,
              (Il2CppObject *)this,
              Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__2__,
              0LL);
            this->fields.__9__2 = _9__2;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.__9__2,
              (System_Int32_array **)_9__2,
              v15,
              v16,
              v17,
              v18,
              v19,
              v20);
          }
          if ( v13 )
          {
            StandFigureSlideComponent__SlideOut(v13, _9__2, 0, 0LL);
            return;
          }
        }
      }
    }
    sub_B170D4();
  }
}


void __fastcall FormationRootComponent___c__DisplayClass29_0___SetupStandServant_b__2(
        FormationRootComponent___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  FormationRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  FormationRootComponent__SetupStandServant(_4__this, 0LL, 0LL);
}