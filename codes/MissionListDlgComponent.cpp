void __fastcall MissionListDlgComponent___cctor(const MethodInfo *method)
{
  struct MissionListDlgComponent_StaticFields *static_fields; // x8

  if ( (byte_4BE013C & 1) == 0 )
  {
    sub_1C21E38(&MissionListDlgComponent_TypeInfo);
    byte_4BE013C = 1;
  }
  static_fields = MissionListDlgComponent_TypeInfo->static_fields;
  static_fields->SCROLL_ENABLED_VIEW_COUNT = 1;
  *(_QWORD *)&static_fields->SINGLE_DESIGN_TITLE_POS_Y = 0x430C000043340000LL;
  *(_QWORD *)&static_fields->SINGLE_DESIGN_BTN_POS_Y = 0xB4C3250000LL;
}


void __fastcall MissionListDlgComponent___ctor(MissionListDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4BE013B & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    byte_4BE013B = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall MissionListDlgComponent__OnClickClose(MissionListDlgComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *Instance; // x0
  ExUITexture_c *klass; // x8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  MissionListDlgComponent___c_c *v7; // x8
  CommonUI_o *v8; // x19
  System_Action_o *_9__17_0; // x20
  Il2CppObject *v10; // x21
  struct MissionListDlgComponent___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BE013A & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_MissionListDlgComponent_OnClickClose__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&Method_MissionListDlgComponent___c__OnClickClose_b__17_0__);
    sub_1C21E38(&MissionListDlgComponent___c_TypeInfo);
    byte_4BE013A = 1;
  }
  if ( this->fields.isTouchEnabled )
  {
    this->fields.isTouchEnabled = 0;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BD7183 )
    {
      sub_1C21E38(&TerminalSceneComponent_TypeInfo);
      byte_4BD7183 = 1;
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
    v5 = Method_MissionListDlgComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_MissionListDlgComponent_OnClickClose__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C21E50(Method_MissionListDlgComponent_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    Instance = (TitleInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = MissionListDlgComponent___c_TypeInfo;
    v8 = (CommonUI_o *)Instance;
    if ( !MissionListDlgComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListDlgComponent___c_TypeInfo);
      v7 = MissionListDlgComponent___c_TypeInfo;
    }
    _9__17_0 = v7->static_fields->__9__17_0;
    if ( !_9__17_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = MissionListDlgComponent___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v7->static_fields->__9;
      _9__17_0 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(_9__17_0, v10, Method_MissionListDlgComponent___c__OnClickClose_b__17_0__, 0LL);
      static_fields = MissionListDlgComponent___c_TypeInfo->static_fields;
      static_fields->__9__17_0 = _9__17_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__17_0,
        (int64_t)_9__17_0,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    }
    if ( !v8 )
LABEL_23:
      sub_1C22094(Instance, method);
    CommonUI__CloseEventMissionListDialog(v8, _9__17_0, 0LL);
  }
}


void __fastcall MissionListDlgComponent__OnClickMissionList(MissionListDlgComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *v3; // x0
  ExUITexture_c *klass; // x8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_4BE0139 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_MissionListDlgComponent_OnClickMissionList__);
    sub_1C21E38(&Method_MissionListDlgComponent__OnClickMissionList_b__16_0__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BE0139 = 1;
  }
  if ( this->fields.isTouchEnabled )
  {
    this->fields.isTouchEnabled = 0;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BD7183 )
    {
      sub_1C21E38(&TerminalSceneComponent_TypeInfo);
      byte_4BD7183 = 1;
    }
    v3 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v3 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v3->fields.mEventBgTexture->klass;
    if ( !klass )
      goto LABEL_17;
    v3 = *(TitleInfoControl_o **)&klass->_2.instance_size;
    if ( !v3 )
      goto LABEL_17;
    TitleInfoControl__SetTouchEnable(v3, 0, 0LL);
    v5 = Method_MissionListDlgComponent_OnClickMissionList__;
    if ( (*((_BYTE *)Method_MissionListDlgComponent_OnClickMissionList__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C21E50(Method_MissionListDlgComponent_OnClickMissionList__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_MissionListDlgComponent__OnClickMissionList_b__16_0__, 0LL);
    if ( !Instance )
LABEL_17:
      sub_1C22094(v3, method);
    CommonUI__CloseEventMissionListDialog((CommonUI_o *)Instance, v8, 0LL);
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
  __int64 v13; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_Action_o *v52; // x20

  if ( (byte_4BE0138 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_MissionListDlgComponent___c__DisplayClass15_0__OpenEventMissionListDialog_b__0__);
    sub_1C21E38(&MissionListDlgComponent___c__DisplayClass15_0_TypeInfo);
    byte_4BE0138 = 1;
  }
  v13 = sub_1C22084(MissionListDlgComponent___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_10;
  *(_QWORD *)(v13 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = title;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)title, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v13 + 32) = subTitle;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 32), (int64_t)subTitle, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v13 + 40) = eventDetailEnt;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 40), (int64_t)eventDetailEnt, v34, v35, v36, v37, v38, v39);
  *(_QWORD *)(v13 + 48) = eventMissionEntList;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 48), (int64_t)eventMissionEntList, v40, v41, v42, v43, v44, v45);
  *(_QWORD *)(v13 + 56) = missionBtnCallback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 56), (int64_t)missionBtnCallback, v46, v47, v48, v49, v50, v51);
  this->fields.isTouchEnabled = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.maskSprite) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
  {
LABEL_10:
    sub_1C22094(gameObject, v15);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v52 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v52,
    (Il2CppObject *)v13,
    Method_MissionListDlgComponent___c__DisplayClass15_0__OpenEventMissionListDialog_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v52, 0LL);
}


void __fastcall MissionListDlgComponent___OnClickMissionList_b__16_0(
        MissionListDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *v4; // x0
  ExUITexture_c *klass; // x8

  if ( (byte_4BE013D & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BE013D = 1;
  }
  ActionExtensions__Call(this->fields.missionBtnCallbackFunc, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  v4 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v4 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v4->fields.mEventBgTexture->klass;
  if ( !klass || (v4 = *(TitleInfoControl_o **)&klass->_2.instance_size) == 0LL )
    sub_1C22094(v4, v3);
  TitleInfoControl__SetTouchEnable(v4, 1, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseNotification(0LL);
}


void __fastcall MissionListDlgComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BE013E & 1) == 0 )
  {
    sub_1C21E38(&MissionListDlgComponent___c_TypeInfo);
    byte_4BE013E = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(MissionListDlgComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  MissionListDlgComponent___c_TypeInfo->static_fields->__9 = (struct MissionListDlgComponent___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)MissionListDlgComponent___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall MissionListDlgComponent___c___ctor(MissionListDlgComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListDlgComponent___c___OnClickClose_b__17_0(
        MissionListDlgComponent___c_o *this,
        const MethodInfo *method)
{
  TitleInfoControl_o *v2; // x0
  ExUITexture_c *klass; // x8

  if ( (byte_4BE013F & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BE013F = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  v2 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v2->fields.mEventBgTexture->klass;
  if ( !klass || (v2 = *(TitleInfoControl_o **)&klass->_2.instance_size) == 0LL )
    sub_1C22094(v2, method);
  TitleInfoControl__SetTouchEnable(v2, 1, 0LL);
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
  struct MissionListDlgComponent_o *_4__this; // x8
  struct MissionListDlgComponent_o *v4; // x8
  struct MissionListDlgComponent_o *v5; // x8
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct MissionListDlgComponent_o *eventDetailEnt; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_String_o *eventMissionEntList; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_String_o *missionBtnCallback; // x1
  struct MissionListDlgComponent_o *v27; // x8
  UnityEngine_Object_o *eventMissionListViewManager; // x20
  struct EventMissionEntity_array *v29; // x20
  struct MissionListDlgComponent_o *v30; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  MissionListDlgComponent_c *v32; // x8
  UnityEngine_GameObject_o *v33; // x20
  struct MissionListDlgComponent_o *v34; // x8
  UnityEngine_GameObject_o *v35; // x0
  struct MissionListDlgComponent_o *v36; // x8
  struct MissionListDlgComponent_o *v37; // x8
  struct MissionListDlgComponent_o *v38; // x8
  struct MissionListDlgComponent_o *v39; // x8
  struct MissionListDlgComponent_o *v40; // x8
  EventMissionItemListViewManager_o *v41; // x20
  EventMissionEntity_array *v42; // x21
  int32_t v43; // w22
  BaseDialog_o *v44; // x19
  System_Action_o *monitor; // x20
  Il2CppObject *klass; // x21
  struct MissionListDlgComponent___c_StaticFields *static_fields; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7

  v2 = this;
  if ( (byte_4BE0140 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&MissionListDlgComponent_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_MissionListDlgComponent___c__OpenEventMissionListDialog_b__15_1__);
    this = (MissionListDlgComponent___c__DisplayClass15_0_o *)sub_1C21E38(&MissionListDlgComponent___c_TypeInfo);
    byte_4BE0140 = 1;
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
  v4 = v2->fields.__4__this;
  if ( !v4 )
    goto LABEL_48;
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v4->fields.titleLabel;
  if ( !this )
    goto LABEL_48;
  UILabel__set_text((UILabel_o *)this, v2->fields.title, 0LL);
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_48;
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v5->fields.subTitleLabel;
  if ( !this )
    goto LABEL_48;
  UILabel__set_text((UILabel_o *)this, v2->fields.subTitle, 0LL);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_48;
  eventDetailEnt = (struct MissionListDlgComponent_o *)v2->fields.eventDetailEnt;
  this[2].fields.__4__this = eventDetailEnt;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this[2].fields, (int64_t)eventDetailEnt, v6, v7, v8, v9, v10, v11);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_48;
  eventMissionEntList = (struct System_String_o *)v2->fields.eventMissionEntList;
  this[2].fields.title = eventMissionEntList;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this[2].fields.title,
    (int64_t)eventMissionEntList,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_48;
  missionBtnCallback = (struct System_String_o *)v2->fields.missionBtnCallback;
  this[2].fields.subTitle = missionBtnCallback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this[2].fields.subTitle,
    (int64_t)missionBtnCallback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v27 = v2->fields.__4__this;
  if ( !v27 )
    goto LABEL_48;
  eventMissionListViewManager = (UnityEngine_Object_o *)v27->fields.eventMissionListViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)UnityEngine_Object__op_Inequality(
                                                              eventMissionListViewManager,
                                                              0LL,
                                                              0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v29 = v2->fields.eventMissionEntList;
    if ( !v29 )
      goto LABEL_48;
    this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent_TypeInfo;
    if ( !MissionListDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListDlgComponent_TypeInfo);
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent_TypeInfo;
    }
    if ( (__int64)this[2].fields.missionBtnCallback->klass >= v29->max_length )
    {
      v30 = v2->fields.__4__this;
      if ( !v30 )
        goto LABEL_48;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v30->fields.titleLabel;
      if ( !this )
        goto LABEL_48;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v32 = MissionListDlgComponent_TypeInfo;
      v33 = gameObject;
      if ( !MissionListDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MissionListDlgComponent_TypeInfo);
        v32 = MissionListDlgComponent_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v33, v32->static_fields->SINGLE_DESIGN_TITLE_POS_Y, 0LL);
      v34 = v2->fields.__4__this;
      if ( !v34 )
        goto LABEL_48;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v34->fields.subTitleLabel;
      if ( !this )
        goto LABEL_48;
      v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v35,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_SUB_TITLE_POS_Y,
        0LL);
      v36 = v2->fields.__4__this;
      if ( !v36 )
        goto LABEL_48;
      GameObjectExtensions__SetLocalPositionY(
        v36->fields.closeBtn,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_BTN_POS_Y,
        0LL);
      v37 = v2->fields.__4__this;
      if ( !v37 )
        goto LABEL_48;
      GameObjectExtensions__SetLocalPositionY(
        v37->fields.missionBtn,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_BTN_POS_Y,
        0LL);
      v38 = v2->fields.__4__this;
      if ( !v38 )
        goto LABEL_48;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v38->fields.listBg;
      if ( !this )
        goto LABEL_48;
      UIWidget__set_height(
        (UIWidget_o *)this,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_LIST_BG_HEIGHT,
        0LL);
      v39 = v2->fields.__4__this;
      if ( !v39 )
        goto LABEL_48;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v39->fields.eventMissionListViewManager;
      if ( !this )
        goto LABEL_48;
      EventMissionItemListViewManager__SetScrollEnable((EventMissionItemListViewManager_o *)this, 0, 0LL);
    }
    if ( !byte_4BD927B )
    {
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)sub_1C21E38(&EventRewardSaveData_TypeInfo);
      byte_4BD927B = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
    v40 = v2->fields.__4__this;
    if ( v40 )
    {
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v2->fields.eventDetailEnt;
      if ( this )
      {
        v41 = v40->fields.eventMissionListViewManager;
        v42 = v2->fields.eventMissionEntList;
        v43 = (int32_t)this->fields.__4__this;
        this = (MissionListDlgComponent___c__DisplayClass15_0_o *)EventDetailEntity__isDailyMission(
                                                                    (EventDetailEntity_o *)this,
                                                                    0LL);
        if ( v41 )
        {
          EventMissionItemListViewManager__CreateList_47159448(v41, v42, v43, (unsigned __int8)this & 1, 0, 0LL);
          goto LABEL_40;
        }
      }
    }
LABEL_48:
    sub_1C22094(this, method);
  }
LABEL_40:
  v44 = (BaseDialog_o *)v2->fields.__4__this;
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
    monitor = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(monitor, klass, Method_MissionListDlgComponent___c__OpenEventMissionListDialog_b__15_1__, 0LL);
    static_fields = MissionListDlgComponent___c_TypeInfo->static_fields;
    static_fields->__9__15_1 = monitor;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__15_1, (int64_t)monitor, v48, v49, v50, v51, v52, v53);
  }
  if ( !v44 )
    goto LABEL_48;
  BaseDialog__Open(v44, monitor, 1, 0LL);
}