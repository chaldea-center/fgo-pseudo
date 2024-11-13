void __fastcall FormationRootComponent___ctor(FormationRootComponent_o *this, const MethodInfo *method)
{
  this->fields.TUTORIAL_FORMATION_ARROW_POS = (struct UnityEngine_Vector2_o)0x4316000042280000LL;
  this->fields.TUTORIAL_FORMATION_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BD2300;
  this->fields.TUTORIAL_FORMATION_MESSAGE_POS = (struct UnityEngine_Vector2_o)0xC220000000000000LL;
  this->fields.TUTORIAL_BACK_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BD32A0;
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
    sub_1BCAA3C(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FormationRootComponent__FeatureRelease(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Component_o *grid; // x0
  struct UIGrid_o *v9; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *v14; // x20
  __int64 v15; // x1

  if ( (byte_4B113E1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_FormationRootComponent__FeatureRelease_b__30_0__, v6, v7);
    byte_4B113E1 = 1;
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
  v9 = this->fields.grid;
  if ( !v9
    || (v9->fields.hideInactive = 1, (grid = (UnityEngine_Component_o *)this->fields.recommendSupportSelectBtn) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(grid, 0LL),
        grid = (UnityEngine_Component_o *)ConstantMaster__IsFLAG20240804(0LL),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)grid & 1, 0LL),
        (grid = (UnityEngine_Component_o *)this->fields.recommendSupportSelectBtn) == 0LL) )
  {
LABEL_15:
    sub_1BCAA3C(grid, method);
  }
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)grid, 0LL) )
  {
    v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_FormationRootComponent__FeatureRelease_b__30_0__, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v15);
    AtlasManager__LoadPartyOrganizationAtlas(v14, 1, 0LL);
  }
}


void __fastcall FormationRootComponent__Init(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 titleInfo; // x0
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  bool _38402052; // w20
  __int64 v37; // x2
  __int64 v38; // x3
  CommonUI_o *v39; // x20
  FormationRootComponent___c_c *v40; // x8
  System_Action_o *_9__37_0; // x21
  Il2CppObject *v42; // x22
  struct FormationRootComponent___c_StaticFields *static_fields; // x0
  __int64 v44; // x1
  __int64 v45; // x1
  UnityEngine_Vector2_o v46; // x1
  UnityEngine_Vector2_o TutorialBackArrowPos; // kr00_8
  float v48; // s0
  float v49; // s10
  float v50; // s15
  float v51; // s11
  float v52; // s12
  float v53; // s13
  float v54; // s14
  Il2CppObject *v55; // x21
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  System_Action_o *v59; // x20
  __int64 v60; // x1
  float x; // s14
  float OffsetX; // s0
  float m_XMin; // s15
  float m_Width; // s10
  float m_Height; // s11
  float v66; // s12
  float v67; // s13
  __int64 v68; // x1
  Il2CppObject *Instance; // x20
  __int64 v70; // x2
  __int64 v71; // x3
  float v72; // s8
  float v73; // s9
  System_String_o *v74; // x21
  FormationRootComponent___c_c *v75; // x8
  System_Action_o *_9__37_1; // x22
  Il2CppObject *v77; // x23
  struct FormationRootComponent___c_StaticFields *v78; // x0
  __int64 v79; // x1
  Il2CppObject *MasterData_object; // x20
  struct UserServantEntity_array *UserServantListFromDeckReaveHeroine; // x0
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  System_Action_o *v85; // x20
  const MethodInfo *v86; // x2
  float m_YMin; // [xsp+58h] [xbp-48h]
  float y; // [xsp+5Ch] [xbp-44h]
  UnityEngine_Vector2_o v89; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v90; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v91; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4
  UnityEngine_Rect_o v92; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4B113E6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserDeckMaster___, v4, v5);
    sub_1BCA7E0(&FSUtility_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_FormationRootComponent__Init_b__37_2__, v8, v9);
    sub_1BCA7E0(&Method_FormationRootComponent__Init_b__37_3__, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___, v12, v13);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_FormationRootComponent___c__Init_b__37_0__, v22, v23);
    sub_1BCA7E0(&Method_FormationRootComponent___c__Init_b__37_1__, v24, v25);
    sub_1BCA7E0(&FormationRootComponent___c_TypeInfo, v26, v27);
    sub_1BCA7E0(&StringLiteral_13662/*"TUTORIAL_MESSAGE_FORMATION1"*/, v28, v29);
    byte_4B113E6 = 1;
  }
  titleInfo = (__int64)this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_66;
  TitleInfoControl__changeTitleInfo_37891656((TitleInfoControl_o *)titleInfo, 1, 18, 0, 0LL);
  FormationRootComponent__setMainActive(this, 0, v31);
  titleInfo = (__int64)this->fields.titleInfo;
  *(_WORD *)&this->fields.isTutorial1 = 0;
  if ( !titleInfo )
    goto LABEL_66;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)titleInfo, 1, 0LL);
  FormationRootComponent__FeatureRelease(this, v32);
  FormationRootComponent__ProgressRelease(this, v33);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v34);
  _38402052 = TutorialFlag__Get_38402052(102, 0LL);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v35);
  if ( _38402052 )
  {
    if ( !TutorialFlag__Get_38402052(109, 0LL) )
    {
      titleInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v39 = (CommonUI_o *)titleInfo;
      v40 = FormationRootComponent___c_TypeInfo;
      if ( !FormationRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo, method);
        v40 = FormationRootComponent___c_TypeInfo;
      }
      _9__37_0 = v40->static_fields->__9__37_0;
      if ( !_9__37_0 )
      {
        if ( !v40->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v40, method);
          v40 = FormationRootComponent___c_TypeInfo;
        }
        v42 = (Il2CppObject *)v40->static_fields->__9;
        _9__37_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v37, v38);
        System_Action___ctor(_9__37_0, v42, Method_FormationRootComponent___c__Init_b__37_0__, 0LL);
        static_fields = FormationRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__37_0 = _9__37_0;
        titleInfo = sub_1BCA784(&static_fields->__9__37_0, _9__37_0);
      }
      if ( v39 )
      {
        CommonUI__OpenTutorialImageDialog_30792208(v39, 3, 109, _9__37_0, 0LL, 0LL, 0LL);
        goto LABEL_58;
      }
LABEL_66:
      sub_1BCAA3C(titleInfo, method);
    }
  }
  else if ( TutorialFlag__IsProgressDone(2, 0LL) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v44);
    if ( TutorialFlag__Get_38402052(101, 0LL) )
    {
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v45);
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
                                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
                              if ( titleInfo )
                              {
                                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)titleInfo, 0, 0LL);
                                x = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.x;
                                y = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y;
                                if ( !FSUtility_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v60);
                                OffsetX = FSUtility__GetOffsetX(68.0, 0, 0LL);
                                m_XMin = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_XMin;
                                m_Width = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Width;
                                m_Height = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Height;
                                v66 = OffsetX;
                                m_YMin = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin;
                                v67 = FSUtility__GetOffsetX(68.0, 0, 0LL);
                                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v68);
                                titleInfo = (__int64)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_13662/*"TUTORIAL_MESSAGE_FORMATION1"*/,
                                                       0LL);
                                v72 = this->fields.TUTORIAL_FORMATION_MESSAGE_POS.fields.x;
                                v73 = this->fields.TUTORIAL_FORMATION_MESSAGE_POS.fields.y;
                                v74 = (System_String_o *)titleInfo;
                                v75 = FormationRootComponent___c_TypeInfo;
                                if ( !FormationRootComponent___c_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo, method);
                                  v75 = FormationRootComponent___c_TypeInfo;
                                }
                                _9__37_1 = v75->static_fields->__9__37_1;
                                if ( !_9__37_1 )
                                {
                                  if ( !v75->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(v75, method);
                                    v75 = FormationRootComponent___c_TypeInfo;
                                  }
                                  v77 = (Il2CppObject *)v75->static_fields->__9;
                                  _9__37_1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v70, v71);
                                  System_Action___ctor(
                                    _9__37_1,
                                    v77,
                                    Method_FormationRootComponent___c__Init_b__37_1__,
                                    0LL);
                                  v78 = FormationRootComponent___c_TypeInfo->static_fields;
                                  v78->__9__37_1 = _9__37_1;
                                  titleInfo = sub_1BCA784(&v78->__9__37_1, _9__37_1);
                                }
                                if ( Instance )
                                {
                                  v91.fields.m_YMin = m_YMin;
                                  v90.fields.y = y;
                                  v90.fields.x = x + v66;
                                  v91.fields.m_XMin = m_XMin + v67;
                                  v91.fields.m_Width = m_Width;
                                  v91.fields.m_Height = m_Height;
                                  CommonUI__OpenTutorialNotificationDialogArrow(
                                    (CommonUI_o *)Instance,
                                    v74,
                                    v90,
                                    v91,
                                    90.0,
                                    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(v73), LODWORD(v72)),
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
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
      if ( TutorialFlag__IsProgressDone(3, 0LL) )
      {
        this->fields.isTutorial2 = 1;
        titleInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( titleInfo )
        {
          TutorialBackArrowPos = CommonUI__GetTutorialBackArrowPos((CommonUI_o *)titleInfo, 0LL);
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
            ((void (__fastcall *)(_QWORD, _QWORD))j_il2cpp_runtime_class_init_0)(FSUtility_TypeInfo, v46);
          v48 = FSUtility__GetOffsetX(68.0, 0, 0LL);
          v50 = this->fields.TUTORIAL_BACK_ARROW_RECT.fields.m_XMin;
          v49 = this->fields.TUTORIAL_BACK_ARROW_RECT.fields.m_YMin;
          v51 = this->fields.TUTORIAL_BACK_ARROW_RECT.fields.m_Width;
          v52 = this->fields.TUTORIAL_BACK_ARROW_RECT.fields.m_Height;
          v53 = v48;
          v54 = FSUtility__GetOffsetX(68.0, 0, 0LL);
          v55 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v59 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v56, v57, v58);
          System_Action___ctor(v59, (Il2CppObject *)this, Method_FormationRootComponent__Init_b__37_2__, 0LL);
          if ( v55 )
          {
            v92.fields.m_XMin = v50 - v54;
            v89.fields.x = TutorialBackArrowPos.fields.x - v53;
            v89.fields.y = TutorialBackArrowPos.fields.y;
            v92.fields.m_YMin = v49;
            v92.fields.m_Width = v51;
            v92.fields.m_Height = v52;
            CommonUI__OpenTutorialArrowMark((CommonUI_o *)v55, v89, 180.0, v92, v59, 0LL);
            goto LABEL_58;
          }
        }
        goto LABEL_66;
      }
    }
  }
LABEL_58:
  titleInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !titleInfo )
    goto LABEL_66;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)titleInfo,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v79);
  titleInfo = TutorialFlag__Get_38402052(126, 0LL);
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
  sub_1BCA784(&this->fields.mStandSvtDatas, UserServantListFromDeckReaveHeroine);
  this->fields.mStandSvtIdx = -1;
  v85 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v82, v83, v84);
  System_Action___ctor(v85, (Il2CppObject *)this, Method_FormationRootComponent__Init_b__37_3__, 0LL);
  FormationRootComponent__SetupStandServant(this, v85, v86);
}


void __fastcall FormationRootComponent__OnClickBack(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  TitleInfoControl_o *titleInfo; // x0
  System_String_o **v7; // x8

  if ( (byte_4B113EA & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3554/*"CLICK_BACK"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_3602/*"CLICK_TERMINAL"*/, v4, v5);
    byte_4B113EA = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1BCAA3C(0LL, method);
  if ( this->fields.type == 1 )
    v7 = (System_String_o **)&StringLiteral_3554/*"CLICK_BACK"*/;
  else
    v7 = (System_String_o **)&StringLiteral_3602/*"CLICK_TERMINAL"*/;
  TitleInfoControl__sendEvent(titleInfo, *v7, 0LL);
}


void __fastcall FormationRootComponent__OnClickButtonMask(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4B113EB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FormationRootComponent_OnClickButtonMask__, method, v2);
    byte_4B113EB = 1;
  }
  v3 = Method_FormationRootComponent_OnClickButtonMask__;
  if ( (*((_BYTE *)Method_FormationRootComponent_OnClickButtonMask__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BCA7F8(Method_FormationRootComponent_OnClickButtonMask__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 2, 0LL);
}


void __fastcall FormationRootComponent__ProgressRelease(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Component_o *recommendSupportSelectBtn; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Object_array *List; // x20
  FormationRootComponent___c_c *v20; // x8
  System_Func_object__bool__o *_9__31_0; // x21
  Il2CppObject *v22; // x22
  struct FormationRootComponent___c_StaticFields *static_fields; // x0
  struct UIButton_o *v24; // x8
  char v25; // w20
  char v26; // w20

  if ( (byte_4B113E2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_RecommendSupportQuestEntity___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Func_RecommendSupportQuestEntity__bool__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_FormationRootComponent___c__ProgressRelease_b__31_0__, v10, v11);
    sub_1BCA7E0(&FormationRootComponent___c_TypeInfo, v12, v13);
    byte_4B113E2 = 1;
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
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
    recommendSupportSelectBtn = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
    if ( recommendSupportSelectBtn )
    {
      List = (System_Object_array *)RecommendSupportQuestMaster__GetList(
                                      (RecommendSupportQuestMaster_o *)recommendSupportSelectBtn,
                                      0LL);
      v20 = FormationRootComponent___c_TypeInfo;
      if ( !FormationRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo, v16);
        v20 = FormationRootComponent___c_TypeInfo;
      }
      _9__31_0 = (System_Func_object__bool__o *)v20->static_fields->__9__31_0;
      if ( !_9__31_0 )
      {
        if ( !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20, v16);
          v20 = FormationRootComponent___c_TypeInfo;
        }
        v22 = (Il2CppObject *)v20->static_fields->__9;
        _9__31_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                    System_Func_RecommendSupportQuestEntity__bool__TypeInfo,
                                                    v16,
                                                    v17,
                                                    v18);
        System_Func_object__bool____ctor(
          _9__31_0,
          v22,
          Method_FormationRootComponent___c__ProgressRelease_b__31_0__,
          0LL);
        static_fields = FormationRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__31_0 = (struct System_Func_RecommendSupportQuestEntity__bool__o *)_9__31_0;
        sub_1BCA784(&static_fields->__9__31_0, _9__31_0);
      }
      recommendSupportSelectBtn = (UnityEngine_Component_o *)BasicHelper__Any_object__49274176(
                                                               List,
                                                               (System_Func_T__bool__o *)_9__31_0,
                                                               (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_RecommendSupportQuestEntity___);
      v24 = this->fields.recommendSupportSelectBtn;
      if ( v24 )
      {
        v25 = (char)recommendSupportSelectBtn;
        ((void (__fastcall *)(struct UIButton_o *, _QWORD, Il2CppMethodPointer))v24->klass->vtable._5_set_isEnabled.method)(
          this->fields.recommendSupportSelectBtn,
          (unsigned __int8)recommendSupportSelectBtn & 1,
          v24->klass->vtable._6_OnInit.methodPtr);
        recommendSupportSelectBtn = (UnityEngine_Component_o *)this->fields.recommendSupportButtonMaskLabel;
        if ( recommendSupportSelectBtn )
        {
          recommendSupportSelectBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                   recommendSupportSelectBtn,
                                                                   0LL);
          if ( recommendSupportSelectBtn )
          {
            v26 = v25 ^ 1;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)recommendSupportSelectBtn, v26 & 1, 0LL);
            recommendSupportSelectBtn = (UnityEngine_Component_o *)this->fields.recommendSupportPreparationLabel;
            if ( recommendSupportSelectBtn )
            {
              recommendSupportSelectBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                       recommendSupportSelectBtn,
                                                                       0LL);
              if ( recommendSupportSelectBtn )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)recommendSupportSelectBtn, v26 & 1, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_22:
    sub_1BCAA3C(recommendSupportSelectBtn, method);
  }
}


void __fastcall FormationRootComponent__SetupStandServant(
        FormationRootComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  struct UserServantEntity_array *mStandSvtDatas; // x8
  int max_length; // w10
  int v19; // w9
  int32_t mStandSvtIdx; // w11
  int32_t v21; // w11
  UserServantEntity_o *v22; // x21
  StandFigureSlideComponent_o *mStandServant; // x22
  System_Action_o *v24; // x23
  struct StandFigureSlideComponent_o *v25; // x19
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Action_o *v29; // x21

  if ( (byte_4B113E7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, end_act, method);
    sub_1BCA7E0(&Method_FormationRootComponent___c__DisplayClass38_0__SetupStandServant_b__0__, v6, v7);
    sub_1BCA7E0(&Method_FormationRootComponent___c__DisplayClass38_0__SetupStandServant_b__1__, v8, v9);
    sub_1BCA7E0(&FormationRootComponent___c__DisplayClass38_0_TypeInfo, v10, v11);
    byte_4B113E7 = 1;
  }
  v12 = (Il2CppObject *)sub_1BCAA2C(FormationRootComponent___c__DisplayClass38_0_TypeInfo, end_act, method, v3);
  System_Object___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_18;
  v12[1].klass = (Il2CppClass *)this;
  sub_1BCA784(&v12[1], this);
  v12[1].monitor = end_act;
  v13 = sub_1BCA784(&v12[1].monitor, end_act);
  mStandSvtDatas = this->fields.mStandSvtDatas;
  if ( !mStandSvtDatas )
    goto LABEL_18;
  max_length = mStandSvtDatas->max_length;
  if ( max_length < 1 )
  {
LABEL_13:
    v22 = 0LL;
  }
  else
  {
    v19 = 0;
    while ( 1 )
    {
      mStandSvtIdx = this->fields.mStandSvtIdx;
      v21 = mStandSvtIdx + 1 < max_length ? mStandSvtIdx + 1 : 0;
      this->fields.mStandSvtIdx = v21;
      if ( v21 >= (unsigned int)max_length )
        sub_1BCAA44(v13, v14);
      v22 = mStandSvtDatas->m_Items[v21];
      if ( v22 )
        break;
      max_length = mStandSvtDatas->max_length;
      if ( ++v19 >= max_length )
        goto LABEL_13;
    }
  }
  mStandServant = this->fields.mStandServant;
  v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v14, v15, v16);
  System_Action___ctor(v24, v12, Method_FormationRootComponent___c__DisplayClass38_0__SetupStandServant_b__0__, 0LL);
  if ( !mStandServant
    || (StandFigureSlideComponent__Setup(mStandServant, v22, 0, v24, 0LL),
        v25 = this->fields.mStandServant,
        v29 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v26, v27, v28),
        System_Action___ctor(
          v29,
          v12,
          (intptr_t)Method_FormationRootComponent___c__DisplayClass38_0__SetupStandServant_b__1__,
          0LL),
        !v25) )
  {
LABEL_18:
    sub_1BCAA3C(v13, v14);
  }
  v25->fields.mBtnAct = v29;
  sub_1BCA784(&v25->fields.mBtnAct, v29);
}


void __fastcall FormationRootComponent___FeatureRelease_b__30_0(
        FormationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UISprite_o *recommendSupportSelectBtnSprite; // x19

  if ( (byte_4B113EC & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_20523/*"img_form_menu08"*/, v4, v5);
    byte_4B113EC = 1;
  }
  recommendSupportSelectBtnSprite = this->fields.recommendSupportSelectBtnSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
  AtlasManager__SetPartyOrganizationImage(recommendSupportSelectBtnSprite, (System_String_o *)StringLiteral_20523/*"img_form_menu08"*/, 0LL);
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
    sub_1BCAA3C(titleInfo, method);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)titleInfo, 0, 0LL);
}


void __fastcall FormationRootComponent___Init_b__37_3(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v13; // x1
  CommonUI_o *v14; // x20

  if ( (byte_4B113ED & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v8, v9);
    sub_1BCA7E0(&StringLiteral_7061/*"GO_NEXT"*/, v10, v11);
    byte_4B113ED = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  if ( !PartyOrganizationUtility__ExistsTemporaryPartyInfo(Instance, 0LL) )
  {
    Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v13);
    if ( v14 )
    {
      CommonUI__maskFadein(v14, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
      goto LABEL_11;
    }
LABEL_13:
    sub_1BCAA3C(Instance, v13);
  }
  Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 40, 1, 0LL, 0LL);
LABEL_11:
  Instance = (PartyOrganizationUtility_o *)this->fields.myFSM;
  if ( !Instance )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_7061/*"GO_NEXT"*/, 0LL);
}


void __fastcall FormationRootComponent__beginFinish(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *backSkinSprite; // x0
  __int64 v7; // x1

  if ( (byte_4B113E5 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v4, v5);
    byte_4B113E5 = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 0, 0LL),
        (backSkinSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(backSkinSprite, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)backSkinSprite, 2, 0, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v7);
  AtlasManager__ReleasePartyOrganizationAtlas(0LL);
}


void __fastcall FormationRootComponent__beginInitialize(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B113E3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B113E3 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 3, 30, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall FormationRootComponent__beginStartUp(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  System_String_o *MainBgmName; // x20
  __int64 v14; // x1
  TitleInfoControl_o *titleInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Action_o *v20; // x20
  __int64 v21; // x1

  if ( (byte_4B113E4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&BgmManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_FormationRootComponent_EndLoadCommonBg__, v8, v9);
    sub_1BCA7E0(&SoundManager_TypeInfo, v10, v11);
    byte_4B113E4 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v12);
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
    sub_1BCAA3C(titleInfo, v14);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  v20 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v18, v19);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_FormationRootComponent_EndLoadCommonBg__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v21);
  AtlasManager__LoadUISkin(v20, 2, 1, 0LL);
}


void __fastcall FormationRootComponent__closeArrowMark(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B113E8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B113E8 = 1;
  }
  if ( this->fields.isTutorial1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_10;
    CommonUI__CloseTutorialNotificationDialogArrow((CommonUI_o *)Instance, 0LL);
  }
  if ( this->fields.isTutorial2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, 0LL, 0LL);
      return;
    }
LABEL_10:
    sub_1BCAA3C(Instance, v5);
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

  if ( (byte_4B113E9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_UIScrollView___, *(_QWORD *)&type, method);
    byte_4B113E9 = 1;
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
          topDispRootObj = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentInChildren_object__49322392(
                                                         (UnityEngine_Component_o *)topDispRootObj,
                                                         (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_UIScrollView___);
          if ( topDispRootObj )
          {
            UIScrollView__ResetPosition((UIScrollView_o *)topDispRootObj, 0LL);
            return;
          }
        }
      }
    }
LABEL_13:
    sub_1BCAA3C(topDispRootObj, v5);
  }
}


void __fastcall FormationRootComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B113EE & 1) == 0 )
  {
    sub_1BCA7E0(&FormationRootComponent___c_TypeInfo, v1, v2);
    byte_4B113EE = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(FormationRootComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  FormationRootComponent___c_TypeInfo->static_fields->__9 = (struct FormationRootComponent___c_o *)v4;
  sub_1BCA784(FormationRootComponent___c_TypeInfo->static_fields, v4);
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

  if ( (byte_4B113EF & 1) == 0 )
  {
    this = (FormationRootComponent___c_o *)sub_1BCA7E0(&CondType_TypeInfo, entity, method);
    byte_4B113EF = 1;
  }
  if ( !entity )
    sub_1BCAA3C(this, entity);
  questId = entity->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, entity);
  return CondType__IsQuestClear_38310172(questId, -1, 0, 0LL);
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
    sub_1BCAA3C(this, method);
  }
  StandFigureSlideComponent__SlideIn((StandFigureSlideComponent_o *)this, 0LL, 0LL);
  ActionExtensions__Call(v3->fields.end_act, 0LL);
}


void __fastcall FormationRootComponent___c__DisplayClass38_0___SetupStandServant_b__1(
        FormationRootComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  StandFigureSlideComponent_o *_38402052; // x0
  __int64 v11; // x1
  struct FormationRootComponent_o *_4__this; // x8
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  __int64 v15; // x2
  __int64 v16; // x3
  struct FormationRootComponent_o *v17; // x8
  StandFigureSlideComponent_o *mStandServant; // x20
  System_Action_o *_9__2; // x21

  if ( (byte_4B113F0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_FormationRootComponent___c__DisplayClass38_0__SetupStandServant_b__1__, v6, v7);
    sub_1BCA7E0(&Method_FormationRootComponent___c__DisplayClass38_0__SetupStandServant_b__2__, v8, v9);
    byte_4B113F0 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
  _38402052 = (StandFigureSlideComponent_o *)TutorialFlag__Get_38402052(102, 0LL);
  if ( ((unsigned __int8)_38402052 & 1) != 0 )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      _38402052 = _4__this->fields.mStandServant;
      if ( _38402052 )
      {
        if ( _38402052->fields.mIsLoading || StandFigureSlideComponent__IsMoving(_38402052, 0LL) )
          return;
        v13 = Method_FormationRootComponent___c__DisplayClass38_0__SetupStandServant_b__1__;
        if ( (*((_BYTE *)Method_FormationRootComponent___c__DisplayClass38_0__SetupStandServant_b__1__ + 83) & 2) != 0 )
          v13 = (_QWORD *)sub_1BCA7F8(Method_FormationRootComponent___c__DisplayClass38_0__SetupStandServant_b__1__);
        v14 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v13, v13[4]);
        OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
        v17 = this->fields.__4__this;
        if ( v17 )
        {
          mStandServant = v17->fields.mStandServant;
          _9__2 = this->fields.__9__2;
          if ( !_9__2 )
          {
            _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v15, v16);
            System_Action___ctor(
              _9__2,
              (Il2CppObject *)this,
              Method_FormationRootComponent___c__DisplayClass38_0__SetupStandServant_b__2__,
              0LL);
            this->fields.__9__2 = _9__2;
            _38402052 = (StandFigureSlideComponent_o *)sub_1BCA784(&this->fields.__9__2, _9__2);
          }
          if ( mStandServant )
          {
            StandFigureSlideComponent__SlideOut(mStandServant, _9__2, 0, 0LL);
            return;
          }
        }
      }
    }
    sub_1BCAA3C(_38402052, v11);
  }
}


void __fastcall FormationRootComponent___c__DisplayClass38_0___SetupStandServant_b__2(
        FormationRootComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FormationRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  FormationRootComponent__SetupStandServant(_4__this, 0LL, v2);
}