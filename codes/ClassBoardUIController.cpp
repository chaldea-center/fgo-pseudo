void __fastcall ClassBoardUIController___ctor(ClassBoardUIController_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ClassBoardUIController__ActivateEffectListButton(
        ClassBoardUIController_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Component_o *effectListBtnSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  effectListBtnSprite = (UnityEngine_Component_o *)this->fields.effectListBtnSprite;
  if ( !effectListBtnSprite || (gameObject = UnityEngine_Component__get_gameObject(effectListBtnSprite, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, value, 0LL);
}


void __fastcall ClassBoardUIController__Awake(ClassBoardUIController_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardUIController__Init(ClassBoardUIController_o *this, const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x19
  __int64 v3; // x1
  AtlasManagerUnit_o *UiAtlasManagerUnit; // x0
  UnityEngine_GameObject_o *backBtn; // x19

  v2 = this;
  if ( (byte_40FBA1F & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, method);
    this = (ClassBoardUIController_o *)sub_B16FFC(&StringLiteral_16929/*"btn_list"*/, v3);
    byte_40FBA1F = 1;
  }
  v2->fields.touchBlockCount = 0;
  UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit((const MethodInfo *)this);
  if ( !UiAtlasManagerUnit )
    sub_B170D4();
  AtlasManagerUnit__SetUI(
    UiAtlasManagerUnit,
    v2->fields.effectListBtnSprite,
    (System_String_o *)StringLiteral_16929/*"btn_list"*/,
    0LL);
  backBtn = v2->fields.backBtn;
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn(backBtn, 0LL);
}


void __fastcall ClassBoardUIController__OnClickBack(ClassBoardUIController_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_40FBA24 & 1) == 0 )
  {
    sub_B16FFC(&Method_ClassBoardUIController_OnClickBack__, method);
    byte_40FBA24 = 1;
  }
  v3 = Method_ClassBoardUIController_OnClickBack__;
  if ( (*((_BYTE *)Method_ClassBoardUIController_OnClickBack__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B17004(Method_ClassBoardUIController_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  ActionExtensions__Call(this->fields.onClickBack, 0LL);
}


void __fastcall ClassBoardUIController__OnClickEffectListButton(
        ClassBoardUIController_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_40FBA22 & 1) == 0 )
  {
    sub_B16FFC(&Method_ClassBoardUIController_OnClickEffectListButton__, method);
    byte_40FBA22 = 1;
  }
  v3 = Method_ClassBoardUIController_OnClickEffectListButton__;
  if ( (*((_BYTE *)Method_ClassBoardUIController_OnClickEffectListButton__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B17004(Method_ClassBoardUIController_OnClickEffectListButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  ActionExtensions__Call(this->fields.onClickEffectList, 0LL);
}


void __fastcall ClassBoardUIController__OnClickHelp(ClassBoardUIController_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_40FBA23 & 1) == 0 )
  {
    sub_B16FFC(&Method_ClassBoardUIController_OnClickHelp__, method);
    byte_40FBA23 = 1;
  }
  v3 = Method_ClassBoardUIController_OnClickHelp__;
  if ( (*((_BYTE *)Method_ClassBoardUIController_OnClickHelp__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B17004(Method_ClassBoardUIController_OnClickHelp__);
  v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  ActionExtensions__Call(this->fields.onClickHelp, 0LL);
}


void __fastcall ClassBoardUIController__OpenEffectList(ClassBoardUIController_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.onClickEffectList, 0LL);
}


void __fastcall ClassBoardUIController__OpenMissionClearDialog(
        ClassBoardUIController_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x21
  System_String_o *Empty; // x20
  System_String_o *v9; // x0

  if ( (byte_40FBA26 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, callback);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&string_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_3017/*"CLASS_BOARD_MISSION_CLEAR_MESSAGE"*/, v6);
    byte_40FBA26 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  Empty = string_TypeInfo->static_fields->Empty;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3017/*"CLASS_BOARD_MISSION_CLEAR_MESSAGE"*/, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__OpenNotificationDialog(Instance, Empty, v9, callback, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardUIController__SetCameraWorkBlock(
        ClassBoardUIController_o *this,
        bool value,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x0
  UnityEngine_Object_o *MapCamera; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1
  MapCamera_o *v8; // x19

  if ( (byte_40FBA25 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, value);
    byte_40FBA25 = 1;
  }
  ClassBoardPageSwitcher__SetCameraWorkBlockNum(value, (const MethodInfo *)value);
  MapCamera = (UnityEngine_Object_o *)ClassBoardGlobalObject__get_MapCamera(v4);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(MapCamera, 0LL, 0LL);
  if ( v6 )
  {
    v8 = ClassBoardGlobalObject__get_MapCamera((const MethodInfo *)v6);
    if ( !byte_40FBA36 )
    {
      sub_B16FFC(&ClassBoardPageSwitcher_TypeInfo, v7);
      byte_40FBA36 = 1;
    }
    if ( !v8 )
      sub_B170D4();
    v8->fields._IsTouchEnable_k__BackingField = ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum < 1;
  }
}


void __fastcall ClassBoardUIController__SetHeaderMessage(
        ClassBoardUIController_o *this,
        AtlasManagerUnit_o *atlasManagerUnit,
        System_String_o *message,
        const MethodInfo *method)
{
  UILabel_o *headerMessageLabel; // x0

  if ( (byte_40FBA20 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19399/*"img_commonbg_11"*/, atlasManagerUnit);
    byte_40FBA20 = 1;
  }
  if ( !atlasManagerUnit
    || (AtlasManagerUnit__SetUI(
          atlasManagerUnit,
          this->fields.headerMessageBgSprite,
          (System_String_o *)StringLiteral_19399/*"img_commonbg_11"*/,
          0LL),
        (headerMessageLabel = this->fields.headerMessageLabel) == 0LL) )
  {
    sub_B170D4();
  }
  UILabel__set_text(headerMessageLabel, message, 0LL);
}


void __fastcall ClassBoardUIController__SetHeaderTitle(
        ClassBoardUIController_o *this,
        AtlasManagerUnit_o *atlasManagerUnit,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  struct UISprite_o *headerTitleSprite; // x0

  if ( !atlasManagerUnit
    || (AtlasManagerUnit__SetUI(atlasManagerUnit, this->fields.headerTitleSprite, spriteName, 0LL),
        (headerTitleSprite = this->fields.headerTitleSprite) == 0LL) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))headerTitleSprite->klass->vtable._33_MakePixelPerfect.method)(
    headerTitleSprite,
    headerTitleSprite->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall ClassBoardUIController__SetItemList(
        ClassBoardUIController_o *this,
        System_Int32_array *dispItemIds,
        AtlasManagerUnit_o *atlasManagerUnit,
        const MethodInfo *method)
{
  ClassBoardUIController_o *v6; // x21
  __int64 v7; // x8
  unsigned __int64 v8; // x22
  struct EventItemComponent_array *headerItemComponentList; // x9
  unsigned __int64 max_length; // x10
  EventItemComponent_o *v11; // x0
  struct EventItemComponent_array *v12; // x8
  EventItemComponent_o *v13; // x8
  struct EventItemComponent_array *v14; // x8
  UnityEngine_Component_o *v15; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  v6 = this;
  if ( (byte_40FBA21 & 1) == 0 )
  {
    this = (ClassBoardUIController_o *)sub_B16FFC(&StringLiteral_19429/*"img_item_bg"*/, dispItemIds);
    byte_40FBA21 = 1;
  }
  if ( !dispItemIds )
    goto LABEL_22;
  v7 = *(_QWORD *)&dispItemIds->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      headerItemComponentList = v6->fields.headerItemComponentList;
      if ( !headerItemComponentList )
        break;
      max_length = headerItemComponentList->max_length;
      if ( (__int64)v8 < (int)max_length )
      {
        if ( v8 >= (unsigned int)v7 || v8 >= max_length )
        {
LABEL_23:
          sub_B17100(this, dispItemIds, atlasManagerUnit);
          sub_B170A0();
        }
        v11 = headerItemComponentList->m_Items[v8];
        if ( !v11 )
          break;
        EventItemComponent__Set(v11, dispItemIds->m_Items[v8 + 1], 0LL);
        v12 = v6->fields.headerItemComponentList;
        if ( !v12 )
          break;
        if ( v8 >= v12->max_length )
          goto LABEL_23;
        v13 = v12->m_Items[v8];
        if ( !v13 )
          break;
        if ( !atlasManagerUnit )
          break;
        this = (ClassBoardUIController_o *)AtlasManagerUnit__SetUI(
                                             atlasManagerUnit,
                                             v13->fields.baseSp,
                                             (System_String_o *)StringLiteral_19429/*"img_item_bg"*/,
                                             0LL);
        v14 = v6->fields.headerItemComponentList;
        if ( !v14 )
          break;
        if ( v8 >= v14->max_length )
          goto LABEL_23;
        v15 = (UnityEngine_Component_o *)v14->m_Items[v8];
        if ( !v15 )
          break;
        gameObject = UnityEngine_Component__get_gameObject(v15, 0LL);
        if ( !gameObject )
          break;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      }
      LODWORD(v7) = dispItemIds->max_length;
      if ( (__int64)++v8 >= (int)v7 )
        return;
    }
LABEL_22:
    sub_B170D4();
  }
}


void __fastcall ClassBoardUIController__SetOnClickBack(
        ClassBoardUIController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.onClickBack = action;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onClickBack,
    (System_Int32_array **)action,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardUIController__SetOnClickEffectList(
        ClassBoardUIController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.onClickEffectList = action;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onClickEffectList,
    (System_Int32_array **)action,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardUIController__SetOnClickHelp(
        ClassBoardUIController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.onClickHelp = action;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onClickHelp,
    (System_Int32_array **)action,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardUIController__TouchDisable(ClassBoardUIController_o *this, const MethodInfo *method)
{
  int32_t v2; // w8
  bool v3; // nf
  UnityEngine_GameObject_o *touchBlock; // x0

  v2 = this->fields.touchBlockCount + 1;
  v3 = this->fields.touchBlockCount < 0;
  this->fields.touchBlockCount = v2;
  if ( v3 == __OFSUB__(v2, 1) )
  {
    touchBlock = this->fields.touchBlock;
    if ( !touchBlock )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(touchBlock, 1, 0LL);
  }
}


void __fastcall ClassBoardUIController__TouchEnable(ClassBoardUIController_o *this, const MethodInfo *method)
{
  int32_t v2; // w8
  bool v3; // zf
  UnityEngine_GameObject_o *touchBlock; // x0

  v2 = this->fields.touchBlockCount - 1;
  v3 = this->fields.touchBlockCount == 1;
  this->fields.touchBlockCount = v2;
  if ( v2 < 0 || v3 )
  {
    touchBlock = this->fields.touchBlock;
    if ( !touchBlock )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(touchBlock, 0, 0LL);
  }
}


void __fastcall ClassBoardUIController__UpdateItemList(ClassBoardUIController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct EventItemComponent_array *headerItemComponentList; // x8
  ClassBoardUIController_o *v4; // x19
  __int64 v5; // x20
  int max_length; // w9
  unsigned int v7; // w21
  UnityEngine_Component_o *v8; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventItemComponent_array *v10; // x8
  EventItemComponent_o *v11; // x0

  headerItemComponentList = this->fields.headerItemComponentList;
  if ( !headerItemComponentList )
LABEL_13:
    sub_B170D4();
  v4 = this;
  v5 = 4LL;
  while ( 1 )
  {
    max_length = headerItemComponentList->max_length;
    v7 = v5 - 4;
    if ( (int)v5 - 4 >= max_length )
      break;
    if ( v7 >= max_length )
      goto LABEL_15;
    v8 = (UnityEngine_Component_o *)*((_QWORD *)&headerItemComponentList->obj.klass + v5);
    if ( !v8 )
      goto LABEL_13;
    gameObject = UnityEngine_Component__get_gameObject(v8, 0LL);
    if ( !gameObject )
      goto LABEL_13;
    this = (ClassBoardUIController_o *)UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v10 = v4->fields.headerItemComponentList;
      if ( !v10 )
        goto LABEL_13;
      if ( v7 >= v10->max_length )
      {
LABEL_15:
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v11 = (EventItemComponent_o *)*((_QWORD *)&v10->obj.klass + v5);
      if ( !v11 )
        goto LABEL_13;
      EventItemComponent__UpdateDisp(v11, 0LL);
    }
    headerItemComponentList = v4->fields.headerItemComponentList;
    ++v5;
    if ( !headerItemComponentList )
      goto LABEL_13;
  }
}