void __fastcall BattleSelectServantComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4184E31 & 1) == 0 )
  {
    sub_B2C35C(&BattleSelectServantComponent_TypeInfo, v1);
    byte_4184E31 = 1;
  }
  BattleSelectServantComponent_TypeInfo->static_fields->SERVANT_NAME_FONT_SIZE = 15;
}


void __fastcall BattleSelectServantComponent___ctor(BattleSelectServantComponent_o *this, const MethodInfo *method)
{
  this->fields.canSelectFlag = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleSelectServantComponent__ClearFaceAtlas(
        BattleSelectServantComponent_o *this,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *servantIcon; // x0

  servantIcon = this->fields.servantIcon;
  if ( !servantIcon )
    sub_B2C434(0LL, method);
  ServantFaceIconComponent__ClearFaceAtlas(servantIcon, 0LL);
}


void __fastcall BattleSelectServantComponent__OnServantClick(
        BattleSelectServantComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleSelectServantComponent_CallBack_o *selectCallBack; // x0

  if ( (byte_4184E30 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4184E30 = 1;
  }
  if ( this->fields.isUse && this->fields.canSelectFlag )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    selectCallBack = this->fields.selectCallBack;
    if ( !selectCallBack )
      sub_B2C434(0LL, v3);
    BattleSelectServantComponent_CallBack__Invoke(selectCallBack, this->fields.position, this->fields.uniqueId, 0LL);
  }
}


void __fastcall BattleSelectServantComponent__setData(
        BattleSelectServantComponent_o *this,
        BattleServantData_o *svtData,
        int32_t position,
        int32_t index,
        BattleSelectServantComponent_CallBack_o *call,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_GameObject_o *imageSvtId; // x0
  IconLabelInfo_o *v15; // x22
  int32_t level; // w2
  int32_t maxleve; // w3
  ServantFaceIconComponent_o *servantIcon; // x23
  int32_t SvtId; // w24
  int32_t LimitCount; // w25
  int32_t IconImageLimitCount; // w0
  __int64 v22; // x27
  __int64 v23; // x28
  int32_t v24; // w26
  int32_t v25; // w0
  int32_t lv; // w28
  int32_t v27; // w27
  ServantFaceIconComponent_o *v28; // x23
  int32_t frameType_k__BackingField; // w22
  UILabel_o *nameLabel; // x22
  System_String_o *ServantShortName; // x23
  BattleSelectServantComponent_c *v32; // x8
  UILabel_o *hpLabel; // x22
  System_String_o *v34; // x1
  BattleHpGaugeBarComponent_o *hpGauge; // x22
  int32_t v36; // w23
  struct BattleNpGaugeSystemComponent_o *npGauge; // x8
  struct BattleNpGaugeSystemComponent_o *v38; // x22
  BattleNpGaugeSystemComponent_o *v39; // x22
  int32_t uniqueId; // w8
  int32_t NowHp; // [xsp+4Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_4184E2D & 1) == 0 )
  {
    sub_B2C35C(&BattleSelectServantComponent_TypeInfo, svtData);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_1/*""*/, v12);
    byte_4184E2D = 1;
  }
  NowHp = 0;
  this->fields.selectCallBack = call;
  sub_B2C2F8(&this->fields.selectCallBack, call);
  imageSvtId = this->fields.root;
  if ( !imageSvtId )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(imageSvtId, 1, 0LL);
  v15 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v15, 0LL);
  if ( !svtData )
    goto LABEL_29;
  imageSvtId = (UnityEngine_GameObject_o *)Follower__IsNpc(svtData->fields.followerType, 0LL);
  if ( !v15 )
    goto LABEL_29;
  level = svtData->fields.level;
  maxleve = svtData->fields.maxleve;
  if ( ((unsigned __int8)imageSvtId & 1) != 0 )
    IconLabelInfo__Set_27362128(v15, 2, level, maxleve, 0, 0, 1, 0, 0LL);
  else
    IconLabelInfo__Set_27362128(v15, 2, level, maxleve, 0, 0, 0, 0, 0LL);
  servantIcon = this->fields.servantIcon;
  SvtId = BattleServantData__getSvtId(svtData, 0LL);
  LimitCount = BattleServantData__getLimitCount(svtData, 0LL);
  IconImageLimitCount = BattleServantData__GetIconImageLimitCount(svtData, 0LL);
  v23 = *(_QWORD *)&svtData->fields.exceedCount.fields.currentCryptoKey;
  v22 = *(_QWORD *)&svtData->fields.exceedCount.fields.fakeValue;
  v24 = IconImageLimitCount;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v42.fields.currentCryptoKey = v23;
  *(_QWORD *)&v42.fields.fakeValue = v22;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v42, 0LL);
  lv = svtData->fields.level;
  v27 = v25;
  imageSvtId = (UnityEngine_GameObject_o *)BattleServantData__GetIconImageSvtId(svtData, 0LL);
  if ( !servantIcon )
    goto LABEL_29;
  ServantFaceIconComponent__Set_30790452(
    servantIcon,
    SvtId,
    LimitCount,
    v24,
    v27,
    v15,
    0LL,
    2,
    0,
    0,
    0LL,
    0,
    lv,
    (int32_t)imageSvtId,
    0,
    0LL);
  v28 = this->fields.servantIcon;
  frameType_k__BackingField = svtData->fields._frameType_k__BackingField;
  imageSvtId = (UnityEngine_GameObject_o *)BattleServantData__getClassId(svtData, 0LL);
  if ( !v28 )
    goto LABEL_29;
  ServantFaceIconComponent__ChangeClassIcon(v28, frameType_k__BackingField, (int32_t)imageSvtId, 0LL);
  nameLabel = this->fields.nameLabel;
  ServantShortName = BattleServantData__getServantShortName(svtData, 0LL);
  v32 = BattleSelectServantComponent_TypeInfo;
  if ( (BYTE3(BattleSelectServantComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleSelectServantComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSelectServantComponent_TypeInfo);
    v32 = BattleSelectServantComponent_TypeInfo;
  }
  WrapControlText__fontSizeAdjust(nameLabel, ServantShortName, v32->static_fields->SERVANT_NAME_FONT_SIZE, 0LL);
  hpLabel = this->fields.hpLabel;
  NowHp = BattleServantData__getNowHp(svtData, 0LL);
  imageSvtId = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&NowHp, 0LL);
  if ( !hpLabel )
    goto LABEL_29;
  v34 = imageSvtId ? (System_String_o *)imageSvtId : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(hpLabel, v34, 0LL);
  hpGauge = this->fields.hpGauge;
  v36 = BattleServantData__getNowHp(svtData, 0LL);
  imageSvtId = (UnityEngine_GameObject_o *)BattleServantData__getMaxHp(svtData, 0LL);
  if ( !hpGauge )
    goto LABEL_29;
  BattleHpGaugeBarComponent__setInitValue(hpGauge, v36, (int32_t)imageSvtId, 0LL);
  npGauge = this->fields.npGauge;
  if ( !npGauge )
    goto LABEL_29;
  npGauge->fields.lineCount = 3;
  v38 = this->fields.npGauge;
  imageSvtId = (UnityEngine_GameObject_o *)BattleServantData__getCountMaxNp(svtData, 0LL);
  if ( !v38 )
    goto LABEL_29;
  v38->fields.maxparam = (int)imageSvtId;
  imageSvtId = (UnityEngine_GameObject_o *)this->fields.npGauge;
  if ( !imageSvtId
    || (BattleNpGaugeSystemComponent__InitSliderValue((BattleNpGaugeSystemComponent_o *)imageSvtId, 0LL),
        (imageSvtId = (UnityEngine_GameObject_o *)this->fields.npGauge) == 0LL)
    || (BattleNpGaugeSystemComponent__setNowParam((BattleNpGaugeSystemComponent_o *)imageSvtId, svtData->fields.np, 0LL),
        v39 = this->fields.npGauge,
        imageSvtId = (UnityEngine_GameObject_o *)BattleServantData__isAddNpGauge(svtData, 0LL),
        !v39)
    || (BattleNpGaugeSystemComponent__setUseNp(v39, (unsigned __int8)imageSvtId & 1, 0LL),
        (imageSvtId = this->fields.targetObject) == 0LL) )
  {
LABEL_29:
    sub_B2C434(imageSvtId, v13);
  }
  UnityEngine_GameObject__SetActive(imageSvtId, 0, 0LL);
  uniqueId = svtData->fields.uniqueId;
  this->fields.isUse = 1;
  this->fields.uniqueId = uniqueId;
  this->fields.position = position;
}


void __fastcall BattleSelectServantComponent__setNone(BattleSelectServantComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *root; // x0

  if ( (byte_4184E2E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4184E2E = 1;
  }
  root = this->fields.root;
  this->fields.isUse = 0;
  if ( !root )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(root, 0, 0LL);
  root = this->fields.servantSelectMask;
  this->fields.canSelectFlag = 1;
  if ( !root
    || (UnityEngine_GameObject__SetActive(root, 0, 0LL),
        (root = (UnityEngine_GameObject_o *)this->fields.servantSelectMaskLabel) == 0LL)
    || (UILabel__set_text((UILabel_o *)root, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (root = (UnityEngine_GameObject_o *)this->fields.servantSelectMaskLabel) == 0LL)
    || (root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)root, 0LL)) == 0LL )
  {
LABEL_9:
    sub_B2C434(root, method);
  }
  UnityEngine_GameObject__SetActive(root, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectServantComponent__setSelectMask(
        BattleSelectServantComponent_o *this,
        bool canSelect,
        const MethodInfo *method)
{
  bool v3; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *servantSelectMask; // x0
  UILabel_o *servantSelectMaskLabel; // x20

  v3 = canSelect;
  if ( (byte_4184E2F & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, canSelect);
    sub_B2C35C(&StringLiteral_2415/*"BATTLE_DIALOG_CAN_NOT_REPLACE"*/, v5);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_4184E2F = 1;
  }
  servantSelectMask = this->fields.servantSelectMask;
  this->fields.canSelectFlag = v3;
  if ( !servantSelectMask )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(servantSelectMask, !v3, 0LL);
  servantSelectMaskLabel = this->fields.servantSelectMaskLabel;
  if ( !this->fields.canSelectFlag )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantSelectMask = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2415/*"BATTLE_DIALOG_CAN_NOT_REPLACE"*/, 0LL);
    *(_QWORD *)&canSelect = servantSelectMask;
    if ( servantSelectMaskLabel )
      goto LABEL_11;
LABEL_14:
    sub_B2C434(servantSelectMask, canSelect);
  }
  *(_QWORD *)&canSelect = StringLiteral_1/*""*/;
  if ( !servantSelectMaskLabel )
    goto LABEL_14;
LABEL_11:
  UILabel__set_text(servantSelectMaskLabel, (System_String_o *)canSelect, 0LL);
  servantSelectMask = (UnityEngine_GameObject_o *)this->fields.servantSelectMaskLabel;
  if ( !servantSelectMask )
    goto LABEL_14;
  servantSelectMask = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantSelectMask, 0LL);
  if ( !servantSelectMask )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(servantSelectMask, !this->fields.canSelectFlag, 0LL);
}


void __fastcall BattleSelectServantComponent__setTarget(
        BattleSelectServantComponent_o *this,
        int32_t selectUniqueId,
        const MethodInfo *method)
{
  if ( this->fields.isUse && this->fields.canSelectFlag )
  {
    if ( !this->fields.targetObject )
      sub_B2C434(this, selectUniqueId);
    UnityEngine_GameObject__SetActive(this->fields.targetObject, this->fields.uniqueId == selectUniqueId, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectServantComponent_CallBack___ctor(
        BattleSelectServantComponent_CallBack_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall BattleSelectServantComponent_CallBack__BeginInvoke(
        BattleSelectServantComponent_CallBack_o *this,
        int32_t position,
        int32_t uniqueId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = uniqueId;
  v13 = position;
  if ( (byte_41850C2 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&position);
    sub_B2C35C(&BattleSelectMainSubServantWindow_POSITION_TypeInfo, v9);
    byte_41850C2 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(BattleSelectMainSubServantWindow_POSITION_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall BattleSelectServantComponent_CallBack__EndInvoke(
        BattleSelectServantComponent_CallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectServantComponent_CallBack__Invoke(
        BattleSelectServantComponent_CallBack_o *this,
        int32_t position,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  BattleSelectServantComponent_CallBack_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  BattleSelectServantComponent_CallBack_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  BattleSelectServantComponent_CallBack_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = position;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (BattleSelectServantComponent_CallBack_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&position, *(_QWORD *)&uniqueId, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, (unsigned int)uniqueId, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, (unsigned int)uniqueId, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AC5258(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B2C40C(v18, v23);
        (*v20)(v22, v28, (unsigned int)uniqueId, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AC5258(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            v14,
            (unsigned int)uniqueId,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            v34,
            (unsigned int)uniqueId,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(v22, v34, (unsigned int)uniqueId, v23);
    goto LABEL_38;
  }
}