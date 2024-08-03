void __fastcall FormationRootComponent___ctor(FormationRootComponent_o *this, const MethodInfo *method)
{
  this->fields.TUTORIAL_FORMATION_ARROW_POS = (struct UnityEngine_Vector2_o)0x4316000042280000LL;
  this->fields.TUTORIAL_FORMATION_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BA2930;
  this->fields.TUTORIAL_FORMATION_MESSAGE_POS = (struct UnityEngine_Vector2_o)0xC220000000000000LL;
  this->fields.TUTORIAL_BACK_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BA38E0;
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
    sub_1B64324(backSkinSprite);
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
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x20

  if ( (byte_49F7803 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AtlasManager_TypeInfo, v3);
    sub_1B640C8(&Method_FormationRootComponent__FeatureRelease_b__29_0__, v4);
    byte_49F7803 = 1;
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
  v6 = this->fields.grid;
  if ( !v6
    || (v6->fields.hideInactive = 1, (grid = (UnityEngine_Component_o *)this->fields.recommendSupportSelectBtn) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(grid, 0LL),
        grid = (UnityEngine_Component_o *)ConstantMaster__IsFLAG20240804(0LL),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)grid & 1, 0LL),
        (grid = (UnityEngine_Component_o *)this->fields.recommendSupportSelectBtn) == 0LL) )
  {
LABEL_15:
    sub_1B64324(grid);
  }
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)grid, 0LL) )
  {
    v10 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_FormationRootComponent__FeatureRelease_b__29_0__, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadPartyOrganizationAtlas(v10, 1, 0LL);
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
  bool _37376848; // w20
  __int64 v21; // x1
  __int64 v22; // x2
  CommonUI_o *v23; // x20
  FormationRootComponent___c_c *v24; // x8
  System_Action_o *_9__36_0; // x21
  Il2CppObject *v26; // x22
  struct FormationRootComponent___c_StaticFields *static_fields; // x0
  UnityEngine_Vector2_o TutorialBackArrowPos; // kr00_8
  float v29; // s0
  float v30; // s10
  float v31; // s15
  float v32; // s11
  float v33; // s12
  float v34; // s13
  float v35; // s14
  Il2CppObject *v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  System_Action_o *v39; // x20
  float x; // s14
  float OffsetX; // s0
  float m_XMin; // s15
  float m_Width; // s10
  float m_Height; // s11
  float v45; // s12
  float v46; // s13
  Il2CppObject *Instance; // x20
  __int64 v48; // x1
  __int64 v49; // x2
  float v50; // s8
  float v51; // s9
  System_String_o *v52; // x21
  FormationRootComponent___c_c *v53; // x8
  System_Action_o *_9__36_1; // x22
  Il2CppObject *v55; // x23
  struct FormationRootComponent___c_StaticFields *v56; // x0
  Il2CppObject *MasterData_object; // x20
  struct UserServantEntity_array *UserServantListFromDeckReaveHeroine; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  System_Action_o *v61; // x20
  const MethodInfo *v62; // x2
  float m_YMin; // [xsp+58h] [xbp-48h]
  float y; // [xsp+5Ch] [xbp-44h]
  UnityEngine_Vector2_o v65; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v66; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v67; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4
  UnityEngine_Rect_o v68; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_49F7808 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserDeckMaster___, v3);
    sub_1B640C8(&FSUtility_TypeInfo, v4);
    sub_1B640C8(&Method_FormationRootComponent__Init_b__36_2__, v5);
    sub_1B640C8(&Method_FormationRootComponent__Init_b__36_3__, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___, v7);
    sub_1B640C8(&LocalizationManager_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B640C8(&TutorialFlag_TypeInfo, v11);
    sub_1B640C8(&Method_FormationRootComponent___c__Init_b__36_0__, v12);
    sub_1B640C8(&Method_FormationRootComponent___c__Init_b__36_1__, v13);
    sub_1B640C8(&FormationRootComponent___c_TypeInfo, v14);
    sub_1B640C8(&StringLiteral_13430/*"TUTORIAL_MESSAGE_FORMATION1"*/, v15);
    byte_49F7808 = 1;
  }
  titleInfo = (__int64)this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_66;
  TitleInfoControl__changeTitleInfo_36879176((TitleInfoControl_o *)titleInfo, 1, 18, 0, 0LL);
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
  _37376848 = TutorialFlag__Get_37376848(102, 0LL);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( _37376848 )
  {
    if ( !TutorialFlag__Get_37376848(109, 0LL) )
    {
      titleInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v23 = (CommonUI_o *)titleInfo;
      v24 = FormationRootComponent___c_TypeInfo;
      if ( !FormationRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        titleInfo = j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo);
        v24 = FormationRootComponent___c_TypeInfo;
      }
      _9__36_0 = v24->static_fields->__9__36_0;
      if ( !_9__36_0 )
      {
        if ( !v24->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v24);
          v24 = FormationRootComponent___c_TypeInfo;
        }
        v26 = (Il2CppObject *)v24->static_fields->__9;
        _9__36_0 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v21, v22);
        System_Action___ctor(_9__36_0, v26, Method_FormationRootComponent___c__Init_b__36_0__, 0LL);
        static_fields = FormationRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__36_0 = _9__36_0;
        titleInfo = sub_1B6406C(&static_fields->__9__36_0);
      }
      if ( v23 )
      {
        CommonUI__OpenTutorialImageDialog_30370944(v23, 3, 109, _9__36_0, 0LL, 0LL, 0LL);
        goto LABEL_58;
      }
LABEL_66:
      sub_1B64324(titleInfo);
    }
  }
  else if ( TutorialFlag__IsProgressDone(2, 0LL) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_37376848(101, 0LL) )
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
                                                     (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
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
                                v45 = OffsetX;
                                m_YMin = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin;
                                v46 = FSUtility__GetOffsetX(68.0, 0, 0LL);
                                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                titleInfo = (__int64)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_13430/*"TUTORIAL_MESSAGE_FORMATION1"*/,
                                                       0LL);
                                v50 = this->fields.TUTORIAL_FORMATION_MESSAGE_POS.fields.x;
                                v51 = this->fields.TUTORIAL_FORMATION_MESSAGE_POS.fields.y;
                                v52 = (System_String_o *)titleInfo;
                                v53 = FormationRootComponent___c_TypeInfo;
                                if ( !FormationRootComponent___c_TypeInfo->_2.cctor_finished )
                                {
                                  titleInfo = j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo);
                                  v53 = FormationRootComponent___c_TypeInfo;
                                }
                                _9__36_1 = v53->static_fields->__9__36_1;
                                if ( !_9__36_1 )
                                {
                                  if ( !v53->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(v53);
                                    v53 = FormationRootComponent___c_TypeInfo;
                                  }
                                  v55 = (Il2CppObject *)v53->static_fields->__9;
                                  _9__36_1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v48, v49);
                                  System_Action___ctor(
                                    _9__36_1,
                                    v55,
                                    Method_FormationRootComponent___c__Init_b__36_1__,
                                    0LL);
                                  v56 = FormationRootComponent___c_TypeInfo->static_fields;
                                  v56->__9__36_1 = _9__36_1;
                                  titleInfo = sub_1B6406C(&v56->__9__36_1);
                                }
                                if ( Instance )
                                {
                                  v67.fields.m_YMin = m_YMin;
                                  v66.fields.y = y;
                                  v66.fields.x = x + v45;
                                  v67.fields.m_XMin = m_XMin + v46;
                                  v67.fields.m_Width = m_Width;
                                  v67.fields.m_Height = m_Height;
                                  CommonUI__OpenTutorialNotificationDialogArrow(
                                    (CommonUI_o *)Instance,
                                    v52,
                                    v66,
                                    v67,
                                    90.0,
                                    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(v51), LODWORD(v50)),
                                    -1,
                                    _9__36_1,
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
        titleInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( titleInfo )
        {
          TutorialBackArrowPos = CommonUI__GetTutorialBackArrowPos((CommonUI_o *)titleInfo, 0LL);
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
          v29 = FSUtility__GetOffsetX(68.0, 0, 0LL);
          v31 = this->fields.TUTORIAL_BACK_ARROW_RECT.fields.m_XMin;
          v30 = this->fields.TUTORIAL_BACK_ARROW_RECT.fields.m_YMin;
          v32 = this->fields.TUTORIAL_BACK_ARROW_RECT.fields.m_Width;
          v33 = this->fields.TUTORIAL_BACK_ARROW_RECT.fields.m_Height;
          v34 = v29;
          v35 = FSUtility__GetOffsetX(68.0, 0, 0LL);
          v36 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v39 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v37, v38);
          System_Action___ctor(v39, (Il2CppObject *)this, Method_FormationRootComponent__Init_b__36_2__, 0LL);
          if ( v36 )
          {
            v68.fields.m_XMin = v31 - v35;
            v65.fields.x = TutorialBackArrowPos.fields.x - v34;
            v65.fields.y = TutorialBackArrowPos.fields.y;
            v68.fields.m_YMin = v30;
            v68.fields.m_Width = v32;
            v68.fields.m_Height = v33;
            CommonUI__OpenTutorialArrowMark((CommonUI_o *)v36, v65, 180.0, v68, v39, 0LL);
            goto LABEL_58;
          }
        }
        goto LABEL_66;
      }
    }
  }
LABEL_58:
  titleInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !titleInfo )
    goto LABEL_66;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)titleInfo,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  titleInfo = TutorialFlag__Get_37376848(126, 0LL);
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
  sub_1B6406C(&this->fields.mStandSvtDatas);
  this->fields.mStandSvtIdx = -1;
  v61 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v59, v60);
  System_Action___ctor(v61, (Il2CppObject *)this, Method_FormationRootComponent__Init_b__36_3__, 0LL);
  FormationRootComponent__SetupStandServant(this, v61, v62);
}


void __fastcall FormationRootComponent__OnClickBack(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  System_String_o **v5; // x8

  if ( (byte_49F780C & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3506/*"CLICK_BACK"*/, method);
    sub_1B640C8(&StringLiteral_3552/*"CLICK_TERMINAL"*/, v3);
    byte_49F780C = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1B64324(0LL);
  if ( this->fields.type == 1 )
    v5 = (System_String_o **)&StringLiteral_3506/*"CLICK_BACK"*/;
  else
    v5 = (System_String_o **)&StringLiteral_3552/*"CLICK_TERMINAL"*/;
  TitleInfoControl__sendEvent(titleInfo, *v5, 0LL);
}


void __fastcall FormationRootComponent__OnClickButtonMask(FormationRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_49F780D & 1) == 0 )
  {
    sub_1B640C8(&Method_FormationRootComponent_OnClickButtonMask__, method);
    byte_49F780D = 1;
  }
  v2 = Method_FormationRootComponent_OnClickButtonMask__;
  if ( (*((_BYTE *)Method_FormationRootComponent_OnClickButtonMask__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1B640E0();
  v3 = (System_Reflection_MethodBase_o *)sub_1B640AC(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 2, 0LL);
}


void __fastcall FormationRootComponent__ProgressRelease(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *recommendSupportSelectBtn; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  System_Object_array *List; // x20
  FormationRootComponent___c_c *v12; // x8
  System_Func_object__bool__o *_9__30_0; // x21
  Il2CppObject *v14; // x22
  struct FormationRootComponent___c_StaticFields *static_fields; // x0
  struct UIButton_o *v16; // x8
  char v17; // w20

  if ( (byte_49F7804 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_RecommendSupportQuestEntity___, method);
    sub_1B640C8(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&System_Func_RecommendSupportQuestEntity__bool__TypeInfo, v5);
    sub_1B640C8(&Method_FormationRootComponent___c__ProgressRelease_b__30_0__, v6);
    sub_1B640C8(&FormationRootComponent___c_TypeInfo, v7);
    byte_49F7804 = 1;
  }
  recommendSupportSelectBtn = (UnityEngine_Component_o *)this->fields.recommendSupportSelectBtn;
  if ( !recommendSupportSelectBtn )
    goto LABEL_20;
  recommendSupportSelectBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                           recommendSupportSelectBtn,
                                                           0LL);
  if ( !recommendSupportSelectBtn )
    goto LABEL_20;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)recommendSupportSelectBtn, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    recommendSupportSelectBtn = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
    if ( recommendSupportSelectBtn )
    {
      List = (System_Object_array *)RecommendSupportQuestMaster__GetList(
                                      (RecommendSupportQuestMaster_o *)recommendSupportSelectBtn,
                                      0LL);
      v12 = FormationRootComponent___c_TypeInfo;
      if ( !FormationRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo);
        v12 = FormationRootComponent___c_TypeInfo;
      }
      _9__30_0 = (System_Func_object__bool__o *)v12->static_fields->__9__30_0;
      if ( !_9__30_0 )
      {
        if ( !v12->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v12);
          v12 = FormationRootComponent___c_TypeInfo;
        }
        v14 = (Il2CppObject *)v12->static_fields->__9;
        _9__30_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                    System_Func_RecommendSupportQuestEntity__bool__TypeInfo,
                                                    v9,
                                                    v10);
        System_Func_object__bool____ctor(
          _9__30_0,
          v14,
          Method_FormationRootComponent___c__ProgressRelease_b__30_0__,
          0LL);
        static_fields = FormationRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__30_0 = (struct System_Func_RecommendSupportQuestEntity__bool__o *)_9__30_0;
        sub_1B6406C(&static_fields->__9__30_0);
      }
      recommendSupportSelectBtn = (UnityEngine_Component_o *)BasicHelper__Any_object__48384284(
                                                               List,
                                                               (System_Func_T__bool__o *)_9__30_0,
                                                               (const MethodInfo_2E2491C *)Method_BasicHelper_Any_RecommendSupportQuestEntity___);
      v16 = this->fields.recommendSupportSelectBtn;
      if ( v16 )
      {
        v17 = (char)recommendSupportSelectBtn;
        ((void (__fastcall *)(struct UIButton_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._5_set_isEnabled.method)(
          this->fields.recommendSupportSelectBtn,
          (unsigned __int8)recommendSupportSelectBtn & 1,
          v16->klass->vtable._6_OnInit.methodPtr);
        recommendSupportSelectBtn = (UnityEngine_Component_o *)this->fields.recommendSupportButtonMaskLabel;
        if ( recommendSupportSelectBtn )
        {
          recommendSupportSelectBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                   recommendSupportSelectBtn,
                                                                   0LL);
          if ( recommendSupportSelectBtn )
          {
            UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)recommendSupportSelectBtn,
              (v17 & 1) == 0,
              0LL);
            return;
          }
        }
      }
    }
LABEL_20:
    sub_1B64324(recommendSupportSelectBtn);
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
  Il2CppObject *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  struct UserServantEntity_array *mStandSvtDatas; // x8
  int max_length; // w10
  int v15; // w9
  int32_t mStandSvtIdx; // w11
  int32_t v17; // w11
  UserServantEntity_o *v18; // x21
  StandFigureSlideComponent_o *mStandServant; // x22
  System_Action_o *v20; // x23
  struct StandFigureSlideComponent_o *v21; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  System_Action_o *v24; // x21

  if ( (byte_49F7809 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, end_act);
    sub_1B640C8(&Method_FormationRootComponent___c__DisplayClass37_0__SetupStandServant_b__0__, v5);
    sub_1B640C8(&Method_FormationRootComponent___c__DisplayClass37_0__SetupStandServant_b__1__, v6);
    sub_1B640C8(&FormationRootComponent___c__DisplayClass37_0_TypeInfo, v7);
    byte_49F7809 = 1;
  }
  v8 = (Il2CppObject *)sub_1B64314(FormationRootComponent___c__DisplayClass37_0_TypeInfo, end_act, method);
  System_Object___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_18;
  v8[1].klass = (Il2CppClass *)this;
  sub_1B6406C(&v8[1]);
  v8[1].monitor = end_act;
  v9 = sub_1B6406C(&v8[1].monitor);
  mStandSvtDatas = this->fields.mStandSvtDatas;
  if ( !mStandSvtDatas )
    goto LABEL_18;
  max_length = mStandSvtDatas->max_length;
  if ( max_length < 1 )
  {
LABEL_13:
    v18 = 0LL;
  }
  else
  {
    v15 = 0;
    while ( 1 )
    {
      mStandSvtIdx = this->fields.mStandSvtIdx;
      v17 = mStandSvtIdx + 1 < max_length ? mStandSvtIdx + 1 : 0;
      this->fields.mStandSvtIdx = v17;
      if ( v17 >= (unsigned int)max_length )
        sub_1B6432C(v9, v10, v11, v12);
      v18 = mStandSvtDatas->m_Items[v17];
      if ( v18 )
        break;
      max_length = mStandSvtDatas->max_length;
      if ( ++v15 >= max_length )
        goto LABEL_13;
    }
  }
  mStandServant = this->fields.mStandServant;
  v20 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
  System_Action___ctor(v20, v8, Method_FormationRootComponent___c__DisplayClass37_0__SetupStandServant_b__0__, 0LL);
  if ( !mStandServant
    || (StandFigureSlideComponent__Setup(mStandServant, v18, 0, v20, 0LL),
        v21 = this->fields.mStandServant,
        v24 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v22, v23),
        System_Action___ctor(
          v24,
          v8,
          (intptr_t)Method_FormationRootComponent___c__DisplayClass37_0__SetupStandServant_b__1__,
          0LL),
        !v21) )
  {
LABEL_18:
    sub_1B64324(v9);
  }
  v21->fields.mBtnAct = v24;
  sub_1B6406C(&v21->fields.mBtnAct);
}


void __fastcall FormationRootComponent___FeatureRelease_b__29_0(
        FormationRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *recommendSupportSelectBtnSprite; // x19

  if ( (byte_49F780E & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_20224/*"img_form_menu08"*/, v3);
    byte_49F780E = 1;
  }
  recommendSupportSelectBtnSprite = this->fields.recommendSupportSelectBtnSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(recommendSupportSelectBtnSprite, (System_String_o *)StringLiteral_20224/*"img_form_menu08"*/, 0LL);
}


void __fastcall FormationRootComponent___Init_b__36_2(FormationRootComponent_o *this, const MethodInfo *method)
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
    sub_1B64324(titleInfo);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)titleInfo, 0, 0LL);
}


void __fastcall FormationRootComponent___Init_b__36_3(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  PartyOrganizationUtility_o *Instance; // x0
  CommonUI_o *v8; // x20

  if ( (byte_49F780F & 1) == 0 )
  {
    sub_1B640C8(&AvalonSceneManager_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v5);
    sub_1B640C8(&StringLiteral_6910/*"GO_NEXT"*/, v6);
    byte_49F780F = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  if ( !PartyOrganizationUtility__ExistsTemporaryPartyInfo(Instance, 0LL) )
  {
    Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      Instance = (PartyOrganizationUtility_o *)j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( v8 )
    {
      CommonUI__maskFadein(v8, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
      goto LABEL_11;
    }
LABEL_13:
    sub_1B64324(Instance);
  }
  Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 40, 1, 0LL, 0LL);
LABEL_11:
  Instance = (PartyOrganizationUtility_o *)this->fields.myFSM;
  if ( !Instance )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6910/*"GO_NEXT"*/, 0LL);
}


void __fastcall FormationRootComponent__beginFinish(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *backSkinSprite; // x0

  if ( (byte_49F7807 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v3);
    byte_49F7807 = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 0, 0LL),
        (backSkinSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
    sub_1B64324(backSkinSprite);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)backSkinSprite, 2, 0, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleasePartyOrganizationAtlas(0LL);
}


void __fastcall FormationRootComponent__beginInitialize(FormationRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49F7805 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49F7805 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 3, 30, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall FormationRootComponent__beginStartUp(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *MainBgmName; // x20
  TitleInfoControl_o *titleInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x20

  if ( (byte_49F7806 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AtlasManager_TypeInfo, v3);
    sub_1B640C8(&BgmManager_TypeInfo, v4);
    sub_1B640C8(&Method_FormationRootComponent_EndLoadCommonBg__, v5);
    sub_1B640C8(&SoundManager_TypeInfo, v6);
    byte_49F7806 = 1;
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
    sub_1B64324(titleInfo);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_FormationRootComponent_EndLoadCommonBg__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v12, 2, 1, 0LL);
}


void __fastcall FormationRootComponent__closeArrowMark(FormationRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49F780A & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49F780A = 1;
  }
  if ( this->fields.isTutorial1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_10;
    CommonUI__CloseTutorialNotificationDialogArrow((CommonUI_o *)Instance, 0LL);
  }
  if ( this->fields.isTutorial2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, 0LL, 0LL);
      return;
    }
LABEL_10:
    sub_1B64324(Instance);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FormationRootComponent__setMainActive(
        FormationRootComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *topDispRootObj; // x0

  if ( (byte_49F780B & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentInChildren_UIScrollView___, *(_QWORD *)&type);
    byte_49F780B = 1;
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
          topDispRootObj = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentInChildren_object__48431348(
                                                         (UnityEngine_Component_o *)topDispRootObj,
                                                         (const MethodInfo_2E300F4 *)Method_UnityEngine_Component_GetComponentInChildren_UIScrollView___);
          if ( topDispRootObj )
          {
            UIScrollView__ResetPosition((UIScrollView_o *)topDispRootObj, 0LL);
            return;
          }
        }
      }
    }
LABEL_13:
    sub_1B64324(topDispRootObj);
  }
}


void __fastcall FormationRootComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19

  if ( (byte_49F7810 & 1) == 0 )
  {
    sub_1B640C8(&FormationRootComponent___c_TypeInfo, v1);
    byte_49F7810 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(FormationRootComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  FormationRootComponent___c_TypeInfo->static_fields->__9 = (struct FormationRootComponent___c_o *)v3;
  sub_1B6406C(FormationRootComponent___c_TypeInfo->static_fields);
}


void __fastcall FormationRootComponent___c___ctor(FormationRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FormationRootComponent___c___Init_b__36_0(FormationRootComponent___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall FormationRootComponent___c___Init_b__36_1(FormationRootComponent___c_o *this, const MethodInfo *method)
{
  ;
}


bool __fastcall FormationRootComponent___c___ProgressRelease_b__30_0(
        FormationRootComponent___c_o *this,
        RecommendSupportQuestEntity_o *entity,
        const MethodInfo *method)
{
  int32_t questId; // w19

  if ( (byte_49F7811 & 1) == 0 )
  {
    this = (FormationRootComponent___c_o *)sub_1B640C8(&CondType_TypeInfo, entity);
    byte_49F7811 = 1;
  }
  if ( !entity )
    sub_1B64324(this);
  questId = entity->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_37285996(questId, -1, 0, 0LL);
}


void __fastcall FormationRootComponent___c__DisplayClass37_0___ctor(
        FormationRootComponent___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FormationRootComponent___c__DisplayClass37_0___SetupStandServant_b__0(
        FormationRootComponent___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  struct FormationRootComponent_o *_4__this; // x8
  FormationRootComponent___c__DisplayClass37_0_o *v3; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (FormationRootComponent___c__DisplayClass37_0_o *)_4__this->fields.mStandServant) == 0LL) )
  {
    sub_1B64324(this);
  }
  StandFigureSlideComponent__SlideIn((StandFigureSlideComponent_o *)this, 0LL, 0LL);
  ActionExtensions__Call(v3->fields.end_act, 0LL);
}


void __fastcall FormationRootComponent___c__DisplayClass37_0___SetupStandServant_b__1(
        FormationRootComponent___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  StandFigureSlideComponent_o *_37376848; // x0
  struct FormationRootComponent_o *_4__this; // x8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct FormationRootComponent_o *v12; // x8
  StandFigureSlideComponent_o *mStandServant; // x20
  System_Action_o *_9__2; // x21

  if ( (byte_49F7812 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&TutorialFlag_TypeInfo, v3);
    sub_1B640C8(&Method_FormationRootComponent___c__DisplayClass37_0__SetupStandServant_b__1__, v4);
    sub_1B640C8(&Method_FormationRootComponent___c__DisplayClass37_0__SetupStandServant_b__2__, v5);
    byte_49F7812 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _37376848 = (StandFigureSlideComponent_o *)TutorialFlag__Get_37376848(102, 0LL);
  if ( ((unsigned __int8)_37376848 & 1) != 0 )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      _37376848 = _4__this->fields.mStandServant;
      if ( _37376848 )
      {
        if ( _37376848->fields.mIsLoading || StandFigureSlideComponent__IsMoving(_37376848, 0LL) )
          return;
        v8 = Method_FormationRootComponent___c__DisplayClass37_0__SetupStandServant_b__1__;
        if ( (*((_BYTE *)Method_FormationRootComponent___c__DisplayClass37_0__SetupStandServant_b__1__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_1B640E0();
        v9 = (System_Reflection_MethodBase_o *)sub_1B640AC(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
        v12 = this->fields.__4__this;
        if ( v12 )
        {
          mStandServant = v12->fields.mStandServant;
          _9__2 = this->fields.__9__2;
          if ( !_9__2 )
          {
            _9__2 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
            System_Action___ctor(
              _9__2,
              (Il2CppObject *)this,
              Method_FormationRootComponent___c__DisplayClass37_0__SetupStandServant_b__2__,
              0LL);
            this->fields.__9__2 = _9__2;
            _37376848 = (StandFigureSlideComponent_o *)sub_1B6406C(&this->fields.__9__2);
          }
          if ( mStandServant )
          {
            StandFigureSlideComponent__SlideOut(mStandServant, _9__2, 0, 0LL);
            return;
          }
        }
      }
    }
    sub_1B64324(_37376848);
  }
}


void __fastcall FormationRootComponent___c__DisplayClass37_0___SetupStandServant_b__2(
        FormationRootComponent___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FormationRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
  FormationRootComponent__SetupStandServant(_4__this, 0LL, v2);
}