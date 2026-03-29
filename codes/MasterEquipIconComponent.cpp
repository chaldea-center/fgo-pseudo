void MasterEquipIconComponent___ctor(MasterEquipIconComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V1.4S, #1.0 }
  this->fields.ICON_NORMAL_COLOR = _Q1;
  this->fields.ICON_MASK_COLOR = (struct UnityEngine_Color_o)xmmword_D009C0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


int32_t MasterEquipIconComponent__GetEquipId(MasterEquipIconComponent_o *this, const MethodInfo *method)
{
  MasterEquipIconComponent_o *v2; // x19
  struct UserEquipEntity_o *usrEquipData; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  v2 = this;
  if ( (byte_4D2B68E & 1) == 0 )
  {
    this = (MasterEquipIconComponent_o *)sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2B68E = 1;
  }
  usrEquipData = v2->fields.usrEquipData;
  if ( !usrEquipData )
    sub_1C93D2C(this, method);
  v5 = *(_QWORD *)&usrEquipData->fields.equipId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&usrEquipData->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v7, 0);
}


int32_t MasterEquipIconComponent__GetMoveBannerIdx(MasterEquipIconComponent_o *this, const MethodInfo *method)
{
  return this->fields.moveEqIdx;
}


int64_t MasterEquipIconComponent__GetUsrEquipId(MasterEquipIconComponent_o *this, const MethodInfo *method)
{
  struct UserEquipEntity_o *usrEquipData; // x8

  usrEquipData = this->fields.usrEquipData;
  if ( !usrEquipData )
    sub_1C93D2C(this, method);
  return usrEquipData->fields.id;
}


void MasterEquipIconComponent__OnClickEquipIcon(MasterEquipIconComponent_o *this, const MethodInfo *method)
{
  MasterEquipIconComponent_o *v2; // x19
  struct UserEquipEntity_o *usrEquipData; // x8
  struct MasterEquipIconComponent_CallbackFunc_o *callbackFunc; // x23
  unsigned int moveEqIdx; // w20
  __int64 v6; // x21
  __int64 v7; // x22
  struct UserEquipEntity_o *v8; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v2 = this;
  if ( (byte_4D2B68D & 1) == 0 )
  {
    this = (MasterEquipIconComponent_o *)sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2B68D = 1;
  }
  usrEquipData = v2->fields.usrEquipData;
  if ( !usrEquipData )
    goto LABEL_9;
  callbackFunc = v2->fields.callbackFunc;
  moveEqIdx = v2->fields.moveEqIdx;
  v7 = *(_QWORD *)&usrEquipData->fields.equipId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&usrEquipData->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  this = (MasterEquipIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v9, 0);
  v8 = v2->fields.usrEquipData;
  if ( !v8 || !callbackFunc )
LABEL_9:
    sub_1C93D2C(this, method);
  ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, int64_t, intptr_t))callbackFunc->fields.invoke_impl)(
    callbackFunc->fields.method_code,
    moveEqIdx,
    (unsigned int)this,
    v8->fields.id,
    callbackFunc->fields.method);
}


void MasterEquipIconComponent__SetEnabled(MasterEquipIconComponent_o *this, bool isEnabled, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1

  if ( (byte_4D2B68F & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_4D2B68F = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_object )
    sub_1C93D2C(0, v6);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnabled, 0);
}


// local variable allocation has failed, the output may be wrong!
void MasterEquipIconComponent__SetEquipInfo(
        MasterEquipIconComponent_o *this,
        UserEquipEntity_o *usrEquipData,
        int64_t usrEquipId,
        int32_t userLv,
        int32_t moveIdx,
        MasterEquipIconComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v7; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  ItemIconComponent_o *equipIconComp; // x0
  __int64 v19; // x1
  UILabel_o *equipLevelLabel; // x20
  System_String_o *v21; // x21
  Il2CppObject *v22; // x0
  int32_t lv; // [xsp+0h] [xbp-50h] BYREF
  int32_t genderImageId; // [xsp+4h] [xbp-4Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *equipName; // [xsp+10h] [xbp-40h] BYREF
  __int64 maxLv; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4D2B68B & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_8599/*"MASTER_EQSKILL_LV_TXT"*/);
    byte_4D2B68B = 1;
  }
  equipName = 0;
  maxLv = 0;
  detail = 0;
  genderImageId = 0;
  this->fields.usrEquipData = usrEquipData;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.usrEquipData,
    (int32_t)usrEquipData,
    usrEquipId,
    userLv,
    *(System_String_o **)&moveIdx,
    (int32_t)callback,
    (int64_t)method,
    v7);
  this->fields.callbackFunc = callback;
  this->fields.moveEqIdx = moveIdx;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !usrEquipData )
    goto LABEL_9;
  UserEquipEntity__getEquipInfo(
    usrEquipData,
    (int32_t *)&maxLv + 1,
    (int32_t *)&maxLv,
    &equipName,
    &detail,
    &genderImageId,
    0);
  equipIconComp = this->fields.equipIconComp;
  if ( !equipIconComp )
    goto LABEL_9;
  ItemIconComponent__SetEquipItem(equipIconComp, genderImageId, 0);
  equipLevelLabel = this->fields.equipLevelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_8599/*"MASTER_EQSKILL_LV_TXT"*/, 0);
  lv = usrEquipData->fields.lv;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
  equipIconComp = (ItemIconComponent_o *)System_String__Format(v21, v22, 0);
  if ( !equipLevelLabel )
LABEL_9:
    sub_1C93D2C(equipIconComp, v19);
  UILabel__set_text(equipLevelLabel, (System_String_o *)equipIconComp, 0);
}


// local variable allocation has failed, the output may be wrong!
void MasterEquipIconComponent__UpdateSelected(
        MasterEquipIconComponent_o *this,
        int32_t nowEquipId,
        const MethodInfo *method)
{
  MasterEquipIconComponent_o *v4; // x20
  struct UserEquipEntity_o *usrEquipData; // x8
  __int64 v6; // x21
  __int64 v7; // x22
  struct ItemIconComponent_o *equipIconComp; // x8
  int v9; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16
  UnityEngine_Color_o ICON_NORMAL_COLOR; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4D2B68C & 1) == 0 )
  {
    this = (MasterEquipIconComponent_o *)sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2B68C = 1;
  }
  usrEquipData = v4->fields.usrEquipData;
  if ( !usrEquipData )
    goto LABEL_15;
  v7 = *(_QWORD *)&usrEquipData->fields.equipId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&usrEquipData->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  this = (MasterEquipIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v13, 0);
  equipIconComp = v4->fields.equipIconComp;
  v9 = (int)this;
  if ( (_DWORD)this == nowEquipId )
  {
    if ( equipIconComp )
    {
      ItemIconComponent__SetColor(v4->fields.equipIconComp, v4->fields.ICON_NORMAL_COLOR, 0);
      this = (MasterEquipIconComponent_o *)v4->fields.equipLevelLabel;
      if ( this )
      {
        ICON_NORMAL_COLOR = v4->fields.ICON_NORMAL_COLOR;
        goto LABEL_13;
      }
    }
LABEL_15:
    sub_1C93D2C(this, *(_QWORD *)&nowEquipId);
  }
  if ( !equipIconComp )
    goto LABEL_15;
  ItemIconComponent__SetColor(v4->fields.equipIconComp, v4->fields.ICON_MASK_COLOR, 0);
  this = (MasterEquipIconComponent_o *)v4->fields.equipLevelLabel;
  if ( !this )
    goto LABEL_15;
  ICON_NORMAL_COLOR = v4->fields.ICON_MASK_COLOR;
LABEL_13:
  UIWidget__set_color((UIWidget_o *)this, ICON_NORMAL_COLOR, 0);
  this = (MasterEquipIconComponent_o *)v4->fields.equipSelectedSprite;
  if ( !this )
    goto LABEL_15;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v9 == nowEquipId, 0);
}


void MasterEquipIconComponent__add_callbackFunc(
        MasterEquipIconComponent_o *this,
        MasterEquipIconComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct MasterEquipIconComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct MasterEquipIconComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MasterEquipIconComponent_o *v11; // x0
  MasterEquipIconComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4D2B689 & 1) == 0 )
  {
    sub_1C93AD4(&MasterEquipIconComponent_CallbackFunc_TypeInfo);
    byte_4D2B689 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (MasterEquipIconComponent_CallbackFunc_c *)v8->klass != MasterEquipIconComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MasterEquipIconComponent_o *)sub_1C940C8(v8);
  MasterEquipIconComponent__remove_callbackFunc(v11, v12, v13);
}


void MasterEquipIconComponent__remove_callbackFunc(
        MasterEquipIconComponent_o *this,
        MasterEquipIconComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct MasterEquipIconComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct MasterEquipIconComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MasterEquipIconComponent_o *v11; // x0
  UserEquipEntity_o *v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  int32_t v15; // w4
  MasterEquipIconComponent_CallbackFunc_o *v16; // x5
  const MethodInfo *v17; // x6

  if ( (byte_4D2B68A & 1) == 0 )
  {
    sub_1C93AD4(&MasterEquipIconComponent_CallbackFunc_TypeInfo);
    byte_4D2B68A = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (MasterEquipIconComponent_CallbackFunc_c *)v8->klass != MasterEquipIconComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MasterEquipIconComponent_o *)sub_1C940C8(v8);
  MasterEquipIconComponent__SetEquipInfo(v11, v12, v13, v14, v15, v16, v17);
}


void MasterEquipIconComponent_CallbackFunc___ctor(
        MasterEquipIconComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC0C60;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC0C00;
}


System_IAsyncResult_o *MasterEquipIconComponent_CallbackFunc__BeginInvoke(
        MasterEquipIconComponent_CallbackFunc_o *this,
        int32_t idx,
        int32_t equipId,
        int64_t userEquipId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v12; // [xsp+10h] [xbp-60h]
  int64_t v13; // [xsp+28h] [xbp-48h] BYREF
  int32_t v14; // [xsp+38h] [xbp-38h] BYREF
  int32_t v15; // [xsp+3Ch] [xbp-34h] BYREF

  v13 = userEquipId;
  v14 = equipId;
  v15 = idx;
  if ( (byte_4D2B690 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&long_TypeInfo);
    byte_4D2B690 = 1;
  }
  v12 = 0u;
  v11[0] = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  *(_QWORD *)&v12 = j_il2cpp_value_box_0(long_TypeInfo, &v13);
  return sub_1C93A88(this, v11, callback, object);
}


void MasterEquipIconComponent_CallbackFunc__EndInvoke(
        MasterEquipIconComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void MasterEquipIconComponent_CallbackFunc__Invoke(
        MasterEquipIconComponent_CallbackFunc_o *this,
        int32_t idx,
        int32_t equipId,
        int64_t userEquipId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, int64_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    idx,
    equipId,
    userEquipId,
    this->fields.method);
}