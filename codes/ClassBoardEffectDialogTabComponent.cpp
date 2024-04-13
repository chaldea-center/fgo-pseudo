void __fastcall ClassBoardEffectDialogTabComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1
  float v13; // s4
  float v14; // s5
  float v15; // s6
  struct UnityEngine_Color_o v16; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E9C21 & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardEffectDialogTabComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_17236/*"btn_tab_{0}"*/, v8, v9, v10);
    byte_42E9C21 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ClassBoardEffectDialogTabComponent_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_17236/*"btn_tab_{0}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17236/*"btn_tab_{0}"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v17.fields.r = 0.30196;
  v16 = (struct UnityEngine_Color_o)0LL;
  v17.fields.g = 0.30196;
  v17.fields.b = 0.30196;
  UnityEngine_Color___ctor_41567816(v17, v13, v14, v15, (const MethodInfo *)&v16);
  ClassBoardEffectDialogTabComponent_TypeInfo->static_fields->DISABLED_COLOR = v16;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UICommonButton_o *classButton; // x0
  UIWidget_o *buttonSprite; // x20
  struct UICommonButton_o *v11; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42E9C1F & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardEffectDialogTabComponent_TypeInfo, isEnable, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_GameObject___TypeInfo, v6, v7, v8);
    byte_42E9C1F = 1;
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
        v11 = this->fields.classButton,
        classButton = (UICommonButton_o *)sub_B5D5DC(UnityEngine_GameObject___TypeInfo, 1LL),
        !v11) )
  {
LABEL_11:
    sub_B5D69C(classButton, isEnable);
  }
  v11->fields.tweenTargets = (struct UnityEngine_GameObject_array *)classButton;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v11->fields.tweenTargets,
    (System_Int32_array **)classButton,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardEffectDialogTabComponent__SetButtonState(
        ClassBoardEffectDialogTabComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Component_o *bgSprite; // x0
  bool v6; // w20

  bgSprite = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !bgSprite || (bgSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bgSprite, 0LL)) == 0LL )
    sub_B5D69C(bgSprite, isEnable);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v32; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v33; // x22
  UIWidget_o *buttonSprite; // x23
  struct UICommonButton_o *classButton; // x23
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UISprite_o *v42; // x23
  int list; // w9
  System_String_o *TAB_BTN_NAME_FORMAT; // x22
  Il2CppObject *v45; // x0
  System_String_o *v46; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v48; // x2
  int v49; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E9C1E & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)effectListDialog, baseId, isDisp);
    sub_B5D5C4(&ClassBoardEffectDialogTabComponent_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v16, v17, v18);
    sub_B5D5C4(&DataManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__, v22, v23, v24);
    sub_B5D5C4(&UnityEngine_GameObject___TypeInfo, v25, v26, v27);
    sub_B5D5C4(&int_TypeInfo, v28, v29, v30);
    byte_42E9C1E = 1;
  }
  this->fields.effectListDialog = effectListDialog;
  sub_B5D560(
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
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_28;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                    Master_WarQuestSelectionMaster,
                                                                                    this->fields.baseId,
                                                                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
  v33 = Master_WarQuestSelectionMaster;
  if ( !isSupport )
  {
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_28;
    if ( !ClassBoardBaseEntity__IsOpen((ClassBoardBaseEntity_o *)Master_WarQuestSelectionMaster, v32) )
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
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)sub_B5D5DC(
                                                                                          UnityEngine_GameObject___TypeInfo,
                                                                                          1LL);
        if ( classButton )
        {
          classButton->fields.tweenTargets = (struct UnityEngine_GameObject_array *)Master_WarQuestSelectionMaster;
          sub_B5D560(
            (BattleServantConfConponent_o *)&classButton->fields.tweenTargets,
            (System_Int32_array **)Master_WarQuestSelectionMaster,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41);
          goto LABEL_16;
        }
      }
LABEL_28:
      sub_B5D69C(Master_WarQuestSelectionMaster, v32);
    }
  }
LABEL_16:
  v42 = this->fields.buttonSprite;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)ClassBoardEffectDialogTabComponent_TypeInfo;
  if ( (BYTE3(ClassBoardEffectDialogTabComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectDialogTabComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectDialogTabComponent_TypeInfo);
  }
  if ( !v33 )
    goto LABEL_28;
  list = (int)v33->fields.list;
  TAB_BTN_NAME_FORMAT = ClassBoardEffectDialogTabComponent_TypeInfo->static_fields->TAB_BTN_NAME_FORMAT;
  v49 = list;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
  v46 = System_String__Format(TAB_BTN_NAME_FORMAT, v45, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassIconSprite(v42, v46, 0LL);
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
  GameObjectExtensions__SetLocalScale_32432652(gameObject, 0.6, 0LL);
  if ( !isSupport )
    ClassBoardEffectDialogTabComponent__SetButtonState(this, isDisp, v48);
}


void __fastcall ClassBoardEffectDialogTabComponent__onClickButton(
        ClassBoardEffectDialogTabComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  ClassBoardEffectListDialog_o *effectListDialog; // x0

  if ( (byte_42E9C20 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ClassBoardEffectDialogTabComponent_onClickButton__, (_DWORD)method, v2, v3);
    byte_42E9C20 = 1;
  }
  if ( !this->fields.isSelect )
  {
    v5 = Method_ClassBoardEffectDialogTabComponent_onClickButton__;
    if ( (*((_BYTE *)Method_ClassBoardEffectDialogTabComponent_onClickButton__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_ClassBoardEffectDialogTabComponent_onClickButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    effectListDialog = this->fields.effectListDialog;
    this->fields.isSelect = 1;
    if ( !effectListDialog )
      sub_B5D69C(0LL, v7);
    ClassBoardEffectListDialog__ChangeTab(effectListDialog, this->fields.baseId, v8);
  }
}