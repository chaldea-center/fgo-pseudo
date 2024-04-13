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
    sub_B5D69C(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FormationRootComponent__Init(FormationRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v45; // x2
  CommonUI_o *v46; // x20
  FormationRootComponent___c_c *v47; // x8
  struct FormationRootComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__28_0; // x21
  Il2CppObject *v50; // x22
  struct FormationRootComponent___c_StaticFields *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  UnityEngine_Vector2_o TutorialBackArrowPos; // kr00_8
  float v59; // s10
  float v60; // s0
  float v61; // s4
  WebViewManager_o *v62; // x0
  Il2CppMethodPointer methodPointer; // kr08_8
  void *invoker_method; // kr10_8
  CommonUI_o *v65; // x21
  System_Action_o *v66; // x20
  float x; // s14
  float OffsetX; // s9
  float v69; // s0
  float v70; // s4
  CommonUI_o *Instance; // x20
  const char *name; // kr18_8
  Il2CppClass *klass; // kr20_8
  float v74; // s8
  float v75; // s15
  System_String_o *v76; // x21
  FormationRootComponent___c_c *v77; // x8
  struct FormationRootComponent___c_StaticFields *v78; // x9
  System_Action_o *_9__28_1; // x22
  Il2CppObject *v80; // x23
  struct FormationRootComponent___c_StaticFields *v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  UserDeckMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct UserServantEntity_array *UserServantListFromDeckReaveHeroine; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Action_o *v96; // x20
  const MethodInfo *v97; // x2
  MethodInfo methoda; // [xsp+10h] [xbp-A0h] BYREF
  float y; // [xsp+7Ch] [xbp-34h]
  UnityEngine_Vector2_o v100; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v101; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v102; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v103; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v104; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v105; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v106; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4
  UnityEngine_Rect_o v107; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_42EBC37 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserDeckMaster___, v5, v6, v7);
    sub_B5D5C4(&FSUtility_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_FormationRootComponent__Init_b__28_2__, v11, v12, v13);
    sub_B5D5C4(&Method_FormationRootComponent__Init_b__28_3__, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___, v17, v18, v19);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v26, v27, v28);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_FormationRootComponent___c__Init_b__28_0__, v32, v33, v34);
    sub_B5D5C4(&Method_FormationRootComponent___c__Init_b__28_1__, v35, v36, v37);
    sub_B5D5C4(&FormationRootComponent___c_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_13670/*"TUTORIAL_MESSAGE_FORMATION1"*/, v41, v42, v43);
    byte_42EBC37 = 1;
  }
  memset(&methoda, 0, 32);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_81;
  TitleInfoControl__changeTitleInfo_18299236(titleInfo, 1, 18, 0, 0LL);
  FormationRootComponent__setMainActive(this, 0, v45);
  titleInfo = this->fields.titleInfo;
  *(_WORD *)&this->fields.isTutorial1 = 0;
  if ( !titleInfo )
    goto LABEL_81;
  TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0LL);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_29295864(102, 0LL) )
  {
    if ( (WORD1(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_29295864(109, 0LL) )
    {
      titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v46 = (CommonUI_o *)titleInfo;
      v47 = FormationRootComponent___c_TypeInfo;
      if ( (BYTE3(FormationRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FormationRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo);
        v47 = FormationRootComponent___c_TypeInfo;
      }
      static_fields = v47->static_fields;
      _9__28_0 = static_fields->__9__28_0;
      if ( !_9__28_0 )
      {
        if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v47);
          static_fields = FormationRootComponent___c_TypeInfo->static_fields;
        }
        v50 = (Il2CppObject *)static_fields->__9;
        _9__28_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(_9__28_0, v50, Method_FormationRootComponent___c__Init_b__28_0__, 0LL);
        v51 = FormationRootComponent___c_TypeInfo->static_fields;
        v51->__9__28_0 = _9__28_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v51->__9__28_0,
          (System_Int32_array **)_9__28_0,
          v52,
          v53,
          v54,
          v55,
          v56,
          v57);
      }
      if ( v46 )
      {
        CommonUI__OpenTutorialImageDialog_18227680(v46, 3, 109, _9__28_0, 0LL, 0LL, 0LL);
        goto LABEL_72;
      }
LABEL_81:
      sub_B5D69C(titleInfo, method);
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
      if ( TutorialFlag__Get_29295864(101, 0LL) )
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
                                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
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
                                v104.fields.m_XMin = *(float *)&methoda.name;
                                v69 = UnityEngine_Rect__get_x(v104, (const MethodInfo *)&methoda.name);
                                v105.fields.m_XMin = v69 + FSUtility__GetOffsetX(68.0, 0, 0LL);
                                UnityEngine_Rect__set_x(v105, v70, (const MethodInfo *)&methoda.name);
                                Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                titleInfo = (TitleInfoControl_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_13670/*"TUTORIAL_MESSAGE_FORMATION1"*/,
                                                                    0LL);
                                name = methoda.name;
                                klass = methoda.klass;
                                v75 = this->fields.TUTORIAL_FORMATION_MESSAGE_POS.fields.x;
                                v74 = this->fields.TUTORIAL_FORMATION_MESSAGE_POS.fields.y;
                                v76 = (System_String_o *)titleInfo;
                                v77 = FormationRootComponent___c_TypeInfo;
                                if ( (BYTE3(FormationRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !FormationRootComponent___c_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo);
                                  v77 = FormationRootComponent___c_TypeInfo;
                                }
                                v78 = v77->static_fields;
                                _9__28_1 = v78->__9__28_1;
                                if ( !_9__28_1 )
                                {
                                  if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(v77);
                                    v78 = FormationRootComponent___c_TypeInfo->static_fields;
                                  }
                                  v80 = (Il2CppObject *)v78->__9;
                                  _9__28_1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                                  System_Action___ctor(
                                    _9__28_1,
                                    v80,
                                    Method_FormationRootComponent___c__Init_b__28_1__,
                                    0LL);
                                  v81 = FormationRootComponent___c_TypeInfo->static_fields;
                                  v81->__9__28_1 = _9__28_1;
                                  sub_B5D560(
                                    (BattleServantConfConponent_o *)&v81->__9__28_1,
                                    (System_Int32_array **)_9__28_1,
                                    v82,
                                    v83,
                                    v84,
                                    v85,
                                    v86,
                                    v87);
                                }
                                if ( Instance )
                                {
                                  v101.fields.y = y;
                                  v101.fields.x = x + OffsetX;
                                  *(_QWORD *)&v106.fields.m_XMin = name;
                                  *(_QWORD *)&v106.fields.m_Width = klass;
                                  CommonUI__OpenTutorialNotificationDialogArrow(
                                    Instance,
                                    v76,
                                    v101,
                                    v106,
                                    90.0,
                                    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(v74), LODWORD(v75)),
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
          titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( titleInfo )
          {
            TutorialBackArrowPos = CommonUI__GetTutorialBackArrowPos((CommonUI_o *)titleInfo, 0LL);
            if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !FSUtility_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
            }
            v59 = FSUtility__GetOffsetX(68.0, 0, 0LL);
            *(struct UnityEngine_Rect_o *)&methoda.methodPointer = this->fields.TUTORIAL_BACK_ARROW_RECT;
            v102.fields.m_XMin = *(float *)&methoda.methodPointer;
            v60 = UnityEngine_Rect__get_x(v102, &methoda);
            v103.fields.m_XMin = v60 - FSUtility__GetOffsetX(68.0, 0, 0LL);
            UnityEngine_Rect__set_x(v103, v61, &methoda);
            v62 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            methodPointer = methoda.methodPointer;
            invoker_method = methoda.invoker_method;
            v65 = (CommonUI_o *)v62;
            v66 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(v66, (Il2CppObject *)this, Method_FormationRootComponent__Init_b__28_2__, 0LL);
            if ( v65 )
            {
              v100.fields.x = TutorialBackArrowPos.fields.x - v59;
              v100.fields.y = TutorialBackArrowPos.fields.y;
              *(_QWORD *)&v107.fields.m_XMin = methodPointer;
              *(_QWORD *)&v107.fields.m_Width = invoker_method;
              CommonUI__OpenTutorialArrowMark(v65, v100, 180.0, v107, v66, 0LL);
              goto LABEL_72;
            }
          }
          goto LABEL_81;
        }
      }
    }
  }
LABEL_72:
  titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !titleInfo )
    goto LABEL_81;
  MasterData_WarQuestSelectionMaster = (UserDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)titleInfo,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  titleInfo = (TitleInfoControl_o *)TutorialFlag__Get_29295864(126, 0LL);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mStandSvtDatas,
    (System_Int32_array **)UserServantListFromDeckReaveHeroine,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  this->fields.mStandSvtIdx = -1;
  v96 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v96, (Il2CppObject *)this, Method_FormationRootComponent__Init_b__28_3__, 0LL);
  FormationRootComponent__SetupStandServant(this, v96, v97);
}


void __fastcall FormationRootComponent__OnClickBack(FormationRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  TitleInfoControl_o *titleInfo; // x0
  System_String_o **v9; // x8

  if ( (byte_42EBC3B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3102/*"CLICK_BACK"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3148/*"CLICK_TERMINAL"*/, v5, v6, v7);
    byte_42EBC3B = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B5D69C(0LL, method);
  if ( this->fields.type == 1 )
    v9 = (System_String_o **)&StringLiteral_3102/*"CLICK_BACK"*/;
  else
    v9 = (System_String_o **)&StringLiteral_3148/*"CLICK_TERMINAL"*/;
  TitleInfoControl__sendEvent(titleInfo, *v9, 0LL);
}


void __fastcall FormationRootComponent__SetupStandServant(
        FormationRootComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x20
  __int64 v16; // x0
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
  struct UserServantEntity_array *mStandSvtDatas; // x8
  int v31; // w9
  int32_t mStandSvtIdx; // w10
  int32_t v33; // w11
  __int64 v34; // x10
  UserServantEntity_o *v35; // x21
  StandFigureSlideComponent_o *mStandServant; // x22
  System_Action_o *v37; // x23
  struct StandFigureSlideComponent_o *v38; // x19
  System_Action_o *v39; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x0

  if ( (byte_42EBC38 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)end_act, (_DWORD)method, v3);
    sub_B5D5C4(&Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__0__, v6, v7, v8);
    sub_B5D5C4(&Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__1__, v9, v10, v11);
    sub_B5D5C4(&FormationRootComponent___c__DisplayClass29_0_TypeInfo, v12, v13, v14);
    byte_42EBC38 = 1;
  }
  v15 = sub_B5D694(FormationRootComponent___c__DisplayClass29_0_TypeInfo);
  FormationRootComponent___c__DisplayClass29_0___ctor((FormationRootComponent___c__DisplayClass29_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_18;
  *(_QWORD *)(v15 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = end_act;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)end_act, v24, v25, v26, v27, v28, v29);
  mStandSvtDatas = this->fields.mStandSvtDatas;
  if ( !mStandSvtDatas )
    goto LABEL_18;
  if ( (int)mStandSvtDatas->max_length < 1 )
  {
LABEL_13:
    v35 = 0LL;
  }
  else
  {
    v31 = 0;
    while ( 1 )
    {
      mStandSvtIdx = this->fields.mStandSvtIdx;
      this->fields.mStandSvtIdx = mStandSvtIdx + 1;
      v33 = mStandSvtIdx + 1 < (signed int)mStandSvtDatas->max_length ? mStandSvtIdx + 1 : 0;
      this->fields.mStandSvtIdx = v33;
      v34 = *(_QWORD *)&mStandSvtDatas->max_length;
      if ( v33 >= (unsigned int)v34 )
      {
        v46 = sub_B5D6C8(v16);
        sub_B5D668(v46, 0LL);
      }
      v35 = mStandSvtDatas->m_Items[v33];
      if ( v35 )
        break;
      if ( ++v31 >= (int)v34 )
        goto LABEL_13;
    }
  }
  mStandServant = this->fields.mStandServant;
  v37 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v15,
    Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__0__,
    0LL);
  if ( !mStandServant
    || (StandFigureSlideComponent__Setup(mStandServant, v35, 0, v37, 0LL),
        v38 = this->fields.mStandServant,
        v39 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v39,
          (Il2CppObject *)v15,
          Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__1__,
          0LL),
        !v38) )
  {
LABEL_18:
    sub_B5D69C(v16, v17);
  }
  v38->fields.mBtnAct = v39;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v38->fields.mBtnAct,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
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
    sub_B5D69C(titleInfo, method);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)titleInfo, 0, 0LL);
}


void __fastcall FormationRootComponent___Init_b__28_3(FormationRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v21; // x1
  CommonUI_o *v22; // x20

  if ( (byte_42EBC3C & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_6975/*"GO_NEXT"*/, v17, v18, v19);
    byte_42EBC3C = 1;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  if ( !PartyOrganizationUtility__ExistsTemporaryPartyInfo(Instance, 0LL) )
  {
    Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v22 = (CommonUI_o *)Instance;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    }
    if ( v22 )
    {
      CommonUI__maskFadein(v22, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
      goto LABEL_15;
    }
LABEL_17:
    sub_B5D69C(Instance, v21);
  }
  Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 40, 1, 0LL, 0LL);
LABEL_15:
  Instance = (PartyOrganizationUtility_o *)this->fields.myFSM;
  if ( !Instance )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6975/*"GO_NEXT"*/, 0LL);
}


void __fastcall FormationRootComponent__beginFinish(FormationRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *backSkinSprite; // x0

  if ( (byte_42EBC36 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42EBC36 = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 0, 0LL),
        (backSkinSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(backSkinSprite, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)backSkinSprite, 2, 0, 0LL);
}


void __fastcall FormationRootComponent__beginInitialize(FormationRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42EBC34 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42EBC34 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 3, 30, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall FormationRootComponent__beginStartUp(FormationRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_String_o *MainBgmName; // x20
  __int64 v18; // x1
  TitleInfoControl_o *titleInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_o *v21; // x20

  if ( (byte_42EBC35 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&BgmManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_FormationRootComponent_EndLoadCommonBg__, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    byte_42EBC35 = 1;
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
    sub_B5D69C(titleInfo, v18);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  v21 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_FormationRootComponent_EndLoadCommonBg__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v21, 2, 1, 0LL);
}


void __fastcall FormationRootComponent__closeArrowMark(FormationRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42EBC39 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42EBC39 = 1;
  }
  if ( this->fields.isTutorial1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_10;
    CommonUI__CloseTutorialNotificationDialogArrow(Instance, 0LL);
  }
  if ( this->fields.isTutorial2 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseTutorialArrowMark(Instance, 0LL, 0LL);
      return;
    }
LABEL_10:
    sub_B5D69C(Instance, v6);
  }
}


void __fastcall FormationRootComponent__setMainActive(
        FormationRootComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  UnityEngine_GameObject_o *topDispRootObj; // x0

  if ( (byte_42EBC3A & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_UIScrollView___, type, (_DWORD)method, v3);
    byte_42EBC3A = 1;
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
                                                         (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_UIScrollView___);
          if ( topDispRootObj )
          {
            UIScrollView__ResetPosition((UIScrollView_o *)topDispRootObj, 0LL);
            return;
          }
        }
      }
    }
LABEL_13:
    sub_B5D69C(topDispRootObj, v6);
  }
}


void __fastcall FormationRootComponent___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct FormationRootComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E56D8 & 1) == 0 )
  {
    sub_B5D5C4(&FormationRootComponent___c_TypeInfo, v1, v2, v3);
    byte_42E56D8 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(FormationRootComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = FormationRootComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct FormationRootComponent___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, method);
  }
  StandFigureSlideComponent__SlideIn((StandFigureSlideComponent_o *)this, 0LL, 0LL);
  ActionExtensions__Call(v3->fields.end_act, 0LL);
}


void __fastcall FormationRootComponent___c__DisplayClass29_0___SetupStandServant_b__1(
        FormationRootComponent___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  StandFigureSlideComponent_o *_29295864; // x0
  __int64 v15; // x1
  struct FormationRootComponent_o *_4__this; // x8
  struct FormationRootComponent_o *v17; // x8
  StandFigureSlideComponent_o *mStandServant; // x20
  System_Action_o *_9__2; // x21

  if ( (byte_42E56D9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__2__, v11, v12, v13);
    byte_42E56D9 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _29295864 = (StandFigureSlideComponent_o *)TutorialFlag__Get_29295864(102, 0LL);
  if ( ((unsigned __int8)_29295864 & 1) != 0 )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      _29295864 = _4__this->fields.mStandServant;
      if ( _29295864 )
      {
        if ( _29295864->fields.mIsLoading || StandFigureSlideComponent__IsMoving(_29295864, 0LL) )
          return;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        v17 = this->fields.__4__this;
        if ( v17 )
        {
          mStandServant = v17->fields.mStandServant;
          _9__2 = this->fields.__9__2;
          if ( !_9__2 )
          {
            _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(
              _9__2,
              (Il2CppObject *)this,
              Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__2__,
              0LL);
            this->fields.__9__2 = _9__2;
            sub_B5D560(&this->fields.__9__2);
          }
          if ( mStandServant )
          {
            StandFigureSlideComponent__SlideOut(mStandServant, _9__2, 0, 0LL);
            return;
          }
        }
      }
    }
    sub_B5D69C(_29295864, v15);
  }
}


void __fastcall FormationRootComponent___c__DisplayClass29_0___SetupStandServant_b__2(
        FormationRootComponent___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  FormationRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  FormationRootComponent__SetupStandServant(_4__this, 0LL, 0LL);
}