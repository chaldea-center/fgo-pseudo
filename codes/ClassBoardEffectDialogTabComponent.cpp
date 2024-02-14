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

  if ( (byte_4217AF4 & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardEffectDialogTabComponent_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_17078/*"btn_tab_{0}"*/, v8);
    byte_4217AF4 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ClassBoardEffectDialogTabComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_17078/*"btn_tab_{0}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17078/*"btn_tab_{0}"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
  v15.fields.r = 0.30196;
  v14 = (struct UnityEngine_Color_o)0LL;
  v15.fields.g = 0.30196;
  v15.fields.b = 0.30196;
  UnityEngine_Color___ctor_40757524(v15, v11, v12, v13, (const MethodInfo *)&v14);
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
  struct UICommonButton_o *v8; // x19
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4217AF2 & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardEffectDialogTabComponent_TypeInfo, isEnable);
    sub_B0D8A4(&UnityEngine_GameObject___TypeInfo, v5);
    byte_4217AF2 = 1;
  }
  classButton = this->fields.classButton;
  if ( !classButton )
    goto LABEL_11;
  UICommonButton__SetEnable(classButton, isEnable, 0LL);
  if ( isEnable )
    return;
  buttonSprite = (UIWidget_o *)this->fields.buttonSprite;
  classButton = (UICommonButton_o *)ClassBoardEffectDialogTabComponent_TypeInfo;
  if ( (BYTE3(ClassBoardEffectDialogTabComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectDialogTabComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectDialogTabComponent_TypeInfo);
    classButton = (UICommonButton_o *)ClassBoardEffectDialogTabComponent_TypeInfo;
  }
  if ( !buttonSprite
    || (UIWidget__set_color(
          buttonSprite,
          *(UnityEngine_Color_o *)(*(_QWORD *)&classButton[1].fields.specifyPressedColor.fields.b + 8LL),
          0LL),
        v8 = this->fields.classButton,
        classButton = (UICommonButton_o *)sub_B0D8BC(UnityEngine_GameObject___TypeInfo, 1LL),
        !v8) )
  {
LABEL_11:
    sub_B0D97C(classButton);
  }
  v8->fields.tweenTargets = (struct UnityEngine_GameObject_array *)classButton;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v8->fields.tweenTargets,
    (System_Int32_array **)classButton,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


void __fastcall ClassBoardEffectDialogTabComponent__SetButtonState(
        ClassBoardEffectDialogTabComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Component_o *bgSprite; // x0
  bool v6; // w20

  bgSprite = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !bgSprite || (bgSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bgSprite, 0LL)) == 0LL )
    sub_B0D97C(bgSprite);
  v6 = isEnable;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgSprite, v6, 0LL);
  this->fields.isSelect = v6;
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
  const MethodInfo *v20; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x22
  UIWidget_o *buttonSprite; // x23
  struct UICommonButton_o *classButton; // x23
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UISprite_o *v30; // x23
  int list; // w9
  System_String_o *TAB_BTN_NAME_FORMAT; // x22
  Il2CppObject *v33; // x0
  System_String_o *v34; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v36; // x2
  int v37; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4217AF1 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, effectListDialog);
    sub_B0D8A4(&ClassBoardEffectDialogTabComponent_TypeInfo, v13);
    sub_B0D8A4(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v14);
    sub_B0D8A4(&DataManager_TypeInfo, v15);
    sub_B0D8A4(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__, v16);
    sub_B0D8A4(&UnityEngine_GameObject___TypeInfo, v17);
    sub_B0D8A4(&int_TypeInfo, v18);
    byte_4217AF1 = 1;
  }
  this->fields.effectListDialog = effectListDialog;
  sub_B0D840(
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
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_28;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                    Master_WarQuestSelectionMaster,
                                                                                    this->fields.baseId,
                                                                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
  v21 = Master_WarQuestSelectionMaster;
  if ( !isSupport )
  {
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_28;
    if ( !ClassBoardBaseEntity__IsOpen((ClassBoardBaseEntity_o *)Master_WarQuestSelectionMaster, v20) )
    {
      buttonSprite = (UIWidget_o *)this->fields.buttonSprite;
      Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)ClassBoardEffectDialogTabComponent_TypeInfo;
      if ( (BYTE3(ClassBoardEffectDialogTabComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ClassBoardEffectDialogTabComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardEffectDialogTabComponent_TypeInfo);
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)ClassBoardEffectDialogTabComponent_TypeInfo;
      }
      if ( buttonSprite )
      {
        UIWidget__set_color(
          buttonSprite,
          *(UnityEngine_Color_o *)&Master_WarQuestSelectionMaster[2].fields._lookup->monitor,
          0LL);
        classButton = this->fields.classButton;
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)sub_B0D8BC(
                                                                                          UnityEngine_GameObject___TypeInfo,
                                                                                          1LL);
        if ( classButton )
        {
          classButton->fields.tweenTargets = (struct UnityEngine_GameObject_array *)Master_WarQuestSelectionMaster;
          sub_B0D840(
            (BattleServantConfConponent_o *)&classButton->fields.tweenTargets,
            (System_Int32_array **)Master_WarQuestSelectionMaster,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29);
          goto LABEL_16;
        }
      }
LABEL_28:
      sub_B0D97C(Master_WarQuestSelectionMaster);
    }
  }
LABEL_16:
  v30 = this->fields.buttonSprite;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)ClassBoardEffectDialogTabComponent_TypeInfo;
  if ( (BYTE3(ClassBoardEffectDialogTabComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectDialogTabComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectDialogTabComponent_TypeInfo);
  }
  if ( !v21 )
    goto LABEL_28;
  list = (int)v21->fields.list;
  TAB_BTN_NAME_FORMAT = ClassBoardEffectDialogTabComponent_TypeInfo->static_fields->TAB_BTN_NAME_FORMAT;
  v37 = list;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
  v34 = System_String__Format(TAB_BTN_NAME_FORMAT, v33, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassIconSprite(v30, v34, 0LL);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.buttonSprite;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_28;
  ((void (__fastcall *)(DataMasterBase_WarMaster__WarEntity__int__o *, Il2CppMethodPointer))Master_WarQuestSelectionMaster->klass[1].vtable._5_ForForceDerived.method)(
    Master_WarQuestSelectionMaster,
    Master_WarQuestSelectionMaster->klass[1].vtable._6_preProcess.methodPtr);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.buttonSprite;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_28;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
  GameObjectExtensions__SetLocalScale_31180844(gameObject, 0.6, 0LL);
  if ( !isSupport )
    ClassBoardEffectDialogTabComponent__SetButtonState(this, isDisp, v36);
}


void __fastcall ClassBoardEffectDialogTabComponent__onClickButton(
        ClassBoardEffectDialogTabComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  ClassBoardEffectListDialog_o *effectListDialog; // x0

  if ( (byte_4217AF3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_ClassBoardEffectDialogTabComponent_onClickButton__, method);
    byte_4217AF3 = 1;
  }
  if ( !this->fields.isSelect )
  {
    v3 = Method_ClassBoardEffectDialogTabComponent_onClickButton__;
    if ( (*((_BYTE *)Method_ClassBoardEffectDialogTabComponent_onClickButton__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B0D8AC(Method_ClassBoardEffectDialogTabComponent_onClickButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_B0D888(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    effectListDialog = this->fields.effectListDialog;
    this->fields.isSelect = 1;
    if ( !effectListDialog )
      sub_B0D97C(0LL);
    ClassBoardEffectListDialog__ChangeTab(effectListDialog, this->fields.baseId, v5);
  }
}