void __fastcall BattleSelectServantComponent___cctor(const MethodInfo *method)
{
  if ( (byte_42AD5F8 & 1) == 0 )
  {
    sub_B52984(&BattleSelectServantComponent_TypeInfo);
    byte_42AD5F8 = 1;
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
    sub_B52A5C(0LL, method);
  ServantFaceIconComponent__ClearFaceAtlas(servantIcon, 0LL);
}


void __fastcall BattleSelectServantComponent__OnServantClick(
        BattleSelectServantComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleSelectServantComponent_CallBack_o *selectCallBack; // x0

  if ( (byte_42AD5F7 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AD5F7 = 1;
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
      sub_B52A5C(0LL, v3);
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
  UnityEngine_GameObject_o *imageSvtId; // x0
  IconLabelInfo_o *v12; // x22
  int32_t level; // w2
  int32_t maxleve; // w3
  ServantFaceIconComponent_o *servantIcon; // x23
  int32_t SvtId; // w24
  int32_t LimitCount; // w25
  int32_t IconImageLimitCount; // w0
  __int64 v19; // x27
  __int64 v20; // x28
  int32_t v21; // w26
  int32_t v22; // w0
  int32_t lv; // w28
  int32_t v24; // w27
  ServantFaceIconComponent_o *v25; // x23
  int32_t frameType_k__BackingField; // w22
  UILabel_o *nameLabel; // x22
  System_String_o *ServantShortName; // x23
  BattleSelectServantComponent_c *v29; // x8
  UILabel_o *hpLabel; // x22
  System_String_o *v31; // x1
  BattleHpGaugeBarComponent_o *hpGauge; // x22
  int32_t v33; // w23
  struct BattleNpGaugeSystemComponent_o *npGauge; // x8
  struct BattleNpGaugeSystemComponent_o *v35; // x22
  BattleNpGaugeSystemComponent_o *v36; // x22
  int32_t uniqueId; // w8
  int32_t NowHp; // [xsp+4Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_42AD5F4 & 1) == 0 )
  {
    sub_B52984(&BattleSelectServantComponent_TypeInfo);
    sub_B52984(&IconLabelInfo_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AD5F4 = 1;
  }
  NowHp = 0;
  this->fields.selectCallBack = call;
  sub_B52920(&this->fields.selectCallBack);
  imageSvtId = this->fields.root;
  if ( !imageSvtId )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(imageSvtId, 1, 0LL);
  v12 = (IconLabelInfo_o *)sub_B52A54(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v12, 0LL);
  if ( !svtData )
    goto LABEL_29;
  imageSvtId = (UnityEngine_GameObject_o *)Follower__IsNpc(svtData->fields.followerType, 0LL);
  if ( !v12 )
    goto LABEL_29;
  level = svtData->fields.level;
  maxleve = svtData->fields.maxleve;
  if ( ((unsigned __int8)imageSvtId & 1) != 0 )
    IconLabelInfo__Set_28274368(v12, 2, level, maxleve, 0, 0, 1, 0, 0LL);
  else
    IconLabelInfo__Set_28274368(v12, 2, level, maxleve, 0, 0, 0, 0, 0LL);
  servantIcon = this->fields.servantIcon;
  SvtId = BattleServantData__getSvtId(svtData, 0LL);
  LimitCount = BattleServantData__getLimitCount(svtData, 0LL);
  IconImageLimitCount = BattleServantData__GetIconImageLimitCount(svtData, 0LL);
  v20 = *(_QWORD *)&svtData->fields.exceedCount.fields.currentCryptoKey;
  v19 = *(_QWORD *)&svtData->fields.exceedCount.fields.fakeValue;
  v21 = IconImageLimitCount;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v39.fields.currentCryptoKey = v20;
  *(_QWORD *)&v39.fields.fakeValue = v19;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v39, 0LL);
  lv = svtData->fields.level;
  v24 = v22;
  imageSvtId = (UnityEngine_GameObject_o *)BattleServantData__GetIconImageSvtId(svtData, 0LL);
  if ( !servantIcon )
    goto LABEL_29;
  ServantFaceIconComponent__Set_30467316(
    servantIcon,
    SvtId,
    LimitCount,
    v21,
    v24,
    v12,
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
  v25 = this->fields.servantIcon;
  frameType_k__BackingField = svtData->fields._frameType_k__BackingField;
  imageSvtId = (UnityEngine_GameObject_o *)BattleServantData__getClassId(svtData, 0LL);
  if ( !v25 )
    goto LABEL_29;
  ServantFaceIconComponent__ChangeClassIcon(v25, frameType_k__BackingField, (int32_t)imageSvtId, 0LL);
  nameLabel = this->fields.nameLabel;
  ServantShortName = BattleServantData__getServantShortName(svtData, 0LL);
  v29 = BattleSelectServantComponent_TypeInfo;
  if ( (BYTE3(BattleSelectServantComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleSelectServantComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSelectServantComponent_TypeInfo);
    v29 = BattleSelectServantComponent_TypeInfo;
  }
  WrapControlText__fontSizeAdjust(nameLabel, ServantShortName, v29->static_fields->SERVANT_NAME_FONT_SIZE, 0LL);
  hpLabel = this->fields.hpLabel;
  NowHp = BattleServantData__getNowHp(svtData, 0LL);
  imageSvtId = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&NowHp, 0LL);
  if ( !hpLabel )
    goto LABEL_29;
  v31 = imageSvtId ? (System_String_o *)imageSvtId : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(hpLabel, v31, 0LL);
  hpGauge = this->fields.hpGauge;
  v33 = BattleServantData__getNowHp(svtData, 0LL);
  imageSvtId = (UnityEngine_GameObject_o *)BattleServantData__getMaxHp(svtData, 0LL);
  if ( !hpGauge )
    goto LABEL_29;
  BattleHpGaugeBarComponent__setInitValue(hpGauge, v33, (int32_t)imageSvtId, 0LL);
  npGauge = this->fields.npGauge;
  if ( !npGauge )
    goto LABEL_29;
  npGauge->fields.lineCount = 3;
  v35 = this->fields.npGauge;
  imageSvtId = (UnityEngine_GameObject_o *)BattleServantData__getCountMaxNp(svtData, 0LL);
  if ( !v35 )
    goto LABEL_29;
  v35->fields.maxparam = (int)imageSvtId;
  imageSvtId = (UnityEngine_GameObject_o *)this->fields.npGauge;
  if ( !imageSvtId
    || (BattleNpGaugeSystemComponent__InitSliderValue((BattleNpGaugeSystemComponent_o *)imageSvtId, 0LL),
        (imageSvtId = (UnityEngine_GameObject_o *)this->fields.npGauge) == 0LL)
    || (BattleNpGaugeSystemComponent__setNowParam((BattleNpGaugeSystemComponent_o *)imageSvtId, svtData->fields.np, 0LL),
        v36 = this->fields.npGauge,
        imageSvtId = (UnityEngine_GameObject_o *)BattleServantData__isAddNpGauge(svtData, 0LL),
        !v36)
    || (BattleNpGaugeSystemComponent__setUseNp(v36, (unsigned __int8)imageSvtId & 1, 0LL),
        (imageSvtId = this->fields.targetObject) == 0LL) )
  {
LABEL_29:
    sub_B52A5C(imageSvtId, v10);
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

  if ( (byte_42AD5F5 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AD5F5 = 1;
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
    sub_B52A5C(root, method);
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
  UnityEngine_GameObject_o *servantSelectMask; // x0
  UILabel_o *servantSelectMaskLabel; // x20

  v3 = canSelect;
  if ( (byte_42AD5F6 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_2446/*"BATTLE_DIALOG_CAN_NOT_REPLACE"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AD5F6 = 1;
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
    servantSelectMask = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2446/*"BATTLE_DIALOG_CAN_NOT_REPLACE"*/, 0LL);
    *(_QWORD *)&canSelect = servantSelectMask;
    if ( servantSelectMaskLabel )
      goto LABEL_11;
LABEL_14:
    sub_B52A5C(servantSelectMask, canSelect);
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
      sub_B52A5C(this, selectUniqueId);
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
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall BattleSelectServantComponent_CallBack__BeginInvoke(
        BattleSelectServantComponent_CallBack_o *this,
        int32_t position,
        int32_t uniqueId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v11; // [xsp+18h] [xbp-28h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-24h] BYREF

  v11 = uniqueId;
  v12 = position;
  if ( (byte_42AD857 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&BattleSelectMainSubServantWindow_POSITION_TypeInfo);
    byte_42AD857 = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(BattleSelectMainSubServantWindow_POSITION_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_B52928(this, v10, callback, object);
}


void __fastcall BattleSelectServantComponent_CallBack__EndInvoke(
        BattleSelectServantComponent_CallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
        sub_B52A40(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&position, *(_QWORD *)&uniqueId, method);
      if ( (sub_B529B4(v23) & 1) == 0 )
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
      v25 = sub_B529AC(v23);
      v26 = sub_B52DB0(v23);
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
            v19 = sub_AEB880(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B52A34(v18, v23);
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
            v17 = sub_AEB880(v22, class_0, v10, v12);
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