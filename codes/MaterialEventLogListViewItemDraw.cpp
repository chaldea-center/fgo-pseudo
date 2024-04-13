void __fastcall MaterialEventLogListViewItemDraw___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v15; // x1
  struct MaterialEventLogListViewItemDraw_StaticFields *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  MaterialEventLogListViewItemDraw_c *v24; // x8

  if ( (byte_42EC32D & 1) == 0 )
  {
    sub_B5D5C4(&MaterialEventLogListViewItemDraw_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_19780/*"img_menuboard_03"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_19779/*"img_menuboard_01"*/, v11, v12, v13);
    byte_42EC32D = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_19779/*"img_menuboard_01"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19779/*"img_menuboard_01"*/;
  sub_B5D560(static_fields, v15, v2, v3, v4, v5, v6, v7);
  v16 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_19780/*"img_menuboard_03"*/;
  v16->BASE_SP_NAME_SVT = (struct System_String_o *)StringLiteral_19780/*"img_menuboard_03"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v16->BASE_SP_NAME_SVT, v17, v18, v19, v20, v21, v22, v23);
  v24 = MaterialEventLogListViewItemDraw_TypeInfo;
  MaterialEventLogListViewItemDraw_TypeInfo->static_fields->LABEL_X_DEFAULT = 2.0;
  v24->static_fields->LABEL_X_SVT = 44.0;
  v24->static_fields->LABEL_W_DEFAULT = 418;
  v24->static_fields->LABEL_W_CONDENSED = 400;
  v24->static_fields->LABEL_W_SVT = 330;
  v24->static_fields->LABEL_MAX_LINE_DEFAULT = 2;
  v24->static_fields->LABEL_MAX_LINE_SVT = 1;
  v24->static_fields->LABEL_MAX_LINE_MAP = 1;
  v24->static_fields->FACE_MASK_SP_W = 115;
  v24->static_fields->LABEL_W_NOT_SELECT = 400;
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
    sub_B5D69C(0LL, method);
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
      sub_B5D69C(this, item);
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
    sub_B5D69C(0LL, isSelect);
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
  if ( (byte_42EC32B & 1) == 0 )
  {
    this = (MaterialEventLogListViewItemDraw_o *)sub_B5D5C4(
                                                   &MaterialEventLogListViewItemDraw_TypeInfo,
                                                   (_DWORD)item,
                                                   is_disp,
                                                   method);
    byte_42EC32B = 1;
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
    sub_B5D69C(this, item);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogListViewItemDraw__SetItem(
        MaterialEventLogListViewItemDraw_o *this,
        MaterialEventLogListViewItem_o *item,
        int32_t mode,
        int32_t limitCount,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x25
  UnityEngine_GameObject_o *v25; // x22
  __int64 v26; // x1
  int32_t flag; // w26
  UISprite_o *mBaseSp; // x22
  UILabel_o *mLabel; // x0
  System_String_o **p_monitor; // x8
  UnityEngine_GameObject_o *gameObject; // x19
  MaterialEventLogListViewItemDraw_c *v32; // x0
  struct MaterialEventLogListViewItemDraw_StaticFields *static_fields; // x8
  float LABEL_X_SVT; // s8
  int32_t LABEL_W_SVT; // w22
  struct MaterialEventLogListViewItemDraw_StaticFields *v36; // x8
  int32_t *p_LABEL_MAX_LINE_SVT; // x8
  int32_t v38; // w23
  struct MaterialEventLogListViewItem_Info_o *v39; // x8
  struct UILabel_o *v40; // x23
  System_String_o *mText; // x24
  System_String_o *v42; // x0
  System_String_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x23
  VoiceMaterialCondMaster_o *v47; // x22
  System_String_o *v48; // x0
  int32_t svtVoiceId; // w24
  int32_t voicePrefix; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v51; // x25
  struct MaterialEventLogListViewItem_Info_o *v52; // x8
  struct MaterialEventLogListViewItem_Info_o *v53; // x8
  bool v54; // w1
  struct MaterialEventLogListViewItem_Info_o *v55; // x8
  struct MaterialEventLogListViewItem_Info_o *v56; // x8
  struct MaterialEventLogListViewItem_Info_o *v57; // x8
  UILabel_o *notSelectLabel; // x21
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x2
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EC32A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_VoiceMaterialCondMaster___, (_DWORD)item, mode, *(_QWORD *)&limitCount);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&MaterialEventLogListViewItemDraw_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_8757/*"MATERIAL_PROGRESS_SUFFIX"*/, v21, v22, v23);
    byte_42EC32A = 1;
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
      v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      one = UnityEngine_Vector3__get_one(0LL);
      GameObjectExtensions__SetLocalScale(v25, one, 0LL);
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
      v32 = MaterialEventLogListViewItemDraw_TypeInfo;
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
            if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v32);
              v32 = MaterialEventLogListViewItemDraw_TypeInfo;
            }
            p_LABEL_MAX_LINE_SVT = &v32->static_fields->LABEL_MAX_LINE_MAP;
          }
          mLabel = this->fields.mLabel;
          if ( mLabel )
          {
            v38 = *p_LABEL_MAX_LINE_SVT;
            UILabel__set_overflowMethod(mLabel, 2, 0LL);
            mLabel = this->fields.mLabel;
            if ( mLabel )
            {
              UILabel__set_maxLineCount(mLabel, v38, 0LL);
              mLabel = this->fields.mLabel;
              if ( mLabel )
              {
                UILabel__set_text(mLabel, info_k__BackingField->fields.str, 0LL);
                if ( (flag & 2) == 0
                  && !info_k__BackingField->fields.isMovedQuest
                  && item->fields._kind_k__BackingField == 5 )
                {
                  v39 = item->fields._info_k__BackingField;
                  if ( !v39 )
                    goto LABEL_90;
                  if ( v39->fields.clear_phase_max < v39->fields.phase_max )
                  {
                    v40 = this->fields.mLabel;
                    if ( !v40 )
                      goto LABEL_90;
                    mText = v40->fields.mText;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_8757/*"MATERIAL_PROGRESS_SUFFIX"*/, 0LL);
                    v43 = System_String__Concat_44577788(mText, v42, 0LL);
                    UILabel__set_text(v40, v43, 0LL);
                  }
                }
                mLabel = this->fields.mLabel;
                if ( mLabel )
                {
                  v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mLabel, 0LL);
                  GameObjectExtensions__SetLocalPositionX(v44, LABEL_X_SVT, 0LL);
                  mLabel = this->fields.mLabel;
                  if ( mLabel )
                  {
                    UILabel__SetCondensedScale(mLabel, LABEL_W_SVT, 0LL);
                    mLabel = (UILabel_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( mLabel )
                    {
                      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)mLabel,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_VoiceMaterialCondMaster___);
                      voiceId = info_k__BackingField->fields.voiceId;
                      v47 = (VoiceMaterialCondMaster_o *)MasterData_WarQuestSelectionMaster;
                      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                      }
                      v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(voiceId, 0LL);
                      mLabel = (UILabel_o *)System_String__IsNullOrEmpty(v48, 0LL);
                      if ( ((unsigned __int8)mLabel & 1) != 0 )
                        goto LABEL_75;
                      svtVoiceId = info_k__BackingField->fields.svtVoiceId;
                      voicePrefix = info_k__BackingField->fields.voicePrefix;
                      v51 = info_k__BackingField->fields.voiceId;
                      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                      }
                      mLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(
                                              v51,
                                              0LL);
                      if ( !v47 )
                        goto LABEL_90;
                      mLabel = (UILabel_o *)VoiceMaterialCondMaster__IsVoicePlay(
                                              v47,
                                              svtVoiceId,
                                              voicePrefix,
                                              (System_String_o *)mLabel,
                                              limitCount,
                                              0LL);
                      if ( ((unsigned __int8)mLabel & 1) != 0 )
                      {
LABEL_75:
                        v52 = item->fields._info_k__BackingField;
                        if ( !v52 )
                          goto LABEL_90;
                        v52->fields.flag &= ~1u;
                        v53 = item->fields._info_k__BackingField;
                        if ( !v53 )
                          goto LABEL_90;
                        v53->fields.flag &= ~4u;
                        mLabel = (UILabel_o *)this->fields.notSelectObj;
                        if ( !mLabel )
                          goto LABEL_90;
                        v54 = 0;
                      }
                      else
                      {
                        v55 = item->fields._info_k__BackingField;
                        if ( !v55 )
                          goto LABEL_90;
                        v55->fields.flag |= 1u;
                        v56 = item->fields._info_k__BackingField;
                        if ( !v56 )
                          goto LABEL_90;
                        v56->fields.flag |= 4u;
                        mLabel = (UILabel_o *)this->fields.notSelectObj;
                        if ( !mLabel )
                          goto LABEL_90;
                        v54 = 1;
                      }
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLabel, v54, 0LL);
                      v57 = item->fields._info_k__BackingField;
                      if ( !v57 )
                        goto LABEL_90;
                      mLabel = this->fields.notSelectLabel;
                      if ( !mLabel )
                        goto LABEL_90;
                      UILabel__set_text(mLabel, v57->fields.playLimitCountMessage, 0LL);
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
          sub_B5D69C(mLabel, v26);
        }
        if ( MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          LABEL_X_SVT = static_fields->LABEL_X_SVT;
        }
        else
        {
          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
          v32 = MaterialEventLogListViewItemDraw_TypeInfo;
          static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          LABEL_X_SVT = static_fields->LABEL_X_SVT;
          if ( (BYTE3(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
            goto LABEL_23;
        }
        if ( v32->_2.cctor_finished )
        {
          LABEL_W_SVT = static_fields->LABEL_W_SVT;
        }
        else
        {
          j_il2cpp_runtime_class_init_0(v32);
          v32 = MaterialEventLogListViewItemDraw_TypeInfo;
          static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          LABEL_W_SVT = static_fields->LABEL_W_SVT;
          if ( (BYTE3(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
            goto LABEL_40;
        }
        if ( !v32->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v32);
          v32 = MaterialEventLogListViewItemDraw_TypeInfo;
          static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
        }
        goto LABEL_40;
      }
      if ( (WORD1(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
      {
        v36 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
        LABEL_X_SVT = v36->LABEL_X_DEFAULT;
LABEL_26:
        LABEL_W_SVT = v36->LABEL_W_CONDENSED;
LABEL_44:
        p_LABEL_MAX_LINE_SVT = &v36->LABEL_MAX_LINE_DEFAULT;
        goto LABEL_45;
      }
      if ( MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        v36 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
        LABEL_X_SVT = v36->LABEL_X_DEFAULT;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
        v32 = MaterialEventLogListViewItemDraw_TypeInfo;
        v36 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
        LABEL_X_SVT = v36->LABEL_X_DEFAULT;
        if ( (BYTE3(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
          goto LABEL_26;
      }
      if ( v32->_2.cctor_finished )
      {
        LABEL_W_SVT = v36->LABEL_W_CONDENSED;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(v32);
        v32 = MaterialEventLogListViewItemDraw_TypeInfo;
        v36 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
        LABEL_W_SVT = v36->LABEL_W_CONDENSED;
        if ( (BYTE3(MaterialEventLogListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
          goto LABEL_44;
      }
      if ( !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        v32 = MaterialEventLogListViewItemDraw_TypeInfo;
        v36 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  __int64 v45; // x21
  UnityEngine_Component_o *mLastTimeIcon; // x0
  __int64 v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x20
  int v55; // w2
  __int64 v56; // x3
  __int64 v57; // x9
  __int64 v58; // x8
  int v59; // w9
  int v60; // w2
  __int64 v61; // x3
  __int64 v62; // x8
  __int64 v63; // x9
  __int64 v64; // x8
  __int64 v65; // x8
  int v66; // w8
  MyRoomParamsManager_c *v67; // x0
  System_String_o *LastPlayTitle_k__BackingField; // x21
  System_String_o *v69; // x0
  int v70; // w2
  __int64 v71; // x3
  __int64 v72; // x8
  BalanceConfig_c *v73; // x8
  MaterialEventLogListViewItemDraw___c_c *v74; // x0
  System_Int32_array *MainInterludeWarIdOnMaterial; // x21
  struct MaterialEventLogListViewItemDraw___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__26_0; // x22
  Il2CppObject *v78; // x23
  struct MaterialEventLogListViewItemDraw___c_StaticFields *v79; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  int v86; // w2
  __int64 v87; // x3
  __int64 v88; // x8
  __int64 v89; // x9
  __int64 v90; // x8
  MyRoomParamsManager_c *v91; // x0
  int32_t LastPlayQuestId_k__BackingField; // w22
  int v93; // w2
  __int64 v94; // x3
  __int64 v95; // x8
  __int64 v96; // x8
  int v97; // w8
  __int64 v98; // x8
  __int64 v99; // x9
  int v100; // w9
  int v101; // w8
  __int64 v102; // x8
  __int64 v103; // x8
  int v104; // w2
  __int64 v105; // x3
  __int64 v106; // x8
  __int64 v107; // x8
  BalanceConfig_c *v108; // x0
  System_Int32_array *v109; // x22
  System_Func_int__bool__o *v110; // x23
  int v111; // w2
  __int64 v112; // x3
  __int64 v113; // x8
  __int64 v114; // x8
  __int64 v115; // x8
  __int64 v116; // x8
  int v117; // w8
  __int64 v118; // x8
  __int64 v119; // x8
  System_String_o *v120; // x20
  System_String_o *v121; // x0

  if ( (byte_42EC32C & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v15, v16, v17);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&MyRoomParamsManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_MaterialEventLogListViewItemDraw___c__SetLastTimeIcon_b__26_0__, v24, v25, v26);
    sub_B5D5C4(&Method_MaterialEventLogListViewItemDraw___c__DisplayClass26_0__SetLastTimeIcon_b__1__, v27, v28, v29);
    sub_B5D5C4(&MaterialEventLogListViewItemDraw___c__DisplayClass26_0_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&MaterialEventLogListViewItemDraw___c_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_13684/*"TUTORIAL_QUEST_ID1"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_6412/*"FES_WAR_ID"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_8754/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, v42, v43, v44);
    byte_42EC32C = 1;
  }
  v45 = sub_B5D694(MaterialEventLogListViewItemDraw___c__DisplayClass26_0_TypeInfo);
  MaterialEventLogListViewItemDraw___c__DisplayClass26_0___ctor(
    (MaterialEventLogListViewItemDraw___c__DisplayClass26_0_o *)v45,
    0LL);
  if ( !v45 )
    goto LABEL_251;
  *(_QWORD *)(v45 + 16) = item;
  v54 = v45 + 16;
  sub_B5D560((BattleServantConfConponent_o *)(v45 + 16), (System_Int32_array **)item, v48, v49, v50, v51, v52, v53);
  mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
  if ( !mLastTimeIcon )
    goto LABEL_251;
  mLastTimeIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mLastTimeIcon, 0LL);
  if ( !mLastTimeIcon )
    goto LABEL_251;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 0, 0LL);
  v57 = *(_QWORD *)v54;
  if ( !*(_QWORD *)v54 )
    return;
  v58 = *(_QWORD *)(v57 + 120);
  if ( !v58 )
    return;
  v59 = *(_DWORD *)(v57 + 112);
  if ( v59 == 1 )
  {
    v73 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v73 = BalanceConfig_TypeInfo;
    }
    v74 = MaterialEventLogListViewItemDraw___c_TypeInfo;
    MainInterludeWarIdOnMaterial = v73->static_fields->MainInterludeWarIdOnMaterial;
    if ( (BYTE3(MaterialEventLogListViewItemDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialEventLogListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw___c_TypeInfo);
      v74 = MaterialEventLogListViewItemDraw___c_TypeInfo;
    }
    static_fields = v74->static_fields;
    _9__26_0 = static_fields->__9__26_0;
    if ( !_9__26_0 )
    {
      if ( (BYTE3(v74->vtable._0_Equals.methodPtr) & 4) != 0 && !v74->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v74);
        static_fields = MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields;
      }
      v78 = (Il2CppObject *)static_fields->__9;
      _9__26_0 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        _9__26_0,
        v78,
        Method_MaterialEventLogListViewItemDraw___c__SetLastTimeIcon_b__26_0__,
        (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
      v79 = MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields;
      v79->__9__26_0 = _9__26_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v79->__9__26_0,
        (System_Int32_array **)_9__26_0,
        v80,
        v81,
        v82,
        v83,
        v84,
        v85);
    }
    mLastTimeIcon = (UnityEngine_Component_o *)BasicHelper__Any_int__28142236(
                                                 MainInterludeWarIdOnMaterial,
                                                 (System_Func_T__bool__o *)_9__26_0,
                                                 (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384);
    if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
      return;
    v88 = *(_QWORD *)v54;
    if ( !*(_QWORD *)v54 )
      goto LABEL_251;
    v89 = *(_QWORD *)(v88 + 120);
    if ( !v89 )
      goto LABEL_251;
    if ( *(_BYTE *)(v89 + 181) )
    {
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      }
      if ( !byte_42E85E5 )
      {
        sub_B5D5C4(&MyRoomParamsManager_TypeInfo, v47, v86, v87);
        byte_42E85E5 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v88 = *(_QWORD *)v54;
      if ( !*(_QWORD *)v54 )
        goto LABEL_251;
      v89 = *(_QWORD *)(v88 + 120);
      if ( !v89 )
        goto LABEL_251;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 56LL) == *(_DWORD *)(v89 + 44) )
        goto LABEL_241;
    }
    if ( *(_BYTE *)(v89 + 180) )
    {
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        v88 = *(_QWORD *)v54;
        if ( !*(_QWORD *)v54 )
          goto LABEL_251;
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v90 = *(_QWORD *)(v88 + 120);
      if ( !v90 )
        goto LABEL_251;
      mLastTimeIcon = *(UnityEngine_Component_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 40LL);
      if ( !mLastTimeIcon )
        goto LABEL_251;
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)mLastTimeIcon,
             *(_DWORD *)(v90 + 40),
             (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        goto LABEL_241;
      }
    }
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    }
    if ( !byte_42E85E6 )
    {
      sub_B5D5C4(&MyRoomParamsManager_TypeInfo, v47, v86, v87);
      byte_42E85E6 = 1;
    }
    v91 = MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v91 = MyRoomParamsManager_TypeInfo;
    }
    LastPlayQuestId_k__BackingField = v91->static_fields->_LastPlayQuestId_k__BackingField;
    mLastTimeIcon = (UnityEngine_Component_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_13684/*"TUTORIAL_QUEST_ID1"*/, 0LL);
    if ( LastPlayQuestId_k__BackingField == (_DWORD)mLastTimeIcon )
    {
      if ( !*(_QWORD *)v54 )
        goto LABEL_251;
      v95 = *(_QWORD *)(*(_QWORD *)v54 + 120LL);
      if ( !v95 )
        goto LABEL_251;
      if ( !*(_DWORD *)(v95 + 40) )
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
    if ( !byte_42E5F9F )
    {
      sub_B5D5C4(&MyRoomParamsManager_TypeInfo, v47, v93, v94);
      byte_42E5F9F = 1;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !*(_QWORD *)v54 || (v96 = *(_QWORD *)(*(_QWORD *)v54 + 120LL)) == 0 )
LABEL_251:
      sub_B5D69C(mLastTimeIcon, v47);
    v97 = *(_DWORD *)(v96 + 40);
    if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) != v97 )
    {
      if ( v97 == -1 )
        return;
      if ( (mLastTimeIcon[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(mLastTimeIcon[9].monitor) )
        j_il2cpp_runtime_class_init_0(mLastTimeIcon);
      if ( !byte_42E5F9F )
      {
        sub_B5D5C4(&MyRoomParamsManager_TypeInfo, v47, v93, v94);
        byte_42E5F9F = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !*(_QWORD *)v54 )
        goto LABEL_251;
      v98 = *(_QWORD *)(*(_QWORD *)v54 + 120LL);
      if ( !v98 )
        goto LABEL_251;
      v99 = 1374389535LL * *(int *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL);
      v100 = (v99 >> 37) + ((unsigned __int64)v99 >> 63);
      v101 = *(_DWORD *)(v98 + 40) / 1000 - 10;
LABEL_240:
      if ( v100 != v101 )
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
    if ( v97 == -1 )
      return;
    goto LABEL_241;
  }
  if ( v59 == 3 )
  {
    if ( *(_DWORD *)(v58 + 36) )
    {
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      }
      if ( !byte_42E85E7 )
      {
        sub_B5D5C4(&MyRoomParamsManager_TypeInfo, v47, v55, v56);
        byte_42E85E7 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !*(_QWORD *)v54 )
        goto LABEL_251;
      v102 = *(_QWORD *)(*(_QWORD *)v54 + 120LL);
      if ( !v102 )
        goto LABEL_251;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 20LL) == *(_DWORD *)(v102 + 36) )
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
    if ( !*(_QWORD *)v54 )
      goto LABEL_251;
    v103 = *(_QWORD *)(*(_QWORD *)v54 + 120LL);
    if ( !v103 )
      goto LABEL_251;
    mLastTimeIcon = *(UnityEngine_Component_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 40LL);
    if ( !mLastTimeIcon )
      goto LABEL_251;
    mLastTimeIcon = (UnityEngine_Component_o *)System_Collections_Generic_List_int___Contains(
                                                 (System_Collections_Generic_List_int__o *)mLastTimeIcon,
                                                 *(_DWORD *)(v103 + 40),
                                                 (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
      goto LABEL_241;
    if ( !*(_QWORD *)v54 )
      goto LABEL_251;
    v106 = *(_QWORD *)(*(_QWORD *)v54 + 120LL);
    if ( !v106 )
      goto LABEL_251;
    if ( *(_BYTE *)(v106 + 181) )
    {
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      }
      if ( !byte_42E85E5 )
      {
        sub_B5D5C4(&MyRoomParamsManager_TypeInfo, v47, v104, v105);
        byte_42E85E5 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !*(_QWORD *)v54 )
        goto LABEL_251;
      v107 = *(_QWORD *)(*(_QWORD *)v54 + 120LL);
      if ( !v107 )
        goto LABEL_251;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 56LL) == *(_DWORD *)(v107 + 44) )
        goto LABEL_241;
    }
    v108 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v108 = BalanceConfig_TypeInfo;
    }
    v109 = v108->static_fields->MainInterludeWarIdOnMaterial;
    v110 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v110,
      (Il2CppObject *)v45,
      Method_MaterialEventLogListViewItemDraw___c__DisplayClass26_0__SetLastTimeIcon_b__1__,
      (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
    if ( !BasicHelper__Any_int__28142236(
            v109,
            (System_Func_T__bool__o *)v110,
            (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384) )
      return;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    }
    if ( !byte_42E5F9F )
    {
      sub_B5D5C4(&MyRoomParamsManager_TypeInfo, v47, v111, v112);
      byte_42E5F9F = 1;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !*(_QWORD *)v54 )
      goto LABEL_251;
    v113 = *(_QWORD *)(*(_QWORD *)v54 + 120LL);
    if ( !v113 )
      goto LABEL_251;
    v97 = *(_DWORD *)(v113 + 40);
    if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) != v97 )
      return;
    goto LABEL_184;
  }
  if ( v59 != 5 )
    return;
  mLastTimeIcon = (UnityEngine_Component_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6412/*"FES_WAR_ID"*/, 0LL);
  v62 = *(_QWORD *)v54;
  if ( !*(_QWORD *)v54 )
    goto LABEL_251;
  v63 = *(_QWORD *)(v62 + 120);
  if ( !v63 )
    goto LABEL_251;
  if ( (_DWORD)mLastTimeIcon != *(_DWORD *)(v63 + 40) )
  {
    if ( *(_BYTE *)(v63 + 181) )
    {
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      }
      if ( !byte_42E85E5 )
      {
        sub_B5D5C4(&MyRoomParamsManager_TypeInfo, v47, v60, v61);
        byte_42E85E5 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v62 = *(_QWORD *)v54;
      if ( !*(_QWORD *)v54 )
        goto LABEL_251;
      v63 = *(_QWORD *)(v62 + 120);
      if ( !v63 )
        goto LABEL_251;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 56LL) == *(_DWORD *)(v63 + 44) )
        goto LABEL_241;
    }
    if ( !*(_BYTE *)(v63 + 180) )
    {
LABEL_206:
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      }
      if ( !byte_42E85E6 )
      {
        sub_B5D5C4(&MyRoomParamsManager_TypeInfo, v47, v60, v61);
        byte_42E85E6 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !*(_QWORD *)v54 )
        goto LABEL_251;
      v115 = *(_QWORD *)(*(_QWORD *)v54 + 120LL);
      if ( !v115 )
        goto LABEL_251;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 12LL) == *(_DWORD *)(v115 + 44) )
      {
        if ( (mLastTimeIcon[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(mLastTimeIcon[9].monitor) )
          j_il2cpp_runtime_class_init_0(mLastTimeIcon);
        if ( !byte_42E5F9F )
        {
          sub_B5D5C4(&MyRoomParamsManager_TypeInfo, v47, v60, v61);
          byte_42E5F9F = 1;
        }
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
          mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        }
        if ( !*(_QWORD *)v54 )
          goto LABEL_251;
        v116 = *(_QWORD *)(*(_QWORD *)v54 + 120LL);
        if ( !v116 )
          goto LABEL_251;
        v117 = *(_DWORD *)(v116 + 40);
        if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) == v117 && v117 != -1 )
          goto LABEL_241;
      }
      if ( (mLastTimeIcon[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(mLastTimeIcon[9].monitor) )
        j_il2cpp_runtime_class_init_0(mLastTimeIcon);
      if ( !byte_42E85E9 )
      {
        sub_B5D5C4(&MyRoomParamsManager_TypeInfo, v47, v60, v61);
        byte_42E85E9 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !*(_QWORD *)v54 )
        goto LABEL_251;
      v118 = *(_QWORD *)(*(_QWORD *)v54 + 120LL);
      if ( !v118 )
        goto LABEL_251;
      v101 = *(_DWORD *)(v118 + 44);
      v100 = *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 32LL);
      goto LABEL_240;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v62 = *(_QWORD *)v54;
      if ( !*(_QWORD *)v54 )
        goto LABEL_251;
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    v114 = *(_QWORD *)(v62 + 120);
    if ( v114 )
    {
      mLastTimeIcon = *(UnityEngine_Component_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 40LL);
      if ( mLastTimeIcon )
      {
        if ( System_Collections_Generic_List_int___Contains(
               (System_Collections_Generic_List_int__o *)mLastTimeIcon,
               *(_DWORD *)(v114 + 40),
               (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
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
  if ( !byte_42E85E6 )
  {
    sub_B5D5C4(&MyRoomParamsManager_TypeInfo, v47, v60, v61);
    byte_42E85E6 = 1;
  }
  mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
  }
  if ( !*(_QWORD *)v54 )
    goto LABEL_251;
  v64 = *(_QWORD *)(*(_QWORD *)v54 + 120LL);
  if ( !v64 )
    goto LABEL_251;
  if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 12LL) == *(_DWORD *)(v64 + 44) )
  {
    if ( (mLastTimeIcon[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(mLastTimeIcon[9].monitor) )
      j_il2cpp_runtime_class_init_0(mLastTimeIcon);
    if ( !byte_42E5F9F )
    {
      sub_B5D5C4(&MyRoomParamsManager_TypeInfo, v47, v60, v61);
      byte_42E5F9F = 1;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !*(_QWORD *)v54 )
      goto LABEL_251;
    v65 = *(_QWORD *)(*(_QWORD *)v54 + 120LL);
    if ( !v65 )
      goto LABEL_251;
    v66 = *(_DWORD *)(v65 + 40);
    if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) == v66 && v66 != -1 )
    {
      if ( (mLastTimeIcon[12].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(mLastTimeIcon[9].monitor) )
        j_il2cpp_runtime_class_init_0(mLastTimeIcon);
      if ( !byte_42E85E8 )
      {
        sub_B5D5C4(&MyRoomParamsManager_TypeInfo, v47, v60, v61);
        byte_42E85E8 = 1;
      }
      v67 = MyRoomParamsManager_TypeInfo;
      if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        v67 = MyRoomParamsManager_TypeInfo;
      }
      LastPlayTitle_k__BackingField = v67->static_fields->_LastPlayTitle_k__BackingField;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v69 = LocalizationManager__Get((System_String_o *)StringLiteral_8754/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
      mLastTimeIcon = (UnityEngine_Component_o *)System_String__op_Equality(LastPlayTitle_k__BackingField, v69, 0LL);
      if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
      {
        if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        }
        if ( !byte_42E85E8 )
        {
          sub_B5D5C4(&MyRoomParamsManager_TypeInfo, v47, v70, v71);
          byte_42E85E8 = 1;
        }
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
          mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        }
        if ( !*(_QWORD *)v54 )
          goto LABEL_251;
        v72 = *(_QWORD *)(*(_QWORD *)v54 + 120LL);
        if ( !v72 )
          goto LABEL_251;
        if ( !System_String__op_Equality(
                *(System_String_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 24LL),
                *(System_String_o **)(v72 + 16),
                0LL) )
          return;
        goto LABEL_241;
      }
      if ( !*(_QWORD *)v54 )
        goto LABEL_251;
      v119 = *(_QWORD *)(*(_QWORD *)v54 + 120LL);
      if ( !v119 )
        goto LABEL_251;
      v120 = *(System_String_o **)(v119 + 16);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v121 = LocalizationManager__Get((System_String_o *)StringLiteral_8754/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
      if ( System_String__op_Inequality(v120, v121, 0LL) )
        goto LABEL_241;
    }
  }
}


void __fastcall MaterialEventLogListViewItemDraw___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct MaterialEventLogListViewItemDraw___c_StaticFields *static_fields; // x0

  if ( (byte_42E5F44 & 1) == 0 )
  {
    sub_B5D5C4(&MaterialEventLogListViewItemDraw___c_TypeInfo, v1, v2, v3);
    byte_42E5F44 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(MaterialEventLogListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MaterialEventLogListViewItemDraw___c_o *)v4;
  sub_B5D560(static_fields);
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
  __int64 v3; // x3
  MyRoomParamsManager_c *v5; // x0

  if ( (byte_42E5F45 & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomParamsManager_TypeInfo, interludeWarId, (_DWORD)method, v3);
    byte_42E5F45 = 1;
  }
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  }
  if ( !byte_42E5F9F )
  {
    sub_B5D5C4(&MyRoomParamsManager_TypeInfo, interludeWarId, (_DWORD)method, v3);
    byte_42E5F9F = 1;
  }
  v5 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v5 = MyRoomParamsManager_TypeInfo;
  }
  return v5->static_fields->_LastPlayWarId_k__BackingField == interludeWarId;
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
    sub_B5D69C(this, interludeWarId);
  return info_k__BackingField->fields.war_id == interludeWarId;
}