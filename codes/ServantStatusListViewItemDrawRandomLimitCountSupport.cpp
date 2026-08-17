void ServantStatusListViewItemDrawRandomLimitCountSupport___ctor(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        const MethodInfo *method)
{
  this->fields.MASK_LABEL_MAX_WIDTH = 550;
  this->fields.transformNameAddHeight = 20;
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
    sub_2213CDC(baseSprite, method);
  }
  this->fields.explanationBasePosition = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)baseSprite,
                                           0);
}


void ServantStatusListViewItemDrawRandomLimitCountSupport__DeactivateLimitCountButtons(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantStatusListViewItemDrawRandomLimitCountSupport_o *v3; // x19
  struct ServantStatusListViewItemButton_array *limitCountButtons; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v6; // x21
  UnityEngine_Object_o *v7; // x19

  v3 = this;
  if ( (byte_596D368 & 1) == 0 )
  {
    this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D368 = 1;
  }
  limitCountButtons = v3->fields.limitCountButtons;
  if ( limitCountButtons )
  {
    max_length = limitCountButtons->max_length;
    if ( (int)max_length >= 1 )
    {
      v6 = 0;
      do
      {
        if ( v6 >= (unsigned int)max_length )
          sub_2213CE4(this);
        v7 = (UnityEngine_Object_o *)limitCountButtons->m_Items[v6];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
        this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)UnityEngine_Object__op_Inequality(v7, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v7
            || (this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)UnityEngine_Component__get_gameObject(
                                                                                   (UnityEngine_Component_o *)v7,
                                                                                   0)) == 0 )
          {
            sub_2213CDC(this, method);
          }
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        }
        LODWORD(max_length) = limitCountButtons->max_length;
        ++v6;
      }
      while ( (__int64)v6 < (int)max_length );
    }
  }
}


int32_t ServantStatusListViewItemDrawRandomLimitCountSupport__GetKind(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        const MethodInfo *method)
{
  return 18;
}


ServantStatusListViewItemButton_o *ServantStatusListViewItemDrawRandomLimitCountSupport__GetLimitCountButtonItem(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct ServantStatusListViewItemButton_array *limitCountButtons; // x8
  int32_t max_length; // w9

  limitCountButtons = this->fields.limitCountButtons;
  if ( !limitCountButtons )
    return 0;
  max_length = limitCountButtons->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
    sub_2213CE4(this);
  return limitCountButtons->m_Items[index];
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawRandomLimitCountSupport__Layout(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawRandomLimitCountSupport_o *v4; // x19
  struct ServantStatusListViewItemButton_array *limitCountButtons; // x24
  il2cpp_array_size_t max_length; // x8
  int32_t v7; // w21
  unsigned __int64 v8; // x25
  UnityEngine_Object_o *v9; // x22
  int32_t AdditionalHeight; // w0
  __int64 v11; // x2
  UIWidget_o *baseSprite; // x22
  float y; // s9
  signed int v14; // w21
  float v15; // s8
  unsigned int v16; // w9
  unsigned int v17; // w8
  struct UISprite_o *v18; // x8
  UnityEngine_BoxCollider_o *baseCollider; // x22
  int v20; // s0 OVERLAPPED
  int v22; // s2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  UnityEngine_Object_o *v28; // x20
  float v29; // s1
  int transformNameAddHeight; // w8
  int v31; // w8
  UnityEngine_GameObject_o *v32; // x0
  int v33; // w8
  int v34; // w8
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_596D36B & 1) == 0 )
  {
    this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D36B = 1;
  }
  limitCountButtons = v4->fields.limitCountButtons;
  if ( !limitCountButtons )
    goto LABEL_54;
  max_length = limitCountButtons->max_length;
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_2213CE4(this);
      v9 = (UnityEngine_Object_o *)limitCountButtons->m_Items[v8];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, method);
      this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)UnityEngine_Object__op_Inequality(v9, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v9 )
          goto LABEL_54;
        this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)v9,
                                                                           0);
        if ( !this )
          goto LABEL_54;
        this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)UnityEngine_GameObject__get_activeSelf(
                                                                           (UnityEngine_GameObject_o *)this,
                                                                           0);
        v7 += (unsigned __int8)this & 1;
      }
      LODWORD(max_length) = limitCountButtons->max_length;
      if ( (__int64)++v8 >= (int)max_length )
        goto LABEL_16;
    }
  }
  v7 = 0;
LABEL_16:
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.limitCountButtonItem;
  if ( !this )
    goto LABEL_54;
  AdditionalHeight = ServantStatusListViewItemButton__GetAdditionalHeight(
                       (ServantStatusListViewItemButton_o *)this,
                       v7,
                       method);
  baseSprite = (UIWidget_o *)v4->fields.baseSprite;
  y = v4->fields.baseSize.fields.y;
  v14 = AdditionalHeight;
  if ( !byte_596A15B )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A15B = 1;
  }
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)System_Math_TypeInfo;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, item, v11);
  if ( !baseSprite )
    goto LABEL_54;
  v15 = vcvts_n_f32_s32(v14, 1u);
  v16 = vcvtps_s32_f32(v15 + v15);
  if ( ceilf(v15 + v15) == INFINITY )
    v16 = 0x80000000;
  v17 = y == INFINITY ? 0x80000000 : (int)y;
  UIWidget__set_height(baseSprite, v16 + v17, 0);
  v18 = v4->fields.baseSprite;
  if ( !v18 )
    goto LABEL_54;
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_54;
  UIWidget__set_height((UIWidget_o *)this, v18->fields.mHeight, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_54;
  UIWidget__ResizeCollider((UIWidget_o *)this, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.baseSprite;
  if ( !this )
    goto LABEL_54;
  baseCollider = v4->fields.baseCollider;
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)((__int64 (__fastcall *)(ServantStatusListViewItemDrawRandomLimitCountSupport_o *, void *))this->klass[1]._1.properties)(
                                                                     this,
                                                                     this->klass[1]._1.methods);
  if ( !baseCollider )
    goto LABEL_54;
  v22 = 0;
  UnityEngine_BoxCollider__set_size(baseCollider, *(UnityEngine_Vector3_o *)&v20, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.titleBase;
  if ( !this )
    goto LABEL_54;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, v15 + v4->fields.titleBasePosition.fields.y, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.buttonBaseObj;
  if ( !this )
    goto LABEL_54;
  v24 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(v24, v15 + v4->fields.buttonBasePosition.fields.y, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.explanationLabel;
  if ( !this )
    goto LABEL_54;
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(
    v25,
    v15 + (float)(v4->fields.explanationBasePosition.fields.y - (float)v14),
    0);
  if ( !item )
    goto LABEL_54;
  if ( !ServantStatusListViewItem__get_IsSaveTransformServant(item, 0) )
    return;
  v28 = (UnityEngine_Object_o *)v4->fields.baseCollider;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26, v27);
  if ( UnityEngine_Object__op_Inequality(v28, 0, 0) )
  {
    this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.baseCollider;
    if ( !this )
      goto LABEL_54;
    size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)this, 0);
    this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.baseCollider;
    if ( !this )
      goto LABEL_54;
    v29 = size.fields.y + (float)v4->fields.transformNameAddHeight;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)this, size, 0);
  }
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.baseSprite;
  if ( !this )
    goto LABEL_54;
  UIWidget__set_height(
    (UIWidget_o *)this,
    v4->fields.transformNameAddHeight + LODWORD(this->fields.titleBasePosition.fields.z),
    0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_54;
  UIWidget__set_height(
    (UIWidget_o *)this,
    v4->fields.transformNameAddHeight + LODWORD(this->fields.titleBasePosition.fields.z),
    0);
  GameObjectExtensions__AddLocalPositionY(v4->fields.titleBase, (float)(v4->fields.transformNameAddHeight / 2), 0);
  transformNameAddHeight = v4->fields.transformNameAddHeight;
  v31 = transformNameAddHeight <= 0 ? -transformNameAddHeight : 1 - transformNameAddHeight;
  GameObjectExtensions__AddLocalPositionY(v4->fields.buttonBaseObj, (float)(v31 >> 1), 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.explanationLabel;
  if ( !this )
LABEL_54:
    sub_2213CDC(this, item);
  v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v33 = v4->fields.transformNameAddHeight;
  if ( v33 <= 0 )
    v34 = -v33;
  else
    v34 = 1 - v33;
  GameObjectExtensions__AddLocalPositionY(v32, (float)(v34 >> 1), 0);
}


void ServantStatusListViewItemDrawRandomLimitCountSupport__ModifyRandomLimitCountSupport(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  ServantStatusListViewItemDrawRandomLimitCountSupport__Setup(this, item, method);
  ServantStatusListViewItemDrawRandomLimitCountSupport__Layout(this, item, v5);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawRandomLimitCountSupport__SetItem(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.dispMode = mode;
  if ( item )
  {
    if ( mode )
    {
      ServantStatusListViewItemDrawRandomLimitCountSupport__Setup(this, item, *(const MethodInfo **)&mode);
      ServantStatusListViewItemDrawRandomLimitCountSupport__Layout(this, item, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawRandomLimitCountSupport__SetReflectOwnSettingButtonDisplay(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        System_String_o *text,
        bool isSelected,
        const MethodInfo *method)
{
  void *reflectOwnSettingButtonSprite; // x0
  __int64 *v8; // x8
  __int64 v9; // x2
  float *v10; // x8
  float v11; // s8
  float v12; // s9
  float v13; // s10
  float v14; // s11
  float *v15; // x9
  float v16; // s12
  float v17; // s13
  float v18; // s14
  float v19; // s15
  float v20; // s0 OVERLAPPED
  float v21; // s1
  float v22; // s2
  float v23; // s3

  if ( (byte_596D367 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_18209/*"btn_bg_20"*/);
    sub_2213A60(&StringLiteral_18211/*"btn_bg_21"*/);
    byte_596D367 = 1;
  }
  reflectOwnSettingButtonSprite = this->fields.reflectOwnSettingButtonSprite;
  if ( !reflectOwnSettingButtonSprite )
    goto LABEL_33;
  v8 = &StringLiteral_18211/*"btn_bg_21"*/;
  if ( !isSelected )
    v8 = &StringLiteral_18209/*"btn_bg_20"*/;
  UISprite__set_spriteName((UISprite_o *)reflectOwnSettingButtonSprite, (System_String_o *)*v8, 0);
  reflectOwnSettingButtonSprite = this->fields.reflectOwnSettingButton;
  if ( !reflectOwnSettingButtonSprite )
    goto LABEL_33;
  UICommonButton__SetButtonEnable((UICommonButton_o *)reflectOwnSettingButtonSprite, 1, 1, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, text, v9);
  if ( !byte_596ABD5 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596ABD5 = 1;
  }
  reflectOwnSettingButtonSprite = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, text, v9);
    reflectOwnSettingButtonSprite = LocalizationManager_TypeInfo;
  }
  v10 = (float *)*((_QWORD *)reflectOwnSettingButtonSprite + 23);
  v11 = v10[20];
  v12 = v10[21];
  v13 = v10[22];
  v14 = v10[23];
  if ( !byte_596ABD6 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    reflectOwnSettingButtonSprite = LocalizationManager_TypeInfo;
    byte_596ABD6 = 1;
  }
  if ( !*((_DWORD *)reflectOwnSettingButtonSprite + 57) )
  {
    j_il2cpp_runtime_class_init_0(reflectOwnSettingButtonSprite, text, v9);
    reflectOwnSettingButtonSprite = LocalizationManager_TypeInfo;
  }
  if ( !this->fields.reflectOwnSettingButtonLabel )
    goto LABEL_33;
  v15 = (float *)*((_QWORD *)reflectOwnSettingButtonSprite + 23);
  v16 = v15[24];
  v17 = v15[25];
  v18 = v15[26];
  v19 = v15[27];
  UILabel__set_overflowMethod(this->fields.reflectOwnSettingButtonLabel, 2, 0);
  reflectOwnSettingButtonSprite = this->fields.reflectOwnSettingButtonLabel;
  if ( !reflectOwnSettingButtonSprite
    || (UILabel__set_text((UILabel_o *)reflectOwnSettingButtonSprite, text, 0),
        (reflectOwnSettingButtonSprite = this->fields.reflectOwnSettingButtonLabel) == 0) )
  {
LABEL_33:
    sub_2213CDC(reflectOwnSettingButtonSprite, text);
  }
  if ( isSelected )
    v20 = v16;
  else
    v20 = v11;
  if ( isSelected )
    v21 = v17;
  else
    v21 = v12;
  if ( isSelected )
    v22 = v18;
  else
    v22 = v13;
  if ( isSelected )
    v23 = v19;
  else
    v23 = v14;
  UILabel__set_effectColor((UILabel_o *)reflectOwnSettingButtonSprite, *(UnityEngine_Color_o *)&v20, 0);
}


void ServantStatusListViewItemDrawRandomLimitCountSupport__Setup(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v8; // x21
  __int64 v9; // x22
  int32_t SupportLimitCountStage; // w21
  UnityEngine_GameObject_o *SupportLimitCountStageList; // x0
  __int64 v12; // x1
  UnityEngine_GameObject_o *v13; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  const MethodInfo *v18; // x3
  System_String_o *v19; // x24
  UserServantEntity_c *v20; // x8
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x1
  __int64 v23; // x2
  UnityEngine_GameObject_c *klass; // x8
  unsigned __int64 v25; // x29
  int32_t v26; // w27
  struct ServantStatusListViewItemButton_array *limitCountButtons; // x8
  bool v29; // w25
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v31; // x26
  __int64 v32; // x1
  __int64 v33; // x2
  int32_t v34; // w28
  __int64 v35; // x1
  __int64 v36; // x2
  Il2CppObject *MasterData_object; // x28
  ServantCostumeEntity_o *Entity; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  const MethodInfo *v41; // x5
  System_String_o *ShortName; // x1
  bool v43; // cc
  char v44; // w27
  System_String_o *v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  System_String_o *v48; // x28
  ServantStatusListViewItemButton_o *v49; // x0
  bool v50; // w2
  LocalizationManager_c *v51; // x0
  UILabel_o *explanationLabel; // x21
  const MethodInfo *v53; // x2
  int32_t v54; // w1
  UIWidget_o *transformNameLabel; // x21
  UIWidget_o *transformNameSprite; // x21
  UILabel_o *v57; // x20
  __int64 v58; // x1
  _BOOL4 v59; // [xsp+8h] [xbp-68h]
  int v60; // [xsp+Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  UnityEngine_Color_o TransformNameLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TransformNameSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596D366 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&OptionManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&UserServantEntity_TypeInfo);
    sub_2213A60(&StringLiteral_12472/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_12452/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    sub_2213A60(&StringLiteral_12480/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_REFLECT_OWN"*/);
    sub_2213A60(&StringLiteral_12453/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/);
    byte_596D366 = 1;
  }
  v60 = 0;
  if ( item && ServantStatusListViewItem__GetSupportLimitCountStageList(item, 0) )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v8 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
      v9 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
      *(_QWORD *)&v61.fields.currentCryptoKey = v8;
      *(_QWORD *)&v61.fields.fakeValue = v9;
      v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v61, 0) == 0;
    }
    else
    {
      v59 = 0;
    }
    SupportLimitCountStage = ServantStatusListViewItem__GetSupportLimitCountStage(item, 0);
    SupportLimitCountStageList = (UnityEngine_GameObject_o *)ServantStatusListViewItem__GetSupportLimitCountStageList(
                                                               item,
                                                               0);
    if ( !this->fields.reflectOwnSettingButton )
      goto LABEL_95;
    v13 = SupportLimitCountStageList;
    SupportLimitCountStageList = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)this->fields.reflectOwnSettingButton,
                                   0);
    if ( !SupportLimitCountStageList )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive(SupportLimitCountStageList, 1, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12480/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_REFLECT_OWN"*/, 0);
    v20 = UserServantEntity_TypeInfo;
    if ( !*(&UserServantEntity_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UserServantEntity_TypeInfo, v16, v17);
      v20 = UserServantEntity_TypeInfo;
    }
    ServantStatusListViewItemDrawRandomLimitCountSupport__SetReflectOwnSettingButtonDisplay(
      this,
      v19,
      SupportLimitCountStage == v20->static_fields->LIMIT_SUPPORT_NOT_ASSIGN,
      v18);
    if ( !v13 )
      goto LABEL_95;
    ServantStatusListViewItemDrawRandomLimitCountSupport__SetupLimitCountButtons(this, (int32_t)v13[1].klass, v21);
    ServantStatusListViewItemDrawRandomLimitCountSupport__DeactivateLimitCountButtons(this, v22);
    klass = v13[1].klass;
    if ( (int)klass >= 1 )
    {
      v25 = 0;
      do
      {
        if ( v25 >= (unsigned int)klass )
LABEL_96:
          sub_2213CE4(SupportLimitCountStageList);
        v26 = *((_DWORD *)&v13[1].monitor + v25);
        limitCountButtons = this->fields.limitCountButtons;
        v29 = v26 > 0 && v26 == SupportLimitCountStage;
        if ( limitCountButtons
          && (max_length_low = LODWORD(limitCountButtons->max_length), (__int64)v25 < (int)max_length_low) )
        {
          if ( v25 >= max_length_low )
            goto LABEL_96;
          v31 = (UnityEngine_Object_o *)limitCountButtons->m_Items[v25];
        }
        else
        {
          v31 = 0;
        }
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v23);
        SupportLimitCountStageList = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v31, 0, 0);
        if ( ((unsigned __int8)SupportLimitCountStageList & 1) != 0 )
        {
          if ( !v31 )
            goto LABEL_95;
          SupportLimitCountStageList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v31, 0);
          if ( !SupportLimitCountStageList )
            goto LABEL_95;
          UnityEngine_GameObject__SetActive(SupportLimitCountStageList, 1, 0);
          if ( !byte_596AEF6 )
          {
            sub_2213A60(&System_Math_TypeInfo);
            byte_596AEF6 = 1;
          }
          if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v32, v33);
          if ( v26 >= 0 )
            v34 = v26;
          else
            v34 = -v26;
          if ( LimitCountUtility__IsCostume(v34, 0) )
          {
            SupportLimitCountStageList = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !SupportLimitCountStageList )
              goto LABEL_95;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)SupportLimitCountStageList,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
            SupportLimitCountStageList = (UnityEngine_GameObject_o *)ServantStatusListViewItem__GetSvtId(item, 0, 0);
            if ( !MasterData_object )
              goto LABEL_95;
            Entity = ServantCostumeMaster__GetEntity(
                       (ServantCostumeMaster_o *)MasterData_object,
                       (int32_t)SupportLimitCountStageList,
                       v26,
                       0);
            if ( Entity )
            {
              ShortName = ServantCostumeEntity__getShortName(Entity, 0);
            }
            else
            {
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39, v40);
              if ( !byte_596B976 )
              {
                sub_2213A60(&LocalizationManager_TypeInfo);
                byte_596B976 = 1;
              }
              v51 = LocalizationManager_TypeInfo;
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39, v40);
                v51 = LocalizationManager_TypeInfo;
              }
              ShortName = v51->static_fields->unknownNameText;
            }
            v49 = (ServantStatusListViewItemButton_o *)v31;
            v50 = 1;
          }
          else
          {
            v43 = v59 || v26 <= 0;
            v44 = !v43;
            if ( v43 )
            {
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35, v36);
              v48 = (System_String_o *)StringLiteral_12453/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
            }
            else
            {
              v60 = v34 - 1;
              v45 = System_Int32__ToString((int32_t)&v60, 0);
              v48 = System_String__Concat_75651716((System_String_o *)StringLiteral_12452/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v45, 0);
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46, v47);
            }
            ShortName = LocalizationManager__Get(v48, 0);
            v49 = (ServantStatusListViewItemButton_o *)v31;
            v50 = v44;
          }
          ServantStatusListViewItemButton__SetButtonDisplay_43289768(v49, ShortName, v50, v29, v29, v41);
        }
        LODWORD(klass) = v13[1].klass;
      }
      while ( (__int64)++v25 < (int)klass );
    }
    explanationLabel = this->fields.explanationLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v23);
    SupportLimitCountStageList = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_12472/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/,
                                                               0);
    if ( !explanationLabel )
      goto LABEL_95;
    UILabel__set_text(explanationLabel, (System_String_o *)SupportLimitCountStageList, 0);
    if ( v59 )
    {
      v54 = 1;
    }
    else if ( ServantStatusListViewItem__get_IsEnableSupportRandomSetting(item, 0)
           && ServantStatusListViewItem__GetRandomLimitCountSupport(item, 0) == 1 )
    {
      v54 = 3;
    }
    else
    {
      if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v58, v53);
      if ( OptionManager__GetRandomLimitCountFriend(0) )
        v54 = 2 * (ServantStatusListViewItem__GetRandomLimitCountSupport(item, 0) == 0);
      else
        v54 = 0;
    }
    ServantStatusListViewItemDrawRandomLimitCountSupport__SetupMask(this, v54, v53);
    if ( ServantStatusListViewItem__get_IsSaveTransformServant(item, 0) )
    {
      transformNameLabel = (UIWidget_o *)this->fields.transformNameLabel;
      TransformNameLabelColor = ServantStatusListViewItem__get_TransformNameLabelColor(item, 0);
      if ( transformNameLabel )
      {
        UIWidget__set_color(transformNameLabel, TransformNameLabelColor, 0);
        transformNameSprite = (UIWidget_o *)this->fields.transformNameSprite;
        TransformNameSpriteColor = ServantStatusListViewItem__get_TransformNameSpriteColor(item, 0);
        if ( transformNameSprite )
        {
          UIWidget__set_color(transformNameSprite, TransformNameSpriteColor, 0);
          SupportLimitCountStageList = (UnityEngine_GameObject_o *)this->fields.transformNameSprite;
          if ( SupportLimitCountStageList )
          {
            SupportLimitCountStageList = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)SupportLimitCountStageList,
                                           0);
            if ( SupportLimitCountStageList )
            {
              UnityEngine_GameObject__SetActive(SupportLimitCountStageList, 1, 0);
              v57 = this->fields.transformNameLabel;
              SupportLimitCountStageList = (UnityEngine_GameObject_o *)ServantStatusListViewItem__GetTransformName(
                                                                         item,
                                                                         0);
              if ( v57 )
              {
                UILabel__set_text(v57, (System_String_o *)SupportLimitCountStageList, 0);
                return;
              }
            }
          }
        }
      }
LABEL_95:
      sub_2213CDC(SupportLimitCountStageList, v12);
    }
    SupportLimitCountStageList = (UnityEngine_GameObject_o *)this->fields.transformNameSprite;
    if ( !SupportLimitCountStageList )
      goto LABEL_95;
    SupportLimitCountStageList = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)SupportLimitCountStageList,
                                   0);
    if ( !SupportLimitCountStageList )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive(SupportLimitCountStageList, 0, 0);
  }
}


void ServantStatusListViewItemDrawRandomLimitCountSupport__SetupLimitCountButtons(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *ComponentInParent_object__58855988; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v9; // x1
  System_Action_int__o *v10; // x21
  ServantStatusListViewItemButton_o *limitCountButtonItem; // x22
  UnityEngine_Transform_o *parent; // x0
  const MethodInfo *v13; // x4
  struct ServantStatusListViewItemButton_array *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_596D369 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInParent_ServantStatusListViewObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ServantStatusListViewObject_OnClickRandomLimitCountSupportButton__);
    byte_596D369 = 1;
  }
  ComponentInParent_object__58855988 = UnityEngine_Component__GetComponentInParent_object__58855988(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_3821234 *)Method_UnityEngine_Component_GetComponentInParent_ServantStatusListViewObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)ComponentInParent_object__58855988,
                                           0,
                                           0);
  v10 = 0;
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v10 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v10,
      ComponentInParent_object__58855988,
      Method_ServantStatusListViewObject_OnClickRandomLimitCountSupportButton__,
      0);
  }
  limitCountButtonItem = this->fields.limitCountButtonItem;
  if ( !limitCountButtonItem
    || (transform = UnityEngine_Component__get_transform(
                      (UnityEngine_Component_o *)this->fields.limitCountButtonItem,
                      0)) == 0 )
  {
    sub_2213CDC(transform, v9);
  }
  parent = UnityEngine_Transform__get_parent(transform, 0);
  v14 = ServantStatusListViewItemButton__Setup(limitCountButtonItem, count, parent, v10, v13);
  this->fields.limitCountButtons = v14;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.limitCountButtons,
    (int32_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawRandomLimitCountSupport__SetupMask(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        int32_t maskType,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskBase; // x0
  __int64 v6; // x2
  LocalizationManager_c *v7; // x0
  __int64 *v8; // x20
  System_String_o *v9; // x20

  if ( (byte_596D36A & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12470/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_COMBINE_INFO"*/);
    sub_2213A60(&StringLiteral_12471/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_ENABLE_INFO"*/);
    byte_596D36A = 1;
  }
  maskBase = this->fields.maskBase;
  if ( !maskType )
  {
    if ( maskBase )
    {
      UnityEngine_GameObject__SetActive(maskBase, 0, 0);
      return;
    }
LABEL_20:
    sub_2213CDC(maskBase, *(_QWORD *)&maskType);
  }
  if ( !maskBase )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(maskBase, 1, 0);
  if ( maskType == 1 )
  {
    v7 = LocalizationManager_TypeInfo;
    v8 = &StringLiteral_12470/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_COMBINE_INFO"*/;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
LABEL_7:
      j_il2cpp_runtime_class_init_0(v7, *(_QWORD *)&maskType, v6);
  }
  else
  {
    if ( (maskType & 0xFFFFFFFE) != 2 )
    {
      v9 = **(System_String_o ***)(qword_5984390 + 184);
      goto LABEL_15;
    }
    v7 = LocalizationManager_TypeInfo;
    v8 = &StringLiteral_12471/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_ENABLE_INFO"*/;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      goto LABEL_7;
  }
  v9 = LocalizationManager__Get((System_String_o *)*v8, 0);
LABEL_15:
  maskBase = (UnityEngine_GameObject_o *)this->fields.maskSprite;
  if ( !maskBase )
    goto LABEL_20;
  UIWidget__ResizeCollider((UIWidget_o *)maskBase, 0);
  maskBase = (UnityEngine_GameObject_o *)this->fields.informationLabel;
  if ( !maskBase )
    goto LABEL_20;
  UILabel__set_overflowMethod((UILabel_o *)maskBase, 2, 0);
  maskBase = (UnityEngine_GameObject_o *)this->fields.informationLabel;
  if ( !maskBase )
    goto LABEL_20;
  UILabel__set_text((UILabel_o *)maskBase, v9, 0);
  maskBase = (UnityEngine_GameObject_o *)this->fields.informationLabel;
  if ( !maskBase )
    goto LABEL_20;
  UILabel__SetCondensedScale((UILabel_o *)maskBase, this->fields.MASK_LABEL_MAX_WIDTH, 0, 0);
}