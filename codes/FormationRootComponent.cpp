void __fastcall FormationRootComponent___ctor(FormationRootComponent_o *this, const MethodInfo *method)
{
  this->fields.TUTORIAL_FORMATION_ARROW_POS = (struct UnityEngine_Vector2_o)0x4316000042280000LL;
  this->fields.TUTORIAL_FORMATION_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_B705F0;
  this->fields.TUTORIAL_FORMATION_MESSAGE_POS = (struct UnityEngine_Vector2_o)0xC220000000000000LL;
  this->fields.TUTORIAL_BACK_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_B71570;
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FormationRootComponent__EndLoadCommonBg(FormationRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *backSkinSprite; // x0

  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL )
  {
    sub_1B00F28(backSkinSprite, method);
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
  bool _36489460; // w20
  CommonUI_o *v19; // x20
  FormationRootComponent___c_c *v20; // x8
  System_Action_o *_9__28_0; // x21
  Il2CppObject *v22; // x22
  struct FormationRootComponent___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
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
  System_Action_o *_9__28_1; // x22
  Il2CppObject *v49; // x23
  struct FormationRootComponent___c_StaticFields *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  Il2CppObject *MasterData_object; // x20
  struct UserServantEntity_array *UserServantListFromDeckReaveHeroine; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  System_Action_o *v57; // x20
  const MethodInfo *v58; // x2
  float m_YMin; // [xsp+58h] [xbp-48h]
  float y; // [xsp+5Ch] [xbp-44h]
  UnityEngine_Vector2_o v61; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v62; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v63; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4
  UnityEngine_Rect_o v64; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_48E6AEC & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserDeckMaster___, v3);
    sub_1B00CCC(&FSUtility_TypeInfo, v4);
    sub_1B00CCC(&Method_FormationRootComponent__Init_b__28_2__, v5);
    sub_1B00CCC(&Method_FormationRootComponent__Init_b__28_3__, v6);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___, v7);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v8);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B00CCC(&TutorialFlag_TypeInfo, v11);
    sub_1B00CCC(&Method_FormationRootComponent___c__Init_b__28_0__, v12);
    sub_1B00CCC(&Method_FormationRootComponent___c__Init_b__28_1__, v13);
    sub_1B00CCC(&FormationRootComponent___c_TypeInfo, v14);
    sub_1B00CCC(&StringLiteral_13277/*"TUTORIAL_MESSAGE_FORMATION1"*/, v15);
    byte_48E6AEC = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_65;
  TitleInfoControl__changeTitleInfo_35993624(titleInfo, 1, 18, 0, 0LL);
  FormationRootComponent__setMainActive(this, 0, v17);
  titleInfo = this->fields.titleInfo;
  *(_WORD *)&this->fields.isTutorial1 = 0;
  if ( !titleInfo )
    goto LABEL_65;
  TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0LL);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _36489460 = TutorialFlag__Get_36489460(102, 0LL);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( _36489460 )
  {
    if ( !TutorialFlag__Get_36489460(109, 0LL) )
    {
      titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v19 = (CommonUI_o *)titleInfo;
      v20 = FormationRootComponent___c_TypeInfo;
      if ( !FormationRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FormationRootComponent___c_TypeInfo);
        v20 = FormationRootComponent___c_TypeInfo;
      }
      _9__28_0 = v20->static_fields->__9__28_0;
      if ( !_9__28_0 )
      {
        if ( !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          v20 = FormationRootComponent___c_TypeInfo;
        }
        v22 = (Il2CppObject *)v20->static_fields->__9;
        _9__28_0 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
        System_Action___ctor(_9__28_0, v22, Method_FormationRootComponent___c__Init_b__28_0__, 0LL);
        static_fields = FormationRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__28_0 = _9__28_0;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__28_0, (int32_t)_9__28_0, v24, v25);
      }
      if ( v19 )
      {
        CommonUI__OpenTutorialImageDialog_29962012(v19, 3, 109, _9__28_0, 0LL, 0LL, 0LL);
        goto LABEL_57;
      }
LABEL_65:
      sub_1B00F28(titleInfo, method);
    }
  }
  else if ( TutorialFlag__IsProgressDone(2, 0LL) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_36489460(101, 0LL) )
    {
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
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
                            titleInfo = (TitleInfoControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                (UnityEngine_GameObject_o *)titleInfo,
                                                                (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
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
                              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                              titleInfo = (TitleInfoControl_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_13277/*"TUTORIAL_MESSAGE_FORMATION1"*/,
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
                              _9__28_1 = v47->static_fields->__9__28_1;
                              if ( !_9__28_1 )
                              {
                                if ( !v47->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(v47);
                                  v47 = FormationRootComponent___c_TypeInfo;
                                }
                                v49 = (Il2CppObject *)v47->static_fields->__9;
                                _9__28_1 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
                                System_Action___ctor(
                                  _9__28_1,
                                  v49,
                                  Method_FormationRootComponent___c__Init_b__28_1__,
                                  0LL);
                                v50 = FormationRootComponent___c_TypeInfo->static_fields;
                                v50->__9__28_1 = _9__28_1;
                                sub_1B00C70(
                                  (ServantStatusBattleListViewItem_o *)&v50->__9__28_1,
                                  (int32_t)_9__28_1,
                                  v51,
                                  v52);
                              }
                              if ( Instance )
                              {
                                v63.fields.m_YMin = m_YMin;
                                v62.fields.y = y;
                                v62.fields.x = x + v41;
                                v63.fields.m_XMin = m_XMin + v42;
                                v63.fields.m_Width = m_Width;
                                v63.fields.m_Height = m_Height;
                                CommonUI__OpenTutorialNotificationDialogArrow(
                                  (CommonUI_o *)Instance,
                                  v46,
                                  v62,
                                  v63,
                                  90.0,
                                  (UnityEngine_Vector2_o)__PAIR64__(LODWORD(v45), LODWORD(v44)),
                                  -1,
                                  _9__28_1,
                                  0LL);
                                goto LABEL_57;
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
        goto LABEL_65;
      }
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( TutorialFlag__IsProgressDone(3, 0LL) )
      {
        this->fields.isTutorial2 = 1;
        titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
          v34 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v35 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
          System_Action___ctor(v35, (Il2CppObject *)this, Method_FormationRootComponent__Init_b__28_2__, 0LL);
          if ( v34 )
          {
            v64.fields.m_XMin = v29 - v33;
            v61.fields.x = TutorialBackArrowPos.fields.x - v32;
            v61.fields.y = TutorialBackArrowPos.fields.y;
            v64.fields.m_YMin = v28;
            v64.fields.m_Width = v30;
            v64.fields.m_Height = v31;
            CommonUI__OpenTutorialArrowMark((CommonUI_o *)v34, v61, 180.0, v64, v35, 0LL);
            goto LABEL_57;
          }
        }
        goto LABEL_65;
      }
    }
  }
LABEL_57:
  titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !titleInfo )
    goto LABEL_65;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)titleInfo,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  titleInfo = (TitleInfoControl_o *)TutorialFlag__Get_36489460(126, 0LL);
  if ( !MasterData_object )
    goto LABEL_65;
  if ( ((unsigned __int8)titleInfo & 1) != 0 )
    UserServantListFromDeckReaveHeroine = UserDeckMaster__GetUserServantListFromDeckReaveHeroine(
                                            (UserDeckMaster_o *)MasterData_object,
                                            0LL);
  else
    UserServantListFromDeckReaveHeroine = UserDeckMaster__GetUserServantListFromDeck(
                                            (UserDeckMaster_o *)MasterData_object,
                                            0LL);
  this->fields.mStandSvtDatas = UserServantListFromDeckReaveHeroine;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.mStandSvtDatas,
    (int32_t)UserServantListFromDeckReaveHeroine,
    v55,
    v56);
  this->fields.mStandSvtIdx = -1;
  v57 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v57, (Il2CppObject *)this, Method_FormationRootComponent__Init_b__28_3__, 0LL);
  FormationRootComponent__SetupStandServant(this, v57, v58);
}


void __fastcall FormationRootComponent__OnClickBack(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  System_String_o **v5; // x8

  if ( (byte_48E6AF0 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_3488/*"CLICK_BACK"*/, method);
    sub_1B00CCC(&StringLiteral_3534/*"CLICK_TERMINAL"*/, v3);
    byte_48E6AF0 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1B00F28(0LL, method);
  if ( this->fields.type == 1 )
    v5 = (System_String_o **)&StringLiteral_3488/*"CLICK_BACK"*/;
  else
    v5 = (System_String_o **)&StringLiteral_3534/*"CLICK_TERMINAL"*/;
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
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  struct UserServantEntity_array *mStandSvtDatas; // x8
  int max_length; // w10
  int v17; // w9
  int32_t mStandSvtIdx; // w11
  int32_t v19; // w11
  UserServantEntity_o *v20; // x21
  StandFigureSlideComponent_o *mStandServant; // x22
  System_Action_o *v22; // x23
  struct StandFigureSlideComponent_o *v23; // x19
  System_Action_o *v24; // x21
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_48E6AED & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, end_act);
    sub_1B00CCC(&Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__0__, v5);
    sub_1B00CCC(&Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__1__, v6);
    sub_1B00CCC(&FormationRootComponent___c__DisplayClass29_0_TypeInfo, v7);
    byte_48E6AED = 1;
  }
  v8 = sub_1B00F18(FormationRootComponent___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_18;
  *(_QWORD *)(v8 + 16) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v8 + 24) = end_act;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)end_act, v13, v14);
  mStandSvtDatas = this->fields.mStandSvtDatas;
  if ( !mStandSvtDatas )
    goto LABEL_18;
  max_length = mStandSvtDatas->max_length;
  if ( max_length < 1 )
  {
LABEL_13:
    v20 = 0LL;
  }
  else
  {
    v17 = 0;
    while ( 1 )
    {
      mStandSvtIdx = this->fields.mStandSvtIdx;
      v19 = mStandSvtIdx + 1 < max_length ? mStandSvtIdx + 1 : 0;
      this->fields.mStandSvtIdx = v19;
      if ( v19 >= (unsigned int)max_length )
        sub_1B00F30(v9, v10);
      v20 = mStandSvtDatas->m_Items[v19];
      if ( v20 )
        break;
      max_length = mStandSvtDatas->max_length;
      if ( ++v17 >= max_length )
        goto LABEL_13;
    }
  }
  mStandServant = this->fields.mStandServant;
  v22 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v8,
    Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__0__,
    0LL);
  if ( !mStandServant
    || (StandFigureSlideComponent__Setup(mStandServant, v20, 0, v22, 0LL),
        v23 = this->fields.mStandServant,
        v24 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo),
        System_Action___ctor(
          v24,
          (Il2CppObject *)v8,
          (intptr_t)Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__1__,
          0LL),
        !v23) )
  {
LABEL_18:
    sub_1B00F28(v9, v10);
  }
  v23->fields.mBtnAct = v24;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v23->fields.mBtnAct, (int32_t)v24, v25, v26);
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
    sub_1B00F28(titleInfo, method);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)titleInfo, 0, 0LL);
}


void __fastcall FormationRootComponent___Init_b__28_3(FormationRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v8; // x1
  CommonUI_o *v9; // x20

  if ( (byte_48E6AF1 & 1) == 0 )
  {
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_1B00CCC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v5);
    sub_1B00CCC(&StringLiteral_6864/*"GO_NEXT"*/, v6);
    byte_48E6AF1 = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  if ( !PartyOrganizationUtility__ExistsTemporaryPartyInfo(Instance, 0LL) )
  {
    Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( v9 )
    {
      CommonUI__maskFadein(v9, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
      goto LABEL_11;
    }
LABEL_13:
    sub_1B00F28(Instance, v8);
  }
  Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 40, 1, 0LL, 0LL);
LABEL_11:
  Instance = (PartyOrganizationUtility_o *)this->fields.myFSM;
  if ( !Instance )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6864/*"GO_NEXT"*/, 0LL);
}


void __fastcall FormationRootComponent__beginFinish(FormationRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *backSkinSprite; // x0

  if ( (byte_48E6AEB & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, method);
    byte_48E6AEB = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 0, 0LL),
        (backSkinSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
    sub_1B00F28(backSkinSprite, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)backSkinSprite, 2, 0, 0LL);
}


void __fastcall FormationRootComponent__beginInitialize(FormationRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_48E6AE9 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_48E6AE9 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 3, 30, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v4);
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

  if ( (byte_48E6AEA & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&AtlasManager_TypeInfo, v3);
    sub_1B00CCC(&BgmManager_TypeInfo, v4);
    sub_1B00CCC(&Method_FormationRootComponent_EndLoadCommonBg__, v5);
    sub_1B00CCC(&SoundManager_TypeInfo, v6);
    byte_48E6AEA = 1;
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
    sub_1B00F28(titleInfo, v8);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  v11 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_FormationRootComponent_EndLoadCommonBg__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v11, 2, 1, 0LL);
}


void __fastcall FormationRootComponent__closeArrowMark(FormationRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_48E6AEE & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_48E6AEE = 1;
  }
  if ( this->fields.isTutorial1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_10;
    CommonUI__CloseTutorialNotificationDialogArrow((CommonUI_o *)Instance, 0LL);
  }
  if ( this->fields.isTutorial2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, 0LL, 0LL);
      return;
    }
LABEL_10:
    sub_1B00F28(Instance, v4);
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

  if ( (byte_48E6AEF & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponentInChildren_UIScrollView___, *(_QWORD *)&type);
    byte_48E6AEF = 1;
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
          topDispRootObj = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentInChildren_object__47552792(
                                                         (UnityEngine_Component_o *)topDispRootObj,
                                                         (const MethodInfo_2D59918 *)Method_UnityEngine_Component_GetComponentInChildren_UIScrollView___);
          if ( topDispRootObj )
          {
            UIScrollView__ResetPosition((UIScrollView_o *)topDispRootObj, 0LL);
            return;
          }
        }
      }
    }
LABEL_13:
    sub_1B00F28(topDispRootObj, v5);
  }
}


void __fastcall FormationRootComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E6AF2 & 1) == 0 )
  {
    sub_1B00CCC(&FormationRootComponent___c_TypeInfo, v1);
    byte_48E6AF2 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(FormationRootComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FormationRootComponent___c_TypeInfo->static_fields->__9 = (struct FormationRootComponent___c_o *)v2;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)FormationRootComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B00F28(this, method);
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
  StandFigureSlideComponent_o *_36489460; // x0
  __int64 v7; // x1
  struct FormationRootComponent_o *_4__this; // x8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  struct FormationRootComponent_o *v11; // x8
  StandFigureSlideComponent_o *mStandServant; // x20
  System_Action_o *_9__2; // x21
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_48E6AF3 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&TutorialFlag_TypeInfo, v3);
    sub_1B00CCC(&Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__1__, v4);
    sub_1B00CCC(&Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__2__, v5);
    byte_48E6AF3 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _36489460 = (StandFigureSlideComponent_o *)TutorialFlag__Get_36489460(102, 0LL);
  if ( ((unsigned __int8)_36489460 & 1) != 0 )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      _36489460 = _4__this->fields.mStandServant;
      if ( _36489460 )
      {
        if ( _36489460->fields.mIsLoading || StandFigureSlideComponent__IsMoving(_36489460, 0LL) )
          return;
        v9 = Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__1__;
        if ( (*((_BYTE *)Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__1__ + 83) & 2) != 0 )
          v9 = (_QWORD *)sub_1B00CE4(Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__1__);
        v10 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v9, v9[4]);
        OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
        v11 = this->fields.__4__this;
        if ( v11 )
        {
          mStandServant = v11->fields.mStandServant;
          _9__2 = this->fields.__9__2;
          if ( !_9__2 )
          {
            _9__2 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
            System_Action___ctor(
              _9__2,
              (Il2CppObject *)this,
              Method_FormationRootComponent___c__DisplayClass29_0__SetupStandServant_b__2__,
              0LL);
            this->fields.__9__2 = _9__2;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v14, v15);
          }
          if ( mStandServant )
          {
            StandFigureSlideComponent__SlideOut(mStandServant, _9__2, 0, 0LL);
            return;
          }
        }
      }
    }
    sub_1B00F28(_36489460, v7);
  }
}


void __fastcall FormationRootComponent___c__DisplayClass29_0___SetupStandServant_b__2(
        FormationRootComponent___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FormationRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B00F28(0LL, method);
  FormationRootComponent__SetupStandServant(_4__this, 0LL, v2);
}