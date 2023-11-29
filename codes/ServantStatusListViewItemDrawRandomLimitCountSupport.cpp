void __fastcall ServantStatusListViewItemDrawRandomLimitCountSupport___ctor(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.MASK_LABEL_MAX_WIDTH = 0x2260000006ELL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusListViewItemDrawRandomLimitCountSupport__Awake(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *titleBase; // x0
  float v4; // s0
  UnityEngine_GameObject_o *titleSprite; // x0
  float v6; // s1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *reflectOwnSettingButton; // x0
  UnityEngine_Transform_o *v9; // x0
  UnityEngine_Component_o *v10; // x0
  UnityEngine_Transform_o *v11; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  titleBase = this->fields.titleBase;
  if ( !titleBase )
    goto LABEL_9;
  v4 = (*(float (__fastcall **)(struct UnityEngine_GameObject_o *, Il2CppMethodPointer))&titleBase->klass[1]._2.naturalAligment)(
         titleBase,
         titleBase->klass[1].vtable._0_Equals.methodPtr);
  titleSprite = (UnityEngine_GameObject_o *)this->fields.titleSprite;
  this->fields.baseSize.fields.z = v4;
  this->fields.titleBasePosition.fields.x = v6;
  this->fields.titleBasePosition.fields.y = 0.0;
  if ( !titleSprite )
    goto LABEL_9;
  transform = UnityEngine_GameObject__get_transform(titleSprite, 0LL);
  if ( !transform )
    goto LABEL_9;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
  reflectOwnSettingButton = (UnityEngine_GameObject_o *)this->fields.reflectOwnSettingButton;
  *(UnityEngine_Vector3_o *)&this->fields.titleBasePosition.fields.z = localPosition;
  if ( !reflectOwnSettingButton
    || (v9 = UnityEngine_GameObject__get_transform(reflectOwnSettingButton, 0LL)) == 0LL
    || (v13 = UnityEngine_Transform__get_localPosition(v9, 0LL),
        v10 = *(UnityEngine_Component_o **)&this->fields.baseSize.fields.x,
        *(UnityEngine_Vector3_o *)&this->fields.buttonBasePosition.fields.z = v13,
        !v10)
    || (v11 = UnityEngine_Component__get_transform(v10, 0LL)) == 0LL )
  {
LABEL_9:
    sub_B170D4();
  }
  *(UnityEngine_Vector3_o *)&this->fields.explanationBasePosition.fields.z = UnityEngine_Transform__get_localPosition(
                                                                               v11,
                                                                               0LL);
}


void __fastcall ServantStatusListViewItemDrawRandomLimitCountSupport__DeactivateLimitCountButtonList(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct UILabel_o *explanationLabel; // x19
  int leftAnchor; // w8
  unsigned int v5; // w20
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  explanationLabel = this->fields.explanationLabel;
  if ( !explanationLabel )
    goto LABEL_9;
  leftAnchor = (int)explanationLabel->fields.leftAnchor;
  if ( leftAnchor >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= leftAnchor )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v6 = (UnityEngine_Component_o *)*((_QWORD *)&explanationLabel->fields.rightAnchor + (int)v5);
      if ( !v6 )
        break;
      gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      leftAnchor = (int)explanationLabel->fields.leftAnchor;
      if ( (int)++v5 >= leftAnchor )
        return;
    }
LABEL_9:
    sub_B170D4();
  }
}


int32_t __fastcall ServantStatusListViewItemDrawRandomLimitCountSupport__GetKind(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        const MethodInfo *method)
{
  return 18;
}


// local variable allocation has failed, the output may be wrong!
UICommonButton_o *__fastcall ServantStatusListViewItemDrawRandomLimitCountSupport__GetLimitCountButton(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct UILabel_o *explanationLabel; // x8
  int32_t leftAnchor; // w9

  explanationLabel = this->fields.explanationLabel;
  if ( !explanationLabel )
    return 0LL;
  leftAnchor = (int32_t)explanationLabel->fields.leftAnchor;
  if ( leftAnchor <= index )
    return 0LL;
  if ( leftAnchor <= (unsigned int)index )
  {
    sub_B17100(this, *(_QWORD *)&index, method);
    sub_B170A0();
  }
  return (UICommonButton_o *)*((_QWORD *)&explanationLabel->fields.rightAnchor + index);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawRandomLimitCountSupport__Layout(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct UILabel_o *explanationLabel; // x20
  int leftAnchor; // w8
  ServantStatusListViewItemDrawRandomLimitCountSupport_o *v5; // x19
  int v6; // w22
  int v7; // w21
  UnityEngine_Component_o *v8; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float v10; // s0
  struct UICommonButton_array *limitCountButtonList; // x8
  int32_t v12; // w0
  struct UICommonButton_array *v13; // x8
  float v14; // s8
  float v15; // s8
  UIWidget_o *titleBase; // x20
  float x; // s10
  float v18; // s9
  int32_t v19; // w0
  double v20; // d0
  struct UnityEngine_GameObject_o *v21; // x8
  UIWidget_o *informationLabel; // x0
  UIWidget_o *v23; // x0
  struct UnityEngine_GameObject_o *v24; // x0
  UnityEngine_BoxCollider_o *baseSprite; // x20
  int v26; // s0
  int v28; // s2
  UnityEngine_GameObject_o *titleSprite; // x0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_GameObject_o *reflectOwnSettingButton; // x0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_Component_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0

  explanationLabel = this->fields.explanationLabel;
  if ( !explanationLabel )
    goto LABEL_25;
  leftAnchor = (int)explanationLabel->fields.leftAnchor;
  v5 = this;
  if ( leftAnchor < 1 )
  {
    v10 = 0.0;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    do
    {
      if ( v6 >= (unsigned int)leftAnchor )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v8 = (UnityEngine_Component_o *)*((_QWORD *)&explanationLabel->fields.rightAnchor + v6);
      if ( !v8 )
        goto LABEL_25;
      gameObject = UnityEngine_Component__get_gameObject(v8, 0LL);
      if ( !gameObject )
        goto LABEL_25;
      this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)UnityEngine_GameObject__get_activeSelf(
                                                                         gameObject,
                                                                         0LL);
      leftAnchor = (int)explanationLabel->fields.leftAnchor;
      ++v6;
      v7 += (unsigned __int8)this & 1;
    }
    while ( v6 < leftAnchor );
    v10 = (float)v7;
  }
  limitCountButtonList = v5->fields.limitCountButtonList;
  if ( !limitCountButtonList )
    goto LABEL_25;
  v12 = UnityEngine_Mathf__CeilToInt((float)(v10 / (float)SHIDWORD(limitCountButtonList->m_Items[0])) + -1.0, 0LL);
  v13 = v5->fields.limitCountButtonList;
  if ( !v13 )
    goto LABEL_25;
  v14 = *((float *)&v13->m_Items[1] + 1);
  v15 = v14 * UnityEngine_Mathf__Max((float)v12, 0.0, 0LL);
  titleBase = (UIWidget_o *)v5->fields.titleBase;
  x = v5->fields.titleBasePosition.fields.x;
  v18 = v15 * 0.5;
  v19 = UnityEngine_Mathf__CeilToInt(v18 + v18, 0LL);
  if ( !titleBase )
    goto LABEL_25;
  v20 = x == INFINITY ? -x : x;
  UIWidget__set_height(titleBase, v19 + (int)v20, 0LL);
  v21 = v5->fields.titleBase;
  if ( !v21 )
    goto LABEL_25;
  informationLabel = (UIWidget_o *)v5->fields.informationLabel;
  if ( !informationLabel )
    goto LABEL_25;
  UIWidget__set_height(informationLabel, *((_DWORD *)&v21[6].fields + 1), 0LL);
  v23 = (UIWidget_o *)v5->fields.informationLabel;
  if ( !v23 )
    goto LABEL_25;
  UIWidget__ResizeCollider(v23, 0LL);
  v24 = v5->fields.titleBase;
  if ( !v24 )
    goto LABEL_25;
  baseSprite = (UnityEngine_BoxCollider_o *)v5->fields.baseSprite;
  (*(void (__fastcall **)(struct UnityEngine_GameObject_o *, Il2CppMethodPointer))&v24->klass[1]._2.naturalAligment)(
    v24,
    v24->klass[1].vtable._0_Equals.methodPtr);
  if ( !baseSprite )
    goto LABEL_25;
  v28 = 0;
  UnityEngine_BoxCollider__set_size(baseSprite, *(UnityEngine_Vector3_o *)&v26, 0LL);
  titleSprite = (UnityEngine_GameObject_o *)v5->fields.titleSprite;
  if ( !titleSprite
    || (v30 = UnityEngine_GameObject__get_gameObject(titleSprite, 0LL),
        GameObjectExtensions__SetLocalPositionY(v30, v18 + v5->fields.buttonBasePosition.fields.x, 0LL),
        (reflectOwnSettingButton = (UnityEngine_GameObject_o *)v5->fields.reflectOwnSettingButton) == 0LL)
    || (v32 = UnityEngine_GameObject__get_gameObject(reflectOwnSettingButton, 0LL),
        GameObjectExtensions__SetLocalPositionY(v32, v18 + v5->fields.explanationBasePosition.fields.x, 0LL),
        (v33 = *(UnityEngine_Component_o **)&v5->fields.baseSize.fields.x) == 0LL) )
  {
LABEL_25:
    sub_B170D4();
  }
  v34 = UnityEngine_Component__get_gameObject(v33, 0LL);
  GameObjectExtensions__SetLocalPositionY(v34, v18 + (float)(*(float *)&v5[1].klass - v15), 0LL);
}


void __fastcall ServantStatusListViewItemDrawRandomLimitCountSupport__ModifyRandomLimitCountSupport(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  ServantStatusListViewItemDrawRandomLimitCountSupport__Setup(this, item, method);
  ServantStatusListViewItemDrawRandomLimitCountSupport__Layout(this, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawRandomLimitCountSupport__SetButtonText(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        UICommonButton_o *targetButton,
        System_String_o *text,
        bool isOpen,
        bool isSelected,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  WebViewObject_o *Component_WebViewObject; // x0
  __int64 *v17; // x8
  UIWidget_o *ComponentInChildren_UIWidget; // x22
  __int64 v19; // x1
  LocalizationManager_c *v20; // x0
  float *static_fields; // x8
  float v22; // s8
  float v23; // s9
  float v24; // s10
  float v25; // s11
  float *v26; // x8
  float v27; // s12
  float v28; // s13
  float v29; // s14
  float v30; // s15
  float v31; // s3
  float v32; // s2
  float v33; // s1
  float v34; // s0

  if ( (byte_40FDEB5 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___, targetButton);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UISprite___, v11);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_16899, v14);
    sub_B16FFC(&StringLiteral_16900, v15);
    byte_40FDEB5 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)targetButton, 0LL, 0LL) )
  {
    if ( !targetButton )
      goto LABEL_43;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                (UnityEngine_Component_o *)targetButton,
                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !Component_WebViewObject )
      goto LABEL_43;
    v17 = &StringLiteral_16900;
    if ( !isSelected )
      v17 = &StringLiteral_16899;
    UISprite__set_spriteName((UISprite_o *)Component_WebViewObject, (System_String_o *)*v17, 0LL);
    UICommonButton__SetButtonEnable(targetButton, isOpen, 1, 0LL);
    ComponentInChildren_UIWidget = UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                     (UnityEngine_Component_o *)targetButton,
                                     (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_UIWidget, 0LL, 0LL) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      if ( !byte_40F6254 )
      {
        sub_B16FFC(&LocalizationManager_TypeInfo, v19);
        byte_40F6254 = 1;
      }
      v20 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v20 = LocalizationManager_TypeInfo;
      }
      static_fields = (float *)v20->static_fields;
      v22 = static_fields[20];
      v23 = static_fields[21];
      v24 = static_fields[22];
      v25 = static_fields[23];
      if ( !byte_40F6255 )
      {
        sub_B16FFC(&LocalizationManager_TypeInfo, v19);
        v20 = LocalizationManager_TypeInfo;
        byte_40F6255 = 1;
      }
      if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        v20 = LocalizationManager_TypeInfo;
      }
      if ( ComponentInChildren_UIWidget )
      {
        v26 = (float *)v20->static_fields;
        v27 = v26[24];
        v28 = v26[25];
        v29 = v26[26];
        v30 = v26[27];
        UILabel__set_overflowMethod((UILabel_o *)ComponentInChildren_UIWidget, 2, 0LL);
        UILabel__set_text((UILabel_o *)ComponentInChildren_UIWidget, text, 0LL);
        if ( isSelected )
          v31 = v30;
        else
          v31 = v25;
        if ( isSelected )
          v32 = v29;
        else
          v32 = v24;
        if ( isSelected )
          v33 = v28;
        else
          v33 = v23;
        if ( isSelected )
          v34 = v27;
        else
          v34 = v22;
        UILabel__set_effectColor((UILabel_o *)ComponentInChildren_UIWidget, *(UnityEngine_Color_o *)(&v31 - 3), 0LL);
        UILabel__SetCondensedScale((UILabel_o *)ComponentInChildren_UIWidget, this->fields.MASK_LABEL_MAX_WIDTH, 0LL);
        return;
      }
LABEL_43:
      sub_B170D4();
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawRandomLimitCountSupport__SetItem(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  this->fields.BUTTON_LABEL_MAX_WIDTH = mode;
  if ( item )
  {
    if ( mode )
    {
      ServantStatusListViewItemDrawRandomLimitCountSupport__Setup(this, item, *(const MethodInfo **)&mode);
      ServantStatusListViewItemDrawRandomLimitCountSupport__Layout(this, v5);
    }
  }
}


void __fastcall ServantStatusListViewItemDrawRandomLimitCountSupport__Setup(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v17; // x21
  __int64 v18; // x22
  UnityEngine_Component_o *limitCountButtonGrid; // x0
  int32_t supportRandomLimitCount; // w28
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v22; // x5
  System_String_o *v23; // x22
  UserServantEntity_c *v24; // x8
  const MethodInfo *v25; // x1
  _BOOL8 v26; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x2
  struct System_Int32_array *supportRandomLimitCountList; // x8
  unsigned __int64 v30; // x22
  unsigned __int64 max_length; // x9
  int32_t v32; // w25
  UnityEngine_Object_o *LimitCountButton; // x23
  UnityEngine_GameObject_o *v34; // x0
  bool v35; // w24
  BalanceConfig_c *v36; // x0
  WebViewManager_o *Instance; // x0
  ServantCostumeMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int32_t SvtId; // w0
  ServantCostumeEntity_o *Entity; // x0
  __int64 v41; // x1
  const MethodInfo *v42; // x5
  System_String_o *ShortName; // x2
  bool v44; // w26
  System_String_o *v45; // x0
  System_String_o *v46; // x25
  ServantStatusListViewItemDrawRandomLimitCountSupport_o *v47; // x0
  UICommonButton_o *v48; // x1
  bool v49; // w3
  LocalizationManager_c *v50; // x0
  struct UICommonButton_array *limitCountButtonList; // x0
  UILabel_o *v52; // x21
  System_String_o *v53; // x0
  const MethodInfo *v54; // x2
  int32_t v55; // w1
  bool v56; // [xsp+4h] [xbp-5Ch]
  int v57; // [xsp+Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_40FDEB3 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, item);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B16FFC(&OptionManager_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&UserServantEntity_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_11956, v12);
    sub_B16FFC(&StringLiteral_11938, v13);
    sub_B16FFC(&StringLiteral_11968, v14);
    sub_B16FFC(&StringLiteral_11939, v15);
    byte_40FDEB3 = 1;
  }
  v57 = 0;
  if ( item && item->fields.supportRandomLimitCountList )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v18 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
      v17 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v58.fields.currentCryptoKey = v18;
      *(_QWORD *)&v58.fields.fakeValue = v17;
      v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v58, 0LL) == 0;
    }
    else
    {
      v56 = 0;
    }
    limitCountButtonGrid = (UnityEngine_Component_o *)this->fields.limitCountButtonGrid;
    if ( !limitCountButtonGrid )
      goto LABEL_58;
    supportRandomLimitCount = item->fields.supportRandomLimitCount;
    gameObject = UnityEngine_Component__get_gameObject(limitCountButtonGrid, 0LL);
    if ( !gameObject )
      goto LABEL_58;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_11968, 0LL);
    v24 = UserServantEntity_TypeInfo;
    if ( (BYTE3(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantEntity_TypeInfo);
      v24 = UserServantEntity_TypeInfo;
    }
    ServantStatusListViewItemDrawRandomLimitCountSupport__SetButtonText(
      this,
      (UICommonButton_o *)this->fields.limitCountButtonGrid,
      v23,
      1,
      supportRandomLimitCount == v24->static_fields->LIMIT_SUPPORT_NOT_ASSIGN,
      v22);
    ServantStatusListViewItemDrawRandomLimitCountSupport__DeactivateLimitCountButtonList(this, v25);
    supportRandomLimitCountList = item->fields.supportRandomLimitCountList;
    if ( !supportRandomLimitCountList )
      goto LABEL_58;
    v30 = 0LL;
    while ( 1 )
    {
      max_length = supportRandomLimitCountList->max_length;
      if ( (__int64)v30 >= (int)max_length )
        break;
      if ( v30 >= max_length )
      {
        sub_B17100(v26, v27, v28);
        sub_B170A0();
      }
      v32 = supportRandomLimitCountList->m_Items[v30 + 1];
      LimitCountButton = (UnityEngine_Object_o *)ServantStatusListViewItemDrawRandomLimitCountSupport__GetLimitCountButton(
                                                   this,
                                                   v30,
                                                   v28);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v26 = UnityEngine_Object__op_Inequality(LimitCountButton, 0LL, 0LL);
      if ( v26 )
      {
        if ( !LimitCountButton )
          goto LABEL_58;
        v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LimitCountButton, 0LL);
        if ( !v34 )
          goto LABEL_58;
        v35 = v32 == supportRandomLimitCount && v32 > 0;
        UnityEngine_GameObject__SetActive(v34, 1, 0LL);
        v36 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v36 = BalanceConfig_TypeInfo;
        }
        if ( v32 <= v36->static_fields->ServantLimitMax )
        {
          v44 = v32 != -1 && !v56;
          if ( v44 )
          {
            v57 = v32 - 1;
            v45 = System_Int32__ToString((int32_t)&v57, 0LL);
            v46 = System_String__Concat_43743732((System_String_o *)StringLiteral_11938, v45, 0LL);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
          }
          else
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v46 = (System_String_o *)StringLiteral_11939;
          }
          ShortName = LocalizationManager__Get(v46, 0LL);
          v47 = this;
          v48 = (UICommonButton_o *)LimitCountButton;
          v49 = v44;
        }
        else
        {
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_58;
          MasterData_WarQuestSelectionMaster = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)Instance,
                                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
          SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_58;
          Entity = ServantCostumeMaster__GetEntity(MasterData_WarQuestSelectionMaster, SvtId, v32, 0LL);
          if ( Entity )
          {
            ShortName = ServantCostumeEntity__getShortName(Entity, 0LL);
          }
          else
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            if ( !byte_40F87E5 )
            {
              sub_B16FFC(&LocalizationManager_TypeInfo, v41);
              byte_40F87E5 = 1;
            }
            v50 = LocalizationManager_TypeInfo;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v50 = LocalizationManager_TypeInfo;
            }
            ShortName = v50->static_fields->unknownNameText;
          }
          v49 = 1;
          v47 = this;
          v48 = (UICommonButton_o *)LimitCountButton;
        }
        ServantStatusListViewItemDrawRandomLimitCountSupport__SetButtonText(v47, v48, ShortName, v49, v35, v42);
      }
      supportRandomLimitCountList = item->fields.supportRandomLimitCountList;
      ++v30;
      if ( !supportRandomLimitCountList )
        goto LABEL_58;
    }
    limitCountButtonList = this->fields.limitCountButtonList;
    if ( !limitCountButtonList )
      goto LABEL_58;
    ((void (__fastcall *)(struct UICommonButton_array *, Il2CppMethodPointer))limitCountButtonList->obj.klass->vtable[8].method)(
      limitCountButtonList,
      limitCountButtonList->obj.klass->vtable[9].methodPtr);
    v52 = *(UILabel_o **)&this->fields.baseSize.fields.x;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v53 = LocalizationManager__Get((System_String_o *)StringLiteral_11956, 0LL);
    if ( !v52 )
LABEL_58:
      sub_B170D4();
    UILabel__set_text(v52, v53, 0LL);
    if ( v56 )
    {
      v55 = 1;
    }
    else
    {
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( OptionManager__GetRandomLimitCountFriend(0LL) )
      {
        v55 = 2;
      }
      else if ( item->fields.isEnableSupportRandomSetting )
      {
        v55 = 3;
      }
      else
      {
        v55 = 0;
      }
    }
    ServantStatusListViewItemDrawRandomLimitCountSupport__SetupMask(this, v55, v54);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawRandomLimitCountSupport__SetupMask(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        int32_t maskType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *maskSprite; // x0
  __int64 *v10; // x8
  System_String_o *Empty; // x20
  UIWidget_o *informationLabel; // x0
  struct UnityEngine_GameObject_o *buttonBaseObj; // x0
  struct UnityEngine_GameObject_o *v14; // x0
  struct UnityEngine_GameObject_o *v15; // x0

  if ( (byte_40FDEB4 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&maskType);
    sub_B16FFC(&string_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_11953, v6);
    sub_B16FFC(&StringLiteral_11954, v7);
    sub_B16FFC(&StringLiteral_11955, v8);
    byte_40FDEB4 = 1;
  }
  maskSprite = (UnityEngine_GameObject_o *)this->fields.maskSprite;
  if ( !maskSprite )
LABEL_28:
    sub_B170D4();
  if ( !maskType )
  {
    UnityEngine_GameObject__SetActive(maskSprite, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive(maskSprite, 1, 0LL);
  switch ( maskType )
  {
    case 3:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v10 = &StringLiteral_11955;
      break;
    case 2:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v10 = &StringLiteral_11953;
      break;
    case 1:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v10 = &StringLiteral_11954;
      break;
    default:
      Empty = string_TypeInfo->static_fields->Empty;
      goto LABEL_23;
  }
  Empty = LocalizationManager__Get((System_String_o *)*v10, 0LL);
LABEL_23:
  informationLabel = (UIWidget_o *)this->fields.informationLabel;
  if ( !informationLabel )
    goto LABEL_28;
  UIWidget__ResizeCollider(informationLabel, 0LL);
  buttonBaseObj = this->fields.buttonBaseObj;
  if ( !buttonBaseObj )
    goto LABEL_28;
  UILabel__set_overflowMethod((UILabel_o *)buttonBaseObj, 2, 0LL);
  v14 = this->fields.buttonBaseObj;
  if ( !v14 )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)v14, Empty, 0LL);
  v15 = this->fields.buttonBaseObj;
  if ( !v15 )
    goto LABEL_28;
  UILabel__SetCondensedScale((UILabel_o *)v15, (int32_t)this->fields.baseCollider, 0LL);
}