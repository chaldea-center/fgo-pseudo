void __fastcall BattleSelectServantComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F7547 & 1) == 0 )
  {
    sub_B16FFC(&BattleSelectServantComponent_TypeInfo, v1);
    byte_40F7547 = 1;
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
    sub_B170D4();
  ServantFaceIconComponent__ClearFaceAtlas(servantIcon, 0LL);
}


void __fastcall BattleSelectServantComponent__OnServantClick(
        BattleSelectServantComponent_o *this,
        const MethodInfo *method)
{
  BattleSelectServantComponent_CallBack_o *selectCallBack; // x0

  if ( (byte_40F7546 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F7546 = 1;
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
      sub_B170D4();
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
  UnityEngine_GameObject_o *root; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  IconLabelInfo_o *v18; // x22
  bool IsNpc; // w0
  int32_t level; // w2
  int32_t maxleve; // w3
  ServantFaceIconComponent_o *servantIcon; // x23
  int32_t SvtId; // w24
  int32_t LimitCount; // w25
  int32_t IconImageLimitCount; // w0
  __int64 v26; // x27
  __int64 v27; // x28
  int32_t v28; // w26
  int32_t v29; // w0
  int32_t lv; // w28
  int32_t v31; // w27
  int32_t imageSvtId; // w0
  ServantFaceIconComponent_o *v33; // x23
  int32_t frameType_k__BackingField; // w22
  int32_t ClassId; // w0
  UILabel_o *nameLabel; // x22
  System_String_o *ServantShortName; // x23
  BattleSelectServantComponent_c *v38; // x8
  UILabel_o *hpLabel; // x22
  System_String_o *v40; // x0
  System_String_o *v41; // x1
  BattleHpGaugeBarComponent_o *hpGauge; // x22
  int32_t v43; // w23
  int32_t MaxHp; // w0
  struct BattleNpGaugeSystemComponent_o *npGauge; // x8
  struct BattleNpGaugeSystemComponent_o *v46; // x22
  int32_t CountMaxNp; // w0
  BattleNpGaugeSystemComponent_o *v48; // x0
  BattleNpGaugeSystemComponent_o *v49; // x0
  BattleNpGaugeSystemComponent_o *v50; // x22
  bool isAddNpGauge; // w0
  UnityEngine_GameObject_o *targetObject; // x0
  int32_t uniqueId; // w8
  int32_t NowHp; // [xsp+4Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_40F7543 & 1) == 0 )
  {
    sub_B16FFC(&BattleSelectServantComponent_TypeInfo, svtData);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_1, v12);
    byte_40F7543 = 1;
  }
  NowHp = 0;
  this->fields.selectCallBack = call;
  sub_B16F98(&this->fields.selectCallBack, call);
  root = this->fields.root;
  if ( !root )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(root, 1, 0LL);
  v18 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v14, v15, v16, v17);
  IconLabelInfo___ctor(v18, 0LL);
  if ( !svtData )
    goto LABEL_29;
  IsNpc = Follower__IsNpc(svtData->fields.followerType, 0LL);
  if ( !v18 )
    goto LABEL_29;
  level = svtData->fields.level;
  maxleve = svtData->fields.maxleve;
  if ( IsNpc )
    IconLabelInfo__Set_28888132(v18, 2, level, maxleve, 0, 0, 1, 0, 0LL);
  else
    IconLabelInfo__Set_28888132(v18, 2, level, maxleve, 0, 0, 0, 0, 0LL);
  servantIcon = this->fields.servantIcon;
  SvtId = BattleServantData__getSvtId(svtData, 0LL);
  LimitCount = BattleServantData__getLimitCount(svtData, 0LL);
  IconImageLimitCount = BattleServantData__GetIconImageLimitCount(svtData, 0LL);
  v27 = *(_QWORD *)&svtData->fields.exceedCount.fields.currentCryptoKey;
  v26 = *(_QWORD *)&svtData->fields.exceedCount.fields.fakeValue;
  v28 = IconImageLimitCount;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v55.fields.currentCryptoKey = v27;
  *(_QWORD *)&v55.fields.fakeValue = v26;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v55, 0LL);
  lv = svtData->fields.level;
  v31 = v29;
  imageSvtId = BattleServantData__GetIconImageSvtId(svtData, 0LL);
  if ( !servantIcon )
    goto LABEL_29;
  ServantFaceIconComponent__Set_30702780(
    servantIcon,
    SvtId,
    LimitCount,
    v28,
    v31,
    v18,
    0LL,
    2,
    0,
    0,
    0LL,
    0,
    lv,
    imageSvtId,
    0,
    0LL);
  v33 = this->fields.servantIcon;
  frameType_k__BackingField = svtData->fields._frameType_k__BackingField;
  ClassId = BattleServantData__getClassId(svtData, 0LL);
  if ( !v33 )
    goto LABEL_29;
  ServantFaceIconComponent__ChangeClassIcon(v33, frameType_k__BackingField, ClassId, 0LL);
  nameLabel = this->fields.nameLabel;
  ServantShortName = BattleServantData__getServantShortName(svtData, 0LL);
  v38 = BattleSelectServantComponent_TypeInfo;
  if ( (BYTE3(BattleSelectServantComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleSelectServantComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSelectServantComponent_TypeInfo);
    v38 = BattleSelectServantComponent_TypeInfo;
  }
  WrapControlText__fontSizeAdjust(nameLabel, ServantShortName, v38->static_fields->SERVANT_NAME_FONT_SIZE, 0LL);
  hpLabel = this->fields.hpLabel;
  NowHp = BattleServantData__getNowHp(svtData, 0LL);
  v40 = System_Int32__ToString((int32_t)&NowHp, 0LL);
  if ( !hpLabel )
    goto LABEL_29;
  v41 = v40 ? v40 : (System_String_o *)StringLiteral_1;
  UILabel__set_text(hpLabel, v41, 0LL);
  hpGauge = this->fields.hpGauge;
  v43 = BattleServantData__getNowHp(svtData, 0LL);
  MaxHp = BattleServantData__getMaxHp(svtData, 0LL);
  if ( !hpGauge )
    goto LABEL_29;
  BattleHpGaugeBarComponent__setInitValue(hpGauge, v43, MaxHp, 0LL);
  npGauge = this->fields.npGauge;
  if ( !npGauge )
    goto LABEL_29;
  npGauge->fields.lineCount = 3;
  v46 = this->fields.npGauge;
  CountMaxNp = BattleServantData__getCountMaxNp(svtData, 0LL);
  if ( !v46 )
    goto LABEL_29;
  v46->fields.maxparam = CountMaxNp;
  v48 = this->fields.npGauge;
  if ( !v48
    || (BattleNpGaugeSystemComponent__InitSliderValue(v48, 0LL), (v49 = this->fields.npGauge) == 0LL)
    || (BattleNpGaugeSystemComponent__setNowParam(v49, svtData->fields.np, 0LL),
        v50 = this->fields.npGauge,
        isAddNpGauge = BattleServantData__isAddNpGauge(svtData, 0LL),
        !v50)
    || (BattleNpGaugeSystemComponent__setUseNp(v50, isAddNpGauge, 0LL), (targetObject = this->fields.targetObject) == 0LL) )
  {
LABEL_29:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(targetObject, 0, 0LL);
  uniqueId = svtData->fields.uniqueId;
  this->fields.isUse = 1;
  this->fields.uniqueId = uniqueId;
  this->fields.position = position;
}


void __fastcall BattleSelectServantComponent__setNone(BattleSelectServantComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *root; // x0
  UnityEngine_GameObject_o *servantSelectMask; // x0
  UILabel_o *servantSelectMaskLabel; // x0
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F7544 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40F7544 = 1;
  }
  root = this->fields.root;
  this->fields.isUse = 0;
  if ( !root )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(root, 0, 0LL);
  servantSelectMask = this->fields.servantSelectMask;
  this->fields.canSelectFlag = 1;
  if ( !servantSelectMask
    || (UnityEngine_GameObject__SetActive(servantSelectMask, 0, 0LL),
        (servantSelectMaskLabel = this->fields.servantSelectMaskLabel) == 0LL)
    || (UILabel__set_text(servantSelectMaskLabel, (System_String_o *)StringLiteral_1, 0LL),
        (v6 = (UnityEngine_Component_o *)this->fields.servantSelectMaskLabel) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(v6, 0LL)) == 0LL )
  {
LABEL_9:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectServantComponent__setSelectMask(
        BattleSelectServantComponent_o *this,
        bool canSelect,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *servantSelectMask; // x0
  UILabel_o *servantSelectMaskLabel; // x20
  System_String_o *v9; // x1
  UnityEngine_Component_o *v10; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F7545 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, canSelect);
    sub_B16FFC(&StringLiteral_2405, v5);
    sub_B16FFC(&StringLiteral_1, v6);
    byte_40F7545 = 1;
  }
  servantSelectMask = this->fields.servantSelectMask;
  this->fields.canSelectFlag = canSelect;
  if ( !servantSelectMask )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(servantSelectMask, !canSelect, 0LL);
  servantSelectMaskLabel = this->fields.servantSelectMaskLabel;
  if ( !this->fields.canSelectFlag )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_2405, 0LL);
    if ( servantSelectMaskLabel )
      goto LABEL_11;
LABEL_14:
    sub_B170D4();
  }
  v9 = (System_String_o *)StringLiteral_1;
  if ( !servantSelectMaskLabel )
    goto LABEL_14;
LABEL_11:
  UILabel__set_text(servantSelectMaskLabel, v9, 0LL);
  v10 = (UnityEngine_Component_o *)this->fields.servantSelectMaskLabel;
  if ( !v10 )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject(v10, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, !this->fields.canSelectFlag, 0LL);
}


void __fastcall BattleSelectServantComponent__setTarget(
        BattleSelectServantComponent_o *this,
        int32_t selectUniqueId,
        const MethodInfo *method)
{
  if ( this->fields.isUse && this->fields.canSelectFlag )
  {
    if ( !this->fields.targetObject )
      sub_B170D4();
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
  sub_B16F98(p_method, object);
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
  if ( (byte_40F71B8 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&position);
    sub_B16FFC(&BattleSelectMainSubServantWindow_POSITION_TypeInfo, v9);
    byte_40F71B8 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(BattleSelectMainSubServantWindow_POSITION_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall BattleSelectServantComponent_CallBack__EndInvoke(
        BattleSelectServantComponent_CallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  BattleSelectServantComponent_CallBack_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(unsigned int *, _QWORD, __int64); // x24
  char v24; // w24
  char v25; // w0
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+Ch] [xbp-54h] BYREF
  BattleSelectServantComponent_CallBack_o *v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = this;
  v32 = position;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v33;
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
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&position, *(_QWORD *)&uniqueId);
      if ( (sub_B1702C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, (unsigned int)uniqueId, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, (unsigned int)uniqueId, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
      if ( (v24 & 1) != 0 )
      {
        v26 = v32;
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AAFEF8(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B170AC(v17, v22);
        (*v19)(v21, v26, (unsigned int)uniqueId, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v32;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AAFEF8(v21, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v16)(
            v21,
            v13,
            (unsigned int)uniqueId,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v32,
            (unsigned int)uniqueId,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v23)(v21, v32, (unsigned int)uniqueId, v22);
    goto LABEL_38;
  }
}