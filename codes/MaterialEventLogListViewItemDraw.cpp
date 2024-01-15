void __fastcall MaterialEventLogListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  struct MaterialEventLogListViewItemDraw_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  MaterialEventLogListViewItemDraw_c *v20; // x8

  if ( (byte_40FCC1B & 1) == 0 )
  {
    sub_B16FFC(&MaterialEventLogListViewItemDraw_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_19459/*"img_menuboard_03"*/, v8);
    sub_B16FFC(&StringLiteral_19458/*"img_menuboard_01"*/, v9);
    byte_40FCC1B = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_19458/*"img_menuboard_01"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19458/*"img_menuboard_01"*/;
  sub_B16F98(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_19459/*"img_menuboard_03"*/;
  v12->BASE_SP_NAME_SVT = (struct System_String_o *)StringLiteral_19459/*"img_menuboard_03"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v12->BASE_SP_NAME_SVT, v13, v14, v15, v16, v17, v18, v19);
  v20 = MaterialEventLogListViewItemDraw_TypeInfo;
  MaterialEventLogListViewItemDraw_TypeInfo->static_fields->LABEL_X_DEFAULT = 2.0;
  v20->static_fields->LABEL_X_SVT = 44.0;
  v20->static_fields->LABEL_W_DEFAULT = 418;
  v20->static_fields->LABEL_W_CONDENSED = 400;
  v20->static_fields->LABEL_W_SVT = 330;
  v20->static_fields->LABEL_MAX_LINE_DEFAULT = 2;
  v20->static_fields->LABEL_MAX_LINE_SVT = 1;
  v20->static_fields->LABEL_MAX_LINE_MAP = 1;
  v20->static_fields->FACE_MASK_SP_W = 115;
  v20->static_fields->LABEL_W_NOT_SELECT = 400;
}


void __fastcall MaterialEventLogListViewItemDraw___ctor(
        MaterialEventLogListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall MaterialEventLogListViewItemDraw__IsEnableSelect(
        MaterialEventLogListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *notSelectObj; // x0

  notSelectObj = this->fields.notSelectObj;
  if ( !notSelectObj )
    sub_B170D4();
  return !UnityEngine_GameObject__get_activeSelf(notSelectObj, 0LL);
}


void __fastcall MaterialEventLogListViewItemDraw__LateUpdateItem(
        MaterialEventLogListViewItemDraw_o *this,
        MaterialEventLogListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  struct UISprite_o *mBaseSp; // x8
  ItemIconComponent_o *mFaceIcon; // x0
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  UIWidget_o *mFaceMaskSp; // x0
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( item && mode && item->fields._info_k__BackingField )
  {
    mBaseSp = this->fields.mBaseSp;
    if ( !mBaseSp )
      goto LABEL_9;
    mFaceIcon = this->fields.mFaceIcon;
    if ( !mFaceIcon )
      goto LABEL_9;
    r = mBaseSp->fields.mColor.fields.r;
    g = mBaseSp->fields.mColor.fields.g;
    b = mBaseSp->fields.mColor.fields.b;
    a = mBaseSp->fields.mColor.fields.a;
    v12.fields.r = r;
    v12.fields.g = g;
    v12.fields.b = b;
    v12.fields.a = a;
    ItemIconComponent__SetColor(mFaceIcon, v12, 0LL);
    mFaceMaskSp = (UIWidget_o *)this->fields.mFaceMaskSp;
    if ( !mFaceMaskSp )
LABEL_9:
      sub_B170D4();
    v13.fields.r = r;
    v13.fields.g = g;
    v13.fields.b = b;
    v13.fields.a = a;
    UIWidget__set_color(mFaceMaskSp, v13, 0LL);
  }
}


void __fastcall MaterialEventLogListViewItemDraw__SetEnableSelect(
        MaterialEventLogListViewItemDraw_o *this,
        bool isSelect,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *notSelectObj; // x0

  notSelectObj = this->fields.notSelectObj;
  if ( !notSelectObj )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(notSelectObj, !isSelect, 0LL);
}


void __fastcall MaterialEventLogListViewItemDraw__SetFaceImage(
        MaterialEventLogListViewItemDraw_o *this,
        MaterialEventLogListViewItem_o *item,
        bool is_disp,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *mFaceObj; // x0
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x21
  ItemIconComponent_o *mFaceIcon; // x0
  UISprite_o *mFaceMaskSp; // x0
  UISpriteData_o *AtlasSprite; // x19

  if ( (byte_40FCC19 & 1) == 0 )
  {
    sub_B16FFC(&MaterialEventLogListViewItemDraw_TypeInfo, item);
    byte_40FCC19 = 1;
  }
  if ( !item )
    goto LABEL_15;
  mFaceObj = this->fields.mFaceObj;
  if ( !mFaceObj )
    goto LABEL_15;
  info_k__BackingField = item->fields._info_k__BackingField;
  UnityEngine_GameObject__SetActive(mFaceObj, is_disp, 0LL);
  if ( !is_disp )
    return;
  if ( !info_k__BackingField )
    goto LABEL_15;
  mFaceIcon = this->fields.mFaceIcon;
  if ( !mFaceIcon )
    goto LABEL_15;
  ItemIconComponent__SetFaceImage(
    mFaceIcon,
    info_k__BackingField->fields.svt_id,
    info_k__BackingField->fields.limit_count,
    -1,
    1,
    0,
    0LL);
  mFaceMaskSp = this->fields.mFaceMaskSp;
  if ( !mFaceMaskSp )
    goto LABEL_15;
  AtlasSprite = UISprite__GetAtlasSprite(mFaceMaskSp, 0LL);
  if ( (BYTE3(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
  }
  if ( !AtlasSprite )
LABEL_15:
    sub_B170D4();
  AtlasSprite->fields.width = MaterialEventLogListViewItemDraw_TypeInfo->static_fields->FACE_MASK_SP_W - 1;
}


void __fastcall MaterialEventLogListViewItemDraw__SetInput(
        MaterialEventLogListViewItemDraw_o *this,
        MaterialEventLogListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  ;
}


void __fastcall MaterialEventLogListViewItemDraw__SetItem(
        MaterialEventLogListViewItemDraw_o *this,
        MaterialEventLogListViewItem_o *item,
        int32_t mode,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x25
  UnityEngine_GameObject_o *v15; // x22
  int32_t flag; // w26
  UISprite_o *mBaseSp; // x22
  MaterialEventLogListViewItemDraw_c *v18; // x0
  System_String_o **p_BASE_SP_NAME_SVT; // x8
  UnityEngine_GameObject_o *gameObject; // x19
  struct UISprite_o *v21; // x0
  UILabel_o *mLabel; // x0
  MaterialEventLogListViewItemDraw_c *v23; // x0
  struct MaterialEventLogListViewItemDraw_StaticFields *static_fields; // x8
  float LABEL_X_SVT; // s8
  int32_t LABEL_W_SVT; // w22
  struct MaterialEventLogListViewItemDraw_StaticFields *v27; // x8
  int32_t *p_LABEL_MAX_LINE_SVT; // x8
  UILabel_o *v29; // x0
  int32_t v30; // w23
  UILabel_o *v31; // x0
  UILabel_o *v32; // x0
  struct MaterialEventLogListViewItem_Info_o *v33; // x8
  struct UILabel_o *v34; // x23
  System_String_o *mText; // x24
  System_String_o *v36; // x0
  System_String_o *v37; // x0
  UnityEngine_Component_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  UILabel_o *v40; // x0
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x23
  VoiceMaterialCondMaster_o *v44; // x22
  System_String_o *v45; // x0
  int32_t svtVoiceId; // w24
  int32_t voicePrefix; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v48; // x25
  System_String_o *v49; // x0
  struct MaterialEventLogListViewItem_Info_o *v50; // x8
  struct MaterialEventLogListViewItem_Info_o *v51; // x8
  UnityEngine_GameObject_o *notSelectObj; // x0
  bool v53; // w1
  struct MaterialEventLogListViewItem_Info_o *v54; // x8
  struct MaterialEventLogListViewItem_Info_o *v55; // x8
  struct MaterialEventLogListViewItem_Info_o *v56; // x8
  UILabel_o *notSelectLabel; // x0
  UILabel_o *v58; // x21
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x2
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FCC18 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_VoiceMaterialCondMaster___, item);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&MaterialEventLogListViewItemDraw_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&StringLiteral_8638/*"MATERIAL_PROGRESS_SUFFIX"*/, v13);
    byte_40FCC18 = 1;
  }
  if ( item )
  {
    info_k__BackingField = item->fields._info_k__BackingField;
    if ( !info_k__BackingField )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      zero = UnityEngine_Vector3__get_zero(0LL);
      GameObjectExtensions__SetLocalScale(gameObject, zero, 0LL);
      return;
    }
    if ( mode )
    {
      v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      one = UnityEngine_Vector3__get_one(0LL);
      GameObjectExtensions__SetLocalScale(v15, one, 0LL);
      flag = info_k__BackingField->fields.flag;
      mBaseSp = this->fields.mBaseSp;
      v18 = MaterialEventLogListViewItemDraw_TypeInfo;
      if ( (flag & 2) != 0 )
      {
        if ( (WORD1(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
          v18 = MaterialEventLogListViewItemDraw_TypeInfo;
        }
        p_BASE_SP_NAME_SVT = &v18->static_fields->BASE_SP_NAME_SVT;
        if ( !mBaseSp )
          goto LABEL_90;
      }
      else
      {
        if ( (WORD1(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
          v18 = MaterialEventLogListViewItemDraw_TypeInfo;
        }
        p_BASE_SP_NAME_SVT = &v18->static_fields->BASE_SP_NAME_DEFAULT;
        if ( !mBaseSp )
          goto LABEL_90;
      }
      UISprite__set_spriteName(mBaseSp, *p_BASE_SP_NAME_SVT, 0LL);
      v21 = this->fields.mBaseSp;
      if ( !v21 )
        goto LABEL_90;
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v21->klass->vtable._33_MakePixelPerfect.method)(
        v21,
        v21->klass->vtable._34_get_minWidth.methodPtr);
      mLabel = this->fields.mLabel;
      if ( !mLabel )
        goto LABEL_90;
      UILabel__set_fontSize(mLabel, info_k__BackingField->fields.font_size, 0LL);
      v23 = MaterialEventLogListViewItemDraw_TypeInfo;
      if ( (flag & 2) != 0 )
      {
        if ( (WORD1(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
        {
          static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          LABEL_X_SVT = static_fields->LABEL_X_SVT;
LABEL_23:
          LABEL_W_SVT = static_fields->LABEL_W_SVT;
LABEL_40:
          p_LABEL_MAX_LINE_SVT = &static_fields->LABEL_MAX_LINE_SVT;
LABEL_45:
          if ( item->fields._kind_k__BackingField == 5 )
          {
            if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v23);
              v23 = MaterialEventLogListViewItemDraw_TypeInfo;
            }
            p_LABEL_MAX_LINE_SVT = &v23->static_fields->LABEL_MAX_LINE_MAP;
          }
          v29 = this->fields.mLabel;
          if ( v29 )
          {
            v30 = *p_LABEL_MAX_LINE_SVT;
            UILabel__set_overflowMethod(v29, 2, 0LL);
            v31 = this->fields.mLabel;
            if ( v31 )
            {
              UILabel__set_maxLineCount(v31, v30, 0LL);
              v32 = this->fields.mLabel;
              if ( v32 )
              {
                UILabel__set_text(v32, info_k__BackingField->fields.str, 0LL);
                if ( (flag & 2) == 0
                  && !info_k__BackingField->fields.isMovedQuest
                  && item->fields._kind_k__BackingField == 5 )
                {
                  v33 = item->fields._info_k__BackingField;
                  if ( !v33 )
                    goto LABEL_90;
                  if ( v33->fields.clear_phase_max < v33->fields.phase_max )
                  {
                    v34 = this->fields.mLabel;
                    if ( !v34 )
                      goto LABEL_90;
                    mText = v34->fields.mText;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_8638/*"MATERIAL_PROGRESS_SUFFIX"*/, 0LL);
                    v37 = System_String__Concat_43743732(mText, v36, 0LL);
                    UILabel__set_text(v34, v37, 0LL);
                  }
                }
                v38 = (UnityEngine_Component_o *)this->fields.mLabel;
                if ( v38 )
                {
                  v39 = UnityEngine_Component__get_gameObject(v38, 0LL);
                  GameObjectExtensions__SetLocalPositionX(v39, LABEL_X_SVT, 0LL);
                  v40 = this->fields.mLabel;
                  if ( v40 )
                  {
                    UILabel__SetCondensedScale(v40, LABEL_W_SVT, 0LL);
                    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( Instance )
                    {
                      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_VoiceMaterialCondMaster___);
                      voiceId = info_k__BackingField->fields.voiceId;
                      v44 = (VoiceMaterialCondMaster_o *)MasterData_WarQuestSelectionMaster;
                      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                      }
                      v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(voiceId, 0LL);
                      if ( System_String__IsNullOrEmpty(v45, 0LL) )
                        goto LABEL_75;
                      svtVoiceId = info_k__BackingField->fields.svtVoiceId;
                      voicePrefix = info_k__BackingField->fields.voicePrefix;
                      v48 = info_k__BackingField->fields.voiceId;
                      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                      }
                      v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(v48, 0LL);
                      if ( !v44 )
                        goto LABEL_90;
                      if ( VoiceMaterialCondMaster__IsVoicePlay(v44, svtVoiceId, voicePrefix, v49, limitCount, 0LL) )
                      {
LABEL_75:
                        v50 = item->fields._info_k__BackingField;
                        if ( !v50 )
                          goto LABEL_90;
                        v50->fields.flag &= ~1u;
                        v51 = item->fields._info_k__BackingField;
                        if ( !v51 )
                          goto LABEL_90;
                        v51->fields.flag &= ~4u;
                        notSelectObj = this->fields.notSelectObj;
                        if ( !notSelectObj )
                          goto LABEL_90;
                        v53 = 0;
                      }
                      else
                      {
                        v54 = item->fields._info_k__BackingField;
                        if ( !v54 )
                          goto LABEL_90;
                        v54->fields.flag |= 1u;
                        v55 = item->fields._info_k__BackingField;
                        if ( !v55 )
                          goto LABEL_90;
                        v55->fields.flag |= 4u;
                        notSelectObj = this->fields.notSelectObj;
                        if ( !notSelectObj )
                          goto LABEL_90;
                        v53 = 1;
                      }
                      UnityEngine_GameObject__SetActive(notSelectObj, v53, 0LL);
                      v56 = item->fields._info_k__BackingField;
                      if ( !v56 )
                        goto LABEL_90;
                      notSelectLabel = this->fields.notSelectLabel;
                      if ( !notSelectLabel )
                        goto LABEL_90;
                      UILabel__set_text(notSelectLabel, v56->fields.playLimitCountMessage, 0LL);
                      v58 = this->fields.notSelectLabel;
                      if ( (BYTE3(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
                      }
                      if ( !v58 )
                        goto LABEL_90;
                      UILabel__SetCondensedScale(
                        v58,
                        MaterialEventLogListViewItemDraw_TypeInfo->static_fields->LABEL_W_NOT_SELECT,
                        0LL);
                      MaterialEventLogListViewItemDraw__SetFaceImage(this, item, (flag & 2) != 0, v59);
                      MaterialEventLogListViewItemDraw__SetLastTimeIcon(this, item, v60);
                      return;
                    }
                  }
                }
              }
            }
          }
LABEL_90:
          sub_B170D4();
        }
        if ( MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          LABEL_X_SVT = static_fields->LABEL_X_SVT;
        }
        else
        {
          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
          v23 = MaterialEventLogListViewItemDraw_TypeInfo;
          static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          LABEL_X_SVT = static_fields->LABEL_X_SVT;
          if ( (BYTE3(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
            goto LABEL_23;
        }
        if ( v23->_2.cctor_finished )
        {
          LABEL_W_SVT = static_fields->LABEL_W_SVT;
        }
        else
        {
          j_il2cpp_runtime_class_init_0(v23);
          v23 = MaterialEventLogListViewItemDraw_TypeInfo;
          static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          LABEL_W_SVT = static_fields->LABEL_W_SVT;
          if ( (BYTE3(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
            goto LABEL_40;
        }
        if ( !v23->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v23);
          v23 = MaterialEventLogListViewItemDraw_TypeInfo;
          static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
        }
        goto LABEL_40;
      }
      if ( (WORD1(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
      {
        v27 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
        LABEL_X_SVT = v27->LABEL_X_DEFAULT;
LABEL_26:
        LABEL_W_SVT = v27->LABEL_W_CONDENSED;
LABEL_44:
        p_LABEL_MAX_LINE_SVT = &v27->LABEL_MAX_LINE_DEFAULT;
        goto LABEL_45;
      }
      if ( MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        v27 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
        LABEL_X_SVT = v27->LABEL_X_DEFAULT;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
        v23 = MaterialEventLogListViewItemDraw_TypeInfo;
        v27 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
        LABEL_X_SVT = v27->LABEL_X_DEFAULT;
        if ( (BYTE3(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
          goto LABEL_26;
      }
      if ( v23->_2.cctor_finished )
      {
        LABEL_W_SVT = v27->LABEL_W_CONDENSED;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(v23);
        v23 = MaterialEventLogListViewItemDraw_TypeInfo;
        v27 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
        LABEL_W_SVT = v27->LABEL_W_CONDENSED;
        if ( (BYTE3(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
          goto LABEL_44;
      }
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        v23 = MaterialEventLogListViewItemDraw_TypeInfo;
        v27 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
      }
      goto LABEL_44;
    }
  }
}


void __fastcall MaterialEventLogListViewItemDraw__SetLastTimeIcon(
        MaterialEventLogListViewItemDraw_o *this,
        MaterialEventLogListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x20
  UnityEngine_Component_o *mLastTimeIcon; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x9
  __int64 v35; // x8
  int v36; // w9
  int32_t Value; // w0
  __int64 v38; // x1
  __int64 v39; // x8
  __int64 v40; // x9
  MyRoomParamsManager_c *v41; // x0
  __int64 v42; // x8
  MyRoomParamsManager_c *v43; // x0
  __int64 v44; // x8
  int v45; // w8
  MyRoomParamsManager_c *v46; // x0
  System_String_o *LastPlayTitle_k__BackingField; // x21
  System_String_o *v48; // x0
  __int64 v49; // x1
  MyRoomParamsManager_c *v50; // x0
  __int64 v51; // x8
  BalanceConfig_c *v52; // x8
  MaterialEventLogListViewItemDraw___c_c *v53; // x0
  System_Int32_array *MainInterludeWarIdOnMaterial; // x21
  struct MaterialEventLogListViewItemDraw___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__26_0; // x22
  Il2CppObject *v57; // x23
  struct MaterialEventLogListViewItemDraw___c_StaticFields *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  __int64 v65; // x1
  __int64 v66; // x8
  __int64 v67; // x9
  MyRoomParamsManager_c *v68; // x0
  MyRoomParamsManager_c *v69; // x0
  __int64 v70; // x8
  System_Collections_Generic_List_int__o *DummyFolderHistory; // x0
  MyRoomParamsManager_c *v72; // x0
  int32_t LastPlayQuestId_k__BackingField; // w22
  __int64 v74; // x1
  __int64 v75; // x8
  UnityEngine_Component_o *v76; // x0
  UnityEngine_GameObject_o *v77; // x0
  MyRoomParamsManager_c *v78; // x0
  __int64 v79; // x8
  int v80; // w8
  MyRoomParamsManager_c *v81; // x0
  __int64 v82; // x8
  __int64 v83; // x9
  int32_t LastSelectSubFolderId_k__BackingField; // w9
  int v85; // w8
  MyRoomParamsManager_c *v86; // x0
  __int64 v87; // x8
  UnityEngine_Component_o *v88; // x0
  UnityEngine_GameObject_o *v89; // x0
  MyRoomParamsManager_c *v90; // x0
  __int64 v91; // x8
  System_Collections_Generic_List_int__o *v92; // x0
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  __int64 v96; // x4
  __int64 v97; // x8
  MyRoomParamsManager_c *v98; // x0
  __int64 v99; // x8
  BalanceConfig_c *v100; // x0
  System_Int32_array *v101; // x22
  System_Func_int__bool__o *v102; // x23
  __int64 v103; // x1
  MyRoomParamsManager_c *v104; // x0
  __int64 v105; // x8
  MyRoomParamsManager_c *v106; // x0
  MyRoomParamsManager_c *v107; // x0
  __int64 v108; // x8
  System_Collections_Generic_List_int__o *v109; // x0
  MyRoomParamsManager_c *v110; // x0
  __int64 v111; // x8
  __int64 v112; // x8
  int v113; // w8
  MyRoomParamsManager_c *v114; // x0
  __int64 v115; // x8
  UnityEngine_Component_o *v116; // x0
  UnityEngine_GameObject_o *v117; // x0
  __int64 v118; // x8
  System_String_o *v119; // x20
  System_String_o *v120; // x0

  if ( (byte_40FCC1A & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, item);
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, v7);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v8);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v12);
    sub_B16FFC(&Method_MaterialEventLogListViewItemDraw___c__SetLastTimeIcon_b__26_0__, v13);
    sub_B16FFC(&Method_MaterialEventLogListViewItemDraw___c__DisplayClass26_0__SetLastTimeIcon_b__1__, v14);
    sub_B16FFC(&MaterialEventLogListViewItemDraw___c__DisplayClass26_0_TypeInfo, v15);
    sub_B16FFC(&MaterialEventLogListViewItemDraw___c_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_13472/*"TUTORIAL_QUEST_ID1"*/, v17);
    sub_B16FFC(&StringLiteral_6315/*"FES_WAR_ID"*/, v18);
    sub_B16FFC(&StringLiteral_8635/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, v19);
    byte_40FCC1A = 1;
  }
  v20 = sub_B170CC(MaterialEventLogListViewItemDraw___c__DisplayClass26_0_TypeInfo, item, method, v3, v4);
  MaterialEventLogListViewItemDraw___c__DisplayClass26_0___ctor(
    (MaterialEventLogListViewItemDraw___c__DisplayClass26_0_o *)v20,
    0LL);
  if ( !v20 )
    goto LABEL_251;
  *(_QWORD *)(v20 + 16) = item;
  v27 = v20 + 16;
  sub_B16F98((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)item, v21, v22, v23, v24, v25, v26);
  mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
  if ( !mLastTimeIcon )
    goto LABEL_251;
  gameObject = UnityEngine_Component__get_gameObject(mLastTimeIcon, 0LL);
  if ( !gameObject )
    goto LABEL_251;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v34 = *(_QWORD *)v27;
  if ( !*(_QWORD *)v27 )
    return;
  v35 = *(_QWORD *)(v34 + 120);
  if ( !v35 )
    return;
  v36 = *(_DWORD *)(v34 + 112);
  if ( v36 == 1 )
  {
    v52 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v52 = BalanceConfig_TypeInfo;
    }
    v53 = MaterialEventLogListViewItemDraw___c_TypeInfo;
    MainInterludeWarIdOnMaterial = v52->static_fields->MainInterludeWarIdOnMaterial;
    if ( (BYTE3(MaterialEventLogListViewItemDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialEventLogListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw___c_TypeInfo);
      v53 = MaterialEventLogListViewItemDraw___c_TypeInfo;
    }
    static_fields = v53->static_fields;
    _9__26_0 = static_fields->__9__26_0;
    if ( !_9__26_0 )
    {
      if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v53);
        static_fields = MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields;
      }
      v57 = (Il2CppObject *)static_fields->__9;
      _9__26_0 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v30, v31, v32, v33);
      System_Func_int__bool____ctor(
        _9__26_0,
        v57,
        Method_MaterialEventLogListViewItemDraw___c__SetLastTimeIcon_b__26_0__,
        (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
      v58 = MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields;
      v58->__9__26_0 = _9__26_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v58->__9__26_0,
        (System_Int32_array **)_9__26_0,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64);
    }
    if ( BasicHelper__Any_int__25910576(
           MainInterludeWarIdOnMaterial,
           (System_Func_T__bool__o *)_9__26_0,
           (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656) )
    {
      return;
    }
    v66 = *(_QWORD *)v27;
    if ( !*(_QWORD *)v27 )
      goto LABEL_251;
    v67 = *(_QWORD *)(v66 + 120);
    if ( !v67 )
      goto LABEL_251;
    if ( *(_BYTE *)(v67 + 173) )
    {
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      }
      if ( !byte_40F9B96 )
      {
        sub_B16FFC(&MyRoomParamsManager_TypeInfo, v65);
        byte_40F9B96 = 1;
      }
      v68 = MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        v68 = MyRoomParamsManager_TypeInfo;
      }
      v66 = *(_QWORD *)v27;
      if ( !*(_QWORD *)v27 )
        goto LABEL_251;
      v67 = *(_QWORD *)(v66 + 120);
      if ( !v67 )
        goto LABEL_251;
      if ( v68->static_fields->_LastPlayMovedQuestId_k__BackingField == *(_DWORD *)(v67 + 44) )
        goto LABEL_241;
    }
    if ( *(_BYTE *)(v67 + 172) )
    {
      v69 = MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        v66 = *(_QWORD *)v27;
        if ( !*(_QWORD *)v27 )
          goto LABEL_251;
        v69 = MyRoomParamsManager_TypeInfo;
      }
      v70 = *(_QWORD *)(v66 + 120);
      if ( !v70 )
        goto LABEL_251;
      DummyFolderHistory = v69->static_fields->DummyFolderHistory;
      if ( !DummyFolderHistory )
        goto LABEL_251;
      if ( System_Collections_Generic_List_int___Contains(
             DummyFolderHistory,
             *(_DWORD *)(v70 + 40),
             (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        goto LABEL_241;
      }
    }
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    }
    if ( !byte_40F9B97 )
    {
      sub_B16FFC(&MyRoomParamsManager_TypeInfo, v65);
      byte_40F9B97 = 1;
    }
    v72 = MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v72 = MyRoomParamsManager_TypeInfo;
    }
    LastPlayQuestId_k__BackingField = v72->static_fields->_LastPlayQuestId_k__BackingField;
    if ( LastPlayQuestId_k__BackingField == ConstantMaster__getValue((System_String_o *)StringLiteral_13472/*"TUTORIAL_QUEST_ID1"*/, 0LL) )
    {
      if ( !*(_QWORD *)v27 )
        goto LABEL_251;
      v75 = *(_QWORD *)(*(_QWORD *)v27 + 120LL);
      if ( !v75 )
        goto LABEL_251;
      if ( !*(_DWORD *)(v75 + 40) )
      {
        v76 = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
        if ( !v76 )
          goto LABEL_251;
        v77 = UnityEngine_Component__get_gameObject(v76, 0LL);
        if ( !v77 )
          goto LABEL_251;
        UnityEngine_GameObject__SetActive(v77, 1, 0LL);
      }
    }
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    }
    if ( !byte_40F6977 )
    {
      sub_B16FFC(&MyRoomParamsManager_TypeInfo, v74);
      byte_40F6977 = 1;
    }
    v78 = MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v78 = MyRoomParamsManager_TypeInfo;
    }
    if ( !*(_QWORD *)v27 || (v79 = *(_QWORD *)(*(_QWORD *)v27 + 120LL)) == 0 )
LABEL_251:
      sub_B170D4();
    v80 = *(_DWORD *)(v79 + 40);
    if ( v78->static_fields->_LastPlayWarId_k__BackingField != v80 )
    {
      if ( v80 == -1 )
        return;
      if ( (BYTE3(v78->vtable._0_Equals.methodPtr) & 4) != 0 && !v78->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v78);
      if ( !byte_40F6977 )
      {
        sub_B16FFC(&MyRoomParamsManager_TypeInfo, v74);
        byte_40F6977 = 1;
      }
      v81 = MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        v81 = MyRoomParamsManager_TypeInfo;
      }
      if ( !*(_QWORD *)v27 )
        goto LABEL_251;
      v82 = *(_QWORD *)(*(_QWORD *)v27 + 120LL);
      if ( !v82 )
        goto LABEL_251;
      v83 = 1374389535LL * v81->static_fields->_LastPlayWarId_k__BackingField;
      LastSelectSubFolderId_k__BackingField = (v83 >> 37) + ((unsigned __int64)v83 >> 63);
      v85 = *(_DWORD *)(v82 + 40) / 1000 - 10;
LABEL_240:
      if ( LastSelectSubFolderId_k__BackingField != v85 )
        return;
LABEL_241:
      v116 = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
      if ( v116 )
      {
        v117 = UnityEngine_Component__get_gameObject(v116, 0LL);
        if ( v117 )
        {
          UnityEngine_GameObject__SetActive(v117, 1, 0LL);
          return;
        }
      }
      goto LABEL_251;
    }
LABEL_184:
    if ( v80 == -1 )
      return;
    goto LABEL_241;
  }
  if ( v36 == 3 )
  {
    if ( *(_DWORD *)(v35 + 36) )
    {
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      }
      if ( !byte_40F9B98 )
      {
        sub_B16FFC(&MyRoomParamsManager_TypeInfo, v30);
        byte_40F9B98 = 1;
      }
      v86 = MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        v86 = MyRoomParamsManager_TypeInfo;
      }
      if ( !*(_QWORD *)v27 )
        goto LABEL_251;
      v87 = *(_QWORD *)(*(_QWORD *)v27 + 120LL);
      if ( !v87 )
        goto LABEL_251;
      if ( v86->static_fields->_LastPlayEventId_k__BackingField == *(_DWORD *)(v87 + 36) )
      {
        v88 = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
        if ( !v88 )
          goto LABEL_251;
        v89 = UnityEngine_Component__get_gameObject(v88, 0LL);
        if ( !v89 )
          goto LABEL_251;
        UnityEngine_GameObject__SetActive(v89, 1, 0LL);
      }
    }
    v90 = MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v90 = MyRoomParamsManager_TypeInfo;
    }
    if ( !*(_QWORD *)v27 )
      goto LABEL_251;
    v91 = *(_QWORD *)(*(_QWORD *)v27 + 120LL);
    if ( !v91 )
      goto LABEL_251;
    v92 = v90->static_fields->DummyFolderHistory;
    if ( !v92 )
      goto LABEL_251;
    if ( System_Collections_Generic_List_int___Contains(
           v92,
           *(_DWORD *)(v91 + 40),
           (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      goto LABEL_241;
    }
    if ( !*(_QWORD *)v27 )
      goto LABEL_251;
    v97 = *(_QWORD *)(*(_QWORD *)v27 + 120LL);
    if ( !v97 )
      goto LABEL_251;
    if ( *(_BYTE *)(v97 + 173) )
    {
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      }
      if ( !byte_40F9B96 )
      {
        sub_B16FFC(&MyRoomParamsManager_TypeInfo, v93);
        byte_40F9B96 = 1;
      }
      v98 = MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        v98 = MyRoomParamsManager_TypeInfo;
      }
      if ( !*(_QWORD *)v27 )
        goto LABEL_251;
      v99 = *(_QWORD *)(*(_QWORD *)v27 + 120LL);
      if ( !v99 )
        goto LABEL_251;
      if ( v98->static_fields->_LastPlayMovedQuestId_k__BackingField == *(_DWORD *)(v99 + 44) )
        goto LABEL_241;
    }
    v100 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v100 = BalanceConfig_TypeInfo;
    }
    v101 = v100->static_fields->MainInterludeWarIdOnMaterial;
    v102 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v93, v94, v95, v96);
    System_Func_int__bool____ctor(
      v102,
      (Il2CppObject *)v20,
      Method_MaterialEventLogListViewItemDraw___c__DisplayClass26_0__SetLastTimeIcon_b__1__,
      (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
    if ( !BasicHelper__Any_int__25910576(
            v101,
            (System_Func_T__bool__o *)v102,
            (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656) )
      return;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    }
    if ( !byte_40F6977 )
    {
      sub_B16FFC(&MyRoomParamsManager_TypeInfo, v103);
      byte_40F6977 = 1;
    }
    v104 = MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v104 = MyRoomParamsManager_TypeInfo;
    }
    if ( !*(_QWORD *)v27 )
      goto LABEL_251;
    v105 = *(_QWORD *)(*(_QWORD *)v27 + 120LL);
    if ( !v105 )
      goto LABEL_251;
    v80 = *(_DWORD *)(v105 + 40);
    if ( v104->static_fields->_LastPlayWarId_k__BackingField != v80 )
      return;
    goto LABEL_184;
  }
  if ( v36 != 5 )
    return;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_6315/*"FES_WAR_ID"*/, 0LL);
  v39 = *(_QWORD *)v27;
  if ( !*(_QWORD *)v27 )
    goto LABEL_251;
  v40 = *(_QWORD *)(v39 + 120);
  if ( !v40 )
    goto LABEL_251;
  if ( Value != *(_DWORD *)(v40 + 40) )
  {
    if ( *(_BYTE *)(v40 + 173) )
    {
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      }
      if ( !byte_40F9B96 )
      {
        sub_B16FFC(&MyRoomParamsManager_TypeInfo, v38);
        byte_40F9B96 = 1;
      }
      v106 = MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        v106 = MyRoomParamsManager_TypeInfo;
      }
      v39 = *(_QWORD *)v27;
      if ( !*(_QWORD *)v27 )
        goto LABEL_251;
      v40 = *(_QWORD *)(v39 + 120);
      if ( !v40 )
        goto LABEL_251;
      if ( v106->static_fields->_LastPlayMovedQuestId_k__BackingField == *(_DWORD *)(v40 + 44) )
        goto LABEL_241;
    }
    if ( !*(_BYTE *)(v40 + 172) )
    {
LABEL_206:
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      }
      if ( !byte_40F9B97 )
      {
        sub_B16FFC(&MyRoomParamsManager_TypeInfo, v38);
        byte_40F9B97 = 1;
      }
      v110 = MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        v110 = MyRoomParamsManager_TypeInfo;
      }
      if ( !*(_QWORD *)v27 )
        goto LABEL_251;
      v111 = *(_QWORD *)(*(_QWORD *)v27 + 120LL);
      if ( !v111 )
        goto LABEL_251;
      if ( v110->static_fields->_LastPlayQuestId_k__BackingField == *(_DWORD *)(v111 + 44) )
      {
        if ( (BYTE3(v110->vtable._0_Equals.methodPtr) & 4) != 0 && !v110->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v110);
        if ( !byte_40F6977 )
        {
          sub_B16FFC(&MyRoomParamsManager_TypeInfo, v38);
          byte_40F6977 = 1;
        }
        v110 = MyRoomParamsManager_TypeInfo;
        if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
          v110 = MyRoomParamsManager_TypeInfo;
        }
        if ( !*(_QWORD *)v27 )
          goto LABEL_251;
        v112 = *(_QWORD *)(*(_QWORD *)v27 + 120LL);
        if ( !v112 )
          goto LABEL_251;
        v113 = *(_DWORD *)(v112 + 40);
        if ( v110->static_fields->_LastPlayWarId_k__BackingField == v113 && v113 != -1 )
          goto LABEL_241;
      }
      if ( (BYTE3(v110->vtable._0_Equals.methodPtr) & 4) != 0 && !v110->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v110);
      if ( !byte_40F9B9A )
      {
        sub_B16FFC(&MyRoomParamsManager_TypeInfo, v38);
        byte_40F9B9A = 1;
      }
      v114 = MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        v114 = MyRoomParamsManager_TypeInfo;
      }
      if ( !*(_QWORD *)v27 )
        goto LABEL_251;
      v115 = *(_QWORD *)(*(_QWORD *)v27 + 120LL);
      if ( !v115 )
        goto LABEL_251;
      v85 = *(_DWORD *)(v115 + 44);
      LastSelectSubFolderId_k__BackingField = v114->static_fields->_LastSelectSubFolderId_k__BackingField;
      goto LABEL_240;
    }
    v107 = MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v39 = *(_QWORD *)v27;
      if ( !*(_QWORD *)v27 )
        goto LABEL_251;
      v107 = MyRoomParamsManager_TypeInfo;
    }
    v108 = *(_QWORD *)(v39 + 120);
    if ( v108 )
    {
      v109 = v107->static_fields->DummyFolderHistory;
      if ( v109 )
      {
        if ( System_Collections_Generic_List_int___Contains(
               v109,
               *(_DWORD *)(v108 + 40),
               (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          goto LABEL_241;
        }
        goto LABEL_206;
      }
    }
    goto LABEL_251;
  }
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  }
  if ( !byte_40F9B97 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v38);
    byte_40F9B97 = 1;
  }
  v41 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v41 = MyRoomParamsManager_TypeInfo;
  }
  if ( !*(_QWORD *)v27 )
    goto LABEL_251;
  v42 = *(_QWORD *)(*(_QWORD *)v27 + 120LL);
  if ( !v42 )
    goto LABEL_251;
  if ( v41->static_fields->_LastPlayQuestId_k__BackingField == *(_DWORD *)(v42 + 44) )
  {
    if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v41);
    if ( !byte_40F6977 )
    {
      sub_B16FFC(&MyRoomParamsManager_TypeInfo, v38);
      byte_40F6977 = 1;
    }
    v43 = MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v43 = MyRoomParamsManager_TypeInfo;
    }
    if ( !*(_QWORD *)v27 )
      goto LABEL_251;
    v44 = *(_QWORD *)(*(_QWORD *)v27 + 120LL);
    if ( !v44 )
      goto LABEL_251;
    v45 = *(_DWORD *)(v44 + 40);
    if ( v43->static_fields->_LastPlayWarId_k__BackingField == v45 && v45 != -1 )
    {
      if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v43);
      if ( !byte_40F9B99 )
      {
        sub_B16FFC(&MyRoomParamsManager_TypeInfo, v38);
        byte_40F9B99 = 1;
      }
      v46 = MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        v46 = MyRoomParamsManager_TypeInfo;
      }
      LastPlayTitle_k__BackingField = v46->static_fields->_LastPlayTitle_k__BackingField;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v48 = LocalizationManager__Get((System_String_o *)StringLiteral_8635/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
      if ( System_String__op_Equality(LastPlayTitle_k__BackingField, v48, 0LL) )
      {
        if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        }
        if ( !byte_40F9B99 )
        {
          sub_B16FFC(&MyRoomParamsManager_TypeInfo, v49);
          byte_40F9B99 = 1;
        }
        v50 = MyRoomParamsManager_TypeInfo;
        if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
          v50 = MyRoomParamsManager_TypeInfo;
        }
        if ( !*(_QWORD *)v27 )
          goto LABEL_251;
        v51 = *(_QWORD *)(*(_QWORD *)v27 + 120LL);
        if ( !v51 )
          goto LABEL_251;
        if ( !System_String__op_Equality(
                v50->static_fields->_LastPlayTitle_k__BackingField,
                *(System_String_o **)(v51 + 16),
                0LL) )
          return;
        goto LABEL_241;
      }
      if ( !*(_QWORD *)v27 )
        goto LABEL_251;
      v118 = *(_QWORD *)(*(_QWORD *)v27 + 120LL);
      if ( !v118 )
        goto LABEL_251;
      v119 = *(System_String_o **)(v118 + 16);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v120 = LocalizationManager__Get((System_String_o *)StringLiteral_8635/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
      if ( System_String__op_Inequality(v119, v120, 0LL) )
        goto LABEL_241;
    }
  }
}


void __fastcall MaterialEventLogListViewItemDraw___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F6967 & 1) == 0 )
  {
    sub_B16FFC(&MaterialEventLogListViewItemDraw___c_TypeInfo, v1);
    byte_40F6967 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(MaterialEventLogListViewItemDraw___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall MaterialEventLogListViewItemDraw___c___ctor(
        MaterialEventLogListViewItemDraw___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MaterialEventLogListViewItemDraw___c___SetLastTimeIcon_b__26_0(
        MaterialEventLogListViewItemDraw___c_o *this,
        int32_t interludeWarId,
        const MethodInfo *method)
{
  MyRoomParamsManager_c *v4; // x0

  if ( (byte_40F6968 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&interludeWarId);
    byte_40F6968 = 1;
  }
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  }
  if ( !byte_40F6977 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&interludeWarId);
    byte_40F6977 = 1;
  }
  v4 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  return v4->static_fields->_LastPlayWarId_k__BackingField == interludeWarId;
}


void __fastcall MaterialEventLogListViewItemDraw___c__DisplayClass26_0___ctor(
        MaterialEventLogListViewItemDraw___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MaterialEventLogListViewItemDraw___c__DisplayClass26_0___SetLastTimeIcon_b__1(
        MaterialEventLogListViewItemDraw___c__DisplayClass26_0_o *this,
        int32_t interludeWarId,
        const MethodInfo *method)
{
  struct MaterialEventLogListViewItem_o *item; // x8
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8

  item = this->fields.item;
  if ( !item || (info_k__BackingField = item->fields._info_k__BackingField) == 0LL )
    sub_B170D4();
  return info_k__BackingField->fields.war_id == interludeWarId;
}