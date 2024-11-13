void __fastcall MissionListDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct MissionListDlgComponent_StaticFields *static_fields; // x8

  if ( (byte_4B19CA9 & 1) == 0 )
  {
    sub_1BCA7E0(&MissionListDlgComponent_TypeInfo, v1, v2);
    byte_4B19CA9 = 1;
  }
  static_fields = MissionListDlgComponent_TypeInfo->static_fields;
  static_fields->SCROLL_ENABLED_VIEW_COUNT = 1;
  *(_QWORD *)&static_fields->SINGLE_DESIGN_TITLE_POS_Y = 0x430C000043340000LL;
  *(_QWORD *)&static_fields->SINGLE_DESIGN_BTN_POS_Y = 0xB4C3250000LL;
}


void __fastcall MissionListDlgComponent___ctor(MissionListDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19CA8 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B19CA8 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall MissionListDlgComponent__OnClickClose(MissionListDlgComponent_o *this, const MethodInfo *method)
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
  TitleInfoControl_o *Instance; // x0
  ExUITexture_c *klass; // x8
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  __int64 v18; // x2
  __int64 v19; // x3
  MissionListDlgComponent___c_c *v20; // x8
  CommonUI_o *v21; // x19
  System_Action_o *_9__17_0; // x20
  Il2CppObject *v23; // x21
  struct MissionListDlgComponent___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4B19CA7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MissionListDlgComponent_OnClickClose__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_MissionListDlgComponent___c__OnClickClose_b__17_0__, v10, v11);
    sub_1BCA7E0(&MissionListDlgComponent___c_TypeInfo, v12, v13);
    byte_4B19CA7 = 1;
  }
  if ( this->fields.isTouchEnabled )
  {
    this->fields.isTouchEnabled = 0;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
      byte_4B10F83 = 1;
    }
    Instance = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
      Instance = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = Instance->fields.mEventBgTexture->klass;
    if ( !klass )
      goto LABEL_23;
    Instance = *(TitleInfoControl_o **)&klass->_2.instance_size;
    if ( !Instance )
      goto LABEL_23;
    TitleInfoControl__SetTouchEnable(Instance, 0, 0LL);
    v16 = Method_MissionListDlgComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_MissionListDlgComponent_OnClickClose__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1BCA7F8(Method_MissionListDlgComponent_OnClickClose__);
    v17 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v16, v16[4]);
    OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
    Instance = (TitleInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = MissionListDlgComponent___c_TypeInfo;
    v21 = (CommonUI_o *)Instance;
    if ( !MissionListDlgComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListDlgComponent___c_TypeInfo, method);
      v20 = MissionListDlgComponent___c_TypeInfo;
    }
    _9__17_0 = v20->static_fields->__9__17_0;
    if ( !_9__17_0 )
    {
      if ( !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20, method);
        v20 = MissionListDlgComponent___c_TypeInfo;
      }
      v23 = (Il2CppObject *)v20->static_fields->__9;
      _9__17_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v18, v19);
      System_Action___ctor(_9__17_0, v23, Method_MissionListDlgComponent___c__OnClickClose_b__17_0__, 0LL);
      static_fields = MissionListDlgComponent___c_TypeInfo->static_fields;
      static_fields->__9__17_0 = _9__17_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__17_0,
        (int64_t)_9__17_0,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
    }
    if ( !v21 )
LABEL_23:
      sub_1BCAA3C(Instance, method);
    CommonUI__CloseEventMissionListDialog(v21, _9__17_0, 0LL);
  }
}


void __fastcall MissionListDlgComponent__OnClickMissionList(MissionListDlgComponent_o *this, const MethodInfo *method)
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
  TitleInfoControl_o *v12; // x0
  ExUITexture_c *klass; // x8
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  Il2CppObject *Instance; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Action_o *v20; // x21

  if ( (byte_4B19CA6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MissionListDlgComponent_OnClickMissionList__, v4, v5);
    sub_1BCA7E0(&Method_MissionListDlgComponent__OnClickMissionList_b__16_0__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v10, v11);
    byte_4B19CA6 = 1;
  }
  if ( this->fields.isTouchEnabled )
  {
    this->fields.isTouchEnabled = 0;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
      byte_4B10F83 = 1;
    }
    v12 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
      v12 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v12->fields.mEventBgTexture->klass;
    if ( !klass )
      goto LABEL_17;
    v12 = *(TitleInfoControl_o **)&klass->_2.instance_size;
    if ( !v12 )
      goto LABEL_17;
    TitleInfoControl__SetTouchEnable(v12, 0, 0LL);
    v14 = Method_MissionListDlgComponent_OnClickMissionList__;
    if ( (*((_BYTE *)Method_MissionListDlgComponent_OnClickMissionList__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1BCA7F8(Method_MissionListDlgComponent_OnClickMissionList__);
    v15 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v14, v14[4]);
    OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v18, v19);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_MissionListDlgComponent__OnClickMissionList_b__16_0__, 0LL);
    if ( !Instance )
LABEL_17:
      sub_1BCAA3C(v12, method);
    CommonUI__CloseEventMissionListDialog((CommonUI_o *)Instance, v20, 0LL);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
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
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  System_Action_o *v61; // x20
  __int64 v62; // x1

  if ( (byte_4B19CA5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, title, subTitle);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_MissionListDlgComponent___c__DisplayClass15_0__OpenEventMissionListDialog_b__0__, v15, v16);
    sub_1BCA7E0(&MissionListDlgComponent___c__DisplayClass15_0_TypeInfo, v17, v18);
    byte_4B19CA5 = 1;
  }
  v19 = sub_1BCAA2C(MissionListDlgComponent___c__DisplayClass15_0_TypeInfo, title, subTitle, eventDetailEnt);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_10;
  *(_QWORD *)(v19 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v19 + 24) = title;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 24), (int64_t)title, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v19 + 32) = subTitle;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 32), (int64_t)subTitle, v34, v35, v36, v37, v38, v39);
  *(_QWORD *)(v19 + 40) = eventDetailEnt;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 40), (int64_t)eventDetailEnt, v40, v41, v42, v43, v44, v45);
  *(_QWORD *)(v19 + 48) = eventMissionEntList;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 48), (int64_t)eventMissionEntList, v46, v47, v48, v49, v50, v51);
  *(_QWORD *)(v19 + 56) = missionBtnCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 56), (int64_t)missionBtnCallback, v52, v53, v54, v55, v56, v57);
  this->fields.isTouchEnabled = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.maskSprite) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
  {
LABEL_10:
    sub_1BCAA3C(gameObject, v21);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v61 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v58, v59, v60);
  System_Action___ctor(
    v61,
    (Il2CppObject *)v19,
    Method_MissionListDlgComponent___c__DisplayClass15_0__OpenEventMissionListDialog_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v62);
  AtlasManager__LoadNotification(v61, 0LL);
}


void __fastcall MissionListDlgComponent___OnClickMissionList_b__16_0(
        MissionListDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  TitleInfoControl_o *v8; // x0
  ExUITexture_c *klass; // x8
  __int64 v10; // x1

  if ( (byte_4B19CAA & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v4, v5);
    byte_4B19CAA = 1;
  }
  ActionExtensions__Call(this->fields.missionBtnCallbackFunc, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v6, v7);
    byte_4B10F83 = 1;
  }
  v8 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6);
    v8 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v8->fields.mEventBgTexture->klass;
  if ( !klass || (v8 = *(TitleInfoControl_o **)&klass->_2.instance_size) == 0LL )
    sub_1BCAA3C(v8, v6);
  TitleInfoControl__SetTouchEnable(v8, 1, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10);
  AtlasManager__ReleaseNotification(0LL);
}


void __fastcall MissionListDlgComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B19CAB & 1) == 0 )
  {
    sub_1BCA7E0(&MissionListDlgComponent___c_TypeInfo, v1, v2);
    byte_4B19CAB = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(MissionListDlgComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  MissionListDlgComponent___c_TypeInfo->static_fields->__9 = (struct MissionListDlgComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)MissionListDlgComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall MissionListDlgComponent___c___ctor(MissionListDlgComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionListDlgComponent___c___OnClickClose_b__17_0(
        MissionListDlgComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  TitleInfoControl_o *v5; // x0
  ExUITexture_c *klass; // x8
  __int64 v7; // x1

  if ( (byte_4B19CAC & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v3, v4);
    byte_4B19CAC = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B10F83 = 1;
  }
  v5 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v5 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v5->fields.mEventBgTexture->klass;
  if ( !klass || (v5 = *(TitleInfoControl_o **)&klass->_2.instance_size) == 0LL )
    sub_1BCAA3C(v5, method);
  TitleInfoControl__SetTouchEnable(v5, 1, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v7);
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
  __int64 v2; // x2
  MissionListDlgComponent___c__DisplayClass15_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct MissionListDlgComponent_o *_4__this; // x8
  struct MissionListDlgComponent_o *v13; // x8
  struct MissionListDlgComponent_o *v14; // x8
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct MissionListDlgComponent_o *eventDetailEnt; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_String_o *eventMissionEntList; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_String_o *missionBtnCallback; // x1
  struct MissionListDlgComponent_o *v36; // x8
  UnityEngine_Object_o *eventMissionListViewManager; // x20
  __int64 v38; // x2
  __int64 v39; // x3
  struct EventMissionEntity_array *v40; // x20
  struct MissionListDlgComponent_o *v41; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v43; // x1
  MissionListDlgComponent_c *v44; // x8
  UnityEngine_GameObject_o *v45; // x20
  struct MissionListDlgComponent_o *v46; // x8
  UnityEngine_GameObject_o *v47; // x0
  struct MissionListDlgComponent_o *v48; // x8
  struct MissionListDlgComponent_o *v49; // x8
  struct MissionListDlgComponent_o *v50; // x8
  struct MissionListDlgComponent_o *v51; // x8
  struct MissionListDlgComponent_o *v52; // x8
  EventMissionItemListViewManager_o *v53; // x20
  EventMissionEntity_array *v54; // x21
  int32_t v55; // w22
  BaseDialog_o *v56; // x19
  System_Action_o *monitor; // x20
  Il2CppObject *klass; // x21
  struct MissionListDlgComponent___c_StaticFields *static_fields; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7

  v3 = this;
  if ( (byte_4B19CAD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&MissionListDlgComponent_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_MissionListDlgComponent___c__OpenEventMissionListDialog_b__15_1__, v8, v9);
    this = (MissionListDlgComponent___c__DisplayClass15_0_o *)sub_1BCA7E0(
                                                                &MissionListDlgComponent___c_TypeInfo,
                                                                v10,
                                                                v11);
    byte_4B19CAD = 1;
  }
  _4__this = v3->fields.__4__this;
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
  v13 = v3->fields.__4__this;
  if ( !v13 )
    goto LABEL_48;
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v13->fields.titleLabel;
  if ( !this )
    goto LABEL_48;
  UILabel__set_text((UILabel_o *)this, v3->fields.title, 0LL);
  v14 = v3->fields.__4__this;
  if ( !v14 )
    goto LABEL_48;
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v14->fields.subTitleLabel;
  if ( !this )
    goto LABEL_48;
  UILabel__set_text((UILabel_o *)this, v3->fields.subTitle, 0LL);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v3->fields.__4__this;
  if ( !this )
    goto LABEL_48;
  eventDetailEnt = (struct MissionListDlgComponent_o *)v3->fields.eventDetailEnt;
  this[2].fields.__4__this = eventDetailEnt;
  sub_1BCA784((PartyOrganizationUtility_o *)&this[2].fields, (int64_t)eventDetailEnt, v15, v16, v17, v18, v19, v20);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v3->fields.__4__this;
  if ( !this )
    goto LABEL_48;
  eventMissionEntList = (struct System_String_o *)v3->fields.eventMissionEntList;
  this[2].fields.title = eventMissionEntList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this[2].fields.title,
    (int64_t)eventMissionEntList,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v3->fields.__4__this;
  if ( !this )
    goto LABEL_48;
  missionBtnCallback = (struct System_String_o *)v3->fields.missionBtnCallback;
  this[2].fields.subTitle = missionBtnCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this[2].fields.subTitle,
    (int64_t)missionBtnCallback,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v36 = v3->fields.__4__this;
  if ( !v36 )
    goto LABEL_48;
  eventMissionListViewManager = (UnityEngine_Object_o *)v36->fields.eventMissionListViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)UnityEngine_Object__op_Inequality(
                                                              eventMissionListViewManager,
                                                              0LL,
                                                              0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v40 = v3->fields.eventMissionEntList;
    if ( !v40 )
      goto LABEL_48;
    this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent_TypeInfo;
    if ( !MissionListDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListDlgComponent_TypeInfo, method);
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent_TypeInfo;
    }
    if ( (__int64)this[2].fields.missionBtnCallback->klass >= v40->max_length )
    {
      v41 = v3->fields.__4__this;
      if ( !v41 )
        goto LABEL_48;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v41->fields.titleLabel;
      if ( !this )
        goto LABEL_48;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v44 = MissionListDlgComponent_TypeInfo;
      v45 = gameObject;
      if ( !MissionListDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MissionListDlgComponent_TypeInfo, v43);
        v44 = MissionListDlgComponent_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v45, v44->static_fields->SINGLE_DESIGN_TITLE_POS_Y, 0LL);
      v46 = v3->fields.__4__this;
      if ( !v46 )
        goto LABEL_48;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v46->fields.subTitleLabel;
      if ( !this )
        goto LABEL_48;
      v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v47,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_SUB_TITLE_POS_Y,
        0LL);
      v48 = v3->fields.__4__this;
      if ( !v48 )
        goto LABEL_48;
      GameObjectExtensions__SetLocalPositionY(
        v48->fields.closeBtn,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_BTN_POS_Y,
        0LL);
      v49 = v3->fields.__4__this;
      if ( !v49 )
        goto LABEL_48;
      GameObjectExtensions__SetLocalPositionY(
        v49->fields.missionBtn,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_BTN_POS_Y,
        0LL);
      v50 = v3->fields.__4__this;
      if ( !v50 )
        goto LABEL_48;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v50->fields.listBg;
      if ( !this )
        goto LABEL_48;
      UIWidget__set_height(
        (UIWidget_o *)this,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_LIST_BG_HEIGHT,
        0LL);
      v51 = v3->fields.__4__this;
      if ( !v51 )
        goto LABEL_48;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v51->fields.eventMissionListViewManager;
      if ( !this )
        goto LABEL_48;
      EventMissionItemListViewManager__SetScrollEnable((EventMissionItemListViewManager_o *)this, 0, 0LL);
    }
    if ( !byte_4B12FA9 )
    {
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)sub_1BCA7E0(&EventRewardSaveData_TypeInfo, method, v38);
      byte_4B12FA9 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
    v52 = v3->fields.__4__this;
    if ( v52 )
    {
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v3->fields.eventDetailEnt;
      if ( this )
      {
        v53 = v52->fields.eventMissionListViewManager;
        v54 = v3->fields.eventMissionEntList;
        v55 = (int32_t)this->fields.__4__this;
        this = (MissionListDlgComponent___c__DisplayClass15_0_o *)EventDetailEntity__isDailyMission(
                                                                    (EventDetailEntity_o *)this,
                                                                    0LL);
        if ( v53 )
        {
          EventMissionItemListViewManager__CreateList_46554360(v53, v54, v55, (unsigned __int8)this & 1, 0, 0LL);
          goto LABEL_40;
        }
      }
    }
LABEL_48:
    sub_1BCAA3C(this, method);
  }
LABEL_40:
  v56 = (BaseDialog_o *)v3->fields.__4__this;
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent___c_TypeInfo;
  if ( !MissionListDlgComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListDlgComponent___c_TypeInfo, method);
    this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent___c_TypeInfo;
  }
  monitor = (System_Action_o *)this[2].fields.missionBtnCallback->monitor;
  if ( !monitor )
  {
    if ( !LODWORD(this[3].fields.subTitle) )
    {
      j_il2cpp_runtime_class_init_0(this, method);
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent___c_TypeInfo;
    }
    klass = (Il2CppObject *)this[2].fields.missionBtnCallback->klass;
    monitor = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v38, v39);
    System_Action___ctor(monitor, klass, Method_MissionListDlgComponent___c__OpenEventMissionListDialog_b__15_1__, 0LL);
    static_fields = MissionListDlgComponent___c_TypeInfo->static_fields;
    static_fields->__9__15_1 = monitor;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__15_1, (int64_t)monitor, v60, v61, v62, v63, v64, v65);
  }
  if ( !v56 )
    goto LABEL_48;
  BaseDialog__Open(v56, monitor, 1, 0LL);
}