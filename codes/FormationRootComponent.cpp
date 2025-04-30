void __fastcall FormationRootComponent___ctor(FormationRootComponent_o *this, const MethodInfo *method)
{
  this->fields.TUTORIAL_FORMATION_ARROW_POS = (struct UnityEngine_Vector2_o)0x4316000042280000LL;
  this->fields.TUTORIAL_FORMATION_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BC2670;
  this->fields.TUTORIAL_FORMATION_MESSAGE_POS = (struct UnityEngine_Vector2_o)0xC220000000000000LL;
  this->fields.TUTORIAL_BACK_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BC35F0;
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
    sub_1B86614(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FormationRootComponent__FeatureRelease(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *grid; // x0
  struct UIGrid_o *v6; // x8
  System_Action_o *v7; // x20

  if ( (byte_4A49349 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&AtlasManager_TypeInfo, v3);
    sub_1B863B8(&Method_FormationRootComponent__FeatureRelease_b__30_0__, v4);
    byte_4A49349 = 1;
  }
  grid = (UnityEngine_Component_o *)this->fields.grid;
  if ( !grid
    || (grid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(grid, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)grid, 1, 0LL),
        (grid = (UnityEngine_Component_o *)this->fields.grid) == 0LL)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)grid, 1, 0LL), (v6 = this->fields.grid) == 0LL)
    || (v6->fields.hideInactive = 1, (grid = (UnityEngine_Component_o *)this->fields.recommendSupportSelectBtn) == 0LL) )
  {
    sub_1B86614(grid, method);
  }
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)grid, 0LL) )
  {
    v7 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_FormationRootComponent__FeatureRelease_b__30_0__, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadPartyOrganizationAtlas(v7, 1, 0LL);
  }
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
  __int64 titleInfo; // x0
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  bool _38640612; // w20
  CommonUI_o *v21; // x20
  FormationRootComponent___c_c *v22; // x8
  System_Action_o *_9__37_0; // x21
  Il2CppObject *v24; // x22
  struct FormationRootComponent___c_StaticFields *static_fields; // x0
  UnityEngine_Vector2_o TutorialBackArrowPos; // kr00_8
  float v27; // s0
  float v28; // s10
  float v29; // s15
  float v30; // s11
  float v31; // s12
  float v32; // s13
  float v33; // s14
  Il2CppObject *v34; // x21
  System_Action_o *v35; // x20
  float x; // s14
  float OffsetX; // s0
  float m_XMin; // s15
  float m_Width; // s10
  float m_Height; // s11
  float v41; // s12
  float v42; // s13
  Il2CppObject *Instance; // x20
  float v44; // s8
  float v45; // s9
  System_String_o *v46; // x21
  FormationRootComponent___c_c *v47; // x8
  System_Action_o *_9__37_1; // x22
  Il2CppObject *v49; // x23
  struct FormationRootComponent___c_StaticFields *v50; // x0
  Il2CppObject *MasterData_object; // x20
  struct UserServantEntity_array *UserServantListFromDeckReaveHeroine; // x0
  System_Action_o *v53; // x20
  const MethodInfo *v54; // x2
  float m_YMin; // [xsp+58h] [xbp-48h]
  float y; // [xsp+5Ch] [xbp-44h]
  UnityEngine_Vector2_o v57; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v58; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v59; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4
  UnityEngine_Rect_o v60; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4A4934E & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserDeckMaster___, v3);
    sub_1B863B8(&FSUtility_TypeInfo, v4);
    sub_1B863B8(&Method_FormationRootComponent__Init_b__37_2__, v5);
    sub_1B863B8(&Method_FormationRootComponent__Init_b__37_3__, v6);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___, v7);
    sub_1B863B8(&LocalizationManager_TypeInfo, v8);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B863B8(&TutorialFlag_TypeInfo, v11);
    sub_1B863B8(&Method_FormationRootComponent___c__Init_b__37_0__, v12);
    sub_1B863B8(&Method_FormationRootComponent___c__Init_b__37_1__, v13);
    sub_1B863B8(&FormationRootComponent___c_TypeInfo, v14);
    sub_1B863B8(&StringLiteral_13367/*"TUTORIAL_MESSAGE_FORMATION1"*/, v15);
    byte_4A4934E = 1;
  }
  titleInfo = (__int64)this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_66;
  TitleInfoControl__changeTitleInfo_38093432((TitleInfoControl_o *)titleInfo, 1, 18, 0, 0LL);
  FormationRootComponent__setMainActive(this, 0, v17);
  titleInfo = (__int64)this->fields.titleInfo;
  *(_WORD *)&this->fields.isTutorial1 = 0;
  if ( !titleInfo )
    goto LABEL_66;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)titleInfo, 1, 0LL);
  FormationRootComponent__FeatureRelease(this, v18);
  FormationRootComponent__ProgressRelease(this, v19);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _38640612 = TutorialFlag__Get_38640612(102, 0LL);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( _38640612 )
  {
    if ( !TutorialFlag__Get_38640612(109, 0LL) )
    {
      titleInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v21 = (CommonUI_o *)titleInfo;
      v22 = FormationRootComponent___c_TypeInfo;
      if ( !FormationRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo);
        v22 = FormationRootComponent___c_TypeInfo;
      }
      _9__37_0 = v22->static_fields->__9__37_0;
      if ( !_9__37_0 )
      {
        if ( !v22->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v22);
          v22 = FormationRootComponent___c_TypeInfo;
        }
        v24 = (Il2CppObject *)v22->static_fields->__9;
        _9__37_0 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
        System_Action___ctor(_9__37_0, v24, Method_FormationRootComponent___c__Init_b__37_0__, 0LL);
        static_fields = FormationRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__37_0 = _9__37_0;
        titleInfo = sub_1B8635C(&static_fields->__9__37_0);
      }
      if ( v21 )
      {
        CommonUI__OpenTutorialImageDialog_30509028(v21, 3, 109, _9__37_0, 0LL, 0LL, 0LL);
        goto LABEL_58;
      }
LABEL_66:
      sub_1B86614(titleInfo, method);
    }
  }
  else if ( TutorialFlag__IsProgressDone(2, 0LL) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_38640612(101, 0LL) )
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
                                                     (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
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
                                v41 = OffsetX;
                                m_YMin = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin;
                                v42 = FSUtility__GetOffsetX(68.0, 0, 0LL);
                                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                titleInfo = (__int64)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_13367/*"TUTORIAL_MESSAGE_FORMATION1"*/,
                                                       0LL);
                                v44 = this->fields.TUTORIAL_FORMATION_MESSAGE_POS.fields.x;
                                v45 = this->fields.TUTORIAL_FORMATION_MESSAGE_POS.fields.y;
                                v46 = (System_String_o *)titleInfo;
                                v47 = FormationRootComponent___c_TypeInfo;
                                if ( !FormationRootComponent___c_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo);
                                  v47 = FormationRootComponent___c_TypeInfo;
                                }
                                _9__37_1 = v47->static_fields->__9__37_1;
                                if ( !_9__37_1 )
                                {
                                  if ( !v47->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(v47);
                                    v47 = FormationRootComponent___c_TypeInfo;
                                  }
                                  v49 = (Il2CppObject *)v47->static_fields->__9;
                                  _9__37_1 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
                                  System_Action___ctor(
                                    _9__37_1,
                                    v49,
                                    Method_FormationRootComponent___c__Init_b__37_1__,
                                    0LL);
                                  v50 = FormationRootComponent___c_TypeInfo->static_fields;
                                  v50->__9__37_1 = _9__37_1;
                                  titleInfo = sub_1B8635C(&v50->__9__37_1);
                                }
                                if ( Instance )
                                {
                                  v59.fields.m_YMin = m_YMin;
                                  v58.fields.y = y;
                                  v58.fields.x = x + v41;
                                  v59.fields.m_XMin = m_XMin + v42;
                                  v59.fields.m_Width = m_Width;
                                  v59.fields.m_Height = m_Height;
                                  CommonUI__OpenTutorialNotificationDialogArrow(
                                    (CommonUI_o *)Instance,
                                    v46,
                                    v58,
                                    v59,
                                    90.0,
                                    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(v45), LODWORD(v44)),
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
        titleInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( titleInfo )
        {
          TutorialBackArrowPos = CommonUI__GetTutorialBackArrowPos((CommonUI_o *)titleInfo, 0LL);
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
          v27 = FSUtility__GetOffsetX(68.0, 0, 0LL);
          v29 = this->fields.TUTORIAL_BACK_ARROW_RECT.fields.m_XMin;
          v28 = this->fields.TUTORIAL_BACK_ARROW_RECT.fields.m_YMin;
          v30 = this->fields.TUTORIAL_BACK_ARROW_RECT.fields.m_Width;
          v31 = this->fields.TUTORIAL_BACK_ARROW_RECT.fields.m_Height;
          v32 = v27;
          v33 = FSUtility__GetOffsetX(68.0, 0, 0LL);
          v34 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v35 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
          System_Action___ctor(v35, (Il2CppObject *)this, Method_FormationRootComponent__Init_b__37_2__, 0LL);
          if ( v34 )
          {
            v60.fields.m_XMin = v29 - v33;
            v57.fields.x = TutorialBackArrowPos.fields.x - v32;
            v57.fields.y = TutorialBackArrowPos.fields.y;
            v60.fields.m_YMin = v28;
            v60.fields.m_Width = v30;
            v60.fields.m_Height = v31;
            CommonUI__OpenTutorialArrowMark((CommonUI_o *)v34, v57, 180.0, v60, v35, 0LL);
            goto LABEL_58;
          }
        }
        goto LABEL_66;
      }
    }
  }
LABEL_58:
  titleInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !titleInfo )
    goto LABEL_66;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)titleInfo,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  titleInfo = TutorialFlag__Get_38640612(126, 0LL);
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
  sub_1B8635C(&this->fields.mStandSvtDatas);
  this->fields.mStandSvtIdx = -1;
  v53 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v53, (Il2CppObject *)this, Method_FormationRootComponent__Init_b__37_3__, 0LL);
  FormationRootComponent__SetupStandServant(this, v53, v54);
}


void __fastcall FormationRootComponent__OnClickBack(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  System_String_o **v5; // x8

  if ( (byte_4A49352 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_3439/*"CLICK_BACK"*/, method);
    sub_1B863B8(&StringLiteral_3489/*"CLICK_TERMINAL"*/, v3);
    byte_4A49352 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1B86614(0LL, method);
  if ( this->fields.type == 1 )
    v5 = (System_String_o **)&StringLiteral_3439/*"CLICK_BACK"*/;
  else
    v5 = (System_String_o **)&StringLiteral_3489/*"CLICK_TERMINAL"*/;
  TitleInfoControl__sendEvent(titleInfo, *v5, 0LL);
}


void __fastcall FormationRootComponent__OnClickButtonMask(FormationRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4A49353 & 1) == 0 )
  {
    sub_1B863B8(&Method_FormationRootComponent_OnClickButtonMask__, method);
    byte_4A49353 = 1;
  }
  v2 = Method_FormationRootComponent_OnClickButtonMask__;
  if ( (*((_BYTE *)Method_FormationRootComponent_OnClickButtonMask__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1B863D0(Method_FormationRootComponent_OnClickButtonMask__);
  v3 = (System_Reflection_MethodBase_o *)sub_1B8639C(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 2, 0, 0LL);
}


void __fastcall FormationRootComponent__ProgressRelease(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *recommendSupportSelectBtn; // x0
  System_Object_array *List; // x20
  FormationRootComponent___c_c *v10; // x8
  System_Func_object__bool__o *_9__31_0; // x21
  Il2CppObject *v12; // x22
  struct FormationRootComponent___c_StaticFields *static_fields; // x0
  struct UIButton_o *v14; // x8
  char v15; // w20
  char v16; // w20

  if ( (byte_4A4934A & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_Any_RecommendSupportQuestEntity___, method);
    sub_1B863B8(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___, v3);
    sub_1B863B8(&DataManager_TypeInfo, v4);
    sub_1B863B8(&System_Func_RecommendSupportQuestEntity__bool__TypeInfo, v5);
    sub_1B863B8(&Method_FormationRootComponent___c__ProgressRelease_b__31_0__, v6);
    sub_1B863B8(&FormationRootComponent___c_TypeInfo, v7);
    byte_4A4934A = 1;
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
    recommendSupportSelectBtn = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
    if ( recommendSupportSelectBtn )
    {
      List = (System_Object_array *)RecommendSupportQuestMaster__GetList(
                                      (RecommendSupportQuestMaster_o *)recommendSupportSelectBtn,
                                      0LL);
      v10 = FormationRootComponent___c_TypeInfo;
      if ( !FormationRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo);
        v10 = FormationRootComponent___c_TypeInfo;
      }
      _9__31_0 = (System_Func_object__bool__o *)v10->static_fields->__9__31_0;
      if ( !_9__31_0 )
      {
        if ( !v10->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v10);
          v10 = FormationRootComponent___c_TypeInfo;
        }
        v12 = (Il2CppObject *)v10->static_fields->__9;
        _9__31_0 = (System_Func_object__bool__o *)sub_1B86604(System_Func_RecommendSupportQuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__31_0,
          v12,
          Method_FormationRootComponent___c__ProgressRelease_b__31_0__,
          0LL);
        static_fields = FormationRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__31_0 = (struct System_Func_RecommendSupportQuestEntity__bool__o *)_9__31_0;
        sub_1B8635C(&static_fields->__9__31_0);
      }
      recommendSupportSelectBtn = (UnityEngine_Component_o *)BasicHelper__Any_object__49642848(
                                                               List,
                                                               (System_Func_T__bool__o *)_9__31_0,
                                                               (const MethodInfo_2F57D60 *)Method_BasicHelper_Any_RecommendSupportQuestEntity___);
      v14 = this->fields.recommendSupportSelectBtn;
      if ( v14 )
      {
        v15 = (char)recommendSupportSelectBtn;
        ((void (__fastcall *)(struct UIButton_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._5_set_isEnabled.method)(
          this->fields.recommendSupportSelectBtn,
          (unsigned __int8)recommendSupportSelectBtn & 1,
          v14->klass->vtable._6_OnInit.methodPtr);
        recommendSupportSelectBtn = (UnityEngine_Component_o *)this->fields.recommendSupportButtonMaskLabel;
        if ( recommendSupportSelectBtn )
        {
          recommendSupportSelectBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                   recommendSupportSelectBtn,
                                                                   0LL);
          if ( recommendSupportSelectBtn )
          {
            v16 = v15 ^ 1;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)recommendSupportSelectBtn, v16 & 1, 0LL);
            recommendSupportSelectBtn = (UnityEngine_Component_o *)this->fields.recommendSupportPreparationLabel;
            if ( recommendSupportSelectBtn )
            {
              recommendSupportSelectBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                       recommendSupportSelectBtn,
                                                                       0LL);
              if ( recommendSupportSelectBtn )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)recommendSupportSelectBtn, v16 & 1, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_22:
    sub_1B86614(recommendSupportSelectBtn, method);
  }
}


void __fastcall FormationRootComponent__SetupStandServant(
        FormationRootComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  FormationRootComponent___c__DisplayClass38_0_o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  struct UserServantEntity_array *mStandSvtDatas; // x8
  int max_length; // w10
  int v13; // w9
  int32_t mStandSvtIdx; // w11
  int32_t v15; // w11
  UserServantEntity_o *v16; // x21
  StandFigureSlideComponent_o *mStandServant; // x22
  System_Action_o *v18; // x23
  struct StandFigureSlideComponent_o *v19; // x19
  System_Action_o *v20; // x21

  if ( (byte_4A4934F & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, end_act);
    sub_1B863B8(&Method_FormationRootComponent___c__DisplayClass38_0__SetupStandServant_b__0__, v5);
    sub_1B863B8(&Method_FormationRootComponent___c__DisplayClass38_0__SetupStandServant_b__1__, v6);
    sub_1B863B8(&FormationRootComponent___c__DisplayClass38_0_TypeInfo, v7);
    byte_4A4934F = 1;
  }
  v8 = (FormationRootComponent___c__DisplayClass38_0_o *)sub_1B86604(FormationRootComponent___c__DisplayClass38_0_TypeInfo);
  FormationRootComponent___c__DisplayClass38_0___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_18;
  v8->fields.__4__this = this;
  sub_1B8635C(&v8->fields);
  v8->fields.end_act = end_act;
  v9 = sub_1B8635C(&v8->fields.end_act);
  mStandSvtDatas = this->fields.mStandSvtDatas;
  if ( !mStandSvtDatas )
    goto LABEL_18;
  max_length = mStandSvtDatas->max_length;
  if ( max_length < 1 )
  {
LABEL_13:
    v16 = 0LL;
  }
  else
  {
    v13 = 0;
    while ( 1 )
    {
      mStandSvtIdx = this->fields.mStandSvtIdx;
      v15 = mStandSvtIdx + 1 < max_length ? mStandSvtIdx + 1 : 0;
      this->fields.mStandSvtIdx = v15;
      if ( v15 >= (unsigned int)max_length )
        sub_1B8661C(v9, v10);
      v16 = mStandSvtDatas->m_Items[v15];
      if ( v16 )
        break;
      max_length = mStandSvtDatas->max_length;
      if ( ++v13 >= max_length )
        goto LABEL_13;
    }
  }
  mStandServant = this->fields.mStandServant;
  v18 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v8,
    Method_FormationRootComponent___c__DisplayClass38_0__SetupStandServant_b__0__,
    0LL);
  if ( !mStandServant
    || (StandFigureSlideComponent__Setup(mStandServant, v16, 0, v18, 0LL),
        v19 = this->fields.mStandServant,
        v20 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo),
        System_Action___ctor(
          v20,
          (Il2CppObject *)v8,
          (intptr_t)Method_FormationRootComponent___c__DisplayClass38_0__SetupStandServant_b__1__,
          0LL),
        !v19) )
  {
LABEL_18:
    sub_1B86614(v9, v10);
  }
  v19->fields.mBtnAct = v20;
  sub_1B8635C(&v19->fields.mBtnAct);
}


void __fastcall FormationRootComponent___FeatureRelease_b__30_0(
        FormationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *recommendSupportSelectBtnSprite; // x19

  if ( (byte_4A49354 & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_20108/*"img_form_menu08"*/, v3);
    byte_4A49354 = 1;
  }
  recommendSupportSelectBtnSprite = this->fields.recommendSupportSelectBtnSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(recommendSupportSelectBtnSprite, (System_String_o *)StringLiteral_20108/*"img_form_menu08"*/, 0LL);
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
    sub_1B86614(titleInfo, method);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)titleInfo, 0, 0LL);
}


void __fastcall FormationRootComponent___Init_b__37_3(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v8; // x1
  CommonUI_o *v9; // x20

  if ( (byte_4A49355 & 1) == 0 )
  {
    sub_1B863B8(&AvalonSceneManager_TypeInfo, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_1B863B8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v5);
    sub_1B863B8(&StringLiteral_6903/*"GO_NEXT"*/, v6);
    byte_4A49355 = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  if ( !PartyOrganizationUtility__ExistsTemporaryPartyInfo(Instance, 0LL) )
  {
    Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( v9 )
    {
      CommonUI__maskFadein(v9, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
      goto LABEL_11;
    }
LABEL_13:
    sub_1B86614(Instance, v8);
  }
  Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 40, 1, 0LL, 0LL);
LABEL_11:
  Instance = (PartyOrganizationUtility_o *)this->fields.myFSM;
  if ( !Instance )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6903/*"GO_NEXT"*/, 0LL);
}


void __fastcall FormationRootComponent__beginFinish(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *backSkinSprite; // x0

  if ( (byte_4A4934D & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v3);
    byte_4A4934D = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 0, 0LL),
        (backSkinSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
    sub_1B86614(backSkinSprite, method);
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

  if ( (byte_4A4934B & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4A4934B = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 3, 30, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
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

  if ( (byte_4A4934C & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&AtlasManager_TypeInfo, v3);
    sub_1B863B8(&BgmManager_TypeInfo, v4);
    sub_1B863B8(&Method_FormationRootComponent_EndLoadCommonBg__, v5);
    sub_1B863B8(&SoundManager_TypeInfo, v6);
    byte_4A4934C = 1;
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
    sub_1B86614(titleInfo, v8);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  v11 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_FormationRootComponent_EndLoadCommonBg__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v11, 2, 1, 0LL);
}


void __fastcall FormationRootComponent__closeArrowMark(FormationRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A49350 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A49350 = 1;
  }
  if ( this->fields.isTutorial1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_10;
    CommonUI__CloseTutorialNotificationDialogArrow((CommonUI_o *)Instance, 0LL);
  }
  if ( this->fields.isTutorial2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, 0LL, 0LL);
      return;
    }
LABEL_10:
    sub_1B86614(Instance, v4);
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

  if ( (byte_4A49351 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_Component_GetComponentInChildren_UIScrollView___, *(_QWORD *)&type);
    byte_4A49351 = 1;
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
          topDispRootObj = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentInChildren_object__49695012(
                                                         (UnityEngine_Component_o *)topDispRootObj,
                                                         (const MethodInfo_2F64924 *)Method_UnityEngine_Component_GetComponentInChildren_UIScrollView___);
          if ( topDispRootObj )
          {
            UIScrollView__ResetPosition((UIScrollView_o *)topDispRootObj, 0LL);
            return;
          }
        }
      }
    }
LABEL_13:
    sub_1B86614(topDispRootObj, v5);
  }
}


void __fastcall FormationRootComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4A49356 & 1) == 0 )
  {
    sub_1B863B8(&FormationRootComponent___c_TypeInfo, v1);
    byte_4A49356 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(FormationRootComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FormationRootComponent___c_TypeInfo->static_fields->__9 = (struct FormationRootComponent___c_o *)v2;
  sub_1B8635C(FormationRootComponent___c_TypeInfo->static_fields);
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

  if ( (byte_4A49357 & 1) == 0 )
  {
    this = (FormationRootComponent___c_o *)sub_1B863B8(&CondType_TypeInfo, entity);
    byte_4A49357 = 1;
  }
  if ( !entity )
    sub_1B86614(this, entity);
  questId = entity->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_38542260(questId, -1, 0, 0LL);
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
    sub_1B86614(this, method);
  }
  StandFigureSlideComponent__SlideIn((StandFigureSlideComponent_o *)this, 0LL, 0LL);
  ActionExtensions__Call(v3->fields.end_act, 0LL);
}


void __fastcall FormationRootComponent___c__DisplayClass38_0___SetupStandServant_b__1(
        FormationRootComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  StandFigureSlideComponent_o *_38640612; // x0
  __int64 v7; // x1
  struct FormationRootComponent_o *_4__this; // x8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  struct FormationRootComponent_o *v11; // x8
  StandFigureSlideComponent_o *mStandServant; // x20
  System_Action_o *_9__2; // x21

  if ( (byte_4A49358 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&TutorialFlag_TypeInfo, v3);
    sub_1B863B8(&Method_FormationRootComponent___c__DisplayClass38_0__SetupStandServant_b__1__, v4);
    sub_1B863B8(&Method_FormationRootComponent___c__DisplayClass38_0__SetupStandServant_b__2__, v5);
    byte_4A49358 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _38640612 = (StandFigureSlideComponent_o *)TutorialFlag__Get_38640612(102, 0LL);
  if ( ((unsigned __int8)_38640612 & 1) != 0 )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      _38640612 = _4__this->fields.mStandServant;
      if ( _38640612 )
      {
        if ( _38640612->fields.mIsLoading || StandFigureSlideComponent__IsMoving(_38640612, 0LL) )
          return;
        v9 = Method_FormationRootComponent___c__DisplayClass38_0__SetupStandServant_b__1__;
        if ( (*((_BYTE *)Method_FormationRootComponent___c__DisplayClass38_0__SetupStandServant_b__1__ + 83) & 2) != 0 )
          v9 = (_QWORD *)sub_1B863D0(Method_FormationRootComponent___c__DisplayClass38_0__SetupStandServant_b__1__);
        v10 = (System_Reflection_MethodBase_o *)sub_1B8639C(v9, v9[4]);
        OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0LL);
        v11 = this->fields.__4__this;
        if ( v11 )
        {
          mStandServant = v11->fields.mStandServant;
          _9__2 = this->fields.__9__2;
          if ( !_9__2 )
          {
            _9__2 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
            System_Action___ctor(
              _9__2,
              (Il2CppObject *)this,
              Method_FormationRootComponent___c__DisplayClass38_0__SetupStandServant_b__2__,
              0LL);
            this->fields.__9__2 = _9__2;
            _38640612 = (StandFigureSlideComponent_o *)sub_1B8635C(&this->fields.__9__2);
          }
          if ( mStandServant )
          {
            StandFigureSlideComponent__SlideOut(mStandServant, _9__2, 0, 0LL);
            return;
          }
        }
      }
    }
    sub_1B86614(_38640612, v7);
  }
}


void __fastcall FormationRootComponent___c__DisplayClass38_0___SetupStandServant_b__2(
        FormationRootComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  FormationRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B86614(0LL, method);
  FormationRootComponent__SetupStandServant(_4__this, 0LL, 0LL);
}