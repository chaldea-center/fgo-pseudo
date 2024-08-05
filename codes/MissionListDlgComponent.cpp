void __fastcall MissionListDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct MissionListDlgComponent_StaticFields *static_fields; // x8

  if ( (byte_4A01861 & 1) == 0 )
  {
    sub_1B64870(&MissionListDlgComponent_TypeInfo, v1);
    byte_4A01861 = 1;
  }
  static_fields = MissionListDlgComponent_TypeInfo->static_fields;
  static_fields->SCROLL_ENABLED_VIEW_COUNT = 1;
  *(_QWORD *)&static_fields->SINGLE_DESIGN_TITLE_POS_Y = 0x430C000043340000LL;
  *(_QWORD *)&static_fields->SINGLE_DESIGN_BTN_POS_Y = 0xB4C3250000LL;
}


void __fastcall MissionListDlgComponent___ctor(MissionListDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A01860 & 1) == 0 )
  {
    sub_1B64870(&BaseDialog_TypeInfo, method);
    byte_4A01860 = 1;
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
  UnityEngine_GameObject_c *klass; // x8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  MissionListDlgComponent___c_c *v12; // x8
  CommonUI_o *v13; // x19
  System_Action_o *_9__17_0; // x20
  Il2CppObject *v15; // x21
  struct MissionListDlgComponent___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_4A0185F & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&Method_MissionListDlgComponent_OnClickClose__, v3);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B64870(&TerminalSceneComponent_TypeInfo, v5);
    sub_1B64870(&Method_MissionListDlgComponent___c__OnClickClose_b__17_0__, v6);
    sub_1B64870(&MissionListDlgComponent___c_TypeInfo, v7);
    byte_4A0185F = 1;
  }
  if ( this->fields.isTouchEnabled )
  {
    this->fields.isTouchEnabled = 0;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_49F97AD )
    {
      sub_1B64870(&TerminalSceneComponent_TypeInfo, method);
      byte_49F97AD = 1;
    }
    Instance = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      Instance = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = Instance->fields.mEventRoot->klass;
    if ( !klass )
      goto LABEL_23;
    Instance = *(TitleInfoControl_o **)&klass->_2.instance_size;
    if ( !Instance )
      goto LABEL_23;
    TitleInfoControl__SetTouchEnable(Instance, 0, 0LL);
    v10 = Method_MissionListDlgComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_MissionListDlgComponent_OnClickClose__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1B64888(Method_MissionListDlgComponent_OnClickClose__);
    v11 = (System_Reflection_MethodBase_o *)sub_1B64854(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    Instance = (TitleInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      _9__17_0 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(_9__17_0, v15, Method_MissionListDlgComponent___c__OnClickClose_b__17_0__, 0LL);
      static_fields = MissionListDlgComponent___c_TypeInfo->static_fields;
      static_fields->__9__17_0 = _9__17_0;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__17_0, (int32_t)_9__17_0, v17, v18);
    }
    if ( !v13 )
LABEL_23:
      sub_1B64ACC(Instance, method);
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
  UnityEngine_GameObject_c *klass; // x8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v12; // x21

  if ( (byte_4A0185E & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&Method_MissionListDlgComponent_OnClickMissionList__, v3);
    sub_1B64870(&Method_MissionListDlgComponent__OnClickMissionList_b__16_0__, v4);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B64870(&TerminalSceneComponent_TypeInfo, v6);
    byte_4A0185E = 1;
  }
  if ( this->fields.isTouchEnabled )
  {
    this->fields.isTouchEnabled = 0;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_49F97AD )
    {
      sub_1B64870(&TerminalSceneComponent_TypeInfo, method);
      byte_49F97AD = 1;
    }
    v7 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v7 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v7->fields.mEventRoot->klass;
    if ( !klass )
      goto LABEL_17;
    v7 = *(TitleInfoControl_o **)&klass->_2.instance_size;
    if ( !v7 )
      goto LABEL_17;
    TitleInfoControl__SetTouchEnable(v7, 0, 0LL);
    v9 = Method_MissionListDlgComponent_OnClickMissionList__;
    if ( (*((_BYTE *)Method_MissionListDlgComponent_OnClickMissionList__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1B64888(Method_MissionListDlgComponent_OnClickMissionList__);
    v10 = (System_Reflection_MethodBase_o *)sub_1B64854(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_MissionListDlgComponent__OnClickMissionList_b__16_0__, 0LL);
    if ( !Instance )
LABEL_17:
      sub_1B64ACC(v7, method);
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
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  System_Action_o *v31; // x20

  if ( (byte_4A0185D & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, title);
    sub_1B64870(&AtlasManager_TypeInfo, v13);
    sub_1B64870(&Method_MissionListDlgComponent___c__DisplayClass15_0__OpenEventMissionListDialog_b__0__, v14);
    sub_1B64870(&MissionListDlgComponent___c__DisplayClass15_0_TypeInfo, v15);
    byte_4A0185D = 1;
  }
  v16 = sub_1B64ABC(MissionListDlgComponent___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_10;
  *(_QWORD *)(v16 + 16) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v16 + 16), (int32_t)this, v19, v20);
  *(_QWORD *)(v16 + 24) = title;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v16 + 24), (int32_t)title, v21, v22);
  *(_QWORD *)(v16 + 32) = subTitle;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v16 + 32), (int32_t)subTitle, v23, v24);
  *(_QWORD *)(v16 + 40) = eventDetailEnt;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v16 + 40), (int32_t)eventDetailEnt, v25, v26);
  *(_QWORD *)(v16 + 48) = eventMissionEntList;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v16 + 48), (int32_t)eventMissionEntList, v27, v28);
  *(_QWORD *)(v16 + 56) = missionBtnCallback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v16 + 56), (int32_t)missionBtnCallback, v29, v30);
  this->fields.isTouchEnabled = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.maskSprite) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
  {
LABEL_10:
    sub_1B64ACC(gameObject, v18);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v31 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v16,
    Method_MissionListDlgComponent___c__DisplayClass15_0__OpenEventMissionListDialog_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v31, 0LL);
}


void __fastcall MissionListDlgComponent___OnClickMissionList_b__16_0(
        MissionListDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  TitleInfoControl_o *v5; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4A01862 & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, method);
    sub_1B64870(&TerminalSceneComponent_TypeInfo, v3);
    byte_4A01862 = 1;
  }
  ActionExtensions__Call(this->fields.missionBtnCallbackFunc, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F97AD )
  {
    sub_1B64870(&TerminalSceneComponent_TypeInfo, v4);
    byte_49F97AD = 1;
  }
  v5 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v5 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v5->fields.mEventRoot->klass;
  if ( !klass || (v5 = *(TitleInfoControl_o **)&klass->_2.instance_size) == 0LL )
    sub_1B64ACC(v5, v4);
  TitleInfoControl__SetTouchEnable(v5, 1, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseNotification(0LL);
}


void __fastcall MissionListDlgComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A01863 & 1) == 0 )
  {
    sub_1B64870(&MissionListDlgComponent___c_TypeInfo, v1);
    byte_4A01863 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(MissionListDlgComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MissionListDlgComponent___c_TypeInfo->static_fields->__9 = (struct MissionListDlgComponent___c_o *)v2;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)MissionListDlgComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4A01864 & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, method);
    sub_1B64870(&TerminalSceneComponent_TypeInfo, v2);
    byte_4A01864 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F97AD )
  {
    sub_1B64870(&TerminalSceneComponent_TypeInfo, method);
    byte_49F97AD = 1;
  }
  v3 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v3->fields.mEventRoot->klass;
  if ( !klass || (v3 = *(TitleInfoControl_o **)&klass->_2.instance_size) == 0LL )
    sub_1B64ACC(v3, method);
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
  int32_t v10; // w2
  int32_t v11; // w3
  struct MissionListDlgComponent_o *eventDetailEnt; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_String_o *eventMissionEntList; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_String_o *missionBtnCallback; // x1
  struct MissionListDlgComponent_o *v19; // x8
  UnityEngine_Object_o *eventMissionListViewManager; // x20
  struct EventMissionEntity_array *v21; // x20
  struct MissionListDlgComponent_o *v22; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  MissionListDlgComponent_c *v24; // x8
  UnityEngine_GameObject_o *v25; // x20
  struct MissionListDlgComponent_o *v26; // x8
  UnityEngine_GameObject_o *v27; // x0
  struct MissionListDlgComponent_o *v28; // x8
  struct MissionListDlgComponent_o *v29; // x8
  struct MissionListDlgComponent_o *v30; // x8
  struct MissionListDlgComponent_o *v31; // x8
  struct MissionListDlgComponent_o *v32; // x8
  EventMissionItemListViewManager_o *v33; // x20
  EventMissionEntity_array *v34; // x21
  int32_t v35; // w22
  BaseDialog_o *v36; // x19
  System_Action_o *monitor; // x20
  Il2CppObject *klass; // x21
  struct MissionListDlgComponent___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  int32_t v41; // w3

  v2 = this;
  if ( (byte_4A01865 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&MissionListDlgComponent_TypeInfo, v3);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v4);
    sub_1B64870(&Method_MissionListDlgComponent___c__OpenEventMissionListDialog_b__15_1__, v5);
    this = (MissionListDlgComponent___c__DisplayClass15_0_o *)sub_1B64870(&MissionListDlgComponent___c_TypeInfo, v6);
    byte_4A01865 = 1;
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
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this[2].fields, (int32_t)eventDetailEnt, v10, v11);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_48;
  eventMissionEntList = (struct System_String_o *)v2->fields.eventMissionEntList;
  this[2].fields.title = eventMissionEntList;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this[2].fields.title, (int32_t)eventMissionEntList, v13, v14);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_48;
  missionBtnCallback = (struct System_String_o *)v2->fields.missionBtnCallback;
  this[2].fields.subTitle = missionBtnCallback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this[2].fields.subTitle, (int32_t)missionBtnCallback, v16, v17);
  v19 = v2->fields.__4__this;
  if ( !v19 )
    goto LABEL_48;
  eventMissionListViewManager = (UnityEngine_Object_o *)v19->fields.eventMissionListViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (MissionListDlgComponent___c__DisplayClass15_0_o *)UnityEngine_Object__op_Inequality(
                                                              eventMissionListViewManager,
                                                              0LL,
                                                              0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v21 = v2->fields.eventMissionEntList;
    if ( !v21 )
      goto LABEL_48;
    this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent_TypeInfo;
    if ( !MissionListDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionListDlgComponent_TypeInfo);
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)MissionListDlgComponent_TypeInfo;
    }
    if ( (__int64)this[2].fields.missionBtnCallback->klass >= v21->max_length )
    {
      v22 = v2->fields.__4__this;
      if ( !v22 )
        goto LABEL_48;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v22->fields.titleLabel;
      if ( !this )
        goto LABEL_48;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v24 = MissionListDlgComponent_TypeInfo;
      v25 = gameObject;
      if ( !MissionListDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MissionListDlgComponent_TypeInfo);
        v24 = MissionListDlgComponent_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v25, v24->static_fields->SINGLE_DESIGN_TITLE_POS_Y, 0LL);
      v26 = v2->fields.__4__this;
      if ( !v26 )
        goto LABEL_48;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v26->fields.subTitleLabel;
      if ( !this )
        goto LABEL_48;
      v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v27,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_SUB_TITLE_POS_Y,
        0LL);
      v28 = v2->fields.__4__this;
      if ( !v28 )
        goto LABEL_48;
      GameObjectExtensions__SetLocalPositionY(
        v28->fields.closeBtn,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_BTN_POS_Y,
        0LL);
      v29 = v2->fields.__4__this;
      if ( !v29 )
        goto LABEL_48;
      GameObjectExtensions__SetLocalPositionY(
        v29->fields.missionBtn,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_BTN_POS_Y,
        0LL);
      v30 = v2->fields.__4__this;
      if ( !v30 )
        goto LABEL_48;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v30->fields.listBg;
      if ( !this )
        goto LABEL_48;
      UIWidget__set_height(
        (UIWidget_o *)this,
        MissionListDlgComponent_TypeInfo->static_fields->SINGLE_DESIGN_LIST_BG_HEIGHT,
        0LL);
      v31 = v2->fields.__4__this;
      if ( !v31 )
        goto LABEL_48;
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v31->fields.eventMissionListViewManager;
      if ( !this )
        goto LABEL_48;
      EventMissionItemListViewManager__SetScrollEnable((EventMissionItemListViewManager_o *)this, 0, 0LL);
    }
    if ( !byte_49FB43C )
    {
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)sub_1B64870(&EventRewardSaveData_TypeInfo, method);
      byte_49FB43C = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_FilterId_k__BackingField = 0;
    v32 = v2->fields.__4__this;
    if ( v32 )
    {
      this = (MissionListDlgComponent___c__DisplayClass15_0_o *)v2->fields.eventDetailEnt;
      if ( this )
      {
        v33 = v32->fields.eventMissionListViewManager;
        v34 = v2->fields.eventMissionEntList;
        v35 = (int32_t)this->fields.__4__this;
        this = (MissionListDlgComponent___c__DisplayClass15_0_o *)EventDetailEntity__isDailyMission(
                                                                    (EventDetailEntity_o *)this,
                                                                    0LL);
        if ( v33 )
        {
          EventMissionItemListViewManager__CreateList_45318460(v33, v34, v35, (unsigned __int8)this & 1, 0, 0LL);
          goto LABEL_40;
        }
      }
    }
LABEL_48:
    sub_1B64ACC(this, method);
  }
LABEL_40:
  v36 = (BaseDialog_o *)v2->fields.__4__this;
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
    monitor = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
    System_Action___ctor(monitor, klass, Method_MissionListDlgComponent___c__OpenEventMissionListDialog_b__15_1__, 0LL);
    static_fields = MissionListDlgComponent___c_TypeInfo->static_fields;
    static_fields->__9__15_1 = monitor;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__15_1, (int32_t)monitor, v40, v41);
  }
  if ( !v36 )
    goto LABEL_48;
  BaseDialog__Open(v36, monitor, 1, 0LL);
}