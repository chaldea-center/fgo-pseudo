void SkillUpExtraResultWindowComponent___ctor(SkillUpExtraResultWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_c *v4; // x0

  if ( (byte_596A195 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596A195 = 1;
  }
  v4 = BaseDialog_TypeInfo;
  this->fields.detailTextFontSize = 16;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SkillUpExtraResultWindowComponent__CloseToNext(
        SkillUpExtraResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Action_o *v14; // x20

  if ( (byte_596A194 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SkillUpExtraResultWindowComponent___c__DisplayClass22_0__CloseToNext_b__0__);
    sub_2213A60(&SkillUpExtraResultWindowComponent___c__DisplayClass22_0_TypeInfo);
    byte_596A194 = 1;
  }
  v5 = sub_2213CCC(SkillUpExtraResultWindowComponent___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  v14 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_SkillUpExtraResultWindowComponent___c__DisplayClass22_0__CloseToNext_b__0__,
    0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v14, 0);
}


// local variable allocation has failed, the output may be wrong!
void SkillUpExtraResultWindowComponent__OpenSkillChangeResultInfo(
        SkillUpExtraResultWindowComponent_o *this,
        int32_t oldSkillId,
        int32_t oldSkillLv,
        int32_t nowSkillId,
        int32_t nowSkillLv,
        int32_t exNowSkillId,
        int32_t exNowSkillLv,
        ServantCostumeEntity_o *svtCostumeEnt,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UILabel_o *skillChangeInfoDetailOld; // x0
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  UISprite_o *windowBgSprite; // x27
  UnityEngine_Component_o *skillChangeInfoTitle; // x0
  Il2CppObject *v25; // x27
  Il2CppObject *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  System_String_o *v29; // x27
  System_String_o *v30; // x0
  UILabel_o *v31; // x27
  const MethodInfo *v32; // x7
  int32_t id; // [xsp+10h] [xbp-70h] BYREF
  int32_t svtId; // [xsp+14h] [xbp-6Ch] BYREF
  System_String_o *resultText; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596A191 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SkillUpExtraResultWindowComponent_OpenSkillChangeResultInfo__);
    sub_2213A60(&StringLiteral_21345/*"img_combine_arrow_sp"*/);
    sub_2213A60(&StringLiteral_3989/*"COSTUME_CHANGE_SKILL_TITLE_{0}_{1}"*/);
    sub_2213A60(&StringLiteral_21572/*"img_skillwindow_sp"*/);
    sub_2213A60(&StringLiteral_21285/*"img_arrow_change"*/);
    sub_2213A60(&StringLiteral_3988/*"COSTUME_CHANGE_SKILL_TITLE"*/);
    byte_596A191 = 1;
  }
  skillChangeInfoDetailOld = this->fields.skillChangeInfoDetailOld;
  resultText = 0;
  if ( !skillChangeInfoDetailOld )
    goto LABEL_20;
  UILabel__set_fontSize(skillChangeInfoDetailOld, this->fields.detailTextFontSize, 0);
  skillChangeInfoDetailOld = this->fields.skillChangeInfoDetailNow;
  if ( !skillChangeInfoDetailOld )
    goto LABEL_20;
  UILabel__set_fontSize(skillChangeInfoDetailOld, this->fields.detailTextFontSize, 0);
  skillChangeInfoDetailOld = this->fields.skillExtraInfoDetailNow;
  if ( !skillChangeInfoDetailOld )
    goto LABEL_20;
  UILabel__set_fontSize(skillChangeInfoDetailOld, this->fields.detailTextFontSize, 0);
  v19 = Method_SkillUpExtraResultWindowComponent_OpenSkillChangeResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpExtraResultWindowComponent_OpenSkillChangeResultInfo__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_2213A78(Method_SkillUpExtraResultWindowComponent_OpenSkillChangeResultInfo__);
  v20 = (System_Reflection_MethodBase_o *)sub_2213A44(v19, v19[4]);
  OverwriteAssetSoundName__PlaySystemSe(v20, 6, 0, 0);
  skillChangeInfoDetailOld = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !skillChangeInfoDetailOld )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillChangeInfoDetailOld, 1, 0);
  windowBgSprite = this->fields.windowBgSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v21, v22);
  AtlasManager__SetDownloadCommonSprite(windowBgSprite, (System_String_o *)StringLiteral_21572/*"img_skillwindow_sp"*/, 0);
  AtlasManager__SetDownloadCommonSprite(this->fields.arrowSprite, (System_String_o *)StringLiteral_21285/*"img_arrow_change"*/, 0);
  AtlasManager__SetDownloadCommonSprite(
    this->fields.skillChangeInfoArrowSprite1,
    (System_String_o *)StringLiteral_21345/*"img_combine_arrow_sp"*/,
    0);
  AtlasManager__SetDownloadCommonSprite(
    this->fields.skillChangeInfoArrowSprite2,
    (System_String_o *)StringLiteral_21345/*"img_combine_arrow_sp"*/,
    0);
  skillChangeInfoDetailOld = (UILabel_o *)this->fields.skillChangeInfo;
  if ( !skillChangeInfoDetailOld )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillChangeInfoDetailOld, 1, 0);
  skillChangeInfoTitle = (UnityEngine_Component_o *)this->fields.skillChangeInfoTitle;
  if ( !svtCostumeEnt )
  {
    BasicHelper__SetActiveSafely(skillChangeInfoTitle, 0, 0);
    skillChangeInfoDetailOld = this->fields.skillChangeInfoTitle;
    if ( skillChangeInfoDetailOld )
    {
      UILabel__set_text(skillChangeInfoDetailOld, **(System_String_o ***)(qword_5984390 + 184), 0);
      goto LABEL_19;
    }
LABEL_20:
    sub_2213CDC(skillChangeInfoDetailOld, *(_QWORD *)&oldSkillId);
  }
  BasicHelper__SetActiveSafely(skillChangeInfoTitle, 1, 0);
  svtId = svtCostumeEnt->fields.svtId;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &svtId);
  id = svtCostumeEnt->fields.id;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &id);
  v29 = System_String__Format_75697880((System_String_o *)StringLiteral_3989/*"COSTUME_CHANGE_SKILL_TITLE_{0}_{1}"*/, v25, v26, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27, v28);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3988/*"COSTUME_CHANGE_SKILL_TITLE"*/, 0);
  LocalizationManager__TryGet(&resultText, v29, v30, 0);
  v31 = this->fields.skillChangeInfoTitle;
  skillChangeInfoDetailOld = (UILabel_o *)System_String__Format(
                                            resultText,
                                            (Il2CppObject *)svtCostumeEnt->fields.name,
                                            0);
  if ( !v31 )
    goto LABEL_20;
  UILabel__set_text(v31, (System_String_o *)skillChangeInfoDetailOld, 0);
LABEL_19:
  SkillUpExtraResultWindowComponent__SetSkillInfo(
    this,
    oldSkillId,
    oldSkillLv,
    nowSkillId,
    nowSkillLv,
    exNowSkillId,
    exNowSkillLv,
    v32);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void SkillUpExtraResultWindowComponent__SetSkillInfo(
        SkillUpExtraResultWindowComponent_o *this,
        int32_t oldSkillId,
        int32_t oldSkillLv,
        int32_t nowSkillId,
        int32_t nowSkillLv,
        int32_t exNowSkillId,
        int32_t exNowSkillLv,
        const MethodInfo *method)
{
  UILabel_o *skillChangeInfoDetailOld; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  UILabel_o *skillChangeInfoSubTitleOld; // x26
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  UILabel_o *skillChangeInfoNameOld; // x24
  System_String_o *v25; // x0
  UILabel_o *skillChangeInfoSubTitleNow; // x24
  __int64 v27; // x1
  __int64 v28; // x2
  const MethodInfo *v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  UILabel_o *skillChangeInfoNameNow; // x22
  System_String_o *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  UILabel_o *skillExtraInfoNameNow; // x20
  System_String_o *v39; // x0
  System_String_o *v40; // [xsp+8h] [xbp-A8h] BYREF
  System_String_o *v41; // [xsp+10h] [xbp-A0h] BYREF
  Il2CppObject *v42; // [xsp+18h] [xbp-98h] BYREF
  System_String_o *text; // [xsp+20h] [xbp-90h] BYREF
  System_String_o *v44; // [xsp+28h] [xbp-88h] BYREF
  System_String_o *detail; // [xsp+30h] [xbp-80h] BYREF
  System_String_o *name; // [xsp+38h] [xbp-78h] BYREF
  Il2CppObject *v47; // [xsp+40h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_596A192 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_7255/*"GET_SKILL_NAME"*/);
    sub_2213A60(&StringLiteral_3020/*"BEFORE_CHANGE_SKILL_SUB_TITLE_SPCIAL"*/);
    sub_2213A60(&StringLiteral_2010/*"AFTER_CHANGE_SKILL_SUB_TITLE_SPCIAL"*/);
    byte_596A192 = 1;
  }
  skillChangeInfoDetailOld = this->fields.skillChangeInfoDetailOld;
  v47 = 0;
  entity = 0;
  detail = 0;
  name = 0;
  text = 0;
  v44 = 0;
  v41 = 0;
  v42 = 0;
  v40 = 0;
  if ( !skillChangeInfoDetailOld )
    goto LABEL_42;
  UILabel__set_fontSize(skillChangeInfoDetailOld, this->fields.detailTextFontSize, 0);
  skillChangeInfoDetailOld = this->fields.skillChangeInfoDetailNow;
  if ( !skillChangeInfoDetailOld )
    goto LABEL_42;
  UILabel__set_fontSize(skillChangeInfoDetailOld, this->fields.detailTextFontSize, 0);
  skillChangeInfoDetailOld = this->fields.skillExtraInfoDetailNow;
  if ( !skillChangeInfoDetailOld )
    goto LABEL_42;
  UILabel__set_fontSize(skillChangeInfoDetailOld, this->fields.detailTextFontSize, 0);
  skillChangeInfoSubTitleOld = this->fields.skillChangeInfoSubTitleOld;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v17);
  skillChangeInfoDetailOld = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3020/*"BEFORE_CHANGE_SKILL_SUB_TITLE_SPCIAL"*/, 0);
  if ( !skillChangeInfoSubTitleOld )
    goto LABEL_42;
  UILabel__set_text(skillChangeInfoSubTitleOld, (System_String_o *)skillChangeInfoDetailOld, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19, v20);
  skillChangeInfoDetailOld = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !skillChangeInfoDetailOld )
    goto LABEL_42;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)skillChangeInfoDetailOld,
         &entity,
         oldSkillId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    skillChangeInfoDetailOld = (UILabel_o *)entity;
    if ( !entity )
      goto LABEL_42;
    SkillEntity__getSkillMessageInfo((SkillEntity_o *)entity, &name, &detail, oldSkillLv, 0);
    skillChangeInfoNameOld = this->fields.skillChangeInfoNameOld;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22, v23);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_7255/*"GET_SKILL_NAME"*/, 0);
    skillChangeInfoDetailOld = (UILabel_o *)System_String__Format(v25, (Il2CppObject *)name, 0);
    if ( !skillChangeInfoNameOld )
      goto LABEL_42;
    UILabel__set_text(skillChangeInfoNameOld, (System_String_o *)skillChangeInfoDetailOld, 0);
    WrapControlText__textBBCodeAdjust(
      this->fields.skillChangeInfoDetailOld,
      detail,
      this->fields.detailTextFontSize,
      0,
      0);
  }
  skillChangeInfoSubTitleNow = this->fields.skillChangeInfoSubTitleNow;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&oldSkillId, v21);
  skillChangeInfoDetailOld = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2010/*"AFTER_CHANGE_SKILL_SUB_TITLE_SPCIAL"*/, 0);
  if ( !skillChangeInfoSubTitleNow )
    goto LABEL_42;
  UILabel__set_text(skillChangeInfoSubTitleNow, (System_String_o *)skillChangeInfoDetailOld, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v27, v28);
  skillChangeInfoDetailOld = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !skillChangeInfoDetailOld )
    goto LABEL_42;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)skillChangeInfoDetailOld,
         &v47,
         nowSkillId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    skillChangeInfoDetailOld = (UILabel_o *)v47;
    if ( !v47 )
      goto LABEL_42;
    SkillEntity__getSkillMessageInfo((SkillEntity_o *)v47, &v44, &text, nowSkillLv, 0);
    skillChangeInfoNameNow = this->fields.skillChangeInfoNameNow;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30, v31);
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_7255/*"GET_SKILL_NAME"*/, 0);
    skillChangeInfoDetailOld = (UILabel_o *)System_String__Format(v33, (Il2CppObject *)v44, 0);
    if ( !skillChangeInfoNameNow )
      goto LABEL_42;
    UILabel__set_text(skillChangeInfoNameNow, (System_String_o *)skillChangeInfoDetailOld, 0);
    WrapControlText__textBBCodeAdjust(
      this->fields.skillChangeInfoDetailNow,
      text,
      this->fields.detailTextFontSize,
      0,
      0);
  }
  if ( exNowSkillId < 1 )
  {
    SkillUpExtraResultWindowComponent__SetupLayout(this, 0, v29);
    GameObjectHelper__SetActiveSafely(this->fields.skillExtraInfo, 0, 0);
  }
  else
  {
    SkillUpExtraResultWindowComponent__SetupLayout(this, 1, v29);
    GameObjectHelper__SetActiveSafely(this->fields.skillExtraInfo, 1, 0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v34, v35);
    skillChangeInfoDetailOld = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
    if ( !skillChangeInfoDetailOld )
      goto LABEL_42;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)skillChangeInfoDetailOld,
           &v42,
           exNowSkillId,
           (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    {
      skillChangeInfoDetailOld = (UILabel_o *)v42;
      if ( v42 )
      {
        SkillEntity__getSkillMessageInfo((SkillEntity_o *)v42, &v41, &v40, exNowSkillLv, 0);
        skillExtraInfoNameNow = this->fields.skillExtraInfoNameNow;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36, v37);
        v39 = LocalizationManager__Get((System_String_o *)StringLiteral_7255/*"GET_SKILL_NAME"*/, 0);
        skillChangeInfoDetailOld = (UILabel_o *)System_String__Format(v39, (Il2CppObject *)v41, 0);
        if ( skillExtraInfoNameNow )
        {
          UILabel__set_text(skillExtraInfoNameNow, (System_String_o *)skillChangeInfoDetailOld, 0);
          WrapControlText__textBBCodeAdjust(
            this->fields.skillExtraInfoDetailNow,
            v40,
            this->fields.detailTextFontSize,
            0,
            0);
          return;
        }
      }
LABEL_42:
      sub_2213CDC(skillChangeInfoDetailOld, *(_QWORD *)&oldSkillId);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void SkillUpExtraResultWindowComponent__SetupLayout(
        SkillUpExtraResultWindowComponent_o *this,
        bool isExtra,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct SkillUpExtraResultWindowComponent_LayoutData_array *layoutDatas; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v10; // x22
  float *p_y; // x24
  float v12; // s8
  float v13; // s9
  float v14; // s10
  float v15; // s11
  UnityEngine_Object_o *v16; // x20
  float v17; // s1 OVERLAPPED
  float v18; // s0

  if ( (byte_596A193 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A193 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.layoutDatas, 0);
  if ( !IsNullOrEmpty )
  {
    layoutDatas = this->fields.layoutDatas;
    if ( !layoutDatas )
      sub_2213CDC(IsNullOrEmpty, v6);
    max_length = layoutDatas->max_length;
    if ( (int)max_length >= 1 )
    {
      v10 = 0;
      p_y = &layoutDatas->m_Items[0].fields.ExtraPosition.fields.y;
      do
      {
        if ( v10 >= (unsigned int)max_length )
          sub_2213CE4(IsNullOrEmpty);
        v12 = *(p_y - 3);
        v13 = *(p_y - 2);
        v14 = *(p_y - 1);
        v15 = *p_y;
        v16 = *(UnityEngine_Object_o **)(p_y - 5);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
        IsNullOrEmpty = UnityEngine_Object__op_Equality(v16, 0, 0);
        if ( !IsNullOrEmpty )
        {
          if ( isExtra )
            v17 = v15;
          else
            v17 = v13;
          if ( isExtra )
            v18 = v14;
          else
            v18 = v12;
          GameObjectExtensions__SetLocalPosition_42891412(
            (UnityEngine_GameObject_o *)v16,
            *(UnityEngine_Vector2_o *)(&v17 - 1),
            0);
        }
        LODWORD(max_length) = layoutDatas->max_length;
        ++v10;
        p_y += 6;
      }
      while ( (__int64)v10 < (int)max_length );
    }
  }
}


void SkillUpExtraResultWindowComponent__ValidateSerializedField(
        SkillUpExtraResultWindowComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void SkillUpExtraResultWindowComponent___c__DisplayClass22_0___ctor(
        SkillUpExtraResultWindowComponent___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SkillUpExtraResultWindowComponent___c__DisplayClass22_0___CloseToNext_b__0(
        SkillUpExtraResultWindowComponent___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}