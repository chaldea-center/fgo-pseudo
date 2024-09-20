void __fastcall FormationRootComponent___ctor(FormationRootComponent_o *this, const MethodInfo *method)
{
  this->fields.TUTORIAL_FORMATION_ARROW_POS = (struct UnityEngine_Vector2_o)0x4316000042280000LL;
  this->fields.TUTORIAL_FORMATION_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BB4140;
  this->fields.TUTORIAL_FORMATION_MESSAGE_POS = (struct UnityEngine_Vector2_o)0xC220000000000000LL;
  this->fields.TUTORIAL_BACK_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BB50D0;
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FormationRootComponent__Awake(FormationRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall FormationRootComponent__EndLoadCommonBg(FormationRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *backSkinSprite; // x0

  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL )
  {
    sub_1B8880C(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FormationRootComponent__FeatureRelease(FormationRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *grid; // x0
  struct UIGrid_o *v4; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_o *v6; // x20

  if ( (byte_4A564BF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_FormationRootComponent__FeatureRelease_b__30_0__);
    byte_4A564BF = 1;
  }
  grid = (UnityEngine_Component_o *)this->fields.grid;
  if ( !grid )
    goto LABEL_15;
  grid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(grid, 0LL);
  if ( !grid )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)grid, 1, 0LL);
  grid = (UnityEngine_Component_o *)this->fields.grid;
  if ( !grid )
    goto LABEL_15;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)grid, 1, 0LL);
  v4 = this->fields.grid;
  if ( !v4
    || (v4->fields.hideInactive = 1, (grid = (UnityEngine_Component_o *)this->fields.recommendSupportSelectBtn) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(grid, 0LL),
        grid = (UnityEngine_Component_o *)ConstantMaster__IsFLAG20240804(0LL),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)grid & 1, 0LL),
        (grid = (UnityEngine_Component_o *)this->fields.recommendSupportSelectBtn) == 0LL) )
  {
LABEL_15:
    sub_1B8880C(grid, method);
  }
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)grid, 0LL) )
  {
    v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_FormationRootComponent__FeatureRelease_b__30_0__, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadPartyOrganizationAtlas(v6, 1, 0LL);
  }
}


void __fastcall FormationRootComponent__Init(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 titleInfo; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  bool _37688364; // w20
  CommonUI_o *v8; // x20
  FormationRootComponent___c_c *v9; // x8
  System_Action_o *_9__37_0; // x21
  Il2CppObject *v11; // x22
  struct FormationRootComponent___c_StaticFields *static_fields; // x0
  UnityEngine_Vector2_o TutorialBackArrowPos; // kr00_8
  float v14; // s0
  float v15; // s10
  float v16; // s15
  float v17; // s11
  float v18; // s12
  float v19; // s13
  float v20; // s14
  Il2CppObject *v21; // x21
  System_Action_o *v22; // x20
  float x; // s14
  float OffsetX; // s0
  float m_XMin; // s15
  float m_Width; // s10
  float m_Height; // s11
  float v28; // s12
  float v29; // s13
  Il2CppObject *Instance; // x20
  float v31; // s8
  float v32; // s9
  System_String_o *v33; // x21
  FormationRootComponent___c_c *v34; // x8
  System_Action_o *_9__37_1; // x22
  Il2CppObject *v36; // x23
  struct FormationRootComponent___c_StaticFields *v37; // x0
  Il2CppObject *MasterData_object; // x20
  struct UserServantEntity_array *UserServantListFromDeckReaveHeroine; // x0
  System_Action_o *v40; // x20
  const MethodInfo *v41; // x2
  float m_YMin; // [xsp+58h] [xbp-48h]
  float y; // [xsp+5Ch] [xbp-44h]
  UnityEngine_Vector2_o v44; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v45; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v46; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4
  UnityEngine_Rect_o v47; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4A564C4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1B885B0(&FSUtility_TypeInfo);
    sub_1B885B0(&Method_FormationRootComponent__Init_b__37_2__);
    sub_1B885B0(&Method_FormationRootComponent__Init_b__37_3__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    sub_1B885B0(&Method_FormationRootComponent___c__Init_b__37_0__);
    sub_1B885B0(&Method_FormationRootComponent___c__Init_b__37_1__);
    sub_1B885B0(&FormationRootComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_13499/*"TUTORIAL_MESSAGE_FORMATION1"*/);
    byte_4A564C4 = 1;
  }
  titleInfo = (__int64)this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_66;
  TitleInfoControl__changeTitleInfo_37188552((TitleInfoControl_o *)titleInfo, 1, 18, 0, 0LL);
  FormationRootComponent__setMainActive(this, 0, v4);
  titleInfo = (__int64)this->fields.titleInfo;
  *(_WORD *)&this->fields.isTutorial1 = 0;
  if ( !titleInfo )
    goto LABEL_66;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)titleInfo, 1, 0LL);
  FormationRootComponent__FeatureRelease(this, v5);
  FormationRootComponent__ProgressRelease(this, v6);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _37688364 = TutorialFlag__Get_37688364(102, 0LL);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( _37688364 )
  {
    if ( !TutorialFlag__Get_37688364(109, 0LL) )
    {
      titleInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v8 = (CommonUI_o *)titleInfo;
      v9 = FormationRootComponent___c_TypeInfo;
      if ( !FormationRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        titleInfo = j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo);
        v9 = FormationRootComponent___c_TypeInfo;
      }
      _9__37_0 = v9->static_fields->__9__37_0;
      if ( !_9__37_0 )
      {
        if ( !v9->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v9);
          v9 = FormationRootComponent___c_TypeInfo;
        }
        v11 = (Il2CppObject *)v9->static_fields->__9;
        _9__37_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(_9__37_0, v11, Method_FormationRootComponent___c__Init_b__37_0__, 0LL);
        static_fields = FormationRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__37_0 = _9__37_0;
        titleInfo = sub_1B88554(&static_fields->__9__37_0, _9__37_0);
      }
      if ( v8 )
      {
        CommonUI__OpenTutorialImageDialog_30519908(v8, 3, 109, _9__37_0, 0LL, 0LL, 0LL);
        goto LABEL_58;
      }
LABEL_66:
      sub_1B8880C(titleInfo, method);
    }
  }
  else if ( TutorialFlag__IsProgressDone(2, 0LL) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_37688364(101, 0LL) )
    {
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( !TutorialFlag__IsProgressDone(3, 0LL) )
      {
        titleInfo = (__int64)this->fields.titleInfo;
        this->fields.isTutorial1 = 1;
        if ( titleInfo )
        {
          TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)titleInfo, 0, 0LL);
          titleInfo = (__int64)this->fields.titleInfo;
          if ( titleInfo )
          {
            TitleInfoControl__SetHelpBtnColliderEnable((TitleInfoControl_o *)titleInfo, 0, 0LL);
            MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
            titleInfo = (__int64)this->fields.svtListBtn;
            if ( titleInfo )
            {
              (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)titleInfo + 392LL))(
                titleInfo,
                0LL,
                *(_QWORD *)(*(_QWORD *)titleInfo + 400LL));
              titleInfo = (__int64)this->fields.supportSelectBtn;
              if ( titleInfo )
              {
                (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)titleInfo + 392LL))(
                  titleInfo,
                  0LL,
                  *(_QWORD *)(*(_QWORD *)titleInfo + 400LL));
                titleInfo = (__int64)this->fields.recommendSupportSelectBtn;
                if ( titleInfo )
                {
                  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)titleInfo + 392LL))(
                    titleInfo,
                    0LL,
                    *(_QWORD *)(*(_QWORD *)titleInfo + 400LL));
                  titleInfo = (__int64)this->fields.warehouseBtn;
                  if ( titleInfo )
                  {
                    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)titleInfo + 392LL))(
                      titleInfo,
                      0LL,
                      *(_QWORD *)(*(_QWORD *)titleInfo + 400LL));
                    titleInfo = (__int64)this->fields.dummyBtn;
                    if ( titleInfo )
                    {
                      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)titleInfo + 392LL))(
                        titleInfo,
                        0LL,
                        *(_QWORD *)(*(_QWORD *)titleInfo + 400LL));
                      titleInfo = (__int64)this->fields.scrollBarCollider;
                      if ( titleInfo )
                      {
                        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)titleInfo, 0, 0LL);
                        titleInfo = (__int64)this->fields.scrollBar2Collider;
                        if ( titleInfo )
                        {
                          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)titleInfo, 0, 0LL);
                          titleInfo = (__int64)this->fields.svtFormationBtn;
                          if ( titleInfo )
                          {
                            titleInfo = (__int64)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)titleInfo,
                                                   0LL);
                            if ( titleInfo )
                            {
                              titleInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)titleInfo,
                                                     (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
                              if ( titleInfo )
                              {
                                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)titleInfo, 0, 0LL);
                                x = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.x;
                                y = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y;
                                if ( !FSUtility_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
                                OffsetX = FSUtility__GetOffsetX(68.0, 0, 0LL);
                                m_XMin = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_XMin;
                                m_Width = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Width;
                                m_Height = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Height;
                                v28 = OffsetX;
                                m_YMin = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin;
                                v29 = FSUtility__GetOffsetX(68.0, 0, 0LL);
                                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                titleInfo = (__int64)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_13499/*"TUTORIAL_MESSAGE_FORMATION1"*/,
                                                       0LL);
                                v31 = this->fields.TUTORIAL_FORMATION_MESSAGE_POS.fields.x;
                                v32 = this->fields.TUTORIAL_FORMATION_MESSAGE_POS.fields.y;
                                v33 = (System_String_o *)titleInfo;
                                v34 = FormationRootComponent___c_TypeInfo;
                                if ( !FormationRootComponent___c_TypeInfo->_2.cctor_finished )
                                {
                                  titleInfo = j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo);
                                  v34 = FormationRootComponent___c_TypeInfo;
                                }
                                _9__37_1 = v34->static_fields->__9__37_1;
                                if ( !_9__37_1 )
                                {
                                  if ( !v34->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(v34);
                                    v34 = FormationRootComponent___c_TypeInfo;
                                  }
                                  v36 = (Il2CppObject *)v34->static_fields->__9;
                                  _9__37_1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                                  System_Action___ctor(
                                    _9__37_1,
                                    v36,
                                    Method_FormationRootComponent___c__Init_b__37_1__,
                                    0LL);
                                  v37 = FormationRootComponent___c_TypeInfo->static_fields;
                                  v37->__9__37_1 = _9__37_1;
                                  titleInfo = sub_1B88554(&v37->__9__37_1, _9__37_1);
                                }
                                if ( Instance )
                                {
                                  v46.fields.m_YMin = m_YMin;
                                  v45.fields.y = y;
                                  v45.fields.x = x + v28;
                                  v46.fields.m_XMin = m_XMin + v29;
                                  v46.fields.m_Width = m_Width;
                                  v46.fields.m_Height = m_Height;
                                  CommonUI__OpenTutorialNotificationDialogArrow(
                                    (CommonUI_o *)Instance,
                                    v33,
                                    v45,
                                    v46,
                                    90.0,
                                    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(v32), LODWORD(v31)),
                                    -1,
                                    _9__37_1,
                                    0LL);
                                  goto LABEL_58;
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
        }
        goto LABEL_66;
      }
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( TutorialFlag__IsProgressDone(3, 0LL) )
      {
        this->fields.isTutorial2 = 1;
        titleInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( titleInfo )
        {
          TutorialBackArrowPos = CommonUI__GetTutorialBackArrowPos((CommonUI_o *)titleInfo, 0LL);
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
          v14 = FSUtility__GetOffsetX(68.0, 0, 0LL);
          v16 = this->fields.TUTORIAL_BACK_ARROW_RECT.fields.m_XMin;
          v15 = this->fields.TUTORIAL_BACK_ARROW_RECT.fields.m_YMin;
          v17 = this->fields.TUTORIAL_BACK_ARROW_RECT.fields.m_Width;
          v18 = this->fields.TUTORIAL_BACK_ARROW_RECT.fields.m_Height;
          v19 = v14;
          v20 = FSUtility__GetOffsetX(68.0, 0, 0LL);
          v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v22 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(v22, (Il2CppObject *)this, Method_FormationRootComponent__Init_b__37_2__, 0LL);
          if ( v21 )
          {
            v47.fields.m_XMin = v16 - v20;
            v44.fields.x = TutorialBackArrowPos.fields.x - v19;
            v44.fields.y = TutorialBackArrowPos.fields.y;
            v47.fields.m_YMin = v15;
            v47.fields.m_Width = v17;
            v47.fields.m_Height = v18;
            CommonUI__OpenTutorialArrowMark((CommonUI_o *)v21, v44, 180.0, v47, v22, 0LL);
            goto LABEL_58;
          }
        }
        goto LABEL_66;
      }
    }
  }
LABEL_58:
  titleInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !titleInfo )
    goto LABEL_66;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)titleInfo,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  titleInfo = TutorialFlag__Get_37688364(126, 0LL);
  if ( !MasterData_object )
    goto LABEL_66;
  if ( (titleInfo & 1) != 0 )
    UserServantListFromDeckReaveHeroine = UserDeckMaster__GetUserServantListFromDeckReaveHeroine(
                                            (UserDeckMaster_o *)MasterData_object,
                                            0LL);
  else
    UserServantListFromDeckReaveHeroine = UserDeckMaster__GetUserServantListFromDeck(
                                            (UserDeckMaster_o *)MasterData_object,
                                            0LL);
  this->fields.mStandSvtDatas = UserServantListFromDeckReaveHeroine;
  sub_1B88554(&this->fields.mStandSvtDatas, UserServantListFromDeckReaveHeroine);
  this->fields.mStandSvtIdx = -1;
  v40 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_FormationRootComponent__Init_b__37_3__, 0LL);
  FormationRootComponent__SetupStandServant(this, v40, v41);
}


void __fastcall FormationRootComponent__OnClickBack(FormationRootComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  System_String_o **v4; // x8

  if ( (byte_4A564C8 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3528/*"CLICK_BACK"*/);
    sub_1B885B0(&StringLiteral_3574/*"CLICK_TERMINAL"*/);
    byte_4A564C8 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1B8880C(0LL, method);
  if ( this->fields.type == 1 )
    v4 = (System_String_o **)&StringLiteral_3528/*"CLICK_BACK"*/;
  else
    v4 = (System_String_o **)&StringLiteral_3574/*"CLICK_TERMINAL"*/;
  TitleInfoControl__sendEvent(titleInfo, *v4, 0LL);
}


void __fastcall FormationRootComponent__OnClickButtonMask(FormationRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4A564C9 & 1) == 0 )
  {
    sub_1B885B0(&Method_FormationRootComponent_OnClickButtonMask__);
    byte_4A564C9 = 1;
  }
  v2 = Method_FormationRootComponent_OnClickButtonMask__;
  if ( (*((_BYTE *)Method_FormationRootComponent_OnClickButtonMask__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1B885C8();
  v3 = (System_Reflection_MethodBase_o *)sub_1B88594(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 2, 0LL);
}


void __fastcall FormationRootComponent__ProgressRelease(FormationRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *recommendSupportSelectBtn; // x0
  System_Object_array *List; // x20
  FormationRootComponent___c_c *v5; // x8
  System_Func_object__bool__o *_9__31_0; // x21
  Il2CppObject *v7; // x22
  struct FormationRootComponent___c_StaticFields *static_fields; // x0
  struct UIButton_o *v9; // x8
  char v10; // w20
  char v11; // w20

  if ( (byte_4A564C0 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_RecommendSupportQuestEntity___);
    sub_1B885B0(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&System_Func_RecommendSupportQuestEntity__bool__TypeInfo);
    sub_1B885B0(&Method_FormationRootComponent___c__ProgressRelease_b__31_0__);
    sub_1B885B0(&FormationRootComponent___c_TypeInfo);
    byte_4A564C0 = 1;
  }
  recommendSupportSelectBtn = (UnityEngine_Component_o *)this->fields.recommendSupportSelectBtn;
  if ( !recommendSupportSelectBtn )
    goto LABEL_22;
  recommendSupportSelectBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                           recommendSupportSelectBtn,
                                                           0LL);
  if ( !recommendSupportSelectBtn )
    goto LABEL_22;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)recommendSupportSelectBtn, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    recommendSupportSelectBtn = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
    if ( recommendSupportSelectBtn )
    {
      List = (System_Object_array *)RecommendSupportQuestMaster__GetList(
                                      (RecommendSupportQuestMaster_o *)recommendSupportSelectBtn,
                                      0LL);
      v5 = FormationRootComponent___c_TypeInfo;
      if ( !FormationRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo);
        v5 = FormationRootComponent___c_TypeInfo;
      }
      _9__31_0 = (System_Func_object__bool__o *)v5->static_fields->__9__31_0;
      if ( !_9__31_0 )
      {
        if ( !v5->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v5);
          v5 = FormationRootComponent___c_TypeInfo;
        }
        v7 = (Il2CppObject *)v5->static_fields->__9;
        _9__31_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_RecommendSupportQuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__31_0,
          v7,
          Method_FormationRootComponent___c__ProgressRelease_b__31_0__,
          0LL);
        static_fields = FormationRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__31_0 = (struct System_Func_RecommendSupportQuestEntity__bool__o *)_9__31_0;
        sub_1B88554(&static_fields->__9__31_0, _9__31_0);
      }
      recommendSupportSelectBtn = (UnityEngine_Component_o *)BasicHelper__Any_object__48672124(
                                                               List,
                                                               (System_Func_T__bool__o *)_9__31_0,
                                                               (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_RecommendSupportQuestEntity___);
      v9 = this->fields.recommendSupportSelectBtn;
      if ( v9 )
      {
        v10 = (char)recommendSupportSelectBtn;
        ((void (__fastcall *)(struct UIButton_o *, _QWORD, Il2CppMethodPointer))v9->klass->vtable._5_set_isEnabled.method)(
          this->fields.recommendSupportSelectBtn,
          (unsigned __int8)recommendSupportSelectBtn & 1,
          v9->klass->vtable._6_OnInit.methodPtr);
        recommendSupportSelectBtn = (UnityEngine_Component_o *)this->fields.recommendSupportButtonMaskLabel;
        if ( recommendSupportSelectBtn )
        {
          recommendSupportSelectBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                   recommendSupportSelectBtn,
                                                                   0LL);
          if ( recommendSupportSelectBtn )
          {
            v11 = v10 ^ 1;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)recommendSupportSelectBtn, v11 & 1, 0LL);
            recommendSupportSelectBtn = (UnityEngine_Component_o *)this->fields.recommendSupportPreparationLabel;
            if ( recommendSupportSelectBtn )
            {
              recommendSupportSelectBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                       recommendSupportSelectBtn,
                                                                       0LL);
              if ( recommendSupportSelectBtn )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)recommendSupportSelectBtn, v11 & 1, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_22:
    sub_1B8880C(recommendSupportSelectBtn, method);
  }
}


void __fastcall FormationRootComponent__SetupStandServant(
        FormationRootComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  FormationRootComponent___c__DisplayClass38_0_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  struct UserServantEntity_array *mStandSvtDatas; // x8
  int max_length; // w10
  int v10; // w9
  int32_t mStandSvtIdx; // w11
  int32_t v12; // w11
  UserServantEntity_o *v13; // x21
  StandFigureSlideComponent_o *mStandServant; // x22
  System_Action_o *v15; // x23
  struct StandFigureSlideComponent_o *v16; // x19
  System_Action_o *v17; // x21

  if ( (byte_4A564C5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FormationRootComponent___c__DisplayClass38_0__SetupStandServant_b__0__);
    sub_1B885B0(&Method_FormationRootComponent___c__DisplayClass38_0__SetupStandServant_b__1__);
    sub_1B885B0(&FormationRootComponent___c__DisplayClass38_0_TypeInfo);
    byte_4A564C5 = 1;
  }
  v5 = (FormationRootComponent___c__DisplayClass38_0_o *)sub_1B887FC(FormationRootComponent___c__DisplayClass38_0_TypeInfo);
  FormationRootComponent___c__DisplayClass38_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_18;
  v5->fields.__4__this = this;
  sub_1B88554(&v5->fields, this);
  v5->fields.end_act = end_act;
  v6 = sub_1B88554(&v5->fields.end_act, end_act);
  mStandSvtDatas = this->fields.mStandSvtDatas;
  if ( !mStandSvtDatas )
    goto LABEL_18;
  max_length = mStandSvtDatas->max_length;
  if ( max_length < 1 )
  {
LABEL_13:
    v13 = 0LL;
  }
  else
  {
    v10 = 0;
    while ( 1 )
    {
      mStandSvtIdx = this->fields.mStandSvtIdx;
      v12 = mStandSvtIdx + 1 < max_length ? mStandSvtIdx + 1 : 0;
      this->fields.mStandSvtIdx = v12;
      if ( v12 >= (unsigned int)max_length )
        sub_1B88814(v6, v7);
      v13 = mStandSvtDatas->m_Items[v12];
      if ( v13 )
        break;
      max_length = mStandSvtDatas->max_length;
      if ( ++v10 >= max_length )
        goto LABEL_13;
    }
  }
  mStandServant = this->fields.mStandServant;
  v15 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_FormationRootComponent___c__DisplayClass38_0__SetupStandServant_b__0__,
    0LL);
  if ( !mStandServant
    || (StandFigureSlideComponent__Setup(mStandServant, v13, 0, v15, 0LL),
        v16 = this->fields.mStandServant,
        v17 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v17,
          (Il2CppObject *)v5,
          (intptr_t)Method_FormationRootComponent___c__DisplayClass38_0__SetupStandServant_b__1__,
          0LL),
        !v16) )
  {
LABEL_18:
    sub_1B8880C(v6, v7);
  }
  v16->fields.mBtnAct = v17;
  sub_1B88554(&v16->fields.mBtnAct, v17);
}


void __fastcall FormationRootComponent___FeatureRelease_b__30_0(
        FormationRootComponent_o *this,
        const MethodInfo *method)
{
  UISprite_o *recommendSupportSelectBtnSprite; // x19

  if ( (byte_4A564CA & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&StringLiteral_20304/*"img_form_menu08"*/);
    byte_4A564CA = 1;
  }
  recommendSupportSelectBtnSprite = this->fields.recommendSupportSelectBtnSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(recommendSupportSelectBtnSprite, (System_String_o *)StringLiteral_20304/*"img_form_menu08"*/, 0LL);
}


void __fastcall FormationRootComponent___Init_b__37_2(FormationRootComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_11;
  TitleInfoControl__SetHelpBtnColliderEnable(titleInfo, 0, 0LL);
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  titleInfo = (TitleInfoControl_o *)this->fields.svtFormationBtn;
  if ( !titleInfo )
    goto LABEL_11;
  ((void (__fastcall *)(TitleInfoControl_o *, _QWORD, void *))titleInfo->klass[1]._1.namespaze)(
    titleInfo,
    0LL,
    titleInfo->klass[1]._1.byval_arg.data);
  titleInfo = (TitleInfoControl_o *)this->fields.svtListBtn;
  if ( !titleInfo )
    goto LABEL_11;
  ((void (__fastcall *)(TitleInfoControl_o *, _QWORD, void *))titleInfo->klass[1]._1.namespaze)(
    titleInfo,
    0LL,
    titleInfo->klass[1]._1.byval_arg.data);
  titleInfo = (TitleInfoControl_o *)this->fields.supportSelectBtn;
  if ( !titleInfo )
    goto LABEL_11;
  ((void (__fastcall *)(TitleInfoControl_o *, _QWORD, void *))titleInfo->klass[1]._1.namespaze)(
    titleInfo,
    0LL,
    titleInfo->klass[1]._1.byval_arg.data);
  titleInfo = (TitleInfoControl_o *)this->fields.recommendSupportSelectBtn;
  if ( !titleInfo )
    goto LABEL_11;
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
LABEL_11:
    sub_1B8880C(titleInfo, method);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)titleInfo, 0, 0LL);
}


void __fastcall FormationRootComponent___Init_b__37_3(FormationRootComponent_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20

  if ( (byte_4A564CB & 1) == 0 )
  {
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&StringLiteral_6938/*"GO_NEXT"*/);
    byte_4A564CB = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  if ( !PartyOrganizationUtility__ExistsTemporaryPartyInfo(Instance, 0LL) )
  {
    Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v5 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      Instance = (PartyOrganizationUtility_o *)j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( v5 )
    {
      CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
      goto LABEL_11;
    }
LABEL_13:
    sub_1B8880C(Instance, v4);
  }
  Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 40, 1, 0LL, 0LL);
LABEL_11:
  Instance = (PartyOrganizationUtility_o *)this->fields.myFSM;
  if ( !Instance )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6938/*"GO_NEXT"*/, 0LL);
}


void __fastcall FormationRootComponent__beginFinish(FormationRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *backSkinSprite; // x0

  if ( (byte_4A564C3 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_4A564C3 = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 0, 0LL),
        (backSkinSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(backSkinSprite, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)backSkinSprite, 2, 0, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleasePartyOrganizationAtlas(0LL);
}


void __fastcall FormationRootComponent__beginInitialize(FormationRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A564C1 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A564C1 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 3, 30, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall FormationRootComponent__beginStartUp(FormationRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *MainBgmName; // x20
  __int64 v4; // x1
  TitleInfoControl_o *titleInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_o *v7; // x20

  if ( (byte_4A564C2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&BgmManager_TypeInfo);
    sub_1B885B0(&Method_FormationRootComponent_EndLoadCommonBg__);
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A564C2 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_16;
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0LL, 18, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_16;
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
LABEL_16:
    sub_1B8880C(titleInfo, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_FormationRootComponent_EndLoadCommonBg__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v7, 2, 1, 0LL);
}


void __fastcall FormationRootComponent__closeArrowMark(FormationRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A564C6 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A564C6 = 1;
  }
  if ( this->fields.isTutorial1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_10;
    CommonUI__CloseTutorialNotificationDialogArrow((CommonUI_o *)Instance, 0LL);
  }
  if ( this->fields.isTutorial2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, 0LL, 0LL);
      return;
    }
LABEL_10:
    sub_1B8880C(Instance, v4);
  }
}


void __fastcall FormationRootComponent__setMainActive(
        FormationRootComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *topDispRootObj; // x0

  if ( (byte_4A564C7 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_UIScrollView___);
    byte_4A564C7 = 1;
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
          topDispRootObj = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentInChildren_object__48719376(
                                                         (UnityEngine_Component_o *)topDispRootObj,
                                                         (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_UIScrollView___);
          if ( topDispRootObj )
          {
            UIScrollView__ResetPosition((UIScrollView_o *)topDispRootObj, 0LL);
            return;
          }
        }
      }
    }
LABEL_13:
    sub_1B8880C(topDispRootObj, v5);
  }
}


void __fastcall FormationRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4A564CC & 1) == 0 )
  {
    sub_1B885B0(&FormationRootComponent___c_TypeInfo);
    byte_4A564CC = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(FormationRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  FormationRootComponent___c_TypeInfo->static_fields->__9 = (struct FormationRootComponent___c_o *)v1;
  sub_1B88554(FormationRootComponent___c_TypeInfo->static_fields, v1);
}


void __fastcall FormationRootComponent___c___ctor(FormationRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FormationRootComponent___c___Init_b__37_0(FormationRootComponent___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall FormationRootComponent___c___Init_b__37_1(FormationRootComponent___c_o *this, const MethodInfo *method)
{
  ;
}


bool __fastcall FormationRootComponent___c___ProgressRelease_b__31_0(
        FormationRootComponent___c_o *this,
        RecommendSupportQuestEntity_o *entity,
        const MethodInfo *method)
{
  int32_t questId; // w19

  if ( (byte_4A564CD & 1) == 0 )
  {
    this = (FormationRootComponent___c_o *)sub_1B885B0(&CondType_TypeInfo);
    byte_4A564CD = 1;
  }
  if ( !entity )
    sub_1B8880C(this, entity);
  questId = entity->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_37596684(questId, -1, 0, 0LL);
}


void __fastcall FormationRootComponent___c__DisplayClass38_0___ctor(
        FormationRootComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FormationRootComponent___c__DisplayClass38_0___SetupStandServant_b__0(
        FormationRootComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  struct FormationRootComponent_o *_4__this; // x8
  FormationRootComponent___c__DisplayClass38_0_o *v3; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (FormationRootComponent___c__DisplayClass38_0_o *)_4__this->fields.mStandServant) == 0LL) )
  {
    sub_1B8880C(this, method);
  }
  StandFigureSlideComponent__SlideIn((StandFigureSlideComponent_o *)this, 0LL, 0LL);
  ActionExtensions__Call(v3->fields.end_act, 0LL);
}


void __fastcall FormationRootComponent___c__DisplayClass38_0___SetupStandServant_b__1(
        FormationRootComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  StandFigureSlideComponent_o *_37688364; // x0
  __int64 v4; // x1
  struct FormationRootComponent_o *_4__this; // x8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  struct FormationRootComponent_o *v8; // x8
  StandFigureSlideComponent_o *mStandServant; // x20
  System_Action_o *_9__2; // x21

  if ( (byte_4A564CE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    sub_1B885B0(&Method_FormationRootComponent___c__DisplayClass38_0__SetupStandServant_b__1__);
    sub_1B885B0(&Method_FormationRootComponent___c__DisplayClass38_0__SetupStandServant_b__2__);
    byte_4A564CE = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _37688364 = (StandFigureSlideComponent_o *)TutorialFlag__Get_37688364(102, 0LL);
  if ( ((unsigned __int8)_37688364 & 1) != 0 )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      _37688364 = _4__this->fields.mStandServant;
      if ( _37688364 )
      {
        if ( _37688364->fields.mIsLoading || StandFigureSlideComponent__IsMoving(_37688364, 0LL) )
          return;
        v6 = Method_FormationRootComponent___c__DisplayClass38_0__SetupStandServant_b__1__;
        if ( (*((_BYTE *)Method_FormationRootComponent___c__DisplayClass38_0__SetupStandServant_b__1__ + 83) & 2) != 0 )
          v6 = (_QWORD *)sub_1B885C8();
        v7 = (System_Reflection_MethodBase_o *)sub_1B88594(v6, v6[4]);
        OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
        v8 = this->fields.__4__this;
        if ( v8 )
        {
          mStandServant = v8->fields.mStandServant;
          _9__2 = this->fields.__9__2;
          if ( !_9__2 )
          {
            _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            System_Action___ctor(
              _9__2,
              (Il2CppObject *)this,
              Method_FormationRootComponent___c__DisplayClass38_0__SetupStandServant_b__2__,
              0LL);
            this->fields.__9__2 = _9__2;
            _37688364 = (StandFigureSlideComponent_o *)sub_1B88554(&this->fields.__9__2, _9__2);
          }
          if ( mStandServant )
          {
            StandFigureSlideComponent__SlideOut(mStandServant, _9__2, 0, 0LL);
            return;
          }
        }
      }
    }
    sub_1B8880C(_37688364, v4);
  }
}


void __fastcall FormationRootComponent___c__DisplayClass38_0___SetupStandServant_b__2(
        FormationRootComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  FormationRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
  FormationRootComponent__SetupStandServant(_4__this, 0LL, 0LL);
}