void __fastcall FormationRootComponent___ctor(FormationRootComponent_o *this, const MethodInfo *method)
{
  this->fields.TUTORIAL_FORMATION_ARROW_POS = (struct UnityEngine_Vector2_o)0x4316000042280000LL;
  this->fields.TUTORIAL_FORMATION_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BE1B10;
  this->fields.TUTORIAL_FORMATION_MESSAGE_POS = (struct UnityEngine_Vector2_o)0xC220000000000000LL;
  this->fields.TUTORIAL_BACK_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BE2AE0;
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
    sub_1BCB254(backSkinSprite, method);
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

  if ( (byte_4B17186 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&AtlasManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_FormationRootComponent__FeatureRelease_b__34_0__, v4);
    byte_4B17186 = 1;
  }
  grid = (UnityEngine_Component_o *)this->fields.grid;
  if ( !grid
    || (grid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(grid, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)grid, 1, 0LL),
        (grid = (UnityEngine_Component_o *)this->fields.grid) == 0LL)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)grid, 1, 0LL), (v6 = this->fields.grid) == 0LL) )
  {
    sub_1BCB254(grid, method);
  }
  v6->fields.hideInactive = 1;
  v7 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_FormationRootComponent__FeatureRelease_b__34_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v7, 1, 0LL);
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
  const MethodInfo *v20; // x1
  bool _39617644; // w20
  CommonUI_o *v22; // x20
  FormationRootComponent___c_c *v23; // x8
  System_Action_o *_9__42_0; // x21
  Il2CppObject *v25; // x22
  struct FormationRootComponent___c_StaticFields *static_fields; // x0
  UnityEngine_Vector2_o TutorialBackArrowPos; // kr00_8
  float v28; // s0
  float v29; // s10
  float v30; // s15
  float v31; // s11
  float v32; // s12
  float v33; // s13
  float v34; // s14
  Il2CppObject *v35; // x21
  System_Action_o *v36; // x20
  float x; // s14
  float OffsetX; // s0
  float m_XMin; // s15
  float m_Width; // s10
  float m_Height; // s11
  float v42; // s12
  float v43; // s13
  Il2CppObject *Instance; // x20
  float v45; // s8
  float v46; // s9
  System_String_o *v47; // x21
  FormationRootComponent___c_c *v48; // x8
  System_Action_o *_9__42_1; // x22
  Il2CppObject *v50; // x23
  struct FormationRootComponent___c_StaticFields *v51; // x0
  Il2CppObject *MasterData_object; // x20
  struct UserServantEntity_array *UserServantListFromDeckReaveHeroine; // x0
  System_Action_o *v54; // x20
  const MethodInfo *v55; // x2
  float m_YMin; // [xsp+58h] [xbp-48h]
  float y; // [xsp+5Ch] [xbp-44h]
  UnityEngine_Vector2_o v58; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v59; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v60; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4
  UnityEngine_Rect_o v61; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4B1718C & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserDeckMaster___, v3);
    sub_1BCAFF8(&FSUtility_TypeInfo, v4);
    sub_1BCAFF8(&Method_FormationRootComponent__Init_b__42_2__, v5);
    sub_1BCAFF8(&Method_FormationRootComponent__Init_b__42_3__, v6);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___, v7);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BCAFF8(&TutorialFlag_TypeInfo, v11);
    sub_1BCAFF8(&Method_FormationRootComponent___c__Init_b__42_0__, v12);
    sub_1BCAFF8(&Method_FormationRootComponent___c__Init_b__42_1__, v13);
    sub_1BCAFF8(&FormationRootComponent___c_TypeInfo, v14);
    sub_1BCAFF8(&StringLiteral_13477/*"TUTORIAL_MESSAGE_FORMATION1"*/, v15);
    byte_4B1718C = 1;
  }
  titleInfo = (__int64)this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_66;
  TitleInfoControl__changeTitleInfo_39038344((TitleInfoControl_o *)titleInfo, 1, 18, 0, 0LL);
  FormationRootComponent__setMainActive(this, 0, v17);
  titleInfo = (__int64)this->fields.titleInfo;
  *(_WORD *)&this->fields.isTutorial1 = 0;
  if ( !titleInfo )
    goto LABEL_66;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)titleInfo, 1, 0LL);
  FormationRootComponent__FeatureRelease(this, v18);
  FormationRootComponent__ProgressRelease(this, v19);
  FormationRootComponent__ProgressReleaseForGrand(this, v20);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _39617644 = TutorialFlag__Get_39617644(102, 0LL);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( _39617644 )
  {
    if ( !TutorialFlag__Get_39617644(109, 0LL) )
    {
      titleInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v22 = (CommonUI_o *)titleInfo;
      v23 = FormationRootComponent___c_TypeInfo;
      if ( !FormationRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo);
        v23 = FormationRootComponent___c_TypeInfo;
      }
      _9__42_0 = v23->static_fields->__9__42_0;
      if ( !_9__42_0 )
      {
        if ( !v23->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v23);
          v23 = FormationRootComponent___c_TypeInfo;
        }
        v25 = (Il2CppObject *)v23->static_fields->__9;
        _9__42_0 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
        System_Action___ctor(_9__42_0, v25, Method_FormationRootComponent___c__Init_b__42_0__, 0LL);
        static_fields = FormationRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__42_0 = _9__42_0;
        titleInfo = sub_1BCAF9C(&static_fields->__9__42_0);
      }
      if ( v22 )
      {
        CommonUI__OpenTutorialImageDialog_30789656(v22, 3, 109, _9__42_0, 0LL, 0LL, 0LL);
        goto LABEL_58;
      }
LABEL_66:
      sub_1BCB254(titleInfo, method);
    }
  }
  else if ( TutorialFlag__IsProgressDone(2, 0LL) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_39617644(101, 0LL) )
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
                                                     (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
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
                                v42 = OffsetX;
                                m_YMin = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin;
                                v43 = FSUtility__GetOffsetX(68.0, 0, 0LL);
                                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                titleInfo = (__int64)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_13477/*"TUTORIAL_MESSAGE_FORMATION1"*/,
                                                       0LL);
                                v45 = this->fields.TUTORIAL_FORMATION_MESSAGE_POS.fields.x;
                                v46 = this->fields.TUTORIAL_FORMATION_MESSAGE_POS.fields.y;
                                v47 = (System_String_o *)titleInfo;
                                v48 = FormationRootComponent___c_TypeInfo;
                                if ( !FormationRootComponent___c_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo);
                                  v48 = FormationRootComponent___c_TypeInfo;
                                }
                                _9__42_1 = v48->static_fields->__9__42_1;
                                if ( !_9__42_1 )
                                {
                                  if ( !v48->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(v48);
                                    v48 = FormationRootComponent___c_TypeInfo;
                                  }
                                  v50 = (Il2CppObject *)v48->static_fields->__9;
                                  _9__42_1 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
                                  System_Action___ctor(
                                    _9__42_1,
                                    v50,
                                    Method_FormationRootComponent___c__Init_b__42_1__,
                                    0LL);
                                  v51 = FormationRootComponent___c_TypeInfo->static_fields;
                                  v51->__9__42_1 = _9__42_1;
                                  titleInfo = sub_1BCAF9C(&v51->__9__42_1);
                                }
                                if ( Instance )
                                {
                                  v60.fields.m_YMin = m_YMin;
                                  v59.fields.y = y;
                                  v59.fields.x = x + v42;
                                  v60.fields.m_XMin = m_XMin + v43;
                                  v60.fields.m_Width = m_Width;
                                  v60.fields.m_Height = m_Height;
                                  CommonUI__OpenTutorialNotificationDialogArrow(
                                    (CommonUI_o *)Instance,
                                    v47,
                                    v59,
                                    v60,
                                    90.0,
                                    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(v46), LODWORD(v45)),
                                    -1,
                                    _9__42_1,
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
        titleInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( titleInfo )
        {
          TutorialBackArrowPos = CommonUI__GetTutorialBackArrowPos((CommonUI_o *)titleInfo, 0LL);
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
          v28 = FSUtility__GetOffsetX(68.0, 0, 0LL);
          v30 = this->fields.TUTORIAL_BACK_ARROW_RECT.fields.m_XMin;
          v29 = this->fields.TUTORIAL_BACK_ARROW_RECT.fields.m_YMin;
          v31 = this->fields.TUTORIAL_BACK_ARROW_RECT.fields.m_Width;
          v32 = this->fields.TUTORIAL_BACK_ARROW_RECT.fields.m_Height;
          v33 = v28;
          v34 = FSUtility__GetOffsetX(68.0, 0, 0LL);
          v35 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v36 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
          System_Action___ctor(v36, (Il2CppObject *)this, Method_FormationRootComponent__Init_b__42_2__, 0LL);
          if ( v35 )
          {
            v61.fields.m_XMin = v30 - v34;
            v58.fields.x = TutorialBackArrowPos.fields.x - v33;
            v58.fields.y = TutorialBackArrowPos.fields.y;
            v61.fields.m_YMin = v29;
            v61.fields.m_Width = v31;
            v61.fields.m_Height = v32;
            CommonUI__OpenTutorialArrowMark((CommonUI_o *)v35, v58, 180.0, v61, v36, 0LL);
            goto LABEL_58;
          }
        }
        goto LABEL_66;
      }
    }
  }
LABEL_58:
  titleInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !titleInfo )
    goto LABEL_66;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)titleInfo,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  titleInfo = TutorialFlag__Get_39617644(126, 0LL);
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
  sub_1BCAF9C(&this->fields.mStandSvtDatas);
  this->fields.mStandSvtIdx = -1;
  v54 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v54, (Il2CppObject *)this, Method_FormationRootComponent__Init_b__42_3__, 0LL);
  FormationRootComponent__SetupStandServant(this, v54, v55);
}


void __fastcall FormationRootComponent__OnClickBack(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  System_String_o **v5; // x8

  if ( (byte_4B17190 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_3404/*"CLICK_BACK"*/, method);
    sub_1BCAFF8(&StringLiteral_3456/*"CLICK_TERMINAL"*/, v3);
    byte_4B17190 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1BCB254(0LL, method);
  if ( this->fields.type == 1 )
    v5 = (System_String_o **)&StringLiteral_3404/*"CLICK_BACK"*/;
  else
    v5 = (System_String_o **)&StringLiteral_3456/*"CLICK_TERMINAL"*/;
  TitleInfoControl__sendEvent(titleInfo, *v5, 0LL);
}


void __fastcall FormationRootComponent__OnClickButtonMask(FormationRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4B17191 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_FormationRootComponent_OnClickButtonMask__, method);
    byte_4B17191 = 1;
  }
  v2 = Method_FormationRootComponent_OnClickButtonMask__;
  if ( (*((_BYTE *)Method_FormationRootComponent_OnClickButtonMask__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1BCB010(Method_FormationRootComponent_OnClickButtonMask__);
  v3 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 2, 0, 0LL);
}


void __fastcall FormationRootComponent__OnClickGrandSvtList(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B17192 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_FormationRootComponent_OnClickGrandSvtList__, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4B17192 = 1;
  }
  v3 = Method_FormationRootComponent_OnClickGrandSvtList__;
  if ( (*((_BYTE *)Method_FormationRootComponent_OnClickGrandSvtList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BCB010(Method_FormationRootComponent_OnClickGrandSvtList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v6);
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 43, 1, 0LL, 0LL);
}


void __fastcall FormationRootComponent__OnClickHelpBtn(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ICollection_o *ClearWarIdList; // x19
  BalanceConfig_c *v10; // x0
  int32_t v11; // w19
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  FormationRootComponent___c_c *v16; // x8
  CommonUI_o *v17; // x20
  System_Action_o *_9__49_0; // x21
  Il2CppObject *v19; // x22
  struct FormationRootComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4B17193 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&BalanceConfig_TypeInfo, v2);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Contains_int___, v3);
    sub_1BCAFF8(&Method_FormationRootComponent_OnClickHelpBtn__, v4);
    sub_1BCAFF8(&ServantCommentManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BCAFF8(&Method_FormationRootComponent___c__OnClickHelpBtn_b__49_0__, v7);
    sub_1BCAFF8(&FormationRootComponent___c_TypeInfo, v8);
    byte_4B17193 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ClearWarIdList = (System_Collections_ICollection_o *)ServantCommentManager__GetClearWarIdList(0LL);
  if ( BasicHelper__IsNullOrEmpty(ClearWarIdList, 0LL) )
    goto LABEL_10;
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  if ( !System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)ClearWarIdList,
          v10->static_fields->OrdealCallWarId,
          (const MethodInfo_3033A7C *)Method_System_Linq_Enumerable_Contains_int___) )
LABEL_10:
    v11 = 3;
  else
    v11 = 102;
  v12 = Method_FormationRootComponent_OnClickHelpBtn__;
  if ( (*((_BYTE *)Method_FormationRootComponent_OnClickHelpBtn__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1BCB010(Method_FormationRootComponent_OnClickHelpBtn__);
  v13 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = FormationRootComponent___c_TypeInfo;
  v17 = (CommonUI_o *)Instance;
  if ( !FormationRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo);
    v16 = FormationRootComponent___c_TypeInfo;
  }
  _9__49_0 = v16->static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = FormationRootComponent___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__49_0 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(_9__49_0, v19, Method_FormationRootComponent___c__OnClickHelpBtn_b__49_0__, 0LL);
    static_fields = FormationRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = _9__49_0;
    Instance = (Il2CppObject *)sub_1BCAF9C(&static_fields->__9__49_0);
  }
  if ( !v17 )
    sub_1BCB254(Instance, v15);
  CommonUI__OpenTutorialImageDialog_30789656(v17, v11, -1, _9__49_0, 0LL, 0LL, 0LL);
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
  System_Func_object__bool__o *_9__35_0; // x21
  Il2CppObject *v12; // x22
  struct FormationRootComponent___c_StaticFields *static_fields; // x0
  struct UIButton_o *v14; // x8
  char v15; // w20
  char v16; // w20

  if ( (byte_4B17187 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_Any_RecommendSupportQuestEntity___, method);
    sub_1BCAFF8(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___, v3);
    sub_1BCAFF8(&DataManager_TypeInfo, v4);
    sub_1BCAFF8(&System_Func_RecommendSupportQuestEntity__bool__TypeInfo, v5);
    sub_1BCAFF8(&Method_FormationRootComponent___c__ProgressRelease_b__35_0__, v6);
    sub_1BCAFF8(&FormationRootComponent___c_TypeInfo, v7);
    byte_4B17187 = 1;
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
    recommendSupportSelectBtn = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
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
      _9__35_0 = (System_Func_object__bool__o *)v10->static_fields->__9__35_0;
      if ( !_9__35_0 )
      {
        if ( !v10->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v10);
          v10 = FormationRootComponent___c_TypeInfo;
        }
        v12 = (Il2CppObject *)v10->static_fields->__9;
        _9__35_0 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_RecommendSupportQuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__35_0,
          v12,
          Method_FormationRootComponent___c__ProgressRelease_b__35_0__,
          0LL);
        static_fields = FormationRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__35_0 = (struct System_Func_RecommendSupportQuestEntity__bool__o *)_9__35_0;
        sub_1BCAF9C(&static_fields->__9__35_0);
      }
      recommendSupportSelectBtn = (UnityEngine_Component_o *)BasicHelper__Any_object__50347976(
                                                               List,
                                                               (System_Func_T__bool__o *)_9__35_0,
                                                               (const MethodInfo_3003FC8 *)Method_BasicHelper_Any_RecommendSupportQuestEntity___);
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
    sub_1BCB254(recommendSupportSelectBtn, method);
  }
}


void __fastcall FormationRootComponent__ProgressReleaseForGrand(
        FormationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *IsTargetQuestClear; // x0
  __int64 v7; // x1
  UILabel_o *grandSvtListButtonMaskLabel; // x20
  System_String_c *klass; // x8
  UILabel_o *grandSvtListPreparationLabel; // x20

  if ( (byte_4B17188 & 1) == 0 )
  {
    sub_1BCAFF8(&ClassBoardUtility_TypeInfo, method);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v3);
    sub_1BCAFF8(&StringLiteral_3577/*"COMBINE_PREPARATION"*/, v4);
    sub_1BCAFF8(&StringLiteral_3536/*"COMBINE_CLASS_BOARD_CLOSED_MESSAGE"*/, v5);
    byte_4B17188 = 1;
  }
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  IsTargetQuestClear = (System_String_o *)ClassBoardUtility__IsTargetQuestClear(0LL);
  grandSvtListButtonMaskLabel = this->fields.grandSvtListButtonMaskLabel;
  if ( ((unsigned __int8)IsTargetQuestClear & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsTargetQuestClear = LocalizationManager__Get((System_String_o *)StringLiteral_3536/*"COMBINE_CLASS_BOARD_CLOSED_MESSAGE"*/, 0LL);
    if ( grandSvtListButtonMaskLabel )
    {
      UILabel__set_text(grandSvtListButtonMaskLabel, IsTargetQuestClear, 0LL);
      grandSvtListPreparationLabel = this->fields.grandSvtListPreparationLabel;
      IsTargetQuestClear = LocalizationManager__Get((System_String_o *)StringLiteral_3577/*"COMBINE_PREPARATION"*/, 0LL);
      if ( grandSvtListPreparationLabel )
      {
        UILabel__set_text(grandSvtListPreparationLabel, IsTargetQuestClear, 0LL);
        IsTargetQuestClear = (System_String_o *)this->fields.grandSvtListButtonMaskLabel;
        if ( IsTargetQuestClear )
        {
          IsTargetQuestClear = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)IsTargetQuestClear,
                                                    0LL);
          if ( IsTargetQuestClear )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsTargetQuestClear, 1, 0LL);
            IsTargetQuestClear = (System_String_o *)this->fields.grandSvtListPreparationLabel;
            if ( IsTargetQuestClear )
            {
              IsTargetQuestClear = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)IsTargetQuestClear,
                                                        0LL);
              if ( IsTargetQuestClear )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsTargetQuestClear, 1, 0LL);
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
    sub_1BCB254(IsTargetQuestClear, v7);
  }
  if ( !grandSvtListButtonMaskLabel )
    goto LABEL_23;
  IsTargetQuestClear = (System_String_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)this->fields.grandSvtListButtonMaskLabel,
                                            0LL);
  if ( !IsTargetQuestClear )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsTargetQuestClear, 0, 0LL);
  IsTargetQuestClear = (System_String_o *)this->fields.grandSvtListPreparationLabel;
  if ( !IsTargetQuestClear )
    goto LABEL_23;
  IsTargetQuestClear = (System_String_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)IsTargetQuestClear,
                                            0LL);
  if ( !IsTargetQuestClear )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsTargetQuestClear, 0, 0LL);
  IsTargetQuestClear = (System_String_o *)this->fields.grandSvtListBtn;
  if ( !IsTargetQuestClear )
    goto LABEL_23;
  klass = IsTargetQuestClear->klass;
LABEL_22:
  ((void (*)(void))klass->vtable._14_System_IConvertible_ToInt16.method)();
}


void __fastcall FormationRootComponent__SetupStandServant(
        FormationRootComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct UserServantEntity_array *mStandSvtDatas; // x8
  int max_length; // w10
  int v14; // w9
  int32_t mStandSvtIdx; // w11
  int32_t v16; // w11
  UserServantEntity_o *v17; // x21
  StandFigureSlideComponent_o *mStandServant; // x22
  System_Action_o *v19; // x23
  struct StandFigureSlideComponent_o *v20; // x19
  System_Action_o *v21; // x21

  if ( (byte_4B1718D & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, end_act);
    sub_1BCAFF8(&Method_FormationRootComponent___c__DisplayClass43_0__SetupStandServant_b__0__, v5);
    sub_1BCAFF8(&Method_FormationRootComponent___c__DisplayClass43_0__SetupStandServant_b__1__, v6);
    sub_1BCAFF8(&FormationRootComponent___c__DisplayClass43_0_TypeInfo, v7);
    byte_4B1718D = 1;
  }
  v8 = (Il2CppObject *)sub_1BCB244(FormationRootComponent___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_18;
  v8[1].klass = (Il2CppClass *)this;
  sub_1BCAF9C(&v8[1]);
  v8[1].monitor = end_act;
  v9 = sub_1BCAF9C(&v8[1].monitor);
  mStandSvtDatas = this->fields.mStandSvtDatas;
  if ( !mStandSvtDatas )
    goto LABEL_18;
  max_length = mStandSvtDatas->max_length;
  if ( max_length < 1 )
  {
LABEL_13:
    v17 = 0LL;
  }
  else
  {
    v14 = 0;
    while ( 1 )
    {
      mStandSvtIdx = this->fields.mStandSvtIdx;
      v16 = mStandSvtIdx + 1 < max_length ? mStandSvtIdx + 1 : 0;
      this->fields.mStandSvtIdx = v16;
      if ( v16 >= (unsigned int)max_length )
        sub_1BCB25C(v9, v10, v11);
      v17 = mStandSvtDatas->m_Items[v16];
      if ( v17 )
        break;
      max_length = mStandSvtDatas->max_length;
      if ( ++v14 >= max_length )
        goto LABEL_13;
    }
  }
  mStandServant = this->fields.mStandServant;
  v19 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v19, v8, Method_FormationRootComponent___c__DisplayClass43_0__SetupStandServant_b__0__, 0LL);
  if ( !mStandServant
    || (StandFigureSlideComponent__Setup(mStandServant, v17, 0, v19, 0LL),
        v20 = this->fields.mStandServant,
        v21 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
        System_Action___ctor(
          v21,
          v8,
          (intptr_t)Method_FormationRootComponent___c__DisplayClass43_0__SetupStandServant_b__1__,
          0LL),
        !v20) )
  {
LABEL_18:
    sub_1BCB254(v9, v10);
  }
  v20->fields.mBtnAct = v21;
  sub_1BCAF9C(&v20->fields.mBtnAct);
}


void __fastcall FormationRootComponent___FeatureRelease_b__34_0(
        FormationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UISprite_o *recommendSupportSelectBtnSprite; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  UnityEngine_Component_o *grandSvtListBtn; // x8
  char v9; // w19

  if ( (byte_4B17194 & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_20207/*"img_form_menu08"*/, v3);
    sub_1BCAFF8(&StringLiteral_20208/*"img_form_menu09"*/, v4);
    byte_4B17194 = 1;
  }
  recommendSupportSelectBtnSprite = this->fields.recommendSupportSelectBtnSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(recommendSupportSelectBtnSprite, (System_String_o *)StringLiteral_20207/*"img_form_menu08"*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetPartyOrganizationImage(
                                             this->fields.grandSvtListBtnSprite,
                                             (System_String_o *)StringLiteral_20208/*"img_form_menu09"*/,
                                             0LL);
  grandSvtListBtn = (UnityEngine_Component_o *)this->fields.grandSvtListBtn;
  if ( !grandSvtListBtn
    || (v9 = (char)gameObject, (gameObject = UnityEngine_Component__get_gameObject(grandSvtListBtn, 0LL)) == 0LL) )
  {
    sub_1BCB254(gameObject, v7);
  }
  UnityEngine_GameObject__SetActive(gameObject, v9 & 1, 0LL);
}


void __fastcall FormationRootComponent___Init_b__42_2(FormationRootComponent_o *this, const MethodInfo *method)
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
    sub_1BCB254(titleInfo, method);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)titleInfo, 0, 0LL);
}


void __fastcall FormationRootComponent___Init_b__42_3(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v8; // x1
  CommonUI_o *v9; // x20

  if ( (byte_4B17195 & 1) == 0 )
  {
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_1BCAFF8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v5);
    sub_1BCAFF8(&StringLiteral_6926/*"GO_NEXT"*/, v6);
    byte_4B17195 = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  if ( !PartyOrganizationUtility__ExistsTemporaryPartyInfo(Instance, 0LL) )
  {
    Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( v9 )
    {
      CommonUI__maskFadein(v9, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
      goto LABEL_11;
    }
LABEL_13:
    sub_1BCB254(Instance, v8);
  }
  Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 40, 1, 0LL, 0LL);
LABEL_11:
  Instance = (PartyOrganizationUtility_o *)this->fields.myFSM;
  if ( !Instance )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6926/*"GO_NEXT"*/, 0LL);
}


void __fastcall FormationRootComponent__beginFinish(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *backSkinSprite; // x0

  if ( (byte_4B1718B & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v3);
    byte_4B1718B = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 0, 0LL),
        (backSkinSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
    sub_1BCB254(backSkinSprite, method);
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

  if ( (byte_4B17189 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B17189 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 3, 30, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v4);
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

  if ( (byte_4B1718A & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&AtlasManager_TypeInfo, v3);
    sub_1BCAFF8(&BgmManager_TypeInfo, v4);
    sub_1BCAFF8(&Method_FormationRootComponent_EndLoadCommonBg__, v5);
    sub_1BCAFF8(&SoundManager_TypeInfo, v6);
    byte_4B1718A = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0, 0LL);
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
    sub_1BCB254(titleInfo, v8);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  v11 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_FormationRootComponent_EndLoadCommonBg__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v11, 2, 1, 0LL);
}


void __fastcall FormationRootComponent__closeArrowMark(FormationRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B1718E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B1718E = 1;
  }
  if ( this->fields.isTutorial1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_10;
    CommonUI__CloseTutorialNotificationDialogArrow((CommonUI_o *)Instance, 0LL);
  }
  if ( this->fields.isTutorial2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, 0LL, 0LL);
      return;
    }
LABEL_10:
    sub_1BCB254(Instance, v4);
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

  if ( (byte_4B1718F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponentInChildren_UIScrollView___, *(_QWORD *)&type);
    byte_4B1718F = 1;
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
          topDispRootObj = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentInChildren_object__50402520(
                                                         (UnityEngine_Component_o *)topDispRootObj,
                                                         (const MethodInfo_30114D8 *)Method_UnityEngine_Component_GetComponentInChildren_UIScrollView___);
          if ( topDispRootObj )
          {
            UIScrollView__ResetPosition((UIScrollView_o *)topDispRootObj, 0LL);
            return;
          }
        }
      }
    }
LABEL_13:
    sub_1BCB254(topDispRootObj, v5);
  }
}


void __fastcall FormationRootComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4B17196 & 1) == 0 )
  {
    sub_1BCAFF8(&FormationRootComponent___c_TypeInfo, v1);
    byte_4B17196 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(FormationRootComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FormationRootComponent___c_TypeInfo->static_fields->__9 = (struct FormationRootComponent___c_o *)v2;
  sub_1BCAF9C(FormationRootComponent___c_TypeInfo->static_fields);
}


void __fastcall FormationRootComponent___c___ctor(FormationRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FormationRootComponent___c___Init_b__42_0(FormationRootComponent___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall FormationRootComponent___c___Init_b__42_1(FormationRootComponent___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall FormationRootComponent___c___OnClickHelpBtn_b__49_0(
        FormationRootComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


bool __fastcall FormationRootComponent___c___ProgressRelease_b__35_0(
        FormationRootComponent___c_o *this,
        RecommendSupportQuestEntity_o *entity,
        const MethodInfo *method)
{
  int32_t questId; // w19

  if ( (byte_4B17197 & 1) == 0 )
  {
    this = (FormationRootComponent___c_o *)sub_1BCAFF8(&CondType_TypeInfo, entity);
    byte_4B17197 = 1;
  }
  if ( !entity )
    sub_1BCB254(this, entity);
  questId = entity->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_39516796(questId, -1, 0, 0LL);
}


void __fastcall FormationRootComponent___c__DisplayClass43_0___ctor(
        FormationRootComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FormationRootComponent___c__DisplayClass43_0___SetupStandServant_b__0(
        FormationRootComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  struct FormationRootComponent_o *_4__this; // x8
  FormationRootComponent___c__DisplayClass43_0_o *v3; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (FormationRootComponent___c__DisplayClass43_0_o *)_4__this->fields.mStandServant) == 0LL) )
  {
    sub_1BCB254(this, method);
  }
  StandFigureSlideComponent__SlideIn((StandFigureSlideComponent_o *)this, 0LL, 0LL);
  ActionExtensions__Call(v3->fields.end_act, 0LL);
}


void __fastcall FormationRootComponent___c__DisplayClass43_0___SetupStandServant_b__1(
        FormationRootComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  StandFigureSlideComponent_o *_39617644; // x0
  __int64 v7; // x1
  struct FormationRootComponent_o *_4__this; // x8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  struct FormationRootComponent_o *v11; // x8
  StandFigureSlideComponent_o *mStandServant; // x20
  System_Action_o *_9__2; // x21

  if ( (byte_4B17198 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&TutorialFlag_TypeInfo, v3);
    sub_1BCAFF8(&Method_FormationRootComponent___c__DisplayClass43_0__SetupStandServant_b__1__, v4);
    sub_1BCAFF8(&Method_FormationRootComponent___c__DisplayClass43_0__SetupStandServant_b__2__, v5);
    byte_4B17198 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _39617644 = (StandFigureSlideComponent_o *)TutorialFlag__Get_39617644(102, 0LL);
  if ( ((unsigned __int8)_39617644 & 1) != 0 )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      _39617644 = _4__this->fields.mStandServant;
      if ( _39617644 )
      {
        if ( _39617644->fields.mIsLoading || StandFigureSlideComponent__IsMoving(_39617644, 0LL) )
          return;
        v9 = Method_FormationRootComponent___c__DisplayClass43_0__SetupStandServant_b__1__;
        if ( (*((_BYTE *)Method_FormationRootComponent___c__DisplayClass43_0__SetupStandServant_b__1__ + 83) & 2) != 0 )
          v9 = (_QWORD *)sub_1BCB010(Method_FormationRootComponent___c__DisplayClass43_0__SetupStandServant_b__1__);
        v10 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v9, v9[4]);
        OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0LL);
        v11 = this->fields.__4__this;
        if ( v11 )
        {
          mStandServant = v11->fields.mStandServant;
          _9__2 = this->fields.__9__2;
          if ( !_9__2 )
          {
            _9__2 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
            System_Action___ctor(
              _9__2,
              (Il2CppObject *)this,
              Method_FormationRootComponent___c__DisplayClass43_0__SetupStandServant_b__2__,
              0LL);
            this->fields.__9__2 = _9__2;
            _39617644 = (StandFigureSlideComponent_o *)sub_1BCAF9C(&this->fields.__9__2);
          }
          if ( mStandServant )
          {
            StandFigureSlideComponent__SlideOut(mStandServant, _9__2, 0, 0LL);
            return;
          }
        }
      }
    }
    sub_1BCB254(_39617644, v7);
  }
}


void __fastcall FormationRootComponent___c__DisplayClass43_0___SetupStandServant_b__2(
        FormationRootComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FormationRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  FormationRootComponent__SetupStandServant(_4__this, 0LL, v2);
}