void ServantStatusListViewItemDrawRandomLimitCountSupport___ctor(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        const MethodInfo *method)
{
  this->fields.transformNameAddHeight = 20;
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
    sub_1CE6958(baseSprite, method);
  }
  this->fields.explanationBasePosition = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)baseSprite,
                                           0);
}


void ServantStatusListViewItemDrawRandomLimitCountSupport__DeactivateLimitCountButtonList(
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
        sub_1CE6960(this);
      this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)limitCountButtonList->m_Items[v4];
      if ( !this )
        break;
      this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      max_length = limitCountButtonList->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1CE6958(this, method);
  }
}


int32_t ServantStatusListViewItemDrawRandomLimitCountSupport__GetKind(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        const MethodInfo *method)
{
  return 18;
}


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
    sub_1CE6960(this);
  return limitCountButtonList->m_Items[index];
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawRandomLimitCountSupport__Layout(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawRandomLimitCountSupport_o *v4; // x19
  struct UICommonButton_array *limitCountButtonList; // x22
  int max_length; // w8
  int v7; // w23
  int v8; // w21
  struct UIGrid_o *limitCountButtonGrid; // x8
  int maxPerLine; // s8
  struct UIGrid_o *v11; // x8
  float v12; // s0
  float cellHeight; // s8
  UIWidget_o *baseSprite; // x21
  float y; // s10
  float v16; // s0
  float v17; // s9
  float v18; // s9
  float v19; // s8
  float v20; // s0
  int v21; // w8
  unsigned int v22; // w9
  struct UISprite_o *v23; // x8
  UnityEngine_BoxCollider_o *baseCollider; // x21
  int v25; // s0 OVERLAPPED
  int v27; // s2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_Object_o *v31; // x20
  float v32; // s1
  int transformNameAddHeight; // w8
  int v34; // w8
  UnityEngine_GameObject_o *v35; // x0
  int v36; // w8
  int v37; // w8
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4E01AC0 & 1) == 0 )
  {
    this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E01AC0 = 1;
  }
  limitCountButtonList = v4->fields.limitCountButtonList;
  if ( !limitCountButtonList )
    goto LABEL_58;
  max_length = limitCountButtonList->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1CE6960(this);
      this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)limitCountButtonList->m_Items[v7];
      if ( !this )
        goto LABEL_58;
      this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0);
      if ( !this )
        goto LABEL_58;
      this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)UnityEngine_GameObject__get_activeSelf(
                                                                         (UnityEngine_GameObject_o *)this,
                                                                         0);
      max_length = limitCountButtonList->max_length;
      ++v7;
      v8 += (unsigned __int8)this & 1;
      if ( v7 >= max_length )
        goto LABEL_12;
    }
  }
  v8 = 0;
LABEL_12:
  limitCountButtonGrid = v4->fields.limitCountButtonGrid;
  if ( !limitCountButtonGrid )
    goto LABEL_58;
  maxPerLine = limitCountButtonGrid->fields.maxPerLine;
  if ( !byte_4DFE732 )
  {
    sub_1CE6700(&System_Math_TypeInfo);
    byte_4DFE732 = 1;
  }
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v11 = v4->fields.limitCountButtonGrid;
  if ( !v11 )
    goto LABEL_58;
  v12 = (float)((float)v8 / (float)maxPerLine) + -1.0;
  cellHeight = v11->fields.cellHeight;
  baseSprite = (UIWidget_o *)v4->fields.baseSprite;
  y = v4->fields.baseSize.fields.y;
  v16 = ceilf(v12);
  if ( v16 == INFINITY )
    v17 = -2147500000.0;
  else
    v17 = (float)(int)v16;
  if ( !byte_4DFE732 )
  {
    sub_1CE6700(&System_Math_TypeInfo);
    byte_4DFE732 = 1;
  }
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !baseSprite )
    goto LABEL_58;
  v18 = fmaxf(v17, 0.0) * cellHeight;
  v19 = v18 * 0.5;
  v20 = ceilf(v19 + v19);
  v21 = (int)v20;
  if ( v20 == INFINITY )
    v21 = 0x80000000;
  v22 = y == INFINITY ? 0x80000000 : (int)y;
  UIWidget__set_height(baseSprite, v21 + v22, 0);
  v23 = v4->fields.baseSprite;
  if ( !v23 )
    goto LABEL_58;
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_58;
  UIWidget__set_height((UIWidget_o *)this, v23->fields.mHeight, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_58;
  UIWidget__ResizeCollider((UIWidget_o *)this, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.baseSprite;
  if ( !this )
    goto LABEL_58;
  baseCollider = v4->fields.baseCollider;
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)((__int64 (__fastcall *)(ServantStatusListViewItemDrawRandomLimitCountSupport_o *, void *))this->klass[1]._1.properties)(
                                                                     this,
                                                                     this->klass[1]._1.methods);
  if ( !baseCollider )
    goto LABEL_58;
  v27 = 0;
  UnityEngine_BoxCollider__set_size(baseCollider, *(UnityEngine_Vector3_o *)&v25, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.titleBase;
  if ( !this )
    goto LABEL_58;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, v19 + v4->fields.titleBasePosition.fields.y, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.buttonBaseObj;
  if ( !this )
    goto LABEL_58;
  v29 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(v29, v19 + v4->fields.buttonBasePosition.fields.y, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.explanationLabel;
  if ( !this )
    goto LABEL_58;
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(v30, v19 + (float)(v4->fields.explanationBasePosition.fields.y - v18), 0);
  if ( !item )
    goto LABEL_58;
  if ( !ServantStatusListViewItem__get_IsSaveTransformServant(item, 0) )
    return;
  v31 = (UnityEngine_Object_o *)v4->fields.baseCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v31, 0, 0) )
  {
    this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.baseCollider;
    if ( !this )
      goto LABEL_58;
    size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)this, 0);
    this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.baseCollider;
    if ( !this )
      goto LABEL_58;
    v32 = size.fields.y + (float)v4->fields.transformNameAddHeight;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)this, size, 0);
  }
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.baseSprite;
  if ( !this )
    goto LABEL_58;
  UIWidget__set_height(
    (UIWidget_o *)this,
    v4->fields.transformNameAddHeight + LODWORD(this->fields.buttonBasePosition.fields.y),
    0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_58;
  UIWidget__set_height(
    (UIWidget_o *)this,
    v4->fields.transformNameAddHeight + LODWORD(this->fields.buttonBasePosition.fields.y),
    0);
  GameObjectExtensions__AddLocalPositionY(v4->fields.titleBase, (float)(v4->fields.transformNameAddHeight / 2), 0);
  transformNameAddHeight = v4->fields.transformNameAddHeight;
  v34 = transformNameAddHeight <= 0 ? -transformNameAddHeight : 1 - transformNameAddHeight;
  GameObjectExtensions__AddLocalPositionY(v4->fields.buttonBaseObj, (float)(v34 >> 1), 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.explanationLabel;
  if ( !this )
LABEL_58:
    sub_1CE6958(this, item);
  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v36 = v4->fields.transformNameAddHeight;
  if ( v36 <= 0 )
    v37 = -v36;
  else
    v37 = 1 - v36;
  GameObjectExtensions__AddLocalPositionY(v35, (float)(v37 >> 1), 0);
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
  Il2CppObject *ComponentInChildren_object__52407772; // x22
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

  if ( (byte_4E01ABF & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    sub_1CE6700(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&StringLiteral_17633/*"btn_bg_20"*/);
    sub_1CE6700(&StringLiteral_17635/*"btn_bg_21"*/);
    byte_4E01ABF = 1;
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
                         (const MethodInfo_31FAB78 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !Component_object )
      goto LABEL_38;
    v13 = &StringLiteral_17635/*"btn_bg_21"*/;
    if ( !isSelected )
      v13 = &StringLiteral_17633/*"btn_bg_20"*/;
    UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)*v13, 0);
    UICommonButton__SetButtonEnable(targetButton, isOpen, 1, 0);
    ComponentInChildren_object__52407772 = UnityEngine_Component__GetComponentInChildren_object__52407772(
                                             (UnityEngine_Component_o *)targetButton,
                                             (const MethodInfo_31FADDC *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object__52407772, 0, 0) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4DFF120 )
      {
        sub_1CE6700(&LocalizationManager_TypeInfo);
        byte_4DFF120 = 1;
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
      if ( !byte_4DFF121 )
      {
        sub_1CE6700(&LocalizationManager_TypeInfo);
        Component_object = LocalizationManager_TypeInfo;
        byte_4DFF121 = 1;
      }
      if ( !*((_DWORD *)Component_object + 56) )
      {
        j_il2cpp_runtime_class_init_0(Component_object);
        Component_object = LocalizationManager_TypeInfo;
      }
      if ( ComponentInChildren_object__52407772 )
      {
        v20 = (float *)*((_QWORD *)Component_object + 23);
        v21 = v20[24];
        v22 = v20[25];
        v23 = v20[26];
        v24 = v20[27];
        UILabel__set_overflowMethod((UILabel_o *)ComponentInChildren_object__52407772, 2, 0);
        UILabel__set_text((UILabel_o *)ComponentInChildren_object__52407772, text, 0);
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
        UILabel__set_effectColor((UILabel_o *)ComponentInChildren_object__52407772, *(UnityEngine_Color_o *)&v25, 0);
        UILabel__SetCondensedScale(
          (UILabel_o *)ComponentInChildren_object__52407772,
          this->fields.BUTTON_LABEL_MAX_WIDTH,
          0,
          0);
        return;
      }
LABEL_38:
      sub_1CE6958(Component_object, v12);
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


void ServantStatusListViewItemDrawRandomLimitCountSupport__Setup(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v6; // x21
  __int64 v7; // x22
  int32_t SupportLimitCountStage; // w21
  UnityEngine_GameObject_o *SupportLimitCountStageList; // x0
  __int64 v10; // x1
  UnityEngine_GameObject_o *v11; // x22
  const MethodInfo *v12; // x5
  System_String_o *v13; // x24
  UserServantEntity_c *v14; // x8
  const MethodInfo *v15; // x1
  UnityEngine_GameObject_c *klass; // x8
  unsigned __int64 v17; // x29
  int32_t v18; // w27
  struct UICommonButton_array *limitCountButtonList; // x8
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v21; // x25
  bool v22; // w26
  int32_t v23; // w28
  Il2CppObject *MasterData_object; // x28
  ServantCostumeEntity_o *Entity; // x0
  const MethodInfo *v26; // x5
  System_String_o *ShortName; // x2
  bool v28; // w27
  System_String_o *v29; // x0
  System_String_o *v30; // x28
  ServantStatusListViewItemDrawRandomLimitCountSupport_o *v31; // x0
  UICommonButton_o *v32; // x1
  bool v33; // w3
  LocalizationManager_c *v34; // x0
  UILabel_o *explanationLabel; // x21
  const MethodInfo *v36; // x2
  int32_t v37; // w1
  UIWidget_o *transformNameLabel; // x21
  UIWidget_o *transformNameSprite; // x21
  UILabel_o *v40; // x20
  _BOOL4 v41; // [xsp+8h] [xbp-68h]
  int v42; // [xsp+Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  UnityEngine_Color_o TransformNameLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TransformNameSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4E01ABD & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&OptionManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&UserServantEntity_TypeInfo);
    sub_1CE6700(&StringLiteral_12082/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/);
    sub_1CE6700(&StringLiteral_12062/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    sub_1CE6700(&StringLiteral_12090/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_REFLECT_OWN"*/);
    sub_1CE6700(&StringLiteral_12063/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/);
    byte_4E01ABD = 1;
  }
  v42 = 0;
  if ( item && ServantStatusListViewItem__GetSupportLimitCountStageList(item, 0) )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v7 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
      v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v43.fields.currentCryptoKey = v7;
      *(_QWORD *)&v43.fields.fakeValue = v6;
      v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v43, 0) == 0;
    }
    else
    {
      v41 = 0;
    }
    SupportLimitCountStage = ServantStatusListViewItem__GetSupportLimitCountStage(item, 0);
    SupportLimitCountStageList = (UnityEngine_GameObject_o *)ServantStatusListViewItem__GetSupportLimitCountStageList(
                                                               item,
                                                               0);
    if ( !this->fields.reflectOwnSettingButton )
      goto LABEL_84;
    v11 = SupportLimitCountStageList;
    SupportLimitCountStageList = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)this->fields.reflectOwnSettingButton,
                                   0);
    if ( !SupportLimitCountStageList )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive(SupportLimitCountStageList, 1, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12090/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_REFLECT_OWN"*/, 0);
    v14 = UserServantEntity_TypeInfo;
    if ( !UserServantEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantEntity_TypeInfo);
      v14 = UserServantEntity_TypeInfo;
    }
    ServantStatusListViewItemDrawRandomLimitCountSupport__SetButtonText(
      this,
      this->fields.reflectOwnSettingButton,
      v13,
      1,
      SupportLimitCountStage == v14->static_fields->LIMIT_SUPPORT_NOT_ASSIGN,
      v12);
    ServantStatusListViewItemDrawRandomLimitCountSupport__DeactivateLimitCountButtonList(this, v15);
    if ( !v11 )
      goto LABEL_84;
    klass = v11[1].klass;
    if ( (int)klass >= 1 )
    {
      v17 = 0;
      do
      {
        if ( v17 >= (unsigned int)klass )
LABEL_85:
          sub_1CE6960(SupportLimitCountStageList);
        v18 = *((_DWORD *)&v11[1].monitor + v17);
        limitCountButtonList = this->fields.limitCountButtonList;
        if ( limitCountButtonList
          && (max_length_low = LODWORD(limitCountButtonList->max_length), (__int64)v17 < (int)max_length_low) )
        {
          if ( v17 >= max_length_low )
            goto LABEL_85;
          v21 = (UnityEngine_Object_o *)limitCountButtonList->m_Items[v17];
        }
        else
        {
          v21 = 0;
        }
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        SupportLimitCountStageList = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v21, 0, 0);
        if ( ((unsigned __int8)SupportLimitCountStageList & 1) != 0 )
        {
          if ( !v21 )
            goto LABEL_84;
          SupportLimitCountStageList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v21, 0);
          if ( !SupportLimitCountStageList )
            goto LABEL_84;
          UnityEngine_GameObject__SetActive(SupportLimitCountStageList, 1, 0);
          if ( !byte_4DFF89E )
          {
            sub_1CE6700(&System_Math_TypeInfo);
            byte_4DFF89E = 1;
          }
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v22 = v18 > 0 && v18 == SupportLimitCountStage;
          if ( v18 >= 0 )
            v23 = v18;
          else
            v23 = -v18;
          if ( LimitCountUtility__IsCostume(v23, 0) )
          {
            SupportLimitCountStageList = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !SupportLimitCountStageList )
              goto LABEL_84;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)SupportLimitCountStageList,
                                  (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
            SupportLimitCountStageList = (UnityEngine_GameObject_o *)ServantStatusListViewItem__GetSvtId(item, 0, 0);
            if ( !MasterData_object )
              goto LABEL_84;
            Entity = ServantCostumeMaster__GetEntity(
                       (ServantCostumeMaster_o *)MasterData_object,
                       (int32_t)SupportLimitCountStageList,
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
              if ( !byte_4DFFD2D )
              {
                sub_1CE6700(&LocalizationManager_TypeInfo);
                byte_4DFFD2D = 1;
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
          else
          {
            v28 = !v41 && v18 > 0;
            if ( v28 )
            {
              v42 = v23 - 1;
              v29 = System_Int32__ToString((int32_t)&v42, 0);
              v30 = System_String__Concat_65122828((System_String_o *)StringLiteral_12062/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v29, 0);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            else
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v30 = (System_String_o *)StringLiteral_12063/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
            }
            ShortName = LocalizationManager__Get(v30, 0);
            v31 = this;
            v32 = (UICommonButton_o *)v21;
            v33 = v28;
          }
          ServantStatusListViewItemDrawRandomLimitCountSupport__SetButtonText(v31, v32, ShortName, v33, v22, v26);
        }
        LODWORD(klass) = v11[1].klass;
      }
      while ( (__int64)++v17 < (int)klass );
    }
    SupportLimitCountStageList = (UnityEngine_GameObject_o *)this->fields.limitCountButtonGrid;
    if ( !SupportLimitCountStageList )
      goto LABEL_84;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))SupportLimitCountStageList->klass[1]._1.element_class)(
      SupportLimitCountStageList,
      SupportLimitCountStageList->klass[1]._1.castClass);
    explanationLabel = this->fields.explanationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    SupportLimitCountStageList = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_12082/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/,
                                                               0);
    if ( !explanationLabel )
      goto LABEL_84;
    UILabel__set_text(explanationLabel, (System_String_o *)SupportLimitCountStageList, 0);
    if ( v41 )
    {
      v37 = 1;
    }
    else if ( ServantStatusListViewItem__get_IsEnableSupportRandomSetting(item, 0)
           && ServantStatusListViewItem__GetRandomLimitCountSupport(item, 0) == 1 )
    {
      v37 = 3;
    }
    else
    {
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      if ( OptionManager__GetRandomLimitCountFriend(0) )
        v37 = 2 * (ServantStatusListViewItem__GetRandomLimitCountSupport(item, 0) == 0);
      else
        v37 = 0;
    }
    ServantStatusListViewItemDrawRandomLimitCountSupport__SetupMask(this, v37, v36);
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
              v40 = this->fields.transformNameLabel;
              SupportLimitCountStageList = (UnityEngine_GameObject_o *)ServantStatusListViewItem__GetTransformName(
                                                                         item,
                                                                         0);
              if ( v40 )
              {
                UILabel__set_text(v40, (System_String_o *)SupportLimitCountStageList, 0);
                return;
              }
            }
          }
        }
      }
LABEL_84:
      sub_1CE6958(SupportLimitCountStageList, v10);
    }
    SupportLimitCountStageList = (UnityEngine_GameObject_o *)this->fields.transformNameSprite;
    if ( !SupportLimitCountStageList )
      goto LABEL_84;
    SupportLimitCountStageList = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)SupportLimitCountStageList,
                                   0);
    if ( !SupportLimitCountStageList )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive(SupportLimitCountStageList, 0, 0);
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

  if ( (byte_4E01ABE & 1) == 0 )
  {
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&string_TypeInfo);
    sub_1CE6700(&StringLiteral_12080/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_COMBINE_INFO"*/);
    sub_1CE6700(&StringLiteral_12081/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_ENABLE_INFO"*/);
    byte_4E01ABE = 1;
  }
  maskBase = this->fields.maskBase;
  if ( !maskBase )
LABEL_21:
    sub_1CE6958(maskBase, *(_QWORD *)&maskType);
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
    v6 = &StringLiteral_12080/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_COMBINE_INFO"*/;
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
    v6 = &StringLiteral_12081/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_ENABLE_INFO"*/;
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