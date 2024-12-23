void __fastcall MaterialEventLogListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  struct MaterialEventLogListViewItemDraw_StaticFields *static_fields; // x0
  struct MaterialEventLogListViewItemDraw_StaticFields *v5; // x8

  if ( (byte_4B6214A & 1) == 0 )
  {
    sub_1BE4ACC(&MaterialEventLogListViewItemDraw_TypeInfo, v1);
    sub_1BE4ACC(&StringLiteral_20651/*"img_menuboard_03"*/, v2);
    sub_1BE4ACC(&StringLiteral_20650/*"img_menuboard_01"*/, v3);
    byte_4B6214A = 1;
  }
  MaterialEventLogListViewItemDraw_TypeInfo->static_fields->BASE_SP_NAME_DEFAULT = (struct System_String_o *)StringLiteral_20650/*"img_menuboard_01"*/;
  sub_1BE4A70(MaterialEventLogListViewItemDraw_TypeInfo->static_fields);
  static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
  static_fields->BASE_SP_NAME_SVT = (struct System_String_o *)StringLiteral_20651/*"img_menuboard_03"*/;
  sub_1BE4A70(&static_fields->BASE_SP_NAME_SVT);
  v5 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&v5->LABEL_X_DEFAULT = 0x4230000040000000LL;
  *(_OWORD *)&v5->LABEL_W_DEFAULT = xmmword_BE32D0;
  *(_OWORD *)&v5->LABEL_MAX_LINE_SVT = xmmword_BE2700;
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
    sub_1BE4D28(0LL, method);
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
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
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
    b = mBaseSp->fields.mColor.fields.b;
    a = mBaseSp->fields.mColor.fields.a;
    r = mBaseSp->fields.mColor.fields.r;
    g = mBaseSp->fields.mColor.fields.g;
    v10.fields.b = b;
    v10.fields.r = r;
    v10.fields.g = g;
    v10.fields.a = a;
    ItemIconComponent__SetColor((ItemIconComponent_o *)this, v10, 0LL);
    this = (MaterialEventLogListViewItemDraw_o *)v5->fields.mFaceMaskSp;
    if ( !this )
LABEL_9:
      sub_1BE4D28(this, item);
    v11.fields.b = b;
    v11.fields.a = a;
    v11.fields.r = r;
    v11.fields.g = g;
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
    sub_1BE4D28(0LL, isSelect);
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
  if ( (byte_4B62148 & 1) == 0 )
  {
    this = (MaterialEventLogListViewItemDraw_o *)sub_1BE4ACC(&MaterialEventLogListViewItemDraw_TypeInfo, item);
    byte_4B62148 = 1;
  }
  if ( !item )
    goto LABEL_14;
  this = v6[6];
  if ( !this )
    goto LABEL_14;
  info_k__BackingField = item->fields._info_k__BackingField;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, is_disp, 0LL);
  if ( !is_disp )
    return;
  if ( !info_k__BackingField )
    goto LABEL_14;
  this = v6[7];
  if ( !this )
    goto LABEL_14;
  ItemIconComponent__SetFaceImage(
    (ItemIconComponent_o *)this,
    info_k__BackingField->fields.svt_id,
    info_k__BackingField->fields.limit_count,
    -1,
    1,
    0,
    0LL);
  this = v6[8];
  if ( !this )
    goto LABEL_14;
  this = (MaterialEventLogListViewItemDraw_o *)UISprite__GetAtlasSprite((UISprite_o *)this, 0LL);
  v8 = this;
  if ( !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
  if ( !v8 )
LABEL_14:
    sub_1BE4D28(this, item);
  LODWORD(v8->fields.mBaseSp) = MaterialEventLogListViewItemDraw_TypeInfo->static_fields->FACE_MASK_SP_W - 1;
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
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x22
  __int64 v17; // x1
  int32_t flag; // w26
  UISprite_o *mBaseSp; // x22
  UILabel_o *mLabel; // x0
  System_String_o **onChange; // x8
  MaterialEventLogListViewItemDraw_c *v22; // x0
  struct MaterialEventLogListViewItemDraw_StaticFields *static_fields; // x8
  __int64 v24; // x9
  float v25; // s8
  __int64 v26; // x1
  UnityEngine_GameObject_o *v27; // x19
  __int64 v28; // x10
  __int64 v29; // x9
  int32_t v30; // w22
  __int64 v31; // x9
  int32_t *p_LABEL_MAX_LINE_MAP; // x8
  int32_t v33; // w23
  struct MaterialEventLogListViewItem_Info_o *v34; // x8
  struct UILabel_o *v35; // x23
  System_String_o *mText; // x24
  System_String_o *v37; // x0
  System_String_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  Il2CppObject *MasterData_object; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x23
  VoiceMaterialCondMaster_o *v42; // x22
  System_String_o *v43; // x0
  int32_t svtVoiceId; // w24
  int32_t voicePrefix; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v46; // x25
  struct MaterialEventLogListViewItem_Info_o *v47; // x8
  bool v48; // w1
  struct MaterialEventLogListViewItem_Info_o *v49; // x8
  struct MaterialEventLogListViewItem_Info_o *v50; // x8
  UILabel_o *notSelectLabel; // x21
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x2
  __int64 v54; // x10

  if ( (byte_4B62147 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_VoiceMaterialCondMaster___, item);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v9);
    sub_1BE4ACC(&MaterialEventLogListViewItemDraw_TypeInfo, v10);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v11);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BE4ACC(&StringLiteral_8706/*"MATERIAL_PROGRESS_SUFFIX"*/, v13);
    byte_4B62147 = 1;
  }
  if ( item )
  {
    info_k__BackingField = item->fields._info_k__BackingField;
    if ( info_k__BackingField )
    {
      if ( mode )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !byte_4B612E6 )
        {
          sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v15);
          byte_4B612E6 = 1;
        }
        GameObjectExtensions__SetLocalScale(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        flag = info_k__BackingField->fields.flag;
        mBaseSp = this->fields.mBaseSp;
        mLabel = (UILabel_o *)MaterialEventLogListViewItemDraw_TypeInfo;
        if ( !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
          mLabel = (UILabel_o *)MaterialEventLogListViewItemDraw_TypeInfo;
        }
        if ( !mBaseSp )
          goto LABEL_74;
        onChange = (System_String_o **)mLabel->fields.onChange;
        if ( (flag & 2) != 0 )
          ++onChange;
        UISprite__set_spriteName(mBaseSp, *onChange, 0LL);
        mLabel = (UILabel_o *)this->fields.mBaseSp;
        if ( !mLabel )
          goto LABEL_74;
        ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))mLabel->klass->vtable._33_MakePixelPerfect.method)(
          mLabel,
          mLabel->klass->vtable._34_get_minWidth.methodPtr);
        mLabel = this->fields.mLabel;
        if ( !mLabel )
          goto LABEL_74;
        UILabel__set_fontSize(mLabel, info_k__BackingField->fields.font_size, 0LL);
        v22 = MaterialEventLogListViewItemDraw_TypeInfo;
        if ( MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          v24 = 16LL;
          if ( (flag & 2) != 0 )
            v24 = 20LL;
          v25 = *(float *)((char *)&static_fields->BASE_SP_NAME_DEFAULT + v24);
        }
        else
        {
          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
          v22 = MaterialEventLogListViewItemDraw_TypeInfo;
          v28 = 16LL;
          static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          if ( (flag & 2) != 0 )
            v28 = 20LL;
          v25 = *(float *)((char *)&static_fields->BASE_SP_NAME_DEFAULT + v28);
          if ( !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
            v22 = MaterialEventLogListViewItemDraw_TypeInfo;
            v54 = 28LL;
            static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
            if ( (flag & 2) != 0 )
              v54 = 32LL;
            v30 = *(_DWORD *)((char *)&static_fields->BASE_SP_NAME_DEFAULT + v54);
            if ( !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
              v22 = MaterialEventLogListViewItemDraw_TypeInfo;
              static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
            }
            goto LABEL_29;
          }
        }
        v29 = 28LL;
        if ( (flag & 2) != 0 )
          v29 = 32LL;
        v30 = *(_DWORD *)((char *)&static_fields->BASE_SP_NAME_DEFAULT + v29);
LABEL_29:
        v31 = 36LL;
        if ( (flag & 2) != 0 )
          v31 = 40LL;
        if ( item->fields._kind_k__BackingField == 5 )
        {
          if ( !v22->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v22);
            static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          }
          p_LABEL_MAX_LINE_MAP = &static_fields->LABEL_MAX_LINE_MAP;
        }
        else
        {
          p_LABEL_MAX_LINE_MAP = (int32_t *)((char *)static_fields + v31);
        }
        mLabel = this->fields.mLabel;
        if ( mLabel )
        {
          v33 = *p_LABEL_MAX_LINE_MAP;
          UILabel__set_overflowMethod(mLabel, 2, 0LL);
          mLabel = this->fields.mLabel;
          if ( mLabel )
          {
            UILabel__set_maxLineCount(mLabel, v33, 0LL);
            mLabel = this->fields.mLabel;
            if ( mLabel )
            {
              UILabel__set_text(mLabel, info_k__BackingField->fields.str, 0LL);
              if ( (flag & 2) == 0
                && !info_k__BackingField->fields.isMovedQuest
                && item->fields._kind_k__BackingField == 5 )
              {
                v34 = item->fields._info_k__BackingField;
                if ( !v34 )
                  goto LABEL_74;
                if ( v34->fields.clear_phase_max < v34->fields.phase_max )
                {
                  v35 = this->fields.mLabel;
                  if ( !v35 )
                    goto LABEL_74;
                  mText = v35->fields.mText;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_8706/*"MATERIAL_PROGRESS_SUFFIX"*/, 0LL);
                  v38 = System_String__Concat_62698808(mText, v37, 0LL);
                  UILabel__set_text(v35, v38, 0LL);
                }
              }
              mLabel = this->fields.mLabel;
              if ( mLabel )
              {
                v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mLabel, 0LL);
                GameObjectExtensions__SetLocalPositionX(v39, v25, 0LL);
                mLabel = this->fields.mLabel;
                if ( mLabel )
                {
                  UILabel__SetCondensedScale(mLabel, v30, 0, 0LL);
                  mLabel = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( mLabel )
                  {
                    MasterData_object = DataManager__GetMasterData_object_(
                                          (DataManager_o *)mLabel,
                                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_VoiceMaterialCondMaster___);
                    voiceId = info_k__BackingField->fields.voiceId;
                    v42 = (VoiceMaterialCondMaster_o *)MasterData_object;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                    v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47334904(voiceId, 0LL);
                    mLabel = (UILabel_o *)System_String__IsNullOrEmpty(v43, 0LL);
                    if ( ((unsigned __int8)mLabel & 1) != 0 )
                      goto LABEL_58;
                    svtVoiceId = info_k__BackingField->fields.svtVoiceId;
                    voicePrefix = info_k__BackingField->fields.voicePrefix;
                    v46 = info_k__BackingField->fields.voiceId;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                    mLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47334904(
                                            v46,
                                            0LL);
                    if ( !v42 )
                      goto LABEL_74;
                    mLabel = (UILabel_o *)VoiceMaterialCondMaster__IsVoicePlay(
                                            v42,
                                            svtVoiceId,
                                            voicePrefix,
                                            (System_String_o *)mLabel,
                                            limitCount,
                                            0LL);
                    if ( ((unsigned __int8)mLabel & 1) != 0 )
                    {
LABEL_58:
                      v47 = item->fields._info_k__BackingField;
                      if ( !v47 )
                        goto LABEL_74;
                      v47->fields.flag &= 0xFFFFFFFA;
                      mLabel = (UILabel_o *)this->fields.notSelectObj;
                      if ( !mLabel )
                        goto LABEL_74;
                      v48 = 0;
                    }
                    else
                    {
                      v49 = item->fields._info_k__BackingField;
                      if ( !v49 )
                        goto LABEL_74;
                      v49->fields.flag |= 5u;
                      mLabel = (UILabel_o *)this->fields.notSelectObj;
                      if ( !mLabel )
                        goto LABEL_74;
                      v48 = 1;
                    }
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLabel, v48, 0LL);
                    v50 = item->fields._info_k__BackingField;
                    if ( v50 )
                    {
                      mLabel = this->fields.notSelectLabel;
                      if ( mLabel )
                      {
                        UILabel__set_text(mLabel, v50->fields.playLimitCountMessage, 0LL);
                        mLabel = (UILabel_o *)MaterialEventLogListViewItemDraw_TypeInfo;
                        notSelectLabel = this->fields.notSelectLabel;
                        if ( !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
                        if ( notSelectLabel )
                        {
                          UILabel__SetCondensedScale(
                            notSelectLabel,
                            MaterialEventLogListViewItemDraw_TypeInfo->static_fields->LABEL_W_NOT_SELECT,
                            0,
                            0LL);
                          MaterialEventLogListViewItemDraw__SetFaceImage(this, item, (flag & 2) != 0, v52);
                          MaterialEventLogListViewItemDraw__SetLastTimeIcon(this, item, v53);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_74:
        sub_1BE4D28(mLabel, v17);
      }
    }
    else
    {
      v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !byte_4B612E1 )
      {
        sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v26);
        byte_4B612E1 = 1;
      }
      GameObjectExtensions__SetLocalScale(v27, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    }
  }
}


void __fastcall MaterialEventLogListViewItemDraw__SetLastTimeIcon(
        MaterialEventLogListViewItemDraw_o *this,
        MaterialEventLogListViewItem_o *item,
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
  __int64 v16; // x1
  Il2CppObject *v17; // x21
  UnityEngine_Component_o *mLastTimeIcon; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x20
  Il2CppClass *klass; // x9
  Il2CppClass *v22; // x8
  int interopData; // w9
  Il2CppClass *v24; // x8
  Il2CppClass *v25; // x9
  Il2CppClass *v26; // x8
  Il2CppClass *v27; // x8
  unsigned int v28; // w8
  MyRoomParamsManager_c *v29; // x0
  System_String_o *LastPlayTitle_k__BackingField; // x21
  System_String_o *v31; // x0
  Il2CppClass *v32; // x8
  BalanceConfig_c *v33; // x8
  MaterialEventLogListViewItemDraw___c_c *v34; // x0
  System_Int32_array *MainInterludeWarIdOnMaterial; // x21
  System_Func_int__bool__o *_9__26_0; // x22
  Il2CppObject *v37; // x23
  struct MaterialEventLogListViewItemDraw___c_StaticFields *static_fields; // x0
  Il2CppClass *v39; // x8
  Il2CppClass *v40; // x9
  Il2CppClass *v41; // x8
  MyRoomParamsManager_c *v42; // x0
  int32_t LastPlayQuestId_k__BackingField; // w22
  Il2CppClass *v44; // x8
  Il2CppClass *v45; // x8
  unsigned int bits; // w8
  Il2CppClass *v47; // x8
  __int64 v48; // x9
  int v49; // w9
  int v50; // w8
  Il2CppClass *v51; // x8
  Il2CppClass *v52; // x8
  Il2CppClass *v53; // x8
  Il2CppClass *v54; // x8
  BalanceConfig_c *v55; // x0
  System_Int32_array *v56; // x22
  System_Func_int__bool__o *v57; // x23
  Il2CppClass *v58; // x8
  Il2CppClass *v59; // x8
  Il2CppClass *v60; // x8
  Il2CppClass *v61; // x8
  unsigned int v62; // w8
  Il2CppClass *v63; // x8
  Il2CppClass *v64; // x8
  System_String_o *name; // x20
  System_String_o *v66; // x0

  if ( (byte_4B62149 & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, item);
    sub_1BE4ACC(&Method_BasicHelper_Any_int____77161864, v5);
    sub_1BE4ACC(&System_Func_int__bool__TypeInfo, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v8);
    sub_1BE4ACC(&MyRoomParamsManager_TypeInfo, v9);
    sub_1BE4ACC(&Method_MaterialEventLogListViewItemDraw___c__SetLastTimeIcon_b__26_0__, v10);
    sub_1BE4ACC(&Method_MaterialEventLogListViewItemDraw___c__DisplayClass26_0__SetLastTimeIcon_b__1__, v11);
    sub_1BE4ACC(&MaterialEventLogListViewItemDraw___c__DisplayClass26_0_TypeInfo, v12);
    sub_1BE4ACC(&MaterialEventLogListViewItemDraw___c_TypeInfo, v13);
    sub_1BE4ACC(&StringLiteral_13713/*"TUTORIAL_QUEST_ID1"*/, v14);
    sub_1BE4ACC(&StringLiteral_6503/*"FES_WAR_ID"*/, v15);
    sub_1BE4ACC(&StringLiteral_8703/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, v16);
    byte_4B62149 = 1;
  }
  v17 = (Il2CppObject *)sub_1BE4D18(MaterialEventLogListViewItemDraw___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor(v17, 0LL);
  if ( !v17 )
    goto LABEL_212;
  v17[1].klass = (Il2CppClass *)item;
  v20 = v17 + 1;
  sub_1BE4A70(&v17[1]);
  mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
  if ( !mLastTimeIcon )
    goto LABEL_212;
  mLastTimeIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mLastTimeIcon, 0LL);
  if ( !mLastTimeIcon )
    goto LABEL_212;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 0, 0LL);
  klass = v20->klass;
  if ( !v20->klass )
    return;
  v22 = klass->_1.klass;
  if ( !v22 )
    return;
  interopData = (int)klass->_1.interopData;
  if ( interopData == 1 )
  {
    v33 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v33 = BalanceConfig_TypeInfo;
    }
    v34 = MaterialEventLogListViewItemDraw___c_TypeInfo;
    MainInterludeWarIdOnMaterial = v33->static_fields->MainInterludeWarIdOnMaterial;
    if ( !MaterialEventLogListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw___c_TypeInfo);
      v34 = MaterialEventLogListViewItemDraw___c_TypeInfo;
    }
    _9__26_0 = v34->static_fields->__9__26_0;
    if ( !_9__26_0 )
    {
      if ( !v34->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v34);
        v34 = MaterialEventLogListViewItemDraw___c_TypeInfo;
      }
      v37 = (Il2CppObject *)v34->static_fields->__9;
      _9__26_0 = (System_Func_int__bool__o *)sub_1BE4D18(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        _9__26_0,
        v37,
        Method_MaterialEventLogListViewItemDraw___c__SetLastTimeIcon_b__26_0__,
        0LL);
      static_fields = MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields;
      static_fields->__9__26_0 = _9__26_0;
      sub_1BE4A70(&static_fields->__9__26_0);
    }
    mLastTimeIcon = (UnityEngine_Component_o *)BasicHelper__Any_int__49561084(
                                                 MainInterludeWarIdOnMaterial,
                                                 (System_Func_T__bool__o *)_9__26_0,
                                                 (const MethodInfo_2F43DFC *)Method_BasicHelper_Any_int____77161864);
    if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
      return;
    v39 = v20->klass;
    if ( !v20->klass )
      goto LABEL_212;
    v40 = v39->_1.klass;
    if ( !v40 )
      goto LABEL_212;
    if ( BYTE5(v40->_1.interfaceOffsets) )
    {
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_4B62178 )
      {
        sub_1BE4ACC(&MyRoomParamsManager_TypeInfo, v19);
        byte_4B62178 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v39 = v20->klass;
      if ( !v20->klass )
        goto LABEL_212;
      v40 = v39->_1.klass;
      if ( !v40 )
        goto LABEL_212;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 56LL) == *(&v40->_1.byval_arg.bits + 1) )
        goto LABEL_203;
    }
    if ( BYTE4(v40->_1.interfaceOffsets) )
    {
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        v39 = v20->klass;
        if ( !v20->klass )
          goto LABEL_212;
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v41 = v39->_1.klass;
      if ( !v41 )
        goto LABEL_212;
      mLastTimeIcon = *(UnityEngine_Component_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 40LL);
      if ( !mLastTimeIcon )
        goto LABEL_212;
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)mLastTimeIcon,
             v41->_1.byval_arg.bits,
             (const MethodInfo_35CF578 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        goto LABEL_203;
      }
    }
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_4B62174 )
    {
      sub_1BE4ACC(&MyRoomParamsManager_TypeInfo, v19);
      byte_4B62174 = 1;
    }
    v42 = MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v42 = MyRoomParamsManager_TypeInfo;
    }
    LastPlayQuestId_k__BackingField = v42->static_fields->_LastPlayQuestId_k__BackingField;
    mLastTimeIcon = (UnityEngine_Component_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_13713/*"TUTORIAL_QUEST_ID1"*/, 0LL);
    if ( LastPlayQuestId_k__BackingField == (_DWORD)mLastTimeIcon )
    {
      if ( !v20->klass )
        goto LABEL_212;
      v44 = v20->klass->_1.klass;
      if ( !v44 )
        goto LABEL_212;
      if ( !v44->_1.byval_arg.bits )
      {
        mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
        if ( !mLastTimeIcon )
          goto LABEL_212;
        mLastTimeIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mLastTimeIcon, 0LL);
        if ( !mLastTimeIcon )
          goto LABEL_212;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 1, 0LL);
      }
    }
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_4B62175 )
    {
      sub_1BE4ACC(&MyRoomParamsManager_TypeInfo, v19);
      byte_4B62175 = 1;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !v20->klass || (v45 = v20->klass->_1.klass) == 0LL )
LABEL_212:
      sub_1BE4D28(mLastTimeIcon, v19);
    bits = v45->_1.byval_arg.bits;
    if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) != bits )
    {
      if ( bits == -1 )
        return;
      if ( !LODWORD(mLastTimeIcon[9].monitor) )
        j_il2cpp_runtime_class_init_0(mLastTimeIcon);
      if ( !byte_4B62175 )
      {
        sub_1BE4ACC(&MyRoomParamsManager_TypeInfo, v19);
        byte_4B62175 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !v20->klass )
        goto LABEL_212;
      v47 = v20->klass->_1.klass;
      if ( !v47 )
        goto LABEL_212;
      v48 = 1374389535LL * *(int *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL);
      v49 = (v48 >> 37) + ((unsigned __int64)v48 >> 63);
      v50 = (signed int)v47->_1.byval_arg.bits / 1000 - 10;
LABEL_202:
      if ( v49 != v50 )
        return;
LABEL_203:
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
      goto LABEL_212;
    }
LABEL_155:
    if ( bits == -1 )
      return;
    goto LABEL_203;
  }
  if ( interopData == 3 )
  {
    if ( HIDWORD(v22->_1.byval_arg.data) )
    {
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_4B62179 )
      {
        sub_1BE4ACC(&MyRoomParamsManager_TypeInfo, v19);
        byte_4B62179 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !v20->klass )
        goto LABEL_212;
      v51 = v20->klass->_1.klass;
      if ( !v51 )
        goto LABEL_212;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 20LL) == HIDWORD(v51->_1.byval_arg.data) )
      {
        mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
        if ( !mLastTimeIcon )
          goto LABEL_212;
        mLastTimeIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mLastTimeIcon, 0LL);
        if ( !mLastTimeIcon )
          goto LABEL_212;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 1, 0LL);
      }
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !v20->klass )
      goto LABEL_212;
    v52 = v20->klass->_1.klass;
    if ( !v52 )
      goto LABEL_212;
    mLastTimeIcon = *(UnityEngine_Component_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 40LL);
    if ( !mLastTimeIcon )
      goto LABEL_212;
    mLastTimeIcon = (UnityEngine_Component_o *)System_Collections_Generic_List_int___Contains(
                                                 (System_Collections_Generic_List_int__o *)mLastTimeIcon,
                                                 v52->_1.byval_arg.bits,
                                                 (const MethodInfo_35CF578 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
      goto LABEL_203;
    if ( !v20->klass )
      goto LABEL_212;
    v53 = v20->klass->_1.klass;
    if ( !v53 )
      goto LABEL_212;
    if ( BYTE5(v53->_1.interfaceOffsets) )
    {
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_4B62178 )
      {
        sub_1BE4ACC(&MyRoomParamsManager_TypeInfo, v19);
        byte_4B62178 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !v20->klass )
        goto LABEL_212;
      v54 = v20->klass->_1.klass;
      if ( !v54 )
        goto LABEL_212;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 56LL) == *(&v54->_1.byval_arg.bits + 1) )
        goto LABEL_203;
    }
    v55 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v55 = BalanceConfig_TypeInfo;
    }
    v56 = v55->static_fields->MainInterludeWarIdOnMaterial;
    v57 = (System_Func_int__bool__o *)sub_1BE4D18(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v57,
      v17,
      Method_MaterialEventLogListViewItemDraw___c__DisplayClass26_0__SetLastTimeIcon_b__1__,
      0LL);
    if ( !BasicHelper__Any_int__49561084(
            v56,
            (System_Func_T__bool__o *)v57,
            (const MethodInfo_2F43DFC *)Method_BasicHelper_Any_int____77161864) )
      return;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_4B62175 )
    {
      sub_1BE4ACC(&MyRoomParamsManager_TypeInfo, v19);
      byte_4B62175 = 1;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !v20->klass )
      goto LABEL_212;
    v58 = v20->klass->_1.klass;
    if ( !v58 )
      goto LABEL_212;
    bits = v58->_1.byval_arg.bits;
    if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) != bits )
      return;
    goto LABEL_155;
  }
  if ( interopData != 5 )
    return;
  mLastTimeIcon = (UnityEngine_Component_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6503/*"FES_WAR_ID"*/, 0LL);
  v24 = v20->klass;
  if ( !v20->klass )
    goto LABEL_212;
  v25 = v24->_1.klass;
  if ( !v25 )
    goto LABEL_212;
  if ( (_DWORD)mLastTimeIcon != v25->_1.byval_arg.bits )
  {
    if ( BYTE5(v25->_1.interfaceOffsets) )
    {
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_4B62178 )
      {
        sub_1BE4ACC(&MyRoomParamsManager_TypeInfo, v19);
        byte_4B62178 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v24 = v20->klass;
      if ( !v20->klass )
        goto LABEL_212;
      v25 = v24->_1.klass;
      if ( !v25 )
        goto LABEL_212;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 56LL) == *(&v25->_1.byval_arg.bits + 1) )
        goto LABEL_203;
    }
    if ( !BYTE4(v25->_1.interfaceOffsets) )
    {
LABEL_174:
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_4B62174 )
      {
        sub_1BE4ACC(&MyRoomParamsManager_TypeInfo, v19);
        byte_4B62174 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !v20->klass )
        goto LABEL_212;
      v60 = v20->klass->_1.klass;
      if ( !v60 )
        goto LABEL_212;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 12LL) == *(&v60->_1.byval_arg.bits + 1) )
      {
        if ( !LODWORD(mLastTimeIcon[9].monitor) )
          j_il2cpp_runtime_class_init_0(mLastTimeIcon);
        if ( !byte_4B62175 )
        {
          sub_1BE4ACC(&MyRoomParamsManager_TypeInfo, v19);
          byte_4B62175 = 1;
        }
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
          mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        }
        if ( !v20->klass )
          goto LABEL_212;
        v61 = v20->klass->_1.klass;
        if ( !v61 )
          goto LABEL_212;
        v62 = v61->_1.byval_arg.bits;
        if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) == v62 && v62 != -1 )
          goto LABEL_203;
      }
      if ( !LODWORD(mLastTimeIcon[9].monitor) )
        j_il2cpp_runtime_class_init_0(mLastTimeIcon);
      if ( !byte_4B62177 )
      {
        sub_1BE4ACC(&MyRoomParamsManager_TypeInfo, v19);
        byte_4B62177 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !v20->klass )
        goto LABEL_212;
      v63 = v20->klass->_1.klass;
      if ( !v63 )
        goto LABEL_212;
      v50 = *(&v63->_1.byval_arg.bits + 1);
      v49 = *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 32LL);
      goto LABEL_202;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v24 = v20->klass;
      if ( !v20->klass )
        goto LABEL_212;
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    v59 = v24->_1.klass;
    if ( v59 )
    {
      mLastTimeIcon = *(UnityEngine_Component_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 40LL);
      if ( mLastTimeIcon )
      {
        if ( System_Collections_Generic_List_int___Contains(
               (System_Collections_Generic_List_int__o *)mLastTimeIcon,
               v59->_1.byval_arg.bits,
               (const MethodInfo_35CF578 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          goto LABEL_203;
        }
        goto LABEL_174;
      }
    }
    goto LABEL_212;
  }
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  if ( !byte_4B62174 )
  {
    sub_1BE4ACC(&MyRoomParamsManager_TypeInfo, v19);
    byte_4B62174 = 1;
  }
  mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
  }
  if ( !v20->klass )
    goto LABEL_212;
  v26 = v20->klass->_1.klass;
  if ( !v26 )
    goto LABEL_212;
  if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 12LL) == *(&v26->_1.byval_arg.bits + 1) )
  {
    if ( !LODWORD(mLastTimeIcon[9].monitor) )
      j_il2cpp_runtime_class_init_0(mLastTimeIcon);
    if ( !byte_4B62175 )
    {
      sub_1BE4ACC(&MyRoomParamsManager_TypeInfo, v19);
      byte_4B62175 = 1;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !v20->klass )
      goto LABEL_212;
    v27 = v20->klass->_1.klass;
    if ( !v27 )
      goto LABEL_212;
    v28 = v27->_1.byval_arg.bits;
    if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) == v28 && v28 != -1 )
    {
      if ( !LODWORD(mLastTimeIcon[9].monitor) )
        j_il2cpp_runtime_class_init_0(mLastTimeIcon);
      if ( !byte_4B62176 )
      {
        sub_1BE4ACC(&MyRoomParamsManager_TypeInfo, v19);
        byte_4B62176 = 1;
      }
      v29 = MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        v29 = MyRoomParamsManager_TypeInfo;
      }
      LastPlayTitle_k__BackingField = v29->static_fields->_LastPlayTitle_k__BackingField;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v31 = LocalizationManager__Get((System_String_o *)StringLiteral_8703/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
      mLastTimeIcon = (UnityEngine_Component_o *)System_String__op_Equality(LastPlayTitle_k__BackingField, v31, 0LL);
      if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
      {
        if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        if ( !byte_4B62176 )
        {
          sub_1BE4ACC(&MyRoomParamsManager_TypeInfo, v19);
          byte_4B62176 = 1;
        }
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
          mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        }
        if ( !v20->klass )
          goto LABEL_212;
        v32 = v20->klass->_1.klass;
        if ( !v32 )
          goto LABEL_212;
        if ( !System_String__op_Equality(
                *(System_String_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 24LL),
                (System_String_o *)v32->_1.name,
                0LL) )
          return;
        goto LABEL_203;
      }
      if ( !v20->klass )
        goto LABEL_212;
      v64 = v20->klass->_1.klass;
      if ( !v64 )
        goto LABEL_212;
      name = (System_String_o *)v64->_1.name;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v66 = LocalizationManager__Get((System_String_o *)StringLiteral_8703/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
      if ( System_String__op_Inequality(name, v66, 0LL) )
        goto LABEL_203;
    }
  }
}


void __fastcall MaterialEventLogListViewItemDraw___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4B6214B & 1) == 0 )
  {
    sub_1BE4ACC(&MaterialEventLogListViewItemDraw___c_TypeInfo, v1);
    byte_4B6214B = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(MaterialEventLogListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct MaterialEventLogListViewItemDraw___c_o *)v2;
  sub_1BE4A70(MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields);
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

  if ( (byte_4B6214C & 1) == 0 )
  {
    sub_1BE4ACC(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&interludeWarId);
    byte_4B6214C = 1;
  }
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  if ( !byte_4B62175 )
  {
    sub_1BE4ACC(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&interludeWarId);
    byte_4B62175 = 1;
  }
  v4 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
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
    sub_1BE4D28(this, interludeWarId);
  return info_k__BackingField->fields.war_id == interludeWarId;
}