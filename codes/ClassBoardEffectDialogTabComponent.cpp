void __fastcall ClassBoardEffectDialogTabComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_4B196A3 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardEffectDialogTabComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_17724/*"btn_tab_{0}"*/, v8, v9);
    byte_4B196A3 = 1;
  }
  ClassBoardEffectDialogTabComponent_TypeInfo->static_fields->TAB_BTN_NAME_FORMAT = (struct System_String_o *)StringLiteral_17724/*"btn_tab_{0}"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ClassBoardEffectDialogTabComponent_TypeInfo->static_fields,
    StringLiteral_17724/*"btn_tab_{0}"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  ClassBoardEffectDialogTabComponent_TypeInfo->static_fields->DISABLED_COLOR = (struct UnityEngine_Color_o)xmmword_BD2CA0;
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
  __int64 v6; // x2
  UICommonButton_o *classButton; // x0
  UIWidget_o *buttonSprite; // x20
  struct UICommonButton_o *v9; // x19
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B196A1 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardEffectDialogTabComponent_TypeInfo, isEnable, method);
    sub_1BCA7E0(&UnityEngine_GameObject___TypeInfo, v5, v6);
    byte_4B196A1 = 1;
  }
  classButton = this->fields.classButton;
  if ( !classButton )
    goto LABEL_10;
  UICommonButton__SetEnable(classButton, isEnable, 0LL);
  if ( isEnable )
    return;
  buttonSprite = (UIWidget_o *)this->fields.buttonSprite;
  classButton = (UICommonButton_o *)ClassBoardEffectDialogTabComponent_TypeInfo;
  if ( !ClassBoardEffectDialogTabComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectDialogTabComponent_TypeInfo, isEnable);
    classButton = (UICommonButton_o *)ClassBoardEffectDialogTabComponent_TypeInfo;
  }
  if ( !buttonSprite
    || (UIWidget__set_color(
          buttonSprite,
          *(UnityEngine_Color_o *)(*(_QWORD *)&classButton[1].fields.specifyHoverColor.fields.b + 8LL),
          0LL),
        v9 = this->fields.classButton,
        classButton = (UICommonButton_o *)sub_1BCA888(UnityEngine_GameObject___TypeInfo, 1LL),
        !v9) )
  {
LABEL_10:
    sub_1BCAA3C(classButton, isEnable);
  }
  v9->fields.tweenTargets = (struct UnityEngine_GameObject_array *)classButton;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v9->fields.tweenTargets,
    (int64_t)classButton,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
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
    sub_1BCAA3C(bgSprite, isEnable);
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
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v27; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x22
  UIWidget_o *buttonSprite; // x23
  struct UICommonButton_o *classButton; // x23
  int64_t v31; // x2
  char v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  UISprite_o *v37; // x23
  int list; // w10
  System_String_o *TAB_BTN_NAME_FORMAT; // x22
  Il2CppObject *v40; // x0
  __int64 v41; // x1
  System_String_o *v42; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v44; // x2
  int v45; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B196A0 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, effectListDialog, *(_QWORD *)&baseId);
    sub_1BCA7E0(&ClassBoardEffectDialogTabComponent_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v15, v16);
    sub_1BCA7E0(&DataManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__, v19, v20);
    sub_1BCA7E0(&UnityEngine_GameObject___TypeInfo, v21, v22);
    sub_1BCA7E0(&int_TypeInfo, v23, v24);
    byte_4B196A0 = 1;
  }
  this->fields.effectListDialog = effectListDialog;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.effectListDialog,
    (int64_t)effectListDialog,
    *(int64_t *)&baseId,
    isDisp,
    (System_String_o *)isSupport,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.baseId = baseId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v25);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_24;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  this->fields.baseId,
                                                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
  v28 = Master_object;
  if ( !isSupport )
  {
    if ( !Master_object )
      goto LABEL_24;
    if ( !ClassBoardBaseEntity__IsOpen((ClassBoardBaseEntity_o *)Master_object, 0LL) )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ClassBoardEffectDialogTabComponent_TypeInfo;
      buttonSprite = (UIWidget_o *)this->fields.buttonSprite;
      if ( !ClassBoardEffectDialogTabComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardEffectDialogTabComponent_TypeInfo, v27);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ClassBoardEffectDialogTabComponent_TypeInfo;
      }
      if ( buttonSprite )
      {
        UIWidget__set_color(buttonSprite, *(UnityEngine_Color_o *)&Master_object[2].fields._lookup->monitor, 0LL);
        classButton = this->fields.classButton;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1BCA888(
                                                                        UnityEngine_GameObject___TypeInfo,
                                                                        1LL);
        if ( classButton )
        {
          classButton->fields.tweenTargets = (struct UnityEngine_GameObject_array *)Master_object;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&classButton->fields.tweenTargets,
            (int64_t)Master_object,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36);
          goto LABEL_14;
        }
      }
LABEL_24:
      sub_1BCAA3C(Master_object, v27);
    }
  }
LABEL_14:
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ClassBoardEffectDialogTabComponent_TypeInfo;
  v37 = this->fields.buttonSprite;
  if ( !ClassBoardEffectDialogTabComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardEffectDialogTabComponent_TypeInfo, v27);
  if ( !v28 )
    goto LABEL_24;
  list = (int)v28->fields.list;
  TAB_BTN_NAME_FORMAT = ClassBoardEffectDialogTabComponent_TypeInfo->static_fields->TAB_BTN_NAME_FORMAT;
  v45 = list;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
  v42 = System_String__Format(TAB_BTN_NAME_FORMAT, v40, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v41);
  AtlasManager__SetClassIconSprite(v37, v42, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.buttonSprite;
  if ( !Master_object )
    goto LABEL_24;
  ((void (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppMethodPointer))Master_object->klass[1].vtable._5_ForForceDerived.method)(
    Master_object,
    Master_object->klass[1].vtable._6_preProcess.methodPtr);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.buttonSprite;
  if ( !Master_object )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  GameObjectExtensions__SetLocalScale_34333164(gameObject, 0.6, 0LL);
  if ( !isSupport )
    ClassBoardEffectDialogTabComponent__SetButtonState(this, isDisp, v44);
}


void __fastcall ClassBoardEffectDialogTabComponent__onClickButton(
        ClassBoardEffectDialogTabComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  ClassBoardEffectListDialog_o *effectListDialog; // x0

  if ( (byte_4B196A2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ClassBoardEffectDialogTabComponent_onClickButton__, method, v2);
    byte_4B196A2 = 1;
  }
  if ( !this->fields.isSelect )
  {
    v4 = Method_ClassBoardEffectDialogTabComponent_onClickButton__;
    if ( (*((_BYTE *)Method_ClassBoardEffectDialogTabComponent_onClickButton__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ClassBoardEffectDialogTabComponent_onClickButton__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    effectListDialog = this->fields.effectListDialog;
    this->fields.isSelect = 1;
    if ( !effectListDialog )
      sub_1BCAA3C(0LL, v6);
    ClassBoardEffectListDialog__ChangeTab(effectListDialog, this->fields.baseId, v7);
  }
}