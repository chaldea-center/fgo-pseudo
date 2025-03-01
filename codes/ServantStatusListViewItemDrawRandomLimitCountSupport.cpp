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
    sub_1C2E388(baseSprite, method);
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
        sub_1C2E390(this, method);
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
    sub_1C2E388(this, method);
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
  struct UICommonButton_array *limitCountButtonList; // x8
  int32_t max_length; // w9

  limitCountButtonList = this->fields.limitCountButtonList;
  if ( !limitCountButtonList )
    return 0LL;
  max_length = limitCountButtonList->max_length;
  if ( max_length <= index )
    return 0LL;
  if ( max_length <= (unsigned int)index )
    sub_1C2E390(this, *(_QWORD *)&index);
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
        sub_1C2E390(this, method);
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
  if ( !byte_4BF8445 )
  {
    sub_1C2E12C(&System_Math_TypeInfo, method);
    byte_4BF8445 = 1;
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
  if ( !byte_4BF8445 )
  {
    sub_1C2E12C(&System_Math_TypeInfo, method);
    byte_4BF8445 = 1;
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
    sub_1C2E388(this, method);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  void *Component_object; // x0
  __int64 v17; // x1
  __int64 *v18; // x8
  Il2CppObject *ComponentInChildren_object__50103608; // x22
  float *v20; // x8
  float v21; // s10
  float v22; // s11
  float v23; // s8
  float v24; // s9
  float *v25; // x8
  float v26; // s12
  float v27; // s13
  float v28; // s14
  float v29; // s15
  float v30; // s0
  float v31; // s1
  float v32; // s2
  float v33; // s3

  if ( (byte_4BFA6D8 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___, targetButton);
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponent_UISprite___, v11);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v12);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v13);
    sub_1C2E12C(&StringLiteral_17783/*"btn_bg_20"*/, v14);
    sub_1C2E12C(&StringLiteral_17784/*"btn_bg_21"*/, v15);
    byte_4BFA6D8 = 1;
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
                         (const MethodInfo_2FC82D4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !Component_object )
      goto LABEL_38;
    v18 = &StringLiteral_17784/*"btn_bg_21"*/;
    if ( !isSelected )
      v18 = &StringLiteral_17783/*"btn_bg_20"*/;
    UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)*v18, 0LL);
    UICommonButton__SetButtonEnable(targetButton, isOpen, 1, 0LL);
    ComponentInChildren_object__50103608 = UnityEngine_Component__GetComponentInChildren_object__50103608(
                                             (UnityEngine_Component_o *)targetButton,
                                             (const MethodInfo_2FC8538 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object__50103608, 0LL, 0LL) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4BF8542 )
      {
        sub_1C2E12C(&LocalizationManager_TypeInfo, v17);
        byte_4BF8542 = 1;
      }
      Component_object = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Component_object = LocalizationManager_TypeInfo;
      }
      v20 = (float *)*((_QWORD *)Component_object + 23);
      v22 = v20[20];
      v21 = v20[21];
      v24 = v20[22];
      v23 = v20[23];
      if ( !byte_4BF8543 )
      {
        sub_1C2E12C(&LocalizationManager_TypeInfo, v17);
        Component_object = LocalizationManager_TypeInfo;
        byte_4BF8543 = 1;
      }
      if ( !*((_DWORD *)Component_object + 56) )
      {
        j_il2cpp_runtime_class_init_0(Component_object);
        Component_object = LocalizationManager_TypeInfo;
      }
      if ( ComponentInChildren_object__50103608 )
      {
        v25 = (float *)*((_QWORD *)Component_object + 23);
        v26 = v25[24];
        v27 = v25[25];
        v28 = v25[26];
        v29 = v25[27];
        UILabel__set_overflowMethod((UILabel_o *)ComponentInChildren_object__50103608, 2, 0LL);
        UILabel__set_text((UILabel_o *)ComponentInChildren_object__50103608, text, 0LL);
        if ( isSelected )
          v30 = v26;
        else
          v30 = v22;
        if ( isSelected )
          v31 = v27;
        else
          v31 = v21;
        if ( isSelected )
          v32 = v28;
        else
          v32 = v24;
        if ( isSelected )
          v33 = v29;
        else
          v33 = v23;
        UILabel__set_effectColor((UILabel_o *)ComponentInChildren_object__50103608, *(UnityEngine_Color_o *)&v30, 0LL);
        UILabel__SetCondensedScale(
          (UILabel_o *)ComponentInChildren_object__50103608,
          this->fields.BUTTON_LABEL_MAX_WIDTH,
          0,
          0LL);
        return;
      }
LABEL_38:
      sub_1C2E388(Component_object, v17);
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
  _BOOL4 v19; // w8
  UnityEngine_Component_o *reflectOwnSettingButton; // x0
  int32_t supportRandomLimitCount; // w27
  System_String_o *v22; // x0
  const MethodInfo *v23; // x5
  const MethodInfo *v24; // x1
  struct System_Int32_array *supportRandomLimitCountList; // x8
  unsigned __int64 v26; // x29
  unsigned __int64 max_length; // x9
  int32_t v28; // w24
  struct UICommonButton_array *limitCountButtonList; // x8
  unsigned __int64 v30; // x9
  UnityEngine_Object_o *v31; // x22
  BalanceConfig_c *v32; // x0
  bool v33; // w23
  Il2CppObject *MasterData_object; // x25
  ServantCostumeEntity_o *Entity; // x0
  __int64 v36; // x1
  const MethodInfo *v37; // x5
  System_String_o *ShortName; // x2
  bool v39; // w25
  System_String_o *v40; // x0
  System_String_o *v41; // x24
  ServantStatusListViewItemDrawRandomLimitCountSupport_o *v42; // x0
  UICommonButton_o *v43; // x1
  bool v44; // w3
  LocalizationManager_c *v45; // x0
  UILabel_o *explanationLabel; // x21
  const MethodInfo *v47; // x2
  int32_t v48; // w1
  _BOOL4 v49; // [xsp+8h] [xbp-68h]
  int v50; // [xsp+Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_4BFA6D6 & 1) == 0 )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, item);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v5);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v6);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v7);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1C2E12C(&OptionManager_TypeInfo, v9);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1C2E12C(&UserServantEntity_TypeInfo, v11);
    sub_1C2E12C(&StringLiteral_12132/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/, v12);
    sub_1C2E12C(&StringLiteral_12113/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v13);
    sub_1C2E12C(&StringLiteral_12140/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_REFLECT_OWN"*/, v14);
    sub_1C2E12C(&StringLiteral_12114/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/, v15);
    byte_4BFA6D6 = 1;
  }
  v50 = 0;
  if ( item && item->fields.supportRandomLimitCountList )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v18 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
      v17 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v51.fields.currentCryptoKey = v18;
      *(_QWORD *)&v51.fields.fakeValue = v17;
      v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v51, 0LL) != 0;
    }
    else
    {
      v19 = 1;
    }
    reflectOwnSettingButton = (UnityEngine_Component_o *)this->fields.reflectOwnSettingButton;
    v49 = v19;
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
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12140/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_REFLECT_OWN"*/, 0LL);
    ServantStatusListViewItemDrawRandomLimitCountSupport__SetButtonText(
      this,
      this->fields.reflectOwnSettingButton,
      v22,
      1,
      supportRandomLimitCount == UserServantEntity_TypeInfo->static_fields->LIMIT_SUPPORT_NOT_ASSIGN,
      v23);
    ServantStatusListViewItemDrawRandomLimitCountSupport__DeactivateLimitCountButtonList(this, v24);
    supportRandomLimitCountList = item->fields.supportRandomLimitCountList;
    if ( !supportRandomLimitCountList )
      goto LABEL_52;
    v26 = 0LL;
    while ( 1 )
    {
      max_length = supportRandomLimitCountList->max_length;
      if ( (__int64)v26 >= (int)max_length )
        break;
      if ( v26 >= max_length )
        goto LABEL_69;
      v28 = supportRandomLimitCountList->m_Items[v26 + 1];
      limitCountButtonList = this->fields.limitCountButtonList;
      if ( limitCountButtonList && (v30 = limitCountButtonList->max_length, (__int64)v26 < (int)v30) )
      {
        if ( v26 >= v30 )
LABEL_69:
          sub_1C2E390(reflectOwnSettingButton, item);
        v31 = (UnityEngine_Object_o *)limitCountButtonList->m_Items[v26];
      }
      else
      {
        v31 = 0LL;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      reflectOwnSettingButton = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
      if ( ((unsigned __int8)reflectOwnSettingButton & 1) != 0 )
      {
        if ( !v31 )
          goto LABEL_52;
        reflectOwnSettingButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)v31,
                                                               0LL);
        if ( !reflectOwnSettingButton )
          goto LABEL_52;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)reflectOwnSettingButton, 1, 0LL);
        v32 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v32 = BalanceConfig_TypeInfo;
        }
        v33 = v28 > 0 && v28 == supportRandomLimitCount;
        if ( v28 <= v32->static_fields->ServantLimitMax )
        {
          v39 = v49 && v28 != -1;
          if ( v39 )
          {
            v50 = v28 - 1;
            v40 = System_Int32__ToString((int32_t)&v50, 0LL);
            v41 = System_String__Concat_63235584((System_String_o *)StringLiteral_12113/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v40, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          else
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v41 = (System_String_o *)StringLiteral_12114/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
          }
          ShortName = LocalizationManager__Get(v41, 0LL);
          v42 = this;
          v43 = (UICommonButton_o *)v31;
          v44 = v39;
        }
        else
        {
          reflectOwnSettingButton = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !reflectOwnSettingButton )
            goto LABEL_52;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)reflectOwnSettingButton,
                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
          reflectOwnSettingButton = (UnityEngine_Component_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
          if ( !MasterData_object )
            goto LABEL_52;
          Entity = ServantCostumeMaster__GetEntity(
                     (ServantCostumeMaster_o *)MasterData_object,
                     (int32_t)reflectOwnSettingButton,
                     v28,
                     0LL);
          if ( Entity )
          {
            ShortName = ServantCostumeEntity__getShortName(Entity, 0LL);
          }
          else
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            if ( !byte_4BF8DA3 )
            {
              sub_1C2E12C(&LocalizationManager_TypeInfo, v36);
              byte_4BF8DA3 = 1;
            }
            v45 = LocalizationManager_TypeInfo;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v45 = LocalizationManager_TypeInfo;
            }
            ShortName = v45->static_fields->unknownNameText;
          }
          v44 = 1;
          v42 = this;
          v43 = (UICommonButton_o *)v31;
        }
        ServantStatusListViewItemDrawRandomLimitCountSupport__SetButtonText(v42, v43, ShortName, v44, v33, v37);
      }
      supportRandomLimitCountList = item->fields.supportRandomLimitCountList;
      ++v26;
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
                                                           (System_String_o *)StringLiteral_12132/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/,
                                                           0LL);
    if ( !explanationLabel )
LABEL_52:
      sub_1C2E388(reflectOwnSettingButton, item);
    UILabel__set_text(explanationLabel, (System_String_o *)reflectOwnSettingButton, 0LL);
    if ( v49 )
    {
      if ( item->fields.isEnableSupportRandomSetting
        && ServantStatusListViewItem__get_SupportRandomSettingParam(item, 0LL) == 1 )
      {
        v48 = 3;
      }
      else
      {
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        if ( OptionManager__GetRandomLimitCountFriend(0LL) )
          v48 = 2 * (ServantStatusListViewItem__get_SupportRandomSettingParam(item, 0LL) == 0);
        else
          v48 = 0;
      }
    }
    else
    {
      v48 = 1;
    }
    ServantStatusListViewItemDrawRandomLimitCountSupport__SetupMask(this, v48, v47);
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
  UnityEngine_GameObject_o *maskBase; // x0
  __int64 *v9; // x8
  System_String_o *Empty; // x20

  if ( (byte_4BFA6D7 & 1) == 0 )
  {
    sub_1C2E12C(&LocalizationManager_TypeInfo, *(_QWORD *)&maskType);
    sub_1C2E12C(&string_TypeInfo, v5);
    sub_1C2E12C(&StringLiteral_12130/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_COMBINE_INFO"*/, v6);
    sub_1C2E12C(&StringLiteral_12131/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_ENABLE_INFO"*/, v7);
    byte_4BFA6D7 = 1;
  }
  maskBase = this->fields.maskBase;
  if ( !maskBase )
LABEL_21:
    sub_1C2E388(maskBase, *(_QWORD *)&maskType);
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
    v9 = &StringLiteral_12130/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_COMBINE_INFO"*/;
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
    v9 = &StringLiteral_12131/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_ENABLE_INFO"*/;
  }
  Empty = LocalizationManager__Get((System_String_o *)*v9, 0LL);
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
  UILabel__SetCondensedScale((UILabel_o *)maskBase, this->fields.MASK_LABEL_MAX_WIDTH, 0, 0LL);
}