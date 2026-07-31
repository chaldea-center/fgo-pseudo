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
    sub_21FFECC(baseSprite, method);
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
  __int64 v4; // x20

  limitCountButtonList = this->fields.limitCountButtonList;
  if ( !limitCountButtonList )
    goto LABEL_9;
  max_length = limitCountButtonList->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v4 >= max_length )
        sub_21FFED4(this);
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
    sub_21FFECC(this, method);
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
    sub_21FFED4(this);
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
  __int64 v7; // x23
  int v8; // w21
  struct UIGrid_o *limitCountButtonGrid; // x8
  int maxPerLine; // s8
  struct UIGrid_o *v11; // x8
  float v12; // s0
  float cellHeight; // s9
  UIWidget_o *baseSprite; // x21
  float y; // s10
  float v16; // s0
  float v17; // s8
  float v18; // s8
  float v19; // s9
  unsigned int v20; // w9
  unsigned int v21; // w8
  struct UISprite_o *v22; // x8
  UnityEngine_BoxCollider_o *baseCollider; // x21
  int v24; // s0 OVERLAPPED
  int v26; // s2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  UnityEngine_Object_o *v32; // x20
  float v33; // s1
  int transformNameAddHeight; // w8
  int v35; // w8
  UnityEngine_GameObject_o *v36; // x0
  int v37; // w8
  int v38; // w8
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_593517B & 1) == 0 )
  {
    this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593517B = 1;
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
      if ( (unsigned int)v7 >= max_length )
        sub_21FFED4(this);
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
      if ( (int)v7 >= max_length )
        goto LABEL_12;
    }
  }
  v8 = 0;
LABEL_12:
  limitCountButtonGrid = v4->fields.limitCountButtonGrid;
  if ( !limitCountButtonGrid )
    goto LABEL_58;
  maxPerLine = limitCountButtonGrid->fields.maxPerLine;
  if ( !byte_5931FBB )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5931FBB = 1;
  }
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)System_Math_TypeInfo;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, item, method);
  v11 = v4->fields.limitCountButtonGrid;
  if ( !v11 )
    goto LABEL_58;
  v12 = (float)v8;
  cellHeight = v11->fields.cellHeight;
  baseSprite = (UIWidget_o *)v4->fields.baseSprite;
  y = v4->fields.baseSize.fields.y;
  v16 = ceilf((float)(v12 / (float)maxPerLine) + -1.0);
  if ( v16 == INFINITY )
    v17 = -2147500000.0;
  else
    v17 = (float)(int)v16;
  if ( !byte_5931FBB )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5931FBB = 1;
  }
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)System_Math_TypeInfo;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, item, method);
  if ( !baseSprite )
    goto LABEL_58;
  v18 = fmaxf(v17, 0.0) * cellHeight;
  v19 = v18 * 0.5;
  v20 = vcvtps_s32_f32(v19 + v19);
  if ( ceilf(v19 + v19) == INFINITY )
    v20 = 0x80000000;
  v21 = y == INFINITY ? 0x80000000 : (int)y;
  UIWidget__set_height(baseSprite, v20 + v21, 0);
  v22 = v4->fields.baseSprite;
  if ( !v22 )
    goto LABEL_58;
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_58;
  UIWidget__set_height((UIWidget_o *)this, v22->fields.mHeight, 0);
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
  v26 = 0;
  UnityEngine_BoxCollider__set_size(baseCollider, *(UnityEngine_Vector3_o *)&v24, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.titleBase;
  if ( !this )
    goto LABEL_58;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, v19 + v4->fields.titleBasePosition.fields.y, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.buttonBaseObj;
  if ( !this )
    goto LABEL_58;
  v28 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(v28, v19 + v4->fields.buttonBasePosition.fields.y, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.explanationLabel;
  if ( !this )
    goto LABEL_58;
  v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(v29, v19 + (float)(v4->fields.explanationBasePosition.fields.y - v18), 0);
  if ( !item )
    goto LABEL_58;
  if ( !ServantStatusListViewItem__get_IsSaveTransformServant(item, 0) )
    return;
  v32 = (UnityEngine_Object_o *)v4->fields.baseCollider;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30, v31);
  if ( UnityEngine_Object__op_Inequality(v32, 0, 0) )
  {
    this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.baseCollider;
    if ( !this )
      goto LABEL_58;
    size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)this, 0);
    this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.baseCollider;
    if ( !this )
      goto LABEL_58;
    v33 = size.fields.y + (float)v4->fields.transformNameAddHeight;
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
  v35 = transformNameAddHeight <= 0 ? -transformNameAddHeight : 1 - transformNameAddHeight;
  GameObjectExtensions__AddLocalPositionY(v4->fields.buttonBaseObj, (float)(v35 >> 1), 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v4->fields.explanationLabel;
  if ( !this )
LABEL_58:
    sub_21FFECC(this, item);
  v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v37 = v4->fields.transformNameAddHeight;
  if ( v37 <= 0 )
    v38 = -v37;
  else
    v38 = 1 - v37;
  GameObjectExtensions__AddLocalPositionY(v36, (float)(v38 >> 1), 0);
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
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *ComponentInChildren_object__58644924; // x22
  __int64 v17; // x2
  float *v18; // x8
  float v19; // s8
  float v20; // s9
  float v21; // s10
  float v22; // s11
  float *v23; // x8
  float v24; // s12
  float v25; // s13
  float v26; // s14
  float v27; // s15
  float v28; // s0 OVERLAPPED
  float v29; // s1
  float v30; // s2
  float v31; // s3

  if ( (byte_593517A & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_18171/*"btn_bg_20"*/);
    sub_21FFC50(&StringLiteral_18173/*"btn_bg_21"*/);
    byte_593517A = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, targetButton, text);
  Component_object = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)targetButton, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !targetButton )
      goto LABEL_38;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)targetButton,
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !Component_object )
      goto LABEL_38;
    v13 = &StringLiteral_18173/*"btn_bg_21"*/;
    if ( !isSelected )
      v13 = &StringLiteral_18171/*"btn_bg_20"*/;
    UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)*v13, 0);
    UICommonButton__SetButtonEnable(targetButton, isOpen, 1, 0);
    ComponentInChildren_object__58644924 = UnityEngine_Component__GetComponentInChildren_object__58644924(
                                             (UnityEngine_Component_o *)targetButton,
                                             (const MethodInfo_37ED9BC *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object__58644924, 0, 0) )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v17);
      if ( !byte_5932AD3 )
      {
        sub_21FFC50(&LocalizationManager_TypeInfo);
        byte_5932AD3 = 1;
      }
      Component_object = LocalizationManager_TypeInfo;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v17);
        Component_object = LocalizationManager_TypeInfo;
      }
      v18 = (float *)*((_QWORD *)Component_object + 23);
      v19 = v18[20];
      v20 = v18[21];
      v21 = v18[22];
      v22 = v18[23];
      if ( !byte_5932AD4 )
      {
        sub_21FFC50(&LocalizationManager_TypeInfo);
        Component_object = LocalizationManager_TypeInfo;
        byte_5932AD4 = 1;
      }
      if ( !*((_DWORD *)Component_object + 57) )
      {
        j_il2cpp_runtime_class_init_0(Component_object, v12, v17);
        Component_object = LocalizationManager_TypeInfo;
      }
      if ( ComponentInChildren_object__58644924 )
      {
        v23 = (float *)*((_QWORD *)Component_object + 23);
        v24 = v23[24];
        v25 = v23[25];
        v26 = v23[26];
        v27 = v23[27];
        UILabel__set_overflowMethod((UILabel_o *)ComponentInChildren_object__58644924, 2, 0);
        UILabel__set_text((UILabel_o *)ComponentInChildren_object__58644924, text, 0);
        if ( isSelected )
          v28 = v24;
        else
          v28 = v19;
        if ( isSelected )
          v29 = v25;
        else
          v29 = v20;
        if ( isSelected )
          v30 = v26;
        else
          v30 = v21;
        if ( isSelected )
          v31 = v27;
        else
          v31 = v22;
        UILabel__set_effectColor((UILabel_o *)ComponentInChildren_object__58644924, *(UnityEngine_Color_o *)&v28, 0);
        UILabel__SetCondensedScale(
          (UILabel_o *)ComponentInChildren_object__58644924,
          this->fields.BUTTON_LABEL_MAX_WIDTH,
          0,
          0);
        return;
      }
LABEL_38:
      sub_21FFECC(Component_object, v12);
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
  const MethodInfo *v18; // x5
  System_String_o *v19; // x24
  UserServantEntity_c *v20; // x8
  const MethodInfo *v21; // x1
  __int64 v22; // x2
  UnityEngine_GameObject_c *klass; // x8
  unsigned __int64 v24; // x29
  int32_t v25; // w27
  struct UICommonButton_array *limitCountButtonList; // x8
  bool v28; // w25
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v30; // x26
  __int64 v31; // x1
  __int64 v32; // x2
  int32_t v33; // w28
  __int64 v34; // x1
  __int64 v35; // x2
  Il2CppObject *MasterData_object; // x28
  ServantCostumeEntity_o *Entity; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  const MethodInfo *v40; // x5
  System_String_o *ShortName; // x2
  bool v42; // cc
  char v43; // w27
  System_String_o *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  System_String_o *v47; // x28
  ServantStatusListViewItemDrawRandomLimitCountSupport_o *v48; // x0
  UICommonButton_o *v49; // x1
  bool v50; // w3
  LocalizationManager_c *v51; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  UILabel_o *explanationLabel; // x21
  const MethodInfo *v55; // x2
  int32_t v56; // w1
  UIWidget_o *transformNameLabel; // x21
  UIWidget_o *transformNameSprite; // x21
  UILabel_o *v59; // x20
  __int64 v60; // x1
  _BOOL4 v61; // [xsp+8h] [xbp-68h]
  int v62; // [xsp+Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  UnityEngine_Color_o TransformNameLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TransformNameSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5935178 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&OptionManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&UserServantEntity_TypeInfo);
    sub_21FFC50(&StringLiteral_12449/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/);
    sub_21FFC50(&StringLiteral_12429/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/);
    sub_21FFC50(&StringLiteral_12457/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_REFLECT_OWN"*/);
    sub_21FFC50(&StringLiteral_12430/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/);
    byte_5935178 = 1;
  }
  v62 = 0;
  if ( item && ServantStatusListViewItem__GetSupportLimitCountStageList(item, 0) )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v8 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
      v9 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
      *(_QWORD *)&v63.fields.currentCryptoKey = v8;
      *(_QWORD *)&v63.fields.fakeValue = v9;
      v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v63, 0) == 0;
    }
    else
    {
      v61 = 0;
    }
    SupportLimitCountStage = ServantStatusListViewItem__GetSupportLimitCountStage(item, 0);
    SupportLimitCountStageList = (UnityEngine_GameObject_o *)ServantStatusListViewItem__GetSupportLimitCountStageList(
                                                               item,
                                                               0);
    if ( !this->fields.reflectOwnSettingButton )
      goto LABEL_96;
    v13 = SupportLimitCountStageList;
    SupportLimitCountStageList = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)this->fields.reflectOwnSettingButton,
                                   0);
    if ( !SupportLimitCountStageList )
      goto LABEL_96;
    UnityEngine_GameObject__SetActive(SupportLimitCountStageList, 1, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12457/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_REFLECT_OWN"*/, 0);
    v20 = UserServantEntity_TypeInfo;
    if ( !*(&UserServantEntity_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UserServantEntity_TypeInfo, v16, v17);
      v20 = UserServantEntity_TypeInfo;
    }
    ServantStatusListViewItemDrawRandomLimitCountSupport__SetButtonText(
      this,
      this->fields.reflectOwnSettingButton,
      v19,
      1,
      SupportLimitCountStage == v20->static_fields->LIMIT_SUPPORT_NOT_ASSIGN,
      v18);
    ServantStatusListViewItemDrawRandomLimitCountSupport__DeactivateLimitCountButtonList(this, v21);
    if ( !v13 )
      goto LABEL_96;
    klass = v13[1].klass;
    if ( (int)klass >= 1 )
    {
      v24 = 0;
      do
      {
        if ( v24 >= (unsigned int)klass )
LABEL_97:
          sub_21FFED4(SupportLimitCountStageList);
        v25 = *((_DWORD *)&v13[1].monitor + v24);
        limitCountButtonList = this->fields.limitCountButtonList;
        v28 = v25 > 0 && v25 == SupportLimitCountStage;
        if ( limitCountButtonList
          && (max_length_low = LODWORD(limitCountButtonList->max_length), (__int64)v24 < (int)max_length_low) )
        {
          if ( v24 >= max_length_low )
            goto LABEL_97;
          v30 = (UnityEngine_Object_o *)limitCountButtonList->m_Items[v24];
        }
        else
        {
          v30 = 0;
        }
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v22);
        SupportLimitCountStageList = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v30, 0, 0);
        if ( ((unsigned __int8)SupportLimitCountStageList & 1) != 0 )
        {
          if ( !v30 )
            goto LABEL_96;
          SupportLimitCountStageList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v30, 0);
          if ( !SupportLimitCountStageList )
            goto LABEL_96;
          UnityEngine_GameObject__SetActive(SupportLimitCountStageList, 1, 0);
          if ( !byte_5932DF6 )
          {
            sub_21FFC50(&System_Math_TypeInfo);
            byte_5932DF6 = 1;
          }
          if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v31, v32);
          if ( v25 >= 0 )
            v33 = v25;
          else
            v33 = -v25;
          if ( LimitCountUtility__IsCostume(v33, 0) )
          {
            SupportLimitCountStageList = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !SupportLimitCountStageList )
              goto LABEL_96;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)SupportLimitCountStageList,
                                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
            SupportLimitCountStageList = (UnityEngine_GameObject_o *)ServantStatusListViewItem__GetSvtId(item, 0, 0);
            if ( !MasterData_object )
              goto LABEL_96;
            Entity = ServantCostumeMaster__GetEntity(
                       (ServantCostumeMaster_o *)MasterData_object,
                       (int32_t)SupportLimitCountStageList,
                       v25,
                       0);
            if ( Entity )
            {
              ShortName = ServantCostumeEntity__getShortName(Entity, 0);
            }
            else
            {
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38, v39);
              if ( !byte_593385D )
              {
                sub_21FFC50(&LocalizationManager_TypeInfo);
                byte_593385D = 1;
              }
              v51 = LocalizationManager_TypeInfo;
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38, v39);
                v51 = LocalizationManager_TypeInfo;
              }
              ShortName = v51->static_fields->unknownNameText;
            }
            v48 = this;
            v49 = (UICommonButton_o *)v30;
            v50 = 1;
          }
          else
          {
            v42 = v61 || v25 <= 0;
            v43 = !v42;
            if ( v42 )
            {
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34, v35);
              v47 = (System_String_o *)StringLiteral_12430/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
            }
            else
            {
              v62 = v33 - 1;
              v44 = System_Int32__ToString((int32_t)&v62, 0);
              v47 = System_String__Concat_75438412((System_String_o *)StringLiteral_12429/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v44, 0);
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45, v46);
            }
            ShortName = LocalizationManager__Get(v47, 0);
            v48 = this;
            v49 = (UICommonButton_o *)v30;
            v50 = v43;
          }
          ServantStatusListViewItemDrawRandomLimitCountSupport__SetButtonText(v48, v49, ShortName, v50, v28, v40);
        }
        LODWORD(klass) = v13[1].klass;
      }
      while ( (__int64)++v24 < (int)klass );
    }
    SupportLimitCountStageList = (UnityEngine_GameObject_o *)this->fields.limitCountButtonGrid;
    if ( !SupportLimitCountStageList )
      goto LABEL_96;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))SupportLimitCountStageList->klass[1]._1.element_class)(
      SupportLimitCountStageList,
      SupportLimitCountStageList->klass[1]._1.castClass);
    explanationLabel = this->fields.explanationLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v52, v53);
    SupportLimitCountStageList = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_12449/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/,
                                                               0);
    if ( !explanationLabel )
      goto LABEL_96;
    UILabel__set_text(explanationLabel, (System_String_o *)SupportLimitCountStageList, 0);
    if ( v61 )
    {
      v56 = 1;
    }
    else if ( ServantStatusListViewItem__get_IsEnableSupportRandomSetting(item, 0)
           && ServantStatusListViewItem__GetRandomLimitCountSupport(item, 0) == 1 )
    {
      v56 = 3;
    }
    else
    {
      if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v60, v55);
      if ( OptionManager__GetRandomLimitCountFriend(0) )
        v56 = 2 * (ServantStatusListViewItem__GetRandomLimitCountSupport(item, 0) == 0);
      else
        v56 = 0;
    }
    ServantStatusListViewItemDrawRandomLimitCountSupport__SetupMask(this, v56, v55);
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
              v59 = this->fields.transformNameLabel;
              SupportLimitCountStageList = (UnityEngine_GameObject_o *)ServantStatusListViewItem__GetTransformName(
                                                                         item,
                                                                         0);
              if ( v59 )
              {
                UILabel__set_text(v59, (System_String_o *)SupportLimitCountStageList, 0);
                return;
              }
            }
          }
        }
      }
LABEL_96:
      sub_21FFECC(SupportLimitCountStageList, v12);
    }
    SupportLimitCountStageList = (UnityEngine_GameObject_o *)this->fields.transformNameSprite;
    if ( !SupportLimitCountStageList )
      goto LABEL_96;
    SupportLimitCountStageList = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)SupportLimitCountStageList,
                                   0);
    if ( !SupportLimitCountStageList )
      goto LABEL_96;
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
  __int64 v6; // x2
  LocalizationManager_c *v7; // x0
  __int64 *v8; // x20
  System_String_o *v9; // x20

  if ( (byte_5935179 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_12447/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_COMBINE_INFO"*/);
    sub_21FFC50(&StringLiteral_12448/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_ENABLE_INFO"*/);
    byte_5935179 = 1;
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
    sub_21FFECC(maskBase, *(_QWORD *)&maskType);
  }
  if ( !maskBase )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(maskBase, 1, 0);
  if ( maskType == 1 )
  {
    v7 = LocalizationManager_TypeInfo;
    v8 = &StringLiteral_12447/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_COMBINE_INFO"*/;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
LABEL_7:
      j_il2cpp_runtime_class_init_0(v7, *(_QWORD *)&maskType, v6);
  }
  else
  {
    if ( (maskType & 0xFFFFFFFE) != 2 )
    {
      v9 = **(System_String_o ***)(qword_594C0B8 + 184);
      goto LABEL_15;
    }
    v7 = LocalizationManager_TypeInfo;
    v8 = &StringLiteral_12448/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_ENABLE_INFO"*/;
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