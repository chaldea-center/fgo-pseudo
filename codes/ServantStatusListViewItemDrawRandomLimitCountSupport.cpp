void __fastcall ServantStatusListViewItemDrawRandomLimitCountSupport___ctor(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.MASK_LABEL_MAX_WIDTH = 0x2260000006ELL;
  ServantStatusListViewItemDraw___ctor((ServantStatusListViewItemDraw_o *)this, 0LL);
}


void __fastcall ServantStatusListViewItemDrawRandomLimitCountSupport__Awake(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *titleBase; // x0
  float v4; // s0
  float v5; // s1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4

  titleBase = this->fields.titleBase;
  if ( !titleBase )
    goto LABEL_9;
  v4 = (*(float (__fastcall **)(UnityEngine_GameObject_o *, Il2CppMethodPointer))&titleBase->klass[1]._2.naturalAligment)(
         titleBase,
         titleBase->klass[1].vtable._0_Equals.methodPtr);
  titleBase = (UnityEngine_GameObject_o *)this->fields.titleSprite;
  this->fields.baseSize.fields.z = v4;
  this->fields.titleBasePosition.fields.x = v5;
  this->fields.titleBasePosition.fields.y = 0.0;
  if ( !titleBase )
    goto LABEL_9;
  titleBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(titleBase, 0LL);
  if ( !titleBase )
    goto LABEL_9;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)titleBase, 0LL);
  titleBase = (UnityEngine_GameObject_o *)this->fields.reflectOwnSettingButton;
  *(UnityEngine_Vector3_o *)&this->fields.titleBasePosition.fields.z = localPosition;
  if ( !titleBase
    || (titleBase = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(titleBase, 0LL)) == 0LL
    || (v7 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)titleBase, 0LL),
        titleBase = *(UnityEngine_GameObject_o **)&this->fields.baseSize.fields.x,
        *(UnityEngine_Vector3_o *)&this->fields.buttonBasePosition.fields.z = v7,
        !titleBase)
    || (titleBase = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)titleBase,
                                                  0LL)) == 0LL )
  {
LABEL_9:
    sub_B2C434(titleBase, method);
  }
  *(UnityEngine_Vector3_o *)&this->fields.explanationBasePosition.fields.z = UnityEngine_Transform__get_localPosition(
                                                                               (UnityEngine_Transform_o *)titleBase,
                                                                               0LL);
}


void __fastcall ServantStatusListViewItemDrawRandomLimitCountSupport__DeactivateLimitCountButtonList(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        const MethodInfo *method)
{
  struct UILabel_o *explanationLabel; // x19
  int leftAnchor; // w8
  unsigned int v4; // w20
  __int64 v5; // x0

  explanationLabel = this->fields.explanationLabel;
  if ( !explanationLabel )
    goto LABEL_9;
  leftAnchor = (int)explanationLabel->fields.leftAnchor;
  if ( leftAnchor >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( v4 >= leftAnchor )
      {
        v5 = sub_B2C460(this);
        sub_B2C400(v5, 0LL);
      }
      this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)*((_QWORD *)&explanationLabel->fields.rightAnchor
                                                                       + (int)v4);
      if ( !this )
        break;
      this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0LL);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      leftAnchor = (int)explanationLabel->fields.leftAnchor;
      if ( (int)++v4 >= leftAnchor )
        return;
    }
LABEL_9:
    sub_B2C434(this, method);
  }
}


int32_t __fastcall ServantStatusListViewItemDrawRandomLimitCountSupport__GetKind(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        const MethodInfo *method)
{
  return 18;
}


UICommonButton_o *__fastcall ServantStatusListViewItemDrawRandomLimitCountSupport__GetLimitCountButton(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct UILabel_o *explanationLabel; // x8
  int32_t leftAnchor; // w9
  __int64 v6; // x0

  explanationLabel = this->fields.explanationLabel;
  if ( !explanationLabel )
    return 0LL;
  leftAnchor = (int32_t)explanationLabel->fields.leftAnchor;
  if ( leftAnchor <= index )
    return 0LL;
  if ( leftAnchor <= (unsigned int)index )
  {
    v6 = sub_B2C460(this);
    sub_B2C400(v6, 0LL);
  }
  return (UICommonButton_o *)*((_QWORD *)&explanationLabel->fields.rightAnchor + index);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawRandomLimitCountSupport__Layout(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        const MethodInfo *method)
{
  struct UILabel_o *explanationLabel; // x20
  int leftAnchor; // w8
  ServantStatusListViewItemDrawRandomLimitCountSupport_o *v4; // x19
  int v5; // w22
  int v6; // w21
  float v7; // s0
  struct UICommonButton_array *limitCountButtonList; // x8
  struct UICommonButton_array *v9; // x8
  float v10; // s8
  float v11; // s8
  UIWidget_o *titleBase; // x20
  float x; // s10
  float v14; // s9
  double v15; // d0
  struct UnityEngine_GameObject_o *v16; // x8
  UnityEngine_BoxCollider_o *baseSprite; // x20
  int v18; // s0
  int v20; // s2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  __int64 v24; // x0

  explanationLabel = this->fields.explanationLabel;
  if ( !explanationLabel )
    goto LABEL_25;
  leftAnchor = (int)explanationLabel->fields.leftAnchor;
  v4 = this;
  if ( leftAnchor < 1 )
  {
    v7 = 0.0;
  }
  else
  {
    v5 = 0;
    v6 = 0;
    do
    {
      if ( v5 >= (unsigned int)leftAnchor )
      {
        v24 = sub_B2C460(this);
        sub_B2C400(v24, 0LL);
      }
      this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)*((_QWORD *)&explanationLabel->fields.rightAnchor
                                                                       + v5);
      if ( !this )
        goto LABEL_25;
      this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0LL);
      if ( !this )
        goto LABEL_25;
      this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)UnityEngine_GameObject__get_activeSelf(
                                                                         (UnityEngine_GameObject_o *)this,
                                                                         0LL);
      leftAnchor = (int)explanationLabel->fields.leftAnchor;
      ++v5;
      v6 += (unsigned __int8)this & 1;
    }
    while ( v5 < leftAnchor );
    v7 = (float)v6;
  }
  limitCountButtonList = v4->fields.limitCountButtonList;
  if ( !limitCountButtonList )
    goto LABEL_25;
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)UnityEngine_Mathf__CeilToInt(
                                                                     (float)(v7
                                                                           / (float)SHIDWORD(limitCountButtonList->m_Items[0]))
                                                                   + -1.0,
                                                                     0LL);
  v9 = v4->fields.limitCountButtonList;
  if ( !v9 )
    goto LABEL_25;
  v10 = *((float *)&v9->m_Items[1] + 1);
  v11 = v10 * UnityEngine_Mathf__Max((float)(int)this, 0.0, 0LL);
  titleBase = (UIWidget_o *)v4->fields.titleBase;
  x = v4->fields.titleBasePosition.fields.x;
  v14 = v11 * 0.5;
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)UnityEngine_Mathf__CeilToInt(v14 + v14, 0LL);
  if ( !titleBase )
    goto LABEL_25;
  v15 = x == INFINITY ? -x : x;
  UIWidget__set_height(titleBase, (_DWORD)this + (int)v15, 0LL);
  v16 = v4->fields.titleBase;
  if ( !v16 )
    goto LABEL_25;
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.informationLabel;
  if ( !this )
    goto LABEL_25;
  UIWidget__set_height((UIWidget_o *)this, *((_DWORD *)&v16[6].fields + 1), 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.informationLabel;
  if ( !this )
    goto LABEL_25;
  UIWidget__ResizeCollider((UIWidget_o *)this, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.titleBase;
  if ( !this )
    goto LABEL_25;
  baseSprite = (UnityEngine_BoxCollider_o *)v4->fields.baseSprite;
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)((__int64 (__fastcall *)(ServantStatusListViewItemDrawRandomLimitCountSupport_o *, void *))this->klass[1]._1.events)(
                                                                     this,
                                                                     this->klass[1]._1.properties);
  if ( !baseSprite )
    goto LABEL_25;
  v20 = 0;
  UnityEngine_BoxCollider__set_size(baseSprite, *(UnityEngine_Vector3_o *)&v18, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.titleSprite;
  if ( !this
    || (gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL),
        GameObjectExtensions__SetLocalPositionY(gameObject, v14 + v4->fields.buttonBasePosition.fields.x, 0LL),
        (this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.reflectOwnSettingButton) == 0LL)
    || (v22 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL),
        GameObjectExtensions__SetLocalPositionY(v22, v14 + v4->fields.explanationBasePosition.fields.x, 0LL),
        (this = *(ServantStatusListViewItemDrawRandomLimitCountSupport_o **)&v4->fields.baseSize.fields.x) == 0LL) )
  {
LABEL_25:
    sub_B2C434(this, method);
  }
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v23, v14 + (float)(*(float *)&v4[1].klass - v11), 0LL);
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
  void *Component_WebViewObject; // x0
  __int64 v17; // x1
  __int64 *v18; // x8
  UIWidget_o *ComponentInChildren_UIWidget; // x22
  float *v20; // x8
  float v21; // s8
  float v22; // s9
  float v23; // s10
  float v24; // s11
  float *v25; // x8
  float v26; // s12
  float v27; // s13
  float v28; // s14
  float v29; // s15
  float v30; // s3
  float v31; // s2
  float v32; // s1
  float v33; // s0

  if ( (byte_418A7DD & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___, targetButton);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UISprite___, v11);
    sub_B2C35C(&LocalizationManager_TypeInfo, v12);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_16965/*"btn_bg_20"*/, v14);
    sub_B2C35C(&StringLiteral_16966/*"btn_bg_21"*/, v15);
    byte_418A7DD = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_WebViewObject = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)targetButton, 0LL, 0LL);
  if ( ((unsigned __int8)Component_WebViewObject & 1) != 0 )
  {
    if ( !targetButton )
      goto LABEL_43;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                (UnityEngine_Component_o *)targetButton,
                                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !Component_WebViewObject )
      goto LABEL_43;
    v18 = &StringLiteral_16966/*"btn_bg_21"*/;
    if ( !isSelected )
      v18 = &StringLiteral_16965/*"btn_bg_20"*/;
    UISprite__set_spriteName((UISprite_o *)Component_WebViewObject, (System_String_o *)*v18, 0LL);
    UICommonButton__SetButtonEnable(targetButton, isOpen, 1, 0LL);
    ComponentInChildren_UIWidget = UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                     (UnityEngine_Component_o *)targetButton,
                                     (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
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
      if ( !byte_4184963 )
      {
        sub_B2C35C(&LocalizationManager_TypeInfo, v17);
        byte_4184963 = 1;
      }
      Component_WebViewObject = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Component_WebViewObject = LocalizationManager_TypeInfo;
      }
      v20 = (float *)*((_QWORD *)Component_WebViewObject + 23);
      v21 = v20[20];
      v22 = v20[21];
      v23 = v20[22];
      v24 = v20[23];
      if ( !byte_4184964 )
      {
        sub_B2C35C(&LocalizationManager_TypeInfo, v17);
        Component_WebViewObject = LocalizationManager_TypeInfo;
        byte_4184964 = 1;
      }
      if ( (*((_BYTE *)Component_WebViewObject + 307) & 4) != 0 && !*((_DWORD *)Component_WebViewObject + 56) )
      {
        j_il2cpp_runtime_class_init_0(Component_WebViewObject);
        Component_WebViewObject = LocalizationManager_TypeInfo;
      }
      if ( ComponentInChildren_UIWidget )
      {
        v25 = (float *)*((_QWORD *)Component_WebViewObject + 23);
        v26 = v25[24];
        v27 = v25[25];
        v28 = v25[26];
        v29 = v25[27];
        UILabel__set_overflowMethod((UILabel_o *)ComponentInChildren_UIWidget, 2, 0LL);
        UILabel__set_text((UILabel_o *)ComponentInChildren_UIWidget, text, 0LL);
        if ( isSelected )
          v30 = v29;
        else
          v30 = v24;
        if ( isSelected )
          v31 = v28;
        else
          v31 = v23;
        if ( isSelected )
          v32 = v27;
        else
          v32 = v22;
        if ( isSelected )
          v33 = v26;
        else
          v33 = v21;
        UILabel__set_effectColor((UILabel_o *)ComponentInChildren_UIWidget, *(UnityEngine_Color_o *)(&v30 - 3), 0LL);
        UILabel__SetCondensedScale((UILabel_o *)ComponentInChildren_UIWidget, this->fields.MASK_LABEL_MAX_WIDTH, 0LL);
        return;
      }
LABEL_43:
      sub_B2C434(Component_WebViewObject, v17);
    }
  }
}


void __fastcall ServantStatusListViewItemDrawRandomLimitCountSupport__SetItem(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1

  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  if ( item )
  {
    if ( mode )
    {
      ServantStatusListViewItemDrawRandomLimitCountSupport__Setup(this, item, v7);
      ServantStatusListViewItemDrawRandomLimitCountSupport__Layout(this, v8);
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
  const MethodInfo *v21; // x5
  System_String_o *v22; // x22
  UserServantEntity_c *v23; // x8
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2
  struct System_Int32_array *supportRandomLimitCountList; // x8
  unsigned __int64 v27; // x22
  unsigned __int64 max_length; // x9
  int32_t v29; // w25
  UnityEngine_Object_o *LimitCountButton; // x23
  bool v31; // w24
  BalanceConfig_c *v32; // x0
  ServantCostumeMaster_o *MasterData_WarQuestSelectionMaster; // x26
  ServantCostumeEntity_o *Entity; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x5
  System_String_o *ShortName; // x2
  bool v38; // w26
  System_String_o *v39; // x0
  System_String_o *v40; // x25
  ServantStatusListViewItemDrawRandomLimitCountSupport_o *v41; // x0
  UICommonButton_o *v42; // x1
  bool v43; // w3
  LocalizationManager_c *v44; // x0
  UILabel_o *v45; // x21
  const MethodInfo *v46; // x2
  int32_t v47; // w1
  __int64 v48; // x0
  bool v49; // [xsp+4h] [xbp-5Ch]
  int v50; // [xsp+Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_418A7DB & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, item);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&OptionManager_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B2C35C(&UserServantEntity_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_12006/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/, v12);
    sub_B2C35C(&StringLiteral_11988/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v13);
    sub_B2C35C(&StringLiteral_12018/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_REFLECT_OWN"*/, v14);
    sub_B2C35C(&StringLiteral_11989/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/, v15);
    byte_418A7DB = 1;
  }
  v50 = 0;
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
      *(_QWORD *)&v51.fields.currentCryptoKey = v18;
      *(_QWORD *)&v51.fields.fakeValue = v17;
      v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v51, 0LL) == 0;
    }
    else
    {
      v49 = 0;
    }
    limitCountButtonGrid = (UnityEngine_Component_o *)this->fields.limitCountButtonGrid;
    if ( !limitCountButtonGrid )
      goto LABEL_58;
    supportRandomLimitCount = item->fields.supportRandomLimitCount;
    limitCountButtonGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(limitCountButtonGrid, 0LL);
    if ( !limitCountButtonGrid )
      goto LABEL_58;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)limitCountButtonGrid, 1, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12018/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_REFLECT_OWN"*/, 0LL);
    v23 = UserServantEntity_TypeInfo;
    if ( (BYTE3(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantEntity_TypeInfo);
      v23 = UserServantEntity_TypeInfo;
    }
    ServantStatusListViewItemDrawRandomLimitCountSupport__SetButtonText(
      this,
      (UICommonButton_o *)this->fields.limitCountButtonGrid,
      v22,
      1,
      supportRandomLimitCount == v23->static_fields->LIMIT_SUPPORT_NOT_ASSIGN,
      v21);
    ServantStatusListViewItemDrawRandomLimitCountSupport__DeactivateLimitCountButtonList(this, v24);
    supportRandomLimitCountList = item->fields.supportRandomLimitCountList;
    if ( !supportRandomLimitCountList )
      goto LABEL_58;
    v27 = 0LL;
    while ( 1 )
    {
      max_length = supportRandomLimitCountList->max_length;
      if ( (__int64)v27 >= (int)max_length )
        break;
      if ( v27 >= max_length )
      {
        v48 = sub_B2C460(limitCountButtonGrid);
        sub_B2C400(v48, 0LL);
      }
      v29 = supportRandomLimitCountList->m_Items[v27 + 1];
      LimitCountButton = (UnityEngine_Object_o *)ServantStatusListViewItemDrawRandomLimitCountSupport__GetLimitCountButton(
                                                   this,
                                                   v27,
                                                   v25);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      limitCountButtonGrid = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(LimitCountButton, 0LL, 0LL);
      if ( ((unsigned __int8)limitCountButtonGrid & 1) != 0 )
      {
        if ( !LimitCountButton )
          goto LABEL_58;
        limitCountButtonGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)LimitCountButton,
                                                            0LL);
        if ( !limitCountButtonGrid )
          goto LABEL_58;
        v31 = v29 == supportRandomLimitCount && v29 > 0;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)limitCountButtonGrid, 1, 0LL);
        v32 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v32 = BalanceConfig_TypeInfo;
        }
        if ( v29 <= v32->static_fields->ServantLimitMax )
        {
          v38 = v29 != -1 && !v49;
          if ( v38 )
          {
            v50 = v29 - 1;
            v39 = System_Int32__ToString((int32_t)&v50, 0LL);
            v40 = System_String__Concat_44305532((System_String_o *)StringLiteral_11988/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v39, 0LL);
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
            v40 = (System_String_o *)StringLiteral_11989/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
          }
          ShortName = LocalizationManager__Get(v40, 0LL);
          v41 = this;
          v42 = (UICommonButton_o *)LimitCountButton;
          v43 = v38;
        }
        else
        {
          limitCountButtonGrid = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !limitCountButtonGrid )
            goto LABEL_58;
          MasterData_WarQuestSelectionMaster = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)limitCountButtonGrid,
                                                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
          limitCountButtonGrid = (UnityEngine_Component_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_58;
          Entity = ServantCostumeMaster__GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     (int32_t)limitCountButtonGrid,
                     v29,
                     0LL);
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
            if ( !byte_4185BC0 )
            {
              sub_B2C35C(&LocalizationManager_TypeInfo, v35);
              byte_4185BC0 = 1;
            }
            v44 = LocalizationManager_TypeInfo;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v44 = LocalizationManager_TypeInfo;
            }
            ShortName = v44->static_fields->unknownNameText;
          }
          v43 = 1;
          v41 = this;
          v42 = (UICommonButton_o *)LimitCountButton;
        }
        ServantStatusListViewItemDrawRandomLimitCountSupport__SetButtonText(v41, v42, ShortName, v43, v31, v36);
      }
      supportRandomLimitCountList = item->fields.supportRandomLimitCountList;
      ++v27;
      if ( !supportRandomLimitCountList )
        goto LABEL_58;
    }
    limitCountButtonGrid = (UnityEngine_Component_o *)this->fields.limitCountButtonList;
    if ( !limitCountButtonGrid )
      goto LABEL_58;
    ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))limitCountButtonGrid->klass[1]._1.castClass)(
      limitCountButtonGrid,
      limitCountButtonGrid->klass[1]._1.declaringType);
    v45 = *(UILabel_o **)&this->fields.baseSize.fields.x;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    limitCountButtonGrid = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_12006/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/,
                                                        0LL);
    if ( !v45 )
LABEL_58:
      sub_B2C434(limitCountButtonGrid, item);
    UILabel__set_text(v45, (System_String_o *)limitCountButtonGrid, 0LL);
    if ( v49 )
    {
      v47 = 1;
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
        v47 = 2;
      }
      else if ( item->fields.isEnableSupportRandomSetting )
      {
        v47 = 3;
      }
      else
      {
        v47 = 0;
      }
    }
    ServantStatusListViewItemDrawRandomLimitCountSupport__SetupMask(this, v47, v46);
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

  if ( (byte_418A7DC & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&maskType);
    sub_B2C35C(&string_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_12003/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_ALL_SET_INFO"*/, v6);
    sub_B2C35C(&StringLiteral_12004/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_COMBINE_INFO"*/, v7);
    sub_B2C35C(&StringLiteral_12005/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_ENABLE_INFO"*/, v8);
    byte_418A7DC = 1;
  }
  maskSprite = (UnityEngine_GameObject_o *)this->fields.maskSprite;
  if ( !maskSprite )
LABEL_28:
    sub_B2C434(maskSprite, *(_QWORD *)&maskType);
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
      v10 = &StringLiteral_12005/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_ENABLE_INFO"*/;
      break;
    case 2:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v10 = &StringLiteral_12003/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_ALL_SET_INFO"*/;
      break;
    case 1:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v10 = &StringLiteral_12004/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_COMBINE_INFO"*/;
      break;
    default:
      Empty = string_TypeInfo->static_fields->Empty;
      goto LABEL_23;
  }
  Empty = LocalizationManager__Get((System_String_o *)*v10, 0LL);
LABEL_23:
  maskSprite = (UnityEngine_GameObject_o *)this->fields.informationLabel;
  if ( !maskSprite )
    goto LABEL_28;
  UIWidget__ResizeCollider((UIWidget_o *)maskSprite, 0LL);
  maskSprite = this->fields.buttonBaseObj;
  if ( !maskSprite )
    goto LABEL_28;
  UILabel__set_overflowMethod((UILabel_o *)maskSprite, 2, 0LL);
  maskSprite = this->fields.buttonBaseObj;
  if ( !maskSprite )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)maskSprite, Empty, 0LL);
  maskSprite = this->fields.buttonBaseObj;
  if ( !maskSprite )
    goto LABEL_28;
  UILabel__SetCondensedScale((UILabel_o *)maskSprite, (int32_t)this->fields.baseCollider, 0LL);
}