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
    sub_1BCAA3C(baseSprite, method);
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
        sub_1BCAA44(this, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA44(this, index);
  return limitCountButtonList->m_Items[index];
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawRandomLimitCountSupport__Layout(
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
  int v25; // s0
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
        sub_1BCAA44(this, method);
      this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)limitCountButtonList->m_Items[v6];
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
  if ( !byte_4B1103A )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, method, v2);
    byte_4B1103A = 1;
  }
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
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
  if ( !byte_4B1103A )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, method, v2);
    byte_4B1103A = 1;
  }
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
  if ( !baseSprite )
    goto LABEL_38;
  v18 = fmaxf(v17, 0.0) * cellHeight;
  v19 = v18 * 0.5;
  v20 = ceilf(v19 + v19);
  v21 = (int)v20;
  if ( v20 == INFINITY )
    v21 = 0x80000000;
  v22 = y == INFINITY ? 0x80000000 : (int)y;
  UIWidget__set_height(baseSprite, v21 + v22, 0LL);
  v23 = v5->fields.baseSprite;
  if ( !v23 )
    goto LABEL_38;
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v5->fields.maskSprite;
  if ( !this )
    goto LABEL_38;
  UIWidget__set_height((UIWidget_o *)this, v23->fields.mHeight, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v5->fields.maskSprite;
  if ( !this )
    goto LABEL_38;
  UIWidget__ResizeCollider((UIWidget_o *)this, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v5->fields.baseSprite;
  if ( !this )
    goto LABEL_38;
  baseCollider = v5->fields.baseCollider;
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)((__int64 (__fastcall *)(ServantStatusListViewItemDrawRandomLimitCountSupport_o *, void *))this->klass[1]._1.events)(
                                                                     this,
                                                                     this->klass[1]._1.properties);
  if ( !baseCollider )
    goto LABEL_38;
  v27 = 0;
  UnityEngine_BoxCollider__set_size(baseCollider, *(UnityEngine_Vector3_o *)&v25, 0LL);
  this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v5->fields.titleBase;
  if ( !this
    || (gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL),
        GameObjectExtensions__SetLocalPositionY(gameObject, v19 + v5->fields.titleBasePosition.fields.y, 0LL),
        (this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v5->fields.buttonBaseObj) == 0LL)
    || (v29 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL),
        GameObjectExtensions__SetLocalPositionY(v29, v19 + v5->fields.buttonBasePosition.fields.y, 0LL),
        (this = (ServantStatusListViewItemDrawRandomLimitCountSupport_o *)v5->fields.explanationLabel) == 0LL) )
  {
LABEL_38:
    sub_1BCAA3C(this, method);
  }
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v30, v19 + (float)(v5->fields.explanationBasePosition.fields.y - v18), 0LL);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  void *Component_object; // x0
  __int64 v22; // x1
  __int64 *v23; // x8
  __int64 v24; // x1
  Il2CppObject *ComponentInChildren_object__49322392; // x22
  __int64 v26; // x2
  float *v27; // x8
  float v28; // s10
  float v29; // s11
  float v30; // s8
  float v31; // s9
  float *v32; // x8
  float v33; // s12
  float v34; // s13
  float v35; // s14
  float v36; // s15
  float v37; // s0
  float v38; // s1
  float v39; // s2
  float v40; // s3

  if ( (byte_4B1321B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___, targetButton, text);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_17652/*"btn_bg_20"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_17653/*"btn_bg_21"*/, v19, v20);
    byte_4B1321B = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, targetButton);
  Component_object = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)targetButton, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !targetButton )
      goto LABEL_38;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)targetButton,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !Component_object )
      goto LABEL_38;
    v23 = &StringLiteral_17653/*"btn_bg_21"*/;
    if ( !isSelected )
      v23 = &StringLiteral_17652/*"btn_bg_20"*/;
    UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)*v23, 0LL);
    UICommonButton__SetButtonEnable(targetButton, isOpen, 1, 0LL);
    ComponentInChildren_object__49322392 = UnityEngine_Component__GetComponentInChildren_object__49322392(
                                             (UnityEngine_Component_o *)targetButton,
                                             (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object__49322392, 0LL, 0LL) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
      if ( !byte_4B11133 )
      {
        sub_1BCA7E0(&LocalizationManager_TypeInfo, v22, v26);
        byte_4B11133 = 1;
      }
      Component_object = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
        Component_object = LocalizationManager_TypeInfo;
      }
      v27 = (float *)*((_QWORD *)Component_object + 23);
      v29 = v27[20];
      v28 = v27[21];
      v31 = v27[22];
      v30 = v27[23];
      if ( !byte_4B11134 )
      {
        sub_1BCA7E0(&LocalizationManager_TypeInfo, v22, v26);
        Component_object = LocalizationManager_TypeInfo;
        byte_4B11134 = 1;
      }
      if ( !*((_DWORD *)Component_object + 56) )
      {
        j_il2cpp_runtime_class_init_0(Component_object, v22);
        Component_object = LocalizationManager_TypeInfo;
      }
      if ( ComponentInChildren_object__49322392 )
      {
        v32 = (float *)*((_QWORD *)Component_object + 23);
        v33 = v32[24];
        v34 = v32[25];
        v35 = v32[26];
        v36 = v32[27];
        UILabel__set_overflowMethod((UILabel_o *)ComponentInChildren_object__49322392, 2, 0LL);
        UILabel__set_text((UILabel_o *)ComponentInChildren_object__49322392, text, 0LL);
        if ( isSelected )
          v37 = v33;
        else
          v37 = v29;
        if ( isSelected )
          v38 = v34;
        else
          v38 = v28;
        if ( isSelected )
          v39 = v35;
        else
          v39 = v31;
        if ( isSelected )
          v40 = v36;
        else
          v40 = v30;
        UILabel__set_effectColor((UILabel_o *)ComponentInChildren_object__49322392, *(UnityEngine_Color_o *)&v37, 0LL);
        UILabel__SetCondensedScale(
          (UILabel_o *)ComponentInChildren_object__49322392,
          this->fields.BUTTON_LABEL_MAX_WIDTH,
          0LL);
        return;
      }
LABEL_38:
      sub_1BCAA3C(Component_object, v22);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
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
  __int64 v26; // x2
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v28; // x21
  __int64 v29; // x22
  _BOOL4 v30; // w8
  UnityEngine_Component_o *reflectOwnSettingButton; // x0
  int32_t supportRandomLimitCount; // w27
  __int64 v33; // x1
  System_String_o *v34; // x0
  const MethodInfo *v35; // x5
  const MethodInfo *v36; // x1
  struct System_Int32_array *supportRandomLimitCountList; // x8
  unsigned __int64 v38; // x29
  unsigned __int64 max_length; // x9
  int32_t v40; // w24
  struct UICommonButton_array *limitCountButtonList; // x8
  unsigned __int64 v42; // x9
  UnityEngine_Object_o *v43; // x22
  __int64 v44; // x1
  BalanceConfig_c *v45; // x0
  bool v46; // w23
  Il2CppObject *MasterData_object; // x25
  ServantCostumeEntity_o *Entity; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  const MethodInfo *v51; // x5
  System_String_o *ShortName; // x2
  bool v53; // w25
  System_String_o *v54; // x0
  __int64 v55; // x1
  System_String_o *v56; // x24
  ServantStatusListViewItemDrawRandomLimitCountSupport_o *v57; // x0
  UICommonButton_o *v58; // x1
  bool v59; // w3
  LocalizationManager_c *v60; // x0
  __int64 v61; // x1
  UILabel_o *explanationLabel; // x21
  __int64 v63; // x1
  const MethodInfo *v64; // x2
  int32_t v65; // w1
  _BOOL4 v66; // [xsp+8h] [xbp-68h]
  int v67; // [xsp+Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  if ( (byte_4B13219 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, item, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&OptionManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_12042/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_12023/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_12050/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_REFLECT_OWN"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_12024/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/, v25, v26);
    byte_4B13219 = 1;
  }
  v67 = 0;
  if ( item && item->fields.supportRandomLimitCountList )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v29 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
      v28 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, item);
      *(_QWORD *)&v68.fields.currentCryptoKey = v29;
      *(_QWORD *)&v68.fields.fakeValue = v28;
      v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v68, 0LL) != 0;
    }
    else
    {
      v30 = 1;
    }
    reflectOwnSettingButton = (UnityEngine_Component_o *)this->fields.reflectOwnSettingButton;
    v66 = v30;
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_12050/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_REFLECT_OWN"*/, 0LL);
    ServantStatusListViewItemDrawRandomLimitCountSupport__SetButtonText(
      this,
      this->fields.reflectOwnSettingButton,
      v34,
      1,
      supportRandomLimitCount == UserServantEntity_TypeInfo->static_fields->LIMIT_SUPPORT_NOT_ASSIGN,
      v35);
    ServantStatusListViewItemDrawRandomLimitCountSupport__DeactivateLimitCountButtonList(this, v36);
    supportRandomLimitCountList = item->fields.supportRandomLimitCountList;
    if ( !supportRandomLimitCountList )
      goto LABEL_52;
    v38 = 0LL;
    while ( 1 )
    {
      max_length = supportRandomLimitCountList->max_length;
      if ( (__int64)v38 >= (int)max_length )
        break;
      if ( v38 >= max_length )
        goto LABEL_69;
      v40 = supportRandomLimitCountList->m_Items[v38 + 1];
      limitCountButtonList = this->fields.limitCountButtonList;
      if ( limitCountButtonList && (v42 = limitCountButtonList->max_length, (__int64)v38 < (int)v42) )
      {
        if ( v38 >= v42 )
LABEL_69:
          sub_1BCAA44(reflectOwnSettingButton, item);
        v43 = (UnityEngine_Object_o *)limitCountButtonList->m_Items[v38];
      }
      else
      {
        v43 = 0LL;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
      reflectOwnSettingButton = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v43, 0LL, 0LL);
      if ( ((unsigned __int8)reflectOwnSettingButton & 1) != 0 )
      {
        if ( !v43 )
          goto LABEL_52;
        reflectOwnSettingButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)v43,
                                                               0LL);
        if ( !reflectOwnSettingButton )
          goto LABEL_52;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)reflectOwnSettingButton, 1, 0LL);
        v45 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v44);
          v45 = BalanceConfig_TypeInfo;
        }
        v46 = v40 > 0 && v40 == supportRandomLimitCount;
        if ( v40 <= v45->static_fields->ServantLimitMax )
        {
          v53 = v66 && v40 != -1;
          if ( v53 )
          {
            v67 = v40 - 1;
            v54 = System_Int32__ToString((int32_t)&v67, 0LL);
            v56 = System_String__Concat_62401220((System_String_o *)StringLiteral_12023/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_"*/, v54, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55);
          }
          else
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44);
            v56 = (System_String_o *)StringLiteral_12024/*"SERVANT_STATUS_IMAGE_LIMIT_COUNT_LEVEL_CLOSE"*/;
          }
          ShortName = LocalizationManager__Get(v56, 0LL);
          v57 = this;
          v58 = (UICommonButton_o *)v43;
          v59 = v53;
        }
        else
        {
          reflectOwnSettingButton = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !reflectOwnSettingButton )
            goto LABEL_52;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)reflectOwnSettingButton,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
          reflectOwnSettingButton = (UnityEngine_Component_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
          if ( !MasterData_object )
            goto LABEL_52;
          Entity = ServantCostumeMaster__GetEntity(
                     (ServantCostumeMaster_o *)MasterData_object,
                     (int32_t)reflectOwnSettingButton,
                     v40,
                     0LL);
          if ( Entity )
          {
            ShortName = ServantCostumeEntity__getShortName(Entity, 0LL);
          }
          else
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v49);
            if ( !byte_4B1194D )
            {
              sub_1BCA7E0(&LocalizationManager_TypeInfo, v49, v50);
              byte_4B1194D = 1;
            }
            v60 = LocalizationManager_TypeInfo;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v49);
              v60 = LocalizationManager_TypeInfo;
            }
            ShortName = v60->static_fields->unknownNameText;
          }
          v59 = 1;
          v57 = this;
          v58 = (UICommonButton_o *)v43;
        }
        ServantStatusListViewItemDrawRandomLimitCountSupport__SetButtonText(v57, v58, ShortName, v59, v46, v51);
      }
      supportRandomLimitCountList = item->fields.supportRandomLimitCountList;
      ++v38;
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v61);
    reflectOwnSettingButton = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_12042/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/,
                                                           0LL);
    if ( !explanationLabel )
LABEL_52:
      sub_1BCAA3C(reflectOwnSettingButton, item);
    UILabel__set_text(explanationLabel, (System_String_o *)reflectOwnSettingButton, 0LL);
    if ( v66 )
    {
      if ( item->fields.isEnableSupportRandomSetting
        && ServantStatusListViewItem__get_SupportRandomSettingParam(item, 0LL) == 1 )
      {
        v65 = 3;
      }
      else
      {
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v63);
        if ( OptionManager__GetRandomLimitCountFriend(0LL) )
          v65 = 2 * (ServantStatusListViewItem__get_SupportRandomSettingParam(item, 0LL) == 0);
        else
          v65 = 0;
      }
    }
    else
    {
      v65 = 1;
    }
    ServantStatusListViewItemDrawRandomLimitCountSupport__SetupMask(this, v65, v64);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawRandomLimitCountSupport__SetupMask(
        ServantStatusListViewItemDrawRandomLimitCountSupport_o *this,
        int32_t maskType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_GameObject_o *maskBase; // x0
  __int64 *v12; // x8
  System_String_o *Empty; // x20

  if ( (byte_4B1321A & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&maskType, method);
    sub_1BCA7E0(&string_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_12040/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_COMBINE_INFO"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_12041/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_ENABLE_INFO"*/, v9, v10);
    byte_4B1321A = 1;
  }
  maskBase = this->fields.maskBase;
  if ( !maskBase )
LABEL_21:
    sub_1BCAA3C(maskBase, *(_QWORD *)&maskType);
  if ( !maskType )
  {
    UnityEngine_GameObject__SetActive(maskBase, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive(maskBase, 1, 0LL);
  if ( maskType == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&maskType);
    v12 = &StringLiteral_12040/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_COMBINE_INFO"*/;
  }
  else
  {
    if ( (maskType & 0xFFFFFFFE) != 2 )
    {
      Empty = string_TypeInfo->static_fields->Empty;
      goto LABEL_16;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&maskType);
    v12 = &StringLiteral_12041/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_FRIEND_ENABLE_INFO"*/;
  }
  Empty = LocalizationManager__Get((System_String_o *)*v12, 0LL);
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