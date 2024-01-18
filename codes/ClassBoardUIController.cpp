void __fastcall ClassBoardUIController___ctor(ClassBoardUIController_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardUIController__ActivateEffectListButton(
        ClassBoardUIController_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Component_o *effectListBtnSprite; // x0

  effectListBtnSprite = (UnityEngine_Component_o *)this->fields.effectListBtnSprite;
  if ( !effectListBtnSprite
    || (effectListBtnSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(effectListBtnSprite, 0LL)) == 0LL )
  {
    sub_B2C434(effectListBtnSprite, value);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effectListBtnSprite, value, 0LL);
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
  __int64 v5; // x1
  UnityEngine_GameObject_o *backBtn; // x19

  v2 = this;
  if ( (byte_41895A5 & 1) == 0 )
  {
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, method);
    this = (ClassBoardUIController_o *)sub_B2C35C(&StringLiteral_16995/*"btn_list"*/, v3);
    byte_41895A5 = 1;
  }
  v2->fields.touchBlockCount = 0;
  UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit((const MethodInfo *)this);
  if ( !UiAtlasManagerUnit )
    sub_B2C434(0LL, v5);
  AtlasManagerUnit__SetUI(
    UiAtlasManagerUnit,
    v2->fields.effectListBtnSprite,
    (System_String_o *)StringLiteral_16995/*"btn_list"*/,
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

  if ( (byte_41895AA & 1) == 0 )
  {
    sub_B2C35C(&Method_ClassBoardUIController_OnClickBack__, method);
    byte_41895AA = 1;
  }
  v3 = Method_ClassBoardUIController_OnClickBack__;
  if ( (*((_BYTE *)Method_ClassBoardUIController_OnClickBack__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B2C364(Method_ClassBoardUIController_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  ActionExtensions__Call(this->fields.onClickBack, 0LL);
}


void __fastcall ClassBoardUIController__OnClickEffectListButton(
        ClassBoardUIController_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_41895A8 & 1) == 0 )
  {
    sub_B2C35C(&Method_ClassBoardUIController_OnClickEffectListButton__, method);
    byte_41895A8 = 1;
  }
  v3 = Method_ClassBoardUIController_OnClickEffectListButton__;
  if ( (*((_BYTE *)Method_ClassBoardUIController_OnClickEffectListButton__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B2C364(Method_ClassBoardUIController_OnClickEffectListButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  ActionExtensions__Call(this->fields.onClickEffectList, 0LL);
}


void __fastcall ClassBoardUIController__OnClickHelp(ClassBoardUIController_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_41895A9 & 1) == 0 )
  {
    sub_B2C35C(&Method_ClassBoardUIController_OnClickHelp__, method);
    byte_41895A9 = 1;
  }
  v3 = Method_ClassBoardUIController_OnClickHelp__;
  if ( (*((_BYTE *)Method_ClassBoardUIController_OnClickHelp__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B2C364(Method_ClassBoardUIController_OnClickHelp__);
  v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
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
  __int64 v10; // x1

  if ( (byte_41895AC & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, callback);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&string_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_3026/*"CLASS_BOARD_MISSION_CLEAR_MESSAGE"*/, v6);
    byte_41895AC = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  Empty = string_TypeInfo->static_fields->Empty;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3026/*"CLASS_BOARD_MISSION_CLEAR_MESSAGE"*/, 0LL);
  if ( !Instance )
    sub_B2C434(v9, v10);
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
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x19

  if ( (byte_41895AB & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, value);
    byte_41895AB = 1;
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
    v7 = (__int64)ClassBoardGlobalObject__get_MapCamera((const MethodInfo *)v6);
    v9 = v7;
    if ( !byte_41895BC )
    {
      v7 = sub_B2C35C(&ClassBoardPageSwitcher_TypeInfo, v8);
      byte_41895BC = 1;
    }
    if ( !v9 )
      sub_B2C434(v7, v8);
    *(_BYTE *)(v9 + 89) = ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum < 1;
  }
}


void __fastcall ClassBoardUIController__SetHeaderMessage(
        ClassBoardUIController_o *this,
        AtlasManagerUnit_o *atlasManagerUnit,
        System_String_o *message,
        const MethodInfo *method)
{
  ClassBoardUIController_o *v6; // x20

  v6 = this;
  if ( (byte_41895A6 & 1) == 0 )
  {
    this = (ClassBoardUIController_o *)sub_B2C35C(&StringLiteral_19473/*"img_commonbg_11"*/, atlasManagerUnit);
    byte_41895A6 = 1;
  }
  if ( !atlasManagerUnit
    || (AtlasManagerUnit__SetUI(
          atlasManagerUnit,
          v6->fields.headerMessageBgSprite,
          (System_String_o *)StringLiteral_19473/*"img_commonbg_11"*/,
          0LL),
        (this = (ClassBoardUIController_o *)v6->fields.headerMessageLabel) == 0LL) )
  {
    sub_B2C434(this, atlasManagerUnit);
  }
  UILabel__set_text((UILabel_o *)this, message, 0LL);
}


void __fastcall ClassBoardUIController__SetHeaderTitle(
        ClassBoardUIController_o *this,
        AtlasManagerUnit_o *atlasManagerUnit,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  ClassBoardUIController_o *v4; // x19

  if ( !atlasManagerUnit
    || (v4 = this,
        AtlasManagerUnit__SetUI(atlasManagerUnit, this->fields.headerTitleSprite, spriteName, 0LL),
        (this = (ClassBoardUIController_o *)v4->fields.headerTitleSprite) == 0LL) )
  {
    sub_B2C434(this, atlasManagerUnit);
  }
  ((void (__fastcall *)(ClassBoardUIController_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
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
  struct EventItemComponent_array *v11; // x8
  EventItemComponent_o *v12; // x8
  struct EventItemComponent_array *v13; // x8
  __int64 v14; // x0

  v6 = this;
  if ( (byte_41895A7 & 1) == 0 )
  {
    this = (ClassBoardUIController_o *)sub_B2C35C(&StringLiteral_19503/*"img_item_bg"*/, dispItemIds);
    byte_41895A7 = 1;
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
          v14 = sub_B2C460(this);
          sub_B2C400(v14, 0LL);
        }
        this = (ClassBoardUIController_o *)headerItemComponentList->m_Items[v8];
        if ( !this )
          break;
        EventItemComponent__Set((EventItemComponent_o *)this, dispItemIds->m_Items[v8 + 1], 0LL);
        v11 = v6->fields.headerItemComponentList;
        if ( !v11 )
          break;
        if ( v8 >= v11->max_length )
          goto LABEL_23;
        v12 = v11->m_Items[v8];
        if ( !v12 )
          break;
        if ( !atlasManagerUnit )
          break;
        this = (ClassBoardUIController_o *)AtlasManagerUnit__SetUI(
                                             atlasManagerUnit,
                                             v12->fields.baseSp,
                                             (System_String_o *)StringLiteral_19503/*"img_item_bg"*/,
                                             0LL);
        v13 = v6->fields.headerItemComponentList;
        if ( !v13 )
          break;
        if ( v8 >= v13->max_length )
          goto LABEL_23;
        this = (ClassBoardUIController_o *)v13->m_Items[v8];
        if ( !this )
          break;
        this = (ClassBoardUIController_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      }
      LODWORD(v7) = dispItemIds->max_length;
      if ( (__int64)++v8 >= (int)v7 )
        return;
    }
LABEL_22:
    sub_B2C434(this, dispItemIds);
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
      sub_B2C434(0LL, method);
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
      sub_B2C434(0LL, method);
    UnityEngine_GameObject__SetActive(touchBlock, 0, 0LL);
  }
}


void __fastcall ClassBoardUIController__UpdateItemList(ClassBoardUIController_o *this, const MethodInfo *method)
{
  struct EventItemComponent_array *headerItemComponentList; // x8
  ClassBoardUIController_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9
  unsigned int v6; // w21
  struct EventItemComponent_array *v7; // x8
  __int64 v8; // x0

  headerItemComponentList = this->fields.headerItemComponentList;
  if ( !headerItemComponentList )
LABEL_13:
    sub_B2C434(this, method);
  v3 = this;
  v4 = 4LL;
  while ( 1 )
  {
    max_length = headerItemComponentList->max_length;
    v6 = v4 - 4;
    if ( (int)v4 - 4 >= max_length )
      break;
    if ( v6 >= max_length )
      goto LABEL_15;
    this = (ClassBoardUIController_o *)*((_QWORD *)&headerItemComponentList->obj.klass + v4);
    if ( !this )
      goto LABEL_13;
    this = (ClassBoardUIController_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_13;
    this = (ClassBoardUIController_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v7 = v3->fields.headerItemComponentList;
      if ( !v7 )
        goto LABEL_13;
      if ( v6 >= v7->max_length )
      {
LABEL_15:
        v8 = sub_B2C460(this);
        sub_B2C400(v8, 0LL);
      }
      this = (ClassBoardUIController_o *)*((_QWORD *)&v7->obj.klass + v4);
      if ( !this )
        goto LABEL_13;
      EventItemComponent__UpdateDisp((EventItemComponent_o *)this, 0LL);
    }
    headerItemComponentList = v3->fields.headerItemComponentList;
    ++v4;
    if ( !headerItemComponentList )
      goto LABEL_13;
  }
}