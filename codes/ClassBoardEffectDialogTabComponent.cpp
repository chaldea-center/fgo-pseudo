void __fastcall ClassBoardEffectDialogTabComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1
  float v11; // s4
  float v12; // s5
  float v13; // s6
  struct UnityEngine_Color_o v14; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FB93F & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardEffectDialogTabComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_16961, v8);
    byte_40FB93F = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ClassBoardEffectDialogTabComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_16961;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16961;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
  v15.fields.r = 0.30196;
  v14 = (struct UnityEngine_Color_o)0LL;
  v15.fields.g = 0.30196;
  v15.fields.b = 0.30196;
  UnityEngine_Color___ctor_40666012(v15, v11, v12, v13, (const MethodInfo *)&v14);
  ClassBoardEffectDialogTabComponent_TypeInfo->static_fields->DISABLED_COLOR = v14;
}


void __fastcall ClassBoardEffectDialogTabComponent___ctor(
        ClassBoardEffectDialogTabComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ClassBoardEffectDialogTabComponent__Awake(
        ClassBoardEffectDialogTabComponent_o *this,
        const MethodInfo *method)
{
  ;
}


int32_t __fastcall ClassBoardEffectDialogTabComponent__GetBaseId(
        ClassBoardEffectDialogTabComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.baseId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardEffectDialogTabComponent__SetButtonEnable(
        ClassBoardEffectDialogTabComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UICommonButton_o *classButton; // x0
  UIWidget_o *buttonSprite; // x20
  ClassBoardEffectDialogTabComponent_c *v8; // x0
  struct UICommonButton_o *v9; // x19
  __int64 v10; // x2
  System_Int32_array **v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_40FB93D & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardEffectDialogTabComponent_TypeInfo, isEnable);
    sub_B16FFC(&UnityEngine_GameObject___TypeInfo, v5);
    byte_40FB93D = 1;
  }
  classButton = this->fields.classButton;
  if ( !classButton )
    goto LABEL_11;
  UICommonButton__SetEnable(classButton, isEnable, 0LL);
  if ( isEnable )
    return;
  buttonSprite = (UIWidget_o *)this->fields.buttonSprite;
  v8 = ClassBoardEffectDialogTabComponent_TypeInfo;
  if ( (BYTE3(ClassBoardEffectDialogTabComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectDialogTabComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectDialogTabComponent_TypeInfo);
    v8 = ClassBoardEffectDialogTabComponent_TypeInfo;
  }
  if ( !buttonSprite
    || (UIWidget__set_color(buttonSprite, v8->static_fields->DISABLED_COLOR, 0LL),
        v9 = this->fields.classButton,
        v11 = (System_Int32_array **)sub_B17014(UnityEngine_GameObject___TypeInfo, 1LL, v10),
        !v9) )
  {
LABEL_11:
    sub_B170D4();
  }
  v9->fields.tweenTargets = (struct UnityEngine_GameObject_array *)v11;
  sub_B16F98((BattleServantConfConponent_o *)&v9->fields.tweenTargets, v11, v12, v13, v14, v15, v16, v17);
}


void __fastcall ClassBoardEffectDialogTabComponent__SetButtonState(
        ClassBoardEffectDialogTabComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Component_o *bgSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  bool v7; // w20

  bgSprite = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !bgSprite || (gameObject = UnityEngine_Component__get_gameObject(bgSprite, 0LL)) == 0LL )
    sub_B170D4();
  v7 = isEnable;
  UnityEngine_GameObject__SetActive(gameObject, v7, 0LL);
  this->fields.isSelect = v7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardEffectDialogTabComponent__Setup(
        ClassBoardEffectDialogTabComponent_o *this,
        ClassBoardEffectListDialog_o *effectListDialog,
        int32_t baseId,
        bool isDisp,
        bool isSupport,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  ClassBoardBaseEntity_o *Entity; // x0
  ClassBoardBaseEntity_o *v21; // x22
  UIWidget_o *buttonSprite; // x23
  ClassBoardEffectDialogTabComponent_c *v23; // x0
  struct UICommonButton_o *classButton; // x23
  __int64 v25; // x2
  System_Int32_array **v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UISprite_o *v33; // x23
  int iconId; // w9
  System_String_o *TAB_BTN_NAME_FORMAT; // x22
  Il2CppObject *v36; // x0
  System_String_o *v37; // x22
  struct UISprite_o *v38; // x0
  UnityEngine_Component_o *v39; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v41; // x2
  int v42; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FB93C & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, effectListDialog);
    sub_B16FFC(&ClassBoardEffectDialogTabComponent_TypeInfo, v13);
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v14);
    sub_B16FFC(&DataManager_TypeInfo, v15);
    sub_B16FFC(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__, v16);
    sub_B16FFC(&UnityEngine_GameObject___TypeInfo, v17);
    sub_B16FFC(&int_TypeInfo, v18);
    byte_40FB93C = 1;
  }
  this->fields.effectListDialog = effectListDialog;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.effectListDialog,
    (System_Int32_array **)effectListDialog,
    *(System_String_array ***)&baseId,
    (System_String_array **)isDisp,
    (System_Boolean_array **)isSupport,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.baseId = baseId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_28;
  Entity = (ClassBoardBaseEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       Master_WarQuestSelectionMaster,
                                       this->fields.baseId,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
  v21 = Entity;
  if ( !isSupport )
  {
    if ( !Entity )
      goto LABEL_28;
    if ( !ClassBoardBaseEntity__IsOpen(Entity, 0LL) )
    {
      buttonSprite = (UIWidget_o *)this->fields.buttonSprite;
      v23 = ClassBoardEffectDialogTabComponent_TypeInfo;
      if ( (BYTE3(ClassBoardEffectDialogTabComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ClassBoardEffectDialogTabComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardEffectDialogTabComponent_TypeInfo);
        v23 = ClassBoardEffectDialogTabComponent_TypeInfo;
      }
      if ( buttonSprite )
      {
        UIWidget__set_color(buttonSprite, v23->static_fields->DISABLED_COLOR, 0LL);
        classButton = this->fields.classButton;
        v26 = (System_Int32_array **)sub_B17014(UnityEngine_GameObject___TypeInfo, 1LL, v25);
        if ( classButton )
        {
          classButton->fields.tweenTargets = (struct UnityEngine_GameObject_array *)v26;
          sub_B16F98(
            (BattleServantConfConponent_o *)&classButton->fields.tweenTargets,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32);
          goto LABEL_16;
        }
      }
LABEL_28:
      sub_B170D4();
    }
  }
LABEL_16:
  v33 = this->fields.buttonSprite;
  if ( (BYTE3(ClassBoardEffectDialogTabComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectDialogTabComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectDialogTabComponent_TypeInfo);
  }
  if ( !v21 )
    goto LABEL_28;
  iconId = v21->fields.iconId;
  TAB_BTN_NAME_FORMAT = ClassBoardEffectDialogTabComponent_TypeInfo->static_fields->TAB_BTN_NAME_FORMAT;
  v42 = iconId;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
  v37 = System_String__Format(TAB_BTN_NAME_FORMAT, v36, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassIconSprite(v33, v37, 0LL);
  v38 = this->fields.buttonSprite;
  if ( !v38 )
    goto LABEL_28;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v38->klass->vtable._33_MakePixelPerfect.method)(
    v38,
    v38->klass->vtable._34_get_minWidth.methodPtr);
  v39 = (UnityEngine_Component_o *)this->fields.buttonSprite;
  if ( !v39 )
    goto LABEL_28;
  gameObject = UnityEngine_Component__get_gameObject(v39, 0LL);
  GameObjectExtensions__SetLocalScale_27422124(gameObject, 0.6, 0LL);
  if ( !isSupport )
    ClassBoardEffectDialogTabComponent__SetButtonState(this, isDisp, v41);
}


void __fastcall ClassBoardEffectDialogTabComponent__onClickButton(
        ClassBoardEffectDialogTabComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  ClassBoardEffectListDialog_o *effectListDialog; // x0

  if ( (byte_40FB93E & 1) == 0 )
  {
    sub_B16FFC(&Method_ClassBoardEffectDialogTabComponent_onClickButton__, method);
    byte_40FB93E = 1;
  }
  if ( !this->fields.isSelect )
  {
    v3 = Method_ClassBoardEffectDialogTabComponent_onClickButton__;
    if ( (*((_BYTE *)Method_ClassBoardEffectDialogTabComponent_onClickButton__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_ClassBoardEffectDialogTabComponent_onClickButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    effectListDialog = this->fields.effectListDialog;
    this->fields.isSelect = 1;
    if ( !effectListDialog )
      sub_B170D4();
    ClassBoardEffectListDialog__ChangeTab(effectListDialog, this->fields.baseId, v5);
  }
}