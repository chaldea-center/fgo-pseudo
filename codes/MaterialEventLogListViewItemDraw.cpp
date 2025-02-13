void __fastcall MaterialEventLogListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct MaterialEventLogListViewItemDraw_StaticFields *static_fields; // x0
  struct MaterialEventLogListViewItemDraw_StaticFields *v3; // x8

  if ( (byte_4BD7A63 & 1) == 0 )
  {
    sub_1C21E38(&MaterialEventLogListViewItemDraw_TypeInfo);
    sub_1C21E38(&StringLiteral_20727/*"img_menuboard_03"*/);
    sub_1C21E38(&StringLiteral_20726/*"img_menuboard_01"*/);
    byte_4BD7A63 = 1;
  }
  MaterialEventLogListViewItemDraw_TypeInfo->static_fields->BASE_SP_NAME_DEFAULT = (struct System_String_o *)StringLiteral_20726/*"img_menuboard_01"*/;
  sub_1C21DDC(MaterialEventLogListViewItemDraw_TypeInfo->static_fields, StringLiteral_20726/*"img_menuboard_01"*/);
  v1 = StringLiteral_20727/*"img_menuboard_03"*/;
  static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
  static_fields->BASE_SP_NAME_SVT = (struct System_String_o *)StringLiteral_20727/*"img_menuboard_03"*/;
  sub_1C21DDC(&static_fields->BASE_SP_NAME_SVT, v1);
  v3 = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&v3->LABEL_X_DEFAULT = 0x4230000040000000LL;
  *(_OWORD *)&v3->LABEL_W_DEFAULT = xmmword_BFF6A0;
  *(_OWORD *)&v3->LABEL_MAX_LINE_SVT = xmmword_BFEAF0;
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
    sub_1C22094(0LL, method);
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
      sub_1C22094(this, item);
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
    sub_1C22094(0LL, isSelect);
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
  if ( (byte_4BD7A61 & 1) == 0 )
  {
    this = (MaterialEventLogListViewItemDraw_o *)sub_1C21E38(&MaterialEventLogListViewItemDraw_TypeInfo);
    byte_4BD7A61 = 1;
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
    sub_1C22094(this, item);
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
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x25
  UnityEngine_GameObject_o *gameObject; // x22
  __int64 v11; // x1
  int32_t flag; // w26
  UISprite_o *mBaseSp; // x22
  UILabel_o *mLabel; // x0
  System_String_o **onChange; // x8
  MaterialEventLogListViewItemDraw_c *v16; // x0
  struct MaterialEventLogListViewItemDraw_StaticFields *static_fields; // x8
  __int64 v18; // x9
  float v19; // s8
  UnityEngine_GameObject_o *v20; // x19
  __int64 v21; // x10
  __int64 v22; // x9
  int32_t v23; // w22
  __int64 v24; // x9
  int32_t *p_LABEL_MAX_LINE_MAP; // x8
  int32_t v26; // w23
  struct MaterialEventLogListViewItem_Info_o *v27; // x8
  struct UILabel_o *v28; // x23
  System_String_o *mText; // x24
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  Il2CppObject *MasterData_object; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x23
  VoiceMaterialCondMaster_o *v35; // x22
  System_String_o *v36; // x0
  int32_t svtVoiceId; // w24
  int32_t voicePrefix; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v39; // x25
  struct MaterialEventLogListViewItem_Info_o *v40; // x8
  bool v41; // w1
  struct MaterialEventLogListViewItem_Info_o *v42; // x8
  struct MaterialEventLogListViewItem_Info_o *v43; // x8
  UILabel_o *notSelectLabel; // x21
  const MethodInfo *v45; // x3
  const MethodInfo *v46; // x2
  __int64 v47; // x10

  if ( (byte_4BD7A60 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_VoiceMaterialCondMaster___);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&MaterialEventLogListViewItemDraw_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_8744/*"MATERIAL_PROGRESS_SUFFIX"*/);
    byte_4BD7A60 = 1;
  }
  if ( item )
  {
    info_k__BackingField = item->fields._info_k__BackingField;
    if ( info_k__BackingField )
    {
      if ( mode )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !byte_4BD6BB6 )
        {
          sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
          byte_4BD6BB6 = 1;
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
        v16 = MaterialEventLogListViewItemDraw_TypeInfo;
        if ( MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          v18 = 16LL;
          if ( (flag & 2) != 0 )
            v18 = 20LL;
          v19 = *(float *)((char *)&static_fields->BASE_SP_NAME_DEFAULT + v18);
        }
        else
        {
          j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
          v16 = MaterialEventLogListViewItemDraw_TypeInfo;
          v21 = 16LL;
          static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          if ( (flag & 2) != 0 )
            v21 = 20LL;
          v19 = *(float *)((char *)&static_fields->BASE_SP_NAME_DEFAULT + v21);
          if ( !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
            v16 = MaterialEventLogListViewItemDraw_TypeInfo;
            v47 = 28LL;
            static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
            if ( (flag & 2) != 0 )
              v47 = 32LL;
            v23 = *(_DWORD *)((char *)&static_fields->BASE_SP_NAME_DEFAULT + v47);
            if ( !MaterialEventLogListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw_TypeInfo);
              v16 = MaterialEventLogListViewItemDraw_TypeInfo;
              static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
            }
            goto LABEL_29;
          }
        }
        v22 = 28LL;
        if ( (flag & 2) != 0 )
          v22 = 32LL;
        v23 = *(_DWORD *)((char *)&static_fields->BASE_SP_NAME_DEFAULT + v22);
LABEL_29:
        v24 = 36LL;
        if ( (flag & 2) != 0 )
          v24 = 40LL;
        if ( item->fields._kind_k__BackingField == 5 )
        {
          if ( !v16->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v16);
            static_fields = MaterialEventLogListViewItemDraw_TypeInfo->static_fields;
          }
          p_LABEL_MAX_LINE_MAP = &static_fields->LABEL_MAX_LINE_MAP;
        }
        else
        {
          p_LABEL_MAX_LINE_MAP = (int32_t *)((char *)static_fields + v24);
        }
        mLabel = this->fields.mLabel;
        if ( mLabel )
        {
          v26 = *p_LABEL_MAX_LINE_MAP;
          UILabel__set_overflowMethod(mLabel, 2, 0LL);
          mLabel = this->fields.mLabel;
          if ( mLabel )
          {
            UILabel__set_maxLineCount(mLabel, v26, 0LL);
            mLabel = this->fields.mLabel;
            if ( mLabel )
            {
              UILabel__set_text(mLabel, info_k__BackingField->fields.str, 0LL);
              if ( (flag & 2) == 0
                && !info_k__BackingField->fields.isMovedQuest
                && item->fields._kind_k__BackingField == 5 )
              {
                v27 = item->fields._info_k__BackingField;
                if ( !v27 )
                  goto LABEL_74;
                if ( v27->fields.clear_phase_max < v27->fields.phase_max )
                {
                  v28 = this->fields.mLabel;
                  if ( !v28 )
                    goto LABEL_74;
                  mText = v28->fields.mText;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_8744/*"MATERIAL_PROGRESS_SUFFIX"*/, 0LL);
                  v31 = System_String__Concat_63115476(mText, v30, 0LL);
                  UILabel__set_text(v28, v31, 0LL);
                }
              }
              mLabel = this->fields.mLabel;
              if ( mLabel )
              {
                v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mLabel, 0LL);
                GameObjectExtensions__SetLocalPositionX(v32, v19, 0LL);
                mLabel = this->fields.mLabel;
                if ( mLabel )
                {
                  UILabel__SetCondensedScale(mLabel, v23, 0, 0LL);
                  mLabel = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( mLabel )
                  {
                    MasterData_object = DataManager__GetMasterData_object_(
                                          (DataManager_o *)mLabel,
                                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_VoiceMaterialCondMaster___);
                    voiceId = info_k__BackingField->fields.voiceId;
                    v35 = (VoiceMaterialCondMaster_o *)MasterData_object;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                    v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47657208(voiceId, 0LL);
                    mLabel = (UILabel_o *)System_String__IsNullOrEmpty(v36, 0LL);
                    if ( ((unsigned __int8)mLabel & 1) != 0 )
                      goto LABEL_58;
                    svtVoiceId = info_k__BackingField->fields.svtVoiceId;
                    voicePrefix = info_k__BackingField->fields.voicePrefix;
                    v39 = info_k__BackingField->fields.voiceId;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                    mLabel = (UILabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47657208(
                                            v39,
                                            0LL);
                    if ( !v35 )
                      goto LABEL_74;
                    mLabel = (UILabel_o *)VoiceMaterialCondMaster__IsVoicePlay(
                                            v35,
                                            svtVoiceId,
                                            voicePrefix,
                                            (System_String_o *)mLabel,
                                            limitCount,
                                            0LL);
                    if ( ((unsigned __int8)mLabel & 1) != 0 )
                    {
LABEL_58:
                      v40 = item->fields._info_k__BackingField;
                      if ( !v40 )
                        goto LABEL_74;
                      v40->fields.flag &= 0xFFFFFFFA;
                      mLabel = (UILabel_o *)this->fields.notSelectObj;
                      if ( !mLabel )
                        goto LABEL_74;
                      v41 = 0;
                    }
                    else
                    {
                      v42 = item->fields._info_k__BackingField;
                      if ( !v42 )
                        goto LABEL_74;
                      v42->fields.flag |= 5u;
                      mLabel = (UILabel_o *)this->fields.notSelectObj;
                      if ( !mLabel )
                        goto LABEL_74;
                      v41 = 1;
                    }
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLabel, v41, 0LL);
                    v43 = item->fields._info_k__BackingField;
                    if ( v43 )
                    {
                      mLabel = this->fields.notSelectLabel;
                      if ( mLabel )
                      {
                        UILabel__set_text(mLabel, v43->fields.playLimitCountMessage, 0LL);
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
                          MaterialEventLogListViewItemDraw__SetFaceImage(this, item, (flag & 2) != 0, v45);
                          MaterialEventLogListViewItemDraw__SetLastTimeIcon(this, item, v46);
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
        sub_1C22094(mLabel, v11);
      }
    }
    else
    {
      v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !byte_4BD6BB1 )
      {
        sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
        byte_4BD6BB1 = 1;
      }
      GameObjectExtensions__SetLocalScale(v20, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    }
  }
}


void __fastcall MaterialEventLogListViewItemDraw__SetLastTimeIcon(
        MaterialEventLogListViewItemDraw_o *this,
        MaterialEventLogListViewItem_o *item,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  UnityEngine_Component_o *mLastTimeIcon; // x0
  __int64 v7; // x1
  Il2CppObject *v8; // x20
  Il2CppClass *klass; // x9
  Il2CppClass *v10; // x8
  int interopData; // w9
  Il2CppClass *v12; // x8
  Il2CppClass *v13; // x9
  Il2CppClass *v14; // x8
  Il2CppClass *v15; // x8
  unsigned int v16; // w8
  MyRoomParamsManager_c *v17; // x0
  System_String_o *LastPlayTitle_k__BackingField; // x21
  System_String_o *v19; // x0
  Il2CppClass *v20; // x8
  BalanceConfig_c *v21; // x8
  MaterialEventLogListViewItemDraw___c_c *v22; // x0
  System_Int32_array *MainInterludeWarIdOnMaterial; // x21
  System_Func_int__bool__o *_9__26_0; // x22
  Il2CppObject *v25; // x23
  struct MaterialEventLogListViewItemDraw___c_StaticFields *static_fields; // x0
  Il2CppClass *v27; // x8
  Il2CppClass *v28; // x9
  Il2CppClass *v29; // x8
  MyRoomParamsManager_c *v30; // x0
  int32_t LastPlayQuestId_k__BackingField; // w22
  Il2CppClass *v32; // x8
  Il2CppClass *v33; // x8
  unsigned int bits; // w8
  Il2CppClass *v35; // x8
  __int64 v36; // x9
  int v37; // w9
  int v38; // w8
  Il2CppClass *v39; // x8
  Il2CppClass *v40; // x8
  Il2CppClass *v41; // x8
  Il2CppClass *v42; // x8
  BalanceConfig_c *v43; // x0
  System_Int32_array *v44; // x22
  System_Func_int__bool__o *v45; // x23
  Il2CppClass *v46; // x8
  Il2CppClass *v47; // x8
  Il2CppClass *v48; // x8
  Il2CppClass *v49; // x8
  unsigned int v50; // w8
  Il2CppClass *v51; // x8
  Il2CppClass *v52; // x8
  System_String_o *name; // x20
  System_String_o *v54; // x0

  if ( (byte_4BD7A62 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_BasicHelper_Any_int____77629760);
    sub_1C21E38(&System_Func_int__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    sub_1C21E38(&Method_MaterialEventLogListViewItemDraw___c__SetLastTimeIcon_b__26_0__);
    sub_1C21E38(&Method_MaterialEventLogListViewItemDraw___c__DisplayClass26_0__SetLastTimeIcon_b__1__);
    sub_1C21E38(&MaterialEventLogListViewItemDraw___c__DisplayClass26_0_TypeInfo);
    sub_1C21E38(&MaterialEventLogListViewItemDraw___c_TypeInfo);
    sub_1C21E38(&StringLiteral_13769/*"TUTORIAL_QUEST_ID1"*/);
    sub_1C21E38(&StringLiteral_6535/*"FES_WAR_ID"*/);
    sub_1C21E38(&StringLiteral_8741/*"MATERIAL_MAP_EPILOGUE_TITLE"*/);
    byte_4BD7A62 = 1;
  }
  v5 = (Il2CppObject *)sub_1C22084(MaterialEventLogListViewItemDraw___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_212;
  v5[1].klass = (Il2CppClass *)item;
  v8 = v5 + 1;
  sub_1C21DDC(&v5[1], item);
  mLastTimeIcon = (UnityEngine_Component_o *)this->fields.mLastTimeIcon;
  if ( !mLastTimeIcon )
    goto LABEL_212;
  mLastTimeIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mLastTimeIcon, 0LL);
  if ( !mLastTimeIcon )
    goto LABEL_212;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mLastTimeIcon, 0, 0LL);
  klass = v8->klass;
  if ( !v8->klass )
    return;
  v10 = klass->_1.klass;
  if ( !v10 )
    return;
  interopData = (int)klass->_1.interopData;
  if ( interopData == 1 )
  {
    v21 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v21 = BalanceConfig_TypeInfo;
    }
    v22 = MaterialEventLogListViewItemDraw___c_TypeInfo;
    MainInterludeWarIdOnMaterial = v21->static_fields->MainInterludeWarIdOnMaterial;
    if ( !MaterialEventLogListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialEventLogListViewItemDraw___c_TypeInfo);
      v22 = MaterialEventLogListViewItemDraw___c_TypeInfo;
    }
    _9__26_0 = v22->static_fields->__9__26_0;
    if ( !_9__26_0 )
    {
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = MaterialEventLogListViewItemDraw___c_TypeInfo;
      }
      v25 = (Il2CppObject *)v22->static_fields->__9;
      _9__26_0 = (System_Func_int__bool__o *)sub_1C22084(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        _9__26_0,
        v25,
        Method_MaterialEventLogListViewItemDraw___c__SetLastTimeIcon_b__26_0__,
        0LL);
      static_fields = MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields;
      static_fields->__9__26_0 = _9__26_0;
      sub_1C21DDC(&static_fields->__9__26_0, _9__26_0);
    }
    mLastTimeIcon = (UnityEngine_Component_o *)BasicHelper__Any_int__49916656(
                                                 MainInterludeWarIdOnMaterial,
                                                 (System_Func_T__bool__o *)_9__26_0,
                                                 (const MethodInfo_2F9AAF0 *)Method_BasicHelper_Any_int____77629760);
    if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
      return;
    v27 = v8->klass;
    if ( !v8->klass )
      goto LABEL_212;
    v28 = v27->_1.klass;
    if ( !v28 )
      goto LABEL_212;
    if ( BYTE5(v28->_1.interfaceOffsets) )
    {
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_4BD7A91 )
      {
        sub_1C21E38(&MyRoomParamsManager_TypeInfo);
        byte_4BD7A91 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v27 = v8->klass;
      if ( !v8->klass )
        goto LABEL_212;
      v28 = v27->_1.klass;
      if ( !v28 )
        goto LABEL_212;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 56LL) == *(&v28->_1.byval_arg.bits + 1) )
        goto LABEL_203;
    }
    if ( BYTE4(v28->_1.interfaceOffsets) )
    {
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        v27 = v8->klass;
        if ( !v8->klass )
          goto LABEL_212;
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v29 = v27->_1.klass;
      if ( !v29 )
        goto LABEL_212;
      mLastTimeIcon = *(UnityEngine_Component_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 40LL);
      if ( !mLastTimeIcon )
        goto LABEL_212;
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)mLastTimeIcon,
             v29->_1.byval_arg.bits,
             (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        goto LABEL_203;
      }
    }
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_4BD7A8D )
    {
      sub_1C21E38(&MyRoomParamsManager_TypeInfo);
      byte_4BD7A8D = 1;
    }
    v30 = MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v30 = MyRoomParamsManager_TypeInfo;
    }
    LastPlayQuestId_k__BackingField = v30->static_fields->_LastPlayQuestId_k__BackingField;
    mLastTimeIcon = (UnityEngine_Component_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_13769/*"TUTORIAL_QUEST_ID1"*/, 0LL);
    if ( LastPlayQuestId_k__BackingField == (_DWORD)mLastTimeIcon )
    {
      if ( !v8->klass )
        goto LABEL_212;
      v32 = v8->klass->_1.klass;
      if ( !v32 )
        goto LABEL_212;
      if ( !v32->_1.byval_arg.bits )
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
    if ( !byte_4BD7A8E )
    {
      sub_1C21E38(&MyRoomParamsManager_TypeInfo);
      byte_4BD7A8E = 1;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !v8->klass || (v33 = v8->klass->_1.klass) == 0LL )
LABEL_212:
      sub_1C22094(mLastTimeIcon, v7);
    bits = v33->_1.byval_arg.bits;
    if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) != bits )
    {
      if ( bits == -1 )
        return;
      if ( !LODWORD(mLastTimeIcon[9].monitor) )
        j_il2cpp_runtime_class_init_0(mLastTimeIcon);
      if ( !byte_4BD7A8E )
      {
        sub_1C21E38(&MyRoomParamsManager_TypeInfo);
        byte_4BD7A8E = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !v8->klass )
        goto LABEL_212;
      v35 = v8->klass->_1.klass;
      if ( !v35 )
        goto LABEL_212;
      v36 = 1374389535LL * *(int *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL);
      v37 = (v36 >> 37) + ((unsigned __int64)v36 >> 63);
      v38 = (signed int)v35->_1.byval_arg.bits / 1000 - 10;
LABEL_202:
      if ( v37 != v38 )
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
    if ( HIDWORD(v10->_1.byval_arg.data) )
    {
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_4BD7A92 )
      {
        sub_1C21E38(&MyRoomParamsManager_TypeInfo);
        byte_4BD7A92 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !v8->klass )
        goto LABEL_212;
      v39 = v8->klass->_1.klass;
      if ( !v39 )
        goto LABEL_212;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 20LL) == HIDWORD(v39->_1.byval_arg.data) )
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
    if ( !v8->klass )
      goto LABEL_212;
    v40 = v8->klass->_1.klass;
    if ( !v40 )
      goto LABEL_212;
    mLastTimeIcon = *(UnityEngine_Component_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 40LL);
    if ( !mLastTimeIcon )
      goto LABEL_212;
    mLastTimeIcon = (UnityEngine_Component_o *)System_Collections_Generic_List_int___Contains(
                                                 (System_Collections_Generic_List_int__o *)mLastTimeIcon,
                                                 v40->_1.byval_arg.bits,
                                                 (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
      goto LABEL_203;
    if ( !v8->klass )
      goto LABEL_212;
    v41 = v8->klass->_1.klass;
    if ( !v41 )
      goto LABEL_212;
    if ( BYTE5(v41->_1.interfaceOffsets) )
    {
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_4BD7A91 )
      {
        sub_1C21E38(&MyRoomParamsManager_TypeInfo);
        byte_4BD7A91 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !v8->klass )
        goto LABEL_212;
      v42 = v8->klass->_1.klass;
      if ( !v42 )
        goto LABEL_212;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 56LL) == *(&v42->_1.byval_arg.bits + 1) )
        goto LABEL_203;
    }
    v43 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v43 = BalanceConfig_TypeInfo;
    }
    v44 = v43->static_fields->MainInterludeWarIdOnMaterial;
    v45 = (System_Func_int__bool__o *)sub_1C22084(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v45,
      v5,
      Method_MaterialEventLogListViewItemDraw___c__DisplayClass26_0__SetLastTimeIcon_b__1__,
      0LL);
    if ( !BasicHelper__Any_int__49916656(
            v44,
            (System_Func_T__bool__o *)v45,
            (const MethodInfo_2F9AAF0 *)Method_BasicHelper_Any_int____77629760) )
      return;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_4BD7A8E )
    {
      sub_1C21E38(&MyRoomParamsManager_TypeInfo);
      byte_4BD7A8E = 1;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !v8->klass )
      goto LABEL_212;
    v46 = v8->klass->_1.klass;
    if ( !v46 )
      goto LABEL_212;
    bits = v46->_1.byval_arg.bits;
    if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) != bits )
      return;
    goto LABEL_155;
  }
  if ( interopData != 5 )
    return;
  mLastTimeIcon = (UnityEngine_Component_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6535/*"FES_WAR_ID"*/, 0LL);
  v12 = v8->klass;
  if ( !v8->klass )
    goto LABEL_212;
  v13 = v12->_1.klass;
  if ( !v13 )
    goto LABEL_212;
  if ( (_DWORD)mLastTimeIcon != v13->_1.byval_arg.bits )
  {
    if ( BYTE5(v13->_1.interfaceOffsets) )
    {
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_4BD7A91 )
      {
        sub_1C21E38(&MyRoomParamsManager_TypeInfo);
        byte_4BD7A91 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      v12 = v8->klass;
      if ( !v8->klass )
        goto LABEL_212;
      v13 = v12->_1.klass;
      if ( !v13 )
        goto LABEL_212;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 56LL) == *(&v13->_1.byval_arg.bits + 1) )
        goto LABEL_203;
    }
    if ( !BYTE4(v13->_1.interfaceOffsets) )
    {
LABEL_174:
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_4BD7A8D )
      {
        sub_1C21E38(&MyRoomParamsManager_TypeInfo);
        byte_4BD7A8D = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !v8->klass )
        goto LABEL_212;
      v48 = v8->klass->_1.klass;
      if ( !v48 )
        goto LABEL_212;
      if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 12LL) == *(&v48->_1.byval_arg.bits + 1) )
      {
        if ( !LODWORD(mLastTimeIcon[9].monitor) )
          j_il2cpp_runtime_class_init_0(mLastTimeIcon);
        if ( !byte_4BD7A8E )
        {
          sub_1C21E38(&MyRoomParamsManager_TypeInfo);
          byte_4BD7A8E = 1;
        }
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
          mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        }
        if ( !v8->klass )
          goto LABEL_212;
        v49 = v8->klass->_1.klass;
        if ( !v49 )
          goto LABEL_212;
        v50 = v49->_1.byval_arg.bits;
        if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) == v50 && v50 != -1 )
          goto LABEL_203;
      }
      if ( !LODWORD(mLastTimeIcon[9].monitor) )
        j_il2cpp_runtime_class_init_0(mLastTimeIcon);
      if ( !byte_4BD7A90 )
      {
        sub_1C21E38(&MyRoomParamsManager_TypeInfo);
        byte_4BD7A90 = 1;
      }
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
      }
      if ( !v8->klass )
        goto LABEL_212;
      v51 = v8->klass->_1.klass;
      if ( !v51 )
        goto LABEL_212;
      v38 = *(&v51->_1.byval_arg.bits + 1);
      v37 = *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 32LL);
      goto LABEL_202;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v12 = v8->klass;
      if ( !v8->klass )
        goto LABEL_212;
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    v47 = v12->_1.klass;
    if ( v47 )
    {
      mLastTimeIcon = *(UnityEngine_Component_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 40LL);
      if ( mLastTimeIcon )
      {
        if ( System_Collections_Generic_List_int___Contains(
               (System_Collections_Generic_List_int__o *)mLastTimeIcon,
               v47->_1.byval_arg.bits,
               (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__) )
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
  if ( !byte_4BD7A8D )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    byte_4BD7A8D = 1;
  }
  mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
  }
  if ( !v8->klass )
    goto LABEL_212;
  v14 = v8->klass->_1.klass;
  if ( !v14 )
    goto LABEL_212;
  if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 12LL) == *(&v14->_1.byval_arg.bits + 1) )
  {
    if ( !LODWORD(mLastTimeIcon[9].monitor) )
      j_il2cpp_runtime_class_init_0(mLastTimeIcon);
    if ( !byte_4BD7A8E )
    {
      sub_1C21E38(&MyRoomParamsManager_TypeInfo);
      byte_4BD7A8E = 1;
    }
    mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
    }
    if ( !v8->klass )
      goto LABEL_212;
    v15 = v8->klass->_1.klass;
    if ( !v15 )
      goto LABEL_212;
    v16 = v15->_1.byval_arg.bits;
    if ( *(_DWORD *)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 16LL) == v16 && v16 != -1 )
    {
      if ( !LODWORD(mLastTimeIcon[9].monitor) )
        j_il2cpp_runtime_class_init_0(mLastTimeIcon);
      if ( !byte_4BD7A8F )
      {
        sub_1C21E38(&MyRoomParamsManager_TypeInfo);
        byte_4BD7A8F = 1;
      }
      v17 = MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        v17 = MyRoomParamsManager_TypeInfo;
      }
      LastPlayTitle_k__BackingField = v17->static_fields->_LastPlayTitle_k__BackingField;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_8741/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
      mLastTimeIcon = (UnityEngine_Component_o *)System_String__op_Equality(LastPlayTitle_k__BackingField, v19, 0LL);
      if ( ((unsigned __int8)mLastTimeIcon & 1) != 0 )
      {
        if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        if ( !byte_4BD7A8F )
        {
          sub_1C21E38(&MyRoomParamsManager_TypeInfo);
          byte_4BD7A8F = 1;
        }
        mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
          mLastTimeIcon = (UnityEngine_Component_o *)MyRoomParamsManager_TypeInfo;
        }
        if ( !v8->klass )
          goto LABEL_212;
        v20 = v8->klass->_1.klass;
        if ( !v20 )
          goto LABEL_212;
        if ( !System_String__op_Equality(
                *(System_String_o **)(*(_QWORD *)&mLastTimeIcon[7].fields.m_CachedPtr + 24LL),
                (System_String_o *)v20->_1.name,
                0LL) )
          return;
        goto LABEL_203;
      }
      if ( !v8->klass )
        goto LABEL_212;
      v52 = v8->klass->_1.klass;
      if ( !v52 )
        goto LABEL_212;
      name = (System_String_o *)v52->_1.name;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v54 = LocalizationManager__Get((System_String_o *)StringLiteral_8741/*"MATERIAL_MAP_EPILOGUE_TITLE"*/, 0LL);
      if ( System_String__op_Inequality(name, v54, 0LL) )
        goto LABEL_203;
    }
  }
}


void __fastcall MaterialEventLogListViewItemDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4BD7A64 & 1) == 0 )
  {
    sub_1C21E38(&MaterialEventLogListViewItemDraw___c_TypeInfo);
    byte_4BD7A64 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(MaterialEventLogListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct MaterialEventLogListViewItemDraw___c_o *)v1;
  sub_1C21DDC(MaterialEventLogListViewItemDraw___c_TypeInfo->static_fields, v1);
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

  if ( (byte_4BD7A65 & 1) == 0 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    byte_4BD7A65 = 1;
  }
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  if ( !byte_4BD7A8E )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    byte_4BD7A8E = 1;
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
    sub_1C22094(this, interludeWarId);
  return info_k__BackingField->fields.war_id == interludeWarId;
}