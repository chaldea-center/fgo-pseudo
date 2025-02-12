void __fastcall MissionListDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct MissionListDlgComponent_StaticFields *static_fields; // x8

  if ( (byte_4BCB67A & 1) == 0 )
  {
    sub_1C1ABD4(&MissionListDlgComponent_TypeInfo, v1);
    byte_4BCB67A = 1;
  }
  static_fields = MissionListDlgComponent_TypeInfo->static_fields;
  static_fields->SCROLL_ENABLED_VIEW_COUNT = 1;
  *(_QWORD *)&static_fields->SINGLE_DESIGN_TITLE_POS_Y = 0x430C000043340000LL;
  *(_QWORD *)&static_fields->SINGLE_DESIGN_BTN_POS_Y = 0xB4C3250000LL;
}


void __fastcall MissionListDlgComponent___ctor(MissionListDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4BCB679 & 1) == 0 )
  {
    sub_1C1ABD4(&BaseDialog_TypeInfo, method);
    byte_4BCB679 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall MissionListDlgComponent__OnClickClose(MissionListDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  TitleInfoControl_o *Instance; // x0
  ExUITexture_c *klass; // x8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  MissionListDlgComponent___c_c *v12; // x8
  CommonUI_o *v13; // x19
  System_Action_o *_9__17_0; // x20
  Il2CppObject *v15; // x21
  struct MissionListDlgComponent___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4BCB678 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_MissionListDlgComponent_OnClickClose__, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v5);
    sub_1C1ABD4(&Method_MissionListDlgComponent___c__OnClickClose_b__17_0__, v6);
    sub_1C1ABD4(&MissionListDlgComponent___c_TypeInfo, v7);
    byte_4BCB678 = 1;
  }
  if ( this->fields.isTouchEnabled )
  {
    this->fields.isTouchEnabled = 0;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BC2713 )
    {
      sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, method);
      byte_4BC2713 = 1;
    }
    Instance = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      Instance = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = Instance->fields.mEventBgTexture->klass;
    if ( !klass )
      goto LABEL_23;
    Instance = *(TitleInfoControl_o **)&klass->_2.instance_size;
    if ( !Instance )
      goto LABEL_23;
    TitleInfoControl__SetTouchEnable(Instance, 0, 0LL);
    v10 = Method_MissionListDlgComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_MissionListDlgComponent_OnClickClose__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1C1ABEC(Method_MissionListDlgComponent_OnClickClose__);
    v11 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
    Instance = (TitleInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = MissionListDlgComponent___c_TypeInfo;
    v13 = (CommonUI_o *)Instance;
    if ( !MissionListDlgComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListDlgComponent___c_TypeInfo);
      v12 = MissionListDlgComponent___c_TypeInfo;
    }
    _9__17_0 = v12->static_fields->__9__17_0;
    if ( !_9__17_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = MissionListDlgComponent___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v12->static_fields->__9;
      _9__17_0 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(_9__17_0, v15, Method_MissionListDlgComponent___c__OnClickClose_b__17_0__, 0LL);
      static_fields = MissionListDlgComponent___c_TypeInfo->static_fields;
      static_fields->__9__17_0 = _9__17_0;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&static_fields->__9__17_0,
        (int64_t)_9__17_0,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
    }
    if ( !v13 )
LABEL_23:
      sub_1C1AE30(Instance, method);
    CommonUI__CloseEventMissionListDialog(v13, _9__17_0, 0LL);
  }
}


void __fastcall MissionListDlgComponent__OnClickMissionList(MissionListDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  TitleInfoControl_o *v7; // x0
  ExUITexture_c *klass; // x8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v12; // x21

  if ( (byte_4BCB677 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_MissionListDlgComponent_OnClickMissionList__, v3);
    sub_1C1ABD4(&Method_MissionListDlgComponent__OnClickMissionList_b__16_0__, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v6);
    byte_4BCB677 = 1;
  }
  if ( this->fields.isTouchEnabled )
  {
    this->fields.isTouchEnabled = 0;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BC2713 )
    {
      sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, method);
      byte_4BC2713 = 1;
    }
    v7 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v7 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v7->fields.mEventBgTexture->klass;
    if ( !klass )
      goto LABEL_17;
    v7 = *(TitleInfoControl_o **)&klass->_2.instance_size;
    if ( !v7 )
      goto LABEL_17;
    TitleInfoControl__SetTouchEnable(v7, 0, 0LL);
    v9 = Method_MissionListDlgComponent_OnClickMissionList__;
    if ( (*((_BYTE *)Method_MissionListDlgComponent_OnClickMissionList__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C1ABEC(Method_MissionListDlgComponent_OnClickMissionList__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_MissionListDlgComponent__OnClickMissionList_b__16_0__, 0LL);
    if ( !Instance )
LABEL_17:
      sub_1C1AE30(v7, method);
    CommonUI__CloseEventMissionListDialog((CommonUI_o *)Instance, v12, 0LL);
  }
}


void __fastcall MissionListDlgComponent__OpenEventMissionListDialog(
        MissionListDlgComponent_o *this,
        System_String_o *title,
        System_String_o *subTitle,
        EventDetailEntity_o *eventDetailEnt,
        EventMissionEntity_array *eventMissionEntList,
        System_Action_o *missionBtnCallback,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_Action_o *v55; // x20

  if ( (byte_4BCB676 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, title);
    sub_1C1ABD4(&AtlasManager_TypeInfo, v13);
    sub_1C1ABD4(&Method_MissionListDlgComponent___c__DisplayClass15_0__OpenEventMissionListDialog_b__0__, v14);
    sub_1C1ABD4(&MissionListDlgComponent___c__DisplayClass15_0_TypeInfo, v15);
    byte_4BCB676 = 1;
  }
  v16 = sub_1C1AE20(MissionListDlgComponent___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_10;
  *(_QWORD *)(v16 + 16) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 24) = title;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v16 + 24), (int64_t)title, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v16 + 32) = subTitle;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v16 + 32), (int64_t)subTitle, v31, v32, v33, v34, v35, v36);
  *(_QWORD *)(v16 + 40) = eventDetailEnt;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v16 + 40), (int64_t)eventDetailEnt, v37, v38, v39, v40, v41, v42);
  *(_QWORD *)(v16 + 48) = eventMissionEntList;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v16 + 48), (int64_t)eventMissionEntList, v43, v44, v45, v46, v47, v48);
  *(_QWORD *)(v16 + 56) = missionBtnCallback;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v16 + 56), (int64_t)missionBtnCallback, v49, v50, v51, v52, v53, v54);
  this->fields.isTouchEnabled = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.maskSprite) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
  {
LABEL_10:
    sub_1C1AE30(gameObject, v18);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v55 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(
    v55,
    (Il2CppObject *)v16,
    Method_MissionListDlgComponent___c__DisplayClass15_0__OpenEventMissionListDialog_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v55, 0LL);
}


void __fastcall MissionListDlgComponent___OnClickMissionList_b__16_0(
        MissionListDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  TitleInfoControl_o *v5; // x0
  ExUITexture_c *klass; // x8

  if ( (byte_4BCB67B & 1) == 0 )
  {
    sub_1C1ABD4(&AtlasManager_TypeInfo, method);
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v3);
    byte_4BCB67B = 1;
  }
  ActionExtensions__Call(this->fields.missionBtnCallbackFunc, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BC2713 )
  {
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v4);
    byte_4BC2713 = 1;
  }
  v5 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v5 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v5->fields.mEventBgTexture->klass;
  if ( !klass || (v5 = *(TitleInfoControl_o **)&klass->_2.instance_size) == 0LL )
    sub_1C1AE30(v5, v4);
  TitleInfoControl__SetTouchEnable(v5, 1, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseNotification(0LL);
}


void __fastcall MissionListDlgComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BCB67C & 1) == 0 )
  {
    sub_1C1ABD4(&MissionListDlgComponent___c_TypeInfo, v1);
    byte_4BCB67C = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(MissionListDlgComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MissionListDlgComponent___c_TypeInfo->static_fields->__9 = (struct MissionListDlgComponent___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)MissionListDlgComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall MissionListDlgComponent___c___ctor(MissionListDlgComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListDlgComponent___c___OnClickClose_b__17_0(
        MissionListDlgComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  TitleInfoControl_o *v3; // x0
  ExUITexture_c *klass; // x8

  if ( (byte_4BCB67D & 1) == 0 )
  {
    sub_1C1ABD4(&AtlasManager_TypeInfo, method);
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v2);
    byte_4BCB67D = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BC2713 )
  {
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, method);
    byte_4BC2713 = 1;
  }
  v3 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v3->fields.mEventBgTexture->klass;
  if ( !klass || (v3 = *(TitleInfoControl_o **)&klass->_2.instance_size) == 0LL )
    sub_1C1AE30(v3, method);
  TitleInfoControl__SetTouchEnable(v3, 1, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseNotification(0LL);
}


void __fastcall MissionListDlgComponent___c___OpenEventMissionListDialog_b__15_1(
        MissionListDlgComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MissionListDlgComponent___c__DisplayClass15_0___ctor(
        MissionListDlgComponent___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListDlgComponent___c__DisplayClass15_0___OpenEventMissionListDialog_b__0(
        MissionListDlgComponent___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  MissionListDlgComponent___c__DisplayClass15_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct MissionListDlgComponent_o *_4__this; // x8
  struct MissionListDlgComponent_o *v8; // x8
  struct MissionListDlgComponent_o *v9; // x8
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct MissionListDlgComponent_o *eventDetailEnt; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_String_o *eventMissionEntList; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_String_o *missionBtnCallback; // x1
  struct MissionListDlgComponent_o *v31; // x8
  UnityEngine_Object_o *eventMissionListViewManager; // x20
  struct EventMissionEntity_array *v33; // x20
  struct MissionListDlgComponent_o *v34; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  MissionListDlgComponent_c *v36; // x8
  UnityEngine_GameObject_o *v37; // x20
  struct MissionListDlgComponent_o *v38; // x8
  UnityEngine_GameObject_o *v39; // x0
  struct MissionListDlgComponent_o *v40; // x8
  struct MissionListDlgComponent_o *v41; // x8
  struct MissionListDlgComponent_o *v42; // x8
  struct MissionListDlgComponent_o *v43; // x8
  struct MissionListDlgComponent_o *v44; // x8
  EventMissionItemListViewManager_o *v45; // x20
  EventMissionEntity_array *v46; // x21
  int32_t v47; // w22
  BaseDialog_o *v48; // x19
  System_Action_o *monitor; // x20
  Il2CppObject *klass; // x21
  struct MissionListDlgComponent___c_StaticFields *static_fields; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7

  v2 = this;
  if ( (byte_4BCB67E & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&MissionListDlgComponent_TypeInfo, v3);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v4);
    sub_1C1ABD4(&Method_MissionListDlgComponent___c__OpenEventMissionListDialog_b__15_1__, v5);
    this = (MissionListDlgComponent___c__DisplayClass15_0_o *)sub_1C1ABD4(&MissionListDlgComponent___c_TypeInfo, v6);
    byte_4BCB67E = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_48;
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)_4__this->fields.baseWindow;
  if ( !this )
    goto LABEL_48;
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)UnityEngine_GameObject__get_gameObject(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0LL);
  if ( !this )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v8 = v2->fields.__4__this;
  if ( !v8 )
    goto LABEL_48;
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v8->fields.titleLabel;
  if ( !this )
    goto LABEL_48;
  UILabel__set_text((UILabel_o *)this, v2->fields.title, 0LL);
  v9 = v2->fields.__4__this;
  if ( !v9 )
    goto LABEL_48;
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v9->fields.subTitleLabel;
  if ( !this )
    goto LABEL_48;
  UILabel__set_text((UILabel_o *)this, v2->fields.subTitle, 0LL);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_48;
  eventDetailEnt = (struct MissionListDlgComponent_o *)v2->fields.eventDetailEnt;
  this[2].fields.__4__this = eventDetailEnt;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this[2].fields, (int64_t)eventDetailEnt, v10, v11, v12, v13, v14, v15);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_48;
  eventMissionEntList = (struct System_String_o *)v2->fields.eventMissionEntList;
  this[2].fields.title = eventMissionEntList;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this[2].fields.title,
    (int64_t)eventMissionEntList,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_48;
  missionBtnCallback = (struct System_String_o *)v2->fields.missionBtnCallback;
  this[2].fields.subTitle = missionBtnCallback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this[2].fields.subTitle,
    (int64_t)missionBtnCallback,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v31 = v2->fields.__4__this;
  if ( !v31 )
    goto LABEL_48;
  eventMissionListViewManager = (UnityEngine_Object_o *)v31->fields.eventMissionListViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)UnityEngine_Object__op_Inequality(
                                                              eventMissionListViewManager,
                                                              0LL,
                                                              0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v33 = v2->fields.eventMissionEntList;
    if ( !v33 )
      goto LABEL_48;
    this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent_TypeInfo;
    if ( !MissionListDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListDlgComponent_TypeInfo);
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent_TypeInfo;
    }
    if ( (__int64)this[2].fields.missionBtnCallback->klass >= v33->max_length )
    {
      v34 = v2->fields.__4__this;
      if ( !v34 )
        goto LABEL_48;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v34->fields.titleLabel;
      if ( !this )
        goto LABEL_48;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v36 = MissionListDlgComponent_TypeInfo;
      v37 = gameObject;
      if ( !MissionListDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MissionListDlgComponent_TypeInfo);
        v36 = MissionListDlgComponent_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v37, v36->static_fields->SINGLE_DESIGN_TITLE_POS_Y, 0LL);
      v38 = v2->fields.__4__this;
      if ( !v38 )
        goto LABEL_48;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v38->fields.subTitleLabel;
      if ( !this )
        goto LABEL_48;
      v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v39,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_SUB_TITLE_POS_Y,
        0LL);
      v40 = v2->fields.__4__this;
      if ( !v40 )
        goto LABEL_48;
      GameObjectExtensions__SetLocalPositionY(
        v40->fields.closeBtn,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_BTN_POS_Y,
        0LL);
      v41 = v2->fields.__4__this;
      if ( !v41 )
        goto LABEL_48;
      GameObjectExtensions__SetLocalPositionY(
        v41->fields.missionBtn,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_BTN_POS_Y,
        0LL);
      v42 = v2->fields.__4__this;
      if ( !v42 )
        goto LABEL_48;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v42->fields.listBg;
      if ( !this )
        goto LABEL_48;
      UIWidget__set_height(
        (UIWidget_o *)this,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_LIST_BG_HEIGHT,
        0LL);
      v43 = v2->fields.__4__this;
      if ( !v43 )
        goto LABEL_48;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v43->fields.eventMissionListViewManager;
      if ( !this )
        goto LABEL_48;
      EventMissionItemListViewManager__SetScrollEnable((EventMissionItemListViewManager_o *)this, 0, 0LL);
    }
    if ( !byte_4BC47EC )
    {
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)sub_1C1ABD4(&EventRewardSaveData_TypeInfo, method);
      byte_4BC47EC = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
    v44 = v2->fields.__4__this;
    if ( v44 )
    {
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v2->fields.eventDetailEnt;
      if ( this )
      {
        v45 = v44->fields.eventMissionListViewManager;
        v46 = v2->fields.eventMissionEntList;
        v47 = (int32_t)this->fields.__4__this;
        this = (MissionListDlgComponent___c__DisplayClass15_0_o *)EventDetailEntity__isDailyMission(
                                                                    (EventDetailEntity_o *)this,
                                                                    0LL);
        if ( v45 )
        {
          EventMissionItemListViewManager__CreateList_47094212(v45, v46, v47, (unsigned __int8)this & 1, 0, 0LL);
          goto LABEL_40;
        }
      }
    }
LABEL_48:
    sub_1C1AE30(this, method);
  }
LABEL_40:
  v48 = (BaseDialog_o *)v2->fields.__4__this;
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent___c_TypeInfo;
  if ( !MissionListDlgComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListDlgComponent___c_TypeInfo);
    this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent___c_TypeInfo;
  }
  monitor = (System_Action_o *)this[2].fields.missionBtnCallback->monitor;
  if ( !monitor )
  {
    if ( !LODWORD(this[3].fields.subTitle) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent___c_TypeInfo;
    }
    klass = (Il2CppObject *)this[2].fields.missionBtnCallback->klass;
    monitor = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(monitor, klass, Method_MissionListDlgComponent___c__OpenEventMissionListDialog_b__15_1__, 0LL);
    static_fields = MissionListDlgComponent___c_TypeInfo->static_fields;
    static_fields->__9__15_1 = monitor;
    sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->__9__15_1, (int64_t)monitor, v52, v53, v54, v55, v56, v57);
  }
  if ( !v48 )
    goto LABEL_48;
  BaseDialog__Open(v48, monitor, 1, 0LL);
}