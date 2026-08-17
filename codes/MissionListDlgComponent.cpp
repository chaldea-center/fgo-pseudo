void MissionListDlgComponent___cctor(const MethodInfo *method)
{
  struct MissionListDlgComponent_StaticFields *static_fields; // x8

  if ( (byte_596A101 & 1) == 0 )
  {
    sub_2213A60(&MissionListDlgComponent_TypeInfo);
    byte_596A101 = 1;
  }
  static_fields = MissionListDlgComponent_TypeInfo->static_fields;
  static_fields->SCROLL_ENABLED_VIEW_COUNT = 1;
  *(_QWORD *)&static_fields->SINGLE_DESIGN_TITLE_POS_Y = 0x430C000043340000LL;
  *(_QWORD *)&static_fields->SINGLE_DESIGN_BTN_POS_Y = 0xB4C3250000LL;
}


void MissionListDlgComponent___ctor(MissionListDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596A100 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596A100 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void MissionListDlgComponent__OnClickClose(MissionListDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoControl_o *genericContainerHandle; // x0
  System_String_c *klass; // x8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x2
  MissionListDlgComponent___c_c *v9; // x8
  CommonUI_o *v10; // x19
  struct MissionListDlgComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__17_0; // x20
  Il2CppObject *v13; // x21
  struct MissionListDlgComponent___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_596A0FF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_MissionListDlgComponent_OnClickClose__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_MissionListDlgComponent___c__OnClickClose_b__17_0__);
    sub_2213A60(&MissionListDlgComponent___c_TypeInfo);
    byte_596A0FF = 1;
  }
  if ( this->fields.isTouchEnabled )
  {
    this->fields.isTouchEnabled = 0;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.particleAssetName->klass;
    if ( !klass )
      goto LABEL_23;
    genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle;
    if ( !genericContainerHandle )
      goto LABEL_23;
    TitleInfoControl__SetTouchEnable(genericContainerHandle, 0, 0);
    v6 = Method_MissionListDlgComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_MissionListDlgComponent_OnClickClose__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_2213A78(Method_MissionListDlgComponent_OnClickClose__);
    v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    genericContainerHandle = (TitleInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = MissionListDlgComponent___c_TypeInfo;
    v10 = (CommonUI_o *)genericContainerHandle;
    if ( !*(&MissionListDlgComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MissionListDlgComponent___c_TypeInfo, method, v8);
      v9 = MissionListDlgComponent___c_TypeInfo;
    }
    static_fields = v9->static_fields;
    _9__17_0 = static_fields->__9__17_0;
    if ( !_9__17_0 )
    {
      if ( !*(&v9->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v9, method, v8);
        static_fields = MissionListDlgComponent___c_TypeInfo->static_fields;
      }
      v13 = (Il2CppObject *)static_fields->__9;
      _9__17_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(_9__17_0, v13, Method_MissionListDlgComponent___c__OnClickClose_b__17_0__, 0);
      v14 = MissionListDlgComponent___c_TypeInfo->static_fields;
      v14->__9__17_0 = _9__17_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->__9__17_0, (int32_t)_9__17_0, v15, v16, v17, v18, v19, v20);
    }
    if ( !v10 )
LABEL_23:
      sub_2213CDC(genericContainerHandle, method);
    CommonUI__CloseEventMissionListDialog(v10, _9__17_0, 0);
  }
}


void MissionListDlgComponent__OnClickMissionList(MissionListDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoControl_o *genericContainerHandle; // x0
  System_String_c *klass; // x8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v9; // x21

  if ( (byte_596A0FE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_MissionListDlgComponent_OnClickMissionList__);
    sub_2213A60(&Method_MissionListDlgComponent__OnClickMissionList_b__16_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A0FE = 1;
  }
  if ( this->fields.isTouchEnabled )
  {
    this->fields.isTouchEnabled = 0;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.particleAssetName->klass;
    if ( !klass )
      goto LABEL_17;
    genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle;
    if ( !genericContainerHandle )
      goto LABEL_17;
    TitleInfoControl__SetTouchEnable(genericContainerHandle, 0, 0);
    v6 = Method_MissionListDlgComponent_OnClickMissionList__;
    if ( (*((_BYTE *)Method_MissionListDlgComponent_OnClickMissionList__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_2213A78(Method_MissionListDlgComponent_OnClickMissionList__);
    v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_MissionListDlgComponent__OnClickMissionList_b__16_0__, 0);
    if ( !Instance )
LABEL_17:
      sub_2213CDC(genericContainerHandle, method);
    CommonUI__CloseEventMissionListDialog((CommonUI_o *)Instance, v9, 0);
  }
}


void MissionListDlgComponent__OpenEventMissionListDialog(
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
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_Action_o *v52; // x20
  __int64 v53; // x1
  __int64 v54; // x2

  if ( (byte_596A0FD & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_MissionListDlgComponent___c__DisplayClass15_0__OpenEventMissionListDialog_b__0__);
    sub_2213A60(&MissionListDlgComponent___c__DisplayClass15_0_TypeInfo);
    byte_596A0FD = 1;
  }
  v13 = sub_2213CCC(MissionListDlgComponent___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_10;
  *(_QWORD *)(v13 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = title;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 24), (int32_t)title, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v13 + 32) = subTitle;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 32), (int32_t)subTitle, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v13 + 40) = eventDetailEnt;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 40), (int32_t)eventDetailEnt, v34, v35, v36, v37, v38, v39);
  *(_QWORD *)(v13 + 48) = eventMissionEntList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v13 + 48),
    (int32_t)eventMissionEntList,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  *(_QWORD *)(v13 + 56) = missionBtnCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 56), (int32_t)missionBtnCallback, v46, v47, v48, v49, v50, v51);
  this->fields.isTouchEnabled = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.maskSprite) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0 )
  {
LABEL_10:
    sub_2213CDC(gameObject, v15);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v52 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v52,
    (Il2CppObject *)v13,
    Method_MissionListDlgComponent___c__DisplayClass15_0__OpenEventMissionListDialog_b__0__,
    0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v53, v54);
  AtlasManager__LoadNotification(v52, 0);
}


void MissionListDlgComponent___OnClickMissionList_b__16_0(MissionListDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  TitleInfoControl_o *genericContainerHandle; // x0
  System_String_c *klass; // x8
  __int64 v7; // x1
  __int64 v8; // x2

  if ( (byte_596A102 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A102 = 1;
  }
  ActionExtensions__Call(this->fields.missionBtnCallbackFunc, 0);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v3, v4);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v3, v4);
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = genericContainerHandle->fields.particleAssetName->klass;
  if ( !klass || (genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle) == 0 )
    sub_2213CDC(genericContainerHandle, v3);
  TitleInfoControl__SetTouchEnable(genericContainerHandle, 1, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v7, v8);
  AtlasManager__ReleaseNotification(0);
}


void MissionListDlgComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596A103 & 1) == 0 )
  {
    sub_2213A60(&MissionListDlgComponent___c_TypeInfo);
    byte_596A103 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(MissionListDlgComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MissionListDlgComponent___c_TypeInfo->static_fields->__9 = (struct MissionListDlgComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)MissionListDlgComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MissionListDlgComponent___c___ctor(MissionListDlgComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListDlgComponent___c___OnClickClose_b__17_0(MissionListDlgComponent___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoControl_o *genericContainerHandle; // x0
  System_String_c *klass; // x8
  __int64 v5; // x1
  __int64 v6; // x2

  if ( (byte_596A104 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A104 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = genericContainerHandle->fields.particleAssetName->klass;
  if ( !klass || (genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle) == 0 )
    sub_2213CDC(genericContainerHandle, method);
  TitleInfoControl__SetTouchEnable(genericContainerHandle, 1, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v5, v6);
  AtlasManager__ReleaseNotification(0);
}


void MissionListDlgComponent___c___OpenEventMissionListDialog_b__15_1(
        MissionListDlgComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


void MissionListDlgComponent___c__DisplayClass15_0___ctor(
        MissionListDlgComponent___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionListDlgComponent___c__DisplayClass15_0___OpenEventMissionListDialog_b__0(
        MissionListDlgComponent___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  MissionListDlgComponent___c__DisplayClass15_0_o *v2; // x19
  struct MissionListDlgComponent_o *_4__this; // x8
  struct MissionListDlgComponent_o *v4; // x8
  struct MissionListDlgComponent_o *v5; // x8
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct System_String_o *eventDetailEnt; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_String_o *eventMissionEntList; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct EventDetailEntity_o *missionBtnCallback; // x1
  __int64 v27; // x2
  struct MissionListDlgComponent_o *v28; // x8
  UnityEngine_Object_o *eventMissionListViewManager; // x20
  __int64 v30; // x2
  struct EventMissionEntity_array *v31; // x20
  struct MissionListDlgComponent_o *v32; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v34; // x1
  __int64 v35; // x2
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
  void *static_fields; // x8
  System_Action_o *v50; // x20
  Il2CppObject *v51; // x21
  struct MissionListDlgComponent___c_StaticFields *v52; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7

  v2 = this;
  if ( (byte_596A105 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&MissionListDlgComponent_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_MissionListDlgComponent___c__OpenEventMissionListDialog_b__15_1__);
    this = (MissionListDlgComponent___c__DisplayClass15_0_o *)sub_2213A60(&MissionListDlgComponent___c_TypeInfo);
    byte_596A105 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_48;
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)_4__this->fields.baseWindow;
  if ( !this )
    goto LABEL_48;
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)UnityEngine_GameObject__get_gameObject(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0);
  if ( !this )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v4 = v2->fields.__4__this;
  if ( !v4 )
    goto LABEL_48;
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v4->fields.titleLabel;
  if ( !this )
    goto LABEL_48;
  UILabel__set_text((UILabel_o *)this, v2->fields.title, 0);
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_48;
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v5->fields.subTitleLabel;
  if ( !this )
    goto LABEL_48;
  UILabel__set_text((UILabel_o *)this, v2->fields.subTitle, 0);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_48;
  eventDetailEnt = (struct System_String_o *)v2->fields.eventDetailEnt;
  this[2].fields.title = eventDetailEnt;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this[2].fields.title,
    (int32_t)eventDetailEnt,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_48;
  eventMissionEntList = (struct System_String_o *)v2->fields.eventMissionEntList;
  this[2].fields.subTitle = eventMissionEntList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this[2].fields.subTitle,
    (int32_t)eventMissionEntList,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_48;
  missionBtnCallback = (struct EventDetailEntity_o *)v2->fields.missionBtnCallback;
  this[2].fields.eventDetailEnt = missionBtnCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this[2].fields.eventDetailEnt,
    (int32_t)missionBtnCallback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v28 = v2->fields.__4__this;
  if ( !v28 )
    goto LABEL_48;
  eventMissionListViewManager = (UnityEngine_Object_o *)v28->fields.eventMissionListViewManager;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v27);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)UnityEngine_Object__op_Inequality(
                                                              eventMissionListViewManager,
                                                              0,
                                                              0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v31 = v2->fields.eventMissionEntList;
    if ( !v31 )
      goto LABEL_48;
    this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent_TypeInfo;
    if ( !*(&MissionListDlgComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MissionListDlgComponent_TypeInfo, method, v30);
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent_TypeInfo;
    }
    if ( (__int64)this[2].fields.missionBtnCallback->klass >= SLODWORD(v31->max_length) )
    {
      v32 = v2->fields.__4__this;
      if ( !v32 )
        goto LABEL_48;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v32->fields.titleLabel;
      if ( !this )
        goto LABEL_48;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v36 = MissionListDlgComponent_TypeInfo;
      v37 = gameObject;
      if ( !*(&MissionListDlgComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MissionListDlgComponent_TypeInfo, v34, v35);
        v36 = MissionListDlgComponent_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v37, v36->static_fields->SINGLE_DESIGN_TITLE_POS_Y, 0);
      v38 = v2->fields.__4__this;
      if ( !v38 )
        goto LABEL_48;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v38->fields.subTitleLabel;
      if ( !this )
        goto LABEL_48;
      v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      GameObjectExtensions__SetLocalPositionY(
        v39,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_SUB_TITLE_POS_Y,
        0);
      v40 = v2->fields.__4__this;
      if ( !v40 )
        goto LABEL_48;
      GameObjectExtensions__SetLocalPositionY(
        v40->fields.closeBtn,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_BTN_POS_Y,
        0);
      v41 = v2->fields.__4__this;
      if ( !v41 )
        goto LABEL_48;
      GameObjectExtensions__SetLocalPositionY(
        v41->fields.missionBtn,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_BTN_POS_Y,
        0);
      v42 = v2->fields.__4__this;
      if ( !v42 )
        goto LABEL_48;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v42->fields.listBg;
      if ( !this )
        goto LABEL_48;
      UIWidget__set_height(
        (UIWidget_o *)this,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_LIST_BG_HEIGHT,
        0);
      v43 = v2->fields.__4__this;
      if ( !v43 )
        goto LABEL_48;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v43->fields.eventMissionListViewManager;
      if ( !this )
        goto LABEL_48;
      EventMissionItemListViewManager__SetScrollEnable((EventMissionItemListViewManager_o *)this, 0, 0);
    }
    if ( !byte_596A15C )
    {
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)sub_2213A60(&EventRewardSaveData_TypeInfo);
      byte_596A15C = 1;
    }
    v44 = v2->fields.__4__this;
    EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
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
                                                                    0);
        if ( v45 )
        {
          EventMissionItemListViewManager__CreateList_38307936(v45, v46, v47, (unsigned __int8)this & 1, 0, 0);
          goto LABEL_40;
        }
      }
    }
LABEL_48:
    sub_2213CDC(this, method);
  }
LABEL_40:
  v48 = (BaseDialog_o *)v2->fields.__4__this;
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent___c_TypeInfo;
  if ( !*(&MissionListDlgComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MissionListDlgComponent___c_TypeInfo, method, v30);
    this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent___c_TypeInfo;
  }
  static_fields = this[2].fields.missionBtnCallback;
  v50 = (System_Action_o *)*((_QWORD *)static_fields + 1);
  if ( !v50 )
  {
    if ( !HIDWORD(this[3].fields.subTitle) )
    {
      j_il2cpp_runtime_class_init_0(this, method, v30);
      static_fields = MissionListDlgComponent___c_TypeInfo->static_fields;
    }
    v51 = *(Il2CppObject **)static_fields;
    v50 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v50, v51, Method_MissionListDlgComponent___c__OpenEventMissionListDialog_b__15_1__, 0);
    v52 = MissionListDlgComponent___c_TypeInfo->static_fields;
    v52->__9__15_1 = v50;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v52->__9__15_1, (int32_t)v50, v53, v54, v55, v56, v57, v58);
  }
  if ( !v48 )
    goto LABEL_48;
  BaseDialog__Open(v48, v50, 1, 0, 0);
}