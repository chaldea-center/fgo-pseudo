void __fastcall MaterialEventLogListViewItemDraw___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct MaterialEventLogListViewItemDraw_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  MaterialEventLogListViewItemDraw_c *v17; // x8

  if ( (byte_4355770 & 1) == 0 )
  {
    sub_B70694(&MaterialEventLogListViewItemDraw_TypeInfo);
    sub_B70694(&StringLiteral_19839/*"img_menuboard_03"*/);
    sub_B70694(&StringLiteral_19838/*"img_menuboard_01"*/);
    byte_4355770 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_19838/*"img_menuboard_01"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19838/*"img_menuboard_01"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_19839/*"img_menuboard_03"*/;
  v9->BASE_SP_NAME_SVT = (struct System_String_o *)StringLiteral_19839/*"img_menuboard_03"*/;
  sub_B70630((BattleServantConfConponent_o *)&v9->BASE_SP_NAME_SVT, v10, v11, v12, v13, v14, v15, v16);
  v17 = MaterialEventLogListViewItemDraw_TypeInfo;
  MaterialEventLogListViewItemDraw_TypeInfo->static_fields->LABEL_X_DEFAULT = 2.0;
  v17->static_fields->LABEL_X_SVT = 44.0;
  v17->static_fields->LABEL_W_DEFAULT = 418;
  v17->static_fields->LABEL_W_CONDENSED = 400;
  v17->static_fields->LABEL_W_SVT = 330;
  v17->static_fields->LABEL_MAX_LINE_DEFAULT = 2;
  v17->static_fields->LABEL_MAX_LINE_SVT = 1;
  v17->static_fields->LABEL_MAX_LINE_MAP = 1;
  v17->static_fields->FACE_MASK_SP_W = 115;
  v17->static_fields->LABEL_W_NOT_SELECT = 400;
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
    sub_B7076C(0LL, method);
  return !UnityEngine_GameObject__get_activeSelf(notSelectObj, 0LL);
}


void __fastcall MaterialEventLogListViewItemDraw__LateUpdateItem(
        MaterialEventLogListViewItemDraw_o *this,
        MaterialEventLogListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  struct UISprite_o *mBaseSp; // x8
  MaterialEventLogListViewItemDraw_o *v5; // x19
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( item && mode && item->fields._info_k__BackingField )
  {
    mBaseSp = this->fields.mBaseSp;
    v5 = this;
    if ( !mBaseSp )
      goto LABEL_9;
    this = (MaterialEventLogListViewItemDraw_o *)this->fields.mFaceIcon;
    if ( !this )
      goto LABEL_9;
    r = mBaseSp->fields.mColor.fields.r;
    g = mBaseSp->fields.mColor.fields.g;
    b = mBaseSp->fields.mColor.fields.b;
    a = mBaseSp->fields.mColor.fields.a;
    v10.fields.r = r;
    v10.fields.g = g;
    v10.fields.b = b;
    v10.fields.a = a;
    ItemIconComponent__SetColor((ItemIconComponent_o *)this, v10, 0LL);
    this = (MaterialEventLogListViewItemDraw_o *)v5->fields.mFaceMaskSp;
    if ( !this )
LABEL_9:
      sub_B7076C(this, item);
    v11.fields.r = r;
    v11.fields.g = g;
    v11.fields.b = b;
    v11.fields.a = a;
    UIWidget__set_color((UIWidget_o *)this, v11, 0LL);
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
    sub_B7076C(0LL, isSelect);
  UnityEngine_GameObject__SetActive(notSelectObj, !isSelect, 0LL);
}


void __fastcall MaterialEventLogListViewItemDraw__SetFaceImage(
        MaterialEventLogListViewItemDraw_o *this,
        MaterialEventLogListViewItem_o *item,
        bool is_disp,
        const MethodInfo *method)
{
  MaterialEventLogListViewItemDraw_o **v6; // x19
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x21
  MaterialEventLogListViewItemDraw_o *v8; // x19

  v6 = (MaterialEventLogListViewItemDraw_o **)this;
  if ( (byte_435576E & 1) == 0 )
  {
    this = (MaterialEventLogListViewItemDraw_o *)sub_B70694(&MaterialEventLogListViewItemDraw_TypeInfo);
    byte_435576E = 1;
  }
  if ( !item )
    goto LABEL_15;
  this = v6[5];
  if ( !this )
    goto LABEL_15;
  info_k__BackingField = item->fields._info_k__BackingField;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, is_disp, 0LL);
  if ( !is_disp )
    return;
  if ( !info_k__BackingField )
    goto LABEL_15;
  this = v6[6];
  if ( !this )
    goto LABEL_15;
  ItemIconComponent__SetFaceImage(
    (ItemIconComponent_o *)this,
    info_k__BackingField->fields.svt_id,
    info_k__BackingField->fields.limit_count,
    -1,
    1,
    0,
    0LL);
  this = v6[7];
  if ( !this )
    goto LABEL_15;
  this = (MaterialEventLogListViewItemDraw_o *)UISprite__GetAtlasSprite((UISprite_o *)this, 0LL);
  v8 = this;
  if ( (BYTE3(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
  }
  if ( !v8 )
LABEL_15:
    sub_B7076C(this, item);
  LODWORD(v8->fields.mLabel) = MaterialEventLogListViewItemDraw_TypeInfo->static_fields->FACE_MASK_SP_W - 1;
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
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x25
  UnityEngine_GameObject_o *v10; // x22
  __int64 v11; // x1
  int32_t flag; // w26
  UISprite_o *mBaseSp; // x22
  UILabel_o *mLabel; // x0
  System_String_o **p_monitor; // x8
  UnityEngine_GameObject_o *gameObject; // x19
  MaterialEventLogListViewItemDraw_c *v17; // x0
  struct MaterialEventLogListViewItemDraw_StaticFields *static_fields; // x8
  float LABEL_X_SVT; // s8
  int32_t LABEL_W_SVT; // w22
  struct MaterialEventLogListViewItemDraw_StaticFields *v21; // x8
  int32_t *p_LABEL_MAX_LINE_SVT; // x8
  int32_t v23; // w23
  struct MaterialEventLogListViewItem_Info_o *v24; // x8
  struct UILabel_o *v25; // x23
  System_String_o *mText; // x24
  System_String_o *v27; // x0
  System_String_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x23
  VoiceMaterialCondMaster_o *v32; // x22
  System_String_o *v33; // x0
  int32_t svtVoiceId; // w24
  int32_t voicePrefix; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v36; // x25
  struct MaterialEventLogListViewItem_Info_o *v37; // x8
  struct MaterialEventLogListViewItem_Info_o *v38; // x8
  bool v39; // w1
  struct MaterialEventLogListViewItem_Info_o *v40; // x8
  struct MaterialEventLogListViewItem_Info_o *v41; // x8
  struct MaterialEventLogListViewItem_Info_o *v42; // x8
  UILabel_o *notSelectLabel; // x21
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x2
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_435576D & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_VoiceMaterialCondMaster___);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&MaterialEventLogListViewItemDraw_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_8772/*"MATERIAL_PROGRESS_SUFFIX"*/);
    byte_435576D = 1;
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
      v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      one = UnityEngine_Vector3__get_one(0LL);
      GameObjectExtensions__SetLocalScale(v10, one, 0LL);
      flag = info_k__BackingField->fields.flag;
      mBaseSp = this->fields.mBaseSp;
      mLabel = (UILabel_o *)MaterialEventLogListViewItemDraw_TypeInfo;
      if ( (flag & 2) != 0 )
      {
        if ( (WORD1(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
          mLabel = (UILabel_o *)MaterialEventLogListViewItemDraw_TypeInfo;
        }
        p_monitor = (System_String_o **)&mLabel->fields.onPostFill->monitor;
        if ( !mBaseSp )
          goto LABEL_90;
      }
      else
      {
        if ( (WORD1(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
          mLabel = (UILabel_o *)MaterialEventLogListViewItemDraw_TypeInfo;
        }
        p_monitor = (System_String_o **)mLabel->fields.onPostFill;
        if ( !mBaseSp )
          goto LABEL_90;
      }
      UISprite__set_spriteName(mBaseSp, *p_monitor, 0LL);
      mLabel = (UILabel_o *)this->fields.mBaseSp;
      if ( !mLabel )
        goto LABEL_90;
      ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))mLabel->klass->vtable._33_MakePixelPerfect.method)(
        mLabel,
        mLabel->klass->vtable._34_get_minWidth.methodPtr);
      mLabel = this->fields.mLabel;
      if ( !mLabel )
        goto LABEL_90;
      UILabel__set_fontSize(mLabel, info_k__BackingField->fields.font_size, 0LL);
      v17 = MaterialEventLogListViewItemDraw_TypeInfo;
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
            if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v17);
              v17 = MaterialEventLogListViewItemDraw_TypeInfo;
            }
            p_LABEL_MAX_LINE_SVT = &v17->static_fields->LABEL_MAX_LINE_MAP;
          }
          mLabel = this->fields.mLabel;
          if ( mLabel )
          {
            v23 = *p_LABEL_MAX_LINE_SVT;
            UILabel__set_overflowMethod(mLabel, 2, 0LL);
            mLabel = this->fields.mLabel;
            if ( mLabel )
            {
              UILabel__set_maxLineCount(mLabel, v23, 0LL);
              mLabel = this->fields.mLabel;
              if ( mLabel )
              {
                UILabel__set_text(mLabel, info_k__BackingField->fields.str, 0LL);
                if ( (flag & 2) == 0
                  && !info_k__BackingField->fields.isMovedQuest
                  && item->fields._kind_k__BackingField == 5 )
                {
                  v24 = item->fields._info_k__BackingField;
                  if ( !v24 )
                    goto LABEL_90;
                  if ( v24->fields.clear_phase_max < v24->fields.phase_max )
                  {
                    v25 = this->fields.mLabel;
                    if ( !v25 )
                      goto LABEL_90;
                    mText = v25->fields.mText;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_8772/*"MATERIAL_PROGRESS_SUFFIX"*/, 0LL);
                    v28 = System_String__Concat_44758168(mText, v27, 0LL);
                    UILabel__set_text(v25, v28, 0LL);
                  }
                }
                mLabel = this->fields.mLabel;
                if ( mLabel )
                {
                  v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mLabel, 0LL);
                  GameObjectExtensions__SetLocalPositionX(v29, LABEL_X_SVT, 0LL);
                  mLabel = this->fields.mLabel;
                  if ( mLabel )
                  {
                    UILabel__SetCondensedScale(mLabel, LABEL_W_SVT, 0LL);
                    mLabel = (UILabel_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( mLabel )
                    {
                      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)mLabel,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_VoiceMaterialCondMaster___);
                      voiceId = info_k__BackingField->fields.voiceId;
                      v32 = (VoiceMaterialCondMaster_o *)MasterData_WarQuestSelectionMaster;
                      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                      }
                      v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_45218448(voiceId, 0LL);
                      mLabel = (UILabel_o *)System_String__IsNullOrEmpty(v33, 0LL);
                      if ( ((unsigned __int8)mLabel & 1) != 0 )
                        goto LABEL_75;
                      svtVoiceId = info_k__BackingField->fields.svtVoiceId;
                      voicePrefix = info_k__BackingField->fields.voicePrefix;
                      v36 = info_k__BackingField->fields.voiceId;
                      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                      }
                      mLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_45218448(
                                              v36,
                                              0LL);
                      if ( !v32 )
                        goto LABEL_90;
                      mLabel = (UILabel_o *)VoiceMaterialCondMaster__IsVoicePlay(
                                              v32,
                                              svtVoiceId,
                                              voicePrefix,
                                              (System_String_o *)mLabel,
                                              limitCount,
                                              0LL);
                      if ( ((unsigned __int8)mLabel & 1) != 0 )
                      {
LABEL_75:
                        v37 = item->fields._info_k__BackingField;
                        if ( !v37 )
                          goto LABEL_90;
                        v37->fields.flag &= ~1u;
                        v38 = item->fields._info_k__BackingField;
                        if ( !v38 )
                          goto LABEL_90;
                        v38->fields.flag &= ~4u;
                        mLabel = (UILabel_o *)this->fields.notSelectObj;
                        if ( !mLabel )
                          goto LABEL_90;
                        v39 = 0;
                      }
                      else
                      {
                        v40 = item->fields._info_k__BackingField;
                        if ( !v40 )
                          goto LABEL_90;
                        v40->fields.flag |= 1u;
                        v41 = item->fields._info_k__BackingField;
                        if ( !v41 )
                          goto LABEL_90;
                        v41->fields.flag |= 4u;
                        mLabel = (UILabel_o *)this->fields.notSelectObj;
                        if ( !mLabel )
                          goto LABEL_90;
                        v39 = 1;
                      }
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLabel, v39, 0LL);
                      v42 = item->fields._info_k__BackingField;
                      if ( !v42 )
                        goto LABEL_90;
                      mLabel = this->fields.notSelectLabel;
                      if ( !mLabel )
                        goto LABEL_90;
                      UILabel__set_text(mLabel, v42->fields.playLimitCountMessage, 0LL);
                      mLabel = (UILabel_o *)MaterialEventLogListViewItemDraw_TypeInfo;
                      notSelectLabel = this->fields.notSelectLabel;
                      if ( (BYTE3(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
                      }
                      if ( !notSelectLabel )
                        goto LABEL_90;
                      UILabel__SetCondensedScale(
                        notSelectLabel,
                        MaterialEventLogListViewItemDraw_TypeInfo->static_fields->LABEL_W_NOT_SELECT,
                        0LL);
                      MaterialEventLogListViewItemDraw__SetFaceImage(this, item, (flag & 2) != 0, v44);
                      MaterialEventLogListViewItemDraw__SetLastTimeIcon(this, item, v45);
                      return;
                    }
                  }
                }
              }
            }
          }
LABEL_90:
          sub_B7076C(mLabel, v11);
        }
        if ( MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          LABEL_X_SVT = static_fields->LABEL_X_SVT;
        }
        else
        {
          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
          v17 = MaterialEventLogListViewItemDraw_TypeInfo;
          static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          LABEL_X_SVT = static_fields->LABEL_X_SVT;
          if ( (BYTE3(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
            goto LABEL_23;
        }
        if ( v17->_2.cctor_finished )
        {
          LABEL_W_SVT = static_fields->LABEL_W_SVT;
        }
        else
        {
          j_il2cpp_runtime_class_init_0(v17);
          v17 = MaterialEventLogListViewItemDraw_TypeInfo;
          static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          LABEL_W_SVT = static_fields->LABEL_W_SVT;
          if ( (BYTE3(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
            goto LABEL_40;
        }
        if ( !v17->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v17);
          v17 = MaterialEventLogListViewItemDraw_TypeInfo;
          static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
        }
        goto LABEL_40;
      }
      if ( (WORD1(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
      {
        v21 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
        LABEL_X_SVT = v21->LABEL_X_DEFAULT;
LABEL_26:
        LABEL_W_SVT = v21->LABEL_W_CONDENSED;
LABEL_44:
        p_LABEL_MAX_LINE_SVT = &v21->LABEL_MAX_LINE_DEFAULT;
        goto LABEL_45;
      }
      if ( MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        v21 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
        LABEL_X_SVT = v21->LABEL_X_DEFAULT;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
        v17 = MaterialEventLogListViewItemDraw_TypeInfo;
        v21 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
        LABEL_X_SVT = v21->LABEL_X_DEFAULT;
        if ( (BYTE3(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
          goto LABEL_26;
      }
      if ( v17->_2.cctor_finished )
      {
        LABEL_W_SVT = v21->LABEL_W_CONDENSED;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = MaterialEventLogListViewItemDraw_TypeInfo;
        v21 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
        LABEL_W_SVT = v21->LABEL_W_CONDENSED;
        if ( (BYTE3(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
          goto LABEL_44;
      }
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = MaterialEventLogListViewItemDraw_TypeInfo;
        v21 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
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
  __int64 v5; // x21
  UnityEngine_Component_o *mLastTimeIcon; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x20
  __int64 v15; // x9
  __int64 v16; // x8
  int v17; // w9
  __int64 v18; // x8
  __int64 v19; // x9
  __int64 v20; // x8
  __int64 v21; // x8
  int v22; // w8
  MyRoomParamsManager_c *v23; // x0
  System_String_o *LastPlayTitle_k__BackingField; // x21
  System_String_o *v25; // x0
  __int64 v26; // x8
  BalanceConfig_c *v27; // x8
  MaterialEventLogListViewItemDraw___c_c *v28; // x0
  System_Int32_array *MainInterludeWarIdOnMaterial; // x21
  struct MaterialEventLogListViewItemDraw___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__26_0; // x22
  Il2CppObject *v32; // x23
  struct MaterialEventLogListViewItemDraw___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x8
  __int64 v41; // x9
  __int64 v42; // x8
  MyRoomParamsManager_c *v43; // x0
  int32_t LastPlayQuestId_k__BackingField; // w22
  __int64 v45; // x8
  __int64 v46; // x8
  int v47; // w8
  __int64 v48; // x8
  __int64 v49; // x9
  int v50; // w9
  int v51; // w8
  __int64 v52; // x8
  __int64 v53; // x8
  __int64 v54; // x8
  __int64 v55; // x8
  BalanceConfig_c *v56; // x0
  System_Int32_array *v57; // x22
  System_Func_int__bool__o *v58; // x23
  __int64 v59; // x8
  __int64 v60; // x8
  __int64 v61; // x8
  __int64 v62; // x8
  int v63; // w8
  __int64 v64; // x8
  __int64 v65; // x8
  System_String_o *v66; // x20
  System_String_o *v67; // x0

  if ( (byte_435576F & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_BasicHelper_Any_int____69235616);
    sub_B70694(&Method_System_Func_int__bool___ctor__);
    sub_B70694(&System_Func_int__bool__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    sub_B70694(&Method_MaterialEventLogListViewItemDraw___c__SetLastTimeIcon_b__26_0__);
    sub_B70694(&Method_MaterialEventLogListViewItemDraw___c__DisplayClass26_0__SetLastTimeIcon_b__1__);
    sub_B70694(&MaterialEventLogListViewItemDraw___c__DisplayClass26_0_TypeInfo);
    sub_B70694(&MaterialEventLogListViewItemDraw___c_TypeInfo);
    sub_B70694(&StringLiteral_13712/*"TUTORIAL_QUEST_ID1"*/);
    sub_B70694(&StringLiteral_6425/*"FES_WAR_ID"*/);
    sub_B70694(&StringLiteral_8769/*"MATERIAL_MAP_EPILOGUE_TITLE"*/);
    byte_435576F = 1;
  }
  v5 = sub_B70764(MaterialEventLogListViewItemDraw___c__DisplayClass26_0_TypeInfo);
  MaterialEventLogListViewItemDraw___c__DisplayClass26_0___ctor(
    (MaterialEventLogListViewItemDraw___c__DisplayClass26_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_251;
  *(_QWORD *)(v5 + 16) = item;
  v14 = v5 + 16;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)item, v8, v9, v10, v11, v12, v13);
  mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
  if ( !mLastTimeIcon )
    goto LABEL_251;
  mLastTimeIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mLastTimeIcon, 0LL);
  if ( !mLastTimeIcon )
    goto LABEL_251;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 0, 0LL);
  v15 = *(_QWORD *)v14;
  if ( !*(_QWORD *)v14 )
    return;
  v16 = *(_QWORD *)(v15 + 120);
  if ( !v16 )
    return;
  v17 = *(_DWORD *)(v15 + 112);
  if ( v17 == 1 )
  {
    v27 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v27 = BalanceConfig_TypeInfo;
    }
    v28 = MaterialEventLogListViewItemDraw___c_TypeInfo;
    MainInterludeWarIdOnMaterial = v27->static_fields->MainInterludeWarIdOnMaterial;
    if ( (BYTE3(MaterialEventLogListViewItemDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialEventLogListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw___c_TypeInfo);
      v28 = MaterialEventLogListViewItemDraw___c_TypeInfo;
    }
    static_fields = v28->static_fields;
    _9__26_0 = static_fields->__9__26_0;
    if ( !_9__26_0 )
    {
      if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        static_fields = MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields;
      }
      v32 = (Il2CppObject *)static_fields->__9;
      _9__26_0 = (System_Func_int__bool__o *)sub_B70764(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        _9__26_0,
        v32,
        Method_MaterialEventLogListViewItemDraw___c__SetLastTimeIcon_b__26_0__,
        (const MethodInfo_29A62E8 *)Method_System_Func_int__bool___ctor__);
      v33 = MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields;
      v33->__9__26_0 = _9__26_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v33->__9__26_0,
        (System_Int32_array **)_9__26_0,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
    }
    mLastTimeIcon = (UnityEngine_Component_o *)BasicHelper__Any_int__29214704(
                                                 MainInterludeWarIdOnMaterial,
                                                 (System_Func_T__bool__o *)_9__26_0,
                                                 (const MethodInfo_1BDC7F0 *)Method_BasicHelper_Any_int____69235616);
    if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
      return;
    v40 = *(_QWORD *)v14;
    if ( !*(_QWORD *)v14 )
      goto LABEL_251;
    v41 = *(_QWORD *)(v40 + 120);
    if ( !v41 )
      goto LABEL_251;
    if ( *(_BYTE *)(v41 + 181) )
    {
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      }
      if ( !byte_4351CD6 )
      {
        sub_B70694(&MyRoomParamsManager_TypeInfo);
        byte_4351CD6 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v40 = *(_QWORD *)v14;
      if ( !*(_QWORD *)v14 )
        goto LABEL_251;
      v41 = *(_QWORD *)(v40 + 120);
      if ( !v41 )
        goto LABEL_251;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 56LL) == *(_DWORD *)(v41 + 44) )
        goto LABEL_241;
    }
    if ( *(_BYTE *)(v41 + 180) )
    {
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        v40 = *(_QWORD *)v14;
        if ( !*(_QWORD *)v14 )
          goto LABEL_251;
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v42 = *(_QWORD *)(v40 + 120);
      if ( !v42 )
        goto LABEL_251;
      mLastTimeIcon = *(UnityEngine_Component_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 40LL);
      if ( !mLastTimeIcon )
        goto LABEL_251;
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)mLastTimeIcon,
             *(_DWORD *)(v42 + 40),
             (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        goto LABEL_241;
      }
    }
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    }
    if ( !byte_4351CD7 )
    {
      sub_B70694(&MyRoomParamsManager_TypeInfo);
      byte_4351CD7 = 1;
    }
    v43 = MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v43 = MyRoomParamsManager_TypeInfo;
    }
    LastPlayQuestId_k__BackingField = v43->static_fields->_LastPlayQuestId_k__BackingField;
    mLastTimeIcon = (UnityEngine_Component_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_13712/*"TUTORIAL_QUEST_ID1"*/, 0LL);
    if ( LastPlayQuestId_k__BackingField == (_DWORD)mLastTimeIcon )
    {
      if ( !*(_QWORD *)v14 )
        goto LABEL_251;
      v45 = *(_QWORD *)(*(_QWORD *)v14 + 120LL);
      if ( !v45 )
        goto LABEL_251;
      if ( !*(_DWORD *)(v45 + 40) )
      {
        mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
        if ( !mLastTimeIcon )
          goto LABEL_251;
        mLastTimeIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mLastTimeIcon, 0LL);
        if ( !mLastTimeIcon )
          goto LABEL_251;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 1, 0LL);
      }
    }
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    }
    if ( !byte_434F41D )
    {
      sub_B70694(&MyRoomParamsManager_TypeInfo);
      byte_434F41D = 1;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !*(_QWORD *)v14 || (v46 = *(_QWORD *)(*(_QWORD *)v14 + 120LL)) == 0 )
LABEL_251:
      sub_B7076C(mLastTimeIcon, v7);
    v47 = *(_DWORD *)(v46 + 40);
    if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) != v47 )
    {
      if ( v47 == -1 )
        return;
      if ( (mLastTimeIcon[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(mLastTimeIcon[9].monitor) )
        j_il2cpp_runtime_class_init_0(mLastTimeIcon);
      if ( !byte_434F41D )
      {
        sub_B70694(&MyRoomParamsManager_TypeInfo);
        byte_434F41D = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !*(_QWORD *)v14 )
        goto LABEL_251;
      v48 = *(_QWORD *)(*(_QWORD *)v14 + 120LL);
      if ( !v48 )
        goto LABEL_251;
      v49 = 1374389535LL * *(int *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL);
      v50 = (v49 >> 37) + ((unsigned __int64)v49 >> 63);
      v51 = *(_DWORD *)(v48 + 40) / 1000 - 10;
LABEL_240:
      if ( v50 != v51 )
        return;
LABEL_241:
      mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
      if ( mLastTimeIcon )
      {
        mLastTimeIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mLastTimeIcon, 0LL);
        if ( mLastTimeIcon )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 1, 0LL);
          return;
        }
      }
      goto LABEL_251;
    }
LABEL_184:
    if ( v47 == -1 )
      return;
    goto LABEL_241;
  }
  if ( v17 == 3 )
  {
    if ( *(_DWORD *)(v16 + 36) )
    {
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      }
      if ( !byte_4351CD8 )
      {
        sub_B70694(&MyRoomParamsManager_TypeInfo);
        byte_4351CD8 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !*(_QWORD *)v14 )
        goto LABEL_251;
      v52 = *(_QWORD *)(*(_QWORD *)v14 + 120LL);
      if ( !v52 )
        goto LABEL_251;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 20LL) == *(_DWORD *)(v52 + 36) )
      {
        mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
        if ( !mLastTimeIcon )
          goto LABEL_251;
        mLastTimeIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mLastTimeIcon, 0LL);
        if ( !mLastTimeIcon )
          goto LABEL_251;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 1, 0LL);
      }
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !*(_QWORD *)v14 )
      goto LABEL_251;
    v53 = *(_QWORD *)(*(_QWORD *)v14 + 120LL);
    if ( !v53 )
      goto LABEL_251;
    mLastTimeIcon = *(UnityEngine_Component_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 40LL);
    if ( !mLastTimeIcon )
      goto LABEL_251;
    mLastTimeIcon = (UnityEngine_Component_o *)System_Collections_Generic_List_int___Contains(
                                                 (System_Collections_Generic_List_int__o *)mLastTimeIcon,
                                                 *(_DWORD *)(v53 + 40),
                                                 (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
      goto LABEL_241;
    if ( !*(_QWORD *)v14 )
      goto LABEL_251;
    v54 = *(_QWORD *)(*(_QWORD *)v14 + 120LL);
    if ( !v54 )
      goto LABEL_251;
    if ( *(_BYTE *)(v54 + 181) )
    {
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      }
      if ( !byte_4351CD6 )
      {
        sub_B70694(&MyRoomParamsManager_TypeInfo);
        byte_4351CD6 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !*(_QWORD *)v14 )
        goto LABEL_251;
      v55 = *(_QWORD *)(*(_QWORD *)v14 + 120LL);
      if ( !v55 )
        goto LABEL_251;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 56LL) == *(_DWORD *)(v55 + 44) )
        goto LABEL_241;
    }
    v56 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v56 = BalanceConfig_TypeInfo;
    }
    v57 = v56->static_fields->MainInterludeWarIdOnMaterial;
    v58 = (System_Func_int__bool__o *)sub_B70764(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v58,
      (Il2CppObject *)v5,
      Method_MaterialEventLogListViewItemDraw___c__DisplayClass26_0__SetLastTimeIcon_b__1__,
      (const MethodInfo_29A62E8 *)Method_System_Func_int__bool___ctor__);
    if ( !BasicHelper__Any_int__29214704(
            v57,
            (System_Func_T__bool__o *)v58,
            (const MethodInfo_1BDC7F0 *)Method_BasicHelper_Any_int____69235616) )
      return;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    }
    if ( !byte_434F41D )
    {
      sub_B70694(&MyRoomParamsManager_TypeInfo);
      byte_434F41D = 1;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !*(_QWORD *)v14 )
      goto LABEL_251;
    v59 = *(_QWORD *)(*(_QWORD *)v14 + 120LL);
    if ( !v59 )
      goto LABEL_251;
    v47 = *(_DWORD *)(v59 + 40);
    if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) != v47 )
      return;
    goto LABEL_184;
  }
  if ( v17 != 5 )
    return;
  mLastTimeIcon = (UnityEngine_Component_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6425/*"FES_WAR_ID"*/, 0LL);
  v18 = *(_QWORD *)v14;
  if ( !*(_QWORD *)v14 )
    goto LABEL_251;
  v19 = *(_QWORD *)(v18 + 120);
  if ( !v19 )
    goto LABEL_251;
  if ( (_DWORD)mLastTimeIcon != *(_DWORD *)(v19 + 40) )
  {
    if ( *(_BYTE *)(v19 + 181) )
    {
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      }
      if ( !byte_4351CD6 )
      {
        sub_B70694(&MyRoomParamsManager_TypeInfo);
        byte_4351CD6 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v18 = *(_QWORD *)v14;
      if ( !*(_QWORD *)v14 )
        goto LABEL_251;
      v19 = *(_QWORD *)(v18 + 120);
      if ( !v19 )
        goto LABEL_251;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 56LL) == *(_DWORD *)(v19 + 44) )
        goto LABEL_241;
    }
    if ( !*(_BYTE *)(v19 + 180) )
    {
LABEL_206:
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      }
      if ( !byte_4351CD7 )
      {
        sub_B70694(&MyRoomParamsManager_TypeInfo);
        byte_4351CD7 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !*(_QWORD *)v14 )
        goto LABEL_251;
      v61 = *(_QWORD *)(*(_QWORD *)v14 + 120LL);
      if ( !v61 )
        goto LABEL_251;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 12LL) == *(_DWORD *)(v61 + 44) )
      {
        if ( (mLastTimeIcon[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(mLastTimeIcon[9].monitor) )
          j_il2cpp_runtime_class_init_0(mLastTimeIcon);
        if ( !byte_434F41D )
        {
          sub_B70694(&MyRoomParamsManager_TypeInfo);
          byte_434F41D = 1;
        }
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
          mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        }
        if ( !*(_QWORD *)v14 )
          goto LABEL_251;
        v62 = *(_QWORD *)(*(_QWORD *)v14 + 120LL);
        if ( !v62 )
          goto LABEL_251;
        v63 = *(_DWORD *)(v62 + 40);
        if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) == v63 && v63 != -1 )
          goto LABEL_241;
      }
      if ( (mLastTimeIcon[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(mLastTimeIcon[9].monitor) )
        j_il2cpp_runtime_class_init_0(mLastTimeIcon);
      if ( !byte_4351CDA )
      {
        sub_B70694(&MyRoomParamsManager_TypeInfo);
        byte_4351CDA = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !*(_QWORD *)v14 )
        goto LABEL_251;
      v64 = *(_QWORD *)(*(_QWORD *)v14 + 120LL);
      if ( !v64 )
        goto LABEL_251;
      v51 = *(_DWORD *)(v64 + 44);
      v50 = *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 32LL);
      goto LABEL_240;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v18 = *(_QWORD *)v14;
      if ( !*(_QWORD *)v14 )
        goto LABEL_251;
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    v60 = *(_QWORD *)(v18 + 120);
    if ( v60 )
    {
      mLastTimeIcon = *(UnityEngine_Component_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 40LL);
      if ( mLastTimeIcon )
      {
        if ( System_Collections_Generic_List_int___Contains(
               (System_Collections_Generic_List_int__o *)mLastTimeIcon,
               *(_DWORD *)(v60 + 40),
               (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__) )
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
  if ( !byte_4351CD7 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    byte_4351CD7 = 1;
  }
  mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
  }
  if ( !*(_QWORD *)v14 )
    goto LABEL_251;
  v20 = *(_QWORD *)(*(_QWORD *)v14 + 120LL);
  if ( !v20 )
    goto LABEL_251;
  if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 12LL) == *(_DWORD *)(v20 + 44) )
  {
    if ( (mLastTimeIcon[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(mLastTimeIcon[9].monitor) )
      j_il2cpp_runtime_class_init_0(mLastTimeIcon);
    if ( !byte_434F41D )
    {
      sub_B70694(&MyRoomParamsManager_TypeInfo);
      byte_434F41D = 1;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !*(_QWORD *)v14 )
      goto LABEL_251;
    v21 = *(_QWORD *)(*(_QWORD *)v14 + 120LL);
    if ( !v21 )
      goto LABEL_251;
    v22 = *(_DWORD *)(v21 + 40);
    if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) == v22 && v22 != -1 )
    {
      if ( (mLastTimeIcon[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(mLastTimeIcon[9].monitor) )
        j_il2cpp_runtime_class_init_0(mLastTimeIcon);
      if ( !byte_4351CD9 )
      {
        sub_B70694(&MyRoomParamsManager_TypeInfo);
        byte_4351CD9 = 1;
      }
      v23 = MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        v23 = MyRoomParamsManager_TypeInfo;
      }
      LastPlayTitle_k__BackingField = v23->static_fields->_LastPlayTitle_k__BackingField;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_8769/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
      mLastTimeIcon = (UnityEngine_Component_o *)System_String__op_Equality(LastPlayTitle_k__BackingField, v25, 0LL);
      if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
      {
        if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        }
        if ( !byte_4351CD9 )
        {
          sub_B70694(&MyRoomParamsManager_TypeInfo);
          byte_4351CD9 = 1;
        }
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
          mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        }
        if ( !*(_QWORD *)v14 )
          goto LABEL_251;
        v26 = *(_QWORD *)(*(_QWORD *)v14 + 120LL);
        if ( !v26 )
          goto LABEL_251;
        if ( !System_String__op_Equality(
                *(System_String_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 24LL),
                *(System_String_o **)(v26 + 16),
                0LL) )
          return;
        goto LABEL_241;
      }
      if ( !*(_QWORD *)v14 )
        goto LABEL_251;
      v65 = *(_QWORD *)(*(_QWORD *)v14 + 120LL);
      if ( !v65 )
        goto LABEL_251;
      v66 = *(System_String_o **)(v65 + 16);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v67 = LocalizationManager__Get((System_String_o *)StringLiteral_8769/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
      if ( System_String__op_Inequality(v66, v67, 0LL) )
        goto LABEL_241;
    }
  }
}


void __fastcall MaterialEventLogListViewItemDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct MaterialEventLogListViewItemDraw___c_StaticFields *static_fields; // x0

  if ( (byte_434F3E2 & 1) == 0 )
  {
    sub_B70694(&MaterialEventLogListViewItemDraw___c_TypeInfo);
    byte_434F3E2 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(MaterialEventLogListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MaterialEventLogListViewItemDraw___c_o *)v1;
  sub_B70630(static_fields);
}


void __fastcall MaterialEventLogListViewItemDraw___c___ctor(
        MaterialEventLogListViewItemDraw___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MaterialEventLogListViewItemDraw___c___SetLastTimeIcon_b__26_0(
        MaterialEventLogListViewItemDraw___c_o *this,
        int32_t interludeWarId,
        const MethodInfo *method)
{
  MyRoomParamsManager_c *v4; // x0

  if ( (byte_434F3E3 & 1) == 0 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    byte_434F3E3 = 1;
  }
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  }
  if ( !byte_434F41D )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    byte_434F41D = 1;
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
    sub_B7076C(this, interludeWarId);
  return info_k__BackingField->fields.war_id == interludeWarId;
}