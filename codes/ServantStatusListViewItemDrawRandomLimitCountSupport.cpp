void ServantStatusListViewItemDrawRandomLimitCountSupport___ctor(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.BUTTON_LABEL_MAX_WIDTH = 0x2260000006ELL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusListViewItemDrawRandomLimitCountSupport__Awake(
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
  v4 = (*(float (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))&baseSprite->klass[1]._2.field_count)(
         baseSprite,
         *(_QWORD *)&baseSprite->klass[1]._2.interfaces_count);
  baseSprite = this->fields.titleBase;
  this->fields.baseSize.fields.x = v4;
  this->fields.baseSize.fields.y = v5;
  this->fields.baseSize.fields.z = 0.0;
  if ( !baseSprite )
    goto LABEL_9;
  baseSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSprite, 0);
  if ( !baseSprite )
    goto LABEL_9;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)baseSprite, 0);
  baseSprite = this->fields.buttonBaseObj;
  this->fields.titleBasePosition = localPosition;
  if ( !baseSprite
    || (baseSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseSprite, 0)) == 0
    || (v7 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)baseSprite, 0),
        baseSprite = (UnityEngine_GameObject_o *)this->fields.explanationLabel,
        this->fields.buttonBasePosition = v7,
        !baseSprite)
    || (baseSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)baseSprite,
                                                   0)) == 0 )
  {
LABEL_9:
    sub_1C2D6EC(baseSprite, method);
  }
  this->fields.explanationBasePosition = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)baseSprite,
                                           0);
}


void ServantStatusListViewItemDrawRandomLimitCountSupport__DeactivateLimitCountButtonList(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct UICommonButton_array *limitCountButtonList; // x19
  int max_length; // w8
  unsigned int v5; // w20

  limitCountButtonList = this->fields.limitCountButtonList;
  if ( !limitCountButtonList )
    goto LABEL_9;
  max_length = limitCountButtonList->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
        sub_1C2D6F4(this, method, v2);
      this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)limitCountButtonList->m_Items[v5];
      if ( !this )
        break;
      this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      max_length = limitCountButtonList->max_length;
      if ( (int)++v5 >= max_length )
        return;
    }
LABEL_9:
    sub_1C2D6EC(this, method);
  }
}


int32_t ServantStatusListViewItemDrawRandomLimitCountSupport__GetKind(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        const MethodInfo *method)
{
  return 18;
}


// local variable allocation has failed, the output may be wrong!
UICommonButton_o *ServantStatusListViewItemDrawRandomLimitCountSupport__GetLimitCountButton(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct UICommonButton_array *limitCountButtonList; // x8
  int32_t max_length; // w9

  limitCountButtonList = this->fields.limitCountButtonList;
  if ( !limitCountButtonList )
    return 0;
  max_length = limitCountButtonList->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
    sub_1C2D6F4(this, *(_QWORD *)&index, method);
  return limitCountButtonList->m_Items[index];
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawRandomLimitCountSupport__Layout(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct UICommonButton_array *limitCountButtonList; // x20
  int max_length; // w8
  ServantStatusListViewItemDrawRandomLimitCountSupport_o *v5; // x19
  int v6; // w22
  int v7; // w21
  float v8; // s8
  struct UIGrid_o *limitCountButtonGrid; // x8
  int maxPerLine; // s9
  struct UIGrid_o *v11; // x8
  float v12; // s0
  float cellHeight; // s9
  UIWidget_o *baseSprite; // x20
  float y; // s10
  float v16; // s0
  float v17; // s8
  float v18; // s9
  float v19; // s8
  float v20; // s0
  int v21; // w8
  unsigned int v22; // w9
  struct UISprite_o *v23; // x8
  UnityEngine_BoxCollider_o *baseCollider; // x20
  int v25; // s0 OVERLAPPED
  int v27; // s2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0

  limitCountButtonList = this->fields.limitCountButtonList;
  if ( !limitCountButtonList )
    goto LABEL_38;
  max_length = limitCountButtonList->max_length;
  v5 = this;
  if ( max_length < 1 )
  {
    v8 = 0.0;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    do
    {
      if ( v6 >= (unsigned int)max_length )
        sub_1C2D6F4(this, method, v2);
      this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)limitCountButtonList->m_Items[v6];
      if ( !this )
        goto LABEL_38;
      this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0);
      if ( !this )
        goto LABEL_38;
      this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)UnityEngine_GameObject__get_activeSelf(
                                                                         (UnityEngine_GameObject_o *)this,
                                                                         0);
      max_length = limitCountButtonList->max_length;
      ++v6;
      v7 += (unsigned __int8)this & 1;
    }
    while ( v6 < max_length );
    v8 = (float)v7;
  }
  limitCountButtonGrid = v5->fields.limitCountButtonGrid;
  if ( !limitCountButtonGrid )
    goto LABEL_38;
  maxPerLine = limitCountButtonGrid->fields.maxPerLine;
  if ( !byte_4C21465 )
  {
    sub_1C2D490(&System_Math_TypeInfo);
    byte_4C21465 = 1;
  }
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v11 = v5->fields.limitCountButtonGrid;
  if ( !v11 )
    goto LABEL_38;
  v12 = (float)(v8 / (float)maxPerLine) + -1.0;
  cellHeight = v11->fields.cellHeight;
  baseSprite = (UIWidget_o *)v5->fields.baseSprite;
  y = v5->fields.baseSize.fields.y;
  v16 = ceilf(v12);
  if ( v16 == INFINITY )
    v17 = -2147500000.0;
  else
    v17 = (float)(int)v16;
  if ( !byte_4C21465 )
  {
    sub_1C2D490(&System_Math_TypeInfo);
    byte_4C21465 = 1;
  }
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !baseSprite )
    goto LABEL_38;
  v18 = fmaxf(v17, 0.0) * cellHeight;
  v19 = v18 * 0.5;
  v20 = ceilf(v19 + v19);
  v21 = (int)v20;
  if ( v20 == INFINITY )
    v21 = 0x80000000;
  v22 = y == INFINITY ? 0x80000000 : (int)y;
  UIWidget__set_height(baseSprite, v21 + v22, 0);
  v23 = v5->fields.baseSprite;
  if ( !v23 )
    goto LABEL_38;
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v5->fields.maskSprite;
  if ( !this )
    goto LABEL_38;
  UIWidget__set_height((UIWidget_o *)this, v23->fields.mHeight, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v5->fields.maskSprite;
  if ( !this )
    goto LABEL_38;
  UIWidget__ResizeCollider((UIWidget_o *)this, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v5->fields.baseSprite;
  if ( !this )
    goto LABEL_38;
  baseCollider = v5->fields.baseCollider;
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)((__int64 (__fastcall *)(ServantStatusListViewItemDrawRandomLimitCountSupport_o *, void *))this->klass[1]._1.fields)(
                                                                     this,
                                                                     this->klass[1]._1.events);
  if ( !baseCollider )
    goto LABEL_38;
  v27 = 0;
  UnityEngine_BoxCollider__set_size(baseCollider, *(UnityEngine_Vector3_o *)&v25, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v5->fields.titleBase;
  if ( !this
    || (gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0),
        GameObjectExtensions__SetLocalPositionY(gameObject, v19 + v5->fields.titleBasePosition.fields.y, 0),
        (this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v5->fields.buttonBaseObj) == 0)
    || (v29 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0),
        GameObjectExtensions__SetLocalPositionY(v29, v19 + v5->fields.buttonBasePosition.fields.y, 0),
        (this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v5->fields.explanationLabel) == 0) )
  {
LABEL_38:
    sub_1C2D6EC(this, method);
  }
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(v30, v19 + (float)(v5->fields.explanationBasePosition.fields.y - v18), 0);
}


void ServantStatusListViewItemDrawRandomLimitCountSupport__ModifyRandomLimitCountSupport(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  ServantStatusListViewItemDrawRandomLimitCountSupport__Setup(this, item, method);
  ServantStatusListViewItemDrawRandomLimitCountSupport__Layout(this, v4);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawRandomLimitCountSupport__SetButtonText(
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
  Il2CppObject *ComponentInChildren_object__51139460; // x22
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
  float v25; // s0 OVERLAPPED
  float v26; // s1
  float v27; // s2
  float v28; // s3

  if ( (byte_4C23FEA & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_17441/*"btn_bg_20"*/);
    sub_1C2D490(&StringLiteral_17442/*"btn_bg_21"*/);
    byte_4C23FEA = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)targetButton, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !targetButton )
      goto LABEL_38;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)targetButton,
                         (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !Component_object )
      goto LABEL_38;
    v13 = &StringLiteral_17442/*"btn_bg_21"*/;
    if ( !isSelected )
      v13 = &StringLiteral_17441/*"btn_bg_20"*/;
    UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)*v13, 0);
    UICommonButton__SetButtonEnable(targetButton, isOpen, 1, 0);
    ComponentInChildren_object__51139460 = UnityEngine_Component__GetComponentInChildren_object__51139460(
                                             (UnityEngine_Component_o *)targetButton,
                                             (const MethodInfo_30C5384 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object__51139460, 0, 0) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4C21AC5 )
      {
        sub_1C2D490(&LocalizationManager_TypeInfo);
        byte_4C21AC5 = 1;
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
      if ( !byte_4C21AC6 )
      {
        sub_1C2D490(&LocalizationManager_TypeInfo);
        Component_object = LocalizationManager_TypeInfo;
        byte_4C21AC6 = 1;
      }
      if ( !*((_DWORD *)Component_object + 56) )
      {
        j_il2cpp_runtime_class_init_0(Component_object);
        Component_object = LocalizationManager_TypeInfo;
      }
      if ( ComponentInChildren_object__51139460 )
      {
        v20 = (float *)*((_QWORD *)Component_object + 23);
        v21 = v20[24];
        v22 = v20[25];
        v23 = v20[26];
        v24 = v20[27];
        UILabel__set_overflowMethod((UILabel_o *)ComponentInChildren_object__51139460, 2, 0);
        UILabel__set_text((UILabel_o *)ComponentInChildren_object__51139460, text, 0);
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
        UILabel__set_effectColor((UILabel_o *)ComponentInChildren_object__51139460, *(UnityEngine_Color_o *)&v25, 0);
        UILabel__SetCondensedScale(
          (UILabel_o *)ComponentInChildren_object__51139460,
          this->fields.BUTTON_LABEL_MAX_WIDTH,
          0,
          0);
        return;
      }
LABEL_38:
      sub_1C2D6EC(Component_object, v12);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawRandomLimitCountSupport__SetItem(
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


void ServantStatusListViewItemDrawRandomLimitCountSupport__Setup(
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
  __int64 v14; // x2
  struct System_Int32_array *supportRandomLimitCountList; // x8
  unsigned __int64 v16; // x29
  unsigned __int64 max_length_low; // x9
  int32_t v18; // w24
  struct UICommonButton_array *limitCountButtonList; // x8
  unsigned __int64 v20; // x9
  UnityEngine_Object_o *v21; // x22
  BalanceConfig_c *v22; // x0
  bool v23; // w23
  Il2CppObject *MasterData_object; // x25
  ServantCostumeEntity_o *Entity; // x0
  const MethodInfo *v26; // x5
  System_String_o *ShortName; // x2
  bool v28; // w25
  System_String_o *v29; // x0
  System_String_o *v30; // x24
  ServantStatusListViewItemDrawRandomLimitCountSupport_o *v31; // x0
  UICommonButton_o *v32; // x1
  bool v33; // w3
  LocalizationManager_c *v34; // x0
  UILabel_o *explanationLabel; // x21
  const MethodInfo *v36; // x2
  int32_t v37; // w1
  _BOOL4 v38; // [xsp+8h] [xbp-68h]
  int v39; // [xsp+Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4C23FE8 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&OptionManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&UserServantEntity_TypeInfo);
    sub_1C2D490(&StringLiteral_11953/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/);
    sub_1C2D490(&StringLiteral_11933/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    sub_1C2D490(&StringLiteral_11961/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_REFLECT_OWN"*/);
    sub_1C2D490(&StringLiteral_11934/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/);
    byte_4C23FE8 = 1;
  }
  v39 = 0;
  if ( item && item->fields.supportRandomLimitCountList )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v7 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
      v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v40.fields.currentCryptoKey = v7;
      *(_QWORD *)&v40.fields.fakeValue = v6;
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v40, 0) != 0;
    }
    else
    {
      v8 = 1;
    }
    reflectOwnSettingButton = (UnityEngine_Component_o *)this->fields.reflectOwnSettingButton;
    v38 = v8;
    if ( !reflectOwnSettingButton )
      goto LABEL_52;
    supportRandomLimitCount = item->fields.supportRandomLimitCount;
    reflectOwnSettingButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                           reflectOwnSettingButton,
                                                           0);
    if ( !reflectOwnSettingButton )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)reflectOwnSettingButton, 1, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11961/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_REFLECT_OWN"*/, 0);
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
    v16 = 0;
    while ( 1 )
    {
      max_length_low = LODWORD(supportRandomLimitCountList->max_length);
      if ( (__int64)v16 >= (int)max_length_low )
        break;
      if ( v16 >= max_length_low )
        goto LABEL_69;
      v18 = supportRandomLimitCountList->m_Items[v16];
      limitCountButtonList = this->fields.limitCountButtonList;
      if ( limitCountButtonList && (v20 = LODWORD(limitCountButtonList->max_length), (__int64)v16 < (int)v20) )
      {
        if ( v16 >= v20 )
LABEL_69:
          sub_1C2D6F4(reflectOwnSettingButton, item, v14);
        v21 = (UnityEngine_Object_o *)limitCountButtonList->m_Items[v16];
      }
      else
      {
        v21 = 0;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      reflectOwnSettingButton = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v21, 0, 0);
      if ( ((unsigned __int8)reflectOwnSettingButton & 1) != 0 )
      {
        if ( !v21 )
          goto LABEL_52;
        reflectOwnSettingButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)v21,
                                                               0);
        if ( !reflectOwnSettingButton )
          goto LABEL_52;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)reflectOwnSettingButton, 1, 0);
        v22 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v22 = BalanceConfig_TypeInfo;
        }
        v23 = v18 > 0 && v18 == supportRandomLimitCount;
        if ( v18 <= v22->static_fields->ServantLimitMax )
        {
          v28 = v38 && v18 != -1;
          if ( v28 )
          {
            v39 = v18 - 1;
            v29 = System_Int32__ToString((int32_t)&v39, 0);
            v30 = System_String__Concat_63457864((System_String_o *)StringLiteral_11933/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v29, 0);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          else
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v30 = (System_String_o *)StringLiteral_11934/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
          }
          ShortName = LocalizationManager__Get(v30, 0);
          v31 = this;
          v32 = (UICommonButton_o *)v21;
          v33 = v28;
        }
        else
        {
          reflectOwnSettingButton = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !reflectOwnSettingButton )
            goto LABEL_52;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)reflectOwnSettingButton,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
          reflectOwnSettingButton = (UnityEngine_Component_o *)ServantStatusListViewItem__get_SvtId(item, 0);
          if ( !MasterData_object )
            goto LABEL_52;
          Entity = ServantCostumeMaster__GetEntity(
                     (ServantCostumeMaster_o *)MasterData_object,
                     (int32_t)reflectOwnSettingButton,
                     v18,
                     0);
          if ( Entity )
          {
            ShortName = ServantCostumeEntity__getShortName(Entity, 0);
          }
          else
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            if ( !byte_4C2267D )
            {
              sub_1C2D490(&LocalizationManager_TypeInfo);
              byte_4C2267D = 1;
            }
            v34 = LocalizationManager_TypeInfo;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v34 = LocalizationManager_TypeInfo;
            }
            ShortName = v34->static_fields->unknownNameText;
          }
          v33 = 1;
          v31 = this;
          v32 = (UICommonButton_o *)v21;
        }
        ServantStatusListViewItemDrawRandomLimitCountSupport__SetButtonText(v31, v32, ShortName, v33, v23, v26);
      }
      supportRandomLimitCountList = item->fields.supportRandomLimitCountList;
      ++v16;
      if ( !supportRandomLimitCountList )
        goto LABEL_52;
    }
    reflectOwnSettingButton = (UnityEngine_Component_o *)this->fields.limitCountButtonGrid;
    if ( !reflectOwnSettingButton )
      goto LABEL_52;
    ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))reflectOwnSettingButton->klass[1]._1.element_class)(
      reflectOwnSettingButton,
      reflectOwnSettingButton->klass[1]._1.castClass);
    explanationLabel = this->fields.explanationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    reflectOwnSettingButton = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_11953/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/,
                                                           0);
    if ( !explanationLabel )
LABEL_52:
      sub_1C2D6EC(reflectOwnSettingButton, item);
    UILabel__set_text(explanationLabel, (System_String_o *)reflectOwnSettingButton, 0);
    if ( v38 )
    {
      if ( item->fields.isEnableSupportRandomSetting
        && ServantStatusListViewItem__get_SupportRandomSettingParam(item, 0) == 1 )
      {
        v37 = 3;
      }
      else
      {
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        if ( OptionManager__GetRandomLimitCountFriend(0) )
          v37 = 2 * (ServantStatusListViewItem__get_SupportRandomSettingParam(item, 0) == 0);
        else
          v37 = 0;
      }
    }
    else
    {
      v37 = 1;
    }
    ServantStatusListViewItemDrawRandomLimitCountSupport__SetupMask(this, v37, v36);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawRandomLimitCountSupport__SetupMask(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        int32_t maskType,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskBase; // x0
  __int64 *v6; // x8
  System_String_o *Empty; // x20

  if ( (byte_4C23FE9 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&StringLiteral_11951/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_COMBINE_INFO"*/);
    sub_1C2D490(&StringLiteral_11952/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_ENABLE_INFO"*/);
    byte_4C23FE9 = 1;
  }
  maskBase = this->fields.maskBase;
  if ( !maskBase )
LABEL_21:
    sub_1C2D6EC(maskBase, *(_QWORD *)&maskType);
  if ( !maskType )
  {
    UnityEngine_GameObject__SetActive(maskBase, 0, 0);
    return;
  }
  UnityEngine_GameObject__SetActive(maskBase, 1, 0);
  if ( maskType == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_11951/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_COMBINE_INFO"*/;
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
    v6 = &StringLiteral_11952/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_ENABLE_INFO"*/;
  }
  Empty = LocalizationManager__Get((System_String_o *)*v6, 0);
LABEL_16:
  maskBase = (UnityEngine_GameObject_o *)this->fields.maskSprite;
  if ( !maskBase )
    goto LABEL_21;
  UIWidget__ResizeCollider((UIWidget_o *)maskBase, 0);
  maskBase = (UnityEngine_GameObject_o *)this->fields.informationLabel;
  if ( !maskBase )
    goto LABEL_21;
  UILabel__set_overflowMethod((UILabel_o *)maskBase, 2, 0);
  maskBase = (UnityEngine_GameObject_o *)this->fields.informationLabel;
  if ( !maskBase )
    goto LABEL_21;
  UILabel__set_text((UILabel_o *)maskBase, Empty, 0);
  maskBase = (UnityEngine_GameObject_o *)this->fields.informationLabel;
  if ( !maskBase )
    goto LABEL_21;
  UILabel__SetCondensedScale((UILabel_o *)maskBase, this->fields.MASK_LABEL_MAX_WIDTH, 0, 0);
}