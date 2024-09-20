void __fastcall ServantStatusListViewItemDrawRandomLimitCountSupport___ctor(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.BUTTON_LABEL_MAX_WIDTH = 0x2260000006ELL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusListViewItemDrawRandomLimitCountSupport__Awake(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseSprite; // x0
  float v4; // s0
  float v5; // s1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4

  baseSprite = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_9;
  v4 = (*(float (__fastcall **)(UnityEngine_GameObject_o *, Il2CppMethodPointer))&baseSprite->klass[1]._2.naturalAligment)(
         baseSprite,
         baseSprite->klass[1].vtable._0_Equals.methodPtr);
  baseSprite = this->fields.titleBase;
  this->fields.baseSize.fields.x = v4;
  this->fields.baseSize.fields.y = v5;
  this->fields.baseSize.fields.z = 0.0;
  if ( !baseSprite )
    goto LABEL_9;
  baseSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSprite, 0LL);
  if ( !baseSprite )
    goto LABEL_9;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)baseSprite, 0LL);
  baseSprite = this->fields.buttonBaseObj;
  this->fields.titleBasePosition = localPosition;
  if ( !baseSprite
    || (baseSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSprite, 0LL)) == 0LL
    || (v7 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)baseSprite, 0LL),
        baseSprite = (UnityEngine_GameObject_o *)this->fields.explanationLabel,
        this->fields.buttonBasePosition = v7,
        !baseSprite)
    || (baseSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)baseSprite,
                                                   0LL)) == 0LL )
  {
LABEL_9:
    sub_1B8880C(baseSprite, method);
  }
  this->fields.explanationBasePosition = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)baseSprite,
                                           0LL);
}


void __fastcall ServantStatusListViewItemDrawRandomLimitCountSupport__DeactivateLimitCountButtonList(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        const MethodInfo *method)
{
  struct UICommonButton_array *limitCountButtonList; // x19
  int max_length; // w8
  unsigned int v4; // w20

  limitCountButtonList = this->fields.limitCountButtonList;
  if ( !limitCountButtonList )
    goto LABEL_9;
  max_length = limitCountButtonList->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( v4 >= max_length )
        sub_1B88814(this, method);
      this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)limitCountButtonList->m_Items[v4];
      if ( !this )
        break;
      this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0LL);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      max_length = limitCountButtonList->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1B8880C(this, method);
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
  struct UICommonButton_array *limitCountButtonList; // x8
  int32_t max_length; // w9

  limitCountButtonList = this->fields.limitCountButtonList;
  if ( !limitCountButtonList )
    return 0LL;
  max_length = limitCountButtonList->max_length;
  if ( max_length <= index )
    return 0LL;
  if ( max_length <= (unsigned int)index )
    sub_1B88814(this, index);
  return limitCountButtonList->m_Items[index];
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawRandomLimitCountSupport__Layout(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        const MethodInfo *method)
{
  struct UICommonButton_array *limitCountButtonList; // x20
  int max_length; // w8
  ServantStatusListViewItemDrawRandomLimitCountSupport_o *v4; // x19
  int v5; // w22
  int v6; // w21
  float v7; // s8
  struct UIGrid_o *limitCountButtonGrid; // x8
  int maxPerLine; // s9
  struct UIGrid_o *v10; // x8
  float v11; // s0
  float cellHeight; // s9
  UIWidget_o *baseSprite; // x20
  float y; // s10
  float v15; // s0
  float v16; // s8
  float v17; // s9
  float v18; // s8
  float v19; // s0
  int v20; // w8
  unsigned int v21; // w9
  struct UISprite_o *v22; // x8
  UnityEngine_BoxCollider_o *baseCollider; // x20
  int v24; // s0
  int v26; // s2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x0

  limitCountButtonList = this->fields.limitCountButtonList;
  if ( !limitCountButtonList )
    goto LABEL_38;
  max_length = limitCountButtonList->max_length;
  v4 = this;
  if ( max_length < 1 )
  {
    v7 = 0.0;
  }
  else
  {
    v5 = 0;
    v6 = 0;
    do
    {
      if ( v5 >= (unsigned int)max_length )
        sub_1B88814(this, method);
      this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)limitCountButtonList->m_Items[v5];
      if ( !this )
        goto LABEL_38;
      this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0LL);
      if ( !this )
        goto LABEL_38;
      this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)UnityEngine_GameObject__get_activeSelf(
                                                                         (UnityEngine_GameObject_o *)this,
                                                                         0LL);
      max_length = limitCountButtonList->max_length;
      ++v5;
      v6 += (unsigned __int8)this & 1;
    }
    while ( v5 < max_length );
    v7 = (float)v6;
  }
  limitCountButtonGrid = v4->fields.limitCountButtonGrid;
  if ( !limitCountButtonGrid )
    goto LABEL_38;
  maxPerLine = limitCountButtonGrid->fields.maxPerLine;
  if ( !byte_4A5638E )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A5638E = 1;
  }
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v10 = v4->fields.limitCountButtonGrid;
  if ( !v10 )
    goto LABEL_38;
  v11 = (float)(v7 / (float)maxPerLine) + -1.0;
  cellHeight = v10->fields.cellHeight;
  baseSprite = (UIWidget_o *)v4->fields.baseSprite;
  y = v4->fields.baseSize.fields.y;
  v15 = ceilf(v11);
  if ( v15 == INFINITY )
    v16 = -2147500000.0;
  else
    v16 = (float)(int)v15;
  if ( !byte_4A5638E )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A5638E = 1;
  }
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !baseSprite )
    goto LABEL_38;
  v17 = fmaxf(v16, 0.0) * cellHeight;
  v18 = v17 * 0.5;
  v19 = ceilf(v18 + v18);
  v20 = (int)v19;
  if ( v19 == INFINITY )
    v20 = 0x80000000;
  v21 = y == INFINITY ? 0x80000000 : (int)y;
  UIWidget__set_height(baseSprite, v20 + v21, 0LL);
  v22 = v4->fields.baseSprite;
  if ( !v22 )
    goto LABEL_38;
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_38;
  UIWidget__set_height((UIWidget_o *)this, v22->fields.mHeight, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_38;
  UIWidget__ResizeCollider((UIWidget_o *)this, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.baseSprite;
  if ( !this )
    goto LABEL_38;
  baseCollider = v4->fields.baseCollider;
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)((__int64 (__fastcall *)(ServantStatusListViewItemDrawRandomLimitCountSupport_o *, void *))this->klass[1]._1.events)(
                                                                     this,
                                                                     this->klass[1]._1.properties);
  if ( !baseCollider )
    goto LABEL_38;
  v26 = 0;
  UnityEngine_BoxCollider__set_size(baseCollider, *(UnityEngine_Vector3_o *)&v24, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.titleBase;
  if ( !this
    || (gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL),
        GameObjectExtensions__SetLocalPositionY(gameObject, v18 + v4->fields.titleBasePosition.fields.y, 0LL),
        (this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.buttonBaseObj) == 0LL)
    || (v28 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL),
        GameObjectExtensions__SetLocalPositionY(v28, v18 + v4->fields.buttonBasePosition.fields.y, 0LL),
        (this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.explanationLabel) == 0LL) )
  {
LABEL_38:
    sub_1B8880C(this, method);
  }
  v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v29, v18 + (float)(v4->fields.explanationBasePosition.fields.y - v17), 0LL);
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
  void *Component_object; // x0
  __int64 v12; // x1
  __int64 *v13; // x8
  Il2CppObject *ComponentInChildren_object__48719376; // x22
  float *v15; // x8
  float v16; // s10
  float v17; // s11
  float v18; // s8
  float v19; // s9
  float *v20; // x8
  float v21; // s12
  float v22; // s13
  float v23; // s14
  float v24; // s15
  float v25; // s0
  float v26; // s1
  float v27; // s2
  float v28; // s3

  if ( (byte_4A57E02 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_17479/*"btn_bg_20"*/);
    sub_1B885B0(&StringLiteral_17480/*"btn_bg_21"*/);
    byte_4A57E02 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)targetButton, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !targetButton )
      goto LABEL_38;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)targetButton,
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !Component_object )
      goto LABEL_38;
    v13 = &StringLiteral_17480/*"btn_bg_21"*/;
    if ( !isSelected )
      v13 = &StringLiteral_17479/*"btn_bg_20"*/;
    UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)*v13, 0LL);
    UICommonButton__SetButtonEnable(targetButton, isOpen, 1, 0LL);
    ComponentInChildren_object__48719376 = UnityEngine_Component__GetComponentInChildren_object__48719376(
                                             (UnityEngine_Component_o *)targetButton,
                                             (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object__48719376, 0LL, 0LL) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4A5638C )
      {
        sub_1B885B0(&LocalizationManager_TypeInfo);
        byte_4A5638C = 1;
      }
      Component_object = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Component_object = LocalizationManager_TypeInfo;
      }
      v15 = (float *)*((_QWORD *)Component_object + 23);
      v17 = v15[20];
      v16 = v15[21];
      v19 = v15[22];
      v18 = v15[23];
      if ( !byte_4A5638D )
      {
        sub_1B885B0(&LocalizationManager_TypeInfo);
        Component_object = LocalizationManager_TypeInfo;
        byte_4A5638D = 1;
      }
      if ( !*((_DWORD *)Component_object + 56) )
      {
        j_il2cpp_runtime_class_init_0(Component_object);
        Component_object = LocalizationManager_TypeInfo;
      }
      if ( ComponentInChildren_object__48719376 )
      {
        v20 = (float *)*((_QWORD *)Component_object + 23);
        v21 = v20[24];
        v22 = v20[25];
        v23 = v20[26];
        v24 = v20[27];
        UILabel__set_overflowMethod((UILabel_o *)ComponentInChildren_object__48719376, 2, 0LL);
        UILabel__set_text((UILabel_o *)ComponentInChildren_object__48719376, text, 0LL);
        if ( isSelected )
          v25 = v21;
        else
          v25 = v17;
        if ( isSelected )
          v26 = v22;
        else
          v26 = v16;
        if ( isSelected )
          v27 = v23;
        else
          v27 = v19;
        if ( isSelected )
          v28 = v24;
        else
          v28 = v18;
        UILabel__set_effectColor((UILabel_o *)ComponentInChildren_object__48719376, *(UnityEngine_Color_o *)&v25, 0LL);
        UILabel__SetCondensedScale(
          (UILabel_o *)ComponentInChildren_object__48719376,
          this->fields.BUTTON_LABEL_MAX_WIDTH,
          0LL);
        return;
      }
LABEL_38:
      sub_1B8880C(Component_object, v12);
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

  this->fields.dispMode = mode;
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
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v6; // x21
  __int64 v7; // x22
  _BOOL4 v8; // w8
  UnityEngine_Component_o *reflectOwnSettingButton; // x0
  int32_t supportRandomLimitCount; // w27
  System_String_o *v11; // x0
  const MethodInfo *v12; // x5
  const MethodInfo *v13; // x1
  struct System_Int32_array *supportRandomLimitCountList; // x8
  unsigned __int64 v15; // x29
  unsigned __int64 max_length; // x9
  int32_t v17; // w24
  struct UICommonButton_array *limitCountButtonList; // x8
  unsigned __int64 v19; // x9
  UnityEngine_Object_o *v20; // x22
  BalanceConfig_c *v21; // x0
  bool v22; // w23
  Il2CppObject *MasterData_object; // x25
  ServantCostumeEntity_o *Entity; // x0
  const MethodInfo *v25; // x5
  System_String_o *ShortName; // x2
  bool v27; // w25
  System_String_o *v28; // x0
  System_String_o *v29; // x24
  ServantStatusListViewItemDrawRandomLimitCountSupport_o *v30; // x0
  UICommonButton_o *v31; // x1
  bool v32; // w3
  LocalizationManager_c *v33; // x0
  UILabel_o *explanationLabel; // x21
  const MethodInfo *v35; // x2
  int32_t v36; // w1
  _BOOL4 v37; // [xsp+8h] [xbp-68h]
  int v38; // [xsp+Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4A57E00 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_11904/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_11885/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    sub_1B885B0(&StringLiteral_11912/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_REFLECT_OWN"*/);
    sub_1B885B0(&StringLiteral_11886/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/);
    byte_4A57E00 = 1;
  }
  v38 = 0;
  if ( item && item->fields.supportRandomLimitCountList )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v7 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
      v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v39.fields.currentCryptoKey = v7;
      *(_QWORD *)&v39.fields.fakeValue = v6;
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v39, 0LL) != 0;
    }
    else
    {
      v8 = 1;
    }
    reflectOwnSettingButton = (UnityEngine_Component_o *)this->fields.reflectOwnSettingButton;
    v37 = v8;
    if ( !reflectOwnSettingButton )
      goto LABEL_52;
    supportRandomLimitCount = item->fields.supportRandomLimitCount;
    reflectOwnSettingButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                           reflectOwnSettingButton,
                                                           0LL);
    if ( !reflectOwnSettingButton )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)reflectOwnSettingButton, 1, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11912/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_REFLECT_OWN"*/, 0LL);
    ServantStatusListViewItemDrawRandomLimitCountSupport__SetButtonText(
      this,
      this->fields.reflectOwnSettingButton,
      v11,
      1,
      supportRandomLimitCount == UserServantEntity_TypeInfo->static_fields->LIMIT_SUPPORT_NOT_ASSIGN,
      v12);
    ServantStatusListViewItemDrawRandomLimitCountSupport__DeactivateLimitCountButtonList(this, v13);
    supportRandomLimitCountList = item->fields.supportRandomLimitCountList;
    if ( !supportRandomLimitCountList )
      goto LABEL_52;
    v15 = 0LL;
    while ( 1 )
    {
      max_length = supportRandomLimitCountList->max_length;
      if ( (__int64)v15 >= (int)max_length )
        break;
      if ( v15 >= max_length )
        goto LABEL_69;
      v17 = supportRandomLimitCountList->m_Items[v15 + 1];
      limitCountButtonList = this->fields.limitCountButtonList;
      if ( limitCountButtonList && (v19 = limitCountButtonList->max_length, (__int64)v15 < (int)v19) )
      {
        if ( v15 >= v19 )
LABEL_69:
          sub_1B88814(reflectOwnSettingButton, item);
        v20 = (UnityEngine_Object_o *)limitCountButtonList->m_Items[v15];
      }
      else
      {
        v20 = 0LL;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      reflectOwnSettingButton = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v20, 0LL, 0LL);
      if ( ((unsigned __int8)reflectOwnSettingButton & 1) != 0 )
      {
        if ( !v20 )
          goto LABEL_52;
        reflectOwnSettingButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)v20,
                                                               0LL);
        if ( !reflectOwnSettingButton )
          goto LABEL_52;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)reflectOwnSettingButton, 1, 0LL);
        v21 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v21 = BalanceConfig_TypeInfo;
        }
        v22 = v17 > 0 && v17 == supportRandomLimitCount;
        if ( v17 <= v21->static_fields->ServantLimitMax )
        {
          v27 = v37 && v17 != -1;
          if ( v27 )
          {
            v38 = v17 - 1;
            v28 = System_Int32__ToString((int32_t)&v38, 0LL);
            v29 = System_String__Concat_61707032((System_String_o *)StringLiteral_11885/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v28, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          else
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v29 = (System_String_o *)StringLiteral_11886/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
          }
          ShortName = LocalizationManager__Get(v29, 0LL);
          v30 = this;
          v31 = (UICommonButton_o *)v20;
          v32 = v27;
        }
        else
        {
          reflectOwnSettingButton = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !reflectOwnSettingButton )
            goto LABEL_52;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)reflectOwnSettingButton,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
          reflectOwnSettingButton = (UnityEngine_Component_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
          if ( !MasterData_object )
            goto LABEL_52;
          Entity = ServantCostumeMaster__GetEntity(
                     (ServantCostumeMaster_o *)MasterData_object,
                     (int32_t)reflectOwnSettingButton,
                     v17,
                     0LL);
          if ( Entity )
          {
            ShortName = ServantCostumeEntity__getShortName(Entity, 0LL);
          }
          else
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            if ( !byte_4A56A2D )
            {
              sub_1B885B0(&LocalizationManager_TypeInfo);
              byte_4A56A2D = 1;
            }
            v33 = LocalizationManager_TypeInfo;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v33 = LocalizationManager_TypeInfo;
            }
            ShortName = v33->static_fields->unknownNameText;
          }
          v32 = 1;
          v30 = this;
          v31 = (UICommonButton_o *)v20;
        }
        ServantStatusListViewItemDrawRandomLimitCountSupport__SetButtonText(v30, v31, ShortName, v32, v22, v25);
      }
      supportRandomLimitCountList = item->fields.supportRandomLimitCountList;
      ++v15;
      if ( !supportRandomLimitCountList )
        goto LABEL_52;
    }
    reflectOwnSettingButton = (UnityEngine_Component_o *)this->fields.limitCountButtonGrid;
    if ( !reflectOwnSettingButton )
      goto LABEL_52;
    ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))reflectOwnSettingButton->klass[1]._1.castClass)(
      reflectOwnSettingButton,
      reflectOwnSettingButton->klass[1]._1.declaringType);
    explanationLabel = this->fields.explanationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    reflectOwnSettingButton = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_11904/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/,
                                                           0LL);
    if ( !explanationLabel )
LABEL_52:
      sub_1B8880C(reflectOwnSettingButton, item);
    UILabel__set_text(explanationLabel, (System_String_o *)reflectOwnSettingButton, 0LL);
    if ( v37 )
    {
      if ( item->fields.isEnableSupportRandomSetting
        && ServantStatusListViewItem__get_SupportRandomSettingParam(item, 0LL) == 1 )
      {
        v36 = 3;
      }
      else
      {
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        if ( OptionManager__GetRandomLimitCountFriend(0LL) )
          v36 = 2 * (ServantStatusListViewItem__get_SupportRandomSettingParam(item, 0LL) == 0);
        else
          v36 = 0;
      }
    }
    else
    {
      v36 = 1;
    }
    ServantStatusListViewItemDrawRandomLimitCountSupport__SetupMask(this, v36, v35);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawRandomLimitCountSupport__SetupMask(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        int32_t maskType,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskBase; // x0
  __int64 *v6; // x8
  System_String_o *Empty; // x20

  if ( (byte_4A57E01 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_11902/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_COMBINE_INFO"*/);
    sub_1B885B0(&StringLiteral_11903/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_ENABLE_INFO"*/);
    byte_4A57E01 = 1;
  }
  maskBase = this->fields.maskBase;
  if ( !maskBase )
LABEL_21:
    sub_1B8880C(maskBase, *(_QWORD *)&maskType);
  if ( !maskType )
  {
    UnityEngine_GameObject__SetActive(maskBase, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive(maskBase, 1, 0LL);
  if ( maskType == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_11902/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_COMBINE_INFO"*/;
  }
  else
  {
    if ( (maskType & 0xFFFFFFFE) != 2 )
    {
      Empty = string_TypeInfo->static_fields->Empty;
      goto LABEL_16;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_11903/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_ENABLE_INFO"*/;
  }
  Empty = LocalizationManager__Get((System_String_o *)*v6, 0LL);
LABEL_16:
  maskBase = (UnityEngine_GameObject_o *)this->fields.maskSprite;
  if ( !maskBase )
    goto LABEL_21;
  UIWidget__ResizeCollider((UIWidget_o *)maskBase, 0LL);
  maskBase = (UnityEngine_GameObject_o *)this->fields.informationLabel;
  if ( !maskBase )
    goto LABEL_21;
  UILabel__set_overflowMethod((UILabel_o *)maskBase, 2, 0LL);
  maskBase = (UnityEngine_GameObject_o *)this->fields.informationLabel;
  if ( !maskBase )
    goto LABEL_21;
  UILabel__set_text((UILabel_o *)maskBase, Empty, 0LL);
  maskBase = (UnityEngine_GameObject_o *)this->fields.informationLabel;
  if ( !maskBase )
    goto LABEL_21;
  UILabel__SetCondensedScale((UILabel_o *)maskBase, this->fields.MASK_LABEL_MAX_WIDTH, 0LL);
}