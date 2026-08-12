void FormationRootComponent___ctor(FormationRootComponent_o *this, const MethodInfo *method)
{
  this->fields.TUTORIAL_FORMATION_ARROW_POS = (struct UnityEngine_Vector2_o)0x4316000042280000LL;
  this->fields.TUTORIAL_FORMATION_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_E9BDE0;
  this->fields.TUTORIAL_FORMATION_MESSAGE_POS = (struct UnityEngine_Vector2_o)0xC220000000000000LL;
  this->fields.TUTORIAL_BACK_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_E9D160;
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void FormationRootComponent__Awake(FormationRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void FormationRootComponent__EndLoadCommonBg(FormationRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *backSkinSprite; // x0

  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0)) == 0 )
  {
    sub_2213CDC(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0);
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0);
}


void FormationRootComponent__FeatureRelease(FormationRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *grid; // x0
  struct UIGrid_o *v4; // x8
  System_Action_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2

  if ( (byte_596AFFC & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_FormationRootComponent__FeatureRelease_b__34_0__);
    byte_596AFFC = 1;
  }
  grid = (UnityEngine_Component_o *)this->fields.grid;
  if ( !grid
    || (grid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(grid, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)grid, 1, 0),
        (grid = (UnityEngine_Component_o *)this->fields.grid) == 0)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)grid, 1, 0), (v4 = this->fields.grid) == 0) )
  {
    sub_2213CDC(grid, method);
  }
  v4->fields.hideInactive = 1;
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_FormationRootComponent__FeatureRelease_b__34_0__, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6, v7);
  AtlasManager__LoadPartyOrganizationAtlas(v5, 1, 0);
}


void FormationRootComponent__Init(FormationRootComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  bool _47388504; // w8
  int v13; // w9
  __int64 v14; // x2
  CommonUI_o *v15; // x20
  FormationRootComponent___c_c *v16; // x8
  struct FormationRootComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__42_0; // x21
  Il2CppObject *v19; // x22
  struct FormationRootComponent___c_StaticFields *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x2
  UnityEngine_Vector2_o v32; // x1
  UnityEngine_Vector2_o v33; // x2
  UnityEngine_Vector2_o TutorialBackArrowPos; // kr00_8
  float OffsetX; // s13
  float m_YMin; // s11
  float m_XMin; // s15
  float m_Height; // s10
  float m_Width; // s12
  float v40; // s14
  Il2CppObject *Instance; // x21
  System_Action_o *v42; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  float v45; // s12
  float v46; // s9
  float v47; // s15
  float v48; // s10
  float v49; // s11
  float v50; // s13
  __int64 v51; // x1
  __int64 v52; // x2
  Il2CppObject *v53; // x20
  __int64 v54; // x2
  System_String_o *v55; // x21
  float v56; // s8
  float v57; // s14
  FormationRootComponent___c_c *v58; // x8
  struct FormationRootComponent___c_StaticFields *v59; // x9
  System_Action_o *_9__42_1; // x22
  Il2CppObject *v61; // x23
  struct FormationRootComponent___c_StaticFields *v62; // x0
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  __int64 v69; // x1
  __int64 v70; // x2
  Il2CppObject *MasterData_object; // x20
  struct UserServantEntity_array *UserServantListFromDeck; // x0
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  System_Action_c *v79; // x0
  System_Action_o *v80; // x20
  const MethodInfo *v81; // x2
  float x; // [xsp+58h] [xbp-48h]
  float y; // [xsp+5Ch] [xbp-44h]
  UnityEngine_Vector2_o v84; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v85; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v86; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4
  UnityEngine_Rect_o v87; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_596B002 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_2213A60(&FSUtility_TypeInfo);
    sub_2213A60(&Method_FormationRootComponent__Init_b__42_2__);
    sub_2213A60(&Method_FormationRootComponent__Init_b__42_3__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TutorialFlag_TypeInfo);
    sub_2213A60(&Method_FormationRootComponent___c__Init_b__42_0__);
    sub_2213A60(&Method_FormationRootComponent___c__Init_b__42_1__);
    sub_2213A60(&FormationRootComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_14150/*"TUTORIAL_MESSAGE_FORMATION1"*/);
    byte_596B002 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_69;
  TitleInfoControl__changeTitleInfo_46863248(titleInfo, 1, 19, 0, 0);
  FormationRootComponent__setMainActive(this, 0, v4);
  titleInfo = this->fields.titleInfo;
  *(_WORD *)&this->fields.isTutorial1 = 0;
  if ( !titleInfo )
    goto LABEL_69;
  TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0);
  FormationRootComponent__FeatureRelease(this, v5);
  FormationRootComponent__ProgressRelease(this, v6);
  FormationRootComponent__ProgressReleaseForGrand(this, v7);
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v8, v9);
  _47388504 = TutorialFlag__Get_47388504(102, 0);
  v13 = *(&TutorialFlag_TypeInfo->_2.cctor_finished + 1);
  if ( _47388504 )
  {
    if ( !v13 )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v10, v11);
    if ( !TutorialFlag__Get_47388504(109, 0) )
    {
      titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v15 = (CommonUI_o *)titleInfo;
      v16 = FormationRootComponent___c_TypeInfo;
      if ( !*(&FormationRootComponent___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo, method, v14);
        v16 = FormationRootComponent___c_TypeInfo;
      }
      static_fields = v16->static_fields;
      _9__42_0 = static_fields->__9__42_0;
      if ( !_9__42_0 )
      {
        if ( !*(&v16->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v16, method, v14);
          static_fields = FormationRootComponent___c_TypeInfo->static_fields;
        }
        v19 = (Il2CppObject *)static_fields->__9;
        _9__42_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(_9__42_0, v19, Method_FormationRootComponent___c__Init_b__42_0__, 0);
        v20 = FormationRootComponent___c_TypeInfo->static_fields;
        v20->__9__42_0 = _9__42_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v20->__9__42_0,
          (int32_t)_9__42_0,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
      }
      if ( !v15 )
        goto LABEL_69;
      CommonUI__OpenTutorialImageDialog_37396784(v15, 3, 109, _9__42_0, 0, 0, 0);
    }
  }
  else
  {
    if ( !v13 )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v10, v11);
    if ( TutorialFlag__IsProgressDone(2, 0) )
    {
      if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v27, v28);
      if ( TutorialFlag__Get_47388504(101, 0) )
      {
        if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v29, v30);
        if ( TutorialFlag__IsProgressDone(3, 0) )
        {
          if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v31);
          if ( TutorialFlag__IsProgressDone(3, 0) )
          {
            this->fields.isTutorial2 = 1;
            titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !titleInfo )
              goto LABEL_69;
            TutorialBackArrowPos = CommonUI__GetTutorialBackArrowPos((CommonUI_o *)titleInfo, 0);
            if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))j_il2cpp_runtime_class_init_0)(FSUtility_TypeInfo, v32, v33);
            OffsetX = FSUtility__GetOffsetX(68.0, 2, 0);
            m_XMin = this->fields.TUTORIAL_BACK_ARROW_RECT.fields.m_XMin;
            m_YMin = this->fields.TUTORIAL_BACK_ARROW_RECT.fields.m_YMin;
            m_Width = this->fields.TUTORIAL_BACK_ARROW_RECT.fields.m_Width;
            m_Height = this->fields.TUTORIAL_BACK_ARROW_RECT.fields.m_Height;
            v40 = FSUtility__GetOffsetX(68.0, 2, 0);
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v42 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(v42, (Il2CppObject *)this, Method_FormationRootComponent__Init_b__42_2__, 0);
            if ( !Instance )
              goto LABEL_69;
            v87.fields.m_XMin = m_XMin - v40;
            v84.fields.x = TutorialBackArrowPos.fields.x - OffsetX;
            v84.fields.y = TutorialBackArrowPos.fields.y;
            v87.fields.m_YMin = m_YMin;
            v87.fields.m_Width = m_Width;
            v87.fields.m_Height = m_Height;
            CommonUI__OpenTutorialArrowMark((CommonUI_o *)Instance, v84, 180.0, v87, v42, 0);
          }
        }
        else
        {
          titleInfo = this->fields.titleInfo;
          this->fields.isTutorial1 = 1;
          if ( !titleInfo )
            goto LABEL_69;
          TitleInfoControl__setBackBtnColliderEnable(titleInfo, 0, 0);
          titleInfo = this->fields.titleInfo;
          if ( !titleInfo )
            goto LABEL_69;
          TitleInfoControl__SetHelpBtnColliderEnable(titleInfo, 0, 0);
          MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0);
          titleInfo = (TitleInfoControl_o *)this->fields.svtListBtn;
          if ( !titleInfo )
            goto LABEL_69;
          ((void (__fastcall *)(TitleInfoControl_o *, _QWORD, const char *))titleInfo->klass[1]._1.name)(
            titleInfo,
            0,
            titleInfo->klass[1]._1.namespaze);
          titleInfo = (TitleInfoControl_o *)this->fields.supportSelectBtn;
          if ( !titleInfo )
            goto LABEL_69;
          ((void (__fastcall *)(TitleInfoControl_o *, _QWORD, const char *))titleInfo->klass[1]._1.name)(
            titleInfo,
            0,
            titleInfo->klass[1]._1.namespaze);
          titleInfo = (TitleInfoControl_o *)this->fields.recommendSupportSelectBtn;
          if ( !titleInfo )
            goto LABEL_69;
          ((void (__fastcall *)(TitleInfoControl_o *, _QWORD, const char *))titleInfo->klass[1]._1.name)(
            titleInfo,
            0,
            titleInfo->klass[1]._1.namespaze);
          titleInfo = (TitleInfoControl_o *)this->fields.warehouseBtn;
          if ( !titleInfo )
            goto LABEL_69;
          ((void (__fastcall *)(TitleInfoControl_o *, _QWORD, const char *))titleInfo->klass[1]._1.name)(
            titleInfo,
            0,
            titleInfo->klass[1]._1.namespaze);
          titleInfo = (TitleInfoControl_o *)this->fields.dummyBtn;
          if ( !titleInfo )
            goto LABEL_69;
          ((void (__fastcall *)(TitleInfoControl_o *, _QWORD, const char *))titleInfo->klass[1]._1.name)(
            titleInfo,
            0,
            titleInfo->klass[1]._1.namespaze);
          titleInfo = (TitleInfoControl_o *)this->fields.scrollBarCollider;
          if ( !titleInfo )
            goto LABEL_69;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)titleInfo, 0, 0);
          titleInfo = (TitleInfoControl_o *)this->fields.scrollBar2Collider;
          if ( !titleInfo )
            goto LABEL_69;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)titleInfo, 0, 0);
          titleInfo = (TitleInfoControl_o *)this->fields.svtFormationBtn;
          if ( !titleInfo )
            goto LABEL_69;
          titleInfo = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)titleInfo,
                                              0);
          if ( !titleInfo )
            goto LABEL_69;
          titleInfo = (TitleInfoControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)titleInfo,
                                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
          if ( !titleInfo )
            goto LABEL_69;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)titleInfo, 0, 0);
          x = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.x;
          y = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y;
          if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v43, v44);
          v45 = FSUtility__GetOffsetX(68.0, 2, 0);
          v47 = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_XMin;
          v46 = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin;
          v48 = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Width;
          v49 = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Height;
          v50 = FSUtility__GetOffsetX(68.0, 2, 0);
          v53 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51, v52);
          titleInfo = (TitleInfoControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14150/*"TUTORIAL_MESSAGE_FORMATION1"*/, 0);
          v55 = (System_String_o *)titleInfo;
          v56 = this->fields.TUTORIAL_FORMATION_MESSAGE_POS.fields.x;
          v57 = this->fields.TUTORIAL_FORMATION_MESSAGE_POS.fields.y;
          v58 = FormationRootComponent___c_TypeInfo;
          if ( !*(&FormationRootComponent___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo, method, v54);
            v58 = FormationRootComponent___c_TypeInfo;
          }
          v59 = v58->static_fields;
          _9__42_1 = v59->__9__42_1;
          if ( !_9__42_1 )
          {
            if ( !*(&v58->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v58, method, v54);
              v59 = FormationRootComponent___c_TypeInfo->static_fields;
            }
            v61 = (Il2CppObject *)v59->__9;
            _9__42_1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(_9__42_1, v61, Method_FormationRootComponent___c__Init_b__42_1__, 0);
            v62 = FormationRootComponent___c_TypeInfo->static_fields;
            v62->__9__42_1 = _9__42_1;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v62->__9__42_1,
              (int32_t)_9__42_1,
              v63,
              v64,
              v65,
              v66,
              v67,
              v68);
          }
          if ( !v53 )
            goto LABEL_69;
          v85.fields.y = y;
          v86.fields.m_XMin = v47 + v50;
          v86.fields.m_YMin = v46;
          v86.fields.m_Width = v48;
          v86.fields.m_Height = v49;
          v85.fields.x = x + v45;
          CommonUI__OpenTutorialNotificationDialogArrow(
            (CommonUI_o *)v53,
            v55,
            v85,
            v86,
            90.0,
            (UnityEngine_Vector2_o)__PAIR64__(LODWORD(v57), LODWORD(v56)),
            -1,
            _9__42_1,
            0);
        }
      }
    }
  }
  titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !titleInfo )
    goto LABEL_69;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)titleInfo,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v69, v70);
  titleInfo = (TitleInfoControl_o *)TutorialFlag__Get_47388504(126, 0);
  if ( ((unsigned __int8)titleInfo & 1) == 0 )
  {
    if ( MasterData_object )
    {
      UserServantListFromDeck = UserDeckMaster__GetUserServantListFromDeck((UserDeckMaster_o *)MasterData_object, 0);
      goto LABEL_68;
    }
LABEL_69:
    sub_2213CDC(titleInfo, method);
  }
  if ( !MasterData_object )
    goto LABEL_69;
  UserServantListFromDeck = UserDeckMaster__GetUserServantListFromDeckReaveHeroine(
                              (UserDeckMaster_o *)MasterData_object,
                              0);
LABEL_68:
  this->fields.mStandSvtDatas = UserServantListFromDeck;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mStandSvtDatas,
    (int32_t)UserServantListFromDeck,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  v79 = System_Action_TypeInfo;
  this->fields.mStandSvtIdx = -1;
  v80 = (System_Action_o *)sub_2213CCC(v79);
  System_Action___ctor(v80, (Il2CppObject *)this, Method_FormationRootComponent__Init_b__42_3__, 0);
  FormationRootComponent__SetupStandServant(this, v80, v81);
}


void FormationRootComponent__OnClickBack(FormationRootComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  System_String_o **v4; // x8

  if ( (byte_596B006 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3576/*"CLICK_BACK"*/);
    sub_2213A60(&StringLiteral_3633/*"CLICK_TERMINAL"*/);
    byte_596B006 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_2213CDC(0, method);
  v4 = (System_String_o **)&StringLiteral_3576/*"CLICK_BACK"*/;
  if ( this->fields.type != 1 )
    v4 = (System_String_o **)&StringLiteral_3633/*"CLICK_TERMINAL"*/;
  TitleInfoControl__sendEvent(titleInfo, *v4, 0);
}


void FormationRootComponent__OnClickButtonMask(FormationRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_596B007 & 1) == 0 )
  {
    sub_2213A60(&Method_FormationRootComponent_OnClickButtonMask__);
    byte_596B007 = 1;
  }
  v2 = Method_FormationRootComponent_OnClickButtonMask__;
  if ( (*((_BYTE *)Method_FormationRootComponent_OnClickButtonMask__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_2213A78(Method_FormationRootComponent_OnClickButtonMask__);
  v3 = (System_Reflection_MethodBase_o *)sub_2213A44(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 2, 0, 0);
}


void FormationRootComponent__OnClickGrandSvtList(FormationRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_596B008 & 1) == 0 )
  {
    sub_2213A60(&Method_FormationRootComponent_OnClickGrandSvtList__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596B008 = 1;
  }
  v2 = Method_FormationRootComponent_OnClickGrandSvtList__;
  if ( (*((_BYTE *)Method_FormationRootComponent_OnClickGrandSvtList__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_2213A78(Method_FormationRootComponent_OnClickGrandSvtList__);
  v3 = (System_Reflection_MethodBase_o *)sub_2213A44(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v5);
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 43, 1, 0, 0);
}


void FormationRootComponent__OnClickHelpBtn(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_ICollection_o *ClearWarIdList; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  BalanceConfig_c *v6; // x0
  int32_t v7; // w19
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  FormationRootComponent___c_c *v13; // x8
  CommonUI_o *v14; // x20
  struct FormationRootComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__49_0; // x21
  Il2CppObject *v17; // x22
  struct FormationRootComponent___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_596B009 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&Method_FormationRootComponent_OnClickHelpBtn__);
    sub_2213A60(&ServantCommentManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_FormationRootComponent___c__OnClickHelpBtn_b__49_0__);
    sub_2213A60(&FormationRootComponent___c_TypeInfo);
    byte_596B009 = 1;
  }
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, method, v2);
  ClearWarIdList = (System_Collections_ICollection_o *)ServantCommentManager__GetClearWarIdList(0);
  if ( BasicHelper__IsNullOrEmpty(ClearWarIdList, 0) )
    goto LABEL_10;
  v6 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4, v5);
    v6 = BalanceConfig_TypeInfo;
  }
  if ( !System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)ClearWarIdList,
          v6->static_fields->OrdealCallWarId,
          (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___) )
LABEL_10:
    v7 = 3;
  else
    v7 = 102;
  v8 = Method_FormationRootComponent_OnClickHelpBtn__;
  if ( (*((_BYTE *)Method_FormationRootComponent_OnClickHelpBtn__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_2213A78(Method_FormationRootComponent_OnClickHelpBtn__);
  v9 = (System_Reflection_MethodBase_o *)sub_2213A44(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = FormationRootComponent___c_TypeInfo;
  v14 = (CommonUI_o *)Instance;
  if ( !*(&FormationRootComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo, v11, v12);
    v13 = FormationRootComponent___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__49_0 = static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( !*(&v13->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v13, v11, v12);
      static_fields = FormationRootComponent___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__49_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__49_0, v17, Method_FormationRootComponent___c__OnClickHelpBtn_b__49_0__, 0);
    v18 = FormationRootComponent___c_TypeInfo->static_fields;
    v18->__9__49_0 = _9__49_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->__9__49_0, (int32_t)_9__49_0, v19, v20, v21, v22, v23, v24);
  }
  if ( !v14 )
    sub_2213CDC(Instance, v11);
  CommonUI__OpenTutorialImageDialog_37396784(v14, v7, -1, _9__49_0, 0, 0, 0);
}


void FormationRootComponent__ProgressRelease(FormationRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *recommendSupportSelectBtn; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Object_array *List; // x20
  FormationRootComponent___c_c *v9; // x8
  struct FormationRootComponent___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__35_0; // x21
  Il2CppObject *v12; // x22
  struct FormationRootComponent___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct UIButton_o *v20; // x8
  char v21; // w20
  char v22; // w20

  if ( (byte_596AFFD & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_RecommendSupportQuestEntity___);
    sub_2213A60(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&System_Func_RecommendSupportQuestEntity__bool__TypeInfo);
    sub_2213A60(&Method_FormationRootComponent___c__ProgressRelease_b__35_0__);
    sub_2213A60(&FormationRootComponent___c_TypeInfo);
    byte_596AFFD = 1;
  }
  recommendSupportSelectBtn = (UnityEngine_Component_o *)this->fields.recommendSupportSelectBtn;
  if ( !recommendSupportSelectBtn )
    goto LABEL_22;
  recommendSupportSelectBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                           recommendSupportSelectBtn,
                                                           0);
  if ( !recommendSupportSelectBtn )
    goto LABEL_22;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)recommendSupportSelectBtn, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4, v5);
    recommendSupportSelectBtn = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
    if ( recommendSupportSelectBtn )
    {
      List = (System_Object_array *)RecommendSupportQuestMaster__GetList(
                                      (RecommendSupportQuestMaster_o *)recommendSupportSelectBtn,
                                      0);
      v9 = FormationRootComponent___c_TypeInfo;
      if ( !*(&FormationRootComponent___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo, v6, v7);
        v9 = FormationRootComponent___c_TypeInfo;
      }
      static_fields = v9->static_fields;
      _9__35_0 = (System_Func_object__bool__o *)static_fields->__9__35_0;
      if ( !_9__35_0 )
      {
        if ( !*(&v9->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v9, v6, v7);
          static_fields = FormationRootComponent___c_TypeInfo->static_fields;
        }
        v12 = (Il2CppObject *)static_fields->__9;
        _9__35_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_RecommendSupportQuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__35_0, v12, Method_FormationRootComponent___c__ProgressRelease_b__35_0__, 0);
        v13 = FormationRootComponent___c_TypeInfo->static_fields;
        v13->__9__35_0 = (struct System_Func_RecommendSupportQuestEntity__bool__o *)_9__35_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v13->__9__35_0,
          (int32_t)_9__35_0,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
      }
      recommendSupportSelectBtn = (UnityEngine_Component_o *)BasicHelper__Any_object__58785420(
                                                               List,
                                                               (System_Func_T__bool__o *)_9__35_0,
                                                               (const MethodInfo_380FE8C *)Method_BasicHelper_Any_RecommendSupportQuestEntity___);
      v20 = this->fields.recommendSupportSelectBtn;
      if ( v20 )
      {
        v21 = (char)recommendSupportSelectBtn;
        ((void (__fastcall *)(struct UIButton_o *__return_ptr, struct UIButton_o *, _QWORD, const MethodInfo *))v20->klass->vtable._5_set_isEnabled.methodPtr)(
          v20,
          this->fields.recommendSupportSelectBtn,
          (unsigned __int8)recommendSupportSelectBtn & 1,
          v20->klass->vtable._5_set_isEnabled.method);
        recommendSupportSelectBtn = (UnityEngine_Component_o *)this->fields.recommendSupportButtonMaskLabel;
        if ( recommendSupportSelectBtn )
        {
          recommendSupportSelectBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                   recommendSupportSelectBtn,
                                                                   0);
          if ( recommendSupportSelectBtn )
          {
            v22 = v21 ^ 1;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)recommendSupportSelectBtn, v22 & 1, 0);
            recommendSupportSelectBtn = (UnityEngine_Component_o *)this->fields.recommendSupportPreparationLabel;
            if ( recommendSupportSelectBtn )
            {
              recommendSupportSelectBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                       recommendSupportSelectBtn,
                                                                       0);
              if ( recommendSupportSelectBtn )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)recommendSupportSelectBtn, v22 & 1, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_22:
    sub_2213CDC(recommendSupportSelectBtn, method);
  }
}


void FormationRootComponent__ProgressReleaseForGrand(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *IsTargetQuestClear; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *grandSvtListButtonMaskLabel; // x20
  System_String_c *klass; // x8
  UILabel_o *grandSvtListPreparationLabel; // x20

  if ( (byte_596AFFE & 1) == 0 )
  {
    sub_2213A60(&ClassBoardUtility_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3754/*"COMBINE_PREPARATION"*/);
    sub_2213A60(&StringLiteral_3713/*"COMBINE_CLASS_BOARD_CLOSED_MESSAGE"*/);
    byte_596AFFE = 1;
  }
  if ( !*(&ClassBoardUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, method, v2);
  IsTargetQuestClear = (System_String_o *)ClassBoardUtility__IsTargetQuestClear(0);
  grandSvtListButtonMaskLabel = this->fields.grandSvtListButtonMaskLabel;
  if ( ((unsigned __int8)IsTargetQuestClear & 1) == 0 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
    IsTargetQuestClear = LocalizationManager__Get((System_String_o *)StringLiteral_3713/*"COMBINE_CLASS_BOARD_CLOSED_MESSAGE"*/, 0);
    if ( grandSvtListButtonMaskLabel )
    {
      UILabel__set_text(grandSvtListButtonMaskLabel, IsTargetQuestClear, 0);
      grandSvtListPreparationLabel = this->fields.grandSvtListPreparationLabel;
      IsTargetQuestClear = LocalizationManager__Get((System_String_o *)StringLiteral_3754/*"COMBINE_PREPARATION"*/, 0);
      if ( grandSvtListPreparationLabel )
      {
        UILabel__set_text(grandSvtListPreparationLabel, IsTargetQuestClear, 0);
        IsTargetQuestClear = (System_String_o *)this->fields.grandSvtListButtonMaskLabel;
        if ( IsTargetQuestClear )
        {
          IsTargetQuestClear = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)IsTargetQuestClear,
                                                    0);
          if ( IsTargetQuestClear )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsTargetQuestClear, 1, 0);
            IsTargetQuestClear = (System_String_o *)this->fields.grandSvtListPreparationLabel;
            if ( IsTargetQuestClear )
            {
              IsTargetQuestClear = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)IsTargetQuestClear,
                                                        0);
              if ( IsTargetQuestClear )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsTargetQuestClear, 1, 0);
                IsTargetQuestClear = (System_String_o *)this->fields.grandSvtListBtn;
                if ( IsTargetQuestClear )
                {
                  klass = IsTargetQuestClear->klass;
                  goto LABEL_22;
                }
              }
            }
          }
        }
      }
    }
LABEL_23:
    sub_2213CDC(IsTargetQuestClear, v5);
  }
  if ( !grandSvtListButtonMaskLabel )
    goto LABEL_23;
  IsTargetQuestClear = (System_String_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)this->fields.grandSvtListButtonMaskLabel,
                                            0);
  if ( !IsTargetQuestClear )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsTargetQuestClear, 0, 0);
  IsTargetQuestClear = (System_String_o *)this->fields.grandSvtListPreparationLabel;
  if ( !IsTargetQuestClear )
    goto LABEL_23;
  IsTargetQuestClear = (System_String_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)IsTargetQuestClear,
                                            0);
  if ( !IsTargetQuestClear )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsTargetQuestClear, 0, 0);
  IsTargetQuestClear = (System_String_o *)this->fields.grandSvtListBtn;
  if ( !IsTargetQuestClear )
    goto LABEL_23;
  klass = IsTargetQuestClear->klass;
LABEL_22:
  klass->vtable._14_System_IConvertible_ToInt16.methodPtr();
}


void FormationRootComponent__SetupStandServant(
        FormationRootComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct UserServantEntity_array *mStandSvtDatas; // x8
  int max_length; // w10
  int v22; // w9
  int32_t mStandSvtIdx; // w11
  int32_t v24; // w11
  UserServantEntity_o *v25; // x21
  StandFigureSlideComponent_o *mStandServant; // x22
  System_Action_o *v27; // x23
  struct StandFigureSlideComponent_o *v28; // x19
  System_Action_o *v29; // x21
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7

  if ( (byte_596B003 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_FormationRootComponent___c__DisplayClass43_0__SetupStandServant_b__0__);
    sub_2213A60(&Method_FormationRootComponent___c__DisplayClass43_0__SetupStandServant_b__1__);
    sub_2213A60(&FormationRootComponent___c__DisplayClass43_0_TypeInfo);
    byte_596B003 = 1;
  }
  v5 = sub_2213CCC(FormationRootComponent___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = end_act;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)end_act, v14, v15, v16, v17, v18, v19);
  mStandSvtDatas = this->fields.mStandSvtDatas;
  if ( !mStandSvtDatas )
    goto LABEL_18;
  max_length = mStandSvtDatas->max_length;
  if ( max_length < 1 )
  {
LABEL_13:
    v25 = 0;
  }
  else
  {
    v22 = 0;
    while ( 1 )
    {
      mStandSvtIdx = this->fields.mStandSvtIdx;
      v24 = mStandSvtIdx + 1 < max_length ? mStandSvtIdx + 1 : 0;
      this->fields.mStandSvtIdx = v24;
      if ( v24 >= (unsigned int)max_length )
        sub_2213CE4(v6);
      v25 = mStandSvtDatas->m_Items[v24];
      if ( v25 )
        break;
      max_length = mStandSvtDatas->max_length;
      if ( ++v22 >= max_length )
        goto LABEL_13;
    }
  }
  mStandServant = this->fields.mStandServant;
  v27 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v5,
    Method_FormationRootComponent___c__DisplayClass43_0__SetupStandServant_b__0__,
    0);
  if ( !mStandServant
    || (StandFigureSlideComponent__Setup(mStandServant, v25, 0, v27, 0),
        v28 = this->fields.mStandServant,
        v29 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v29,
          (Il2CppObject *)v5,
          (intptr_t)Method_FormationRootComponent___c__DisplayClass43_0__SetupStandServant_b__1__,
          0),
        !v28) )
  {
LABEL_18:
    sub_2213CDC(v6, v7);
  }
  v28->fields.mBtnAct = v29;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v28->fields.mBtnAct, (int32_t)v29, v30, v31, v32, v33, v34, v35);
}


void FormationRootComponent___FeatureRelease_b__34_0(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UISprite_o *recommendSupportSelectBtnSprite; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_Component_o *grandSvtListBtn; // x8
  char v8; // w19

  if ( (byte_596B00A & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&StringLiteral_21372/*"img_form_menu08"*/);
    sub_2213A60(&StringLiteral_21373/*"img_form_menu09"*/);
    byte_596B00A = 1;
  }
  recommendSupportSelectBtnSprite = this->fields.recommendSupportSelectBtnSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method, v2);
  AtlasManager__SetPartyOrganizationImage(recommendSupportSelectBtnSprite, (System_String_o *)StringLiteral_21372/*"img_form_menu08"*/, 0);
  gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetPartyOrganizationImage(
                                             this->fields.grandSvtListBtnSprite,
                                             (System_String_o *)StringLiteral_21373/*"img_form_menu09"*/,
                                             0);
  grandSvtListBtn = (UnityEngine_Component_o *)this->fields.grandSvtListBtn;
  if ( !grandSvtListBtn
    || (v8 = (char)gameObject, (gameObject = UnityEngine_Component__get_gameObject(grandSvtListBtn, 0)) == 0) )
  {
    sub_2213CDC(gameObject, v6);
  }
  UnityEngine_GameObject__SetActive(gameObject, v8 & 1, 0);
}


void FormationRootComponent___Init_b__42_2(FormationRootComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_11;
  TitleInfoControl__SetHelpBtnColliderEnable(titleInfo, 0, 0);
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0);
  titleInfo = (TitleInfoControl_o *)this->fields.svtFormationBtn;
  if ( !titleInfo )
    goto LABEL_11;
  ((void (__fastcall *)(TitleInfoControl_o *, _QWORD, const char *))titleInfo->klass[1]._1.name)(
    titleInfo,
    0,
    titleInfo->klass[1]._1.namespaze);
  titleInfo = (TitleInfoControl_o *)this->fields.svtListBtn;
  if ( !titleInfo )
    goto LABEL_11;
  ((void (__fastcall *)(TitleInfoControl_o *, _QWORD, const char *))titleInfo->klass[1]._1.name)(
    titleInfo,
    0,
    titleInfo->klass[1]._1.namespaze);
  titleInfo = (TitleInfoControl_o *)this->fields.supportSelectBtn;
  if ( !titleInfo )
    goto LABEL_11;
  ((void (__fastcall *)(TitleInfoControl_o *, _QWORD, const char *))titleInfo->klass[1]._1.name)(
    titleInfo,
    0,
    titleInfo->klass[1]._1.namespaze);
  titleInfo = (TitleInfoControl_o *)this->fields.recommendSupportSelectBtn;
  if ( !titleInfo )
    goto LABEL_11;
  ((void (__fastcall *)(TitleInfoControl_o *, _QWORD, const char *))titleInfo->klass[1]._1.name)(
    titleInfo,
    0,
    titleInfo->klass[1]._1.namespaze);
  titleInfo = (TitleInfoControl_o *)this->fields.warehouseBtn;
  if ( !titleInfo
    || (((void (__fastcall *)(TitleInfoControl_o *, _QWORD, const char *))titleInfo->klass[1]._1.name)(
          titleInfo,
          0,
          titleInfo->klass[1]._1.namespaze),
        (titleInfo = (TitleInfoControl_o *)this->fields.dummyBtn) == 0)
    || (((void (__fastcall *)(TitleInfoControl_o *, _QWORD, const char *))titleInfo->klass[1]._1.name)(
          titleInfo,
          0,
          titleInfo->klass[1]._1.namespaze),
        (titleInfo = (TitleInfoControl_o *)this->fields.scrollBarCollider) == 0)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)titleInfo, 0, 0),
        (titleInfo = (TitleInfoControl_o *)this->fields.scrollBar2Collider) == 0) )
  {
LABEL_11:
    sub_2213CDC(titleInfo, method);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)titleInfo, 0, 0);
}


void FormationRootComponent___Init_b__42_3(FormationRootComponent_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  CommonUI_o *v6; // x20

  if ( (byte_596B00B & 1) == 0 )
  {
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&StringLiteral_7273/*"GO_NEXT"*/);
    byte_596B00B = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  if ( !PartyOrganizationUtility__ExistsTemporaryPartyInfo(Instance, 0) )
  {
    Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (CommonUI_o *)Instance;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4, v5);
    if ( v6 )
    {
      CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
      goto LABEL_11;
    }
LABEL_13:
    sub_2213CDC(Instance, v4);
  }
  Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 40, 1, 0, 0);
LABEL_11:
  Instance = (PartyOrganizationUtility_o *)this->fields.myFSM;
  if ( !Instance )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_7273/*"GO_NEXT"*/, 0);
}


void FormationRootComponent__beginFinish(FormationRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *backSkinSprite; // x0
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_596B001 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_596B001 = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 0, 0),
        (backSkinSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0) )
  {
    sub_2213CDC(backSkinSprite, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)backSkinSprite, 2, 0, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v4, v5);
  AtlasManager__ReleasePartyOrganizationAtlas(0);
}


void FormationRootComponent__beginInitialize(FormationRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596AFFF & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596AFFF = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 3, 30, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void FormationRootComponent__beginStartUp(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *MainBgmName; // x20
  __int64 v7; // x1
  TitleInfoControl_o *titleInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2

  if ( (byte_596B000 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&Method_FormationRootComponent_EndLoadCommonBg__);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_596B000 = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method, v2);
  MainBgmName = BgmManager__GetMainBgmName(0, 0);
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v4, v5);
  SoundManager__playBgm(MainBgmName, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_16;
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0, 19, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_16;
  TitleInfoControl__setBackBtnDepth(titleInfo, 29, 0);
  titleInfo = (TitleInfoControl_o *)this->fields.bgTxtSprite;
  if ( !titleInfo
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfo, 0),
        titleInfo = (TitleInfoControl_o *)BgTxtManager__IsActiveBgTxt(0),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)titleInfo & 1, 0),
        MainMenuBar__setMenuActive(1, 0, 0),
        (titleInfo = (TitleInfoControl_o *)this->fields.backSkinSprite) == 0)
    || (titleInfo = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfo, 0)) == 0 )
  {
LABEL_16:
    sub_2213CDC(titleInfo, v7);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0);
  v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_FormationRootComponent_EndLoadCommonBg__, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v11, v12);
  AtlasManager__LoadUISkin(v10, 2, 1, 0);
}


void FormationRootComponent__closeArrowMark(FormationRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596B004 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596B004 = 1;
  }
  if ( this->fields.isTutorial1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_10;
    CommonUI__CloseTutorialNotificationDialogArrow((CommonUI_o *)Instance, 0);
  }
  if ( this->fields.isTutorial2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, 0, 0);
      return;
    }
LABEL_10:
    sub_2213CDC(Instance, v4);
  }
}


void FormationRootComponent__setMainActive(FormationRootComponent_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *topDispRootObj; // x0

  if ( (byte_596B005 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_UIScrollView___);
    byte_596B005 = 1;
  }
  if ( type == 1 )
  {
    MainMenuBar__setMenuActive(0, 0, 0);
    topDispRootObj = this->fields.topDispRootObj;
    if ( !topDispRootObj )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive(topDispRootObj, 0, 0);
  }
  else if ( !type )
  {
    MainMenuBar__setMenuActive(1, 0, 0);
    topDispRootObj = this->fields.topDispRootObj;
    if ( topDispRootObj )
    {
      UnityEngine_GameObject__SetActive(topDispRootObj, 1, 0);
      topDispRootObj = this->fields.topDispRootObj;
      if ( topDispRootObj )
      {
        topDispRootObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(topDispRootObj, 0);
        if ( topDispRootObj )
        {
          topDispRootObj = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentInChildren_object__58855044(
                                                         (UnityEngine_Component_o *)topDispRootObj,
                                                         (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_UIScrollView___);
          if ( topDispRootObj )
          {
            UIScrollView__ResetPosition((UIScrollView_o *)topDispRootObj, 0);
            return;
          }
        }
      }
    }
LABEL_13:
    sub_2213CDC(topDispRootObj, v5);
  }
}


void FormationRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596B00C & 1) == 0 )
  {
    sub_2213A60(&FormationRootComponent___c_TypeInfo);
    byte_596B00C = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(FormationRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FormationRootComponent___c_TypeInfo->static_fields->__9 = (struct FormationRootComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)FormationRootComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void FormationRootComponent___c___ctor(FormationRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FormationRootComponent___c___Init_b__42_0(FormationRootComponent___c_o *this, const MethodInfo *method)
{
  ;
}


void FormationRootComponent___c___Init_b__42_1(FormationRootComponent___c_o *this, const MethodInfo *method)
{
  ;
}


void FormationRootComponent___c___OnClickHelpBtn_b__49_0(FormationRootComponent___c_o *this, const MethodInfo *method)
{
  ;
}


bool FormationRootComponent___c___ProgressRelease_b__35_0(
        FormationRootComponent___c_o *this,
        RecommendSupportQuestEntity_o *entity,
        const MethodInfo *method)
{
  int32_t questId; // w19

  if ( (byte_596B00D & 1) == 0 )
  {
    this = (FormationRootComponent___c_o *)sub_2213A60(&CondType_TypeInfo);
    byte_596B00D = 1;
  }
  if ( !entity )
    sub_2213CDC(this, entity);
  questId = entity->fields.questId;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, entity, method);
  return CondType__IsQuestClear_47284152(questId, -1, 0, 0);
}


void FormationRootComponent___c__DisplayClass43_0___ctor(
        FormationRootComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FormationRootComponent___c__DisplayClass43_0___SetupStandServant_b__0(
        FormationRootComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  struct FormationRootComponent_o *_4__this; // x8
  FormationRootComponent___c__DisplayClass43_0_o *v3; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (FormationRootComponent___c__DisplayClass43_0_o *)_4__this->fields.mStandServant) == 0) )
  {
    sub_2213CDC(this, method);
  }
  StandFigureSlideComponent__SlideIn((StandFigureSlideComponent_o *)this, 0, 0);
  ActionExtensions__Call(v3->fields.end_act, 0);
}


void FormationRootComponent___c__DisplayClass43_0___SetupStandServant_b__1(
        FormationRootComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  StandFigureSlideComponent_o *_47388504; // x0
  __int64 v5; // x1
  struct FormationRootComponent_o *_4__this; // x8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  struct FormationRootComponent_o *v9; // x8
  StandFigureSlideComponent_o *mStandServant; // x20
  System_Action_o *_9__2; // x22
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596B00E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&TutorialFlag_TypeInfo);
    sub_2213A60(&Method_FormationRootComponent___c__DisplayClass43_0__SetupStandServant_b__1__);
    sub_2213A60(&Method_FormationRootComponent___c__DisplayClass43_0__SetupStandServant_b__2__);
    byte_596B00E = 1;
  }
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
  _47388504 = (StandFigureSlideComponent_o *)TutorialFlag__Get_47388504(102, 0);
  if ( ((unsigned __int8)_47388504 & 1) != 0 )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      _47388504 = _4__this->fields.mStandServant;
      if ( _47388504 )
      {
        if ( _47388504->fields.mIsLoading || StandFigureSlideComponent__IsMoving(_47388504, 0) )
          return;
        v7 = Method_FormationRootComponent___c__DisplayClass43_0__SetupStandServant_b__1__;
        if ( (*((_BYTE *)Method_FormationRootComponent___c__DisplayClass43_0__SetupStandServant_b__1__ + 83) & 2) != 0 )
          v7 = (_QWORD *)sub_2213A78(Method_FormationRootComponent___c__DisplayClass43_0__SetupStandServant_b__1__);
        v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
        OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
        v9 = this->fields.__4__this;
        if ( v9 )
        {
          mStandServant = v9->fields.mStandServant;
          _9__2 = this->fields.__9__2;
          if ( !_9__2 )
          {
            _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(
              _9__2,
              (Il2CppObject *)this,
              Method_FormationRootComponent___c__DisplayClass43_0__SetupStandServant_b__2__,
              0);
            this->fields.__9__2 = _9__2;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.__9__2,
              (int32_t)_9__2,
              v12,
              v13,
              v14,
              v15,
              v16,
              v17);
          }
          if ( mStandServant )
          {
            StandFigureSlideComponent__SlideOut(mStandServant, _9__2, 0, 0);
            return;
          }
        }
      }
    }
    sub_2213CDC(_47388504, v5);
  }
}


void FormationRootComponent___c__DisplayClass43_0___SetupStandServant_b__2(
        FormationRootComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FormationRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  FormationRootComponent__SetupStandServant(_4__this, 0, v2);
}