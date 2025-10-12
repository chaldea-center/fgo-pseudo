void FormationRootComponent___ctor(FormationRootComponent_o *this, const MethodInfo *method)
{
  this->fields.TUTORIAL_FORMATION_ARROW_POS = (struct UnityEngine_Vector2_o)0x4316000042280000LL;
  this->fields.TUTORIAL_FORMATION_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_C0C4D0;
  this->fields.TUTORIAL_FORMATION_MESSAGE_POS = (struct UnityEngine_Vector2_o)0xC220000000000000LL;
  this->fields.TUTORIAL_BACK_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_C0D570;
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
    sub_1C32E7C(backSkinSprite);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0);
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0);
}


void FormationRootComponent__FeatureRelease(FormationRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *grid; // x0
  struct UIGrid_o *v4; // x8
  System_Action_o *v5; // x20

  if ( (byte_4C32556 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_FormationRootComponent__FeatureRelease_b__34_0__);
    byte_4C32556 = 1;
  }
  grid = (UnityEngine_Component_o *)this->fields.grid;
  if ( !grid
    || (grid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(grid, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)grid, 1, 0),
        (grid = (UnityEngine_Component_o *)this->fields.grid) == 0)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)grid, 1, 0), (v4 = this->fields.grid) == 0) )
  {
    sub_1C32E7C(grid);
  }
  v4->fields.hideInactive = 1;
  v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_FormationRootComponent__FeatureRelease_b__34_0__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v5, 1, 0);
}


void FormationRootComponent__Init(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 titleInfo; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  bool _40328320; // w20
  CommonUI_o *v9; // x20
  FormationRootComponent___c_c *v10; // x8
  System_Action_o *_9__42_0; // x21
  Il2CppObject *v12; // x22
  struct FormationRootComponent___c_StaticFields *static_fields; // x0
  UnityEngine_Vector2_o TutorialBackArrowPos; // kr00_8
  float v15; // s0
  float v16; // s10
  float v17; // s15
  float v18; // s11
  float v19; // s12
  float v20; // s13
  float v21; // s14
  Il2CppObject *v22; // x21
  System_Action_o *v23; // x20
  float x; // s14
  float OffsetX; // s0
  float m_XMin; // s15
  float m_Width; // s10
  float m_Height; // s11
  float v29; // s12
  float v30; // s13
  Il2CppObject *Instance; // x20
  float v32; // s8
  float v33; // s9
  System_String_o *v34; // x21
  FormationRootComponent___c_c *v35; // x8
  System_Action_o *_9__42_1; // x22
  Il2CppObject *v37; // x23
  struct FormationRootComponent___c_StaticFields *v38; // x0
  Il2CppObject *MasterData_object; // x20
  struct UserServantEntity_array *UserServantListFromDeckReaveHeroine; // x0
  System_Action_o *v41; // x20
  const MethodInfo *v42; // x2
  float m_YMin; // [xsp+58h] [xbp-48h]
  float y; // [xsp+5Ch] [xbp-44h]
  UnityEngine_Vector2_o v45; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v46; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v47; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4
  UnityEngine_Rect_o v48; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4C3255C & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C32C20(&FSUtility_TypeInfo);
    sub_1C32C20(&Method_FormationRootComponent__Init_b__42_2__);
    sub_1C32C20(&Method_FormationRootComponent__Init_b__42_3__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&TutorialFlag_TypeInfo);
    sub_1C32C20(&Method_FormationRootComponent___c__Init_b__42_0__);
    sub_1C32C20(&Method_FormationRootComponent___c__Init_b__42_1__);
    sub_1C32C20(&FormationRootComponent___c_TypeInfo);
    sub_1C32C20(&StringLiteral_13591/*"TUTORIAL_MESSAGE_FORMATION1"*/);
    byte_4C3255C = 1;
  }
  titleInfo = (__int64)this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_66;
  TitleInfoControl__changeTitleInfo_39747676((TitleInfoControl_o *)titleInfo, 1, 18, 0, 0);
  FormationRootComponent__setMainActive(this, 0, v4);
  titleInfo = (__int64)this->fields.titleInfo;
  *(_WORD *)&this->fields.isTutorial1 = 0;
  if ( !titleInfo )
    goto LABEL_66;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)titleInfo, 1, 0);
  FormationRootComponent__FeatureRelease(this, v5);
  FormationRootComponent__ProgressRelease(this, v6);
  FormationRootComponent__ProgressReleaseForGrand(this, v7);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _40328320 = TutorialFlag__Get_40328320(102, 0);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( _40328320 )
  {
    if ( !TutorialFlag__Get_40328320(109, 0) )
    {
      titleInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v9 = (CommonUI_o *)titleInfo;
      v10 = FormationRootComponent___c_TypeInfo;
      if ( !FormationRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo);
        v10 = FormationRootComponent___c_TypeInfo;
      }
      _9__42_0 = v10->static_fields->__9__42_0;
      if ( !_9__42_0 )
      {
        if ( !v10->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v10);
          v10 = FormationRootComponent___c_TypeInfo;
        }
        v12 = (Il2CppObject *)v10->static_fields->__9;
        _9__42_0 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(_9__42_0, v12, Method_FormationRootComponent___c__Init_b__42_0__, 0);
        static_fields = FormationRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__42_0 = _9__42_0;
        titleInfo = sub_1C32BC4(&static_fields->__9__42_0, _9__42_0);
      }
      if ( v9 )
      {
        CommonUI__OpenTutorialImageDialog_31216656(v9, 3, 109, _9__42_0, 0, 0, 0);
        goto LABEL_58;
      }
LABEL_66:
      sub_1C32E7C(titleInfo);
    }
  }
  else if ( TutorialFlag__IsProgressDone(2, 0) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_40328320(101, 0) )
    {
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( !TutorialFlag__IsProgressDone(3, 0) )
      {
        titleInfo = (__int64)this->fields.titleInfo;
        this->fields.isTutorial1 = 1;
        if ( titleInfo )
        {
          TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)titleInfo, 0, 0);
          titleInfo = (__int64)this->fields.titleInfo;
          if ( titleInfo )
          {
            TitleInfoControl__SetHelpBtnColliderEnable((TitleInfoControl_o *)titleInfo, 0, 0);
            MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0);
            titleInfo = (__int64)this->fields.svtListBtn;
            if ( titleInfo )
            {
              (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)titleInfo + 392LL))(
                titleInfo,
                0,
                *(_QWORD *)(*(_QWORD *)titleInfo + 400LL));
              titleInfo = (__int64)this->fields.supportSelectBtn;
              if ( titleInfo )
              {
                (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)titleInfo + 392LL))(
                  titleInfo,
                  0,
                  *(_QWORD *)(*(_QWORD *)titleInfo + 400LL));
                titleInfo = (__int64)this->fields.recommendSupportSelectBtn;
                if ( titleInfo )
                {
                  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)titleInfo + 392LL))(
                    titleInfo,
                    0,
                    *(_QWORD *)(*(_QWORD *)titleInfo + 400LL));
                  titleInfo = (__int64)this->fields.warehouseBtn;
                  if ( titleInfo )
                  {
                    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)titleInfo + 392LL))(
                      titleInfo,
                      0,
                      *(_QWORD *)(*(_QWORD *)titleInfo + 400LL));
                    titleInfo = (__int64)this->fields.dummyBtn;
                    if ( titleInfo )
                    {
                      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)titleInfo + 392LL))(
                        titleInfo,
                        0,
                        *(_QWORD *)(*(_QWORD *)titleInfo + 400LL));
                      titleInfo = (__int64)this->fields.scrollBarCollider;
                      if ( titleInfo )
                      {
                        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)titleInfo, 0, 0);
                        titleInfo = (__int64)this->fields.scrollBar2Collider;
                        if ( titleInfo )
                        {
                          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)titleInfo, 0, 0);
                          titleInfo = (__int64)this->fields.svtFormationBtn;
                          if ( titleInfo )
                          {
                            titleInfo = (__int64)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)titleInfo,
                                                   0);
                            if ( titleInfo )
                            {
                              titleInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)titleInfo,
                                                     (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
                              if ( titleInfo )
                              {
                                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)titleInfo, 0, 0);
                                x = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.x;
                                y = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y;
                                if ( !FSUtility_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
                                OffsetX = FSUtility__GetOffsetX(68.0, 0, 0);
                                m_XMin = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_XMin;
                                m_Width = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Width;
                                m_Height = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Height;
                                v29 = OffsetX;
                                m_YMin = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin;
                                v30 = FSUtility__GetOffsetX(68.0, 0, 0);
                                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                titleInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13591/*"TUTORIAL_MESSAGE_FORMATION1"*/, 0);
                                v32 = this->fields.TUTORIAL_FORMATION_MESSAGE_POS.fields.x;
                                v33 = this->fields.TUTORIAL_FORMATION_MESSAGE_POS.fields.y;
                                v34 = (System_String_o *)titleInfo;
                                v35 = FormationRootComponent___c_TypeInfo;
                                if ( !FormationRootComponent___c_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo);
                                  v35 = FormationRootComponent___c_TypeInfo;
                                }
                                _9__42_1 = v35->static_fields->__9__42_1;
                                if ( !_9__42_1 )
                                {
                                  if ( !v35->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(v35);
                                    v35 = FormationRootComponent___c_TypeInfo;
                                  }
                                  v37 = (Il2CppObject *)v35->static_fields->__9;
                                  _9__42_1 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
                                  System_Action___ctor(
                                    _9__42_1,
                                    v37,
                                    Method_FormationRootComponent___c__Init_b__42_1__,
                                    0);
                                  v38 = FormationRootComponent___c_TypeInfo->static_fields;
                                  v38->__9__42_1 = _9__42_1;
                                  titleInfo = sub_1C32BC4(&v38->__9__42_1, _9__42_1);
                                }
                                if ( Instance )
                                {
                                  v47.fields.m_YMin = m_YMin;
                                  v46.fields.y = y;
                                  v46.fields.x = x + v29;
                                  v47.fields.m_XMin = m_XMin + v30;
                                  v47.fields.m_Width = m_Width;
                                  v47.fields.m_Height = m_Height;
                                  CommonUI__OpenTutorialNotificationDialogArrow(
                                    (CommonUI_o *)Instance,
                                    v34,
                                    v46,
                                    v47,
                                    90.0,
                                    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(v33), LODWORD(v32)),
                                    -1,
                                    _9__42_1,
                                    0);
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
      if ( TutorialFlag__IsProgressDone(3, 0) )
      {
        this->fields.isTutorial2 = 1;
        titleInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( titleInfo )
        {
          TutorialBackArrowPos = CommonUI__GetTutorialBackArrowPos((CommonUI_o *)titleInfo, 0);
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
          v15 = FSUtility__GetOffsetX(68.0, 0, 0);
          v17 = this->fields.TUTORIAL_BACK_ARROW_RECT.fields.m_XMin;
          v16 = this->fields.TUTORIAL_BACK_ARROW_RECT.fields.m_YMin;
          v18 = this->fields.TUTORIAL_BACK_ARROW_RECT.fields.m_Width;
          v19 = this->fields.TUTORIAL_BACK_ARROW_RECT.fields.m_Height;
          v20 = v15;
          v21 = FSUtility__GetOffsetX(68.0, 0, 0);
          v22 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v23 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(v23, (Il2CppObject *)this, Method_FormationRootComponent__Init_b__42_2__, 0);
          if ( v22 )
          {
            v48.fields.m_XMin = v17 - v21;
            v45.fields.x = TutorialBackArrowPos.fields.x - v20;
            v45.fields.y = TutorialBackArrowPos.fields.y;
            v48.fields.m_YMin = v16;
            v48.fields.m_Width = v18;
            v48.fields.m_Height = v19;
            CommonUI__OpenTutorialArrowMark((CommonUI_o *)v22, v45, 180.0, v48, v23, 0);
            goto LABEL_58;
          }
        }
        goto LABEL_66;
      }
    }
  }
LABEL_58:
  titleInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !titleInfo )
    goto LABEL_66;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)titleInfo,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  titleInfo = TutorialFlag__Get_40328320(126, 0);
  if ( !MasterData_object )
    goto LABEL_66;
  if ( (titleInfo & 1) != 0 )
    UserServantListFromDeckReaveHeroine = UserDeckMaster__GetUserServantListFromDeckReaveHeroine(
                                            (UserDeckMaster_o *)MasterData_object,
                                            0);
  else
    UserServantListFromDeckReaveHeroine = UserDeckMaster__GetUserServantListFromDeck(
                                            (UserDeckMaster_o *)MasterData_object,
                                            0);
  this->fields.mStandSvtDatas = UserServantListFromDeckReaveHeroine;
  sub_1C32BC4(&this->fields.mStandSvtDatas, UserServantListFromDeckReaveHeroine);
  this->fields.mStandSvtIdx = -1;
  v41 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_FormationRootComponent__Init_b__42_3__, 0);
  FormationRootComponent__SetupStandServant(this, v41, v42);
}


void FormationRootComponent__OnClickBack(FormationRootComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  System_String_o **v4; // x8

  if ( (byte_4C32560 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_3437/*"CLICK_BACK"*/);
    sub_1C32C20(&StringLiteral_3491/*"CLICK_TERMINAL"*/);
    byte_4C32560 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C32E7C(0);
  if ( this->fields.type == 1 )
    v4 = (System_String_o **)&StringLiteral_3437/*"CLICK_BACK"*/;
  else
    v4 = (System_String_o **)&StringLiteral_3491/*"CLICK_TERMINAL"*/;
  TitleInfoControl__sendEvent(titleInfo, *v4, 0);
}


void FormationRootComponent__OnClickButtonMask(FormationRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4C32561 & 1) == 0 )
  {
    sub_1C32C20(&Method_FormationRootComponent_OnClickButtonMask__);
    byte_4C32561 = 1;
  }
  v2 = Method_FormationRootComponent_OnClickButtonMask__;
  if ( (*((_BYTE *)Method_FormationRootComponent_OnClickButtonMask__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C32C38(Method_FormationRootComponent_OnClickButtonMask__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C32C04(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 2, 0, 0);
}


void FormationRootComponent__OnClickGrandSvtList(FormationRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_4C32562 & 1) == 0 )
  {
    sub_1C32C20(&Method_FormationRootComponent_OnClickGrandSvtList__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C32562 = 1;
  }
  v2 = Method_FormationRootComponent_OnClickGrandSvtList__;
  if ( (*((_BYTE *)Method_FormationRootComponent_OnClickGrandSvtList__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C32C38(Method_FormationRootComponent_OnClickGrandSvtList__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C32C04(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 43, 1, 0, 0);
}


void FormationRootComponent__OnClickHelpBtn(FormationRootComponent_o *this, const MethodInfo *method)
{
  System_Collections_ICollection_o *ClearWarIdList; // x19
  BalanceConfig_c *v3; // x0
  int32_t v4; // w19
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x0
  FormationRootComponent___c_c *v8; // x8
  CommonUI_o *v9; // x20
  System_Action_o *_9__49_0; // x21
  Il2CppObject *v11; // x22
  struct FormationRootComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4C32563 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C32C20(&Method_FormationRootComponent_OnClickHelpBtn__);
    sub_1C32C20(&ServantCommentManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_FormationRootComponent___c__OnClickHelpBtn_b__49_0__);
    sub_1C32C20(&FormationRootComponent___c_TypeInfo);
    byte_4C32563 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ClearWarIdList = (System_Collections_ICollection_o *)ServantCommentManager__GetClearWarIdList(0);
  if ( BasicHelper__IsNullOrEmpty(ClearWarIdList, 0) )
    goto LABEL_10;
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  if ( !System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)ClearWarIdList,
          v3->static_fields->OrdealCallWarId,
          (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___) )
LABEL_10:
    v4 = 3;
  else
    v4 = 102;
  v5 = Method_FormationRootComponent_OnClickHelpBtn__;
  if ( (*((_BYTE *)Method_FormationRootComponent_OnClickHelpBtn__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C32C38(Method_FormationRootComponent_OnClickHelpBtn__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = FormationRootComponent___c_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !FormationRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo);
    v8 = FormationRootComponent___c_TypeInfo;
  }
  _9__49_0 = v8->static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = FormationRootComponent___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__49_0 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(_9__49_0, v11, Method_FormationRootComponent___c__OnClickHelpBtn_b__49_0__, 0);
    static_fields = FormationRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = _9__49_0;
    Instance = (Il2CppObject *)sub_1C32BC4(&static_fields->__9__49_0, _9__49_0);
  }
  if ( !v9 )
    sub_1C32E7C(Instance);
  CommonUI__OpenTutorialImageDialog_31216656(v9, v4, -1, _9__49_0, 0, 0, 0);
}


void FormationRootComponent__ProgressRelease(FormationRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *recommendSupportSelectBtn; // x0
  System_Object_array *List; // x20
  FormationRootComponent___c_c *v5; // x8
  System_Func_object__bool__o *_9__35_0; // x21
  Il2CppObject *v7; // x22
  struct FormationRootComponent___c_StaticFields *static_fields; // x0
  struct UIButton_o *v9; // x8
  char v10; // w20
  char v11; // w20

  if ( (byte_4C32557 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_RecommendSupportQuestEntity___);
    sub_1C32C20(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&System_Func_RecommendSupportQuestEntity__bool__TypeInfo);
    sub_1C32C20(&Method_FormationRootComponent___c__ProgressRelease_b__35_0__);
    sub_1C32C20(&FormationRootComponent___c_TypeInfo);
    byte_4C32557 = 1;
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
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    recommendSupportSelectBtn = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
    if ( recommendSupportSelectBtn )
    {
      List = (System_Object_array *)RecommendSupportQuestMaster__GetList(
                                      (RecommendSupportQuestMaster_o *)recommendSupportSelectBtn,
                                      0);
      v5 = FormationRootComponent___c_TypeInfo;
      if ( !FormationRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo);
        v5 = FormationRootComponent___c_TypeInfo;
      }
      _9__35_0 = (System_Func_object__bool__o *)v5->static_fields->__9__35_0;
      if ( !_9__35_0 )
      {
        if ( !v5->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v5);
          v5 = FormationRootComponent___c_TypeInfo;
        }
        v7 = (Il2CppObject *)v5->static_fields->__9;
        _9__35_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_RecommendSupportQuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__35_0, v7, Method_FormationRootComponent___c__ProgressRelease_b__35_0__, 0);
        static_fields = FormationRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__35_0 = (struct System_Func_RecommendSupportQuestEntity__bool__o *)_9__35_0;
        sub_1C32BC4(&static_fields->__9__35_0, _9__35_0);
      }
      recommendSupportSelectBtn = (UnityEngine_Component_o *)BasicHelper__Any_object__51144764(
                                                               List,
                                                               (System_Func_T__bool__o *)_9__35_0,
                                                               (const MethodInfo_30C683C *)Method_BasicHelper_Any_RecommendSupportQuestEntity___);
      v9 = this->fields.recommendSupportSelectBtn;
      if ( v9 )
      {
        v10 = (char)recommendSupportSelectBtn;
        ((void (__fastcall *)(struct UIButton_o *__return_ptr, struct UIButton_o *, _QWORD, const MethodInfo *))v9->klass->vtable._5_set_isEnabled.methodPtr)(
          v9,
          this->fields.recommendSupportSelectBtn,
          (unsigned __int8)recommendSupportSelectBtn & 1,
          v9->klass->vtable._5_set_isEnabled.method);
        recommendSupportSelectBtn = (UnityEngine_Component_o *)this->fields.recommendSupportButtonMaskLabel;
        if ( recommendSupportSelectBtn )
        {
          recommendSupportSelectBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                   recommendSupportSelectBtn,
                                                                   0);
          if ( recommendSupportSelectBtn )
          {
            v11 = v10 ^ 1;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)recommendSupportSelectBtn, v11 & 1, 0);
            recommendSupportSelectBtn = (UnityEngine_Component_o *)this->fields.recommendSupportPreparationLabel;
            if ( recommendSupportSelectBtn )
            {
              recommendSupportSelectBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                       recommendSupportSelectBtn,
                                                                       0);
              if ( recommendSupportSelectBtn )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)recommendSupportSelectBtn, v11 & 1, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_22:
    sub_1C32E7C(recommendSupportSelectBtn);
  }
}


void FormationRootComponent__ProgressReleaseForGrand(FormationRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *IsTargetQuestClear; // x0
  UILabel_o *grandSvtListButtonMaskLabel; // x20
  System_String_c *klass; // x8
  UILabel_o *grandSvtListPreparationLabel; // x20

  if ( (byte_4C32558 & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardUtility_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_3612/*"COMBINE_PREPARATION"*/);
    sub_1C32C20(&StringLiteral_3571/*"COMBINE_CLASS_BOARD_CLOSED_MESSAGE"*/);
    byte_4C32558 = 1;
  }
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  IsTargetQuestClear = (System_String_o *)ClassBoardUtility__IsTargetQuestClear(0);
  grandSvtListButtonMaskLabel = this->fields.grandSvtListButtonMaskLabel;
  if ( ((unsigned __int8)IsTargetQuestClear & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsTargetQuestClear = LocalizationManager__Get((System_String_o *)StringLiteral_3571/*"COMBINE_CLASS_BOARD_CLOSED_MESSAGE"*/, 0);
    if ( grandSvtListButtonMaskLabel )
    {
      UILabel__set_text(grandSvtListButtonMaskLabel, IsTargetQuestClear, 0);
      grandSvtListPreparationLabel = this->fields.grandSvtListPreparationLabel;
      IsTargetQuestClear = LocalizationManager__Get((System_String_o *)StringLiteral_3612/*"COMBINE_PREPARATION"*/, 0);
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
    sub_1C32E7C(IsTargetQuestClear);
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
  Il2CppObject *v5; // x20
  __int64 v6; // x0
  struct UserServantEntity_array *mStandSvtDatas; // x8
  int max_length; // w10
  int v9; // w9
  int32_t mStandSvtIdx; // w11
  int32_t v11; // w11
  UserServantEntity_o *v12; // x21
  StandFigureSlideComponent_o *mStandServant; // x22
  System_Action_o *v14; // x23
  struct StandFigureSlideComponent_o *v15; // x19
  System_Action_o *v16; // x21

  if ( (byte_4C3255D & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_FormationRootComponent___c__DisplayClass43_0__SetupStandServant_b__0__);
    sub_1C32C20(&Method_FormationRootComponent___c__DisplayClass43_0__SetupStandServant_b__1__);
    sub_1C32C20(&FormationRootComponent___c__DisplayClass43_0_TypeInfo);
    byte_4C3255D = 1;
  }
  v5 = (Il2CppObject *)sub_1C32E6C(FormationRootComponent___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_18;
  v5[1].klass = (Il2CppClass *)this;
  sub_1C32BC4(&v5[1], this);
  v5[1].monitor = end_act;
  v6 = sub_1C32BC4(&v5[1].monitor, end_act);
  mStandSvtDatas = this->fields.mStandSvtDatas;
  if ( !mStandSvtDatas )
    goto LABEL_18;
  max_length = mStandSvtDatas->max_length;
  if ( max_length < 1 )
  {
LABEL_13:
    v12 = 0;
  }
  else
  {
    v9 = 0;
    while ( 1 )
    {
      mStandSvtIdx = this->fields.mStandSvtIdx;
      v11 = mStandSvtIdx + 1 < max_length ? mStandSvtIdx + 1 : 0;
      this->fields.mStandSvtIdx = v11;
      if ( v11 >= (unsigned int)max_length )
        sub_1C32E84(v6);
      v12 = mStandSvtDatas->m_Items[v11];
      if ( v12 )
        break;
      max_length = mStandSvtDatas->max_length;
      if ( ++v9 >= max_length )
        goto LABEL_13;
    }
  }
  mStandServant = this->fields.mStandServant;
  v14 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v14, v5, Method_FormationRootComponent___c__DisplayClass43_0__SetupStandServant_b__0__, 0);
  if ( !mStandServant
    || (StandFigureSlideComponent__Setup(mStandServant, v12, 0, v14, 0),
        v15 = this->fields.mStandServant,
        v16 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
        System_Action___ctor(
          v16,
          v5,
          (intptr_t)Method_FormationRootComponent___c__DisplayClass43_0__SetupStandServant_b__1__,
          0),
        !v15) )
  {
LABEL_18:
    sub_1C32E7C(v6);
  }
  v15->fields.mBtnAct = v16;
  sub_1C32BC4(&v15->fields.mBtnAct, v16);
}


void FormationRootComponent___FeatureRelease_b__34_0(FormationRootComponent_o *this, const MethodInfo *method)
{
  UISprite_o *recommendSupportSelectBtnSprite; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *grandSvtListBtn; // x8
  char v6; // w19

  if ( (byte_4C32564 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&StringLiteral_20386/*"img_form_menu08"*/);
    sub_1C32C20(&StringLiteral_20387/*"img_form_menu09"*/);
    byte_4C32564 = 1;
  }
  recommendSupportSelectBtnSprite = this->fields.recommendSupportSelectBtnSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(recommendSupportSelectBtnSprite, (System_String_o *)StringLiteral_20386/*"img_form_menu08"*/, 0);
  gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetPartyOrganizationImage(
                                             this->fields.grandSvtListBtnSprite,
                                             (System_String_o *)StringLiteral_20387/*"img_form_menu09"*/,
                                             0);
  grandSvtListBtn = (UnityEngine_Component_o *)this->fields.grandSvtListBtn;
  if ( !grandSvtListBtn
    || (v6 = (char)gameObject, (gameObject = UnityEngine_Component__get_gameObject(grandSvtListBtn, 0)) == 0) )
  {
    sub_1C32E7C(gameObject);
  }
  UnityEngine_GameObject__SetActive(gameObject, v6 & 1, 0);
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
    sub_1C32E7C(titleInfo);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)titleInfo, 0, 0);
}


void FormationRootComponent___Init_b__42_3(FormationRootComponent_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *Instance; // x0
  CommonUI_o *v4; // x20

  if ( (byte_4C32565 & 1) == 0 )
  {
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C32C20(&StringLiteral_6978/*"GO_NEXT"*/);
    byte_4C32565 = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  if ( !PartyOrganizationUtility__ExistsTemporaryPartyInfo(Instance, 0) )
  {
    Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v4 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( v4 )
    {
      CommonUI__maskFadein(v4, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
      goto LABEL_11;
    }
LABEL_13:
    sub_1C32E7C(Instance);
  }
  Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 40, 1, 0, 0);
LABEL_11:
  Instance = (PartyOrganizationUtility_o *)this->fields.myFSM;
  if ( !Instance )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6978/*"GO_NEXT"*/, 0);
}


void FormationRootComponent__beginFinish(FormationRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *backSkinSprite; // x0

  if ( (byte_4C3255B & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_4C3255B = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 0, 0),
        (backSkinSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0) )
  {
    sub_1C32E7C(backSkinSprite);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)backSkinSprite, 2, 0, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleasePartyOrganizationAtlas(0);
}


void FormationRootComponent__beginInitialize(FormationRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C32559 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C32559 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 3, 30, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void FormationRootComponent__beginStartUp(FormationRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *MainBgmName; // x20
  TitleInfoControl_o *titleInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_o *v6; // x20

  if ( (byte_4C3255A & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&BgmManager_TypeInfo);
    sub_1C32C20(&Method_FormationRootComponent_EndLoadCommonBg__);
    sub_1C32C20(&SoundManager_TypeInfo);
    byte_4C3255A = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0, 0);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_16;
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0, 18, 0);
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
    sub_1C32E7C(titleInfo);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0);
  v6 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_FormationRootComponent_EndLoadCommonBg__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v6, 2, 1, 0);
}


void FormationRootComponent__closeArrowMark(FormationRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3255E & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3255E = 1;
  }
  if ( this->fields.isTutorial1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_10;
    CommonUI__CloseTutorialNotificationDialogArrow((CommonUI_o *)Instance, 0);
  }
  if ( this->fields.isTutorial2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, 0, 0);
      return;
    }
LABEL_10:
    sub_1C32E7C(Instance);
  }
}


void FormationRootComponent__setMainActive(FormationRootComponent_o *this, int32_t type, const MethodInfo *method)
{
  UnityEngine_GameObject_o *topDispRootObj; // x0

  if ( (byte_4C3255F & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentInChildren_UIScrollView___);
    byte_4C3255F = 1;
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
          topDispRootObj = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentInChildren_object__51199524(
                                                         (UnityEngine_Component_o *)topDispRootObj,
                                                         (const MethodInfo_30D3E24 *)Method_UnityEngine_Component_GetComponentInChildren_UIScrollView___);
          if ( topDispRootObj )
          {
            UIScrollView__ResetPosition((UIScrollView_o *)topDispRootObj, 0);
            return;
          }
        }
      }
    }
LABEL_13:
    sub_1C32E7C(topDispRootObj);
  }
}


void FormationRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C32566 & 1) == 0 )
  {
    sub_1C32C20(&FormationRootComponent___c_TypeInfo);
    byte_4C32566 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(FormationRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FormationRootComponent___c_TypeInfo->static_fields->__9 = (struct FormationRootComponent___c_o *)v1;
  sub_1C32BC4(FormationRootComponent___c_TypeInfo->static_fields, v1);
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

  if ( (byte_4C32567 & 1) == 0 )
  {
    this = (FormationRootComponent___c_o *)sub_1C32C20(&CondType_TypeInfo);
    byte_4C32567 = 1;
  }
  if ( !entity )
    sub_1C32E7C(this);
  questId = entity->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_40225464(questId, -1, 0, 0);
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
    sub_1C32E7C(this);
  }
  StandFigureSlideComponent__SlideIn((StandFigureSlideComponent_o *)this, 0, 0);
  ActionExtensions__Call(v3->fields.end_act, 0);
}


void FormationRootComponent___c__DisplayClass43_0___SetupStandServant_b__1(
        FormationRootComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  StandFigureSlideComponent_o *_40328320; // x0
  struct FormationRootComponent_o *_4__this; // x8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct FormationRootComponent_o *v7; // x8
  StandFigureSlideComponent_o *mStandServant; // x20
  System_Action_o *_9__2; // x21

  if ( (byte_4C32568 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&TutorialFlag_TypeInfo);
    sub_1C32C20(&Method_FormationRootComponent___c__DisplayClass43_0__SetupStandServant_b__1__);
    sub_1C32C20(&Method_FormationRootComponent___c__DisplayClass43_0__SetupStandServant_b__2__);
    byte_4C32568 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _40328320 = (StandFigureSlideComponent_o *)TutorialFlag__Get_40328320(102, 0);
  if ( ((unsigned __int8)_40328320 & 1) != 0 )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      _40328320 = _4__this->fields.mStandServant;
      if ( _40328320 )
      {
        if ( _40328320->fields.mIsLoading || StandFigureSlideComponent__IsMoving(_40328320, 0) )
          return;
        v5 = Method_FormationRootComponent___c__DisplayClass43_0__SetupStandServant_b__1__;
        if ( (*((_BYTE *)Method_FormationRootComponent___c__DisplayClass43_0__SetupStandServant_b__1__ + 83) & 2) != 0 )
          v5 = (_QWORD *)sub_1C32C38(Method_FormationRootComponent___c__DisplayClass43_0__SetupStandServant_b__1__);
        v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
        OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
        v7 = this->fields.__4__this;
        if ( v7 )
        {
          mStandServant = v7->fields.mStandServant;
          _9__2 = this->fields.__9__2;
          if ( !_9__2 )
          {
            _9__2 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
            System_Action___ctor(
              _9__2,
              (Il2CppObject *)this,
              Method_FormationRootComponent___c__DisplayClass43_0__SetupStandServant_b__2__,
              0);
            this->fields.__9__2 = _9__2;
            _40328320 = (StandFigureSlideComponent_o *)sub_1C32BC4(&this->fields.__9__2, _9__2);
          }
          if ( mStandServant )
          {
            StandFigureSlideComponent__SlideOut(mStandServant, _9__2, 0, 0);
            return;
          }
        }
      }
    }
    sub_1C32E7C(_40328320);
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
    sub_1C32E7C(0);
  FormationRootComponent__SetupStandServant(_4__this, 0, v2);
}