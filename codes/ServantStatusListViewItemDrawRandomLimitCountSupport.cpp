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
    sub_B52A5C(titleBase, method);
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
        v5 = sub_B52A88(this);
        sub_B52A28(v5, 0LL);
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
    sub_B52A5C(this, method);
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
    v6 = sub_B52A88(this);
    sub_B52A28(v6, 0LL);
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
        v24 = sub_B52A88(this);
        sub_B52A28(v24, 0LL);
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
    sub_B52A5C(this, method);
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
  void *Component_WebViewObject; // x0
  __int64 v12; // x1
  __int64 *v13; // x8
  UIWidget_o *ComponentInChildren_UIWidget; // x22
  float *v15; // x8
  float v16; // s8
  float v17; // s9
  float v18; // s10
  float v19; // s11
  float *v20; // x8
  float v21; // s12
  float v22; // s13
  float v23; // s14
  float v24; // s15
  float v25; // s3
  float v26; // s2
  float v27; // s1
  float v28; // s0

  if ( (byte_42B426E & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_17083/*"btn_bg_20"*/);
    sub_B52984(&StringLiteral_17084/*"btn_bg_21"*/);
    byte_42B426E = 1;
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
                                (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !Component_WebViewObject )
      goto LABEL_43;
    v13 = &StringLiteral_17084/*"btn_bg_21"*/;
    if ( !isSelected )
      v13 = &StringLiteral_17083/*"btn_bg_20"*/;
    UISprite__set_spriteName((UISprite_o *)Component_WebViewObject, (System_String_o *)*v13, 0LL);
    UICommonButton__SetButtonEnable(targetButton, isOpen, 1, 0LL);
    ComponentInChildren_UIWidget = UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                     (UnityEngine_Component_o *)targetButton,
                                     (const MethodInfo_1A49284 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
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
      if ( !byte_42ACC22 )
      {
        sub_B52984(&LocalizationManager_TypeInfo);
        byte_42ACC22 = 1;
      }
      Component_WebViewObject = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Component_WebViewObject = LocalizationManager_TypeInfo;
      }
      v15 = (float *)*((_QWORD *)Component_WebViewObject + 23);
      v16 = v15[20];
      v17 = v15[21];
      v18 = v15[22];
      v19 = v15[23];
      if ( !byte_42ACC23 )
      {
        sub_B52984(&LocalizationManager_TypeInfo);
        Component_WebViewObject = LocalizationManager_TypeInfo;
        byte_42ACC23 = 1;
      }
      if ( (*((_BYTE *)Component_WebViewObject + 307) & 4) != 0 && !*((_DWORD *)Component_WebViewObject + 56) )
      {
        j_il2cpp_runtime_class_init_0(Component_WebViewObject);
        Component_WebViewObject = LocalizationManager_TypeInfo;
      }
      if ( ComponentInChildren_UIWidget )
      {
        v20 = (float *)*((_QWORD *)Component_WebViewObject + 23);
        v21 = v20[24];
        v22 = v20[25];
        v23 = v20[26];
        v24 = v20[27];
        UILabel__set_overflowMethod((UILabel_o *)ComponentInChildren_UIWidget, 2, 0LL);
        UILabel__set_text((UILabel_o *)ComponentInChildren_UIWidget, text, 0LL);
        if ( isSelected )
          v25 = v24;
        else
          v25 = v19;
        if ( isSelected )
          v26 = v23;
        else
          v26 = v18;
        if ( isSelected )
          v27 = v22;
        else
          v27 = v17;
        if ( isSelected )
          v28 = v21;
        else
          v28 = v16;
        UILabel__set_effectColor((UILabel_o *)ComponentInChildren_UIWidget, *(UnityEngine_Color_o *)(&v25 - 3), 0LL);
        UILabel__SetCondensedScale((UILabel_o *)ComponentInChildren_UIWidget, this->fields.MASK_LABEL_MAX_WIDTH, 0LL);
        return;
      }
LABEL_43:
      sub_B52A5C(Component_WebViewObject, v12);
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
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v6; // x21
  __int64 v7; // x22
  UnityEngine_Component_o *limitCountButtonGrid; // x0
  int32_t supportRandomLimitCount; // w28
  const MethodInfo *v10; // x5
  System_String_o *v11; // x22
  UserServantEntity_c *v12; // x8
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  struct System_Int32_array *supportRandomLimitCountList; // x8
  unsigned __int64 v16; // x22
  unsigned __int64 max_length; // x9
  int32_t v18; // w25
  UnityEngine_Object_o *LimitCountButton; // x23
  bool v20; // w24
  BalanceConfig_c *v21; // x0
  ServantCostumeMaster_o *MasterData_WarQuestSelectionMaster; // x26
  ServantCostumeEntity_o *Entity; // x0
  const MethodInfo *v24; // x5
  System_String_o *ShortName; // x2
  bool v26; // w26
  System_String_o *v27; // x0
  System_String_o *v28; // x25
  ServantStatusListViewItemDrawRandomLimitCountSupport_o *v29; // x0
  UICommonButton_o *v30; // x1
  bool v31; // w3
  LocalizationManager_c *v32; // x0
  UILabel_o *v33; // x21
  const MethodInfo *v34; // x2
  int32_t v35; // w1
  __int64 v36; // x0
  _BOOL4 v37; // [xsp+4h] [xbp-5Ch]
  int v38; // [xsp+Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_42B426C & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserServantEntity_TypeInfo);
    sub_B52984(&StringLiteral_12099/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/);
    sub_B52984(&StringLiteral_12080/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    sub_B52984(&StringLiteral_12107/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_REFLECT_OWN"*/);
    sub_B52984(&StringLiteral_12081/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/);
    byte_42B426C = 1;
  }
  v38 = 0;
  if ( item && item->fields.supportRandomLimitCountList )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v7 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
      v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v39.fields.currentCryptoKey = v7;
      *(_QWORD *)&v39.fields.fakeValue = v6;
      v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v39, 0LL) == 0;
    }
    else
    {
      v37 = 0;
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
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12107/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_REFLECT_OWN"*/, 0LL);
    v12 = UserServantEntity_TypeInfo;
    if ( (BYTE3(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantEntity_TypeInfo);
      v12 = UserServantEntity_TypeInfo;
    }
    ServantStatusListViewItemDrawRandomLimitCountSupport__SetButtonText(
      this,
      (UICommonButton_o *)this->fields.limitCountButtonGrid,
      v11,
      1,
      supportRandomLimitCount == v12->static_fields->LIMIT_SUPPORT_NOT_ASSIGN,
      v10);
    ServantStatusListViewItemDrawRandomLimitCountSupport__DeactivateLimitCountButtonList(this, v13);
    supportRandomLimitCountList = item->fields.supportRandomLimitCountList;
    if ( !supportRandomLimitCountList )
      goto LABEL_58;
    v16 = 0LL;
    while ( 1 )
    {
      max_length = supportRandomLimitCountList->max_length;
      if ( (__int64)v16 >= (int)max_length )
        break;
      if ( v16 >= max_length )
      {
        v36 = sub_B52A88(limitCountButtonGrid);
        sub_B52A28(v36, 0LL);
      }
      v18 = supportRandomLimitCountList->m_Items[v16 + 1];
      LimitCountButton = (UnityEngine_Object_o *)ServantStatusListViewItemDrawRandomLimitCountSupport__GetLimitCountButton(
                                                   this,
                                                   v16,
                                                   v14);
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
        v20 = v18 == supportRandomLimitCount && v18 > 0;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)limitCountButtonGrid, 1, 0LL);
        v21 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v21 = BalanceConfig_TypeInfo;
        }
        if ( v18 <= v21->static_fields->ServantLimitMax )
        {
          v26 = v18 != -1 && !v37;
          if ( v26 )
          {
            v38 = v18 - 1;
            v27 = System_Int32__ToString((int32_t)&v38, 0LL);
            v28 = System_String__Concat_44568316((System_String_o *)StringLiteral_12080/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v27, 0LL);
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
            v28 = (System_String_o *)StringLiteral_12081/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
          }
          ShortName = LocalizationManager__Get(v28, 0LL);
          v29 = this;
          v30 = (UICommonButton_o *)LimitCountButton;
          v31 = v26;
        }
        else
        {
          limitCountButtonGrid = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !limitCountButtonGrid )
            goto LABEL_58;
          MasterData_WarQuestSelectionMaster = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)limitCountButtonGrid,
                                                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
          limitCountButtonGrid = (UnityEngine_Component_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_58;
          Entity = ServantCostumeMaster__GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     (int32_t)limitCountButtonGrid,
                     v18,
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
            if ( !byte_42ADEE6 )
            {
              sub_B52984(&LocalizationManager_TypeInfo);
              byte_42ADEE6 = 1;
            }
            v32 = LocalizationManager_TypeInfo;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v32 = LocalizationManager_TypeInfo;
            }
            ShortName = v32->static_fields->unknownNameText;
          }
          v31 = 1;
          v29 = this;
          v30 = (UICommonButton_o *)LimitCountButton;
        }
        ServantStatusListViewItemDrawRandomLimitCountSupport__SetButtonText(v29, v30, ShortName, v31, v20, v24);
      }
      supportRandomLimitCountList = item->fields.supportRandomLimitCountList;
      ++v16;
      if ( !supportRandomLimitCountList )
        goto LABEL_58;
    }
    limitCountButtonGrid = (UnityEngine_Component_o *)this->fields.limitCountButtonList;
    if ( !limitCountButtonGrid )
      goto LABEL_58;
    ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))limitCountButtonGrid->klass[1]._1.castClass)(
      limitCountButtonGrid,
      limitCountButtonGrid->klass[1]._1.declaringType);
    v33 = *(UILabel_o **)&this->fields.baseSize.fields.x;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    limitCountButtonGrid = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_12099/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/,
                                                        0LL);
    if ( !v33 )
LABEL_58:
      sub_B52A5C(limitCountButtonGrid, item);
    UILabel__set_text(v33, (System_String_o *)limitCountButtonGrid, 0LL);
    if ( v37 )
    {
      v35 = 1;
    }
    else if ( item->fields.isEnableSupportRandomSetting
           && ServantStatusListViewItem__get_SupportRandomSettingParam(item, 0LL) == 1 )
    {
      v35 = 3;
    }
    else
    {
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( OptionManager__GetRandomLimitCountFriend(0LL) )
        v35 = 2 * (ServantStatusListViewItem__get_SupportRandomSettingParam(item, 0LL) == 0);
      else
        v35 = 0;
    }
    ServantStatusListViewItemDrawRandomLimitCountSupport__SetupMask(this, v35, v34);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawRandomLimitCountSupport__SetupMask(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        int32_t maskType,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskSprite; // x0
  __int64 *v6; // x8
  System_String_o *Empty; // x20

  if ( (byte_42B426D & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&string_TypeInfo);
    sub_B52984(&StringLiteral_12097/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_COMBINE_INFO"*/);
    sub_B52984(&StringLiteral_12098/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_ENABLE_INFO"*/);
    byte_42B426D = 1;
  }
  maskSprite = (UnityEngine_GameObject_o *)this->fields.maskSprite;
  if ( !maskSprite )
LABEL_23:
    sub_B52A5C(maskSprite, *(_QWORD *)&maskType);
  if ( !maskType )
  {
    UnityEngine_GameObject__SetActive(maskSprite, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive(maskSprite, 1, 0LL);
  if ( maskType == 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_12097/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_COMBINE_INFO"*/;
  }
  else
  {
    if ( (maskType & 0xFFFFFFFE) != 2 )
    {
      Empty = string_TypeInfo->static_fields->Empty;
      goto LABEL_18;
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_12098/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_ENABLE_INFO"*/;
  }
  Empty = LocalizationManager__Get((System_String_o *)*v6, 0LL);
LABEL_18:
  maskSprite = (UnityEngine_GameObject_o *)this->fields.informationLabel;
  if ( !maskSprite )
    goto LABEL_23;
  UIWidget__ResizeCollider((UIWidget_o *)maskSprite, 0LL);
  maskSprite = this->fields.buttonBaseObj;
  if ( !maskSprite )
    goto LABEL_23;
  UILabel__set_overflowMethod((UILabel_o *)maskSprite, 2, 0LL);
  maskSprite = this->fields.buttonBaseObj;
  if ( !maskSprite )
    goto LABEL_23;
  UILabel__set_text((UILabel_o *)maskSprite, Empty, 0LL);
  maskSprite = this->fields.buttonBaseObj;
  if ( !maskSprite )
    goto LABEL_23;
  UILabel__SetCondensedScale((UILabel_o *)maskSprite, (int32_t)this->fields.baseCollider, 0LL);
}